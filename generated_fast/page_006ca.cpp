#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69d(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a6(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6c9(u8* __restrict R,Cpu& c);
u32 body_6cb(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ca,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ca,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ca(u8* __restrict R,Cpu& c);
u32 page_6ca(Cpu& c){return body_6ca(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ca(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ca001:goto L6ca001;
case 0x6ca004:c.instructions+=9;goto B6ca004;
case 0x6ca006:c.instructions+=8;goto B6ca006;
case 0x6ca008:c.instructions+=7;goto B6ca008;
case 0x6ca00b:c.instructions+=6;goto B6ca00b;
case 0x6ca00e:c.instructions+=5;goto B6ca00e;
case 0x6ca00f:c.instructions+=4;goto B6ca00f;
case 0x6ca010:c.instructions+=3;goto B6ca010;
case 0x6ca011:c.instructions+=2;goto B6ca011;
case 0x6ca013:c.instructions+=1;goto B6ca013;
case 0x6ca018:goto L6ca018;
case 0x6ca01e:c.instructions+=6;goto B6ca01e;
case 0x6ca021:c.instructions+=5;goto B6ca021;
case 0x6ca024:c.instructions+=4;goto B6ca024;
case 0x6ca026:c.instructions+=3;goto B6ca026;
case 0x6ca02b:c.instructions+=2;goto B6ca02b;
case 0x6ca030:c.instructions+=1;goto B6ca030;
case 0x6ca032:goto L6ca032;
case 0x6ca035:c.instructions+=1;goto B6ca035;
case 0x6ca037:goto L6ca037;
case 0x6ca03c:c.instructions+=1;goto B6ca03c;
case 0x6ca03e:goto L6ca03e;
case 0x6ca044:c.instructions+=1;goto B6ca044;
case 0x6ca046:goto L6ca046;
case 0x6ca04b:c.instructions+=1;goto B6ca04b;
case 0x6ca04d:goto L6ca04d;
case 0x6ca053:c.instructions+=1;goto B6ca053;
case 0x6ca055:goto L6ca055;
case 0x6ca058:c.instructions+=3;goto B6ca058;
case 0x6ca05b:c.instructions+=2;goto B6ca05b;
case 0x6ca060:c.instructions+=1;goto B6ca060;
case 0x6ca062:goto L6ca062;
case 0x6ca067:c.instructions+=1;goto B6ca067;
case 0x6ca069:goto L6ca069;
case 0x6ca06f:c.instructions+=15;goto B6ca06f;
case 0x6ca070:c.instructions+=14;goto B6ca070;
case 0x6ca076:c.instructions+=13;goto B6ca076;
case 0x6ca079:c.instructions+=12;goto B6ca079;
case 0x6ca07b:c.instructions+=11;goto B6ca07b;
case 0x6ca07e:c.instructions+=10;goto B6ca07e;
case 0x6ca082:c.instructions+=9;goto B6ca082;
case 0x6ca085:c.instructions+=8;goto B6ca085;
case 0x6ca089:c.instructions+=7;goto B6ca089;
case 0x6ca08b:c.instructions+=6;goto B6ca08b;
case 0x6ca08e:c.instructions+=5;goto B6ca08e;
case 0x6ca08f:c.instructions+=4;goto B6ca08f;
case 0x6ca090:c.instructions+=3;goto B6ca090;
case 0x6ca091:c.instructions+=2;goto B6ca091;
case 0x6ca093:c.instructions+=1;goto B6ca093;
case 0x6ca098:goto L6ca098;
case 0x6ca09e:c.instructions+=2;goto B6ca09e;
case 0x6ca0a1:c.instructions+=1;goto B6ca0a1;
case 0x6ca0a3:goto L6ca0a3;
case 0x6ca0a6:c.instructions+=5;goto B6ca0a6;
case 0x6ca0a9:c.instructions+=4;goto B6ca0a9;
case 0x6ca0ab:c.instructions+=3;goto B6ca0ab;
case 0x6ca0b0:c.instructions+=2;goto B6ca0b0;
case 0x6ca0b5:c.instructions+=1;goto B6ca0b5;
case 0x6ca0b7:goto L6ca0b7;
case 0x6ca0bc:c.instructions+=1;goto B6ca0bc;
case 0x6ca0be:goto L6ca0be;
case 0x6ca0c0:c.instructions+=3;goto B6ca0c0;
case 0x6ca0c3:c.instructions+=2;goto B6ca0c3;
case 0x6ca0c6:c.instructions+=1;goto B6ca0c6;
case 0x6ca0c9:goto L6ca0c9;
case 0x6ca0cf:c.instructions+=3;goto B6ca0cf;
case 0x6ca0d5:c.instructions+=2;goto B6ca0d5;
case 0x6ca0d8:c.instructions+=1;goto B6ca0d8;
case 0x6ca0de:goto L6ca0de;
case 0x6ca0e0:goto L6ca0e0;
case 0x6ca0e1:c.instructions+=4;goto B6ca0e1;
case 0x6ca0e2:c.instructions+=3;goto B6ca0e2;
case 0x6ca0e3:c.instructions+=2;goto B6ca0e3;
case 0x6ca0e4:c.instructions+=1;goto B6ca0e4;
case 0x6ca0e7:goto L6ca0e7;
case 0x6ca0ec:c.instructions+=1;goto B6ca0ec;
case 0x6ca0ee:goto L6ca0ee;
case 0x6ca0f0:c.instructions+=10;goto B6ca0f0;
case 0x6ca0f1:c.instructions+=9;goto B6ca0f1;
case 0x6ca0f3:c.instructions+=8;goto B6ca0f3;
case 0x6ca0f6:c.instructions+=7;goto B6ca0f6;
case 0x6ca0f7:c.instructions+=6;goto B6ca0f7;
case 0x6ca0fa:c.instructions+=5;goto B6ca0fa;
case 0x6ca0fe:c.instructions+=4;goto B6ca0fe;
case 0x6ca0ff:c.instructions+=3;goto B6ca0ff;
case 0x6ca100:c.instructions+=2;goto B6ca100;
case 0x6ca102:c.instructions+=1;goto B6ca102;
case 0x6ca108:goto L6ca108;
case 0x6ca10b:c.instructions+=5;goto B6ca10b;
case 0x6ca10e:c.instructions+=4;goto B6ca10e;
case 0x6ca111:c.instructions+=3;goto B6ca111;
case 0x6ca114:c.instructions+=2;goto B6ca114;
case 0x6ca117:c.instructions+=1;goto B6ca117;
case 0x6ca119:goto L6ca119;
case 0x6ca11b:c.instructions+=1;goto B6ca11b;
case 0x6ca11d:goto L6ca11d;
case 0x6ca120:goto L6ca120;
case 0x6ca123:c.instructions+=7;goto B6ca123;
case 0x6ca125:c.instructions+=6;goto B6ca125;
case 0x6ca127:c.instructions+=5;goto B6ca127;
case 0x6ca12a:c.instructions+=4;goto B6ca12a;
case 0x6ca12b:c.instructions+=3;goto B6ca12b;
case 0x6ca12c:c.instructions+=2;goto B6ca12c;
case 0x6ca12e:c.instructions+=1;goto B6ca12e;
case 0x6ca133:goto L6ca133;
case 0x6ca136:c.instructions+=2;goto B6ca136;
case 0x6ca139:c.instructions+=1;goto B6ca139;
case 0x6ca13f:goto L6ca13f;
case 0x6ca143:c.instructions+=1;goto B6ca143;
case 0x6ca145:goto L6ca145;
case 0x6ca148:c.instructions+=8;goto B6ca148;
case 0x6ca149:c.instructions+=7;goto B6ca149;
case 0x6ca14a:c.instructions+=6;goto B6ca14a;
case 0x6ca14d:c.instructions+=5;goto B6ca14d;
case 0x6ca14f:c.instructions+=4;goto B6ca14f;
case 0x6ca152:c.instructions+=3;goto B6ca152;
case 0x6ca154:c.instructions+=2;goto B6ca154;
case 0x6ca155:c.instructions+=1;goto B6ca155;
case 0x6ca15a:goto L6ca15a;
case 0x6ca15d:c.instructions+=2;goto B6ca15d;
case 0x6ca160:c.instructions+=1;goto B6ca160;
case 0x6ca166:goto L6ca166;
case 0x6ca169:c.instructions+=6;goto B6ca169;
case 0x6ca16b:c.instructions+=5;goto B6ca16b;
case 0x6ca16e:c.instructions+=4;goto B6ca16e;
case 0x6ca171:c.instructions+=3;goto B6ca171;
case 0x6ca174:c.instructions+=2;goto B6ca174;
case 0x6ca175:c.instructions+=1;goto B6ca175;
case 0x6ca17a:goto L6ca17a;
case 0x6ca17f:goto L6ca17f;
case 0x6ca182:c.instructions+=5;goto B6ca182;
case 0x6ca186:c.instructions+=4;goto B6ca186;
case 0x6ca18a:c.instructions+=3;goto B6ca18a;
case 0x6ca18c:c.instructions+=2;goto B6ca18c;
case 0x6ca18f:c.instructions+=1;goto B6ca18f;
case 0x6ca191:goto L6ca191;
case 0x6ca194:c.instructions+=5;goto B6ca194;
case 0x6ca197:c.instructions+=4;goto B6ca197;
case 0x6ca19a:c.instructions+=3;goto B6ca19a;
case 0x6ca19d:c.instructions+=2;goto B6ca19d;
case 0x6ca1a0:c.instructions+=1;goto B6ca1a0;
case 0x6ca1a2:goto L6ca1a2;
case 0x6ca1a5:c.instructions+=2;goto B6ca1a5;
case 0x6ca1a8:c.instructions+=1;goto B6ca1a8;
case 0x6ca1aa:goto L6ca1aa;
case 0x6ca1ac:c.instructions+=1;goto B6ca1ac;
case 0x6ca1ae:goto L6ca1ae;
case 0x6ca1b2:c.instructions+=1;goto B6ca1b2;
case 0x6ca1b4:goto L6ca1b4;
case 0x6ca1b6:c.instructions+=1;goto B6ca1b6;
case 0x6ca1b8:goto L6ca1b8;
case 0x6ca1bb:c.instructions+=8;goto B6ca1bb;
case 0x6ca1bc:c.instructions+=7;goto B6ca1bc;
case 0x6ca1bd:c.instructions+=6;goto B6ca1bd;
case 0x6ca1c0:c.instructions+=5;goto B6ca1c0;
case 0x6ca1c2:c.instructions+=4;goto B6ca1c2;
case 0x6ca1c5:c.instructions+=3;goto B6ca1c5;
case 0x6ca1c7:c.instructions+=2;goto B6ca1c7;
case 0x6ca1ca:c.instructions+=1;goto B6ca1ca;
case 0x6ca1cf:goto L6ca1cf;
case 0x6ca1d2:c.instructions+=2;goto B6ca1d2;
case 0x6ca1d5:c.instructions+=1;goto B6ca1d5;
case 0x6ca1db:goto L6ca1db;
case 0x6ca1de:c.instructions+=5;goto B6ca1de;
case 0x6ca1e1:c.instructions+=4;goto B6ca1e1;
case 0x6ca1e2:c.instructions+=3;goto B6ca1e2;
case 0x6ca1e4:c.instructions+=2;goto B6ca1e4;
case 0x6ca1e7:c.instructions+=1;goto B6ca1e7;
case 0x6ca1ec:goto L6ca1ec;
case 0x6ca1ef:c.instructions+=5;goto B6ca1ef;
case 0x6ca1f2:c.instructions+=4;goto B6ca1f2;
case 0x6ca1f5:c.instructions+=3;goto B6ca1f5;
case 0x6ca1f8:c.instructions+=2;goto B6ca1f8;
case 0x6ca1fc:c.instructions+=1;goto B6ca1fc;
case 0x6ca1fe:goto L6ca1fe;
case 0x6ca205:goto L6ca205;
case 0x6ca208:c.instructions+=3;goto B6ca208;
case 0x6ca20b:c.instructions+=2;goto B6ca20b;
case 0x6ca20e:c.instructions+=1;goto B6ca20e;
case 0x6ca210:goto L6ca210;
case 0x6ca216:c.instructions+=2;goto B6ca216;
case 0x6ca218:c.instructions+=1;goto B6ca218;
case 0x6ca21e:goto L6ca21e;
case 0x6ca222:c.instructions+=1;goto B6ca222;
case 0x6ca228:goto L6ca228;
case 0x6ca22c:c.instructions+=1;goto B6ca22c;
case 0x6ca22e:goto L6ca22e;
case 0x6ca234:c.instructions+=1;goto B6ca234;
case 0x6ca236:goto L6ca236;
case 0x6ca23c:goto L6ca23c;
case 0x6ca23f:c.instructions+=2;goto B6ca23f;
case 0x6ca242:c.instructions+=1;goto B6ca242;
case 0x6ca248:goto L6ca248;
case 0x6ca24a:c.instructions+=3;goto B6ca24a;
case 0x6ca24d:c.instructions+=2;goto B6ca24d;
case 0x6ca250:c.instructions+=1;goto B6ca250;
case 0x6ca256:goto L6ca256;
case 0x6ca259:c.instructions+=4;goto B6ca259;
case 0x6ca25c:c.instructions+=3;goto B6ca25c;
case 0x6ca25f:c.instructions+=2;goto B6ca25f;
case 0x6ca262:c.instructions+=1;goto B6ca262;
case 0x6ca264:goto L6ca264;
case 0x6ca267:c.instructions+=2;goto B6ca267;
case 0x6ca26a:c.instructions+=1;goto B6ca26a;
case 0x6ca26c:goto L6ca26c;
case 0x6ca26e:c.instructions+=1;goto B6ca26e;
case 0x6ca270:goto L6ca270;
case 0x6ca274:c.instructions+=1;goto B6ca274;
case 0x6ca276:goto L6ca276;
case 0x6ca278:c.instructions+=1;goto B6ca278;
case 0x6ca27e:goto L6ca27e;
case 0x6ca281:c.instructions+=8;goto B6ca281;
case 0x6ca282:c.instructions+=7;goto B6ca282;
case 0x6ca283:c.instructions+=6;goto B6ca283;
case 0x6ca289:c.instructions+=5;goto B6ca289;
case 0x6ca28c:c.instructions+=4;goto B6ca28c;
case 0x6ca28e:c.instructions+=3;goto B6ca28e;
case 0x6ca291:c.instructions+=2;goto B6ca291;
case 0x6ca294:c.instructions+=1;goto B6ca294;
case 0x6ca299:goto L6ca299;
case 0x6ca29c:c.instructions+=2;goto B6ca29c;
case 0x6ca29f:c.instructions+=1;goto B6ca29f;
case 0x6ca2a5:goto L6ca2a5;
case 0x6ca2a8:c.instructions+=2;goto B6ca2a8;
case 0x6ca2ab:c.instructions+=1;goto B6ca2ab;
case 0x6ca2b1:goto L6ca2b1;
case 0x6ca2b7:c.instructions+=5;goto B6ca2b7;
case 0x6ca2ba:c.instructions+=4;goto B6ca2ba;
case 0x6ca2bd:c.instructions+=3;goto B6ca2bd;
case 0x6ca2c0:c.instructions+=2;goto B6ca2c0;
case 0x6ca2c3:c.instructions+=1;goto B6ca2c3;
case 0x6ca2c9:goto L6ca2c9;
case 0x6ca2cc:c.instructions+=6;goto B6ca2cc;
case 0x6ca2cf:c.instructions+=5;goto B6ca2cf;
case 0x6ca2d1:c.instructions+=4;goto B6ca2d1;
case 0x6ca2d7:c.instructions+=3;goto B6ca2d7;
case 0x6ca2dd:c.instructions+=2;goto B6ca2dd;
case 0x6ca2e0:c.instructions+=1;goto B6ca2e0;
case 0x6ca2e2:goto L6ca2e2;
case 0x6ca2e6:c.instructions+=2;goto B6ca2e6;
case 0x6ca2ea:c.instructions+=1;goto B6ca2ea;
case 0x6ca2ec:goto L6ca2ec;
case 0x6ca2ef:c.instructions+=1;goto B6ca2ef;
case 0x6ca2f1:goto L6ca2f1;
case 0x6ca2f4:goto L6ca2f4;
case 0x6ca2f7:c.instructions+=2;goto B6ca2f7;
case 0x6ca2f9:c.instructions+=1;goto B6ca2f9;
case 0x6ca2fb:goto L6ca2fb;
case 0x6ca2fe:c.instructions+=5;goto B6ca2fe;
case 0x6ca301:c.instructions+=4;goto B6ca301;
case 0x6ca304:c.instructions+=3;goto B6ca304;
case 0x6ca307:c.instructions+=2;goto B6ca307;
case 0x6ca30a:c.instructions+=1;goto B6ca30a;
case 0x6ca30c:goto L6ca30c;
case 0x6ca30f:c.instructions+=7;goto B6ca30f;
case 0x6ca312:c.instructions+=6;goto B6ca312;
case 0x6ca315:c.instructions+=5;goto B6ca315;
case 0x6ca317:c.instructions+=4;goto B6ca317;
case 0x6ca319:c.instructions+=3;goto B6ca319;
case 0x6ca31e:c.instructions+=2;goto B6ca31e;
case 0x6ca321:c.instructions+=1;goto B6ca321;
case 0x6ca326:goto L6ca326;
case 0x6ca329:c.instructions+=1;goto B6ca329;
case 0x6ca32b:goto L6ca32b;
case 0x6ca331:c.instructions+=5;goto B6ca331;
case 0x6ca334:c.instructions+=4;goto B6ca334;
case 0x6ca337:c.instructions+=3;goto B6ca337;
case 0x6ca33a:c.instructions+=2;goto B6ca33a;
case 0x6ca33c:c.instructions+=1;goto B6ca33c;
case 0x6ca341:goto L6ca341;
case 0x6ca344:c.instructions+=10;goto B6ca344;
case 0x6ca347:c.instructions+=9;goto B6ca347;
case 0x6ca34a:c.instructions+=8;goto B6ca34a;
case 0x6ca34c:c.instructions+=7;goto B6ca34c;
case 0x6ca34f:c.instructions+=6;goto B6ca34f;
case 0x6ca352:c.instructions+=5;goto B6ca352;
case 0x6ca354:c.instructions+=4;goto B6ca354;
case 0x6ca357:c.instructions+=3;goto B6ca357;
case 0x6ca35a:c.instructions+=2;goto B6ca35a;
case 0x6ca35d:c.instructions+=1;goto B6ca35d;
case 0x6ca360:goto L6ca360;
case 0x6ca363:c.instructions+=4;goto B6ca363;
case 0x6ca364:c.instructions+=3;goto B6ca364;
case 0x6ca367:c.instructions+=2;goto B6ca367;
case 0x6ca36a:c.instructions+=1;goto B6ca36a;
case 0x6ca370:goto L6ca370;
case 0x6ca373:c.instructions+=2;goto B6ca373;
case 0x6ca376:c.instructions+=1;goto B6ca376;
case 0x6ca378:goto L6ca378;
case 0x6ca37a:goto L6ca37a;
case 0x6ca37b:c.instructions+=4;goto B6ca37b;
case 0x6ca37c:c.instructions+=3;goto B6ca37c;
case 0x6ca37d:c.instructions+=2;goto B6ca37d;
case 0x6ca37e:c.instructions+=1;goto B6ca37e;
case 0x6ca381:goto L6ca381;
case 0x6ca386:c.instructions+=1;goto B6ca386;
case 0x6ca388:goto L6ca388;
case 0x6ca38a:c.instructions+=12;goto B6ca38a;
case 0x6ca38b:c.instructions+=11;goto B6ca38b;
case 0x6ca38d:c.instructions+=10;goto B6ca38d;
case 0x6ca390:c.instructions+=9;goto B6ca390;
case 0x6ca393:c.instructions+=8;goto B6ca393;
case 0x6ca394:c.instructions+=7;goto B6ca394;
case 0x6ca395:c.instructions+=6;goto B6ca395;
case 0x6ca396:c.instructions+=5;goto B6ca396;
case 0x6ca399:c.instructions+=4;goto B6ca399;
case 0x6ca39c:c.instructions+=3;goto B6ca39c;
case 0x6ca39e:c.instructions+=2;goto B6ca39e;
case 0x6ca3a0:c.instructions+=1;goto B6ca3a0;
case 0x6ca3a2:goto L6ca3a2;
case 0x6ca3a5:c.instructions+=6;goto B6ca3a5;
case 0x6ca3a8:c.instructions+=5;goto B6ca3a8;
case 0x6ca3ab:c.instructions+=4;goto B6ca3ab;
case 0x6ca3ac:c.instructions+=3;goto B6ca3ac;
case 0x6ca3ae:c.instructions+=2;goto B6ca3ae;
case 0x6ca3b0:c.instructions+=1;goto B6ca3b0;
case 0x6ca3b2:goto L6ca3b2;
case 0x6ca3b4:goto L6ca3b4;
case 0x6ca3b6:goto L6ca3b6;
case 0x6ca3b9:c.instructions+=6;goto B6ca3b9;
case 0x6ca3bc:c.instructions+=5;goto B6ca3bc;
case 0x6ca3bf:c.instructions+=4;goto B6ca3bf;
case 0x6ca3c0:c.instructions+=3;goto B6ca3c0;
case 0x6ca3c2:c.instructions+=2;goto B6ca3c2;
case 0x6ca3c4:c.instructions+=1;goto B6ca3c4;
case 0x6ca3c6:goto L6ca3c6;
case 0x6ca3c9:c.instructions+=7;goto B6ca3c9;
case 0x6ca3cc:c.instructions+=6;goto B6ca3cc;
case 0x6ca3cd:c.instructions+=5;goto B6ca3cd;
case 0x6ca3ce:c.instructions+=4;goto B6ca3ce;
case 0x6ca3d0:c.instructions+=3;goto B6ca3d0;
case 0x6ca3d1:c.instructions+=2;goto B6ca3d1;
case 0x6ca3d2:c.instructions+=1;goto B6ca3d2;
case 0x6ca3d5:goto L6ca3d5;
case 0x6ca3d7:c.instructions+=12;goto B6ca3d7;
case 0x6ca3d8:c.instructions+=11;goto B6ca3d8;
case 0x6ca3da:c.instructions+=10;goto B6ca3da;
case 0x6ca3dd:c.instructions+=9;goto B6ca3dd;
case 0x6ca3de:c.instructions+=8;goto B6ca3de;
case 0x6ca3e0:c.instructions+=7;goto B6ca3e0;
case 0x6ca3e1:c.instructions+=6;goto B6ca3e1;
case 0x6ca3e4:c.instructions+=5;goto B6ca3e4;
case 0x6ca3e5:c.instructions+=4;goto B6ca3e5;
case 0x6ca3e7:c.instructions+=3;goto B6ca3e7;
case 0x6ca3e9:c.instructions+=2;goto B6ca3e9;
case 0x6ca3ec:c.instructions+=1;goto B6ca3ec;
case 0x6ca3f2:goto L6ca3f2;
case 0x6ca3f5:c.instructions+=4;goto B6ca3f5;
case 0x6ca3f6:c.instructions+=3;goto B6ca3f6;
case 0x6ca3fa:c.instructions+=2;goto B6ca3fa;
case 0x6ca3fc:c.instructions+=1;goto B6ca3fc;
case 0x6ca401:goto L6ca401;
case 0x6ca403:c.instructions+=1;goto B6ca403;
case 0x6ca409:goto L6ca409;
case 0x6ca40b:c.instructions+=4;goto B6ca40b;
case 0x6ca40d:c.instructions+=3;goto B6ca40d;
case 0x6ca413:c.instructions+=2;goto B6ca413;
case 0x6ca419:c.instructions+=1;goto B6ca419;
case 0x6ca41f:goto L6ca41f;
case 0x6ca424:c.instructions+=3;goto B6ca424;
case 0x6ca426:c.instructions+=2;goto B6ca426;
case 0x6ca42b:c.instructions+=1;goto B6ca42b;
case 0x6ca431:goto L6ca431;
case 0x6ca434:c.instructions+=3;goto B6ca434;
case 0x6ca436:c.instructions+=2;goto B6ca436;
case 0x6ca439:c.instructions+=1;goto B6ca439;
case 0x6ca43f:goto L6ca43f;
case 0x6ca441:goto L6ca441;
case 0x6ca446:goto L6ca446;
case 0x6ca449:c.instructions+=4;goto B6ca449;
case 0x6ca44c:c.instructions+=3;goto B6ca44c;
case 0x6ca44f:c.instructions+=2;goto B6ca44f;
case 0x6ca452:c.instructions+=1;goto B6ca452;
case 0x6ca458:goto L6ca458;
case 0x6ca45a:c.instructions+=3;goto B6ca45a;
case 0x6ca45c:c.instructions+=2;goto B6ca45c;
case 0x6ca45e:c.instructions+=1;goto B6ca45e;
case 0x6ca464:goto L6ca464;
case 0x6ca469:c.instructions+=2;goto B6ca469;
case 0x6ca46e:c.instructions+=1;goto B6ca46e;
case 0x6ca474:goto L6ca474;
case 0x6ca47a:c.instructions+=1;goto B6ca47a;
case 0x6ca480:goto L6ca480;
case 0x6ca481:c.instructions+=4;goto B6ca481;
case 0x6ca482:c.instructions+=3;goto B6ca482;
case 0x6ca485:c.instructions+=2;goto B6ca485;
case 0x6ca487:c.instructions+=1;goto B6ca487;
case 0x6ca48c:goto L6ca48c;
case 0x6ca48e:c.instructions+=5;goto B6ca48e;
case 0x6ca492:c.instructions+=4;goto B6ca492;
case 0x6ca496:c.instructions+=3;goto B6ca496;
case 0x6ca498:c.instructions+=2;goto B6ca498;
case 0x6ca49d:c.instructions+=1;goto B6ca49d;
case 0x6ca49f:goto L6ca49f;
case 0x6ca4a6:goto L6ca4a6;
case 0x6ca4a9:c.instructions+=2;goto B6ca4a9;
case 0x6ca4ab:c.instructions+=1;goto B6ca4ab;
case 0x6ca4ad:goto L6ca4ad;
case 0x6ca4b0:c.instructions+=4;goto B6ca4b0;
case 0x6ca4b3:c.instructions+=3;goto B6ca4b3;
case 0x6ca4b6:c.instructions+=2;goto B6ca4b6;
case 0x6ca4b9:c.instructions+=1;goto B6ca4b9;
case 0x6ca4bc:goto L6ca4bc;
case 0x6ca4be:c.instructions+=4;goto B6ca4be;
case 0x6ca4c0:c.instructions+=3;goto B6ca4c0;
case 0x6ca4c3:c.instructions+=2;goto B6ca4c3;
case 0x6ca4c6:c.instructions+=1;goto B6ca4c6;
case 0x6ca4c8:goto L6ca4c8;
case 0x6ca4cb:c.instructions+=6;goto B6ca4cb;
case 0x6ca4ce:c.instructions+=5;goto B6ca4ce;
case 0x6ca4d1:c.instructions+=4;goto B6ca4d1;
case 0x6ca4d4:c.instructions+=3;goto B6ca4d4;
case 0x6ca4d7:c.instructions+=2;goto B6ca4d7;
case 0x6ca4da:c.instructions+=1;goto B6ca4da;
case 0x6ca4dc:goto L6ca4dc;
case 0x6ca4df:goto L6ca4df;
case 0x6ca4e2:c.instructions+=1;goto B6ca4e2;
case 0x6ca4e4:goto L6ca4e4;
case 0x6ca4eb:c.instructions+=1;goto B6ca4eb;
case 0x6ca4ed:goto L6ca4ed;
case 0x6ca4f4:goto L6ca4f4;
case 0x6ca4f7:c.instructions+=2;goto B6ca4f7;
case 0x6ca4fa:c.instructions+=1;goto B6ca4fa;
case 0x6ca4fc:goto L6ca4fc;
case 0x6ca4ff:goto L6ca4ff;
case 0x6ca502:c.instructions+=2;goto B6ca502;
case 0x6ca505:c.instructions+=1;goto B6ca505;
case 0x6ca50b:goto L6ca50b;
case 0x6ca50e:c.instructions+=2;goto B6ca50e;
case 0x6ca511:c.instructions+=1;goto B6ca511;
case 0x6ca517:goto L6ca517;
case 0x6ca51a:c.instructions+=4;goto B6ca51a;
case 0x6ca51b:c.instructions+=3;goto B6ca51b;
case 0x6ca51c:c.instructions+=2;goto B6ca51c;
case 0x6ca51e:c.instructions+=1;goto B6ca51e;
case 0x6ca523:goto L6ca523;
case 0x6ca525:c.instructions+=2;goto B6ca525;
case 0x6ca528:c.instructions+=1;goto B6ca528;
case 0x6ca52e:goto L6ca52e;
case 0x6ca532:c.instructions+=1;goto B6ca532;
case 0x6ca538:goto L6ca538;
case 0x6ca53b:c.instructions+=3;goto B6ca53b;
case 0x6ca53d:c.instructions+=2;goto B6ca53d;
case 0x6ca53e:c.instructions+=1;goto B6ca53e;
case 0x6ca543:goto L6ca543;
case 0x6ca545:c.instructions+=1;goto B6ca545;
case 0x6ca547:goto L6ca547;
case 0x6ca54a:c.instructions+=2;goto B6ca54a;
case 0x6ca54c:c.instructions+=1;goto B6ca54c;
case 0x6ca54e:goto L6ca54e;
case 0x6ca551:c.instructions+=3;goto B6ca551;
case 0x6ca554:c.instructions+=2;goto B6ca554;
case 0x6ca557:c.instructions+=1;goto B6ca557;
case 0x6ca55a:goto L6ca55a;
case 0x6ca55c:c.instructions+=6;goto B6ca55c;
case 0x6ca55f:c.instructions+=5;goto B6ca55f;
case 0x6ca562:c.instructions+=4;goto B6ca562;
case 0x6ca565:c.instructions+=3;goto B6ca565;
case 0x6ca568:c.instructions+=2;goto B6ca568;
case 0x6ca56c:c.instructions+=1;goto B6ca56c;
case 0x6ca56e:goto L6ca56e;
case 0x6ca575:c.instructions+=1;goto B6ca575;
case 0x6ca577:goto L6ca577;
case 0x6ca57e:goto L6ca57e;
case 0x6ca581:c.instructions+=2;goto B6ca581;
case 0x6ca584:c.instructions+=1;goto B6ca584;
case 0x6ca586:goto L6ca586;
case 0x6ca589:c.instructions+=2;goto B6ca589;
case 0x6ca58c:c.instructions+=1;goto B6ca58c;
case 0x6ca58e:goto L6ca58e;
case 0x6ca591:c.instructions+=2;goto B6ca591;
case 0x6ca594:c.instructions+=1;goto B6ca594;
case 0x6ca596:goto L6ca596;
case 0x6ca599:c.instructions+=5;goto B6ca599;
case 0x6ca59c:c.instructions+=4;goto B6ca59c;
case 0x6ca59f:c.instructions+=3;goto B6ca59f;
case 0x6ca5a2:c.instructions+=2;goto B6ca5a2;
case 0x6ca5a4:c.instructions+=1;goto B6ca5a4;
case 0x6ca5a7:goto L6ca5a7;
case 0x6ca5a9:goto L6ca5a9;
case 0x6ca5ab:c.instructions+=1;goto B6ca5ab;
case 0x6ca5ae:goto L6ca5ae;
case 0x6ca5b0:goto L6ca5b0;
case 0x6ca5b3:goto L6ca5b3;
case 0x6ca5b6:c.instructions+=1;goto B6ca5b6;
case 0x6ca5bc:goto L6ca5bc;
case 0x6ca5be:goto L6ca5be;
case 0x6ca5c2:goto L6ca5c2;
case 0x6ca5c5:c.instructions+=1;goto B6ca5c5;
case 0x6ca5c7:goto L6ca5c7;
case 0x6ca5c9:c.instructions+=1;goto B6ca5c9;
case 0x6ca5ca:goto L6ca5ca;
case 0x6ca5cb:goto L6ca5cb;
case 0x6ca5cc:c.instructions+=3;goto B6ca5cc;
case 0x6ca5cd:c.instructions+=2;goto B6ca5cd;
case 0x6ca5ce:c.instructions+=1;goto B6ca5ce;
case 0x6ca5d1:goto L6ca5d1;
case 0x6ca5d3:c.instructions+=8;goto B6ca5d3;
case 0x6ca5d4:c.instructions+=7;goto B6ca5d4;
case 0x6ca5d6:c.instructions+=6;goto B6ca5d6;
case 0x6ca5d7:c.instructions+=5;goto B6ca5d7;
case 0x6ca5d8:c.instructions+=4;goto B6ca5d8;
case 0x6ca5db:c.instructions+=3;goto B6ca5db;
case 0x6ca5dd:c.instructions+=2;goto B6ca5dd;
case 0x6ca5df:c.instructions+=1;goto B6ca5df;
case 0x6ca5e1:goto L6ca5e1;
case 0x6ca5e3:c.instructions+=2;goto B6ca5e3;
case 0x6ca5e4:c.instructions+=1;goto B6ca5e4;
case 0x6ca5e9:goto L6ca5e9;
case 0x6ca5ec:c.instructions+=4;goto B6ca5ec;
case 0x6ca5ed:c.instructions+=3;goto B6ca5ed;
case 0x6ca5f1:c.instructions+=2;goto B6ca5f1;
case 0x6ca5f3:c.instructions+=1;goto B6ca5f3;
case 0x6ca5f8:goto L6ca5f8;
case 0x6ca5fa:c.instructions+=1;goto B6ca5fa;
case 0x6ca600:goto L6ca600;
case 0x6ca602:c.instructions+=3;goto B6ca602;
case 0x6ca607:c.instructions+=2;goto B6ca607;
case 0x6ca60c:c.instructions+=1;goto B6ca60c;
case 0x6ca612:goto L6ca612;
case 0x6ca614:c.instructions+=2;goto B6ca614;
case 0x6ca617:c.instructions+=1;goto B6ca617;
case 0x6ca61d:goto L6ca61d;
case 0x6ca620:c.instructions+=5;goto B6ca620;
case 0x6ca623:c.instructions+=4;goto B6ca623;
case 0x6ca626:c.instructions+=3;goto B6ca626;
case 0x6ca629:c.instructions+=2;goto B6ca629;
case 0x6ca62c:c.instructions+=1;goto B6ca62c;
case 0x6ca632:goto L6ca632;
case 0x6ca634:c.instructions+=2;goto B6ca634;
case 0x6ca639:c.instructions+=1;goto B6ca639;
case 0x6ca63f:goto L6ca63f;
case 0x6ca644:c.instructions+=2;goto B6ca644;
case 0x6ca649:c.instructions+=1;goto B6ca649;
case 0x6ca64f:goto L6ca64f;
case 0x6ca651:c.instructions+=1;goto B6ca651;
case 0x6ca656:goto L6ca656;
case 0x6ca658:c.instructions+=1;goto B6ca658;
case 0x6ca65e:goto L6ca65e;
case 0x6ca65f:c.instructions+=4;goto B6ca65f;
case 0x6ca660:c.instructions+=3;goto B6ca660;
case 0x6ca663:c.instructions+=2;goto B6ca663;
case 0x6ca665:c.instructions+=1;goto B6ca665;
case 0x6ca66a:goto L6ca66a;
case 0x6ca66d:c.instructions+=5;goto B6ca66d;
case 0x6ca671:c.instructions+=4;goto B6ca671;
case 0x6ca675:c.instructions+=3;goto B6ca675;
case 0x6ca678:c.instructions+=2;goto B6ca678;
case 0x6ca67b:c.instructions+=1;goto B6ca67b;
case 0x6ca67d:goto L6ca67d;
case 0x6ca681:c.instructions+=1;goto B6ca681;
case 0x6ca683:goto L6ca683;
case 0x6ca686:c.instructions+=9;goto B6ca686;
case 0x6ca689:c.instructions+=8;goto B6ca689;
case 0x6ca68c:c.instructions+=7;goto B6ca68c;
case 0x6ca68e:c.instructions+=6;goto B6ca68e;
case 0x6ca690:c.instructions+=5;goto B6ca690;
case 0x6ca693:c.instructions+=4;goto B6ca693;
case 0x6ca696:c.instructions+=3;goto B6ca696;
case 0x6ca699:c.instructions+=2;goto B6ca699;
case 0x6ca69c:c.instructions+=1;goto B6ca69c;
case 0x6ca69e:goto L6ca69e;
case 0x6ca6a1:c.instructions+=2;goto B6ca6a1;
case 0x6ca6a4:c.instructions+=1;goto B6ca6a4;
case 0x6ca6a6:goto L6ca6a6;
case 0x6ca6a9:c.instructions+=4;goto B6ca6a9;
case 0x6ca6ac:c.instructions+=3;goto B6ca6ac;
case 0x6ca6ad:c.instructions+=2;goto B6ca6ad;
case 0x6ca6af:c.instructions+=1;goto B6ca6af;
case 0x6ca6b4:goto L6ca6b4;
case 0x6ca6b8:c.instructions+=1;goto B6ca6b8;
case 0x6ca6ba:goto L6ca6ba;
case 0x6ca6bc:c.instructions+=2;goto B6ca6bc;
case 0x6ca6bf:c.instructions+=1;goto B6ca6bf;
case 0x6ca6c4:goto L6ca6c4;
case 0x6ca6c6:c.instructions+=1;goto B6ca6c6;
case 0x6ca6c8:goto L6ca6c8;
case 0x6ca6cc:c.instructions+=1;goto B6ca6cc;
case 0x6ca6ce:goto L6ca6ce;
case 0x6ca6d0:c.instructions+=3;goto B6ca6d0;
case 0x6ca6d3:c.instructions+=2;goto B6ca6d3;
case 0x6ca6d5:c.instructions+=1;goto B6ca6d5;
case 0x6ca6da:goto L6ca6da;
case 0x6ca6dc:c.instructions+=1;goto B6ca6dc;
case 0x6ca6de:goto L6ca6de;
case 0x6ca6e1:c.instructions+=4;goto B6ca6e1;
case 0x6ca6e2:c.instructions+=3;goto B6ca6e2;
case 0x6ca6e5:c.instructions+=2;goto B6ca6e5;
case 0x6ca6e7:c.instructions+=1;goto B6ca6e7;
case 0x6ca6ec:goto L6ca6ec;
case 0x6ca6ed:c.instructions+=3;goto B6ca6ed;
case 0x6ca6ee:c.instructions+=2;goto B6ca6ee;
case 0x6ca6f1:c.instructions+=1;goto B6ca6f1;
case 0x6ca6f6:goto L6ca6f6;
case 0x6ca6fa:c.instructions+=1;goto B6ca6fa;
case 0x6ca700:goto L6ca700;
case 0x6ca702:c.instructions+=1;goto B6ca702;
case 0x6ca703:goto L6ca703;
case 0x6ca704:goto L6ca704;
case 0x6ca705:c.instructions+=3;goto B6ca705;
case 0x6ca706:c.instructions+=2;goto B6ca706;
case 0x6ca707:c.instructions+=1;goto B6ca707;
case 0x6ca70a:goto L6ca70a;
case 0x6ca70c:c.instructions+=1;goto B6ca70c;
case 0x6ca70e:goto L6ca70e;
case 0x6ca710:c.instructions+=7;goto B6ca710;
case 0x6ca711:c.instructions+=6;goto B6ca711;
case 0x6ca713:c.instructions+=5;goto B6ca713;
case 0x6ca719:c.instructions+=4;goto B6ca719;
case 0x6ca71a:c.instructions+=3;goto B6ca71a;
case 0x6ca71c:c.instructions+=2;goto B6ca71c;
case 0x6ca723:c.instructions+=1;goto B6ca723;
case 0x6ca725:goto L6ca725;
case 0x6ca727:c.instructions+=2;goto B6ca727;
case 0x6ca728:c.instructions+=1;goto B6ca728;
case 0x6ca72d:goto L6ca72d;
case 0x6ca72e:c.instructions+=2;goto B6ca72e;
case 0x6ca730:c.instructions+=1;goto B6ca730;
case 0x6ca735:goto L6ca735;
case 0x6ca737:c.instructions+=2;goto B6ca737;
case 0x6ca739:c.instructions+=1;goto B6ca739;
case 0x6ca73f:goto L6ca73f;
case 0x6ca741:c.instructions+=1;goto B6ca741;
case 0x6ca746:goto L6ca746;
case 0x6ca748:c.instructions+=1;goto B6ca748;
case 0x6ca74e:goto L6ca74e;
case 0x6ca74f:c.instructions+=9;goto B6ca74f;
case 0x6ca752:c.instructions+=8;goto B6ca752;
case 0x6ca754:c.instructions+=7;goto B6ca754;
case 0x6ca757:c.instructions+=6;goto B6ca757;
case 0x6ca75a:c.instructions+=5;goto B6ca75a;
case 0x6ca75d:c.instructions+=4;goto B6ca75d;
case 0x6ca75e:c.instructions+=3;goto B6ca75e;
case 0x6ca760:c.instructions+=2;goto B6ca760;
case 0x6ca764:c.instructions+=1;goto B6ca764;
case 0x6ca76a:goto L6ca76a;
case 0x6ca76c:goto L6ca76c;
case 0x6ca76e:c.instructions+=3;goto B6ca76e;
case 0x6ca76f:c.instructions+=2;goto B6ca76f;
case 0x6ca775:c.instructions+=1;goto B6ca775;
case 0x6ca778:goto L6ca778;
case 0x6ca77a:goto L6ca77a;
case 0x6ca780:goto L6ca780;
case 0x6ca783:c.instructions+=2;goto B6ca783;
case 0x6ca785:c.instructions+=1;goto B6ca785;
case 0x6ca787:goto L6ca787;
case 0x6ca788:c.instructions+=5;goto B6ca788;
case 0x6ca78e:c.instructions+=4;goto B6ca78e;
case 0x6ca794:c.instructions+=3;goto B6ca794;
case 0x6ca795:c.instructions+=2;goto B6ca795;
case 0x6ca797:c.instructions+=1;goto B6ca797;
case 0x6ca79c:goto L6ca79c;
case 0x6ca79e:c.instructions+=2;goto B6ca79e;
case 0x6ca7a0:c.instructions+=1;goto B6ca7a0;
case 0x6ca7a6:goto L6ca7a6;
case 0x6ca7a8:c.instructions+=4;goto B6ca7a8;
case 0x6ca7ae:c.instructions+=3;goto B6ca7ae;
case 0x6ca7af:c.instructions+=2;goto B6ca7af;
case 0x6ca7b1:c.instructions+=1;goto B6ca7b1;
case 0x6ca7b6:goto L6ca7b6;
case 0x6ca7b8:c.instructions+=3;goto B6ca7b8;
case 0x6ca7ba:c.instructions+=2;goto B6ca7ba;
case 0x6ca7bd:c.instructions+=1;goto B6ca7bd;
case 0x6ca7c0:goto L6ca7c0;
case 0x6ca7c3:c.instructions+=7;goto B6ca7c3;
case 0x6ca7c4:c.instructions+=6;goto B6ca7c4;
case 0x6ca7c5:c.instructions+=5;goto B6ca7c5;
case 0x6ca7cb:c.instructions+=4;goto B6ca7cb;
case 0x6ca7d1:c.instructions+=3;goto B6ca7d1;
case 0x6ca7d2:c.instructions+=2;goto B6ca7d2;
case 0x6ca7d4:c.instructions+=1;goto B6ca7d4;
case 0x6ca7d9:goto L6ca7d9;
case 0x6ca7db:c.instructions+=1;goto B6ca7db;
case 0x6ca7dd:goto L6ca7dd;
case 0x6ca7df:c.instructions+=4;goto B6ca7df;
case 0x6ca7e5:c.instructions+=3;goto B6ca7e5;
case 0x6ca7e6:c.instructions+=2;goto B6ca7e6;
case 0x6ca7e8:c.instructions+=1;goto B6ca7e8;
case 0x6ca7ed:goto L6ca7ed;
case 0x6ca7ef:c.instructions+=1;goto B6ca7ef;
case 0x6ca7f1:goto L6ca7f1;
case 0x6ca7f7:c.instructions+=3;goto B6ca7f7;
case 0x6ca7f8:c.instructions+=2;goto B6ca7f8;
case 0x6ca7fa:c.instructions+=1;goto B6ca7fa;
case 0x6ca7ff:goto L6ca7ff;
case 0x6ca802:c.instructions+=5;goto B6ca802;
case 0x6ca808:c.instructions+=4;goto B6ca808;
case 0x6ca80e:c.instructions+=3;goto B6ca80e;
case 0x6ca810:c.instructions+=2;goto B6ca810;
case 0x6ca811:c.instructions+=1;goto B6ca811;
case 0x6ca816:goto L6ca816;
case 0x6ca818:c.instructions+=2;goto B6ca818;
case 0x6ca81a:c.instructions+=1;goto B6ca81a;
case 0x6ca81c:goto L6ca81c;
case 0x6ca81e:c.instructions+=4;goto B6ca81e;
case 0x6ca824:c.instructions+=3;goto B6ca824;
case 0x6ca825:c.instructions+=2;goto B6ca825;
case 0x6ca827:c.instructions+=1;goto B6ca827;
case 0x6ca82c:goto L6ca82c;
case 0x6ca82e:c.instructions+=2;goto B6ca82e;
case 0x6ca830:c.instructions+=1;goto B6ca830;
case 0x6ca832:goto L6ca832;
case 0x6ca838:c.instructions+=1;goto B6ca838;
case 0x6ca83e:goto L6ca83e;
case 0x6ca840:c.instructions+=2;goto B6ca840;
case 0x6ca841:c.instructions+=1;goto B6ca841;
case 0x6ca846:goto L6ca846;
case 0x6ca849:c.instructions+=3;goto B6ca849;
case 0x6ca84a:c.instructions+=2;goto B6ca84a;
case 0x6ca84d:c.instructions+=1;goto B6ca84d;
case 0x6ca852:goto L6ca852;
case 0x6ca854:c.instructions+=3;goto B6ca854;
case 0x6ca855:c.instructions+=2;goto B6ca855;
case 0x6ca858:c.instructions+=1;goto B6ca858;
case 0x6ca85a:goto L6ca85a;
case 0x6ca85f:c.instructions+=1;goto B6ca85f;
case 0x6ca864:goto L6ca864;
case 0x6ca865:c.instructions+=1;goto B6ca865;
case 0x6ca86a:goto L6ca86a;
case 0x6ca86c:c.instructions+=4;goto B6ca86c;
case 0x6ca86e:c.instructions+=3;goto B6ca86e;
case 0x6ca86f:c.instructions+=2;goto B6ca86f;
case 0x6ca872:c.instructions+=1;goto B6ca872;
case 0x6ca874:goto L6ca874;
case 0x6ca876:c.instructions+=3;goto B6ca876;
case 0x6ca879:c.instructions+=2;goto B6ca879;
case 0x6ca87b:c.instructions+=1;goto B6ca87b;
case 0x6ca87e:goto L6ca87e;
case 0x6ca880:goto L6ca880;
case 0x6ca883:c.instructions+=2;goto B6ca883;
case 0x6ca885:c.instructions+=1;goto B6ca885;
case 0x6ca888:goto L6ca888;
case 0x6ca88a:goto L6ca88a;
case 0x6ca88d:c.instructions+=4;goto B6ca88d;
case 0x6ca890:c.instructions+=3;goto B6ca890;
case 0x6ca893:c.instructions+=2;goto B6ca893;
case 0x6ca895:c.instructions+=1;goto B6ca895;
case 0x6ca898:goto L6ca898;
case 0x6ca89a:goto L6ca89a;
case 0x6ca89c:c.instructions+=1;goto B6ca89c;
case 0x6ca89f:goto L6ca89f;
case 0x6ca8a1:goto L6ca8a1;
case 0x6ca8a3:c.instructions+=2;goto B6ca8a3;
case 0x6ca8a5:c.instructions+=1;goto B6ca8a5;
case 0x6ca8a7:goto L6ca8a7;
case 0x6ca8aa:c.instructions+=6;goto B6ca8aa;
case 0x6ca8ad:c.instructions+=5;goto B6ca8ad;
case 0x6ca8b3:c.instructions+=4;goto B6ca8b3;
case 0x6ca8b7:c.instructions+=3;goto B6ca8b7;
case 0x6ca8b8:c.instructions+=2;goto B6ca8b8;
case 0x6ca8ba:c.instructions+=1;goto B6ca8ba;
case 0x6ca8bc:goto L6ca8bc;
case 0x6ca8bf:c.instructions+=3;goto B6ca8bf;
case 0x6ca8c1:c.instructions+=2;goto B6ca8c1;
case 0x6ca8c4:c.instructions+=1;goto B6ca8c4;
case 0x6ca8ca:goto L6ca8ca;
case 0x6ca8cd:c.instructions+=6;goto B6ca8cd;
case 0x6ca8d0:c.instructions+=5;goto B6ca8d0;
case 0x6ca8d6:c.instructions+=4;goto B6ca8d6;
case 0x6ca8d8:c.instructions+=3;goto B6ca8d8;
case 0x6ca8dd:c.instructions+=2;goto B6ca8dd;
case 0x6ca8df:c.instructions+=1;goto B6ca8df;
case 0x6ca8e5:goto L6ca8e5;
case 0x6ca8ea:c.instructions+=2;goto B6ca8ea;
case 0x6ca8ef:c.instructions+=1;goto B6ca8ef;
case 0x6ca8f5:goto L6ca8f5;
case 0x6ca8fa:goto L6ca8fa;
case 0x6ca8fc:c.instructions+=1;goto B6ca8fc;
case 0x6ca902:goto L6ca902;
case 0x6ca908:c.instructions+=4;goto B6ca908;
case 0x6ca90a:c.instructions+=3;goto B6ca90a;
case 0x6ca90c:c.instructions+=2;goto B6ca90c;
case 0x6ca912:c.instructions+=1;goto B6ca912;
case 0x6ca918:goto L6ca918;
case 0x6ca919:c.instructions+=4;goto B6ca919;
case 0x6ca91a:c.instructions+=3;goto B6ca91a;
case 0x6ca91d:c.instructions+=2;goto B6ca91d;
case 0x6ca91f:c.instructions+=1;goto B6ca91f;
case 0x6ca924:goto L6ca924;
case 0x6ca928:c.instructions+=1;goto B6ca928;
case 0x6ca92e:goto L6ca92e;
case 0x6ca934:c.instructions+=7;goto B6ca934;
case 0x6ca936:c.instructions+=6;goto B6ca936;
case 0x6ca938:c.instructions+=5;goto B6ca938;
case 0x6ca93a:c.instructions+=4;goto B6ca93a;
case 0x6ca940:c.instructions+=3;goto B6ca940;
case 0x6ca943:c.instructions+=2;goto B6ca943;
case 0x6ca946:c.instructions+=1;goto B6ca946;
case 0x6ca948:goto L6ca948;
case 0x6ca94f:goto L6ca94f;
case 0x6ca952:c.instructions+=1;goto B6ca952;
case 0x6ca954:goto L6ca954;
case 0x6ca957:c.instructions+=7;goto B6ca957;
case 0x6ca95d:c.instructions+=6;goto B6ca95d;
case 0x6ca960:c.instructions+=5;goto B6ca960;
case 0x6ca963:c.instructions+=4;goto B6ca963;
case 0x6ca966:c.instructions+=3;goto B6ca966;
case 0x6ca969:c.instructions+=2;goto B6ca969;
case 0x6ca96c:c.instructions+=1;goto B6ca96c;
case 0x6ca96f:goto L6ca96f;
case 0x6ca971:c.instructions+=3;goto B6ca971;
case 0x6ca973:c.instructions+=2;goto B6ca973;
case 0x6ca976:c.instructions+=1;goto B6ca976;
case 0x6ca978:goto L6ca978;
case 0x6ca97e:c.instructions+=2;goto B6ca97e;
case 0x6ca981:c.instructions+=1;goto B6ca981;
case 0x6ca983:goto L6ca983;
case 0x6ca986:c.instructions+=5;goto B6ca986;
case 0x6ca989:c.instructions+=4;goto B6ca989;
case 0x6ca98c:c.instructions+=3;goto B6ca98c;
case 0x6ca98f:c.instructions+=2;goto B6ca98f;
case 0x6ca992:c.instructions+=1;goto B6ca992;
case 0x6ca994:goto L6ca994;
case 0x6ca997:goto L6ca997;
case 0x6ca99a:c.instructions+=1;goto B6ca99a;
case 0x6ca99c:goto L6ca99c;
case 0x6ca9a3:c.instructions+=1;goto B6ca9a3;
case 0x6ca9a5:goto L6ca9a5;
case 0x6ca9ac:goto L6ca9ac;
case 0x6ca9af:c.instructions+=2;goto B6ca9af;
case 0x6ca9b2:c.instructions+=1;goto B6ca9b2;
case 0x6ca9b4:goto L6ca9b4;
case 0x6ca9b6:c.instructions+=2;goto B6ca9b6;
case 0x6ca9b9:c.instructions+=1;goto B6ca9b9;
case 0x6ca9bb:goto L6ca9bb;
case 0x6ca9bd:c.instructions+=2;goto B6ca9bd;
case 0x6ca9be:c.instructions+=1;goto B6ca9be;
case 0x6ca9c0:goto L6ca9c0;
case 0x6ca9c3:c.instructions+=1;goto B6ca9c3;
case 0x6ca9c5:goto L6ca9c5;
case 0x6ca9c7:c.instructions+=1;goto B6ca9c7;
case 0x6ca9c9:goto L6ca9c9;
case 0x6ca9cc:c.instructions+=6;goto B6ca9cc;
case 0x6ca9d2:c.instructions+=5;goto B6ca9d2;
case 0x6ca9d5:c.instructions+=4;goto B6ca9d5;
case 0x6ca9d7:c.instructions+=3;goto B6ca9d7;
case 0x6ca9da:c.instructions+=2;goto B6ca9da;
case 0x6ca9db:c.instructions+=1;goto B6ca9db;
case 0x6ca9e0:goto L6ca9e0;
case 0x6ca9e2:goto L6ca9e2;
case 0x6ca9e5:c.instructions+=9;goto B6ca9e5;
case 0x6ca9eb:c.instructions+=8;goto B6ca9eb;
case 0x6ca9ec:c.instructions+=7;goto B6ca9ec;
case 0x6ca9ef:c.instructions+=6;goto B6ca9ef;
case 0x6ca9f1:c.instructions+=5;goto B6ca9f1;
case 0x6ca9f4:c.instructions+=4;goto B6ca9f4;
case 0x6ca9f5:c.instructions+=3;goto B6ca9f5;
case 0x6ca9fb:c.instructions+=2;goto B6ca9fb;
case 0x6ca9fc:c.instructions+=1;goto B6ca9fc;
case 0x6caa01:goto L6caa01;
case 0x6caa03:c.instructions+=2;goto B6caa03;
case 0x6caa05:c.instructions+=1;goto B6caa05;
case 0x6caa07:goto L6caa07;
case 0x6caa09:goto L6caa09;
case 0x6caa0c:c.instructions+=5;goto B6caa0c;
case 0x6caa0f:c.instructions+=4;goto B6caa0f;
case 0x6caa12:c.instructions+=3;goto B6caa12;
case 0x6caa14:c.instructions+=2;goto B6caa14;
case 0x6caa17:c.instructions+=1;goto B6caa17;
case 0x6caa1a:goto L6caa1a;
case 0x6caa1c:goto L6caa1c;
case 0x6caa1e:c.instructions+=1;goto B6caa1e;
case 0x6caa21:goto L6caa21;
case 0x6caa23:goto L6caa23;
case 0x6caa26:c.instructions+=3;goto B6caa26;
case 0x6caa27:c.instructions+=2;goto B6caa27;
case 0x6caa2a:c.instructions+=1;goto B6caa2a;
case 0x6caa30:goto L6caa30;
case 0x6caa32:goto L6caa32;
case 0x6caa36:c.instructions+=2;goto B6caa36;
case 0x6caa37:c.instructions+=1;goto B6caa37;
case 0x6caa39:goto L6caa39;
case 0x6caa3f:c.instructions+=3;goto B6caa3f;
case 0x6caa40:c.instructions+=2;goto B6caa40;
case 0x6caa42:c.instructions+=1;goto B6caa42;
case 0x6caa47:goto L6caa47;
case 0x6caa4b:c.instructions+=1;goto B6caa4b;
case 0x6caa4d:goto L6caa4d;
case 0x6caa53:c.instructions+=3;goto B6caa53;
case 0x6caa54:c.instructions+=2;goto B6caa54;
case 0x6caa56:c.instructions+=1;goto B6caa56;
case 0x6caa5b:goto L6caa5b;
case 0x6caa5e:c.instructions+=1;goto B6caa5e;
case 0x6caa63:goto L6caa63;
case 0x6caa66:c.instructions+=1;goto B6caa66;
case 0x6caa6b:goto L6caa6b;
case 0x6caa6c:c.instructions+=2;goto B6caa6c;
case 0x6caa6d:c.instructions+=1;goto B6caa6d;
case 0x6caa6f:goto L6caa6f;
case 0x6caa70:goto L6caa70;
case 0x6caa71:c.instructions+=2;goto B6caa71;
case 0x6caa72:c.instructions+=1;goto B6caa72;
case 0x6caa73:goto L6caa73;
case 0x6caa75:c.instructions+=5;goto B6caa75;
case 0x6caa76:c.instructions+=4;goto B6caa76;
case 0x6caa78:c.instructions+=3;goto B6caa78;
case 0x6caa7b:c.instructions+=2;goto B6caa7b;
case 0x6caa80:c.instructions+=1;goto B6caa80;
case 0x6caa82:goto L6caa82;
case 0x6caa87:c.instructions+=1;goto B6caa87;
case 0x6caa89:goto L6caa89;
case 0x6caa8e:c.instructions+=1;goto B6caa8e;
case 0x6caa90:goto L6caa90;
case 0x6caa95:c.instructions+=1;goto B6caa95;
case 0x6caa97:goto L6caa97;
case 0x6caa9c:c.instructions+=1;goto B6caa9c;
case 0x6caa9e:goto L6caa9e;
case 0x6caaa0:c.instructions+=1;goto B6caaa0;
case 0x6caaa2:goto L6caaa2;
case 0x6caaa4:c.instructions+=1;goto B6caaa4;
case 0x6caaa5:goto L6caaa5;
case 0x6caaa6:c.instructions+=1;goto B6caaa6;
case 0x6caaa9:goto L6caaa9;
case 0x6caaab:c.instructions+=5;goto B6caaab;
case 0x6caaac:c.instructions+=4;goto B6caaac;
case 0x6caaae:c.instructions+=3;goto B6caaae;
case 0x6caab1:c.instructions+=2;goto B6caab1;
case 0x6caab6:c.instructions+=1;goto B6caab6;
case 0x6caab8:goto L6caab8;
case 0x6caabd:c.instructions+=1;goto B6caabd;
case 0x6caabf:goto L6caabf;
case 0x6caac4:c.instructions+=1;goto B6caac4;
case 0x6caac6:goto L6caac6;
case 0x6caacb:c.instructions+=1;goto B6caacb;
case 0x6caacd:goto L6caacd;
case 0x6caad2:c.instructions+=1;goto B6caad2;
case 0x6caad4:goto L6caad4;
case 0x6caad6:c.instructions+=1;goto B6caad6;
case 0x6caad8:goto L6caad8;
case 0x6caada:c.instructions+=1;goto B6caada;
case 0x6caadb:goto L6caadb;
case 0x6caadc:c.instructions+=1;goto B6caadc;
case 0x6caadf:goto L6caadf;
case 0x6caae1:c.instructions+=19;goto B6caae1;
case 0x6caae2:c.instructions+=18;goto B6caae2;
case 0x6caae4:c.instructions+=17;goto B6caae4;
case 0x6caae7:c.instructions+=16;goto B6caae7;
case 0x6caaeb:c.instructions+=15;goto B6caaeb;
case 0x6caaec:c.instructions+=14;goto B6caaec;
case 0x6caaed:c.instructions+=13;goto B6caaed;
case 0x6caaee:c.instructions+=12;goto B6caaee;
case 0x6caaf1:c.instructions+=11;goto B6caaf1;
case 0x6caaf3:c.instructions+=10;goto B6caaf3;
case 0x6caaf5:c.instructions+=9;goto B6caaf5;
case 0x6caaf7:c.instructions+=8;goto B6caaf7;
case 0x6caafc:c.instructions+=7;goto B6caafc;
case 0x6caafe:c.instructions+=6;goto B6caafe;
case 0x6cab04:c.instructions+=5;goto B6cab04;
case 0x6cab08:c.instructions+=4;goto B6cab08;
case 0x6cab0a:c.instructions+=3;goto B6cab0a;
case 0x6cab0d:c.instructions+=2;goto B6cab0d;
case 0x6cab10:c.instructions+=1;goto B6cab10;
case 0x6cab16:goto L6cab16;
case 0x6cab1c:c.instructions+=1;goto B6cab1c;
case 0x6cab1e:goto L6cab1e;
case 0x6cab24:c.instructions+=1;goto B6cab24;
case 0x6cab26:goto L6cab26;
case 0x6cab2c:c.instructions+=1;goto B6cab2c;
case 0x6cab2e:goto L6cab2e;
case 0x6cab34:c.instructions+=1;goto B6cab34;
case 0x6cab36:goto L6cab36;
case 0x6cab3c:c.instructions+=1;goto B6cab3c;
case 0x6cab42:goto L6cab42;
case 0x6cab44:c.instructions+=2;goto B6cab44;
case 0x6cab4a:c.instructions+=1;goto B6cab4a;
case 0x6cab4f:goto L6cab4f;
case 0x6cab51:c.instructions+=2;goto B6cab51;
case 0x6cab57:c.instructions+=1;goto B6cab57;
case 0x6cab5c:goto L6cab5c;
case 0x6cab5e:c.instructions+=2;goto B6cab5e;
case 0x6cab64:c.instructions+=1;goto B6cab64;
case 0x6cab69:goto L6cab69;
case 0x6cab6b:c.instructions+=2;goto B6cab6b;
case 0x6cab71:c.instructions+=1;goto B6cab71;
case 0x6cab76:goto L6cab76;
case 0x6cab79:c.instructions+=13;goto B6cab79;
case 0x6cab7b:c.instructions+=12;goto B6cab7b;
case 0x6cab7d:c.instructions+=11;goto B6cab7d;
case 0x6cab80:c.instructions+=10;goto B6cab80;
case 0x6cab82:c.instructions+=9;goto B6cab82;
case 0x6cab85:c.instructions+=8;goto B6cab85;
case 0x6cab88:c.instructions+=7;goto B6cab88;
case 0x6cab8b:c.instructions+=6;goto B6cab8b;
case 0x6cab8e:c.instructions+=5;goto B6cab8e;
case 0x6cab90:c.instructions+=4;goto B6cab90;
case 0x6cab96:c.instructions+=3;goto B6cab96;
case 0x6cab9c:c.instructions+=2;goto B6cab9c;
case 0x6cab9f:c.instructions+=1;goto B6cab9f;
case 0x6caba1:goto L6caba1;
case 0x6caba3:c.instructions+=2;goto B6caba3;
case 0x6caba5:c.instructions+=1;goto B6caba5;
case 0x6caba7:goto L6caba7;
case 0x6caba9:c.instructions+=2;goto B6caba9;
case 0x6cabaa:c.instructions+=1;goto B6cabaa;
case 0x6cabaf:goto L6cabaf;
case 0x6cabb1:c.instructions+=3;goto B6cabb1;
case 0x6cabb2:c.instructions+=2;goto B6cabb2;
case 0x6cabb3:c.instructions+=1;goto B6cabb3;
case 0x6cabb5:goto L6cabb5;
case 0x6cabb7:c.instructions+=2;goto B6cabb7;
case 0x6cabb9:c.instructions+=1;goto B6cabb9;
case 0x6cabbe:goto L6cabbe;
case 0x6cabc0:c.instructions+=3;goto B6cabc0;
case 0x6cabc1:c.instructions+=2;goto B6cabc1;
case 0x6cabc2:c.instructions+=1;goto B6cabc2;
case 0x6cabc4:goto L6cabc4;
case 0x6cabc6:c.instructions+=2;goto B6cabc6;
case 0x6cabc8:c.instructions+=1;goto B6cabc8;
case 0x6cabcd:goto L6cabcd;
case 0x6cabcf:c.instructions+=3;goto B6cabcf;
case 0x6cabd0:c.instructions+=2;goto B6cabd0;
case 0x6cabd1:c.instructions+=1;goto B6cabd1;
case 0x6cabd3:goto L6cabd3;
case 0x6cabd5:c.instructions+=2;goto B6cabd5;
case 0x6cabd7:c.instructions+=1;goto B6cabd7;
case 0x6cabdc:goto L6cabdc;
case 0x6cabde:c.instructions+=3;goto B6cabde;
case 0x6cabdf:c.instructions+=2;goto B6cabdf;
case 0x6cabe0:c.instructions+=1;goto B6cabe0;
case 0x6cabe2:goto L6cabe2;
case 0x6cabe6:c.instructions+=1;goto B6cabe6;
case 0x6cabe8:goto L6cabe8;
case 0x6cabeb:goto L6cabeb;
case 0x6cabee:c.instructions+=6;goto B6cabee;
case 0x6cabf1:c.instructions+=5;goto B6cabf1;
case 0x6cabf3:c.instructions+=4;goto B6cabf3;
case 0x6cabf6:c.instructions+=3;goto B6cabf6;
case 0x6cabf9:c.instructions+=2;goto B6cabf9;
case 0x6cabfd:c.instructions+=1;goto B6cabfd;
case 0x6cac03:goto L6cac03;
case 0x6cac05:goto L6cac05;
case 0x6cac08:goto L6cac08;
case 0x6cac0e:c.instructions+=1;goto B6cac0e;
case 0x6cac13:goto L6cac13;
case 0x6cac19:c.instructions+=1;goto B6cac19;
case 0x6cac1b:goto L6cac1b;
case 0x6cac21:c.instructions+=1;goto B6cac21;
case 0x6cac23:goto L6cac23;
case 0x6cac29:c.instructions+=1;goto B6cac29;
case 0x6cac2b:goto L6cac2b;
case 0x6cac31:c.instructions+=1;goto B6cac31;
case 0x6cac33:goto L6cac33;
case 0x6cac39:c.instructions+=1;goto B6cac39;
case 0x6cac3f:goto L6cac3f;
case 0x6cac41:c.instructions+=2;goto B6cac41;
case 0x6cac47:c.instructions+=1;goto B6cac47;
case 0x6cac4c:goto L6cac4c;
case 0x6cac4e:c.instructions+=2;goto B6cac4e;
case 0x6cac54:c.instructions+=1;goto B6cac54;
case 0x6cac59:goto L6cac59;
case 0x6cac5b:c.instructions+=2;goto B6cac5b;
case 0x6cac61:c.instructions+=1;goto B6cac61;
case 0x6cac66:goto L6cac66;
case 0x6cac68:c.instructions+=2;goto B6cac68;
case 0x6cac6e:c.instructions+=1;goto B6cac6e;
case 0x6cac73:goto L6cac73;
case 0x6cac76:c.instructions+=13;goto B6cac76;
case 0x6cac78:c.instructions+=12;goto B6cac78;
case 0x6cac7a:c.instructions+=11;goto B6cac7a;
case 0x6cac7d:c.instructions+=10;goto B6cac7d;
case 0x6cac7f:c.instructions+=9;goto B6cac7f;
case 0x6cac82:c.instructions+=8;goto B6cac82;
case 0x6cac85:c.instructions+=7;goto B6cac85;
case 0x6cac88:c.instructions+=6;goto B6cac88;
case 0x6cac8b:c.instructions+=5;goto B6cac8b;
case 0x6cac8d:c.instructions+=4;goto B6cac8d;
case 0x6cac93:c.instructions+=3;goto B6cac93;
case 0x6cac99:c.instructions+=2;goto B6cac99;
case 0x6cac9c:c.instructions+=1;goto B6cac9c;
case 0x6cac9e:goto L6cac9e;
case 0x6caca0:c.instructions+=2;goto B6caca0;
case 0x6caca2:c.instructions+=1;goto B6caca2;
case 0x6caca4:goto L6caca4;
case 0x6caca6:c.instructions+=2;goto B6caca6;
case 0x6caca7:c.instructions+=1;goto B6caca7;
case 0x6cacac:goto L6cacac;
case 0x6cacae:c.instructions+=3;goto B6cacae;
case 0x6cacaf:c.instructions+=2;goto B6cacaf;
case 0x6cacb0:c.instructions+=1;goto B6cacb0;
case 0x6cacb2:goto L6cacb2;
case 0x6cacb4:c.instructions+=2;goto B6cacb4;
case 0x6cacb6:c.instructions+=1;goto B6cacb6;
case 0x6cacbb:goto L6cacbb;
case 0x6cacbd:c.instructions+=3;goto B6cacbd;
case 0x6cacbe:c.instructions+=2;goto B6cacbe;
case 0x6cacbf:c.instructions+=1;goto B6cacbf;
case 0x6cacc1:goto L6cacc1;
case 0x6cacc3:c.instructions+=2;goto B6cacc3;
case 0x6cacc5:c.instructions+=1;goto B6cacc5;
case 0x6cacca:goto L6cacca;
case 0x6caccc:c.instructions+=3;goto B6caccc;
case 0x6caccd:c.instructions+=2;goto B6caccd;
case 0x6cacce:c.instructions+=1;goto B6cacce;
case 0x6cacd0:goto L6cacd0;
case 0x6cacd2:c.instructions+=2;goto B6cacd2;
case 0x6cacd4:c.instructions+=1;goto B6cacd4;
case 0x6cacd9:goto L6cacd9;
case 0x6cacdb:c.instructions+=3;goto B6cacdb;
case 0x6cacdc:c.instructions+=2;goto B6cacdc;
case 0x6cacdd:c.instructions+=1;goto B6cacdd;
case 0x6cacdf:goto L6cacdf;
case 0x6cace3:c.instructions+=1;goto B6cace3;
case 0x6cace5:goto L6cace5;
case 0x6cace8:goto L6cace8;
case 0x6caceb:c.instructions+=6;goto B6caceb;
case 0x6cacee:c.instructions+=5;goto B6cacee;
case 0x6cacf0:c.instructions+=4;goto B6cacf0;
case 0x6cacf3:c.instructions+=3;goto B6cacf3;
case 0x6cacf6:c.instructions+=2;goto B6cacf6;
case 0x6cacfa:c.instructions+=1;goto B6cacfa;
case 0x6cacfc:goto L6cacfc;
case 0x6cacfe:goto L6cacfe;
case 0x6cad01:goto L6cad01;
case 0x6cad07:goto L6cad07;
case 0x6cad09:c.instructions+=1;goto B6cad09;
case 0x6cad10:goto L6cad10;
case 0x6cad12:c.instructions+=1;goto B6cad12;
case 0x6cad17:goto L6cad17;
case 0x6cad19:c.instructions+=1;goto B6cad19;
case 0x6cad1b:goto L6cad1b;
case 0x6cad1d:c.instructions+=1;goto B6cad1d;
case 0x6cad22:goto L6cad22;
case 0x6cad24:c.instructions+=2;goto B6cad24;
case 0x6cad27:c.instructions+=1;goto B6cad27;
case 0x6cad29:goto L6cad29;
case 0x6cad2d:c.instructions+=1;goto B6cad2d;
case 0x6cad30:goto L6cad30;
case 0x6cad32:c.instructions+=2;goto B6cad32;
case 0x6cad34:c.instructions+=1;goto B6cad34;
case 0x6cad3a:goto L6cad3a;
case 0x6cad41:c.instructions+=1;goto B6cad41;
case 0x6cad43:goto L6cad43;
case 0x6cad46:c.instructions+=1;goto B6cad46;
case 0x6cad48:goto L6cad48;
case 0x6cad49:c.instructions+=3;goto B6cad49;
case 0x6cad4c:c.instructions+=2;goto B6cad4c;
case 0x6cad4f:c.instructions+=1;goto B6cad4f;
case 0x6cad51:goto L6cad51;
case 0x6cad52:c.instructions+=4;goto B6cad52;
case 0x6cad55:c.instructions+=3;goto B6cad55;
case 0x6cad56:c.instructions+=2;goto B6cad56;
case 0x6cad58:c.instructions+=1;goto B6cad58;
case 0x6cad59:goto L6cad59;
case 0x6cad5b:c.instructions+=2;goto B6cad5b;
case 0x6cad5c:c.instructions+=1;goto B6cad5c;
case 0x6cad61:goto L6cad61;
case 0x6cad63:c.instructions+=2;goto B6cad63;
case 0x6cad65:c.instructions+=1;goto B6cad65;
case 0x6cad6b:goto L6cad6b;
case 0x6cad6e:c.instructions+=2;goto B6cad6e;
case 0x6cad6f:c.instructions+=1;goto B6cad6f;
case 0x6cad74:goto L6cad74;
case 0x6cad76:c.instructions+=1;goto B6cad76;
case 0x6cad78:goto L6cad78;
case 0x6cad7a:c.instructions+=1;goto B6cad7a;
case 0x6cad7f:goto L6cad7f;
case 0x6cad81:c.instructions+=2;goto B6cad81;
case 0x6cad84:c.instructions+=1;goto B6cad84;
case 0x6cad86:goto L6cad86;
case 0x6cad89:c.instructions+=5;goto B6cad89;
case 0x6cad8c:c.instructions+=4;goto B6cad8c;
case 0x6cad8f:c.instructions+=3;goto B6cad8f;
case 0x6cad92:c.instructions+=2;goto B6cad92;
case 0x6cad94:c.instructions+=1;goto B6cad94;
case 0x6cad97:goto L6cad97;
case 0x6cad99:goto L6cad99;
case 0x6cad9b:c.instructions+=1;goto B6cad9b;
case 0x6cad9e:goto L6cad9e;
case 0x6cada0:goto L6cada0;
case 0x6cada3:c.instructions+=2;goto B6cada3;
case 0x6cada6:c.instructions+=1;goto B6cada6;
case 0x6cada8:goto L6cada8;
case 0x6cada9:c.instructions+=8;goto B6cada9;
case 0x6cadab:c.instructions+=7;goto B6cadab;
case 0x6cadac:c.instructions+=6;goto B6cadac;
case 0x6cadaf:c.instructions+=5;goto B6cadaf;
case 0x6cadb0:c.instructions+=4;goto B6cadb0;
case 0x6cadb1:c.instructions+=3;goto B6cadb1;
case 0x6cadb7:c.instructions+=2;goto B6cadb7;
case 0x6cadb9:c.instructions+=1;goto B6cadb9;
case 0x6cadbe:goto L6cadbe;
case 0x6cadc1:c.instructions+=4;goto B6cadc1;
case 0x6cadc3:c.instructions+=3;goto B6cadc3;
case 0x6cadc6:c.instructions+=2;goto B6cadc6;
case 0x6cadc9:c.instructions+=1;goto B6cadc9;
case 0x6cadcf:goto L6cadcf;
case 0x6cadd2:c.instructions+=10;goto B6cadd2;
case 0x6cadd5:c.instructions+=9;goto B6cadd5;
case 0x6cadd8:c.instructions+=8;goto B6cadd8;
case 0x6cadda:c.instructions+=7;goto B6cadda;
case 0x6caddc:c.instructions+=6;goto B6caddc;
case 0x6caddf:c.instructions+=5;goto B6caddf;
case 0x6cade2:c.instructions+=4;goto B6cade2;
case 0x6cade5:c.instructions+=3;goto B6cade5;
case 0x6cade8:c.instructions+=2;goto B6cade8;
case 0x6cadeb:c.instructions+=1;goto B6cadeb;
case 0x6cadee:goto L6cadee;
case 0x6cadf1:c.instructions+=5;goto B6cadf1;
case 0x6cadf4:c.instructions+=4;goto B6cadf4;
case 0x6cadf7:c.instructions+=3;goto B6cadf7;
case 0x6cadfa:c.instructions+=2;goto B6cadfa;
case 0x6cadfc:c.instructions+=1;goto B6cadfc;
case 0x6cadff:goto L6cadff;
case 0x6cae01:goto L6cae01;
case 0x6cae03:c.instructions+=3;goto B6cae03;
case 0x6cae06:c.instructions+=2;goto B6cae06;
case 0x6cae08:c.instructions+=1;goto B6cae08;
case 0x6cae0b:goto L6cae0b;
case 0x6cae0d:goto L6cae0d;
case 0x6cae0f:goto L6cae0f;
case 0x6cae12:c.instructions+=2;goto B6cae12;
case 0x6cae15:c.instructions+=1;goto B6cae15;
case 0x6cae17:goto L6cae17;
case 0x6cae1a:c.instructions+=2;goto B6cae1a;
case 0x6cae1d:c.instructions+=1;goto B6cae1d;
case 0x6cae20:goto L6cae20;
case 0x6cae22:c.instructions+=4;goto B6cae22;
case 0x6cae25:c.instructions+=3;goto B6cae25;
case 0x6cae28:c.instructions+=2;goto B6cae28;
case 0x6cae2c:c.instructions+=1;goto B6cae2c;
case 0x6cae2e:goto L6cae2e;
case 0x6cae31:c.instructions+=2;goto B6cae31;
case 0x6cae34:c.instructions+=1;goto B6cae34;
case 0x6cae36:goto L6cae36;
case 0x6cae37:c.instructions+=1;goto B6cae37;
case 0x6cae3a:goto L6cae3a;
case 0x6cae3d:c.instructions+=2;goto B6cae3d;
case 0x6cae3e:c.instructions+=1;goto B6cae3e;
case 0x6cae40:goto L6cae40;
case 0x6cae47:c.instructions+=1;goto B6cae47;
case 0x6cae49:goto L6cae49;
case 0x6cae4a:c.instructions+=8;goto B6cae4a;
case 0x6cae4c:c.instructions+=7;goto B6cae4c;
case 0x6cae4d:c.instructions+=6;goto B6cae4d;
case 0x6cae50:c.instructions+=5;goto B6cae50;
case 0x6cae52:c.instructions+=4;goto B6cae52;
case 0x6cae55:c.instructions+=3;goto B6cae55;
case 0x6cae57:c.instructions+=2;goto B6cae57;
case 0x6cae5a:c.instructions+=1;goto B6cae5a;
case 0x6cae5f:goto L6cae5f;
case 0x6cae65:goto L6cae65;
case 0x6cae6b:c.instructions+=2;goto B6cae6b;
case 0x6cae6e:c.instructions+=1;goto B6cae6e;
case 0x6cae70:goto L6cae70;
case 0x6cae73:goto L6cae73;
case 0x6cae75:c.instructions+=1;goto B6cae75;
case 0x6cae7a:goto L6cae7a;
case 0x6cae7c:c.instructions+=1;goto B6cae7c;
case 0x6cae7e:goto L6cae7e;
case 0x6cae81:c.instructions+=2;goto B6cae81;
case 0x6cae84:c.instructions+=1;goto B6cae84;
case 0x6cae87:goto L6cae87;
case 0x6cae8a:goto L6cae8a;
case 0x6cae8b:c.instructions+=4;goto B6cae8b;
case 0x6cae8c:c.instructions+=3;goto B6cae8c;
case 0x6cae8d:c.instructions+=2;goto B6cae8d;
case 0x6cae8e:c.instructions+=1;goto B6cae8e;
case 0x6cae91:goto L6cae91;
case 0x6cae93:c.instructions+=7;goto B6cae93;
case 0x6cae94:c.instructions+=6;goto B6cae94;
case 0x6cae96:c.instructions+=5;goto B6cae96;
case 0x6cae99:c.instructions+=4;goto B6cae99;
case 0x6cae9a:c.instructions+=3;goto B6cae9a;
case 0x6cae9b:c.instructions+=2;goto B6cae9b;
case 0x6cae9c:c.instructions+=1;goto B6cae9c;
case 0x6cae9e:goto L6cae9e;
case 0x6caea0:c.instructions+=4;goto B6caea0;
case 0x6caea3:c.instructions+=3;goto B6caea3;
case 0x6caea6:c.instructions+=2;goto B6caea6;
case 0x6caea9:c.instructions+=1;goto B6caea9;
case 0x6caeaf:goto L6caeaf;
case 0x6caeb2:c.instructions+=2;goto B6caeb2;
case 0x6caeb5:c.instructions+=1;goto B6caeb5;
case 0x6caeba:goto L6caeba;
case 0x6caebc:c.instructions+=1;goto B6caebc;
case 0x6caec2:goto L6caec2;
case 0x6caec5:c.instructions+=4;goto B6caec5;
case 0x6caec8:c.instructions+=3;goto B6caec8;
case 0x6caecf:c.instructions+=2;goto B6caecf;
case 0x6caed2:c.instructions+=1;goto B6caed2;
case 0x6caed8:goto L6caed8;
case 0x6caedb:c.instructions+=3;goto B6caedb;
case 0x6caede:c.instructions+=2;goto B6caede;
case 0x6caee0:c.instructions+=1;goto B6caee0;
case 0x6caee5:goto L6caee5;
case 0x6caee7:c.instructions+=1;goto B6caee7;
case 0x6caeed:goto L6caeed;
case 0x6caeef:c.instructions+=3;goto B6caeef;
case 0x6caef4:c.instructions+=2;goto B6caef4;
case 0x6caef9:c.instructions+=1;goto B6caef9;
case 0x6caefb:goto L6caefb;
case 0x6caefe:c.instructions+=2;goto B6caefe;
case 0x6caf00:c.instructions+=1;goto B6caf00;
case 0x6caf02:goto L6caf02;
case 0x6caf05:c.instructions+=5;goto B6caf05;
case 0x6caf08:c.instructions+=4;goto B6caf08;
case 0x6caf0b:c.instructions+=3;goto B6caf0b;
case 0x6caf0e:c.instructions+=2;goto B6caf0e;
case 0x6caf10:c.instructions+=1;goto B6caf10;
case 0x6caf13:goto L6caf13;
case 0x6caf16:c.instructions+=7;goto B6caf16;
case 0x6caf19:c.instructions+=6;goto B6caf19;
case 0x6caf1c:c.instructions+=5;goto B6caf1c;
case 0x6caf1e:c.instructions+=4;goto B6caf1e;
case 0x6caf21:c.instructions+=3;goto B6caf21;
case 0x6caf24:c.instructions+=2;goto B6caf24;
case 0x6caf27:c.instructions+=1;goto B6caf27;
case 0x6caf29:goto L6caf29;
case 0x6caf2c:c.instructions+=2;goto B6caf2c;
case 0x6caf2f:c.instructions+=1;goto B6caf2f;
case 0x6caf31:goto L6caf31;
case 0x6caf34:c.instructions+=2;goto B6caf34;
case 0x6caf37:c.instructions+=1;goto B6caf37;
case 0x6caf39:goto L6caf39;
case 0x6caf3c:c.instructions+=2;goto B6caf3c;
case 0x6caf3f:c.instructions+=1;goto B6caf3f;
case 0x6caf41:goto L6caf41;
case 0x6caf44:c.instructions+=2;goto B6caf44;
case 0x6caf47:c.instructions+=1;goto B6caf47;
case 0x6caf49:goto L6caf49;
case 0x6caf4c:c.instructions+=2;goto B6caf4c;
case 0x6caf4f:c.instructions+=1;goto B6caf4f;
case 0x6caf51:goto L6caf51;
case 0x6caf55:goto L6caf55;
case 0x6caf59:c.instructions+=2;goto B6caf59;
case 0x6caf5c:c.instructions+=1;goto B6caf5c;
case 0x6caf5e:goto L6caf5e;
case 0x6caf61:goto L6caf61;
case 0x6caf62:c.instructions+=3;goto B6caf62;
case 0x6caf65:c.instructions+=2;goto B6caf65;
case 0x6caf68:c.instructions+=1;goto B6caf68;
case 0x6caf6e:goto L6caf6e;
case 0x6caf70:goto L6caf70;
case 0x6caf74:goto L6caf74;
case 0x6caf78:c.instructions+=2;goto B6caf78;
case 0x6caf7b:c.instructions+=1;goto B6caf7b;
case 0x6caf7d:goto L6caf7d;
case 0x6caf80:c.instructions+=3;goto B6caf80;
case 0x6caf87:c.instructions+=2;goto B6caf87;
case 0x6caf89:c.instructions+=1;goto B6caf89;
case 0x6caf8b:goto L6caf8b;
case 0x6caf8e:c.instructions+=2;goto B6caf8e;
case 0x6caf91:c.instructions+=1;goto B6caf91;
case 0x6caf96:goto L6caf96;
case 0x6caf98:c.instructions+=1;goto B6caf98;
case 0x6caf9a:goto L6caf9a;
case 0x6caf9d:c.instructions+=5;goto B6caf9d;
case 0x6cafa0:c.instructions+=4;goto B6cafa0;
case 0x6cafa3:c.instructions+=3;goto B6cafa3;
case 0x6cafa4:c.instructions+=2;goto B6cafa4;
case 0x6cafa7:c.instructions+=1;goto B6cafa7;
case 0x6cafa9:goto L6cafa9;
case 0x6cafaa:c.instructions+=3;goto B6cafaa;
case 0x6cafad:c.instructions+=2;goto B6cafad;
case 0x6cafb0:c.instructions+=1;goto B6cafb0;
case 0x6cafb6:goto L6cafb6;
case 0x6cafba:c.instructions+=1;goto B6cafba;
case 0x6cafc0:goto L6cafc0;
case 0x6cafc1:c.instructions+=5;goto B6cafc1;
case 0x6cafc2:c.instructions+=4;goto B6cafc2;
case 0x6cafc4:c.instructions+=3;goto B6cafc4;
case 0x6cafc5:c.instructions+=2;goto B6cafc5;
case 0x6cafc6:c.instructions+=1;goto B6cafc6;
case 0x6cafc7:goto L6cafc7;
case 0x6cafc9:c.instructions+=13;goto B6cafc9;
case 0x6cafca:c.instructions+=12;goto B6cafca;
case 0x6cafcc:c.instructions+=11;goto B6cafcc;
case 0x6cafd2:c.instructions+=10;goto B6cafd2;
case 0x6cafd5:c.instructions+=9;goto B6cafd5;
case 0x6cafd7:c.instructions+=8;goto B6cafd7;
case 0x6cafda:c.instructions+=7;goto B6cafda;
case 0x6cafdb:c.instructions+=6;goto B6cafdb;
case 0x6cafdc:c.instructions+=5;goto B6cafdc;
case 0x6cafdd:c.instructions+=4;goto B6cafdd;
case 0x6cafdf:c.instructions+=3;goto B6cafdf;
case 0x6cafe2:c.instructions+=2;goto B6cafe2;
case 0x6cafe5:c.instructions+=1;goto B6cafe5;
case 0x6cafeb:goto L6cafeb;
case 0x6cafed:c.instructions+=6;goto B6cafed;
case 0x6caff0:c.instructions+=5;goto B6caff0;
case 0x6caff3:c.instructions+=4;goto B6caff3;
case 0x6caff5:c.instructions+=3;goto B6caff5;
case 0x6caff7:c.instructions+=2;goto B6caff7;
case 0x6caffd:c.instructions+=1;goto B6caffd;
default:missing_instruction(c.pc);}
B6ca001:L6ca001:{c.instructions+=10;NFSU2_TR(0x6ca001);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ca004:{NFSU2_TR(0x6ca004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ca006:{NFSU2_TR(0x6ca006);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca008:{NFSU2_TR(0x6ca008);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca00b:{NFSU2_TR(0x6ca00b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca00e:{NFSU2_TR(0x6ca00e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca00f:{NFSU2_TR(0x6ca00f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca010:{NFSU2_TR(0x6ca010);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca011:{NFSU2_TR(0x6ca011);
__builtin_memmove((R+4),(R+24),4);
}
B6ca013:{NFSU2_TR(0x6ca013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca018ull));
TAIL_STATIC(0x6c9ee0u,6c9);
}
B6ca018:L6ca018:{c.instructions+=7;NFSU2_TR(0x6ca018);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca01e:{NFSU2_TR(0x6ca01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca021:{NFSU2_TR(0x6ca021);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ca024:{NFSU2_TR(0x6ca024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ca026:{NFSU2_TR(0x6ca026);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ca02b:{NFSU2_TR(0x6ca02b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca030:{NFSU2_TR(0x6ca030);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca037;}}
}
B6ca032:L6ca032:{c.instructions+=2;NFSU2_TR(0x6ca032);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6ca035:{NFSU2_TR(0x6ca035);
{goto L6ca098;}
}
B6ca037:L6ca037:{c.instructions+=2;NFSU2_TR(0x6ca037);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca03c:{NFSU2_TR(0x6ca03c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca046;}}
}
B6ca03e:L6ca03e:{c.instructions+=2;NFSU2_TR(0x6ca03e);
u8 U[4];
w4(U+0,u32(0x73200001ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6ca044:{NFSU2_TR(0x6ca044);
{goto L6ca098;}
}
B6ca046:L6ca046:{c.instructions+=2;NFSU2_TR(0x6ca046);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca04b:{NFSU2_TR(0x6ca04b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca098;}}
}
B6ca04d:L6ca04d:{c.instructions+=2;NFSU2_TR(0x6ca04d);
u8 U[4];
w4(U+0,u32(0x73000001ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6ca053:{NFSU2_TR(0x6ca053);
{goto L6ca098;}
}
B6ca055:L6ca055:{c.instructions+=4;NFSU2_TR(0x6ca055);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ca058:{NFSU2_TR(0x6ca058);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca05b:{NFSU2_TR(0x6ca05b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca060:{NFSU2_TR(0x6ca060);
if(r1(R+518)){{goto L6ca069;}}
}
B6ca062:L6ca062:{c.instructions+=2;NFSU2_TR(0x6ca062);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca067:{NFSU2_TR(0x6ca067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca098;}}
}
B6ca069:L6ca069:{c.instructions+=16;NFSU2_TR(0x6ca069);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca06f:{NFSU2_TR(0x6ca06f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ca070:{NFSU2_TR(0x6ca070);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca076:{NFSU2_TR(0x6ca076);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca079:{NFSU2_TR(0x6ca079);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ca07b:{NFSU2_TR(0x6ca07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca07e:{NFSU2_TR(0x6ca07e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ca082:{NFSU2_TR(0x6ca082);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca085:{NFSU2_TR(0x6ca085);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ca089:{NFSU2_TR(0x6ca089);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca08b:{NFSU2_TR(0x6ca08b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ca08e:{NFSU2_TR(0x6ca08e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca08f:{NFSU2_TR(0x6ca08f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca090:{NFSU2_TR(0x6ca090);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca091:{NFSU2_TR(0x6ca091);
__builtin_memmove((R+4),(R+24),4);
}
B6ca093:{NFSU2_TR(0x6ca093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca098ull));
TAIL_STATIC(0x6c9ee0u,6c9);
}
B6ca098:L6ca098:{c.instructions+=3;NFSU2_TR(0x6ca098);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca09e:{NFSU2_TR(0x6ca09e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B6ca0a1:{NFSU2_TR(0x6ca0a1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ca0e7;}}
}
B6ca0a3:L6ca0a3:{c.instructions+=6;NFSU2_TR(0x6ca0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca0a6:{NFSU2_TR(0x6ca0a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ca0a9:{NFSU2_TR(0x6ca0a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ca0ab:{NFSU2_TR(0x6ca0ab);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ca0b0:{NFSU2_TR(0x6ca0b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca0b5:{NFSU2_TR(0x6ca0b5);
if(r1(R+518)){{goto L6ca0be;}}
}
B6ca0b7:L6ca0b7:{c.instructions+=2;NFSU2_TR(0x6ca0b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca0bc:{NFSU2_TR(0x6ca0bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca0c9;}}
}
B6ca0be:L6ca0be:{c.instructions+=4;NFSU2_TR(0x6ca0be);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ca0c0:{NFSU2_TR(0x6ca0c0);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6ca0c3:{NFSU2_TR(0x6ca0c3);
__builtin_memmove((R+0),(R+518),1);
}
B6ca0c6:{NFSU2_TR(0x6ca0c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ca0c9:L6ca0c9:{c.instructions+=4;NFSU2_TR(0x6ca0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca0cf:{NFSU2_TR(0x6ca0cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca0d5:{NFSU2_TR(0x6ca0d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ca0d8:{NFSU2_TR(0x6ca0d8);
if(r1(R+512)){TAIL_STATIC(0x6c9f11u,6c9);}
}
B6ca0de:L6ca0de:{c.instructions+=1;NFSU2_TR(0x6ca0de);
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
B6ca0e0:L6ca0e0:{c.instructions+=5;NFSU2_TR(0x6ca0e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ca0e1:{NFSU2_TR(0x6ca0e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ca0e2:{NFSU2_TR(0x6ca0e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ca0e3:{NFSU2_TR(0x6ca0e3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ca0e4:{NFSU2_TR(0x6ca0e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ca0e7:L6ca0e7:{c.instructions+=2;NFSU2_TR(0x6ca0e7);
w4(R+0,u32(0x80004005ull));
}
B6ca0ec:{NFSU2_TR(0x6ca0ec);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca0e0u);}goto L6ca0e0;}
}
B6ca0ee:L6ca0ee:{c.instructions+=11;NFSU2_TR(0x6ca0ee);
__builtin_memmove((R+28),(R+28),4);
}
B6ca0f0:{NFSU2_TR(0x6ca0f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca0f1:{NFSU2_TR(0x6ca0f1);
__builtin_memmove((R+20),(R+16),4);
}
B6ca0f3:{NFSU2_TR(0x6ca0f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6ca0f6:{NFSU2_TR(0x6ca0f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca0f7:{NFSU2_TR(0x6ca0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ca0fa:{NFSU2_TR(0x6ca0fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca0fe:{NFSU2_TR(0x6ca0fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca0ff:{NFSU2_TR(0x6ca0ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca100:{NFSU2_TR(0x6ca100);
__builtin_memmove((R+24),(R+4),4);
}
B6ca102:{NFSU2_TR(0x6ca102);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca370;}}
}
B6ca108:L6ca108:{c.instructions+=6;NFSU2_TR(0x6ca108);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca10b:{NFSU2_TR(0x6ca10b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca10e:{NFSU2_TR(0x6ca10e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ca111:{NFSU2_TR(0x6ca111);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca114:{NFSU2_TR(0x6ca114);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ca117:{NFSU2_TR(0x6ca117);
if(r1(R+518)){{goto L6ca11d;}}
}
B6ca119:L6ca119:{c.instructions+=2;NFSU2_TR(0x6ca119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ca11b:{NFSU2_TR(0x6ca11b);
{goto L6ca120;}
}
B6ca11d:L6ca11d:{c.instructions+=1;NFSU2_TR(0x6ca11d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca120:L6ca120:{c.instructions+=8;NFSU2_TR(0x6ca120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B6ca123:{NFSU2_TR(0x6ca123);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca125:{NFSU2_TR(0x6ca125);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca127:{NFSU2_TR(0x6ca127);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x40ull))));
}
B6ca12a:{NFSU2_TR(0x6ca12a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca12b:{NFSU2_TR(0x6ca12b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca12c:{NFSU2_TR(0x6ca12c);
__builtin_memmove((R+4),(R+24),4);
}
B6ca12e:{NFSU2_TR(0x6ca12e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca133ull));
TAIL_STATIC(0x699be0u,699);
}
B6ca133:L6ca133:{c.instructions+=3;NFSU2_TR(0x6ca133);
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
B6ca136:{NFSU2_TR(0x6ca136);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca139:{NFSU2_TR(0x6ca139);
if(r1(R+518)){{goto L6ca381;}}
}
B6ca13f:L6ca13f:{c.instructions+=2;NFSU2_TR(0x6ca13f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ca143:{NFSU2_TR(0x6ca143);
if(r1(R+518)){{goto L6ca17f;}}
}
B6ca145:L6ca145:{c.instructions+=9;NFSU2_TR(0x6ca145);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6ca148:{NFSU2_TR(0x6ca148);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca149:{NFSU2_TR(0x6ca149);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca14a:{NFSU2_TR(0x6ca14a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ca14d:{NFSU2_TR(0x6ca14d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca14f:{NFSU2_TR(0x6ca14f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca152:{NFSU2_TR(0x6ca152);
__builtin_memmove((R+4),(R+24),4);
}
B6ca154:{NFSU2_TR(0x6ca154);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca155:{NFSU2_TR(0x6ca155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca15aull));
TAIL_STATIC(0x699c39u,699);
}
B6ca15a:L6ca15a:{c.instructions+=3;NFSU2_TR(0x6ca15a);
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
B6ca15d:{NFSU2_TR(0x6ca15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca160:{NFSU2_TR(0x6ca160);
if(r1(R+518)){{goto L6ca381;}}
}
B6ca166:L6ca166:{c.instructions+=7;NFSU2_TR(0x6ca166);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca169:{NFSU2_TR(0x6ca169);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ca16b:{NFSU2_TR(0x6ca16b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca16e:{NFSU2_TR(0x6ca16e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca171:{NFSU2_TR(0x6ca171);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ca174:{NFSU2_TR(0x6ca174);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca175:{NFSU2_TR(0x6ca175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca17aull));
TAIL_STATIC(0x699821u,699);
}
B6ca17a:L6ca17a:{c.instructions+=1;NFSU2_TR(0x6ca17a);
{goto L6ca378;}
}
B6ca17f:L6ca17f:{c.instructions+=6;NFSU2_TR(0x6ca17f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca182:{NFSU2_TR(0x6ca182);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca186:{NFSU2_TR(0x6ca186);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca18a:{NFSU2_TR(0x6ca18a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca18c:{NFSU2_TR(0x6ca18c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca18f:{NFSU2_TR(0x6ca18f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ca210;}}
}
B6ca191:L6ca191:{c.instructions+=6;NFSU2_TR(0x6ca191);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca194:{NFSU2_TR(0x6ca194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca197:{NFSU2_TR(0x6ca197);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ca19a:{NFSU2_TR(0x6ca19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca19d:{NFSU2_TR(0x6ca19d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca1a0:{NFSU2_TR(0x6ca1a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca1b4;}}
}
B6ca1a2:L6ca1a2:{c.instructions+=3;NFSU2_TR(0x6ca1a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca1a5:{NFSU2_TR(0x6ca1a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca1a8:{NFSU2_TR(0x6ca1a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca1b4;}}
}
B6ca1aa:L6ca1aa:{c.instructions+=2;NFSU2_TR(0x6ca1aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca1ac:{NFSU2_TR(0x6ca1ac);
if(r1(R+518)){{goto L6ca1b4;}}
}
B6ca1ae:L6ca1ae:{c.instructions+=2;NFSU2_TR(0x6ca1ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca1b2:{NFSU2_TR(0x6ca1b2);
if(r1(R+518)){{goto L6ca1b8;}}
}
B6ca1b4:L6ca1b4:{c.instructions+=2;NFSU2_TR(0x6ca1b4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca1b6:{NFSU2_TR(0x6ca1b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca205;}}
}
B6ca1b8:L6ca1b8:{c.instructions+=9;NFSU2_TR(0x6ca1b8);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6ca1bb:{NFSU2_TR(0x6ca1bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca1bc:{NFSU2_TR(0x6ca1bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca1bd:{NFSU2_TR(0x6ca1bd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ca1c0:{NFSU2_TR(0x6ca1c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca1c2:{NFSU2_TR(0x6ca1c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca1c5:{NFSU2_TR(0x6ca1c5);
__builtin_memmove((R+4),(R+24),4);
}
B6ca1c7:{NFSU2_TR(0x6ca1c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca1ca:{NFSU2_TR(0x6ca1ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca1cfull));
TAIL_STATIC(0x699c39u,699);
}
B6ca1cf:L6ca1cf:{c.instructions+=3;NFSU2_TR(0x6ca1cf);
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
B6ca1d2:{NFSU2_TR(0x6ca1d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca1d5:{NFSU2_TR(0x6ca1d5);
if(r1(R+518)){{goto L6ca381;}}
}
B6ca1db:L6ca1db:{c.instructions+=6;NFSU2_TR(0x6ca1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca1de:{NFSU2_TR(0x6ca1de);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ca1e1:{NFSU2_TR(0x6ca1e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca1e2:{NFSU2_TR(0x6ca1e2);
__builtin_memmove((R+4),(R+0),4);
}
B6ca1e4:{NFSU2_TR(0x6ca1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca1e7:{NFSU2_TR(0x6ca1e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca1ecull));
TAIL_STATIC(0x699821u,699);
}
B6ca1ec:L6ca1ec:{c.instructions+=6;NFSU2_TR(0x6ca1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca1ef:{NFSU2_TR(0x6ca1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca1f2:{NFSU2_TR(0x6ca1f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ca1f5:{NFSU2_TR(0x6ca1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca1f8:{NFSU2_TR(0x6ca1f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca1fc:{NFSU2_TR(0x6ca1fc);
if(r1(R+518)){{goto L6ca205;}}
}
B6ca1fe:L6ca1fe:{c.instructions+=1;NFSU2_TR(0x6ca1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca205:L6ca205:{c.instructions+=4;NFSU2_TR(0x6ca205);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca208:{NFSU2_TR(0x6ca208);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca20b:{NFSU2_TR(0x6ca20b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ca20e:{NFSU2_TR(0x6ca20e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca191u);}goto L6ca191;}}
}
B6ca210:L6ca210:{c.instructions+=3;NFSU2_TR(0x6ca210);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca216:{NFSU2_TR(0x6ca216);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca218:{NFSU2_TR(0x6ca218);
if(r1(R+518)){{goto L6ca370;}}
}
B6ca21e:L6ca21e:{c.instructions+=2;NFSU2_TR(0x6ca21e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca222:{NFSU2_TR(0x6ca222);
if(r1(R+518)){{goto L6ca370;}}
}
B6ca228:L6ca228:{c.instructions+=2;NFSU2_TR(0x6ca228);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ca22c:{NFSU2_TR(0x6ca22c);
if(r1(R+518)){{goto L6ca236;}}
}
B6ca22e:L6ca22e:{c.instructions+=2;NFSU2_TR(0x6ca22e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca234:{NFSU2_TR(0x6ca234);
{goto L6ca23c;}
}
B6ca236:L6ca236:{c.instructions+=1;NFSU2_TR(0x6ca236);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca23c:L6ca23c:{c.instructions+=3;NFSU2_TR(0x6ca23c);
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
B6ca23f:{NFSU2_TR(0x6ca23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca242:{NFSU2_TR(0x6ca242);
if(r1(R+518)){{goto L6ca381;}}
}
B6ca248:L6ca248:{c.instructions+=4;NFSU2_TR(0x6ca248);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ca24a:{NFSU2_TR(0x6ca24a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca24d:{NFSU2_TR(0x6ca24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca250:{NFSU2_TR(0x6ca250);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ca370;}}
}
B6ca256:L6ca256:{c.instructions+=5;NFSU2_TR(0x6ca256);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca259:{NFSU2_TR(0x6ca259);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ca25c:{NFSU2_TR(0x6ca25c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca25f:{NFSU2_TR(0x6ca25f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca262:{NFSU2_TR(0x6ca262);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca276;}}
}
B6ca264:L6ca264:{c.instructions+=3;NFSU2_TR(0x6ca264);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca267:{NFSU2_TR(0x6ca267);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca26a:{NFSU2_TR(0x6ca26a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca276;}}
}
B6ca26c:L6ca26c:{c.instructions+=2;NFSU2_TR(0x6ca26c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca26e:{NFSU2_TR(0x6ca26e);
if(r1(R+518)){{goto L6ca276;}}
}
B6ca270:L6ca270:{c.instructions+=2;NFSU2_TR(0x6ca270);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca274:{NFSU2_TR(0x6ca274);
if(r1(R+518)){{goto L6ca27e;}}
}
B6ca276:L6ca276:{c.instructions+=2;NFSU2_TR(0x6ca276);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca278:{NFSU2_TR(0x6ca278);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca360;}}
}
B6ca27e:L6ca27e:{c.instructions+=9;NFSU2_TR(0x6ca27e);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6ca281:{NFSU2_TR(0x6ca281);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca282:{NFSU2_TR(0x6ca282);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca283:{NFSU2_TR(0x6ca283);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca289:{NFSU2_TR(0x6ca289);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ca28c:{NFSU2_TR(0x6ca28c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca28e:{NFSU2_TR(0x6ca28e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca291:{NFSU2_TR(0x6ca291);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca294:{NFSU2_TR(0x6ca294);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca299ull));
TAIL_STATIC(0x699c39u,699);
}
B6ca299:L6ca299:{c.instructions+=3;NFSU2_TR(0x6ca299);
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
B6ca29c:{NFSU2_TR(0x6ca29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca29f:{NFSU2_TR(0x6ca29f);
if(r1(R+518)){{goto L6ca381;}}
}
B6ca2a5:L6ca2a5:{c.instructions+=3;NFSU2_TR(0x6ca2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca2a8:{NFSU2_TR(0x6ca2a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca2ab:{NFSU2_TR(0x6ca2ab);
if(r1(R+518)){{goto L6ca360;}}
}
B6ca2b1:L6ca2b1:{c.instructions+=6;NFSU2_TR(0x6ca2b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca2b7:{NFSU2_TR(0x6ca2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca2ba:{NFSU2_TR(0x6ca2ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ca2bd:{NFSU2_TR(0x6ca2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca2c0:{NFSU2_TR(0x6ca2c0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca2c3:{NFSU2_TR(0x6ca2c3);
if(r1(R+518)){{goto L6ca360;}}
}
B6ca2c9:L6ca2c9:{c.instructions+=7;NFSU2_TR(0x6ca2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca2cc:{NFSU2_TR(0x6ca2cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ca2cf:{NFSU2_TR(0x6ca2cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ca2d1:{NFSU2_TR(0x6ca2d1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6ca2d7:{NFSU2_TR(0x6ca2d7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca2dd:{NFSU2_TR(0x6ca2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca2e0:{NFSU2_TR(0x6ca2e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca360;}}
}
B6ca2e2:L6ca2e2:{c.instructions+=3;NFSU2_TR(0x6ca2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca2e6:{NFSU2_TR(0x6ca2e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca2ea:{NFSU2_TR(0x6ca2ea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ca30c;}}
}
B6ca2ec:L6ca2ec:{c.instructions+=2;NFSU2_TR(0x6ca2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca2ef:{NFSU2_TR(0x6ca2ef);
{goto L6ca2f4;}
}
B6ca2f1:L6ca2f1:{c.instructions+=1;NFSU2_TR(0x6ca2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca2f4:L6ca2f4:{c.instructions+=3;NFSU2_TR(0x6ca2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ca2f7:{NFSU2_TR(0x6ca2f7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ca2f9:{NFSU2_TR(0x6ca2f9);
if(r1(R+518)){{goto L6ca30c;}}
}
B6ca2fb:L6ca2fb:{c.instructions+=6;NFSU2_TR(0x6ca2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca2fe:{NFSU2_TR(0x6ca2fe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6ca301:{NFSU2_TR(0x6ca301);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca304:{NFSU2_TR(0x6ca304);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca307:{NFSU2_TR(0x6ca307);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6ca30a:{NFSU2_TR(0x6ca30a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca2f1u);}goto L6ca2f1;}}
}
B6ca30c:L6ca30c:{c.instructions+=8;NFSU2_TR(0x6ca30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca30f:{NFSU2_TR(0x6ca30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca312:{NFSU2_TR(0x6ca312);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ca315:{NFSU2_TR(0x6ca315);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca317:{NFSU2_TR(0x6ca317);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca319:{NFSU2_TR(0x6ca319);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca31e:{NFSU2_TR(0x6ca31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca321:{NFSU2_TR(0x6ca321);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca326ull));
TAIL_STATIC(0x699c99u,699);
}
B6ca326:L6ca326:{c.instructions+=2;NFSU2_TR(0x6ca326);
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
B6ca329:{NFSU2_TR(0x6ca329);
if(r1(R+518)){{goto L6ca381;}}
}
B6ca32b:L6ca32b:{c.instructions+=6;NFSU2_TR(0x6ca32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca331:{NFSU2_TR(0x6ca331);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca334:{NFSU2_TR(0x6ca334);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6ca337:{NFSU2_TR(0x6ca337);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca33a:{NFSU2_TR(0x6ca33a);
__builtin_memmove((R+4),(R+12),4);
}
B6ca33c:{NFSU2_TR(0x6ca33c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca341ull));
TAIL_STATIC(0x698eb3u,698);
}
B6ca341:L6ca341:{c.instructions+=11;NFSU2_TR(0x6ca341);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca344:{NFSU2_TR(0x6ca344);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca347:{NFSU2_TR(0x6ca347);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca34a:{NFSU2_TR(0x6ca34a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ca34c:{NFSU2_TR(0x6ca34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca34f:{NFSU2_TR(0x6ca34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ca352:{NFSU2_TR(0x6ca352);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ca354:{NFSU2_TR(0x6ca354);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca357:{NFSU2_TR(0x6ca357);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca35a:{NFSU2_TR(0x6ca35a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ca35d:{NFSU2_TR(0x6ca35d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca360:L6ca360:{c.instructions+=5;NFSU2_TR(0x6ca360);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca363:{NFSU2_TR(0x6ca363);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ca364:{NFSU2_TR(0x6ca364);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ca367:{NFSU2_TR(0x6ca367);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca36a:{NFSU2_TR(0x6ca36a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca256u);}goto L6ca256;}}
}
B6ca370:L6ca370:{c.instructions+=3;NFSU2_TR(0x6ca370);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca373:{NFSU2_TR(0x6ca373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca376:{NFSU2_TR(0x6ca376);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ca378:L6ca378:{c.instructions+=1;NFSU2_TR(0x6ca378);
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
B6ca37a:L6ca37a:{c.instructions+=5;NFSU2_TR(0x6ca37a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ca37b:{NFSU2_TR(0x6ca37b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ca37c:{NFSU2_TR(0x6ca37c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ca37d:{NFSU2_TR(0x6ca37d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ca37e:{NFSU2_TR(0x6ca37e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ca381:L6ca381:{c.instructions+=2;NFSU2_TR(0x6ca381);
w4(R+0,u32(0x8007000eull));
}
B6ca386:{NFSU2_TR(0x6ca386);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca37au);}goto L6ca37a;}
}
B6ca388:L6ca388:{c.instructions+=13;NFSU2_TR(0x6ca388);
__builtin_memmove((R+28),(R+28),4);
}
B6ca38a:{NFSU2_TR(0x6ca38a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca38b:{NFSU2_TR(0x6ca38b);
__builtin_memmove((R+20),(R+16),4);
}
B6ca38d:{NFSU2_TR(0x6ca38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca390:{NFSU2_TR(0x6ca390);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca393:{NFSU2_TR(0x6ca393);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca394:{NFSU2_TR(0x6ca394);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca395:{NFSU2_TR(0x6ca395);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca396:{NFSU2_TR(0x6ca396);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ca399:{NFSU2_TR(0x6ca399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca39c:{NFSU2_TR(0x6ca39c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca39e:{NFSU2_TR(0x6ca39e);
__builtin_memmove((R+24),(R+0),4);
}
B6ca3a0:{NFSU2_TR(0x6ca3a0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ca3b4;}}
}
B6ca3a2:L6ca3a2:{c.instructions+=7;NFSU2_TR(0x6ca3a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca3a5:{NFSU2_TR(0x6ca3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ca3a8:{NFSU2_TR(0x6ca3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ca3ab:{NFSU2_TR(0x6ca3ab);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ca3ac:{NFSU2_TR(0x6ca3ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6ca3ae:{NFSU2_TR(0x6ca3ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ca3b0:{NFSU2_TR(0x6ca3b0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca3a2u);}goto L6ca3a2;}}
}
B6ca3b2:L6ca3b2:{c.instructions+=1;NFSU2_TR(0x6ca3b2);
{goto L6ca3c6;}
}
B6ca3b4:L6ca3b4:{c.instructions+=1;NFSU2_TR(0x6ca3b4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ca3c6;}}
}
B6ca3b6:L6ca3b6:{c.instructions+=7;NFSU2_TR(0x6ca3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca3b9:{NFSU2_TR(0x6ca3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ca3bc:{NFSU2_TR(0x6ca3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ca3bf:{NFSU2_TR(0x6ca3bf);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6ca3c0:{NFSU2_TR(0x6ca3c0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca3c2:{NFSU2_TR(0x6ca3c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ca3c4:{NFSU2_TR(0x6ca3c4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca3b6u);}goto L6ca3b6;}}
}
B6ca3c6:L6ca3c6:{c.instructions+=8;NFSU2_TR(0x6ca3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca3c9:{NFSU2_TR(0x6ca3c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ca3cc:{NFSU2_TR(0x6ca3cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ca3cd:{NFSU2_TR(0x6ca3cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ca3ce:{NFSU2_TR(0x6ca3ce);
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
B6ca3d0:{NFSU2_TR(0x6ca3d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ca3d1:{NFSU2_TR(0x6ca3d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ca3d2:{NFSU2_TR(0x6ca3d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ca3d5:L6ca3d5:{c.instructions+=13;NFSU2_TR(0x6ca3d5);
__builtin_memmove((R+28),(R+28),4);
}
B6ca3d7:{NFSU2_TR(0x6ca3d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca3d8:{NFSU2_TR(0x6ca3d8);
__builtin_memmove((R+20),(R+16),4);
}
B6ca3da:{NFSU2_TR(0x6ca3da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6ca3dd:{NFSU2_TR(0x6ca3dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca3de:{NFSU2_TR(0x6ca3de);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ca3e0:{NFSU2_TR(0x6ca3e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca3e1:{NFSU2_TR(0x6ca3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca3e4:{NFSU2_TR(0x6ca3e4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ca3e5:{NFSU2_TR(0x6ca3e5);
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
B6ca3e7:{NFSU2_TR(0x6ca3e7);
__builtin_memmove((R+12),(R+4),4);
}
B6ca3e9:{NFSU2_TR(0x6ca3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca3ec:{NFSU2_TR(0x6ca3ec);
if(r1(R+518)){{goto L6ca5cb;}}
}
B6ca3f2:L6ca3f2:{c.instructions+=5;NFSU2_TR(0x6ca3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca3f5:{NFSU2_TR(0x6ca3f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca3f6:{NFSU2_TR(0x6ca3f6);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6ca3fa:{NFSU2_TR(0x6ca3fa);
__builtin_memmove((R+4),(R+24),4);
}
B6ca3fc:{NFSU2_TR(0x6ca3fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca401ull));
TAIL_STATIC(0x699107u,699);
}
B6ca401:L6ca401:{c.instructions+=2;NFSU2_TR(0x6ca401);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca403:{NFSU2_TR(0x6ca403);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca5c7;}}
}
B6ca409:L6ca409:{c.instructions+=5;NFSU2_TR(0x6ca409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ca40b:{NFSU2_TR(0x6ca40b);
__builtin_memmove((R+4),(R+0),4);
}
B6ca40d:{NFSU2_TR(0x6ca40d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6ca413:{NFSU2_TR(0x6ca413);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca419:{NFSU2_TR(0x6ca419);
if(r1(R+518)){{goto L6ca5c7;}}
}
B6ca41f:L6ca41f:{c.instructions+=4;NFSU2_TR(0x6ca41f);
w4(R+8,u32(0xfff00000ull));
}
B6ca424:{NFSU2_TR(0x6ca424);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B6ca426:{NFSU2_TR(0x6ca426);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca42b:{NFSU2_TR(0x6ca42b);
if(r1(R+518)){{goto L6ca5c7;}}
}
B6ca431:L6ca431:{c.instructions+=4;NFSU2_TR(0x6ca431);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca434:{NFSU2_TR(0x6ca434);
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
B6ca436:{NFSU2_TR(0x6ca436);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca439:{NFSU2_TR(0x6ca439);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ca5c2;}}
}
B6ca43f:L6ca43f:{c.instructions+=1;NFSU2_TR(0x6ca43f);
{goto L6ca446;}
}
B6ca441:L6ca441:{c.instructions+=1;NFSU2_TR(0x6ca441);
w4(R+8,u32(0xfff00000ull));
}
B6ca446:L6ca446:{c.instructions+=5;NFSU2_TR(0x6ca446);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca449:{NFSU2_TR(0x6ca449);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca44c:{NFSU2_TR(0x6ca44c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ca44f:{NFSU2_TR(0x6ca44f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca452:{NFSU2_TR(0x6ca452);
if(r1(R+518)){{goto L6ca5b3;}}
}
B6ca458:L6ca458:{c.instructions+=4;NFSU2_TR(0x6ca458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ca45a:{NFSU2_TR(0x6ca45a);
__builtin_memmove((R+4),(R+0),4);
}
B6ca45c:{NFSU2_TR(0x6ca45c);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6ca45e:{NFSU2_TR(0x6ca45e);
if(r1(R+518)){{goto L6ca5b3;}}
}
B6ca464:L6ca464:{c.instructions+=3;NFSU2_TR(0x6ca464);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6ca469:{NFSU2_TR(0x6ca469);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x60000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x60000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ca46e:{NFSU2_TR(0x6ca46e);
if(r1(R+518)){{goto L6ca5c2;}}
}
B6ca474:L6ca474:{c.instructions+=2;NFSU2_TR(0x6ca474);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x11000000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11000000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11000000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ca47a:{NFSU2_TR(0x6ca47a);
if(r1(R+518)){{goto L6ca5c2;}}
}
B6ca480:L6ca480:{c.instructions+=5;NFSU2_TR(0x6ca480);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca481:{NFSU2_TR(0x6ca481);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca482:{NFSU2_TR(0x6ca482);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca485:{NFSU2_TR(0x6ca485);
__builtin_memmove((R+4),(R+12),4);
}
B6ca487:{NFSU2_TR(0x6ca487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca48cull));
TAIL_STATIC(0x6c21d7u,6c2);
}
B6ca48c:L6ca48c:{c.instructions+=6;NFSU2_TR(0x6ca48c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ca48e:{NFSU2_TR(0x6ca48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca492:{NFSU2_TR(0x6ca492);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca496:{NFSU2_TR(0x6ca496);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B6ca498:{NFSU2_TR(0x6ca498);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca49d:{NFSU2_TR(0x6ca49d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca4a6;}}
}
B6ca49f:L6ca49f:{c.instructions+=1;NFSU2_TR(0x6ca49f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca4a6:L6ca4a6:{c.instructions+=3;NFSU2_TR(0x6ca4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca4a9:{NFSU2_TR(0x6ca4a9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca4ab:{NFSU2_TR(0x6ca4ab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ca4ff;}}
}
B6ca4ad:L6ca4ad:{c.instructions+=5;NFSU2_TR(0x6ca4ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca4b0:{NFSU2_TR(0x6ca4b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca4b3:{NFSU2_TR(0x6ca4b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ca4b6:{NFSU2_TR(0x6ca4b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6ca4b9:{NFSU2_TR(0x6ca4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca4bc:L6ca4bc:{c.instructions+=5;NFSU2_TR(0x6ca4bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca4be:{NFSU2_TR(0x6ca4be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6ca4c0:{NFSU2_TR(0x6ca4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca4c3:{NFSU2_TR(0x6ca4c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ca4c6:{NFSU2_TR(0x6ca4c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca4dc;}}
}
B6ca4c8:L6ca4c8:{c.instructions+=7;NFSU2_TR(0x6ca4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca4cb:{NFSU2_TR(0x6ca4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca4ce:{NFSU2_TR(0x6ca4ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ca4d1:{NFSU2_TR(0x6ca4d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca4d4:{NFSU2_TR(0x6ca4d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca4d7:{NFSU2_TR(0x6ca4d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ca4da:{NFSU2_TR(0x6ca4da);
{goto L6ca4df;}
}
B6ca4dc:L6ca4dc:{c.instructions+=1;NFSU2_TR(0x6ca4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca4df:L6ca4df:{c.instructions+=2;NFSU2_TR(0x6ca4df);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca4e2:{NFSU2_TR(0x6ca4e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca4ed;}}
}
B6ca4e4:L6ca4e4:{c.instructions+=2;NFSU2_TR(0x6ca4e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca4eb:{NFSU2_TR(0x6ca4eb);
{goto L6ca4f4;}
}
B6ca4ed:L6ca4ed:{c.instructions+=1;NFSU2_TR(0x6ca4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca4f4:L6ca4f4:{c.instructions+=3;NFSU2_TR(0x6ca4f4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6ca4f7:{NFSU2_TR(0x6ca4f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca4fa:{NFSU2_TR(0x6ca4fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca4bcu);}goto L6ca4bc;}}
}
B6ca4fc:L6ca4fc:{c.instructions+=1;NFSU2_TR(0x6ca4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca4ff:L6ca4ff:{c.instructions+=3;NFSU2_TR(0x6ca4ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca502:{NFSU2_TR(0x6ca502);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca505:{NFSU2_TR(0x6ca505);
if(r1(R+518)){{goto L6ca5b3;}}
}
B6ca50b:L6ca50b:{c.instructions+=3;NFSU2_TR(0x6ca50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca50e:{NFSU2_TR(0x6ca50e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca511:{NFSU2_TR(0x6ca511);
if(r1(R+518)){{goto L6ca5b3;}}
}
B6ca517:L6ca517:{c.instructions+=5;NFSU2_TR(0x6ca517);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca51a:{NFSU2_TR(0x6ca51a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6ca51b:{NFSU2_TR(0x6ca51b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca51c:{NFSU2_TR(0x6ca51c);
__builtin_memmove((R+4),(R+12),4);
}
B6ca51e:{NFSU2_TR(0x6ca51e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca523ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca388u);}goto L6ca388;}
}
B6ca523:L6ca523:{c.instructions+=3;NFSU2_TR(0x6ca523);
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
B6ca525:{NFSU2_TR(0x6ca525);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca528:{NFSU2_TR(0x6ca528);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ca5ca;}}
}
B6ca52e:L6ca52e:{c.instructions+=2;NFSU2_TR(0x6ca52e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ca532:{NFSU2_TR(0x6ca532);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca5be;}}
}
B6ca538:L6ca538:{c.instructions+=4;NFSU2_TR(0x6ca538);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca53b:{NFSU2_TR(0x6ca53b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca53d:{NFSU2_TR(0x6ca53d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca53e:{NFSU2_TR(0x6ca53e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca543ull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ca543:L6ca543:{c.instructions+=2;NFSU2_TR(0x6ca543);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ca545:{NFSU2_TR(0x6ca545);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ca596;}}
}
B6ca547:L6ca547:{c.instructions+=3;NFSU2_TR(0x6ca547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca54a:{NFSU2_TR(0x6ca54a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca54c:{NFSU2_TR(0x6ca54c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ca586;}}
}
B6ca54e:L6ca54e:{c.instructions+=4;NFSU2_TR(0x6ca54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca551:{NFSU2_TR(0x6ca551);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca554:{NFSU2_TR(0x6ca554);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ca557:{NFSU2_TR(0x6ca557);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca55a:L6ca55a:{c.instructions+=7;NFSU2_TR(0x6ca55a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ca55c:{NFSU2_TR(0x6ca55c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ca55f:{NFSU2_TR(0x6ca55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca562:{NFSU2_TR(0x6ca562);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca565:{NFSU2_TR(0x6ca565);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ca568:{NFSU2_TR(0x6ca568);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6ca56c:{NFSU2_TR(0x6ca56c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca577;}}
}
B6ca56e:L6ca56e:{c.instructions+=2;NFSU2_TR(0x6ca56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca575:{NFSU2_TR(0x6ca575);
{goto L6ca57e;}
}
B6ca577:L6ca577:{c.instructions+=1;NFSU2_TR(0x6ca577);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca57e:L6ca57e:{c.instructions+=3;NFSU2_TR(0x6ca57e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6ca581:{NFSU2_TR(0x6ca581);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca584:{NFSU2_TR(0x6ca584);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca55au);}goto L6ca55a;}}
}
B6ca586:L6ca586:{c.instructions+=3;NFSU2_TR(0x6ca586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca589:{NFSU2_TR(0x6ca589);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca58c:{NFSU2_TR(0x6ca58c);
if(r1(R+518)){{goto L6ca596;}}
}
B6ca58e:L6ca58e:{c.instructions+=3;NFSU2_TR(0x6ca58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca591:{NFSU2_TR(0x6ca591);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca594:{NFSU2_TR(0x6ca594);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca5be;}}
}
B6ca596:L6ca596:{c.instructions+=6;NFSU2_TR(0x6ca596);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca599:{NFSU2_TR(0x6ca599);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca59c:{NFSU2_TR(0x6ca59c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ca59f:{NFSU2_TR(0x6ca59f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ca5a2:{NFSU2_TR(0x6ca5a2);
__builtin_memmove((R+0),(R+4),4);
}
B6ca5a4:{NFSU2_TR(0x6ca5a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ca5a7:L6ca5a7:{c.instructions+=1;NFSU2_TR(0x6ca5a7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ca5a9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca5a7u);}goto L6ca5a7;}
}
B6ca5a9:L6ca5a9:{c.instructions+=2;NFSU2_TR(0x6ca5a9);
__builtin_memmove((R+4),(R+0),4);
}
B6ca5ab:{NFSU2_TR(0x6ca5ab);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ca5ae:L6ca5ae:{c.instructions+=1;NFSU2_TR(0x6ca5ae);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ca5b0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca5aeu);}goto L6ca5ae;}
}
B6ca5b0:L6ca5b0:{c.instructions+=1;NFSU2_TR(0x6ca5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca5b3:L6ca5b3:{c.instructions+=2;NFSU2_TR(0x6ca5b3);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B6ca5b6:{NFSU2_TR(0x6ca5b6);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca441u);}goto L6ca441;}}
}
B6ca5bc:L6ca5bc:{c.instructions+=1;NFSU2_TR(0x6ca5bc);
{goto L6ca5c2;}
}
B6ca5be:L6ca5be:{c.instructions+=1;NFSU2_TR(0x6ca5be);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B6ca5c2:L6ca5c2:{c.instructions+=2;NFSU2_TR(0x6ca5c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca5c5:{NFSU2_TR(0x6ca5c5);
{goto L6ca5ca;}
}
B6ca5c7:L6ca5c7:{c.instructions+=2;NFSU2_TR(0x6ca5c7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ca5c9:{NFSU2_TR(0x6ca5c9);
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
B6ca5ca:L6ca5ca:{c.instructions+=1;NFSU2_TR(0x6ca5ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ca5cb:L6ca5cb:{c.instructions+=4;NFSU2_TR(0x6ca5cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ca5cc:{NFSU2_TR(0x6ca5cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ca5cd:{NFSU2_TR(0x6ca5cd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ca5ce:{NFSU2_TR(0x6ca5ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ca5d1:L6ca5d1:{c.instructions+=9;NFSU2_TR(0x6ca5d1);
__builtin_memmove((R+28),(R+28),4);
}
B6ca5d3:{NFSU2_TR(0x6ca5d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca5d4:{NFSU2_TR(0x6ca5d4);
__builtin_memmove((R+20),(R+16),4);
}
B6ca5d6:{NFSU2_TR(0x6ca5d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca5d7:{NFSU2_TR(0x6ca5d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca5d8:{NFSU2_TR(0x6ca5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca5db:{NFSU2_TR(0x6ca5db);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca5dd:{NFSU2_TR(0x6ca5dd);
__builtin_memmove((R+24),(R+4),4);
}
B6ca5df:{NFSU2_TR(0x6ca5df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca5e9;}}
}
B6ca5e1:L6ca5e1:{c.instructions+=3;NFSU2_TR(0x6ca5e1);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ca5e3:{NFSU2_TR(0x6ca5e3);
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
B6ca5e4:{NFSU2_TR(0x6ca5e4);
{goto L6ca704;}
}
B6ca5e9:L6ca5e9:{c.instructions+=5;NFSU2_TR(0x6ca5e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca5ec:{NFSU2_TR(0x6ca5ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca5ed:{NFSU2_TR(0x6ca5ed);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6ca5f1:{NFSU2_TR(0x6ca5f1);
__builtin_memmove((R+4),(R+12),4);
}
B6ca5f3:{NFSU2_TR(0x6ca5f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca5f8ull));
TAIL_STATIC(0x699107u,699);
}
B6ca5f8:L6ca5f8:{c.instructions+=2;NFSU2_TR(0x6ca5f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca5fa:{NFSU2_TR(0x6ca5fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca700;}}
}
B6ca600:L6ca600:{c.instructions+=4;NFSU2_TR(0x6ca600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ca602:{NFSU2_TR(0x6ca602);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6ca607:{NFSU2_TR(0x6ca607);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca60c:{NFSU2_TR(0x6ca60c);
if(r1(R+518)){{goto L6ca700;}}
}
B6ca612:L6ca612:{c.instructions+=3;NFSU2_TR(0x6ca612);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca614:{NFSU2_TR(0x6ca614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca617:{NFSU2_TR(0x6ca617);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ca700;}}
}
B6ca61d:L6ca61d:{c.instructions+=6;NFSU2_TR(0x6ca61d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca620:{NFSU2_TR(0x6ca620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca623:{NFSU2_TR(0x6ca623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca626:{NFSU2_TR(0x6ca626);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6ca629:{NFSU2_TR(0x6ca629);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca62c:{NFSU2_TR(0x6ca62c);
if(r1(R+518)){{goto L6ca6f6;}}
}
B6ca632:L6ca632:{c.instructions+=3;NFSU2_TR(0x6ca632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ca634:{NFSU2_TR(0x6ca634);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca639:{NFSU2_TR(0x6ca639);
if(r1(R+518)){{goto L6ca6f6;}}
}
B6ca63f:L6ca63f:{c.instructions+=3;NFSU2_TR(0x6ca63f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6ca644:{NFSU2_TR(0x6ca644);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca649:{NFSU2_TR(0x6ca649);
if(r1(R+518)){{goto L6ca700;}}
}
B6ca64f:L6ca64f:{c.instructions+=2;NFSU2_TR(0x6ca64f);
__builtin_memmove((R+4),(R+12),4);
}
B6ca651:{NFSU2_TR(0x6ca651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca656ull));
TAIL_STATIC(0x699107u,699);
}
B6ca656:L6ca656:{c.instructions+=2;NFSU2_TR(0x6ca656);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca658:{NFSU2_TR(0x6ca658);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca700;}}
}
B6ca65e:L6ca65e:{c.instructions+=5;NFSU2_TR(0x6ca65e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca65f:{NFSU2_TR(0x6ca65f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca660:{NFSU2_TR(0x6ca660);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca663:{NFSU2_TR(0x6ca663);
__builtin_memmove((R+4),(R+24),4);
}
B6ca665:{NFSU2_TR(0x6ca665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca66aull));
TAIL_STATIC(0x6c21d7u,6c2);
}
B6ca66a:L6ca66a:{c.instructions+=6;NFSU2_TR(0x6ca66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca66d:{NFSU2_TR(0x6ca66d);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6ca671:{NFSU2_TR(0x6ca671);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca675:{NFSU2_TR(0x6ca675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca678:{NFSU2_TR(0x6ca678);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ca67b:{NFSU2_TR(0x6ca67b);
if(r1(R+518)){{goto L6ca6f6;}}
}
B6ca67d:L6ca67d:{c.instructions+=2;NFSU2_TR(0x6ca67d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca681:{NFSU2_TR(0x6ca681);
if(r1(R+518)){{goto L6ca6f6;}}
}
B6ca683:L6ca683:{c.instructions+=10;NFSU2_TR(0x6ca683);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca686:{NFSU2_TR(0x6ca686);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca689:{NFSU2_TR(0x6ca689);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca68c:{NFSU2_TR(0x6ca68c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ca68e:{NFSU2_TR(0x6ca68e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ca690:{NFSU2_TR(0x6ca690);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ca693:{NFSU2_TR(0x6ca693);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ca696:{NFSU2_TR(0x6ca696);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca699:{NFSU2_TR(0x6ca699);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca69c:{NFSU2_TR(0x6ca69c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca700;}}
}
B6ca69e:L6ca69e:{c.instructions+=3;NFSU2_TR(0x6ca69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca6a1:{NFSU2_TR(0x6ca6a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca6a4:{NFSU2_TR(0x6ca6a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca700;}}
}
B6ca6a6:L6ca6a6:{c.instructions+=5;NFSU2_TR(0x6ca6a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca6a9:{NFSU2_TR(0x6ca6a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca6ac:{NFSU2_TR(0x6ca6ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca6ad:{NFSU2_TR(0x6ca6ad);
__builtin_memmove((R+4),(R+24),4);
}
B6ca6af:{NFSU2_TR(0x6ca6af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca6b4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca388u);}goto L6ca388;}
}
B6ca6b4:L6ca6b4:{c.instructions+=2;NFSU2_TR(0x6ca6b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ca6b8:{NFSU2_TR(0x6ca6b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca6c8;}}
}
B6ca6ba:L6ca6ba:{c.instructions+=3;NFSU2_TR(0x6ca6ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca6bc:{NFSU2_TR(0x6ca6bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca6bf:{NFSU2_TR(0x6ca6bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca6c4ull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ca6c4:L6ca6c4:{c.instructions+=2;NFSU2_TR(0x6ca6c4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ca6c6:{NFSU2_TR(0x6ca6c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ca6de;}}
}
B6ca6c8:L6ca6c8:{c.instructions+=2;NFSU2_TR(0x6ca6c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca6cc:{NFSU2_TR(0x6ca6cc);
if(r1(R+518)){{goto L6ca70a;}}
}
B6ca6ce:L6ca6ce:{c.instructions+=4;NFSU2_TR(0x6ca6ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca6d0:{NFSU2_TR(0x6ca6d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca6d3:{NFSU2_TR(0x6ca6d3);
__builtin_memmove((R+4),(R+24),4);
}
B6ca6d5:{NFSU2_TR(0x6ca6d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca6daull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ca6da:L6ca6da:{c.instructions+=2;NFSU2_TR(0x6ca6da);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ca6dc:{NFSU2_TR(0x6ca6dc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ca70a;}}
}
B6ca6de:L6ca6de:{c.instructions+=5;NFSU2_TR(0x6ca6de);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca6e1:{NFSU2_TR(0x6ca6e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca6e2:{NFSU2_TR(0x6ca6e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca6e5:{NFSU2_TR(0x6ca6e5);
__builtin_memmove((R+4),(R+24),4);
}
B6ca6e7:{NFSU2_TR(0x6ca6e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca6ecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca388u);}goto L6ca388;}
}
B6ca6ec:L6ca6ec:{c.instructions+=4;NFSU2_TR(0x6ca6ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca6ed:{NFSU2_TR(0x6ca6ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca6ee:{NFSU2_TR(0x6ca6ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca6f1:{NFSU2_TR(0x6ca6f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca6f6ull));
TAIL_STATIC(0x6c21d7u,6c2);
}
B6ca6f6:L6ca6f6:{c.instructions+=2;NFSU2_TR(0x6ca6f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca6fa:{NFSU2_TR(0x6ca6fa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca61du);}goto L6ca61d;}}
}
B6ca700:L6ca700:{c.instructions+=2;NFSU2_TR(0x6ca700);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ca702:{NFSU2_TR(0x6ca702);
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
B6ca703:L6ca703:{c.instructions+=1;NFSU2_TR(0x6ca703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ca704:L6ca704:{c.instructions+=4;NFSU2_TR(0x6ca704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ca705:{NFSU2_TR(0x6ca705);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ca706:{NFSU2_TR(0x6ca706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ca707:{NFSU2_TR(0x6ca707);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ca70a:L6ca70a:{c.instructions+=2;NFSU2_TR(0x6ca70a);
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
B6ca70c:{NFSU2_TR(0x6ca70c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca703u);}goto L6ca703;}
}
B6ca70e:L6ca70e:{c.instructions+=8;NFSU2_TR(0x6ca70e);
__builtin_memmove((R+28),(R+28),4);
}
B6ca710:{NFSU2_TR(0x6ca710);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca711:{NFSU2_TR(0x6ca711);
__builtin_memmove((R+20),(R+16),4);
}
B6ca713:{NFSU2_TR(0x6ca713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xe8ull))));
}
B6ca719:{NFSU2_TR(0x6ca719);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca71a:{NFSU2_TR(0x6ca71a);
__builtin_memmove((R+12),(R+4),4);
}
B6ca71c:{NFSU2_TR(0x6ca71c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ca723:{NFSU2_TR(0x6ca723);
if(r1(R+518)){{goto L6ca72d;}}
}
B6ca725:L6ca725:{c.instructions+=3;NFSU2_TR(0x6ca725);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ca727:{NFSU2_TR(0x6ca727);
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
B6ca728:{NFSU2_TR(0x6ca728);
{goto L6caa70;}
}
B6ca72d:L6ca72d:{c.instructions+=3;NFSU2_TR(0x6ca72d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca72e:{NFSU2_TR(0x6ca72e);
__builtin_memmove((R+4),(R+12),4);
}
B6ca730:{NFSU2_TR(0x6ca730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca735ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6ca735:L6ca735:{c.instructions+=3;NFSU2_TR(0x6ca735);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ca737:{NFSU2_TR(0x6ca737);
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
B6ca739:{NFSU2_TR(0x6ca739);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6caa6f;}}
}
B6ca73f:L6ca73f:{c.instructions+=2;NFSU2_TR(0x6ca73f);
__builtin_memmove((R+4),(R+12),4);
}
B6ca741:{NFSU2_TR(0x6ca741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca746ull));
TAIL_STATIC(0x69e573u,69e);
}
B6ca746:L6ca746:{c.instructions+=2;NFSU2_TR(0x6ca746);
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
B6ca748:{NFSU2_TR(0x6ca748);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6caa6f;}}
}
B6ca74e:L6ca74e:{c.instructions+=10;NFSU2_TR(0x6ca74e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca74f:{NFSU2_TR(0x6ca74f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ca752:{NFSU2_TR(0x6ca752);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca754:{NFSU2_TR(0x6ca754);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca757:{NFSU2_TR(0x6ca757);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca75a:{NFSU2_TR(0x6ca75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca75d:{NFSU2_TR(0x6ca75d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ca75e:{NFSU2_TR(0x6ca75e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ca760:{NFSU2_TR(0x6ca760);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ca764:{NFSU2_TR(0x6ca764);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ca76a:L6ca76a:{c.instructions+=1;NFSU2_TR(0x6ca76a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ca76c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca76au);}goto L6ca76a;}
}
B6ca76c:L6ca76c:{c.instructions+=4;NFSU2_TR(0x6ca76c);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca76e:{NFSU2_TR(0x6ca76e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ca76f:{NFSU2_TR(0x6ca76f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ca775:{NFSU2_TR(0x6ca775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca778:L6ca778:{c.instructions+=1;NFSU2_TR(0x6ca778);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ca77a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca778u);}goto L6ca778;}
}
B6ca77a:L6ca77a:{c.instructions+=1;NFSU2_TR(0x6ca77a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca846;}}
}
B6ca780:L6ca780:{c.instructions+=3;NFSU2_TR(0x6ca780);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca783:{NFSU2_TR(0x6ca783);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca785:{NFSU2_TR(0x6ca785);
if(r1(R+518)){{goto L6ca7c0;}}
}
B6ca787:L6ca787:{c.instructions+=6;NFSU2_TR(0x6ca787);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca788:{NFSU2_TR(0x6ca788);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca78e:{NFSU2_TR(0x6ca78e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca794:{NFSU2_TR(0x6ca794);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca795:{NFSU2_TR(0x6ca795);
__builtin_memmove((R+4),(R+12),4);
}
B6ca797:{NFSU2_TR(0x6ca797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca79cull));
TAIL_STATIC(0x6a61ecu,6a6);
}
B6ca79c:L6ca79c:{c.instructions+=3;NFSU2_TR(0x6ca79c);
__builtin_memmove((R+28),(R+0),4);
}
B6ca79e:{NFSU2_TR(0x6ca79e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ca7a0:{NFSU2_TR(0x6ca7a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6caa32;}}
}
B6ca7a6:L6ca7a6:{c.instructions+=5;NFSU2_TR(0x6ca7a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca7a8:{NFSU2_TR(0x6ca7a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca7ae:{NFSU2_TR(0x6ca7ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca7af:{NFSU2_TR(0x6ca7af);
__builtin_memmove((R+4),(R+12),4);
}
B6ca7b1:{NFSU2_TR(0x6ca7b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca7b6ull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ca7b6:L6ca7b6:{c.instructions+=4;NFSU2_TR(0x6ca7b6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ca7b8:{NFSU2_TR(0x6ca7b8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ca7ba:{NFSU2_TR(0x6ca7ba);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B6ca7bd:{NFSU2_TR(0x6ca7bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca7c0:L6ca7c0:{c.instructions+=8;NFSU2_TR(0x6ca7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca7c3:{NFSU2_TR(0x6ca7c3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6ca7c4:{NFSU2_TR(0x6ca7c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca7c5:{NFSU2_TR(0x6ca7c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca7cb:{NFSU2_TR(0x6ca7cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca7d1:{NFSU2_TR(0x6ca7d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca7d2:{NFSU2_TR(0x6ca7d2);
__builtin_memmove((R+4),(R+12),4);
}
B6ca7d4:{NFSU2_TR(0x6ca7d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca7d9ull));
TAIL_STATIC(0x6a61ecu,6a6);
}
B6ca7d9:L6ca7d9:{c.instructions+=2;NFSU2_TR(0x6ca7d9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ca7db:{NFSU2_TR(0x6ca7db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ca7f1;}}
}
B6ca7dd:L6ca7dd:{c.instructions+=5;NFSU2_TR(0x6ca7dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca7df:{NFSU2_TR(0x6ca7df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca7e5:{NFSU2_TR(0x6ca7e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca7e6:{NFSU2_TR(0x6ca7e6);
__builtin_memmove((R+4),(R+12),4);
}
B6ca7e8:{NFSU2_TR(0x6ca7e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca7edull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ca7ed:L6ca7ed:{c.instructions+=2;NFSU2_TR(0x6ca7ed);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ca7ef:{NFSU2_TR(0x6ca7ef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ca846;}}
}
B6ca7f1:L6ca7f1:{c.instructions+=4;NFSU2_TR(0x6ca7f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca7f7:{NFSU2_TR(0x6ca7f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca7f8:{NFSU2_TR(0x6ca7f8);
__builtin_memmove((R+4),(R+12),4);
}
B6ca7fa:{NFSU2_TR(0x6ca7fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca7ffull));
TAIL_STATIC(0x69df0cu,69d);
}
B6ca7ff:L6ca7ff:{c.instructions+=6;NFSU2_TR(0x6ca7ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca802:{NFSU2_TR(0x6ca802);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca808:{NFSU2_TR(0x6ca808);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca80e:{NFSU2_TR(0x6ca80e);
__builtin_memmove((R+4),(R+12),4);
}
B6ca810:{NFSU2_TR(0x6ca810);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca811:{NFSU2_TR(0x6ca811);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca816ull));
TAIL_STATIC(0x6a61ecu,6a6);
}
B6ca816:L6ca816:{c.instructions+=3;NFSU2_TR(0x6ca816);
__builtin_memmove((R+28),(R+0),4);
}
B6ca818:{NFSU2_TR(0x6ca818);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ca81a:{NFSU2_TR(0x6ca81a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ca832;}}
}
B6ca81c:L6ca81c:{c.instructions+=5;NFSU2_TR(0x6ca81c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca81e:{NFSU2_TR(0x6ca81e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca824:{NFSU2_TR(0x6ca824);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca825:{NFSU2_TR(0x6ca825);
__builtin_memmove((R+4),(R+12),4);
}
B6ca827:{NFSU2_TR(0x6ca827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca82cull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ca82c:L6ca82c:{c.instructions+=3;NFSU2_TR(0x6ca82c);
__builtin_memmove((R+28),(R+0),4);
}
B6ca82e:{NFSU2_TR(0x6ca82e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ca830:{NFSU2_TR(0x6ca830);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ca846;}}
}
B6ca832:L6ca832:{c.instructions+=2;NFSU2_TR(0x6ca832);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8007000eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca838:{NFSU2_TR(0x6ca838);
if(r1(R+518)){{goto L6caa32;}}
}
B6ca83e:L6ca83e:{c.instructions+=3;NFSU2_TR(0x6ca83e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ca840:{NFSU2_TR(0x6ca840);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ca841:{NFSU2_TR(0x6ca841);
{goto L6caa32;}
}
B6ca846:L6ca846:{c.instructions+=4;NFSU2_TR(0x6ca846);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6ca849:{NFSU2_TR(0x6ca849);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca84a:{NFSU2_TR(0x6ca84a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca84d:{NFSU2_TR(0x6ca84d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca852ull));
TAIL_STATIC(0x575620u,575);
}
B6ca852:L6ca852:{c.instructions+=4;NFSU2_TR(0x6ca852);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca854:{NFSU2_TR(0x6ca854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ca855:{NFSU2_TR(0x6ca855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca858:{NFSU2_TR(0x6ca858);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca864;}}
}
B6ca85a:L6ca85a:{c.instructions+=2;NFSU2_TR(0x6ca85a);
w4(R+28,u32(0x8007000eull));
}
B6ca85f:{NFSU2_TR(0x6ca85f);
{goto L6caa32;}
}
B6ca864:L6ca864:{c.instructions+=2;NFSU2_TR(0x6ca864);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca865:{NFSU2_TR(0x6ca865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca86aull));
TAIL_STATIC(0x575620u,575);
}
B6ca86a:L6ca86a:{c.instructions+=5;NFSU2_TR(0x6ca86a);
__builtin_memmove((R+28),(R+0),4);
}
B6ca86c:{NFSU2_TR(0x6ca86c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca86e:{NFSU2_TR(0x6ca86e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ca86f:{NFSU2_TR(0x6ca86f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca872:{NFSU2_TR(0x6ca872);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca85au);}goto L6ca85a;}}
}
B6ca874:L6ca874:{c.instructions+=4;NFSU2_TR(0x6ca874);
__builtin_memmove((R+4),(R+24),4);
}
B6ca876:{NFSU2_TR(0x6ca876);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ca879:{NFSU2_TR(0x6ca879);
__builtin_memmove((R+0),(R+4),4);
}
B6ca87b:{NFSU2_TR(0x6ca87b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ca87e:L6ca87e:{c.instructions+=1;NFSU2_TR(0x6ca87e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ca880;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca87eu);}goto L6ca87e;}
}
B6ca880:L6ca880:{c.instructions+=3;NFSU2_TR(0x6ca880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca883:{NFSU2_TR(0x6ca883);
__builtin_memmove((R+4),(R+0),4);
}
B6ca885:{NFSU2_TR(0x6ca885);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ca888:L6ca888:{c.instructions+=1;NFSU2_TR(0x6ca888);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ca88a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca888u);}goto L6ca888;}
}
B6ca88a:L6ca88a:{c.instructions+=5;NFSU2_TR(0x6ca88a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca88d:{NFSU2_TR(0x6ca88d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ca890:{NFSU2_TR(0x6ca890);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca893:{NFSU2_TR(0x6ca893);
__builtin_memmove((R+0),(R+4),4);
}
B6ca895:{NFSU2_TR(0x6ca895);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ca898:L6ca898:{c.instructions+=1;NFSU2_TR(0x6ca898);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ca89a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca898u);}goto L6ca898;}
}
B6ca89a:L6ca89a:{c.instructions+=2;NFSU2_TR(0x6ca89a);
__builtin_memmove((R+4),(R+0),4);
}
B6ca89c:{NFSU2_TR(0x6ca89c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ca89f:L6ca89f:{c.instructions+=1;NFSU2_TR(0x6ca89f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ca8a1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca89fu);}goto L6ca89f;}
}
B6ca8a1:L6ca8a1:{c.instructions+=3;NFSU2_TR(0x6ca8a1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ca8a3:{NFSU2_TR(0x6ca8a3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca8a5:{NFSU2_TR(0x6ca8a5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ca8bc;}}
}
B6ca8a7:L6ca8a7:{c.instructions+=7;NFSU2_TR(0x6ca8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca8aa:{NFSU2_TR(0x6ca8aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ca8ad:{NFSU2_TR(0x6ca8ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca8b3:{NFSU2_TR(0x6ca8b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca8b7:{NFSU2_TR(0x6ca8b7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ca8b8:{NFSU2_TR(0x6ca8b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6ca8ba:{NFSU2_TR(0x6ca8ba);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca8a7u);}goto L6ca8a7;}}
}
B6ca8bc:L6ca8bc:{c.instructions+=4;NFSU2_TR(0x6ca8bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ca8bf:{NFSU2_TR(0x6ca8bf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ca8c1:{NFSU2_TR(0x6ca8c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca8c4:{NFSU2_TR(0x6ca8c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6caa30;}}
}
B6ca8ca:L6ca8ca:{c.instructions+=7;NFSU2_TR(0x6ca8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca8cd:{NFSU2_TR(0x6ca8cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ca8d0:{NFSU2_TR(0x6ca8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca8d6:{NFSU2_TR(0x6ca8d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ca8d8:{NFSU2_TR(0x6ca8d8);
w4(R+24,u32(0xfff00000ull));
}
B6ca8dd:{NFSU2_TR(0x6ca8dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca8df:{NFSU2_TR(0x6ca8df);
if(r1(R+518)){{goto L6caa23;}}
}
B6ca8e5:L6ca8e5:{c.instructions+=3;NFSU2_TR(0x6ca8e5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6ca8ea:{NFSU2_TR(0x6ca8ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca8ef:{NFSU2_TR(0x6ca8ef);
if(r1(R+518)){{goto L6caa23;}}
}
B6ca8f5:L6ca8f5:{c.instructions+=1;NFSU2_TR(0x6ca8f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca8faull));
TAIL_STATIC(0x699107u,699);
}
B6ca8fa:L6ca8fa:{c.instructions+=2;NFSU2_TR(0x6ca8fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca8fc:{NFSU2_TR(0x6ca8fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6caa23;}}
}
B6ca902:L6ca902:{c.instructions+=5;NFSU2_TR(0x6ca902);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca908:{NFSU2_TR(0x6ca908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ca90a:{NFSU2_TR(0x6ca90a);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B6ca90c:{NFSU2_TR(0x6ca90c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca912:{NFSU2_TR(0x6ca912);
if(r1(R+518)){{goto L6caa23;}}
}
B6ca918:L6ca918:{c.instructions+=5;NFSU2_TR(0x6ca918);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca919:{NFSU2_TR(0x6ca919);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca91a:{NFSU2_TR(0x6ca91a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca91d:{NFSU2_TR(0x6ca91d);
__builtin_memmove((R+4),(R+12),4);
}
B6ca91f:{NFSU2_TR(0x6ca91f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca924ull));
TAIL_STATIC(0x6c21d7u,6c2);
}
B6ca924:L6ca924:{c.instructions+=2;NFSU2_TR(0x6ca924);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ca928:{NFSU2_TR(0x6ca928);
if(r1(R+518)){{goto L6ca9e2;}}
}
B6ca92e:L6ca92e:{c.instructions+=8;NFSU2_TR(0x6ca92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca934:{NFSU2_TR(0x6ca934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ca936:{NFSU2_TR(0x6ca936);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ca938:{NFSU2_TR(0x6ca938);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B6ca93a:{NFSU2_TR(0x6ca93a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca940:{NFSU2_TR(0x6ca940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca943:{NFSU2_TR(0x6ca943);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca946:{NFSU2_TR(0x6ca946);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca94f;}}
}
B6ca948:L6ca948:{c.instructions+=1;NFSU2_TR(0x6ca948);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca94f:L6ca94f:{c.instructions+=2;NFSU2_TR(0x6ca94f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca952:{NFSU2_TR(0x6ca952);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ca9b4;}}
}
B6ca954:L6ca954:{c.instructions+=8;NFSU2_TR(0x6ca954);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ca957:{NFSU2_TR(0x6ca957);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca95d:{NFSU2_TR(0x6ca95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca960:{NFSU2_TR(0x6ca960);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ca963:{NFSU2_TR(0x6ca963);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ca966:{NFSU2_TR(0x6ca966);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ca969:{NFSU2_TR(0x6ca969);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6ca96c:{NFSU2_TR(0x6ca96c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ca96f:L6ca96f:{c.instructions+=4;NFSU2_TR(0x6ca96f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ca971:{NFSU2_TR(0x6ca971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ca973:{NFSU2_TR(0x6ca973);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ca976:{NFSU2_TR(0x6ca976);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca994;}}
}
B6ca978:L6ca978:{c.instructions+=3;NFSU2_TR(0x6ca978);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca97e:{NFSU2_TR(0x6ca97e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca981:{NFSU2_TR(0x6ca981);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca994;}}
}
B6ca983:L6ca983:{c.instructions+=6;NFSU2_TR(0x6ca983);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca986:{NFSU2_TR(0x6ca986);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca989:{NFSU2_TR(0x6ca989);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ca98c:{NFSU2_TR(0x6ca98c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ca98f:{NFSU2_TR(0x6ca98f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ca992:{NFSU2_TR(0x6ca992);
{goto L6ca997;}
}
B6ca994:L6ca994:{c.instructions+=1;NFSU2_TR(0x6ca994);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ca997:L6ca997:{c.instructions+=2;NFSU2_TR(0x6ca997);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca99a:{NFSU2_TR(0x6ca99a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca9a5;}}
}
B6ca99c:L6ca99c:{c.instructions+=2;NFSU2_TR(0x6ca99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca9a3:{NFSU2_TR(0x6ca9a3);
{goto L6ca9ac;}
}
B6ca9a5:L6ca9a5:{c.instructions+=1;NFSU2_TR(0x6ca9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ca9ac:L6ca9ac:{c.instructions+=3;NFSU2_TR(0x6ca9ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6ca9af:{NFSU2_TR(0x6ca9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ca9b2:{NFSU2_TR(0x6ca9b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca96fu);}goto L6ca96f;}}
}
B6ca9b4:L6ca9b4:{c.instructions+=3;NFSU2_TR(0x6ca9b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ca9b6:{NFSU2_TR(0x6ca9b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca9b9:{NFSU2_TR(0x6ca9b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ca9c0;}}
}
B6ca9bb:L6ca9bb:{c.instructions+=3;NFSU2_TR(0x6ca9bb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca9bd:{NFSU2_TR(0x6ca9bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca9be:{NFSU2_TR(0x6ca9be);
{goto L6ca9c9;}
}
B6ca9c0:L6ca9c0:{c.instructions+=2;NFSU2_TR(0x6ca9c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ca9c3:{NFSU2_TR(0x6ca9c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6caa23;}}
}
B6ca9c5:L6ca9c5:{c.instructions+=2;NFSU2_TR(0x6ca9c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca9c7:{NFSU2_TR(0x6ca9c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca9c9:L6ca9c9:{c.instructions+=7;NFSU2_TR(0x6ca9c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca9cc:{NFSU2_TR(0x6ca9cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca9d2:{NFSU2_TR(0x6ca9d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca9d5:{NFSU2_TR(0x6ca9d5);
__builtin_memmove((R+4),(R+12),4);
}
B6ca9d7:{NFSU2_TR(0x6ca9d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca9da:{NFSU2_TR(0x6ca9da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca9db:{NFSU2_TR(0x6ca9db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ca9e0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca3d5u);}goto L6ca3d5;}
}
B6ca9e0:L6ca9e0:{c.instructions+=1;NFSU2_TR(0x6ca9e0);
{goto L6caa01;}
}
B6ca9e2:L6ca9e2:{c.instructions+=10;NFSU2_TR(0x6ca9e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca9e5:{NFSU2_TR(0x6ca9e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca9eb:{NFSU2_TR(0x6ca9eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca9ec:{NFSU2_TR(0x6ca9ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca9ef:{NFSU2_TR(0x6ca9ef);
__builtin_memmove((R+4),(R+12),4);
}
B6ca9f1:{NFSU2_TR(0x6ca9f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ca9f4:{NFSU2_TR(0x6ca9f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca9f5:{NFSU2_TR(0x6ca9f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ca9fb:{NFSU2_TR(0x6ca9fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ca9fc:{NFSU2_TR(0x6ca9fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6caa01ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca5d1u);}goto L6ca5d1;}
}
B6caa01:L6caa01:{c.instructions+=3;NFSU2_TR(0x6caa01);
__builtin_memmove((R+28),(R+0),4);
}
B6caa03:{NFSU2_TR(0x6caa03);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caa05:{NFSU2_TR(0x6caa05);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6caa32;}}
}
B6caa07:L6caa07:{c.instructions+=1;NFSU2_TR(0x6caa07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6caa23;}}
}
B6caa09:L6caa09:{c.instructions+=6;NFSU2_TR(0x6caa09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6caa0c:{NFSU2_TR(0x6caa0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6caa0f:{NFSU2_TR(0x6caa0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6caa12:{NFSU2_TR(0x6caa12);
__builtin_memmove((R+0),(R+4),4);
}
B6caa14:{NFSU2_TR(0x6caa14);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6caa17:{NFSU2_TR(0x6caa17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6caa1a:L6caa1a:{c.instructions+=1;NFSU2_TR(0x6caa1a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6caa1c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6caa1au);}goto L6caa1a;}
}
B6caa1c:L6caa1c:{c.instructions+=2;NFSU2_TR(0x6caa1c);
__builtin_memmove((R+4),(R+0),4);
}
B6caa1e:{NFSU2_TR(0x6caa1e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6caa21:L6caa21:{c.instructions+=1;NFSU2_TR(0x6caa21);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6caa23;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6caa21u);}goto L6caa21;}
}
B6caa23:L6caa23:{c.instructions+=4;NFSU2_TR(0x6caa23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6caa26:{NFSU2_TR(0x6caa26);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B6caa27:{NFSU2_TR(0x6caa27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6caa2a:{NFSU2_TR(0x6caa2a);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ca8cau);}goto L6ca8ca;}}
}
B6caa30:L6caa30:{c.instructions+=1;NFSU2_TR(0x6caa30);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6caa32:L6caa32:{c.instructions+=3;NFSU2_TR(0x6caa32);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6caa36:{NFSU2_TR(0x6caa36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6caa37:{NFSU2_TR(0x6caa37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6caa5b;}}
}
B6caa39:L6caa39:{c.instructions+=4;NFSU2_TR(0x6caa39);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6caa3f:{NFSU2_TR(0x6caa3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6caa40:{NFSU2_TR(0x6caa40);
__builtin_memmove((R+4),(R+12),4);
}
B6caa42:{NFSU2_TR(0x6caa42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6caa47ull));
TAIL_STATIC(0x69df0cu,69d);
}
B6caa47:L6caa47:{c.instructions+=2;NFSU2_TR(0x6caa47);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6caa4b:{NFSU2_TR(0x6caa4b);
if(r1(R+518)){{goto L6caa5b;}}
}
B6caa4d:L6caa4d:{c.instructions+=4;NFSU2_TR(0x6caa4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6caa53:{NFSU2_TR(0x6caa53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6caa54:{NFSU2_TR(0x6caa54);
__builtin_memmove((R+4),(R+12),4);
}
B6caa56:{NFSU2_TR(0x6caa56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6caa5bull));
TAIL_STATIC(0x69df0cu,69d);
}
B6caa5b:L6caa5b:{c.instructions+=2;NFSU2_TR(0x6caa5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6caa5e:{NFSU2_TR(0x6caa5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6caa63ull));
TAIL_STATIC(0x575630u,575);
}
B6caa63:L6caa63:{c.instructions+=2;NFSU2_TR(0x6caa63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6caa66:{NFSU2_TR(0x6caa66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6caa6bull));
TAIL_STATIC(0x575630u,575);
}
B6caa6b:L6caa6b:{c.instructions+=3;NFSU2_TR(0x6caa6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6caa6c:{NFSU2_TR(0x6caa6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6caa6d:{NFSU2_TR(0x6caa6d);
__builtin_memmove((R+0),(R+28),4);
}
B6caa6f:L6caa6f:{c.instructions+=1;NFSU2_TR(0x6caa6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6caa70:L6caa70:{c.instructions+=3;NFSU2_TR(0x6caa70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6caa71:{NFSU2_TR(0x6caa71);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6caa72:{NFSU2_TR(0x6caa72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6caa73:L6caa73:{c.instructions+=6;NFSU2_TR(0x6caa73);
__builtin_memmove((R+28),(R+28),4);
}
B6caa75:{NFSU2_TR(0x6caa75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6caa76:{NFSU2_TR(0x6caa76);
__builtin_memmove((R+20),(R+16),4);
}
B6caa78:{NFSU2_TR(0x6caa78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6caa7b:{NFSU2_TR(0x6caa7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caa80:{NFSU2_TR(0x6caa80);
if(r1(R+518)){{goto L6caaa2;}}
}
B6caa82:L6caa82:{c.instructions+=2;NFSU2_TR(0x6caa82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caa87:{NFSU2_TR(0x6caa87);
if(r1(R+518)){{goto L6caaa2;}}
}
B6caa89:L6caa89:{c.instructions+=2;NFSU2_TR(0x6caa89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caa8e:{NFSU2_TR(0x6caa8e);
if(r1(R+518)){{goto L6caaa2;}}
}
B6caa90:L6caa90:{c.instructions+=2;NFSU2_TR(0x6caa90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caa95:{NFSU2_TR(0x6caa95);
if(r1(R+518)){{goto L6caaa2;}}
}
B6caa97:L6caa97:{c.instructions+=2;NFSU2_TR(0x6caa97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caa9c:{NFSU2_TR(0x6caa9c);
if(r1(R+518)){{goto L6caaa2;}}
}
B6caa9e:L6caa9e:{c.instructions+=2;NFSU2_TR(0x6caa9e);
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
B6caaa0:{NFSU2_TR(0x6caaa0);
{goto L6caaa5;}
}
B6caaa2:L6caaa2:{c.instructions+=2;NFSU2_TR(0x6caaa2);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6caaa4:{NFSU2_TR(0x6caaa4);
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
B6caaa5:L6caaa5:{c.instructions+=2;NFSU2_TR(0x6caaa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6caaa6:{NFSU2_TR(0x6caaa6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6caaa9:L6caaa9:{c.instructions+=6;NFSU2_TR(0x6caaa9);
__builtin_memmove((R+28),(R+28),4);
}
B6caaab:{NFSU2_TR(0x6caaab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6caaac:{NFSU2_TR(0x6caaac);
__builtin_memmove((R+20),(R+16),4);
}
B6caaae:{NFSU2_TR(0x6caaae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6caab1:{NFSU2_TR(0x6caab1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caab6:{NFSU2_TR(0x6caab6);
if(r1(R+518)){{goto L6caad8;}}
}
B6caab8:L6caab8:{c.instructions+=2;NFSU2_TR(0x6caab8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caabd:{NFSU2_TR(0x6caabd);
if(r1(R+518)){{goto L6caad8;}}
}
B6caabf:L6caabf:{c.instructions+=2;NFSU2_TR(0x6caabf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caac4:{NFSU2_TR(0x6caac4);
if(r1(R+518)){{goto L6caad8;}}
}
B6caac6:L6caac6:{c.instructions+=2;NFSU2_TR(0x6caac6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caacb:{NFSU2_TR(0x6caacb);
if(r1(R+518)){{goto L6caad8;}}
}
B6caacd:L6caacd:{c.instructions+=2;NFSU2_TR(0x6caacd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caad2:{NFSU2_TR(0x6caad2);
if(r1(R+518)){{goto L6caad8;}}
}
B6caad4:L6caad4:{c.instructions+=2;NFSU2_TR(0x6caad4);
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
B6caad6:{NFSU2_TR(0x6caad6);
{goto L6caadb;}
}
B6caad8:L6caad8:{c.instructions+=2;NFSU2_TR(0x6caad8);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6caada:{NFSU2_TR(0x6caada);
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
B6caadb:L6caadb:{c.instructions+=2;NFSU2_TR(0x6caadb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6caadc:{NFSU2_TR(0x6caadc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6caadf:L6caadf:{c.instructions+=20;NFSU2_TR(0x6caadf);
__builtin_memmove((R+28),(R+28),4);
}
B6caae1:{NFSU2_TR(0x6caae1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6caae2:{NFSU2_TR(0x6caae2);
__builtin_memmove((R+20),(R+16),4);
}
B6caae4:{NFSU2_TR(0x6caae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6caae7:{NFSU2_TR(0x6caae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6caaeb:{NFSU2_TR(0x6caaeb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6caaec:{NFSU2_TR(0x6caaec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6caaed:{NFSU2_TR(0x6caaed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6caaee:{NFSU2_TR(0x6caaee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6caaf1:{NFSU2_TR(0x6caaf1);
__builtin_memmove((R+12),(R+4),4);
}
B6caaf3:{NFSU2_TR(0x6caaf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6caaf5:{NFSU2_TR(0x6caaf5);
__builtin_memmove((R+8),(R+4),4);
}
B6caaf7:{NFSU2_TR(0x6caaf7);
w4(R+0,u32(0xfffffull));
}
B6caafc:{NFSU2_TR(0x6caafc);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B6caafe:{NFSU2_TR(0x6caafe);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6cab04:{NFSU2_TR(0x6cab04);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cab08:{NFSU2_TR(0x6cab08);
__builtin_memmove((R+24),(R+4),4);
}
B6cab0a:{NFSU2_TR(0x6cab0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cab0d:{NFSU2_TR(0x6cab0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cab10:{NFSU2_TR(0x6cab10);
if(r1(R+518)){{goto L6cac13;}}
}
B6cab16:L6cab16:{c.instructions+=2;NFSU2_TR(0x6cab16);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cab1c:{NFSU2_TR(0x6cab1c);
if(r1(R+518)){{goto L6cab76;}}
}
B6cab1e:L6cab1e:{c.instructions+=2;NFSU2_TR(0x6cab1e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cab24:{NFSU2_TR(0x6cab24);
if(r1(R+518)){{goto L6cab69;}}
}
B6cab26:L6cab26:{c.instructions+=2;NFSU2_TR(0x6cab26);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cab2c:{NFSU2_TR(0x6cab2c);
if(r1(R+518)){{goto L6cab5c;}}
}
B6cab2e:L6cab2e:{c.instructions+=2;NFSU2_TR(0x6cab2e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cab34:{NFSU2_TR(0x6cab34);
if(r1(R+518)){{goto L6cab4f;}}
}
B6cab36:L6cab36:{c.instructions+=2;NFSU2_TR(0x6cab36);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cab3c:{NFSU2_TR(0x6cab3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cae7a;}}
}
B6cab42:L6cab42:{c.instructions+=3;NFSU2_TR(0x6cab42);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B6cab44:{NFSU2_TR(0x6cab44);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x73c00000ull))));
}
B6cab4a:{NFSU2_TR(0x6cab4a);
{goto L6cad10;}
}
B6cab4f:L6cab4f:{c.instructions+=3;NFSU2_TR(0x6cab4f);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B6cab51:{NFSU2_TR(0x6cab51);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x73b00000ull))));
}
B6cab57:{NFSU2_TR(0x6cab57);
{goto L6cad10;}
}
B6cab5c:L6cab5c:{c.instructions+=3;NFSU2_TR(0x6cab5c);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B6cab5e:{NFSU2_TR(0x6cab5e);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x73a00000ull))));
}
B6cab64:{NFSU2_TR(0x6cab64);
{goto L6cad10;}
}
B6cab69:L6cab69:{c.instructions+=3;NFSU2_TR(0x6cab69);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B6cab6b:{NFSU2_TR(0x6cab6b);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x73900000ull))));
}
B6cab71:{NFSU2_TR(0x6cab71);
{goto L6cad10;}
}
B6cab76:L6cab76:{c.instructions+=14;NFSU2_TR(0x6cab76);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cab79:{NFSU2_TR(0x6cab79);
__builtin_memmove((R+4),(R+24),4);
}
B6cab7b:{NFSU2_TR(0x6cab7b);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B6cab7d:{NFSU2_TR(0x6cab7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cab80:{NFSU2_TR(0x6cab80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cab82:{NFSU2_TR(0x6cab82);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cab85:{NFSU2_TR(0x6cab85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cab88:{NFSU2_TR(0x6cab88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cab8b:{NFSU2_TR(0x6cab8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cab8e:{NFSU2_TR(0x6cab8e);
__builtin_memmove((R+24),(R+4),4);
}
B6cab90:{NFSU2_TR(0x6cab90);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x73000000ull))));
}
B6cab96:{NFSU2_TR(0x6cab96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x208ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6cab9c:{NFSU2_TR(0x6cab9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cab9f:{NFSU2_TR(0x6cab9f);
if(r1(R+518)){{goto L6cac08;}}
}
B6caba1:L6caba1:{c.instructions+=3;NFSU2_TR(0x6caba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6caba3:{NFSU2_TR(0x6caba3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caba5:{NFSU2_TR(0x6caba5);
if(r1(R+518)){{goto L6cabeb;}}
}
B6caba7:L6caba7:{c.instructions+=3;NFSU2_TR(0x6caba7);
u8 U[4];
w4(U+0,u32(0x69ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6caba9:{NFSU2_TR(0x6caba9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cabaa:{NFSU2_TR(0x6cabaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cabafull));
TAIL_STATIC(0x75cf10u,75c);
}
B6cabaf:L6cabaf:{c.instructions+=4;NFSU2_TR(0x6cabaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cabb1:{NFSU2_TR(0x6cabb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cabb2:{NFSU2_TR(0x6cabb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cabb3:{NFSU2_TR(0x6cabb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cabe8;}}
}
B6cabb5:L6cabb5:{c.instructions+=3;NFSU2_TR(0x6cabb5);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cabb7:{NFSU2_TR(0x6cabb7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6cabb9:{NFSU2_TR(0x6cabb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cabbeull));
TAIL_STATIC(0x75cf10u,75c);
}
B6cabbe:L6cabbe:{c.instructions+=4;NFSU2_TR(0x6cabbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cabc0:{NFSU2_TR(0x6cabc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cabc1:{NFSU2_TR(0x6cabc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cabc2:{NFSU2_TR(0x6cabc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cabe8;}}
}
B6cabc4:L6cabc4:{c.instructions+=3;NFSU2_TR(0x6cabc4);
u8 U[4];
w4(U+0,u32(0x62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cabc6:{NFSU2_TR(0x6cabc6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6cabc8:{NFSU2_TR(0x6cabc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cabcdull));
TAIL_STATIC(0x75cf10u,75c);
}
B6cabcd:L6cabcd:{c.instructions+=4;NFSU2_TR(0x6cabcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cabcf:{NFSU2_TR(0x6cabcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cabd0:{NFSU2_TR(0x6cabd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cabd1:{NFSU2_TR(0x6cabd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cabe8;}}
}
B6cabd3:L6cabd3:{c.instructions+=3;NFSU2_TR(0x6cabd3);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cabd5:{NFSU2_TR(0x6cabd5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6cabd7:{NFSU2_TR(0x6cabd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cabdcull));
TAIL_STATIC(0x75cf10u,75c);
}
B6cabdc:L6cabdc:{c.instructions+=4;NFSU2_TR(0x6cabdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cabde:{NFSU2_TR(0x6cabde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cabdf:{NFSU2_TR(0x6cabdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cabe0:{NFSU2_TR(0x6cabe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cabe8;}}
}
B6cabe2:L6cabe2:{c.instructions+=2;NFSU2_TR(0x6cabe2);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cabe6:{NFSU2_TR(0x6cabe6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cac05;}}
}
B6cabe8:L6cabe8:{c.instructions+=1;NFSU2_TR(0x6cabe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cabeb:L6cabeb:{c.instructions+=7;NFSU2_TR(0x6cabeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cabee:{NFSU2_TR(0x6cabee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cabf1:{NFSU2_TR(0x6cabf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cabf3:{NFSU2_TR(0x6cabf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cabf6:{NFSU2_TR(0x6cabf6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cabf9:{NFSU2_TR(0x6cabf9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cabfd:{NFSU2_TR(0x6cabfd);
if(r1(R+518)){{goto L6cad10;}}
}
B6cac03:L6cac03:{c.instructions+=1;NFSU2_TR(0x6cac03);
{goto L6cac08;}
}
B6cac05:L6cac05:{c.instructions+=1;NFSU2_TR(0x6cac05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cac08:L6cac08:{c.instructions+=2;NFSU2_TR(0x6cac08);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x73b00000ull))));
}
B6cac0e:{NFSU2_TR(0x6cac0e);
{goto L6cad07;}
}
B6cac13:L6cac13:{c.instructions+=2;NFSU2_TR(0x6cac13);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cac19:{NFSU2_TR(0x6cac19);
if(r1(R+518)){{goto L6cac73;}}
}
B6cac1b:L6cac1b:{c.instructions+=2;NFSU2_TR(0x6cac1b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cac21:{NFSU2_TR(0x6cac21);
if(r1(R+518)){{goto L6cac66;}}
}
B6cac23:L6cac23:{c.instructions+=2;NFSU2_TR(0x6cac23);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cac29:{NFSU2_TR(0x6cac29);
if(r1(R+518)){{goto L6cac59;}}
}
B6cac2b:L6cac2b:{c.instructions+=2;NFSU2_TR(0x6cac2b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cac31:{NFSU2_TR(0x6cac31);
if(r1(R+518)){{goto L6cac4c;}}
}
B6cac33:L6cac33:{c.instructions+=2;NFSU2_TR(0x6cac33);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cac39:{NFSU2_TR(0x6cac39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cae7a;}}
}
B6cac3f:L6cac3f:{c.instructions+=3;NFSU2_TR(0x6cac3f);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B6cac41:{NFSU2_TR(0x6cac41);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x74000000ull))));
}
B6cac47:{NFSU2_TR(0x6cac47);
{goto L6cad10;}
}
B6cac4c:L6cac4c:{c.instructions+=3;NFSU2_TR(0x6cac4c);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B6cac4e:{NFSU2_TR(0x6cac4e);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x73f00000ull))));
}
B6cac54:{NFSU2_TR(0x6cac54);
{goto L6cad10;}
}
B6cac59:L6cac59:{c.instructions+=3;NFSU2_TR(0x6cac59);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B6cac5b:{NFSU2_TR(0x6cac5b);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x73e00000ull))));
}
B6cac61:{NFSU2_TR(0x6cac61);
{goto L6cad10;}
}
B6cac66:L6cac66:{c.instructions+=3;NFSU2_TR(0x6cac66);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B6cac68:{NFSU2_TR(0x6cac68);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x73d00000ull))));
}
B6cac6e:{NFSU2_TR(0x6cac6e);
{goto L6cad10;}
}
B6cac73:L6cac73:{c.instructions+=14;NFSU2_TR(0x6cac73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cac76:{NFSU2_TR(0x6cac76);
__builtin_memmove((R+4),(R+24),4);
}
B6cac78:{NFSU2_TR(0x6cac78);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B6cac7a:{NFSU2_TR(0x6cac7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cac7d:{NFSU2_TR(0x6cac7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cac7f:{NFSU2_TR(0x6cac7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cac82:{NFSU2_TR(0x6cac82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cac85:{NFSU2_TR(0x6cac85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cac88:{NFSU2_TR(0x6cac88);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cac8b:{NFSU2_TR(0x6cac8b);
__builtin_memmove((R+24),(R+4),4);
}
B6cac8d:{NFSU2_TR(0x6cac8d);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x73100000ull))));
}
B6cac93:{NFSU2_TR(0x6cac93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x208ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6cac99:{NFSU2_TR(0x6cac99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cac9c:{NFSU2_TR(0x6cac9c);
if(r1(R+518)){{goto L6cad01;}}
}
B6cac9e:L6cac9e:{c.instructions+=3;NFSU2_TR(0x6cac9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6caca0:{NFSU2_TR(0x6caca0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caca2:{NFSU2_TR(0x6caca2);
if(r1(R+518)){{goto L6cace8;}}
}
B6caca4:L6caca4:{c.instructions+=3;NFSU2_TR(0x6caca4);
u8 U[4];
w4(U+0,u32(0x69ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6caca6:{NFSU2_TR(0x6caca6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6caca7:{NFSU2_TR(0x6caca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cacacull));
TAIL_STATIC(0x75cf10u,75c);
}
B6cacac:L6cacac:{c.instructions+=4;NFSU2_TR(0x6cacac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cacae:{NFSU2_TR(0x6cacae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cacaf:{NFSU2_TR(0x6cacaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cacb0:{NFSU2_TR(0x6cacb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cace5;}}
}
B6cacb2:L6cacb2:{c.instructions+=3;NFSU2_TR(0x6cacb2);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cacb4:{NFSU2_TR(0x6cacb4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6cacb6:{NFSU2_TR(0x6cacb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cacbbull));
TAIL_STATIC(0x75cf10u,75c);
}
B6cacbb:L6cacbb:{c.instructions+=4;NFSU2_TR(0x6cacbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cacbd:{NFSU2_TR(0x6cacbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cacbe:{NFSU2_TR(0x6cacbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cacbf:{NFSU2_TR(0x6cacbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cace5;}}
}
B6cacc1:L6cacc1:{c.instructions+=3;NFSU2_TR(0x6cacc1);
u8 U[4];
w4(U+0,u32(0x62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cacc3:{NFSU2_TR(0x6cacc3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6cacc5:{NFSU2_TR(0x6cacc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6caccaull));
TAIL_STATIC(0x75cf10u,75c);
}
B6cacca:L6cacca:{c.instructions+=4;NFSU2_TR(0x6cacca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caccc:{NFSU2_TR(0x6caccc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6caccd:{NFSU2_TR(0x6caccd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cacce:{NFSU2_TR(0x6cacce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cace5;}}
}
B6cacd0:L6cacd0:{c.instructions+=3;NFSU2_TR(0x6cacd0);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cacd2:{NFSU2_TR(0x6cacd2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6cacd4:{NFSU2_TR(0x6cacd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cacd9ull));
TAIL_STATIC(0x75cf10u,75c);
}
B6cacd9:L6cacd9:{c.instructions+=4;NFSU2_TR(0x6cacd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cacdb:{NFSU2_TR(0x6cacdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cacdc:{NFSU2_TR(0x6cacdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cacdd:{NFSU2_TR(0x6cacdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cace5;}}
}
B6cacdf:L6cacdf:{c.instructions+=2;NFSU2_TR(0x6cacdf);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cace3:{NFSU2_TR(0x6cace3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cacfe;}}
}
B6cace5:L6cace5:{c.instructions+=1;NFSU2_TR(0x6cace5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cace8:L6cace8:{c.instructions+=7;NFSU2_TR(0x6cace8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6caceb:{NFSU2_TR(0x6caceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cacee:{NFSU2_TR(0x6cacee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cacf0:{NFSU2_TR(0x6cacf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cacf3:{NFSU2_TR(0x6cacf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cacf6:{NFSU2_TR(0x6cacf6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cacfa:{NFSU2_TR(0x6cacfa);
if(r1(R+518)){{goto L6cad10;}}
}
B6cacfc:L6cacfc:{c.instructions+=1;NFSU2_TR(0x6cacfc);
{goto L6cad01;}
}
B6cacfe:L6cacfe:{c.instructions+=1;NFSU2_TR(0x6cacfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cad01:L6cad01:{c.instructions+=1;NFSU2_TR(0x6cad01);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x73f00000ull))));
}
B6cad07:L6cad07:{c.instructions+=2;NFSU2_TR(0x6cad07);
__builtin_memmove((R+24),(R+4),4);
}
B6cad09:{NFSU2_TR(0x6cad09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cad10:L6cad10:{c.instructions+=2;NFSU2_TR(0x6cad10);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cad12:{NFSU2_TR(0x6cad12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cad17ull));
TAIL_STATIC(0x699317u,699);
}
B6cad17:L6cad17:{c.instructions+=2;NFSU2_TR(0x6cad17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cad19:{NFSU2_TR(0x6cad19);
if(r1(R+518)){{goto L6cad29;}}
}
B6cad1b:L6cad1b:{c.instructions+=2;NFSU2_TR(0x6cad1b);
__builtin_memmove((R+4),(R+0),4);
}
B6cad1d:{NFSU2_TR(0x6cad1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cad22ull));
TAIL_STATIC(0x698e7du,698);
}
B6cad22:L6cad22:{c.instructions+=3;NFSU2_TR(0x6cad22);
__builtin_memmove((R+28),(R+0),4);
}
B6cad24:{NFSU2_TR(0x6cad24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cad27:{NFSU2_TR(0x6cad27);
{goto L6cad30;}
}
B6cad29:L6cad29:{c.instructions+=2;NFSU2_TR(0x6cad29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cad2d:{NFSU2_TR(0x6cad2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cad30:L6cad30:{c.instructions+=3;NFSU2_TR(0x6cad30);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cad32:{NFSU2_TR(0x6cad32);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cad34:{NFSU2_TR(0x6cad34);
if(r1(R+518)){{goto L6cae7a;}}
}
B6cad3a:L6cad3a:{c.instructions+=2;NFSU2_TR(0x6cad3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cad41:{NFSU2_TR(0x6cad41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cad51;}}
}
B6cad43:L6cad43:{c.instructions+=2;NFSU2_TR(0x6cad43);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cad46:{NFSU2_TR(0x6cad46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cad51;}}
}
B6cad48:L6cad48:{c.instructions+=4;NFSU2_TR(0x6cad48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cad49:{NFSU2_TR(0x6cad49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cad4c:{NFSU2_TR(0x6cad4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cad4f:{NFSU2_TR(0x6cad4f);
{goto L6cad59;}
}
B6cad51:L6cad51:{c.instructions+=5;NFSU2_TR(0x6cad51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cad52:{NFSU2_TR(0x6cad52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cad55:{NFSU2_TR(0x6cad55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cad56:{NFSU2_TR(0x6cad56);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B6cad58:{NFSU2_TR(0x6cad58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cad59:L6cad59:{c.instructions+=3;NFSU2_TR(0x6cad59);
__builtin_memmove((R+4),(R+28),4);
}
B6cad5b:{NFSU2_TR(0x6cad5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cad5c:{NFSU2_TR(0x6cad5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cad61ull));
TAIL_STATIC(0x699362u,699);
}
B6cad61:L6cad61:{c.instructions+=3;NFSU2_TR(0x6cad61);
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
B6cad63:{NFSU2_TR(0x6cad63);
__builtin_memmove((R+4),(R+28),4);
}
B6cad65:{NFSU2_TR(0x6cad65);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cae73;}}
}
B6cad6b:L6cad6b:{c.instructions+=3;NFSU2_TR(0x6cad6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cad6e:{NFSU2_TR(0x6cad6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cad6f:{NFSU2_TR(0x6cad6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cad74ull));
TAIL_STATIC(0x698eb3u,698);
}
B6cad74:L6cad74:{c.instructions+=2;NFSU2_TR(0x6cad74);
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
B6cad76:{NFSU2_TR(0x6cad76);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6cad7f;}}
}
B6cad78:L6cad78:{c.instructions+=2;NFSU2_TR(0x6cad78);
__builtin_memmove((R+4),(R+28),4);
}
B6cad7a:{NFSU2_TR(0x6cad7a);
{goto L6cae73;}
}
B6cad7f:L6cad7f:{c.instructions+=3;NFSU2_TR(0x6cad7f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cad81:{NFSU2_TR(0x6cad81);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cad84:{NFSU2_TR(0x6cad84);
if(r1(R+518)){{goto L6cada8;}}
}
B6cad86:L6cad86:{c.instructions+=6;NFSU2_TR(0x6cad86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cad89:{NFSU2_TR(0x6cad89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cad8c:{NFSU2_TR(0x6cad8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cad8f:{NFSU2_TR(0x6cad8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cad92:{NFSU2_TR(0x6cad92);
__builtin_memmove((R+0),(R+4),4);
}
B6cad94:{NFSU2_TR(0x6cad94);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6cad97:L6cad97:{c.instructions+=1;NFSU2_TR(0x6cad97);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cad99;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cad97u);}goto L6cad97;}
}
B6cad99:L6cad99:{c.instructions+=2;NFSU2_TR(0x6cad99);
__builtin_memmove((R+4),(R+0),4);
}
B6cad9b:{NFSU2_TR(0x6cad9b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6cad9e:L6cad9e:{c.instructions+=1;NFSU2_TR(0x6cad9e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6cada0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cad9eu);}goto L6cad9e;}
}
B6cada0:L6cada0:{c.instructions+=3;NFSU2_TR(0x6cada0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cada3:{NFSU2_TR(0x6cada3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cada6:{NFSU2_TR(0x6cada6);
{goto L6cadee;}
}
B6cada8:L6cada8:{c.instructions+=9;NFSU2_TR(0x6cada8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cada9:{NFSU2_TR(0x6cada9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6cadab:{NFSU2_TR(0x6cadab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cadac:{NFSU2_TR(0x6cadac);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6cadaf:{NFSU2_TR(0x6cadaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cadb0:{NFSU2_TR(0x6cadb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cadb1:{NFSU2_TR(0x6cadb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cadb7:{NFSU2_TR(0x6cadb7);
__builtin_memmove((R+4),(R+12),4);
}
B6cadb9:{NFSU2_TR(0x6cadb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cadbeull));
TAIL_STATIC(0x699c39u,699);
}
B6cadbe:L6cadbe:{c.instructions+=5;NFSU2_TR(0x6cadbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cadc1:{NFSU2_TR(0x6cadc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6cadc3:{NFSU2_TR(0x6cadc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cadc6:{NFSU2_TR(0x6cadc6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cadc9:{NFSU2_TR(0x6cadc9);
if(r1(R+518)){{goto L6cae7a;}}
}
B6cadcf:L6cadcf:{c.instructions+=11;NFSU2_TR(0x6cadcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cadd2:{NFSU2_TR(0x6cadd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cadd5:{NFSU2_TR(0x6cadd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cadd8:{NFSU2_TR(0x6cadd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cadda:{NFSU2_TR(0x6cadda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6caddc:{NFSU2_TR(0x6caddc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6caddf:{NFSU2_TR(0x6caddf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cade2:{NFSU2_TR(0x6cade2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cade5:{NFSU2_TR(0x6cade5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cade8:{NFSU2_TR(0x6cade8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cadeb:{NFSU2_TR(0x6cadeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cadee:L6cadee:{c.instructions+=6;NFSU2_TR(0x6cadee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cadf1:{NFSU2_TR(0x6cadf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cadf4:{NFSU2_TR(0x6cadf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cadf7:{NFSU2_TR(0x6cadf7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cadfa:{NFSU2_TR(0x6cadfa);
__builtin_memmove((R+0),(R+4),4);
}
B6cadfc:{NFSU2_TR(0x6cadfc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6cadff:L6cadff:{c.instructions+=1;NFSU2_TR(0x6cadff);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cae01;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cadffu);}goto L6cadff;}
}
B6cae01:L6cae01:{c.instructions+=4;NFSU2_TR(0x6cae01);
__builtin_memmove((R+4),(R+0),4);
}
B6cae03:{NFSU2_TR(0x6cae03);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6cae06:{NFSU2_TR(0x6cae06);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cae08:{NFSU2_TR(0x6cae08);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B6cae0b:L6cae0b:{c.instructions+=1;NFSU2_TR(0x6cae0b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6cae0d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cae0bu);}goto L6cae0b;}
}
B6cae0d:L6cae0d:{c.instructions+=1;NFSU2_TR(0x6cae0d);
if(r1(R+518)){{goto L6cae87;}}
}
B6cae0f:L6cae0f:{c.instructions+=3;NFSU2_TR(0x6cae0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cae12:{NFSU2_TR(0x6cae12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cae15:{NFSU2_TR(0x6cae15);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cae40;}}
}
B6cae17:L6cae17:{c.instructions+=3;NFSU2_TR(0x6cae17);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cae1a:{NFSU2_TR(0x6cae1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cae1d:{NFSU2_TR(0x6cae1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cae20:L6cae20:{c.instructions+=5;NFSU2_TR(0x6cae20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cae22:{NFSU2_TR(0x6cae22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cae25:{NFSU2_TR(0x6cae25);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cae28:{NFSU2_TR(0x6cae28);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cae2c:{NFSU2_TR(0x6cae2c);
if(r1(R+518)){{goto L6cae3a;}}
}
B6cae2e:L6cae2e:{c.instructions+=3;NFSU2_TR(0x6cae2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cae31:{NFSU2_TR(0x6cae31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cae34:{NFSU2_TR(0x6cae34);
if(r1(R+512)){{goto L6cae3a;}}
}
B6cae36:L6cae36:{c.instructions+=2;NFSU2_TR(0x6cae36);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cae37:{NFSU2_TR(0x6cae37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cae3a:L6cae3a:{c.instructions+=3;NFSU2_TR(0x6cae3a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6cae3d:{NFSU2_TR(0x6cae3d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6cae3e:{NFSU2_TR(0x6cae3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cae20u);}goto L6cae20;}}
}
B6cae40:L6cae40:{c.instructions+=2;NFSU2_TR(0x6cae40);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cae47:{NFSU2_TR(0x6cae47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cae65;}}
}
B6cae49:L6cae49:{c.instructions+=9;NFSU2_TR(0x6cae49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cae4a:{NFSU2_TR(0x6cae4a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6cae4c:{NFSU2_TR(0x6cae4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cae4d:{NFSU2_TR(0x6cae4d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6cae50:{NFSU2_TR(0x6cae50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cae52:{NFSU2_TR(0x6cae52);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cae55:{NFSU2_TR(0x6cae55);
__builtin_memmove((R+4),(R+12),4);
}
B6cae57:{NFSU2_TR(0x6cae57);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cae5a:{NFSU2_TR(0x6cae5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cae5full));
TAIL_STATIC(0x699c39u,699);
}
B6cae5f:L6cae5f:{c.instructions+=1;NFSU2_TR(0x6cae5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cae65:L6cae65:{c.instructions+=3;NFSU2_TR(0x6cae65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cae6b:{NFSU2_TR(0x6cae6b);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6cae6e:{NFSU2_TR(0x6cae6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cae7e;}}
}
B6cae70:L6cae70:{c.instructions+=1;NFSU2_TR(0x6cae70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cae73:L6cae73:{c.instructions+=2;NFSU2_TR(0x6cae73);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cae75:{NFSU2_TR(0x6cae75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cae7aull));
TAIL_STATIC(0x6739efu,673);
}
B6cae7a:L6cae7a:{c.instructions+=2;NFSU2_TR(0x6cae7a);
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
B6cae7c:{NFSU2_TR(0x6cae7c);
{goto L6cae8a;}
}
B6cae7e:L6cae7e:{c.instructions+=3;NFSU2_TR(0x6cae7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cae81:{NFSU2_TR(0x6cae81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cae84:{NFSU2_TR(0x6cae84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cae87:L6cae87:{c.instructions+=1;NFSU2_TR(0x6cae87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cae8a:L6cae8a:{c.instructions+=5;NFSU2_TR(0x6cae8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cae8b:{NFSU2_TR(0x6cae8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cae8c:{NFSU2_TR(0x6cae8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cae8d:{NFSU2_TR(0x6cae8d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cae8e:{NFSU2_TR(0x6cae8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cae91:L6cae91:{c.instructions+=8;NFSU2_TR(0x6cae91);
__builtin_memmove((R+28),(R+28),4);
}
B6cae93:{NFSU2_TR(0x6cae93);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cae94:{NFSU2_TR(0x6cae94);
__builtin_memmove((R+20),(R+16),4);
}
B6cae96:{NFSU2_TR(0x6cae96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6cae99:{NFSU2_TR(0x6cae99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cae9a:{NFSU2_TR(0x6cae9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cae9b:{NFSU2_TR(0x6cae9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cae9c:{NFSU2_TR(0x6cae9c);
__builtin_memmove((R+24),(R+4),4);
}
B6cae9e:L6cae9e:{c.instructions+=5;NFSU2_TR(0x6cae9e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6caea0:{NFSU2_TR(0x6caea0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6caea3:{NFSU2_TR(0x6caea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6caea6:{NFSU2_TR(0x6caea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6caea9:{NFSU2_TR(0x6caea9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cafc0;}}
}
B6caeaf:L6caeaf:{c.instructions+=3;NFSU2_TR(0x6caeaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6caeb2:{NFSU2_TR(0x6caeb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6caeb5:{NFSU2_TR(0x6caeb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6caebaull));
TAIL_STATIC(0x6990b3u,699);
}
B6caeba:L6caeba:{c.instructions+=2;NFSU2_TR(0x6caeba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caebc:{NFSU2_TR(0x6caebc);
if(r1(R+518)){{goto L6cafa9;}}
}
B6caec2:L6caec2:{c.instructions+=5;NFSU2_TR(0x6caec2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6caec5:{NFSU2_TR(0x6caec5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6caec8:{NFSU2_TR(0x6caec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6caecf:{NFSU2_TR(0x6caecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6caed2:{NFSU2_TR(0x6caed2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6caf7d;}}
}
B6caed8:L6caed8:{c.instructions+=4;NFSU2_TR(0x6caed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6caedb:{NFSU2_TR(0x6caedb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6caede:{NFSU2_TR(0x6caede);
__builtin_memmove((R+4),(R+28),4);
}
B6caee0:{NFSU2_TR(0x6caee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6caee5ull));
TAIL_STATIC(0x6990ebu,699);
}
B6caee5:L6caee5:{c.instructions+=2;NFSU2_TR(0x6caee5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caee7:{NFSU2_TR(0x6caee7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6caf74;}}
}
B6caeed:L6caeed:{c.instructions+=4;NFSU2_TR(0x6caeed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6caeef:{NFSU2_TR(0x6caeef);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6caef4:{NFSU2_TR(0x6caef4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caef9:{NFSU2_TR(0x6caef9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6caf70;}}
}
B6caefb:L6caefb:{c.instructions+=3;NFSU2_TR(0x6caefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6caefe:{NFSU2_TR(0x6caefe);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caf00:{NFSU2_TR(0x6caf00);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6caf61;}}
}
B6caf02:L6caf02:{c.instructions+=6;NFSU2_TR(0x6caf02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6caf05:{NFSU2_TR(0x6caf05);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6caf08:{NFSU2_TR(0x6caf08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6caf0b:{NFSU2_TR(0x6caf0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6caf0e:{NFSU2_TR(0x6caf0e);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6caf10:{NFSU2_TR(0x6caf10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6caf13:L6caf13:{c.instructions+=8;NFSU2_TR(0x6caf13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6caf16:{NFSU2_TR(0x6caf16);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6caf19:{NFSU2_TR(0x6caf19);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6caf1c:{NFSU2_TR(0x6caf1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6caf1e:{NFSU2_TR(0x6caf1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6caf21:{NFSU2_TR(0x6caf21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6caf24:{NFSU2_TR(0x6caf24);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6caf27:{NFSU2_TR(0x6caf27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6caf51;}}
}
B6caf29:L6caf29:{c.instructions+=3;NFSU2_TR(0x6caf29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6caf2c:{NFSU2_TR(0x6caf2c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6caf2f:{NFSU2_TR(0x6caf2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6caf51;}}
}
B6caf31:L6caf31:{c.instructions+=3;NFSU2_TR(0x6caf31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6caf34:{NFSU2_TR(0x6caf34);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6caf37:{NFSU2_TR(0x6caf37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6caf51;}}
}
B6caf39:L6caf39:{c.instructions+=3;NFSU2_TR(0x6caf39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6caf3c:{NFSU2_TR(0x6caf3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6caf3f:{NFSU2_TR(0x6caf3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6caf51;}}
}
B6caf41:L6caf41:{c.instructions+=3;NFSU2_TR(0x6caf41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6caf44:{NFSU2_TR(0x6caf44);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6caf47:{NFSU2_TR(0x6caf47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6caf51;}}
}
B6caf49:L6caf49:{c.instructions+=3;NFSU2_TR(0x6caf49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6caf4c:{NFSU2_TR(0x6caf4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6caf4f:{NFSU2_TR(0x6caf4f);
if(r1(R+518)){{goto L6caf55;}}
}
B6caf51:L6caf51:{c.instructions+=1;NFSU2_TR(0x6caf51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6caf55:L6caf55:{c.instructions+=3;NFSU2_TR(0x6caf55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6caf59:{NFSU2_TR(0x6caf59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6caf5c:{NFSU2_TR(0x6caf5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6caf13u);}goto L6caf13;}}
}
B6caf5e:L6caf5e:{c.instructions+=1;NFSU2_TR(0x6caf5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6caf61:L6caf61:{c.instructions+=4;NFSU2_TR(0x6caf61);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6caf62:{NFSU2_TR(0x6caf62);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6caf65:{NFSU2_TR(0x6caf65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6caf68:{NFSU2_TR(0x6caf68);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6caed8u);}goto L6caed8;}}
}
B6caf6e:L6caf6e:{c.instructions+=1;NFSU2_TR(0x6caf6e);
{goto L6caf74;}
}
B6caf70:L6caf70:{c.instructions+=1;NFSU2_TR(0x6caf70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6caf74:L6caf74:{c.instructions+=3;NFSU2_TR(0x6caf74);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6caf78:{NFSU2_TR(0x6caf78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6caf7b:{NFSU2_TR(0x6caf7b);
if(r1(R+518)){{goto L6cafa9;}}
}
B6caf7d:L6caf7d:{c.instructions+=4;NFSU2_TR(0x6caf7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6caf80:{NFSU2_TR(0x6caf80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6caf87:{NFSU2_TR(0x6caf87);
__builtin_memmove((R+12),(R+28),4);
}
B6caf89:{NFSU2_TR(0x6caf89);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cafa9;}}
}
B6caf8b:L6caf8b:{c.instructions+=3;NFSU2_TR(0x6caf8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6caf8e:{NFSU2_TR(0x6caf8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6caf91:{NFSU2_TR(0x6caf91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6caf96ull));
TAIL_STATIC(0x6990ebu,699);
}
B6caf96:L6caf96:{c.instructions+=2;NFSU2_TR(0x6caf96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6caf98:{NFSU2_TR(0x6caf98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cafa9;}}
}
B6caf9a:L6caf9a:{c.instructions+=6;NFSU2_TR(0x6caf9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6caf9d:{NFSU2_TR(0x6caf9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cafa0:{NFSU2_TR(0x6cafa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6cafa3:{NFSU2_TR(0x6cafa3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6cafa4:{NFSU2_TR(0x6cafa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6cafa7:{NFSU2_TR(0x6cafa7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6caf8bu);}goto L6caf8b;}}
}
B6cafa9:L6cafa9:{c.instructions+=4;NFSU2_TR(0x6cafa9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6cafaa:{NFSU2_TR(0x6cafaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6cafad:{NFSU2_TR(0x6cafad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cafb0:{NFSU2_TR(0x6cafb0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6caeafu);}goto L6caeaf;}}
}
B6cafb6:L6cafb6:{c.instructions+=2;NFSU2_TR(0x6cafb6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cafba:{NFSU2_TR(0x6cafba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cae9eu);}goto L6cae9e;}}
}
B6cafc0:L6cafc0:{c.instructions+=6;NFSU2_TR(0x6cafc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cafc1:{NFSU2_TR(0x6cafc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cafc2:{NFSU2_TR(0x6cafc2);
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
B6cafc4:{NFSU2_TR(0x6cafc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cafc5:{NFSU2_TR(0x6cafc5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cafc6:{NFSU2_TR(0x6cafc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cafc7:L6cafc7:{c.instructions+=14;NFSU2_TR(0x6cafc7);
__builtin_memmove((R+28),(R+28),4);
}
B6cafc9:{NFSU2_TR(0x6cafc9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cafca:{NFSU2_TR(0x6cafca);
__builtin_memmove((R+20),(R+16),4);
}
B6cafcc:{NFSU2_TR(0x6cafcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x838ull))));
}
B6cafd2:{NFSU2_TR(0x6cafd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cafd5:{NFSU2_TR(0x6cafd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cafd7:{NFSU2_TR(0x6cafd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cafda:{NFSU2_TR(0x6cafda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cafdb:{NFSU2_TR(0x6cafdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cafdc:{NFSU2_TR(0x6cafdc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cafdd:{NFSU2_TR(0x6cafdd);
__builtin_memmove((R+28),(R+4),4);
}
B6cafdf:{NFSU2_TR(0x6cafdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cafe2:{NFSU2_TR(0x6cafe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cafe5:{NFSU2_TR(0x6cafe5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x6cb843u,6cb);}
}
B6cafeb:L6cafeb:{c.instructions+=7;NFSU2_TR(0x6cafeb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6cafed:{NFSU2_TR(0x6cafed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6caff0:{NFSU2_TR(0x6caff0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6caff3:{NFSU2_TR(0x6caff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6caff5:{NFSU2_TR(0x6caff5);
__builtin_memmove((R+4),(R+0),4);
}
B6caff7:{NFSU2_TR(0x6caff7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6caffd:{NFSU2_TR(0x6caffd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
TAIL_STATIC(0x6cb002u,6cb);
}
XIT:NFSU2_TR_EXIT(0x6ca,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
