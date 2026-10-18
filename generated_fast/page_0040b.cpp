#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x40b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x40b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_40b(u8* __restrict R,Cpu& c);
u32 page_40b(Cpu& c){return body_40b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_40b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x40b000:goto L40b000;
case 0x40b002:c.instructions+=4;goto B40b002;
case 0x40b005:c.instructions+=3;goto B40b005;
case 0x40b008:c.instructions+=2;goto B40b008;
case 0x40b009:c.instructions+=1;goto B40b009;
case 0x40b00a:goto L40b00a;
case 0x40b00e:c.instructions+=2;goto B40b00e;
case 0x40b012:c.instructions+=1;goto B40b012;
case 0x40b014:goto L40b014;
case 0x40b018:c.instructions+=2;goto B40b018;
case 0x40b01c:c.instructions+=1;goto B40b01c;
case 0x40b01e:goto L40b01e;
case 0x40b021:c.instructions+=2;goto B40b021;
case 0x40b023:c.instructions+=1;goto B40b023;
case 0x40b025:goto L40b025;
case 0x40b02c:c.instructions+=1;goto B40b02c;
case 0x40b02e:goto L40b02e;
case 0x40b030:goto L40b030;
case 0x40b033:c.instructions+=4;goto B40b033;
case 0x40b036:c.instructions+=3;goto B40b036;
case 0x40b03d:c.instructions+=2;goto B40b03d;
case 0x40b03f:c.instructions+=1;goto B40b03f;
case 0x40b041:goto L40b041;
case 0x40b043:c.instructions+=4;goto B40b043;
case 0x40b045:c.instructions+=3;goto B40b045;
case 0x40b046:c.instructions+=2;goto B40b046;
case 0x40b048:c.instructions+=1;goto B40b048;
case 0x40b04b:goto L40b04b;
case 0x40b04e:goto L40b04e;
case 0x40b04f:c.instructions+=1;goto B40b04f;
case 0x40b050:goto L40b050;
case 0x40b056:c.instructions+=5;goto B40b056;
case 0x40b057:c.instructions+=4;goto B40b057;
case 0x40b059:c.instructions+=3;goto B40b059;
case 0x40b05c:c.instructions+=2;goto B40b05c;
case 0x40b05e:c.instructions+=1;goto B40b05e;
case 0x40b060:goto L40b060;
case 0x40b062:c.instructions+=3;goto B40b062;
case 0x40b064:c.instructions+=2;goto B40b064;
case 0x40b065:c.instructions+=1;goto B40b065;
case 0x40b068:goto L40b068;
case 0x40b06c:c.instructions+=2;goto B40b06c;
case 0x40b070:c.instructions+=1;goto B40b070;
case 0x40b072:goto L40b072;
case 0x40b076:c.instructions+=2;goto B40b076;
case 0x40b07a:c.instructions+=1;goto B40b07a;
case 0x40b07c:goto L40b07c;
case 0x40b07f:c.instructions+=2;goto B40b07f;
case 0x40b081:c.instructions+=1;goto B40b081;
case 0x40b083:goto L40b083;
case 0x40b08a:c.instructions+=1;goto B40b08a;
case 0x40b08c:goto L40b08c;
case 0x40b08e:goto L40b08e;
case 0x40b091:c.instructions+=4;goto B40b091;
case 0x40b094:c.instructions+=3;goto B40b094;
case 0x40b09b:c.instructions+=2;goto B40b09b;
case 0x40b09d:c.instructions+=1;goto B40b09d;
case 0x40b09f:goto L40b09f;
case 0x40b0a1:c.instructions+=4;goto B40b0a1;
case 0x40b0a3:c.instructions+=3;goto B40b0a3;
case 0x40b0a4:c.instructions+=2;goto B40b0a4;
case 0x40b0a6:c.instructions+=1;goto B40b0a6;
case 0x40b0a9:goto L40b0a9;
case 0x40b0ac:goto L40b0ac;
case 0x40b0ad:c.instructions+=1;goto B40b0ad;
case 0x40b0b0:goto L40b0b0;
case 0x40b0b1:c.instructions+=8;goto B40b0b1;
case 0x40b0b2:c.instructions+=7;goto B40b0b2;
case 0x40b0b3:c.instructions+=6;goto B40b0b3;
case 0x40b0b5:c.instructions+=5;goto B40b0b5;
case 0x40b0b9:c.instructions+=4;goto B40b0b9;
case 0x40b0bc:c.instructions+=3;goto B40b0bc;
case 0x40b0bf:c.instructions+=2;goto B40b0bf;
case 0x40b0c0:c.instructions+=1;goto B40b0c0;
case 0x40b0c2:goto L40b0c2;
case 0x40b0c6:c.instructions+=1;goto B40b0c6;
case 0x40b0c8:goto L40b0c8;
case 0x40b0cb:c.instructions+=2;goto B40b0cb;
case 0x40b0cd:c.instructions+=1;goto B40b0cd;
case 0x40b0cf:goto L40b0cf;
case 0x40b0d6:c.instructions+=1;goto B40b0d6;
case 0x40b0d8:goto L40b0d8;
case 0x40b0da:goto L40b0da;
case 0x40b0dc:c.instructions+=1;goto B40b0dc;
case 0x40b0de:goto L40b0de;
case 0x40b0e3:goto L40b0e3;
case 0x40b0e6:c.instructions+=1;goto B40b0e6;
case 0x40b0e8:goto L40b0e8;
case 0x40b0ea:c.instructions+=3;goto B40b0ea;
case 0x40b0eb:c.instructions+=2;goto B40b0eb;
case 0x40b0ed:c.instructions+=1;goto B40b0ed;
case 0x40b0f0:goto L40b0f0;
case 0x40b0f7:c.instructions+=2;goto B40b0f7;
case 0x40b0f9:c.instructions+=1;goto B40b0f9;
case 0x40b0fb:goto L40b0fb;
case 0x40b0fd:goto L40b0fd;
case 0x40b0fe:c.instructions+=3;goto B40b0fe;
case 0x40b101:c.instructions+=2;goto B40b101;
case 0x40b103:c.instructions+=1;goto B40b103;
case 0x40b105:goto L40b105;
case 0x40b106:c.instructions+=5;goto B40b106;
case 0x40b107:c.instructions+=4;goto B40b107;
case 0x40b109:c.instructions+=3;goto B40b109;
case 0x40b10a:c.instructions+=2;goto B40b10a;
case 0x40b10b:c.instructions+=1;goto B40b10b;
case 0x40b110:goto L40b110;
case 0x40b114:c.instructions+=4;goto B40b114;
case 0x40b116:c.instructions+=3;goto B40b116;
case 0x40b118:c.instructions+=2;goto B40b118;
case 0x40b11e:c.instructions+=1;goto B40b11e;
case 0x40b120:goto L40b120;
case 0x40b125:c.instructions+=2;goto B40b125;
case 0x40b12a:c.instructions+=1;goto B40b12a;
case 0x40b12c:goto L40b12c;
case 0x40b132:c.instructions+=1;goto B40b132;
case 0x40b134:goto L40b134;
case 0x40b139:c.instructions+=2;goto B40b139;
case 0x40b13e:c.instructions+=1;goto B40b13e;
case 0x40b140:goto L40b140;
case 0x40b146:c.instructions+=1;goto B40b146;
case 0x40b148:goto L40b148;
case 0x40b14d:c.instructions+=1;goto B40b14d;
case 0x40b152:goto L40b152;
case 0x40b153:c.instructions+=6;goto B40b153;
case 0x40b154:c.instructions+=5;goto B40b154;
case 0x40b155:c.instructions+=4;goto B40b155;
case 0x40b157:c.instructions+=3;goto B40b157;
case 0x40b159:c.instructions+=2;goto B40b159;
case 0x40b15a:c.instructions+=1;goto B40b15a;
case 0x40b160:goto L40b160;
case 0x40b164:c.instructions+=4;goto B40b164;
case 0x40b168:c.instructions+=3;goto B40b168;
case 0x40b16c:c.instructions+=2;goto B40b16c;
case 0x40b16f:c.instructions+=1;goto B40b16f;
case 0x40b170:goto L40b170;
case 0x40b172:c.instructions+=5;goto B40b172;
case 0x40b175:c.instructions+=4;goto B40b175;
case 0x40b179:c.instructions+=3;goto B40b179;
case 0x40b17c:c.instructions+=2;goto B40b17c;
case 0x40b17e:c.instructions+=1;goto B40b17e;
case 0x40b180:goto L40b180;
case 0x40b182:c.instructions+=1;goto B40b182;
case 0x40b184:goto L40b184;
case 0x40b18a:goto L40b18a;
case 0x40b18d:c.instructions+=1;goto B40b18d;
case 0x40b18f:goto L40b18f;
case 0x40b193:c.instructions+=2;goto B40b193;
case 0x40b196:c.instructions+=1;goto B40b196;
case 0x40b198:goto L40b198;
case 0x40b19b:c.instructions+=1;goto B40b19b;
case 0x40b19d:goto L40b19d;
case 0x40b1a1:c.instructions+=4;goto B40b1a1;
case 0x40b1a3:c.instructions+=3;goto B40b1a3;
case 0x40b1a5:c.instructions+=2;goto B40b1a5;
case 0x40b1a8:c.instructions+=1;goto B40b1a8;
case 0x40b1aa:goto L40b1aa;
case 0x40b1ac:c.instructions+=1;goto B40b1ac;
case 0x40b1b0:goto L40b1b0;
case 0x40b1b4:c.instructions+=4;goto B40b1b4;
case 0x40b1b6:c.instructions+=3;goto B40b1b6;
case 0x40b1b8:c.instructions+=2;goto B40b1b8;
case 0x40b1bb:c.instructions+=1;goto B40b1bb;
case 0x40b1bd:goto L40b1bd;
case 0x40b1bf:c.instructions+=1;goto B40b1bf;
case 0x40b1c3:goto L40b1c3;
case 0x40b1c7:c.instructions+=5;goto B40b1c7;
case 0x40b1c9:c.instructions+=4;goto B40b1c9;
case 0x40b1cb:c.instructions+=3;goto B40b1cb;
case 0x40b1cd:c.instructions+=2;goto B40b1cd;
case 0x40b1d0:c.instructions+=1;goto B40b1d0;
case 0x40b1d2:goto L40b1d2;
case 0x40b1d3:c.instructions+=5;goto B40b1d3;
case 0x40b1d4:c.instructions+=4;goto B40b1d4;
case 0x40b1d5:c.instructions+=3;goto B40b1d5;
case 0x40b1d7:c.instructions+=2;goto B40b1d7;
case 0x40b1d8:c.instructions+=1;goto B40b1d8;
case 0x40b1d9:goto L40b1d9;
case 0x40b1db:goto L40b1db;
case 0x40b1dc:c.instructions+=3;goto B40b1dc;
case 0x40b1df:c.instructions+=2;goto B40b1df;
case 0x40b1e1:c.instructions+=1;goto B40b1e1;
case 0x40b1e3:goto L40b1e3;
case 0x40b1e4:c.instructions+=5;goto B40b1e4;
case 0x40b1e5:c.instructions+=4;goto B40b1e5;
case 0x40b1e6:c.instructions+=3;goto B40b1e6;
case 0x40b1e8:c.instructions+=2;goto B40b1e8;
case 0x40b1e9:c.instructions+=1;goto B40b1e9;
case 0x40b1f0:goto L40b1f0;
case 0x40b1f1:c.instructions+=5;goto B40b1f1;
case 0x40b1f2:c.instructions+=4;goto B40b1f2;
case 0x40b1f4:c.instructions+=3;goto B40b1f4;
case 0x40b1f8:c.instructions+=2;goto B40b1f8;
case 0x40b1fc:c.instructions+=1;goto B40b1fc;
case 0x40b1fe:goto L40b1fe;
case 0x40b202:c.instructions+=2;goto B40b202;
case 0x40b206:c.instructions+=1;goto B40b206;
case 0x40b208:goto L40b208;
case 0x40b20b:c.instructions+=2;goto B40b20b;
case 0x40b20d:c.instructions+=1;goto B40b20d;
case 0x40b20f:goto L40b20f;
case 0x40b216:c.instructions+=4;goto B40b216;
case 0x40b219:c.instructions+=3;goto B40b219;
case 0x40b21c:c.instructions+=2;goto B40b21c;
case 0x40b223:c.instructions+=1;goto B40b223;
case 0x40b225:goto L40b225;
case 0x40b228:c.instructions+=4;goto B40b228;
case 0x40b22a:c.instructions+=3;goto B40b22a;
case 0x40b22d:c.instructions+=2;goto B40b22d;
case 0x40b234:c.instructions+=1;goto B40b234;
case 0x40b236:goto L40b236;
case 0x40b238:goto L40b238;
case 0x40b23c:c.instructions+=2;goto B40b23c;
case 0x40b23e:c.instructions+=1;goto B40b23e;
case 0x40b240:goto L40b240;
case 0x40b243:c.instructions+=1;goto B40b243;
case 0x40b245:goto L40b245;
case 0x40b248:c.instructions+=2;goto B40b248;
case 0x40b24c:c.instructions+=1;goto B40b24c;
case 0x40b24e:goto L40b24e;
case 0x40b251:c.instructions+=1;goto B40b251;
case 0x40b253:goto L40b253;
case 0x40b256:c.instructions+=1;goto B40b256;
case 0x40b258:goto L40b258;
case 0x40b25b:c.instructions+=2;goto B40b25b;
case 0x40b25f:c.instructions+=1;goto B40b25f;
case 0x40b261:goto L40b261;
case 0x40b269:goto L40b269;
case 0x40b26d:c.instructions+=7;goto B40b26d;
case 0x40b270:c.instructions+=6;goto B40b270;
case 0x40b274:c.instructions+=5;goto B40b274;
case 0x40b275:c.instructions+=4;goto B40b275;
case 0x40b279:c.instructions+=3;goto B40b279;
case 0x40b27f:c.instructions+=2;goto B40b27f;
case 0x40b283:c.instructions+=1;goto B40b283;
case 0x40b288:goto L40b288;
case 0x40b28c:c.instructions+=4;goto B40b28c;
case 0x40b28d:c.instructions+=3;goto B40b28d;
case 0x40b291:c.instructions+=2;goto B40b291;
case 0x40b292:c.instructions+=1;goto B40b292;
case 0x40b2a0:goto L40b2a0;
case 0x40b2a1:c.instructions+=5;goto B40b2a1;
case 0x40b2a2:c.instructions+=4;goto B40b2a2;
case 0x40b2a4:c.instructions+=3;goto B40b2a4;
case 0x40b2a8:c.instructions+=2;goto B40b2a8;
case 0x40b2ac:c.instructions+=1;goto B40b2ac;
case 0x40b2ae:goto L40b2ae;
case 0x40b2b2:c.instructions+=2;goto B40b2b2;
case 0x40b2b6:c.instructions+=1;goto B40b2b6;
case 0x40b2b8:goto L40b2b8;
case 0x40b2bb:c.instructions+=2;goto B40b2bb;
case 0x40b2bd:c.instructions+=1;goto B40b2bd;
case 0x40b2bf:goto L40b2bf;
case 0x40b2c6:c.instructions+=4;goto B40b2c6;
case 0x40b2c9:c.instructions+=3;goto B40b2c9;
case 0x40b2cc:c.instructions+=2;goto B40b2cc;
case 0x40b2d3:c.instructions+=1;goto B40b2d3;
case 0x40b2d5:goto L40b2d5;
case 0x40b2d8:c.instructions+=4;goto B40b2d8;
case 0x40b2da:c.instructions+=3;goto B40b2da;
case 0x40b2dd:c.instructions+=2;goto B40b2dd;
case 0x40b2e4:c.instructions+=1;goto B40b2e4;
case 0x40b2e6:goto L40b2e6;
case 0x40b2e8:goto L40b2e8;
case 0x40b2ec:c.instructions+=2;goto B40b2ec;
case 0x40b2ee:c.instructions+=1;goto B40b2ee;
case 0x40b2f0:goto L40b2f0;
case 0x40b2f3:c.instructions+=1;goto B40b2f3;
case 0x40b2f5:goto L40b2f5;
case 0x40b2f8:c.instructions+=2;goto B40b2f8;
case 0x40b2fc:c.instructions+=1;goto B40b2fc;
case 0x40b2fe:goto L40b2fe;
case 0x40b301:c.instructions+=1;goto B40b301;
case 0x40b303:goto L40b303;
case 0x40b306:c.instructions+=1;goto B40b306;
case 0x40b308:goto L40b308;
case 0x40b30b:c.instructions+=2;goto B40b30b;
case 0x40b30f:c.instructions+=1;goto B40b30f;
case 0x40b311:goto L40b311;
case 0x40b319:goto L40b319;
case 0x40b31d:c.instructions+=8;goto B40b31d;
case 0x40b320:c.instructions+=7;goto B40b320;
case 0x40b324:c.instructions+=6;goto B40b324;
case 0x40b325:c.instructions+=5;goto B40b325;
case 0x40b329:c.instructions+=4;goto B40b329;
case 0x40b32f:c.instructions+=3;goto B40b32f;
case 0x40b331:c.instructions+=2;goto B40b331;
case 0x40b335:c.instructions+=1;goto B40b335;
case 0x40b33a:goto L40b33a;
case 0x40b33e:c.instructions+=4;goto B40b33e;
case 0x40b33f:c.instructions+=3;goto B40b33f;
case 0x40b343:c.instructions+=2;goto B40b343;
case 0x40b344:c.instructions+=1;goto B40b344;
case 0x40b350:goto L40b350;
case 0x40b354:c.instructions+=6;goto B40b354;
case 0x40b357:c.instructions+=5;goto B40b357;
case 0x40b358:c.instructions+=4;goto B40b358;
case 0x40b35a:c.instructions+=3;goto B40b35a;
case 0x40b35d:c.instructions+=2;goto B40b35d;
case 0x40b360:c.instructions+=1;goto B40b360;
case 0x40b365:goto L40b365;
case 0x40b369:c.instructions+=2;goto B40b369;
case 0x40b36d:c.instructions+=1;goto B40b36d;
case 0x40b36f:goto L40b36f;
case 0x40b373:c.instructions+=2;goto B40b373;
case 0x40b377:c.instructions+=1;goto B40b377;
case 0x40b379:goto L40b379;
case 0x40b37c:c.instructions+=2;goto B40b37c;
case 0x40b37e:c.instructions+=1;goto B40b37e;
case 0x40b380:goto L40b380;
case 0x40b387:c.instructions+=4;goto B40b387;
case 0x40b38a:c.instructions+=3;goto B40b38a;
case 0x40b38d:c.instructions+=2;goto B40b38d;
case 0x40b394:c.instructions+=1;goto B40b394;
case 0x40b396:goto L40b396;
case 0x40b399:c.instructions+=4;goto B40b399;
case 0x40b39b:c.instructions+=3;goto B40b39b;
case 0x40b39e:c.instructions+=2;goto B40b39e;
case 0x40b3a5:c.instructions+=1;goto B40b3a5;
case 0x40b3a7:goto L40b3a7;
case 0x40b3a9:goto L40b3a9;
case 0x40b3ad:c.instructions+=15;goto B40b3ad;
case 0x40b3b1:c.instructions+=14;goto B40b3b1;
case 0x40b3b4:c.instructions+=13;goto B40b3b4;
case 0x40b3b8:c.instructions+=12;goto B40b3b8;
case 0x40b3bb:c.instructions+=11;goto B40b3bb;
case 0x40b3bf:c.instructions+=10;goto B40b3bf;
case 0x40b3c3:c.instructions+=9;goto B40b3c3;
case 0x40b3c9:c.instructions+=8;goto B40b3c9;
case 0x40b3cd:c.instructions+=7;goto B40b3cd;
case 0x40b3d1:c.instructions+=6;goto B40b3d1;
case 0x40b3d7:c.instructions+=5;goto B40b3d7;
case 0x40b3d9:c.instructions+=4;goto B40b3d9;
case 0x40b3dd:c.instructions+=3;goto B40b3dd;
case 0x40b3df:c.instructions+=2;goto B40b3df;
case 0x40b3e2:c.instructions+=1;goto B40b3e2;
case 0x40b3e4:goto L40b3e4;
case 0x40b3e6:c.instructions+=1;goto B40b3e6;
case 0x40b3ea:goto L40b3ea;
case 0x40b3ee:c.instructions+=16;goto B40b3ee;
case 0x40b3f1:c.instructions+=15;goto B40b3f1;
case 0x40b3f5:c.instructions+=14;goto B40b3f5;
case 0x40b3f9:c.instructions+=13;goto B40b3f9;
case 0x40b3ff:c.instructions+=12;goto B40b3ff;
case 0x40b403:c.instructions+=11;goto B40b403;
case 0x40b405:c.instructions+=10;goto B40b405;
case 0x40b407:c.instructions+=9;goto B40b407;
case 0x40b40d:c.instructions+=8;goto B40b40d;
case 0x40b411:c.instructions+=7;goto B40b411;
case 0x40b413:c.instructions+=6;goto B40b413;
case 0x40b415:c.instructions+=5;goto B40b415;
case 0x40b419:c.instructions+=4;goto B40b419;
case 0x40b41d:c.instructions+=3;goto B40b41d;
case 0x40b41f:c.instructions+=2;goto B40b41f;
case 0x40b422:c.instructions+=1;goto B40b422;
case 0x40b424:goto L40b424;
case 0x40b426:c.instructions+=1;goto B40b426;
case 0x40b42a:goto L40b42a;
case 0x40b42e:c.instructions+=11;goto B40b42e;
case 0x40b430:c.instructions+=10;goto B40b430;
case 0x40b432:c.instructions+=9;goto B40b432;
case 0x40b438:c.instructions+=8;goto B40b438;
case 0x40b43c:c.instructions+=7;goto B40b43c;
case 0x40b43e:c.instructions+=6;goto B40b43e;
case 0x40b440:c.instructions+=5;goto B40b440;
case 0x40b443:c.instructions+=4;goto B40b443;
case 0x40b447:c.instructions+=3;goto B40b447;
case 0x40b449:c.instructions+=2;goto B40b449;
case 0x40b44c:c.instructions+=1;goto B40b44c;
case 0x40b44e:goto L40b44e;
case 0x40b450:c.instructions+=1;goto B40b450;
case 0x40b454:goto L40b454;
case 0x40b458:c.instructions+=4;goto B40b458;
case 0x40b45a:c.instructions+=3;goto B40b45a;
case 0x40b45c:c.instructions+=2;goto B40b45c;
case 0x40b45f:c.instructions+=1;goto B40b45f;
case 0x40b461:goto L40b461;
case 0x40b463:c.instructions+=1;goto B40b463;
case 0x40b467:goto L40b467;
case 0x40b46a:c.instructions+=16;goto B40b46a;
case 0x40b46e:c.instructions+=15;goto B40b46e;
case 0x40b472:c.instructions+=14;goto B40b472;
case 0x40b475:c.instructions+=13;goto B40b475;
case 0x40b479:c.instructions+=12;goto B40b479;
case 0x40b47c:c.instructions+=11;goto B40b47c;
case 0x40b480:c.instructions+=10;goto B40b480;
case 0x40b484:c.instructions+=9;goto B40b484;
case 0x40b48a:c.instructions+=8;goto B40b48a;
case 0x40b48e:c.instructions+=7;goto B40b48e;
case 0x40b492:c.instructions+=6;goto B40b492;
case 0x40b498:c.instructions+=5;goto B40b498;
case 0x40b49a:c.instructions+=4;goto B40b49a;
case 0x40b49e:c.instructions+=3;goto B40b49e;
case 0x40b4a0:c.instructions+=2;goto B40b4a0;
case 0x40b4a3:c.instructions+=1;goto B40b4a3;
case 0x40b4a5:goto L40b4a5;
case 0x40b4a7:c.instructions+=1;goto B40b4a7;
case 0x40b4ab:goto L40b4ab;
case 0x40b4af:c.instructions+=16;goto B40b4af;
case 0x40b4b2:c.instructions+=15;goto B40b4b2;
case 0x40b4b6:c.instructions+=14;goto B40b4b6;
case 0x40b4ba:c.instructions+=13;goto B40b4ba;
case 0x40b4c0:c.instructions+=12;goto B40b4c0;
case 0x40b4c4:c.instructions+=11;goto B40b4c4;
case 0x40b4c6:c.instructions+=10;goto B40b4c6;
case 0x40b4c8:c.instructions+=9;goto B40b4c8;
case 0x40b4ce:c.instructions+=8;goto B40b4ce;
case 0x40b4d2:c.instructions+=7;goto B40b4d2;
case 0x40b4d4:c.instructions+=6;goto B40b4d4;
case 0x40b4d6:c.instructions+=5;goto B40b4d6;
case 0x40b4da:c.instructions+=4;goto B40b4da;
case 0x40b4de:c.instructions+=3;goto B40b4de;
case 0x40b4e0:c.instructions+=2;goto B40b4e0;
case 0x40b4e3:c.instructions+=1;goto B40b4e3;
case 0x40b4e5:goto L40b4e5;
case 0x40b4e7:c.instructions+=1;goto B40b4e7;
case 0x40b4eb:goto L40b4eb;
case 0x40b4ef:c.instructions+=11;goto B40b4ef;
case 0x40b4f1:c.instructions+=10;goto B40b4f1;
case 0x40b4f3:c.instructions+=9;goto B40b4f3;
case 0x40b4f9:c.instructions+=8;goto B40b4f9;
case 0x40b4fd:c.instructions+=7;goto B40b4fd;
case 0x40b4ff:c.instructions+=6;goto B40b4ff;
case 0x40b501:c.instructions+=5;goto B40b501;
case 0x40b504:c.instructions+=4;goto B40b504;
case 0x40b508:c.instructions+=3;goto B40b508;
case 0x40b50a:c.instructions+=2;goto B40b50a;
case 0x40b50d:c.instructions+=1;goto B40b50d;
case 0x40b50f:goto L40b50f;
case 0x40b511:c.instructions+=1;goto B40b511;
case 0x40b515:goto L40b515;
case 0x40b519:c.instructions+=4;goto B40b519;
case 0x40b51b:c.instructions+=3;goto B40b51b;
case 0x40b51d:c.instructions+=2;goto B40b51d;
case 0x40b520:c.instructions+=1;goto B40b520;
case 0x40b522:goto L40b522;
case 0x40b524:c.instructions+=1;goto B40b524;
case 0x40b528:goto L40b528;
case 0x40b52b:c.instructions+=16;goto B40b52b;
case 0x40b52f:c.instructions+=15;goto B40b52f;
case 0x40b533:c.instructions+=14;goto B40b533;
case 0x40b536:c.instructions+=13;goto B40b536;
case 0x40b53a:c.instructions+=12;goto B40b53a;
case 0x40b53d:c.instructions+=11;goto B40b53d;
case 0x40b541:c.instructions+=10;goto B40b541;
case 0x40b545:c.instructions+=9;goto B40b545;
case 0x40b54b:c.instructions+=8;goto B40b54b;
case 0x40b54f:c.instructions+=7;goto B40b54f;
case 0x40b553:c.instructions+=6;goto B40b553;
case 0x40b559:c.instructions+=5;goto B40b559;
case 0x40b55b:c.instructions+=4;goto B40b55b;
case 0x40b55f:c.instructions+=3;goto B40b55f;
case 0x40b561:c.instructions+=2;goto B40b561;
case 0x40b564:c.instructions+=1;goto B40b564;
case 0x40b566:goto L40b566;
case 0x40b568:c.instructions+=1;goto B40b568;
case 0x40b56c:goto L40b56c;
case 0x40b570:c.instructions+=16;goto B40b570;
case 0x40b573:c.instructions+=15;goto B40b573;
case 0x40b577:c.instructions+=14;goto B40b577;
case 0x40b57b:c.instructions+=13;goto B40b57b;
case 0x40b581:c.instructions+=12;goto B40b581;
case 0x40b585:c.instructions+=11;goto B40b585;
case 0x40b587:c.instructions+=10;goto B40b587;
case 0x40b589:c.instructions+=9;goto B40b589;
case 0x40b58f:c.instructions+=8;goto B40b58f;
case 0x40b593:c.instructions+=7;goto B40b593;
case 0x40b595:c.instructions+=6;goto B40b595;
case 0x40b597:c.instructions+=5;goto B40b597;
case 0x40b59b:c.instructions+=4;goto B40b59b;
case 0x40b59f:c.instructions+=3;goto B40b59f;
case 0x40b5a1:c.instructions+=2;goto B40b5a1;
case 0x40b5a4:c.instructions+=1;goto B40b5a4;
case 0x40b5a6:goto L40b5a6;
case 0x40b5a8:c.instructions+=1;goto B40b5a8;
case 0x40b5ac:goto L40b5ac;
case 0x40b5b0:c.instructions+=11;goto B40b5b0;
case 0x40b5b2:c.instructions+=10;goto B40b5b2;
case 0x40b5b4:c.instructions+=9;goto B40b5b4;
case 0x40b5ba:c.instructions+=8;goto B40b5ba;
case 0x40b5be:c.instructions+=7;goto B40b5be;
case 0x40b5c0:c.instructions+=6;goto B40b5c0;
case 0x40b5c2:c.instructions+=5;goto B40b5c2;
case 0x40b5c5:c.instructions+=4;goto B40b5c5;
case 0x40b5c9:c.instructions+=3;goto B40b5c9;
case 0x40b5cb:c.instructions+=2;goto B40b5cb;
case 0x40b5ce:c.instructions+=1;goto B40b5ce;
case 0x40b5d0:goto L40b5d0;
case 0x40b5d2:c.instructions+=1;goto B40b5d2;
case 0x40b5d6:goto L40b5d6;
case 0x40b5da:c.instructions+=4;goto B40b5da;
case 0x40b5dc:c.instructions+=3;goto B40b5dc;
case 0x40b5de:c.instructions+=2;goto B40b5de;
case 0x40b5e1:c.instructions+=1;goto B40b5e1;
case 0x40b5e3:goto L40b5e3;
case 0x40b5e5:c.instructions+=1;goto B40b5e5;
case 0x40b5e9:goto L40b5e9;
case 0x40b5ec:c.instructions+=16;goto B40b5ec;
case 0x40b5f0:c.instructions+=15;goto B40b5f0;
case 0x40b5f4:c.instructions+=14;goto B40b5f4;
case 0x40b5f7:c.instructions+=13;goto B40b5f7;
case 0x40b5fb:c.instructions+=12;goto B40b5fb;
case 0x40b5fe:c.instructions+=11;goto B40b5fe;
case 0x40b602:c.instructions+=10;goto B40b602;
case 0x40b606:c.instructions+=9;goto B40b606;
case 0x40b60c:c.instructions+=8;goto B40b60c;
case 0x40b610:c.instructions+=7;goto B40b610;
case 0x40b614:c.instructions+=6;goto B40b614;
case 0x40b61a:c.instructions+=5;goto B40b61a;
case 0x40b61c:c.instructions+=4;goto B40b61c;
case 0x40b620:c.instructions+=3;goto B40b620;
case 0x40b622:c.instructions+=2;goto B40b622;
case 0x40b625:c.instructions+=1;goto B40b625;
case 0x40b627:goto L40b627;
case 0x40b629:c.instructions+=1;goto B40b629;
case 0x40b62d:goto L40b62d;
case 0x40b631:c.instructions+=16;goto B40b631;
case 0x40b634:c.instructions+=15;goto B40b634;
case 0x40b638:c.instructions+=14;goto B40b638;
case 0x40b63c:c.instructions+=13;goto B40b63c;
case 0x40b642:c.instructions+=12;goto B40b642;
case 0x40b646:c.instructions+=11;goto B40b646;
case 0x40b648:c.instructions+=10;goto B40b648;
case 0x40b64a:c.instructions+=9;goto B40b64a;
case 0x40b650:c.instructions+=8;goto B40b650;
case 0x40b654:c.instructions+=7;goto B40b654;
case 0x40b656:c.instructions+=6;goto B40b656;
case 0x40b658:c.instructions+=5;goto B40b658;
case 0x40b65c:c.instructions+=4;goto B40b65c;
case 0x40b660:c.instructions+=3;goto B40b660;
case 0x40b662:c.instructions+=2;goto B40b662;
case 0x40b665:c.instructions+=1;goto B40b665;
case 0x40b667:goto L40b667;
case 0x40b669:c.instructions+=1;goto B40b669;
case 0x40b66d:goto L40b66d;
case 0x40b671:c.instructions+=11;goto B40b671;
case 0x40b673:c.instructions+=10;goto B40b673;
case 0x40b675:c.instructions+=9;goto B40b675;
case 0x40b67b:c.instructions+=8;goto B40b67b;
case 0x40b67f:c.instructions+=7;goto B40b67f;
case 0x40b681:c.instructions+=6;goto B40b681;
case 0x40b683:c.instructions+=5;goto B40b683;
case 0x40b686:c.instructions+=4;goto B40b686;
case 0x40b68a:c.instructions+=3;goto B40b68a;
case 0x40b68c:c.instructions+=2;goto B40b68c;
case 0x40b68f:c.instructions+=1;goto B40b68f;
case 0x40b691:goto L40b691;
case 0x40b693:c.instructions+=1;goto B40b693;
case 0x40b697:goto L40b697;
case 0x40b69b:c.instructions+=4;goto B40b69b;
case 0x40b69d:c.instructions+=3;goto B40b69d;
case 0x40b69f:c.instructions+=2;goto B40b69f;
case 0x40b6a2:c.instructions+=1;goto B40b6a2;
case 0x40b6a4:goto L40b6a4;
case 0x40b6a6:c.instructions+=1;goto B40b6a6;
case 0x40b6aa:goto L40b6aa;
case 0x40b6ad:c.instructions+=16;goto B40b6ad;
case 0x40b6b1:c.instructions+=15;goto B40b6b1;
case 0x40b6b5:c.instructions+=14;goto B40b6b5;
case 0x40b6b8:c.instructions+=13;goto B40b6b8;
case 0x40b6bc:c.instructions+=12;goto B40b6bc;
case 0x40b6bf:c.instructions+=11;goto B40b6bf;
case 0x40b6c3:c.instructions+=10;goto B40b6c3;
case 0x40b6c7:c.instructions+=9;goto B40b6c7;
case 0x40b6cd:c.instructions+=8;goto B40b6cd;
case 0x40b6d1:c.instructions+=7;goto B40b6d1;
case 0x40b6d5:c.instructions+=6;goto B40b6d5;
case 0x40b6db:c.instructions+=5;goto B40b6db;
case 0x40b6dd:c.instructions+=4;goto B40b6dd;
case 0x40b6e1:c.instructions+=3;goto B40b6e1;
case 0x40b6e3:c.instructions+=2;goto B40b6e3;
case 0x40b6e6:c.instructions+=1;goto B40b6e6;
case 0x40b6e8:goto L40b6e8;
case 0x40b6ea:c.instructions+=1;goto B40b6ea;
case 0x40b6ee:goto L40b6ee;
case 0x40b6f2:c.instructions+=16;goto B40b6f2;
case 0x40b6f5:c.instructions+=15;goto B40b6f5;
case 0x40b6f9:c.instructions+=14;goto B40b6f9;
case 0x40b6fd:c.instructions+=13;goto B40b6fd;
case 0x40b703:c.instructions+=12;goto B40b703;
case 0x40b707:c.instructions+=11;goto B40b707;
case 0x40b709:c.instructions+=10;goto B40b709;
case 0x40b70b:c.instructions+=9;goto B40b70b;
case 0x40b711:c.instructions+=8;goto B40b711;
case 0x40b715:c.instructions+=7;goto B40b715;
case 0x40b717:c.instructions+=6;goto B40b717;
case 0x40b719:c.instructions+=5;goto B40b719;
case 0x40b71d:c.instructions+=4;goto B40b71d;
case 0x40b721:c.instructions+=3;goto B40b721;
case 0x40b723:c.instructions+=2;goto B40b723;
case 0x40b726:c.instructions+=1;goto B40b726;
case 0x40b728:goto L40b728;
case 0x40b72a:c.instructions+=1;goto B40b72a;
case 0x40b72e:goto L40b72e;
case 0x40b732:c.instructions+=11;goto B40b732;
case 0x40b734:c.instructions+=10;goto B40b734;
case 0x40b736:c.instructions+=9;goto B40b736;
case 0x40b73c:c.instructions+=8;goto B40b73c;
case 0x40b740:c.instructions+=7;goto B40b740;
case 0x40b742:c.instructions+=6;goto B40b742;
case 0x40b744:c.instructions+=5;goto B40b744;
case 0x40b747:c.instructions+=4;goto B40b747;
case 0x40b74b:c.instructions+=3;goto B40b74b;
case 0x40b74d:c.instructions+=2;goto B40b74d;
case 0x40b750:c.instructions+=1;goto B40b750;
case 0x40b752:goto L40b752;
case 0x40b754:c.instructions+=1;goto B40b754;
case 0x40b758:goto L40b758;
case 0x40b75c:c.instructions+=4;goto B40b75c;
case 0x40b75e:c.instructions+=3;goto B40b75e;
case 0x40b760:c.instructions+=2;goto B40b760;
case 0x40b763:c.instructions+=1;goto B40b763;
case 0x40b765:goto L40b765;
case 0x40b769:c.instructions+=5;goto B40b769;
case 0x40b76b:c.instructions+=4;goto B40b76b;
case 0x40b76e:c.instructions+=3;goto B40b76e;
case 0x40b76f:c.instructions+=2;goto B40b76f;
case 0x40b772:c.instructions+=1;goto B40b772;
case 0x40b775:goto L40b775;
case 0x40b778:c.instructions+=3;goto B40b778;
case 0x40b779:c.instructions+=2;goto B40b779;
case 0x40b77c:c.instructions+=1;goto B40b77c;
case 0x40b780:goto L40b780;
case 0x40b781:c.instructions+=3;goto B40b781;
case 0x40b785:c.instructions+=2;goto B40b785;
case 0x40b789:c.instructions+=1;goto B40b789;
case 0x40b78b:goto L40b78b;
case 0x40b78f:c.instructions+=2;goto B40b78f;
case 0x40b793:c.instructions+=1;goto B40b793;
case 0x40b795:goto L40b795;
case 0x40b798:c.instructions+=2;goto B40b798;
case 0x40b79a:c.instructions+=1;goto B40b79a;
case 0x40b79c:goto L40b79c;
case 0x40b7a3:c.instructions+=4;goto B40b7a3;
case 0x40b7a6:c.instructions+=3;goto B40b7a6;
case 0x40b7a9:c.instructions+=2;goto B40b7a9;
case 0x40b7b0:c.instructions+=1;goto B40b7b0;
case 0x40b7b2:goto L40b7b2;
case 0x40b7b5:c.instructions+=4;goto B40b7b5;
case 0x40b7b7:c.instructions+=3;goto B40b7b7;
case 0x40b7ba:c.instructions+=2;goto B40b7ba;
case 0x40b7c1:c.instructions+=1;goto B40b7c1;
case 0x40b7c3:goto L40b7c3;
case 0x40b7c5:goto L40b7c5;
case 0x40b7c9:c.instructions+=2;goto B40b7c9;
case 0x40b7cb:c.instructions+=1;goto B40b7cb;
case 0x40b7cd:goto L40b7cd;
case 0x40b7d0:c.instructions+=1;goto B40b7d0;
case 0x40b7d2:goto L40b7d2;
case 0x40b7d5:c.instructions+=2;goto B40b7d5;
case 0x40b7d9:c.instructions+=1;goto B40b7d9;
case 0x40b7db:goto L40b7db;
case 0x40b7de:c.instructions+=1;goto B40b7de;
case 0x40b7e0:goto L40b7e0;
case 0x40b7e3:c.instructions+=1;goto B40b7e3;
case 0x40b7e5:goto L40b7e5;
case 0x40b7e8:c.instructions+=2;goto B40b7e8;
case 0x40b7ec:c.instructions+=1;goto B40b7ec;
case 0x40b7ee:goto L40b7ee;
case 0x40b7f6:goto L40b7f6;
case 0x40b7f8:c.instructions+=1;goto B40b7f8;
case 0x40b7fa:goto L40b7fa;
case 0x40b7fd:c.instructions+=1;goto B40b7fd;
case 0x40b7ff:goto L40b7ff;
case 0x40b800:c.instructions+=1;goto B40b800;
case 0x40b802:goto L40b802;
case 0x40b805:c.instructions+=1;goto B40b805;
case 0x40b807:goto L40b807;
case 0x40b80a:c.instructions+=1;goto B40b80a;
case 0x40b80c:goto L40b80c;
case 0x40b80f:goto L40b80f;
case 0x40b813:c.instructions+=8;goto B40b813;
case 0x40b816:c.instructions+=7;goto B40b816;
case 0x40b81a:c.instructions+=6;goto B40b81a;
case 0x40b81b:c.instructions+=5;goto B40b81b;
case 0x40b81d:c.instructions+=4;goto B40b81d;
case 0x40b821:c.instructions+=3;goto B40b821;
case 0x40b827:c.instructions+=2;goto B40b827;
case 0x40b82b:c.instructions+=1;goto B40b82b;
case 0x40b830:goto L40b830;
case 0x40b834:c.instructions+=3;goto B40b834;
case 0x40b838:c.instructions+=2;goto B40b838;
case 0x40b839:c.instructions+=1;goto B40b839;
case 0x40b840:goto L40b840;
case 0x40b841:c.instructions+=3;goto B40b841;
case 0x40b845:c.instructions+=2;goto B40b845;
case 0x40b849:c.instructions+=1;goto B40b849;
case 0x40b84b:goto L40b84b;
case 0x40b84f:c.instructions+=2;goto B40b84f;
case 0x40b853:c.instructions+=1;goto B40b853;
case 0x40b855:goto L40b855;
case 0x40b858:c.instructions+=2;goto B40b858;
case 0x40b85a:c.instructions+=1;goto B40b85a;
case 0x40b85c:goto L40b85c;
case 0x40b863:c.instructions+=4;goto B40b863;
case 0x40b866:c.instructions+=3;goto B40b866;
case 0x40b869:c.instructions+=2;goto B40b869;
case 0x40b870:c.instructions+=1;goto B40b870;
case 0x40b872:goto L40b872;
case 0x40b875:c.instructions+=4;goto B40b875;
case 0x40b877:c.instructions+=3;goto B40b877;
case 0x40b87a:c.instructions+=2;goto B40b87a;
case 0x40b881:c.instructions+=1;goto B40b881;
case 0x40b883:goto L40b883;
case 0x40b885:goto L40b885;
case 0x40b889:c.instructions+=2;goto B40b889;
case 0x40b88b:c.instructions+=1;goto B40b88b;
case 0x40b88d:goto L40b88d;
case 0x40b890:c.instructions+=1;goto B40b890;
case 0x40b892:goto L40b892;
case 0x40b895:c.instructions+=2;goto B40b895;
case 0x40b899:c.instructions+=1;goto B40b899;
case 0x40b89b:goto L40b89b;
case 0x40b89e:c.instructions+=1;goto B40b89e;
case 0x40b8a0:goto L40b8a0;
case 0x40b8a3:c.instructions+=1;goto B40b8a3;
case 0x40b8a5:goto L40b8a5;
case 0x40b8a8:c.instructions+=2;goto B40b8a8;
case 0x40b8ac:c.instructions+=1;goto B40b8ac;
case 0x40b8ae:goto L40b8ae;
case 0x40b8b6:goto L40b8b6;
case 0x40b8b8:c.instructions+=1;goto B40b8b8;
case 0x40b8ba:goto L40b8ba;
case 0x40b8bd:c.instructions+=1;goto B40b8bd;
case 0x40b8bf:goto L40b8bf;
case 0x40b8c0:c.instructions+=1;goto B40b8c0;
case 0x40b8c2:goto L40b8c2;
case 0x40b8c5:c.instructions+=1;goto B40b8c5;
case 0x40b8c7:goto L40b8c7;
case 0x40b8ca:c.instructions+=1;goto B40b8ca;
case 0x40b8cc:goto L40b8cc;
case 0x40b8cf:goto L40b8cf;
case 0x40b8d3:c.instructions+=9;goto B40b8d3;
case 0x40b8d6:c.instructions+=8;goto B40b8d6;
case 0x40b8da:c.instructions+=7;goto B40b8da;
case 0x40b8db:c.instructions+=6;goto B40b8db;
case 0x40b8dd:c.instructions+=5;goto B40b8dd;
case 0x40b8e1:c.instructions+=4;goto B40b8e1;
case 0x40b8e7:c.instructions+=3;goto B40b8e7;
case 0x40b8e9:c.instructions+=2;goto B40b8e9;
case 0x40b8ed:c.instructions+=1;goto B40b8ed;
case 0x40b8f2:goto L40b8f2;
case 0x40b8f6:c.instructions+=3;goto B40b8f6;
case 0x40b8fa:c.instructions+=2;goto B40b8fa;
case 0x40b8fb:c.instructions+=1;goto B40b8fb;
case 0x40b900:goto L40b900;
case 0x40b904:c.instructions+=6;goto B40b904;
case 0x40b907:c.instructions+=5;goto B40b907;
case 0x40b908:c.instructions+=4;goto B40b908;
case 0x40b90a:c.instructions+=3;goto B40b90a;
case 0x40b90d:c.instructions+=2;goto B40b90d;
case 0x40b910:c.instructions+=1;goto B40b910;
case 0x40b915:goto L40b915;
case 0x40b919:c.instructions+=2;goto B40b919;
case 0x40b91d:c.instructions+=1;goto B40b91d;
case 0x40b91f:goto L40b91f;
case 0x40b923:c.instructions+=2;goto B40b923;
case 0x40b927:c.instructions+=1;goto B40b927;
case 0x40b929:goto L40b929;
case 0x40b92c:c.instructions+=2;goto B40b92c;
case 0x40b92e:c.instructions+=1;goto B40b92e;
case 0x40b930:goto L40b930;
case 0x40b937:c.instructions+=4;goto B40b937;
case 0x40b93a:c.instructions+=3;goto B40b93a;
case 0x40b93d:c.instructions+=2;goto B40b93d;
case 0x40b944:c.instructions+=1;goto B40b944;
case 0x40b946:goto L40b946;
case 0x40b949:c.instructions+=4;goto B40b949;
case 0x40b94b:c.instructions+=3;goto B40b94b;
case 0x40b94e:c.instructions+=2;goto B40b94e;
case 0x40b955:c.instructions+=1;goto B40b955;
case 0x40b957:goto L40b957;
case 0x40b959:goto L40b959;
case 0x40b95d:c.instructions+=16;goto B40b95d;
case 0x40b961:c.instructions+=15;goto B40b961;
case 0x40b964:c.instructions+=14;goto B40b964;
case 0x40b968:c.instructions+=13;goto B40b968;
case 0x40b96b:c.instructions+=12;goto B40b96b;
case 0x40b96f:c.instructions+=11;goto B40b96f;
case 0x40b973:c.instructions+=10;goto B40b973;
case 0x40b979:c.instructions+=9;goto B40b979;
case 0x40b97b:c.instructions+=8;goto B40b97b;
case 0x40b97f:c.instructions+=7;goto B40b97f;
case 0x40b985:c.instructions+=6;goto B40b985;
case 0x40b989:c.instructions+=5;goto B40b989;
case 0x40b98d:c.instructions+=4;goto B40b98d;
case 0x40b98f:c.instructions+=3;goto B40b98f;
case 0x40b991:c.instructions+=2;goto B40b991;
case 0x40b994:c.instructions+=1;goto B40b994;
case 0x40b996:goto L40b996;
case 0x40b998:c.instructions+=1;goto B40b998;
case 0x40b99c:goto L40b99c;
case 0x40b9a0:c.instructions+=16;goto B40b9a0;
case 0x40b9a3:c.instructions+=15;goto B40b9a3;
case 0x40b9a7:c.instructions+=14;goto B40b9a7;
case 0x40b9ab:c.instructions+=13;goto B40b9ab;
case 0x40b9b1:c.instructions+=12;goto B40b9b1;
case 0x40b9b5:c.instructions+=11;goto B40b9b5;
case 0x40b9b7:c.instructions+=10;goto B40b9b7;
case 0x40b9b9:c.instructions+=9;goto B40b9b9;
case 0x40b9bf:c.instructions+=8;goto B40b9bf;
case 0x40b9c3:c.instructions+=7;goto B40b9c3;
case 0x40b9c5:c.instructions+=6;goto B40b9c5;
case 0x40b9c9:c.instructions+=5;goto B40b9c9;
case 0x40b9cd:c.instructions+=4;goto B40b9cd;
case 0x40b9cf:c.instructions+=3;goto B40b9cf;
case 0x40b9d1:c.instructions+=2;goto B40b9d1;
case 0x40b9d4:c.instructions+=1;goto B40b9d4;
case 0x40b9d6:goto L40b9d6;
case 0x40b9d8:c.instructions+=1;goto B40b9d8;
case 0x40b9dc:goto L40b9dc;
case 0x40b9e0:c.instructions+=10;goto B40b9e0;
case 0x40b9e2:c.instructions+=9;goto B40b9e2;
case 0x40b9e6:c.instructions+=8;goto B40b9e6;
case 0x40b9ec:c.instructions+=7;goto B40b9ec;
case 0x40b9f0:c.instructions+=6;goto B40b9f0;
case 0x40b9f2:c.instructions+=5;goto B40b9f2;
case 0x40b9f5:c.instructions+=4;goto B40b9f5;
case 0x40b9f9:c.instructions+=3;goto B40b9f9;
case 0x40b9fb:c.instructions+=2;goto B40b9fb;
case 0x40b9fe:c.instructions+=1;goto B40b9fe;
case 0x40ba00:goto L40ba00;
case 0x40ba02:c.instructions+=1;goto B40ba02;
case 0x40ba06:goto L40ba06;
case 0x40ba0a:c.instructions+=4;goto B40ba0a;
case 0x40ba0c:c.instructions+=3;goto B40ba0c;
case 0x40ba0e:c.instructions+=2;goto B40ba0e;
case 0x40ba11:c.instructions+=1;goto B40ba11;
case 0x40ba13:goto L40ba13;
case 0x40ba15:c.instructions+=1;goto B40ba15;
case 0x40ba19:goto L40ba19;
case 0x40ba1c:c.instructions+=17;goto B40ba1c;
case 0x40ba20:c.instructions+=16;goto B40ba20;
case 0x40ba24:c.instructions+=15;goto B40ba24;
case 0x40ba27:c.instructions+=14;goto B40ba27;
case 0x40ba2b:c.instructions+=13;goto B40ba2b;
case 0x40ba2e:c.instructions+=12;goto B40ba2e;
case 0x40ba32:c.instructions+=11;goto B40ba32;
case 0x40ba36:c.instructions+=10;goto B40ba36;
case 0x40ba3c:c.instructions+=9;goto B40ba3c;
case 0x40ba3e:c.instructions+=8;goto B40ba3e;
case 0x40ba42:c.instructions+=7;goto B40ba42;
case 0x40ba48:c.instructions+=6;goto B40ba48;
case 0x40ba4c:c.instructions+=5;goto B40ba4c;
case 0x40ba50:c.instructions+=4;goto B40ba50;
case 0x40ba52:c.instructions+=3;goto B40ba52;
case 0x40ba54:c.instructions+=2;goto B40ba54;
case 0x40ba57:c.instructions+=1;goto B40ba57;
case 0x40ba59:goto L40ba59;
case 0x40ba5b:c.instructions+=1;goto B40ba5b;
case 0x40ba5f:goto L40ba5f;
case 0x40ba63:c.instructions+=16;goto B40ba63;
case 0x40ba66:c.instructions+=15;goto B40ba66;
case 0x40ba6a:c.instructions+=14;goto B40ba6a;
case 0x40ba6e:c.instructions+=13;goto B40ba6e;
case 0x40ba74:c.instructions+=12;goto B40ba74;
case 0x40ba78:c.instructions+=11;goto B40ba78;
case 0x40ba7a:c.instructions+=10;goto B40ba7a;
case 0x40ba7c:c.instructions+=9;goto B40ba7c;
case 0x40ba82:c.instructions+=8;goto B40ba82;
case 0x40ba86:c.instructions+=7;goto B40ba86;
case 0x40ba88:c.instructions+=6;goto B40ba88;
case 0x40ba8c:c.instructions+=5;goto B40ba8c;
case 0x40ba90:c.instructions+=4;goto B40ba90;
case 0x40ba92:c.instructions+=3;goto B40ba92;
case 0x40ba94:c.instructions+=2;goto B40ba94;
case 0x40ba97:c.instructions+=1;goto B40ba97;
case 0x40ba99:goto L40ba99;
case 0x40ba9b:c.instructions+=1;goto B40ba9b;
case 0x40ba9f:goto L40ba9f;
case 0x40baa3:c.instructions+=10;goto B40baa3;
case 0x40baa5:c.instructions+=9;goto B40baa5;
case 0x40baa9:c.instructions+=8;goto B40baa9;
case 0x40baaf:c.instructions+=7;goto B40baaf;
case 0x40bab3:c.instructions+=6;goto B40bab3;
case 0x40bab5:c.instructions+=5;goto B40bab5;
case 0x40bab8:c.instructions+=4;goto B40bab8;
case 0x40babc:c.instructions+=3;goto B40babc;
case 0x40babe:c.instructions+=2;goto B40babe;
case 0x40bac1:c.instructions+=1;goto B40bac1;
case 0x40bac3:goto L40bac3;
case 0x40bac5:c.instructions+=1;goto B40bac5;
case 0x40bac9:goto L40bac9;
case 0x40bacd:c.instructions+=4;goto B40bacd;
case 0x40bacf:c.instructions+=3;goto B40bacf;
case 0x40bad1:c.instructions+=2;goto B40bad1;
case 0x40bad4:c.instructions+=1;goto B40bad4;
case 0x40bad6:goto L40bad6;
case 0x40bad8:c.instructions+=1;goto B40bad8;
case 0x40badc:goto L40badc;
case 0x40badf:c.instructions+=17;goto B40badf;
case 0x40bae3:c.instructions+=16;goto B40bae3;
case 0x40bae7:c.instructions+=15;goto B40bae7;
case 0x40baea:c.instructions+=14;goto B40baea;
case 0x40baee:c.instructions+=13;goto B40baee;
case 0x40baf1:c.instructions+=12;goto B40baf1;
case 0x40baf5:c.instructions+=11;goto B40baf5;
case 0x40baf9:c.instructions+=10;goto B40baf9;
case 0x40baff:c.instructions+=9;goto B40baff;
case 0x40bb01:c.instructions+=8;goto B40bb01;
case 0x40bb05:c.instructions+=7;goto B40bb05;
case 0x40bb0b:c.instructions+=6;goto B40bb0b;
case 0x40bb0f:c.instructions+=5;goto B40bb0f;
case 0x40bb13:c.instructions+=4;goto B40bb13;
case 0x40bb15:c.instructions+=3;goto B40bb15;
case 0x40bb17:c.instructions+=2;goto B40bb17;
case 0x40bb1a:c.instructions+=1;goto B40bb1a;
case 0x40bb1c:goto L40bb1c;
case 0x40bb1e:c.instructions+=1;goto B40bb1e;
case 0x40bb22:goto L40bb22;
case 0x40bb26:c.instructions+=16;goto B40bb26;
case 0x40bb29:c.instructions+=15;goto B40bb29;
case 0x40bb2d:c.instructions+=14;goto B40bb2d;
case 0x40bb31:c.instructions+=13;goto B40bb31;
case 0x40bb37:c.instructions+=12;goto B40bb37;
case 0x40bb3b:c.instructions+=11;goto B40bb3b;
case 0x40bb3d:c.instructions+=10;goto B40bb3d;
case 0x40bb3f:c.instructions+=9;goto B40bb3f;
case 0x40bb45:c.instructions+=8;goto B40bb45;
case 0x40bb49:c.instructions+=7;goto B40bb49;
case 0x40bb4b:c.instructions+=6;goto B40bb4b;
case 0x40bb4f:c.instructions+=5;goto B40bb4f;
case 0x40bb53:c.instructions+=4;goto B40bb53;
case 0x40bb55:c.instructions+=3;goto B40bb55;
case 0x40bb57:c.instructions+=2;goto B40bb57;
case 0x40bb5a:c.instructions+=1;goto B40bb5a;
case 0x40bb5c:goto L40bb5c;
case 0x40bb5e:c.instructions+=1;goto B40bb5e;
case 0x40bb62:goto L40bb62;
case 0x40bb66:c.instructions+=10;goto B40bb66;
case 0x40bb68:c.instructions+=9;goto B40bb68;
case 0x40bb6c:c.instructions+=8;goto B40bb6c;
case 0x40bb72:c.instructions+=7;goto B40bb72;
case 0x40bb76:c.instructions+=6;goto B40bb76;
case 0x40bb78:c.instructions+=5;goto B40bb78;
case 0x40bb7b:c.instructions+=4;goto B40bb7b;
case 0x40bb7f:c.instructions+=3;goto B40bb7f;
case 0x40bb81:c.instructions+=2;goto B40bb81;
case 0x40bb84:c.instructions+=1;goto B40bb84;
case 0x40bb86:goto L40bb86;
case 0x40bb88:c.instructions+=1;goto B40bb88;
case 0x40bb8c:goto L40bb8c;
case 0x40bb90:c.instructions+=4;goto B40bb90;
case 0x40bb92:c.instructions+=3;goto B40bb92;
case 0x40bb94:c.instructions+=2;goto B40bb94;
case 0x40bb97:c.instructions+=1;goto B40bb97;
case 0x40bb99:goto L40bb99;
case 0x40bb9b:c.instructions+=1;goto B40bb9b;
case 0x40bb9f:goto L40bb9f;
case 0x40bba2:c.instructions+=17;goto B40bba2;
case 0x40bba6:c.instructions+=16;goto B40bba6;
case 0x40bbaa:c.instructions+=15;goto B40bbaa;
case 0x40bbad:c.instructions+=14;goto B40bbad;
case 0x40bbb1:c.instructions+=13;goto B40bbb1;
case 0x40bbb4:c.instructions+=12;goto B40bbb4;
case 0x40bbb8:c.instructions+=11;goto B40bbb8;
case 0x40bbbc:c.instructions+=10;goto B40bbbc;
case 0x40bbc2:c.instructions+=9;goto B40bbc2;
case 0x40bbc4:c.instructions+=8;goto B40bbc4;
case 0x40bbc8:c.instructions+=7;goto B40bbc8;
case 0x40bbce:c.instructions+=6;goto B40bbce;
case 0x40bbd2:c.instructions+=5;goto B40bbd2;
case 0x40bbd6:c.instructions+=4;goto B40bbd6;
case 0x40bbd8:c.instructions+=3;goto B40bbd8;
case 0x40bbda:c.instructions+=2;goto B40bbda;
case 0x40bbdd:c.instructions+=1;goto B40bbdd;
case 0x40bbdf:goto L40bbdf;
case 0x40bbe1:c.instructions+=1;goto B40bbe1;
case 0x40bbe5:goto L40bbe5;
case 0x40bbe9:c.instructions+=16;goto B40bbe9;
case 0x40bbec:c.instructions+=15;goto B40bbec;
case 0x40bbf0:c.instructions+=14;goto B40bbf0;
case 0x40bbf4:c.instructions+=13;goto B40bbf4;
case 0x40bbfa:c.instructions+=12;goto B40bbfa;
case 0x40bbfe:c.instructions+=11;goto B40bbfe;
case 0x40bc00:c.instructions+=10;goto B40bc00;
case 0x40bc02:c.instructions+=9;goto B40bc02;
case 0x40bc08:c.instructions+=8;goto B40bc08;
case 0x40bc0c:c.instructions+=7;goto B40bc0c;
case 0x40bc0e:c.instructions+=6;goto B40bc0e;
case 0x40bc12:c.instructions+=5;goto B40bc12;
case 0x40bc16:c.instructions+=4;goto B40bc16;
case 0x40bc18:c.instructions+=3;goto B40bc18;
case 0x40bc1a:c.instructions+=2;goto B40bc1a;
case 0x40bc1d:c.instructions+=1;goto B40bc1d;
case 0x40bc1f:goto L40bc1f;
case 0x40bc21:c.instructions+=1;goto B40bc21;
case 0x40bc25:goto L40bc25;
case 0x40bc29:c.instructions+=10;goto B40bc29;
case 0x40bc2b:c.instructions+=9;goto B40bc2b;
case 0x40bc2f:c.instructions+=8;goto B40bc2f;
case 0x40bc35:c.instructions+=7;goto B40bc35;
case 0x40bc39:c.instructions+=6;goto B40bc39;
case 0x40bc3b:c.instructions+=5;goto B40bc3b;
case 0x40bc3e:c.instructions+=4;goto B40bc3e;
case 0x40bc42:c.instructions+=3;goto B40bc42;
case 0x40bc44:c.instructions+=2;goto B40bc44;
case 0x40bc47:c.instructions+=1;goto B40bc47;
case 0x40bc49:goto L40bc49;
case 0x40bc4b:c.instructions+=1;goto B40bc4b;
case 0x40bc4f:goto L40bc4f;
case 0x40bc53:c.instructions+=4;goto B40bc53;
case 0x40bc55:c.instructions+=3;goto B40bc55;
case 0x40bc57:c.instructions+=2;goto B40bc57;
case 0x40bc5a:c.instructions+=1;goto B40bc5a;
case 0x40bc5c:goto L40bc5c;
case 0x40bc5e:c.instructions+=1;goto B40bc5e;
case 0x40bc62:goto L40bc62;
case 0x40bc65:c.instructions+=17;goto B40bc65;
case 0x40bc69:c.instructions+=16;goto B40bc69;
case 0x40bc6d:c.instructions+=15;goto B40bc6d;
case 0x40bc70:c.instructions+=14;goto B40bc70;
case 0x40bc74:c.instructions+=13;goto B40bc74;
case 0x40bc77:c.instructions+=12;goto B40bc77;
case 0x40bc7b:c.instructions+=11;goto B40bc7b;
case 0x40bc7f:c.instructions+=10;goto B40bc7f;
case 0x40bc85:c.instructions+=9;goto B40bc85;
case 0x40bc87:c.instructions+=8;goto B40bc87;
case 0x40bc8b:c.instructions+=7;goto B40bc8b;
case 0x40bc91:c.instructions+=6;goto B40bc91;
case 0x40bc95:c.instructions+=5;goto B40bc95;
case 0x40bc99:c.instructions+=4;goto B40bc99;
case 0x40bc9b:c.instructions+=3;goto B40bc9b;
case 0x40bc9d:c.instructions+=2;goto B40bc9d;
case 0x40bca0:c.instructions+=1;goto B40bca0;
case 0x40bca2:goto L40bca2;
case 0x40bca4:c.instructions+=1;goto B40bca4;
case 0x40bca8:goto L40bca8;
case 0x40bcac:c.instructions+=16;goto B40bcac;
case 0x40bcaf:c.instructions+=15;goto B40bcaf;
case 0x40bcb3:c.instructions+=14;goto B40bcb3;
case 0x40bcb7:c.instructions+=13;goto B40bcb7;
case 0x40bcbd:c.instructions+=12;goto B40bcbd;
case 0x40bcc1:c.instructions+=11;goto B40bcc1;
case 0x40bcc3:c.instructions+=10;goto B40bcc3;
case 0x40bcc5:c.instructions+=9;goto B40bcc5;
case 0x40bccb:c.instructions+=8;goto B40bccb;
case 0x40bccf:c.instructions+=7;goto B40bccf;
case 0x40bcd1:c.instructions+=6;goto B40bcd1;
case 0x40bcd5:c.instructions+=5;goto B40bcd5;
case 0x40bcd9:c.instructions+=4;goto B40bcd9;
case 0x40bcdb:c.instructions+=3;goto B40bcdb;
case 0x40bcdd:c.instructions+=2;goto B40bcdd;
case 0x40bce0:c.instructions+=1;goto B40bce0;
case 0x40bce2:goto L40bce2;
case 0x40bce4:c.instructions+=1;goto B40bce4;
case 0x40bce8:goto L40bce8;
case 0x40bcec:c.instructions+=10;goto B40bcec;
case 0x40bcee:c.instructions+=9;goto B40bcee;
case 0x40bcf2:c.instructions+=8;goto B40bcf2;
case 0x40bcf8:c.instructions+=7;goto B40bcf8;
case 0x40bcfc:c.instructions+=6;goto B40bcfc;
case 0x40bcfe:c.instructions+=5;goto B40bcfe;
case 0x40bd01:c.instructions+=4;goto B40bd01;
case 0x40bd05:c.instructions+=3;goto B40bd05;
case 0x40bd07:c.instructions+=2;goto B40bd07;
case 0x40bd0a:c.instructions+=1;goto B40bd0a;
case 0x40bd0c:goto L40bd0c;
case 0x40bd0e:c.instructions+=1;goto B40bd0e;
case 0x40bd12:goto L40bd12;
case 0x40bd16:c.instructions+=4;goto B40bd16;
case 0x40bd18:c.instructions+=3;goto B40bd18;
case 0x40bd1a:c.instructions+=2;goto B40bd1a;
case 0x40bd1d:c.instructions+=1;goto B40bd1d;
case 0x40bd1f:goto L40bd1f;
case 0x40bd23:c.instructions+=5;goto B40bd23;
case 0x40bd25:c.instructions+=4;goto B40bd25;
case 0x40bd28:c.instructions+=3;goto B40bd28;
case 0x40bd29:c.instructions+=2;goto B40bd29;
case 0x40bd2c:c.instructions+=1;goto B40bd2c;
case 0x40bd2f:goto L40bd2f;
case 0x40bd32:c.instructions+=3;goto B40bd32;
case 0x40bd33:c.instructions+=2;goto B40bd33;
case 0x40bd36:c.instructions+=1;goto B40bd36;
case 0x40bd40:goto L40bd40;
case 0x40bd41:c.instructions+=7;goto B40bd41;
case 0x40bd45:c.instructions+=6;goto B40bd45;
case 0x40bd46:c.instructions+=5;goto B40bd46;
case 0x40bd4b:c.instructions+=4;goto B40bd4b;
case 0x40bd4d:c.instructions+=3;goto B40bd4d;
case 0x40bd4f:c.instructions+=2;goto B40bd4f;
case 0x40bd51:c.instructions+=1;goto B40bd51;
case 0x40bd56:goto L40bd56;
case 0x40bd57:c.instructions+=2;goto B40bd57;
case 0x40bd5a:c.instructions+=1;goto B40bd5a;
case 0x40bd5f:goto L40bd5f;
case 0x40bd65:c.instructions+=3;goto B40bd65;
case 0x40bd66:c.instructions+=2;goto B40bd66;
case 0x40bd68:c.instructions+=1;goto B40bd68;
case 0x40bd6d:goto L40bd6d;
case 0x40bd73:c.instructions+=3;goto B40bd73;
case 0x40bd74:c.instructions+=2;goto B40bd74;
case 0x40bd76:c.instructions+=1;goto B40bd76;
case 0x40bd7b:goto L40bd7b;
case 0x40bd7d:c.instructions+=6;goto B40bd7d;
case 0x40bd7f:c.instructions+=5;goto B40bd7f;
case 0x40bd81:c.instructions+=4;goto B40bd81;
case 0x40bd87:c.instructions+=3;goto B40bd87;
case 0x40bd88:c.instructions+=2;goto B40bd88;
case 0x40bd8a:c.instructions+=1;goto B40bd8a;
case 0x40bd8f:goto L40bd8f;
case 0x40bd91:c.instructions+=6;goto B40bd91;
case 0x40bd93:c.instructions+=5;goto B40bd93;
case 0x40bd95:c.instructions+=4;goto B40bd95;
case 0x40bd9b:c.instructions+=3;goto B40bd9b;
case 0x40bd9c:c.instructions+=2;goto B40bd9c;
case 0x40bd9e:c.instructions+=1;goto B40bd9e;
case 0x40bda3:goto L40bda3;
case 0x40bda5:c.instructions+=6;goto B40bda5;
case 0x40bda7:c.instructions+=5;goto B40bda7;
case 0x40bda9:c.instructions+=4;goto B40bda9;
case 0x40bdaf:c.instructions+=3;goto B40bdaf;
case 0x40bdb0:c.instructions+=2;goto B40bdb0;
case 0x40bdb2:c.instructions+=1;goto B40bdb2;
case 0x40bdb7:goto L40bdb7;
case 0x40bdb9:c.instructions+=6;goto B40bdb9;
case 0x40bdbb:c.instructions+=5;goto B40bdbb;
case 0x40bdbd:c.instructions+=4;goto B40bdbd;
case 0x40bdc3:c.instructions+=3;goto B40bdc3;
case 0x40bdc4:c.instructions+=2;goto B40bdc4;
case 0x40bdc6:c.instructions+=1;goto B40bdc6;
case 0x40bdcb:goto L40bdcb;
case 0x40bdcd:c.instructions+=1;goto B40bdcd;
case 0x40bdd2:goto L40bdd2;
case 0x40bdd3:c.instructions+=2;goto B40bdd3;
case 0x40bdd4:c.instructions+=1;goto B40bdd4;
case 0x40bde0:goto L40bde0;
case 0x40bde3:c.instructions+=1;goto B40bde3;
case 0x40bdf0:goto L40bdf0;
case 0x40bdf2:c.instructions+=13;goto B40bdf2;
case 0x40bdf7:c.instructions+=12;goto B40bdf7;
case 0x40bdfd:c.instructions+=11;goto B40bdfd;
case 0x40bdfe:c.instructions+=10;goto B40bdfe;
case 0x40be05:c.instructions+=9;goto B40be05;
case 0x40be06:c.instructions+=8;goto B40be06;
case 0x40be07:c.instructions+=7;goto B40be07;
case 0x40be08:c.instructions+=6;goto B40be08;
case 0x40be0a:c.instructions+=5;goto B40be0a;
case 0x40be0b:c.instructions+=4;goto B40be0b;
case 0x40be0f:c.instructions+=3;goto B40be0f;
case 0x40be17:c.instructions+=2;goto B40be17;
case 0x40be1d:c.instructions+=1;goto B40be1d;
case 0x40be22:goto L40be22;
case 0x40be24:c.instructions+=2;goto B40be24;
case 0x40be26:c.instructions+=1;goto B40be26;
case 0x40be28:goto L40be28;
case 0x40be2d:c.instructions+=1;goto B40be2d;
case 0x40be2f:goto L40be2f;
case 0x40be32:c.instructions+=3;goto B40be32;
case 0x40be33:c.instructions+=2;goto B40be33;
case 0x40be38:c.instructions+=1;goto B40be38;
case 0x40be3d:goto L40be3d;
case 0x40be43:c.instructions+=2;goto B40be43;
case 0x40be44:c.instructions+=1;goto B40be44;
case 0x40be46:goto L40be46;
case 0x40be4b:c.instructions+=6;goto B40be4b;
case 0x40be4d:c.instructions+=5;goto B40be4d;
case 0x40be52:c.instructions+=4;goto B40be52;
case 0x40be55:c.instructions+=3;goto B40be55;
case 0x40be56:c.instructions+=2;goto B40be56;
case 0x40be5e:c.instructions+=1;goto B40be5e;
case 0x40be63:goto L40be63;
case 0x40be67:c.instructions+=6;goto B40be67;
case 0x40be68:c.instructions+=5;goto B40be68;
case 0x40be69:c.instructions+=4;goto B40be69;
case 0x40be6a:c.instructions+=3;goto B40be6a;
case 0x40be71:c.instructions+=2;goto B40be71;
case 0x40be74:c.instructions+=1;goto B40be74;
case 0x40be80:goto L40be80;
case 0x40be87:c.instructions+=1;goto B40be87;
case 0x40be89:goto L40be89;
case 0x40be8e:c.instructions+=2;goto B40be8e;
case 0x40be90:c.instructions+=1;goto B40be90;
case 0x40be92:goto L40be92;
case 0x40be99:goto L40be99;
case 0x40be9f:c.instructions+=1;goto B40be9f;
case 0x40bea0:goto L40bea0;
case 0x40bea5:c.instructions+=7;goto B40bea5;
case 0x40bea8:c.instructions+=6;goto B40bea8;
case 0x40beab:c.instructions+=5;goto B40beab;
case 0x40beac:c.instructions+=4;goto B40beac;
case 0x40beae:c.instructions+=3;goto B40beae;
case 0x40beb0:c.instructions+=2;goto B40beb0;
case 0x40beb2:c.instructions+=1;goto B40beb2;
case 0x40beb4:goto L40beb4;
case 0x40beb6:c.instructions+=2;goto B40beb6;
case 0x40beba:c.instructions+=1;goto B40beba;
case 0x40bebf:goto L40bebf;
case 0x40bec4:c.instructions+=6;goto B40bec4;
case 0x40bec7:c.instructions+=5;goto B40bec7;
case 0x40beca:c.instructions+=4;goto B40beca;
case 0x40becb:c.instructions+=3;goto B40becb;
case 0x40becd:c.instructions+=2;goto B40becd;
case 0x40becf:c.instructions+=1;goto B40becf;
case 0x40bed1:goto L40bed1;
case 0x40bed2:c.instructions+=1;goto B40bed2;
case 0x40bee0:goto L40bee0;
case 0x40bee1:c.instructions+=6;goto B40bee1;
case 0x40bee2:c.instructions+=5;goto B40bee2;
case 0x40bee3:c.instructions+=4;goto B40bee3;
case 0x40bee4:c.instructions+=3;goto B40bee4;
case 0x40beea:c.instructions+=2;goto B40beea;
case 0x40beef:c.instructions+=1;goto B40beef;
case 0x40bef0:goto L40bef0;
case 0x40bef3:c.instructions+=2;goto B40bef3;
case 0x40bef5:c.instructions+=1;goto B40bef5;
case 0x40bef7:goto L40bef7;
case 0x40bef9:c.instructions+=1;goto B40bef9;
case 0x40befe:goto L40befe;
case 0x40bf00:c.instructions+=1;goto B40bf00;
case 0x40bf02:goto L40bf02;
case 0x40bf07:c.instructions+=8;goto B40bf07;
case 0x40bf09:c.instructions+=7;goto B40bf09;
case 0x40bf0d:c.instructions+=6;goto B40bf0d;
case 0x40bf11:c.instructions+=5;goto B40bf11;
case 0x40bf17:c.instructions+=4;goto B40bf17;
case 0x40bf1d:c.instructions+=3;goto B40bf1d;
case 0x40bf1f:c.instructions+=2;goto B40bf1f;
case 0x40bf22:c.instructions+=1;goto B40bf22;
case 0x40bf24:goto L40bf24;
case 0x40bf27:c.instructions+=3;goto B40bf27;
case 0x40bf28:c.instructions+=2;goto B40bf28;
case 0x40bf2e:c.instructions+=1;goto B40bf2e;
case 0x40bf33:goto L40bf33;
case 0x40bf39:c.instructions+=3;goto B40bf39;
case 0x40bf3b:c.instructions+=2;goto B40bf3b;
case 0x40bf3e:c.instructions+=1;goto B40bf3e;
case 0x40bf40:goto L40bf40;
case 0x40bf42:c.instructions+=2;goto B40bf42;
case 0x40bf46:c.instructions+=1;goto B40bf46;
case 0x40bf4b:goto L40bf4b;
case 0x40bf4e:c.instructions+=2;goto B40bf4e;
case 0x40bf4f:c.instructions+=1;goto B40bf4f;
case 0x40bf51:goto L40bf51;
case 0x40bf52:c.instructions+=4;goto B40bf52;
case 0x40bf53:c.instructions+=3;goto B40bf53;
case 0x40bf54:c.instructions+=2;goto B40bf54;
case 0x40bf55:c.instructions+=1;goto B40bf55;
case 0x40bf60:goto L40bf60;
case 0x40bf61:c.instructions+=5;goto B40bf61;
case 0x40bf62:c.instructions+=4;goto B40bf62;
case 0x40bf63:c.instructions+=3;goto B40bf63;
case 0x40bf69:c.instructions+=2;goto B40bf69;
case 0x40bf6e:c.instructions+=1;goto B40bf6e;
case 0x40bf70:goto L40bf70;
case 0x40bf72:c.instructions+=2;goto B40bf72;
case 0x40bf74:c.instructions+=1;goto B40bf74;
case 0x40bf76:goto L40bf76;
case 0x40bf78:c.instructions+=1;goto B40bf78;
case 0x40bf7d:goto L40bf7d;
case 0x40bf7f:c.instructions+=1;goto B40bf7f;
case 0x40bf81:goto L40bf81;
case 0x40bf83:c.instructions+=1;goto B40bf83;
case 0x40bf88:goto L40bf88;
case 0x40bf8a:c.instructions+=1;goto B40bf8a;
case 0x40bf8c:goto L40bf8c;
case 0x40bf8e:c.instructions+=1;goto B40bf8e;
case 0x40bf93:goto L40bf93;
case 0x40bf95:c.instructions+=1;goto B40bf95;
case 0x40bf97:goto L40bf97;
case 0x40bf99:c.instructions+=1;goto B40bf99;
case 0x40bf9e:goto L40bf9e;
case 0x40bfa1:c.instructions+=2;goto B40bfa1;
case 0x40bfa2:c.instructions+=1;goto B40bfa2;
case 0x40bfa4:goto L40bfa4;
case 0x40bfa5:c.instructions+=3;goto B40bfa5;
case 0x40bfa6:c.instructions+=2;goto B40bfa6;
case 0x40bfa7:c.instructions+=1;goto B40bfa7;
case 0x40bfb0:goto L40bfb0;
case 0x40bfb5:c.instructions+=9;goto B40bfb5;
case 0x40bfb8:c.instructions+=8;goto B40bfb8;
case 0x40bfbb:c.instructions+=7;goto B40bfbb;
case 0x40bfbc:c.instructions+=6;goto B40bfbc;
case 0x40bfbd:c.instructions+=5;goto B40bfbd;
case 0x40bfbf:c.instructions+=4;goto B40bfbf;
case 0x40bfc1:c.instructions+=3;goto B40bfc1;
case 0x40bfc3:c.instructions+=2;goto B40bfc3;
case 0x40bfc5:c.instructions+=1;goto B40bfc5;
case 0x40bfc7:goto L40bfc7;
case 0x40bfc8:c.instructions+=4;goto B40bfc8;
case 0x40bfca:c.instructions+=3;goto B40bfca;
case 0x40bfce:c.instructions+=2;goto B40bfce;
case 0x40bfd0:c.instructions+=1;goto B40bfd0;
case 0x40bfd5:goto L40bfd5;
case 0x40bfd7:c.instructions+=1;goto B40bfd7;
case 0x40bfd9:goto L40bfd9;
case 0x40bfdb:c.instructions+=1;goto B40bfdb;
case 0x40bfe0:goto L40bfe0;
case 0x40bfe2:c.instructions+=1;goto B40bfe2;
case 0x40bfe4:goto L40bfe4;
case 0x40bfea:c.instructions+=3;goto B40bfea;
case 0x40bfed:c.instructions+=2;goto B40bfed;
case 0x40bfee:c.instructions+=1;goto B40bfee;
case 0x40bff3:goto L40bff3;
case 0x40bff9:c.instructions+=3;goto B40bff9;
case 0x40bffb:c.instructions+=2;goto B40bffb;
case 0x40bffe:c.instructions+=1;goto B40bffe;
default:missing_instruction(c.pc);}
B40b000:L40b000:{c.instructions+=5;NFSU2_TR(0x40b000);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b002:{NFSU2_TR(0x40b002);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b005:{NFSU2_TR(0x40b005);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40b008:{NFSU2_TR(0x40b008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40b009:{NFSU2_TR(0x40b009);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40b00a:L40b00a:{c.instructions+=3;NFSU2_TR(0x40b00a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40b00e:{NFSU2_TR(0x40b00e);
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
B40b012:{NFSU2_TR(0x40b012);
if(r1(R+518)){{goto L40b04e;}}
}
B40b014:L40b014:{c.instructions+=3;NFSU2_TR(0x40b014);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B40b018:{NFSU2_TR(0x40b018);
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
B40b01c:{NFSU2_TR(0x40b01c);
if(r1(R+518)){{goto L40b04e;}}
}
B40b01e:L40b01e:{c.instructions+=3;NFSU2_TR(0x40b01e);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40b021:{NFSU2_TR(0x40b021);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b023:{NFSU2_TR(0x40b023);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b02e;}}
}
B40b025:L40b025:{c.instructions+=2;NFSU2_TR(0x40b025);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40b02c:{NFSU2_TR(0x40b02c);
{goto L40b030;}
}
B40b02e:L40b02e:{c.instructions+=1;NFSU2_TR(0x40b02e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40b030:L40b030:{c.instructions+=5;NFSU2_TR(0x40b030);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B40b033:{NFSU2_TR(0x40b033);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B40b036:{NFSU2_TR(0x40b036);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B40b03d:{NFSU2_TR(0x40b03d);
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
B40b03f:{NFSU2_TR(0x40b03f);
if(r1(R+518)){{goto L40b04e;}}
}
B40b041:L40b041:{c.instructions+=5;NFSU2_TR(0x40b041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40b043:{NFSU2_TR(0x40b043);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b045:{NFSU2_TR(0x40b045);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b046:{NFSU2_TR(0x40b046);
__builtin_memmove((R+4),(R+24),4);
}
B40b048:{NFSU2_TR(0x40b048);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40b04bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40b04b:L40b04b:{c.instructions+=1;NFSU2_TR(0x40b04b);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40b04e:L40b04e:{c.instructions+=2;NFSU2_TR(0x40b04e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40b04f:{NFSU2_TR(0x40b04f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40b050:L40b050:{c.instructions+=6;NFSU2_TR(0x40b050);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b056:{NFSU2_TR(0x40b056);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b057:{NFSU2_TR(0x40b057);
__builtin_memmove((R+24),(R+4),4);
}
B40b059:{NFSU2_TR(0x40b059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40b05c:{NFSU2_TR(0x40b05c);
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
B40b05e:{NFSU2_TR(0x40b05e);
if(r1(R+518)){{goto L40b068;}}
}
B40b060:L40b060:{c.instructions+=4;NFSU2_TR(0x40b060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40b062:{NFSU2_TR(0x40b062);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b064:{NFSU2_TR(0x40b064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40b065:{NFSU2_TR(0x40b065);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B40b068:L40b068:{c.instructions+=3;NFSU2_TR(0x40b068);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40b06c:{NFSU2_TR(0x40b06c);
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
B40b070:{NFSU2_TR(0x40b070);
if(r1(R+518)){{goto L40b0ac;}}
}
B40b072:L40b072:{c.instructions+=3;NFSU2_TR(0x40b072);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B40b076:{NFSU2_TR(0x40b076);
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
B40b07a:{NFSU2_TR(0x40b07a);
if(r1(R+518)){{goto L40b0ac;}}
}
B40b07c:L40b07c:{c.instructions+=3;NFSU2_TR(0x40b07c);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40b07f:{NFSU2_TR(0x40b07f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b081:{NFSU2_TR(0x40b081);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b08c;}}
}
B40b083:L40b083:{c.instructions+=2;NFSU2_TR(0x40b083);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40b08a:{NFSU2_TR(0x40b08a);
{goto L40b08e;}
}
B40b08c:L40b08c:{c.instructions+=1;NFSU2_TR(0x40b08c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40b08e:L40b08e:{c.instructions+=5;NFSU2_TR(0x40b08e);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B40b091:{NFSU2_TR(0x40b091);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B40b094:{NFSU2_TR(0x40b094);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B40b09b:{NFSU2_TR(0x40b09b);
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
B40b09d:{NFSU2_TR(0x40b09d);
if(r1(R+518)){{goto L40b0ac;}}
}
B40b09f:L40b09f:{c.instructions+=5;NFSU2_TR(0x40b09f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40b0a1:{NFSU2_TR(0x40b0a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b0a3:{NFSU2_TR(0x40b0a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b0a4:{NFSU2_TR(0x40b0a4);
__builtin_memmove((R+4),(R+24),4);
}
B40b0a6:{NFSU2_TR(0x40b0a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40b0a9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40b0a9:L40b0a9:{c.instructions+=1;NFSU2_TR(0x40b0a9);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40b0ac:L40b0ac:{c.instructions+=2;NFSU2_TR(0x40b0ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40b0ad:{NFSU2_TR(0x40b0ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40b0b0:L40b0b0:{c.instructions+=9;NFSU2_TR(0x40b0b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b0b1:{NFSU2_TR(0x40b0b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b0b2:{NFSU2_TR(0x40b0b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b0b3:{NFSU2_TR(0x40b0b3);
__builtin_memmove((R+24),(R+4),4);
}
B40b0b5:{NFSU2_TR(0x40b0b5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40b0b9:{NFSU2_TR(0x40b0b9);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B40b0bc:{NFSU2_TR(0x40b0bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),2);
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B40b0bf:{NFSU2_TR(0x40b0bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b0c0:{NFSU2_TR(0x40b0c0);
if(r1(R+518)){{goto L40b0d8;}}
}
B40b0c2:L40b0c2:{c.instructions+=2;NFSU2_TR(0x40b0c2);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+20))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B40b0c6:{NFSU2_TR(0x40b0c6);
if(r1(R+518)){{goto L40b0d8;}}
}
B40b0c8:L40b0c8:{c.instructions+=3;NFSU2_TR(0x40b0c8);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40b0cb:{NFSU2_TR(0x40b0cb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b0cd:{NFSU2_TR(0x40b0cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b0d8;}}
}
B40b0cf:L40b0cf:{c.instructions+=2;NFSU2_TR(0x40b0cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B40b0d6:{NFSU2_TR(0x40b0d6);
{goto L40b0da;}
}
B40b0d8:L40b0d8:{c.instructions+=1;NFSU2_TR(0x40b0d8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B40b0da:L40b0da:{c.instructions+=2;NFSU2_TR(0x40b0da);
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
B40b0dc:{NFSU2_TR(0x40b0dc);
if(r1(R+518)){{goto L40b105;}}
}
B40b0de:L40b0de:{c.instructions+=1;NFSU2_TR(0x40b0de);
w4(R+28,u32(0x5ull));
}
B40b0e3:L40b0e3:{c.instructions+=2;NFSU2_TR(0x40b0e3);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B40b0e6:{NFSU2_TR(0x40b0e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40b105;}}
}
B40b0e8:L40b0e8:{c.instructions+=4;NFSU2_TR(0x40b0e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40b0ea:{NFSU2_TR(0x40b0ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b0eb:{NFSU2_TR(0x40b0eb);
__builtin_memmove((R+4),(R+24),4);
}
B40b0ed:{NFSU2_TR(0x40b0ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40b0f0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40b0f0:L40b0f0:{c.instructions+=3;NFSU2_TR(0x40b0f0);
u8 U[13];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B40b0f7:{NFSU2_TR(0x40b0f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b0f9:{NFSU2_TR(0x40b0f9);
if(r1(R+518)){{goto L40b0fd;}}
}
B40b0fb:L40b0fb:{c.instructions+=1;NFSU2_TR(0x40b0fb);
__builtin_memmove((R+20),(R+28),4);
}
B40b0fd:L40b0fd:{c.instructions+=4;NFSU2_TR(0x40b0fd);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B40b0fe:{NFSU2_TR(0x40b0fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B40b101:{NFSU2_TR(0x40b101);
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
B40b103:{NFSU2_TR(0x40b103);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40b0e3u);}goto L40b0e3;}}
}
B40b105:L40b105:{c.instructions+=6;NFSU2_TR(0x40b105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40b106:{NFSU2_TR(0x40b106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40b107:{NFSU2_TR(0x40b107);
__builtin_memmove((R+0),(R+20),4);
}
B40b109:{NFSU2_TR(0x40b109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40b10a:{NFSU2_TR(0x40b10a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40b10b:{NFSU2_TR(0x40b10b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40b110:L40b110:{c.instructions+=5;NFSU2_TR(0x40b110);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40b114:{NFSU2_TR(0x40b114);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40b116:{NFSU2_TR(0x40b116);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40b118:{NFSU2_TR(0x40b118);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1073ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40b11e:{NFSU2_TR(0x40b11e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40b12c;}}
}
B40b120:L40b120:{c.instructions+=3;NFSU2_TR(0x40b120);
w4(R+0,u32(0x7e9728ull));
}
B40b125:{NFSU2_TR(0x40b125);
w4(R+8,u32(0x10ull));
}
B40b12a:{NFSU2_TR(0x40b12a);
{goto L40b152;}
}
B40b12c:L40b12c:{c.instructions+=2;NFSU2_TR(0x40b12c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1074ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40b132:{NFSU2_TR(0x40b132);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40b140;}}
}
B40b134:L40b134:{c.instructions+=3;NFSU2_TR(0x40b134);
w4(R+0,u32(0x7e98a8ull));
}
B40b139:{NFSU2_TR(0x40b139);
w4(R+8,u32(0x12ull));
}
B40b13e:{NFSU2_TR(0x40b13e);
{goto L40b152;}
}
B40b140:L40b140:{c.instructions+=2;NFSU2_TR(0x40b140);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1075ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40b146:{NFSU2_TR(0x40b146);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40b152;}}
}
B40b148:L40b148:{c.instructions+=2;NFSU2_TR(0x40b148);
w4(R+0,u32(0x7e9a58ull));
}
B40b14d:{NFSU2_TR(0x40b14d);
w4(R+8,u32(0xcull));
}
B40b152:L40b152:{c.instructions+=7;NFSU2_TR(0x40b152);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b153:{NFSU2_TR(0x40b153);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b154:{NFSU2_TR(0x40b154);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b155:{NFSU2_TR(0x40b155);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B40b157:{NFSU2_TR(0x40b157);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40b159:{NFSU2_TR(0x40b159);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b15a:{NFSU2_TR(0x40b15a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40b1e3;}}
}
B40b160:L40b160:{c.instructions+=5;NFSU2_TR(0x40b160);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B40b164:{NFSU2_TR(0x40b164);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40b168:{NFSU2_TR(0x40b168);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B40b16c:{NFSU2_TR(0x40b16c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B40b16f:{NFSU2_TR(0x40b16f);
}
B40b170:L40b170:{c.instructions+=6;NFSU2_TR(0x40b170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40b172:{NFSU2_TR(0x40b172);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b175:{NFSU2_TR(0x40b175);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b179:{NFSU2_TR(0x40b179);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40b17c:{NFSU2_TR(0x40b17c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b17e:{NFSU2_TR(0x40b17e);
if(r1(R+518)){{goto L40b18a;}}
}
B40b180:L40b180:{c.instructions+=2;NFSU2_TR(0x40b180);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b182:{NFSU2_TR(0x40b182);
if(r1(R+518)){{goto L40b18a;}}
}
B40b184:L40b184:{c.instructions+=1;NFSU2_TR(0x40b184);
{u32 ea_=u32(u32(7879884u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40b18a:L40b18a:{c.instructions+=2;NFSU2_TR(0x40b18a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40b18d:{NFSU2_TR(0x40b18d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40b1d9;}}
}
B40b18f:L40b18f:{c.instructions+=3;NFSU2_TR(0x40b18f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40b193:{NFSU2_TR(0x40b193);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40b196:{NFSU2_TR(0x40b196);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40b1d9;}}
}
B40b198:L40b198:{c.instructions+=2;NFSU2_TR(0x40b198);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40b19b:{NFSU2_TR(0x40b19b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40b1d9;}}
}
B40b19d:L40b19d:{c.instructions+=5;NFSU2_TR(0x40b19d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b1a1:{NFSU2_TR(0x40b1a1);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40b1a3:{NFSU2_TR(0x40b1a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b1a5:{NFSU2_TR(0x40b1a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b1a8:{NFSU2_TR(0x40b1a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40b1b0;}}
}
B40b1aa:L40b1aa:{c.instructions+=2;NFSU2_TR(0x40b1aa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b1ac:{NFSU2_TR(0x40b1ac);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b1b0:L40b1b0:{c.instructions+=5;NFSU2_TR(0x40b1b0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b1b4:{NFSU2_TR(0x40b1b4);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40b1b6:{NFSU2_TR(0x40b1b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b1b8:{NFSU2_TR(0x40b1b8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40b1bb:{NFSU2_TR(0x40b1bb);
if(r1(R+514)){{goto L40b1c3;}}
}
B40b1bd:L40b1bd:{c.instructions+=2;NFSU2_TR(0x40b1bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b1bf:{NFSU2_TR(0x40b1bf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b1c3:L40b1c3:{c.instructions+=6;NFSU2_TR(0x40b1c3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b1c7:{NFSU2_TR(0x40b1c7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40b1c9:{NFSU2_TR(0x40b1c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b1cb:{NFSU2_TR(0x40b1cb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b1cd:{NFSU2_TR(0x40b1cd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40b1d0:{NFSU2_TR(0x40b1d0);
if(r1(R+514)){{goto L40b1db;}}
}
B40b1d2:L40b1d2:{c.instructions+=6;NFSU2_TR(0x40b1d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40b1d3:{NFSU2_TR(0x40b1d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40b1d4:{NFSU2_TR(0x40b1d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40b1d5:{NFSU2_TR(0x40b1d5);
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
B40b1d7:{NFSU2_TR(0x40b1d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40b1d8:{NFSU2_TR(0x40b1d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40b1d9:L40b1d9:{c.instructions+=1;NFSU2_TR(0x40b1d9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b1db:L40b1db:{c.instructions+=4;NFSU2_TR(0x40b1db);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B40b1dc:{NFSU2_TR(0x40b1dc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B40b1df:{NFSU2_TR(0x40b1df);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B40b1e1:{NFSU2_TR(0x40b1e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40b170u);}goto L40b170;}}
}
B40b1e3:L40b1e3:{c.instructions+=6;NFSU2_TR(0x40b1e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40b1e4:{NFSU2_TR(0x40b1e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40b1e5:{NFSU2_TR(0x40b1e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40b1e6:{NFSU2_TR(0x40b1e6);
w1(R+0,u8(0x1ull));
}
B40b1e8:{NFSU2_TR(0x40b1e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40b1e9:{NFSU2_TR(0x40b1e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40b1f0:L40b1f0:{c.instructions+=6;NFSU2_TR(0x40b1f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b1f1:{NFSU2_TR(0x40b1f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b1f2:{NFSU2_TR(0x40b1f2);
__builtin_memmove((R+24),(R+4),4);
}
B40b1f4:{NFSU2_TR(0x40b1f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40b1f8:{NFSU2_TR(0x40b1f8);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B40b1fc:{NFSU2_TR(0x40b1fc);
if(r1(R+518)){{goto L40b236;}}
}
B40b1fe:L40b1fe:{c.instructions+=3;NFSU2_TR(0x40b1fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B40b202:{NFSU2_TR(0x40b202);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B40b206:{NFSU2_TR(0x40b206);
if(r1(R+518)){{goto L40b236;}}
}
B40b208:L40b208:{c.instructions+=3;NFSU2_TR(0x40b208);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40b20b:{NFSU2_TR(0x40b20b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b20d:{NFSU2_TR(0x40b20d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b225;}}
}
B40b20f:L40b20f:{c.instructions+=5;NFSU2_TR(0x40b20f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40b216:{NFSU2_TR(0x40b216);
w4(R+4,u32(s32(s16(r2(R+8)))));
}
B40b219:{NFSU2_TR(0x40b219);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B40b21c:{NFSU2_TR(0x40b21c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B40b223:{NFSU2_TR(0x40b223);
{goto L40b238;}
}
B40b225:L40b225:{c.instructions+=5;NFSU2_TR(0x40b225);
w4(R+4,u32(s32(s16(r2(R+8)))));
}
B40b228:{NFSU2_TR(0x40b228);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40b22a:{NFSU2_TR(0x40b22a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B40b22d:{NFSU2_TR(0x40b22d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B40b234:{NFSU2_TR(0x40b234);
{goto L40b238;}
}
B40b236:L40b236:{c.instructions+=1;NFSU2_TR(0x40b236);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B40b238:L40b238:{c.instructions+=3;NFSU2_TR(0x40b238);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40b23c:{NFSU2_TR(0x40b23c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b23e:{NFSU2_TR(0x40b23e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b24e;}}
}
B40b240:L40b240:{c.instructions+=2;NFSU2_TR(0x40b240);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b243:{NFSU2_TR(0x40b243);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40b24e;}}
}
B40b245:L40b245:{c.instructions+=3;NFSU2_TR(0x40b245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40b248:{NFSU2_TR(0x40b248);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b24c:{NFSU2_TR(0x40b24c);
{goto L40b269;}
}
B40b24e:L40b24e:{c.instructions+=2;NFSU2_TR(0x40b24e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b251:{NFSU2_TR(0x40b251);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b261;}}
}
B40b253:L40b253:{c.instructions+=2;NFSU2_TR(0x40b253);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b256:{NFSU2_TR(0x40b256);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40b261;}}
}
B40b258:L40b258:{c.instructions+=3;NFSU2_TR(0x40b258);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b25b:{NFSU2_TR(0x40b25b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b25f:{NFSU2_TR(0x40b25f);
{goto L40b269;}
}
B40b261:L40b261:{c.instructions+=1;NFSU2_TR(0x40b261);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40b269:L40b269:{c.instructions+=8;NFSU2_TR(0x40b269);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40b26d:{NFSU2_TR(0x40b26d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40b270:{NFSU2_TR(0x40b270);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b274:{NFSU2_TR(0x40b274);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b275:{NFSU2_TR(0x40b275);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b279:{NFSU2_TR(0x40b279);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b27f:{NFSU2_TR(0x40b27f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b283:{NFSU2_TR(0x40b283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40b288ull));
TAIL_STATIC(0x401c40u,401);
}
B40b288:L40b288:{c.instructions+=5;NFSU2_TR(0x40b288);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40b28c:{NFSU2_TR(0x40b28c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40b28d:{NFSU2_TR(0x40b28d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40b291:{NFSU2_TR(0x40b291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40b292:{NFSU2_TR(0x40b292);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40b2a0:L40b2a0:{c.instructions+=6;NFSU2_TR(0x40b2a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b2a1:{NFSU2_TR(0x40b2a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b2a2:{NFSU2_TR(0x40b2a2);
__builtin_memmove((R+24),(R+4),4);
}
B40b2a4:{NFSU2_TR(0x40b2a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40b2a8:{NFSU2_TR(0x40b2a8);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B40b2ac:{NFSU2_TR(0x40b2ac);
if(r1(R+518)){{goto L40b2e6;}}
}
B40b2ae:L40b2ae:{c.instructions+=3;NFSU2_TR(0x40b2ae);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B40b2b2:{NFSU2_TR(0x40b2b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B40b2b6:{NFSU2_TR(0x40b2b6);
if(r1(R+518)){{goto L40b2e6;}}
}
B40b2b8:L40b2b8:{c.instructions+=3;NFSU2_TR(0x40b2b8);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40b2bb:{NFSU2_TR(0x40b2bb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b2bd:{NFSU2_TR(0x40b2bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b2d5;}}
}
B40b2bf:L40b2bf:{c.instructions+=5;NFSU2_TR(0x40b2bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40b2c6:{NFSU2_TR(0x40b2c6);
w4(R+4,u32(s32(s16(r2(R+8)))));
}
B40b2c9:{NFSU2_TR(0x40b2c9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B40b2cc:{NFSU2_TR(0x40b2cc);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B40b2d3:{NFSU2_TR(0x40b2d3);
{goto L40b2e8;}
}
B40b2d5:L40b2d5:{c.instructions+=5;NFSU2_TR(0x40b2d5);
w4(R+4,u32(s32(s16(r2(R+8)))));
}
B40b2d8:{NFSU2_TR(0x40b2d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40b2da:{NFSU2_TR(0x40b2da);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B40b2dd:{NFSU2_TR(0x40b2dd);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B40b2e4:{NFSU2_TR(0x40b2e4);
{goto L40b2e8;}
}
B40b2e6:L40b2e6:{c.instructions+=1;NFSU2_TR(0x40b2e6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B40b2e8:L40b2e8:{c.instructions+=3;NFSU2_TR(0x40b2e8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40b2ec:{NFSU2_TR(0x40b2ec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b2ee:{NFSU2_TR(0x40b2ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b2fe;}}
}
B40b2f0:L40b2f0:{c.instructions+=2;NFSU2_TR(0x40b2f0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b2f3:{NFSU2_TR(0x40b2f3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40b2fe;}}
}
B40b2f5:L40b2f5:{c.instructions+=3;NFSU2_TR(0x40b2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40b2f8:{NFSU2_TR(0x40b2f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b2fc:{NFSU2_TR(0x40b2fc);
{goto L40b319;}
}
B40b2fe:L40b2fe:{c.instructions+=2;NFSU2_TR(0x40b2fe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b301:{NFSU2_TR(0x40b301);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b311;}}
}
B40b303:L40b303:{c.instructions+=2;NFSU2_TR(0x40b303);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b306:{NFSU2_TR(0x40b306);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40b311;}}
}
B40b308:L40b308:{c.instructions+=3;NFSU2_TR(0x40b308);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b30b:{NFSU2_TR(0x40b30b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b30f:{NFSU2_TR(0x40b30f);
{goto L40b319;}
}
B40b311:L40b311:{c.instructions+=1;NFSU2_TR(0x40b311);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40b319:L40b319:{c.instructions+=9;NFSU2_TR(0x40b319);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40b31d:{NFSU2_TR(0x40b31d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40b320:{NFSU2_TR(0x40b320);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b324:{NFSU2_TR(0x40b324);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b325:{NFSU2_TR(0x40b325);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b329:{NFSU2_TR(0x40b329);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b32f:{NFSU2_TR(0x40b32f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40b331:{NFSU2_TR(0x40b331);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b335:{NFSU2_TR(0x40b335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40b33aull));
TAIL_STATIC(0x401c40u,401);
}
B40b33a:L40b33a:{c.instructions+=5;NFSU2_TR(0x40b33a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40b33e:{NFSU2_TR(0x40b33e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40b33f:{NFSU2_TR(0x40b33f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40b343:{NFSU2_TR(0x40b343);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40b344:{NFSU2_TR(0x40b344);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40b350:L40b350:{c.instructions+=7;NFSU2_TR(0x40b350);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40b354:{NFSU2_TR(0x40b354);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B40b357:{NFSU2_TR(0x40b357);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b358:{NFSU2_TR(0x40b358);
__builtin_memmove((R+24),(R+4),4);
}
B40b35a:{NFSU2_TR(0x40b35a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40b35d:{NFSU2_TR(0x40b35d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B40b360:{NFSU2_TR(0x40b360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40b365ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B40b365:L40b365:{c.instructions+=3;NFSU2_TR(0x40b365);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40b369:{NFSU2_TR(0x40b369);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B40b36d:{NFSU2_TR(0x40b36d);
if(r1(R+518)){{goto L40b3a7;}}
}
B40b36f:L40b36f:{c.instructions+=3;NFSU2_TR(0x40b36f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B40b373:{NFSU2_TR(0x40b373);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B40b377:{NFSU2_TR(0x40b377);
if(r1(R+518)){{goto L40b3a7;}}
}
B40b379:L40b379:{c.instructions+=3;NFSU2_TR(0x40b379);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40b37c:{NFSU2_TR(0x40b37c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b37e:{NFSU2_TR(0x40b37e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b396;}}
}
B40b380:L40b380:{c.instructions+=5;NFSU2_TR(0x40b380);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40b387:{NFSU2_TR(0x40b387);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B40b38a:{NFSU2_TR(0x40b38a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B40b38d:{NFSU2_TR(0x40b38d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B40b394:{NFSU2_TR(0x40b394);
{goto L40b3a9;}
}
B40b396:L40b396:{c.instructions+=5;NFSU2_TR(0x40b396);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B40b399:{NFSU2_TR(0x40b399);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40b39b:{NFSU2_TR(0x40b39b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B40b39e:{NFSU2_TR(0x40b39e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B40b3a5:{NFSU2_TR(0x40b3a5);
{goto L40b3a9;}
}
B40b3a7:L40b3a7:{c.instructions+=1;NFSU2_TR(0x40b3a7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B40b3a9:L40b3a9:{c.instructions+=16;NFSU2_TR(0x40b3a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40b3ad:{NFSU2_TR(0x40b3ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40b3b1:{NFSU2_TR(0x40b3b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40b3b4:{NFSU2_TR(0x40b3b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b3b8:{NFSU2_TR(0x40b3b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40b3bb:{NFSU2_TR(0x40b3bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b3bf:{NFSU2_TR(0x40b3bf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b3c3:{NFSU2_TR(0x40b3c3);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b3c9:{NFSU2_TR(0x40b3c9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b3cd:{NFSU2_TR(0x40b3cd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b3d1:{NFSU2_TR(0x40b3d1);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b3d7:{NFSU2_TR(0x40b3d7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40b3d9:{NFSU2_TR(0x40b3d9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b3dd:{NFSU2_TR(0x40b3dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b3df:{NFSU2_TR(0x40b3df);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b3e2:{NFSU2_TR(0x40b3e2);
if(r1(R+518)){{goto L40b3ea;}}
}
B40b3e4:L40b3e4:{c.instructions+=2;NFSU2_TR(0x40b3e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b3e6:{NFSU2_TR(0x40b3e6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b3ea:L40b3ea:{c.instructions+=17;NFSU2_TR(0x40b3ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B40b3ee:{NFSU2_TR(0x40b3ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40b3f1:{NFSU2_TR(0x40b3f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b3f5:{NFSU2_TR(0x40b3f5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b3f9:{NFSU2_TR(0x40b3f9);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b3ff:{NFSU2_TR(0x40b3ff);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b403:{NFSU2_TR(0x40b403);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40b405:{NFSU2_TR(0x40b405);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40b407:{NFSU2_TR(0x40b407);
{u32 ea_=u32(u32(7879888u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40b40d:{NFSU2_TR(0x40b40d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b411:{NFSU2_TR(0x40b411);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b413:{NFSU2_TR(0x40b413);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B40b415:{NFSU2_TR(0x40b415);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b419:{NFSU2_TR(0x40b419);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b41d:{NFSU2_TR(0x40b41d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b41f:{NFSU2_TR(0x40b41f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b422:{NFSU2_TR(0x40b422);
if(r1(R+518)){{goto L40b42a;}}
}
B40b424:L40b424:{c.instructions+=2;NFSU2_TR(0x40b424);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b426:{NFSU2_TR(0x40b426);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b42a:L40b42a:{c.instructions+=12;NFSU2_TR(0x40b42a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b42e:{NFSU2_TR(0x40b42e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40b430:{NFSU2_TR(0x40b430);
__asm__ volatile(".byte 0xd8,0xea":::"memory");
}
B40b432:{NFSU2_TR(0x40b432);
{u32 ea_=u32(u32(7879888u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40b438:{NFSU2_TR(0x40b438);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b43c:{NFSU2_TR(0x40b43c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b43e:{NFSU2_TR(0x40b43e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b440:{NFSU2_TR(0x40b440);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b443:{NFSU2_TR(0x40b443);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b447:{NFSU2_TR(0x40b447);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b449:{NFSU2_TR(0x40b449);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b44c:{NFSU2_TR(0x40b44c);
if(r1(R+518)){{goto L40b454;}}
}
B40b44e:L40b44e:{c.instructions+=2;NFSU2_TR(0x40b44e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b450:{NFSU2_TR(0x40b450);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b454:L40b454:{c.instructions+=5;NFSU2_TR(0x40b454);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b458:{NFSU2_TR(0x40b458);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40b45a:{NFSU2_TR(0x40b45a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b45c:{NFSU2_TR(0x40b45c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40b45f:{NFSU2_TR(0x40b45f);
if(r1(R+514)){{goto L40b467;}}
}
B40b461:L40b461:{c.instructions+=2;NFSU2_TR(0x40b461);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b463:{NFSU2_TR(0x40b463);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b467:L40b467:{c.instructions+=17;NFSU2_TR(0x40b467);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b46a:{NFSU2_TR(0x40b46a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40b46e:{NFSU2_TR(0x40b46e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40b472:{NFSU2_TR(0x40b472);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40b475:{NFSU2_TR(0x40b475);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b479:{NFSU2_TR(0x40b479);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40b47c:{NFSU2_TR(0x40b47c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b480:{NFSU2_TR(0x40b480);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b484:{NFSU2_TR(0x40b484);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b48a:{NFSU2_TR(0x40b48a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b48e:{NFSU2_TR(0x40b48e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b492:{NFSU2_TR(0x40b492);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b498:{NFSU2_TR(0x40b498);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40b49a:{NFSU2_TR(0x40b49a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b49e:{NFSU2_TR(0x40b49e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b4a0:{NFSU2_TR(0x40b4a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b4a3:{NFSU2_TR(0x40b4a3);
if(r1(R+518)){{goto L40b4ab;}}
}
B40b4a5:L40b4a5:{c.instructions+=2;NFSU2_TR(0x40b4a5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b4a7:{NFSU2_TR(0x40b4a7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b4ab:L40b4ab:{c.instructions+=17;NFSU2_TR(0x40b4ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40b4af:{NFSU2_TR(0x40b4af);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40b4b2:{NFSU2_TR(0x40b4b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b4b6:{NFSU2_TR(0x40b4b6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b4ba:{NFSU2_TR(0x40b4ba);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b4c0:{NFSU2_TR(0x40b4c0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b4c4:{NFSU2_TR(0x40b4c4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40b4c6:{NFSU2_TR(0x40b4c6);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40b4c8:{NFSU2_TR(0x40b4c8);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40b4ce:{NFSU2_TR(0x40b4ce);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b4d2:{NFSU2_TR(0x40b4d2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b4d4:{NFSU2_TR(0x40b4d4);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B40b4d6:{NFSU2_TR(0x40b4d6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b4da:{NFSU2_TR(0x40b4da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b4de:{NFSU2_TR(0x40b4de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b4e0:{NFSU2_TR(0x40b4e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b4e3:{NFSU2_TR(0x40b4e3);
if(r1(R+518)){{goto L40b4eb;}}
}
B40b4e5:L40b4e5:{c.instructions+=2;NFSU2_TR(0x40b4e5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b4e7:{NFSU2_TR(0x40b4e7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b4eb:L40b4eb:{c.instructions+=12;NFSU2_TR(0x40b4eb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b4ef:{NFSU2_TR(0x40b4ef);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40b4f1:{NFSU2_TR(0x40b4f1);
__asm__ volatile(".byte 0xd8,0xea":::"memory");
}
B40b4f3:{NFSU2_TR(0x40b4f3);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40b4f9:{NFSU2_TR(0x40b4f9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b4fd:{NFSU2_TR(0x40b4fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b4ff:{NFSU2_TR(0x40b4ff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b501:{NFSU2_TR(0x40b501);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b504:{NFSU2_TR(0x40b504);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b508:{NFSU2_TR(0x40b508);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b50a:{NFSU2_TR(0x40b50a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b50d:{NFSU2_TR(0x40b50d);
if(r1(R+518)){{goto L40b515;}}
}
B40b50f:L40b50f:{c.instructions+=2;NFSU2_TR(0x40b50f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b511:{NFSU2_TR(0x40b511);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b515:L40b515:{c.instructions+=5;NFSU2_TR(0x40b515);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b519:{NFSU2_TR(0x40b519);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40b51b:{NFSU2_TR(0x40b51b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b51d:{NFSU2_TR(0x40b51d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40b520:{NFSU2_TR(0x40b520);
if(r1(R+514)){{goto L40b528;}}
}
B40b522:L40b522:{c.instructions+=2;NFSU2_TR(0x40b522);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b524:{NFSU2_TR(0x40b524);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b528:L40b528:{c.instructions+=17;NFSU2_TR(0x40b528);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b52b:{NFSU2_TR(0x40b52b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40b52f:{NFSU2_TR(0x40b52f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40b533:{NFSU2_TR(0x40b533);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40b536:{NFSU2_TR(0x40b536);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b53a:{NFSU2_TR(0x40b53a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40b53d:{NFSU2_TR(0x40b53d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b541:{NFSU2_TR(0x40b541);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b545:{NFSU2_TR(0x40b545);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b54b:{NFSU2_TR(0x40b54b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b54f:{NFSU2_TR(0x40b54f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b553:{NFSU2_TR(0x40b553);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b559:{NFSU2_TR(0x40b559);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40b55b:{NFSU2_TR(0x40b55b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b55f:{NFSU2_TR(0x40b55f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b561:{NFSU2_TR(0x40b561);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b564:{NFSU2_TR(0x40b564);
if(r1(R+518)){{goto L40b56c;}}
}
B40b566:L40b566:{c.instructions+=2;NFSU2_TR(0x40b566);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b568:{NFSU2_TR(0x40b568);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b56c:L40b56c:{c.instructions+=17;NFSU2_TR(0x40b56c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B40b570:{NFSU2_TR(0x40b570);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40b573:{NFSU2_TR(0x40b573);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b577:{NFSU2_TR(0x40b577);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b57b:{NFSU2_TR(0x40b57b);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b581:{NFSU2_TR(0x40b581);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b585:{NFSU2_TR(0x40b585);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40b587:{NFSU2_TR(0x40b587);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40b589:{NFSU2_TR(0x40b589);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40b58f:{NFSU2_TR(0x40b58f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b593:{NFSU2_TR(0x40b593);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b595:{NFSU2_TR(0x40b595);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B40b597:{NFSU2_TR(0x40b597);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b59b:{NFSU2_TR(0x40b59b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b59f:{NFSU2_TR(0x40b59f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b5a1:{NFSU2_TR(0x40b5a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b5a4:{NFSU2_TR(0x40b5a4);
if(r1(R+518)){{goto L40b5ac;}}
}
B40b5a6:L40b5a6:{c.instructions+=2;NFSU2_TR(0x40b5a6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b5a8:{NFSU2_TR(0x40b5a8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b5ac:L40b5ac:{c.instructions+=12;NFSU2_TR(0x40b5ac);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b5b0:{NFSU2_TR(0x40b5b0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40b5b2:{NFSU2_TR(0x40b5b2);
__asm__ volatile(".byte 0xd8,0xea":::"memory");
}
B40b5b4:{NFSU2_TR(0x40b5b4);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40b5ba:{NFSU2_TR(0x40b5ba);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b5be:{NFSU2_TR(0x40b5be);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b5c0:{NFSU2_TR(0x40b5c0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b5c2:{NFSU2_TR(0x40b5c2);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b5c5:{NFSU2_TR(0x40b5c5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b5c9:{NFSU2_TR(0x40b5c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b5cb:{NFSU2_TR(0x40b5cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b5ce:{NFSU2_TR(0x40b5ce);
if(r1(R+518)){{goto L40b5d6;}}
}
B40b5d0:L40b5d0:{c.instructions+=2;NFSU2_TR(0x40b5d0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b5d2:{NFSU2_TR(0x40b5d2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b5d6:L40b5d6:{c.instructions+=5;NFSU2_TR(0x40b5d6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b5da:{NFSU2_TR(0x40b5da);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40b5dc:{NFSU2_TR(0x40b5dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b5de:{NFSU2_TR(0x40b5de);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40b5e1:{NFSU2_TR(0x40b5e1);
if(r1(R+514)){{goto L40b5e9;}}
}
B40b5e3:L40b5e3:{c.instructions+=2;NFSU2_TR(0x40b5e3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b5e5:{NFSU2_TR(0x40b5e5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b5e9:L40b5e9:{c.instructions+=17;NFSU2_TR(0x40b5e9);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b5ec:{NFSU2_TR(0x40b5ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40b5f0:{NFSU2_TR(0x40b5f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40b5f4:{NFSU2_TR(0x40b5f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40b5f7:{NFSU2_TR(0x40b5f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b5fb:{NFSU2_TR(0x40b5fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40b5fe:{NFSU2_TR(0x40b5fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b602:{NFSU2_TR(0x40b602);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b606:{NFSU2_TR(0x40b606);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b60c:{NFSU2_TR(0x40b60c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b610:{NFSU2_TR(0x40b610);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b614:{NFSU2_TR(0x40b614);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b61a:{NFSU2_TR(0x40b61a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40b61c:{NFSU2_TR(0x40b61c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b620:{NFSU2_TR(0x40b620);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b622:{NFSU2_TR(0x40b622);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b625:{NFSU2_TR(0x40b625);
if(r1(R+518)){{goto L40b62d;}}
}
B40b627:L40b627:{c.instructions+=2;NFSU2_TR(0x40b627);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b629:{NFSU2_TR(0x40b629);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b62d:L40b62d:{c.instructions+=17;NFSU2_TR(0x40b62d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40b631:{NFSU2_TR(0x40b631);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40b634:{NFSU2_TR(0x40b634);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b638:{NFSU2_TR(0x40b638);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b63c:{NFSU2_TR(0x40b63c);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b642:{NFSU2_TR(0x40b642);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b646:{NFSU2_TR(0x40b646);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40b648:{NFSU2_TR(0x40b648);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40b64a:{NFSU2_TR(0x40b64a);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40b650:{NFSU2_TR(0x40b650);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b654:{NFSU2_TR(0x40b654);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b656:{NFSU2_TR(0x40b656);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B40b658:{NFSU2_TR(0x40b658);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b65c:{NFSU2_TR(0x40b65c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b660:{NFSU2_TR(0x40b660);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b662:{NFSU2_TR(0x40b662);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b665:{NFSU2_TR(0x40b665);
if(r1(R+518)){{goto L40b66d;}}
}
B40b667:L40b667:{c.instructions+=2;NFSU2_TR(0x40b667);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b669:{NFSU2_TR(0x40b669);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b66d:L40b66d:{c.instructions+=12;NFSU2_TR(0x40b66d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b671:{NFSU2_TR(0x40b671);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40b673:{NFSU2_TR(0x40b673);
__asm__ volatile(".byte 0xd8,0xea":::"memory");
}
B40b675:{NFSU2_TR(0x40b675);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40b67b:{NFSU2_TR(0x40b67b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b67f:{NFSU2_TR(0x40b67f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b681:{NFSU2_TR(0x40b681);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b683:{NFSU2_TR(0x40b683);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b686:{NFSU2_TR(0x40b686);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b68a:{NFSU2_TR(0x40b68a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b68c:{NFSU2_TR(0x40b68c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b68f:{NFSU2_TR(0x40b68f);
if(r1(R+518)){{goto L40b697;}}
}
B40b691:L40b691:{c.instructions+=2;NFSU2_TR(0x40b691);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b693:{NFSU2_TR(0x40b693);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b697:L40b697:{c.instructions+=5;NFSU2_TR(0x40b697);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b69b:{NFSU2_TR(0x40b69b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40b69d:{NFSU2_TR(0x40b69d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b69f:{NFSU2_TR(0x40b69f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40b6a2:{NFSU2_TR(0x40b6a2);
if(r1(R+514)){{goto L40b6aa;}}
}
B40b6a4:L40b6a4:{c.instructions+=2;NFSU2_TR(0x40b6a4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b6a6:{NFSU2_TR(0x40b6a6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b6aa:L40b6aa:{c.instructions+=17;NFSU2_TR(0x40b6aa);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b6ad:{NFSU2_TR(0x40b6ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40b6b1:{NFSU2_TR(0x40b6b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40b6b5:{NFSU2_TR(0x40b6b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40b6b8:{NFSU2_TR(0x40b6b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b6bc:{NFSU2_TR(0x40b6bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40b6bf:{NFSU2_TR(0x40b6bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b6c3:{NFSU2_TR(0x40b6c3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b6c7:{NFSU2_TR(0x40b6c7);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b6cd:{NFSU2_TR(0x40b6cd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b6d1:{NFSU2_TR(0x40b6d1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b6d5:{NFSU2_TR(0x40b6d5);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b6db:{NFSU2_TR(0x40b6db);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40b6dd:{NFSU2_TR(0x40b6dd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b6e1:{NFSU2_TR(0x40b6e1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b6e3:{NFSU2_TR(0x40b6e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b6e6:{NFSU2_TR(0x40b6e6);
if(r1(R+518)){{goto L40b6ee;}}
}
B40b6e8:L40b6e8:{c.instructions+=2;NFSU2_TR(0x40b6e8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b6ea:{NFSU2_TR(0x40b6ea);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b6ee:L40b6ee:{c.instructions+=17;NFSU2_TR(0x40b6ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x27ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B40b6f2:{NFSU2_TR(0x40b6f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B40b6f5:{NFSU2_TR(0x40b6f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b6f9:{NFSU2_TR(0x40b6f9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b6fd:{NFSU2_TR(0x40b6fd);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b703:{NFSU2_TR(0x40b703);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b707:{NFSU2_TR(0x40b707);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40b709:{NFSU2_TR(0x40b709);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40b70b:{NFSU2_TR(0x40b70b);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40b711:{NFSU2_TR(0x40b711);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b715:{NFSU2_TR(0x40b715);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b717:{NFSU2_TR(0x40b717);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B40b719:{NFSU2_TR(0x40b719);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b71d:{NFSU2_TR(0x40b71d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b721:{NFSU2_TR(0x40b721);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b723:{NFSU2_TR(0x40b723);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b726:{NFSU2_TR(0x40b726);
if(r1(R+518)){{goto L40b72e;}}
}
B40b728:L40b728:{c.instructions+=2;NFSU2_TR(0x40b728);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b72a:{NFSU2_TR(0x40b72a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b72e:L40b72e:{c.instructions+=12;NFSU2_TR(0x40b72e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b732:{NFSU2_TR(0x40b732);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40b734:{NFSU2_TR(0x40b734);
__asm__ volatile(".byte 0xd8,0xea":::"memory");
}
B40b736:{NFSU2_TR(0x40b736);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40b73c:{NFSU2_TR(0x40b73c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b740:{NFSU2_TR(0x40b740);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b742:{NFSU2_TR(0x40b742);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b744:{NFSU2_TR(0x40b744);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b747:{NFSU2_TR(0x40b747);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b74b:{NFSU2_TR(0x40b74b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b74d:{NFSU2_TR(0x40b74d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b750:{NFSU2_TR(0x40b750);
if(r1(R+518)){{goto L40b758;}}
}
B40b752:L40b752:{c.instructions+=2;NFSU2_TR(0x40b752);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b754:{NFSU2_TR(0x40b754);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b758:L40b758:{c.instructions+=5;NFSU2_TR(0x40b758);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b75c:{NFSU2_TR(0x40b75c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40b75e:{NFSU2_TR(0x40b75e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b760:{NFSU2_TR(0x40b760);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40b763:{NFSU2_TR(0x40b763);
if(r1(R+514)){{goto L40b775;}}
}
B40b765:L40b765:{c.instructions+=6;NFSU2_TR(0x40b765);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40b769:{NFSU2_TR(0x40b769);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b76b:{NFSU2_TR(0x40b76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b76e:{NFSU2_TR(0x40b76e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40b76f:{NFSU2_TR(0x40b76f);
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
B40b772:{NFSU2_TR(0x40b772);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40b775:L40b775:{c.instructions+=4;NFSU2_TR(0x40b775);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b778:{NFSU2_TR(0x40b778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40b779:{NFSU2_TR(0x40b779);
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
B40b77c:{NFSU2_TR(0x40b77c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40b780:L40b780:{c.instructions+=4;NFSU2_TR(0x40b780);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b781:{NFSU2_TR(0x40b781);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40b785:{NFSU2_TR(0x40b785);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B40b789:{NFSU2_TR(0x40b789);
if(r1(R+518)){{goto L40b7c3;}}
}
B40b78b:L40b78b:{c.instructions+=3;NFSU2_TR(0x40b78b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B40b78f:{NFSU2_TR(0x40b78f);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B40b793:{NFSU2_TR(0x40b793);
if(r1(R+518)){{goto L40b7c3;}}
}
B40b795:L40b795:{c.instructions+=3;NFSU2_TR(0x40b795);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40b798:{NFSU2_TR(0x40b798);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b79a:{NFSU2_TR(0x40b79a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b7b2;}}
}
B40b79c:L40b79c:{c.instructions+=5;NFSU2_TR(0x40b79c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40b7a3:{NFSU2_TR(0x40b7a3);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B40b7a6:{NFSU2_TR(0x40b7a6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B40b7a9:{NFSU2_TR(0x40b7a9);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B40b7b0:{NFSU2_TR(0x40b7b0);
{goto L40b7c5;}
}
B40b7b2:L40b7b2:{c.instructions+=5;NFSU2_TR(0x40b7b2);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B40b7b5:{NFSU2_TR(0x40b7b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40b7b7:{NFSU2_TR(0x40b7b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B40b7ba:{NFSU2_TR(0x40b7ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B40b7c1:{NFSU2_TR(0x40b7c1);
{goto L40b7c5;}
}
B40b7c3:L40b7c3:{c.instructions+=1;NFSU2_TR(0x40b7c3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40b7c5:L40b7c5:{c.instructions+=3;NFSU2_TR(0x40b7c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40b7c9:{NFSU2_TR(0x40b7c9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b7cb:{NFSU2_TR(0x40b7cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b7db;}}
}
B40b7cd:L40b7cd:{c.instructions+=2;NFSU2_TR(0x40b7cd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b7d0:{NFSU2_TR(0x40b7d0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40b7db;}}
}
B40b7d2:L40b7d2:{c.instructions+=3;NFSU2_TR(0x40b7d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40b7d5:{NFSU2_TR(0x40b7d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b7d9:{NFSU2_TR(0x40b7d9);
{goto L40b7f6;}
}
B40b7db:L40b7db:{c.instructions+=2;NFSU2_TR(0x40b7db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b7de:{NFSU2_TR(0x40b7de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b7ee;}}
}
B40b7e0:L40b7e0:{c.instructions+=2;NFSU2_TR(0x40b7e0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b7e3:{NFSU2_TR(0x40b7e3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40b7ee;}}
}
B40b7e5:L40b7e5:{c.instructions+=3;NFSU2_TR(0x40b7e5);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b7e8:{NFSU2_TR(0x40b7e8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b7ec:{NFSU2_TR(0x40b7ec);
{goto L40b7f6;}
}
B40b7ee:L40b7ee:{c.instructions+=1;NFSU2_TR(0x40b7ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40b7f6:L40b7f6:{c.instructions+=2;NFSU2_TR(0x40b7f6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b7f8:{NFSU2_TR(0x40b7f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b802;}}
}
B40b7fa:L40b7fa:{c.instructions+=2;NFSU2_TR(0x40b7fa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b7fd:{NFSU2_TR(0x40b7fd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40b802;}}
}
B40b7ff:L40b7ff:{c.instructions+=2;NFSU2_TR(0x40b7ff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B40b800:{NFSU2_TR(0x40b800);
{goto L40b80f;}
}
B40b802:L40b802:{c.instructions+=2;NFSU2_TR(0x40b802);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b805:{NFSU2_TR(0x40b805);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b80f;}}
}
B40b807:L40b807:{c.instructions+=2;NFSU2_TR(0x40b807);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b80a:{NFSU2_TR(0x40b80a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40b80f;}}
}
B40b80c:L40b80c:{c.instructions+=1;NFSU2_TR(0x40b80c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B40b80f:L40b80f:{c.instructions+=9;NFSU2_TR(0x40b80f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B40b813:{NFSU2_TR(0x40b813);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B40b816:{NFSU2_TR(0x40b816);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B40b81a:{NFSU2_TR(0x40b81a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b81b:{NFSU2_TR(0x40b81b);
__builtin_memmove((R+4),(R+8),4);
}
B40b81d:{NFSU2_TR(0x40b81d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b821:{NFSU2_TR(0x40b821);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b827:{NFSU2_TR(0x40b827);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b82b:{NFSU2_TR(0x40b82b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40b830ull));
TAIL_STATIC(0x401c40u,401);
}
B40b830:L40b830:{c.instructions+=4;NFSU2_TR(0x40b830);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40b834:{NFSU2_TR(0x40b834);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40b838:{NFSU2_TR(0x40b838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40b839:{NFSU2_TR(0x40b839);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40b840:L40b840:{c.instructions+=4;NFSU2_TR(0x40b840);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b841:{NFSU2_TR(0x40b841);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40b845:{NFSU2_TR(0x40b845);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B40b849:{NFSU2_TR(0x40b849);
if(r1(R+518)){{goto L40b883;}}
}
B40b84b:L40b84b:{c.instructions+=3;NFSU2_TR(0x40b84b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B40b84f:{NFSU2_TR(0x40b84f);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B40b853:{NFSU2_TR(0x40b853);
if(r1(R+518)){{goto L40b883;}}
}
B40b855:L40b855:{c.instructions+=3;NFSU2_TR(0x40b855);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40b858:{NFSU2_TR(0x40b858);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b85a:{NFSU2_TR(0x40b85a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b872;}}
}
B40b85c:L40b85c:{c.instructions+=5;NFSU2_TR(0x40b85c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40b863:{NFSU2_TR(0x40b863);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B40b866:{NFSU2_TR(0x40b866);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B40b869:{NFSU2_TR(0x40b869);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B40b870:{NFSU2_TR(0x40b870);
{goto L40b885;}
}
B40b872:L40b872:{c.instructions+=5;NFSU2_TR(0x40b872);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B40b875:{NFSU2_TR(0x40b875);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40b877:{NFSU2_TR(0x40b877);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B40b87a:{NFSU2_TR(0x40b87a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B40b881:{NFSU2_TR(0x40b881);
{goto L40b885;}
}
B40b883:L40b883:{c.instructions+=1;NFSU2_TR(0x40b883);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40b885:L40b885:{c.instructions+=3;NFSU2_TR(0x40b885);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40b889:{NFSU2_TR(0x40b889);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b88b:{NFSU2_TR(0x40b88b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b89b;}}
}
B40b88d:L40b88d:{c.instructions+=2;NFSU2_TR(0x40b88d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b890:{NFSU2_TR(0x40b890);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40b89b;}}
}
B40b892:L40b892:{c.instructions+=3;NFSU2_TR(0x40b892);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40b895:{NFSU2_TR(0x40b895);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b899:{NFSU2_TR(0x40b899);
{goto L40b8b6;}
}
B40b89b:L40b89b:{c.instructions+=2;NFSU2_TR(0x40b89b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b89e:{NFSU2_TR(0x40b89e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b8ae;}}
}
B40b8a0:L40b8a0:{c.instructions+=2;NFSU2_TR(0x40b8a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b8a3:{NFSU2_TR(0x40b8a3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40b8ae;}}
}
B40b8a5:L40b8a5:{c.instructions+=3;NFSU2_TR(0x40b8a5);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b8a8:{NFSU2_TR(0x40b8a8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b8ac:{NFSU2_TR(0x40b8ac);
{goto L40b8b6;}
}
B40b8ae:L40b8ae:{c.instructions+=1;NFSU2_TR(0x40b8ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40b8b6:L40b8b6:{c.instructions+=2;NFSU2_TR(0x40b8b6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b8b8:{NFSU2_TR(0x40b8b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b8c2;}}
}
B40b8ba:L40b8ba:{c.instructions+=2;NFSU2_TR(0x40b8ba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b8bd:{NFSU2_TR(0x40b8bd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40b8c2;}}
}
B40b8bf:L40b8bf:{c.instructions+=2;NFSU2_TR(0x40b8bf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B40b8c0:{NFSU2_TR(0x40b8c0);
{goto L40b8cf;}
}
B40b8c2:L40b8c2:{c.instructions+=2;NFSU2_TR(0x40b8c2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b8c5:{NFSU2_TR(0x40b8c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b8cf;}}
}
B40b8c7:L40b8c7:{c.instructions+=2;NFSU2_TR(0x40b8c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40b8ca:{NFSU2_TR(0x40b8ca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40b8cf;}}
}
B40b8cc:L40b8cc:{c.instructions+=1;NFSU2_TR(0x40b8cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B40b8cf:L40b8cf:{c.instructions+=10;NFSU2_TR(0x40b8cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B40b8d3:{NFSU2_TR(0x40b8d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B40b8d6:{NFSU2_TR(0x40b8d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B40b8da:{NFSU2_TR(0x40b8da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b8db:{NFSU2_TR(0x40b8db);
__builtin_memmove((R+4),(R+8),4);
}
B40b8dd:{NFSU2_TR(0x40b8dd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b8e1:{NFSU2_TR(0x40b8e1);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b8e7:{NFSU2_TR(0x40b8e7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40b8e9:{NFSU2_TR(0x40b8e9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b8ed:{NFSU2_TR(0x40b8ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40b8f2ull));
TAIL_STATIC(0x401c40u,401);
}
B40b8f2:L40b8f2:{c.instructions+=4;NFSU2_TR(0x40b8f2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40b8f6:{NFSU2_TR(0x40b8f6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40b8fa:{NFSU2_TR(0x40b8fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40b8fb:{NFSU2_TR(0x40b8fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40b900:L40b900:{c.instructions+=7;NFSU2_TR(0x40b900);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40b904:{NFSU2_TR(0x40b904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B40b907:{NFSU2_TR(0x40b907);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40b908:{NFSU2_TR(0x40b908);
__builtin_memmove((R+24),(R+4),4);
}
B40b90a:{NFSU2_TR(0x40b90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40b90d:{NFSU2_TR(0x40b90d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B40b910:{NFSU2_TR(0x40b910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40b915ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B40b915:L40b915:{c.instructions+=3;NFSU2_TR(0x40b915);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40b919:{NFSU2_TR(0x40b919);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B40b91d:{NFSU2_TR(0x40b91d);
if(r1(R+518)){{goto L40b957;}}
}
B40b91f:L40b91f:{c.instructions+=3;NFSU2_TR(0x40b91f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B40b923:{NFSU2_TR(0x40b923);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B40b927:{NFSU2_TR(0x40b927);
if(r1(R+518)){{goto L40b957;}}
}
B40b929:L40b929:{c.instructions+=3;NFSU2_TR(0x40b929);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40b92c:{NFSU2_TR(0x40b92c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40b92e:{NFSU2_TR(0x40b92e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40b946;}}
}
B40b930:L40b930:{c.instructions+=5;NFSU2_TR(0x40b930);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40b937:{NFSU2_TR(0x40b937);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B40b93a:{NFSU2_TR(0x40b93a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B40b93d:{NFSU2_TR(0x40b93d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B40b944:{NFSU2_TR(0x40b944);
{goto L40b959;}
}
B40b946:L40b946:{c.instructions+=5;NFSU2_TR(0x40b946);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B40b949:{NFSU2_TR(0x40b949);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40b94b:{NFSU2_TR(0x40b94b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B40b94e:{NFSU2_TR(0x40b94e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B40b955:{NFSU2_TR(0x40b955);
{goto L40b959;}
}
B40b957:L40b957:{c.instructions+=1;NFSU2_TR(0x40b957);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B40b959:L40b959:{c.instructions+=17;NFSU2_TR(0x40b959);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40b95d:{NFSU2_TR(0x40b95d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40b961:{NFSU2_TR(0x40b961);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40b964:{NFSU2_TR(0x40b964);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b968:{NFSU2_TR(0x40b968);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40b96b:{NFSU2_TR(0x40b96b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b96f:{NFSU2_TR(0x40b96f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b973:{NFSU2_TR(0x40b973);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b979:{NFSU2_TR(0x40b979);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40b97b:{NFSU2_TR(0x40b97b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b97f:{NFSU2_TR(0x40b97f);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b985:{NFSU2_TR(0x40b985);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b989:{NFSU2_TR(0x40b989);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b98d:{NFSU2_TR(0x40b98d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40b98f:{NFSU2_TR(0x40b98f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b991:{NFSU2_TR(0x40b991);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b994:{NFSU2_TR(0x40b994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40b99c;}}
}
B40b996:L40b996:{c.instructions+=2;NFSU2_TR(0x40b996);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b998:{NFSU2_TR(0x40b998);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b99c:L40b99c:{c.instructions+=17;NFSU2_TR(0x40b99c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B40b9a0:{NFSU2_TR(0x40b9a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40b9a3:{NFSU2_TR(0x40b9a3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40b9a7:{NFSU2_TR(0x40b9a7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40b9ab:{NFSU2_TR(0x40b9ab);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40b9b1:{NFSU2_TR(0x40b9b1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b9b5:{NFSU2_TR(0x40b9b5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40b9b7:{NFSU2_TR(0x40b9b7);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40b9b9:{NFSU2_TR(0x40b9b9);
{u32 ea_=u32(u32(7879888u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40b9bf:{NFSU2_TR(0x40b9bf);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b9c3:{NFSU2_TR(0x40b9c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b9c5:{NFSU2_TR(0x40b9c5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b9c9:{NFSU2_TR(0x40b9c9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40b9cd:{NFSU2_TR(0x40b9cd);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40b9cf:{NFSU2_TR(0x40b9cf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b9d1:{NFSU2_TR(0x40b9d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b9d4:{NFSU2_TR(0x40b9d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40b9dc;}}
}
B40b9d6:L40b9d6:{c.instructions+=2;NFSU2_TR(0x40b9d6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b9d8:{NFSU2_TR(0x40b9d8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b9dc:L40b9dc:{c.instructions+=11;NFSU2_TR(0x40b9dc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b9e0:{NFSU2_TR(0x40b9e0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40b9e2:{NFSU2_TR(0x40b9e2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40b9e6:{NFSU2_TR(0x40b9e6);
{u32 ea_=u32(u32(7879888u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40b9ec:{NFSU2_TR(0x40b9ec);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40b9f0:{NFSU2_TR(0x40b9f0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40b9f2:{NFSU2_TR(0x40b9f2);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40b9f5:{NFSU2_TR(0x40b9f5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40b9f9:{NFSU2_TR(0x40b9f9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40b9fb:{NFSU2_TR(0x40b9fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40b9fe:{NFSU2_TR(0x40b9fe);
if(r1(R+518)){{goto L40ba06;}}
}
B40ba00:L40ba00:{c.instructions+=2;NFSU2_TR(0x40ba00);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40ba02:{NFSU2_TR(0x40ba02);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ba06:L40ba06:{c.instructions+=5;NFSU2_TR(0x40ba06);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ba0a:{NFSU2_TR(0x40ba0a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40ba0c:{NFSU2_TR(0x40ba0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40ba0e:{NFSU2_TR(0x40ba0e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40ba11:{NFSU2_TR(0x40ba11);
if(r1(R+514)){{goto L40ba19;}}
}
B40ba13:L40ba13:{c.instructions+=2;NFSU2_TR(0x40ba13);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40ba15:{NFSU2_TR(0x40ba15);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ba19:L40ba19:{c.instructions+=18;NFSU2_TR(0x40ba19);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40ba1c:{NFSU2_TR(0x40ba1c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40ba20:{NFSU2_TR(0x40ba20);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40ba24:{NFSU2_TR(0x40ba24);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40ba27:{NFSU2_TR(0x40ba27);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ba2b:{NFSU2_TR(0x40ba2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40ba2e:{NFSU2_TR(0x40ba2e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40ba32:{NFSU2_TR(0x40ba32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ba36:{NFSU2_TR(0x40ba36);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40ba3c:{NFSU2_TR(0x40ba3c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40ba3e:{NFSU2_TR(0x40ba3e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40ba42:{NFSU2_TR(0x40ba42);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40ba48:{NFSU2_TR(0x40ba48);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40ba4c:{NFSU2_TR(0x40ba4c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40ba50:{NFSU2_TR(0x40ba50);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40ba52:{NFSU2_TR(0x40ba52);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40ba54:{NFSU2_TR(0x40ba54);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40ba57:{NFSU2_TR(0x40ba57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40ba5f;}}
}
B40ba59:L40ba59:{c.instructions+=2;NFSU2_TR(0x40ba59);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40ba5b:{NFSU2_TR(0x40ba5b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ba5f:L40ba5f:{c.instructions+=17;NFSU2_TR(0x40ba5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40ba63:{NFSU2_TR(0x40ba63);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40ba66:{NFSU2_TR(0x40ba66);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ba6a:{NFSU2_TR(0x40ba6a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40ba6e:{NFSU2_TR(0x40ba6e);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40ba74:{NFSU2_TR(0x40ba74);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40ba78:{NFSU2_TR(0x40ba78);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40ba7a:{NFSU2_TR(0x40ba7a);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40ba7c:{NFSU2_TR(0x40ba7c);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40ba82:{NFSU2_TR(0x40ba82);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40ba86:{NFSU2_TR(0x40ba86);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40ba88:{NFSU2_TR(0x40ba88);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ba8c:{NFSU2_TR(0x40ba8c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40ba90:{NFSU2_TR(0x40ba90);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40ba92:{NFSU2_TR(0x40ba92);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40ba94:{NFSU2_TR(0x40ba94);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40ba97:{NFSU2_TR(0x40ba97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40ba9f;}}
}
B40ba99:L40ba99:{c.instructions+=2;NFSU2_TR(0x40ba99);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40ba9b:{NFSU2_TR(0x40ba9b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ba9f:L40ba9f:{c.instructions+=11;NFSU2_TR(0x40ba9f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40baa3:{NFSU2_TR(0x40baa3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40baa5:{NFSU2_TR(0x40baa5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40baa9:{NFSU2_TR(0x40baa9);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40baaf:{NFSU2_TR(0x40baaf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40bab3:{NFSU2_TR(0x40bab3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bab5:{NFSU2_TR(0x40bab5);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bab8:{NFSU2_TR(0x40bab8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40babc:{NFSU2_TR(0x40babc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40babe:{NFSU2_TR(0x40babe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bac1:{NFSU2_TR(0x40bac1);
if(r1(R+518)){{goto L40bac9;}}
}
B40bac3:L40bac3:{c.instructions+=2;NFSU2_TR(0x40bac3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bac5:{NFSU2_TR(0x40bac5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bac9:L40bac9:{c.instructions+=5;NFSU2_TR(0x40bac9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bacd:{NFSU2_TR(0x40bacd);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40bacf:{NFSU2_TR(0x40bacf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bad1:{NFSU2_TR(0x40bad1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40bad4:{NFSU2_TR(0x40bad4);
if(r1(R+514)){{goto L40badc;}}
}
B40bad6:L40bad6:{c.instructions+=2;NFSU2_TR(0x40bad6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bad8:{NFSU2_TR(0x40bad8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40badc:L40badc:{c.instructions+=18;NFSU2_TR(0x40badc);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40badf:{NFSU2_TR(0x40badf);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40bae3:{NFSU2_TR(0x40bae3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40bae7:{NFSU2_TR(0x40bae7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40baea:{NFSU2_TR(0x40baea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40baee:{NFSU2_TR(0x40baee);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40baf1:{NFSU2_TR(0x40baf1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40baf5:{NFSU2_TR(0x40baf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40baf9:{NFSU2_TR(0x40baf9);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40baff:{NFSU2_TR(0x40baff);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40bb01:{NFSU2_TR(0x40bb01);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40bb05:{NFSU2_TR(0x40bb05);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40bb0b:{NFSU2_TR(0x40bb0b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40bb0f:{NFSU2_TR(0x40bb0f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40bb13:{NFSU2_TR(0x40bb13);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40bb15:{NFSU2_TR(0x40bb15);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bb17:{NFSU2_TR(0x40bb17);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bb1a:{NFSU2_TR(0x40bb1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40bb22;}}
}
B40bb1c:L40bb1c:{c.instructions+=2;NFSU2_TR(0x40bb1c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bb1e:{NFSU2_TR(0x40bb1e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bb22:L40bb22:{c.instructions+=17;NFSU2_TR(0x40bb22);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B40bb26:{NFSU2_TR(0x40bb26);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40bb29:{NFSU2_TR(0x40bb29);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40bb2d:{NFSU2_TR(0x40bb2d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40bb31:{NFSU2_TR(0x40bb31);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40bb37:{NFSU2_TR(0x40bb37);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40bb3b:{NFSU2_TR(0x40bb3b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40bb3d:{NFSU2_TR(0x40bb3d);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40bb3f:{NFSU2_TR(0x40bb3f);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40bb45:{NFSU2_TR(0x40bb45);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40bb49:{NFSU2_TR(0x40bb49);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bb4b:{NFSU2_TR(0x40bb4b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bb4f:{NFSU2_TR(0x40bb4f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40bb53:{NFSU2_TR(0x40bb53);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40bb55:{NFSU2_TR(0x40bb55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bb57:{NFSU2_TR(0x40bb57);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bb5a:{NFSU2_TR(0x40bb5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40bb62;}}
}
B40bb5c:L40bb5c:{c.instructions+=2;NFSU2_TR(0x40bb5c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bb5e:{NFSU2_TR(0x40bb5e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bb62:L40bb62:{c.instructions+=11;NFSU2_TR(0x40bb62);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bb66:{NFSU2_TR(0x40bb66);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40bb68:{NFSU2_TR(0x40bb68);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40bb6c:{NFSU2_TR(0x40bb6c);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40bb72:{NFSU2_TR(0x40bb72);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40bb76:{NFSU2_TR(0x40bb76);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bb78:{NFSU2_TR(0x40bb78);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bb7b:{NFSU2_TR(0x40bb7b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40bb7f:{NFSU2_TR(0x40bb7f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bb81:{NFSU2_TR(0x40bb81);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bb84:{NFSU2_TR(0x40bb84);
if(r1(R+518)){{goto L40bb8c;}}
}
B40bb86:L40bb86:{c.instructions+=2;NFSU2_TR(0x40bb86);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bb88:{NFSU2_TR(0x40bb88);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bb8c:L40bb8c:{c.instructions+=5;NFSU2_TR(0x40bb8c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bb90:{NFSU2_TR(0x40bb90);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40bb92:{NFSU2_TR(0x40bb92);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bb94:{NFSU2_TR(0x40bb94);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40bb97:{NFSU2_TR(0x40bb97);
if(r1(R+514)){{goto L40bb9f;}}
}
B40bb99:L40bb99:{c.instructions+=2;NFSU2_TR(0x40bb99);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bb9b:{NFSU2_TR(0x40bb9b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bb9f:L40bb9f:{c.instructions+=18;NFSU2_TR(0x40bb9f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40bba2:{NFSU2_TR(0x40bba2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40bba6:{NFSU2_TR(0x40bba6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40bbaa:{NFSU2_TR(0x40bbaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40bbad:{NFSU2_TR(0x40bbad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40bbb1:{NFSU2_TR(0x40bbb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40bbb4:{NFSU2_TR(0x40bbb4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40bbb8:{NFSU2_TR(0x40bbb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40bbbc:{NFSU2_TR(0x40bbbc);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40bbc2:{NFSU2_TR(0x40bbc2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40bbc4:{NFSU2_TR(0x40bbc4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40bbc8:{NFSU2_TR(0x40bbc8);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40bbce:{NFSU2_TR(0x40bbce);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40bbd2:{NFSU2_TR(0x40bbd2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40bbd6:{NFSU2_TR(0x40bbd6);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40bbd8:{NFSU2_TR(0x40bbd8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bbda:{NFSU2_TR(0x40bbda);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bbdd:{NFSU2_TR(0x40bbdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40bbe5;}}
}
B40bbdf:L40bbdf:{c.instructions+=2;NFSU2_TR(0x40bbdf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bbe1:{NFSU2_TR(0x40bbe1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bbe5:L40bbe5:{c.instructions+=17;NFSU2_TR(0x40bbe5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40bbe9:{NFSU2_TR(0x40bbe9);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40bbec:{NFSU2_TR(0x40bbec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40bbf0:{NFSU2_TR(0x40bbf0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40bbf4:{NFSU2_TR(0x40bbf4);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40bbfa:{NFSU2_TR(0x40bbfa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40bbfe:{NFSU2_TR(0x40bbfe);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40bc00:{NFSU2_TR(0x40bc00);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40bc02:{NFSU2_TR(0x40bc02);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40bc08:{NFSU2_TR(0x40bc08);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40bc0c:{NFSU2_TR(0x40bc0c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bc0e:{NFSU2_TR(0x40bc0e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bc12:{NFSU2_TR(0x40bc12);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40bc16:{NFSU2_TR(0x40bc16);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40bc18:{NFSU2_TR(0x40bc18);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bc1a:{NFSU2_TR(0x40bc1a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bc1d:{NFSU2_TR(0x40bc1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40bc25;}}
}
B40bc1f:L40bc1f:{c.instructions+=2;NFSU2_TR(0x40bc1f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bc21:{NFSU2_TR(0x40bc21);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bc25:L40bc25:{c.instructions+=11;NFSU2_TR(0x40bc25);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bc29:{NFSU2_TR(0x40bc29);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40bc2b:{NFSU2_TR(0x40bc2b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40bc2f:{NFSU2_TR(0x40bc2f);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40bc35:{NFSU2_TR(0x40bc35);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40bc39:{NFSU2_TR(0x40bc39);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bc3b:{NFSU2_TR(0x40bc3b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bc3e:{NFSU2_TR(0x40bc3e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40bc42:{NFSU2_TR(0x40bc42);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bc44:{NFSU2_TR(0x40bc44);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bc47:{NFSU2_TR(0x40bc47);
if(r1(R+518)){{goto L40bc4f;}}
}
B40bc49:L40bc49:{c.instructions+=2;NFSU2_TR(0x40bc49);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bc4b:{NFSU2_TR(0x40bc4b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bc4f:L40bc4f:{c.instructions+=5;NFSU2_TR(0x40bc4f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bc53:{NFSU2_TR(0x40bc53);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40bc55:{NFSU2_TR(0x40bc55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bc57:{NFSU2_TR(0x40bc57);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40bc5a:{NFSU2_TR(0x40bc5a);
if(r1(R+514)){{goto L40bc62;}}
}
B40bc5c:L40bc5c:{c.instructions+=2;NFSU2_TR(0x40bc5c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bc5e:{NFSU2_TR(0x40bc5e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bc62:L40bc62:{c.instructions+=18;NFSU2_TR(0x40bc62);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40bc65:{NFSU2_TR(0x40bc65);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40bc69:{NFSU2_TR(0x40bc69);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40bc6d:{NFSU2_TR(0x40bc6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40bc70:{NFSU2_TR(0x40bc70);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40bc74:{NFSU2_TR(0x40bc74);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40bc77:{NFSU2_TR(0x40bc77);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40bc7b:{NFSU2_TR(0x40bc7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40bc7f:{NFSU2_TR(0x40bc7f);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40bc85:{NFSU2_TR(0x40bc85);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40bc87:{NFSU2_TR(0x40bc87);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40bc8b:{NFSU2_TR(0x40bc8b);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40bc91:{NFSU2_TR(0x40bc91);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40bc95:{NFSU2_TR(0x40bc95);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40bc99:{NFSU2_TR(0x40bc99);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40bc9b:{NFSU2_TR(0x40bc9b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bc9d:{NFSU2_TR(0x40bc9d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bca0:{NFSU2_TR(0x40bca0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40bca8;}}
}
B40bca2:L40bca2:{c.instructions+=2;NFSU2_TR(0x40bca2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bca4:{NFSU2_TR(0x40bca4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bca8:L40bca8:{c.instructions+=17;NFSU2_TR(0x40bca8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B40bcac:{NFSU2_TR(0x40bcac);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B40bcaf:{NFSU2_TR(0x40bcaf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40bcb3:{NFSU2_TR(0x40bcb3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40bcb7:{NFSU2_TR(0x40bcb7);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40bcbd:{NFSU2_TR(0x40bcbd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40bcc1:{NFSU2_TR(0x40bcc1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40bcc3:{NFSU2_TR(0x40bcc3);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40bcc5:{NFSU2_TR(0x40bcc5);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40bccb:{NFSU2_TR(0x40bccb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40bccf:{NFSU2_TR(0x40bccf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bcd1:{NFSU2_TR(0x40bcd1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bcd5:{NFSU2_TR(0x40bcd5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40bcd9:{NFSU2_TR(0x40bcd9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40bcdb:{NFSU2_TR(0x40bcdb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bcdd:{NFSU2_TR(0x40bcdd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bce0:{NFSU2_TR(0x40bce0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40bce8;}}
}
B40bce2:L40bce2:{c.instructions+=2;NFSU2_TR(0x40bce2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bce4:{NFSU2_TR(0x40bce4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bce8:L40bce8:{c.instructions+=11;NFSU2_TR(0x40bce8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bcec:{NFSU2_TR(0x40bcec);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40bcee:{NFSU2_TR(0x40bcee);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40bcf2:{NFSU2_TR(0x40bcf2);
{u32 ea_=u32(u32(7879892u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40bcf8:{NFSU2_TR(0x40bcf8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40bcfc:{NFSU2_TR(0x40bcfc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bcfe:{NFSU2_TR(0x40bcfe);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bd01:{NFSU2_TR(0x40bd01);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40bd05:{NFSU2_TR(0x40bd05);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bd07:{NFSU2_TR(0x40bd07);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bd0a:{NFSU2_TR(0x40bd0a);
if(r1(R+518)){{goto L40bd12;}}
}
B40bd0c:L40bd0c:{c.instructions+=2;NFSU2_TR(0x40bd0c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bd0e:{NFSU2_TR(0x40bd0e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bd12:L40bd12:{c.instructions+=5;NFSU2_TR(0x40bd12);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40bd16:{NFSU2_TR(0x40bd16);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40bd18:{NFSU2_TR(0x40bd18);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bd1a:{NFSU2_TR(0x40bd1a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40bd1d:{NFSU2_TR(0x40bd1d);
if(r1(R+514)){{goto L40bd2f;}}
}
B40bd1f:L40bd1f:{c.instructions+=6;NFSU2_TR(0x40bd1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40bd23:{NFSU2_TR(0x40bd23);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40bd25:{NFSU2_TR(0x40bd25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40bd28:{NFSU2_TR(0x40bd28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40bd29:{NFSU2_TR(0x40bd29);
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
B40bd2c:{NFSU2_TR(0x40bd2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40bd2f:L40bd2f:{c.instructions+=4;NFSU2_TR(0x40bd2f);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40bd32:{NFSU2_TR(0x40bd32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40bd33:{NFSU2_TR(0x40bd33);
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
B40bd36:{NFSU2_TR(0x40bd36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40bd40:L40bd40:{c.instructions+=8;NFSU2_TR(0x40bd40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd41:{NFSU2_TR(0x40bd41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40bd45:{NFSU2_TR(0x40bd45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd46:{NFSU2_TR(0x40bd46);
u8 U[4];
w4(U+0,u32(0x784750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd4b:{NFSU2_TR(0x40bd4b);
__builtin_memmove((R+28),(R+4),4);
}
B40bd4d:{NFSU2_TR(0x40bd4d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd4f:{NFSU2_TR(0x40bd4f);
__builtin_memmove((R+4),(R+24),4);
}
B40bd51:{NFSU2_TR(0x40bd51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bd56ull));
TAIL_STATIC(0x578ce0u,578);
}
B40bd56:L40bd56:{c.instructions+=3;NFSU2_TR(0x40bd56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd57:{NFSU2_TR(0x40bd57);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40bd5a:{NFSU2_TR(0x40bd5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bd5full));
TAIL_STATIC(0x631a70u,631);
}
B40bd5f:L40bd5f:{c.instructions+=4;NFSU2_TR(0x40bd5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40bd65:{NFSU2_TR(0x40bd65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd66:{NFSU2_TR(0x40bd66);
__builtin_memmove((R+4),(R+24),4);
}
B40bd68:{NFSU2_TR(0x40bd68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bd6dull));
TAIL_STATIC(0x571770u,571);
}
B40bd6d:L40bd6d:{c.instructions+=4;NFSU2_TR(0x40bd6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x904ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40bd73:{NFSU2_TR(0x40bd73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd74:{NFSU2_TR(0x40bd74);
__builtin_memmove((R+4),(R+24),4);
}
B40bd76:{NFSU2_TR(0x40bd76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bd7bull));
TAIL_STATIC(0x571770u,571);
}
B40bd7b:L40bd7b:{c.instructions+=7;NFSU2_TR(0x40bd7b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd7d:{NFSU2_TR(0x40bd7d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd7f:{NFSU2_TR(0x40bd7f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd81:{NFSU2_TR(0x40bd81);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x908ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40bd87:{NFSU2_TR(0x40bd87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd88:{NFSU2_TR(0x40bd88);
__builtin_memmove((R+4),(R+24),4);
}
B40bd8a:{NFSU2_TR(0x40bd8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bd8full));
TAIL_STATIC(0x571640u,571);
}
B40bd8f:L40bd8f:{c.instructions+=7;NFSU2_TR(0x40bd8f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd91:{NFSU2_TR(0x40bd91);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd93:{NFSU2_TR(0x40bd93);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd95:{NFSU2_TR(0x40bd95);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90cull))));
__builtin_memmove((R+0),(U+0),4);
}
B40bd9b:{NFSU2_TR(0x40bd9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bd9c:{NFSU2_TR(0x40bd9c);
__builtin_memmove((R+4),(R+24),4);
}
B40bd9e:{NFSU2_TR(0x40bd9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bda3ull));
TAIL_STATIC(0x571640u,571);
}
B40bda3:L40bda3:{c.instructions+=7;NFSU2_TR(0x40bda3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bda5:{NFSU2_TR(0x40bda5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bda7:{NFSU2_TR(0x40bda7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bda9:{NFSU2_TR(0x40bda9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x910ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40bdaf:{NFSU2_TR(0x40bdaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bdb0:{NFSU2_TR(0x40bdb0);
__builtin_memmove((R+4),(R+24),4);
}
B40bdb2:{NFSU2_TR(0x40bdb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bdb7ull));
TAIL_STATIC(0x571640u,571);
}
B40bdb7:L40bdb7:{c.instructions+=7;NFSU2_TR(0x40bdb7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bdb9:{NFSU2_TR(0x40bdb9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bdbb:{NFSU2_TR(0x40bdbb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bdbd:{NFSU2_TR(0x40bdbd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x914ull))));
}
B40bdc3:{NFSU2_TR(0x40bdc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bdc4:{NFSU2_TR(0x40bdc4);
__builtin_memmove((R+4),(R+24),4);
}
B40bdc6:{NFSU2_TR(0x40bdc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bdcbull));
TAIL_STATIC(0x571640u,571);
}
B40bdcb:L40bdcb:{c.instructions+=2;NFSU2_TR(0x40bdcb);
__builtin_memmove((R+4),(R+24),4);
}
B40bdcd:{NFSU2_TR(0x40bdcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bdd2ull));
TAIL_STATIC(0x578d90u,578);
}
B40bdd2:L40bdd2:{c.instructions+=3;NFSU2_TR(0x40bdd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40bdd3:{NFSU2_TR(0x40bdd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40bdd4:{NFSU2_TR(0x40bdd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40bde0:L40bde0:{c.instructions+=2;NFSU2_TR(0x40bde0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40bde3:{NFSU2_TR(0x40bde3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40bdf0:L40bdf0:{c.instructions+=14;NFSU2_TR(0x40bdf0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bdf2:{NFSU2_TR(0x40bdf2);
u8 U[4];
w4(U+0,u32(0x771569ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bdf7:{NFSU2_TR(0x40bdf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40bdfd:{NFSU2_TR(0x40bdfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bdfe:{NFSU2_TR(0x40bdfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40be05:{NFSU2_TR(0x40be05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40be06:{NFSU2_TR(0x40be06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40be07:{NFSU2_TR(0x40be07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40be08:{NFSU2_TR(0x40be08);
__builtin_memmove((R+12),(R+4),4);
}
B40be0a:{NFSU2_TR(0x40be0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40be0b:{NFSU2_TR(0x40be0b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40be0f:{NFSU2_TR(0x40be0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40be17:{NFSU2_TR(0x40be17);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x900ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40be1d:{NFSU2_TR(0x40be1d);
w4(R+28,u32(0x3ull));
}
B40be22:L40be22:{c.instructions+=3;NFSU2_TR(0x40be22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40be24:{NFSU2_TR(0x40be24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40be26:{NFSU2_TR(0x40be26);
if(r1(R+518)){{goto L40be3d;}}
}
B40be28:L40be28:{c.instructions+=2;NFSU2_TR(0x40be28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40be2d:{NFSU2_TR(0x40be2d);
if(r1(R+518)){{goto L40be3d;}}
}
B40be2f:L40be2f:{c.instructions+=4;NFSU2_TR(0x40be2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40be32:{NFSU2_TR(0x40be32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40be33:{NFSU2_TR(0x40be33);
w4(R+4,u32(0x8a3288ull));
}
B40be38:{NFSU2_TR(0x40be38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40be3dull));
TAIL_STATIC(0x63ae00u,63a);
}
B40be3d:L40be3d:{c.instructions+=3;NFSU2_TR(0x40be3d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x900ull))));
}
B40be43:{NFSU2_TR(0x40be43);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B40be44:{NFSU2_TR(0x40be44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40be22u);}goto L40be22;}}
}
B40be46:L40be46:{c.instructions+=7;NFSU2_TR(0x40be46);
u8 U[4];
w4(U+0,u32(0x401800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40be4b:{NFSU2_TR(0x40be4b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40be4d:{NFSU2_TR(0x40be4d);
u8 U[4];
w4(U+0,u32(0x900ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40be52:{NFSU2_TR(0x40be52);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B40be55:{NFSU2_TR(0x40be55);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40be56:{NFSU2_TR(0x40be56);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B40be5e:{NFSU2_TR(0x40be5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40be63ull));
TAIL_STATIC(0x75c401u,75c);
}
B40be63:L40be63:{c.instructions+=7;NFSU2_TR(0x40be63);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40be67:{NFSU2_TR(0x40be67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40be68:{NFSU2_TR(0x40be68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40be69:{NFSU2_TR(0x40be69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40be6a:{NFSU2_TR(0x40be6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40be71:{NFSU2_TR(0x40be71);
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
B40be74:{NFSU2_TR(0x40be74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40be80:L40be80:{c.instructions+=2;NFSU2_TR(0x40be80);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7c0),4);
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
B40be87:{NFSU2_TR(0x40be87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40be99;}}
}
B40be89:L40be89:{c.instructions+=3;NFSU2_TR(0x40be89);
__builtin_memmove((R+0),gp(0x89e7c4),4);
}
B40be8e:{NFSU2_TR(0x40be8e);
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
B40be90:{NFSU2_TR(0x40be90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40be99;}}
}
B40be92:L40be92:{c.instructions+=1;NFSU2_TR(0x40be92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40be99:L40be99:{c.instructions+=2;NFSU2_TR(0x40be99);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B40be9f:{NFSU2_TR(0x40be9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40bea0:L40bea0:{c.instructions+=8;NFSU2_TR(0x40bea0);
__builtin_memmove((R+0),gp(0x890080),4);
}
B40bea5:{NFSU2_TR(0x40bea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40bea8:{NFSU2_TR(0x40bea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40beab:{NFSU2_TR(0x40beab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40beac:{NFSU2_TR(0x40beac);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B40beae:{NFSU2_TR(0x40beae);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B40beb0:{NFSU2_TR(0x40beb0);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40beb2:{NFSU2_TR(0x40beb2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40bed1;}}
}
B40beb4:L40beb4:{c.instructions+=3;NFSU2_TR(0x40beb4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B40beb6:{NFSU2_TR(0x40beb6);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B40beba:{NFSU2_TR(0x40beba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bebfull));
TAIL_STATIC(0x5ed430u,5ed);
}
B40bebf:L40bebf:{c.instructions+=7;NFSU2_TR(0x40bebf);
__builtin_memmove((R+0),gp(0x890080),4);
}
B40bec4:{NFSU2_TR(0x40bec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40bec7:{NFSU2_TR(0x40bec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40beca:{NFSU2_TR(0x40beca);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B40becb:{NFSU2_TR(0x40becb);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B40becd:{NFSU2_TR(0x40becd);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B40becf:{NFSU2_TR(0x40becf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40beb4u);}goto L40beb4;}}
}
B40bed1:L40bed1:{c.instructions+=2;NFSU2_TR(0x40bed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40bed2:{NFSU2_TR(0x40bed2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40bee0:L40bee0:{c.instructions+=7;NFSU2_TR(0x40bee0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bee1:{NFSU2_TR(0x40bee1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bee2:{NFSU2_TR(0x40bee2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bee3:{NFSU2_TR(0x40bee3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bee4:{NFSU2_TR(0x40bee4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40beea:{NFSU2_TR(0x40beea);
w4(R+20,u32(0x3ull));
}
B40beef:{NFSU2_TR(0x40beef);
}
B40bef0:L40bef0:{c.instructions+=3;NFSU2_TR(0x40bef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40bef3:{NFSU2_TR(0x40bef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40bef5:{NFSU2_TR(0x40bef5);
if(r1(R+518)){{goto L40bf4b;}}
}
B40bef7:L40bef7:{c.instructions+=2;NFSU2_TR(0x40bef7);
__builtin_memmove((R+4),(R+24),4);
}
B40bef9:{NFSU2_TR(0x40bef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40befeull));
TAIL_STATIC(0x5ed430u,5ed);
}
B40befe:L40befe:{c.instructions+=2;NFSU2_TR(0x40befe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bf00:{NFSU2_TR(0x40bf00);
if(r1(R+518)){{goto L40bf4b;}}
}
B40bf02:L40bf02:{c.instructions+=9;NFSU2_TR(0x40bf02);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B40bf07:{NFSU2_TR(0x40bf07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B40bf09:{NFSU2_TR(0x40bf09);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40bf0d:{NFSU2_TR(0x40bf0d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40bf11:{NFSU2_TR(0x40bf11);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40bf17:{NFSU2_TR(0x40bf17);
{u32 ea_=u32(u32(7879988u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40bf1d:{NFSU2_TR(0x40bf1d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bf1f:{NFSU2_TR(0x40bf1f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bf22:{NFSU2_TR(0x40bf22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40bf4b;}}
}
B40bf24:L40bf24:{c.instructions+=4;NFSU2_TR(0x40bf24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40bf27:{NFSU2_TR(0x40bf27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bf28:{NFSU2_TR(0x40bf28);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40bf2e:{NFSU2_TR(0x40bf2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bf33ull));
TAIL_STATIC(0x5f0fb0u,5f0);
}
B40bf33:L40bf33:{c.instructions+=4;NFSU2_TR(0x40bf33);
{u32 ea_=u32(u32(7881372u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40bf39:{NFSU2_TR(0x40bf39);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bf3b:{NFSU2_TR(0x40bf3b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40bf3e:{NFSU2_TR(0x40bf3e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40bf4b;}}
}
B40bf40:L40bf40:{c.instructions+=3;NFSU2_TR(0x40bf40);
__builtin_memmove((R+4),(R+24),4);
}
B40bf42:{NFSU2_TR(0x40bf42);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40bf46:{NFSU2_TR(0x40bf46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bf4bull));
TAIL_STATIC(0x5f6e20u,5f6);
}
B40bf4b:L40bf4b:{c.instructions+=3;NFSU2_TR(0x40bf4b);
w1(R+512,carry<u32>(r4(R+28),u32(0x10ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B40bf4e:{NFSU2_TR(0x40bf4e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40bf4f:{NFSU2_TR(0x40bf4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40bef0u);}goto L40bef0;}}
}
B40bf51:L40bf51:{c.instructions+=5;NFSU2_TR(0x40bf51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40bf52:{NFSU2_TR(0x40bf52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40bf53:{NFSU2_TR(0x40bf53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40bf54:{NFSU2_TR(0x40bf54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40bf55:{NFSU2_TR(0x40bf55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40bf60:L40bf60:{c.instructions+=6;NFSU2_TR(0x40bf60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bf61:{NFSU2_TR(0x40bf61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bf62:{NFSU2_TR(0x40bf62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bf63:{NFSU2_TR(0x40bf63);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B40bf69:{NFSU2_TR(0x40bf69);
w4(R+12,u32(0x3ull));
}
B40bf6e:{NFSU2_TR(0x40bf6e);
__builtin_memmove((R+28),(R+28),4);
}
B40bf70:L40bf70:{c.instructions+=3;NFSU2_TR(0x40bf70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B40bf72:{NFSU2_TR(0x40bf72);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40bf74:{NFSU2_TR(0x40bf74);
if(r1(R+518)){{goto L40bf9e;}}
}
B40bf76:L40bf76:{c.instructions+=2;NFSU2_TR(0x40bf76);
__builtin_memmove((R+4),(R+24),4);
}
B40bf78:{NFSU2_TR(0x40bf78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bf7dull));
TAIL_STATIC(0x5ed430u,5ed);
}
B40bf7d:L40bf7d:{c.instructions+=2;NFSU2_TR(0x40bf7d);
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
B40bf7f:{NFSU2_TR(0x40bf7f);
if(r1(R+518)){{goto L40bf9e;}}
}
B40bf81:L40bf81:{c.instructions+=2;NFSU2_TR(0x40bf81);
__builtin_memmove((R+4),(R+24),4);
}
B40bf83:{NFSU2_TR(0x40bf83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bf88ull));
TAIL_STATIC(0x5ec060u,5ec);
}
B40bf88:L40bf88:{c.instructions+=2;NFSU2_TR(0x40bf88);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bf8a:{NFSU2_TR(0x40bf8a);
if(r1(R+518)){{goto L40bf9e;}}
}
B40bf8c:L40bf8c:{c.instructions+=2;NFSU2_TR(0x40bf8c);
__builtin_memmove((R+4),(R+24),4);
}
B40bf8e:{NFSU2_TR(0x40bf8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bf93ull));
TAIL_STATIC(0x5ebfa0u,5eb);
}
B40bf93:L40bf93:{c.instructions+=2;NFSU2_TR(0x40bf93);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bf95:{NFSU2_TR(0x40bf95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40bf9e;}}
}
B40bf97:L40bf97:{c.instructions+=2;NFSU2_TR(0x40bf97);
__builtin_memmove((R+4),(R+24),4);
}
B40bf99:{NFSU2_TR(0x40bf99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bf9eull));
TAIL_STATIC(0x5f6e20u,5f6);
}
B40bf9e:L40bf9e:{c.instructions+=3;NFSU2_TR(0x40bf9e);
w1(R+512,carry<u32>(r4(R+28),u32(0x10ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B40bfa1:{NFSU2_TR(0x40bfa1);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40bfa2:{NFSU2_TR(0x40bfa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40bf70u);}goto L40bf70;}}
}
B40bfa4:L40bfa4:{c.instructions+=4;NFSU2_TR(0x40bfa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40bfa5:{NFSU2_TR(0x40bfa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40bfa6:{NFSU2_TR(0x40bfa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40bfa7:{NFSU2_TR(0x40bfa7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40bfb0:L40bfb0:{c.instructions+=10;NFSU2_TR(0x40bfb0);
__builtin_memmove((R+0),gp(0x890080),4);
}
B40bfb5:{NFSU2_TR(0x40bfb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40bfb8:{NFSU2_TR(0x40bfb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40bfbb:{NFSU2_TR(0x40bfbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bfbc:{NFSU2_TR(0x40bfbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bfbd:{NFSU2_TR(0x40bfbd);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B40bfbf:{NFSU2_TR(0x40bfbf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B40bfc1:{NFSU2_TR(0x40bfc1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B40bfc3:{NFSU2_TR(0x40bfc3);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40bfc5:{NFSU2_TR(0x40bfc5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x40c01du,40c);}
}
B40bfc7:L40bfc7:{c.instructions+=5;NFSU2_TR(0x40bfc7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bfc8:{NFSU2_TR(0x40bfc8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B40bfca:{NFSU2_TR(0x40bfca);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B40bfce:{NFSU2_TR(0x40bfce);
__builtin_memmove((R+4),(R+24),4);
}
B40bfd0:{NFSU2_TR(0x40bfd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bfd5ull));
TAIL_STATIC(0x5ed430u,5ed);
}
B40bfd5:L40bfd5:{c.instructions+=2;NFSU2_TR(0x40bfd5);
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
B40bfd7:{NFSU2_TR(0x40bfd7);
if(r1(R+518)){TAIL_STATIC(0x40c00au,40c);}
}
B40bfd9:L40bfd9:{c.instructions+=2;NFSU2_TR(0x40bfd9);
__builtin_memmove((R+4),(R+24),4);
}
B40bfdb:{NFSU2_TR(0x40bfdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bfe0ull));
TAIL_STATIC(0x5ec060u,5ec);
}
B40bfe0:L40bfe0:{c.instructions+=2;NFSU2_TR(0x40bfe0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40bfe2:{NFSU2_TR(0x40bfe2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x40c009u,40c);}
}
B40bfe4:L40bfe4:{c.instructions+=4;NFSU2_TR(0x40bfe4);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40bfea:{NFSU2_TR(0x40bfea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40bfed:{NFSU2_TR(0x40bfed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40bfee:{NFSU2_TR(0x40bfee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40bff3ull));
TAIL_STATIC(0x5f0fb0u,5f0);
}
B40bff3:L40bff3:{c.instructions+=4;NFSU2_TR(0x40bff3);
{u32 ea_=u32(u32(7881372u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40bff9:{NFSU2_TR(0x40bff9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40bffb:{NFSU2_TR(0x40bffb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40bffe:{NFSU2_TR(0x40bffe);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x40c009u,40c);}
TAIL_STATIC(0x40c000u,40c);
}
XIT:NFSU2_TR_EXIT(0x40b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
