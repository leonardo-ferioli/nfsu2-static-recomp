#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_468(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_73a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x46b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x46b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_46b(u8* __restrict R,Cpu& c);
u32 page_46b(Cpu& c){return body_46b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_46b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x46b000:goto L46b000;
case 0x46b004:c.instructions+=9;goto B46b004;
case 0x46b008:c.instructions+=8;goto B46b008;
case 0x46b00c:c.instructions+=7;goto B46b00c;
case 0x46b00e:c.instructions+=6;goto B46b00e;
case 0x46b010:c.instructions+=5;goto B46b010;
case 0x46b014:c.instructions+=4;goto B46b014;
case 0x46b017:c.instructions+=3;goto B46b017;
case 0x46b018:c.instructions+=2;goto B46b018;
case 0x46b01a:c.instructions+=1;goto B46b01a;
case 0x46b01d:goto L46b01d;
case 0x46b021:c.instructions+=18;goto B46b021;
case 0x46b025:c.instructions+=17;goto B46b025;
case 0x46b02b:c.instructions+=16;goto B46b02b;
case 0x46b02d:c.instructions+=15;goto B46b02d;
case 0x46b02f:c.instructions+=14;goto B46b02f;
case 0x46b031:c.instructions+=13;goto B46b031;
case 0x46b037:c.instructions+=12;goto B46b037;
case 0x46b039:c.instructions+=11;goto B46b039;
case 0x46b03b:c.instructions+=10;goto B46b03b;
case 0x46b03d:c.instructions+=9;goto B46b03d;
case 0x46b043:c.instructions+=8;goto B46b043;
case 0x46b047:c.instructions+=7;goto B46b047;
case 0x46b04b:c.instructions+=6;goto B46b04b;
case 0x46b04d:c.instructions+=5;goto B46b04d;
case 0x46b051:c.instructions+=4;goto B46b051;
case 0x46b054:c.instructions+=3;goto B46b054;
case 0x46b055:c.instructions+=2;goto B46b055;
case 0x46b057:c.instructions+=1;goto B46b057;
case 0x46b05a:goto L46b05a;
case 0x46b05e:c.instructions+=5;goto B46b05e;
case 0x46b062:c.instructions+=4;goto B46b062;
case 0x46b066:c.instructions+=3;goto B46b066;
case 0x46b06a:c.instructions+=2;goto B46b06a;
case 0x46b070:c.instructions+=1;goto B46b070;
case 0x46b075:goto L46b075;
case 0x46b077:c.instructions+=1;goto B46b077;
case 0x46b079:goto L46b079;
case 0x46b07b:c.instructions+=1;goto B46b07b;
case 0x46b07d:goto L46b07d;
case 0x46b082:c.instructions+=1;goto B46b082;
case 0x46b084:goto L46b084;
case 0x46b089:goto L46b089;
case 0x46b08e:c.instructions+=5;goto B46b08e;
case 0x46b090:c.instructions+=4;goto B46b090;
case 0x46b092:c.instructions+=3;goto B46b092;
case 0x46b093:c.instructions+=2;goto B46b093;
case 0x46b095:c.instructions+=1;goto B46b095;
case 0x46b09a:goto L46b09a;
case 0x46b09e:c.instructions+=10;goto B46b09e;
case 0x46b0a2:c.instructions+=9;goto B46b0a2;
case 0x46b0a5:c.instructions+=8;goto B46b0a5;
case 0x46b0a8:c.instructions+=7;goto B46b0a8;
case 0x46b0ae:c.instructions+=6;goto B46b0ae;
case 0x46b0b0:c.instructions+=5;goto B46b0b0;
case 0x46b0b4:c.instructions+=4;goto B46b0b4;
case 0x46b0b7:c.instructions+=3;goto B46b0b7;
case 0x46b0b8:c.instructions+=2;goto B46b0b8;
case 0x46b0ba:c.instructions+=1;goto B46b0ba;
case 0x46b0bd:goto L46b0bd;
case 0x46b0c1:c.instructions+=8;goto B46b0c1;
case 0x46b0c5:c.instructions+=7;goto B46b0c5;
case 0x46b0c9:c.instructions+=6;goto B46b0c9;
case 0x46b0cd:c.instructions+=5;goto B46b0cd;
case 0x46b0cf:c.instructions+=4;goto B46b0cf;
case 0x46b0d3:c.instructions+=3;goto B46b0d3;
case 0x46b0d6:c.instructions+=2;goto B46b0d6;
case 0x46b0d7:c.instructions+=1;goto B46b0d7;
case 0x46b100:goto L46b100;
case 0x46b101:c.instructions+=4;goto B46b101;
case 0x46b103:c.instructions+=3;goto B46b103;
case 0x46b106:c.instructions+=2;goto B46b106;
case 0x46b108:c.instructions+=1;goto B46b108;
case 0x46b10e:goto L46b10e;
case 0x46b112:c.instructions+=9;goto B46b112;
case 0x46b114:c.instructions+=8;goto B46b114;
case 0x46b118:c.instructions+=7;goto B46b118;
case 0x46b11c:c.instructions+=6;goto B46b11c;
case 0x46b120:c.instructions+=5;goto B46b120;
case 0x46b123:c.instructions+=4;goto B46b123;
case 0x46b125:c.instructions+=3;goto B46b125;
case 0x46b127:c.instructions+=2;goto B46b127;
case 0x46b12a:c.instructions+=1;goto B46b12a;
case 0x46b12c:goto L46b12c;
case 0x46b12f:c.instructions+=4;goto B46b12f;
case 0x46b132:c.instructions+=3;goto B46b132;
case 0x46b136:c.instructions+=2;goto B46b136;
case 0x46b137:c.instructions+=1;goto B46b137;
case 0x46b13a:goto L46b13a;
case 0x46b13d:c.instructions+=3;goto B46b13d;
case 0x46b13e:c.instructions+=2;goto B46b13e;
case 0x46b141:c.instructions+=1;goto B46b141;
case 0x46b147:goto L46b147;
case 0x46b14e:goto L46b14e;
case 0x46b151:c.instructions+=10;goto B46b151;
case 0x46b155:c.instructions+=9;goto B46b155;
case 0x46b158:c.instructions+=8;goto B46b158;
case 0x46b15b:c.instructions+=7;goto B46b15b;
case 0x46b15d:c.instructions+=6;goto B46b15d;
case 0x46b15f:c.instructions+=5;goto B46b15f;
case 0x46b162:c.instructions+=4;goto B46b162;
case 0x46b165:c.instructions+=3;goto B46b165;
case 0x46b166:c.instructions+=2;goto B46b166;
case 0x46b168:c.instructions+=1;goto B46b168;
case 0x46b16b:goto L46b16b;
case 0x46b16e:c.instructions+=18;goto B46b16e;
case 0x46b172:c.instructions+=17;goto B46b172;
case 0x46b178:c.instructions+=16;goto B46b178;
case 0x46b17a:c.instructions+=15;goto B46b17a;
case 0x46b17c:c.instructions+=14;goto B46b17c;
case 0x46b17e:c.instructions+=13;goto B46b17e;
case 0x46b184:c.instructions+=12;goto B46b184;
case 0x46b186:c.instructions+=11;goto B46b186;
case 0x46b188:c.instructions+=10;goto B46b188;
case 0x46b18a:c.instructions+=9;goto B46b18a;
case 0x46b190:c.instructions+=8;goto B46b190;
case 0x46b193:c.instructions+=7;goto B46b193;
case 0x46b196:c.instructions+=6;goto B46b196;
case 0x46b198:c.instructions+=5;goto B46b198;
case 0x46b19b:c.instructions+=4;goto B46b19b;
case 0x46b19e:c.instructions+=3;goto B46b19e;
case 0x46b19f:c.instructions+=2;goto B46b19f;
case 0x46b1a1:c.instructions+=1;goto B46b1a1;
case 0x46b1a4:goto L46b1a4;
case 0x46b1a7:c.instructions+=5;goto B46b1a7;
case 0x46b1aa:c.instructions+=4;goto B46b1aa;
case 0x46b1ae:c.instructions+=3;goto B46b1ae;
case 0x46b1b1:c.instructions+=2;goto B46b1b1;
case 0x46b1b7:c.instructions+=1;goto B46b1b7;
case 0x46b1bc:goto L46b1bc;
case 0x46b1be:c.instructions+=1;goto B46b1be;
case 0x46b1c0:goto L46b1c0;
case 0x46b1c2:c.instructions+=1;goto B46b1c2;
case 0x46b1c4:goto L46b1c4;
case 0x46b1c9:c.instructions+=1;goto B46b1c9;
case 0x46b1cb:goto L46b1cb;
case 0x46b1d0:goto L46b1d0;
case 0x46b1d5:c.instructions+=5;goto B46b1d5;
case 0x46b1d7:c.instructions+=4;goto B46b1d7;
case 0x46b1d9:c.instructions+=3;goto B46b1d9;
case 0x46b1da:c.instructions+=2;goto B46b1da;
case 0x46b1dc:c.instructions+=1;goto B46b1dc;
case 0x46b1e1:goto L46b1e1;
case 0x46b1e5:c.instructions+=9;goto B46b1e5;
case 0x46b1e9:c.instructions+=8;goto B46b1e9;
case 0x46b1ec:c.instructions+=7;goto B46b1ec;
case 0x46b1f2:c.instructions+=6;goto B46b1f2;
case 0x46b1f4:c.instructions+=5;goto B46b1f4;
case 0x46b1f7:c.instructions+=4;goto B46b1f7;
case 0x46b1fa:c.instructions+=3;goto B46b1fa;
case 0x46b1fb:c.instructions+=2;goto B46b1fb;
case 0x46b1fd:c.instructions+=1;goto B46b1fd;
case 0x46b200:goto L46b200;
case 0x46b203:c.instructions+=6;goto B46b203;
case 0x46b206:c.instructions+=5;goto B46b206;
case 0x46b20a:c.instructions+=4;goto B46b20a;
case 0x46b20d:c.instructions+=3;goto B46b20d;
case 0x46b20f:c.instructions+=2;goto B46b20f;
case 0x46b212:c.instructions+=1;goto B46b212;
case 0x46b215:goto L46b215;
case 0x46b216:c.instructions+=1;goto B46b216;
case 0x46b240:goto L46b240;
case 0x46b244:c.instructions+=14;goto B46b244;
case 0x46b248:c.instructions+=13;goto B46b248;
case 0x46b24c:c.instructions+=12;goto B46b24c;
case 0x46b250:c.instructions+=11;goto B46b250;
case 0x46b252:c.instructions+=10;goto B46b252;
case 0x46b256:c.instructions+=9;goto B46b256;
case 0x46b258:c.instructions+=8;goto B46b258;
case 0x46b25e:c.instructions+=7;goto B46b25e;
case 0x46b261:c.instructions+=6;goto B46b261;
case 0x46b264:c.instructions+=5;goto B46b264;
case 0x46b268:c.instructions+=4;goto B46b268;
case 0x46b26a:c.instructions+=3;goto B46b26a;
case 0x46b26d:c.instructions+=2;goto B46b26d;
case 0x46b270:c.instructions+=1;goto B46b270;
case 0x46b272:goto L46b272;
case 0x46b276:c.instructions+=2;goto B46b276;
case 0x46b27c:c.instructions+=1;goto B46b27c;
case 0x46b27f:goto L46b27f;
case 0x46b283:c.instructions+=4;goto B46b283;
case 0x46b286:c.instructions+=3;goto B46b286;
case 0x46b28d:c.instructions+=2;goto B46b28d;
case 0x46b28f:c.instructions+=1;goto B46b28f;
case 0x46b2a0:goto L46b2a0;
case 0x46b2a1:c.instructions+=2;goto B46b2a1;
case 0x46b2a3:c.instructions+=1;goto B46b2a3;
case 0x46b2a8:goto L46b2a8;
case 0x46b2ad:c.instructions+=1;goto B46b2ad;
case 0x46b2af:goto L46b2af;
case 0x46b2b0:c.instructions+=1;goto B46b2b0;
case 0x46b2b5:goto L46b2b5;
case 0x46b2b8:goto L46b2b8;
case 0x46b2ba:c.instructions+=2;goto B46b2ba;
case 0x46b2bb:c.instructions+=1;goto B46b2bb;
case 0x46b2c0:goto L46b2c0;
case 0x46b2c5:c.instructions+=5;goto B46b2c5;
case 0x46b2c6:c.instructions+=4;goto B46b2c6;
case 0x46b2c8:c.instructions+=3;goto B46b2c8;
case 0x46b2cc:c.instructions+=2;goto B46b2cc;
case 0x46b2ce:c.instructions+=1;goto B46b2ce;
case 0x46b2d0:goto L46b2d0;
case 0x46b2d3:c.instructions+=3;goto B46b2d3;
case 0x46b2d9:c.instructions+=2;goto B46b2d9;
case 0x46b2db:c.instructions+=1;goto B46b2db;
case 0x46b2dd:goto L46b2dd;
case 0x46b2e0:c.instructions+=1;goto B46b2e0;
case 0x46b2e2:goto L46b2e2;
case 0x46b2e4:c.instructions+=2;goto B46b2e4;
case 0x46b2e5:c.instructions+=1;goto B46b2e5;
case 0x46b2ea:goto L46b2ea;
case 0x46b2ed:c.instructions+=3;goto B46b2ed;
case 0x46b2f0:c.instructions+=2;goto B46b2f0;
case 0x46b2f1:c.instructions+=1;goto B46b2f1;
case 0x46b2f4:goto L46b2f4;
case 0x46b2f6:c.instructions+=1;goto B46b2f6;
case 0x46b2fb:goto L46b2fb;
case 0x46b2fe:goto L46b2fe;
case 0x46b301:goto L46b301;
case 0x46b302:c.instructions+=1;goto B46b302;
case 0x46b310:goto L46b310;
case 0x46b311:c.instructions+=2;goto B46b311;
case 0x46b313:c.instructions+=1;goto B46b313;
case 0x46b318:goto L46b318;
case 0x46b31d:c.instructions+=1;goto B46b31d;
case 0x46b31f:goto L46b31f;
case 0x46b320:c.instructions+=1;goto B46b320;
case 0x46b325:goto L46b325;
case 0x46b328:goto L46b328;
case 0x46b32a:c.instructions+=2;goto B46b32a;
case 0x46b32b:c.instructions+=1;goto B46b32b;
case 0x46b330:goto L46b330;
case 0x46b331:c.instructions+=7;goto B46b331;
case 0x46b333:c.instructions+=6;goto B46b333;
case 0x46b339:c.instructions+=5;goto B46b339;
case 0x46b33f:c.instructions+=4;goto B46b33f;
case 0x46b344:c.instructions+=3;goto B46b344;
case 0x46b346:c.instructions+=2;goto B46b346;
case 0x46b347:c.instructions+=1;goto B46b347;
case 0x46b34d:goto L46b34d;
case 0x46b353:c.instructions+=2;goto B46b353;
case 0x46b35d:c.instructions+=1;goto B46b35d;
case 0x46b35f:goto L46b35f;
case 0x46b364:c.instructions+=7;goto B46b364;
case 0x46b36a:c.instructions+=6;goto B46b36a;
case 0x46b36c:c.instructions+=5;goto B46b36c;
case 0x46b36e:c.instructions+=4;goto B46b36e;
case 0x46b370:c.instructions+=3;goto B46b370;
case 0x46b372:c.instructions+=2;goto B46b372;
case 0x46b377:c.instructions+=1;goto B46b377;
case 0x46b379:goto L46b379;
case 0x46b383:goto L46b383;
case 0x46b384:c.instructions+=3;goto B46b384;
case 0x46b386:c.instructions+=2;goto B46b386;
case 0x46b387:c.instructions+=1;goto B46b387;
case 0x46b388:goto L46b388;
case 0x46b389:c.instructions+=6;goto B46b389;
case 0x46b38c:c.instructions+=5;goto B46b38c;
case 0x46b38e:c.instructions+=4;goto B46b38e;
case 0x46b390:c.instructions+=3;goto B46b390;
case 0x46b393:c.instructions+=2;goto B46b393;
case 0x46b395:c.instructions+=1;goto B46b395;
case 0x46b397:goto L46b397;
case 0x46b399:c.instructions+=1;goto B46b399;
case 0x46b39b:goto L46b39b;
case 0x46b39c:c.instructions+=1;goto B46b39c;
case 0x46b3a1:goto L46b3a1;
case 0x46b3a4:c.instructions+=7;goto B46b3a4;
case 0x46b3a7:c.instructions+=6;goto B46b3a7;
case 0x46b3aa:c.instructions+=5;goto B46b3aa;
case 0x46b3ad:c.instructions+=4;goto B46b3ad;
case 0x46b3af:c.instructions+=3;goto B46b3af;
case 0x46b3b0:c.instructions+=2;goto B46b3b0;
case 0x46b3b2:c.instructions+=1;goto B46b3b2;
case 0x46b3b4:goto L46b3b4;
case 0x46b3ba:c.instructions+=2;goto B46b3ba;
case 0x46b3bb:c.instructions+=1;goto B46b3bb;
case 0x46b3bd:goto L46b3bd;
case 0x46b3be:c.instructions+=4;goto B46b3be;
case 0x46b3c8:c.instructions+=3;goto B46b3c8;
case 0x46b3ca:c.instructions+=2;goto B46b3ca;
case 0x46b3cb:c.instructions+=1;goto B46b3cb;
case 0x46b3cc:goto L46b3cc;
case 0x46b3d2:c.instructions+=1;goto B46b3d2;
case 0x46b3d4:goto L46b3d4;
case 0x46b3da:c.instructions+=1;goto B46b3da;
case 0x46b3dc:goto L46b3dc;
case 0x46b3e1:c.instructions+=3;goto B46b3e1;
case 0x46b3e4:c.instructions+=2;goto B46b3e4;
case 0x46b3e9:c.instructions+=1;goto B46b3e9;
case 0x46b3ee:goto L46b3ee;
case 0x46b3f1:c.instructions+=9;goto B46b3f1;
case 0x46b3f3:c.instructions+=8;goto B46b3f3;
case 0x46b3f5:c.instructions+=7;goto B46b3f5;
case 0x46b3f8:c.instructions+=6;goto B46b3f8;
case 0x46b3f9:c.instructions+=5;goto B46b3f9;
case 0x46b3fb:c.instructions+=4;goto B46b3fb;
case 0x46b3ff:c.instructions+=3;goto B46b3ff;
case 0x46b405:c.instructions+=2;goto B46b405;
case 0x46b406:c.instructions+=1;goto B46b406;
case 0x46b407:goto L46b407;
case 0x46b40d:c.instructions+=1;goto B46b40d;
case 0x46b40f:goto L46b40f;
case 0x46b415:c.instructions+=3;goto B46b415;
case 0x46b418:c.instructions+=2;goto B46b418;
case 0x46b41d:c.instructions+=1;goto B46b41d;
case 0x46b422:goto L46b422;
case 0x46b425:c.instructions+=2;goto B46b425;
case 0x46b427:c.instructions+=1;goto B46b427;
case 0x46b429:goto L46b429;
case 0x46b42e:c.instructions+=3;goto B46b42e;
case 0x46b431:c.instructions+=2;goto B46b431;
case 0x46b436:c.instructions+=1;goto B46b436;
case 0x46b43b:goto L46b43b;
case 0x46b43e:c.instructions+=2;goto B46b43e;
case 0x46b440:c.instructions+=1;goto B46b440;
case 0x46b446:goto L46b446;
case 0x46b447:c.instructions+=4;goto B46b447;
case 0x46b451:c.instructions+=3;goto B46b451;
case 0x46b453:c.instructions+=2;goto B46b453;
case 0x46b454:c.instructions+=1;goto B46b454;
case 0x46b455:goto L46b455;
case 0x46b45b:c.instructions+=1;goto B46b45b;
case 0x46b45d:goto L46b45d;
case 0x46b45e:c.instructions+=4;goto B46b45e;
case 0x46b468:c.instructions+=3;goto B46b468;
case 0x46b46a:c.instructions+=2;goto B46b46a;
case 0x46b46b:c.instructions+=1;goto B46b46b;
case 0x46b46c:goto L46b46c;
case 0x46b472:c.instructions+=1;goto B46b472;
case 0x46b478:goto L46b478;
case 0x46b479:c.instructions+=4;goto B46b479;
case 0x46b483:c.instructions+=3;goto B46b483;
case 0x46b485:c.instructions+=2;goto B46b485;
case 0x46b486:c.instructions+=1;goto B46b486;
case 0x46b487:goto L46b487;
case 0x46b48d:c.instructions+=5;goto B46b48d;
case 0x46b493:c.instructions+=4;goto B46b493;
case 0x46b499:c.instructions+=3;goto B46b499;
case 0x46b49f:c.instructions+=2;goto B46b49f;
case 0x46b4a1:c.instructions+=1;goto B46b4a1;
case 0x46b4a7:goto L46b4a7;
case 0x46b4aa:c.instructions+=2;goto B46b4aa;
case 0x46b4ac:c.instructions+=1;goto B46b4ac;
case 0x46b4ae:goto L46b4ae;
case 0x46b4b0:goto L46b4b0;
case 0x46b4b3:c.instructions+=2;goto B46b4b3;
case 0x46b4b5:c.instructions+=1;goto B46b4b5;
case 0x46b4b7:goto L46b4b7;
case 0x46b4ba:c.instructions+=2;goto B46b4ba;
case 0x46b4bc:c.instructions+=1;goto B46b4bc;
case 0x46b4be:goto L46b4be;
case 0x46b4bf:c.instructions+=3;goto B46b4bf;
case 0x46b4c1:c.instructions+=2;goto B46b4c1;
case 0x46b4c2:c.instructions+=1;goto B46b4c2;
case 0x46b4c3:goto L46b4c3;
case 0x46b4c5:c.instructions+=1;goto B46b4c5;
case 0x46b4c7:goto L46b4c7;
case 0x46b4ca:c.instructions+=2;goto B46b4ca;
case 0x46b4cc:c.instructions+=1;goto B46b4cc;
case 0x46b4ce:goto L46b4ce;
case 0x46b4d3:c.instructions+=2;goto B46b4d3;
case 0x46b4d5:c.instructions+=1;goto B46b4d5;
case 0x46b4d7:goto L46b4d7;
case 0x46b4da:c.instructions+=5;goto B46b4da;
case 0x46b4dd:c.instructions+=4;goto B46b4dd;
case 0x46b4de:c.instructions+=3;goto B46b4de;
case 0x46b4df:c.instructions+=2;goto B46b4df;
case 0x46b4e4:c.instructions+=1;goto B46b4e4;
case 0x46b4e9:goto L46b4e9;
case 0x46b4eb:c.instructions+=2;goto B46b4eb;
case 0x46b4f0:c.instructions+=1;goto B46b4f0;
case 0x46b4f5:goto L46b4f5;
case 0x46b4fb:goto L46b4fb;
case 0x46b500:c.instructions+=2;goto B46b500;
case 0x46b502:c.instructions+=1;goto B46b502;
case 0x46b504:goto L46b504;
case 0x46b507:c.instructions+=5;goto B46b507;
case 0x46b50a:c.instructions+=4;goto B46b50a;
case 0x46b50b:c.instructions+=3;goto B46b50b;
case 0x46b50c:c.instructions+=2;goto B46b50c;
case 0x46b511:c.instructions+=1;goto B46b511;
case 0x46b516:goto L46b516;
case 0x46b518:c.instructions+=2;goto B46b518;
case 0x46b51d:c.instructions+=1;goto B46b51d;
case 0x46b522:goto L46b522;
case 0x46b525:goto L46b525;
case 0x46b526:c.instructions+=3;goto B46b526;
case 0x46b528:c.instructions+=2;goto B46b528;
case 0x46b529:c.instructions+=1;goto B46b529;
case 0x46b530:goto L46b530;
case 0x46b535:c.instructions+=6;goto B46b535;
case 0x46b53b:c.instructions+=5;goto B46b53b;
case 0x46b53c:c.instructions+=4;goto B46b53c;
case 0x46b53d:c.instructions+=3;goto B46b53d;
case 0x46b53e:c.instructions+=2;goto B46b53e;
case 0x46b53f:c.instructions+=1;goto B46b53f;
case 0x46b544:goto L46b544;
case 0x46b54a:c.instructions+=5;goto B46b54a;
case 0x46b54c:c.instructions+=4;goto B46b54c;
case 0x46b551:c.instructions+=3;goto B46b551;
case 0x46b552:c.instructions+=2;goto B46b552;
case 0x46b553:c.instructions+=1;goto B46b553;
case 0x46b558:goto L46b558;
case 0x46b55e:c.instructions+=7;goto B46b55e;
case 0x46b560:c.instructions+=6;goto B46b560;
case 0x46b561:c.instructions+=5;goto B46b561;
case 0x46b562:c.instructions+=4;goto B46b562;
case 0x46b563:c.instructions+=3;goto B46b563;
case 0x46b568:c.instructions+=2;goto B46b568;
case 0x46b56a:c.instructions+=1;goto B46b56a;
case 0x46b56f:goto L46b56f;
case 0x46b574:c.instructions+=5;goto B46b574;
case 0x46b576:c.instructions+=4;goto B46b576;
case 0x46b579:c.instructions+=3;goto B46b579;
case 0x46b57e:c.instructions+=2;goto B46b57e;
case 0x46b584:c.instructions+=1;goto B46b584;
case 0x46b586:goto L46b586;
case 0x46b58c:c.instructions+=1;goto B46b58c;
case 0x46b58e:goto L46b58e;
case 0x46b594:goto L46b594;
case 0x46b59a:c.instructions+=3;goto B46b59a;
case 0x46b59b:c.instructions+=2;goto B46b59b;
case 0x46b59d:c.instructions+=1;goto B46b59d;
case 0x46b5a2:goto L46b5a2;
case 0x46b5a8:c.instructions+=3;goto B46b5a8;
case 0x46b5ab:c.instructions+=2;goto B46b5ab;
case 0x46b5ad:c.instructions+=1;goto B46b5ad;
case 0x46b5af:goto L46b5af;
case 0x46b5b5:c.instructions+=5;goto B46b5b5;
case 0x46b5b8:c.instructions+=4;goto B46b5b8;
case 0x46b5be:c.instructions+=3;goto B46b5be;
case 0x46b5bf:c.instructions+=2;goto B46b5bf;
case 0x46b5c0:c.instructions+=1;goto B46b5c0;
case 0x46b5c5:goto L46b5c5;
case 0x46b5c8:c.instructions+=3;goto B46b5c8;
case 0x46b5c9:c.instructions+=2;goto B46b5c9;
case 0x46b5ca:c.instructions+=1;goto B46b5ca;
case 0x46b5cb:goto L46b5cb;
case 0x46b5cd:c.instructions+=3;goto B46b5cd;
case 0x46b5ce:c.instructions+=2;goto B46b5ce;
case 0x46b5cf:c.instructions+=1;goto B46b5cf;
case 0x46b5d0:goto L46b5d0;
case 0x46b5d5:c.instructions+=4;goto B46b5d5;
case 0x46b5d6:c.instructions+=3;goto B46b5d6;
case 0x46b5d8:c.instructions+=2;goto B46b5d8;
case 0x46b5da:c.instructions+=1;goto B46b5da;
case 0x46b5e0:goto L46b5e0;
case 0x46b5e1:c.instructions+=4;goto B46b5e1;
case 0x46b5e5:c.instructions+=3;goto B46b5e5;
case 0x46b5e6:c.instructions+=2;goto B46b5e6;
case 0x46b5ea:c.instructions+=1;goto B46b5ea;
case 0x46b5f0:goto L46b5f0;
case 0x46b5f7:c.instructions+=2;goto B46b5f7;
case 0x46b5f9:c.instructions+=1;goto B46b5f9;
case 0x46b5fb:goto L46b5fb;
case 0x46b601:c.instructions+=3;goto B46b601;
case 0x46b606:c.instructions+=2;goto B46b606;
case 0x46b608:c.instructions+=1;goto B46b608;
case 0x46b60a:goto L46b60a;
case 0x46b60f:goto L46b60f;
case 0x46b616:c.instructions+=7;goto B46b616;
case 0x46b61c:c.instructions+=6;goto B46b61c;
case 0x46b622:c.instructions+=5;goto B46b622;
case 0x46b628:c.instructions+=4;goto B46b628;
case 0x46b62a:c.instructions+=3;goto B46b62a;
case 0x46b630:c.instructions+=2;goto B46b630;
case 0x46b636:c.instructions+=1;goto B46b636;
case 0x46b638:goto L46b638;
case 0x46b63b:c.instructions+=3;goto B46b63b;
case 0x46b641:c.instructions+=2;goto B46b641;
case 0x46b644:c.instructions+=1;goto B46b644;
case 0x46b64a:goto L46b64a;
case 0x46b64d:c.instructions+=1;goto B46b64d;
case 0x46b64f:goto L46b64f;
case 0x46b650:c.instructions+=3;goto B46b650;
case 0x46b655:c.instructions+=2;goto B46b655;
case 0x46b657:c.instructions+=1;goto B46b657;
case 0x46b65c:goto L46b65c;
case 0x46b65f:goto L46b65f;
case 0x46b664:c.instructions+=3;goto B46b664;
case 0x46b665:c.instructions+=2;goto B46b665;
case 0x46b667:c.instructions+=1;goto B46b667;
case 0x46b669:goto L46b669;
case 0x46b66a:c.instructions+=1;goto B46b66a;
case 0x46b66b:goto L46b66b;
case 0x46b66c:c.instructions+=1;goto B46b66c;
case 0x46b670:goto L46b670;
case 0x46b671:c.instructions+=4;goto B46b671;
case 0x46b675:c.instructions+=3;goto B46b675;
case 0x46b678:c.instructions+=2;goto B46b678;
case 0x46b679:c.instructions+=1;goto B46b679;
case 0x46b67b:goto L46b67b;
case 0x46b680:c.instructions+=2;goto B46b680;
case 0x46b683:c.instructions+=1;goto B46b683;
case 0x46b685:goto L46b685;
case 0x46b68b:c.instructions+=2;goto B46b68b;
case 0x46b68d:c.instructions+=1;goto B46b68d;
case 0x46b68f:goto L46b68f;
case 0x46b696:c.instructions+=2;goto B46b696;
case 0x46b698:c.instructions+=1;goto B46b698;
case 0x46b69a:goto L46b69a;
case 0x46b69c:goto L46b69c;
case 0x46b69d:c.instructions+=2;goto B46b69d;
case 0x46b69e:c.instructions+=1;goto B46b69e;
case 0x46b6a1:goto L46b6a1;
case 0x46b6a7:c.instructions+=3;goto B46b6a7;
case 0x46b6a9:c.instructions+=2;goto B46b6a9;
case 0x46b6ab:c.instructions+=1;goto B46b6ab;
case 0x46b6ad:goto L46b6ad;
case 0x46b6b0:goto L46b6b0;
case 0x46b6b7:c.instructions+=2;goto B46b6b7;
case 0x46b6ba:c.instructions+=1;goto B46b6ba;
case 0x46b6bc:goto L46b6bc;
case 0x46b6c2:c.instructions+=2;goto B46b6c2;
case 0x46b6c4:c.instructions+=1;goto B46b6c4;
case 0x46b6c6:goto L46b6c6;
case 0x46b6c7:c.instructions+=2;goto B46b6c7;
case 0x46b6c9:c.instructions+=1;goto B46b6c9;
case 0x46b6cb:goto L46b6cb;
case 0x46b6cc:c.instructions+=3;goto B46b6cc;
case 0x46b6ce:c.instructions+=2;goto B46b6ce;
case 0x46b6cf:c.instructions+=1;goto B46b6cf;
case 0x46b6d2:goto L46b6d2;
case 0x46b6d5:c.instructions+=5;goto B46b6d5;
case 0x46b6d6:c.instructions+=4;goto B46b6d6;
case 0x46b6db:c.instructions+=3;goto B46b6db;
case 0x46b6e2:c.instructions+=2;goto B46b6e2;
case 0x46b6e3:c.instructions+=1;goto B46b6e3;
case 0x46b6f0:goto L46b6f0;
case 0x46b6f3:c.instructions+=12;goto B46b6f3;
case 0x46b6f4:c.instructions+=11;goto B46b6f4;
case 0x46b6f5:c.instructions+=10;goto B46b6f5;
case 0x46b6f6:c.instructions+=9;goto B46b6f6;
case 0x46b6f8:c.instructions+=8;goto B46b6f8;
case 0x46b6fe:c.instructions+=7;goto B46b6fe;
case 0x46b704:c.instructions+=6;goto B46b704;
case 0x46b70a:c.instructions+=5;goto B46b70a;
case 0x46b70d:c.instructions+=4;goto B46b70d;
case 0x46b710:c.instructions+=3;goto B46b710;
case 0x46b711:c.instructions+=2;goto B46b711;
case 0x46b713:c.instructions+=1;goto B46b713;
case 0x46b719:goto L46b719;
case 0x46b71c:c.instructions+=1;goto B46b71c;
case 0x46b722:goto L46b722;
case 0x46b728:c.instructions+=2;goto B46b728;
case 0x46b72a:c.instructions+=1;goto B46b72a;
case 0x46b730:goto L46b730;
case 0x46b736:c.instructions+=2;goto B46b736;
case 0x46b738:c.instructions+=1;goto B46b738;
case 0x46b73a:goto L46b73a;
case 0x46b740:c.instructions+=1;goto B46b740;
case 0x46b746:goto L46b746;
case 0x46b74c:c.instructions+=3;goto B46b74c;
case 0x46b74e:c.instructions+=2;goto B46b74e;
case 0x46b750:c.instructions+=1;goto B46b750;
case 0x46b752:goto L46b752;
case 0x46b760:goto L46b760;
case 0x46b766:c.instructions+=2;goto B46b766;
case 0x46b76d:c.instructions+=1;goto B46b76d;
case 0x46b76f:goto L46b76f;
case 0x46b775:c.instructions+=4;goto B46b775;
case 0x46b77a:c.instructions+=3;goto B46b77a;
case 0x46b77c:c.instructions+=2;goto B46b77c;
case 0x46b77e:c.instructions+=1;goto B46b77e;
case 0x46b780:goto L46b780;
case 0x46b782:c.instructions+=12;goto B46b782;
case 0x46b784:c.instructions+=11;goto B46b784;
case 0x46b78a:c.instructions+=10;goto B46b78a;
case 0x46b78d:c.instructions+=9;goto B46b78d;
case 0x46b793:c.instructions+=8;goto B46b793;
case 0x46b799:c.instructions+=7;goto B46b799;
case 0x46b79a:c.instructions+=6;goto B46b79a;
case 0x46b79b:c.instructions+=5;goto B46b79b;
case 0x46b7a0:c.instructions+=4;goto B46b7a0;
case 0x46b7a2:c.instructions+=3;goto B46b7a2;
case 0x46b7a4:c.instructions+=2;goto B46b7a4;
case 0x46b7a9:c.instructions+=1;goto B46b7a9;
case 0x46b7ae:goto L46b7ae;
case 0x46b7b1:goto L46b7b1;
case 0x46b7b2:c.instructions+=2;goto B46b7b2;
case 0x46b7b5:c.instructions+=1;goto B46b7b5;
case 0x46b7b7:goto L46b7b7;
case 0x46b7b8:c.instructions+=6;goto B46b7b8;
case 0x46b7b9:c.instructions+=5;goto B46b7b9;
case 0x46b7ba:c.instructions+=4;goto B46b7ba;
case 0x46b7bc:c.instructions+=3;goto B46b7bc;
case 0x46b7bd:c.instructions+=2;goto B46b7bd;
case 0x46b7c0:c.instructions+=1;goto B46b7c0;
case 0x46b7c1:goto L46b7c1;
case 0x46b7c7:c.instructions+=2;goto B46b7c7;
case 0x46b7cb:c.instructions+=1;goto B46b7cb;
case 0x46b7d0:goto L46b7d0;
case 0x46b7d3:c.instructions+=4;goto B46b7d3;
case 0x46b7d8:c.instructions+=3;goto B46b7d8;
case 0x46b7da:c.instructions+=2;goto B46b7da;
case 0x46b7dc:c.instructions+=1;goto B46b7dc;
case 0x46b7de:goto L46b7de;
case 0x46b7df:goto L46b7df;
case 0x46b7e2:c.instructions+=4;goto B46b7e2;
case 0x46b7e7:c.instructions+=3;goto B46b7e7;
case 0x46b7e9:c.instructions+=2;goto B46b7e9;
case 0x46b7eb:c.instructions+=1;goto B46b7eb;
case 0x46b7ed:goto L46b7ed;
case 0x46b7ee:goto L46b7ee;
case 0x46b7f3:c.instructions+=4;goto B46b7f3;
case 0x46b7f5:c.instructions+=3;goto B46b7f5;
case 0x46b7f7:c.instructions+=2;goto B46b7f7;
case 0x46b7f9:c.instructions+=1;goto B46b7f9;
case 0x46b7fb:goto L46b7fb;
case 0x46b7fc:goto L46b7fc;
case 0x46b7ff:c.instructions+=4;goto B46b7ff;
case 0x46b804:c.instructions+=3;goto B46b804;
case 0x46b806:c.instructions+=2;goto B46b806;
case 0x46b808:c.instructions+=1;goto B46b808;
case 0x46b80a:goto L46b80a;
case 0x46b80b:goto L46b80b;
case 0x46b80e:c.instructions+=4;goto B46b80e;
case 0x46b813:c.instructions+=3;goto B46b813;
case 0x46b815:c.instructions+=2;goto B46b815;
case 0x46b817:c.instructions+=1;goto B46b817;
case 0x46b819:goto L46b819;
case 0x46b81a:goto L46b81a;
case 0x46b81d:c.instructions+=4;goto B46b81d;
case 0x46b822:c.instructions+=3;goto B46b822;
case 0x46b824:c.instructions+=2;goto B46b824;
case 0x46b826:c.instructions+=1;goto B46b826;
case 0x46b828:goto L46b828;
case 0x46b829:goto L46b829;
case 0x46b82c:c.instructions+=4;goto B46b82c;
case 0x46b831:c.instructions+=3;goto B46b831;
case 0x46b833:c.instructions+=2;goto B46b833;
case 0x46b835:c.instructions+=1;goto B46b835;
case 0x46b837:goto L46b837;
case 0x46b838:goto L46b838;
case 0x46b83b:c.instructions+=4;goto B46b83b;
case 0x46b840:c.instructions+=3;goto B46b840;
case 0x46b842:c.instructions+=2;goto B46b842;
case 0x46b844:c.instructions+=1;goto B46b844;
case 0x46b846:goto L46b846;
case 0x46b847:goto L46b847;
case 0x46b84a:c.instructions+=4;goto B46b84a;
case 0x46b84f:c.instructions+=3;goto B46b84f;
case 0x46b851:c.instructions+=2;goto B46b851;
case 0x46b853:c.instructions+=1;goto B46b853;
case 0x46b855:goto L46b855;
case 0x46b856:goto L46b856;
case 0x46b859:c.instructions+=3;goto B46b859;
case 0x46b85c:c.instructions+=2;goto B46b85c;
case 0x46b85f:c.instructions+=1;goto B46b85f;
case 0x46b865:goto L46b865;
case 0x46b869:c.instructions+=1;goto B46b869;
case 0x46b86e:goto L46b86e;
case 0x46b86f:c.instructions+=1;goto B46b86f;
case 0x46b874:goto L46b874;
case 0x46b877:c.instructions+=4;goto B46b877;
case 0x46b879:c.instructions+=3;goto B46b879;
case 0x46b87b:c.instructions+=2;goto B46b87b;
case 0x46b87f:c.instructions+=1;goto B46b87f;
case 0x46b880:goto L46b880;
case 0x46b886:c.instructions+=5;goto B46b886;
case 0x46b88b:c.instructions+=4;goto B46b88b;
case 0x46b88d:c.instructions+=3;goto B46b88d;
case 0x46b88f:c.instructions+=2;goto B46b88f;
case 0x46b891:c.instructions+=1;goto B46b891;
case 0x46b893:goto L46b893;
case 0x46b897:c.instructions+=1;goto B46b897;
case 0x46b899:goto L46b899;
case 0x46b89d:c.instructions+=14;goto B46b89d;
case 0x46b89f:c.instructions+=13;goto B46b89f;
case 0x46b8a1:c.instructions+=12;goto B46b8a1;
case 0x46b8a3:c.instructions+=11;goto B46b8a3;
case 0x46b8a6:c.instructions+=10;goto B46b8a6;
case 0x46b8ac:c.instructions+=9;goto B46b8ac;
case 0x46b8b2:c.instructions+=8;goto B46b8b2;
case 0x46b8b3:c.instructions+=7;goto B46b8b3;
case 0x46b8b4:c.instructions+=6;goto B46b8b4;
case 0x46b8b5:c.instructions+=5;goto B46b8b5;
case 0x46b8b6:c.instructions+=4;goto B46b8b6;
case 0x46b8bb:c.instructions+=3;goto B46b8bb;
case 0x46b8bd:c.instructions+=2;goto B46b8bd;
case 0x46b8c2:c.instructions+=1;goto B46b8c2;
case 0x46b8c7:goto L46b8c7;
case 0x46b8ca:goto L46b8ca;
case 0x46b8ce:goto L46b8ce;
case 0x46b8cf:c.instructions+=2;goto B46b8cf;
case 0x46b8d2:c.instructions+=1;goto B46b8d2;
case 0x46b8d4:goto L46b8d4;
case 0x46b8d5:c.instructions+=6;goto B46b8d5;
case 0x46b8d6:c.instructions+=5;goto B46b8d6;
case 0x46b8d7:c.instructions+=4;goto B46b8d7;
case 0x46b8d9:c.instructions+=3;goto B46b8d9;
case 0x46b8da:c.instructions+=2;goto B46b8da;
case 0x46b8dd:c.instructions+=1;goto B46b8dd;
case 0x46b8de:goto L46b8de;
case 0x46b8e5:c.instructions+=1;goto B46b8e5;
case 0x46b8e7:goto L46b8e7;
case 0x46b8ea:c.instructions+=1;goto B46b8ea;
case 0x46b8f0:goto L46b8f0;
case 0x46b8f6:c.instructions+=2;goto B46b8f6;
case 0x46b8f8:c.instructions+=1;goto B46b8f8;
case 0x46b8fe:goto L46b8fe;
case 0x46b904:c.instructions+=2;goto B46b904;
case 0x46b906:c.instructions+=1;goto B46b906;
case 0x46b908:goto L46b908;
case 0x46b90e:c.instructions+=1;goto B46b90e;
case 0x46b914:goto L46b914;
case 0x46b91a:c.instructions+=3;goto B46b91a;
case 0x46b91c:c.instructions+=2;goto B46b91c;
case 0x46b91e:c.instructions+=1;goto B46b91e;
case 0x46b920:goto L46b920;
case 0x46b926:c.instructions+=2;goto B46b926;
case 0x46b92d:c.instructions+=1;goto B46b92d;
case 0x46b92f:goto L46b92f;
case 0x46b935:c.instructions+=4;goto B46b935;
case 0x46b93a:c.instructions+=3;goto B46b93a;
case 0x46b93c:c.instructions+=2;goto B46b93c;
case 0x46b93e:c.instructions+=1;goto B46b93e;
case 0x46b940:goto L46b940;
case 0x46b942:c.instructions+=12;goto B46b942;
case 0x46b944:c.instructions+=11;goto B46b944;
case 0x46b94a:c.instructions+=10;goto B46b94a;
case 0x46b94d:c.instructions+=9;goto B46b94d;
case 0x46b953:c.instructions+=8;goto B46b953;
case 0x46b959:c.instructions+=7;goto B46b959;
case 0x46b95a:c.instructions+=6;goto B46b95a;
case 0x46b95b:c.instructions+=5;goto B46b95b;
case 0x46b960:c.instructions+=4;goto B46b960;
case 0x46b962:c.instructions+=3;goto B46b962;
case 0x46b964:c.instructions+=2;goto B46b964;
case 0x46b969:c.instructions+=1;goto B46b969;
case 0x46b96e:goto L46b96e;
case 0x46b971:goto L46b971;
case 0x46b972:c.instructions+=2;goto B46b972;
case 0x46b975:c.instructions+=1;goto B46b975;
case 0x46b977:goto L46b977;
case 0x46b978:c.instructions+=6;goto B46b978;
case 0x46b979:c.instructions+=5;goto B46b979;
case 0x46b97a:c.instructions+=4;goto B46b97a;
case 0x46b97c:c.instructions+=3;goto B46b97c;
case 0x46b97d:c.instructions+=2;goto B46b97d;
case 0x46b980:c.instructions+=1;goto B46b980;
case 0x46b981:goto L46b981;
case 0x46b987:c.instructions+=2;goto B46b987;
case 0x46b98b:c.instructions+=1;goto B46b98b;
case 0x46b990:goto L46b990;
case 0x46b993:c.instructions+=4;goto B46b993;
case 0x46b998:c.instructions+=3;goto B46b998;
case 0x46b99a:c.instructions+=2;goto B46b99a;
case 0x46b99c:c.instructions+=1;goto B46b99c;
case 0x46b99e:goto L46b99e;
case 0x46b99f:goto L46b99f;
case 0x46b9a2:c.instructions+=4;goto B46b9a2;
case 0x46b9a7:c.instructions+=3;goto B46b9a7;
case 0x46b9a9:c.instructions+=2;goto B46b9a9;
case 0x46b9ab:c.instructions+=1;goto B46b9ab;
case 0x46b9ad:goto L46b9ad;
case 0x46b9ae:goto L46b9ae;
case 0x46b9b3:c.instructions+=4;goto B46b9b3;
case 0x46b9b5:c.instructions+=3;goto B46b9b5;
case 0x46b9b7:c.instructions+=2;goto B46b9b7;
case 0x46b9b9:c.instructions+=1;goto B46b9b9;
case 0x46b9bb:goto L46b9bb;
case 0x46b9bc:goto L46b9bc;
case 0x46b9bf:c.instructions+=4;goto B46b9bf;
case 0x46b9c4:c.instructions+=3;goto B46b9c4;
case 0x46b9c6:c.instructions+=2;goto B46b9c6;
case 0x46b9c8:c.instructions+=1;goto B46b9c8;
case 0x46b9ca:goto L46b9ca;
case 0x46b9cb:goto L46b9cb;
case 0x46b9ce:c.instructions+=4;goto B46b9ce;
case 0x46b9d3:c.instructions+=3;goto B46b9d3;
case 0x46b9d5:c.instructions+=2;goto B46b9d5;
case 0x46b9d7:c.instructions+=1;goto B46b9d7;
case 0x46b9d9:goto L46b9d9;
case 0x46b9da:goto L46b9da;
case 0x46b9dd:c.instructions+=4;goto B46b9dd;
case 0x46b9e2:c.instructions+=3;goto B46b9e2;
case 0x46b9e4:c.instructions+=2;goto B46b9e4;
case 0x46b9e6:c.instructions+=1;goto B46b9e6;
case 0x46b9e8:goto L46b9e8;
case 0x46b9e9:goto L46b9e9;
case 0x46b9ec:c.instructions+=4;goto B46b9ec;
case 0x46b9f1:c.instructions+=3;goto B46b9f1;
case 0x46b9f3:c.instructions+=2;goto B46b9f3;
case 0x46b9f5:c.instructions+=1;goto B46b9f5;
case 0x46b9f7:goto L46b9f7;
case 0x46b9f8:goto L46b9f8;
case 0x46b9fb:c.instructions+=4;goto B46b9fb;
case 0x46ba00:c.instructions+=3;goto B46ba00;
case 0x46ba02:c.instructions+=2;goto B46ba02;
case 0x46ba04:c.instructions+=1;goto B46ba04;
case 0x46ba06:goto L46ba06;
case 0x46ba07:goto L46ba07;
case 0x46ba0a:c.instructions+=4;goto B46ba0a;
case 0x46ba0f:c.instructions+=3;goto B46ba0f;
case 0x46ba11:c.instructions+=2;goto B46ba11;
case 0x46ba13:c.instructions+=1;goto B46ba13;
case 0x46ba15:goto L46ba15;
case 0x46ba16:goto L46ba16;
case 0x46ba19:c.instructions+=3;goto B46ba19;
case 0x46ba1c:c.instructions+=2;goto B46ba1c;
case 0x46ba1f:c.instructions+=1;goto B46ba1f;
case 0x46ba25:goto L46ba25;
case 0x46ba29:c.instructions+=1;goto B46ba29;
case 0x46ba2e:goto L46ba2e;
case 0x46ba2f:c.instructions+=1;goto B46ba2f;
case 0x46ba34:goto L46ba34;
case 0x46ba37:c.instructions+=4;goto B46ba37;
case 0x46ba39:c.instructions+=3;goto B46ba39;
case 0x46ba3b:c.instructions+=2;goto B46ba3b;
case 0x46ba3f:c.instructions+=1;goto B46ba3f;
case 0x46ba40:goto L46ba40;
case 0x46ba46:c.instructions+=5;goto B46ba46;
case 0x46ba4b:c.instructions+=4;goto B46ba4b;
case 0x46ba4d:c.instructions+=3;goto B46ba4d;
case 0x46ba4f:c.instructions+=2;goto B46ba4f;
case 0x46ba51:c.instructions+=1;goto B46ba51;
case 0x46ba53:goto L46ba53;
case 0x46ba57:c.instructions+=1;goto B46ba57;
case 0x46ba59:goto L46ba59;
case 0x46ba5d:c.instructions+=14;goto B46ba5d;
case 0x46ba5f:c.instructions+=13;goto B46ba5f;
case 0x46ba61:c.instructions+=12;goto B46ba61;
case 0x46ba63:c.instructions+=11;goto B46ba63;
case 0x46ba66:c.instructions+=10;goto B46ba66;
case 0x46ba6c:c.instructions+=9;goto B46ba6c;
case 0x46ba72:c.instructions+=8;goto B46ba72;
case 0x46ba73:c.instructions+=7;goto B46ba73;
case 0x46ba74:c.instructions+=6;goto B46ba74;
case 0x46ba75:c.instructions+=5;goto B46ba75;
case 0x46ba76:c.instructions+=4;goto B46ba76;
case 0x46ba7b:c.instructions+=3;goto B46ba7b;
case 0x46ba7d:c.instructions+=2;goto B46ba7d;
case 0x46ba82:c.instructions+=1;goto B46ba82;
case 0x46ba87:goto L46ba87;
case 0x46ba8a:goto L46ba8a;
case 0x46ba8e:goto L46ba8e;
case 0x46ba8f:c.instructions+=2;goto B46ba8f;
case 0x46ba92:c.instructions+=1;goto B46ba92;
case 0x46ba94:goto L46ba94;
case 0x46ba96:goto L46ba96;
case 0x46ba97:c.instructions+=5;goto B46ba97;
case 0x46ba98:c.instructions+=4;goto B46ba98;
case 0x46ba99:c.instructions+=3;goto B46ba99;
case 0x46ba9a:c.instructions+=2;goto B46ba9a;
case 0x46ba9d:c.instructions+=1;goto B46ba9d;
case 0x46baa0:goto L46baa0;
case 0x46baa4:c.instructions+=24;goto B46baa4;
case 0x46baa8:c.instructions+=23;goto B46baa8;
case 0x46baa9:c.instructions+=22;goto B46baa9;
case 0x46baad:c.instructions+=21;goto B46baad;
case 0x46baae:c.instructions+=20;goto B46baae;
case 0x46bab2:c.instructions+=19;goto B46bab2;
case 0x46bab3:c.instructions+=18;goto B46bab3;
case 0x46bab7:c.instructions+=17;goto B46bab7;
case 0x46bab8:c.instructions+=16;goto B46bab8;
case 0x46bab9:c.instructions+=15;goto B46bab9;
case 0x46baba:c.instructions+=14;goto B46baba;
case 0x46babb:c.instructions+=13;goto B46babb;
case 0x46babc:c.instructions+=12;goto B46babc;
case 0x46bac1:c.instructions+=11;goto B46bac1;
case 0x46bac3:c.instructions+=10;goto B46bac3;
case 0x46bac9:c.instructions+=9;goto B46bac9;
case 0x46bacf:c.instructions+=8;goto B46bacf;
case 0x46bad5:c.instructions+=7;goto B46bad5;
case 0x46badb:c.instructions+=6;goto B46badb;
case 0x46bae1:c.instructions+=5;goto B46bae1;
case 0x46bae7:c.instructions+=4;goto B46bae7;
case 0x46baed:c.instructions+=3;goto B46baed;
case 0x46baf7:c.instructions+=2;goto B46baf7;
case 0x46bb01:c.instructions+=1;goto B46bb01;
case 0x46bb06:goto L46bb06;
case 0x46bb09:c.instructions+=4;goto B46bb09;
case 0x46bb0a:c.instructions+=3;goto B46bb0a;
case 0x46bb0b:c.instructions+=2;goto B46bb0b;
case 0x46bb0c:c.instructions+=1;goto B46bb0c;
case 0x46bb10:goto L46bb10;
case 0x46bb16:c.instructions+=4;goto B46bb16;
case 0x46bb1a:c.instructions+=3;goto B46bb1a;
case 0x46bb1c:c.instructions+=2;goto B46bb1c;
case 0x46bb1d:c.instructions+=1;goto B46bb1d;
case 0x46bb1f:goto L46bb1f;
case 0x46bb25:c.instructions+=3;goto B46bb25;
case 0x46bb27:c.instructions+=2;goto B46bb27;
case 0x46bb29:c.instructions+=1;goto B46bb29;
case 0x46bb2b:goto L46bb2b;
case 0x46bb31:c.instructions+=2;goto B46bb31;
case 0x46bb33:c.instructions+=1;goto B46bb33;
case 0x46bb35:goto L46bb35;
case 0x46bb3b:c.instructions+=5;goto B46bb3b;
case 0x46bb3e:c.instructions+=4;goto B46bb3e;
case 0x46bb41:c.instructions+=3;goto B46bb41;
case 0x46bb44:c.instructions+=2;goto B46bb44;
case 0x46bb46:c.instructions+=1;goto B46bb46;
case 0x46bb48:goto L46bb48;
case 0x46bb49:c.instructions+=5;goto B46bb49;
case 0x46bb4c:c.instructions+=4;goto B46bb4c;
case 0x46bb4e:c.instructions+=3;goto B46bb4e;
case 0x46bb50:c.instructions+=2;goto B46bb50;
case 0x46bb51:c.instructions+=1;goto B46bb51;
case 0x46bb53:goto L46bb53;
case 0x46bb56:c.instructions+=4;goto B46bb56;
case 0x46bb59:c.instructions+=3;goto B46bb59;
case 0x46bb5c:c.instructions+=2;goto B46bb5c;
case 0x46bb5e:c.instructions+=1;goto B46bb5e;
case 0x46bb60:goto L46bb60;
case 0x46bb63:c.instructions+=3;goto B46bb63;
case 0x46bb65:c.instructions+=2;goto B46bb65;
case 0x46bb67:c.instructions+=1;goto B46bb67;
case 0x46bb69:goto L46bb69;
case 0x46bb6c:c.instructions+=2;goto B46bb6c;
case 0x46bb6d:c.instructions+=1;goto B46bb6d;
case 0x46bb6e:goto L46bb6e;
case 0x46bb71:c.instructions+=1;goto B46bb71;
case 0x46bb73:goto L46bb73;
case 0x46bb79:c.instructions+=2;goto B46bb79;
case 0x46bb7f:c.instructions+=1;goto B46bb7f;
case 0x46bb82:goto L46bb82;
case 0x46bb85:goto L46bb85;
case 0x46bb86:c.instructions+=1;goto B46bb86;
case 0x46bb90:goto L46bb90;
case 0x46bb95:c.instructions+=3;goto B46bb95;
case 0x46bb98:c.instructions+=2;goto B46bb98;
case 0x46bb9b:c.instructions+=1;goto B46bb9b;
case 0x46bb9d:goto L46bb9d;
case 0x46bba3:c.instructions+=2;goto B46bba3;
case 0x46bba5:c.instructions+=1;goto B46bba5;
case 0x46bba7:goto L46bba7;
case 0x46bbae:c.instructions+=3;goto B46bbae;
case 0x46bbb0:c.instructions+=2;goto B46bbb0;
case 0x46bbb4:c.instructions+=1;goto B46bbb4;
case 0x46bbb6:goto L46bbb6;
case 0x46bbbe:goto L46bbbe;
case 0x46bbbf:c.instructions+=2;goto B46bbbf;
case 0x46bbc1:c.instructions+=1;goto B46bbc1;
case 0x46bbc5:goto L46bbc5;
case 0x46bbcc:c.instructions+=2;goto B46bbcc;
case 0x46bbce:c.instructions+=1;goto B46bbce;
case 0x46bbd0:goto L46bbd0;
case 0x46bbd1:c.instructions+=2;goto B46bbd1;
case 0x46bbd4:c.instructions+=1;goto B46bbd4;
case 0x46bbd6:goto L46bbd6;
case 0x46bbda:c.instructions+=4;goto B46bbda;
case 0x46bbdf:c.instructions+=3;goto B46bbdf;
case 0x46bbe0:c.instructions+=2;goto B46bbe0;
case 0x46bbe3:c.instructions+=1;goto B46bbe3;
case 0x46bbe4:goto L46bbe4;
case 0x46bbe6:c.instructions+=2;goto B46bbe6;
case 0x46bbea:c.instructions+=1;goto B46bbea;
case 0x46bbec:goto L46bbec;
case 0x46bbf1:c.instructions+=3;goto B46bbf1;
case 0x46bbf2:c.instructions+=2;goto B46bbf2;
case 0x46bbf5:c.instructions+=1;goto B46bbf5;
case 0x46bbf6:goto L46bbf6;
case 0x46bbf7:c.instructions+=8;goto B46bbf7;
case 0x46bbf8:c.instructions+=7;goto B46bbf8;
case 0x46bbfc:c.instructions+=6;goto B46bbfc;
case 0x46bc03:c.instructions+=5;goto B46bc03;
case 0x46bc0a:c.instructions+=4;goto B46bc0a;
case 0x46bc0b:c.instructions+=3;goto B46bc0b;
case 0x46bc0d:c.instructions+=2;goto B46bc0d;
case 0x46bc0f:c.instructions+=1;goto B46bc0f;
case 0x46bc14:goto L46bc14;
case 0x46bc16:goto L46bc16;
case 0x46bc19:c.instructions+=18;goto B46bc19;
case 0x46bc1d:c.instructions+=17;goto B46bc1d;
case 0x46bc20:c.instructions+=16;goto B46bc20;
case 0x46bc26:c.instructions+=15;goto B46bc26;
case 0x46bc29:c.instructions+=14;goto B46bc29;
case 0x46bc2b:c.instructions+=13;goto B46bc2b;
case 0x46bc2e:c.instructions+=12;goto B46bc2e;
case 0x46bc31:c.instructions+=11;goto B46bc31;
case 0x46bc34:c.instructions+=10;goto B46bc34;
case 0x46bc38:c.instructions+=9;goto B46bc38;
case 0x46bc3f:c.instructions+=8;goto B46bc3f;
case 0x46bc42:c.instructions+=7;goto B46bc42;
case 0x46bc45:c.instructions+=6;goto B46bc45;
case 0x46bc48:c.instructions+=5;goto B46bc48;
case 0x46bc4a:c.instructions+=4;goto B46bc4a;
case 0x46bc4c:c.instructions+=3;goto B46bc4c;
case 0x46bc52:c.instructions+=2;goto B46bc52;
case 0x46bc55:c.instructions+=1;goto B46bc55;
case 0x46bc57:goto L46bc57;
case 0x46bc58:c.instructions+=2;goto B46bc58;
case 0x46bc5b:c.instructions+=1;goto B46bc5b;
case 0x46bc5c:goto L46bc5c;
case 0x46bc60:c.instructions+=9;goto B46bc60;
case 0x46bc65:c.instructions+=8;goto B46bc65;
case 0x46bc67:c.instructions+=7;goto B46bc67;
case 0x46bc69:c.instructions+=6;goto B46bc69;
case 0x46bc6b:c.instructions+=5;goto B46bc6b;
case 0x46bc6d:c.instructions+=4;goto B46bc6d;
case 0x46bc6f:c.instructions+=3;goto B46bc6f;
case 0x46bc71:c.instructions+=2;goto B46bc71;
case 0x46bc75:c.instructions+=1;goto B46bc75;
case 0x46bc77:goto L46bc77;
case 0x46bc79:c.instructions+=1;goto B46bc79;
case 0x46bc80:goto L46bc80;
case 0x46bc83:c.instructions+=4;goto B46bc83;
case 0x46bc87:c.instructions+=3;goto B46bc87;
case 0x46bc8a:c.instructions+=2;goto B46bc8a;
case 0x46bc8b:c.instructions+=1;goto B46bc8b;
case 0x46bc8d:goto L46bc8d;
case 0x46bc91:c.instructions+=2;goto B46bc91;
case 0x46bc93:c.instructions+=1;goto B46bc93;
case 0x46bc95:goto L46bc95;
case 0x46bc98:c.instructions+=1;goto B46bc98;
case 0x46bc9d:goto L46bc9d;
case 0x46bc9f:goto L46bc9f;
case 0x46bca1:goto L46bca1;
case 0x46bca4:c.instructions+=2;goto B46bca4;
case 0x46bca5:c.instructions+=1;goto B46bca5;
case 0x46bcaa:goto L46bcaa;
case 0x46bcad:goto L46bcad;
case 0x46bcb1:c.instructions+=7;goto B46bcb1;
case 0x46bcb2:c.instructions+=6;goto B46bcb2;
case 0x46bcb4:c.instructions+=5;goto B46bcb4;
case 0x46bcb7:c.instructions+=4;goto B46bcb7;
case 0x46bcbc:c.instructions+=3;goto B46bcbc;
case 0x46bcbd:c.instructions+=2;goto B46bcbd;
case 0x46bcc1:c.instructions+=1;goto B46bcc1;
case 0x46bcc6:goto L46bcc6;
case 0x46bcca:c.instructions+=3;goto B46bcca;
case 0x46bccd:c.instructions+=2;goto B46bccd;
case 0x46bccf:c.instructions+=1;goto B46bccf;
case 0x46bcd1:goto L46bcd1;
case 0x46bcd5:c.instructions+=10;goto B46bcd5;
case 0x46bcd9:c.instructions+=9;goto B46bcd9;
case 0x46bcdc:c.instructions+=8;goto B46bcdc;
case 0x46bcdd:c.instructions+=7;goto B46bcdd;
case 0x46bce1:c.instructions+=6;goto B46bce1;
case 0x46bce2:c.instructions+=5;goto B46bce2;
case 0x46bce3:c.instructions+=4;goto B46bce3;
case 0x46bce4:c.instructions+=3;goto B46bce4;
case 0x46bce5:c.instructions+=2;goto B46bce5;
case 0x46bce8:c.instructions+=1;goto B46bce8;
case 0x46bced:goto L46bced;
case 0x46bcf0:c.instructions+=4;goto B46bcf0;
case 0x46bcf3:c.instructions+=3;goto B46bcf3;
case 0x46bcf8:c.instructions+=2;goto B46bcf8;
case 0x46bcf9:c.instructions+=1;goto B46bcf9;
case 0x46bcfe:goto L46bcfe;
case 0x46bd01:c.instructions+=1;goto B46bd01;
case 0x46bd03:goto L46bd03;
case 0x46bd07:goto L46bd07;
case 0x46bd0a:c.instructions+=2;goto B46bd0a;
case 0x46bd0c:c.instructions+=1;goto B46bd0c;
case 0x46bd0e:goto L46bd0e;
case 0x46bd11:c.instructions+=2;goto B46bd11;
case 0x46bd13:c.instructions+=1;goto B46bd13;
case 0x46bd15:goto L46bd15;
case 0x46bd19:c.instructions+=4;goto B46bd19;
case 0x46bd1d:c.instructions+=3;goto B46bd1d;
case 0x46bd20:c.instructions+=2;goto B46bd20;
case 0x46bd27:c.instructions+=1;goto B46bd27;
case 0x46bd2e:goto L46bd2e;
case 0x46bd2f:c.instructions+=5;goto B46bd2f;
case 0x46bd30:c.instructions+=4;goto B46bd30;
case 0x46bd31:c.instructions+=3;goto B46bd31;
case 0x46bd32:c.instructions+=2;goto B46bd32;
case 0x46bd35:c.instructions+=1;goto B46bd35;
case 0x46be50:goto L46be50;
case 0x46be54:c.instructions+=6;goto B46be54;
case 0x46be55:c.instructions+=5;goto B46be55;
case 0x46be5c:c.instructions+=4;goto B46be5c;
case 0x46be5e:c.instructions+=3;goto B46be5e;
case 0x46be5f:c.instructions+=2;goto B46be5f;
case 0x46be65:c.instructions+=1;goto B46be65;
case 0x46be6a:goto L46be6a;
case 0x46be6d:c.instructions+=2;goto B46be6d;
case 0x46be6f:c.instructions+=1;goto B46be6f;
case 0x46be71:goto L46be71;
case 0x46be75:c.instructions+=5;goto B46be75;
case 0x46be78:c.instructions+=4;goto B46be78;
case 0x46be7b:c.instructions+=3;goto B46be7b;
case 0x46be7c:c.instructions+=2;goto B46be7c;
case 0x46be7d:c.instructions+=1;goto B46be7d;
case 0x46be82:goto L46be82;
case 0x46be85:goto L46be85;
case 0x46be86:c.instructions+=1;goto B46be86;
case 0x46be90:goto L46be90;
case 0x46be96:c.instructions+=9;goto B46be96;
case 0x46be9d:c.instructions+=8;goto B46be9d;
case 0x46be9e:c.instructions+=7;goto B46be9e;
case 0x46be9f:c.instructions+=6;goto B46be9f;
case 0x46bea0:c.instructions+=5;goto B46bea0;
case 0x46bea7:c.instructions+=4;goto B46bea7;
case 0x46bea9:c.instructions+=3;goto B46bea9;
case 0x46beaa:c.instructions+=2;goto B46beaa;
case 0x46beb0:c.instructions+=1;goto B46beb0;
case 0x46beb5:goto L46beb5;
case 0x46bebc:c.instructions+=10;goto B46bebc;
case 0x46bec3:c.instructions+=9;goto B46bec3;
case 0x46bec9:c.instructions+=8;goto B46bec9;
case 0x46becf:c.instructions+=7;goto B46becf;
case 0x46bed2:c.instructions+=6;goto B46bed2;
case 0x46bed4:c.instructions+=5;goto B46bed4;
case 0x46bed9:c.instructions+=4;goto B46bed9;
case 0x46bedd:c.instructions+=3;goto B46bedd;
case 0x46bee5:c.instructions+=2;goto B46bee5;
case 0x46bee8:c.instructions+=1;goto B46bee8;
case 0x46beea:goto L46beea;
case 0x46beeb:c.instructions+=5;goto B46beeb;
case 0x46beec:c.instructions+=4;goto B46beec;
case 0x46bef1:c.instructions+=3;goto B46bef1;
case 0x46bef2:c.instructions+=2;goto B46bef2;
case 0x46bef8:c.instructions+=1;goto B46bef8;
case 0x46bef9:goto L46bef9;
case 0x46befa:c.instructions+=2;goto B46befa;
case 0x46befd:c.instructions+=1;goto B46befd;
case 0x46bf02:goto L46bf02;
case 0x46bf05:c.instructions+=2;goto B46bf05;
case 0x46bf07:c.instructions+=1;goto B46bf07;
case 0x46bf0d:goto L46bf0d;
case 0x46bf10:c.instructions+=2;goto B46bf10;
case 0x46bf12:c.instructions+=1;goto B46bf12;
case 0x46bf18:goto L46bf18;
case 0x46bf1b:c.instructions+=3;goto B46bf1b;
case 0x46bf1e:c.instructions+=2;goto B46bf1e;
case 0x46bf20:c.instructions+=1;goto B46bf20;
case 0x46bf26:goto L46bf26;
case 0x46bf2a:c.instructions+=9;goto B46bf2a;
case 0x46bf2b:c.instructions+=8;goto B46bf2b;
case 0x46bf2f:c.instructions+=7;goto B46bf2f;
case 0x46bf30:c.instructions+=6;goto B46bf30;
case 0x46bf34:c.instructions+=5;goto B46bf34;
case 0x46bf35:c.instructions+=4;goto B46bf35;
case 0x46bf36:c.instructions+=3;goto B46bf36;
case 0x46bf38:c.instructions+=2;goto B46bf38;
case 0x46bf39:c.instructions+=1;goto B46bf39;
case 0x46bf3e:goto L46bf3e;
case 0x46bf41:c.instructions+=3;goto B46bf41;
case 0x46bf43:c.instructions+=2;goto B46bf43;
case 0x46bf47:c.instructions+=1;goto B46bf47;
case 0x46bf49:goto L46bf49;
case 0x46bf4c:c.instructions+=3;goto B46bf4c;
case 0x46bf4f:c.instructions+=2;goto B46bf4f;
case 0x46bf50:c.instructions+=1;goto B46bf50;
case 0x46bf55:goto L46bf55;
case 0x46bf58:c.instructions+=3;goto B46bf58;
case 0x46bf5a:c.instructions+=2;goto B46bf5a;
case 0x46bf5c:c.instructions+=1;goto B46bf5c;
case 0x46bf5e:goto L46bf5e;
case 0x46bf64:c.instructions+=3;goto B46bf64;
case 0x46bf67:c.instructions+=2;goto B46bf67;
case 0x46bf6e:c.instructions+=1;goto B46bf6e;
case 0x46bf73:goto L46bf73;
case 0x46bf77:c.instructions+=6;goto B46bf77;
case 0x46bf7b:c.instructions+=5;goto B46bf7b;
case 0x46bf7e:c.instructions+=4;goto B46bf7e;
case 0x46bf80:c.instructions+=3;goto B46bf80;
case 0x46bf82:c.instructions+=2;goto B46bf82;
case 0x46bf84:c.instructions+=1;goto B46bf84;
case 0x46bf86:goto L46bf86;
case 0x46bf8c:goto L46bf8c;
case 0x46bf91:c.instructions+=4;goto B46bf91;
case 0x46bf95:c.instructions+=3;goto B46bf95;
case 0x46bf99:c.instructions+=2;goto B46bf99;
case 0x46bf9f:c.instructions+=1;goto B46bf9f;
case 0x46bfa4:goto L46bfa4;
case 0x46bfa6:c.instructions+=3;goto B46bfa6;
case 0x46bfa8:c.instructions+=2;goto B46bfa8;
case 0x46bfaf:c.instructions+=1;goto B46bfaf;
case 0x46bfb1:goto L46bfb1;
case 0x46bfb3:c.instructions+=8;goto B46bfb3;
case 0x46bfb6:c.instructions+=7;goto B46bfb6;
case 0x46bfb9:c.instructions+=6;goto B46bfb9;
case 0x46bfbc:c.instructions+=5;goto B46bfbc;
case 0x46bfbe:c.instructions+=4;goto B46bfbe;
case 0x46bfc1:c.instructions+=3;goto B46bfc1;
case 0x46bfc4:c.instructions+=2;goto B46bfc4;
case 0x46bfc5:c.instructions+=1;goto B46bfc5;
case 0x46bfca:goto L46bfca;
case 0x46bfcd:c.instructions+=5;goto B46bfcd;
case 0x46bfd0:c.instructions+=4;goto B46bfd0;
case 0x46bfd3:c.instructions+=3;goto B46bfd3;
case 0x46bfd6:c.instructions+=2;goto B46bfd6;
case 0x46bfd9:c.instructions+=1;goto B46bfd9;
case 0x46bfde:goto L46bfde;
case 0x46bfe3:goto L46bfe3;
case 0x46bfe6:c.instructions+=4;goto B46bfe6;
case 0x46bfea:c.instructions+=3;goto B46bfea;
case 0x46bfeb:c.instructions+=2;goto B46bfeb;
case 0x46bfec:c.instructions+=1;goto B46bfec;
case 0x46bff1:goto L46bff1;
case 0x46bff4:c.instructions+=2;goto B46bff4;
case 0x46bff6:c.instructions+=1;goto B46bff6;
case 0x46bffb:goto L46bffb;
case 0x46bfff:c.instructions+=1;goto B46bfff;
default:missing_instruction(c.pc);}
B46b000:L46b000:{c.instructions+=10;NFSU2_TR(0x46b000);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B46b004:{NFSU2_TR(0x46b004);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b008:{NFSU2_TR(0x46b008);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46b00c:{NFSU2_TR(0x46b00c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46b00e:{NFSU2_TR(0x46b00e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46b010:{NFSU2_TR(0x46b010);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46b014:{NFSU2_TR(0x46b014);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46b017:{NFSU2_TR(0x46b017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b018:{NFSU2_TR(0x46b018);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46b01a:{NFSU2_TR(0x46b01a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b01d:L46b01d:{c.instructions+=19;NFSU2_TR(0x46b01d);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b021:{NFSU2_TR(0x46b021);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b025:{NFSU2_TR(0x46b025);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b02b:{NFSU2_TR(0x46b02b);
__asm__ volatile(".byte 0xde,0xf2":::"memory");
}
B46b02d:{NFSU2_TR(0x46b02d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46b02f:{NFSU2_TR(0x46b02f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46b031:{NFSU2_TR(0x46b031);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46b037:{NFSU2_TR(0x46b037);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B46b039:{NFSU2_TR(0x46b039);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B46b03b:{NFSU2_TR(0x46b03b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46b03d:{NFSU2_TR(0x46b03d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B46b043:{NFSU2_TR(0x46b043);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b047:{NFSU2_TR(0x46b047);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46b04b:{NFSU2_TR(0x46b04b);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B46b04d:{NFSU2_TR(0x46b04d);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46b051:{NFSU2_TR(0x46b051);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46b054:{NFSU2_TR(0x46b054);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b055:{NFSU2_TR(0x46b055);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46b057:{NFSU2_TR(0x46b057);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b05a:L46b05a:{c.instructions+=6;NFSU2_TR(0x46b05a);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b05e:{NFSU2_TR(0x46b05e);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46b062:{NFSU2_TR(0x46b062);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b066:{NFSU2_TR(0x46b066);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B46b06a:{NFSU2_TR(0x46b06a);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46b070:{NFSU2_TR(0x46b070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b075ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46b075:L46b075:{c.instructions+=2;NFSU2_TR(0x46b075);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b077:{NFSU2_TR(0x46b077);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46b07d;}}
}
B46b079:L46b079:{c.instructions+=2;NFSU2_TR(0x46b079);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46b07b:{NFSU2_TR(0x46b07b);
{goto L46b089;}
}
B46b07d:L46b07d:{c.instructions+=2;NFSU2_TR(0x46b07d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b082:{NFSU2_TR(0x46b082);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46b089;}}
}
B46b084:L46b084:{c.instructions+=1;NFSU2_TR(0x46b084);
w4(R+0,u32(0x7fffull));
}
B46b089:L46b089:{c.instructions+=6;NFSU2_TR(0x46b089);
w4(R+8,u32(0x7fffull));
}
B46b08e:{NFSU2_TR(0x46b08e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b090:{NFSU2_TR(0x46b090);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B46b092:{NFSU2_TR(0x46b092);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b093:{NFSU2_TR(0x46b093);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b095:{NFSU2_TR(0x46b095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b09aull));
TAIL_STATIC(0x468160u,468);
}
B46b09a:L46b09a:{c.instructions+=11;NFSU2_TR(0x46b09a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b09e:{NFSU2_TR(0x46b09e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46b0a2:{NFSU2_TR(0x46b0a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b0a5:{NFSU2_TR(0x46b0a5);
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
B46b0a8:{NFSU2_TR(0x46b0a8);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46b0ae:{NFSU2_TR(0x46b0ae);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46b0b0:{NFSU2_TR(0x46b0b0);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46b0b4:{NFSU2_TR(0x46b0b4);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46b0b7:{NFSU2_TR(0x46b0b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b0b8:{NFSU2_TR(0x46b0b8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46b0ba:{NFSU2_TR(0x46b0ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b0bd:L46b0bd:{c.instructions+=9;NFSU2_TR(0x46b0bd);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b0c1:{NFSU2_TR(0x46b0c1);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46b0c5:{NFSU2_TR(0x46b0c5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b0c9:{NFSU2_TR(0x46b0c9);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B46b0cd:{NFSU2_TR(0x46b0cd);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B46b0cf:{NFSU2_TR(0x46b0cf);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46b0d3:{NFSU2_TR(0x46b0d3);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46b0d6:{NFSU2_TR(0x46b0d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b0d7:{NFSU2_TR(0x46b0d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b100:L46b100:{c.instructions+=5;NFSU2_TR(0x46b100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b101:{NFSU2_TR(0x46b101);
__builtin_memmove((R+24),(R+4),4);
}
B46b103:{NFSU2_TR(0x46b103);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46b106:{NFSU2_TR(0x46b106);
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
B46b108:{NFSU2_TR(0x46b108);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b215;}}
}
B46b10e:L46b10e:{c.instructions+=10;NFSU2_TR(0x46b10e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b112:{NFSU2_TR(0x46b112);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46b114:{NFSU2_TR(0x46b114);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46b118:{NFSU2_TR(0x46b118);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b11c:{NFSU2_TR(0x46b11c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b120:{NFSU2_TR(0x46b120);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46b123:{NFSU2_TR(0x46b123);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B46b125:{NFSU2_TR(0x46b125);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46b127:{NFSU2_TR(0x46b127);
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
B46b12a:{NFSU2_TR(0x46b12a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b13a;}}
}
B46b12c:L46b12c:{c.instructions+=5;NFSU2_TR(0x46b12c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46b12f:{NFSU2_TR(0x46b12f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b132:{NFSU2_TR(0x46b132);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46b136:{NFSU2_TR(0x46b136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b137:{NFSU2_TR(0x46b137);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b13a:L46b13a:{c.instructions+=4;NFSU2_TR(0x46b13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b13d:{NFSU2_TR(0x46b13d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B46b13e:{NFSU2_TR(0x46b13e);
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
B46b141:{NFSU2_TR(0x46b141);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L46b200;}}
}
B46b147:L46b147:{c.instructions+=1;NFSU2_TR(0x46b147);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x46b21cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46b14e:L46b14e:{c.instructions+=11;NFSU2_TR(0x46b14e);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b151:{NFSU2_TR(0x46b151);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B46b155:{NFSU2_TR(0x46b155);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b158:{NFSU2_TR(0x46b158);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46b15b:{NFSU2_TR(0x46b15b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46b15d:{NFSU2_TR(0x46b15d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46b15f:{NFSU2_TR(0x46b15f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46b162:{NFSU2_TR(0x46b162);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46b165:{NFSU2_TR(0x46b165);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b166:{NFSU2_TR(0x46b166);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46b168:{NFSU2_TR(0x46b168);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b16b:L46b16b:{c.instructions+=19;NFSU2_TR(0x46b16b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b16e:{NFSU2_TR(0x46b16e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b172:{NFSU2_TR(0x46b172);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b178:{NFSU2_TR(0x46b178);
__asm__ volatile(".byte 0xde,0xf2":::"memory");
}
B46b17a:{NFSU2_TR(0x46b17a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46b17c:{NFSU2_TR(0x46b17c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46b17e:{NFSU2_TR(0x46b17e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46b184:{NFSU2_TR(0x46b184);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B46b186:{NFSU2_TR(0x46b186);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B46b188:{NFSU2_TR(0x46b188);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46b18a:{NFSU2_TR(0x46b18a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B46b190:{NFSU2_TR(0x46b190);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b193:{NFSU2_TR(0x46b193);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46b196:{NFSU2_TR(0x46b196);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B46b198:{NFSU2_TR(0x46b198);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46b19b:{NFSU2_TR(0x46b19b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46b19e:{NFSU2_TR(0x46b19e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b19f:{NFSU2_TR(0x46b19f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46b1a1:{NFSU2_TR(0x46b1a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b1a4:L46b1a4:{c.instructions+=6;NFSU2_TR(0x46b1a4);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b1a7:{NFSU2_TR(0x46b1a7);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46b1aa:{NFSU2_TR(0x46b1aa);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b1ae:{NFSU2_TR(0x46b1ae);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B46b1b1:{NFSU2_TR(0x46b1b1);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46b1b7:{NFSU2_TR(0x46b1b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b1bcull));
TAIL_STATIC(0x75bed4u,75b);
}
B46b1bc:L46b1bc:{c.instructions+=2;NFSU2_TR(0x46b1bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b1be:{NFSU2_TR(0x46b1be);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46b1c4;}}
}
B46b1c0:L46b1c0:{c.instructions+=2;NFSU2_TR(0x46b1c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46b1c2:{NFSU2_TR(0x46b1c2);
{goto L46b1d0;}
}
B46b1c4:L46b1c4:{c.instructions+=2;NFSU2_TR(0x46b1c4);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b1c9:{NFSU2_TR(0x46b1c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46b1d0;}}
}
B46b1cb:L46b1cb:{c.instructions+=1;NFSU2_TR(0x46b1cb);
w4(R+0,u32(0x7fffull));
}
B46b1d0:L46b1d0:{c.instructions+=6;NFSU2_TR(0x46b1d0);
w4(R+8,u32(0x7fffull));
}
B46b1d5:{NFSU2_TR(0x46b1d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b1d7:{NFSU2_TR(0x46b1d7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B46b1d9:{NFSU2_TR(0x46b1d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b1da:{NFSU2_TR(0x46b1da);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b1dc:{NFSU2_TR(0x46b1dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b1e1ull));
TAIL_STATIC(0x468160u,468);
}
B46b1e1:L46b1e1:{c.instructions+=10;NFSU2_TR(0x46b1e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b1e5:{NFSU2_TR(0x46b1e5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46b1e9:{NFSU2_TR(0x46b1e9);
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
B46b1ec:{NFSU2_TR(0x46b1ec);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46b1f2:{NFSU2_TR(0x46b1f2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46b1f4:{NFSU2_TR(0x46b1f4);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46b1f7:{NFSU2_TR(0x46b1f7);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46b1fa:{NFSU2_TR(0x46b1fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b1fb:{NFSU2_TR(0x46b1fb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46b1fd:{NFSU2_TR(0x46b1fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b200:L46b200:{c.instructions+=7;NFSU2_TR(0x46b200);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b203:{NFSU2_TR(0x46b203);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46b206:{NFSU2_TR(0x46b206);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b20a:{NFSU2_TR(0x46b20a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B46b20d:{NFSU2_TR(0x46b20d);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B46b20f:{NFSU2_TR(0x46b20f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46b212:{NFSU2_TR(0x46b212);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46b215:L46b215:{c.instructions+=2;NFSU2_TR(0x46b215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b216:{NFSU2_TR(0x46b216);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b240:L46b240:{c.instructions+=15;NFSU2_TR(0x46b240);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b244:{NFSU2_TR(0x46b244);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b248:{NFSU2_TR(0x46b248);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46b24c:{NFSU2_TR(0x46b24c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b250:{NFSU2_TR(0x46b250);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B46b252:{NFSU2_TR(0x46b252);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b256:{NFSU2_TR(0x46b256);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46b258:{NFSU2_TR(0x46b258);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46b25e:{NFSU2_TR(0x46b25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b261:{NFSU2_TR(0x46b261);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b264:{NFSU2_TR(0x46b264);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b268:{NFSU2_TR(0x46b268);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46b26a:{NFSU2_TR(0x46b26a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b26d:{NFSU2_TR(0x46b26d);
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
B46b270:{NFSU2_TR(0x46b270);
if(r1(R+514)){{goto L46b27f;}}
}
B46b272:L46b272:{c.instructions+=3;NFSU2_TR(0x46b272);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46b276:{NFSU2_TR(0x46b276);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46b27c:{NFSU2_TR(0x46b27c);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46b27f:L46b27f:{c.instructions+=5;NFSU2_TR(0x46b27f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b283:{NFSU2_TR(0x46b283);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b286:{NFSU2_TR(0x46b286);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46b28d:{NFSU2_TR(0x46b28d);
__builtin_memmove((R+0),(R+4),4);
}
B46b28f:{NFSU2_TR(0x46b28f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b2a0:L46b2a0:{c.instructions+=3;NFSU2_TR(0x46b2a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b2a1:{NFSU2_TR(0x46b2a1);
__builtin_memmove((R+24),(R+4),4);
}
B46b2a3:{NFSU2_TR(0x46b2a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b2a8ull));
TAIL_STATIC(0x459b20u,459);
}
B46b2a8:L46b2a8:{c.instructions+=2;NFSU2_TR(0x46b2a8);
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
B46b2ad:{NFSU2_TR(0x46b2ad);
if(r1(R+518)){{goto L46b2b8;}}
}
B46b2af:L46b2af:{c.instructions+=2;NFSU2_TR(0x46b2af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b2b0:{NFSU2_TR(0x46b2b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b2b5ull));
TAIL_STATIC(0x440540u,440);
}
B46b2b5:L46b2b5:{c.instructions+=1;NFSU2_TR(0x46b2b5);
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
B46b2b8:L46b2b8:{c.instructions+=3;NFSU2_TR(0x46b2b8);
__builtin_memmove((R+0),(R+24),4);
}
B46b2ba:{NFSU2_TR(0x46b2ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b2bb:{NFSU2_TR(0x46b2bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b2c0:L46b2c0:{c.instructions+=6;NFSU2_TR(0x46b2c0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B46b2c5:{NFSU2_TR(0x46b2c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b2c6:{NFSU2_TR(0x46b2c6);
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
B46b2c8:{NFSU2_TR(0x46b2c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b2cc:{NFSU2_TR(0x46b2cc);
__builtin_memmove((R+24),(R+4),4);
}
B46b2ce:{NFSU2_TR(0x46b2ce);
if(r1(R+518)){{goto L46b301;}}
}
B46b2d0:L46b2d0:{c.instructions+=4;NFSU2_TR(0x46b2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b2d3:{NFSU2_TR(0x46b2d3);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B46b2d9:{NFSU2_TR(0x46b2d9);
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
B46b2db:{NFSU2_TR(0x46b2db);
if(r1(R+518)){{goto L46b2fe;}}
}
B46b2dd:L46b2dd:{c.instructions+=2;NFSU2_TR(0x46b2dd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46b2e0:{NFSU2_TR(0x46b2e0);
if(r1(R+518)){{goto L46b2f4;}}
}
B46b2e2:L46b2e2:{c.instructions+=3;NFSU2_TR(0x46b2e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b2e4:{NFSU2_TR(0x46b2e4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B46b2e5:{NFSU2_TR(0x46b2e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b2eaull));
TAIL_STATIC(0x721681u,721);
}
B46b2ea:L46b2ea:{c.instructions+=4;NFSU2_TR(0x46b2ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b2ed:{NFSU2_TR(0x46b2ed);
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
B46b2f0:{NFSU2_TR(0x46b2f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b2f1:{NFSU2_TR(0x46b2f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b2f4:L46b2f4:{c.instructions+=2;NFSU2_TR(0x46b2f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b2f6:{NFSU2_TR(0x46b2f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b2fbull));
TAIL_STATIC(0x721681u,721);
}
B46b2fb:L46b2fb:{c.instructions+=1;NFSU2_TR(0x46b2fb);
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
B46b2fe:L46b2fe:{c.instructions+=1;NFSU2_TR(0x46b2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b301:L46b301:{c.instructions+=2;NFSU2_TR(0x46b301);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b302:{NFSU2_TR(0x46b302);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b310:L46b310:{c.instructions+=3;NFSU2_TR(0x46b310);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b311:{NFSU2_TR(0x46b311);
__builtin_memmove((R+24),(R+4),4);
}
B46b313:{NFSU2_TR(0x46b313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b318ull));
TAIL_STATIC(0x459cb0u,459);
}
B46b318:L46b318:{c.instructions+=2;NFSU2_TR(0x46b318);
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
B46b31d:{NFSU2_TR(0x46b31d);
if(r1(R+518)){{goto L46b328;}}
}
B46b31f:L46b31f:{c.instructions+=2;NFSU2_TR(0x46b31f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b320:{NFSU2_TR(0x46b320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b325ull));
TAIL_STATIC(0x440540u,440);
}
B46b325:L46b325:{c.instructions+=1;NFSU2_TR(0x46b325);
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
B46b328:L46b328:{c.instructions+=3;NFSU2_TR(0x46b328);
__builtin_memmove((R+0),(R+24),4);
}
B46b32a:{NFSU2_TR(0x46b32a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b32b:{NFSU2_TR(0x46b32b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b330:L46b330:{c.instructions+=8;NFSU2_TR(0x46b330);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b331:{NFSU2_TR(0x46b331);
__builtin_memmove((R+12),(R+4),4);
}
B46b333:{NFSU2_TR(0x46b333);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B46b339:{NFSU2_TR(0x46b339);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b33f:{NFSU2_TR(0x46b33f);
w4(R+0,u32(0x1ull));
}
B46b344:{NFSU2_TR(0x46b344);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b346:{NFSU2_TR(0x46b346);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b347:{NFSU2_TR(0x46b347);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b487;}}
}
B46b34d:L46b34d:{c.instructions+=3;NFSU2_TR(0x46b34d);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b353:{NFSU2_TR(0x46b353);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
w4(U+4,u32(0x1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B46b35d:{NFSU2_TR(0x46b35d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b383;}}
}
B46b35f:L46b35f:{c.instructions+=8;NFSU2_TR(0x46b35f);
__builtin_memmove((R+0),gp(0x863444),4);
}
B46b364:{NFSU2_TR(0x46b364);
__builtin_memmove((R+8),gp(0x86344c),4);
}
B46b36a:{NFSU2_TR(0x46b36a);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B46b36c:{NFSU2_TR(0x46b36c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B46b36e:{NFSU2_TR(0x46b36e);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B46b370:{NFSU2_TR(0x46b370);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b372:{NFSU2_TR(0x46b372);
__builtin_memmove(gp(0x82b9fc),(R+0),4);
}
B46b377:{NFSU2_TR(0x46b377);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b388;}}
}
B46b379:L46b379:{c.instructions+=1;NFSU2_TR(0x46b379);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
w4(U+4,u32(0x1dull));
s4(u32(r4(U+0)),r4(U+4));
}
B46b383:L46b383:{c.instructions+=4;NFSU2_TR(0x46b383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b384:{NFSU2_TR(0x46b384);
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
B46b386:{NFSU2_TR(0x46b386);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46b387:{NFSU2_TR(0x46b387);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b388:L46b388:{c.instructions+=7;NFSU2_TR(0x46b388);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b389:{NFSU2_TR(0x46b389);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46b38c:{NFSU2_TR(0x46b38c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46b38e:{NFSU2_TR(0x46b38e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B46b390:{NFSU2_TR(0x46b390);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B46b393:{NFSU2_TR(0x46b393);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46b395:{NFSU2_TR(0x46b395);
if(r1(R+518)){{goto L46b3b4;}}
}
B46b397:L46b397:{c.instructions+=2;NFSU2_TR(0x46b397);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46b399:{NFSU2_TR(0x46b399);
if(r1(R+518)){{goto L46b3b4;}}
}
B46b39b:L46b39b:{c.instructions+=2;NFSU2_TR(0x46b39b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b39c:{NFSU2_TR(0x46b39c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b3a1ull));
TAIL_STATIC(0x505300u,505);
}
B46b3a1:L46b3a1:{c.instructions+=8;NFSU2_TR(0x46b3a1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B46b3a4:{NFSU2_TR(0x46b3a4);
w4(R+8,u32(r1(R+0)));
}
B46b3a7:{NFSU2_TR(0x46b3a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46b3aa:{NFSU2_TR(0x46b3aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46b3ad:{NFSU2_TR(0x46b3ad);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B46b3af:{NFSU2_TR(0x46b3af);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b3b0:{NFSU2_TR(0x46b3b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46b3b2:{NFSU2_TR(0x46b3b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b397u);}goto L46b397;}}
}
B46b3b4:L46b3b4:{c.instructions+=3;NFSU2_TR(0x46b3b4);
u8 U[8];
__builtin_memmove((U+0),gp(0x82b9e4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b3ba:{NFSU2_TR(0x46b3ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46b3bb:{NFSU2_TR(0x46b3bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b3cc;}}
}
B46b3bd:L46b3bd:{c.instructions+=5;NFSU2_TR(0x46b3bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b3be:{NFSU2_TR(0x46b3be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46b3c8:{NFSU2_TR(0x46b3c8);
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
B46b3ca:{NFSU2_TR(0x46b3ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46b3cb:{NFSU2_TR(0x46b3cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b3cc:L46b3cc:{c.instructions+=2;NFSU2_TR(0x46b3cc);
u8 U[8];
__builtin_memmove((U+0),gp(0x82b9e8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b3d2:{NFSU2_TR(0x46b3d2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b379u);}goto L46b379;}}
}
B46b3d4:L46b3d4:{c.instructions+=2;NFSU2_TR(0x46b3d4);
u8 U[8];
__builtin_memmove((U+0),gp(0x82b9ec),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b3da:{NFSU2_TR(0x46b3da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b407;}}
}
B46b3dc:L46b3dc:{c.instructions+=4;NFSU2_TR(0x46b3dc);
__builtin_memmove((R+0),gp(0x82b9fc),4);
}
B46b3e1:{NFSU2_TR(0x46b3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46b3e4:{NFSU2_TR(0x46b3e4);
u8 U[4];
w4(U+0,u32(0x78a810ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b3e9:{NFSU2_TR(0x46b3e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b3eeull));
TAIL_STATIC(0x43db50u,43d);
}
B46b3ee:L46b3ee:{c.instructions+=10;NFSU2_TR(0x46b3ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46b3f1:{NFSU2_TR(0x46b3f1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46b3f3:{NFSU2_TR(0x46b3f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b3f5:{NFSU2_TR(0x46b3f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B46b3f8:{NFSU2_TR(0x46b3f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b3f9:{NFSU2_TR(0x46b3f9);
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
B46b3fb:{NFSU2_TR(0x46b3fb);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B46b3ff:{NFSU2_TR(0x46b3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b405:{NFSU2_TR(0x46b405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46b406:{NFSU2_TR(0x46b406);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b407:L46b407:{c.instructions+=2;NFSU2_TR(0x46b407);
u8 U[8];
__builtin_memmove((U+0),gp(0x82b9f0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b40d:{NFSU2_TR(0x46b40d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b455;}}
}
B46b40f:L46b40f:{c.instructions+=4;NFSU2_TR(0x46b40f);
__builtin_memmove((R+8),gp(0x82b9fc),4);
}
B46b415:{NFSU2_TR(0x46b415);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46b418:{NFSU2_TR(0x46b418);
u8 U[4];
w4(U+0,u32(0x78a804ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b41d:{NFSU2_TR(0x46b41d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b422ull));
TAIL_STATIC(0x43db50u,43d);
}
B46b422:L46b422:{c.instructions+=3;NFSU2_TR(0x46b422);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46b425:{NFSU2_TR(0x46b425);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b427:{NFSU2_TR(0x46b427);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b3bdu);}goto L46b3bd;}}
}
B46b429:L46b429:{c.instructions+=4;NFSU2_TR(0x46b429);
__builtin_memmove((R+0),gp(0x82b9fc),4);
}
B46b42e:{NFSU2_TR(0x46b42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46b431:{NFSU2_TR(0x46b431);
u8 U[4];
w4(U+0,u32(0x78a7f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b436:{NFSU2_TR(0x46b436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b43bull));
TAIL_STATIC(0x43db50u,43d);
}
B46b43b:L46b43b:{c.instructions+=3;NFSU2_TR(0x46b43b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46b43e:{NFSU2_TR(0x46b43e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b440:{NFSU2_TR(0x46b440);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b3bdu);}goto L46b3bd;}}
}
B46b446:L46b446:{c.instructions+=5;NFSU2_TR(0x46b446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b447:{NFSU2_TR(0x46b447);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
w4(U+4,u32(0x19ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46b451:{NFSU2_TR(0x46b451);
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
B46b453:{NFSU2_TR(0x46b453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46b454:{NFSU2_TR(0x46b454);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b455:L46b455:{c.instructions+=2;NFSU2_TR(0x46b455);
u8 U[8];
__builtin_memmove((U+0),gp(0x82b9f4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b45b:{NFSU2_TR(0x46b45b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b46c;}}
}
B46b45d:L46b45d:{c.instructions+=5;NFSU2_TR(0x46b45d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b45e:{NFSU2_TR(0x46b45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
w4(U+4,u32(0x1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B46b468:{NFSU2_TR(0x46b468);
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
B46b46a:{NFSU2_TR(0x46b46a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46b46b:{NFSU2_TR(0x46b46b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b46c:L46b46c:{c.instructions+=2;NFSU2_TR(0x46b46c);
u8 U[8];
__builtin_memmove((U+0),gp(0x82b9f8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b472:{NFSU2_TR(0x46b472);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b383u);}goto L46b383;}}
}
B46b478:L46b478:{c.instructions+=5;NFSU2_TR(0x46b478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b479:{NFSU2_TR(0x46b479);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46b483:{NFSU2_TR(0x46b483);
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
B46b485:{NFSU2_TR(0x46b485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46b486:{NFSU2_TR(0x46b486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b487:L46b487:{c.instructions+=6;NFSU2_TR(0x46b487);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46b48d:{NFSU2_TR(0x46b48d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b493:{NFSU2_TR(0x46b493);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B46b499:{NFSU2_TR(0x46b499);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b49f:{NFSU2_TR(0x46b49f);
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
B46b4a1:{NFSU2_TR(0x46b4a1);
if(r1(R+518)){{goto L46b525;}}
}
B46b4a7:L46b4a7:{c.instructions+=3;NFSU2_TR(0x46b4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b4aa:{NFSU2_TR(0x46b4aa);
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
B46b4ac:{NFSU2_TR(0x46b4ac);
if(r1(R+518)){{goto L46b525;}}
}
B46b4ae:L46b4ae:{c.instructions+=1;NFSU2_TR(0x46b4ae);
__builtin_memmove((R+28),(R+28),4);
}
B46b4b0:L46b4b0:{c.instructions+=3;NFSU2_TR(0x46b4b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46b4b3:{NFSU2_TR(0x46b4b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b4b5:{NFSU2_TR(0x46b4b5);
if(r1(R+518)){{goto L46b4c3;}}
}
B46b4b7:L46b4b7:{c.instructions+=3;NFSU2_TR(0x46b4b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b4ba:{NFSU2_TR(0x46b4ba);
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
B46b4bc:{NFSU2_TR(0x46b4bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b4b0u);}goto L46b4b0;}}
}
B46b4be:L46b4be:{c.instructions+=4;NFSU2_TR(0x46b4be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b4bf:{NFSU2_TR(0x46b4bf);
w1(R+0,u8(0x1ull));
}
B46b4c1:{NFSU2_TR(0x46b4c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46b4c2:{NFSU2_TR(0x46b4c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b4c3:L46b4c3:{c.instructions+=2;NFSU2_TR(0x46b4c3);
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
B46b4c5:{NFSU2_TR(0x46b4c5);
if(r1(R+518)){{goto L46b525;}}
}
B46b4c7:L46b4c7:{c.instructions+=3;NFSU2_TR(0x46b4c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46b4ca:{NFSU2_TR(0x46b4ca);
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
B46b4cc:{NFSU2_TR(0x46b4cc);
if(r1(R+518)){{goto L46b525;}}
}
B46b4ce:L46b4ce:{c.instructions+=3;NFSU2_TR(0x46b4ce);
__builtin_memmove((R+0),gp(0x82c71c),4);
}
B46b4d3:{NFSU2_TR(0x46b4d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b4d5:{NFSU2_TR(0x46b4d5);
if(r1(R+518)){{goto L46b4fb;}}
}
B46b4d7:L46b4d7:{c.instructions+=6;NFSU2_TR(0x46b4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b4da:{NFSU2_TR(0x46b4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46b4dd:{NFSU2_TR(0x46b4dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b4de:{NFSU2_TR(0x46b4de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b4df:{NFSU2_TR(0x46b4df);
w4(R+4,u32(0x82c710ull));
}
B46b4e4:{NFSU2_TR(0x46b4e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b4e9ull));
TAIL_STATIC(0x5fa540u,5fa);
}
B46b4e9:L46b4e9:{c.instructions+=3;NFSU2_TR(0x46b4e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b4eb:{NFSU2_TR(0x46b4eb);
w4(R+4,u32(0x82c710ull));
}
B46b4f0:{NFSU2_TR(0x46b4f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b4f5ull));
TAIL_STATIC(0x5f0b80u,5f0);
}
B46b4f5:L46b4f5:{c.instructions+=1;NFSU2_TR(0x46b4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b4fb:L46b4fb:{c.instructions+=3;NFSU2_TR(0x46b4fb);
__builtin_memmove((R+0),gp(0x82beac),4);
}
B46b500:{NFSU2_TR(0x46b500);
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
B46b502:{NFSU2_TR(0x46b502);
if(r1(R+518)){{goto L46b525;}}
}
B46b504:L46b504:{c.instructions+=6;NFSU2_TR(0x46b504);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b507:{NFSU2_TR(0x46b507);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b50a:{NFSU2_TR(0x46b50a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b50b:{NFSU2_TR(0x46b50b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b50c:{NFSU2_TR(0x46b50c);
w4(R+4,u32(0x82bea0ull));
}
B46b511:{NFSU2_TR(0x46b511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b516ull));
TAIL_STATIC(0x5fa540u,5fa);
}
B46b516:L46b516:{c.instructions+=3;NFSU2_TR(0x46b516);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b518:{NFSU2_TR(0x46b518);
w4(R+4,u32(0x82bea0ull));
}
B46b51d:{NFSU2_TR(0x46b51d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b522ull));
TAIL_STATIC(0x5f0b80u,5f0);
}
B46b522:L46b522:{c.instructions+=1;NFSU2_TR(0x46b522);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b525:L46b525:{c.instructions+=4;NFSU2_TR(0x46b525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b526:{NFSU2_TR(0x46b526);
w1(R+0,u8(0x1ull));
}
B46b528:{NFSU2_TR(0x46b528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46b529:{NFSU2_TR(0x46b529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b530:L46b530:{c.instructions+=7;NFSU2_TR(0x46b530);
__builtin_memmove((R+0),gp(0x7ecbec),4);
}
B46b535:{NFSU2_TR(0x46b535);
__builtin_memmove((R+4),gp(0x7ecbe8),4);
}
B46b53b:{NFSU2_TR(0x46b53b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b53c:{NFSU2_TR(0x46b53c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b53d:{NFSU2_TR(0x46b53d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b53e:{NFSU2_TR(0x46b53e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b53f:{NFSU2_TR(0x46b53f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b544ull));
TAIL_STATIC(0x73ae60u,73a);
}
B46b544:L46b544:{c.instructions+=6;NFSU2_TR(0x46b544);
__builtin_memmove((R+8),gp(0x7ecbf4),4);
}
B46b54a:{NFSU2_TR(0x46b54a);
__builtin_memmove((R+24),(R+0),4);
}
B46b54c:{NFSU2_TR(0x46b54c);
__builtin_memmove((R+0),gp(0x7ecd70),4);
}
B46b551:{NFSU2_TR(0x46b551);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b552:{NFSU2_TR(0x46b552);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b553:{NFSU2_TR(0x46b553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b558ull));
TAIL_STATIC(0x73aea0u,73a);
}
B46b558:L46b558:{c.instructions+=8;NFSU2_TR(0x46b558);
__builtin_memmove((R+4),gp(0x7ecd70),4);
}
B46b55e:{NFSU2_TR(0x46b55e);
__builtin_memmove((R+28),(R+0),4);
}
B46b560:{NFSU2_TR(0x46b560);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b561:{NFSU2_TR(0x46b561);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b562:{NFSU2_TR(0x46b562);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b563:{NFSU2_TR(0x46b563);
u8 U[4];
w4(U+0,u32(0x78a81cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b568:{NFSU2_TR(0x46b568);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b56a:{NFSU2_TR(0x46b56a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b56full));
TAIL_STATIC(0x4691c0u,469);
}
B46b56f:L46b56f:{c.instructions+=6;NFSU2_TR(0x46b56f);
__builtin_memmove((R+0),gp(0x7ecd70),4);
}
B46b574:{NFSU2_TR(0x46b574);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B46b576:{NFSU2_TR(0x46b576);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B46b579:{NFSU2_TR(0x46b579);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b57e:{NFSU2_TR(0x46b57e);
__builtin_memmove(gp(0x82ba08),(R+24),4);
}
B46b584:{NFSU2_TR(0x46b584);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b58e;}}
}
B46b586:L46b586:{c.instructions+=2;NFSU2_TR(0x46b586);
__builtin_memmove(gp(0x7ecbf0),(R+24),4);
}
B46b58c:{NFSU2_TR(0x46b58c);
{goto L46b594;}
}
B46b58e:L46b58e:{c.instructions+=1;NFSU2_TR(0x46b58e);
__builtin_memmove(gp(0x7ecc04),(R+24),4);
}
B46b594:L46b594:{c.instructions+=4;NFSU2_TR(0x46b594);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B46b59a:{NFSU2_TR(0x46b59a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b59b:{NFSU2_TR(0x46b59b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46b59d:{NFSU2_TR(0x46b59d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b5a2ull));
TAIL_STATIC(0x43e910u,43e);
}
B46b5a2:L46b5a2:{c.instructions+=4;NFSU2_TR(0x46b5a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b5a8:{NFSU2_TR(0x46b5a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46b5ab:{NFSU2_TR(0x46b5ab);
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
B46b5ad:{NFSU2_TR(0x46b5ad);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46b5cb;}}
}
B46b5af:L46b5af:{c.instructions+=6;NFSU2_TR(0x46b5af);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B46b5b5:{NFSU2_TR(0x46b5b5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B46b5b8:{NFSU2_TR(0x46b5b8);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B46b5be:{NFSU2_TR(0x46b5be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b5bf:{NFSU2_TR(0x46b5bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b5c0:{NFSU2_TR(0x46b5c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b5c5ull));
TAIL_STATIC(0x440820u,440);
}
B46b5c5:L46b5c5:{c.instructions+=4;NFSU2_TR(0x46b5c5);
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
B46b5c8:{NFSU2_TR(0x46b5c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46b5c9:{NFSU2_TR(0x46b5c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b5ca:{NFSU2_TR(0x46b5ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b5cb:L46b5cb:{c.instructions+=4;NFSU2_TR(0x46b5cb);
__builtin_memmove((R+0),(R+28),4);
}
B46b5cd:{NFSU2_TR(0x46b5cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46b5ce:{NFSU2_TR(0x46b5ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b5cf:{NFSU2_TR(0x46b5cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b5d0:L46b5d0:{c.instructions+=5;NFSU2_TR(0x46b5d0);
__builtin_memmove((R+0),gp(0x82b9b8),4);
}
B46b5d5:{NFSU2_TR(0x46b5d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b5d6:{NFSU2_TR(0x46b5d6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46b5d8:{NFSU2_TR(0x46b5d8);
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
B46b5da:{NFSU2_TR(0x46b5da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46b66b;}}
}
B46b5e0:L46b5e0:{c.instructions+=5;NFSU2_TR(0x46b5e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b5e1:{NFSU2_TR(0x46b5e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46b5e5:{NFSU2_TR(0x46b5e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b5e6:{NFSU2_TR(0x46b5e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46b5ea:{NFSU2_TR(0x46b5ea);
__builtin_memmove((R+12),(R+12),4);
}
B46b5f0:L46b5f0:{c.instructions+=3;NFSU2_TR(0x46b5f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b974ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B46b5f7:{NFSU2_TR(0x46b5f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b5f9:{NFSU2_TR(0x46b5f9);
if(r1(R+518)){{goto L46b65f;}}
}
B46b5fb:L46b5fb:{c.instructions+=4;NFSU2_TR(0x46b5fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b601:{NFSU2_TR(0x46b601);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff000000ull))));
}
B46b606:{NFSU2_TR(0x46b606);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b608:{NFSU2_TR(0x46b608);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b65f;}}
}
B46b60a:L46b60a:{c.instructions+=1;NFSU2_TR(0x46b60a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b60full));
TAIL_STATIC(0x43bdf0u,43b);
}
B46b60f:L46b60f:{c.instructions+=8;NFSU2_TR(0x46b60f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b974ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B46b616:{NFSU2_TR(0x46b616);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b61c:{NFSU2_TR(0x46b61c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b622:{NFSU2_TR(0x46b622);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b628:{NFSU2_TR(0x46b628);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b62a:{NFSU2_TR(0x46b62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b630:{NFSU2_TR(0x46b630);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b636:{NFSU2_TR(0x46b636);
if(r1(R+518)){{goto L46b64a;}}
}
B46b638:L46b638:{c.instructions+=4;NFSU2_TR(0x46b638);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b63b:{NFSU2_TR(0x46b63b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b641:{NFSU2_TR(0x46b641);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b644:{NFSU2_TR(0x46b644);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b64a:L46b64a:{c.instructions+=2;NFSU2_TR(0x46b64a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b64d:{NFSU2_TR(0x46b64d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b65f;}}
}
B46b64f:L46b64f:{c.instructions+=4;NFSU2_TR(0x46b64f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b650:{NFSU2_TR(0x46b650);
u8 U[4];
w4(U+0,u32(0x78a858ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b655:{NFSU2_TR(0x46b655);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b657:{NFSU2_TR(0x46b657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b65cull));
TAIL_STATIC(0x4691c0u,469);
}
B46b65c:L46b65c:{c.instructions+=1;NFSU2_TR(0x46b65c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46b65f:L46b65f:{c.instructions+=4;NFSU2_TR(0x46b65f);
__builtin_memmove((R+0),gp(0x82b9b8),4);
}
B46b664:{NFSU2_TR(0x46b664);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B46b665:{NFSU2_TR(0x46b665);
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
B46b667:{NFSU2_TR(0x46b667);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b5f0u);}goto L46b5f0;}}
}
B46b669:L46b669:{c.instructions+=2;NFSU2_TR(0x46b669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46b66a:{NFSU2_TR(0x46b66a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46b66b:L46b66b:{c.instructions+=2;NFSU2_TR(0x46b66b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b66c:{NFSU2_TR(0x46b66c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b670:L46b670:{c.instructions+=5;NFSU2_TR(0x46b670);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b671:{NFSU2_TR(0x46b671);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46b675:{NFSU2_TR(0x46b675);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b678:{NFSU2_TR(0x46b678);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b679:{NFSU2_TR(0x46b679);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b6a1;}}
}
B46b67b:L46b67b:{c.instructions+=3;NFSU2_TR(0x46b67b);
__builtin_memmove((R+0),gp(0x7ecd74),4);
}
B46b680:{NFSU2_TR(0x46b680);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46b683:{NFSU2_TR(0x46b683);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46b69a;}}
}
B46b685:L46b685:{c.instructions+=3;NFSU2_TR(0x46b685);
__builtin_memmove((R+4),gp(0x82b9bc),4);
}
B46b68b:{NFSU2_TR(0x46b68b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b68d:{NFSU2_TR(0x46b68d);
if(r1(R+518)){{goto L46b69a;}}
}
B46b68f:L46b68f:{c.instructions+=3;NFSU2_TR(0x46b68f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b96cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B46b696:{NFSU2_TR(0x46b696);
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
B46b698:{NFSU2_TR(0x46b698);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b69c;}}
}
B46b69a:L46b69a:{c.instructions+=1;NFSU2_TR(0x46b69a);
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
B46b69c:L46b69c:{c.instructions+=3;NFSU2_TR(0x46b69c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46b69d:{NFSU2_TR(0x46b69d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b69e:{NFSU2_TR(0x46b69e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b6a1:L46b6a1:{c.instructions+=4;NFSU2_TR(0x46b6a1);
__builtin_memmove((R+8),gp(0x82b9b8),4);
}
B46b6a7:{NFSU2_TR(0x46b6a7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46b6a9:{NFSU2_TR(0x46b6a9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b6ab:{NFSU2_TR(0x46b6ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b69au);}goto L46b69a;}}
}
B46b6ad:L46b6ad:{c.instructions+=1;NFSU2_TR(0x46b6ad);
__builtin_memmove((R+4),(R+4),4);
}
B46b6b0:L46b6b0:{c.instructions+=3;NFSU2_TR(0x46b6b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b974ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B46b6b7:{NFSU2_TR(0x46b6b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46b6ba:{NFSU2_TR(0x46b6ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b6c6;}}
}
B46b6bc:L46b6bc:{c.instructions+=3;NFSU2_TR(0x46b6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46b6c2:{NFSU2_TR(0x46b6c2);
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
B46b6c4:{NFSU2_TR(0x46b6c4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46b6d2;}}
}
B46b6c6:L46b6c6:{c.instructions+=3;NFSU2_TR(0x46b6c6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B46b6c7:{NFSU2_TR(0x46b6c7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46b6c9:{NFSU2_TR(0x46b6c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b6b0u);}goto L46b6b0;}}
}
B46b6cb:L46b6cb:{c.instructions+=4;NFSU2_TR(0x46b6cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46b6cc:{NFSU2_TR(0x46b6cc);
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
B46b6ce:{NFSU2_TR(0x46b6ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b6cf:{NFSU2_TR(0x46b6cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b6d2:L46b6d2:{c.instructions+=6;NFSU2_TR(0x46b6d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46b6d5:{NFSU2_TR(0x46b6d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46b6d6:{NFSU2_TR(0x46b6d6);
__builtin_memmove(gp(0x7ecd74),(R+0),4);
}
B46b6db:{NFSU2_TR(0x46b6db);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b974ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B46b6e2:{NFSU2_TR(0x46b6e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b6e3:{NFSU2_TR(0x46b6e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b6f0:L46b6f0:{c.instructions+=13;NFSU2_TR(0x46b6f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B46b6f3:{NFSU2_TR(0x46b6f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b6f4:{NFSU2_TR(0x46b6f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b6f5:{NFSU2_TR(0x46b6f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b6f6:{NFSU2_TR(0x46b6f6);
__builtin_memmove((R+24),(R+4),4);
}
B46b6f8:{NFSU2_TR(0x46b6f8);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B46b6fe:{NFSU2_TR(0x46b6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b704:{NFSU2_TR(0x46b704);
__builtin_memmove((R+4),gp(0x89e7b0),4);
}
B46b70a:{NFSU2_TR(0x46b70a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B46b70d:{NFSU2_TR(0x46b70d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b710:{NFSU2_TR(0x46b710);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b711:{NFSU2_TR(0x46b711);
__builtin_memmove((R+12),(R+0),4);
}
B46b713:{NFSU2_TR(0x46b713);
if(r1(R+518)){{goto L46b8de;}}
}
B46b719:L46b719:{c.instructions+=2;NFSU2_TR(0x46b719);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b71c:{NFSU2_TR(0x46b71c);
if(r1(R+518)){{goto L46b8de;}}
}
B46b722:L46b722:{c.instructions+=3;NFSU2_TR(0x46b722);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46b728:{NFSU2_TR(0x46b728);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b72a:{NFSU2_TR(0x46b72a);
if(r1(R+518)){{goto L46ba96;}}
}
B46b730:L46b730:{c.instructions+=3;NFSU2_TR(0x46b730);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b736:{NFSU2_TR(0x46b736);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b738:{NFSU2_TR(0x46b738);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b746;}}
}
B46b73a:L46b73a:{c.instructions+=2;NFSU2_TR(0x46b73a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b740:{NFSU2_TR(0x46b740);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b746:L46b746:{c.instructions+=4;NFSU2_TR(0x46b746);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b74c:{NFSU2_TR(0x46b74c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46b74e:{NFSU2_TR(0x46b74e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b750:{NFSU2_TR(0x46b750);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b7c1;}}
}
B46b752:L46b752:{c.instructions+=1;NFSU2_TR(0x46b752);
{goto L46b760;}
}
B46b760:L46b760:{c.instructions+=3;NFSU2_TR(0x46b760);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46b766:{NFSU2_TR(0x46b766);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83acb8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B46b76d:{NFSU2_TR(0x46b76d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46b7b1;}}
}
B46b76f:L46b76f:{c.instructions+=5;NFSU2_TR(0x46b76f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b775:{NFSU2_TR(0x46b775);
w4(R+0,u32(0x1ull));
}
B46b77a:{NFSU2_TR(0x46b77a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B46b77c:{NFSU2_TR(0x46b77c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b77e:{NFSU2_TR(0x46b77e);
if(r1(R+518)){{goto L46b7b1;}}
}
B46b780:L46b780:{c.instructions+=13;NFSU2_TR(0x46b780);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B46b782:{NFSU2_TR(0x46b782);
__builtin_memmove((R+8),(R+4),4);
}
B46b784:{NFSU2_TR(0x46b784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b78a:{NFSU2_TR(0x46b78a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B46b78d:{NFSU2_TR(0x46b78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b793:{NFSU2_TR(0x46b793);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ecd80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b799:{NFSU2_TR(0x46b799);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b79a:{NFSU2_TR(0x46b79a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b79b:{NFSU2_TR(0x46b79b);
u8 U[4];
w4(U+0,u32(0x78a8c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b7a0:{NFSU2_TR(0x46b7a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b7a2:{NFSU2_TR(0x46b7a2);
__builtin_memmove((R+12),(R+4),4);
}
B46b7a4:{NFSU2_TR(0x46b7a4);
w4(R+28,u32(0x1bull));
}
B46b7a9:{NFSU2_TR(0x46b7a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b7aeull));
TAIL_STATIC(0x4691c0u,469);
}
B46b7ae:L46b7ae:{c.instructions+=1;NFSU2_TR(0x46b7ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B46b7b1:L46b7b1:{c.instructions+=3;NFSU2_TR(0x46b7b1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b7b2:{NFSU2_TR(0x46b7b2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46b7b5:{NFSU2_TR(0x46b7b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b760u);}goto L46b760;}}
}
B46b7b7:L46b7b7:{c.instructions+=7;NFSU2_TR(0x46b7b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46b7b8:{NFSU2_TR(0x46b7b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b7b9:{NFSU2_TR(0x46b7b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46b7ba:{NFSU2_TR(0x46b7ba);
__builtin_memmove((R+0),(R+12),4);
}
B46b7bc:{NFSU2_TR(0x46b7bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46b7bd:{NFSU2_TR(0x46b7bd);
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
B46b7c0:{NFSU2_TR(0x46b7c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b7c1:L46b7c1:{c.instructions+=3;NFSU2_TR(0x46b7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b7c7:{NFSU2_TR(0x46b7c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b7cb:{NFSU2_TR(0x46b7cb);
w4(R+0,u32(0x2ull));
}
B46b7d0:L46b7d0:{c.instructions+=5;NFSU2_TR(0x46b7d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b7d3:{NFSU2_TR(0x46b7d3);
w4(R+20,u32(0x1ull));
}
B46b7d8:{NFSU2_TR(0x46b7d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b7da:{NFSU2_TR(0x46b7da);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b7dc:{NFSU2_TR(0x46b7dc);
if(r1(R+518)){{goto L46b7df;}}
}
B46b7de:L46b7de:{c.instructions+=1;NFSU2_TR(0x46b7de);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b7df:L46b7df:{c.instructions+=5;NFSU2_TR(0x46b7df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b7e2:{NFSU2_TR(0x46b7e2);
w4(R+20,u32(0x1ull));
}
B46b7e7:{NFSU2_TR(0x46b7e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b7e9:{NFSU2_TR(0x46b7e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b7eb:{NFSU2_TR(0x46b7eb);
if(r1(R+518)){{goto L46b7ee;}}
}
B46b7ed:L46b7ed:{c.instructions+=1;NFSU2_TR(0x46b7ed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b7ee:L46b7ee:{c.instructions+=5;NFSU2_TR(0x46b7ee);
w4(R+20,u32(0x1ull));
}
B46b7f3:{NFSU2_TR(0x46b7f3);
__builtin_memmove((R+4),(R+0),4);
}
B46b7f5:{NFSU2_TR(0x46b7f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b7f7:{NFSU2_TR(0x46b7f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b7f9:{NFSU2_TR(0x46b7f9);
if(r1(R+518)){{goto L46b7fc;}}
}
B46b7fb:L46b7fb:{c.instructions+=1;NFSU2_TR(0x46b7fb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b7fc:L46b7fc:{c.instructions+=5;NFSU2_TR(0x46b7fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b7ff:{NFSU2_TR(0x46b7ff);
w4(R+20,u32(0x1ull));
}
B46b804:{NFSU2_TR(0x46b804);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b806:{NFSU2_TR(0x46b806);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b808:{NFSU2_TR(0x46b808);
if(r1(R+518)){{goto L46b80b;}}
}
B46b80a:L46b80a:{c.instructions+=1;NFSU2_TR(0x46b80a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b80b:L46b80b:{c.instructions+=5;NFSU2_TR(0x46b80b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b80e:{NFSU2_TR(0x46b80e);
w4(R+20,u32(0x1ull));
}
B46b813:{NFSU2_TR(0x46b813);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b815:{NFSU2_TR(0x46b815);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b817:{NFSU2_TR(0x46b817);
if(r1(R+518)){{goto L46b81a;}}
}
B46b819:L46b819:{c.instructions+=1;NFSU2_TR(0x46b819);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b81a:L46b81a:{c.instructions+=5;NFSU2_TR(0x46b81a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b81d:{NFSU2_TR(0x46b81d);
w4(R+20,u32(0x1ull));
}
B46b822:{NFSU2_TR(0x46b822);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b824:{NFSU2_TR(0x46b824);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b826:{NFSU2_TR(0x46b826);
if(r1(R+518)){{goto L46b829;}}
}
B46b828:L46b828:{c.instructions+=1;NFSU2_TR(0x46b828);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b829:L46b829:{c.instructions+=5;NFSU2_TR(0x46b829);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b82c:{NFSU2_TR(0x46b82c);
w4(R+20,u32(0x1ull));
}
B46b831:{NFSU2_TR(0x46b831);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b833:{NFSU2_TR(0x46b833);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b835:{NFSU2_TR(0x46b835);
if(r1(R+518)){{goto L46b838;}}
}
B46b837:L46b837:{c.instructions+=1;NFSU2_TR(0x46b837);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b838:L46b838:{c.instructions+=5;NFSU2_TR(0x46b838);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b83b:{NFSU2_TR(0x46b83b);
w4(R+20,u32(0x1ull));
}
B46b840:{NFSU2_TR(0x46b840);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b842:{NFSU2_TR(0x46b842);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b844:{NFSU2_TR(0x46b844);
if(r1(R+518)){{goto L46b847;}}
}
B46b846:L46b846:{c.instructions+=1;NFSU2_TR(0x46b846);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b847:L46b847:{c.instructions+=5;NFSU2_TR(0x46b847);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b84a:{NFSU2_TR(0x46b84a);
w4(R+20,u32(0x1ull));
}
B46b84f:{NFSU2_TR(0x46b84f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b851:{NFSU2_TR(0x46b851);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b853:{NFSU2_TR(0x46b853);
if(r1(R+518)){{goto L46b856;}}
}
B46b855:L46b855:{c.instructions+=1;NFSU2_TR(0x46b855);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b856:L46b856:{c.instructions+=4;NFSU2_TR(0x46b856);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
}
B46b859:{NFSU2_TR(0x46b859);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b85c:{NFSU2_TR(0x46b85c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46b85f:{NFSU2_TR(0x46b85f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b7d0u);}goto L46b7d0;}}
}
B46b865:L46b865:{c.instructions+=2;NFSU2_TR(0x46b865);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b869:{NFSU2_TR(0x46b869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b86eull));
TAIL_STATIC(0x43bdf0u,43b);
}
B46b86e:L46b86e:{c.instructions+=2;NFSU2_TR(0x46b86e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b86f:{NFSU2_TR(0x46b86f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b874ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B46b874:L46b874:{c.instructions+=5;NFSU2_TR(0x46b874);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46b877:{NFSU2_TR(0x46b877);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46b879:{NFSU2_TR(0x46b879);
__builtin_memmove((R+20),(R+0),4);
}
B46b87b:{NFSU2_TR(0x46b87b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b87f:{NFSU2_TR(0x46b87f);
}
B46b880:L46b880:{c.instructions+=6;NFSU2_TR(0x46b880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b886:{NFSU2_TR(0x46b886);
w4(R+0,u32(0x1ull));
}
B46b88b:{NFSU2_TR(0x46b88b);
__builtin_memmove((R+4),(R+28),4);
}
B46b88d:{NFSU2_TR(0x46b88d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B46b88f:{NFSU2_TR(0x46b88f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b891:{NFSU2_TR(0x46b891);
if(r1(R+518)){{goto L46b8ce;}}
}
B46b893:L46b893:{c.instructions+=2;NFSU2_TR(0x46b893);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46b897:{NFSU2_TR(0x46b897);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b8ca;}}
}
B46b899:L46b899:{c.instructions+=15;NFSU2_TR(0x46b899);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46b89d:{NFSU2_TR(0x46b89d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B46b89f:{NFSU2_TR(0x46b89f);
__builtin_memmove((R+12),(R+28),4);
}
B46b8a1:{NFSU2_TR(0x46b8a1);
__builtin_memmove((R+8),(R+12),4);
}
B46b8a3:{NFSU2_TR(0x46b8a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B46b8a6:{NFSU2_TR(0x46b8a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b8ac:{NFSU2_TR(0x46b8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ecd80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b8b2:{NFSU2_TR(0x46b8b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b8b3:{NFSU2_TR(0x46b8b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b8b4:{NFSU2_TR(0x46b8b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b8b5:{NFSU2_TR(0x46b8b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b8b6:{NFSU2_TR(0x46b8b6);
u8 U[4];
w4(U+0,u32(0x78a878ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b8bb:{NFSU2_TR(0x46b8bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b8bd:{NFSU2_TR(0x46b8bd);
w4(R+28,u32(0x1bull));
}
B46b8c2:{NFSU2_TR(0x46b8c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b8c7ull));
TAIL_STATIC(0x4691c0u,469);
}
B46b8c7:L46b8c7:{c.instructions+=1;NFSU2_TR(0x46b8c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B46b8ca:L46b8ca:{c.instructions+=1;NFSU2_TR(0x46b8ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B46b8ce:L46b8ce:{c.instructions+=3;NFSU2_TR(0x46b8ce);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b8cf:{NFSU2_TR(0x46b8cf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46b8d2:{NFSU2_TR(0x46b8d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b880u);}goto L46b880;}}
}
B46b8d4:L46b8d4:{c.instructions+=7;NFSU2_TR(0x46b8d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46b8d5:{NFSU2_TR(0x46b8d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b8d6:{NFSU2_TR(0x46b8d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46b8d7:{NFSU2_TR(0x46b8d7);
__builtin_memmove((R+0),(R+12),4);
}
B46b8d9:{NFSU2_TR(0x46b8d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46b8da:{NFSU2_TR(0x46b8da);
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
B46b8dd:{NFSU2_TR(0x46b8dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b8de:L46b8de:{c.instructions+=2;NFSU2_TR(0x46b8de);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B46b8e5:{NFSU2_TR(0x46b8e5);
if(r1(R+518)){{goto L46b8f0;}}
}
B46b8e7:L46b8e7:{c.instructions+=2;NFSU2_TR(0x46b8e7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46b8ea:{NFSU2_TR(0x46b8ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46ba94;}}
}
B46b8f0:L46b8f0:{c.instructions+=3;NFSU2_TR(0x46b8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46b8f6:{NFSU2_TR(0x46b8f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b8f8:{NFSU2_TR(0x46b8f8);
if(r1(R+518)){{goto L46ba96;}}
}
B46b8fe:L46b8fe:{c.instructions+=3;NFSU2_TR(0x46b8fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b904:{NFSU2_TR(0x46b904);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b906:{NFSU2_TR(0x46b906);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b914;}}
}
B46b908:L46b908:{c.instructions+=2;NFSU2_TR(0x46b908);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b90e:{NFSU2_TR(0x46b90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b914:L46b914:{c.instructions+=4;NFSU2_TR(0x46b914);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b91a:{NFSU2_TR(0x46b91a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46b91c:{NFSU2_TR(0x46b91c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b91e:{NFSU2_TR(0x46b91e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46b981;}}
}
B46b920:L46b920:{c.instructions+=3;NFSU2_TR(0x46b920);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46b926:{NFSU2_TR(0x46b926);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83acb8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B46b92d:{NFSU2_TR(0x46b92d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46b971;}}
}
B46b92f:L46b92f:{c.instructions+=5;NFSU2_TR(0x46b92f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b935:{NFSU2_TR(0x46b935);
w4(R+0,u32(0x1ull));
}
B46b93a:{NFSU2_TR(0x46b93a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B46b93c:{NFSU2_TR(0x46b93c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b93e:{NFSU2_TR(0x46b93e);
if(r1(R+518)){{goto L46b971;}}
}
B46b940:L46b940:{c.instructions+=13;NFSU2_TR(0x46b940);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B46b942:{NFSU2_TR(0x46b942);
__builtin_memmove((R+8),(R+4),4);
}
B46b944:{NFSU2_TR(0x46b944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b94a:{NFSU2_TR(0x46b94a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B46b94d:{NFSU2_TR(0x46b94d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b953:{NFSU2_TR(0x46b953);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ecd80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46b959:{NFSU2_TR(0x46b959);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b95a:{NFSU2_TR(0x46b95a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b95b:{NFSU2_TR(0x46b95b);
u8 U[4];
w4(U+0,u32(0x78a8c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b960:{NFSU2_TR(0x46b960);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46b962:{NFSU2_TR(0x46b962);
__builtin_memmove((R+12),(R+4),4);
}
B46b964:{NFSU2_TR(0x46b964);
w4(R+28,u32(0x1bull));
}
B46b969:{NFSU2_TR(0x46b969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46b96eull));
TAIL_STATIC(0x4691c0u,469);
}
B46b96e:L46b96e:{c.instructions+=1;NFSU2_TR(0x46b96e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B46b971:L46b971:{c.instructions+=3;NFSU2_TR(0x46b971);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b972:{NFSU2_TR(0x46b972);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46b975:{NFSU2_TR(0x46b975);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b920u);}goto L46b920;}}
}
B46b977:L46b977:{c.instructions+=7;NFSU2_TR(0x46b977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46b978:{NFSU2_TR(0x46b978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46b979:{NFSU2_TR(0x46b979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46b97a:{NFSU2_TR(0x46b97a);
__builtin_memmove((R+0),(R+12),4);
}
B46b97c:{NFSU2_TR(0x46b97c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46b97d:{NFSU2_TR(0x46b97d);
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
B46b980:{NFSU2_TR(0x46b980);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46b981:L46b981:{c.instructions+=3;NFSU2_TR(0x46b981);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46b987:{NFSU2_TR(0x46b987);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46b98b:{NFSU2_TR(0x46b98b);
w4(R+0,u32(0x2ull));
}
B46b990:L46b990:{c.instructions+=5;NFSU2_TR(0x46b990);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b993:{NFSU2_TR(0x46b993);
w4(R+20,u32(0x1ull));
}
B46b998:{NFSU2_TR(0x46b998);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b99a:{NFSU2_TR(0x46b99a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b99c:{NFSU2_TR(0x46b99c);
if(r1(R+518)){{goto L46b99f;}}
}
B46b99e:L46b99e:{c.instructions+=1;NFSU2_TR(0x46b99e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b99f:L46b99f:{c.instructions+=5;NFSU2_TR(0x46b99f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b9a2:{NFSU2_TR(0x46b9a2);
w4(R+20,u32(0x1ull));
}
B46b9a7:{NFSU2_TR(0x46b9a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b9a9:{NFSU2_TR(0x46b9a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b9ab:{NFSU2_TR(0x46b9ab);
if(r1(R+518)){{goto L46b9ae;}}
}
B46b9ad:L46b9ad:{c.instructions+=1;NFSU2_TR(0x46b9ad);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b9ae:L46b9ae:{c.instructions+=5;NFSU2_TR(0x46b9ae);
w4(R+20,u32(0x1ull));
}
B46b9b3:{NFSU2_TR(0x46b9b3);
__builtin_memmove((R+4),(R+0),4);
}
B46b9b5:{NFSU2_TR(0x46b9b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b9b7:{NFSU2_TR(0x46b9b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b9b9:{NFSU2_TR(0x46b9b9);
if(r1(R+518)){{goto L46b9bc;}}
}
B46b9bb:L46b9bb:{c.instructions+=1;NFSU2_TR(0x46b9bb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b9bc:L46b9bc:{c.instructions+=5;NFSU2_TR(0x46b9bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b9bf:{NFSU2_TR(0x46b9bf);
w4(R+20,u32(0x1ull));
}
B46b9c4:{NFSU2_TR(0x46b9c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b9c6:{NFSU2_TR(0x46b9c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b9c8:{NFSU2_TR(0x46b9c8);
if(r1(R+518)){{goto L46b9cb;}}
}
B46b9ca:L46b9ca:{c.instructions+=1;NFSU2_TR(0x46b9ca);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b9cb:L46b9cb:{c.instructions+=5;NFSU2_TR(0x46b9cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b9ce:{NFSU2_TR(0x46b9ce);
w4(R+20,u32(0x1ull));
}
B46b9d3:{NFSU2_TR(0x46b9d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b9d5:{NFSU2_TR(0x46b9d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b9d7:{NFSU2_TR(0x46b9d7);
if(r1(R+518)){{goto L46b9da;}}
}
B46b9d9:L46b9d9:{c.instructions+=1;NFSU2_TR(0x46b9d9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b9da:L46b9da:{c.instructions+=5;NFSU2_TR(0x46b9da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b9dd:{NFSU2_TR(0x46b9dd);
w4(R+20,u32(0x1ull));
}
B46b9e2:{NFSU2_TR(0x46b9e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b9e4:{NFSU2_TR(0x46b9e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b9e6:{NFSU2_TR(0x46b9e6);
if(r1(R+518)){{goto L46b9e9;}}
}
B46b9e8:L46b9e8:{c.instructions+=1;NFSU2_TR(0x46b9e8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b9e9:L46b9e9:{c.instructions+=5;NFSU2_TR(0x46b9e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b9ec:{NFSU2_TR(0x46b9ec);
w4(R+20,u32(0x1ull));
}
B46b9f1:{NFSU2_TR(0x46b9f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46b9f3:{NFSU2_TR(0x46b9f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46b9f5:{NFSU2_TR(0x46b9f5);
if(r1(R+518)){{goto L46b9f8;}}
}
B46b9f7:L46b9f7:{c.instructions+=1;NFSU2_TR(0x46b9f7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46b9f8:L46b9f8:{c.instructions+=5;NFSU2_TR(0x46b9f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46b9fb:{NFSU2_TR(0x46b9fb);
w4(R+20,u32(0x1ull));
}
B46ba00:{NFSU2_TR(0x46ba00);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46ba02:{NFSU2_TR(0x46ba02);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46ba04:{NFSU2_TR(0x46ba04);
if(r1(R+518)){{goto L46ba07;}}
}
B46ba06:L46ba06:{c.instructions+=1;NFSU2_TR(0x46ba06);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46ba07:L46ba07:{c.instructions+=5;NFSU2_TR(0x46ba07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46ba0a:{NFSU2_TR(0x46ba0a);
w4(R+20,u32(0x1ull));
}
B46ba0f:{NFSU2_TR(0x46ba0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B46ba11:{NFSU2_TR(0x46ba11);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46ba13:{NFSU2_TR(0x46ba13);
if(r1(R+518)){{goto L46ba16;}}
}
B46ba15:L46ba15:{c.instructions+=1;NFSU2_TR(0x46ba15);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46ba16:L46ba16:{c.instructions+=4;NFSU2_TR(0x46ba16);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
}
B46ba19:{NFSU2_TR(0x46ba19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B46ba1c:{NFSU2_TR(0x46ba1c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46ba1f:{NFSU2_TR(0x46ba1f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b990u);}goto L46b990;}}
}
B46ba25:L46ba25:{c.instructions+=2;NFSU2_TR(0x46ba25);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ba29:{NFSU2_TR(0x46ba29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ba2eull));
TAIL_STATIC(0x43bdf0u,43b);
}
B46ba2e:L46ba2e:{c.instructions+=2;NFSU2_TR(0x46ba2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ba2f:{NFSU2_TR(0x46ba2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ba34ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B46ba34:L46ba34:{c.instructions+=5;NFSU2_TR(0x46ba34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46ba37:{NFSU2_TR(0x46ba37);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46ba39:{NFSU2_TR(0x46ba39);
__builtin_memmove((R+20),(R+0),4);
}
B46ba3b:{NFSU2_TR(0x46ba3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ba3f:{NFSU2_TR(0x46ba3f);
}
B46ba40:L46ba40:{c.instructions+=6;NFSU2_TR(0x46ba40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46ba46:{NFSU2_TR(0x46ba46);
w4(R+0,u32(0x1ull));
}
B46ba4b:{NFSU2_TR(0x46ba4b);
__builtin_memmove((R+4),(R+28),4);
}
B46ba4d:{NFSU2_TR(0x46ba4d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B46ba4f:{NFSU2_TR(0x46ba4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46ba51:{NFSU2_TR(0x46ba51);
if(r1(R+518)){{goto L46ba8e;}}
}
B46ba53:L46ba53:{c.instructions+=2;NFSU2_TR(0x46ba53);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46ba57:{NFSU2_TR(0x46ba57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46ba8a;}}
}
B46ba59:L46ba59:{c.instructions+=15;NFSU2_TR(0x46ba59);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ba5d:{NFSU2_TR(0x46ba5d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B46ba5f:{NFSU2_TR(0x46ba5f);
__builtin_memmove((R+12),(R+28),4);
}
B46ba61:{NFSU2_TR(0x46ba61);
__builtin_memmove((R+8),(R+12),4);
}
B46ba63:{NFSU2_TR(0x46ba63);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B46ba66:{NFSU2_TR(0x46ba66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ba6c:{NFSU2_TR(0x46ba6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ecd80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ba72:{NFSU2_TR(0x46ba72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ba73:{NFSU2_TR(0x46ba73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ba74:{NFSU2_TR(0x46ba74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ba75:{NFSU2_TR(0x46ba75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ba76:{NFSU2_TR(0x46ba76);
u8 U[4];
w4(U+0,u32(0x78a878ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ba7b:{NFSU2_TR(0x46ba7b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ba7d:{NFSU2_TR(0x46ba7d);
w4(R+28,u32(0x1bull));
}
B46ba82:{NFSU2_TR(0x46ba82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ba87ull));
TAIL_STATIC(0x4691c0u,469);
}
B46ba87:L46ba87:{c.instructions+=1;NFSU2_TR(0x46ba87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B46ba8a:L46ba8a:{c.instructions+=1;NFSU2_TR(0x46ba8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B46ba8e:L46ba8e:{c.instructions+=3;NFSU2_TR(0x46ba8e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46ba8f:{NFSU2_TR(0x46ba8f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46ba92:{NFSU2_TR(0x46ba92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46ba40u);}goto L46ba40;}}
}
B46ba94:L46ba94:{c.instructions+=1;NFSU2_TR(0x46ba94);
__builtin_memmove((R+0),(R+12),4);
}
B46ba96:L46ba96:{c.instructions+=6;NFSU2_TR(0x46ba96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46ba97:{NFSU2_TR(0x46ba97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ba98:{NFSU2_TR(0x46ba98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46ba99:{NFSU2_TR(0x46ba99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46ba9a:{NFSU2_TR(0x46ba9a);
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
B46ba9d:{NFSU2_TR(0x46ba9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46baa0:L46baa0:{c.instructions+=25;NFSU2_TR(0x46baa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46baa4:{NFSU2_TR(0x46baa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46baa8:{NFSU2_TR(0x46baa8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46baa9:{NFSU2_TR(0x46baa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46baad:{NFSU2_TR(0x46baad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46baae:{NFSU2_TR(0x46baae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46bab2:{NFSU2_TR(0x46bab2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bab3:{NFSU2_TR(0x46bab3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46bab7:{NFSU2_TR(0x46bab7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bab8:{NFSU2_TR(0x46bab8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bab9:{NFSU2_TR(0x46bab9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46baba:{NFSU2_TR(0x46baba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46babb:{NFSU2_TR(0x46babb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46babc:{NFSU2_TR(0x46babc);
u8 U[4];
w4(U+0,u32(0x78a8f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bac1:{NFSU2_TR(0x46bac1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bac3:{NFSU2_TR(0x46bac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bac9:{NFSU2_TR(0x46bac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bacf:{NFSU2_TR(0x46bacf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bad5:{NFSU2_TR(0x46bad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46badb:{NFSU2_TR(0x46badb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bae1:{NFSU2_TR(0x46bae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bae7:{NFSU2_TR(0x46bae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46baed:{NFSU2_TR(0x46baed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B46baf7:{NFSU2_TR(0x46baf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B46bb01:{NFSU2_TR(0x46bb01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bb06ull));
TAIL_STATIC(0x4691c0u,469);
}
B46bb06:L46bb06:{c.instructions+=5;NFSU2_TR(0x46bb06);
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
B46bb09:{NFSU2_TR(0x46bb09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46bb0a:{NFSU2_TR(0x46bb0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46bb0b:{NFSU2_TR(0x46bb0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46bb0c:{NFSU2_TR(0x46bb0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46bb10:L46bb10:{c.instructions+=5;NFSU2_TR(0x46bb10);
__builtin_memmove((R+4),gp(0x82c6d4),4);
}
B46bb16:{NFSU2_TR(0x46bb16);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46bb1a:{NFSU2_TR(0x46bb1a);
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
B46bb1c:{NFSU2_TR(0x46bb1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bb1d:{NFSU2_TR(0x46bb1d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L46bb85;}}
}
B46bb1f:L46bb1f:{c.instructions+=4;NFSU2_TR(0x46bb1f);
__builtin_memmove((R+8),gp(0x82c6d8),4);
}
B46bb25:{NFSU2_TR(0x46bb25);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B46bb27:{NFSU2_TR(0x46bb27);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B46bb29:{NFSU2_TR(0x46bb29);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L46bb85;}}
}
B46bb2b:L46bb2b:{c.instructions+=3;NFSU2_TR(0x46bb2b);
__builtin_memmove((R+4),gp(0x7ecf48),4);
}
B46bb31:{NFSU2_TR(0x46bb31);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46bb33:{NFSU2_TR(0x46bb33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46bb6e;}}
}
B46bb35:L46bb35:{c.instructions+=6;NFSU2_TR(0x46bb35);
__builtin_memmove((R+24),gp(0x82ba30),4);
}
B46bb3b:{NFSU2_TR(0x46bb3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46bb3e:{NFSU2_TR(0x46bb3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46bb41:{NFSU2_TR(0x46bb41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46bb44:{NFSU2_TR(0x46bb44);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46bb46:{NFSU2_TR(0x46bb46);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L46bb53;}}
}
B46bb48:L46bb48:{c.instructions+=6;NFSU2_TR(0x46bb48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bb49:{NFSU2_TR(0x46bb49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46bb4c:{NFSU2_TR(0x46bb4c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B46bb4e:{NFSU2_TR(0x46bb4e);
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
B46bb50:{NFSU2_TR(0x46bb50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46bb51:{NFSU2_TR(0x46bb51);
if(r1(R+512)){{goto L46bb82;}}
}
B46bb53:L46bb53:{c.instructions+=5;NFSU2_TR(0x46bb53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46bb56:{NFSU2_TR(0x46bb56);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46bb59:{NFSU2_TR(0x46bb59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46bb5c:{NFSU2_TR(0x46bb5c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B46bb5e:{NFSU2_TR(0x46bb5e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L46bb85;}}
}
B46bb60:L46bb60:{c.instructions+=4;NFSU2_TR(0x46bb60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46bb63:{NFSU2_TR(0x46bb63);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B46bb65:{NFSU2_TR(0x46bb65);
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
B46bb67:{NFSU2_TR(0x46bb67);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L46bb85;}}
}
B46bb69:L46bb69:{c.instructions+=3;NFSU2_TR(0x46bb69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bb6c:{NFSU2_TR(0x46bb6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46bb6d:{NFSU2_TR(0x46bb6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46bb6e:L46bb6e:{c.instructions+=2;NFSU2_TR(0x46bb6e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B46bb71:{NFSU2_TR(0x46bb71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46bb85;}}
}
B46bb73:L46bb73:{c.instructions+=3;NFSU2_TR(0x46bb73);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B46bb79:{NFSU2_TR(0x46bb79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46bb7f:{NFSU2_TR(0x46bb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46bb82:L46bb82:{c.instructions+=1;NFSU2_TR(0x46bb82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bb85:L46bb85:{c.instructions+=2;NFSU2_TR(0x46bb85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46bb86:{NFSU2_TR(0x46bb86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46bb90:L46bb90:{c.instructions+=4;NFSU2_TR(0x46bb90);
__builtin_memmove((R+0),gp(0x7ecd74),4);
}
B46bb95:{NFSU2_TR(0x46bb95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B46bb98:{NFSU2_TR(0x46bb98);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46bb9b:{NFSU2_TR(0x46bb9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46bbb6;}}
}
B46bb9d:L46bb9d:{c.instructions+=3;NFSU2_TR(0x46bb9d);
__builtin_memmove((R+4),gp(0x82b9bc),4);
}
B46bba3:{NFSU2_TR(0x46bba3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46bba5:{NFSU2_TR(0x46bba5);
if(r1(R+518)){{goto L46bbb6;}}
}
B46bba7:L46bba7:{c.instructions+=4;NFSU2_TR(0x46bba7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b96cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B46bbae:{NFSU2_TR(0x46bbae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46bbb0:{NFSU2_TR(0x46bbb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bbb4:{NFSU2_TR(0x46bbb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46bbbe;}}
}
B46bbb6:L46bbb6:{c.instructions+=1;NFSU2_TR(0x46bbb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46bbbe:L46bbbe:{c.instructions+=3;NFSU2_TR(0x46bbbe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bbbf:{NFSU2_TR(0x46bbbf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46bbc1:{NFSU2_TR(0x46bbc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bbc5:L46bbc5:{c.instructions+=3;NFSU2_TR(0x46bbc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B46bbcc:{NFSU2_TR(0x46bbcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46bbce:{NFSU2_TR(0x46bbce);
if(r1(R+518)){{goto L46bbe4;}}
}
B46bbd0:L46bbd0:{c.instructions+=3;NFSU2_TR(0x46bbd0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B46bbd1:{NFSU2_TR(0x46bbd1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46bbd4:{NFSU2_TR(0x46bbd4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46bbc5u);}goto L46bbc5;}}
}
B46bbd6:L46bbd6:{c.instructions+=5;NFSU2_TR(0x46bbd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bbda:{NFSU2_TR(0x46bbda);
w4(R+0,u32(0xfffffff3ull));
}
B46bbdf:{NFSU2_TR(0x46bbdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46bbe0:{NFSU2_TR(0x46bbe0);
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
B46bbe3:{NFSU2_TR(0x46bbe3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46bbe4:L46bbe4:{c.instructions+=3;NFSU2_TR(0x46bbe4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46bbe6:{NFSU2_TR(0x46bbe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bbea:{NFSU2_TR(0x46bbea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46bbf6;}}
}
B46bbec:L46bbec:{c.instructions+=4;NFSU2_TR(0x46bbec);
w4(R+0,u32(0xfffffff3ull));
}
B46bbf1:{NFSU2_TR(0x46bbf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46bbf2:{NFSU2_TR(0x46bbf2);
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
B46bbf5:{NFSU2_TR(0x46bbf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46bbf6:L46bbf6:{c.instructions+=9;NFSU2_TR(0x46bbf6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bbf7:{NFSU2_TR(0x46bbf7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bbf8:{NFSU2_TR(0x46bbf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46bbfc:{NFSU2_TR(0x46bbfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B46bc03:{NFSU2_TR(0x46bc03);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B46bc0a:{NFSU2_TR(0x46bc0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bc0b:{NFSU2_TR(0x46bc0b);
__builtin_memmove((R+28),(R+8),4);
}
B46bc0d:{NFSU2_TR(0x46bc0d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46bc0f:{NFSU2_TR(0x46bc0f);
w4(R+4,u32(0x1cull));
}
B46bc14:L46bc14:{c.instructions+=1;NFSU2_TR(0x46bc14);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L46bc16;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46bc14u);}goto L46bc14;}
}
B46bc16:L46bc16:{c.instructions+=19;NFSU2_TR(0x46bc16);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46bc19:{NFSU2_TR(0x46bc19);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46bc1d:{NFSU2_TR(0x46bc1d);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B46bc20:{NFSU2_TR(0x46bc20);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xff0000ull))));
}
B46bc26:{NFSU2_TR(0x46bc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bc29:{NFSU2_TR(0x46bc29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B46bc2b:{NFSU2_TR(0x46bc2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bc2e:{NFSU2_TR(0x46bc2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bc31:{NFSU2_TR(0x46bc31);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bc34:{NFSU2_TR(0x46bc34);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x65ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46bc38:{NFSU2_TR(0x46bc38);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B46bc3f:{NFSU2_TR(0x46bc3f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x70ull))));
}
B46bc42:{NFSU2_TR(0x46bc42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B46bc45:{NFSU2_TR(0x46bc45);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B46bc48:{NFSU2_TR(0x46bc48);
__builtin_memmove((R+8),(R+12),4);
}
B46bc4a:{NFSU2_TR(0x46bc4a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B46bc4c:{NFSU2_TR(0x46bc4c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8000000full))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B46bc52:{NFSU2_TR(0x46bc52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bc55:{NFSU2_TR(0x46bc55);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L46bc5c;}}
}
B46bc57:L46bc57:{c.instructions+=3;NFSU2_TR(0x46bc57);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B46bc58:{NFSU2_TR(0x46bc58);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffff0ull))));
}
B46bc5b:{NFSU2_TR(0x46bc5b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B46bc5c:L46bc5c:{c.instructions+=10;NFSU2_TR(0x46bc5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46bc60:{NFSU2_TR(0x46bc60);
w4(R+4,u32(0x10ull));
}
B46bc65:{NFSU2_TR(0x46bc65);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B46bc67:{NFSU2_TR(0x46bc67);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B46bc69:{NFSU2_TR(0x46bc69);
__builtin_memmove((R+8),(R+20),4);
}
B46bc6b:{NFSU2_TR(0x46bc6b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B46bc6d:{NFSU2_TR(0x46bc6d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B46bc6f:{NFSU2_TR(0x46bc6f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46bc71:{NFSU2_TR(0x46bc71);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bc75:{NFSU2_TR(0x46bc75);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46bc8d;}}
}
B46bc77:L46bc77:{c.instructions+=2;NFSU2_TR(0x46bc77);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46bc79:{NFSU2_TR(0x46bc79);
__builtin_memmove((R+16),(R+16),4);
}
B46bc80:L46bc80:{c.instructions+=5;NFSU2_TR(0x46bc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46bc83:{NFSU2_TR(0x46bc83);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B46bc87:{NFSU2_TR(0x46bc87);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B46bc8a:{NFSU2_TR(0x46bc8a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46bc8b:{NFSU2_TR(0x46bc8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46bc80u);}goto L46bc80;}}
}
B46bc8d:L46bc8d:{c.instructions+=3;NFSU2_TR(0x46bc8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46bc91:{NFSU2_TR(0x46bc91);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46bc93:{NFSU2_TR(0x46bc93);
if(r1(R+518)){{goto L46bca1;}}
}
B46bc95:L46bc95:{c.instructions+=2;NFSU2_TR(0x46bc95);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46bc98:{NFSU2_TR(0x46bc98);
w4(R+4,u32(0x6ull));
}
B46bc9d:L46bc9d:{c.instructions+=1;NFSU2_TR(0x46bc9d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L46bc9f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46bc9du);}goto L46bc9d;}
}
B46bc9f:L46bc9f:{c.instructions+=1;NFSU2_TR(0x46bc9f);
{goto L46bcad;}
}
B46bca1:L46bca1:{c.instructions+=3;NFSU2_TR(0x46bca1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46bca4:{NFSU2_TR(0x46bca4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bca5:{NFSU2_TR(0x46bca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bcaaull));
TAIL_STATIC(0x721a6bu,721);
}
B46bcaa:L46bcaa:{c.instructions+=1;NFSU2_TR(0x46bcaa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46bcad:L46bcad:{c.instructions+=8;NFSU2_TR(0x46bcad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46bcb1:{NFSU2_TR(0x46bcb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bcb2:{NFSU2_TR(0x46bcb2);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bcb4:{NFSU2_TR(0x46bcb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B46bcb7:{NFSU2_TR(0x46bcb7);
u8 U[4];
w4(U+0,u32(0x78a940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bcbc:{NFSU2_TR(0x46bcbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bcbd:{NFSU2_TR(0x46bcbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x35ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46bcc1:{NFSU2_TR(0x46bcc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bcc6ull));
TAIL_STATIC(0x75c784u,75c);
}
B46bcc6:L46bcc6:{c.instructions+=4;NFSU2_TR(0x46bcc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46bcca:{NFSU2_TR(0x46bcca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B46bccd:{NFSU2_TR(0x46bccd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46bccf:{NFSU2_TR(0x46bccf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46bd03;}}
}
B46bcd1:L46bcd1:{c.instructions+=11;NFSU2_TR(0x46bcd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46bcd5:{NFSU2_TR(0x46bcd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46bcd9:{NFSU2_TR(0x46bcd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46bcdc:{NFSU2_TR(0x46bcdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bcdd:{NFSU2_TR(0x46bcdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46bce1:{NFSU2_TR(0x46bce1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bce2:{NFSU2_TR(0x46bce2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bce3:{NFSU2_TR(0x46bce3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bce4:{NFSU2_TR(0x46bce4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bce5:{NFSU2_TR(0x46bce5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46bce8:{NFSU2_TR(0x46bce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bcedull));
TAIL_STATIC(0x45a4e0u,45a);
}
B46bced:L46bced:{c.instructions+=5;NFSU2_TR(0x46bced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B46bcf0:{NFSU2_TR(0x46bcf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46bcf3:{NFSU2_TR(0x46bcf3);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bcf8:{NFSU2_TR(0x46bcf8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bcf9:{NFSU2_TR(0x46bcf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bcfeull));
TAIL_STATIC(0x721db7u,721);
}
B46bcfe:L46bcfe:{c.instructions+=2;NFSU2_TR(0x46bcfe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46bd01:{NFSU2_TR(0x46bd01);
{goto L46bd07;}
}
B46bd03:L46bd03:{c.instructions+=1;NFSU2_TR(0x46bd03);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46bd07:L46bd07:{c.instructions+=3;NFSU2_TR(0x46bd07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46bd0a:{NFSU2_TR(0x46bd0a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46bd0c:{NFSU2_TR(0x46bd0c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46bd15;}}
}
B46bd0e:L46bd0e:{c.instructions+=3;NFSU2_TR(0x46bd0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B46bd11:{NFSU2_TR(0x46bd11);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46bd13:{NFSU2_TR(0x46bd13);
if(r1(R+518)){{goto L46bd2e;}}
}
B46bd15:L46bd15:{c.instructions+=5;NFSU2_TR(0x46bd15);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B46bd19:{NFSU2_TR(0x46bd19);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46bd1d:{NFSU2_TR(0x46bd1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x66ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46bd20:{NFSU2_TR(0x46bd20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46bd27:{NFSU2_TR(0x46bd27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x7full));
s4(u32(r4(U+0)),r4(U+4));
}
B46bd2e:L46bd2e:{c.instructions+=6;NFSU2_TR(0x46bd2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46bd2f:{NFSU2_TR(0x46bd2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46bd30:{NFSU2_TR(0x46bd30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46bd31:{NFSU2_TR(0x46bd31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46bd32:{NFSU2_TR(0x46bd32);
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
B46bd35:{NFSU2_TR(0x46bd35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46be50:L46be50:{c.instructions+=7;NFSU2_TR(0x46be50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46be54:{NFSU2_TR(0x46be54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46be55:{NFSU2_TR(0x46be55);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B46be5c:{NFSU2_TR(0x46be5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46be5e:{NFSU2_TR(0x46be5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46be5f:{NFSU2_TR(0x46be5f);
__builtin_memmove((R+4),gp(0x82b9c8),4);
}
B46be65:{NFSU2_TR(0x46be65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46be6aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b670u);}goto L46b670;}
}
B46be6a:L46be6a:{c.instructions+=3;NFSU2_TR(0x46be6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46be6d:{NFSU2_TR(0x46be6d);
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
B46be6f:{NFSU2_TR(0x46be6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46be85;}}
}
B46be71:L46be71:{c.instructions+=6;NFSU2_TR(0x46be71);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46be75:{NFSU2_TR(0x46be75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46be78:{NFSU2_TR(0x46be78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46be7b:{NFSU2_TR(0x46be7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46be7c:{NFSU2_TR(0x46be7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46be7d:{NFSU2_TR(0x46be7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46be82ull));
TAIL_STATIC(0x722f98u,722);
}
B46be82:L46be82:{c.instructions+=1;NFSU2_TR(0x46be82);
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
B46be85:L46be85:{c.instructions+=2;NFSU2_TR(0x46be85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46be86:{NFSU2_TR(0x46be86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46be90:L46be90:{c.instructions+=10;NFSU2_TR(0x46be90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb0ull))));
}
B46be96:{NFSU2_TR(0x46be96);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46be9d:{NFSU2_TR(0x46be9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46be9e:{NFSU2_TR(0x46be9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46be9f:{NFSU2_TR(0x46be9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bea0:{NFSU2_TR(0x46bea0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B46bea7:{NFSU2_TR(0x46bea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46bea9:{NFSU2_TR(0x46bea9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46beaa:{NFSU2_TR(0x46beaa);
__builtin_memmove((R+4),gp(0x82b9c8),4);
}
B46beb0:{NFSU2_TR(0x46beb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46beb5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46b670u);}goto L46b670;}
}
B46beb5:L46beb5:{c.instructions+=11;NFSU2_TR(0x46beb5);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46bebc:{NFSU2_TR(0x46bebc);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46bec3:{NFSU2_TR(0x46bec3);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B46bec9:{NFSU2_TR(0x46bec9);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B46becf:{NFSU2_TR(0x46becf);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B46bed2:{NFSU2_TR(0x46bed2);
__builtin_memmove((R+20),(R+0),4);
}
B46bed4:{NFSU2_TR(0x46bed4);
w4(R+0,u32(0x1ull));
}
B46bed9:{NFSU2_TR(0x46bed9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bedd:{NFSU2_TR(0x46bedd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xfffffff8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46bee5:{NFSU2_TR(0x46bee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bee8:{NFSU2_TR(0x46bee8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46bef9;}}
}
B46beea:L46beea:{c.instructions+=6;NFSU2_TR(0x46beea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46beeb:{NFSU2_TR(0x46beeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46beec:{NFSU2_TR(0x46beec);
w4(R+0,u32(0xfffffffeull));
}
B46bef1:{NFSU2_TR(0x46bef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46bef2:{NFSU2_TR(0x46bef2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xb0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xb0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xb0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46bef8:{NFSU2_TR(0x46bef8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46bef9:L46bef9:{c.instructions+=3;NFSU2_TR(0x46bef9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46befa:{NFSU2_TR(0x46befa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46befd:{NFSU2_TR(0x46befd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bf02ull));
TAIL_STATIC(0x721f99u,721);
}
B46bf02:L46bf02:{c.instructions+=3;NFSU2_TR(0x46bf02);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46bf05:{NFSU2_TR(0x46bf05);
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
B46bf07:{NFSU2_TR(0x46bf07);
if(r1(R+518)){{goto L46bfde;}}
}
B46bf0d:L46bf0d:{c.instructions+=3;NFSU2_TR(0x46bf0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46bf10:{NFSU2_TR(0x46bf10);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46bf12:{NFSU2_TR(0x46bf12);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x46c105u,46c);}
}
B46bf18:L46bf18:{c.instructions+=4;NFSU2_TR(0x46bf18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46bf1b:{NFSU2_TR(0x46bf1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46bf1e:{NFSU2_TR(0x46bf1e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46bf20:{NFSU2_TR(0x46bf20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x46c105u,46c);}
}
B46bf26:L46bf26:{c.instructions+=10;NFSU2_TR(0x46bf26);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46bf2a:{NFSU2_TR(0x46bf2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bf2b:{NFSU2_TR(0x46bf2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46bf2f:{NFSU2_TR(0x46bf2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bf30:{NFSU2_TR(0x46bf30);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46bf34:{NFSU2_TR(0x46bf34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bf35:{NFSU2_TR(0x46bf35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bf36:{NFSU2_TR(0x46bf36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46bf38:{NFSU2_TR(0x46bf38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bf39:{NFSU2_TR(0x46bf39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bf3eull));
TAIL_STATIC(0x723b1fu,723);
}
B46bf3e:L46bf3e:{c.instructions+=4;NFSU2_TR(0x46bf3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B46bf41:{NFSU2_TR(0x46bf41);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46bf43:{NFSU2_TR(0x46bf43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bf47:{NFSU2_TR(0x46bf47);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46bfb1;}}
}
B46bf49:L46bf49:{c.instructions+=4;NFSU2_TR(0x46bf49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46bf4c:{NFSU2_TR(0x46bf4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46bf4f:{NFSU2_TR(0x46bf4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bf50:{NFSU2_TR(0x46bf50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bf55ull));
TAIL_STATIC(0x723a64u,723);
}
B46bf55:L46bf55:{c.instructions+=4;NFSU2_TR(0x46bf55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46bf58:{NFSU2_TR(0x46bf58);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46bf5a:{NFSU2_TR(0x46bf5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B46bf5c:{NFSU2_TR(0x46bf5c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46bf73;}}
}
B46bf5e:L46bf5e:{c.instructions+=4;NFSU2_TR(0x46bf5e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B46bf64:{NFSU2_TR(0x46bf64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46bf67:{NFSU2_TR(0x46bf67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B46bf6e:{NFSU2_TR(0x46bf6e);
TAIL_STATIC(0x46c105u,46c);
}
B46bf73:L46bf73:{c.instructions+=7;NFSU2_TR(0x46bf73);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46bf77:{NFSU2_TR(0x46bf77);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46bf7b:{NFSU2_TR(0x46bf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B46bf7e:{NFSU2_TR(0x46bf7e);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B46bf80:{NFSU2_TR(0x46bf80);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46bf82:{NFSU2_TR(0x46bf82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B46bf84:{NFSU2_TR(0x46bf84);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46bf8c;}}
}
B46bf86:L46bf86:{c.instructions+=1;NFSU2_TR(0x46bf86);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46bf8c:L46bf8c:{c.instructions+=5;NFSU2_TR(0x46bf8c);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B46bf91:{NFSU2_TR(0x46bf91);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bf95:{NFSU2_TR(0x46bf95);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B46bf99:{NFSU2_TR(0x46bf99);
{u32 ea_=u32(u32(7907656u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46bf9f:{NFSU2_TR(0x46bf9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bfa4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46bfa4:L46bfa4:{c.instructions+=4;NFSU2_TR(0x46bfa4);
w4(R+28,u32(0-u32(r4(R+28))));
}
B46bfa6:{NFSU2_TR(0x46bfa6);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B46bfa8:{NFSU2_TR(0x46bfa8);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46bfaf:{NFSU2_TR(0x46bfaf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B46bfb1:L46bfb1:{c.instructions+=9;NFSU2_TR(0x46bfb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46bfb3:{NFSU2_TR(0x46bfb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46bfb6:{NFSU2_TR(0x46bfb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bfb9:{NFSU2_TR(0x46bfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46bfbc:{NFSU2_TR(0x46bfbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46bfbe:{NFSU2_TR(0x46bfbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bfc1:{NFSU2_TR(0x46bfc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46bfc4:{NFSU2_TR(0x46bfc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bfc5:{NFSU2_TR(0x46bfc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bfcaull));
TAIL_STATIC(0x723a1cu,723);
}
B46bfca:L46bfca:{c.instructions+=6;NFSU2_TR(0x46bfca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bfcd:{NFSU2_TR(0x46bfcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46bfd0:{NFSU2_TR(0x46bfd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46bfd3:{NFSU2_TR(0x46bfd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46bfd6:{NFSU2_TR(0x46bfd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46bfd9:{NFSU2_TR(0x46bfd9);
TAIL_STATIC(0x46c105u,46c);
}
B46bfde:L46bfde:{c.instructions+=1;NFSU2_TR(0x46bfde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bfe3ull));
TAIL_STATIC(0x721f99u,721);
}
B46bfe3:L46bfe3:{c.instructions+=5;NFSU2_TR(0x46bfe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46bfe6:{NFSU2_TR(0x46bfe6);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46bfea:{NFSU2_TR(0x46bfea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bfeb:{NFSU2_TR(0x46bfeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46bfec:{NFSU2_TR(0x46bfec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bff1ull));
TAIL_STATIC(0x722eceu,722);
}
B46bff1:L46bff1:{c.instructions+=3;NFSU2_TR(0x46bff1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46bff4:{NFSU2_TR(0x46bff4);
__builtin_memmove((R+28),(R+0),4);
}
B46bff6:{NFSU2_TR(0x46bff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46bffbull));
TAIL_STATIC(0x721fa7u,721);
}
B46bffb:L46bffb:{c.instructions+=2;NFSU2_TR(0x46bffb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x66ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B46bfff:{NFSU2_TR(0x46bfff);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
TAIL_STATIC(0x46c001u,46c);
}
XIT:NFSU2_TR_EXIT(0x46b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
