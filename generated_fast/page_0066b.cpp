#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_65a(u8* __restrict R,Cpu& c);
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_65c(u8* __restrict R,Cpu& c);
u32 body_661(u8* __restrict R,Cpu& c);
u32 body_664(u8* __restrict R,Cpu& c);
u32 body_665(u8* __restrict R,Cpu& c);
u32 body_66a(u8* __restrict R,Cpu& c);
u32 body_66c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x66b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x66b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_66b(u8* __restrict R,Cpu& c);
u32 page_66b(Cpu& c){return body_66b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_66b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x66b005:goto L66b005;
case 0x66b006:c.instructions+=10;goto B66b006;
case 0x66b008:c.instructions+=9;goto B66b008;
case 0x66b00b:c.instructions+=8;goto B66b00b;
case 0x66b00c:c.instructions+=7;goto B66b00c;
case 0x66b00d:c.instructions+=6;goto B66b00d;
case 0x66b010:c.instructions+=5;goto B66b010;
case 0x66b013:c.instructions+=4;goto B66b013;
case 0x66b016:c.instructions+=3;goto B66b016;
case 0x66b019:c.instructions+=2;goto B66b019;
case 0x66b01c:c.instructions+=1;goto B66b01c;
case 0x66b021:goto L66b021;
case 0x66b027:c.instructions+=5;goto B66b027;
case 0x66b02d:c.instructions+=4;goto B66b02d;
case 0x66b034:c.instructions+=3;goto B66b034;
case 0x66b037:c.instructions+=2;goto B66b037;
case 0x66b038:c.instructions+=1;goto B66b038;
case 0x66b03d:goto L66b03d;
case 0x66b043:c.instructions+=2;goto B66b043;
case 0x66b049:c.instructions+=1;goto B66b049;
case 0x66b04e:goto L66b04e;
case 0x66b051:c.instructions+=4;goto B66b051;
case 0x66b057:c.instructions+=3;goto B66b057;
case 0x66b059:c.instructions+=2;goto B66b059;
case 0x66b05f:c.instructions+=1;goto B66b05f;
case 0x66b065:goto L66b065;
case 0x66b06b:c.instructions+=1;goto B66b06b;
case 0x66b071:goto L66b071;
case 0x66b073:c.instructions+=1;goto B66b073;
case 0x66b079:goto L66b079;
case 0x66b07f:c.instructions+=3;goto B66b07f;
case 0x66b081:c.instructions+=2;goto B66b081;
case 0x66b084:c.instructions+=1;goto B66b084;
case 0x66b086:goto L66b086;
case 0x66b088:goto L66b088;
case 0x66b08a:c.instructions+=1;goto B66b08a;
case 0x66b08d:goto L66b08d;
case 0x66b08f:goto L66b08f;
case 0x66b095:c.instructions+=2;goto B66b095;
case 0x66b099:c.instructions+=1;goto B66b099;
case 0x66b09f:goto L66b09f;
case 0x66b0a1:goto L66b0a1;
case 0x66b0a3:goto L66b0a3;
case 0x66b0a7:c.instructions+=14;goto B66b0a7;
case 0x66b0ad:c.instructions+=13;goto B66b0ad;
case 0x66b0b3:c.instructions+=12;goto B66b0b3;
case 0x66b0b6:c.instructions+=11;goto B66b0b6;
case 0x66b0bc:c.instructions+=10;goto B66b0bc;
case 0x66b0bf:c.instructions+=9;goto B66b0bf;
case 0x66b0c1:c.instructions+=8;goto B66b0c1;
case 0x66b0c7:c.instructions+=7;goto B66b0c7;
case 0x66b0cd:c.instructions+=6;goto B66b0cd;
case 0x66b0cf:c.instructions+=5;goto B66b0cf;
case 0x66b0d5:c.instructions+=4;goto B66b0d5;
case 0x66b0d9:c.instructions+=3;goto B66b0d9;
case 0x66b0dc:c.instructions+=2;goto B66b0dc;
case 0x66b0df:c.instructions+=1;goto B66b0df;
case 0x66b0e1:goto L66b0e1;
case 0x66b0e4:goto L66b0e4;
case 0x66b0e8:c.instructions+=10;goto B66b0e8;
case 0x66b0ee:c.instructions+=9;goto B66b0ee;
case 0x66b0f4:c.instructions+=8;goto B66b0f4;
case 0x66b0f8:c.instructions+=7;goto B66b0f8;
case 0x66b0fb:c.instructions+=6;goto B66b0fb;
case 0x66b0fd:c.instructions+=5;goto B66b0fd;
case 0x66b101:c.instructions+=4;goto B66b101;
case 0x66b102:c.instructions+=3;goto B66b102;
case 0x66b103:c.instructions+=2;goto B66b103;
case 0x66b105:c.instructions+=1;goto B66b105;
case 0x66b10a:goto L66b10a;
case 0x66b10e:c.instructions+=4;goto B66b10e;
case 0x66b10f:c.instructions+=3;goto B66b10f;
case 0x66b110:c.instructions+=2;goto B66b110;
case 0x66b112:c.instructions+=1;goto B66b112;
case 0x66b117:goto L66b117;
case 0x66b11b:c.instructions+=7;goto B66b11b;
case 0x66b11e:c.instructions+=6;goto B66b11e;
case 0x66b124:c.instructions+=5;goto B66b124;
case 0x66b12a:c.instructions+=4;goto B66b12a;
case 0x66b12d:c.instructions+=3;goto B66b12d;
case 0x66b131:c.instructions+=2;goto B66b131;
case 0x66b135:c.instructions+=1;goto B66b135;
case 0x66b137:goto L66b137;
case 0x66b13e:c.instructions+=2;goto B66b13e;
case 0x66b141:c.instructions+=1;goto B66b141;
case 0x66b147:goto L66b147;
case 0x66b14d:c.instructions+=7;goto B66b14d;
case 0x66b150:c.instructions+=6;goto B66b150;
case 0x66b153:c.instructions+=5;goto B66b153;
case 0x66b155:c.instructions+=4;goto B66b155;
case 0x66b157:c.instructions+=3;goto B66b157;
case 0x66b15a:c.instructions+=2;goto B66b15a;
case 0x66b15d:c.instructions+=1;goto B66b15d;
case 0x66b163:goto L66b163;
case 0x66b166:c.instructions+=1;goto B66b166;
case 0x66b168:goto L66b168;
case 0x66b16b:goto L66b16b;
case 0x66b16e:c.instructions+=7;goto B66b16e;
case 0x66b172:c.instructions+=6;goto B66b172;
case 0x66b175:c.instructions+=5;goto B66b175;
case 0x66b178:c.instructions+=4;goto B66b178;
case 0x66b17a:c.instructions+=3;goto B66b17a;
case 0x66b17f:c.instructions+=2;goto B66b17f;
case 0x66b182:c.instructions+=1;goto B66b182;
case 0x66b188:goto L66b188;
case 0x66b18c:c.instructions+=1;goto B66b18c;
case 0x66b18e:goto L66b18e;
case 0x66b191:c.instructions+=2;goto B66b191;
case 0x66b194:c.instructions+=1;goto B66b194;
case 0x66b196:goto L66b196;
case 0x66b19a:c.instructions+=4;goto B66b19a;
case 0x66b19d:c.instructions+=3;goto B66b19d;
case 0x66b1a0:c.instructions+=2;goto B66b1a0;
case 0x66b1a1:c.instructions+=1;goto B66b1a1;
case 0x66b1a6:goto L66b1a6;
case 0x66b1a8:c.instructions+=3;goto B66b1a8;
case 0x66b1a9:c.instructions+=2;goto B66b1a9;
case 0x66b1ac:c.instructions+=1;goto B66b1ac;
case 0x66b1b2:goto L66b1b2;
case 0x66b1b5:c.instructions+=2;goto B66b1b5;
case 0x66b1b7:c.instructions+=1;goto B66b1b7;
case 0x66b1b9:goto L66b1b9;
case 0x66b1bc:c.instructions+=1;goto B66b1bc;
case 0x66b1be:goto L66b1be;
case 0x66b1c0:goto L66b1c0;
case 0x66b1c3:c.instructions+=1;goto B66b1c3;
case 0x66b1c6:goto L66b1c6;
case 0x66b1c9:c.instructions+=1;goto B66b1c9;
case 0x66b1ce:goto L66b1ce;
case 0x66b1d1:c.instructions+=3;goto B66b1d1;
case 0x66b1d4:c.instructions+=2;goto B66b1d4;
case 0x66b1d7:c.instructions+=1;goto B66b1d7;
case 0x66b1d8:goto L66b1d8;
case 0x66b1db:c.instructions+=4;goto B66b1db;
case 0x66b1de:c.instructions+=3;goto B66b1de;
case 0x66b1e1:c.instructions+=2;goto B66b1e1;
case 0x66b1e4:c.instructions+=1;goto B66b1e4;
case 0x66b1e6:goto L66b1e6;
case 0x66b1e9:c.instructions+=2;goto B66b1e9;
case 0x66b1eb:c.instructions+=1;goto B66b1eb;
case 0x66b1ed:goto L66b1ed;
case 0x66b1f1:c.instructions+=4;goto B66b1f1;
case 0x66b1f4:c.instructions+=3;goto B66b1f4;
case 0x66b1f7:c.instructions+=2;goto B66b1f7;
case 0x66b1f8:c.instructions+=1;goto B66b1f8;
case 0x66b1fd:goto L66b1fd;
case 0x66b1ff:c.instructions+=3;goto B66b1ff;
case 0x66b200:c.instructions+=2;goto B66b200;
case 0x66b203:c.instructions+=1;goto B66b203;
case 0x66b209:goto L66b209;
case 0x66b20b:c.instructions+=1;goto B66b20b;
case 0x66b20d:goto L66b20d;
case 0x66b210:c.instructions+=2;goto B66b210;
case 0x66b212:c.instructions+=1;goto B66b212;
case 0x66b214:goto L66b214;
case 0x66b216:goto L66b216;
case 0x66b219:c.instructions+=1;goto B66b219;
case 0x66b21c:goto L66b21c;
case 0x66b21f:c.instructions+=1;goto B66b21f;
case 0x66b224:goto L66b224;
case 0x66b227:c.instructions+=3;goto B66b227;
case 0x66b22a:c.instructions+=2;goto B66b22a;
case 0x66b22d:c.instructions+=1;goto B66b22d;
case 0x66b22e:goto L66b22e;
case 0x66b231:c.instructions+=3;goto B66b231;
case 0x66b234:c.instructions+=2;goto B66b234;
case 0x66b235:c.instructions+=1;goto B66b235;
case 0x66b238:goto L66b238;
case 0x66b23e:c.instructions+=4;goto B66b23e;
case 0x66b241:c.instructions+=3;goto B66b241;
case 0x66b244:c.instructions+=2;goto B66b244;
case 0x66b247:c.instructions+=1;goto B66b247;
case 0x66b24d:goto L66b24d;
case 0x66b250:c.instructions+=2;goto B66b250;
case 0x66b252:c.instructions+=1;goto B66b252;
case 0x66b258:goto L66b258;
case 0x66b25f:c.instructions+=2;goto B66b25f;
case 0x66b260:c.instructions+=1;goto B66b260;
case 0x66b265:goto L66b265;
case 0x66b266:c.instructions+=6;goto B66b266;
case 0x66b26c:c.instructions+=5;goto B66b26c;
case 0x66b26f:c.instructions+=4;goto B66b26f;
case 0x66b275:c.instructions+=3;goto B66b275;
case 0x66b278:c.instructions+=2;goto B66b278;
case 0x66b27a:c.instructions+=1;goto B66b27a;
case 0x66b280:goto L66b280;
case 0x66b282:c.instructions+=1;goto B66b282;
case 0x66b284:goto L66b284;
case 0x66b287:c.instructions+=2;goto B66b287;
case 0x66b289:c.instructions+=1;goto B66b289;
case 0x66b28b:goto L66b28b;
case 0x66b28d:goto L66b28d;
case 0x66b290:c.instructions+=1;goto B66b290;
case 0x66b293:goto L66b293;
case 0x66b299:c.instructions+=9;goto B66b299;
case 0x66b29c:c.instructions+=8;goto B66b29c;
case 0x66b29f:c.instructions+=7;goto B66b29f;
case 0x66b2a2:c.instructions+=6;goto B66b2a2;
case 0x66b2a5:c.instructions+=5;goto B66b2a5;
case 0x66b2a8:c.instructions+=4;goto B66b2a8;
case 0x66b2aa:c.instructions+=3;goto B66b2aa;
case 0x66b2ad:c.instructions+=2;goto B66b2ad;
case 0x66b2b0:c.instructions+=1;goto B66b2b0;
case 0x66b2b2:goto L66b2b2;
case 0x66b2b4:goto L66b2b4;
case 0x66b2b6:c.instructions+=2;goto B66b2b6;
case 0x66b2b9:c.instructions+=1;goto B66b2b9;
case 0x66b2bd:goto L66b2bd;
case 0x66b2bf:goto L66b2bf;
case 0x66b2c1:goto L66b2c1;
case 0x66b2c4:c.instructions+=3;goto B66b2c4;
case 0x66b2c7:c.instructions+=2;goto B66b2c7;
case 0x66b2c8:c.instructions+=1;goto B66b2c8;
case 0x66b2cd:goto L66b2cd;
case 0x66b2cf:c.instructions+=5;goto B66b2cf;
case 0x66b2d0:c.instructions+=4;goto B66b2d0;
case 0x66b2d3:c.instructions+=3;goto B66b2d3;
case 0x66b2d6:c.instructions+=2;goto B66b2d6;
case 0x66b2d8:c.instructions+=1;goto B66b2d8;
case 0x66b2de:goto L66b2de;
case 0x66b2e1:c.instructions+=4;goto B66b2e1;
case 0x66b2e3:c.instructions+=3;goto B66b2e3;
case 0x66b2e5:c.instructions+=2;goto B66b2e5;
case 0x66b2e7:c.instructions+=1;goto B66b2e7;
case 0x66b2ea:goto L66b2ea;
case 0x66b2ec:goto L66b2ec;
case 0x66b2ee:c.instructions+=1;goto B66b2ee;
case 0x66b2f1:goto L66b2f1;
case 0x66b2f3:goto L66b2f3;
case 0x66b2f5:c.instructions+=5;goto B66b2f5;
case 0x66b2f8:c.instructions+=4;goto B66b2f8;
case 0x66b2fa:c.instructions+=3;goto B66b2fa;
case 0x66b2fd:c.instructions+=2;goto B66b2fd;
case 0x66b2fe:c.instructions+=1;goto B66b2fe;
case 0x66b300:goto L66b300;
case 0x66b306:c.instructions+=1;goto B66b306;
case 0x66b30a:goto L66b30a;
case 0x66b30d:c.instructions+=1;goto B66b30d;
case 0x66b311:goto L66b311;
case 0x66b312:c.instructions+=3;goto B66b312;
case 0x66b318:c.instructions+=2;goto B66b318;
case 0x66b31b:c.instructions+=1;goto B66b31b;
case 0x66b321:goto L66b321;
case 0x66b325:c.instructions+=6;goto B66b325;
case 0x66b32b:c.instructions+=5;goto B66b32b;
case 0x66b331:c.instructions+=4;goto B66b331;
case 0x66b333:c.instructions+=3;goto B66b333;
case 0x66b335:c.instructions+=2;goto B66b335;
case 0x66b339:c.instructions+=1;goto B66b339;
case 0x66b33b:goto L66b33b;
case 0x66b33f:c.instructions+=9;goto B66b33f;
case 0x66b345:c.instructions+=8;goto B66b345;
case 0x66b34b:c.instructions+=7;goto B66b34b;
case 0x66b34f:c.instructions+=6;goto B66b34f;
case 0x66b354:c.instructions+=5;goto B66b354;
case 0x66b356:c.instructions+=4;goto B66b356;
case 0x66b358:c.instructions+=3;goto B66b358;
case 0x66b359:c.instructions+=2;goto B66b359;
case 0x66b35b:c.instructions+=1;goto B66b35b;
case 0x66b360:goto L66b360;
case 0x66b364:c.instructions+=6;goto B66b364;
case 0x66b36a:c.instructions+=5;goto B66b36a;
case 0x66b370:c.instructions+=4;goto B66b370;
case 0x66b371:c.instructions+=3;goto B66b371;
case 0x66b374:c.instructions+=2;goto B66b374;
case 0x66b378:c.instructions+=1;goto B66b378;
case 0x66b37a:goto L66b37a;
case 0x66b37e:c.instructions+=3;goto B66b37e;
case 0x66b382:c.instructions+=2;goto B66b382;
case 0x66b388:c.instructions+=1;goto B66b388;
case 0x66b38e:goto L66b38e;
case 0x66b390:goto L66b390;
case 0x66b394:c.instructions+=7;goto B66b394;
case 0x66b39a:c.instructions+=6;goto B66b39a;
case 0x66b3a0:c.instructions+=5;goto B66b3a0;
case 0x66b3a2:c.instructions+=4;goto B66b3a2;
case 0x66b3a4:c.instructions+=3;goto B66b3a4;
case 0x66b3a8:c.instructions+=2;goto B66b3a8;
case 0x66b3af:c.instructions+=1;goto B66b3af;
case 0x66b3b1:goto L66b3b1;
case 0x66b3b5:c.instructions+=9;goto B66b3b5;
case 0x66b3bb:c.instructions+=8;goto B66b3bb;
case 0x66b3c1:c.instructions+=7;goto B66b3c1;
case 0x66b3c5:c.instructions+=6;goto B66b3c5;
case 0x66b3ca:c.instructions+=5;goto B66b3ca;
case 0x66b3cc:c.instructions+=4;goto B66b3cc;
case 0x66b3ce:c.instructions+=3;goto B66b3ce;
case 0x66b3cf:c.instructions+=2;goto B66b3cf;
case 0x66b3d1:c.instructions+=1;goto B66b3d1;
case 0x66b3d6:goto L66b3d6;
case 0x66b3da:c.instructions+=6;goto B66b3da;
case 0x66b3e0:c.instructions+=5;goto B66b3e0;
case 0x66b3e6:c.instructions+=4;goto B66b3e6;
case 0x66b3e7:c.instructions+=3;goto B66b3e7;
case 0x66b3ea:c.instructions+=2;goto B66b3ea;
case 0x66b3ee:c.instructions+=1;goto B66b3ee;
case 0x66b3f0:goto L66b3f0;
case 0x66b3f6:goto L66b3f6;
case 0x66b3f9:c.instructions+=1;goto B66b3f9;
case 0x66b3fe:goto L66b3fe;
case 0x66b401:c.instructions+=1;goto B66b401;
case 0x66b406:goto L66b406;
case 0x66b40d:c.instructions+=8;goto B66b40d;
case 0x66b410:c.instructions+=7;goto B66b410;
case 0x66b411:c.instructions+=6;goto B66b411;
case 0x66b412:c.instructions+=5;goto B66b412;
case 0x66b413:c.instructions+=4;goto B66b413;
case 0x66b414:c.instructions+=3;goto B66b414;
case 0x66b415:c.instructions+=2;goto B66b415;
case 0x66b416:c.instructions+=1;goto B66b416;
case 0x66b417:goto L66b417;
case 0x66b41e:c.instructions+=1;goto B66b41e;
case 0x66b420:goto L66b420;
case 0x66b422:c.instructions+=17;goto B66b422;
case 0x66b423:c.instructions+=16;goto B66b423;
case 0x66b425:c.instructions+=15;goto B66b425;
case 0x66b426:c.instructions+=14;goto B66b426;
case 0x66b427:c.instructions+=13;goto B66b427;
case 0x66b428:c.instructions+=12;goto B66b428;
case 0x66b42b:c.instructions+=11;goto B66b42b;
case 0x66b42c:c.instructions+=10;goto B66b42c;
case 0x66b42f:c.instructions+=9;goto B66b42f;
case 0x66b431:c.instructions+=8;goto B66b431;
case 0x66b433:c.instructions+=7;goto B66b433;
case 0x66b434:c.instructions+=6;goto B66b434;
case 0x66b437:c.instructions+=5;goto B66b437;
case 0x66b43a:c.instructions+=4;goto B66b43a;
case 0x66b43d:c.instructions+=3;goto B66b43d;
case 0x66b440:c.instructions+=2;goto B66b440;
case 0x66b443:c.instructions+=1;goto B66b443;
case 0x66b445:goto L66b445;
case 0x66b447:c.instructions+=2;goto B66b447;
case 0x66b448:c.instructions+=1;goto B66b448;
case 0x66b44b:goto L66b44b;
case 0x66b44d:c.instructions+=3;goto B66b44d;
case 0x66b44e:c.instructions+=2;goto B66b44e;
case 0x66b450:c.instructions+=1;goto B66b450;
case 0x66b452:goto L66b452;
case 0x66b454:c.instructions+=2;goto B66b454;
case 0x66b455:c.instructions+=1;goto B66b455;
case 0x66b458:goto L66b458;
case 0x66b45a:c.instructions+=2;goto B66b45a;
case 0x66b45d:c.instructions+=1;goto B66b45d;
case 0x66b460:goto L66b460;
case 0x66b462:c.instructions+=2;goto B66b462;
case 0x66b464:c.instructions+=1;goto B66b464;
case 0x66b466:goto L66b466;
case 0x66b468:c.instructions+=2;goto B66b468;
case 0x66b469:c.instructions+=1;goto B66b469;
case 0x66b46c:goto L66b46c;
case 0x66b46e:c.instructions+=3;goto B66b46e;
case 0x66b46f:c.instructions+=2;goto B66b46f;
case 0x66b471:c.instructions+=1;goto B66b471;
case 0x66b473:goto L66b473;
case 0x66b475:c.instructions+=2;goto B66b475;
case 0x66b476:c.instructions+=1;goto B66b476;
case 0x66b479:goto L66b479;
case 0x66b47b:c.instructions+=2;goto B66b47b;
case 0x66b47e:c.instructions+=1;goto B66b47e;
case 0x66b481:goto L66b481;
case 0x66b483:c.instructions+=2;goto B66b483;
case 0x66b485:c.instructions+=1;goto B66b485;
case 0x66b487:goto L66b487;
case 0x66b489:c.instructions+=2;goto B66b489;
case 0x66b48a:c.instructions+=1;goto B66b48a;
case 0x66b48d:goto L66b48d;
case 0x66b48f:c.instructions+=3;goto B66b48f;
case 0x66b490:c.instructions+=2;goto B66b490;
case 0x66b492:c.instructions+=1;goto B66b492;
case 0x66b494:goto L66b494;
case 0x66b496:c.instructions+=2;goto B66b496;
case 0x66b497:c.instructions+=1;goto B66b497;
case 0x66b49a:goto L66b49a;
case 0x66b49c:c.instructions+=2;goto B66b49c;
case 0x66b49f:c.instructions+=1;goto B66b49f;
case 0x66b4a2:goto L66b4a2;
case 0x66b4a4:c.instructions+=2;goto B66b4a4;
case 0x66b4a6:c.instructions+=1;goto B66b4a6;
case 0x66b4a8:goto L66b4a8;
case 0x66b4aa:c.instructions+=2;goto B66b4aa;
case 0x66b4ab:c.instructions+=1;goto B66b4ab;
case 0x66b4ae:goto L66b4ae;
case 0x66b4b0:c.instructions+=3;goto B66b4b0;
case 0x66b4b1:c.instructions+=2;goto B66b4b1;
case 0x66b4b3:c.instructions+=1;goto B66b4b3;
case 0x66b4b5:goto L66b4b5;
case 0x66b4b7:c.instructions+=2;goto B66b4b7;
case 0x66b4b8:c.instructions+=1;goto B66b4b8;
case 0x66b4bb:goto L66b4bb;
case 0x66b4bd:c.instructions+=2;goto B66b4bd;
case 0x66b4c0:c.instructions+=1;goto B66b4c0;
case 0x66b4c3:goto L66b4c3;
case 0x66b4c5:c.instructions+=2;goto B66b4c5;
case 0x66b4c7:c.instructions+=1;goto B66b4c7;
case 0x66b4c9:goto L66b4c9;
case 0x66b4cb:c.instructions+=2;goto B66b4cb;
case 0x66b4cc:c.instructions+=1;goto B66b4cc;
case 0x66b4cf:goto L66b4cf;
case 0x66b4d1:c.instructions+=1;goto B66b4d1;
case 0x66b4d3:goto L66b4d3;
case 0x66b4d5:c.instructions+=5;goto B66b4d5;
case 0x66b4d8:c.instructions+=4;goto B66b4d8;
case 0x66b4db:c.instructions+=3;goto B66b4db;
case 0x66b4de:c.instructions+=2;goto B66b4de;
case 0x66b4e1:c.instructions+=1;goto B66b4e1;
case 0x66b4e3:goto L66b4e3;
case 0x66b4e5:c.instructions+=1;goto B66b4e5;
case 0x66b4ea:goto L66b4ea;
case 0x66b4ec:c.instructions+=2;goto B66b4ec;
case 0x66b4ed:c.instructions+=1;goto B66b4ed;
case 0x66b4ef:goto L66b4ef;
case 0x66b4f1:c.instructions+=1;goto B66b4f1;
case 0x66b4f6:goto L66b4f6;
case 0x66b4f9:c.instructions+=1;goto B66b4f9;
case 0x66b4fb:goto L66b4fb;
case 0x66b502:c.instructions+=1;goto B66b502;
case 0x66b507:goto L66b507;
case 0x66b50b:goto L66b50b;
case 0x66b50f:c.instructions+=1;goto B66b50f;
case 0x66b515:goto L66b515;
case 0x66b518:c.instructions+=4;goto B66b518;
case 0x66b519:c.instructions+=3;goto B66b519;
case 0x66b51a:c.instructions+=2;goto B66b51a;
case 0x66b51d:c.instructions+=1;goto B66b51d;
case 0x66b522:goto L66b522;
case 0x66b524:c.instructions+=2;goto B66b524;
case 0x66b527:c.instructions+=1;goto B66b527;
case 0x66b52d:goto L66b52d;
case 0x66b530:c.instructions+=8;goto B66b530;
case 0x66b533:c.instructions+=7;goto B66b533;
case 0x66b537:c.instructions+=6;goto B66b537;
case 0x66b53a:c.instructions+=5;goto B66b53a;
case 0x66b53d:c.instructions+=4;goto B66b53d;
case 0x66b540:c.instructions+=3;goto B66b540;
case 0x66b543:c.instructions+=2;goto B66b543;
case 0x66b546:c.instructions+=1;goto B66b546;
case 0x66b548:goto L66b548;
case 0x66b54b:c.instructions+=8;goto B66b54b;
case 0x66b551:c.instructions+=7;goto B66b551;
case 0x66b554:c.instructions+=6;goto B66b554;
case 0x66b557:c.instructions+=5;goto B66b557;
case 0x66b55a:c.instructions+=4;goto B66b55a;
case 0x66b55c:c.instructions+=3;goto B66b55c;
case 0x66b560:c.instructions+=2;goto B66b560;
case 0x66b562:c.instructions+=1;goto B66b562;
case 0x66b568:goto L66b568;
case 0x66b56c:c.instructions+=3;goto B66b56c;
case 0x66b56f:c.instructions+=2;goto B66b56f;
case 0x66b573:c.instructions+=1;goto B66b573;
case 0x66b575:goto L66b575;
case 0x66b578:c.instructions+=1;goto B66b578;
case 0x66b57a:goto L66b57a;
case 0x66b57d:c.instructions+=1;goto B66b57d;
case 0x66b583:goto L66b583;
case 0x66b586:c.instructions+=13;goto B66b586;
case 0x66b589:c.instructions+=12;goto B66b589;
case 0x66b58b:c.instructions+=11;goto B66b58b;
case 0x66b58d:c.instructions+=10;goto B66b58d;
case 0x66b590:c.instructions+=9;goto B66b590;
case 0x66b592:c.instructions+=8;goto B66b592;
case 0x66b595:c.instructions+=7;goto B66b595;
case 0x66b596:c.instructions+=6;goto B66b596;
case 0x66b599:c.instructions+=5;goto B66b599;
case 0x66b59c:c.instructions+=4;goto B66b59c;
case 0x66b59d:c.instructions+=3;goto B66b59d;
case 0x66b59f:c.instructions+=2;goto B66b59f;
case 0x66b5a2:c.instructions+=1;goto B66b5a2;
case 0x66b5a7:goto L66b5a7;
case 0x66b5a9:c.instructions+=2;goto B66b5a9;
case 0x66b5ac:c.instructions+=1;goto B66b5ac;
case 0x66b5ae:goto L66b5ae;
case 0x66b5b1:c.instructions+=5;goto B66b5b1;
case 0x66b5b2:c.instructions+=4;goto B66b5b2;
case 0x66b5b5:c.instructions+=3;goto B66b5b5;
case 0x66b5b6:c.instructions+=2;goto B66b5b6;
case 0x66b5b9:c.instructions+=1;goto B66b5b9;
case 0x66b5be:goto L66b5be;
case 0x66b5c4:c.instructions+=1;goto B66b5c4;
case 0x66b5c6:goto L66b5c6;
case 0x66b5cd:c.instructions+=1;goto B66b5cd;
case 0x66b5cf:goto L66b5cf;
case 0x66b5d1:c.instructions+=3;goto B66b5d1;
case 0x66b5d2:c.instructions+=2;goto B66b5d2;
case 0x66b5d4:c.instructions+=1;goto B66b5d4;
case 0x66b5d6:goto L66b5d6;
case 0x66b5d8:goto L66b5d8;
case 0x66b5db:c.instructions+=2;goto B66b5db;
case 0x66b5e1:c.instructions+=1;goto B66b5e1;
case 0x66b5e3:goto L66b5e3;
case 0x66b5e5:c.instructions+=3;goto B66b5e5;
case 0x66b5e6:c.instructions+=2;goto B66b5e6;
case 0x66b5e8:c.instructions+=1;goto B66b5e8;
case 0x66b5ea:goto L66b5ea;
case 0x66b5ec:goto L66b5ec;
case 0x66b5ef:c.instructions+=1;goto B66b5ef;
case 0x66b5f5:goto L66b5f5;
case 0x66b5f8:c.instructions+=2;goto B66b5f8;
case 0x66b5fa:c.instructions+=1;goto B66b5fa;
case 0x66b5fc:goto L66b5fc;
case 0x66b5fe:c.instructions+=1;goto B66b5fe;
case 0x66b603:goto L66b603;
case 0x66b606:c.instructions+=5;goto B66b606;
case 0x66b607:c.instructions+=4;goto B66b607;
case 0x66b608:c.instructions+=3;goto B66b608;
case 0x66b609:c.instructions+=2;goto B66b609;
case 0x66b60a:c.instructions+=1;goto B66b60a;
case 0x66b60d:goto L66b60d;
case 0x66b60f:c.instructions+=16;goto B66b60f;
case 0x66b610:c.instructions+=15;goto B66b610;
case 0x66b612:c.instructions+=14;goto B66b612;
case 0x66b615:c.instructions+=13;goto B66b615;
case 0x66b616:c.instructions+=12;goto B66b616;
case 0x66b618:c.instructions+=11;goto B66b618;
case 0x66b61b:c.instructions+=10;goto B66b61b;
case 0x66b61c:c.instructions+=9;goto B66b61c;
case 0x66b61f:c.instructions+=8;goto B66b61f;
case 0x66b621:c.instructions+=7;goto B66b621;
case 0x66b622:c.instructions+=6;goto B66b622;
case 0x66b625:c.instructions+=5;goto B66b625;
case 0x66b628:c.instructions+=4;goto B66b628;
case 0x66b62b:c.instructions+=3;goto B66b62b;
case 0x66b62e:c.instructions+=2;goto B66b62e;
case 0x66b631:c.instructions+=1;goto B66b631;
case 0x66b633:goto L66b633;
case 0x66b636:c.instructions+=3;goto B66b636;
case 0x66b638:c.instructions+=2;goto B66b638;
case 0x66b639:c.instructions+=1;goto B66b639;
case 0x66b63c:goto L66b63c;
case 0x66b63e:c.instructions+=3;goto B66b63e;
case 0x66b63f:c.instructions+=2;goto B66b63f;
case 0x66b641:c.instructions+=1;goto B66b641;
case 0x66b643:goto L66b643;
case 0x66b646:c.instructions+=3;goto B66b646;
case 0x66b648:c.instructions+=2;goto B66b648;
case 0x66b649:c.instructions+=1;goto B66b649;
case 0x66b64c:goto L66b64c;
case 0x66b64e:c.instructions+=2;goto B66b64e;
case 0x66b651:c.instructions+=1;goto B66b651;
case 0x66b654:goto L66b654;
case 0x66b656:c.instructions+=2;goto B66b656;
case 0x66b65a:c.instructions+=1;goto B66b65a;
case 0x66b65c:goto L66b65c;
case 0x66b65f:c.instructions+=3;goto B66b65f;
case 0x66b661:c.instructions+=2;goto B66b661;
case 0x66b662:c.instructions+=1;goto B66b662;
case 0x66b665:goto L66b665;
case 0x66b667:c.instructions+=3;goto B66b667;
case 0x66b668:c.instructions+=2;goto B66b668;
case 0x66b66a:c.instructions+=1;goto B66b66a;
case 0x66b66c:goto L66b66c;
case 0x66b66f:c.instructions+=3;goto B66b66f;
case 0x66b671:c.instructions+=2;goto B66b671;
case 0x66b672:c.instructions+=1;goto B66b672;
case 0x66b675:goto L66b675;
case 0x66b677:c.instructions+=2;goto B66b677;
case 0x66b67a:c.instructions+=1;goto B66b67a;
case 0x66b67d:goto L66b67d;
case 0x66b67f:c.instructions+=2;goto B66b67f;
case 0x66b683:c.instructions+=1;goto B66b683;
case 0x66b685:goto L66b685;
case 0x66b688:c.instructions+=3;goto B66b688;
case 0x66b68a:c.instructions+=2;goto B66b68a;
case 0x66b68b:c.instructions+=1;goto B66b68b;
case 0x66b68e:goto L66b68e;
case 0x66b690:c.instructions+=3;goto B66b690;
case 0x66b691:c.instructions+=2;goto B66b691;
case 0x66b693:c.instructions+=1;goto B66b693;
case 0x66b695:goto L66b695;
case 0x66b698:c.instructions+=3;goto B66b698;
case 0x66b69a:c.instructions+=2;goto B66b69a;
case 0x66b69b:c.instructions+=1;goto B66b69b;
case 0x66b69e:goto L66b69e;
case 0x66b6a0:c.instructions+=2;goto B66b6a0;
case 0x66b6a3:c.instructions+=1;goto B66b6a3;
case 0x66b6a6:goto L66b6a6;
case 0x66b6a8:c.instructions+=2;goto B66b6a8;
case 0x66b6ac:c.instructions+=1;goto B66b6ac;
case 0x66b6b2:goto L66b6b2;
case 0x66b6b5:c.instructions+=3;goto B66b6b5;
case 0x66b6b7:c.instructions+=2;goto B66b6b7;
case 0x66b6b8:c.instructions+=1;goto B66b6b8;
case 0x66b6bb:goto L66b6bb;
case 0x66b6bd:c.instructions+=1;goto B66b6bd;
case 0x66b6c3:goto L66b6c3;
case 0x66b6c6:c.instructions+=2;goto B66b6c6;
case 0x66b6c8:c.instructions+=1;goto B66b6c8;
case 0x66b6cd:goto L66b6cd;
case 0x66b6cf:c.instructions+=2;goto B66b6cf;
case 0x66b6d2:c.instructions+=1;goto B66b6d2;
case 0x66b6d8:goto L66b6d8;
case 0x66b6da:c.instructions+=4;goto B66b6da;
case 0x66b6dd:c.instructions+=3;goto B66b6dd;
case 0x66b6e0:c.instructions+=2;goto B66b6e0;
case 0x66b6e3:c.instructions+=1;goto B66b6e3;
case 0x66b6e5:goto L66b6e5;
case 0x66b6e7:c.instructions+=1;goto B66b6e7;
case 0x66b6ec:goto L66b6ec;
case 0x66b6ee:c.instructions+=2;goto B66b6ee;
case 0x66b6ef:c.instructions+=1;goto B66b6ef;
case 0x66b6f1:goto L66b6f1;
case 0x66b6f3:c.instructions+=1;goto B66b6f3;
case 0x66b6f8:goto L66b6f8;
case 0x66b6fb:c.instructions+=1;goto B66b6fb;
case 0x66b6fd:goto L66b6fd;
case 0x66b701:goto L66b701;
case 0x66b705:c.instructions+=1;goto B66b705;
case 0x66b707:goto L66b707;
case 0x66b708:c.instructions+=4;goto B66b708;
case 0x66b70b:c.instructions+=3;goto B66b70b;
case 0x66b70d:c.instructions+=2;goto B66b70d;
case 0x66b710:c.instructions+=1;goto B66b710;
case 0x66b715:goto L66b715;
case 0x66b717:c.instructions+=2;goto B66b717;
case 0x66b71a:c.instructions+=1;goto B66b71a;
case 0x66b720:goto L66b720;
case 0x66b723:c.instructions+=3;goto B66b723;
case 0x66b725:c.instructions+=2;goto B66b725;
case 0x66b728:c.instructions+=1;goto B66b728;
case 0x66b72a:goto L66b72a;
case 0x66b72d:c.instructions+=1;goto B66b72d;
case 0x66b72f:goto L66b72f;
case 0x66b732:goto L66b732;
case 0x66b736:c.instructions+=5;goto B66b736;
case 0x66b739:c.instructions+=4;goto B66b739;
case 0x66b73c:c.instructions+=3;goto B66b73c;
case 0x66b73f:c.instructions+=2;goto B66b73f;
case 0x66b742:c.instructions+=1;goto B66b742;
case 0x66b744:goto L66b744;
case 0x66b747:c.instructions+=3;goto B66b747;
case 0x66b749:c.instructions+=2;goto B66b749;
case 0x66b74c:c.instructions+=1;goto B66b74c;
case 0x66b74e:goto L66b74e;
case 0x66b751:c.instructions+=3;goto B66b751;
case 0x66b754:c.instructions+=2;goto B66b754;
case 0x66b755:c.instructions+=1;goto B66b755;
case 0x66b75a:goto L66b75a;
case 0x66b75c:c.instructions+=2;goto B66b75c;
case 0x66b75d:c.instructions+=1;goto B66b75d;
case 0x66b75f:goto L66b75f;
case 0x66b762:c.instructions+=8;goto B66b762;
case 0x66b767:c.instructions+=7;goto B66b767;
case 0x66b768:c.instructions+=6;goto B66b768;
case 0x66b76a:c.instructions+=5;goto B66b76a;
case 0x66b76d:c.instructions+=4;goto B66b76d;
case 0x66b76f:c.instructions+=3;goto B66b76f;
case 0x66b770:c.instructions+=2;goto B66b770;
case 0x66b773:c.instructions+=1;goto B66b773;
case 0x66b778:goto L66b778;
case 0x66b77b:c.instructions+=1;goto B66b77b;
case 0x66b77d:goto L66b77d;
case 0x66b77f:goto L66b77f;
case 0x66b781:c.instructions+=2;goto B66b781;
case 0x66b784:c.instructions+=1;goto B66b784;
case 0x66b786:goto L66b786;
case 0x66b78d:c.instructions+=1;goto B66b78d;
case 0x66b792:goto L66b792;
case 0x66b796:c.instructions+=2;goto B66b796;
case 0x66b79a:c.instructions+=1;goto B66b79a;
case 0x66b79c:goto L66b79c;
case 0x66b7a0:c.instructions+=3;goto B66b7a0;
case 0x66b7a3:c.instructions+=2;goto B66b7a3;
case 0x66b7a6:c.instructions+=1;goto B66b7a6;
case 0x66b7ac:goto L66b7ac;
case 0x66b7b0:c.instructions+=17;goto B66b7b0;
case 0x66b7b3:c.instructions+=16;goto B66b7b3;
case 0x66b7b6:c.instructions+=15;goto B66b7b6;
case 0x66b7bb:c.instructions+=14;goto B66b7bb;
case 0x66b7bf:c.instructions+=13;goto B66b7bf;
case 0x66b7c2:c.instructions+=12;goto B66b7c2;
case 0x66b7c6:c.instructions+=11;goto B66b7c6;
case 0x66b7cb:c.instructions+=10;goto B66b7cb;
case 0x66b7ce:c.instructions+=9;goto B66b7ce;
case 0x66b7d2:c.instructions+=8;goto B66b7d2;
case 0x66b7d7:c.instructions+=7;goto B66b7d7;
case 0x66b7da:c.instructions+=6;goto B66b7da;
case 0x66b7db:c.instructions+=5;goto B66b7db;
case 0x66b7de:c.instructions+=4;goto B66b7de;
case 0x66b7e0:c.instructions+=3;goto B66b7e0;
case 0x66b7e1:c.instructions+=2;goto B66b7e1;
case 0x66b7e3:c.instructions+=1;goto B66b7e3;
case 0x66b7e8:goto L66b7e8;
case 0x66b7ea:c.instructions+=2;goto B66b7ea;
case 0x66b7ed:c.instructions+=1;goto B66b7ed;
case 0x66b7f3:goto L66b7f3;
case 0x66b7f6:c.instructions+=3;goto B66b7f6;
case 0x66b7fa:c.instructions+=2;goto B66b7fa;
case 0x66b7fd:c.instructions+=1;goto B66b7fd;
case 0x66b7ff:goto L66b7ff;
case 0x66b801:c.instructions+=4;goto B66b801;
case 0x66b804:c.instructions+=3;goto B66b804;
case 0x66b807:c.instructions+=2;goto B66b807;
case 0x66b80a:c.instructions+=1;goto B66b80a;
case 0x66b80c:goto L66b80c;
case 0x66b80f:goto L66b80f;
case 0x66b812:c.instructions+=5;goto B66b812;
case 0x66b815:c.instructions+=4;goto B66b815;
case 0x66b819:c.instructions+=3;goto B66b819;
case 0x66b81c:c.instructions+=2;goto B66b81c;
case 0x66b822:c.instructions+=1;goto B66b822;
case 0x66b824:goto L66b824;
case 0x66b828:c.instructions+=4;goto B66b828;
case 0x66b82b:c.instructions+=3;goto B66b82b;
case 0x66b830:c.instructions+=2;goto B66b830;
case 0x66b833:c.instructions+=1;goto B66b833;
case 0x66b836:goto L66b836;
case 0x66b83a:c.instructions+=5;goto B66b83a;
case 0x66b83d:c.instructions+=4;goto B66b83d;
case 0x66b843:c.instructions+=3;goto B66b843;
case 0x66b848:c.instructions+=2;goto B66b848;
case 0x66b84d:c.instructions+=1;goto B66b84d;
case 0x66b84f:goto L66b84f;
case 0x66b852:c.instructions+=2;goto B66b852;
case 0x66b855:c.instructions+=1;goto B66b855;
case 0x66b857:goto L66b857;
case 0x66b85a:goto L66b85a;
case 0x66b85d:c.instructions+=2;goto B66b85d;
case 0x66b860:c.instructions+=1;goto B66b860;
case 0x66b862:goto L66b862;
case 0x66b865:c.instructions+=3;goto B66b865;
case 0x66b869:c.instructions+=2;goto B66b869;
case 0x66b86c:c.instructions+=1;goto B66b86c;
case 0x66b86e:goto L66b86e;
case 0x66b871:c.instructions+=3;goto B66b871;
case 0x66b875:c.instructions+=2;goto B66b875;
case 0x66b876:c.instructions+=1;goto B66b876;
case 0x66b87b:goto L66b87b;
case 0x66b87d:c.instructions+=3;goto B66b87d;
case 0x66b87e:c.instructions+=2;goto B66b87e;
case 0x66b881:c.instructions+=1;goto B66b881;
case 0x66b887:goto L66b887;
case 0x66b889:c.instructions+=4;goto B66b889;
case 0x66b88c:c.instructions+=3;goto B66b88c;
case 0x66b88e:c.instructions+=2;goto B66b88e;
case 0x66b891:c.instructions+=1;goto B66b891;
case 0x66b893:goto L66b893;
case 0x66b895:goto L66b895;
case 0x66b897:c.instructions+=2;goto B66b897;
case 0x66b89a:c.instructions+=1;goto B66b89a;
case 0x66b89c:goto L66b89c;
case 0x66b89e:goto L66b89e;
case 0x66b8a1:c.instructions+=3;goto B66b8a1;
case 0x66b8a5:c.instructions+=2;goto B66b8a5;
case 0x66b8a8:c.instructions+=1;goto B66b8a8;
case 0x66b8ae:goto L66b8ae;
case 0x66b8b0:goto L66b8b0;
case 0x66b8b3:c.instructions+=8;goto B66b8b3;
case 0x66b8b6:c.instructions+=7;goto B66b8b6;
case 0x66b8b9:c.instructions+=6;goto B66b8b9;
case 0x66b8bb:c.instructions+=5;goto B66b8bb;
case 0x66b8bf:c.instructions+=4;goto B66b8bf;
case 0x66b8c2:c.instructions+=3;goto B66b8c2;
case 0x66b8c7:c.instructions+=2;goto B66b8c7;
case 0x66b8ca:c.instructions+=1;goto B66b8ca;
case 0x66b8cc:goto L66b8cc;
case 0x66b8cf:goto L66b8cf;
case 0x66b8d2:c.instructions+=8;goto B66b8d2;
case 0x66b8d6:c.instructions+=7;goto B66b8d6;
case 0x66b8d9:c.instructions+=6;goto B66b8d9;
case 0x66b8dd:c.instructions+=5;goto B66b8dd;
case 0x66b8e0:c.instructions+=4;goto B66b8e0;
case 0x66b8e6:c.instructions+=3;goto B66b8e6;
case 0x66b8ec:c.instructions+=2;goto B66b8ec;
case 0x66b8f2:c.instructions+=1;goto B66b8f2;
case 0x66b8f4:goto L66b8f4;
case 0x66b8f8:c.instructions+=3;goto B66b8f8;
case 0x66b8fb:c.instructions+=2;goto B66b8fb;
case 0x66b900:c.instructions+=1;goto B66b900;
case 0x66b902:goto L66b902;
case 0x66b906:c.instructions+=3;goto B66b906;
case 0x66b90a:c.instructions+=2;goto B66b90a;
case 0x66b90e:c.instructions+=1;goto B66b90e;
case 0x66b912:goto L66b912;
case 0x66b916:c.instructions+=7;goto B66b916;
case 0x66b919:c.instructions+=6;goto B66b919;
case 0x66b91c:c.instructions+=5;goto B66b91c;
case 0x66b921:c.instructions+=4;goto B66b921;
case 0x66b924:c.instructions+=3;goto B66b924;
case 0x66b928:c.instructions+=2;goto B66b928;
case 0x66b92b:c.instructions+=1;goto B66b92b;
case 0x66b92d:goto L66b92d;
case 0x66b92f:goto L66b92f;
case 0x66b932:c.instructions+=3;goto B66b932;
case 0x66b936:c.instructions+=2;goto B66b936;
case 0x66b939:c.instructions+=1;goto B66b939;
case 0x66b93f:goto L66b93f;
case 0x66b943:c.instructions+=2;goto B66b943;
case 0x66b946:c.instructions+=1;goto B66b946;
case 0x66b948:goto L66b948;
case 0x66b94b:c.instructions+=3;goto B66b94b;
case 0x66b94e:c.instructions+=2;goto B66b94e;
case 0x66b94f:c.instructions+=1;goto B66b94f;
case 0x66b954:goto L66b954;
case 0x66b957:c.instructions+=4;goto B66b957;
case 0x66b95b:c.instructions+=3;goto B66b95b;
case 0x66b95e:c.instructions+=2;goto B66b95e;
case 0x66b95f:c.instructions+=1;goto B66b95f;
case 0x66b964:goto L66b964;
case 0x66b968:c.instructions+=4;goto B66b968;
case 0x66b969:c.instructions+=3;goto B66b969;
case 0x66b96a:c.instructions+=2;goto B66b96a;
case 0x66b96d:c.instructions+=1;goto B66b96d;
case 0x66b96f:goto L66b96f;
case 0x66b971:c.instructions+=1;goto B66b971;
case 0x66b973:goto L66b973;
case 0x66b97a:c.instructions+=1;goto B66b97a;
case 0x66b97f:goto L66b97f;
case 0x66b986:c.instructions+=1;goto B66b986;
case 0x66b98b:goto L66b98b;
case 0x66b98f:c.instructions+=8;goto B66b98f;
case 0x66b991:c.instructions+=7;goto B66b991;
case 0x66b997:c.instructions+=6;goto B66b997;
case 0x66b998:c.instructions+=5;goto B66b998;
case 0x66b999:c.instructions+=4;goto B66b999;
case 0x66b99a:c.instructions+=3;goto B66b99a;
case 0x66b99b:c.instructions+=2;goto B66b99b;
case 0x66b99f:c.instructions+=1;goto B66b99f;
case 0x66b9a5:goto L66b9a5;
case 0x66b9a7:c.instructions+=1;goto B66b9a7;
case 0x66b9a9:goto L66b9a9;
case 0x66b9ac:goto L66b9ac;
case 0x66b9af:c.instructions+=11;goto B66b9af;
case 0x66b9b2:c.instructions+=10;goto B66b9b2;
case 0x66b9b7:c.instructions+=9;goto B66b9b7;
case 0x66b9bb:c.instructions+=8;goto B66b9bb;
case 0x66b9be:c.instructions+=7;goto B66b9be;
case 0x66b9c1:c.instructions+=6;goto B66b9c1;
case 0x66b9c4:c.instructions+=5;goto B66b9c4;
case 0x66b9c8:c.instructions+=4;goto B66b9c8;
case 0x66b9cb:c.instructions+=3;goto B66b9cb;
case 0x66b9cd:c.instructions+=2;goto B66b9cd;
case 0x66b9d0:c.instructions+=1;goto B66b9d0;
case 0x66b9d2:goto L66b9d2;
case 0x66b9d4:goto L66b9d4;
case 0x66b9d6:c.instructions+=1;goto B66b9d6;
case 0x66b9d9:goto L66b9d9;
case 0x66b9db:goto L66b9db;
case 0x66b9df:c.instructions+=2;goto B66b9df;
case 0x66b9e2:c.instructions+=1;goto B66b9e2;
case 0x66b9e8:goto L66b9e8;
case 0x66b9eb:c.instructions+=5;goto B66b9eb;
case 0x66b9ee:c.instructions+=4;goto B66b9ee;
case 0x66b9f0:c.instructions+=3;goto B66b9f0;
case 0x66b9f3:c.instructions+=2;goto B66b9f3;
case 0x66b9f6:c.instructions+=1;goto B66b9f6;
case 0x66b9f9:goto L66b9f9;
case 0x66b9fd:c.instructions+=9;goto B66b9fd;
case 0x66ba00:c.instructions+=8;goto B66ba00;
case 0x66ba03:c.instructions+=7;goto B66ba03;
case 0x66ba07:c.instructions+=6;goto B66ba07;
case 0x66ba0a:c.instructions+=5;goto B66ba0a;
case 0x66ba10:c.instructions+=4;goto B66ba10;
case 0x66ba12:c.instructions+=3;goto B66ba12;
case 0x66ba15:c.instructions+=2;goto B66ba15;
case 0x66ba18:c.instructions+=1;goto B66ba18;
case 0x66ba1a:goto L66ba1a;
case 0x66ba1d:c.instructions+=1;goto B66ba1d;
case 0x66ba23:goto L66ba23;
case 0x66ba24:c.instructions+=1;goto B66ba24;
case 0x66ba2a:goto L66ba2a;
case 0x66ba2b:c.instructions+=1;goto B66ba2b;
case 0x66ba2d:goto L66ba2d;
case 0x66ba30:c.instructions+=1;goto B66ba30;
case 0x66ba36:goto L66ba36;
case 0x66ba37:c.instructions+=1;goto B66ba37;
case 0x66ba39:goto L66ba39;
case 0x66ba3a:c.instructions+=2;goto B66ba3a;
case 0x66ba3b:c.instructions+=1;goto B66ba3b;
case 0x66ba41:goto L66ba41;
case 0x66ba45:c.instructions+=2;goto B66ba45;
case 0x66ba4a:c.instructions+=1;goto B66ba4a;
case 0x66ba50:goto L66ba50;
case 0x66ba54:c.instructions+=4;goto B66ba54;
case 0x66ba57:c.instructions+=3;goto B66ba57;
case 0x66ba59:c.instructions+=2;goto B66ba59;
case 0x66ba5f:c.instructions+=1;goto B66ba5f;
case 0x66ba64:goto L66ba64;
case 0x66ba6a:c.instructions+=1;goto B66ba6a;
case 0x66ba6c:goto L66ba6c;
case 0x66ba72:c.instructions+=1;goto B66ba72;
case 0x66ba74:goto L66ba74;
case 0x66ba7a:c.instructions+=1;goto B66ba7a;
case 0x66ba80:goto L66ba80;
case 0x66ba84:c.instructions+=4;goto B66ba84;
case 0x66ba88:c.instructions+=3;goto B66ba88;
case 0x66ba8a:c.instructions+=2;goto B66ba8a;
case 0x66ba90:c.instructions+=1;goto B66ba90;
case 0x66ba95:goto L66ba95;
case 0x66ba99:c.instructions+=4;goto B66ba99;
case 0x66ba9d:c.instructions+=3;goto B66ba9d;
case 0x66ba9f:c.instructions+=2;goto B66ba9f;
case 0x66baa5:c.instructions+=1;goto B66baa5;
case 0x66baaa:goto L66baaa;
case 0x66baae:c.instructions+=4;goto B66baae;
case 0x66bab2:c.instructions+=3;goto B66bab2;
case 0x66bab4:c.instructions+=2;goto B66bab4;
case 0x66baba:c.instructions+=1;goto B66baba;
case 0x66babf:goto L66babf;
case 0x66bac5:c.instructions+=1;goto B66bac5;
case 0x66bac7:goto L66bac7;
case 0x66bacd:c.instructions+=1;goto B66bacd;
case 0x66bacf:goto L66bacf;
case 0x66bad5:c.instructions+=1;goto B66bad5;
case 0x66badb:goto L66badb;
case 0x66badf:c.instructions+=4;goto B66badf;
case 0x66bae3:c.instructions+=3;goto B66bae3;
case 0x66bae5:c.instructions+=2;goto B66bae5;
case 0x66baeb:c.instructions+=1;goto B66baeb;
case 0x66baf0:goto L66baf0;
case 0x66baf4:c.instructions+=4;goto B66baf4;
case 0x66baf8:c.instructions+=3;goto B66baf8;
case 0x66bafa:c.instructions+=2;goto B66bafa;
case 0x66bb00:c.instructions+=1;goto B66bb00;
case 0x66bb05:goto L66bb05;
case 0x66bb09:c.instructions+=4;goto B66bb09;
case 0x66bb0d:c.instructions+=3;goto B66bb0d;
case 0x66bb0f:c.instructions+=2;goto B66bb0f;
case 0x66bb15:c.instructions+=1;goto B66bb15;
case 0x66bb17:goto L66bb17;
case 0x66bb1b:c.instructions+=6;goto B66bb1b;
case 0x66bb1e:c.instructions+=5;goto B66bb1e;
case 0x66bb22:c.instructions+=4;goto B66bb22;
case 0x66bb24:c.instructions+=3;goto B66bb24;
case 0x66bb2b:c.instructions+=2;goto B66bb2b;
case 0x66bb2f:c.instructions+=1;goto B66bb2f;
case 0x66bb31:goto L66bb31;
case 0x66bb35:c.instructions+=1;goto B66bb35;
case 0x66bb37:goto L66bb37;
case 0x66bb3a:c.instructions+=11;goto B66bb3a;
case 0x66bb3c:c.instructions+=10;goto B66bb3c;
case 0x66bb3f:c.instructions+=9;goto B66bb3f;
case 0x66bb42:c.instructions+=8;goto B66bb42;
case 0x66bb45:c.instructions+=7;goto B66bb45;
case 0x66bb48:c.instructions+=6;goto B66bb48;
case 0x66bb4b:c.instructions+=5;goto B66bb4b;
case 0x66bb4e:c.instructions+=4;goto B66bb4e;
case 0x66bb52:c.instructions+=3;goto B66bb52;
case 0x66bb55:c.instructions+=2;goto B66bb55;
case 0x66bb5c:c.instructions+=1;goto B66bb5c;
case 0x66bb5e:goto L66bb5e;
case 0x66bb60:c.instructions+=7;goto B66bb60;
case 0x66bb63:c.instructions+=6;goto B66bb63;
case 0x66bb6a:c.instructions+=5;goto B66bb6a;
case 0x66bb6d:c.instructions+=4;goto B66bb6d;
case 0x66bb70:c.instructions+=3;goto B66bb70;
case 0x66bb73:c.instructions+=2;goto B66bb73;
case 0x66bb76:c.instructions+=1;goto B66bb76;
case 0x66bb78:goto L66bb78;
case 0x66bb7d:c.instructions+=1;goto B66bb7d;
case 0x66bb7f:goto L66bb7f;
case 0x66bb83:c.instructions+=3;goto B66bb83;
case 0x66bb86:c.instructions+=2;goto B66bb86;
case 0x66bb8d:c.instructions+=1;goto B66bb8d;
case 0x66bb93:goto L66bb93;
case 0x66bb96:c.instructions+=2;goto B66bb96;
case 0x66bb98:c.instructions+=1;goto B66bb98;
case 0x66bb9a:goto L66bb9a;
case 0x66bb9c:goto L66bb9c;
case 0x66bb9f:goto L66bb9f;
case 0x66bba2:c.instructions+=1;goto B66bba2;
case 0x66bba8:goto L66bba8;
case 0x66bbab:c.instructions+=3;goto B66bbab;
case 0x66bbaf:c.instructions+=2;goto B66bbaf;
case 0x66bbb2:c.instructions+=1;goto B66bbb2;
case 0x66bbb8:goto L66bbb8;
case 0x66bbbb:c.instructions+=2;goto B66bbbb;
case 0x66bbbd:c.instructions+=1;goto B66bbbd;
case 0x66bbbf:goto L66bbbf;
case 0x66bbc1:c.instructions+=1;goto B66bbc1;
case 0x66bbc6:goto L66bbc6;
case 0x66bbca:c.instructions+=1;goto B66bbca;
case 0x66bbcc:goto L66bbcc;
case 0x66bbcf:c.instructions+=1;goto B66bbcf;
case 0x66bbd4:goto L66bbd4;
case 0x66bbd5:goto L66bbd5;
case 0x66bbd9:c.instructions+=1;goto B66bbd9;
case 0x66bbdb:goto L66bbdb;
case 0x66bbde:c.instructions+=1;goto B66bbde;
case 0x66bbe3:goto L66bbe3;
case 0x66bbe4:goto L66bbe4;
case 0x66bbe7:c.instructions+=5;goto B66bbe7;
case 0x66bbe8:c.instructions+=4;goto B66bbe8;
case 0x66bbe9:c.instructions+=3;goto B66bbe9;
case 0x66bbea:c.instructions+=2;goto B66bbea;
case 0x66bbeb:c.instructions+=1;goto B66bbeb;
case 0x66bbee:goto L66bbee;
case 0x66bbf0:c.instructions+=10;goto B66bbf0;
case 0x66bbf1:c.instructions+=9;goto B66bbf1;
case 0x66bbf3:c.instructions+=8;goto B66bbf3;
case 0x66bbf6:c.instructions+=7;goto B66bbf6;
case 0x66bbf9:c.instructions+=6;goto B66bbf9;
case 0x66bbfa:c.instructions+=5;goto B66bbfa;
case 0x66bbfc:c.instructions+=4;goto B66bbfc;
case 0x66bbfe:c.instructions+=3;goto B66bbfe;
case 0x66bc04:c.instructions+=2;goto B66bc04;
case 0x66bc06:c.instructions+=1;goto B66bc06;
case 0x66bc08:goto L66bc08;
case 0x66bc0a:c.instructions+=1;goto B66bc0a;
case 0x66bc0c:goto L66bc0c;
case 0x66bc0e:c.instructions+=2;goto B66bc0e;
case 0x66bc12:c.instructions+=1;goto B66bc12;
case 0x66bc14:goto L66bc14;
case 0x66bc17:c.instructions+=2;goto B66bc17;
case 0x66bc1d:c.instructions+=1;goto B66bc1d;
case 0x66bc23:goto L66bc23;
case 0x66bc25:c.instructions+=1;goto B66bc25;
case 0x66bc2a:goto L66bc2a;
case 0x66bc2e:c.instructions+=4;goto B66bc2e;
case 0x66bc35:c.instructions+=3;goto B66bc35;
case 0x66bc36:c.instructions+=2;goto B66bc36;
case 0x66bc37:c.instructions+=1;goto B66bc37;
case 0x66bc3d:goto L66bc3d;
case 0x66bc3f:c.instructions+=2;goto B66bc3f;
case 0x66bc45:c.instructions+=1;goto B66bc45;
case 0x66bc48:goto L66bc48;
case 0x66bc4b:c.instructions+=7;goto B66bc4b;
case 0x66bc51:c.instructions+=6;goto B66bc51;
case 0x66bc54:c.instructions+=5;goto B66bc54;
case 0x66bc57:c.instructions+=4;goto B66bc57;
case 0x66bc59:c.instructions+=3;goto B66bc59;
case 0x66bc5c:c.instructions+=2;goto B66bc5c;
case 0x66bc5f:c.instructions+=1;goto B66bc5f;
case 0x66bc61:goto L66bc61;
case 0x66bc64:c.instructions+=1;goto B66bc64;
case 0x66bc66:goto L66bc66;
case 0x66bc69:c.instructions+=1;goto B66bc69;
case 0x66bc6c:goto L66bc6c;
case 0x66bc6f:c.instructions+=2;goto B66bc6f;
case 0x66bc73:c.instructions+=1;goto B66bc73;
case 0x66bc75:goto L66bc75;
case 0x66bc77:c.instructions+=1;goto B66bc77;
case 0x66bc79:goto L66bc79;
case 0x66bc7b:c.instructions+=1;goto B66bc7b;
case 0x66bc7d:goto L66bc7d;
case 0x66bc80:c.instructions+=1;goto B66bc80;
case 0x66bc82:goto L66bc82;
case 0x66bc85:c.instructions+=1;goto B66bc85;
case 0x66bc88:goto L66bc88;
case 0x66bc8c:goto L66bc8c;
case 0x66bc8f:c.instructions+=2;goto B66bc8f;
case 0x66bc92:c.instructions+=1;goto B66bc92;
case 0x66bc94:goto L66bc94;
case 0x66bc96:c.instructions+=1;goto B66bc96;
case 0x66bc98:goto L66bc98;
case 0x66bc99:c.instructions+=2;goto B66bc99;
case 0x66bc9b:c.instructions+=1;goto B66bc9b;
case 0x66bc9c:goto L66bc9c;
case 0x66bc9e:c.instructions+=1;goto B66bc9e;
case 0x66bca0:goto L66bca0;
case 0x66bca2:c.instructions+=3;goto B66bca2;
case 0x66bca4:c.instructions+=2;goto B66bca4;
case 0x66bca6:c.instructions+=1;goto B66bca6;
case 0x66bca8:goto L66bca8;
case 0x66bcaa:c.instructions+=1;goto B66bcaa;
case 0x66bcac:goto L66bcac;
case 0x66bcaf:c.instructions+=1;goto B66bcaf;
case 0x66bcb5:goto L66bcb5;
case 0x66bcb8:c.instructions+=1;goto B66bcb8;
case 0x66bcba:goto L66bcba;
case 0x66bcbd:c.instructions+=1;goto B66bcbd;
case 0x66bcbf:goto L66bcbf;
case 0x66bcc2:c.instructions+=4;goto B66bcc2;
case 0x66bcc5:c.instructions+=3;goto B66bcc5;
case 0x66bcc8:c.instructions+=2;goto B66bcc8;
case 0x66bcce:c.instructions+=1;goto B66bcce;
case 0x66bcd4:goto L66bcd4;
case 0x66bcd6:goto L66bcd6;
case 0x66bcd7:c.instructions+=1;goto B66bcd7;
case 0x66bcd8:goto L66bcd8;
case 0x66bcd9:c.instructions+=2;goto B66bcd9;
case 0x66bcda:c.instructions+=1;goto B66bcda;
case 0x66bcdd:goto L66bcdd;
case 0x66bcdf:c.instructions+=1;goto B66bcdf;
case 0x66bce1:goto L66bce1;
case 0x66bce2:c.instructions+=3;goto B66bce2;
case 0x66bce4:c.instructions+=2;goto B66bce4;
case 0x66bce6:c.instructions+=1;goto B66bce6;
case 0x66bce8:goto L66bce8;
case 0x66bcea:c.instructions+=1;goto B66bcea;
case 0x66bcec:goto L66bcec;
case 0x66bced:c.instructions+=1;goto B66bced;
case 0x66bcf2:goto L66bcf2;
case 0x66bcf3:c.instructions+=3;goto B66bcf3;
case 0x66bcf6:c.instructions+=2;goto B66bcf6;
case 0x66bcf9:c.instructions+=1;goto B66bcf9;
case 0x66bcfb:goto L66bcfb;
case 0x66bcfd:goto L66bcfd;
case 0x66bd00:c.instructions+=1;goto B66bd00;
case 0x66bd02:goto L66bd02;
case 0x66bd03:goto L66bd03;
case 0x66bd05:c.instructions+=2;goto B66bd05;
case 0x66bd08:c.instructions+=1;goto B66bd08;
case 0x66bd0a:goto L66bd0a;
case 0x66bd0d:c.instructions+=1;goto B66bd0d;
case 0x66bd0f:goto L66bd0f;
case 0x66bd12:c.instructions+=6;goto B66bd12;
case 0x66bd14:c.instructions+=5;goto B66bd14;
case 0x66bd15:c.instructions+=4;goto B66bd15;
case 0x66bd16:c.instructions+=3;goto B66bd16;
case 0x66bd18:c.instructions+=2;goto B66bd18;
case 0x66bd19:c.instructions+=1;goto B66bd19;
case 0x66bd1e:goto L66bd1e;
case 0x66bd20:c.instructions+=1;goto B66bd20;
case 0x66bd22:goto L66bd22;
case 0x66bd24:c.instructions+=2;goto B66bd24;
case 0x66bd26:c.instructions+=1;goto B66bd26;
case 0x66bd28:goto L66bd28;
case 0x66bd2b:c.instructions+=1;goto B66bd2b;
case 0x66bd2d:goto L66bd2d;
case 0x66bd30:c.instructions+=4;goto B66bd30;
case 0x66bd31:c.instructions+=3;goto B66bd31;
case 0x66bd32:c.instructions+=2;goto B66bd32;
case 0x66bd33:c.instructions+=1;goto B66bd33;
case 0x66bd35:goto L66bd35;
case 0x66bd38:c.instructions+=11;goto B66bd38;
case 0x66bd3b:c.instructions+=10;goto B66bd3b;
case 0x66bd3d:c.instructions+=9;goto B66bd3d;
case 0x66bd43:c.instructions+=8;goto B66bd43;
case 0x66bd45:c.instructions+=7;goto B66bd45;
case 0x66bd48:c.instructions+=6;goto B66bd48;
case 0x66bd4e:c.instructions+=5;goto B66bd4e;
case 0x66bd4f:c.instructions+=4;goto B66bd4f;
case 0x66bd50:c.instructions+=3;goto B66bd50;
case 0x66bd51:c.instructions+=2;goto B66bd51;
case 0x66bd53:c.instructions+=1;goto B66bd53;
case 0x66bd58:goto L66bd58;
case 0x66bd5f:c.instructions+=1;goto B66bd5f;
case 0x66bd61:goto L66bd61;
case 0x66bd64:c.instructions+=4;goto B66bd64;
case 0x66bd65:c.instructions+=3;goto B66bd65;
case 0x66bd66:c.instructions+=2;goto B66bd66;
case 0x66bd68:c.instructions+=1;goto B66bd68;
case 0x66bd69:goto L66bd69;
case 0x66bd6b:c.instructions+=1;goto B66bd6b;
case 0x66bd70:goto L66bd70;
case 0x66bd72:c.instructions+=1;goto B66bd72;
case 0x66bd78:goto L66bd78;
case 0x66bd7a:c.instructions+=1;goto B66bd7a;
case 0x66bd7f:goto L66bd7f;
case 0x66bd81:c.instructions+=5;goto B66bd81;
case 0x66bd82:c.instructions+=4;goto B66bd82;
case 0x66bd84:c.instructions+=3;goto B66bd84;
case 0x66bd88:c.instructions+=2;goto B66bd88;
case 0x66bd8b:c.instructions+=1;goto B66bd8b;
case 0x66bd8d:goto L66bd8d;
case 0x66bd90:c.instructions+=2;goto B66bd90;
case 0x66bd96:c.instructions+=1;goto B66bd96;
case 0x66bd98:goto L66bd98;
case 0x66bd9a:c.instructions+=1;goto B66bd9a;
case 0x66bd9c:goto L66bd9c;
case 0x66bd9f:c.instructions+=5;goto B66bd9f;
case 0x66bda5:c.instructions+=4;goto B66bda5;
case 0x66bda8:c.instructions+=3;goto B66bda8;
case 0x66bdaa:c.instructions+=2;goto B66bdaa;
case 0x66bdac:c.instructions+=1;goto B66bdac;
case 0x66bdae:goto L66bdae;
case 0x66bdaf:c.instructions+=4;goto B66bdaf;
case 0x66bdb1:c.instructions+=3;goto B66bdb1;
case 0x66bdb3:c.instructions+=2;goto B66bdb3;
case 0x66bdb6:c.instructions+=1;goto B66bdb6;
case 0x66bdbb:goto L66bdbb;
case 0x66bdbd:c.instructions+=2;goto B66bdbd;
case 0x66bdbf:c.instructions+=1;goto B66bdbf;
case 0x66bdc1:goto L66bdc1;
case 0x66bdc3:c.instructions+=1;goto B66bdc3;
case 0x66bdc5:goto L66bdc5;
case 0x66bdc8:c.instructions+=2;goto B66bdc8;
case 0x66bdcc:c.instructions+=1;goto B66bdcc;
case 0x66bdce:goto L66bdce;
case 0x66bdd2:c.instructions+=1;goto B66bdd2;
case 0x66bdd4:goto L66bdd4;
case 0x66bdd8:c.instructions+=1;goto B66bdd8;
case 0x66bdda:goto L66bdda;
case 0x66bddd:c.instructions+=4;goto B66bddd;
case 0x66bdde:c.instructions+=3;goto B66bdde;
case 0x66bde1:c.instructions+=2;goto B66bde1;
case 0x66bde3:c.instructions+=1;goto B66bde3;
case 0x66bde5:goto L66bde5;
case 0x66bde7:c.instructions+=1;goto B66bde7;
case 0x66bde9:goto L66bde9;
case 0x66bded:c.instructions+=1;goto B66bded;
case 0x66bdef:goto L66bdef;
case 0x66bdf2:c.instructions+=3;goto B66bdf2;
case 0x66bdf3:c.instructions+=2;goto B66bdf3;
case 0x66bdf4:c.instructions+=1;goto B66bdf4;
case 0x66bdf9:goto L66bdf9;
case 0x66bdfb:c.instructions+=1;goto B66bdfb;
case 0x66bdfd:goto L66bdfd;
case 0x66be00:c.instructions+=3;goto B66be00;
case 0x66be03:c.instructions+=2;goto B66be03;
case 0x66be06:c.instructions+=1;goto B66be06;
case 0x66be08:goto L66be08;
case 0x66be09:goto L66be09;
case 0x66be0a:goto L66be0a;
case 0x66be0b:c.instructions+=1;goto B66be0b;
case 0x66be0e:goto L66be0e;
case 0x66be10:c.instructions+=7;goto B66be10;
case 0x66be11:c.instructions+=6;goto B66be11;
case 0x66be13:c.instructions+=5;goto B66be13;
case 0x66be16:c.instructions+=4;goto B66be16;
case 0x66be18:c.instructions+=3;goto B66be18;
case 0x66be1b:c.instructions+=2;goto B66be1b;
case 0x66be1e:c.instructions+=1;goto B66be1e;
case 0x66be23:goto L66be23;
case 0x66be24:c.instructions+=1;goto B66be24;
case 0x66be27:goto L66be27;
case 0x66be29:c.instructions+=8;goto B66be29;
case 0x66be2a:c.instructions+=7;goto B66be2a;
case 0x66be2c:c.instructions+=6;goto B66be2c;
case 0x66be2d:c.instructions+=5;goto B66be2d;
case 0x66be2f:c.instructions+=4;goto B66be2f;
case 0x66be32:c.instructions+=3;goto B66be32;
case 0x66be33:c.instructions+=2;goto B66be33;
case 0x66be34:c.instructions+=1;goto B66be34;
case 0x66be3a:goto L66be3a;
case 0x66be3d:c.instructions+=4;goto B66be3d;
case 0x66be3f:c.instructions+=3;goto B66be3f;
case 0x66be45:c.instructions+=2;goto B66be45;
case 0x66be48:c.instructions+=1;goto B66be48;
case 0x66be4e:goto L66be4e;
case 0x66be54:c.instructions+=7;goto B66be54;
case 0x66be5a:c.instructions+=6;goto B66be5a;
case 0x66be5c:c.instructions+=5;goto B66be5c;
case 0x66be5f:c.instructions+=4;goto B66be5f;
case 0x66be62:c.instructions+=3;goto B66be62;
case 0x66be65:c.instructions+=2;goto B66be65;
case 0x66be69:c.instructions+=1;goto B66be69;
case 0x66be6b:goto L66be6b;
case 0x66be6e:c.instructions+=1;goto B66be6e;
case 0x66be70:goto L66be70;
case 0x66be73:c.instructions+=1;goto B66be73;
case 0x66be76:goto L66be76;
case 0x66be79:c.instructions+=3;goto B66be79;
case 0x66be7b:c.instructions+=2;goto B66be7b;
case 0x66be7e:c.instructions+=1;goto B66be7e;
case 0x66be80:goto L66be80;
case 0x66be86:c.instructions+=4;goto B66be86;
case 0x66be8a:c.instructions+=3;goto B66be8a;
case 0x66be8d:c.instructions+=2;goto B66be8d;
case 0x66be90:c.instructions+=1;goto B66be90;
case 0x66be92:goto L66be92;
case 0x66be95:c.instructions+=1;goto B66be95;
case 0x66be97:goto L66be97;
case 0x66be9a:c.instructions+=1;goto B66be9a;
case 0x66be9d:goto L66be9d;
case 0x66bea1:c.instructions+=2;goto B66bea1;
case 0x66bea3:c.instructions+=1;goto B66bea3;
case 0x66bea5:goto L66bea5;
case 0x66bea8:c.instructions+=1;goto B66bea8;
case 0x66beaa:goto L66beaa;
case 0x66bead:c.instructions+=2;goto B66bead;
case 0x66beae:c.instructions+=1;goto B66beae;
case 0x66beb3:goto L66beb3;
case 0x66beb4:c.instructions+=3;goto B66beb4;
case 0x66beb5:c.instructions+=2;goto B66beb5;
case 0x66beb7:c.instructions+=1;goto B66beb7;
case 0x66beb9:goto L66beb9;
case 0x66bebc:goto L66bebc;
case 0x66bebe:goto L66bebe;
case 0x66bec1:c.instructions+=4;goto B66bec1;
case 0x66bec4:c.instructions+=3;goto B66bec4;
case 0x66bec7:c.instructions+=2;goto B66bec7;
case 0x66becd:c.instructions+=1;goto B66becd;
case 0x66bed3:goto L66bed3;
case 0x66bed6:goto L66bed6;
case 0x66bedc:c.instructions+=1;goto B66bedc;
case 0x66bee2:goto L66bee2;
case 0x66bee5:c.instructions+=4;goto B66bee5;
case 0x66beeb:c.instructions+=3;goto B66beeb;
case 0x66beee:c.instructions+=2;goto B66beee;
case 0x66bef0:c.instructions+=1;goto B66bef0;
case 0x66bef5:goto L66bef5;
case 0x66bef8:c.instructions+=5;goto B66bef8;
case 0x66bef9:c.instructions+=4;goto B66bef9;
case 0x66befb:c.instructions+=3;goto B66befb;
case 0x66befe:c.instructions+=2;goto B66befe;
case 0x66bf00:c.instructions+=1;goto B66bf00;
case 0x66bf05:goto L66bf05;
case 0x66bf07:c.instructions+=2;goto B66bf07;
case 0x66bf09:c.instructions+=1;goto B66bf09;
case 0x66bf0f:goto L66bf0f;
case 0x66bf12:c.instructions+=2;goto B66bf12;
case 0x66bf16:c.instructions+=1;goto B66bf16;
case 0x66bf1c:goto L66bf1c;
case 0x66bf20:c.instructions+=1;goto B66bf20;
case 0x66bf22:goto L66bf22;
case 0x66bf25:c.instructions+=1;goto B66bf25;
case 0x66bf2b:goto L66bf2b;
case 0x66bf2e:c.instructions+=3;goto B66bf2e;
case 0x66bf31:c.instructions+=2;goto B66bf31;
case 0x66bf34:c.instructions+=1;goto B66bf34;
case 0x66bf36:goto L66bf36;
case 0x66bf37:c.instructions+=3;goto B66bf37;
case 0x66bf38:c.instructions+=2;goto B66bf38;
case 0x66bf3a:c.instructions+=1;goto B66bf3a;
case 0x66bf3f:goto L66bf3f;
case 0x66bf41:c.instructions+=1;goto B66bf41;
case 0x66bf47:goto L66bf47;
case 0x66bf49:c.instructions+=3;goto B66bf49;
case 0x66bf4c:c.instructions+=2;goto B66bf4c;
case 0x66bf4f:c.instructions+=1;goto B66bf4f;
case 0x66bf51:goto L66bf51;
case 0x66bf57:c.instructions+=7;goto B66bf57;
case 0x66bf5a:c.instructions+=6;goto B66bf5a;
case 0x66bf5d:c.instructions+=5;goto B66bf5d;
case 0x66bf60:c.instructions+=4;goto B66bf60;
case 0x66bf62:c.instructions+=3;goto B66bf62;
case 0x66bf65:c.instructions+=2;goto B66bf65;
case 0x66bf69:c.instructions+=1;goto B66bf69;
case 0x66bf6b:goto L66bf6b;
case 0x66bf6e:c.instructions+=1;goto B66bf6e;
case 0x66bf70:goto L66bf70;
case 0x66bf73:c.instructions+=1;goto B66bf73;
case 0x66bf76:goto L66bf76;
case 0x66bf79:c.instructions+=2;goto B66bf79;
case 0x66bf7d:c.instructions+=1;goto B66bf7d;
case 0x66bf7f:goto L66bf7f;
case 0x66bf81:c.instructions+=1;goto B66bf81;
case 0x66bf83:goto L66bf83;
case 0x66bf86:c.instructions+=1;goto B66bf86;
case 0x66bf88:goto L66bf88;
case 0x66bf8b:c.instructions+=1;goto B66bf8b;
case 0x66bf8e:goto L66bf8e;
case 0x66bf92:c.instructions+=2;goto B66bf92;
case 0x66bf94:c.instructions+=1;goto B66bf94;
case 0x66bf96:goto L66bf96;
case 0x66bf9a:c.instructions+=1;goto B66bf9a;
case 0x66bf9c:goto L66bf9c;
case 0x66bf9f:c.instructions+=2;goto B66bf9f;
case 0x66bfa0:c.instructions+=1;goto B66bfa0;
case 0x66bfa5:goto L66bfa5;
case 0x66bfa6:c.instructions+=3;goto B66bfa6;
case 0x66bfa7:c.instructions+=2;goto B66bfa7;
case 0x66bfa9:c.instructions+=1;goto B66bfa9;
case 0x66bfab:goto L66bfab;
case 0x66bfaf:goto L66bfaf;
case 0x66bfb1:goto L66bfb1;
case 0x66bfb4:c.instructions+=4;goto B66bfb4;
case 0x66bfb7:c.instructions+=3;goto B66bfb7;
case 0x66bfba:c.instructions+=2;goto B66bfba;
case 0x66bfbd:c.instructions+=1;goto B66bfbd;
case 0x66bfbf:goto L66bfbf;
case 0x66bfc2:goto L66bfc2;
case 0x66bfc5:c.instructions+=1;goto B66bfc5;
case 0x66bfc7:goto L66bfc7;
case 0x66bfc9:c.instructions+=1;goto B66bfc9;
case 0x66bfcb:goto L66bfcb;
case 0x66bfce:c.instructions+=2;goto B66bfce;
case 0x66bfd1:c.instructions+=1;goto B66bfd1;
case 0x66bfd4:goto L66bfd4;
case 0x66bfd6:goto L66bfd6;
case 0x66bfd7:c.instructions+=4;goto B66bfd7;
case 0x66bfd8:c.instructions+=3;goto B66bfd8;
case 0x66bfd9:c.instructions+=2;goto B66bfd9;
case 0x66bfda:c.instructions+=1;goto B66bfda;
case 0x66bfdd:goto L66bfdd;
case 0x66bfdf:c.instructions+=10;goto B66bfdf;
case 0x66bfe0:c.instructions+=9;goto B66bfe0;
case 0x66bfe2:c.instructions+=8;goto B66bfe2;
case 0x66bfe3:c.instructions+=7;goto B66bfe3;
case 0x66bfe4:c.instructions+=6;goto B66bfe4;
case 0x66bfe7:c.instructions+=5;goto B66bfe7;
case 0x66bfeb:c.instructions+=4;goto B66bfeb;
case 0x66bfec:c.instructions+=3;goto B66bfec;
case 0x66bfee:c.instructions+=2;goto B66bfee;
case 0x66bff1:c.instructions+=1;goto B66bff1;
case 0x66bff3:goto L66bff3;
case 0x66bff5:c.instructions+=3;goto B66bff5;
case 0x66bff8:c.instructions+=2;goto B66bff8;
case 0x66bffa:c.instructions+=1;goto B66bffa;
case 0x66bfff:goto L66bfff;
default:missing_instruction(c.pc);}
B66b005:L66b005:{c.instructions+=11;NFSU2_TR(0x66b005);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b006:{NFSU2_TR(0x66b006);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66b008:{NFSU2_TR(0x66b008);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66b00b:{NFSU2_TR(0x66b00b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b00c:{NFSU2_TR(0x66b00c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b00d:{NFSU2_TR(0x66b00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b010:{NFSU2_TR(0x66b010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b013:{NFSU2_TR(0x66b013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b016:{NFSU2_TR(0x66b016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b019:{NFSU2_TR(0x66b019);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b01c:{NFSU2_TR(0x66b01c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b021ull));
TAIL_STATIC(0x575620u,575);
}
B66b021:L66b021:{c.instructions+=6;NFSU2_TR(0x66b021);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b027:{NFSU2_TR(0x66b027);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b02d:{NFSU2_TR(0x66b02d);
u8 U[32];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B66b034:{NFSU2_TR(0x66b034);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66b037:{NFSU2_TR(0x66b037);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b038:{NFSU2_TR(0x66b038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b03dull));
TAIL_STATIC(0x575620u,575);
}
B66b03d:L66b03d:{c.instructions+=3;NFSU2_TR(0x66b03d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66b043:{NFSU2_TR(0x66b043);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b049:{NFSU2_TR(0x66b049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b04eull));
TAIL_STATIC(0x575620u,575);
}
B66b04e:L66b04e:{c.instructions+=5;NFSU2_TR(0x66b04e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B66b051:{NFSU2_TR(0x66b051);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b057:{NFSU2_TR(0x66b057);
__builtin_memmove((R+28),(R+0),4);
}
B66b059:{NFSU2_TR(0x66b059);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b05f:{NFSU2_TR(0x66b05f);
if(r1(R+518)){{goto L66b417;}}
}
B66b065:L66b065:{c.instructions+=2;NFSU2_TR(0x66b065);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b06b:{NFSU2_TR(0x66b06b);
if(r1(R+518)){{goto L66b417;}}
}
B66b071:L66b071:{c.instructions+=2;NFSU2_TR(0x66b071);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66b073:{NFSU2_TR(0x66b073);
if(r1(R+518)){{goto L66b417;}}
}
B66b079:L66b079:{c.instructions+=4;NFSU2_TR(0x66b079);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b07f:{NFSU2_TR(0x66b07f);
__builtin_memmove((R+8),(R+4),4);
}
B66b081:{NFSU2_TR(0x66b081);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66b084:{NFSU2_TR(0x66b084);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b086:L66b086:{c.instructions+=1;NFSU2_TR(0x66b086);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L66b088;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b086u);}goto L66b086;}
}
B66b088:L66b088:{c.instructions+=2;NFSU2_TR(0x66b088);
__builtin_memmove((R+4),(R+8),4);
}
B66b08a:{NFSU2_TR(0x66b08a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66b08d:L66b08d:{c.instructions+=1;NFSU2_TR(0x66b08d);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L66b08f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b08du);}goto L66b08d;}
}
B66b08f:L66b08f:{c.instructions+=3;NFSU2_TR(0x66b08f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b095:{NFSU2_TR(0x66b095);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66b099:{NFSU2_TR(0x66b099);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b3f0;}}
}
B66b09f:L66b09f:{c.instructions+=1;NFSU2_TR(0x66b09f);
{goto L66b0a3;}
}
B66b0a1:L66b0a1:{c.instructions+=1;NFSU2_TR(0x66b0a1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66b0a3:L66b0a3:{c.instructions+=15;NFSU2_TR(0x66b0a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66b0a7:{NFSU2_TR(0x66b0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b0ad:{NFSU2_TR(0x66b0ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66b0b3:{NFSU2_TR(0x66b0b3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b0b6:{NFSU2_TR(0x66b0b6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66b0bc:{NFSU2_TR(0x66b0bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66b0bf:{NFSU2_TR(0x66b0bf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B66b0c1:{NFSU2_TR(0x66b0c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b0c7:{NFSU2_TR(0x66b0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66b0cd:{NFSU2_TR(0x66b0cd);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B66b0cf:{NFSU2_TR(0x66b0cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b0d5:{NFSU2_TR(0x66b0d5);
u8 U[24];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(r4(R+24))));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+24))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B66b0d9:{NFSU2_TR(0x66b0d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b0dc:{NFSU2_TR(0x66b0dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b0df:{NFSU2_TR(0x66b0df);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b137;}}
}
B66b0e1:L66b0e1:{c.instructions+=1;NFSU2_TR(0x66b0e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b0e4:L66b0e4:{c.instructions+=11;NFSU2_TR(0x66b0e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b0e8:{NFSU2_TR(0x66b0e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b0ee:{NFSU2_TR(0x66b0ee);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b0f4:{NFSU2_TR(0x66b0f4);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B66b0f8:{NFSU2_TR(0x66b0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B66b0fb:{NFSU2_TR(0x66b0fb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b0fd:{NFSU2_TR(0x66b0fd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b101:{NFSU2_TR(0x66b101);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b102:{NFSU2_TR(0x66b102);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b103:{NFSU2_TR(0x66b103);
__builtin_memmove((R+4),(R+12),4);
}
B66b105:{NFSU2_TR(0x66b105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b10aull));
TAIL_STATIC(0x65ae25u,65a);
}
B66b10a:L66b10a:{c.instructions+=5;NFSU2_TR(0x66b10a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b10e:{NFSU2_TR(0x66b10e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b10f:{NFSU2_TR(0x66b10f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b110:{NFSU2_TR(0x66b110);
__builtin_memmove((R+4),(R+12),4);
}
B66b112:{NFSU2_TR(0x66b112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b117ull));
TAIL_STATIC(0x66aa2fu,66a);
}
B66b117:L66b117:{c.instructions+=8;NFSU2_TR(0x66b117);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b11b:{NFSU2_TR(0x66b11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b11e:{NFSU2_TR(0x66b11e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b124:{NFSU2_TR(0x66b124);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b12a:{NFSU2_TR(0x66b12a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66b12d:{NFSU2_TR(0x66b12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x38ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b131:{NFSU2_TR(0x66b131);
u8 U[20];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+16))));
}
B66b135:{NFSU2_TR(0x66b135);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b0e4u);}goto L66b0e4;}}
}
B66b137:L66b137:{c.instructions+=3;NFSU2_TR(0x66b137);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b13e:{NFSU2_TR(0x66b13e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b141:{NFSU2_TR(0x66b141);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b321;}}
}
B66b147:L66b147:{c.instructions+=8;NFSU2_TR(0x66b147);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b14d:{NFSU2_TR(0x66b14d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66b150:{NFSU2_TR(0x66b150);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b153:{NFSU2_TR(0x66b153);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66b155:{NFSU2_TR(0x66b155);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66b157:{NFSU2_TR(0x66b157);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b15a:{NFSU2_TR(0x66b15a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b15d:{NFSU2_TR(0x66b15d);
if(r1(R+518)){{goto L66b24d;}}
}
B66b163:L66b163:{c.instructions+=2;NFSU2_TR(0x66b163);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b166:{NFSU2_TR(0x66b166);
{goto L66b16b;}
}
B66b168:L66b168:{c.instructions+=1;NFSU2_TR(0x66b168);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b16b:L66b16b:{c.instructions+=8;NFSU2_TR(0x66b16b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b16e:{NFSU2_TR(0x66b16e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66b172:{NFSU2_TR(0x66b172);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66b175:{NFSU2_TR(0x66b175);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66b178:{NFSU2_TR(0x66b178);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B66b17a:{NFSU2_TR(0x66b17a);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66b17f:{NFSU2_TR(0x66b17f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b182:{NFSU2_TR(0x66b182);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b238;}}
}
B66b188:L66b188:{c.instructions+=2;NFSU2_TR(0x66b188);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B66b18c:{NFSU2_TR(0x66b18c);
if(r1(R+518)){{goto L66b1e6;}}
}
B66b18e:L66b18e:{c.instructions+=3;NFSU2_TR(0x66b18e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b191:{NFSU2_TR(0x66b191);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B66b194:{NFSU2_TR(0x66b194);
if(r1(R+512)){{goto L66b1d8;}}
}
B66b196:L66b196:{c.instructions+=5;NFSU2_TR(0x66b196);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B66b19a:{NFSU2_TR(0x66b19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b19d:{NFSU2_TR(0x66b19d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66b1a0:{NFSU2_TR(0x66b1a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b1a1:{NFSU2_TR(0x66b1a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b1a6ull));
TAIL_STATIC(0x575620u,575);
}
B66b1a6:L66b1a6:{c.instructions+=4;NFSU2_TR(0x66b1a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b1a8:{NFSU2_TR(0x66b1a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b1a9:{NFSU2_TR(0x66b1a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b1ac:{NFSU2_TR(0x66b1ac);
if(r1(R+518)){{goto L66b390;}}
}
B66b1b2:L66b1b2:{c.instructions+=3;NFSU2_TR(0x66b1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b1b5:{NFSU2_TR(0x66b1b5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b1b7:{NFSU2_TR(0x66b1b7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b1c6;}}
}
B66b1b9:L66b1b9:{c.instructions+=2;NFSU2_TR(0x66b1b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66b1bc:{NFSU2_TR(0x66b1bc);
__builtin_memmove((R+28),(R+0),4);
}
B66b1be:L66b1be:{c.instructions+=1;NFSU2_TR(0x66b1be);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66b1c0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b1beu);}goto L66b1be;}
}
B66b1c0:L66b1c0:{c.instructions+=2;NFSU2_TR(0x66b1c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66b1c3:{NFSU2_TR(0x66b1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b1c6:L66b1c6:{c.instructions+=2;NFSU2_TR(0x66b1c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66b1c9:{NFSU2_TR(0x66b1c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b1ceull));
TAIL_STATIC(0x575630u,575);
}
B66b1ce:L66b1ce:{c.instructions+=4;NFSU2_TR(0x66b1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b1d1:{NFSU2_TR(0x66b1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b1d4:{NFSU2_TR(0x66b1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b1d7:{NFSU2_TR(0x66b1d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b1d8:L66b1d8:{c.instructions+=5;NFSU2_TR(0x66b1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66b1db:{NFSU2_TR(0x66b1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b1de:{NFSU2_TR(0x66b1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b1e1:{NFSU2_TR(0x66b1e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66b1e4:{NFSU2_TR(0x66b1e4);
{goto L66b238;}
}
B66b1e6:L66b1e6:{c.instructions+=3;NFSU2_TR(0x66b1e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b1e9:{NFSU2_TR(0x66b1e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B66b1eb:{NFSU2_TR(0x66b1eb);
if(r1(R+512)){{goto L66b22e;}}
}
B66b1ed:L66b1ed:{c.instructions+=5;NFSU2_TR(0x66b1ed);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B66b1f1:{NFSU2_TR(0x66b1f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b1f4:{NFSU2_TR(0x66b1f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66b1f7:{NFSU2_TR(0x66b1f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b1f8:{NFSU2_TR(0x66b1f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b1fdull));
TAIL_STATIC(0x575620u,575);
}
B66b1fd:L66b1fd:{c.instructions+=4;NFSU2_TR(0x66b1fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b1ff:{NFSU2_TR(0x66b1ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b200:{NFSU2_TR(0x66b200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b203:{NFSU2_TR(0x66b203);
if(r1(R+518)){{goto L66b390;}}
}
B66b209:L66b209:{c.instructions+=2;NFSU2_TR(0x66b209);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b20b:{NFSU2_TR(0x66b20b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b21c;}}
}
B66b20d:L66b20d:{c.instructions+=3;NFSU2_TR(0x66b20d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66b210:{NFSU2_TR(0x66b210);
__builtin_memmove((R+4),(R+28),4);
}
B66b212:{NFSU2_TR(0x66b212);
__builtin_memmove((R+28),(R+0),4);
}
B66b214:L66b214:{c.instructions+=1;NFSU2_TR(0x66b214);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66b216;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b214u);}goto L66b214;}
}
B66b216:L66b216:{c.instructions+=2;NFSU2_TR(0x66b216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66b219:{NFSU2_TR(0x66b219);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b21c:L66b21c:{c.instructions+=2;NFSU2_TR(0x66b21c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66b21f:{NFSU2_TR(0x66b21f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b224ull));
TAIL_STATIC(0x575630u,575);
}
B66b224:L66b224:{c.instructions+=4;NFSU2_TR(0x66b224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b227:{NFSU2_TR(0x66b227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b22a:{NFSU2_TR(0x66b22a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b22d:{NFSU2_TR(0x66b22d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b22e:L66b22e:{c.instructions+=4;NFSU2_TR(0x66b22e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b231:{NFSU2_TR(0x66b231);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66b234:{NFSU2_TR(0x66b234);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66b235:{NFSU2_TR(0x66b235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b238:L66b238:{c.instructions+=5;NFSU2_TR(0x66b238);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b23e:{NFSU2_TR(0x66b23e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66b241:{NFSU2_TR(0x66b241);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b244:{NFSU2_TR(0x66b244);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b247:{NFSU2_TR(0x66b247);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b168u);}goto L66b168;}}
}
B66b24d:L66b24d:{c.instructions+=3;NFSU2_TR(0x66b24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b250:{NFSU2_TR(0x66b250);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66b252:{NFSU2_TR(0x66b252);
if(r1(R+518)){{goto L66b300;}}
}
B66b258:L66b258:{c.instructions+=3;NFSU2_TR(0x66b258);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66b25f:{NFSU2_TR(0x66b25f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b260:{NFSU2_TR(0x66b260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b265ull));
TAIL_STATIC(0x575620u,575);
}
B66b265:L66b265:{c.instructions+=7;NFSU2_TR(0x66b265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b266:{NFSU2_TR(0x66b266);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b26c:{NFSU2_TR(0x66b26c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66b26f:{NFSU2_TR(0x66b26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b275:{NFSU2_TR(0x66b275);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66b278:{NFSU2_TR(0x66b278);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b27a:{NFSU2_TR(0x66b27a);
if(r1(R+518)){{goto L66b390;}}
}
B66b280:L66b280:{c.instructions+=2;NFSU2_TR(0x66b280);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b282:{NFSU2_TR(0x66b282);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b293;}}
}
B66b284:L66b284:{c.instructions+=3;NFSU2_TR(0x66b284);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66b287:{NFSU2_TR(0x66b287);
__builtin_memmove((R+4),(R+28),4);
}
B66b289:{NFSU2_TR(0x66b289);
__builtin_memmove((R+28),(R+0),4);
}
B66b28b:L66b28b:{c.instructions+=1;NFSU2_TR(0x66b28b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66b28d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b28bu);}goto L66b28b;}
}
B66b28d:L66b28d:{c.instructions+=2;NFSU2_TR(0x66b28d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66b290:{NFSU2_TR(0x66b290);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b293:L66b293:{c.instructions+=10;NFSU2_TR(0x66b293);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66b299:{NFSU2_TR(0x66b299);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b29c:{NFSU2_TR(0x66b29c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B66b29f:{NFSU2_TR(0x66b29f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66b2a2:{NFSU2_TR(0x66b2a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b2a5:{NFSU2_TR(0x66b2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B66b2a8:{NFSU2_TR(0x66b2a8);
__builtin_memmove((R+8),(R+4),4);
}
B66b2aa:{NFSU2_TR(0x66b2aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66b2ad:{NFSU2_TR(0x66b2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b2b0:{NFSU2_TR(0x66b2b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b2b2:L66b2b2:{c.instructions+=1;NFSU2_TR(0x66b2b2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L66b2b4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b2b2u);}goto L66b2b2;}
}
B66b2b4:L66b2b4:{c.instructions+=3;NFSU2_TR(0x66b2b4);
__builtin_memmove((R+4),(R+8),4);
}
B66b2b6:{NFSU2_TR(0x66b2b6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66b2b9:{NFSU2_TR(0x66b2b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b2bd:L66b2bd:{c.instructions+=1;NFSU2_TR(0x66b2bd);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L66b2bf;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b2bdu);}goto L66b2bd;}
}
B66b2bf:L66b2bf:{c.instructions+=1;NFSU2_TR(0x66b2bf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b30a;}}
}
B66b2c1:L66b2c1:{c.instructions+=4;NFSU2_TR(0x66b2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b2c4:{NFSU2_TR(0x66b2c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66b2c7:{NFSU2_TR(0x66b2c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b2c8:{NFSU2_TR(0x66b2c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b2cdull));
TAIL_STATIC(0x575620u,575);
}
B66b2cd:L66b2cd:{c.instructions+=6;NFSU2_TR(0x66b2cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b2cf:{NFSU2_TR(0x66b2cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b2d0:{NFSU2_TR(0x66b2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b2d3:{NFSU2_TR(0x66b2d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B66b2d6:{NFSU2_TR(0x66b2d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B66b2d8:{NFSU2_TR(0x66b2d8);
if(r1(R+518)){{goto L66b390;}}
}
B66b2de:L66b2de:{c.instructions+=5;NFSU2_TR(0x66b2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66b2e1:{NFSU2_TR(0x66b2e1);
__builtin_memmove((R+4),(R+28),4);
}
B66b2e3:{NFSU2_TR(0x66b2e3);
__builtin_memmove((R+28),(R+0),4);
}
B66b2e5:{NFSU2_TR(0x66b2e5);
__builtin_memmove((R+0),(R+4),4);
}
B66b2e7:{NFSU2_TR(0x66b2e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66b2ea:L66b2ea:{c.instructions+=1;NFSU2_TR(0x66b2ea);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66b2ec;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b2eau);}goto L66b2ea;}
}
B66b2ec:L66b2ec:{c.instructions+=2;NFSU2_TR(0x66b2ec);
__builtin_memmove((R+4),(R+0),4);
}
B66b2ee:{NFSU2_TR(0x66b2ee);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66b2f1:L66b2f1:{c.instructions+=1;NFSU2_TR(0x66b2f1);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L66b2f3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b2f1u);}goto L66b2f1;}
}
B66b2f3:L66b2f3:{c.instructions+=6;NFSU2_TR(0x66b2f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B66b2f5:{NFSU2_TR(0x66b2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66b2f8:{NFSU2_TR(0x66b2f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b2fa:{NFSU2_TR(0x66b2fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B66b2fd:{NFSU2_TR(0x66b2fd);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B66b2fe:{NFSU2_TR(0x66b2fe);
{goto L66b311;}
}
B66b300:L66b300:{c.instructions+=2;NFSU2_TR(0x66b300);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b306:{NFSU2_TR(0x66b306);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B66b30a:L66b30a:{c.instructions+=2;NFSU2_TR(0x66b30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b30d:{NFSU2_TR(0x66b30d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B66b311:L66b311:{c.instructions+=4;NFSU2_TR(0x66b311);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66b312:{NFSU2_TR(0x66b312);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B66b318:{NFSU2_TR(0x66b318);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b31b:{NFSU2_TR(0x66b31b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b147u);}goto L66b147;}}
}
B66b321:L66b321:{c.instructions+=7;NFSU2_TR(0x66b321);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b325:{NFSU2_TR(0x66b325);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b32b:{NFSU2_TR(0x66b32b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b331:{NFSU2_TR(0x66b331);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66b333:{NFSU2_TR(0x66b333);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66b335:{NFSU2_TR(0x66b335);
u8 U[24];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(r4(R+24))));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+24))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B66b339:{NFSU2_TR(0x66b339);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b37a;}}
}
B66b33b:L66b33b:{c.instructions+=10;NFSU2_TR(0x66b33b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b33f:{NFSU2_TR(0x66b33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b345:{NFSU2_TR(0x66b345);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b34b:{NFSU2_TR(0x66b34b);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B66b34f:{NFSU2_TR(0x66b34f);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B66b354:{NFSU2_TR(0x66b354);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b356:{NFSU2_TR(0x66b356);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b358:{NFSU2_TR(0x66b358);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b359:{NFSU2_TR(0x66b359);
__builtin_memmove((R+4),(R+12),4);
}
B66b35b:{NFSU2_TR(0x66b35b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b360ull));
TAIL_STATIC(0x65ae25u,65a);
}
B66b360:L66b360:{c.instructions+=7;NFSU2_TR(0x66b360);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b364:{NFSU2_TR(0x66b364);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b36a:{NFSU2_TR(0x66b36a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b370:{NFSU2_TR(0x66b370);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66b371:{NFSU2_TR(0x66b371);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B66b374:{NFSU2_TR(0x66b374);
u8 U[20];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+16))));
}
B66b378:{NFSU2_TR(0x66b378);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b33bu);}goto L66b33b;}}
}
B66b37a:L66b37a:{c.instructions+=4;NFSU2_TR(0x66b37a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66b37e:{NFSU2_TR(0x66b37e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b382:{NFSU2_TR(0x66b382);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66b388:{NFSU2_TR(0x66b388);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b0a1u);}goto L66b0a1;}}
}
B66b38e:L66b38e:{c.instructions+=1;NFSU2_TR(0x66b38e);
{goto L66b3f0;}
}
B66b390:L66b390:{c.instructions+=8;NFSU2_TR(0x66b390);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b394:{NFSU2_TR(0x66b394);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b39a:{NFSU2_TR(0x66b39a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b3a0:{NFSU2_TR(0x66b3a0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66b3a2:{NFSU2_TR(0x66b3a2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66b3a4:{NFSU2_TR(0x66b3a4);
u8 U[24];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(r4(R+24))));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+24))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B66b3a8:{NFSU2_TR(0x66b3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66b3af:{NFSU2_TR(0x66b3af);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b3f0;}}
}
B66b3b1:L66b3b1:{c.instructions+=10;NFSU2_TR(0x66b3b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b3b5:{NFSU2_TR(0x66b3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b3bb:{NFSU2_TR(0x66b3bb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b3c1:{NFSU2_TR(0x66b3c1);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B66b3c5:{NFSU2_TR(0x66b3c5);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B66b3ca:{NFSU2_TR(0x66b3ca);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b3cc:{NFSU2_TR(0x66b3cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b3ce:{NFSU2_TR(0x66b3ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b3cf:{NFSU2_TR(0x66b3cf);
__builtin_memmove((R+4),(R+12),4);
}
B66b3d1:{NFSU2_TR(0x66b3d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b3d6ull));
TAIL_STATIC(0x65ae25u,65a);
}
B66b3d6:L66b3d6:{c.instructions+=7;NFSU2_TR(0x66b3d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b3da:{NFSU2_TR(0x66b3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b3e0:{NFSU2_TR(0x66b3e0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b3e6:{NFSU2_TR(0x66b3e6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66b3e7:{NFSU2_TR(0x66b3e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B66b3ea:{NFSU2_TR(0x66b3ea);
u8 U[20];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+16))));
}
B66b3ee:{NFSU2_TR(0x66b3ee);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b3b1u);}goto L66b3b1;}}
}
B66b3f0:L66b3f0:{c.instructions+=1;NFSU2_TR(0x66b3f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66b3f6:L66b3f6:{c.instructions+=2;NFSU2_TR(0x66b3f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66b3f9:{NFSU2_TR(0x66b3f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b3feull));
TAIL_STATIC(0x575630u,575);
}
B66b3fe:L66b3fe:{c.instructions+=2;NFSU2_TR(0x66b3fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66b401:{NFSU2_TR(0x66b401);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b406ull));
TAIL_STATIC(0x575630u,575);
}
B66b406:L66b406:{c.instructions+=9;NFSU2_TR(0x66b406);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x119ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xf7ull))));
s1(u32(r4(U+0)),r1(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B66b40d:{NFSU2_TR(0x66b40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b410:{NFSU2_TR(0x66b410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b411:{NFSU2_TR(0x66b411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b412:{NFSU2_TR(0x66b412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66b413:{NFSU2_TR(0x66b413);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66b414:{NFSU2_TR(0x66b414);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66b415:{NFSU2_TR(0x66b415);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66b416:{NFSU2_TR(0x66b416);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66b417:L66b417:{c.instructions+=2;NFSU2_TR(0x66b417);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66b41e:{NFSU2_TR(0x66b41e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b3f6u);}goto L66b3f6;}
}
B66b420:L66b420:{c.instructions+=18;NFSU2_TR(0x66b420);
__builtin_memmove((R+28),(R+28),4);
}
B66b422:{NFSU2_TR(0x66b422);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b423:{NFSU2_TR(0x66b423);
__builtin_memmove((R+20),(R+16),4);
}
B66b425:{NFSU2_TR(0x66b425);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b426:{NFSU2_TR(0x66b426);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b427:{NFSU2_TR(0x66b427);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b428:{NFSU2_TR(0x66b428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66b42b:{NFSU2_TR(0x66b42b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b42c:{NFSU2_TR(0x66b42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66b42f:{NFSU2_TR(0x66b42f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b431:{NFSU2_TR(0x66b431);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B66b433:{NFSU2_TR(0x66b433);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b434:{NFSU2_TR(0x66b434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b437:{NFSU2_TR(0x66b437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b43a:{NFSU2_TR(0x66b43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b43d:{NFSU2_TR(0x66b43d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b440:{NFSU2_TR(0x66b440);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b443:{NFSU2_TR(0x66b443);
if(r1(R+518)){{goto L66b460;}}
}
B66b445:L66b445:{c.instructions+=3;NFSU2_TR(0x66b445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66b447:{NFSU2_TR(0x66b447);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b448:{NFSU2_TR(0x66b448);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b44bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b44b:L66b44b:{c.instructions+=4;NFSU2_TR(0x66b44b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b44d:{NFSU2_TR(0x66b44d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66b44e:{NFSU2_TR(0x66b44e);
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
B66b450:{NFSU2_TR(0x66b450);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66b460;}}
}
B66b452:L66b452:{c.instructions+=3;NFSU2_TR(0x66b452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66b454:{NFSU2_TR(0x66b454);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b455:{NFSU2_TR(0x66b455);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b458ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b458:L66b458:{c.instructions+=3;NFSU2_TR(0x66b458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b45a:{NFSU2_TR(0x66b45a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66b45d:{NFSU2_TR(0x66b45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b460:L66b460:{c.instructions+=3;NFSU2_TR(0x66b460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B66b462:{NFSU2_TR(0x66b462);
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
B66b464:{NFSU2_TR(0x66b464);
if(r1(R+518)){{goto L66b481;}}
}
B66b466:L66b466:{c.instructions+=3;NFSU2_TR(0x66b466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66b468:{NFSU2_TR(0x66b468);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b469:{NFSU2_TR(0x66b469);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b46cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b46c:L66b46c:{c.instructions+=4;NFSU2_TR(0x66b46c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b46e:{NFSU2_TR(0x66b46e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66b46f:{NFSU2_TR(0x66b46f);
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
B66b471:{NFSU2_TR(0x66b471);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66b481;}}
}
B66b473:L66b473:{c.instructions+=3;NFSU2_TR(0x66b473);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66b475:{NFSU2_TR(0x66b475);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b476:{NFSU2_TR(0x66b476);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b479ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b479:L66b479:{c.instructions+=3;NFSU2_TR(0x66b479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b47b:{NFSU2_TR(0x66b47b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66b47e:{NFSU2_TR(0x66b47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b481:L66b481:{c.instructions+=3;NFSU2_TR(0x66b481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B66b483:{NFSU2_TR(0x66b483);
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
B66b485:{NFSU2_TR(0x66b485);
if(r1(R+518)){{goto L66b4a2;}}
}
B66b487:L66b487:{c.instructions+=3;NFSU2_TR(0x66b487);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66b489:{NFSU2_TR(0x66b489);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b48a:{NFSU2_TR(0x66b48a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b48dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b48d:L66b48d:{c.instructions+=4;NFSU2_TR(0x66b48d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b48f:{NFSU2_TR(0x66b48f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66b490:{NFSU2_TR(0x66b490);
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
B66b492:{NFSU2_TR(0x66b492);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66b4a2;}}
}
B66b494:L66b494:{c.instructions+=3;NFSU2_TR(0x66b494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66b496:{NFSU2_TR(0x66b496);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b497:{NFSU2_TR(0x66b497);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b49aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b49a:L66b49a:{c.instructions+=3;NFSU2_TR(0x66b49a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b49c:{NFSU2_TR(0x66b49c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66b49f:{NFSU2_TR(0x66b49f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b4a2:L66b4a2:{c.instructions+=3;NFSU2_TR(0x66b4a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B66b4a4:{NFSU2_TR(0x66b4a4);
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
B66b4a6:{NFSU2_TR(0x66b4a6);
if(r1(R+518)){{goto L66b4c3;}}
}
B66b4a8:L66b4a8:{c.instructions+=3;NFSU2_TR(0x66b4a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66b4aa:{NFSU2_TR(0x66b4aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b4ab:{NFSU2_TR(0x66b4ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b4aeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b4ae:L66b4ae:{c.instructions+=4;NFSU2_TR(0x66b4ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b4b0:{NFSU2_TR(0x66b4b0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66b4b1:{NFSU2_TR(0x66b4b1);
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
B66b4b3:{NFSU2_TR(0x66b4b3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66b4c3;}}
}
B66b4b5:L66b4b5:{c.instructions+=3;NFSU2_TR(0x66b4b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66b4b7:{NFSU2_TR(0x66b4b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b4b8:{NFSU2_TR(0x66b4b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b4bbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b4bb:L66b4bb:{c.instructions+=3;NFSU2_TR(0x66b4bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b4bd:{NFSU2_TR(0x66b4bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66b4c0:{NFSU2_TR(0x66b4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b4c3:L66b4c3:{c.instructions+=3;NFSU2_TR(0x66b4c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B66b4c5:{NFSU2_TR(0x66b4c5);
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
B66b4c7:{NFSU2_TR(0x66b4c7);
if(r1(R+518)){{goto L66b4fb;}}
}
B66b4c9:L66b4c9:{c.instructions+=3;NFSU2_TR(0x66b4c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66b4cb:{NFSU2_TR(0x66b4cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b4cc:{NFSU2_TR(0x66b4cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b4cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b4cf:L66b4cf:{c.instructions+=2;NFSU2_TR(0x66b4cf);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66b4d1:{NFSU2_TR(0x66b4d1);
if(r1(R+512)){{goto L66b4fb;}}
}
B66b4d3:L66b4d3:{c.instructions+=6;NFSU2_TR(0x66b4d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b4d5:{NFSU2_TR(0x66b4d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b4d8:{NFSU2_TR(0x66b4d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b4db:{NFSU2_TR(0x66b4db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b4de:{NFSU2_TR(0x66b4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b4e1:{NFSU2_TR(0x66b4e1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b548;}}
}
B66b4e3:L66b4e3:{c.instructions+=2;NFSU2_TR(0x66b4e3);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b4e5:{NFSU2_TR(0x66b4e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b4eaull));
TAIL_STATIC(0x575620u,575);
}
B66b4ea:L66b4ea:{c.instructions+=3;NFSU2_TR(0x66b4ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b4ec:{NFSU2_TR(0x66b4ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b4ed:{NFSU2_TR(0x66b4ed);
if(r1(R+518)){{goto L66b507;}}
}
B66b4ef:L66b4ef:{c.instructions+=2;NFSU2_TR(0x66b4ef);
__builtin_memmove((R+4),(R+0),4);
}
B66b4f1:{NFSU2_TR(0x66b4f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b4f6ull));
TAIL_STATIC(0x664ecfu,664);
}
B66b4f6:L66b4f6:{c.instructions+=2;NFSU2_TR(0x66b4f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b4f9:{NFSU2_TR(0x66b4f9);
{goto L66b50b;}
}
B66b4fb:L66b4fb:{c.instructions+=2;NFSU2_TR(0x66b4fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66b502:{NFSU2_TR(0x66b502);
{goto L66b603;}
}
B66b507:L66b507:{c.instructions+=1;NFSU2_TR(0x66b507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b50b:L66b50b:{c.instructions+=2;NFSU2_TR(0x66b50b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66b50f:{NFSU2_TR(0x66b50f);
if(r1(R+518)){{goto L66b5c6;}}
}
B66b515:L66b515:{c.instructions+=5;NFSU2_TR(0x66b515);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b518:{NFSU2_TR(0x66b518);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b519:{NFSU2_TR(0x66b519);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b51a:{NFSU2_TR(0x66b51a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66b51d:{NFSU2_TR(0x66b51d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b522ull));
TAIL_STATIC(0x66a574u,66a);
}
B66b522:L66b522:{c.instructions+=3;NFSU2_TR(0x66b522);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66b524:{NFSU2_TR(0x66b524);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b527:{NFSU2_TR(0x66b527);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66b5f5;}}
}
B66b52d:L66b52d:{c.instructions+=9;NFSU2_TR(0x66b52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b530:{NFSU2_TR(0x66b530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b533:{NFSU2_TR(0x66b533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b537:{NFSU2_TR(0x66b537);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b53a:{NFSU2_TR(0x66b53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b53d:{NFSU2_TR(0x66b53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b540:{NFSU2_TR(0x66b540);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b543:{NFSU2_TR(0x66b543);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66b546:{NFSU2_TR(0x66b546);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b4e3u);}goto L66b4e3;}}
}
B66b548:L66b548:{c.instructions+=9;NFSU2_TR(0x66b548);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66b54b:{NFSU2_TR(0x66b54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b551:{NFSU2_TR(0x66b551);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b554:{NFSU2_TR(0x66b554);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b557:{NFSU2_TR(0x66b557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66b55a:{NFSU2_TR(0x66b55a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B66b55c:{NFSU2_TR(0x66b55c);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B66b560:{NFSU2_TR(0x66b560);
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
B66b562:{NFSU2_TR(0x66b562);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66b603;}}
}
B66b568:L66b568:{c.instructions+=4;NFSU2_TR(0x66b568);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B66b56c:{NFSU2_TR(0x66b56c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66b56f:{NFSU2_TR(0x66b56f);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B66b573:{NFSU2_TR(0x66b573);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b5e3;}}
}
B66b575:L66b575:{c.instructions+=2;NFSU2_TR(0x66b575);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66b578:{NFSU2_TR(0x66b578);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b5cf;}}
}
B66b57a:L66b57a:{c.instructions+=2;NFSU2_TR(0x66b57a);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B66b57d:{NFSU2_TR(0x66b57d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66b603;}}
}
B66b583:L66b583:{c.instructions+=14;NFSU2_TR(0x66b583);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b586:{NFSU2_TR(0x66b586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b589:{NFSU2_TR(0x66b589);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66b58b:{NFSU2_TR(0x66b58b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B66b58d:{NFSU2_TR(0x66b58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b590:{NFSU2_TR(0x66b590);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b592:{NFSU2_TR(0x66b592);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B66b595:{NFSU2_TR(0x66b595);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b596:{NFSU2_TR(0x66b596);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66b599:{NFSU2_TR(0x66b599);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b59c:{NFSU2_TR(0x66b59c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b59d:{NFSU2_TR(0x66b59d);
__builtin_memmove((R+4),(R+24),4);
}
B66b59f:{NFSU2_TR(0x66b59f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b5a2:{NFSU2_TR(0x66b5a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b5a7ull));
TAIL_STATIC(0x66548bu,665);
}
B66b5a7:L66b5a7:{c.instructions+=3;NFSU2_TR(0x66b5a7);
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
B66b5a9:{NFSU2_TR(0x66b5a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b5ac:{NFSU2_TR(0x66b5ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66b603;}}
}
B66b5ae:L66b5ae:{c.instructions+=6;NFSU2_TR(0x66b5ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66b5b1:{NFSU2_TR(0x66b5b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b5b2:{NFSU2_TR(0x66b5b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B66b5b5:{NFSU2_TR(0x66b5b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b5b6:{NFSU2_TR(0x66b5b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66b5b9:{NFSU2_TR(0x66b5b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b5beull));
TAIL_STATIC(0x65bf18u,65b);
}
B66b5be:L66b5be:{c.instructions+=2;NFSU2_TR(0x66b5be);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
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
B66b5c4:{NFSU2_TR(0x66b5c4);
{goto L66b603;}
}
B66b5c6:L66b5c6:{c.instructions+=2;NFSU2_TR(0x66b5c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66b5cd:{NFSU2_TR(0x66b5cd);
{goto L66b603;}
}
B66b5cf:L66b5cf:{c.instructions+=4;NFSU2_TR(0x66b5cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b5d1:{NFSU2_TR(0x66b5d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66b5d2:{NFSU2_TR(0x66b5d2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66b5d4:{NFSU2_TR(0x66b5d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b5d8;}}
}
B66b5d6:L66b5d6:{c.instructions+=1;NFSU2_TR(0x66b5d6);
__builtin_memmove((R+0),(R+8),4);
}
B66b5d8:L66b5d8:{c.instructions+=3;NFSU2_TR(0x66b5d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66b5db:{NFSU2_TR(0x66b5db);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
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
B66b5e1:{NFSU2_TR(0x66b5e1);
{goto L66b603;}
}
B66b5e3:L66b5e3:{c.instructions+=4;NFSU2_TR(0x66b5e3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b5e5:{NFSU2_TR(0x66b5e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66b5e6:{NFSU2_TR(0x66b5e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66b5e8:{NFSU2_TR(0x66b5e8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b5ec;}}
}
B66b5ea:L66b5ea:{c.instructions+=1;NFSU2_TR(0x66b5ea);
__builtin_memmove((R+0),(R+8),4);
}
B66b5ec:L66b5ec:{c.instructions+=2;NFSU2_TR(0x66b5ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66b5ef:{NFSU2_TR(0x66b5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b5f5:L66b5f5:{c.instructions+=3;NFSU2_TR(0x66b5f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b5f8:{NFSU2_TR(0x66b5f8);
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
B66b5fa:{NFSU2_TR(0x66b5fa);
if(r1(R+518)){{goto L66b603;}}
}
B66b5fc:L66b5fc:{c.instructions+=2;NFSU2_TR(0x66b5fc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b5fe:{NFSU2_TR(0x66b5fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b603ull));
TAIL_STATIC(0x664f42u,664);
}
B66b603:L66b603:{c.instructions+=6;NFSU2_TR(0x66b603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b606:{NFSU2_TR(0x66b606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66b607:{NFSU2_TR(0x66b607);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66b608:{NFSU2_TR(0x66b608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66b609:{NFSU2_TR(0x66b609);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66b60a:{NFSU2_TR(0x66b60a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66b60d:L66b60d:{c.instructions+=17;NFSU2_TR(0x66b60d);
__builtin_memmove((R+28),(R+28),4);
}
B66b60f:{NFSU2_TR(0x66b60f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b610:{NFSU2_TR(0x66b610);
__builtin_memmove((R+20),(R+16),4);
}
B66b612:{NFSU2_TR(0x66b612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B66b615:{NFSU2_TR(0x66b615);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b616:{NFSU2_TR(0x66b616);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b618:{NFSU2_TR(0x66b618);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B66b61b:{NFSU2_TR(0x66b61b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b61c:{NFSU2_TR(0x66b61c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66b61f:{NFSU2_TR(0x66b61f);
__builtin_memmove((R+12),(R+4),4);
}
B66b621:{NFSU2_TR(0x66b621);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b622:{NFSU2_TR(0x66b622);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b625:{NFSU2_TR(0x66b625);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b628:{NFSU2_TR(0x66b628);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b62b:{NFSU2_TR(0x66b62b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b62e:{NFSU2_TR(0x66b62e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b631:{NFSU2_TR(0x66b631);
if(r1(R+518)){{goto L66b654;}}
}
B66b633:L66b633:{c.instructions+=4;NFSU2_TR(0x66b633);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b636:{NFSU2_TR(0x66b636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b638:{NFSU2_TR(0x66b638);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b639:{NFSU2_TR(0x66b639);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b63cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b63c:L66b63c:{c.instructions+=4;NFSU2_TR(0x66b63c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b63e:{NFSU2_TR(0x66b63e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66b63f:{NFSU2_TR(0x66b63f);
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
B66b641:{NFSU2_TR(0x66b641);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66b654;}}
}
B66b643:L66b643:{c.instructions+=4;NFSU2_TR(0x66b643);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b646:{NFSU2_TR(0x66b646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b648:{NFSU2_TR(0x66b648);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b649:{NFSU2_TR(0x66b649);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b64cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b64c:L66b64c:{c.instructions+=3;NFSU2_TR(0x66b64c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b64e:{NFSU2_TR(0x66b64e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66b651:{NFSU2_TR(0x66b651);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b654:L66b654:{c.instructions+=3;NFSU2_TR(0x66b654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B66b656:{NFSU2_TR(0x66b656);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66b65a:{NFSU2_TR(0x66b65a);
if(r1(R+518)){{goto L66b67d;}}
}
B66b65c:L66b65c:{c.instructions+=4;NFSU2_TR(0x66b65c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b65f:{NFSU2_TR(0x66b65f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b661:{NFSU2_TR(0x66b661);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b662:{NFSU2_TR(0x66b662);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b665ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b665:L66b665:{c.instructions+=4;NFSU2_TR(0x66b665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b667:{NFSU2_TR(0x66b667);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66b668:{NFSU2_TR(0x66b668);
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
B66b66a:{NFSU2_TR(0x66b66a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66b67d;}}
}
B66b66c:L66b66c:{c.instructions+=4;NFSU2_TR(0x66b66c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b66f:{NFSU2_TR(0x66b66f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b671:{NFSU2_TR(0x66b671);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b672:{NFSU2_TR(0x66b672);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b675ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b675:L66b675:{c.instructions+=3;NFSU2_TR(0x66b675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b677:{NFSU2_TR(0x66b677);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66b67a:{NFSU2_TR(0x66b67a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b67d:L66b67d:{c.instructions+=3;NFSU2_TR(0x66b67d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B66b67f:{NFSU2_TR(0x66b67f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66b683:{NFSU2_TR(0x66b683);
if(r1(R+518)){{goto L66b6a6;}}
}
B66b685:L66b685:{c.instructions+=4;NFSU2_TR(0x66b685);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b688:{NFSU2_TR(0x66b688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b68a:{NFSU2_TR(0x66b68a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b68b:{NFSU2_TR(0x66b68b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b68eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b68e:L66b68e:{c.instructions+=4;NFSU2_TR(0x66b68e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b690:{NFSU2_TR(0x66b690);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66b691:{NFSU2_TR(0x66b691);
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
B66b693:{NFSU2_TR(0x66b693);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66b6a6;}}
}
B66b695:L66b695:{c.instructions+=4;NFSU2_TR(0x66b695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b698:{NFSU2_TR(0x66b698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b69a:{NFSU2_TR(0x66b69a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b69b:{NFSU2_TR(0x66b69b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b69eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b69e:L66b69e:{c.instructions+=3;NFSU2_TR(0x66b69e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b6a0:{NFSU2_TR(0x66b6a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66b6a3:{NFSU2_TR(0x66b6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b6a6:L66b6a6:{c.instructions+=3;NFSU2_TR(0x66b6a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B66b6a8:{NFSU2_TR(0x66b6a8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66b6ac:{NFSU2_TR(0x66b6ac);
if(r1(R+518)){{goto L66b97f;}}
}
B66b6b2:L66b6b2:{c.instructions+=4;NFSU2_TR(0x66b6b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b6b5:{NFSU2_TR(0x66b6b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66b6b7:{NFSU2_TR(0x66b6b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b6b8:{NFSU2_TR(0x66b6b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b6bbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66b6bb:L66b6bb:{c.instructions+=2;NFSU2_TR(0x66b6bb);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66b6bd:{NFSU2_TR(0x66b6bd);
if(r1(R+512)){{goto L66b97f;}}
}
B66b6c3:L66b6c3:{c.instructions+=3;NFSU2_TR(0x66b6c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66b6c6:{NFSU2_TR(0x66b6c6);
__builtin_memmove((R+4),(R+12),4);
}
B66b6c8:{NFSU2_TR(0x66b6c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b6cdull));
TAIL_STATIC(0x65bc5eu,65b);
}
B66b6cd:L66b6cd:{c.instructions+=3;NFSU2_TR(0x66b6cd);
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
B66b6cf:{NFSU2_TR(0x66b6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b6d2:{NFSU2_TR(0x66b6d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66bbe4;}}
}
B66b6d8:L66b6d8:{c.instructions+=5;NFSU2_TR(0x66b6d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b6da:{NFSU2_TR(0x66b6da);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b6dd:{NFSU2_TR(0x66b6dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b6e0:{NFSU2_TR(0x66b6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b6e3:{NFSU2_TR(0x66b6e3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b744;}}
}
B66b6e5:L66b6e5:{c.instructions+=2;NFSU2_TR(0x66b6e5);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b6e7:{NFSU2_TR(0x66b6e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b6ecull));
TAIL_STATIC(0x575620u,575);
}
B66b6ec:L66b6ec:{c.instructions+=3;NFSU2_TR(0x66b6ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b6ee:{NFSU2_TR(0x66b6ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b6ef:{NFSU2_TR(0x66b6ef);
if(r1(R+518)){{goto L66b6fd;}}
}
B66b6f1:L66b6f1:{c.instructions+=2;NFSU2_TR(0x66b6f1);
__builtin_memmove((R+4),(R+0),4);
}
B66b6f3:{NFSU2_TR(0x66b6f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b6f8ull));
TAIL_STATIC(0x664ecfu,664);
}
B66b6f8:L66b6f8:{c.instructions+=2;NFSU2_TR(0x66b6f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b6fb:{NFSU2_TR(0x66b6fb);
{goto L66b701;}
}
B66b6fd:L66b6fd:{c.instructions+=1;NFSU2_TR(0x66b6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b701:L66b701:{c.instructions+=2;NFSU2_TR(0x66b701);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66b705:{NFSU2_TR(0x66b705);
if(r1(R+518)){{goto L66b786;}}
}
B66b707:L66b707:{c.instructions+=5;NFSU2_TR(0x66b707);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b708:{NFSU2_TR(0x66b708);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66b70b:{NFSU2_TR(0x66b70b);
__builtin_memmove((R+4),(R+12),4);
}
B66b70d:{NFSU2_TR(0x66b70d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66b710:{NFSU2_TR(0x66b710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b715ull));
TAIL_STATIC(0x66a574u,66a);
}
B66b715:L66b715:{c.instructions+=3;NFSU2_TR(0x66b715);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66b717:{NFSU2_TR(0x66b717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b71a:{NFSU2_TR(0x66b71a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66bbb8;}}
}
B66b720:L66b720:{c.instructions+=4;NFSU2_TR(0x66b720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b723:{NFSU2_TR(0x66b723);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b725:{NFSU2_TR(0x66b725);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b728:{NFSU2_TR(0x66b728);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66b72f;}}
}
B66b72a:L66b72a:{c.instructions+=2;NFSU2_TR(0x66b72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b72d:{NFSU2_TR(0x66b72d);
{goto L66b732;}
}
B66b72f:L66b72f:{c.instructions+=1;NFSU2_TR(0x66b72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b732:L66b732:{c.instructions+=6;NFSU2_TR(0x66b732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b736:{NFSU2_TR(0x66b736);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b739:{NFSU2_TR(0x66b739);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b73c:{NFSU2_TR(0x66b73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b73f:{NFSU2_TR(0x66b73f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66b742:{NFSU2_TR(0x66b742);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b6e5u);}goto L66b6e5;}}
}
B66b744:L66b744:{c.instructions+=4;NFSU2_TR(0x66b744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b747:{NFSU2_TR(0x66b747);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b749:{NFSU2_TR(0x66b749);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b74c:{NFSU2_TR(0x66b74c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b792;}}
}
B66b74e:L66b74e:{c.instructions+=4;NFSU2_TR(0x66b74e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b751:{NFSU2_TR(0x66b751);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66b754:{NFSU2_TR(0x66b754);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b755:{NFSU2_TR(0x66b755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b75aull));
TAIL_STATIC(0x575620u,575);
}
B66b75a:L66b75a:{c.instructions+=3;NFSU2_TR(0x66b75a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b75c:{NFSU2_TR(0x66b75c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b75d:{NFSU2_TR(0x66b75d);
if(r1(R+518)){{goto L66b77d;}}
}
B66b75f:L66b75f:{c.instructions+=9;NFSU2_TR(0x66b75f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b762:{NFSU2_TR(0x66b762);
u8 U[4];
w4(U+0,u32(0x663f4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b767:{NFSU2_TR(0x66b767);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b768:{NFSU2_TR(0x66b768);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66b76a:{NFSU2_TR(0x66b76a);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66b76d:{NFSU2_TR(0x66b76d);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b76f:{NFSU2_TR(0x66b76f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b770:{NFSU2_TR(0x66b770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b773:{NFSU2_TR(0x66b773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b778ull));
TAIL_STATIC(0x401650u,401);
}
B66b778:L66b778:{c.instructions+=2;NFSU2_TR(0x66b778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b77b:{NFSU2_TR(0x66b77b);
{goto L66b77f;}
}
B66b77d:L66b77d:{c.instructions+=1;NFSU2_TR(0x66b77d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b77f:L66b77f:{c.instructions+=3;NFSU2_TR(0x66b77f);
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
B66b781:{NFSU2_TR(0x66b781);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b784:{NFSU2_TR(0x66b784);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66b792;}}
}
B66b786:L66b786:{c.instructions+=2;NFSU2_TR(0x66b786);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66b78d:{NFSU2_TR(0x66b78d);
{goto L66bbe4;}
}
B66b792:L66b792:{c.instructions+=3;NFSU2_TR(0x66b792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b796:{NFSU2_TR(0x66b796);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b79a:{NFSU2_TR(0x66b79a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b7ff;}}
}
B66b79c:L66b79c:{c.instructions+=4;NFSU2_TR(0x66b79c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66b7a0:{NFSU2_TR(0x66b7a0);
w4(R+0,u32(r2(R+4)));
}
B66b7a3:{NFSU2_TR(0x66b7a3);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
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
B66b7a6:{NFSU2_TR(0x66b7a6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b97f;}}
}
B66b7ac:L66b7ac:{c.instructions+=18;NFSU2_TR(0x66b7ac);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b7b0:{NFSU2_TR(0x66b7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66b7b3:{NFSU2_TR(0x66b7b3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b7b6:{NFSU2_TR(0x66b7b6);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B66b7bb:{NFSU2_TR(0x66b7bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66b7bf:{NFSU2_TR(0x66b7bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b7c2:{NFSU2_TR(0x66b7c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B66b7c6:{NFSU2_TR(0x66b7c6);
u8 U[14];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B66b7cb:{NFSU2_TR(0x66b7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b7ce:{NFSU2_TR(0x66b7ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B66b7d2:{NFSU2_TR(0x66b7d2);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B66b7d7:{NFSU2_TR(0x66b7d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b7da:{NFSU2_TR(0x66b7da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b7db:{NFSU2_TR(0x66b7db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66b7de:{NFSU2_TR(0x66b7de);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66b7e0:{NFSU2_TR(0x66b7e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b7e1:{NFSU2_TR(0x66b7e1);
__builtin_memmove((R+4),(R+12),4);
}
B66b7e3:{NFSU2_TR(0x66b7e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b7e8ull));
TAIL_STATIC(0x66a6afu,66a);
}
B66b7e8:L66b7e8:{c.instructions+=3;NFSU2_TR(0x66b7e8);
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
B66b7ea:{NFSU2_TR(0x66b7ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b7ed:{NFSU2_TR(0x66b7ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66bbe4;}}
}
B66b7f3:L66b7f3:{c.instructions+=4;NFSU2_TR(0x66b7f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b7f6:{NFSU2_TR(0x66b7f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b7fa:{NFSU2_TR(0x66b7fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66b7fd:{NFSU2_TR(0x66b7fd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b79cu);}goto L66b79c;}}
}
B66b7ff:L66b7ff:{c.instructions+=5;NFSU2_TR(0x66b7ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b801:{NFSU2_TR(0x66b801);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b804:{NFSU2_TR(0x66b804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b807:{NFSU2_TR(0x66b807);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b80a:{NFSU2_TR(0x66b80a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b86e;}}
}
B66b80c:L66b80c:{c.instructions+=1;NFSU2_TR(0x66b80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66b80f:L66b80f:{c.instructions+=6;NFSU2_TR(0x66b80f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b812:{NFSU2_TR(0x66b812);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66b815:{NFSU2_TR(0x66b815);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b819:{NFSU2_TR(0x66b819);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b81c:{NFSU2_TR(0x66b81c);
u8 U[18];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w1(R+512,u8((r2(U+14))<(u16(0x0ull))));
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B66b822:{NFSU2_TR(0x66b822);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b862;}}
}
B66b824:L66b824:{c.instructions+=5;NFSU2_TR(0x66b824);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B66b828:{NFSU2_TR(0x66b828);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b82b:{NFSU2_TR(0x66b82b);
u8 U[14];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B66b830:{NFSU2_TR(0x66b830);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B66b833:{NFSU2_TR(0x66b833);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b836:L66b836:{c.instructions+=6;NFSU2_TR(0x66b836);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b83a:{NFSU2_TR(0x66b83a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b83d:{NFSU2_TR(0x66b83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b583cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66b843:{NFSU2_TR(0x66b843);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff000000ull))));
}
B66b848:{NFSU2_TR(0x66b848);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b84d:{NFSU2_TR(0x66b84d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66b85a;}}
}
B66b84f:L66b84f:{c.instructions+=3;NFSU2_TR(0x66b84f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B66b852:{NFSU2_TR(0x66b852);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B66b855:{NFSU2_TR(0x66b855);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66b85a;}}
}
B66b857:L66b857:{c.instructions+=1;NFSU2_TR(0x66b857);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b85a:L66b85a:{c.instructions+=3;NFSU2_TR(0x66b85a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B66b85d:{NFSU2_TR(0x66b85d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66b860:{NFSU2_TR(0x66b860);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b836u);}goto L66b836;}}
}
B66b862:L66b862:{c.instructions+=4;NFSU2_TR(0x66b862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b865:{NFSU2_TR(0x66b865);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b869:{NFSU2_TR(0x66b869);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66b86c:{NFSU2_TR(0x66b86c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b80fu);}goto L66b80f;}}
}
B66b86e:L66b86e:{c.instructions+=4;NFSU2_TR(0x66b86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b871:{NFSU2_TR(0x66b871);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B66b875:{NFSU2_TR(0x66b875);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b876:{NFSU2_TR(0x66b876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b87bull));
TAIL_STATIC(0x575620u,575);
}
B66b87b:L66b87b:{c.instructions+=4;NFSU2_TR(0x66b87b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b87d:{NFSU2_TR(0x66b87d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b87e:{NFSU2_TR(0x66b87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b881:{NFSU2_TR(0x66b881);
if(r1(R+518)){{goto L66b973;}}
}
B66b887:L66b887:{c.instructions+=5;NFSU2_TR(0x66b887);
__builtin_memmove((R+4),(R+28),4);
}
B66b889:{NFSU2_TR(0x66b889);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b88c:{NFSU2_TR(0x66b88c);
__builtin_memmove((R+8),(R+4),4);
}
B66b88e:{NFSU2_TR(0x66b88e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66b891:{NFSU2_TR(0x66b891);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b893:L66b893:{c.instructions+=1;NFSU2_TR(0x66b893);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L66b895;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b893u);}goto L66b893;}
}
B66b895:L66b895:{c.instructions+=3;NFSU2_TR(0x66b895);
__builtin_memmove((R+4),(R+8),4);
}
B66b897:{NFSU2_TR(0x66b897);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66b89a:{NFSU2_TR(0x66b89a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66b89c:L66b89c:{c.instructions+=1;NFSU2_TR(0x66b89c);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L66b89e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b89cu);}goto L66b89c;}
}
B66b89e:L66b89e:{c.instructions+=4;NFSU2_TR(0x66b89e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b8a1:{NFSU2_TR(0x66b8a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66b8a5:{NFSU2_TR(0x66b8a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b8a8:{NFSU2_TR(0x66b8a8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b93f;}}
}
B66b8ae:L66b8ae:{c.instructions+=1;NFSU2_TR(0x66b8ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b8b0:L66b8b0:{c.instructions+=9;NFSU2_TR(0x66b8b0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b8b3:{NFSU2_TR(0x66b8b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66b8b6:{NFSU2_TR(0x66b8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b8b9:{NFSU2_TR(0x66b8b9);
__builtin_memmove((R+4),(R+0),4);
}
B66b8bb:{NFSU2_TR(0x66b8bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b8bf:{NFSU2_TR(0x66b8bf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b8c2:{NFSU2_TR(0x66b8c2);
u8 U[18];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w1(R+512,u8((r2(U+14))<(r2(R+8))));
w2(U+16,u16(u32(r2(U+14))-u32(r2(R+8))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B66b8c7:{NFSU2_TR(0x66b8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b8ca:{NFSU2_TR(0x66b8ca);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b92f;}}
}
B66b8cc:L66b8cc:{c.instructions+=1;NFSU2_TR(0x66b8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b8cf:L66b8cf:{c.instructions+=9;NFSU2_TR(0x66b8cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66b8d2:{NFSU2_TR(0x66b8d2);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B66b8d6:{NFSU2_TR(0x66b8d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66b8d9:{NFSU2_TR(0x66b8d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B66b8dd:{NFSU2_TR(0x66b8dd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B66b8e0:{NFSU2_TR(0x66b8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7b583cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66b8e6:{NFSU2_TR(0x66b8e6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xff000000ull))));
}
B66b8ec:{NFSU2_TR(0x66b8ec);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66b8f2:{NFSU2_TR(0x66b8f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66b912;}}
}
B66b8f4:L66b8f4:{c.instructions+=4;NFSU2_TR(0x66b8f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B66b8f8:{NFSU2_TR(0x66b8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b8fb:{NFSU2_TR(0x66b8fb);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B66b900:{NFSU2_TR(0x66b900);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66b912;}}
}
B66b902:L66b902:{c.instructions+=4;NFSU2_TR(0x66b902);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66b906:{NFSU2_TR(0x66b906);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b90a:{NFSU2_TR(0x66b90a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B66b90e:{NFSU2_TR(0x66b90e);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B66b912:L66b912:{c.instructions+=8;NFSU2_TR(0x66b912);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b916:{NFSU2_TR(0x66b916);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66b919:{NFSU2_TR(0x66b919);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b91c:{NFSU2_TR(0x66b91c);
u8 U[14];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(r2(U+12)));
}
B66b921:{NFSU2_TR(0x66b921);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b924:{NFSU2_TR(0x66b924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x64ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b928:{NFSU2_TR(0x66b928);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B66b92b:{NFSU2_TR(0x66b92b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b8cfu);}goto L66b8cf;}}
}
B66b92d:L66b92d:{c.instructions+=1;NFSU2_TR(0x66b92d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66b92f:L66b92f:{c.instructions+=4;NFSU2_TR(0x66b92f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b932:{NFSU2_TR(0x66b932);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b936:{NFSU2_TR(0x66b936);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66b939:{NFSU2_TR(0x66b939);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b8b0u);}goto L66b8b0;}}
}
B66b93f:L66b93f:{c.instructions+=3;NFSU2_TR(0x66b93f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66b943:{NFSU2_TR(0x66b943);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B66b946:{NFSU2_TR(0x66b946);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66b98b;}}
}
B66b948:L66b948:{c.instructions+=4;NFSU2_TR(0x66b948);
w4(R+0,u32(r2(R+0)));
}
B66b94b:{NFSU2_TR(0x66b94b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b94e:{NFSU2_TR(0x66b94e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b94f:{NFSU2_TR(0x66b94f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b954ull));
TAIL_STATIC(0x575620u,575);
}
B66b954:L66b954:{c.instructions+=5;NFSU2_TR(0x66b954);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b957:{NFSU2_TR(0x66b957);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66b95b:{NFSU2_TR(0x66b95b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66b95e:{NFSU2_TR(0x66b95e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66b95f:{NFSU2_TR(0x66b95f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66b964ull));
TAIL_STATIC(0x575620u,575);
}
B66b964:L66b964:{c.instructions+=5;NFSU2_TR(0x66b964);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b968:{NFSU2_TR(0x66b968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b969:{NFSU2_TR(0x66b969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66b96a:{NFSU2_TR(0x66b96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b96d:{NFSU2_TR(0x66b96d);
if(r1(R+518)){{goto L66b973;}}
}
B66b96f:L66b96f:{c.instructions+=2;NFSU2_TR(0x66b96f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66b971:{NFSU2_TR(0x66b971);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66b98b;}}
}
B66b973:L66b973:{c.instructions+=2;NFSU2_TR(0x66b973);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66b97a:{NFSU2_TR(0x66b97a);
{goto L66bbc6;}
}
B66b97f:L66b97f:{c.instructions+=2;NFSU2_TR(0x66b97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66b986:{NFSU2_TR(0x66b986);
{goto L66bbe4;}
}
B66b98b:L66b98b:{c.instructions+=9;NFSU2_TR(0x66b98b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b98f:{NFSU2_TR(0x66b98f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b991:{NFSU2_TR(0x66b991);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66b997:{NFSU2_TR(0x66b997);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B66b998:{NFSU2_TR(0x66b998);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B66b999:{NFSU2_TR(0x66b999);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B66b99a:{NFSU2_TR(0x66b99a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B66b99b:{NFSU2_TR(0x66b99b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66b99f:{NFSU2_TR(0x66b99f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66bbc6;}}
}
B66b9a5:L66b9a5:{c.instructions+=2;NFSU2_TR(0x66b9a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b9a7:{NFSU2_TR(0x66b9a7);
{goto L66b9ac;}
}
B66b9a9:L66b9a9:{c.instructions+=1;NFSU2_TR(0x66b9a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66b9ac:L66b9ac:{c.instructions+=12;NFSU2_TR(0x66b9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66b9af:{NFSU2_TR(0x66b9af);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66b9b2:{NFSU2_TR(0x66b9b2);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(r2(U+12)));
}
B66b9b7:{NFSU2_TR(0x66b9b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66b9bb:{NFSU2_TR(0x66b9bb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B66b9be:{NFSU2_TR(0x66b9be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B66b9c1:{NFSU2_TR(0x66b9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66b9c4:{NFSU2_TR(0x66b9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b9c8:{NFSU2_TR(0x66b9c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66b9cb:{NFSU2_TR(0x66b9cb);
__builtin_memmove((R+12),(R+4),4);
}
B66b9cd:{NFSU2_TR(0x66b9cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66b9d0:{NFSU2_TR(0x66b9d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66b9d2:L66b9d2:{c.instructions+=1;NFSU2_TR(0x66b9d2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L66b9d4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b9d2u);}goto L66b9d2;}
}
B66b9d4:L66b9d4:{c.instructions+=2;NFSU2_TR(0x66b9d4);
__builtin_memmove((R+4),(R+12),4);
}
B66b9d6:{NFSU2_TR(0x66b9d6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66b9d9:L66b9d9:{c.instructions+=1;NFSU2_TR(0x66b9d9);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L66b9db;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b9d9u);}goto L66b9d9;}
}
B66b9db:L66b9db:{c.instructions+=3;NFSU2_TR(0x66b9db);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66b9df:{NFSU2_TR(0x66b9df);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B66b9e2:{NFSU2_TR(0x66b9e2);
if(r1(R+518)){{goto L66bba8;}}
}
B66b9e8:L66b9e8:{c.instructions+=6;NFSU2_TR(0x66b9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66b9eb:{NFSU2_TR(0x66b9eb);
w4(R+0,u32(r2(R+0)));
}
B66b9ee:{NFSU2_TR(0x66b9ee);
__builtin_memmove((R+4),(R+0),4);
}
B66b9f0:{NFSU2_TR(0x66b9f0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66b9f3:{NFSU2_TR(0x66b9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b9f6:{NFSU2_TR(0x66b9f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66b9f9:L66b9f9:{c.instructions+=10;NFSU2_TR(0x66b9f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x64ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66b9fd:{NFSU2_TR(0x66b9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ba00:{NFSU2_TR(0x66ba00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66ba03:{NFSU2_TR(0x66ba03);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66ba07:{NFSU2_TR(0x66ba07);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66ba0a:{NFSU2_TR(0x66ba0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b583cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66ba10:{NFSU2_TR(0x66ba10);
__builtin_memmove((R+4),(R+28),4);
}
B66ba12:{NFSU2_TR(0x66ba12);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66ba15:{NFSU2_TR(0x66ba15);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66ba18:{NFSU2_TR(0x66ba18);
if(r1(R+518)){{goto L66ba41;}}
}
B66ba1a:L66ba1a:{c.instructions+=2;NFSU2_TR(0x66ba1a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66ba1d:{NFSU2_TR(0x66ba1d);
if(r1(R+518)){{goto L66bb5e;}}
}
B66ba23:L66ba23:{c.instructions+=2;NFSU2_TR(0x66ba23);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66ba24:{NFSU2_TR(0x66ba24);
if(r1(R+518)){{goto L66bb17;}}
}
B66ba2a:L66ba2a:{c.instructions+=2;NFSU2_TR(0x66ba2a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66ba2b:{NFSU2_TR(0x66ba2b);
if(r1(R+518)){{goto L66ba41;}}
}
B66ba2d:L66ba2d:{c.instructions+=2;NFSU2_TR(0x66ba2d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66ba30:{NFSU2_TR(0x66ba30);
if(r1(R+518)){{goto L66babf;}}
}
B66ba36:L66ba36:{c.instructions+=2;NFSU2_TR(0x66ba36);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66ba37:{NFSU2_TR(0x66ba37);
if(r1(R+518)){{goto L66ba64;}}
}
B66ba39:L66ba39:{c.instructions+=3;NFSU2_TR(0x66ba39);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B66ba3a:{NFSU2_TR(0x66ba3a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66ba3b:{NFSU2_TR(0x66ba3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bb9f;}}
}
B66ba41:L66ba41:{c.instructions+=3;NFSU2_TR(0x66ba41);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66ba45:{NFSU2_TR(0x66ba45);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(U+0))<(u16(0x100ull))));
}
B66ba4a:{NFSU2_TR(0x66ba4a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66bb78;}}
}
B66ba50:L66ba50:{c.instructions+=5;NFSU2_TR(0x66ba50);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66ba54:{NFSU2_TR(0x66ba54);
w4(R+4,u32(r2(R+4)));
}
B66ba57:{NFSU2_TR(0x66ba57);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66ba59:{NFSU2_TR(0x66ba59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66ba5f:{NFSU2_TR(0x66ba5f);
{goto L66bb93;}
}
B66ba64:L66ba64:{c.instructions+=2;NFSU2_TR(0x66ba64);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ba6a:{NFSU2_TR(0x66ba6a);
if(r1(R+518)){{goto L66baaa;}}
}
B66ba6c:L66ba6c:{c.instructions+=2;NFSU2_TR(0x66ba6c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd010000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ba72:{NFSU2_TR(0x66ba72);
if(r1(R+518)){{goto L66ba95;}}
}
B66ba74:L66ba74:{c.instructions+=2;NFSU2_TR(0x66ba74);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd020000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ba7a:{NFSU2_TR(0x66ba7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bb9f;}}
}
B66ba80:L66ba80:{c.instructions+=5;NFSU2_TR(0x66ba80);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66ba84:{NFSU2_TR(0x66ba84);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66ba88:{NFSU2_TR(0x66ba88);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66ba8a:{NFSU2_TR(0x66ba8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66ba90:{NFSU2_TR(0x66ba90);
{goto L66bb93;}
}
B66ba95:L66ba95:{c.instructions+=5;NFSU2_TR(0x66ba95);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66ba99:{NFSU2_TR(0x66ba99);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66ba9d:{NFSU2_TR(0x66ba9d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66ba9f:{NFSU2_TR(0x66ba9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaeull))));
__builtin_memmove((R+0),(U+0),4);
}
B66baa5:{NFSU2_TR(0x66baa5);
{goto L66bb93;}
}
B66baaa:L66baaa:{c.instructions+=5;NFSU2_TR(0x66baaa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66baae:{NFSU2_TR(0x66baae);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66bab2:{NFSU2_TR(0x66bab2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66bab4:{NFSU2_TR(0x66bab4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((R+0),(U+0),4);
}
B66baba:{NFSU2_TR(0x66baba);
{goto L66bb93;}
}
B66babf:L66babf:{c.instructions+=2;NFSU2_TR(0x66babf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66bac5:{NFSU2_TR(0x66bac5);
if(r1(R+518)){{goto L66bb05;}}
}
B66bac7:L66bac7:{c.instructions+=2;NFSU2_TR(0x66bac7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc010000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66bacd:{NFSU2_TR(0x66bacd);
if(r1(R+518)){{goto L66baf0;}}
}
B66bacf:L66bacf:{c.instructions+=2;NFSU2_TR(0x66bacf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc020000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66bad5:{NFSU2_TR(0x66bad5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bb9f;}}
}
B66badb:L66badb:{c.instructions+=5;NFSU2_TR(0x66badb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66badf:{NFSU2_TR(0x66badf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66bae3:{NFSU2_TR(0x66bae3);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66bae5:{NFSU2_TR(0x66bae5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66baeb:{NFSU2_TR(0x66baeb);
{goto L66bb93;}
}
B66baf0:L66baf0:{c.instructions+=5;NFSU2_TR(0x66baf0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66baf4:{NFSU2_TR(0x66baf4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66baf8:{NFSU2_TR(0x66baf8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66bafa:{NFSU2_TR(0x66bafa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66bb00:{NFSU2_TR(0x66bb00);
{goto L66bb93;}
}
B66bb05:L66bb05:{c.instructions+=5;NFSU2_TR(0x66bb05);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66bb09:{NFSU2_TR(0x66bb09);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66bb0d:{NFSU2_TR(0x66bb0d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66bb0f:{NFSU2_TR(0x66bb0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66bb15:{NFSU2_TR(0x66bb15);
{goto L66bb93;}
}
B66bb17:L66bb17:{c.instructions+=7;NFSU2_TR(0x66bb17);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66bb1b:{NFSU2_TR(0x66bb1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66bb1e:{NFSU2_TR(0x66bb1e);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+4),(U+8),2);
}
B66bb22:{NFSU2_TR(0x66bb22);
w2(R+4,u16(u32(r2(R+4))-u32(u16(0x1ull))));
}
B66bb24:{NFSU2_TR(0x66bb24);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x800000dull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bb2b:{NFSU2_TR(0x66bb2b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66bb2f:{NFSU2_TR(0x66bb2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bb37;}}
}
B66bb31:L66bb31:{c.instructions+=2;NFSU2_TR(0x66bb31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66bb35:{NFSU2_TR(0x66bb35);
{goto L66bb9f;}
}
B66bb37:L66bb37:{c.instructions+=12;NFSU2_TR(0x66bb37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66bb3a:{NFSU2_TR(0x66bb3a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66bb3c:{NFSU2_TR(0x66bb3c);
w4(R+4,u32(r2(R+4)));
}
B66bb3f:{NFSU2_TR(0x66bb3f);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B66bb42:{NFSU2_TR(0x66bb42);
__builtin_memmove((R+8),(R+518),1);
}
B66bb45:{NFSU2_TR(0x66bb45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(U+4))));
}
B66bb48:{NFSU2_TR(0x66bb48);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B66bb4b:{NFSU2_TR(0x66bb4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B66bb4e:{NFSU2_TR(0x66bb4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66bb52:{NFSU2_TR(0x66bb52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66bb55:{NFSU2_TR(0x66bb55);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w4(U+8,u32(0x1ull));
s4(u32(r4(U+4)),r4(U+8));
}
B66bb5c:{NFSU2_TR(0x66bb5c);
{goto L66bb9f;}
}
B66bb5e:L66bb5e:{c.instructions+=8;NFSU2_TR(0x66bb5e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66bb60:{NFSU2_TR(0x66bb60);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bb63:{NFSU2_TR(0x66bb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66bb6a:{NFSU2_TR(0x66bb6a);
__builtin_memmove((R+4),(R+518),1);
}
B66bb6d:{NFSU2_TR(0x66bb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B66bb70:{NFSU2_TR(0x66bb70);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B66bb73:{NFSU2_TR(0x66bb73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B66bb76:{NFSU2_TR(0x66bb76);
{goto L66bb9f;}
}
B66bb78:L66bb78:{c.instructions+=2;NFSU2_TR(0x66bb78);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(U+0))<(u16(0x101ull))));
}
B66bb7d:{NFSU2_TR(0x66bb7d);
if(r1(R+512)){{goto L66bb9f;}}
}
B66bb7f:L66bb7f:{c.instructions+=4;NFSU2_TR(0x66bb7f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66bb83:{NFSU2_TR(0x66bb83);
w4(R+4,u32(r2(R+4)));
}
B66bb86:{NFSU2_TR(0x66bb86);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffeffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B66bb8d:{NFSU2_TR(0x66bb8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaaull))));
__builtin_memmove((R+0),(U+0),4);
}
B66bb93:L66bb93:{c.instructions+=3;NFSU2_TR(0x66bb93);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+28,u32(r2(U+0)));
}
B66bb96:{NFSU2_TR(0x66bb96);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66bb98:{NFSU2_TR(0x66bb98);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L66bb9c;}}
}
B66bb9a:L66bb9a:{c.instructions+=1;NFSU2_TR(0x66bb9a);
__builtin_memmove((R+4),(R+28),4);
}
B66bb9c:L66bb9c:{c.instructions+=1;NFSU2_TR(0x66bb9c);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B66bb9f:L66bb9f:{c.instructions+=2;NFSU2_TR(0x66bb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66bba2:{NFSU2_TR(0x66bba2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b9f9u);}goto L66b9f9;}}
}
B66bba8:L66bba8:{c.instructions+=4;NFSU2_TR(0x66bba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66bbab:{NFSU2_TR(0x66bbab);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66bbaf:{NFSU2_TR(0x66bbaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66bbb2:{NFSU2_TR(0x66bbb2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66b9a9u);}goto L66b9a9;}}
}
B66bbb8:L66bbb8:{c.instructions+=3;NFSU2_TR(0x66bbb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bbbb:{NFSU2_TR(0x66bbbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66bbbd:{NFSU2_TR(0x66bbbd);
if(r1(R+518)){{goto L66bbc6;}}
}
B66bbbf:L66bbbf:{c.instructions+=2;NFSU2_TR(0x66bbbf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bbc1:{NFSU2_TR(0x66bbc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bbc6ull));
TAIL_STATIC(0x664f42u,664);
}
B66bbc6:L66bbc6:{c.instructions+=2;NFSU2_TR(0x66bbc6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bbca:{NFSU2_TR(0x66bbca);
if(r1(R+518)){{goto L66bbd5;}}
}
B66bbcc:L66bbcc:{c.instructions+=2;NFSU2_TR(0x66bbcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66bbcf:{NFSU2_TR(0x66bbcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bbd4ull));
TAIL_STATIC(0x575630u,575);
}
B66bbd4:L66bbd4:{c.instructions+=1;NFSU2_TR(0x66bbd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66bbd5:L66bbd5:{c.instructions+=2;NFSU2_TR(0x66bbd5);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66bbd9:{NFSU2_TR(0x66bbd9);
if(r1(R+518)){{goto L66bbe4;}}
}
B66bbdb:L66bbdb:{c.instructions+=2;NFSU2_TR(0x66bbdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66bbde:{NFSU2_TR(0x66bbde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bbe3ull));
TAIL_STATIC(0x575630u,575);
}
B66bbe3:L66bbe3:{c.instructions+=1;NFSU2_TR(0x66bbe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66bbe4:L66bbe4:{c.instructions+=6;NFSU2_TR(0x66bbe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bbe7:{NFSU2_TR(0x66bbe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66bbe8:{NFSU2_TR(0x66bbe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66bbe9:{NFSU2_TR(0x66bbe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66bbea:{NFSU2_TR(0x66bbea);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66bbeb:{NFSU2_TR(0x66bbeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66bbee:L66bbee:{c.instructions+=11;NFSU2_TR(0x66bbee);
__builtin_memmove((R+28),(R+28),4);
}
B66bbf0:{NFSU2_TR(0x66bbf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bbf1:{NFSU2_TR(0x66bbf1);
__builtin_memmove((R+20),(R+16),4);
}
B66bbf3:{NFSU2_TR(0x66bbf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B66bbf6:{NFSU2_TR(0x66bbf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bbf9:{NFSU2_TR(0x66bbf9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bbfa:{NFSU2_TR(0x66bbfa);
__builtin_memmove((R+12),(R+4),4);
}
B66bbfc:{NFSU2_TR(0x66bbfc);
__builtin_memmove((R+4),(R+0),4);
}
B66bbfe:{NFSU2_TR(0x66bbfe);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B66bc04:{NFSU2_TR(0x66bc04);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66bc06:{NFSU2_TR(0x66bc06);
if(r1(R+518)){{goto L66bc23;}}
}
B66bc08:L66bc08:{c.instructions+=2;NFSU2_TR(0x66bc08);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66bc0a:{NFSU2_TR(0x66bc0a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L66bc2a;}}
}
B66bc0c:L66bc0c:{c.instructions+=3;NFSU2_TR(0x66bc0c);
w4(R+0,u32(~u32(r4(R+0))));
}
B66bc0e:{NFSU2_TR(0x66bc0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bc12:{NFSU2_TR(0x66bc12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bc23;}}
}
B66bc14:L66bc14:{c.instructions+=3;NFSU2_TR(0x66bc14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bc17:{NFSU2_TR(0x66bc17);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66bc1d:{NFSU2_TR(0x66bc1d);
if(r1(R+512)){{goto L66bcd8;}}
}
B66bc23:L66bc23:{c.instructions+=2;NFSU2_TR(0x66bc23);
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
B66bc25:{NFSU2_TR(0x66bc25);
{goto L66bcd8;}
}
B66bc2a:L66bc2a:{c.instructions+=5;NFSU2_TR(0x66bc2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66bc2e:{NFSU2_TR(0x66bc2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bc35:{NFSU2_TR(0x66bc35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bc36:{NFSU2_TR(0x66bc36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bc37:{NFSU2_TR(0x66bc37);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66bcd4;}}
}
B66bc3d:L66bc3d:{c.instructions+=3;NFSU2_TR(0x66bc3d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B66bc3f:{NFSU2_TR(0x66bc3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66bc45:{NFSU2_TR(0x66bc45);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B66bc48:L66bc48:{c.instructions+=8;NFSU2_TR(0x66bc48);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bc4b:{NFSU2_TR(0x66bc4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bc51:{NFSU2_TR(0x66bc51);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66bc54:{NFSU2_TR(0x66bc54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66bc57:{NFSU2_TR(0x66bc57);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66bc59:{NFSU2_TR(0x66bc59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66bc5c:{NFSU2_TR(0x66bc5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66bc5f:{NFSU2_TR(0x66bc5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bc66;}}
}
B66bc61:L66bc61:{c.instructions+=2;NFSU2_TR(0x66bc61);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bc64:{NFSU2_TR(0x66bc64);
{goto L66bc6c;}
}
B66bc66:L66bc66:{c.instructions+=2;NFSU2_TR(0x66bc66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bc69:{NFSU2_TR(0x66bc69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bc6c:L66bc6c:{c.instructions+=3;NFSU2_TR(0x66bc6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bc6f:{NFSU2_TR(0x66bc6f);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B66bc73:{NFSU2_TR(0x66bc73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bc79;}}
}
B66bc75:L66bc75:{c.instructions+=2;NFSU2_TR(0x66bc75);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66bc77:{NFSU2_TR(0x66bc77);
{goto L66bc8c;}
}
B66bc79:L66bc79:{c.instructions+=2;NFSU2_TR(0x66bc79);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66bc7b:{NFSU2_TR(0x66bc7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bc82;}}
}
B66bc7d:L66bc7d:{c.instructions+=2;NFSU2_TR(0x66bc7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bc80:{NFSU2_TR(0x66bc80);
{goto L66bc88;}
}
B66bc82:L66bc82:{c.instructions+=2;NFSU2_TR(0x66bc82);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bc85:{NFSU2_TR(0x66bc85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bc88:L66bc88:{c.instructions+=1;NFSU2_TR(0x66bc88);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B66bc8c:L66bc8c:{c.instructions+=3;NFSU2_TR(0x66bc8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66bc8f:{NFSU2_TR(0x66bc8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B66bc92:{NFSU2_TR(0x66bc92);
{goto L66bc9c;}
}
B66bc94:L66bc94:{c.instructions+=2;NFSU2_TR(0x66bc94);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66bc96:{NFSU2_TR(0x66bc96);
if(r1(R+518)){{goto L66bca0;}}
}
B66bc98:L66bc98:{c.instructions+=3;NFSU2_TR(0x66bc98);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66bc99:{NFSU2_TR(0x66bc99);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B66bc9b:{NFSU2_TR(0x66bc9b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66bc9c:L66bc9c:{c.instructions+=2;NFSU2_TR(0x66bc9c);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+4))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B66bc9e:{NFSU2_TR(0x66bc9e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bc94u);}goto L66bc94;}}
}
B66bca0:L66bca0:{c.instructions+=4;NFSU2_TR(0x66bca0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B66bca2:{NFSU2_TR(0x66bca2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B66bca4:{NFSU2_TR(0x66bca4);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66bca6:{NFSU2_TR(0x66bca6);
if(r1(R+518)){{goto L66bcdd;}}
}
B66bca8:L66bca8:{c.instructions+=2;NFSU2_TR(0x66bca8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66bcaa:{NFSU2_TR(0x66bcaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bcbf;}}
}
B66bcac:L66bcac:{c.instructions+=2;NFSU2_TR(0x66bcac);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B66bcaf:{NFSU2_TR(0x66bcaf);
if(r1(R+518)){{goto L66bd61;}}
}
B66bcb5:L66bcb5:{c.instructions+=2;NFSU2_TR(0x66bcb5);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B66bcb8:{NFSU2_TR(0x66bcb8);
if(r1(R+518)){{goto L66bd35;}}
}
B66bcba:L66bcba:{c.instructions+=2;NFSU2_TR(0x66bcba);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5bull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B66bcbd:{NFSU2_TR(0x66bcbd);
if(r1(R+518)){{goto L66bce1;}}
}
B66bcbf:L66bcbf:{c.instructions+=5;NFSU2_TR(0x66bcbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66bcc2:{NFSU2_TR(0x66bcc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bcc5:{NFSU2_TR(0x66bcc5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x50ull))));
}
B66bcc8:{NFSU2_TR(0x66bcc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66bcce:{NFSU2_TR(0x66bcce);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bc48u);}goto L66bc48;}}
}
B66bcd4:L66bcd4:{c.instructions+=1;NFSU2_TR(0x66bcd4);
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
B66bcd6:L66bcd6:{c.instructions+=2;NFSU2_TR(0x66bcd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66bcd7:{NFSU2_TR(0x66bcd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66bcd8:L66bcd8:{c.instructions+=3;NFSU2_TR(0x66bcd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66bcd9:{NFSU2_TR(0x66bcd9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66bcda:{NFSU2_TR(0x66bcda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66bcdd:L66bcdd:{c.instructions+=2;NFSU2_TR(0x66bcdd);
__builtin_memmove((R+0),(R+28),4);
}
B66bcdf:{NFSU2_TR(0x66bcdf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bcd6u);}goto L66bcd6;}
}
B66bce1:L66bce1:{c.instructions+=4;NFSU2_TR(0x66bce1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66bce2:{NFSU2_TR(0x66bce2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B66bce4:{NFSU2_TR(0x66bce4);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B66bce6:{NFSU2_TR(0x66bce6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bcd4u);}goto L66bcd4;}}
}
B66bce8:L66bce8:{c.instructions+=2;NFSU2_TR(0x66bce8);
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
B66bcea:{NFSU2_TR(0x66bcea);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bcd4u);}goto L66bcd4;}}
}
B66bcec:L66bcec:{c.instructions+=2;NFSU2_TR(0x66bcec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bced:{NFSU2_TR(0x66bced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bcf2ull));
TAIL_STATIC(0x75d65bu,75d);
}
B66bcf2:L66bcf2:{c.instructions+=4;NFSU2_TR(0x66bcf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66bcf3:{NFSU2_TR(0x66bcf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bcf6:{NFSU2_TR(0x66bcf6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66bcf9:{NFSU2_TR(0x66bcf9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bcd4u);}goto L66bcd4;}}
}
B66bcfb:L66bcfb:{c.instructions+=1;NFSU2_TR(0x66bcfb);
{goto L66bd03;}
}
B66bcfd:L66bcfd:{c.instructions+=2;NFSU2_TR(0x66bcfd);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B66bd00:{NFSU2_TR(0x66bd00);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L66bd0a;}}
}
B66bd02:L66bd02:{c.instructions+=1;NFSU2_TR(0x66bd02);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66bd03:L66bd03:{c.instructions+=3;NFSU2_TR(0x66bd03);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B66bd05:{NFSU2_TR(0x66bd05);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B66bd08:{NFSU2_TR(0x66bd08);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bcfdu);}goto L66bcfd;}}
}
B66bd0a:L66bd0a:{c.instructions+=2;NFSU2_TR(0x66bd0a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5dull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B66bd0d:{NFSU2_TR(0x66bd0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bcd4u);}goto L66bcd4;}}
}
B66bd0f:L66bd0f:{c.instructions+=7;NFSU2_TR(0x66bd0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66bd12:{NFSU2_TR(0x66bd12);
w4(R+28,u32(~u32(r4(R+28))));
}
B66bd14:{NFSU2_TR(0x66bd14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bd15:{NFSU2_TR(0x66bd15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bd16:{NFSU2_TR(0x66bd16);
__builtin_memmove((R+4),(R+12),4);
}
B66bd18:{NFSU2_TR(0x66bd18);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66bd19:{NFSU2_TR(0x66bd19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bd1eull));
TAIL_STATIC(0x65c123u,65c);
}
B66bd1e:L66bd1e:{c.instructions+=2;NFSU2_TR(0x66bd1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66bd20:{NFSU2_TR(0x66bd20);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bcd4u);}goto L66bcd4;}}
}
B66bd22:L66bd22:{c.instructions+=3;NFSU2_TR(0x66bd22);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B66bd24:{NFSU2_TR(0x66bd24);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66bd26:{NFSU2_TR(0x66bd26);
if(r1(R+518)){{goto L66bd78;}}
}
B66bd28:L66bd28:{c.instructions+=2;NFSU2_TR(0x66bd28);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B66bd2b:{NFSU2_TR(0x66bd2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bcd4u);}goto L66bcd4;}}
}
B66bd2d:L66bd2d:{c.instructions+=5;NFSU2_TR(0x66bd2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66bd30:{NFSU2_TR(0x66bd30);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66bd31:{NFSU2_TR(0x66bd31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bd32:{NFSU2_TR(0x66bd32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bd33:{NFSU2_TR(0x66bd33);
{goto L66bd69;}
}
B66bd35:L66bd35:{c.instructions+=12;NFSU2_TR(0x66bd35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bd38:{NFSU2_TR(0x66bd38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66bd3b:{NFSU2_TR(0x66bd3b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B66bd3d:{NFSU2_TR(0x66bd3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B66bd43:{NFSU2_TR(0x66bd43);
w4(R+28,u32(~u32(r4(R+28))));
}
B66bd45:{NFSU2_TR(0x66bd45);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B66bd48:{NFSU2_TR(0x66bd48);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B66bd4e:{NFSU2_TR(0x66bd4e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66bd4f:{NFSU2_TR(0x66bd4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bd50:{NFSU2_TR(0x66bd50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bd51:{NFSU2_TR(0x66bd51);
__builtin_memmove((R+4),(R+12),4);
}
B66bd53:{NFSU2_TR(0x66bd53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bd58ull));
TAIL_STATIC(0x665a15u,665);
}
B66bd58:L66bd58:{c.instructions+=2;NFSU2_TR(0x66bd58);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66bd5f:{NFSU2_TR(0x66bd5f);
{goto L66bd70;}
}
B66bd61:L66bd61:{c.instructions+=5;NFSU2_TR(0x66bd61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66bd64:{NFSU2_TR(0x66bd64);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66bd65:{NFSU2_TR(0x66bd65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bd66:{NFSU2_TR(0x66bd66);
w4(R+28,u32(~u32(r4(R+28))));
}
B66bd68:{NFSU2_TR(0x66bd68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bd69:L66bd69:{c.instructions+=2;NFSU2_TR(0x66bd69);
__builtin_memmove((R+4),(R+12),4);
}
B66bd6b:{NFSU2_TR(0x66bd6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bd70ull));
TAIL_STATIC(0x66a83cu,66a);
}
B66bd70:L66bd70:{c.instructions+=2;NFSU2_TR(0x66bd70);
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
B66bd72:{NFSU2_TR(0x66bd72);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bcd4u);}goto L66bcd4;}}
}
B66bd78:L66bd78:{c.instructions+=2;NFSU2_TR(0x66bd78);
w4(R+0,u32(~u32(r4(R+0))));
}
B66bd7a:{NFSU2_TR(0x66bd7a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bcd6u);}goto L66bcd6;}
}
B66bd7f:L66bd7f:{c.instructions+=6;NFSU2_TR(0x66bd7f);
__builtin_memmove((R+28),(R+28),4);
}
B66bd81:{NFSU2_TR(0x66bd81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bd82:{NFSU2_TR(0x66bd82);
__builtin_memmove((R+20),(R+16),4);
}
B66bd84:{NFSU2_TR(0x66bd84);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bd88:{NFSU2_TR(0x66bd88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bd8b:{NFSU2_TR(0x66bd8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bdae;}}
}
B66bd8d:L66bd8d:{c.instructions+=3;NFSU2_TR(0x66bd8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bd90:{NFSU2_TR(0x66bd90);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66bd96:{NFSU2_TR(0x66bd96);
if(r1(R+512)){{goto L66bd9c;}}
}
B66bd98:L66bd98:{c.instructions+=2;NFSU2_TR(0x66bd98);
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
B66bd9a:{NFSU2_TR(0x66bd9a);
{goto L66be0a;}
}
B66bd9c:L66bd9c:{c.instructions+=6;NFSU2_TR(0x66bd9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B66bd9f:{NFSU2_TR(0x66bd9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bda5:{NFSU2_TR(0x66bda5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B66bda8:{NFSU2_TR(0x66bda8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66bdaa:{NFSU2_TR(0x66bdaa);
w4(R+0,u32(~u32(r4(R+0))));
}
B66bdac:{NFSU2_TR(0x66bdac);
{goto L66be0a;}
}
B66bdae:L66bdae:{c.instructions+=5;NFSU2_TR(0x66bdae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bdaf:{NFSU2_TR(0x66bdaf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bdb1:{NFSU2_TR(0x66bdb1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bdb3:{NFSU2_TR(0x66bdb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66bdb6:{NFSU2_TR(0x66bdb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bdbbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bbeeu);}goto L66bbee;}
}
B66bdbb:L66bdbb:{c.instructions+=3;NFSU2_TR(0x66bdbb);
__builtin_memmove((R+24),(R+0),4);
}
B66bdbd:{NFSU2_TR(0x66bdbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66bdbf:{NFSU2_TR(0x66bdbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bdc5;}}
}
B66bdc1:L66bdc1:{c.instructions+=2;NFSU2_TR(0x66bdc1);
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
B66bdc3:{NFSU2_TR(0x66bdc3);
{goto L66be09;}
}
B66bdc5:L66bdc5:{c.instructions+=3;NFSU2_TR(0x66bdc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bdc8:{NFSU2_TR(0x66bdc8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bdcc:{NFSU2_TR(0x66bdcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bdc1u);}goto L66bdc1;}}
}
B66bdce:L66bdce:{c.instructions+=2;NFSU2_TR(0x66bdce);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bdd2:{NFSU2_TR(0x66bdd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bdda;}}
}
B66bdd4:L66bdd4:{c.instructions+=2;NFSU2_TR(0x66bdd4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bdd8:{NFSU2_TR(0x66bdd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bdc1u);}goto L66bdc1;}}
}
B66bdda:L66bdda:{c.instructions+=5;NFSU2_TR(0x66bdda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bddd:{NFSU2_TR(0x66bddd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bdde:{NFSU2_TR(0x66bdde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66bde1:{NFSU2_TR(0x66bde1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B66bde3:{NFSU2_TR(0x66bde3);
if(r1(R+512)){{goto L66bde9;}}
}
B66bde5:L66bde5:{c.instructions+=2;NFSU2_TR(0x66bde5);
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
B66bde7:{NFSU2_TR(0x66bde7);
{goto L66be08;}
}
B66bde9:L66bde9:{c.instructions+=2;NFSU2_TR(0x66bde9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66bded:{NFSU2_TR(0x66bded);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bdfd;}}
}
B66bdef:L66bdef:{c.instructions+=4;NFSU2_TR(0x66bdef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bdf2:{NFSU2_TR(0x66bdf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bdf3:{NFSU2_TR(0x66bdf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bdf4:{NFSU2_TR(0x66bdf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bdf9ull));
TAIL_STATIC(0x661c3eu,661);
}
B66bdf9:L66bdf9:{c.instructions+=2;NFSU2_TR(0x66bdf9);
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
B66bdfb:{NFSU2_TR(0x66bdfb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bde5u);}goto L66bde5;}}
}
B66bdfd:L66bdfd:{c.instructions+=4;NFSU2_TR(0x66bdfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66be00:{NFSU2_TR(0x66be00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66be03:{NFSU2_TR(0x66be03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66be06:{NFSU2_TR(0x66be06);
w4(R+0,u32(~u32(r4(R+0))));
}
B66be08:L66be08:{c.instructions+=1;NFSU2_TR(0x66be08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66be09:L66be09:{c.instructions+=1;NFSU2_TR(0x66be09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66be0a:L66be0a:{c.instructions+=2;NFSU2_TR(0x66be0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66be0b:{NFSU2_TR(0x66be0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66be0e:L66be0e:{c.instructions+=8;NFSU2_TR(0x66be0e);
__builtin_memmove((R+28),(R+28),4);
}
B66be10:{NFSU2_TR(0x66be10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66be11:{NFSU2_TR(0x66be11);
__builtin_memmove((R+20),(R+16),4);
}
B66be13:{NFSU2_TR(0x66be13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66be16:{NFSU2_TR(0x66be16);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66be18:{NFSU2_TR(0x66be18);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66be1b:{NFSU2_TR(0x66be1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66be1e:{NFSU2_TR(0x66be1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66be23ull));
TAIL_STATIC(0x66a83cu,66a);
}
B66be23:L66be23:{c.instructions+=2;NFSU2_TR(0x66be23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66be24:{NFSU2_TR(0x66be24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66be27:L66be27:{c.instructions+=9;NFSU2_TR(0x66be27);
__builtin_memmove((R+28),(R+28),4);
}
B66be29:{NFSU2_TR(0x66be29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66be2a:{NFSU2_TR(0x66be2a);
__builtin_memmove((R+20),(R+16),4);
}
B66be2c:{NFSU2_TR(0x66be2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66be2d:{NFSU2_TR(0x66be2d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66be2f:{NFSU2_TR(0x66be2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66be32:{NFSU2_TR(0x66be32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66be33:{NFSU2_TR(0x66be33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66be34:{NFSU2_TR(0x66be34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bef5;}}
}
B66be3a:L66be3a:{c.instructions+=5;NFSU2_TR(0x66be3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66be3d:{NFSU2_TR(0x66be3d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66be3f:{NFSU2_TR(0x66be3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66be45:{NFSU2_TR(0x66be45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66be48:{NFSU2_TR(0x66be48);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66bed6;}}
}
B66be4e:L66be4e:{c.instructions+=8;NFSU2_TR(0x66be4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66be54:{NFSU2_TR(0x66be54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66be5a:{NFSU2_TR(0x66be5a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B66be5c:{NFSU2_TR(0x66be5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66be5f:{NFSU2_TR(0x66be5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66be62:{NFSU2_TR(0x66be62);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66be65:{NFSU2_TR(0x66be65);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66be69:{NFSU2_TR(0x66be69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66be70;}}
}
B66be6b:L66be6b:{c.instructions+=2;NFSU2_TR(0x66be6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66be6e:{NFSU2_TR(0x66be6e);
{goto L66be76;}
}
B66be70:L66be70:{c.instructions+=2;NFSU2_TR(0x66be70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66be73:{NFSU2_TR(0x66be73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66be76:L66be76:{c.instructions+=4;NFSU2_TR(0x66be76);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66be79:{NFSU2_TR(0x66be79);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66be7b:{NFSU2_TR(0x66be7b);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B66be7e:{NFSU2_TR(0x66be7e);
if(r1(R+518)){{goto L66beb9;}}
}
B66be80:L66be80:{c.instructions+=5;NFSU2_TR(0x66be80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66be86:{NFSU2_TR(0x66be86);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B66be8a:{NFSU2_TR(0x66be8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66be8d:{NFSU2_TR(0x66be8d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66be90:{NFSU2_TR(0x66be90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66be97;}}
}
B66be92:L66be92:{c.instructions+=2;NFSU2_TR(0x66be92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66be95:{NFSU2_TR(0x66be95);
{goto L66be9d;}
}
B66be97:L66be97:{c.instructions+=2;NFSU2_TR(0x66be97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66be9a:{NFSU2_TR(0x66be9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66be9d:L66be9d:{c.instructions+=3;NFSU2_TR(0x66be9d);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B66bea1:{NFSU2_TR(0x66bea1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66bea3:{NFSU2_TR(0x66bea3);
if(r1(R+518)){{goto L66beb9;}}
}
B66bea5:L66bea5:{c.instructions+=2;NFSU2_TR(0x66bea5);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66bea8:{NFSU2_TR(0x66bea8);
if(r1(R+518)){{goto L66bebe;}}
}
B66beaa:L66beaa:{c.instructions+=3;NFSU2_TR(0x66beaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66bead:{NFSU2_TR(0x66bead);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66beae:{NFSU2_TR(0x66beae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66beb3ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B66beb3:L66beb3:{c.instructions+=4;NFSU2_TR(0x66beb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66beb4:{NFSU2_TR(0x66beb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66beb5:{NFSU2_TR(0x66beb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66beb7:{NFSU2_TR(0x66beb7);
{goto L66bebc;}
}
B66beb9:L66beb9:{c.instructions+=1;NFSU2_TR(0x66beb9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bebc:L66bebc:{c.instructions+=1;NFSU2_TR(0x66bebc);
if(r1(R+518)){{goto L66bed3;}}
}
B66bebe:L66bebe:{c.instructions+=5;NFSU2_TR(0x66bebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66bec1:{NFSU2_TR(0x66bec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bec4:{NFSU2_TR(0x66bec4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x50ull))));
}
B66bec7:{NFSU2_TR(0x66bec7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66becd:{NFSU2_TR(0x66becd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66be4eu);}goto L66be4e;}}
}
B66bed3:L66bed3:{c.instructions+=1;NFSU2_TR(0x66bed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bed6:L66bed6:{c.instructions+=2;NFSU2_TR(0x66bed6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bedc:{NFSU2_TR(0x66bedc);
if(r1(R+518)){{goto L66bfc7;}}
}
B66bee2:L66bee2:{c.instructions+=5;NFSU2_TR(0x66bee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66bee5:{NFSU2_TR(0x66bee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66beeb:{NFSU2_TR(0x66beeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66beee:{NFSU2_TR(0x66beee);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66bef0:{NFSU2_TR(0x66bef0);
{goto L66bfd4;}
}
B66bef5:L66bef5:{c.instructions+=6;NFSU2_TR(0x66bef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66bef8:{NFSU2_TR(0x66bef8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bef9:{NFSU2_TR(0x66bef9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66befb:{NFSU2_TR(0x66befb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66befe:{NFSU2_TR(0x66befe);
__builtin_memmove((R+4),(R+28),4);
}
B66bf00:{NFSU2_TR(0x66bf00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bf05ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bbeeu);}goto L66bbee;}
}
B66bf05:L66bf05:{c.instructions+=3;NFSU2_TR(0x66bf05);
__builtin_memmove((R+24),(R+0),4);
}
B66bf07:{NFSU2_TR(0x66bf07);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66bf09:{NFSU2_TR(0x66bf09);
if(r1(R+518)){{goto L66bfc7;}}
}
B66bf0f:L66bf0f:{c.instructions+=3;NFSU2_TR(0x66bf0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bf12:{NFSU2_TR(0x66bf12);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bf16:{NFSU2_TR(0x66bf16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bfc7;}}
}
B66bf1c:L66bf1c:{c.instructions+=2;NFSU2_TR(0x66bf1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bf20:{NFSU2_TR(0x66bf20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bf2b;}}
}
B66bf22:L66bf22:{c.instructions+=2;NFSU2_TR(0x66bf22);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bf25:{NFSU2_TR(0x66bf25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bfc7;}}
}
B66bf2b:L66bf2b:{c.instructions+=4;NFSU2_TR(0x66bf2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bf2e:{NFSU2_TR(0x66bf2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bf31:{NFSU2_TR(0x66bf31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66bf34:{NFSU2_TR(0x66bf34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bf47;}}
}
B66bf36:L66bf36:{c.instructions+=4;NFSU2_TR(0x66bf36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bf37:{NFSU2_TR(0x66bf37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bf38:{NFSU2_TR(0x66bf38);
__builtin_memmove((R+4),(R+28),4);
}
B66bf3a:{NFSU2_TR(0x66bf3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bf3full));
TAIL_STATIC(0x661c3eu,661);
}
B66bf3f:L66bf3f:{c.instructions+=2;NFSU2_TR(0x66bf3f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66bf41:{NFSU2_TR(0x66bf41);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66bfc7;}}
}
B66bf47:L66bf47:{c.instructions+=4;NFSU2_TR(0x66bf47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66bf49:{NFSU2_TR(0x66bf49);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bf4c:{NFSU2_TR(0x66bf4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66bf4f:{NFSU2_TR(0x66bf4f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66bfc2;}}
}
B66bf51:L66bf51:{c.instructions+=8;NFSU2_TR(0x66bf51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66bf57:{NFSU2_TR(0x66bf57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bf5a:{NFSU2_TR(0x66bf5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66bf5d:{NFSU2_TR(0x66bf5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66bf60:{NFSU2_TR(0x66bf60);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66bf62:{NFSU2_TR(0x66bf62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bf65:{NFSU2_TR(0x66bf65);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B66bf69:{NFSU2_TR(0x66bf69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bf70;}}
}
B66bf6b:L66bf6b:{c.instructions+=2;NFSU2_TR(0x66bf6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bf6e:{NFSU2_TR(0x66bf6e);
{goto L66bf76;}
}
B66bf70:L66bf70:{c.instructions+=2;NFSU2_TR(0x66bf70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bf73:{NFSU2_TR(0x66bf73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bf76:L66bf76:{c.instructions+=3;NFSU2_TR(0x66bf76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bf79:{NFSU2_TR(0x66bf79);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B66bf7d:{NFSU2_TR(0x66bf7d);
if(r1(R+518)){{goto L66bfab;}}
}
B66bf7f:L66bf7f:{c.instructions+=2;NFSU2_TR(0x66bf7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66bf81:{NFSU2_TR(0x66bf81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bf88;}}
}
B66bf83:L66bf83:{c.instructions+=2;NFSU2_TR(0x66bf83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bf86:{NFSU2_TR(0x66bf86);
{goto L66bf8e;}
}
B66bf88:L66bf88:{c.instructions+=2;NFSU2_TR(0x66bf88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bf8b:{NFSU2_TR(0x66bf8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bf8e:L66bf8e:{c.instructions+=3;NFSU2_TR(0x66bf8e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B66bf92:{NFSU2_TR(0x66bf92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66bf94:{NFSU2_TR(0x66bf94);
if(r1(R+518)){{goto L66bfab;}}
}
B66bf96:L66bf96:{c.instructions+=2;NFSU2_TR(0x66bf96);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66bf9a:{NFSU2_TR(0x66bf9a);
if(r1(R+518)){{goto L66bfb1;}}
}
B66bf9c:L66bf9c:{c.instructions+=3;NFSU2_TR(0x66bf9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66bf9f:{NFSU2_TR(0x66bf9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bfa0:{NFSU2_TR(0x66bfa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bfa5ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B66bfa5:L66bfa5:{c.instructions+=4;NFSU2_TR(0x66bfa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66bfa6:{NFSU2_TR(0x66bfa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66bfa7:{NFSU2_TR(0x66bfa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66bfa9:{NFSU2_TR(0x66bfa9);
{goto L66bfaf;}
}
B66bfab:L66bfab:{c.instructions+=1;NFSU2_TR(0x66bfab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bfaf:L66bfaf:{c.instructions+=1;NFSU2_TR(0x66bfaf);
if(r1(R+518)){{goto L66bfbf;}}
}
B66bfb1:L66bfb1:{c.instructions+=5;NFSU2_TR(0x66bfb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66bfb4:{NFSU2_TR(0x66bfb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bfb7:{NFSU2_TR(0x66bfb7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x28ull))));
}
B66bfba:{NFSU2_TR(0x66bfba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66bfbd:{NFSU2_TR(0x66bfbd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66bf51u);}goto L66bf51;}}
}
B66bfbf:L66bfbf:{c.instructions+=1;NFSU2_TR(0x66bfbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66bfc2:L66bfc2:{c.instructions+=2;NFSU2_TR(0x66bfc2);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B66bfc5:{NFSU2_TR(0x66bfc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66bfcb;}}
}
B66bfc7:L66bfc7:{c.instructions+=2;NFSU2_TR(0x66bfc7);
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
B66bfc9:{NFSU2_TR(0x66bfc9);
{goto L66bfd6;}
}
B66bfcb:L66bfcb:{c.instructions+=3;NFSU2_TR(0x66bfcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66bfce:{NFSU2_TR(0x66bfce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66bfd1:{NFSU2_TR(0x66bfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66bfd4:L66bfd4:{c.instructions+=1;NFSU2_TR(0x66bfd4);
w4(R+0,u32(~u32(r4(R+0))));
}
B66bfd6:L66bfd6:{c.instructions+=5;NFSU2_TR(0x66bfd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66bfd7:{NFSU2_TR(0x66bfd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66bfd8:{NFSU2_TR(0x66bfd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66bfd9:{NFSU2_TR(0x66bfd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66bfda:{NFSU2_TR(0x66bfda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66bfdd:L66bfdd:{c.instructions+=11;NFSU2_TR(0x66bfdd);
__builtin_memmove((R+28),(R+28),4);
}
B66bfdf:{NFSU2_TR(0x66bfdf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bfe0:{NFSU2_TR(0x66bfe0);
__builtin_memmove((R+20),(R+16),4);
}
B66bfe2:{NFSU2_TR(0x66bfe2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bfe3:{NFSU2_TR(0x66bfe3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bfe4:{NFSU2_TR(0x66bfe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66bfe7:{NFSU2_TR(0x66bfe7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B66bfeb:{NFSU2_TR(0x66bfeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bfec:{NFSU2_TR(0x66bfec);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66bfee:{NFSU2_TR(0x66bfee);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66bff1:{NFSU2_TR(0x66bff1);
if(r1(R+518)){TAIL_STATIC(0x66c00bu,66c);}
}
B66bff3:L66bff3:{c.instructions+=4;NFSU2_TR(0x66bff3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66bff5:{NFSU2_TR(0x66bff5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66bff8:{NFSU2_TR(0x66bff8);
__builtin_memmove((R+4),(R+24),4);
}
B66bffa:{NFSU2_TR(0x66bffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66bfffull));
TAIL_STATIC(0x65c61fu,65c);
}
B66bfff:L66bfff:{c.instructions+=1;NFSU2_TR(0x66bfff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x66c001u,66c);
}
XIT:NFSU2_TR_EXIT(0x66b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
