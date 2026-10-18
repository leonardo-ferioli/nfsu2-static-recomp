#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_638(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_641(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x63b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x63b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_63b(u8* __restrict R,Cpu& c);
u32 page_63b(Cpu& c){return body_63b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_63b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x63b000:goto L63b000;
case 0x63b003:c.instructions+=4;goto B63b003;
case 0x63b004:c.instructions+=3;goto B63b004;
case 0x63b006:c.instructions+=2;goto B63b006;
case 0x63b00c:c.instructions+=1;goto B63b00c;
case 0x63b011:goto L63b011;
case 0x63b017:c.instructions+=10;goto B63b017;
case 0x63b019:c.instructions+=9;goto B63b019;
case 0x63b01a:c.instructions+=8;goto B63b01a;
case 0x63b020:c.instructions+=7;goto B63b020;
case 0x63b021:c.instructions+=6;goto B63b021;
case 0x63b027:c.instructions+=5;goto B63b027;
case 0x63b028:c.instructions+=4;goto B63b028;
case 0x63b02e:c.instructions+=3;goto B63b02e;
case 0x63b02f:c.instructions+=2;goto B63b02f;
case 0x63b031:c.instructions+=1;goto B63b031;
case 0x63b036:goto L63b036;
case 0x63b039:c.instructions+=4;goto B63b039;
case 0x63b03b:c.instructions+=3;goto B63b03b;
case 0x63b03c:c.instructions+=2;goto B63b03c;
case 0x63b03d:c.instructions+=1;goto B63b03d;
case 0x63b03f:goto L63b03f;
case 0x63b042:goto L63b042;
case 0x63b045:c.instructions+=9;goto B63b045;
case 0x63b04c:c.instructions+=8;goto B63b04c;
case 0x63b04d:c.instructions+=7;goto B63b04d;
case 0x63b050:c.instructions+=6;goto B63b050;
case 0x63b052:c.instructions+=5;goto B63b052;
case 0x63b053:c.instructions+=4;goto B63b053;
case 0x63b054:c.instructions+=3;goto B63b054;
case 0x63b05b:c.instructions+=2;goto B63b05b;
case 0x63b061:c.instructions+=1;goto B63b061;
case 0x63b070:goto L63b070;
case 0x63b071:c.instructions+=7;goto B63b071;
case 0x63b073:c.instructions+=6;goto B63b073;
case 0x63b076:c.instructions+=5;goto B63b076;
case 0x63b077:c.instructions+=4;goto B63b077;
case 0x63b07a:c.instructions+=3;goto B63b07a;
case 0x63b07c:c.instructions+=2;goto B63b07c;
case 0x63b07e:c.instructions+=1;goto B63b07e;
case 0x63b080:goto L63b080;
case 0x63b083:c.instructions+=2;goto B63b083;
case 0x63b085:c.instructions+=1;goto B63b085;
case 0x63b087:goto L63b087;
case 0x63b088:c.instructions+=3;goto B63b088;
case 0x63b08a:c.instructions+=2;goto B63b08a;
case 0x63b08d:c.instructions+=1;goto B63b08d;
case 0x63b08f:goto L63b08f;
case 0x63b092:goto L63b092;
case 0x63b095:c.instructions+=2;goto B63b095;
case 0x63b097:c.instructions+=1;goto B63b097;
case 0x63b099:goto L63b099;
case 0x63b09b:goto L63b09b;
case 0x63b09d:c.instructions+=2;goto B63b09d;
case 0x63b09f:c.instructions+=1;goto B63b09f;
case 0x63b0a1:goto L63b0a1;
case 0x63b0a3:c.instructions+=1;goto B63b0a3;
case 0x63b0a5:goto L63b0a5;
case 0x63b0a7:c.instructions+=8;goto B63b0a7;
case 0x63b0aa:c.instructions+=7;goto B63b0aa;
case 0x63b0ac:c.instructions+=6;goto B63b0ac;
case 0x63b0af:c.instructions+=5;goto B63b0af;
case 0x63b0b2:c.instructions+=4;goto B63b0b2;
case 0x63b0b4:c.instructions+=3;goto B63b0b4;
case 0x63b0b7:c.instructions+=2;goto B63b0b7;
case 0x63b0ba:c.instructions+=1;goto B63b0ba;
case 0x63b0bc:goto L63b0bc;
case 0x63b0bf:c.instructions+=2;goto B63b0bf;
case 0x63b0c1:c.instructions+=1;goto B63b0c1;
case 0x63b0c3:goto L63b0c3;
case 0x63b0c8:goto L63b0c8;
case 0x63b0cb:c.instructions+=2;goto B63b0cb;
case 0x63b0cd:c.instructions+=1;goto B63b0cd;
case 0x63b0cf:goto L63b0cf;
case 0x63b0d1:c.instructions+=2;goto B63b0d1;
case 0x63b0d3:c.instructions+=1;goto B63b0d3;
case 0x63b0d5:goto L63b0d5;
case 0x63b0d6:goto L63b0d6;
case 0x63b0d8:c.instructions+=4;goto B63b0d8;
case 0x63b0da:c.instructions+=3;goto B63b0da;
case 0x63b0db:c.instructions+=2;goto B63b0db;
case 0x63b0dd:c.instructions+=1;goto B63b0dd;
case 0x63b0e2:goto L63b0e2;
case 0x63b0e4:c.instructions+=2;goto B63b0e4;
case 0x63b0e6:c.instructions+=1;goto B63b0e6;
case 0x63b0e8:goto L63b0e8;
case 0x63b0e9:goto L63b0e9;
case 0x63b0ec:c.instructions+=2;goto B63b0ec;
case 0x63b0ee:c.instructions+=1;goto B63b0ee;
case 0x63b0f0:goto L63b0f0;
case 0x63b0f3:c.instructions+=2;goto B63b0f3;
case 0x63b0f5:c.instructions+=1;goto B63b0f5;
case 0x63b0f7:goto L63b0f7;
case 0x63b0f8:c.instructions+=1;goto B63b0f8;
case 0x63b0fd:goto L63b0fd;
case 0x63b100:c.instructions+=5;goto B63b100;
case 0x63b107:c.instructions+=4;goto B63b107;
case 0x63b10a:c.instructions+=3;goto B63b10a;
case 0x63b10c:c.instructions+=2;goto B63b10c;
case 0x63b113:c.instructions+=1;goto B63b113;
case 0x63b118:goto L63b118;
case 0x63b11b:goto L63b11b;
case 0x63b11c:c.instructions+=2;goto B63b11c;
case 0x63b11d:c.instructions+=1;goto B63b11d;
case 0x63b130:goto L63b130;
case 0x63b131:c.instructions+=8;goto B63b131;
case 0x63b133:c.instructions+=7;goto B63b133;
case 0x63b136:c.instructions+=6;goto B63b136;
case 0x63b139:c.instructions+=5;goto B63b139;
case 0x63b13a:c.instructions+=4;goto B63b13a;
case 0x63b13e:c.instructions+=3;goto B63b13e;
case 0x63b140:c.instructions+=2;goto B63b140;
case 0x63b142:c.instructions+=1;goto B63b142;
case 0x63b144:goto L63b144;
case 0x63b146:c.instructions+=2;goto B63b146;
case 0x63b148:c.instructions+=1;goto B63b148;
case 0x63b14d:goto L63b14d;
case 0x63b14f:c.instructions+=1;goto B63b14f;
case 0x63b151:goto L63b151;
case 0x63b154:c.instructions+=3;goto B63b154;
case 0x63b157:c.instructions+=2;goto B63b157;
case 0x63b159:c.instructions+=1;goto B63b159;
case 0x63b15b:goto L63b15b;
case 0x63b15c:c.instructions+=2;goto B63b15c;
case 0x63b15d:c.instructions+=1;goto B63b15d;
case 0x63b160:goto L63b160;
case 0x63b166:c.instructions+=6;goto B63b166;
case 0x63b167:c.instructions+=5;goto B63b167;
case 0x63b169:c.instructions+=4;goto B63b169;
case 0x63b16c:c.instructions+=3;goto B63b16c;
case 0x63b16e:c.instructions+=2;goto B63b16e;
case 0x63b172:c.instructions+=1;goto B63b172;
case 0x63b174:goto L63b174;
case 0x63b176:c.instructions+=1;goto B63b176;
case 0x63b17b:goto L63b17b;
case 0x63b17d:c.instructions+=1;goto B63b17d;
case 0x63b182:goto L63b182;
case 0x63b184:c.instructions+=1;goto B63b184;
case 0x63b18a:goto L63b18a;
case 0x63b18c:c.instructions+=1;goto B63b18c;
case 0x63b191:goto L63b191;
case 0x63b193:c.instructions+=1;goto B63b193;
case 0x63b199:goto L63b199;
case 0x63b19a:c.instructions+=7;goto B63b19a;
case 0x63b19b:c.instructions+=6;goto B63b19b;
case 0x63b19c:c.instructions+=5;goto B63b19c;
case 0x63b1a1:c.instructions+=4;goto B63b1a1;
case 0x63b1a2:c.instructions+=3;goto B63b1a2;
case 0x63b1a7:c.instructions+=2;goto B63b1a7;
case 0x63b1a9:c.instructions+=1;goto B63b1a9;
case 0x63b1ae:goto L63b1ae;
case 0x63b1b0:c.instructions+=1;goto B63b1b0;
case 0x63b1b6:goto L63b1b6;
case 0x63b1b9:c.instructions+=3;goto B63b1b9;
case 0x63b1bc:c.instructions+=2;goto B63b1bc;
case 0x63b1be:c.instructions+=1;goto B63b1be;
case 0x63b1c4:goto L63b1c4;
case 0x63b1c7:c.instructions+=2;goto B63b1c7;
case 0x63b1c9:c.instructions+=1;goto B63b1c9;
case 0x63b1cf:goto L63b1cf;
case 0x63b1d2:c.instructions+=3;goto B63b1d2;
case 0x63b1d7:c.instructions+=2;goto B63b1d7;
case 0x63b1d9:c.instructions+=1;goto B63b1d9;
case 0x63b1df:goto L63b1df;
case 0x63b1e2:c.instructions+=3;goto B63b1e2;
case 0x63b1e4:c.instructions+=2;goto B63b1e4;
case 0x63b1e7:c.instructions+=1;goto B63b1e7;
case 0x63b1e9:goto L63b1e9;
case 0x63b1ec:goto L63b1ec;
case 0x63b1f2:c.instructions+=3;goto B63b1f2;
case 0x63b1f5:c.instructions+=2;goto B63b1f5;
case 0x63b1f9:c.instructions+=1;goto B63b1f9;
case 0x63b1ff:goto L63b1ff;
case 0x63b202:c.instructions+=2;goto B63b202;
case 0x63b204:c.instructions+=1;goto B63b204;
case 0x63b206:goto L63b206;
case 0x63b207:c.instructions+=2;goto B63b207;
case 0x63b209:c.instructions+=1;goto B63b209;
case 0x63b20e:goto L63b20e;
case 0x63b210:c.instructions+=1;goto B63b210;
case 0x63b216:goto L63b216;
case 0x63b21c:c.instructions+=3;goto B63b21c;
case 0x63b222:c.instructions+=2;goto B63b222;
case 0x63b224:c.instructions+=1;goto B63b224;
case 0x63b226:goto L63b226;
case 0x63b22c:c.instructions+=3;goto B63b22c;
case 0x63b22f:c.instructions+=2;goto B63b22f;
case 0x63b231:c.instructions+=1;goto B63b231;
case 0x63b233:goto L63b233;
case 0x63b234:c.instructions+=3;goto B63b234;
case 0x63b235:c.instructions+=2;goto B63b235;
case 0x63b237:c.instructions+=1;goto B63b237;
case 0x63b23c:goto L63b23c;
case 0x63b23e:c.instructions+=1;goto B63b23e;
case 0x63b244:goto L63b244;
case 0x63b245:c.instructions+=3;goto B63b245;
case 0x63b246:c.instructions+=2;goto B63b246;
case 0x63b248:c.instructions+=1;goto B63b248;
case 0x63b24d:goto L63b24d;
case 0x63b24f:c.instructions+=1;goto B63b24f;
case 0x63b255:goto L63b255;
case 0x63b25b:c.instructions+=2;goto B63b25b;
case 0x63b25d:c.instructions+=1;goto B63b25d;
case 0x63b25f:goto L63b25f;
case 0x63b265:c.instructions+=2;goto B63b265;
case 0x63b267:c.instructions+=1;goto B63b267;
case 0x63b269:goto L63b269;
case 0x63b26c:c.instructions+=2;goto B63b26c;
case 0x63b26e:c.instructions+=1;goto B63b26e;
case 0x63b274:goto L63b274;
case 0x63b276:c.instructions+=3;goto B63b276;
case 0x63b277:c.instructions+=2;goto B63b277;
case 0x63b279:c.instructions+=1;goto B63b279;
case 0x63b27e:goto L63b27e;
case 0x63b280:c.instructions+=1;goto B63b280;
case 0x63b286:goto L63b286;
case 0x63b28c:c.instructions+=2;goto B63b28c;
case 0x63b28e:c.instructions+=1;goto B63b28e;
case 0x63b290:goto L63b290;
case 0x63b291:c.instructions+=2;goto B63b291;
case 0x63b293:c.instructions+=1;goto B63b293;
case 0x63b298:goto L63b298;
case 0x63b29b:c.instructions+=3;goto B63b29b;
case 0x63b29d:c.instructions+=2;goto B63b29d;
case 0x63b29f:c.instructions+=1;goto B63b29f;
case 0x63b2a5:goto L63b2a5;
case 0x63b2ac:c.instructions+=1;goto B63b2ac;
case 0x63b2b2:goto L63b2b2;
case 0x63b2b8:c.instructions+=2;goto B63b2b8;
case 0x63b2ba:c.instructions+=1;goto B63b2ba;
case 0x63b2bc:goto L63b2bc;
case 0x63b2c2:c.instructions+=2;goto B63b2c2;
case 0x63b2c4:c.instructions+=1;goto B63b2c4;
case 0x63b2c6:goto L63b2c6;
case 0x63b2cc:c.instructions+=2;goto B63b2cc;
case 0x63b2ce:c.instructions+=1;goto B63b2ce;
case 0x63b2d0:goto L63b2d0;
case 0x63b2d2:c.instructions+=2;goto B63b2d2;
case 0x63b2d4:c.instructions+=1;goto B63b2d4;
case 0x63b2d6:goto L63b2d6;
case 0x63b2da:goto L63b2da;
case 0x63b2dd:c.instructions+=2;goto B63b2dd;
case 0x63b2de:c.instructions+=1;goto B63b2de;
case 0x63b2e0:goto L63b2e0;
case 0x63b2e6:c.instructions+=8;goto B63b2e6;
case 0x63b2e7:c.instructions+=7;goto B63b2e7;
case 0x63b2ed:c.instructions+=6;goto B63b2ed;
case 0x63b2ee:c.instructions+=5;goto B63b2ee;
case 0x63b2f0:c.instructions+=4;goto B63b2f0;
case 0x63b2f4:c.instructions+=3;goto B63b2f4;
case 0x63b2f5:c.instructions+=2;goto B63b2f5;
case 0x63b2f7:c.instructions+=1;goto B63b2f7;
case 0x63b2fc:goto L63b2fc;
case 0x63b2fe:c.instructions+=2;goto B63b2fe;
case 0x63b304:c.instructions+=1;goto B63b304;
case 0x63b306:goto L63b306;
case 0x63b307:c.instructions+=3;goto B63b307;
case 0x63b30b:c.instructions+=2;goto B63b30b;
case 0x63b30c:c.instructions+=1;goto B63b30c;
case 0x63b311:goto L63b311;
case 0x63b314:goto L63b314;
case 0x63b31a:c.instructions+=2;goto B63b31a;
case 0x63b31c:c.instructions+=1;goto B63b31c;
case 0x63b31e:goto L63b31e;
case 0x63b322:c.instructions+=4;goto B63b322;
case 0x63b328:c.instructions+=3;goto B63b328;
case 0x63b329:c.instructions+=2;goto B63b329;
case 0x63b32b:c.instructions+=1;goto B63b32b;
case 0x63b330:goto L63b330;
case 0x63b336:goto L63b336;
case 0x63b33c:c.instructions+=7;goto B63b33c;
case 0x63b342:c.instructions+=6;goto B63b342;
case 0x63b347:c.instructions+=5;goto B63b347;
case 0x63b34a:c.instructions+=4;goto B63b34a;
case 0x63b34f:c.instructions+=3;goto B63b34f;
case 0x63b351:c.instructions+=2;goto B63b351;
case 0x63b354:c.instructions+=1;goto B63b354;
case 0x63b35a:goto L63b35a;
case 0x63b35d:c.instructions+=2;goto B63b35d;
case 0x63b35f:c.instructions+=1;goto B63b35f;
case 0x63b360:goto L63b360;
case 0x63b366:c.instructions+=1;goto B63b366;
case 0x63b368:goto L63b368;
case 0x63b369:c.instructions+=2;goto B63b369;
case 0x63b36e:c.instructions+=1;goto B63b36e;
case 0x63b373:goto L63b373;
case 0x63b376:c.instructions+=2;goto B63b376;
case 0x63b379:c.instructions+=1;goto B63b379;
case 0x63b37b:goto L63b37b;
case 0x63b37f:c.instructions+=1;goto B63b37f;
case 0x63b381:goto L63b381;
case 0x63b383:c.instructions+=1;goto B63b383;
case 0x63b385:goto L63b385;
case 0x63b387:goto L63b387;
case 0x63b389:c.instructions+=3;goto B63b389;
case 0x63b38a:c.instructions+=2;goto B63b38a;
case 0x63b38c:c.instructions+=1;goto B63b38c;
case 0x63b38e:goto L63b38e;
case 0x63b390:goto L63b390;
case 0x63b392:c.instructions+=1;goto B63b392;
case 0x63b394:goto L63b394;
case 0x63b396:c.instructions+=2;goto B63b396;
case 0x63b398:c.instructions+=1;goto B63b398;
case 0x63b39a:goto L63b39a;
case 0x63b3a0:goto L63b3a0;
case 0x63b3a6:c.instructions+=1;goto B63b3a6;
case 0x63b3a8:goto L63b3a8;
case 0x63b3aa:c.instructions+=1;goto B63b3aa;
case 0x63b3ac:goto L63b3ac;
case 0x63b3ad:c.instructions+=2;goto B63b3ad;
case 0x63b3b2:c.instructions+=1;goto B63b3b2;
case 0x63b3b7:goto L63b3b7;
case 0x63b3ba:c.instructions+=2;goto B63b3ba;
case 0x63b3bd:c.instructions+=1;goto B63b3bd;
case 0x63b3bf:goto L63b3bf;
case 0x63b3c3:c.instructions+=1;goto B63b3c3;
case 0x63b3c5:goto L63b3c5;
case 0x63b3c7:goto L63b3c7;
case 0x63b3c8:c.instructions+=2;goto B63b3c8;
case 0x63b3ca:c.instructions+=1;goto B63b3ca;
case 0x63b3cc:goto L63b3cc;
case 0x63b3d1:c.instructions+=2;goto B63b3d1;
case 0x63b3d4:c.instructions+=1;goto B63b3d4;
case 0x63b3d6:goto L63b3d6;
case 0x63b3d9:c.instructions+=1;goto B63b3d9;
case 0x63b3db:goto L63b3db;
case 0x63b3dd:c.instructions+=1;goto B63b3dd;
case 0x63b3df:goto L63b3df;
case 0x63b3e3:goto L63b3e3;
case 0x63b3e7:c.instructions+=2;goto B63b3e7;
case 0x63b3e9:c.instructions+=1;goto B63b3e9;
case 0x63b3eb:goto L63b3eb;
case 0x63b3ee:c.instructions+=4;goto B63b3ee;
case 0x63b3f4:c.instructions+=3;goto B63b3f4;
case 0x63b3f7:c.instructions+=2;goto B63b3f7;
case 0x63b3fd:c.instructions+=1;goto B63b3fd;
case 0x63b3ff:goto L63b3ff;
case 0x63b401:c.instructions+=4;goto B63b401;
case 0x63b407:c.instructions+=3;goto B63b407;
case 0x63b408:c.instructions+=2;goto B63b408;
case 0x63b40a:c.instructions+=1;goto B63b40a;
case 0x63b40f:goto L63b40f;
case 0x63b410:c.instructions+=5;goto B63b410;
case 0x63b411:c.instructions+=4;goto B63b411;
case 0x63b412:c.instructions+=3;goto B63b412;
case 0x63b413:c.instructions+=2;goto B63b413;
case 0x63b419:c.instructions+=1;goto B63b419;
case 0x63b41a:goto L63b41a;
case 0x63b41e:goto L63b41e;
case 0x63b425:c.instructions+=1;goto B63b425;
case 0x63b42a:goto L63b42a;
case 0x63b42d:c.instructions+=3;goto B63b42d;
case 0x63b430:c.instructions+=2;goto B63b430;
case 0x63b432:c.instructions+=1;goto B63b432;
case 0x63b438:goto L63b438;
case 0x63b43b:c.instructions+=1;goto B63b43b;
case 0x63b43d:goto L63b43d;
case 0x63b43f:c.instructions+=2;goto B63b43f;
case 0x63b441:c.instructions+=1;goto B63b441;
case 0x63b446:goto L63b446;
case 0x63b448:c.instructions+=2;goto B63b448;
case 0x63b44a:c.instructions+=1;goto B63b44a;
case 0x63b44c:goto L63b44c;
case 0x63b44f:c.instructions+=4;goto B63b44f;
case 0x63b450:c.instructions+=3;goto B63b450;
case 0x63b451:c.instructions+=2;goto B63b451;
case 0x63b457:c.instructions+=1;goto B63b457;
case 0x63b45c:goto L63b45c;
case 0x63b45f:goto L63b45f;
case 0x63b460:c.instructions+=2;goto B63b460;
case 0x63b461:c.instructions+=1;goto B63b461;
case 0x63b462:goto L63b462;
case 0x63b463:c.instructions+=2;goto B63b463;
case 0x63b469:c.instructions+=1;goto B63b469;
case 0x63b46a:goto L63b46a;
case 0x63b470:c.instructions+=11;goto B63b470;
case 0x63b473:c.instructions+=10;goto B63b473;
case 0x63b479:c.instructions+=9;goto B63b479;
case 0x63b47f:c.instructions+=8;goto B63b47f;
case 0x63b486:c.instructions+=7;goto B63b486;
case 0x63b488:c.instructions+=6;goto B63b488;
case 0x63b48a:c.instructions+=5;goto B63b48a;
case 0x63b48d:c.instructions+=4;goto B63b48d;
case 0x63b48e:c.instructions+=3;goto B63b48e;
case 0x63b48f:c.instructions+=2;goto B63b48f;
case 0x63b491:c.instructions+=1;goto B63b491;
case 0x63b496:goto L63b496;
case 0x63b497:c.instructions+=5;goto B63b497;
case 0x63b498:c.instructions+=4;goto B63b498;
case 0x63b499:c.instructions+=3;goto B63b499;
case 0x63b49a:c.instructions+=2;goto B63b49a;
case 0x63b4a0:c.instructions+=1;goto B63b4a0;
case 0x63b4a1:goto L63b4a1;
case 0x63b4a4:c.instructions+=8;goto B63b4a4;
case 0x63b4aa:c.instructions+=7;goto B63b4aa;
case 0x63b4ac:c.instructions+=6;goto B63b4ac;
case 0x63b4af:c.instructions+=5;goto B63b4af;
case 0x63b4b2:c.instructions+=4;goto B63b4b2;
case 0x63b4b3:c.instructions+=3;goto B63b4b3;
case 0x63b4b4:c.instructions+=2;goto B63b4b4;
case 0x63b4b6:c.instructions+=1;goto B63b4b6;
case 0x63b4bb:goto L63b4bb;
case 0x63b4bc:c.instructions+=5;goto B63b4bc;
case 0x63b4bd:c.instructions+=4;goto B63b4bd;
case 0x63b4be:c.instructions+=3;goto B63b4be;
case 0x63b4bf:c.instructions+=2;goto B63b4bf;
case 0x63b4c5:c.instructions+=1;goto B63b4c5;
case 0x63b4d0:goto L63b4d0;
case 0x63b4d1:c.instructions+=5;goto B63b4d1;
case 0x63b4d2:c.instructions+=4;goto B63b4d2;
case 0x63b4d4:c.instructions+=3;goto B63b4d4;
case 0x63b4d6:c.instructions+=2;goto B63b4d6;
case 0x63b4d8:c.instructions+=1;goto B63b4d8;
case 0x63b4da:goto L63b4da;
case 0x63b4e0:goto L63b4e0;
case 0x63b4e3:c.instructions+=5;goto B63b4e3;
case 0x63b4e5:c.instructions+=4;goto B63b4e5;
case 0x63b4e7:c.instructions+=3;goto B63b4e7;
case 0x63b4ea:c.instructions+=2;goto B63b4ea;
case 0x63b4ec:c.instructions+=1;goto B63b4ec;
case 0x63b4f1:goto L63b4f1;
case 0x63b4f2:c.instructions+=1;goto B63b4f2;
case 0x63b4f7:goto L63b4f7;
case 0x63b4f9:c.instructions+=3;goto B63b4f9;
case 0x63b4fc:c.instructions+=2;goto B63b4fc;
case 0x63b4fe:c.instructions+=1;goto B63b4fe;
case 0x63b500:goto L63b500;
case 0x63b501:c.instructions+=2;goto B63b501;
case 0x63b502:c.instructions+=1;goto B63b502;
case 0x63b510:goto L63b510;
case 0x63b511:c.instructions+=5;goto B63b511;
case 0x63b512:c.instructions+=4;goto B63b512;
case 0x63b514:c.instructions+=3;goto B63b514;
case 0x63b516:c.instructions+=2;goto B63b516;
case 0x63b518:c.instructions+=1;goto B63b518;
case 0x63b51a:goto L63b51a;
case 0x63b520:goto L63b520;
case 0x63b523:c.instructions+=5;goto B63b523;
case 0x63b525:c.instructions+=4;goto B63b525;
case 0x63b527:c.instructions+=3;goto B63b527;
case 0x63b52a:c.instructions+=2;goto B63b52a;
case 0x63b52c:c.instructions+=1;goto B63b52c;
case 0x63b531:goto L63b531;
case 0x63b532:c.instructions+=1;goto B63b532;
case 0x63b537:goto L63b537;
case 0x63b539:c.instructions+=3;goto B63b539;
case 0x63b53c:c.instructions+=2;goto B63b53c;
case 0x63b53e:c.instructions+=1;goto B63b53e;
case 0x63b540:goto L63b540;
case 0x63b541:c.instructions+=2;goto B63b541;
case 0x63b542:c.instructions+=1;goto B63b542;
case 0x63b550:goto L63b550;
case 0x63b551:c.instructions+=5;goto B63b551;
case 0x63b552:c.instructions+=4;goto B63b552;
case 0x63b554:c.instructions+=3;goto B63b554;
case 0x63b556:c.instructions+=2;goto B63b556;
case 0x63b558:c.instructions+=1;goto B63b558;
case 0x63b55a:goto L63b55a;
case 0x63b560:goto L63b560;
case 0x63b563:c.instructions+=5;goto B63b563;
case 0x63b565:c.instructions+=4;goto B63b565;
case 0x63b567:c.instructions+=3;goto B63b567;
case 0x63b56a:c.instructions+=2;goto B63b56a;
case 0x63b56c:c.instructions+=1;goto B63b56c;
case 0x63b571:goto L63b571;
case 0x63b572:c.instructions+=1;goto B63b572;
case 0x63b577:goto L63b577;
case 0x63b579:c.instructions+=3;goto B63b579;
case 0x63b57c:c.instructions+=2;goto B63b57c;
case 0x63b57e:c.instructions+=1;goto B63b57e;
case 0x63b580:goto L63b580;
case 0x63b581:c.instructions+=2;goto B63b581;
case 0x63b582:c.instructions+=1;goto B63b582;
case 0x63b590:goto L63b590;
case 0x63b596:c.instructions+=15;goto B63b596;
case 0x63b598:c.instructions+=14;goto B63b598;
case 0x63b59d:c.instructions+=13;goto B63b59d;
case 0x63b59e:c.instructions+=12;goto B63b59e;
case 0x63b5a0:c.instructions+=11;goto B63b5a0;
case 0x63b5a7:c.instructions+=10;goto B63b5a7;
case 0x63b5aa:c.instructions+=9;goto B63b5aa;
case 0x63b5ac:c.instructions+=8;goto B63b5ac;
case 0x63b5af:c.instructions+=7;goto B63b5af;
case 0x63b5b1:c.instructions+=6;goto B63b5b1;
case 0x63b5b4:c.instructions+=5;goto B63b5b4;
case 0x63b5b7:c.instructions+=4;goto B63b5b7;
case 0x63b5ba:c.instructions+=3;goto B63b5ba;
case 0x63b5bd:c.instructions+=2;goto B63b5bd;
case 0x63b5c0:c.instructions+=1;goto B63b5c0;
case 0x63b5c5:goto L63b5c5;
case 0x63b5cc:c.instructions+=1;goto B63b5cc;
case 0x63b5ce:goto L63b5ce;
case 0x63b5cf:c.instructions+=2;goto B63b5cf;
case 0x63b5d5:c.instructions+=1;goto B63b5d5;
case 0x63b5d7:goto L63b5d7;
case 0x63b5da:c.instructions+=11;goto B63b5da;
case 0x63b5e1:c.instructions+=10;goto B63b5e1;
case 0x63b5e7:c.instructions+=9;goto B63b5e7;
case 0x63b5e9:c.instructions+=8;goto B63b5e9;
case 0x63b5ee:c.instructions+=7;goto B63b5ee;
case 0x63b5f1:c.instructions+=6;goto B63b5f1;
case 0x63b5f5:c.instructions+=5;goto B63b5f5;
case 0x63b5fb:c.instructions+=4;goto B63b5fb;
case 0x63b5fe:c.instructions+=3;goto B63b5fe;
case 0x63b605:c.instructions+=2;goto B63b605;
case 0x63b608:c.instructions+=1;goto B63b608;
case 0x63b610:goto L63b610;
case 0x63b612:c.instructions+=26;goto B63b612;
case 0x63b617:c.instructions+=25;goto B63b617;
case 0x63b61d:c.instructions+=24;goto B63b61d;
case 0x63b61e:c.instructions+=23;goto B63b61e;
case 0x63b625:c.instructions+=22;goto B63b625;
case 0x63b626:c.instructions+=21;goto B63b626;
case 0x63b627:c.instructions+=20;goto B63b627;
case 0x63b629:c.instructions+=19;goto B63b629;
case 0x63b62c:c.instructions+=18;goto B63b62c;
case 0x63b630:c.instructions+=17;goto B63b630;
case 0x63b632:c.instructions+=16;goto B63b632;
case 0x63b635:c.instructions+=15;goto B63b635;
case 0x63b639:c.instructions+=14;goto B63b639;
case 0x63b63c:c.instructions+=13;goto B63b63c;
case 0x63b643:c.instructions+=12;goto B63b643;
case 0x63b648:c.instructions+=11;goto B63b648;
case 0x63b64a:c.instructions+=10;goto B63b64a;
case 0x63b650:c.instructions+=9;goto B63b650;
case 0x63b652:c.instructions+=8;goto B63b652;
case 0x63b655:c.instructions+=7;goto B63b655;
case 0x63b659:c.instructions+=6;goto B63b659;
case 0x63b65d:c.instructions+=5;goto B63b65d;
case 0x63b660:c.instructions+=4;goto B63b660;
case 0x63b661:c.instructions+=3;goto B63b661;
case 0x63b663:c.instructions+=2;goto B63b663;
case 0x63b669:c.instructions+=1;goto B63b669;
case 0x63b66e:goto L63b66e;
case 0x63b672:c.instructions+=5;goto B63b672;
case 0x63b674:c.instructions+=4;goto B63b674;
case 0x63b675:c.instructions+=3;goto B63b675;
case 0x63b67c:c.instructions+=2;goto B63b67c;
case 0x63b67f:c.instructions+=1;goto B63b67f;
case 0x63b690:goto L63b690;
case 0x63b692:c.instructions+=15;goto B63b692;
case 0x63b697:c.instructions+=14;goto B63b697;
case 0x63b69d:c.instructions+=13;goto B63b69d;
case 0x63b69e:c.instructions+=12;goto B63b69e;
case 0x63b6a5:c.instructions+=11;goto B63b6a5;
case 0x63b6a8:c.instructions+=10;goto B63b6a8;
case 0x63b6a9:c.instructions+=9;goto B63b6a9;
case 0x63b6aa:c.instructions+=8;goto B63b6aa;
case 0x63b6ae:c.instructions+=7;goto B63b6ae;
case 0x63b6af:c.instructions+=6;goto B63b6af;
case 0x63b6b0:c.instructions+=5;goto B63b6b0;
case 0x63b6b5:c.instructions+=4;goto B63b6b5;
case 0x63b6b7:c.instructions+=3;goto B63b6b7;
case 0x63b6b8:c.instructions+=2;goto B63b6b8;
case 0x63b6ba:c.instructions+=1;goto B63b6ba;
case 0x63b6bf:goto L63b6bf;
case 0x63b6c0:c.instructions+=2;goto B63b6c0;
case 0x63b6c5:c.instructions+=1;goto B63b6c5;
case 0x63b6ca:goto L63b6ca;
case 0x63b6ce:c.instructions+=4;goto B63b6ce;
case 0x63b6d2:c.instructions+=3;goto B63b6d2;
case 0x63b6d3:c.instructions+=2;goto B63b6d3;
case 0x63b6d5:c.instructions+=1;goto B63b6d5;
case 0x63b6da:goto L63b6da;
case 0x63b6dd:c.instructions+=1;goto B63b6dd;
case 0x63b6e3:goto L63b6e3;
case 0x63b6e8:c.instructions+=2;goto B63b6e8;
case 0x63b6ed:c.instructions+=1;goto B63b6ed;
case 0x63b6f3:goto L63b6f3;
case 0x63b6f5:c.instructions+=2;goto B63b6f5;
case 0x63b6f7:c.instructions+=1;goto B63b6f7;
case 0x63b6fd:goto L63b6fd;
case 0x63b6ff:c.instructions+=10;goto B63b6ff;
case 0x63b702:c.instructions+=9;goto B63b702;
case 0x63b704:c.instructions+=8;goto B63b704;
case 0x63b707:c.instructions+=7;goto B63b707;
case 0x63b70a:c.instructions+=6;goto B63b70a;
case 0x63b711:c.instructions+=5;goto B63b711;
case 0x63b714:c.instructions+=4;goto B63b714;
case 0x63b717:c.instructions+=3;goto B63b717;
case 0x63b719:c.instructions+=2;goto B63b719;
case 0x63b721:c.instructions+=1;goto B63b721;
case 0x63b726:goto L63b726;
case 0x63b728:c.instructions+=1;goto B63b728;
case 0x63b72a:goto L63b72a;
case 0x63b730:goto L63b730;
case 0x63b733:c.instructions+=1;goto B63b733;
case 0x63b735:goto L63b735;
case 0x63b737:c.instructions+=3;goto B63b737;
case 0x63b73a:c.instructions+=2;goto B63b73a;
case 0x63b73c:c.instructions+=1;goto B63b73c;
case 0x63b73f:goto L63b73f;
case 0x63b742:c.instructions+=3;goto B63b742;
case 0x63b744:c.instructions+=2;goto B63b744;
case 0x63b746:c.instructions+=1;goto B63b746;
case 0x63b748:goto L63b748;
case 0x63b74a:c.instructions+=2;goto B63b74a;
case 0x63b74c:c.instructions+=1;goto B63b74c;
case 0x63b74e:goto L63b74e;
case 0x63b750:goto L63b750;
case 0x63b752:c.instructions+=6;goto B63b752;
case 0x63b755:c.instructions+=5;goto B63b755;
case 0x63b757:c.instructions+=4;goto B63b757;
case 0x63b75a:c.instructions+=3;goto B63b75a;
case 0x63b75d:c.instructions+=2;goto B63b75d;
case 0x63b75f:c.instructions+=1;goto B63b75f;
case 0x63b761:goto L63b761;
case 0x63b764:c.instructions+=1;goto B63b764;
case 0x63b769:goto L63b769;
case 0x63b76a:c.instructions+=2;goto B63b76a;
case 0x63b76c:c.instructions+=1;goto B63b76c;
case 0x63b771:goto L63b771;
case 0x63b772:c.instructions+=2;goto B63b772;
case 0x63b775:c.instructions+=1;goto B63b775;
case 0x63b77a:goto L63b77a;
case 0x63b77c:c.instructions+=3;goto B63b77c;
case 0x63b77f:c.instructions+=2;goto B63b77f;
case 0x63b781:c.instructions+=1;goto B63b781;
case 0x63b783:goto L63b783;
case 0x63b784:c.instructions+=1;goto B63b784;
case 0x63b789:goto L63b789;
case 0x63b78e:c.instructions+=1;goto B63b78e;
case 0x63b791:goto L63b791;
case 0x63b796:c.instructions+=1;goto B63b796;
case 0x63b79c:goto L63b79c;
case 0x63b7a0:goto L63b7a0;
case 0x63b7a2:c.instructions+=2;goto B63b7a2;
case 0x63b7a7:c.instructions+=1;goto B63b7a7;
case 0x63b7ad:goto L63b7ad;
case 0x63b7b2:goto L63b7b2;
case 0x63b7b6:c.instructions+=3;goto B63b7b6;
case 0x63b7b7:c.instructions+=2;goto B63b7b7;
case 0x63b7b9:c.instructions+=1;goto B63b7b9;
case 0x63b7be:goto L63b7be;
case 0x63b7c0:c.instructions+=1;goto B63b7c0;
case 0x63b7c5:goto L63b7c5;
case 0x63b7c8:c.instructions+=4;goto B63b7c8;
case 0x63b7cc:c.instructions+=3;goto B63b7cc;
case 0x63b7ce:c.instructions+=2;goto B63b7ce;
case 0x63b7d2:c.instructions+=1;goto B63b7d2;
case 0x63b7d4:goto L63b7d4;
case 0x63b7d9:c.instructions+=4;goto B63b7d9;
case 0x63b7da:c.instructions+=3;goto B63b7da;
case 0x63b7db:c.instructions+=2;goto B63b7db;
case 0x63b7dd:c.instructions+=1;goto B63b7dd;
case 0x63b7e2:goto L63b7e2;
case 0x63b7e7:c.instructions+=4;goto B63b7e7;
case 0x63b7e8:c.instructions+=3;goto B63b7e8;
case 0x63b7ea:c.instructions+=2;goto B63b7ea;
case 0x63b7f2:c.instructions+=1;goto B63b7f2;
case 0x63b7f4:goto L63b7f4;
case 0x63b7f6:goto L63b7f6;
case 0x63b7fc:c.instructions+=2;goto B63b7fc;
case 0x63b801:c.instructions+=1;goto B63b801;
case 0x63b806:goto L63b806;
case 0x63b808:c.instructions+=2;goto B63b808;
case 0x63b80a:c.instructions+=1;goto B63b80a;
case 0x63b80c:goto L63b80c;
case 0x63b810:goto L63b810;
case 0x63b813:c.instructions+=5;goto B63b813;
case 0x63b817:c.instructions+=4;goto B63b817;
case 0x63b818:c.instructions+=3;goto B63b818;
case 0x63b81a:c.instructions+=2;goto B63b81a;
case 0x63b81e:c.instructions+=1;goto B63b81e;
case 0x63b823:goto L63b823;
case 0x63b824:c.instructions+=2;goto B63b824;
case 0x63b826:c.instructions+=1;goto B63b826;
case 0x63b82b:goto L63b82b;
case 0x63b82d:c.instructions+=2;goto B63b82d;
case 0x63b82f:c.instructions+=1;goto B63b82f;
case 0x63b831:goto L63b831;
case 0x63b833:c.instructions+=1;goto B63b833;
case 0x63b838:goto L63b838;
case 0x63b83c:c.instructions+=7;goto B63b83c;
case 0x63b83d:c.instructions+=6;goto B63b83d;
case 0x63b83e:c.instructions+=5;goto B63b83e;
case 0x63b83f:c.instructions+=4;goto B63b83f;
case 0x63b840:c.instructions+=3;goto B63b840;
case 0x63b847:c.instructions+=2;goto B63b847;
case 0x63b84a:c.instructions+=1;goto B63b84a;
case 0x63b850:goto L63b850;
case 0x63b852:c.instructions+=11;goto B63b852;
case 0x63b857:c.instructions+=10;goto B63b857;
case 0x63b85d:c.instructions+=9;goto B63b85d;
case 0x63b85e:c.instructions+=8;goto B63b85e;
case 0x63b865:c.instructions+=7;goto B63b865;
case 0x63b866:c.instructions+=6;goto B63b866;
case 0x63b867:c.instructions+=5;goto B63b867;
case 0x63b869:c.instructions+=4;goto B63b869;
case 0x63b86a:c.instructions+=3;goto B63b86a;
case 0x63b86d:c.instructions+=2;goto B63b86d;
case 0x63b871:c.instructions+=1;goto B63b871;
case 0x63b876:goto L63b876;
case 0x63b87a:c.instructions+=6;goto B63b87a;
case 0x63b87c:c.instructions+=5;goto B63b87c;
case 0x63b87d:c.instructions+=4;goto B63b87d;
case 0x63b87f:c.instructions+=3;goto B63b87f;
case 0x63b883:c.instructions+=2;goto B63b883;
case 0x63b886:c.instructions+=1;goto B63b886;
case 0x63b88b:goto L63b88b;
case 0x63b895:c.instructions+=169;goto B63b895;
case 0x63b899:c.instructions+=168;goto B63b899;
case 0x63b89f:c.instructions+=167;goto B63b89f;
case 0x63b8a5:c.instructions+=166;goto B63b8a5;
case 0x63b8ab:c.instructions+=165;goto B63b8ab;
case 0x63b8b1:c.instructions+=164;goto B63b8b1;
case 0x63b8b7:c.instructions+=163;goto B63b8b7;
case 0x63b8bd:c.instructions+=162;goto B63b8bd;
case 0x63b8c3:c.instructions+=161;goto B63b8c3;
case 0x63b8c9:c.instructions+=160;goto B63b8c9;
case 0x63b8cf:c.instructions+=159;goto B63b8cf;
case 0x63b8d5:c.instructions+=158;goto B63b8d5;
case 0x63b8db:c.instructions+=157;goto B63b8db;
case 0x63b8e1:c.instructions+=156;goto B63b8e1;
case 0x63b8e7:c.instructions+=155;goto B63b8e7;
case 0x63b8ed:c.instructions+=154;goto B63b8ed;
case 0x63b8f3:c.instructions+=153;goto B63b8f3;
case 0x63b8f9:c.instructions+=152;goto B63b8f9;
case 0x63b8fe:c.instructions+=151;goto B63b8fe;
case 0x63b904:c.instructions+=150;goto B63b904;
case 0x63b90a:c.instructions+=149;goto B63b90a;
case 0x63b910:c.instructions+=148;goto B63b910;
case 0x63b916:c.instructions+=147;goto B63b916;
case 0x63b91c:c.instructions+=146;goto B63b91c;
case 0x63b922:c.instructions+=145;goto B63b922;
case 0x63b928:c.instructions+=144;goto B63b928;
case 0x63b92e:c.instructions+=143;goto B63b92e;
case 0x63b934:c.instructions+=142;goto B63b934;
case 0x63b93a:c.instructions+=141;goto B63b93a;
case 0x63b940:c.instructions+=140;goto B63b940;
case 0x63b946:c.instructions+=139;goto B63b946;
case 0x63b94c:c.instructions+=138;goto B63b94c;
case 0x63b952:c.instructions+=137;goto B63b952;
case 0x63b958:c.instructions+=136;goto B63b958;
case 0x63b95e:c.instructions+=135;goto B63b95e;
case 0x63b964:c.instructions+=134;goto B63b964;
case 0x63b96a:c.instructions+=133;goto B63b96a;
case 0x63b970:c.instructions+=132;goto B63b970;
case 0x63b976:c.instructions+=131;goto B63b976;
case 0x63b97c:c.instructions+=130;goto B63b97c;
case 0x63b982:c.instructions+=129;goto B63b982;
case 0x63b988:c.instructions+=128;goto B63b988;
case 0x63b98e:c.instructions+=127;goto B63b98e;
case 0x63b994:c.instructions+=126;goto B63b994;
case 0x63b99a:c.instructions+=125;goto B63b99a;
case 0x63b9a0:c.instructions+=124;goto B63b9a0;
case 0x63b9a6:c.instructions+=123;goto B63b9a6;
case 0x63b9ac:c.instructions+=122;goto B63b9ac;
case 0x63b9b2:c.instructions+=121;goto B63b9b2;
case 0x63b9b8:c.instructions+=120;goto B63b9b8;
case 0x63b9be:c.instructions+=119;goto B63b9be;
case 0x63b9c4:c.instructions+=118;goto B63b9c4;
case 0x63b9ca:c.instructions+=117;goto B63b9ca;
case 0x63b9d0:c.instructions+=116;goto B63b9d0;
case 0x63b9d6:c.instructions+=115;goto B63b9d6;
case 0x63b9dc:c.instructions+=114;goto B63b9dc;
case 0x63b9e2:c.instructions+=113;goto B63b9e2;
case 0x63b9e8:c.instructions+=112;goto B63b9e8;
case 0x63b9ee:c.instructions+=111;goto B63b9ee;
case 0x63b9f4:c.instructions+=110;goto B63b9f4;
case 0x63b9fa:c.instructions+=109;goto B63b9fa;
case 0x63ba00:c.instructions+=108;goto B63ba00;
case 0x63ba06:c.instructions+=107;goto B63ba06;
case 0x63ba0c:c.instructions+=106;goto B63ba0c;
case 0x63ba12:c.instructions+=105;goto B63ba12;
case 0x63ba18:c.instructions+=104;goto B63ba18;
case 0x63ba1e:c.instructions+=103;goto B63ba1e;
case 0x63ba24:c.instructions+=102;goto B63ba24;
case 0x63ba2a:c.instructions+=101;goto B63ba2a;
case 0x63ba30:c.instructions+=100;goto B63ba30;
case 0x63ba36:c.instructions+=99;goto B63ba36;
case 0x63ba3c:c.instructions+=98;goto B63ba3c;
case 0x63ba42:c.instructions+=97;goto B63ba42;
case 0x63ba48:c.instructions+=96;goto B63ba48;
case 0x63ba4e:c.instructions+=95;goto B63ba4e;
case 0x63ba54:c.instructions+=94;goto B63ba54;
case 0x63ba5a:c.instructions+=93;goto B63ba5a;
case 0x63ba60:c.instructions+=92;goto B63ba60;
case 0x63ba66:c.instructions+=91;goto B63ba66;
case 0x63ba6c:c.instructions+=90;goto B63ba6c;
case 0x63ba72:c.instructions+=89;goto B63ba72;
case 0x63ba78:c.instructions+=88;goto B63ba78;
case 0x63ba7e:c.instructions+=87;goto B63ba7e;
case 0x63ba84:c.instructions+=86;goto B63ba84;
case 0x63ba8a:c.instructions+=85;goto B63ba8a;
case 0x63ba90:c.instructions+=84;goto B63ba90;
case 0x63ba96:c.instructions+=83;goto B63ba96;
case 0x63ba9c:c.instructions+=82;goto B63ba9c;
case 0x63baa2:c.instructions+=81;goto B63baa2;
case 0x63baa8:c.instructions+=80;goto B63baa8;
case 0x63baae:c.instructions+=79;goto B63baae;
case 0x63bab4:c.instructions+=78;goto B63bab4;
case 0x63baba:c.instructions+=77;goto B63baba;
case 0x63bac0:c.instructions+=76;goto B63bac0;
case 0x63bac6:c.instructions+=75;goto B63bac6;
case 0x63bacc:c.instructions+=74;goto B63bacc;
case 0x63bad2:c.instructions+=73;goto B63bad2;
case 0x63bad8:c.instructions+=72;goto B63bad8;
case 0x63bade:c.instructions+=71;goto B63bade;
case 0x63bae4:c.instructions+=70;goto B63bae4;
case 0x63baea:c.instructions+=69;goto B63baea;
case 0x63baf0:c.instructions+=68;goto B63baf0;
case 0x63baf6:c.instructions+=67;goto B63baf6;
case 0x63bafc:c.instructions+=66;goto B63bafc;
case 0x63bb02:c.instructions+=65;goto B63bb02;
case 0x63bb08:c.instructions+=64;goto B63bb08;
case 0x63bb0e:c.instructions+=63;goto B63bb0e;
case 0x63bb14:c.instructions+=62;goto B63bb14;
case 0x63bb1a:c.instructions+=61;goto B63bb1a;
case 0x63bb20:c.instructions+=60;goto B63bb20;
case 0x63bb26:c.instructions+=59;goto B63bb26;
case 0x63bb2c:c.instructions+=58;goto B63bb2c;
case 0x63bb32:c.instructions+=57;goto B63bb32;
case 0x63bb38:c.instructions+=56;goto B63bb38;
case 0x63bb3e:c.instructions+=55;goto B63bb3e;
case 0x63bb44:c.instructions+=54;goto B63bb44;
case 0x63bb4a:c.instructions+=53;goto B63bb4a;
case 0x63bb50:c.instructions+=52;goto B63bb50;
case 0x63bb56:c.instructions+=51;goto B63bb56;
case 0x63bb5c:c.instructions+=50;goto B63bb5c;
case 0x63bb62:c.instructions+=49;goto B63bb62;
case 0x63bb68:c.instructions+=48;goto B63bb68;
case 0x63bb6e:c.instructions+=47;goto B63bb6e;
case 0x63bb74:c.instructions+=46;goto B63bb74;
case 0x63bb7a:c.instructions+=45;goto B63bb7a;
case 0x63bb80:c.instructions+=44;goto B63bb80;
case 0x63bb86:c.instructions+=43;goto B63bb86;
case 0x63bb8c:c.instructions+=42;goto B63bb8c;
case 0x63bb92:c.instructions+=41;goto B63bb92;
case 0x63bb98:c.instructions+=40;goto B63bb98;
case 0x63bb9e:c.instructions+=39;goto B63bb9e;
case 0x63bba4:c.instructions+=38;goto B63bba4;
case 0x63bbaa:c.instructions+=37;goto B63bbaa;
case 0x63bbb0:c.instructions+=36;goto B63bbb0;
case 0x63bbb6:c.instructions+=35;goto B63bbb6;
case 0x63bbbc:c.instructions+=34;goto B63bbbc;
case 0x63bbc2:c.instructions+=33;goto B63bbc2;
case 0x63bbc8:c.instructions+=32;goto B63bbc8;
case 0x63bbce:c.instructions+=31;goto B63bbce;
case 0x63bbd4:c.instructions+=30;goto B63bbd4;
case 0x63bbda:c.instructions+=29;goto B63bbda;
case 0x63bbe0:c.instructions+=28;goto B63bbe0;
case 0x63bbe6:c.instructions+=27;goto B63bbe6;
case 0x63bbec:c.instructions+=26;goto B63bbec;
case 0x63bbf2:c.instructions+=25;goto B63bbf2;
case 0x63bbf8:c.instructions+=24;goto B63bbf8;
case 0x63bbfe:c.instructions+=23;goto B63bbfe;
case 0x63bc04:c.instructions+=22;goto B63bc04;
case 0x63bc08:c.instructions+=21;goto B63bc08;
case 0x63bc0e:c.instructions+=20;goto B63bc0e;
case 0x63bc14:c.instructions+=19;goto B63bc14;
case 0x63bc1a:c.instructions+=18;goto B63bc1a;
case 0x63bc20:c.instructions+=17;goto B63bc20;
case 0x63bc26:c.instructions+=16;goto B63bc26;
case 0x63bc2c:c.instructions+=15;goto B63bc2c;
case 0x63bc32:c.instructions+=14;goto B63bc32;
case 0x63bc37:c.instructions+=13;goto B63bc37;
case 0x63bc3d:c.instructions+=12;goto B63bc3d;
case 0x63bc43:c.instructions+=11;goto B63bc43;
case 0x63bc48:c.instructions+=10;goto B63bc48;
case 0x63bc4a:c.instructions+=9;goto B63bc4a;
case 0x63bc50:c.instructions+=8;goto B63bc50;
case 0x63bc53:c.instructions+=7;goto B63bc53;
case 0x63bc59:c.instructions+=6;goto B63bc59;
case 0x63bc5a:c.instructions+=5;goto B63bc5a;
case 0x63bc5c:c.instructions+=4;goto B63bc5c;
case 0x63bc5d:c.instructions+=3;goto B63bc5d;
case 0x63bc64:c.instructions+=2;goto B63bc64;
case 0x63bc67:c.instructions+=1;goto B63bc67;
case 0x63bc70:goto L63bc70;
case 0x63bc74:c.instructions+=8;goto B63bc74;
case 0x63bc75:c.instructions+=7;goto B63bc75;
case 0x63bc76:c.instructions+=6;goto B63bc76;
case 0x63bc77:c.instructions+=5;goto B63bc77;
case 0x63bc7b:c.instructions+=4;goto B63bc7b;
case 0x63bc7c:c.instructions+=3;goto B63bc7c;
case 0x63bc7d:c.instructions+=2;goto B63bc7d;
case 0x63bc7f:c.instructions+=1;goto B63bc7f;
case 0x63bc84:goto L63bc84;
case 0x63bc88:c.instructions+=9;goto B63bc88;
case 0x63bc8a:c.instructions+=8;goto B63bc8a;
case 0x63bc8c:c.instructions+=7;goto B63bc8c;
case 0x63bc8f:c.instructions+=6;goto B63bc8f;
case 0x63bc92:c.instructions+=5;goto B63bc92;
case 0x63bc95:c.instructions+=4;goto B63bc95;
case 0x63bc97:c.instructions+=3;goto B63bc97;
case 0x63bc9a:c.instructions+=2;goto B63bc9a;
case 0x63bc9d:c.instructions+=1;goto B63bc9d;
case 0x63bc9f:goto L63bc9f;
case 0x63bca1:c.instructions+=9;goto B63bca1;
case 0x63bca3:c.instructions+=8;goto B63bca3;
case 0x63bca4:c.instructions+=7;goto B63bca4;
case 0x63bca7:c.instructions+=6;goto B63bca7;
case 0x63bca8:c.instructions+=5;goto B63bca8;
case 0x63bcab:c.instructions+=4;goto B63bcab;
case 0x63bcad:c.instructions+=3;goto B63bcad;
case 0x63bcb3:c.instructions+=2;goto B63bcb3;
case 0x63bcb4:c.instructions+=1;goto B63bcb4;
case 0x63bcb7:goto L63bcb7;
case 0x63bcba:c.instructions+=9;goto B63bcba;
case 0x63bcbc:c.instructions+=8;goto B63bcbc;
case 0x63bcbd:c.instructions+=7;goto B63bcbd;
case 0x63bcc0:c.instructions+=6;goto B63bcc0;
case 0x63bcc1:c.instructions+=5;goto B63bcc1;
case 0x63bcc4:c.instructions+=4;goto B63bcc4;
case 0x63bcc6:c.instructions+=3;goto B63bcc6;
case 0x63bccc:c.instructions+=2;goto B63bccc;
case 0x63bccd:c.instructions+=1;goto B63bccd;
case 0x63bcd0:goto L63bcd0;
case 0x63bcd1:c.instructions+=4;goto B63bcd1;
case 0x63bcd3:c.instructions+=3;goto B63bcd3;
case 0x63bcd6:c.instructions+=2;goto B63bcd6;
case 0x63bcd8:c.instructions+=1;goto B63bcd8;
case 0x63bcda:goto L63bcda;
case 0x63bcdf:goto L63bcdf;
case 0x63bce2:c.instructions+=3;goto B63bce2;
case 0x63bce6:c.instructions+=2;goto B63bce6;
case 0x63bce8:c.instructions+=1;goto B63bce8;
case 0x63bcea:goto L63bcea;
case 0x63bcec:c.instructions+=2;goto B63bcec;
case 0x63bcf0:c.instructions+=1;goto B63bcf0;
case 0x63bcf3:goto L63bcf3;
case 0x63bcf6:c.instructions+=2;goto B63bcf6;
case 0x63bcf8:c.instructions+=1;goto B63bcf8;
case 0x63bcfa:goto L63bcfa;
case 0x63bcfc:c.instructions+=1;goto B63bcfc;
case 0x63bd01:goto L63bd01;
case 0x63bd02:c.instructions+=1;goto B63bd02;
case 0x63bd10:goto L63bd10;
case 0x63bd14:c.instructions+=4;goto B63bd14;
case 0x63bd18:c.instructions+=3;goto B63bd18;
case 0x63bd22:c.instructions+=2;goto B63bd22;
case 0x63bd27:c.instructions+=1;goto B63bd27;
case 0x63bd30:goto L63bd30;
case 0x63bd36:goto L63bd36;
case 0x63bd38:c.instructions+=9;goto B63bd38;
case 0x63bd39:c.instructions+=8;goto B63bd39;
case 0x63bd3b:c.instructions+=7;goto B63bd3b;
case 0x63bd3e:c.instructions+=6;goto B63bd3e;
case 0x63bd41:c.instructions+=5;goto B63bd41;
case 0x63bd47:c.instructions+=4;goto B63bd47;
case 0x63bd49:c.instructions+=3;goto B63bd49;
case 0x63bd4b:c.instructions+=2;goto B63bd4b;
case 0x63bd4e:c.instructions+=1;goto B63bd4e;
case 0x63bd50:goto L63bd50;
case 0x63bd56:c.instructions+=3;goto B63bd56;
case 0x63bd58:c.instructions+=2;goto B63bd58;
case 0x63bd5b:c.instructions+=1;goto B63bd5b;
case 0x63bd5d:goto L63bd5d;
case 0x63bd5f:c.instructions+=2;goto B63bd5f;
case 0x63bd60:c.instructions+=1;goto B63bd60;
case 0x63bd62:goto L63bd62;
case 0x63bd64:goto L63bd64;
case 0x63bd66:goto L63bd66;
case 0x63bd67:c.instructions+=1;goto B63bd67;
case 0x63bd6a:goto L63bd6a;
case 0x63bd6c:c.instructions+=4;goto B63bd6c;
case 0x63bd6d:c.instructions+=3;goto B63bd6d;
case 0x63bd6f:c.instructions+=2;goto B63bd6f;
case 0x63bd71:c.instructions+=1;goto B63bd71;
case 0x63bd76:goto L63bd76;
case 0x63bd77:c.instructions+=1;goto B63bd77;
case 0x63bd7d:goto L63bd7d;
case 0x63bd7f:c.instructions+=7;goto B63bd7f;
case 0x63bd80:c.instructions+=6;goto B63bd80;
case 0x63bd82:c.instructions+=5;goto B63bd82;
case 0x63bd85:c.instructions+=4;goto B63bd85;
case 0x63bd86:c.instructions+=3;goto B63bd86;
case 0x63bd88:c.instructions+=2;goto B63bd88;
case 0x63bd8b:c.instructions+=1;goto B63bd8b;
case 0x63bd91:goto L63bd91;
case 0x63bd92:c.instructions+=1;goto B63bd92;
case 0x63bd93:goto L63bd93;
case 0x63bd96:c.instructions+=7;goto B63bd96;
case 0x63bd99:c.instructions+=6;goto B63bd99;
case 0x63bd9b:c.instructions+=5;goto B63bd9b;
case 0x63bd9e:c.instructions+=4;goto B63bd9e;
case 0x63bda4:c.instructions+=3;goto B63bda4;
case 0x63bdaa:c.instructions+=2;goto B63bdaa;
case 0x63bdb0:c.instructions+=1;goto B63bdb0;
case 0x63bdb2:goto L63bdb2;
case 0x63bdb8:c.instructions+=2;goto B63bdb8;
case 0x63bdba:c.instructions+=1;goto B63bdba;
case 0x63bdbc:goto L63bdbc;
case 0x63bdc2:c.instructions+=2;goto B63bdc2;
case 0x63bdc4:c.instructions+=1;goto B63bdc4;
case 0x63bdc6:goto L63bdc6;
case 0x63bdc8:c.instructions+=7;goto B63bdc8;
case 0x63bdcb:c.instructions+=6;goto B63bdcb;
case 0x63bdd1:c.instructions+=5;goto B63bdd1;
case 0x63bdd2:c.instructions+=4;goto B63bdd2;
case 0x63bdd4:c.instructions+=3;goto B63bdd4;
case 0x63bdda:c.instructions+=2;goto B63bdda;
case 0x63bddd:c.instructions+=1;goto B63bddd;
case 0x63bddf:goto L63bddf;
case 0x63bde1:c.instructions+=1;goto B63bde1;
case 0x63bde3:goto L63bde3;
case 0x63bde5:c.instructions+=1;goto B63bde5;
case 0x63bde7:goto L63bde7;
case 0x63bde9:c.instructions+=4;goto B63bde9;
case 0x63bdec:c.instructions+=3;goto B63bdec;
case 0x63bdef:c.instructions+=2;goto B63bdef;
case 0x63bdf6:c.instructions+=1;goto B63bdf6;
case 0x63bdf8:goto L63bdf8;
case 0x63bdfb:c.instructions+=2;goto B63bdfb;
case 0x63bdfe:c.instructions+=1;goto B63bdfe;
case 0x63be05:goto L63be05;
case 0x63be08:c.instructions+=1;goto B63be08;
case 0x63be0a:goto L63be0a;
case 0x63be0e:c.instructions+=3;goto B63be0e;
case 0x63be0f:c.instructions+=2;goto B63be0f;
case 0x63be12:c.instructions+=1;goto B63be12;
case 0x63be18:goto L63be18;
case 0x63be19:c.instructions+=1;goto B63be19;
case 0x63be1a:goto L63be1a;
case 0x63be1b:c.instructions+=2;goto B63be1b;
case 0x63be1c:c.instructions+=1;goto B63be1c;
case 0x63be1f:goto L63be1f;
case 0x63be21:c.instructions+=4;goto B63be21;
case 0x63be22:c.instructions+=3;goto B63be22;
case 0x63be24:c.instructions+=2;goto B63be24;
case 0x63be26:c.instructions+=1;goto B63be26;
case 0x63be2b:goto L63be2b;
case 0x63be2c:c.instructions+=1;goto B63be2c;
case 0x63be32:goto L63be32;
case 0x63be34:c.instructions+=6;goto B63be34;
case 0x63be35:c.instructions+=5;goto B63be35;
case 0x63be37:c.instructions+=4;goto B63be37;
case 0x63be38:c.instructions+=3;goto B63be38;
case 0x63be3a:c.instructions+=2;goto B63be3a;
case 0x63be3d:c.instructions+=1;goto B63be3d;
case 0x63be43:goto L63be43;
case 0x63be44:c.instructions+=3;goto B63be44;
case 0x63be45:c.instructions+=2;goto B63be45;
case 0x63be4a:c.instructions+=1;goto B63be4a;
case 0x63be4f:goto L63be4f;
case 0x63be52:c.instructions+=4;goto B63be52;
case 0x63be56:c.instructions+=3;goto B63be56;
case 0x63be59:c.instructions+=2;goto B63be59;
case 0x63be5f:c.instructions+=1;goto B63be5f;
case 0x63be61:goto L63be61;
case 0x63be64:c.instructions+=1;goto B63be64;
case 0x63be66:goto L63be66;
case 0x63be68:c.instructions+=4;goto B63be68;
case 0x63be6a:c.instructions+=3;goto B63be6a;
case 0x63be6b:c.instructions+=2;goto B63be6b;
case 0x63be6d:c.instructions+=1;goto B63be6d;
case 0x63be6f:goto L63be6f;
case 0x63be70:c.instructions+=1;goto B63be70;
case 0x63be72:goto L63be72;
case 0x63be74:c.instructions+=1;goto B63be74;
case 0x63be76:goto L63be76;
case 0x63be7c:c.instructions+=7;goto B63be7c;
case 0x63be7f:c.instructions+=6;goto B63be7f;
case 0x63be81:c.instructions+=5;goto B63be81;
case 0x63be87:c.instructions+=4;goto B63be87;
case 0x63be8a:c.instructions+=3;goto B63be8a;
case 0x63be8d:c.instructions+=2;goto B63be8d;
case 0x63be90:c.instructions+=1;goto B63be90;
case 0x63be92:goto L63be92;
case 0x63be94:c.instructions+=1;goto B63be94;
case 0x63be96:goto L63be96;
case 0x63be9c:c.instructions+=2;goto B63be9c;
case 0x63be9f:c.instructions+=1;goto B63be9f;
case 0x63bea1:goto L63bea1;
case 0x63bea3:c.instructions+=11;goto B63bea3;
case 0x63bea5:c.instructions+=10;goto B63bea5;
case 0x63beab:c.instructions+=9;goto B63beab;
case 0x63beae:c.instructions+=8;goto B63beae;
case 0x63beb1:c.instructions+=7;goto B63beb1;
case 0x63beb4:c.instructions+=6;goto B63beb4;
case 0x63beb6:c.instructions+=5;goto B63beb6;
case 0x63beb8:c.instructions+=4;goto B63beb8;
case 0x63bebb:c.instructions+=3;goto B63bebb;
case 0x63bebe:c.instructions+=2;goto B63bebe;
case 0x63bec1:c.instructions+=1;goto B63bec1;
case 0x63bec3:goto L63bec3;
case 0x63bec6:c.instructions+=4;goto B63bec6;
case 0x63bec9:c.instructions+=3;goto B63bec9;
case 0x63beca:c.instructions+=2;goto B63beca;
case 0x63becd:c.instructions+=1;goto B63becd;
case 0x63becf:goto L63becf;
case 0x63bed0:c.instructions+=1;goto B63bed0;
case 0x63bed1:goto L63bed1;
case 0x63bed4:c.instructions+=3;goto B63bed4;
case 0x63bed5:c.instructions+=2;goto B63bed5;
case 0x63bed6:c.instructions+=1;goto B63bed6;
case 0x63bed9:goto L63bed9;
case 0x63bedb:c.instructions+=4;goto B63bedb;
case 0x63bedc:c.instructions+=3;goto B63bedc;
case 0x63bede:c.instructions+=2;goto B63bede;
case 0x63bee0:c.instructions+=1;goto B63bee0;
case 0x63bee5:goto L63bee5;
case 0x63bee6:c.instructions+=1;goto B63bee6;
case 0x63beec:goto L63beec;
case 0x63beee:c.instructions+=4;goto B63beee;
case 0x63beef:c.instructions+=3;goto B63beef;
case 0x63bef1:c.instructions+=2;goto B63bef1;
case 0x63bef3:c.instructions+=1;goto B63bef3;
case 0x63bef8:goto L63bef8;
case 0x63befb:c.instructions+=8;goto B63befb;
case 0x63befc:c.instructions+=7;goto B63befc;
case 0x63beff:c.instructions+=6;goto B63beff;
case 0x63bf02:c.instructions+=5;goto B63bf02;
case 0x63bf05:c.instructions+=4;goto B63bf05;
case 0x63bf08:c.instructions+=3;goto B63bf08;
case 0x63bf0b:c.instructions+=2;goto B63bf0b;
case 0x63bf0e:c.instructions+=1;goto B63bf0e;
case 0x63bf14:goto L63bf14;
case 0x63bf15:c.instructions+=1;goto B63bf15;
case 0x63bf18:goto L63bf18;
case 0x63bf1a:c.instructions+=59;goto B63bf1a;
case 0x63bf1b:c.instructions+=58;goto B63bf1b;
case 0x63bf1d:c.instructions+=57;goto B63bf1d;
case 0x63bf1e:c.instructions+=56;goto B63bf1e;
case 0x63bf1f:c.instructions+=55;goto B63bf1f;
case 0x63bf22:c.instructions+=54;goto B63bf22;
case 0x63bf25:c.instructions+=53;goto B63bf25;
case 0x63bf28:c.instructions+=52;goto B63bf28;
case 0x63bf2b:c.instructions+=51;goto B63bf2b;
case 0x63bf2e:c.instructions+=50;goto B63bf2e;
case 0x63bf31:c.instructions+=49;goto B63bf31;
case 0x63bf32:c.instructions+=48;goto B63bf32;
case 0x63bf34:c.instructions+=47;goto B63bf34;
case 0x63bf37:c.instructions+=46;goto B63bf37;
case 0x63bf38:c.instructions+=45;goto B63bf38;
case 0x63bf3b:c.instructions+=44;goto B63bf3b;
case 0x63bf3d:c.instructions+=43;goto B63bf3d;
case 0x63bf3f:c.instructions+=42;goto B63bf3f;
case 0x63bf41:c.instructions+=41;goto B63bf41;
case 0x63bf47:c.instructions+=40;goto B63bf47;
case 0x63bf49:c.instructions+=39;goto B63bf49;
case 0x63bf4b:c.instructions+=38;goto B63bf4b;
case 0x63bf51:c.instructions+=37;goto B63bf51;
case 0x63bf54:c.instructions+=36;goto B63bf54;
case 0x63bf56:c.instructions+=35;goto B63bf56;
case 0x63bf58:c.instructions+=34;goto B63bf58;
case 0x63bf5a:c.instructions+=33;goto B63bf5a;
case 0x63bf5d:c.instructions+=32;goto B63bf5d;
case 0x63bf60:c.instructions+=31;goto B63bf60;
case 0x63bf62:c.instructions+=30;goto B63bf62;
case 0x63bf65:c.instructions+=29;goto B63bf65;
case 0x63bf67:c.instructions+=28;goto B63bf67;
case 0x63bf69:c.instructions+=27;goto B63bf69;
case 0x63bf6c:c.instructions+=26;goto B63bf6c;
case 0x63bf6e:c.instructions+=25;goto B63bf6e;
case 0x63bf71:c.instructions+=24;goto B63bf71;
case 0x63bf73:c.instructions+=23;goto B63bf73;
case 0x63bf75:c.instructions+=22;goto B63bf75;
case 0x63bf78:c.instructions+=21;goto B63bf78;
case 0x63bf7a:c.instructions+=20;goto B63bf7a;
case 0x63bf7c:c.instructions+=19;goto B63bf7c;
case 0x63bf7e:c.instructions+=18;goto B63bf7e;
case 0x63bf80:c.instructions+=17;goto B63bf80;
case 0x63bf82:c.instructions+=16;goto B63bf82;
case 0x63bf84:c.instructions+=15;goto B63bf84;
case 0x63bf87:c.instructions+=14;goto B63bf87;
case 0x63bf88:c.instructions+=13;goto B63bf88;
case 0x63bf8b:c.instructions+=12;goto B63bf8b;
case 0x63bf8e:c.instructions+=11;goto B63bf8e;
case 0x63bf8f:c.instructions+=10;goto B63bf8f;
case 0x63bf91:c.instructions+=9;goto B63bf91;
case 0x63bf94:c.instructions+=8;goto B63bf94;
case 0x63bf97:c.instructions+=7;goto B63bf97;
case 0x63bf99:c.instructions+=6;goto B63bf99;
case 0x63bf9c:c.instructions+=5;goto B63bf9c;
case 0x63bf9f:c.instructions+=4;goto B63bf9f;
case 0x63bfa1:c.instructions+=3;goto B63bfa1;
case 0x63bfa4:c.instructions+=2;goto B63bfa4;
case 0x63bfa5:c.instructions+=1;goto B63bfa5;
case 0x63bfa8:goto L63bfa8;
case 0x63bfaa:c.instructions+=4;goto B63bfaa;
case 0x63bfab:c.instructions+=3;goto B63bfab;
case 0x63bfad:c.instructions+=2;goto B63bfad;
case 0x63bfaf:c.instructions+=1;goto B63bfaf;
case 0x63bfb4:goto L63bfb4;
case 0x63bfb7:c.instructions+=8;goto B63bfb7;
case 0x63bfb8:c.instructions+=7;goto B63bfb8;
case 0x63bfbb:c.instructions+=6;goto B63bfbb;
case 0x63bfbe:c.instructions+=5;goto B63bfbe;
case 0x63bfc1:c.instructions+=4;goto B63bfc1;
case 0x63bfc4:c.instructions+=3;goto B63bfc4;
case 0x63bfc7:c.instructions+=2;goto B63bfc7;
case 0x63bfca:c.instructions+=1;goto B63bfca;
case 0x63bfd0:goto L63bfd0;
case 0x63bfd1:c.instructions+=1;goto B63bfd1;
case 0x63bfd4:goto L63bfd4;
case 0x63bfd6:c.instructions+=18;goto B63bfd6;
case 0x63bfd7:c.instructions+=17;goto B63bfd7;
case 0x63bfd9:c.instructions+=16;goto B63bfd9;
case 0x63bfda:c.instructions+=15;goto B63bfda;
case 0x63bfdb:c.instructions+=14;goto B63bfdb;
case 0x63bfde:c.instructions+=13;goto B63bfde;
case 0x63bfe1:c.instructions+=12;goto B63bfe1;
case 0x63bfe4:c.instructions+=11;goto B63bfe4;
case 0x63bfe7:c.instructions+=10;goto B63bfe7;
case 0x63bfea:c.instructions+=9;goto B63bfea;
case 0x63bfed:c.instructions+=8;goto B63bfed;
case 0x63bfee:c.instructions+=7;goto B63bfee;
case 0x63bff0:c.instructions+=6;goto B63bff0;
case 0x63bff3:c.instructions+=5;goto B63bff3;
case 0x63bff9:c.instructions+=4;goto B63bff9;
case 0x63bffa:c.instructions+=3;goto B63bffa;
case 0x63bffc:c.instructions+=2;goto B63bffc;
case 0x63bfff:c.instructions+=1;goto B63bfff;
default:missing_instruction(c.pc);}
B63b000:L63b000:{c.instructions+=5;NFSU2_TR(0x63b000);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B63b003:{NFSU2_TR(0x63b003);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b004:{NFSU2_TR(0x63b004);
__builtin_memmove((R+4),(R+24),4);
}
B63b006:{NFSU2_TR(0x63b006);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b00c:{NFSU2_TR(0x63b00c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b011ull));
TAIL_STATIC(0x633c30u,633);
}
B63b011:L63b011:{c.instructions+=11;NFSU2_TR(0x63b011);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b017:{NFSU2_TR(0x63b017);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b019:{NFSU2_TR(0x63b019);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b01a:{NFSU2_TR(0x63b01a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63b020:{NFSU2_TR(0x63b020);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b021:{NFSU2_TR(0x63b021);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x430ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b027:{NFSU2_TR(0x63b027);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b028:{NFSU2_TR(0x63b028);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x11cull))));
}
B63b02e:{NFSU2_TR(0x63b02e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b02f:{NFSU2_TR(0x63b02f);
__builtin_memmove((R+4),(R+24),4);
}
B63b031:{NFSU2_TR(0x63b031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b036ull));
TAIL_STATIC(0x633c30u,633);
}
B63b036:L63b036:{c.instructions+=5;NFSU2_TR(0x63b036);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b039:{NFSU2_TR(0x63b039);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b03b:{NFSU2_TR(0x63b03b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63b03c:{NFSU2_TR(0x63b03c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63b03d:{NFSU2_TR(0x63b03d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b042;}}
}
B63b03f:L63b03f:{c.instructions+=1;NFSU2_TR(0x63b03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B63b042:L63b042:{c.instructions+=10;NFSU2_TR(0x63b042);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b045:{NFSU2_TR(0x63b045);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b04c:{NFSU2_TR(0x63b04c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B63b04d:{NFSU2_TR(0x63b04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b050:{NFSU2_TR(0x63b050);
__builtin_memmove((R+0),(R+28),4);
}
B63b052:{NFSU2_TR(0x63b052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63b053:{NFSU2_TR(0x63b053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b054:{NFSU2_TR(0x63b054);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b05b:{NFSU2_TR(0x63b05b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63b061:{NFSU2_TR(0x63b061);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63b070:L63b070:{c.instructions+=8;NFSU2_TR(0x63b070);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b071:{NFSU2_TR(0x63b071);
__builtin_memmove((R+12),(R+4),4);
}
B63b073:{NFSU2_TR(0x63b073);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b076:{NFSU2_TR(0x63b076);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b077:{NFSU2_TR(0x63b077);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b07a:{NFSU2_TR(0x63b07a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63b07c:{NFSU2_TR(0x63b07c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b07e:{NFSU2_TR(0x63b07e);
if(r1(R+518)){{goto L63b0bc;}}
}
B63b080:L63b080:{c.instructions+=3;NFSU2_TR(0x63b080);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63b083:{NFSU2_TR(0x63b083);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b085:{NFSU2_TR(0x63b085);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63b092;}}
}
B63b087:L63b087:{c.instructions+=4;NFSU2_TR(0x63b087);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B63b088:{NFSU2_TR(0x63b088);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b08a:{NFSU2_TR(0x63b08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b08d:{NFSU2_TR(0x63b08d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b092;}}
}
B63b08f:L63b08f:{c.instructions+=1;NFSU2_TR(0x63b08f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B63b092:L63b092:{c.instructions+=3;NFSU2_TR(0x63b092);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63b095:{NFSU2_TR(0x63b095);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b097:{NFSU2_TR(0x63b097);
if(r1(R+518)){{goto L63b09b;}}
}
B63b099:L63b099:{c.instructions+=1;NFSU2_TR(0x63b099);
__builtin_memmove((R+4),(R+0),4);
}
B63b09b:L63b09b:{c.instructions+=3;NFSU2_TR(0x63b09b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63b09d:{NFSU2_TR(0x63b09d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b09f:{NFSU2_TR(0x63b09f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b080u);}goto L63b080;}}
}
B63b0a1:L63b0a1:{c.instructions+=2;NFSU2_TR(0x63b0a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b0a3:{NFSU2_TR(0x63b0a3);
if(r1(R+518)){{goto L63b0bc;}}
}
B63b0a5:L63b0a5:{c.instructions+=9;NFSU2_TR(0x63b0a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63b0a7:{NFSU2_TR(0x63b0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63b0aa:{NFSU2_TR(0x63b0aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63b0ac:{NFSU2_TR(0x63b0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b0af:{NFSU2_TR(0x63b0af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b0b2:{NFSU2_TR(0x63b0b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63b0b4:{NFSU2_TR(0x63b0b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b0b7:{NFSU2_TR(0x63b0b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b0ba:{NFSU2_TR(0x63b0ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63b0bc:L63b0bc:{c.instructions+=3;NFSU2_TR(0x63b0bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b0bf:{NFSU2_TR(0x63b0bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b0c1:{NFSU2_TR(0x63b0c1);
if(r1(R+518)){{goto L63b0cf;}}
}
B63b0c3:L63b0c3:{c.instructions+=1;NFSU2_TR(0x63b0c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b0c8ull));
TAIL_STATIC(0x57ef60u,57e);
}
B63b0c8:L63b0c8:{c.instructions+=3;NFSU2_TR(0x63b0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b0cb:{NFSU2_TR(0x63b0cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b0cd:{NFSU2_TR(0x63b0cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b0c3u);}goto L63b0c3;}}
}
B63b0cf:L63b0cf:{c.instructions+=3;NFSU2_TR(0x63b0cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63b0d1:{NFSU2_TR(0x63b0d1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b0d3:{NFSU2_TR(0x63b0d3);
if(r1(R+518)){{goto L63b0e9;}}
}
B63b0d5:L63b0d5:{c.instructions+=1;NFSU2_TR(0x63b0d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b0d6:L63b0d6:{c.instructions+=5;NFSU2_TR(0x63b0d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B63b0d8:{NFSU2_TR(0x63b0d8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b0da:{NFSU2_TR(0x63b0da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b0db:{NFSU2_TR(0x63b0db);
__builtin_memmove((R+4),(R+12),4);
}
B63b0dd:{NFSU2_TR(0x63b0dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b0e2ull));
TAIL_STATIC(0x63a000u,63a);
}
B63b0e2:L63b0e2:{c.instructions+=3;NFSU2_TR(0x63b0e2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b0e4:{NFSU2_TR(0x63b0e4);
__builtin_memmove((R+0),(R+28),4);
}
B63b0e6:{NFSU2_TR(0x63b0e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b0d6u);}goto L63b0d6;}}
}
B63b0e8:L63b0e8:{c.instructions+=1;NFSU2_TR(0x63b0e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63b0e9:L63b0e9:{c.instructions+=3;NFSU2_TR(0x63b0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b0ec:{NFSU2_TR(0x63b0ec);
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
B63b0ee:{NFSU2_TR(0x63b0ee);
if(r1(R+518)){{goto L63b11b;}}
}
B63b0f0:L63b0f0:{c.instructions+=3;NFSU2_TR(0x63b0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b0f3:{NFSU2_TR(0x63b0f3);
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
B63b0f5:{NFSU2_TR(0x63b0f5);
if(r1(R+518)){{goto L63b11b;}}
}
B63b0f7:L63b0f7:{c.instructions+=2;NFSU2_TR(0x63b0f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b0f8:{NFSU2_TR(0x63b0f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b0fdull));
TAIL_STATIC(0x580e90u,580);
}
B63b0fd:L63b0fd:{c.instructions+=6;NFSU2_TR(0x63b0fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b100:{NFSU2_TR(0x63b100);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63b107:{NFSU2_TR(0x63b107);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b10a:{NFSU2_TR(0x63b10a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b10c:{NFSU2_TR(0x63b10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63b113:{NFSU2_TR(0x63b113);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b118ull));
TAIL_STATIC(0x438140u,438);
}
B63b118:L63b118:{c.instructions+=1;NFSU2_TR(0x63b118);
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
B63b11b:L63b11b:{c.instructions+=3;NFSU2_TR(0x63b11b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b11c:{NFSU2_TR(0x63b11c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63b11d:{NFSU2_TR(0x63b11d);
TAIL_STATIC(0x638070u,638);
}
B63b130:L63b130:{c.instructions+=9;NFSU2_TR(0x63b130);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b131:{NFSU2_TR(0x63b131);
__builtin_memmove((R+24),(R+4),4);
}
B63b133:{NFSU2_TR(0x63b133);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b136:{NFSU2_TR(0x63b136);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63b139:{NFSU2_TR(0x63b139);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b13a:{NFSU2_TR(0x63b13a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63b13e:{NFSU2_TR(0x63b13e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B63b140:{NFSU2_TR(0x63b140);
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
B63b142:{NFSU2_TR(0x63b142);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63b15b;}}
}
B63b144:L63b144:{c.instructions+=3;NFSU2_TR(0x63b144);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b146:{NFSU2_TR(0x63b146);
__builtin_memmove((R+4),(R+24),4);
}
B63b148:{NFSU2_TR(0x63b148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b14dull));
TAIL_STATIC(0x63a1b0u,63a);
}
B63b14d:L63b14d:{c.instructions+=2;NFSU2_TR(0x63b14d);
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
B63b14f:{NFSU2_TR(0x63b14f);
if(r1(R+518)){{goto L63b15b;}}
}
B63b151:L63b151:{c.instructions+=4;NFSU2_TR(0x63b151);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b154:{NFSU2_TR(0x63b154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B63b157:{NFSU2_TR(0x63b157);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B63b159:{NFSU2_TR(0x63b159);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b144u);}goto L63b144;}}
}
B63b15b:L63b15b:{c.instructions+=3;NFSU2_TR(0x63b15b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63b15c:{NFSU2_TR(0x63b15c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b15d:{NFSU2_TR(0x63b15d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63b160:L63b160:{c.instructions+=7;NFSU2_TR(0x63b160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x11cull))));
}
B63b166:{NFSU2_TR(0x63b166);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b167:{NFSU2_TR(0x63b167);
__builtin_memmove((R+28),(R+4),4);
}
B63b169:{NFSU2_TR(0x63b169);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b16c:{NFSU2_TR(0x63b16c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b16e:{NFSU2_TR(0x63b16e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b172:{NFSU2_TR(0x63b172);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b17b;}}
}
B63b174:L63b174:{c.instructions+=2;NFSU2_TR(0x63b174);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b176:{NFSU2_TR(0x63b176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b17bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b130u);}goto L63b130;}
}
B63b17b:L63b17b:{c.instructions+=2;NFSU2_TR(0x63b17b);
__builtin_memmove((R+4),(R+28),4);
}
B63b17d:{NFSU2_TR(0x63b17d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b182ull));
TAIL_STATIC(0x63a920u,63a);
}
B63b182:L63b182:{c.instructions+=2;NFSU2_TR(0x63b182);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b184:{NFSU2_TR(0x63b184);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b462;}}
}
B63b18a:L63b18a:{c.instructions+=2;NFSU2_TR(0x63b18a);
__builtin_memmove((R+4),(R+28),4);
}
B63b18c:{NFSU2_TR(0x63b18c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b191ull));
TAIL_STATIC(0x63aa20u,63a);
}
B63b191:L63b191:{c.instructions+=2;NFSU2_TR(0x63b191);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b193:{NFSU2_TR(0x63b193);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b462;}}
}
B63b199:L63b199:{c.instructions+=8;NFSU2_TR(0x63b199);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b19a:{NFSU2_TR(0x63b19a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b19b:{NFSU2_TR(0x63b19b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b19c:{NFSU2_TR(0x63b19c);
w4(R+12,u32(0x1ull));
}
B63b1a1:{NFSU2_TR(0x63b1a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b1a2:{NFSU2_TR(0x63b1a2);
u8 U[4];
w4(U+0,u32(0x7a0054ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b1a7:{NFSU2_TR(0x63b1a7);
__builtin_memmove((R+4),(R+28),4);
}
B63b1a9:{NFSU2_TR(0x63b1a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b1aeull));
TAIL_STATIC(0x63ab70u,63a);
}
B63b1ae:L63b1ae:{c.instructions+=2;NFSU2_TR(0x63b1ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b1b0:{NFSU2_TR(0x63b1b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b45f;}}
}
B63b1b6:L63b1b6:{c.instructions+=4;NFSU2_TR(0x63b1b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B63b1b9:{NFSU2_TR(0x63b1b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63b1bc:{NFSU2_TR(0x63b1bc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b1be:{NFSU2_TR(0x63b1be);
if(r1(R+518)){{goto L63b438;}}
}
B63b1c4:L63b1c4:{c.instructions+=3;NFSU2_TR(0x63b1c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b1c7:{NFSU2_TR(0x63b1c7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b1c9:{NFSU2_TR(0x63b1c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63b42a;}}
}
B63b1cf:L63b1cf:{c.instructions+=4;NFSU2_TR(0x63b1cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b1d2:{NFSU2_TR(0x63b1d2);
w4(R+8,u32(0x2ull));
}
B63b1d7:{NFSU2_TR(0x63b1d7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b1d9:{NFSU2_TR(0x63b1d9);
if(r1(R+518)){{goto L63b42a;}}
}
B63b1df:L63b1df:{c.instructions+=4;NFSU2_TR(0x63b1df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b1e2:{NFSU2_TR(0x63b1e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b1e4:{NFSU2_TR(0x63b1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b1e7:{NFSU2_TR(0x63b1e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b1ec;}}
}
B63b1e9:L63b1e9:{c.instructions+=1;NFSU2_TR(0x63b1e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b1ec:L63b1ec:{c.instructions+=4;NFSU2_TR(0x63b1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x954ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b1f2:{NFSU2_TR(0x63b1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b1f5:{NFSU2_TR(0x63b1f5);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B63b1f9:{NFSU2_TR(0x63b1f9);
if(r1(R+518)){{goto L63b46a;}}
}
B63b1ff:L63b1ff:{c.instructions+=3;NFSU2_TR(0x63b1ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B63b202:{NFSU2_TR(0x63b202);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b204:{NFSU2_TR(0x63b204);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b216;}}
}
B63b206:L63b206:{c.instructions+=3;NFSU2_TR(0x63b206);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b207:{NFSU2_TR(0x63b207);
__builtin_memmove((R+4),(R+28),4);
}
B63b209:{NFSU2_TR(0x63b209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b20eull));
TAIL_STATIC(0x63a880u,63a);
}
B63b20e:L63b20e:{c.instructions+=2;NFSU2_TR(0x63b20e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b210:{NFSU2_TR(0x63b210);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b45f;}}
}
B63b216:L63b216:{c.instructions+=4;NFSU2_TR(0x63b216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63b21c:{NFSU2_TR(0x63b21c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63b222:{NFSU2_TR(0x63b222);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b224:{NFSU2_TR(0x63b224);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b255;}}
}
B63b226:L63b226:{c.instructions+=4;NFSU2_TR(0x63b226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b22c:{NFSU2_TR(0x63b22c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B63b22f:{NFSU2_TR(0x63b22f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b231:{NFSU2_TR(0x63b231);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b244;}}
}
B63b233:L63b233:{c.instructions+=4;NFSU2_TR(0x63b233);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b234:{NFSU2_TR(0x63b234);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b235:{NFSU2_TR(0x63b235);
__builtin_memmove((R+4),(R+28),4);
}
B63b237:{NFSU2_TR(0x63b237);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b23cull));
TAIL_STATIC(0x63a820u,63a);
}
B63b23c:L63b23c:{c.instructions+=2;NFSU2_TR(0x63b23c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b23e:{NFSU2_TR(0x63b23e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b45f;}}
}
B63b244:L63b244:{c.instructions+=4;NFSU2_TR(0x63b244);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b245:{NFSU2_TR(0x63b245);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b246:{NFSU2_TR(0x63b246);
__builtin_memmove((R+4),(R+28),4);
}
B63b248:{NFSU2_TR(0x63b248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b24dull));
TAIL_STATIC(0x63ace0u,63a);
}
B63b24d:L63b24d:{c.instructions+=2;NFSU2_TR(0x63b24d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b24f:{NFSU2_TR(0x63b24f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b45f;}}
}
B63b255:L63b255:{c.instructions+=3;NFSU2_TR(0x63b255);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x309ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63b25b:{NFSU2_TR(0x63b25b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b25d:{NFSU2_TR(0x63b25d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b286;}}
}
B63b25f:L63b25f:{c.instructions+=3;NFSU2_TR(0x63b25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b265:{NFSU2_TR(0x63b265);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b267:{NFSU2_TR(0x63b267);
if(r1(R+518)){{goto L63b274;}}
}
B63b269:L63b269:{c.instructions+=3;NFSU2_TR(0x63b269);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B63b26c:{NFSU2_TR(0x63b26c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b26e:{NFSU2_TR(0x63b26e);
if(r1(R+518)){{goto L63b4a1;}}
}
B63b274:L63b274:{c.instructions+=4;NFSU2_TR(0x63b274);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b276:{NFSU2_TR(0x63b276);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b277:{NFSU2_TR(0x63b277);
__builtin_memmove((R+4),(R+28),4);
}
B63b279:{NFSU2_TR(0x63b279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b27eull));
TAIL_STATIC(0x63ace0u,63a);
}
B63b27e:L63b27e:{c.instructions+=2;NFSU2_TR(0x63b27e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b280:{NFSU2_TR(0x63b280);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b45f;}}
}
B63b286:L63b286:{c.instructions+=3;NFSU2_TR(0x63b286);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63b28c:{NFSU2_TR(0x63b28c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b28e:{NFSU2_TR(0x63b28e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b298;}}
}
B63b290:L63b290:{c.instructions+=3;NFSU2_TR(0x63b290);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b291:{NFSU2_TR(0x63b291);
__builtin_memmove((R+4),(R+28),4);
}
B63b293:{NFSU2_TR(0x63b293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b298ull));
TAIL_STATIC(0x633c10u,633);
}
B63b298:L63b298:{c.instructions+=4;NFSU2_TR(0x63b298);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b29b:{NFSU2_TR(0x63b29b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B63b29d:{NFSU2_TR(0x63b29d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b29f:{NFSU2_TR(0x63b29f);
if(r1(R+518)){{goto L63b336;}}
}
B63b2a5:L63b2a5:{c.instructions+=2;NFSU2_TR(0x63b2a5);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x309ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B63b2ac:{NFSU2_TR(0x63b2ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b336;}}
}
B63b2b2:L63b2b2:{c.instructions+=3;NFSU2_TR(0x63b2b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63b2b8:{NFSU2_TR(0x63b2b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b2ba:{NFSU2_TR(0x63b2ba);
if(r1(R+518)){{goto L63b336;}}
}
B63b2bc:L63b2bc:{c.instructions+=3;NFSU2_TR(0x63b2bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b2c2:{NFSU2_TR(0x63b2c2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b2c4:{NFSU2_TR(0x63b2c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63b2e0;}}
}
B63b2c6:L63b2c6:{c.instructions+=3;NFSU2_TR(0x63b2c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63b2cc:{NFSU2_TR(0x63b2cc);
__builtin_memmove((R+8),(R+0),4);
}
B63b2ce:{NFSU2_TR(0x63b2ce);
__builtin_memmove((R+28),(R+28),4);
}
B63b2d0:L63b2d0:{c.instructions+=3;NFSU2_TR(0x63b2d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63b2d2:{NFSU2_TR(0x63b2d2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b2d4:{NFSU2_TR(0x63b2d4);
if(r1(R+518)){{goto L63b2da;}}
}
B63b2d6:L63b2d6:{c.instructions+=1;NFSU2_TR(0x63b2d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B63b2da:L63b2da:{c.instructions+=3;NFSU2_TR(0x63b2da);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B63b2dd:{NFSU2_TR(0x63b2dd);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B63b2de:{NFSU2_TR(0x63b2de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b2d0u);}goto L63b2d0;}}
}
B63b2e0:L63b2e0:{c.instructions+=9;NFSU2_TR(0x63b2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b2e6:{NFSU2_TR(0x63b2e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b2e7:{NFSU2_TR(0x63b2e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63b2ed:{NFSU2_TR(0x63b2ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b2ee:{NFSU2_TR(0x63b2ee);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b2f0:{NFSU2_TR(0x63b2f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63b2f4:{NFSU2_TR(0x63b2f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b2f5:{NFSU2_TR(0x63b2f5);
__builtin_memmove((R+4),(R+28),4);
}
B63b2f7:{NFSU2_TR(0x63b2f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b2fcull));
TAIL_STATIC(0x637c10u,637);
}
B63b2fc:L63b2fc:{c.instructions+=3;NFSU2_TR(0x63b2fc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b2fe:{NFSU2_TR(0x63b2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b304:{NFSU2_TR(0x63b304);
if(r1(R+518)){{goto L63b314;}}
}
B63b306:L63b306:{c.instructions+=4;NFSU2_TR(0x63b306);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b307:{NFSU2_TR(0x63b307);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63b30b:{NFSU2_TR(0x63b30b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b30c:{NFSU2_TR(0x63b30c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b311ull));
TAIL_STATIC(0x490150u,490);
}
B63b311:L63b311:{c.instructions+=1;NFSU2_TR(0x63b311);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63b314:L63b314:{c.instructions+=3;NFSU2_TR(0x63b314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b31a:{NFSU2_TR(0x63b31a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b31c:{NFSU2_TR(0x63b31c);
if(r1(R+518)){{goto L63b336;}}
}
B63b31e:L63b31e:{c.instructions+=5;NFSU2_TR(0x63b31e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B63b322:{NFSU2_TR(0x63b322);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b328:{NFSU2_TR(0x63b328);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b329:{NFSU2_TR(0x63b329);
__builtin_memmove((R+4),(R+28),4);
}
B63b32b:{NFSU2_TR(0x63b32b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b330ull));
TAIL_STATIC(0x637b50u,637);
}
B63b330:L63b330:{c.instructions+=1;NFSU2_TR(0x63b330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b336:L63b336:{c.instructions+=8;NFSU2_TR(0x63b336);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63b33c:{NFSU2_TR(0x63b33c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b342:{NFSU2_TR(0x63b342);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B63b347:{NFSU2_TR(0x63b347);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b34a:{NFSU2_TR(0x63b34a);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63b34f:{NFSU2_TR(0x63b34f);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B63b351:{NFSU2_TR(0x63b351);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b354:{NFSU2_TR(0x63b354);
if(r1(R+518)){{goto L63b3e3;}}
}
B63b35a:L63b35a:{c.instructions+=3;NFSU2_TR(0x63b35a);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B63b35d:{NFSU2_TR(0x63b35d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63b35f:{NFSU2_TR(0x63b35f);
}
B63b360:L63b360:{c.instructions+=2;NFSU2_TR(0x63b360);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e814),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63b366:{NFSU2_TR(0x63b366);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63b390;}}
}
B63b368:L63b368:{c.instructions+=3;NFSU2_TR(0x63b368);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b369:{NFSU2_TR(0x63b369);
w4(R+4,u32(0x89e7a0ull));
}
B63b36e:{NFSU2_TR(0x63b36e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b373ull));
TAIL_STATIC(0x5ed900u,5ed);
}
B63b373:L63b373:{c.instructions+=3;NFSU2_TR(0x63b373);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b376:{NFSU2_TR(0x63b376);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63b379:{NFSU2_TR(0x63b379);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b385;}}
}
B63b37b:L63b37b:{c.instructions+=2;NFSU2_TR(0x63b37b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63b37f:{NFSU2_TR(0x63b37f);
if(r1(R+518)){{goto L63b385;}}
}
B63b381:L63b381:{c.instructions+=2;NFSU2_TR(0x63b381);
w1(R+12,u8(0x1ull));
}
B63b383:{NFSU2_TR(0x63b383);
{goto L63b387;}
}
B63b385:L63b385:{c.instructions+=1;NFSU2_TR(0x63b385);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B63b387:L63b387:{c.instructions+=4;NFSU2_TR(0x63b387);
__builtin_memmove((R+28),(R+24),4);
}
B63b389:{NFSU2_TR(0x63b389);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B63b38a:{NFSU2_TR(0x63b38a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b38c:{NFSU2_TR(0x63b38c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b360u);}goto L63b360;}}
}
B63b38e:L63b38e:{c.instructions+=1;NFSU2_TR(0x63b38e);
{goto L63b394;}
}
B63b390:L63b390:{c.instructions+=2;NFSU2_TR(0x63b390);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b392:{NFSU2_TR(0x63b392);
if(r1(R+518)){{goto L63b3cc;}}
}
B63b394:L63b394:{c.instructions+=3;NFSU2_TR(0x63b394);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63b396:{NFSU2_TR(0x63b396);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b398:{NFSU2_TR(0x63b398);
if(r1(R+518)){{goto L63b3cc;}}
}
B63b39a:L63b39a:{c.instructions+=1;NFSU2_TR(0x63b39a);
__builtin_memmove((R+12),(R+12),4);
}
B63b3a0:L63b3a0:{c.instructions+=2;NFSU2_TR(0x63b3a0);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e814),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63b3a6:{NFSU2_TR(0x63b3a6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63b3cc;}}
}
B63b3a8:L63b3a8:{c.instructions+=2;NFSU2_TR(0x63b3a8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b3aa:{NFSU2_TR(0x63b3aa);
if(r1(R+518)){{goto L63b3c7;}}
}
B63b3ac:L63b3ac:{c.instructions+=3;NFSU2_TR(0x63b3ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b3ad:{NFSU2_TR(0x63b3ad);
w4(R+4,u32(0x89e7a0ull));
}
B63b3b2:{NFSU2_TR(0x63b3b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b3b7ull));
TAIL_STATIC(0x5ed900u,5ed);
}
B63b3b7:L63b3b7:{c.instructions+=3;NFSU2_TR(0x63b3b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63b3ba:{NFSU2_TR(0x63b3ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63b3bd:{NFSU2_TR(0x63b3bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b3c7;}}
}
B63b3bf:L63b3bf:{c.instructions+=2;NFSU2_TR(0x63b3bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63b3c3:{NFSU2_TR(0x63b3c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b3c7;}}
}
B63b3c5:L63b3c5:{c.instructions+=1;NFSU2_TR(0x63b3c5);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B63b3c7:L63b3c7:{c.instructions+=3;NFSU2_TR(0x63b3c7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B63b3c8:{NFSU2_TR(0x63b3c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b3ca:{NFSU2_TR(0x63b3ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b3a0u);}goto L63b3a0;}}
}
B63b3cc:L63b3cc:{c.instructions+=3;NFSU2_TR(0x63b3cc);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B63b3d1:{NFSU2_TR(0x63b3d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b3d4:{NFSU2_TR(0x63b3d4);
if(r1(R+518)){{goto L63b3db;}}
}
B63b3d6:L63b3d6:{c.instructions+=2;NFSU2_TR(0x63b3d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b3d9:{NFSU2_TR(0x63b3d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b41a;}}
}
B63b3db:L63b3db:{c.instructions+=2;NFSU2_TR(0x63b3db);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b3dd:{NFSU2_TR(0x63b3dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b41a;}}
}
B63b3df:L63b3df:{c.instructions+=1;NFSU2_TR(0x63b3df);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63b3e3:L63b3e3:{c.instructions+=3;NFSU2_TR(0x63b3e3);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63b3e7:{NFSU2_TR(0x63b3e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63b3e9:{NFSU2_TR(0x63b3e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b41e;}}
}
B63b3eb:L63b3eb:{c.instructions+=5;NFSU2_TR(0x63b3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b3ee:{NFSU2_TR(0x63b3ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b3f4:{NFSU2_TR(0x63b3f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63b3f7:{NFSU2_TR(0x63b3f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63b3fd:{NFSU2_TR(0x63b3fd);
if(r1(R+518)){{goto L63b41e;}}
}
B63b3ff:L63b3ff:{c.instructions+=5;NFSU2_TR(0x63b3ff);
__builtin_memmove((R+0),(R+4),4);
}
B63b401:{NFSU2_TR(0x63b401);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b407:{NFSU2_TR(0x63b407);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b408:{NFSU2_TR(0x63b408);
__builtin_memmove((R+4),(R+28),4);
}
B63b40a:{NFSU2_TR(0x63b40a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b40full));
TAIL_STATIC(0x61c600u,61c);
}
B63b40f:L63b40f:{c.instructions+=6;NFSU2_TR(0x63b40f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b410:{NFSU2_TR(0x63b410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63b411:{NFSU2_TR(0x63b411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63b412:{NFSU2_TR(0x63b412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63b413:{NFSU2_TR(0x63b413);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x11cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x11cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x11cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63b419:{NFSU2_TR(0x63b419);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63b41a:L63b41a:{c.instructions+=1;NFSU2_TR(0x63b41a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63b41e:L63b41e:{c.instructions+=2;NFSU2_TR(0x63b41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63b425:{NFSU2_TR(0x63b425);
w4(R+12,u32(0x1ull));
}
B63b42a:L63b42a:{c.instructions+=4;NFSU2_TR(0x63b42a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B63b42d:{NFSU2_TR(0x63b42d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63b430:{NFSU2_TR(0x63b430);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b432:{NFSU2_TR(0x63b432);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b1c4u);}goto L63b1c4;}}
}
B63b438:L63b438:{c.instructions+=2;NFSU2_TR(0x63b438);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63b43b:{NFSU2_TR(0x63b43b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63b446;}}
}
B63b43d:L63b43d:{c.instructions+=3;NFSU2_TR(0x63b43d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b43f:{NFSU2_TR(0x63b43f);
__builtin_memmove((R+4),(R+28),4);
}
B63b441:{NFSU2_TR(0x63b441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b446ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b130u);}goto L63b130;}
}
B63b446:L63b446:{c.instructions+=3;NFSU2_TR(0x63b446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63b448:{NFSU2_TR(0x63b448);
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
B63b44a:{NFSU2_TR(0x63b44a);
if(r1(R+518)){{goto L63b45f;}}
}
B63b44c:L63b44c:{c.instructions+=5;NFSU2_TR(0x63b44c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63b44f:{NFSU2_TR(0x63b44f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b450:{NFSU2_TR(0x63b450);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b451:{NFSU2_TR(0x63b451);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B63b457:{NFSU2_TR(0x63b457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b45cull));
TAIL_STATIC(0x571070u,571);
}
B63b45c:L63b45c:{c.instructions+=1;NFSU2_TR(0x63b45c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63b45f:L63b45f:{c.instructions+=3;NFSU2_TR(0x63b45f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b460:{NFSU2_TR(0x63b460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63b461:{NFSU2_TR(0x63b461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63b462:L63b462:{c.instructions+=3;NFSU2_TR(0x63b462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63b463:{NFSU2_TR(0x63b463);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x11cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x11cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x11cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63b469:{NFSU2_TR(0x63b469);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63b46a:L63b46a:{c.instructions+=12;NFSU2_TR(0x63b46a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x954ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b470:{NFSU2_TR(0x63b470);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b473:{NFSU2_TR(0x63b473);
__builtin_memmove((R+24),gp(0x8a1ccc),4);
}
B63b479:{NFSU2_TR(0x63b479);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B63b47f:{NFSU2_TR(0x63b47f);
u8 U[16];
w4(U+0,u32(u32(u32(0x844ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B63b486:{NFSU2_TR(0x63b486);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B63b488:{NFSU2_TR(0x63b488);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b48a:{NFSU2_TR(0x63b48a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B63b48d:{NFSU2_TR(0x63b48d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b48e:{NFSU2_TR(0x63b48e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b48f:{NFSU2_TR(0x63b48f);
__builtin_memmove((R+4),(R+28),4);
}
B63b491:{NFSU2_TR(0x63b491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b496ull));
TAIL_STATIC(0x63a750u,63a);
}
B63b496:L63b496:{c.instructions+=6;NFSU2_TR(0x63b496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b497:{NFSU2_TR(0x63b497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63b498:{NFSU2_TR(0x63b498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63b499:{NFSU2_TR(0x63b499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63b49a:{NFSU2_TR(0x63b49a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x11cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x11cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x11cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63b4a0:{NFSU2_TR(0x63b4a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63b4a1:L63b4a1:{c.instructions+=9;NFSU2_TR(0x63b4a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63b4a4:{NFSU2_TR(0x63b4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63b4aa:{NFSU2_TR(0x63b4aa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63b4ac:{NFSU2_TR(0x63b4ac);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b4af:{NFSU2_TR(0x63b4af);
__builtin_memmove((R+4),(R+518),1);
}
B63b4b2:{NFSU2_TR(0x63b4b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b4b3:{NFSU2_TR(0x63b4b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b4b4:{NFSU2_TR(0x63b4b4);
__builtin_memmove((R+4),(R+28),4);
}
B63b4b6:{NFSU2_TR(0x63b4b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b4bbull));
TAIL_STATIC(0x63a820u,63a);
}
B63b4bb:L63b4bb:{c.instructions+=6;NFSU2_TR(0x63b4bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b4bc:{NFSU2_TR(0x63b4bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63b4bd:{NFSU2_TR(0x63b4bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63b4be:{NFSU2_TR(0x63b4be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63b4bf:{NFSU2_TR(0x63b4bf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x11cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x11cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x11cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63b4c5:{NFSU2_TR(0x63b4c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63b4d0:L63b4d0:{c.instructions+=6;NFSU2_TR(0x63b4d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b4d1:{NFSU2_TR(0x63b4d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b4d2:{NFSU2_TR(0x63b4d2);
__builtin_memmove((R+28),(R+4),4);
}
B63b4d4:{NFSU2_TR(0x63b4d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63b4d6:{NFSU2_TR(0x63b4d6);
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
B63b4d8:{NFSU2_TR(0x63b4d8);
if(r1(R+518)){{goto L63b500;}}
}
B63b4da:L63b4da:{c.instructions+=1;NFSU2_TR(0x63b4da);
__builtin_memmove((R+12),(R+12),4);
}
B63b4e0:L63b4e0:{c.instructions+=6;NFSU2_TR(0x63b4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b4e3:{NFSU2_TR(0x63b4e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63b4e5:{NFSU2_TR(0x63b4e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63b4e7:{NFSU2_TR(0x63b4e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b4ea:{NFSU2_TR(0x63b4ea);
__builtin_memmove((R+4),(R+24),4);
}
B63b4ec:{NFSU2_TR(0x63b4ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b4f1ull));
TAIL_STATIC(0x63a550u,63a);
}
B63b4f1:L63b4f1:{c.instructions+=2;NFSU2_TR(0x63b4f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b4f2:{NFSU2_TR(0x63b4f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b4f7ull));
TAIL_STATIC(0x575630u,575);
}
B63b4f7:L63b4f7:{c.instructions+=4;NFSU2_TR(0x63b4f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63b4f9:{NFSU2_TR(0x63b4f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63b4fc:{NFSU2_TR(0x63b4fc);
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
B63b4fe:{NFSU2_TR(0x63b4fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b4e0u);}goto L63b4e0;}}
}
B63b500:L63b500:{c.instructions+=3;NFSU2_TR(0x63b500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63b501:{NFSU2_TR(0x63b501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b502:{NFSU2_TR(0x63b502);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63b510:L63b510:{c.instructions+=6;NFSU2_TR(0x63b510);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b511:{NFSU2_TR(0x63b511);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b512:{NFSU2_TR(0x63b512);
__builtin_memmove((R+28),(R+4),4);
}
B63b514:{NFSU2_TR(0x63b514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63b516:{NFSU2_TR(0x63b516);
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
B63b518:{NFSU2_TR(0x63b518);
if(r1(R+518)){{goto L63b540;}}
}
B63b51a:L63b51a:{c.instructions+=1;NFSU2_TR(0x63b51a);
__builtin_memmove((R+12),(R+12),4);
}
B63b520:L63b520:{c.instructions+=6;NFSU2_TR(0x63b520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b523:{NFSU2_TR(0x63b523);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63b525:{NFSU2_TR(0x63b525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63b527:{NFSU2_TR(0x63b527);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b52a:{NFSU2_TR(0x63b52a);
__builtin_memmove((R+4),(R+24),4);
}
B63b52c:{NFSU2_TR(0x63b52c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b531ull));
TAIL_STATIC(0x6380e0u,638);
}
B63b531:L63b531:{c.instructions+=2;NFSU2_TR(0x63b531);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b532:{NFSU2_TR(0x63b532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b537ull));
TAIL_STATIC(0x575630u,575);
}
B63b537:L63b537:{c.instructions+=4;NFSU2_TR(0x63b537);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63b539:{NFSU2_TR(0x63b539);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63b53c:{NFSU2_TR(0x63b53c);
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
B63b53e:{NFSU2_TR(0x63b53e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b520u);}goto L63b520;}}
}
B63b540:L63b540:{c.instructions+=3;NFSU2_TR(0x63b540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63b541:{NFSU2_TR(0x63b541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b542:{NFSU2_TR(0x63b542);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63b550:L63b550:{c.instructions+=6;NFSU2_TR(0x63b550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b551:{NFSU2_TR(0x63b551);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b552:{NFSU2_TR(0x63b552);
__builtin_memmove((R+28),(R+4),4);
}
B63b554:{NFSU2_TR(0x63b554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63b556:{NFSU2_TR(0x63b556);
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
B63b558:{NFSU2_TR(0x63b558);
if(r1(R+518)){{goto L63b580;}}
}
B63b55a:L63b55a:{c.instructions+=1;NFSU2_TR(0x63b55a);
__builtin_memmove((R+12),(R+12),4);
}
B63b560:L63b560:{c.instructions+=6;NFSU2_TR(0x63b560);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b563:{NFSU2_TR(0x63b563);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63b565:{NFSU2_TR(0x63b565);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63b567:{NFSU2_TR(0x63b567);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b56a:{NFSU2_TR(0x63b56a);
__builtin_memmove((R+4),(R+24),4);
}
B63b56c:{NFSU2_TR(0x63b56c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b571ull));
TAIL_STATIC(0x63a320u,63a);
}
B63b571:L63b571:{c.instructions+=2;NFSU2_TR(0x63b571);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b572:{NFSU2_TR(0x63b572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b577ull));
TAIL_STATIC(0x575630u,575);
}
B63b577:L63b577:{c.instructions+=4;NFSU2_TR(0x63b577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63b579:{NFSU2_TR(0x63b579);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63b57c:{NFSU2_TR(0x63b57c);
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
B63b57e:{NFSU2_TR(0x63b57e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b560u);}goto L63b560;}}
}
B63b580:L63b580:{c.instructions+=3;NFSU2_TR(0x63b580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63b581:{NFSU2_TR(0x63b581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b582:{NFSU2_TR(0x63b582);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63b590:L63b590:{c.instructions+=16;NFSU2_TR(0x63b590);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b596:{NFSU2_TR(0x63b596);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b598:{NFSU2_TR(0x63b598);
u8 U[4];
w4(U+0,u32(0x77a57bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b59d:{NFSU2_TR(0x63b59d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b59e:{NFSU2_TR(0x63b59e);
__builtin_memmove((R+0),(R+4),4);
}
B63b5a0:{NFSU2_TR(0x63b5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b5a7:{NFSU2_TR(0x63b5a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63b5aa:{NFSU2_TR(0x63b5aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63b5ac:{NFSU2_TR(0x63b5ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b5af:{NFSU2_TR(0x63b5af);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B63b5b1:{NFSU2_TR(0x63b5b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b5b4:{NFSU2_TR(0x63b5b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b5b7:{NFSU2_TR(0x63b5b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b5ba:{NFSU2_TR(0x63b5ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b5bd:{NFSU2_TR(0x63b5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b5c0:{NFSU2_TR(0x63b5c0);
w4(R+4,u32(0x1ull));
}
B63b5c5:L63b5c5:{c.instructions+=2;NFSU2_TR(0x63b5c5);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B63b5cc:{NFSU2_TR(0x63b5cc);
if(r1(R+518)){{goto L63b5d7;}}
}
B63b5ce:L63b5ce:{c.instructions+=3;NFSU2_TR(0x63b5ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B63b5cf:{NFSU2_TR(0x63b5cf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63b5d5:{NFSU2_TR(0x63b5d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b5c5u);}goto L63b5c5;}}
}
B63b5d7:L63b5d7:{c.instructions+=12;NFSU2_TR(0x63b5d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b5da:{NFSU2_TR(0x63b5da);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63b5e1:{NFSU2_TR(0x63b5e1);
__builtin_memmove((R+4),gp(0x8a2ca8),4);
}
B63b5e7:{NFSU2_TR(0x63b5e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63b5e9:{NFSU2_TR(0x63b5e9);
__builtin_memmove(gp(0x8a2ca8),(R+0),4);
}
B63b5ee:{NFSU2_TR(0x63b5ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b5f1:{NFSU2_TR(0x63b5f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63b5f5:{NFSU2_TR(0x63b5f5);
u8 U[4];
w4(U+0,u32(0x8a2ca4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B63b5fb:{NFSU2_TR(0x63b5fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b5fe:{NFSU2_TR(0x63b5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b605:{NFSU2_TR(0x63b605);
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
B63b608:{NFSU2_TR(0x63b608);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63b610:L63b610:{c.instructions+=27;NFSU2_TR(0x63b610);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b612:{NFSU2_TR(0x63b612);
u8 U[4];
w4(U+0,u32(0x77a59bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b617:{NFSU2_TR(0x63b617);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b61d:{NFSU2_TR(0x63b61d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b61e:{NFSU2_TR(0x63b61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b625:{NFSU2_TR(0x63b625);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b626:{NFSU2_TR(0x63b626);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b627:{NFSU2_TR(0x63b627);
__builtin_memmove((R+24),(R+4),4);
}
B63b629:{NFSU2_TR(0x63b629);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63b62c:{NFSU2_TR(0x63b62c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b630:{NFSU2_TR(0x63b630);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63b632:{NFSU2_TR(0x63b632);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b635:{NFSU2_TR(0x63b635);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b639:{NFSU2_TR(0x63b639);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b63c:{NFSU2_TR(0x63b63c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63b643:{NFSU2_TR(0x63b643);
__builtin_memmove((R+0),gp(0x8a2ca8),4);
}
B63b648:{NFSU2_TR(0x63b648);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63b64a:{NFSU2_TR(0x63b64a);
__builtin_memmove(gp(0x8a2ca8),(R+24),4);
}
B63b650:{NFSU2_TR(0x63b650);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63b652:{NFSU2_TR(0x63b652);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b655:{NFSU2_TR(0x63b655);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b659:{NFSU2_TR(0x63b659);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b65d:{NFSU2_TR(0x63b65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b660:{NFSU2_TR(0x63b660);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b661:{NFSU2_TR(0x63b661);
__builtin_memmove((R+4),(R+24),4);
}
B63b663:{NFSU2_TR(0x63b663);
u8 U[4];
w4(U+0,u32(0x8a2ca4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B63b669:{NFSU2_TR(0x63b669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b66eull));
TAIL_STATIC(0x60bd60u,60b);
}
B63b66e:L63b66e:{c.instructions+=6;NFSU2_TR(0x63b66e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b672:{NFSU2_TR(0x63b672);
__builtin_memmove((R+0),(R+24),4);
}
B63b674:{NFSU2_TR(0x63b674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b675:{NFSU2_TR(0x63b675);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b67c:{NFSU2_TR(0x63b67c);
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
B63b67f:{NFSU2_TR(0x63b67f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63b690:L63b690:{c.instructions+=16;NFSU2_TR(0x63b690);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b692:{NFSU2_TR(0x63b692);
u8 U[4];
w4(U+0,u32(0x77a5cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b697:{NFSU2_TR(0x63b697);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b69d:{NFSU2_TR(0x63b69d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b69e:{NFSU2_TR(0x63b69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b6a5:{NFSU2_TR(0x63b6a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B63b6a8:{NFSU2_TR(0x63b6a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b6a9:{NFSU2_TR(0x63b6a9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b6aa:{NFSU2_TR(0x63b6aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B63b6ae:{NFSU2_TR(0x63b6ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b6af:{NFSU2_TR(0x63b6af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b6b0:{NFSU2_TR(0x63b6b0);
u8 U[4];
w4(U+0,u32(0x7a8d90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b6b5:{NFSU2_TR(0x63b6b5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B63b6b7:{NFSU2_TR(0x63b6b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b6b8:{NFSU2_TR(0x63b6b8);
__builtin_memmove((R+4),(R+20),4);
}
B63b6ba:{NFSU2_TR(0x63b6ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b6bfull));
TAIL_STATIC(0x578ce0u,578);
}
B63b6bf:L63b6bf:{c.instructions+=3;NFSU2_TR(0x63b6bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b6c0:{NFSU2_TR(0x63b6c0);
w4(R+4,u32(0x8a2ca4ull));
}
B63b6c5:{NFSU2_TR(0x63b6c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b6caull));
TAIL_STATIC(0x43be80u,43b);
}
B63b6ca:L63b6ca:{c.instructions+=5;NFSU2_TR(0x63b6ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b6ce:{NFSU2_TR(0x63b6ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63b6d2:{NFSU2_TR(0x63b6d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b6d3:{NFSU2_TR(0x63b6d3);
__builtin_memmove((R+4),(R+20),4);
}
B63b6d5:{NFSU2_TR(0x63b6d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b6daull));
TAIL_STATIC(0x571710u,571);
}
B63b6da:L63b6da:{c.instructions+=2;NFSU2_TR(0x63b6da);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B63b6dd:{NFSU2_TR(0x63b6dd);
if(r1(R+518)){{goto L63b7f6;}}
}
B63b6e3:L63b6e3:{c.instructions+=3;NFSU2_TR(0x63b6e3);
__builtin_memmove((R+0),gp(0x8a2ca4),4);
}
B63b6e8:{NFSU2_TR(0x63b6e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8a2ca4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b6ed:{NFSU2_TR(0x63b6ed);
if(r1(R+518)){{goto L63b7a0;}}
}
B63b6f3:L63b6f3:{c.instructions+=3;NFSU2_TR(0x63b6f3);
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
B63b6f5:{NFSU2_TR(0x63b6f5);
__builtin_memmove((R+20),(R+0),4);
}
B63b6f7:{NFSU2_TR(0x63b6f7);
if(r1(R+518)){{goto L63b791;}}
}
B63b6fd:L63b6fd:{c.instructions+=11;NFSU2_TR(0x63b6fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63b6ff:{NFSU2_TR(0x63b6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b702:{NFSU2_TR(0x63b702);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63b704:{NFSU2_TR(0x63b704);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b707:{NFSU2_TR(0x63b707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b70a:{NFSU2_TR(0x63b70a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63b711:{NFSU2_TR(0x63b711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63b714:{NFSU2_TR(0x63b714);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63b717:{NFSU2_TR(0x63b717);
__builtin_memmove((R+4),(R+28),4);
}
B63b719:{NFSU2_TR(0x63b719);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B63b721:{NFSU2_TR(0x63b721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b726ull));
TAIL_STATIC(0x502fd0u,502);
}
B63b726:L63b726:{c.instructions+=2;NFSU2_TR(0x63b726);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b728:{NFSU2_TR(0x63b728);
if(r1(R+518)){{goto L63b748;}}
}
B63b72a:L63b72a:{c.instructions+=1;NFSU2_TR(0x63b72a);
__builtin_memmove((R+12),(R+12),4);
}
B63b730:L63b730:{c.instructions+=2;NFSU2_TR(0x63b730);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63b733:{NFSU2_TR(0x63b733);
if(r1(R+518)){{goto L63b73f;}}
}
B63b735:L63b735:{c.instructions+=4;NFSU2_TR(0x63b735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63b737:{NFSU2_TR(0x63b737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63b73a:{NFSU2_TR(0x63b73a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63b73c:{NFSU2_TR(0x63b73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b73f:L63b73f:{c.instructions+=4;NFSU2_TR(0x63b73f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b742:{NFSU2_TR(0x63b742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63b744:{NFSU2_TR(0x63b744);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b746:{NFSU2_TR(0x63b746);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b730u);}goto L63b730;}}
}
B63b748:L63b748:{c.instructions+=3;NFSU2_TR(0x63b748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63b74a:{NFSU2_TR(0x63b74a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b74c:{NFSU2_TR(0x63b74c);
if(r1(R+518)){{goto L63b783;}}
}
B63b74e:L63b74e:{c.instructions+=1;NFSU2_TR(0x63b74e);
__builtin_memmove((R+28),(R+28),4);
}
B63b750:L63b750:{c.instructions+=7;NFSU2_TR(0x63b750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63b752:{NFSU2_TR(0x63b752);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b755:{NFSU2_TR(0x63b755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63b757:{NFSU2_TR(0x63b757);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b75a:{NFSU2_TR(0x63b75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b75d:{NFSU2_TR(0x63b75d);
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
B63b75f:{NFSU2_TR(0x63b75f);
if(r1(R+518)){{goto L63b771;}}
}
B63b761:L63b761:{c.instructions+=2;NFSU2_TR(0x63b761);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63b764:{NFSU2_TR(0x63b764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b769ull));
TAIL_STATIC(0x502fd0u,502);
}
B63b769:L63b769:{c.instructions+=3;NFSU2_TR(0x63b769);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b76a:{NFSU2_TR(0x63b76a);
__builtin_memmove((R+4),(R+0),4);
}
B63b76c:{NFSU2_TR(0x63b76c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b771ull));
TAIL_STATIC(0x401630u,401);
}
B63b771:L63b771:{c.instructions+=3;NFSU2_TR(0x63b771);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b772:{NFSU2_TR(0x63b772);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b775:{NFSU2_TR(0x63b775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b77aull));
TAIL_STATIC(0x575630u,575);
}
B63b77a:L63b77a:{c.instructions+=4;NFSU2_TR(0x63b77a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63b77c:{NFSU2_TR(0x63b77c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63b77f:{NFSU2_TR(0x63b77f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b781:{NFSU2_TR(0x63b781);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b750u);}goto L63b750;}}
}
B63b783:L63b783:{c.instructions+=2;NFSU2_TR(0x63b783);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b784:{NFSU2_TR(0x63b784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b789ull));
TAIL_STATIC(0x575630u,575);
}
B63b789:L63b789:{c.instructions+=2;NFSU2_TR(0x63b789);
__builtin_memmove((R+0),gp(0x8a2ca4),4);
}
B63b78e:{NFSU2_TR(0x63b78e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63b791:L63b791:{c.instructions+=2;NFSU2_TR(0x63b791);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8a2ca4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63b796:{NFSU2_TR(0x63b796);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b6f3u);}goto L63b6f3;}}
}
B63b79c:L63b79c:{c.instructions+=1;NFSU2_TR(0x63b79c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B63b7a0:L63b7a0:{c.instructions+=3;NFSU2_TR(0x63b7a0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63b7a2:{NFSU2_TR(0x63b7a2);
u8 U[10];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+12)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B63b7a7:{NFSU2_TR(0x63b7a7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63b831;}}
}
B63b7ad:L63b7ad:{c.instructions+=1;NFSU2_TR(0x63b7ad);
w4(R+28,u32(0x1ull));
}
B63b7b2:L63b7b2:{c.instructions+=4;NFSU2_TR(0x63b7b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63b7b6:{NFSU2_TR(0x63b7b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b7b7:{NFSU2_TR(0x63b7b7);
__builtin_memmove((R+4),(R+20),4);
}
B63b7b9:{NFSU2_TR(0x63b7b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b7beull));
TAIL_STATIC(0x5716c0u,571);
}
B63b7be:L63b7be:{c.instructions+=2;NFSU2_TR(0x63b7be);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b7c0:{NFSU2_TR(0x63b7c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b7c5ull));
TAIL_STATIC(0x575620u,575);
}
B63b7c5:L63b7c5:{c.instructions+=5;NFSU2_TR(0x63b7c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63b7c8:{NFSU2_TR(0x63b7c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b7cc:{NFSU2_TR(0x63b7cc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b7ce:{NFSU2_TR(0x63b7ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b7d2:{NFSU2_TR(0x63b7d2);
if(r1(R+518)){{goto L63b7e2;}}
}
B63b7d4:L63b7d4:{c.instructions+=5;NFSU2_TR(0x63b7d4);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B63b7d9:{NFSU2_TR(0x63b7d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b7da:{NFSU2_TR(0x63b7da);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b7db:{NFSU2_TR(0x63b7db);
__builtin_memmove((R+4),(R+0),4);
}
B63b7dd:{NFSU2_TR(0x63b7dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b7e2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b610u);}goto L63b610;}
}
B63b7e2:L63b7e2:{c.instructions+=5;NFSU2_TR(0x63b7e2);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B63b7e7:{NFSU2_TR(0x63b7e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B63b7e8:{NFSU2_TR(0x63b7e8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63b7ea:{NFSU2_TR(0x63b7ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B63b7f2:{NFSU2_TR(0x63b7f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b7b2u);}goto L63b7b2;}}
}
B63b7f4:L63b7f4:{c.instructions+=1;NFSU2_TR(0x63b7f4);
{goto L63b831;}
}
B63b7f6:L63b7f6:{c.instructions+=3;NFSU2_TR(0x63b7f6);
__builtin_memmove((R+24),gp(0x8a2ca4),4);
}
B63b7fc:{NFSU2_TR(0x63b7fc);
w4(R+4,u32(0x8a2ca4ull));
}
B63b801:{NFSU2_TR(0x63b801);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b806ull));
TAIL_STATIC(0x502fd0u,502);
}
B63b806:L63b806:{c.instructions+=3;NFSU2_TR(0x63b806);
__builtin_memmove((R+28),(R+0),4);
}
B63b808:{NFSU2_TR(0x63b808);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b80a:{NFSU2_TR(0x63b80a);
if(r1(R+518)){{goto L63b831;}}
}
B63b80c:L63b80c:{c.instructions+=1;NFSU2_TR(0x63b80c);
__builtin_memmove((R+16),(R+16),4);
}
B63b810:L63b810:{c.instructions+=6;NFSU2_TR(0x63b810);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63b813:{NFSU2_TR(0x63b813);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63b817:{NFSU2_TR(0x63b817);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b818:{NFSU2_TR(0x63b818);
__builtin_memmove((R+4),(R+20),4);
}
B63b81a:{NFSU2_TR(0x63b81a);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63b81e:{NFSU2_TR(0x63b81e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b823ull));
TAIL_STATIC(0x5716c0u,571);
}
B63b823:L63b823:{c.instructions+=3;NFSU2_TR(0x63b823);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b824:{NFSU2_TR(0x63b824);
__builtin_memmove((R+4),(R+24),4);
}
B63b826:{NFSU2_TR(0x63b826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b82bull));
TAIL_STATIC(0x60bd60u,60b);
}
B63b82b:L63b82b:{c.instructions+=3;NFSU2_TR(0x63b82b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63b82d:{NFSU2_TR(0x63b82d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63b82f:{NFSU2_TR(0x63b82f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b810u);}goto L63b810;}}
}
B63b831:L63b831:{c.instructions+=2;NFSU2_TR(0x63b831);
__builtin_memmove((R+4),(R+20),4);
}
B63b833:{NFSU2_TR(0x63b833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b838ull));
TAIL_STATIC(0x578d90u,578);
}
B63b838:L63b838:{c.instructions+=8;NFSU2_TR(0x63b838);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b83c:{NFSU2_TR(0x63b83c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63b83d:{NFSU2_TR(0x63b83d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63b83e:{NFSU2_TR(0x63b83e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63b83f:{NFSU2_TR(0x63b83f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63b840:{NFSU2_TR(0x63b840);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b847:{NFSU2_TR(0x63b847);
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
B63b84a:{NFSU2_TR(0x63b84a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63b850:L63b850:{c.instructions+=12;NFSU2_TR(0x63b850);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b852:{NFSU2_TR(0x63b852);
u8 U[4];
w4(U+0,u32(0x77a5ebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b857:{NFSU2_TR(0x63b857);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b85d:{NFSU2_TR(0x63b85d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b85e:{NFSU2_TR(0x63b85e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b865:{NFSU2_TR(0x63b865);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b866:{NFSU2_TR(0x63b866);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b867:{NFSU2_TR(0x63b867);
__builtin_memmove((R+24),(R+4),4);
}
B63b869:{NFSU2_TR(0x63b869);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b86a:{NFSU2_TR(0x63b86a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63b86d:{NFSU2_TR(0x63b86d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b871:{NFSU2_TR(0x63b871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b876ull));
TAIL_STATIC(0x40c910u,40c);
}
B63b876:L63b876:{c.instructions+=7;NFSU2_TR(0x63b876);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63b87a:{NFSU2_TR(0x63b87a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B63b87c:{NFSU2_TR(0x63b87c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63b87d:{NFSU2_TR(0x63b87d);
__builtin_memmove((R+4),(R+24),4);
}
B63b87f:{NFSU2_TR(0x63b87f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b883:{NFSU2_TR(0x63b883);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b886:{NFSU2_TR(0x63b886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63b88bull));
TAIL_STATIC(0x63a650u,63a);
}
B63b88b:L63b88b:{c.instructions+=170;NFSU2_TR(0x63b88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
w4(U+4,u32(0x7f3e10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63b895:{NFSU2_TR(0x63b895);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63b899:{NFSU2_TR(0x63b899);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b89f:{NFSU2_TR(0x63b89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8a5:{NFSU2_TR(0x63b8a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8ab:{NFSU2_TR(0x63b8ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8b1:{NFSU2_TR(0x63b8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x924ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8b7:{NFSU2_TR(0x63b8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x928ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8bd:{NFSU2_TR(0x63b8bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x92cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8c3:{NFSU2_TR(0x63b8c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x930ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8c9:{NFSU2_TR(0x63b8c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x938ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8cf:{NFSU2_TR(0x63b8cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x93cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8d5:{NFSU2_TR(0x63b8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x940ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8db:{NFSU2_TR(0x63b8db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x944ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8e1:{NFSU2_TR(0x63b8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8e7:{NFSU2_TR(0x63b8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x950ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8ed:{NFSU2_TR(0x63b8ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x954ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8f3:{NFSU2_TR(0x63b8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x958ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b8f9:{NFSU2_TR(0x63b8f9);
w4(R+0,u32(0x3f800000ull));
}
B63b8fe:{NFSU2_TR(0x63b8fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b904:{NFSU2_TR(0x63b904);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x934ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b90a:{NFSU2_TR(0x63b90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x948ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b910:{NFSU2_TR(0x63b910);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b916:{NFSU2_TR(0x63b916);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x960ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b91c:{NFSU2_TR(0x63b91c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x964ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b922:{NFSU2_TR(0x63b922);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b928:{NFSU2_TR(0x63b928);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x96cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b92e:{NFSU2_TR(0x63b92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x970ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b934:{NFSU2_TR(0x63b934);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x974ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b93a:{NFSU2_TR(0x63b93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x978ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b940:{NFSU2_TR(0x63b940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x97cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b946:{NFSU2_TR(0x63b946);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x980ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b94c:{NFSU2_TR(0x63b94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x984ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b952:{NFSU2_TR(0x63b952);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x988ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b958:{NFSU2_TR(0x63b958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b95e:{NFSU2_TR(0x63b95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x990ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b964:{NFSU2_TR(0x63b964);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x994ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b96a:{NFSU2_TR(0x63b96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x998ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b970:{NFSU2_TR(0x63b970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x99cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b976:{NFSU2_TR(0x63b976);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b97c:{NFSU2_TR(0x63b97c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b982:{NFSU2_TR(0x63b982);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b988:{NFSU2_TR(0x63b988);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9acull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b98e:{NFSU2_TR(0x63b98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9b0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b994:{NFSU2_TR(0x63b994);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b99a:{NFSU2_TR(0x63b99a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9b8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9a0:{NFSU2_TR(0x63b9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9a6:{NFSU2_TR(0x63b9a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9c0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9ac:{NFSU2_TR(0x63b9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9c4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9b2:{NFSU2_TR(0x63b9b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9b8:{NFSU2_TR(0x63b9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9be:{NFSU2_TR(0x63b9be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9c4:{NFSU2_TR(0x63b9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9ca:{NFSU2_TR(0x63b9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9d0:{NFSU2_TR(0x63b9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9d6:{NFSU2_TR(0x63b9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9dc:{NFSU2_TR(0x63b9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9e4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9e2:{NFSU2_TR(0x63b9e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9e8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9e8:{NFSU2_TR(0x63b9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9ee:{NFSU2_TR(0x63b9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9f0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9f4:{NFSU2_TR(0x63b9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63b9fa:{NFSU2_TR(0x63b9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9f8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba00:{NFSU2_TR(0x63ba00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9fcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba06:{NFSU2_TR(0x63ba06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa00ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba0c:{NFSU2_TR(0x63ba0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa04ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba12:{NFSU2_TR(0x63ba12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa08ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba18:{NFSU2_TR(0x63ba18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba1e:{NFSU2_TR(0x63ba1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba24:{NFSU2_TR(0x63ba24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba2a:{NFSU2_TR(0x63ba2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba30:{NFSU2_TR(0x63ba30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba36:{NFSU2_TR(0x63ba36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba3c:{NFSU2_TR(0x63ba3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba42:{NFSU2_TR(0x63ba42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba48:{NFSU2_TR(0x63ba48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba4e:{NFSU2_TR(0x63ba4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba54:{NFSU2_TR(0x63ba54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba5a:{NFSU2_TR(0x63ba5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba60:{NFSU2_TR(0x63ba60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba66:{NFSU2_TR(0x63ba66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba6c:{NFSU2_TR(0x63ba6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba72:{NFSU2_TR(0x63ba72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba78:{NFSU2_TR(0x63ba78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba7e:{NFSU2_TR(0x63ba7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba84:{NFSU2_TR(0x63ba84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba8a:{NFSU2_TR(0x63ba8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba90:{NFSU2_TR(0x63ba90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba96:{NFSU2_TR(0x63ba96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ba9c:{NFSU2_TR(0x63ba9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63baa2:{NFSU2_TR(0x63baa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63baa8:{NFSU2_TR(0x63baa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63baae:{NFSU2_TR(0x63baae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bab4:{NFSU2_TR(0x63bab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63baba:{NFSU2_TR(0x63baba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bac0:{NFSU2_TR(0x63bac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bac6:{NFSU2_TR(0x63bac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bacc:{NFSU2_TR(0x63bacc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa84ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bad2:{NFSU2_TR(0x63bad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bad8:{NFSU2_TR(0x63bad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bade:{NFSU2_TR(0x63bade);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa90ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bae4:{NFSU2_TR(0x63bae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa94ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63baea:{NFSU2_TR(0x63baea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63baf0:{NFSU2_TR(0x63baf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63baf6:{NFSU2_TR(0x63baf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bafc:{NFSU2_TR(0x63bafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaa4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb02:{NFSU2_TR(0x63bb02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaa8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb08:{NFSU2_TR(0x63bb08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb0e:{NFSU2_TR(0x63bb0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xab0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb14:{NFSU2_TR(0x63bb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xab4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb1a:{NFSU2_TR(0x63bb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xab8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb20:{NFSU2_TR(0x63bb20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xabcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb26:{NFSU2_TR(0x63bb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xac0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb2c:{NFSU2_TR(0x63bb2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xac4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb32:{NFSU2_TR(0x63bb32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xac8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb38:{NFSU2_TR(0x63bb38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb3e:{NFSU2_TR(0x63bb3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xad0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb44:{NFSU2_TR(0x63bb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xad4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb4a:{NFSU2_TR(0x63bb4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xad8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb50:{NFSU2_TR(0x63bb50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb56:{NFSU2_TR(0x63bb56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xae0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb5c:{NFSU2_TR(0x63bb5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xae4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb62:{NFSU2_TR(0x63bb62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xae8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb68:{NFSU2_TR(0x63bb68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb6e:{NFSU2_TR(0x63bb6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaf0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb74:{NFSU2_TR(0x63bb74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaf4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb7a:{NFSU2_TR(0x63bb7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaf8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb80:{NFSU2_TR(0x63bb80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xafcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb86:{NFSU2_TR(0x63bb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb00ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb8c:{NFSU2_TR(0x63bb8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb04ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb92:{NFSU2_TR(0x63bb92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb08ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb98:{NFSU2_TR(0x63bb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bb9e:{NFSU2_TR(0x63bb9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bba4:{NFSU2_TR(0x63bba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbaa:{NFSU2_TR(0x63bbaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbb0:{NFSU2_TR(0x63bbb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbb6:{NFSU2_TR(0x63bbb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbbc:{NFSU2_TR(0x63bbbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbc2:{NFSU2_TR(0x63bbc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbc8:{NFSU2_TR(0x63bbc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbce:{NFSU2_TR(0x63bbce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbd4:{NFSU2_TR(0x63bbd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbda:{NFSU2_TR(0x63bbda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbe0:{NFSU2_TR(0x63bbe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbe6:{NFSU2_TR(0x63bbe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbec:{NFSU2_TR(0x63bbec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbf2:{NFSU2_TR(0x63bbf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbf8:{NFSU2_TR(0x63bbf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bbfe:{NFSU2_TR(0x63bbfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc04:{NFSU2_TR(0x63bc04);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63bc08:{NFSU2_TR(0x63bc08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc0e:{NFSU2_TR(0x63bc0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc14:{NFSU2_TR(0x63bc14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc1a:{NFSU2_TR(0x63bc1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc20:{NFSU2_TR(0x63bc20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc26:{NFSU2_TR(0x63bc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc2c:{NFSU2_TR(0x63bc2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc32:{NFSU2_TR(0x63bc32);
w4(R+0,u32(0x1ull));
}
B63bc37:{NFSU2_TR(0x63bc37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc3d:{NFSU2_TR(0x63bc3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc43:{NFSU2_TR(0x63bc43);
__builtin_memmove((R+0),gp(0x8a30f4),4);
}
B63bc48:{NFSU2_TR(0x63bc48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63bc4a:{NFSU2_TR(0x63bc4a);
__builtin_memmove(gp(0x8a30f4),(R+24),4);
}
B63bc50:{NFSU2_TR(0x63bc50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc53:{NFSU2_TR(0x63bc53);
u8 U[4];
w4(U+0,u32(0x8a30f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B63bc59:{NFSU2_TR(0x63bc59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63bc5a:{NFSU2_TR(0x63bc5a);
__builtin_memmove((R+0),(R+24),4);
}
B63bc5c:{NFSU2_TR(0x63bc5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63bc5d:{NFSU2_TR(0x63bc5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc64:{NFSU2_TR(0x63bc64);
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
B63bc67:{NFSU2_TR(0x63bc67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63bc70:L63bc70:{c.instructions+=9;NFSU2_TR(0x63bc70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63bc74:{NFSU2_TR(0x63bc74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bc75:{NFSU2_TR(0x63bc75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bc76:{NFSU2_TR(0x63bc76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bc77:{NFSU2_TR(0x63bc77);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63bc7b:{NFSU2_TR(0x63bc7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bc7c:{NFSU2_TR(0x63bc7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bc7d:{NFSU2_TR(0x63bc7d);
__builtin_memmove((R+24),(R+4),4);
}
B63bc7f:{NFSU2_TR(0x63bc7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63bc84ull));
TAIL_STATIC(0x63ae70u,63a);
}
B63bc84:L63bc84:{c.instructions+=10;NFSU2_TR(0x63bc84);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63bc88:{NFSU2_TR(0x63bc88);
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
B63bc8a:{NFSU2_TR(0x63bc8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63bc8c:{NFSU2_TR(0x63bc8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63bc8f:{NFSU2_TR(0x63bc8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc92:{NFSU2_TR(0x63bc92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc95:{NFSU2_TR(0x63bc95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63bc97:{NFSU2_TR(0x63bc97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bc9a:{NFSU2_TR(0x63bc9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63bc9d:{NFSU2_TR(0x63bc9d);
if(r1(R+518)){{goto L63bcb7;}}
}
B63bc9f:L63bc9f:{c.instructions+=10;NFSU2_TR(0x63bc9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B63bca1:{NFSU2_TR(0x63bca1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63bca3:{NFSU2_TR(0x63bca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63bca4:{NFSU2_TR(0x63bca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bca7:{NFSU2_TR(0x63bca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63bca8:{NFSU2_TR(0x63bca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bcab:{NFSU2_TR(0x63bcab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63bcad:{NFSU2_TR(0x63bcad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x123cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63bcb3:{NFSU2_TR(0x63bcb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63bcb4:{NFSU2_TR(0x63bcb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63bcb7:L63bcb7:{c.instructions+=10;NFSU2_TR(0x63bcb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63bcba:{NFSU2_TR(0x63bcba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63bcbc:{NFSU2_TR(0x63bcbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63bcbd:{NFSU2_TR(0x63bcbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bcc0:{NFSU2_TR(0x63bcc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63bcc1:{NFSU2_TR(0x63bcc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bcc4:{NFSU2_TR(0x63bcc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63bcc6:{NFSU2_TR(0x63bcc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x123cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63bccc:{NFSU2_TR(0x63bccc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63bccd:{NFSU2_TR(0x63bccd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63bcd0:L63bcd0:{c.instructions+=5;NFSU2_TR(0x63bcd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bcd1:{NFSU2_TR(0x63bcd1);
__builtin_memmove((R+24),(R+4),4);
}
B63bcd3:{NFSU2_TR(0x63bcd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63bcd6:{NFSU2_TR(0x63bcd6);
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
B63bcd8:{NFSU2_TR(0x63bcd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63bd01;}}
}
B63bcda:L63bcda:{c.instructions+=1;NFSU2_TR(0x63bcda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63bcdfull));
TAIL_STATIC(0x57a1a0u,57a);
}
B63bcdf:L63bcdf:{c.instructions+=4;NFSU2_TR(0x63bcdf);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63bce2:{NFSU2_TR(0x63bce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63bce6:{NFSU2_TR(0x63bce6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63bce8:{NFSU2_TR(0x63bce8);
if(r1(R+518)){{goto L63bcf3;}}
}
B63bcea:L63bcea:{c.instructions+=3;NFSU2_TR(0x63bcea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B63bcec:{NFSU2_TR(0x63bcec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63bcf0:{NFSU2_TR(0x63bcf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63bcf3:L63bcf3:{c.instructions+=3;NFSU2_TR(0x63bcf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63bcf6:{NFSU2_TR(0x63bcf6);
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
B63bcf8:{NFSU2_TR(0x63bcf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63bd01;}}
}
B63bcfa:L63bcfa:{c.instructions+=2;NFSU2_TR(0x63bcfa);
__builtin_memmove((R+4),(R+24),4);
}
B63bcfc:{NFSU2_TR(0x63bcfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63bd01ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b160u);}goto L63b160;}
}
B63bd01:L63bd01:{c.instructions+=2;NFSU2_TR(0x63bd01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63bd02:{NFSU2_TR(0x63bd02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63bd10:L63bd10:{c.instructions+=5;NFSU2_TR(0x63bd10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63bd14:{NFSU2_TR(0x63bd14);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63bd18:{NFSU2_TR(0x63bd18);
s4(0x8a329c,u32(0x0ull));
}
B63bd22:{NFSU2_TR(0x63bd22);
w4(R+4,u32(0x8a3288ull));
}
B63bd27:{NFSU2_TR(0x63bd27);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63b160u);}goto L63b160;}
}
B63bd30:L63bd30:{c.instructions+=1;NFSU2_TR(0x63bd30);
{u32 t_=u32(m4(0x783420));TAIL_DYNAMIC(t_);}
}
B63bd36:L63bd36:{c.instructions+=10;NFSU2_TR(0x63bd36);
__builtin_memmove((R+28),(R+28),4);
}
B63bd38:{NFSU2_TR(0x63bd38);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bd39:{NFSU2_TR(0x63bd39);
__builtin_memmove((R+20),(R+16),4);
}
B63bd3b:{NFSU2_TR(0x63bd3b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bd3e:{NFSU2_TR(0x63bd3e);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63bd41:{NFSU2_TR(0x63bd41);
{u32 ea_=u32(u32(8041604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bd47:{NFSU2_TR(0x63bd47);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B63bd49:{NFSU2_TR(0x63bd49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63bd4b:{NFSU2_TR(0x63bd4b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B63bd4e:{NFSU2_TR(0x63bd4e);
if(r1(R+514)){{goto L63bd62;}}
}
B63bd50:L63bd50:{c.instructions+=4;NFSU2_TR(0x63bd50);
{u32 ea_=u32(u32(8041600u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B63bd56:{NFSU2_TR(0x63bd56);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63bd58:{NFSU2_TR(0x63bd58);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B63bd5b:{NFSU2_TR(0x63bd5b);
if(r1(R+514)){{goto L63bd64;}}
}
B63bd5d:L63bd5d:{c.instructions+=3;NFSU2_TR(0x63bd5d);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63bd5f:{NFSU2_TR(0x63bd5f);
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
B63bd60:{NFSU2_TR(0x63bd60);
{goto L63bd66;}
}
B63bd62:L63bd62:{c.instructions+=1;NFSU2_TR(0x63bd62);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63bd64:L63bd64:{c.instructions+=1;NFSU2_TR(0x63bd64);
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
B63bd66:L63bd66:{c.instructions+=2;NFSU2_TR(0x63bd66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63bd67:{NFSU2_TR(0x63bd67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63bd6a:L63bd6a:{c.instructions+=5;NFSU2_TR(0x63bd6a);
__builtin_memmove((R+28),(R+28),4);
}
B63bd6c:{NFSU2_TR(0x63bd6c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bd6d:{NFSU2_TR(0x63bd6d);
__builtin_memmove((R+20),(R+16),4);
}
B63bd6f:{NFSU2_TR(0x63bd6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bd71:{NFSU2_TR(0x63bd71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63bd76ull));
TAIL_STATIC(0x641713u,641);
}
B63bd76:L63bd76:{c.instructions+=2;NFSU2_TR(0x63bd76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63bd77:{NFSU2_TR(0x63bd77);
{u32 t_=u32(m4(0x803f50));TAIL_DYNAMIC(t_);}
}
B63bd7d:L63bd7d:{c.instructions+=8;NFSU2_TR(0x63bd7d);
__builtin_memmove((R+28),(R+28),4);
}
B63bd7f:{NFSU2_TR(0x63bd7f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bd80:{NFSU2_TR(0x63bd80);
__builtin_memmove((R+20),(R+16),4);
}
B63bd82:{NFSU2_TR(0x63bd82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63bd85:{NFSU2_TR(0x63bd85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bd86:{NFSU2_TR(0x63bd86);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B63bd88:{NFSU2_TR(0x63bd88);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B63bd8b:{NFSU2_TR(0x63bd8b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L63be1a;}}
}
B63bd91:L63bd91:{c.instructions+=2;NFSU2_TR(0x63bd91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bd92:{NFSU2_TR(0x63bd92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bd93:L63bd93:{c.instructions+=8;NFSU2_TR(0x63bd93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63bd96:{NFSU2_TR(0x63bd96);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B63bd99:{NFSU2_TR(0x63bd99);
__builtin_memmove((R+8),(R+4),4);
}
B63bd9b:{NFSU2_TR(0x63bd9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B63bd9e:{NFSU2_TR(0x63bd9e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffffffull))));
}
B63bda4:{NFSU2_TR(0x63bda4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8000ull))));
}
B63bdaa:{NFSU2_TR(0x63bdaa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x47ffefffull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x47ffefffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63bdb0:{NFSU2_TR(0x63bdb0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L63bdbc;}}
}
B63bdb2:L63bdb2:{c.instructions+=3;NFSU2_TR(0x63bdb2);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x7fffull))));
}
B63bdb8:{NFSU2_TR(0x63bdb8);
__builtin_memmove((R+4),(R+8),4);
}
B63bdba:{NFSU2_TR(0x63bdba);
{goto L63be0a;}
}
B63bdbc:L63bdbc:{c.instructions+=3;NFSU2_TR(0x63bdbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x38800000ull))));
}
B63bdc2:{NFSU2_TR(0x63bdc2);
__builtin_memmove((R+24),(R+4),4);
}
B63bdc4:{NFSU2_TR(0x63bdc4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L63bdf8;}}
}
B63bdc6:L63bdc6:{c.instructions+=8;NFSU2_TR(0x63bdc6);
u8 U[4];
w4(U+0,u32(0x71ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bdc8:{NFSU2_TR(0x63bdc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B63bdcb:{NFSU2_TR(0x63bdcb);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffffull))));
}
B63bdd1:{NFSU2_TR(0x63bdd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63bdd2:{NFSU2_TR(0x63bdd2);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B63bdd4:{NFSU2_TR(0x63bdd4);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x800000ull))));
}
B63bdda:{NFSU2_TR(0x63bdda);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63bddd:{NFSU2_TR(0x63bddd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63bde3;}}
}
B63bddf:L63bddf:{c.instructions+=2;NFSU2_TR(0x63bddf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63bde1:{NFSU2_TR(0x63bde1);
{goto L63bde7;}
}
B63bde3:L63bde3:{c.instructions+=2;NFSU2_TR(0x63bde3);
__builtin_memmove((R+4),(R+28),4);
}
B63bde5:{NFSU2_TR(0x63bde5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r1(U+0))));
}
B63bde7:L63bde7:{c.instructions+=5;NFSU2_TR(0x63bde7);
__builtin_memmove((R+4),(R+24),4);
}
B63bde9:{NFSU2_TR(0x63bde9);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B63bdec:{NFSU2_TR(0x63bdec);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B63bdef:{NFSU2_TR(0x63bdef);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B63bdf6:{NFSU2_TR(0x63bdf6);
{goto L63be05;}
}
B63bdf8:L63bdf8:{c.instructions+=3;NFSU2_TR(0x63bdf8);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B63bdfb:{NFSU2_TR(0x63bdfb);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1ull))));
}
B63bdfe:{NFSU2_TR(0x63bdfe);
u8 U[12];
w4(U+0,u32(u32(u32(0xc8000fffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B63be05:L63be05:{c.instructions+=2;NFSU2_TR(0x63be05);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B63be08:{NFSU2_TR(0x63be08);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B63be0a:L63be0a:{c.instructions+=4;NFSU2_TR(0x63be0a);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B63be0e:{NFSU2_TR(0x63be0e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B63be0f:{NFSU2_TR(0x63be0f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B63be12:{NFSU2_TR(0x63be12);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63bd93u);}goto L63bd93;}}
}
B63be18:L63be18:{c.instructions+=2;NFSU2_TR(0x63be18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63be19:{NFSU2_TR(0x63be19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63be1a:L63be1a:{c.instructions+=3;NFSU2_TR(0x63be1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63be1b:{NFSU2_TR(0x63be1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63be1c:{NFSU2_TR(0x63be1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63be1f:L63be1f:{c.instructions+=5;NFSU2_TR(0x63be1f);
__builtin_memmove((R+28),(R+28),4);
}
B63be21:{NFSU2_TR(0x63be21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63be22:{NFSU2_TR(0x63be22);
__builtin_memmove((R+20),(R+16),4);
}
B63be24:{NFSU2_TR(0x63be24);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63be26:{NFSU2_TR(0x63be26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63be2bull));
TAIL_STATIC(0x641713u,641);
}
B63be2b:L63be2b:{c.instructions+=2;NFSU2_TR(0x63be2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63be2c:{NFSU2_TR(0x63be2c);
{u32 t_=u32(m4(0x803f54));TAIL_DYNAMIC(t_);}
}
B63be32:L63be32:{c.instructions+=7;NFSU2_TR(0x63be32);
__builtin_memmove((R+28),(R+28),4);
}
B63be34:{NFSU2_TR(0x63be34);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63be35:{NFSU2_TR(0x63be35);
__builtin_memmove((R+20),(R+16),4);
}
B63be37:{NFSU2_TR(0x63be37);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63be38:{NFSU2_TR(0x63be38);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B63be3a:{NFSU2_TR(0x63be3a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B63be3d:{NFSU2_TR(0x63be3d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L63bed1;}}
}
B63be43:L63be43:{c.instructions+=4;NFSU2_TR(0x63be43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63be44:{NFSU2_TR(0x63be44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63be45:{NFSU2_TR(0x63be45);
w4(R+24,u32(0x3ffull));
}
B63be4a:{NFSU2_TR(0x63be4a);
w4(R+0,u32(0x400ull));
}
B63be4f:L63be4f:{c.instructions+=5;NFSU2_TR(0x63be4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63be52:{NFSU2_TR(0x63be52);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+8),(U+8),2);
}
B63be56:{NFSU2_TR(0x63be56);
w4(R+4,u32(r2(R+8)));
}
B63be59:{NFSU2_TR(0x63be59);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffff7c00ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63be5f:{NFSU2_TR(0x63be5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63bea1;}}
}
B63be61:L63be61:{c.instructions+=2;NFSU2_TR(0x63be61);
u8 U[2];
w2(U+0,u16(u32(r2(R+24))&u32(r2(R+8))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B63be64:{NFSU2_TR(0x63be64);
if(r1(R+518)){{goto L63be96;}}
}
B63be66:L63be66:{c.instructions+=5;NFSU2_TR(0x63be66);
u8 U[4];
w4(U+0,u32(0xfffffff2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63be68:{NFSU2_TR(0x63be68);
__builtin_memmove((R+8),(R+4),4);
}
B63be6a:{NFSU2_TR(0x63be6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63be6b:{NFSU2_TR(0x63be6b);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B63be6d:{NFSU2_TR(0x63be6d);
{goto L63be72;}
}
B63be6f:L63be6f:{c.instructions+=2;NFSU2_TR(0x63be6f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B63be70:{NFSU2_TR(0x63be70);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B63be72:L63be72:{c.instructions+=2;NFSU2_TR(0x63be72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63be74:{NFSU2_TR(0x63be74);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63be6fu);}goto L63be6f;}}
}
B63be76:L63be76:{c.instructions+=8;NFSU2_TR(0x63be76);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff8080ull))));
}
B63be7c:{NFSU2_TR(0x63be7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B63be7f:{NFSU2_TR(0x63be7f);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B63be81:{NFSU2_TR(0x63be81);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffbffull))));
}
B63be87:{NFSU2_TR(0x63be87);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x7full))));
}
B63be8a:{NFSU2_TR(0x63be8a);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B63be8d:{NFSU2_TR(0x63be8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B63be90:{NFSU2_TR(0x63be90);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B63be92:L63be92:{c.instructions+=2;NFSU2_TR(0x63be92);
__builtin_memmove((R+8),(R+4),4);
}
B63be94:{NFSU2_TR(0x63be94);
{goto L63bec3;}
}
B63be96:L63be96:{c.instructions+=3;NFSU2_TR(0x63be96);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff8000ull))));
}
B63be9c:{NFSU2_TR(0x63be9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B63be9f:{NFSU2_TR(0x63be9f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63be92u);}goto L63be92;}
}
B63bea1:L63bea1:{c.instructions+=12;NFSU2_TR(0x63bea1);
__builtin_memmove((R+8),(R+4),4);
}
B63bea3:{NFSU2_TR(0x63bea3);
__builtin_memmove((R+28),(R+4),4);
}
B63bea5:{NFSU2_TR(0x63bea5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffff8000ull))));
}
B63beab:{NFSU2_TR(0x63beab);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B63beae:{NFSU2_TR(0x63beae);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B63beb1:{NFSU2_TR(0x63beb1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B63beb4:{NFSU2_TR(0x63beb4);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B63beb6:{NFSU2_TR(0x63beb6);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B63beb8:{NFSU2_TR(0x63beb8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B63bebb:{NFSU2_TR(0x63bebb);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B63bebe:{NFSU2_TR(0x63bebe);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B63bec1:{NFSU2_TR(0x63bec1);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B63bec3:L63bec3:{c.instructions+=5;NFSU2_TR(0x63bec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63bec6:{NFSU2_TR(0x63bec6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63bec9:{NFSU2_TR(0x63bec9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B63beca:{NFSU2_TR(0x63beca);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B63becd:{NFSU2_TR(0x63becd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63be4fu);}goto L63be4f;}}
}
B63becf:L63becf:{c.instructions+=2;NFSU2_TR(0x63becf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63bed0:{NFSU2_TR(0x63bed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63bed1:L63bed1:{c.instructions+=4;NFSU2_TR(0x63bed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63bed4:{NFSU2_TR(0x63bed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63bed5:{NFSU2_TR(0x63bed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63bed6:{NFSU2_TR(0x63bed6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63bed9:L63bed9:{c.instructions+=5;NFSU2_TR(0x63bed9);
__builtin_memmove((R+28),(R+28),4);
}
B63bedb:{NFSU2_TR(0x63bedb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bedc:{NFSU2_TR(0x63bedc);
__builtin_memmove((R+20),(R+16),4);
}
B63bede:{NFSU2_TR(0x63bede);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bee0:{NFSU2_TR(0x63bee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63bee5ull));
TAIL_STATIC(0x641713u,641);
}
B63bee5:L63bee5:{c.instructions+=2;NFSU2_TR(0x63bee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63bee6:{NFSU2_TR(0x63bee6);
{u32 t_=u32(m4(0x803f24));TAIL_DYNAMIC(t_);}
}
B63beec:L63beec:{c.instructions+=5;NFSU2_TR(0x63beec);
__builtin_memmove((R+28),(R+28),4);
}
B63beee:{NFSU2_TR(0x63beee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63beef:{NFSU2_TR(0x63beef);
__builtin_memmove((R+20),(R+16),4);
}
B63bef1:{NFSU2_TR(0x63bef1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bef3:{NFSU2_TR(0x63bef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63bef8ull));
TAIL_STATIC(0x641713u,641);
}
B63bef8:L63bef8:{c.instructions+=9;NFSU2_TR(0x63bef8);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63befb:{NFSU2_TR(0x63befb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63befc:{NFSU2_TR(0x63befc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63beff:{NFSU2_TR(0x63beff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63bf02:{NFSU2_TR(0x63bf02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63bf05:{NFSU2_TR(0x63bf05);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63bf08:{NFSU2_TR(0x63bf08);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63bf0b:{NFSU2_TR(0x63bf0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63bf0e:{NFSU2_TR(0x63bf0e);
u8 U[4];
__builtin_memmove((U+0),gp(0x803eb0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63bf14ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63bf14:L63bf14:{c.instructions+=2;NFSU2_TR(0x63bf14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63bf15:{NFSU2_TR(0x63bf15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63bf18:L63bf18:{c.instructions+=60;NFSU2_TR(0x63bf18);
__builtin_memmove((R+28),(R+28),4);
}
B63bf1a:{NFSU2_TR(0x63bf1a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bf1b:{NFSU2_TR(0x63bf1b);
__builtin_memmove((R+20),(R+16),4);
}
B63bf1d:{NFSU2_TR(0x63bf1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bf1e:{NFSU2_TR(0x63bf1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bf1f:{NFSU2_TR(0x63bf1f);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bf22:{NFSU2_TR(0x63bf22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63bf25:{NFSU2_TR(0x63bf25);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63bf28:{NFSU2_TR(0x63bf28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63bf2b:{NFSU2_TR(0x63bf2b);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bf2e:{NFSU2_TR(0x63bf2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63bf31:{NFSU2_TR(0x63bf31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bf32:{NFSU2_TR(0x63bf32);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63bf34:{NFSU2_TR(0x63bf34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63bf37:{NFSU2_TR(0x63bf37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bf38:{NFSU2_TR(0x63bf38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63bf3b:{NFSU2_TR(0x63bf3b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63bf3d:{NFSU2_TR(0x63bf3d);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B63bf3f:{NFSU2_TR(0x63bf3f);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63bf41:{NFSU2_TR(0x63bf41);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63bf47:{NFSU2_TR(0x63bf47);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63bf49:{NFSU2_TR(0x63bf49);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63bf4b:{NFSU2_TR(0x63bf4b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63bf51:{NFSU2_TR(0x63bf51);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63bf54:{NFSU2_TR(0x63bf54);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63bf56:{NFSU2_TR(0x63bf56);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B63bf58:{NFSU2_TR(0x63bf58);
__asm__ volatile(".byte 0xd8,0xeb":::"memory");
}
B63bf5a:{NFSU2_TR(0x63bf5a);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63bf5d:{NFSU2_TR(0x63bf5d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63bf60:{NFSU2_TR(0x63bf60);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63bf62:{NFSU2_TR(0x63bf62);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63bf65:{NFSU2_TR(0x63bf65);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63bf67:{NFSU2_TR(0x63bf67);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B63bf69:{NFSU2_TR(0x63bf69);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bf6c:{NFSU2_TR(0x63bf6c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63bf6e:{NFSU2_TR(0x63bf6e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bf71:{NFSU2_TR(0x63bf71);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63bf73:{NFSU2_TR(0x63bf73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63bf75:{NFSU2_TR(0x63bf75);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bf78:{NFSU2_TR(0x63bf78);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63bf7a:{NFSU2_TR(0x63bf7a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63bf7c:{NFSU2_TR(0x63bf7c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63bf7e:{NFSU2_TR(0x63bf7e);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63bf80:{NFSU2_TR(0x63bf80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63bf82:{NFSU2_TR(0x63bf82);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63bf84:{NFSU2_TR(0x63bf84);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63bf87:{NFSU2_TR(0x63bf87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63bf88:{NFSU2_TR(0x63bf88);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bf8b:{NFSU2_TR(0x63bf8b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63bf8e:{NFSU2_TR(0x63bf8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63bf8f:{NFSU2_TR(0x63bf8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63bf91:{NFSU2_TR(0x63bf91);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bf94:{NFSU2_TR(0x63bf94);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63bf97:{NFSU2_TR(0x63bf97);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63bf99:{NFSU2_TR(0x63bf99);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bf9c:{NFSU2_TR(0x63bf9c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63bf9f:{NFSU2_TR(0x63bf9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63bfa1:{NFSU2_TR(0x63bfa1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63bfa4:{NFSU2_TR(0x63bfa4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63bfa5:{NFSU2_TR(0x63bfa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63bfa8:L63bfa8:{c.instructions+=5;NFSU2_TR(0x63bfa8);
__builtin_memmove((R+28),(R+28),4);
}
B63bfaa:{NFSU2_TR(0x63bfaa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bfab:{NFSU2_TR(0x63bfab);
__builtin_memmove((R+20),(R+16),4);
}
B63bfad:{NFSU2_TR(0x63bfad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bfaf:{NFSU2_TR(0x63bfaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63bfb4ull));
TAIL_STATIC(0x641713u,641);
}
B63bfb4:L63bfb4:{c.instructions+=9;NFSU2_TR(0x63bfb4);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bfb7:{NFSU2_TR(0x63bfb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bfb8:{NFSU2_TR(0x63bfb8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63bfbb:{NFSU2_TR(0x63bfbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63bfbe:{NFSU2_TR(0x63bfbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63bfc1:{NFSU2_TR(0x63bfc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63bfc4:{NFSU2_TR(0x63bfc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63bfc7:{NFSU2_TR(0x63bfc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63bfca:{NFSU2_TR(0x63bfca);
u8 U[4];
__builtin_memmove((U+0),gp(0x803f28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63bfd0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63bfd0:L63bfd0:{c.instructions+=2;NFSU2_TR(0x63bfd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63bfd1:{NFSU2_TR(0x63bfd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63bfd4:L63bfd4:{c.instructions+=19;NFSU2_TR(0x63bfd4);
__builtin_memmove((R+28),(R+28),4);
}
B63bfd6:{NFSU2_TR(0x63bfd6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bfd7:{NFSU2_TR(0x63bfd7);
__builtin_memmove((R+20),(R+16),4);
}
B63bfd9:{NFSU2_TR(0x63bfd9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bfda:{NFSU2_TR(0x63bfda);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bfdb:{NFSU2_TR(0x63bfdb);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bfde:{NFSU2_TR(0x63bfde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63bfe1:{NFSU2_TR(0x63bfe1);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63bfe4:{NFSU2_TR(0x63bfe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63bfe7:{NFSU2_TR(0x63bfe7);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bfea:{NFSU2_TR(0x63bfea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63bfed:{NFSU2_TR(0x63bfed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bfee:{NFSU2_TR(0x63bfee);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63bff0:{NFSU2_TR(0x63bff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63bff3:{NFSU2_TR(0x63bff3);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63bff9:{NFSU2_TR(0x63bff9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63bffa:{NFSU2_TR(0x63bffa);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63bffc:{NFSU2_TR(0x63bffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63bfff:{NFSU2_TR(0x63bfff);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
TAIL_STATIC(0x63c001u,63c);
}
XIT:NFSU2_TR_EXIT(0x63b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
