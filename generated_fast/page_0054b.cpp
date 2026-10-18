#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_46d(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_53e(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54c(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x54b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x54b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_54b(u8* __restrict R,Cpu& c);
u32 page_54b(Cpu& c){return body_54b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_54b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x54b000:goto L54b000;
case 0x54b003:c.instructions+=7;goto B54b003;
case 0x54b004:c.instructions+=6;goto B54b004;
case 0x54b006:c.instructions+=5;goto B54b006;
case 0x54b009:c.instructions+=4;goto B54b009;
case 0x54b00d:c.instructions+=3;goto B54b00d;
case 0x54b010:c.instructions+=2;goto B54b010;
case 0x54b012:c.instructions+=1;goto B54b012;
case 0x54b014:goto L54b014;
case 0x54b017:c.instructions+=5;goto B54b017;
case 0x54b019:c.instructions+=4;goto B54b019;
case 0x54b01d:c.instructions+=3;goto B54b01d;
case 0x54b01e:c.instructions+=2;goto B54b01e;
case 0x54b020:c.instructions+=1;goto B54b020;
case 0x54b025:goto L54b025;
case 0x54b029:c.instructions+=4;goto B54b029;
case 0x54b02d:c.instructions+=3;goto B54b02d;
case 0x54b02f:c.instructions+=2;goto B54b02f;
case 0x54b032:c.instructions+=1;goto B54b032;
case 0x54b034:goto L54b034;
case 0x54b03a:c.instructions+=2;goto B54b03a;
case 0x54b03b:c.instructions+=1;goto B54b03b;
case 0x54b03d:goto L54b03d;
case 0x54b041:c.instructions+=4;goto B54b041;
case 0x54b045:c.instructions+=3;goto B54b045;
case 0x54b047:c.instructions+=2;goto B54b047;
case 0x54b04a:c.instructions+=1;goto B54b04a;
case 0x54b04c:goto L54b04c;
case 0x54b052:c.instructions+=1;goto B54b052;
case 0x54b054:goto L54b054;
case 0x54b05a:c.instructions+=2;goto B54b05a;
case 0x54b05b:c.instructions+=1;goto B54b05b;
case 0x54b05d:goto L54b05d;
case 0x54b061:c.instructions+=3;goto B54b061;
case 0x54b062:c.instructions+=2;goto B54b062;
case 0x54b064:c.instructions+=1;goto B54b064;
case 0x54b069:goto L54b069;
case 0x54b06f:goto L54b06f;
case 0x54b070:goto L54b070;
case 0x54b072:c.instructions+=1;goto B54b072;
case 0x54b077:goto L54b077;
case 0x54b07a:c.instructions+=2;goto B54b07a;
case 0x54b07d:c.instructions+=1;goto B54b07d;
case 0x54b080:goto L54b080;
case 0x54b081:c.instructions+=2;goto B54b081;
case 0x54b084:c.instructions+=1;goto B54b084;
case 0x54b090:goto L54b090;
case 0x54b091:c.instructions+=4;goto B54b091;
case 0x54b093:c.instructions+=3;goto B54b093;
case 0x54b096:c.instructions+=2;goto B54b096;
case 0x54b098:c.instructions+=1;goto B54b098;
case 0x54b09a:goto L54b09a;
case 0x54b09d:c.instructions+=3;goto B54b09d;
case 0x54b09e:c.instructions+=2;goto B54b09e;
case 0x54b0a3:c.instructions+=1;goto B54b0a3;
case 0x54b0a8:goto L54b0a8;
case 0x54b0ac:goto L54b0ac;
case 0x54b0b1:c.instructions+=1;goto B54b0b1;
case 0x54b0b6:goto L54b0b6;
case 0x54b0bb:c.instructions+=1;goto B54b0bb;
case 0x54b0c0:goto L54b0c0;
case 0x54b0c2:c.instructions+=1;goto B54b0c2;
case 0x54b0c7:goto L54b0c7;
case 0x54b0cc:goto L54b0cc;
case 0x54b0d6:c.instructions+=2;goto B54b0d6;
case 0x54b0d7:c.instructions+=1;goto B54b0d7;
case 0x54b0e0:goto L54b0e0;
case 0x54b0e8:c.instructions+=1;goto B54b0e8;
case 0x54b0ea:goto L54b0ea;
case 0x54b0eb:c.instructions+=5;goto B54b0eb;
case 0x54b0ee:c.instructions+=4;goto B54b0ee;
case 0x54b0ef:c.instructions+=3;goto B54b0ef;
case 0x54b0f5:c.instructions+=2;goto B54b0f5;
case 0x54b0f7:c.instructions+=1;goto B54b0f7;
case 0x54b0f9:goto L54b0f9;
case 0x54b0fe:c.instructions+=2;goto B54b0fe;
case 0x54b100:c.instructions+=1;goto B54b100;
case 0x54b102:goto L54b102;
case 0x54b107:c.instructions+=2;goto B54b107;
case 0x54b108:c.instructions+=1;goto B54b108;
case 0x54b10d:goto L54b10d;
case 0x54b110:c.instructions+=2;goto B54b110;
case 0x54b112:c.instructions+=1;goto B54b112;
case 0x54b114:goto L54b114;
case 0x54b117:c.instructions+=1;goto B54b117;
case 0x54b119:goto L54b119;
case 0x54b11c:c.instructions+=3;goto B54b11c;
case 0x54b122:c.instructions+=2;goto B54b122;
case 0x54b125:c.instructions+=1;goto B54b125;
case 0x54b128:goto L54b128;
case 0x54b12d:c.instructions+=2;goto B54b12d;
case 0x54b12e:c.instructions+=1;goto B54b12e;
case 0x54b133:goto L54b133;
case 0x54b136:c.instructions+=3;goto B54b136;
case 0x54b137:c.instructions+=2;goto B54b137;
case 0x54b138:c.instructions+=1;goto B54b138;
case 0x54b13b:goto L54b13b;
case 0x54b140:c.instructions+=2;goto B54b140;
case 0x54b141:c.instructions+=1;goto B54b141;
case 0x54b146:goto L54b146;
case 0x54b149:c.instructions+=2;goto B54b149;
case 0x54b14a:c.instructions+=1;goto B54b14a;
case 0x54b14b:goto L54b14b;
case 0x54b150:goto L54b150;
case 0x54b151:c.instructions+=7;goto B54b151;
case 0x54b152:c.instructions+=6;goto B54b152;
case 0x54b154:c.instructions+=5;goto B54b154;
case 0x54b157:c.instructions+=4;goto B54b157;
case 0x54b15a:c.instructions+=3;goto B54b15a;
case 0x54b15c:c.instructions+=2;goto B54b15c;
case 0x54b15d:c.instructions+=1;goto B54b15d;
case 0x54b15f:goto L54b15f;
case 0x54b165:c.instructions+=1;goto B54b165;
case 0x54b167:goto L54b167;
case 0x54b16d:c.instructions+=4;goto B54b16d;
case 0x54b170:c.instructions+=3;goto B54b170;
case 0x54b172:c.instructions+=2;goto B54b172;
case 0x54b174:c.instructions+=1;goto B54b174;
case 0x54b176:goto L54b176;
case 0x54b178:goto L54b178;
case 0x54b17e:c.instructions+=10;goto B54b17e;
case 0x54b181:c.instructions+=9;goto B54b181;
case 0x54b182:c.instructions+=8;goto B54b182;
case 0x54b184:c.instructions+=7;goto B54b184;
case 0x54b186:c.instructions+=6;goto B54b186;
case 0x54b18c:c.instructions+=5;goto B54b18c;
case 0x54b192:c.instructions+=4;goto B54b192;
case 0x54b193:c.instructions+=3;goto B54b193;
case 0x54b198:c.instructions+=2;goto B54b198;
case 0x54b199:c.instructions+=1;goto B54b199;
case 0x54b19e:goto L54b19e;
case 0x54b1a3:c.instructions+=10;goto B54b1a3;
case 0x54b1a6:c.instructions+=9;goto B54b1a6;
case 0x54b1a7:c.instructions+=8;goto B54b1a7;
case 0x54b1a9:c.instructions+=7;goto B54b1a9;
case 0x54b1ab:c.instructions+=6;goto B54b1ab;
case 0x54b1b0:c.instructions+=5;goto B54b1b0;
case 0x54b1b5:c.instructions+=4;goto B54b1b5;
case 0x54b1b6:c.instructions+=3;goto B54b1b6;
case 0x54b1bb:c.instructions+=2;goto B54b1bb;
case 0x54b1bc:c.instructions+=1;goto B54b1bc;
case 0x54b1c1:goto L54b1c1;
case 0x54b1c4:c.instructions+=4;goto B54b1c4;
case 0x54b1c7:c.instructions+=3;goto B54b1c7;
case 0x54b1c8:c.instructions+=2;goto B54b1c8;
case 0x54b1cd:c.instructions+=1;goto B54b1cd;
case 0x54b1d2:goto L54b1d2;
case 0x54b1d3:c.instructions+=3;goto B54b1d3;
case 0x54b1d8:c.instructions+=2;goto B54b1d8;
case 0x54b1d9:c.instructions+=1;goto B54b1d9;
case 0x54b1de:goto L54b1de;
case 0x54b1e1:c.instructions+=4;goto B54b1e1;
case 0x54b1e4:c.instructions+=3;goto B54b1e4;
case 0x54b1e5:c.instructions+=2;goto B54b1e5;
case 0x54b1ea:c.instructions+=1;goto B54b1ea;
case 0x54b1ef:goto L54b1ef;
case 0x54b1f0:c.instructions+=3;goto B54b1f0;
case 0x54b1f5:c.instructions+=2;goto B54b1f5;
case 0x54b1f6:c.instructions+=1;goto B54b1f6;
case 0x54b1fb:goto L54b1fb;
case 0x54b1fe:c.instructions+=4;goto B54b1fe;
case 0x54b1ff:c.instructions+=3;goto B54b1ff;
case 0x54b200:c.instructions+=2;goto B54b200;
case 0x54b201:c.instructions+=1;goto B54b201;
case 0x54b210:goto L54b210;
case 0x54b214:c.instructions+=12;goto B54b214;
case 0x54b218:c.instructions+=11;goto B54b218;
case 0x54b219:c.instructions+=10;goto B54b219;
case 0x54b21a:c.instructions+=9;goto B54b21a;
case 0x54b21e:c.instructions+=8;goto B54b21e;
case 0x54b220:c.instructions+=7;goto B54b220;
case 0x54b224:c.instructions+=6;goto B54b224;
case 0x54b225:c.instructions+=5;goto B54b225;
case 0x54b226:c.instructions+=4;goto B54b226;
case 0x54b227:c.instructions+=3;goto B54b227;
case 0x54b228:c.instructions+=2;goto B54b228;
case 0x54b22a:c.instructions+=1;goto B54b22a;
case 0x54b22f:goto L54b22f;
case 0x54b235:c.instructions+=1;goto B54b235;
case 0x54b237:goto L54b237;
case 0x54b239:goto L54b239;
case 0x54b23f:c.instructions+=1;goto B54b23f;
case 0x54b241:goto L54b241;
case 0x54b247:c.instructions+=1;goto B54b247;
case 0x54b24d:goto L54b24d;
case 0x54b24f:c.instructions+=1;goto B54b24f;
case 0x54b254:goto L54b254;
case 0x54b255:c.instructions+=2;goto B54b255;
case 0x54b256:c.instructions+=1;goto B54b256;
case 0x54b259:goto L54b259;
case 0x54b25b:c.instructions+=1;goto B54b25b;
case 0x54b260:goto L54b260;
case 0x54b267:c.instructions+=2;goto B54b267;
case 0x54b26e:c.instructions+=1;goto B54b26e;
case 0x54b270:goto L54b270;
case 0x54b273:c.instructions+=2;goto B54b273;
case 0x54b274:c.instructions+=1;goto B54b274;
case 0x54b279:goto L54b279;
case 0x54b27c:c.instructions+=3;goto B54b27c;
case 0x54b27d:c.instructions+=2;goto B54b27d;
case 0x54b27e:c.instructions+=1;goto B54b27e;
case 0x54b281:goto L54b281;
case 0x54b284:c.instructions+=2;goto B54b284;
case 0x54b285:c.instructions+=1;goto B54b285;
case 0x54b28a:goto L54b28a;
case 0x54b28d:c.instructions+=3;goto B54b28d;
case 0x54b28e:c.instructions+=2;goto B54b28e;
case 0x54b28f:c.instructions+=1;goto B54b28f;
case 0x54b292:goto L54b292;
case 0x54b298:c.instructions+=1;goto B54b298;
case 0x54b29a:goto L54b29a;
case 0x54b29d:c.instructions+=2;goto B54b29d;
case 0x54b29f:c.instructions+=1;goto B54b29f;
case 0x54b2a1:goto L54b2a1;
case 0x54b2a4:c.instructions+=2;goto B54b2a4;
case 0x54b2a6:c.instructions+=1;goto B54b2a6;
case 0x54b2a8:goto L54b2a8;
case 0x54b2ae:c.instructions+=1;goto B54b2ae;
case 0x54b2b0:goto L54b2b0;
case 0x54b2b6:c.instructions+=3;goto B54b2b6;
case 0x54b2b9:c.instructions+=2;goto B54b2b9;
case 0x54b2bb:c.instructions+=1;goto B54b2bb;
case 0x54b2bd:goto L54b2bd;
case 0x54b2bf:goto L54b2bf;
case 0x54b2c2:c.instructions+=4;goto B54b2c2;
case 0x54b2c5:c.instructions+=3;goto B54b2c5;
case 0x54b2ca:c.instructions+=2;goto B54b2ca;
case 0x54b2cb:c.instructions+=1;goto B54b2cb;
case 0x54b2d0:goto L54b2d0;
case 0x54b2d3:c.instructions+=2;goto B54b2d3;
case 0x54b2d5:c.instructions+=1;goto B54b2d5;
case 0x54b2d7:goto L54b2d7;
case 0x54b2da:c.instructions+=1;goto B54b2da;
case 0x54b2dc:goto L54b2dc;
case 0x54b2df:c.instructions+=3;goto B54b2df;
case 0x54b2e5:c.instructions+=2;goto B54b2e5;
case 0x54b2e8:c.instructions+=1;goto B54b2e8;
case 0x54b2eb:goto L54b2eb;
case 0x54b2ee:c.instructions+=3;goto B54b2ee;
case 0x54b2f3:c.instructions+=2;goto B54b2f3;
case 0x54b2f4:c.instructions+=1;goto B54b2f4;
case 0x54b2f9:goto L54b2f9;
case 0x54b2fc:goto L54b2fc;
case 0x54b2fd:c.instructions+=2;goto B54b2fd;
case 0x54b2fe:c.instructions+=1;goto B54b2fe;
case 0x54b310:goto L54b310;
case 0x54b312:c.instructions+=15;goto B54b312;
case 0x54b317:c.instructions+=14;goto B54b317;
case 0x54b31d:c.instructions+=13;goto B54b31d;
case 0x54b31e:c.instructions+=12;goto B54b31e;
case 0x54b325:c.instructions+=11;goto B54b325;
case 0x54b32b:c.instructions+=10;goto B54b32b;
case 0x54b331:c.instructions+=9;goto B54b331;
case 0x54b332:c.instructions+=8;goto B54b332;
case 0x54b333:c.instructions+=7;goto B54b333;
case 0x54b335:c.instructions+=6;goto B54b335;
case 0x54b337:c.instructions+=5;goto B54b337;
case 0x54b338:c.instructions+=4;goto B54b338;
case 0x54b339:c.instructions+=3;goto B54b339;
case 0x54b33d:c.instructions+=2;goto B54b33d;
case 0x54b341:c.instructions+=1;goto B54b341;
case 0x54b347:goto L54b347;
case 0x54b349:c.instructions+=1;goto B54b349;
case 0x54b34e:goto L54b34e;
case 0x54b351:c.instructions+=2;goto B54b351;
case 0x54b353:c.instructions+=1;goto B54b353;
case 0x54b355:goto L54b355;
case 0x54b358:c.instructions+=15;goto B54b358;
case 0x54b35a:c.instructions+=14;goto B54b35a;
case 0x54b35d:c.instructions+=13;goto B54b35d;
case 0x54b35f:c.instructions+=12;goto B54b35f;
case 0x54b362:c.instructions+=11;goto B54b362;
case 0x54b365:c.instructions+=10;goto B54b365;
case 0x54b368:c.instructions+=9;goto B54b368;
case 0x54b36b:c.instructions+=8;goto B54b36b;
case 0x54b36e:c.instructions+=7;goto B54b36e;
case 0x54b372:c.instructions+=6;goto B54b372;
case 0x54b379:c.instructions+=5;goto B54b379;
case 0x54b380:c.instructions+=4;goto B54b380;
case 0x54b386:c.instructions+=3;goto B54b386;
case 0x54b38a:c.instructions+=2;goto B54b38a;
case 0x54b38d:c.instructions+=1;goto B54b38d;
case 0x54b38f:goto L54b38f;
case 0x54b391:c.instructions+=2;goto B54b391;
case 0x54b395:c.instructions+=1;goto B54b395;
case 0x54b397:goto L54b397;
case 0x54b39b:c.instructions+=10;goto B54b39b;
case 0x54b39e:c.instructions+=9;goto B54b39e;
case 0x54b3a1:c.instructions+=8;goto B54b3a1;
case 0x54b3a3:c.instructions+=7;goto B54b3a3;
case 0x54b3a6:c.instructions+=6;goto B54b3a6;
case 0x54b3a9:c.instructions+=5;goto B54b3a9;
case 0x54b3ac:c.instructions+=4;goto B54b3ac;
case 0x54b3ae:c.instructions+=3;goto B54b3ae;
case 0x54b3b1:c.instructions+=2;goto B54b3b1;
case 0x54b3b3:c.instructions+=1;goto B54b3b3;
case 0x54b3b8:goto L54b3b8;
case 0x54b3ba:c.instructions+=1;goto B54b3ba;
case 0x54b3bf:goto L54b3bf;
case 0x54b3c2:c.instructions+=1;goto B54b3c2;
case 0x54b3c4:goto L54b3c4;
case 0x54b3c6:c.instructions+=2;goto B54b3c6;
case 0x54b3c8:c.instructions+=1;goto B54b3c8;
case 0x54b3ca:goto L54b3ca;
case 0x54b3cd:c.instructions+=1;goto B54b3cd;
case 0x54b3cf:goto L54b3cf;
case 0x54b3d1:goto L54b3d1;
case 0x54b3d4:goto L54b3d4;
case 0x54b3d8:c.instructions+=8;goto B54b3d8;
case 0x54b3d9:c.instructions+=7;goto B54b3d9;
case 0x54b3da:c.instructions+=6;goto B54b3da;
case 0x54b3df:c.instructions+=5;goto B54b3df;
case 0x54b3e6:c.instructions+=4;goto B54b3e6;
case 0x54b3e8:c.instructions+=3;goto B54b3e8;
case 0x54b3e9:c.instructions+=2;goto B54b3e9;
case 0x54b3f0:c.instructions+=1;goto B54b3f0;
case 0x54b3f5:goto L54b3f5;
case 0x54b3f9:c.instructions+=7;goto B54b3f9;
case 0x54b400:c.instructions+=6;goto B54b400;
case 0x54b403:c.instructions+=5;goto B54b403;
case 0x54b406:c.instructions+=4;goto B54b406;
case 0x54b409:c.instructions+=3;goto B54b409;
case 0x54b40b:c.instructions+=2;goto B54b40b;
case 0x54b412:c.instructions+=1;goto B54b412;
case 0x54b414:goto L54b414;
case 0x54b417:c.instructions+=2;goto B54b417;
case 0x54b419:c.instructions+=1;goto B54b419;
case 0x54b41b:goto L54b41b;
case 0x54b41d:c.instructions+=1;goto B54b41d;
case 0x54b41f:goto L54b41f;
case 0x54b421:goto L54b421;
case 0x54b424:c.instructions+=5;goto B54b424;
case 0x54b427:c.instructions+=4;goto B54b427;
case 0x54b429:c.instructions+=3;goto B54b429;
case 0x54b42a:c.instructions+=2;goto B54b42a;
case 0x54b42c:c.instructions+=1;goto B54b42c;
case 0x54b42e:goto L54b42e;
case 0x54b430:c.instructions+=1;goto B54b430;
case 0x54b432:goto L54b432;
case 0x54b433:c.instructions+=1;goto B54b433;
case 0x54b438:goto L54b438;
case 0x54b43b:c.instructions+=2;goto B54b43b;
case 0x54b43d:c.instructions+=1;goto B54b43d;
case 0x54b43f:goto L54b43f;
case 0x54b447:c.instructions+=7;goto B54b447;
case 0x54b44b:c.instructions+=6;goto B54b44b;
case 0x54b44c:c.instructions+=5;goto B54b44c;
case 0x54b44e:c.instructions+=4;goto B54b44e;
case 0x54b455:c.instructions+=3;goto B54b455;
case 0x54b459:c.instructions+=2;goto B54b459;
case 0x54b45d:c.instructions+=1;goto B54b45d;
case 0x54b462:goto L54b462;
case 0x54b466:c.instructions+=4;goto B54b466;
case 0x54b468:c.instructions+=3;goto B54b468;
case 0x54b473:c.instructions+=2;goto B54b473;
case 0x54b47b:c.instructions+=1;goto B54b47b;
case 0x54b47d:goto L54b47d;
case 0x54b482:c.instructions+=2;goto B54b482;
case 0x54b484:c.instructions+=1;goto B54b484;
case 0x54b486:goto L54b486;
case 0x54b489:c.instructions+=3;goto B54b489;
case 0x54b48a:c.instructions+=2;goto B54b48a;
case 0x54b48b:c.instructions+=1;goto B54b48b;
case 0x54b490:goto L54b490;
case 0x54b492:c.instructions+=1;goto B54b492;
case 0x54b494:goto L54b494;
case 0x54b498:c.instructions+=1;goto B54b498;
case 0x54b49a:goto L54b49a;
case 0x54b49c:goto L54b49c;
case 0x54b4a0:c.instructions+=7;goto B54b4a0;
case 0x54b4a1:c.instructions+=6;goto B54b4a1;
case 0x54b4a6:c.instructions+=5;goto B54b4a6;
case 0x54b4a9:c.instructions+=4;goto B54b4a9;
case 0x54b4b0:c.instructions+=3;goto B54b4b0;
case 0x54b4b2:c.instructions+=2;goto B54b4b2;
case 0x54b4b3:c.instructions+=1;goto B54b4b3;
case 0x54b4b8:goto L54b4b8;
case 0x54b4bc:c.instructions+=7;goto B54b4bc;
case 0x54b4c3:c.instructions+=6;goto B54b4c3;
case 0x54b4c6:c.instructions+=5;goto B54b4c6;
case 0x54b4c9:c.instructions+=4;goto B54b4c9;
case 0x54b4cc:c.instructions+=3;goto B54b4cc;
case 0x54b4ce:c.instructions+=2;goto B54b4ce;
case 0x54b4d5:c.instructions+=1;goto B54b4d5;
case 0x54b4d7:goto L54b4d7;
case 0x54b4da:c.instructions+=2;goto B54b4da;
case 0x54b4dc:c.instructions+=1;goto B54b4dc;
case 0x54b4de:goto L54b4de;
case 0x54b4e0:c.instructions+=1;goto B54b4e0;
case 0x54b4e2:goto L54b4e2;
case 0x54b4e4:goto L54b4e4;
case 0x54b4e7:c.instructions+=5;goto B54b4e7;
case 0x54b4ea:c.instructions+=4;goto B54b4ea;
case 0x54b4ec:c.instructions+=3;goto B54b4ec;
case 0x54b4ed:c.instructions+=2;goto B54b4ed;
case 0x54b4ef:c.instructions+=1;goto B54b4ef;
case 0x54b4f1:goto L54b4f1;
case 0x54b4f3:c.instructions+=1;goto B54b4f3;
case 0x54b4f5:goto L54b4f5;
case 0x54b4f6:c.instructions+=1;goto B54b4f6;
case 0x54b4fb:goto L54b4fb;
case 0x54b4fe:c.instructions+=2;goto B54b4fe;
case 0x54b500:c.instructions+=1;goto B54b500;
case 0x54b502:goto L54b502;
case 0x54b50a:c.instructions+=7;goto B54b50a;
case 0x54b50e:c.instructions+=6;goto B54b50e;
case 0x54b50f:c.instructions+=5;goto B54b50f;
case 0x54b511:c.instructions+=4;goto B54b511;
case 0x54b51c:c.instructions+=3;goto B54b51c;
case 0x54b520:c.instructions+=2;goto B54b520;
case 0x54b524:c.instructions+=1;goto B54b524;
case 0x54b529:goto L54b529;
case 0x54b52d:c.instructions+=4;goto B54b52d;
case 0x54b52f:c.instructions+=3;goto B54b52f;
case 0x54b53a:c.instructions+=2;goto B54b53a;
case 0x54b542:c.instructions+=1;goto B54b542;
case 0x54b544:goto L54b544;
case 0x54b549:c.instructions+=2;goto B54b549;
case 0x54b54b:c.instructions+=1;goto B54b54b;
case 0x54b54d:goto L54b54d;
case 0x54b550:c.instructions+=3;goto B54b550;
case 0x54b551:c.instructions+=2;goto B54b551;
case 0x54b552:c.instructions+=1;goto B54b552;
case 0x54b557:goto L54b557;
case 0x54b559:c.instructions+=1;goto B54b559;
case 0x54b55b:goto L54b55b;
case 0x54b55f:c.instructions+=1;goto B54b55f;
case 0x54b561:goto L54b561;
case 0x54b563:goto L54b563;
case 0x54b567:c.instructions+=7;goto B54b567;
case 0x54b56b:c.instructions+=6;goto B54b56b;
case 0x54b56e:c.instructions+=5;goto B54b56e;
case 0x54b572:c.instructions+=4;goto B54b572;
case 0x54b575:c.instructions+=3;goto B54b575;
case 0x54b57b:c.instructions+=2;goto B54b57b;
case 0x54b57d:c.instructions+=1;goto B54b57d;
case 0x54b57f:goto L54b57f;
case 0x54b580:c.instructions+=1;goto B54b580;
case 0x54b585:goto L54b585;
case 0x54b588:c.instructions+=2;goto B54b588;
case 0x54b58a:c.instructions+=1;goto B54b58a;
case 0x54b58c:goto L54b58c;
case 0x54b594:c.instructions+=7;goto B54b594;
case 0x54b598:c.instructions+=6;goto B54b598;
case 0x54b599:c.instructions+=5;goto B54b599;
case 0x54b59b:c.instructions+=4;goto B54b59b;
case 0x54b5a6:c.instructions+=3;goto B54b5a6;
case 0x54b5aa:c.instructions+=2;goto B54b5aa;
case 0x54b5ae:c.instructions+=1;goto B54b5ae;
case 0x54b5b3:goto L54b5b3;
case 0x54b5b7:c.instructions+=4;goto B54b5b7;
case 0x54b5b9:c.instructions+=3;goto B54b5b9;
case 0x54b5c4:c.instructions+=2;goto B54b5c4;
case 0x54b5cc:c.instructions+=1;goto B54b5cc;
case 0x54b5ce:goto L54b5ce;
case 0x54b5d0:c.instructions+=1;goto B54b5d0;
case 0x54b5d2:goto L54b5d2;
case 0x54b5d7:c.instructions+=2;goto B54b5d7;
case 0x54b5d9:c.instructions+=1;goto B54b5d9;
case 0x54b5db:goto L54b5db;
case 0x54b5de:c.instructions+=3;goto B54b5de;
case 0x54b5df:c.instructions+=2;goto B54b5df;
case 0x54b5e0:c.instructions+=1;goto B54b5e0;
case 0x54b5e5:goto L54b5e5;
case 0x54b5e7:c.instructions+=1;goto B54b5e7;
case 0x54b5e9:goto L54b5e9;
case 0x54b5eb:goto L54b5eb;
case 0x54b5ed:c.instructions+=1;goto B54b5ed;
case 0x54b5f2:goto L54b5f2;
case 0x54b5f5:c.instructions+=2;goto B54b5f5;
case 0x54b5f7:c.instructions+=1;goto B54b5f7;
case 0x54b5f9:goto L54b5f9;
case 0x54b5ff:c.instructions+=3;goto B54b5ff;
case 0x54b602:c.instructions+=2;goto B54b602;
case 0x54b605:c.instructions+=1;goto B54b605;
case 0x54b607:goto L54b607;
case 0x54b609:goto L54b609;
case 0x54b60d:c.instructions+=12;goto B54b60d;
case 0x54b610:c.instructions+=11;goto B54b610;
case 0x54b614:c.instructions+=10;goto B54b614;
case 0x54b618:c.instructions+=9;goto B54b618;
case 0x54b61b:c.instructions+=8;goto B54b61b;
case 0x54b61d:c.instructions+=7;goto B54b61d;
case 0x54b620:c.instructions+=6;goto B54b620;
case 0x54b623:c.instructions+=5;goto B54b623;
case 0x54b625:c.instructions+=4;goto B54b625;
case 0x54b628:c.instructions+=3;goto B54b628;
case 0x54b62e:c.instructions+=2;goto B54b62e;
case 0x54b630:c.instructions+=1;goto B54b630;
case 0x54b632:goto L54b632;
case 0x54b633:c.instructions+=1;goto B54b633;
case 0x54b638:goto L54b638;
case 0x54b63b:c.instructions+=2;goto B54b63b;
case 0x54b63d:c.instructions+=1;goto B54b63d;
case 0x54b63f:goto L54b63f;
case 0x54b647:c.instructions+=7;goto B54b647;
case 0x54b64b:c.instructions+=6;goto B54b64b;
case 0x54b64c:c.instructions+=5;goto B54b64c;
case 0x54b64e:c.instructions+=4;goto B54b64e;
case 0x54b659:c.instructions+=3;goto B54b659;
case 0x54b65d:c.instructions+=2;goto B54b65d;
case 0x54b661:c.instructions+=1;goto B54b661;
case 0x54b666:goto L54b666;
case 0x54b66a:c.instructions+=4;goto B54b66a;
case 0x54b66c:c.instructions+=3;goto B54b66c;
case 0x54b677:c.instructions+=2;goto B54b677;
case 0x54b67f:c.instructions+=1;goto B54b67f;
case 0x54b681:goto L54b681;
case 0x54b683:c.instructions+=1;goto B54b683;
case 0x54b685:goto L54b685;
case 0x54b68a:c.instructions+=2;goto B54b68a;
case 0x54b68c:c.instructions+=1;goto B54b68c;
case 0x54b68e:goto L54b68e;
case 0x54b691:c.instructions+=3;goto B54b691;
case 0x54b692:c.instructions+=2;goto B54b692;
case 0x54b693:c.instructions+=1;goto B54b693;
case 0x54b698:goto L54b698;
case 0x54b69a:c.instructions+=1;goto B54b69a;
case 0x54b69c:goto L54b69c;
case 0x54b69e:goto L54b69e;
case 0x54b6a0:c.instructions+=1;goto B54b6a0;
case 0x54b6a5:goto L54b6a5;
case 0x54b6a8:c.instructions+=2;goto B54b6a8;
case 0x54b6aa:c.instructions+=1;goto B54b6aa;
case 0x54b6ac:goto L54b6ac;
case 0x54b6b2:c.instructions+=3;goto B54b6b2;
case 0x54b6b5:c.instructions+=2;goto B54b6b5;
case 0x54b6b8:c.instructions+=1;goto B54b6b8;
case 0x54b6ba:goto L54b6ba;
case 0x54b6bc:goto L54b6bc;
case 0x54b6bf:c.instructions+=10;goto B54b6bf;
case 0x54b6c3:c.instructions+=9;goto B54b6c3;
case 0x54b6c7:c.instructions+=8;goto B54b6c7;
case 0x54b6c9:c.instructions+=7;goto B54b6c9;
case 0x54b6cc:c.instructions+=6;goto B54b6cc;
case 0x54b6cf:c.instructions+=5;goto B54b6cf;
case 0x54b6d1:c.instructions+=4;goto B54b6d1;
case 0x54b6d4:c.instructions+=3;goto B54b6d4;
case 0x54b6da:c.instructions+=2;goto B54b6da;
case 0x54b6dc:c.instructions+=1;goto B54b6dc;
case 0x54b6de:goto L54b6de;
case 0x54b6df:c.instructions+=1;goto B54b6df;
case 0x54b6e4:goto L54b6e4;
case 0x54b6e7:c.instructions+=2;goto B54b6e7;
case 0x54b6e9:c.instructions+=1;goto B54b6e9;
case 0x54b6eb:goto L54b6eb;
case 0x54b6f3:c.instructions+=7;goto B54b6f3;
case 0x54b6f7:c.instructions+=6;goto B54b6f7;
case 0x54b6f8:c.instructions+=5;goto B54b6f8;
case 0x54b6fa:c.instructions+=4;goto B54b6fa;
case 0x54b705:c.instructions+=3;goto B54b705;
case 0x54b709:c.instructions+=2;goto B54b709;
case 0x54b70d:c.instructions+=1;goto B54b70d;
case 0x54b712:goto L54b712;
case 0x54b716:c.instructions+=4;goto B54b716;
case 0x54b718:c.instructions+=3;goto B54b718;
case 0x54b723:c.instructions+=2;goto B54b723;
case 0x54b72b:c.instructions+=1;goto B54b72b;
case 0x54b72d:goto L54b72d;
case 0x54b72f:c.instructions+=1;goto B54b72f;
case 0x54b731:goto L54b731;
case 0x54b736:c.instructions+=2;goto B54b736;
case 0x54b738:c.instructions+=1;goto B54b738;
case 0x54b73a:goto L54b73a;
case 0x54b73d:c.instructions+=3;goto B54b73d;
case 0x54b73e:c.instructions+=2;goto B54b73e;
case 0x54b73f:c.instructions+=1;goto B54b73f;
case 0x54b744:goto L54b744;
case 0x54b746:c.instructions+=1;goto B54b746;
case 0x54b748:goto L54b748;
case 0x54b74a:goto L54b74a;
case 0x54b74c:c.instructions+=1;goto B54b74c;
case 0x54b751:goto L54b751;
case 0x54b754:c.instructions+=2;goto B54b754;
case 0x54b756:c.instructions+=1;goto B54b756;
case 0x54b758:goto L54b758;
case 0x54b75e:c.instructions+=3;goto B54b75e;
case 0x54b761:c.instructions+=2;goto B54b761;
case 0x54b764:c.instructions+=1;goto B54b764;
case 0x54b766:goto L54b766;
case 0x54b768:goto L54b768;
case 0x54b76b:c.instructions+=10;goto B54b76b;
case 0x54b76f:c.instructions+=9;goto B54b76f;
case 0x54b773:c.instructions+=8;goto B54b773;
case 0x54b775:c.instructions+=7;goto B54b775;
case 0x54b778:c.instructions+=6;goto B54b778;
case 0x54b77b:c.instructions+=5;goto B54b77b;
case 0x54b77d:c.instructions+=4;goto B54b77d;
case 0x54b780:c.instructions+=3;goto B54b780;
case 0x54b786:c.instructions+=2;goto B54b786;
case 0x54b788:c.instructions+=1;goto B54b788;
case 0x54b78a:goto L54b78a;
case 0x54b78b:c.instructions+=1;goto B54b78b;
case 0x54b790:goto L54b790;
case 0x54b793:c.instructions+=2;goto B54b793;
case 0x54b795:c.instructions+=1;goto B54b795;
case 0x54b797:goto L54b797;
case 0x54b79f:c.instructions+=7;goto B54b79f;
case 0x54b7a3:c.instructions+=6;goto B54b7a3;
case 0x54b7a4:c.instructions+=5;goto B54b7a4;
case 0x54b7a6:c.instructions+=4;goto B54b7a6;
case 0x54b7b1:c.instructions+=3;goto B54b7b1;
case 0x54b7b5:c.instructions+=2;goto B54b7b5;
case 0x54b7b9:c.instructions+=1;goto B54b7b9;
case 0x54b7be:goto L54b7be;
case 0x54b7c2:c.instructions+=4;goto B54b7c2;
case 0x54b7c4:c.instructions+=3;goto B54b7c4;
case 0x54b7cf:c.instructions+=2;goto B54b7cf;
case 0x54b7d7:c.instructions+=1;goto B54b7d7;
case 0x54b7d9:goto L54b7d9;
case 0x54b7db:c.instructions+=1;goto B54b7db;
case 0x54b7dd:goto L54b7dd;
case 0x54b7e2:c.instructions+=2;goto B54b7e2;
case 0x54b7e4:c.instructions+=1;goto B54b7e4;
case 0x54b7e6:goto L54b7e6;
case 0x54b7e9:c.instructions+=3;goto B54b7e9;
case 0x54b7ea:c.instructions+=2;goto B54b7ea;
case 0x54b7eb:c.instructions+=1;goto B54b7eb;
case 0x54b7f0:goto L54b7f0;
case 0x54b7f2:c.instructions+=1;goto B54b7f2;
case 0x54b7f4:goto L54b7f4;
case 0x54b7f6:goto L54b7f6;
case 0x54b7f8:c.instructions+=1;goto B54b7f8;
case 0x54b7fd:goto L54b7fd;
case 0x54b800:c.instructions+=2;goto B54b800;
case 0x54b802:c.instructions+=1;goto B54b802;
case 0x54b804:goto L54b804;
case 0x54b80a:c.instructions+=3;goto B54b80a;
case 0x54b80d:c.instructions+=2;goto B54b80d;
case 0x54b810:c.instructions+=1;goto B54b810;
case 0x54b812:goto L54b812;
case 0x54b814:goto L54b814;
case 0x54b817:c.instructions+=10;goto B54b817;
case 0x54b81b:c.instructions+=9;goto B54b81b;
case 0x54b81f:c.instructions+=8;goto B54b81f;
case 0x54b821:c.instructions+=7;goto B54b821;
case 0x54b824:c.instructions+=6;goto B54b824;
case 0x54b827:c.instructions+=5;goto B54b827;
case 0x54b829:c.instructions+=4;goto B54b829;
case 0x54b82c:c.instructions+=3;goto B54b82c;
case 0x54b832:c.instructions+=2;goto B54b832;
case 0x54b834:c.instructions+=1;goto B54b834;
case 0x54b836:goto L54b836;
case 0x54b837:c.instructions+=1;goto B54b837;
case 0x54b83c:goto L54b83c;
case 0x54b83f:c.instructions+=2;goto B54b83f;
case 0x54b841:c.instructions+=1;goto B54b841;
case 0x54b843:goto L54b843;
case 0x54b84b:c.instructions+=7;goto B54b84b;
case 0x54b84f:c.instructions+=6;goto B54b84f;
case 0x54b850:c.instructions+=5;goto B54b850;
case 0x54b852:c.instructions+=4;goto B54b852;
case 0x54b85d:c.instructions+=3;goto B54b85d;
case 0x54b861:c.instructions+=2;goto B54b861;
case 0x54b865:c.instructions+=1;goto B54b865;
case 0x54b86a:goto L54b86a;
case 0x54b86e:c.instructions+=4;goto B54b86e;
case 0x54b870:c.instructions+=3;goto B54b870;
case 0x54b87b:c.instructions+=2;goto B54b87b;
case 0x54b883:c.instructions+=1;goto B54b883;
case 0x54b885:goto L54b885;
case 0x54b887:c.instructions+=1;goto B54b887;
case 0x54b889:goto L54b889;
case 0x54b88e:c.instructions+=2;goto B54b88e;
case 0x54b890:c.instructions+=1;goto B54b890;
case 0x54b892:goto L54b892;
case 0x54b895:c.instructions+=3;goto B54b895;
case 0x54b896:c.instructions+=2;goto B54b896;
case 0x54b897:c.instructions+=1;goto B54b897;
case 0x54b89c:goto L54b89c;
case 0x54b89e:c.instructions+=1;goto B54b89e;
case 0x54b8a0:goto L54b8a0;
case 0x54b8a2:goto L54b8a2;
case 0x54b8a4:c.instructions+=1;goto B54b8a4;
case 0x54b8a9:goto L54b8a9;
case 0x54b8ac:c.instructions+=2;goto B54b8ac;
case 0x54b8ae:c.instructions+=1;goto B54b8ae;
case 0x54b8b0:goto L54b8b0;
case 0x54b8b6:c.instructions+=3;goto B54b8b6;
case 0x54b8b9:c.instructions+=2;goto B54b8b9;
case 0x54b8bc:c.instructions+=1;goto B54b8bc;
case 0x54b8be:goto L54b8be;
case 0x54b8c0:goto L54b8c0;
case 0x54b8c3:c.instructions+=10;goto B54b8c3;
case 0x54b8c7:c.instructions+=9;goto B54b8c7;
case 0x54b8cb:c.instructions+=8;goto B54b8cb;
case 0x54b8cd:c.instructions+=7;goto B54b8cd;
case 0x54b8d0:c.instructions+=6;goto B54b8d0;
case 0x54b8d3:c.instructions+=5;goto B54b8d3;
case 0x54b8d5:c.instructions+=4;goto B54b8d5;
case 0x54b8d8:c.instructions+=3;goto B54b8d8;
case 0x54b8da:c.instructions+=2;goto B54b8da;
case 0x54b8e0:c.instructions+=1;goto B54b8e0;
case 0x54b8e2:goto L54b8e2;
case 0x54b8e3:c.instructions+=1;goto B54b8e3;
case 0x54b8e8:goto L54b8e8;
case 0x54b8eb:c.instructions+=2;goto B54b8eb;
case 0x54b8ed:c.instructions+=1;goto B54b8ed;
case 0x54b8ef:goto L54b8ef;
case 0x54b8f7:c.instructions+=7;goto B54b8f7;
case 0x54b8fb:c.instructions+=6;goto B54b8fb;
case 0x54b8fc:c.instructions+=5;goto B54b8fc;
case 0x54b8fe:c.instructions+=4;goto B54b8fe;
case 0x54b909:c.instructions+=3;goto B54b909;
case 0x54b90d:c.instructions+=2;goto B54b90d;
case 0x54b911:c.instructions+=1;goto B54b911;
case 0x54b916:goto L54b916;
case 0x54b91a:c.instructions+=4;goto B54b91a;
case 0x54b91c:c.instructions+=3;goto B54b91c;
case 0x54b927:c.instructions+=2;goto B54b927;
case 0x54b92f:c.instructions+=1;goto B54b92f;
case 0x54b931:goto L54b931;
case 0x54b936:c.instructions+=2;goto B54b936;
case 0x54b938:c.instructions+=1;goto B54b938;
case 0x54b93a:goto L54b93a;
case 0x54b93d:c.instructions+=3;goto B54b93d;
case 0x54b93e:c.instructions+=2;goto B54b93e;
case 0x54b93f:c.instructions+=1;goto B54b93f;
case 0x54b944:goto L54b944;
case 0x54b946:goto L54b946;
case 0x54b948:goto L54b948;
case 0x54b94c:c.instructions+=15;goto B54b94c;
case 0x54b950:c.instructions+=14;goto B54b950;
case 0x54b953:c.instructions+=13;goto B54b953;
case 0x54b959:c.instructions+=12;goto B54b959;
case 0x54b95d:c.instructions+=11;goto B54b95d;
case 0x54b961:c.instructions+=10;goto B54b961;
case 0x54b964:c.instructions+=9;goto B54b964;
case 0x54b968:c.instructions+=8;goto B54b968;
case 0x54b96f:c.instructions+=7;goto B54b96f;
case 0x54b972:c.instructions+=6;goto B54b972;
case 0x54b979:c.instructions+=5;goto B54b979;
case 0x54b980:c.instructions+=4;goto B54b980;
case 0x54b984:c.instructions+=3;goto B54b984;
case 0x54b98a:c.instructions+=2;goto B54b98a;
case 0x54b98e:c.instructions+=1;goto B54b98e;
case 0x54b994:goto L54b994;
case 0x54b998:c.instructions+=3;goto B54b998;
case 0x54b99a:c.instructions+=2;goto B54b99a;
case 0x54b99d:c.instructions+=1;goto B54b99d;
case 0x54b9a0:goto L54b9a0;
case 0x54b9a2:c.instructions+=1;goto B54b9a2;
case 0x54b9a7:goto L54b9a7;
case 0x54b9aa:c.instructions+=2;goto B54b9aa;
case 0x54b9ac:c.instructions+=1;goto B54b9ac;
case 0x54b9ae:goto L54b9ae;
case 0x54b9b1:c.instructions+=9;goto B54b9b1;
case 0x54b9b3:c.instructions+=8;goto B54b9b3;
case 0x54b9b6:c.instructions+=7;goto B54b9b6;
case 0x54b9ba:c.instructions+=6;goto B54b9ba;
case 0x54b9c0:c.instructions+=5;goto B54b9c0;
case 0x54b9c7:c.instructions+=4;goto B54b9c7;
case 0x54b9cb:c.instructions+=3;goto B54b9cb;
case 0x54b9cd:c.instructions+=2;goto B54b9cd;
case 0x54b9d0:c.instructions+=1;goto B54b9d0;
case 0x54b9d2:goto L54b9d2;
case 0x54b9d4:c.instructions+=1;goto B54b9d4;
case 0x54b9d6:goto L54b9d6;
case 0x54b9d9:c.instructions+=11;goto B54b9d9;
case 0x54b9dc:c.instructions+=10;goto B54b9dc;
case 0x54b9de:c.instructions+=9;goto B54b9de;
case 0x54b9e1:c.instructions+=8;goto B54b9e1;
case 0x54b9e4:c.instructions+=7;goto B54b9e4;
case 0x54b9e6:c.instructions+=6;goto B54b9e6;
case 0x54b9e9:c.instructions+=5;goto B54b9e9;
case 0x54b9ec:c.instructions+=4;goto B54b9ec;
case 0x54b9ed:c.instructions+=3;goto B54b9ed;
case 0x54b9ef:c.instructions+=2;goto B54b9ef;
case 0x54b9f2:c.instructions+=1;goto B54b9f2;
case 0x54b9f4:goto L54b9f4;
case 0x54b9f6:c.instructions+=2;goto B54b9f6;
case 0x54b9f8:c.instructions+=1;goto B54b9f8;
case 0x54b9fa:goto L54b9fa;
case 0x54b9fd:c.instructions+=1;goto B54b9fd;
case 0x54b9ff:goto L54b9ff;
case 0x54ba01:goto L54ba01;
case 0x54ba04:c.instructions+=1;goto B54ba04;
case 0x54ba0b:goto L54ba0b;
case 0x54ba0e:c.instructions+=2;goto B54ba0e;
case 0x54ba10:c.instructions+=1;goto B54ba10;
case 0x54ba12:goto L54ba12;
case 0x54ba14:c.instructions+=2;goto B54ba14;
case 0x54ba16:c.instructions+=1;goto B54ba16;
case 0x54ba18:goto L54ba18;
case 0x54ba1b:c.instructions+=1;goto B54ba1b;
case 0x54ba1d:goto L54ba1d;
case 0x54ba1f:goto L54ba1f;
case 0x54ba22:goto L54ba22;
case 0x54ba25:c.instructions+=3;goto B54ba25;
case 0x54ba28:c.instructions+=2;goto B54ba28;
case 0x54ba29:c.instructions+=1;goto B54ba29;
case 0x54ba2b:goto L54ba2b;
case 0x54ba30:c.instructions+=4;goto B54ba30;
case 0x54ba32:c.instructions+=3;goto B54ba32;
case 0x54ba39:c.instructions+=2;goto B54ba39;
case 0x54ba3a:c.instructions+=1;goto B54ba3a;
case 0x54ba3c:goto L54ba3c;
case 0x54ba41:c.instructions+=3;goto B54ba41;
case 0x54ba43:c.instructions+=2;goto B54ba43;
case 0x54ba4a:c.instructions+=1;goto B54ba4a;
case 0x54ba4b:goto L54ba4b;
case 0x54ba50:goto L54ba50;
case 0x54ba53:c.instructions+=6;goto B54ba53;
case 0x54ba55:c.instructions+=5;goto B54ba55;
case 0x54ba57:c.instructions+=4;goto B54ba57;
case 0x54ba5e:c.instructions+=3;goto B54ba5e;
case 0x54ba5f:c.instructions+=2;goto B54ba5f;
case 0x54ba61:c.instructions+=1;goto B54ba61;
case 0x54ba66:goto L54ba66;
case 0x54ba6d:c.instructions+=7;goto B54ba6d;
case 0x54ba6f:c.instructions+=6;goto B54ba6f;
case 0x54ba72:c.instructions+=5;goto B54ba72;
case 0x54ba78:c.instructions+=4;goto B54ba78;
case 0x54ba7a:c.instructions+=3;goto B54ba7a;
case 0x54ba7b:c.instructions+=2;goto B54ba7b;
case 0x54ba7d:c.instructions+=1;goto B54ba7d;
case 0x54ba82:goto L54ba82;
case 0x54ba89:c.instructions+=7;goto B54ba89;
case 0x54ba8b:c.instructions+=6;goto B54ba8b;
case 0x54ba8e:c.instructions+=5;goto B54ba8e;
case 0x54ba94:c.instructions+=4;goto B54ba94;
case 0x54ba96:c.instructions+=3;goto B54ba96;
case 0x54ba97:c.instructions+=2;goto B54ba97;
case 0x54ba99:c.instructions+=1;goto B54ba99;
case 0x54ba9e:goto L54ba9e;
case 0x54baa5:c.instructions+=7;goto B54baa5;
case 0x54baa7:c.instructions+=6;goto B54baa7;
case 0x54baaa:c.instructions+=5;goto B54baaa;
case 0x54bab0:c.instructions+=4;goto B54bab0;
case 0x54bab2:c.instructions+=3;goto B54bab2;
case 0x54bab3:c.instructions+=2;goto B54bab3;
case 0x54bab5:c.instructions+=1;goto B54bab5;
case 0x54baba:goto L54baba;
case 0x54bac1:c.instructions+=6;goto B54bac1;
case 0x54bac4:c.instructions+=5;goto B54bac4;
case 0x54bacb:c.instructions+=4;goto B54bacb;
case 0x54bace:c.instructions+=3;goto B54bace;
case 0x54bad1:c.instructions+=2;goto B54bad1;
case 0x54bad4:c.instructions+=1;goto B54bad4;
case 0x54bad6:goto L54bad6;
case 0x54badd:goto L54badd;
case 0x54bae2:c.instructions+=1;goto B54bae2;
case 0x54bae4:goto L54bae4;
case 0x54bae9:c.instructions+=1;goto B54bae9;
case 0x54baeb:goto L54baeb;
case 0x54baf0:c.instructions+=1;goto B54baf0;
case 0x54baf2:goto L54baf2;
case 0x54baf7:c.instructions+=1;goto B54baf7;
case 0x54baf9:goto L54baf9;
case 0x54bafb:goto L54bafb;
case 0x54bb00:goto L54bb00;
case 0x54bb02:c.instructions+=1;goto B54bb02;
case 0x54bb04:goto L54bb04;
case 0x54bb09:c.instructions+=1;goto B54bb09;
case 0x54bb0e:goto L54bb0e;
case 0x54bb10:c.instructions+=4;goto B54bb10;
case 0x54bb11:c.instructions+=3;goto B54bb11;
case 0x54bb18:c.instructions+=2;goto B54bb18;
case 0x54bb19:c.instructions+=1;goto B54bb19;
case 0x54bb1e:goto L54bb1e;
case 0x54bb21:c.instructions+=6;goto B54bb21;
case 0x54bb23:c.instructions+=5;goto B54bb23;
case 0x54bb25:c.instructions+=4;goto B54bb25;
case 0x54bb2c:c.instructions+=3;goto B54bb2c;
case 0x54bb2d:c.instructions+=2;goto B54bb2d;
case 0x54bb2f:c.instructions+=1;goto B54bb2f;
case 0x54bb34:goto L54bb34;
case 0x54bb36:c.instructions+=2;goto B54bb36;
case 0x54bb39:c.instructions+=1;goto B54bb39;
case 0x54bb3f:goto L54bb3f;
case 0x54bb41:c.instructions+=2;goto B54bb41;
case 0x54bb43:c.instructions+=1;goto B54bb43;
case 0x54bb46:goto L54bb46;
case 0x54bb4c:c.instructions+=2;goto B54bb4c;
case 0x54bb4e:c.instructions+=1;goto B54bb4e;
case 0x54bb50:goto L54bb50;
case 0x54bb56:c.instructions+=3;goto B54bb56;
case 0x54bb58:c.instructions+=2;goto B54bb58;
case 0x54bb5b:c.instructions+=1;goto B54bb5b;
case 0x54bb5d:goto L54bb5d;
case 0x54bb60:c.instructions+=3;goto B54bb60;
case 0x54bb61:c.instructions+=2;goto B54bb61;
case 0x54bb63:c.instructions+=1;goto B54bb63;
case 0x54bb68:goto L54bb68;
case 0x54bb6b:c.instructions+=4;goto B54bb6b;
case 0x54bb6c:c.instructions+=3;goto B54bb6c;
case 0x54bb6d:c.instructions+=2;goto B54bb6d;
case 0x54bb6f:c.instructions+=1;goto B54bb6f;
case 0x54bb71:goto L54bb71;
case 0x54bb74:c.instructions+=5;goto B54bb74;
case 0x54bb77:c.instructions+=4;goto B54bb77;
case 0x54bb7a:c.instructions+=3;goto B54bb7a;
case 0x54bb7b:c.instructions+=2;goto B54bb7b;
case 0x54bb7c:c.instructions+=1;goto B54bb7c;
case 0x54bb7d:goto L54bb7d;
case 0x54bb7f:c.instructions+=1;goto B54bb7f;
case 0x54bb84:goto L54bb84;
case 0x54bb8a:c.instructions+=2;goto B54bb8a;
case 0x54bb8c:c.instructions+=1;goto B54bb8c;
case 0x54bb8e:goto L54bb8e;
case 0x54bb91:c.instructions+=2;goto B54bb91;
case 0x54bb92:c.instructions+=1;goto B54bb92;
case 0x54bb97:goto L54bb97;
case 0x54bb9a:c.instructions+=2;goto B54bb9a;
case 0x54bb9b:c.instructions+=1;goto B54bb9b;
case 0x54bba0:goto L54bba0;
case 0x54bba3:c.instructions+=2;goto B54bba3;
case 0x54bba4:c.instructions+=1;goto B54bba4;
case 0x54bba9:goto L54bba9;
case 0x54bbac:c.instructions+=1;goto B54bbac;
case 0x54bbb0:goto L54bbb0;
case 0x54bbb3:c.instructions+=2;goto B54bbb3;
case 0x54bbb5:c.instructions+=1;goto B54bbb5;
case 0x54bbb7:goto L54bbb7;
case 0x54bbba:c.instructions+=1;goto B54bbba;
case 0x54bbbc:goto L54bbbc;
case 0x54bbbe:goto L54bbbe;
case 0x54bbc1:c.instructions+=4;goto B54bbc1;
case 0x54bbc5:c.instructions+=3;goto B54bbc5;
case 0x54bbc7:c.instructions+=2;goto B54bbc7;
case 0x54bbcd:c.instructions+=1;goto B54bbcd;
case 0x54bbcf:goto L54bbcf;
case 0x54bbd1:c.instructions+=1;goto B54bbd1;
case 0x54bbd7:goto L54bbd7;
case 0x54bbdd:c.instructions+=2;goto B54bbdd;
case 0x54bbdf:c.instructions+=1;goto B54bbdf;
case 0x54bbe1:goto L54bbe1;
case 0x54bbe5:c.instructions+=1;goto B54bbe5;
case 0x54bbe7:goto L54bbe7;
case 0x54bbee:goto L54bbee;
case 0x54bbf1:c.instructions+=3;goto B54bbf1;
case 0x54bbf6:c.instructions+=2;goto B54bbf6;
case 0x54bbf8:c.instructions+=1;goto B54bbf8;
case 0x54bbfa:goto L54bbfa;
case 0x54bbfd:c.instructions+=3;goto B54bbfd;
case 0x54bc00:c.instructions+=2;goto B54bc00;
case 0x54bc02:c.instructions+=1;goto B54bc02;
case 0x54bc04:goto L54bc04;
case 0x54bc06:goto L54bc06;
case 0x54bc07:c.instructions+=1;goto B54bc07;
case 0x54bc0c:goto L54bc0c;
case 0x54bc0f:c.instructions+=3;goto B54bc0f;
case 0x54bc12:c.instructions+=2;goto B54bc12;
case 0x54bc13:c.instructions+=1;goto B54bc13;
case 0x54bc15:goto L54bc15;
case 0x54bc17:goto L54bc17;
case 0x54bc19:c.instructions+=1;goto B54bc19;
case 0x54bc1b:goto L54bc1b;
case 0x54bc21:c.instructions+=2;goto B54bc21;
case 0x54bc23:c.instructions+=1;goto B54bc23;
case 0x54bc25:goto L54bc25;
case 0x54bc29:c.instructions+=1;goto B54bc29;
case 0x54bc2b:goto L54bc2b;
case 0x54bc2e:c.instructions+=3;goto B54bc2e;
case 0x54bc31:c.instructions+=2;goto B54bc31;
case 0x54bc37:c.instructions+=1;goto B54bc37;
case 0x54bc3a:goto L54bc3a;
case 0x54bc3d:c.instructions+=3;goto B54bc3d;
case 0x54bc42:c.instructions+=2;goto B54bc42;
case 0x54bc44:c.instructions+=1;goto B54bc44;
case 0x54bc46:goto L54bc46;
case 0x54bc49:c.instructions+=3;goto B54bc49;
case 0x54bc4c:c.instructions+=2;goto B54bc4c;
case 0x54bc4e:c.instructions+=1;goto B54bc4e;
case 0x54bc50:goto L54bc50;
case 0x54bc52:goto L54bc52;
case 0x54bc53:c.instructions+=1;goto B54bc53;
case 0x54bc58:goto L54bc58;
case 0x54bc5b:c.instructions+=3;goto B54bc5b;
case 0x54bc5e:c.instructions+=2;goto B54bc5e;
case 0x54bc5f:c.instructions+=1;goto B54bc5f;
case 0x54bc61:goto L54bc61;
case 0x54bc63:goto L54bc63;
case 0x54bc68:goto L54bc68;
case 0x54bc6b:c.instructions+=2;goto B54bc6b;
case 0x54bc6d:c.instructions+=1;goto B54bc6d;
case 0x54bc6f:goto L54bc6f;
case 0x54bc72:c.instructions+=1;goto B54bc72;
case 0x54bc74:goto L54bc74;
case 0x54bc76:goto L54bc76;
case 0x54bc79:c.instructions+=2;goto B54bc79;
case 0x54bc7f:c.instructions+=1;goto B54bc7f;
case 0x54bc81:goto L54bc81;
case 0x54bc83:c.instructions+=1;goto B54bc83;
case 0x54bc85:goto L54bc85;
case 0x54bc8b:c.instructions+=2;goto B54bc8b;
case 0x54bc8d:c.instructions+=1;goto B54bc8d;
case 0x54bc8f:goto L54bc8f;
case 0x54bc93:c.instructions+=1;goto B54bc93;
case 0x54bc95:goto L54bc95;
case 0x54bc9c:goto L54bc9c;
case 0x54bc9f:c.instructions+=1;goto B54bc9f;
case 0x54bca1:goto L54bca1;
case 0x54bca4:c.instructions+=3;goto B54bca4;
case 0x54bca7:c.instructions+=2;goto B54bca7;
case 0x54bca9:c.instructions+=1;goto B54bca9;
case 0x54bcab:goto L54bcab;
case 0x54bcad:c.instructions+=1;goto B54bcad;
case 0x54bcb0:goto L54bcb0;
case 0x54bcb1:c.instructions+=1;goto B54bcb1;
case 0x54bcb6:goto L54bcb6;
case 0x54bcb9:c.instructions+=3;goto B54bcb9;
case 0x54bcbc:c.instructions+=2;goto B54bcbc;
case 0x54bcbd:c.instructions+=1;goto B54bcbd;
case 0x54bcbf:goto L54bcbf;
case 0x54bcc1:goto L54bcc1;
case 0x54bcc3:c.instructions+=1;goto B54bcc3;
case 0x54bcc5:goto L54bcc5;
case 0x54bccb:c.instructions+=2;goto B54bccb;
case 0x54bccd:c.instructions+=1;goto B54bccd;
case 0x54bccf:goto L54bccf;
case 0x54bcd3:c.instructions+=1;goto B54bcd3;
case 0x54bcd5:goto L54bcd5;
case 0x54bcd8:c.instructions+=3;goto B54bcd8;
case 0x54bcdb:c.instructions+=2;goto B54bcdb;
case 0x54bce1:c.instructions+=1;goto B54bce1;
case 0x54bce4:goto L54bce4;
case 0x54bce7:c.instructions+=1;goto B54bce7;
case 0x54bce9:goto L54bce9;
case 0x54bcec:c.instructions+=3;goto B54bcec;
case 0x54bcef:c.instructions+=2;goto B54bcef;
case 0x54bcf1:c.instructions+=1;goto B54bcf1;
case 0x54bcf3:goto L54bcf3;
case 0x54bcf5:goto L54bcf5;
case 0x54bcf6:c.instructions+=1;goto B54bcf6;
case 0x54bcfb:goto L54bcfb;
case 0x54bcfe:c.instructions+=3;goto B54bcfe;
case 0x54bd01:c.instructions+=2;goto B54bd01;
case 0x54bd02:c.instructions+=1;goto B54bd02;
case 0x54bd04:goto L54bd04;
case 0x54bd0b:c.instructions+=7;goto B54bd0b;
case 0x54bd0c:c.instructions+=6;goto B54bd0c;
case 0x54bd0d:c.instructions+=5;goto B54bd0d;
case 0x54bd0e:c.instructions+=4;goto B54bd0e;
case 0x54bd0f:c.instructions+=3;goto B54bd0f;
case 0x54bd16:c.instructions+=2;goto B54bd16;
case 0x54bd1c:c.instructions+=1;goto B54bd1c;
case 0x54bd30:goto L54bd30;
case 0x54bd31:c.instructions+=11;goto B54bd31;
case 0x54bd32:c.instructions+=10;goto B54bd32;
case 0x54bd33:c.instructions+=9;goto B54bd33;
case 0x54bd35:c.instructions+=8;goto B54bd35;
case 0x54bd36:c.instructions+=7;goto B54bd36;
case 0x54bd3b:c.instructions+=6;goto B54bd3b;
case 0x54bd3d:c.instructions+=5;goto B54bd3d;
case 0x54bd3f:c.instructions+=4;goto B54bd3f;
case 0x54bd41:c.instructions+=3;goto B54bd41;
case 0x54bd47:c.instructions+=2;goto B54bd47;
case 0x54bd49:c.instructions+=1;goto B54bd49;
case 0x54bd50:goto L54bd50;
case 0x54bd53:c.instructions+=2;goto B54bd53;
case 0x54bd55:c.instructions+=1;goto B54bd55;
case 0x54bd57:goto L54bd57;
case 0x54bd5b:c.instructions+=5;goto B54bd5b;
case 0x54bd5e:c.instructions+=4;goto B54bd5e;
case 0x54bd60:c.instructions+=3;goto B54bd60;
case 0x54bd62:c.instructions+=2;goto B54bd62;
case 0x54bd69:c.instructions+=1;goto B54bd69;
case 0x54bd6b:goto L54bd6b;
case 0x54bd6d:c.instructions+=1;goto B54bd6d;
case 0x54bd70:goto L54bd70;
case 0x54bd71:c.instructions+=3;goto B54bd71;
case 0x54bd74:c.instructions+=2;goto B54bd74;
case 0x54bd77:c.instructions+=1;goto B54bd77;
case 0x54bd79:goto L54bd79;
case 0x54bd7c:c.instructions+=4;goto B54bd7c;
case 0x54bd7f:c.instructions+=3;goto B54bd7f;
case 0x54bd85:c.instructions+=2;goto B54bd85;
case 0x54bd87:c.instructions+=1;goto B54bd87;
case 0x54bd89:goto L54bd89;
case 0x54bd8d:c.instructions+=4;goto B54bd8d;
case 0x54bd90:c.instructions+=3;goto B54bd90;
case 0x54bd92:c.instructions+=2;goto B54bd92;
case 0x54bd95:c.instructions+=1;goto B54bd95;
case 0x54bd97:goto L54bd97;
case 0x54bd9c:c.instructions+=2;goto B54bd9c;
case 0x54bd9e:c.instructions+=1;goto B54bd9e;
case 0x54bda0:goto L54bda0;
case 0x54bda3:c.instructions+=2;goto B54bda3;
case 0x54bda5:c.instructions+=1;goto B54bda5;
case 0x54bda7:goto L54bda7;
case 0x54bda9:c.instructions+=2;goto B54bda9;
case 0x54bdab:c.instructions+=1;goto B54bdab;
case 0x54bdb0:goto L54bdb0;
case 0x54bdb2:c.instructions+=1;goto B54bdb2;
case 0x54bdb4:goto L54bdb4;
case 0x54bdb6:c.instructions+=2;goto B54bdb6;
case 0x54bdb8:c.instructions+=1;goto B54bdb8;
case 0x54bdbd:goto L54bdbd;
case 0x54bdbf:c.instructions+=1;goto B54bdbf;
case 0x54bdc1:goto L54bdc1;
case 0x54bdc7:c.instructions+=5;goto B54bdc7;
case 0x54bdcd:c.instructions+=4;goto B54bdcd;
case 0x54bdce:c.instructions+=3;goto B54bdce;
case 0x54bdcf:c.instructions+=2;goto B54bdcf;
case 0x54bdd1:c.instructions+=1;goto B54bdd1;
case 0x54bdd6:goto L54bdd6;
case 0x54bdd8:c.instructions+=3;goto B54bdd8;
case 0x54bdda:c.instructions+=2;goto B54bdda;
case 0x54bddd:c.instructions+=1;goto B54bddd;
case 0x54bde0:goto L54bde0;
case 0x54bde1:c.instructions+=4;goto B54bde1;
case 0x54bde2:c.instructions+=3;goto B54bde2;
case 0x54bde3:c.instructions+=2;goto B54bde3;
case 0x54bde4:c.instructions+=1;goto B54bde4;
case 0x54bdf0:goto L54bdf0;
case 0x54bdf2:c.instructions+=11;goto B54bdf2;
case 0x54bdf7:c.instructions+=10;goto B54bdf7;
case 0x54bdfd:c.instructions+=9;goto B54bdfd;
case 0x54bdfe:c.instructions+=8;goto B54bdfe;
case 0x54be05:c.instructions+=7;goto B54be05;
case 0x54be06:c.instructions+=6;goto B54be06;
case 0x54be07:c.instructions+=5;goto B54be07;
case 0x54be08:c.instructions+=4;goto B54be08;
case 0x54be0a:c.instructions+=3;goto B54be0a;
case 0x54be0d:c.instructions+=2;goto B54be0d;
case 0x54be0f:c.instructions+=1;goto B54be0f;
case 0x54be11:goto L54be11;
case 0x54be17:c.instructions+=2;goto B54be17;
case 0x54be19:c.instructions+=1;goto B54be19;
case 0x54be1b:goto L54be1b;
case 0x54be1e:c.instructions+=2;goto B54be1e;
case 0x54be20:c.instructions+=1;goto B54be20;
case 0x54be22:goto L54be22;
case 0x54be27:c.instructions+=1;goto B54be27;
case 0x54be2c:goto L54be2c;
case 0x54be2f:c.instructions+=4;goto B54be2f;
case 0x54be33:c.instructions+=3;goto B54be33;
case 0x54be35:c.instructions+=2;goto B54be35;
case 0x54be3d:c.instructions+=1;goto B54be3d;
case 0x54be3f:goto L54be3f;
case 0x54be41:c.instructions+=1;goto B54be41;
case 0x54be46:goto L54be46;
case 0x54be48:goto L54be48;
case 0x54be4a:goto L54be4a;
case 0x54be4c:c.instructions+=2;goto B54be4c;
case 0x54be4e:c.instructions+=1;goto B54be4e;
case 0x54be50:goto L54be50;
case 0x54be53:c.instructions+=3;goto B54be53;
case 0x54be55:c.instructions+=2;goto B54be55;
case 0x54be58:c.instructions+=1;goto B54be58;
case 0x54be5a:goto L54be5a;
case 0x54be5d:goto L54be5d;
case 0x54be64:c.instructions+=4;goto B54be64;
case 0x54be67:c.instructions+=3;goto B54be67;
case 0x54be69:c.instructions+=2;goto B54be69;
case 0x54be6c:c.instructions+=1;goto B54be6c;
case 0x54be6e:goto L54be6e;
case 0x54be71:goto L54be71;
case 0x54be74:goto L54be74;
case 0x54be7a:c.instructions+=3;goto B54be7a;
case 0x54be7c:c.instructions+=2;goto B54be7c;
case 0x54be82:c.instructions+=1;goto B54be82;
case 0x54be84:goto L54be84;
case 0x54be85:c.instructions+=1;goto B54be85;
case 0x54be8a:goto L54be8a;
case 0x54be90:c.instructions+=9;goto B54be90;
case 0x54be94:c.instructions+=8;goto B54be94;
case 0x54be95:c.instructions+=7;goto B54be95;
case 0x54be9b:c.instructions+=6;goto B54be9b;
case 0x54be9d:c.instructions+=5;goto B54be9d;
case 0x54be9e:c.instructions+=4;goto B54be9e;
case 0x54be9f:c.instructions+=3;goto B54be9f;
case 0x54bea6:c.instructions+=2;goto B54bea6;
case 0x54bea9:c.instructions+=1;goto B54bea9;
case 0x54beb0:goto L54beb0;
case 0x54beb2:c.instructions+=11;goto B54beb2;
case 0x54beb7:c.instructions+=10;goto B54beb7;
case 0x54bebd:c.instructions+=9;goto B54bebd;
case 0x54bebe:c.instructions+=8;goto B54bebe;
case 0x54bec5:c.instructions+=7;goto B54bec5;
case 0x54bec6:c.instructions+=6;goto B54bec6;
case 0x54bec7:c.instructions+=5;goto B54bec7;
case 0x54bec8:c.instructions+=4;goto B54bec8;
case 0x54beca:c.instructions+=3;goto B54beca;
case 0x54becd:c.instructions+=2;goto B54becd;
case 0x54becf:c.instructions+=1;goto B54becf;
case 0x54bed1:goto L54bed1;
case 0x54bed7:c.instructions+=2;goto B54bed7;
case 0x54bed9:c.instructions+=1;goto B54bed9;
case 0x54bedb:goto L54bedb;
case 0x54bede:c.instructions+=2;goto B54bede;
case 0x54bee0:c.instructions+=1;goto B54bee0;
case 0x54bee2:goto L54bee2;
case 0x54bee7:c.instructions+=1;goto B54bee7;
case 0x54beec:goto L54beec;
case 0x54beef:c.instructions+=4;goto B54beef;
case 0x54bef3:c.instructions+=3;goto B54bef3;
case 0x54bef5:c.instructions+=2;goto B54bef5;
case 0x54befd:c.instructions+=1;goto B54befd;
case 0x54beff:goto L54beff;
case 0x54bf01:c.instructions+=1;goto B54bf01;
case 0x54bf06:goto L54bf06;
case 0x54bf08:goto L54bf08;
case 0x54bf0a:goto L54bf0a;
case 0x54bf0c:c.instructions+=2;goto B54bf0c;
case 0x54bf0e:c.instructions+=1;goto B54bf0e;
case 0x54bf10:goto L54bf10;
case 0x54bf13:c.instructions+=3;goto B54bf13;
case 0x54bf15:c.instructions+=2;goto B54bf15;
case 0x54bf18:c.instructions+=1;goto B54bf18;
case 0x54bf1a:goto L54bf1a;
case 0x54bf1d:goto L54bf1d;
case 0x54bf24:c.instructions+=4;goto B54bf24;
case 0x54bf27:c.instructions+=3;goto B54bf27;
case 0x54bf29:c.instructions+=2;goto B54bf29;
case 0x54bf2c:c.instructions+=1;goto B54bf2c;
case 0x54bf2e:goto L54bf2e;
case 0x54bf31:goto L54bf31;
case 0x54bf34:goto L54bf34;
case 0x54bf3a:c.instructions+=3;goto B54bf3a;
case 0x54bf3c:c.instructions+=2;goto B54bf3c;
case 0x54bf42:c.instructions+=1;goto B54bf42;
case 0x54bf44:goto L54bf44;
case 0x54bf45:c.instructions+=1;goto B54bf45;
case 0x54bf4a:goto L54bf4a;
case 0x54bf50:c.instructions+=9;goto B54bf50;
case 0x54bf54:c.instructions+=8;goto B54bf54;
case 0x54bf55:c.instructions+=7;goto B54bf55;
case 0x54bf5b:c.instructions+=6;goto B54bf5b;
case 0x54bf5d:c.instructions+=5;goto B54bf5d;
case 0x54bf5e:c.instructions+=4;goto B54bf5e;
case 0x54bf5f:c.instructions+=3;goto B54bf5f;
case 0x54bf66:c.instructions+=2;goto B54bf66;
case 0x54bf69:c.instructions+=1;goto B54bf69;
case 0x54bf70:goto L54bf70;
case 0x54bf76:c.instructions+=13;goto B54bf76;
case 0x54bf78:c.instructions+=12;goto B54bf78;
case 0x54bf7d:c.instructions+=11;goto B54bf7d;
case 0x54bf7e:c.instructions+=10;goto B54bf7e;
case 0x54bf82:c.instructions+=9;goto B54bf82;
case 0x54bf89:c.instructions+=8;goto B54bf89;
case 0x54bf8a:c.instructions+=7;goto B54bf8a;
case 0x54bf8b:c.instructions+=6;goto B54bf8b;
case 0x54bf8c:c.instructions+=5;goto B54bf8c;
case 0x54bf8e:c.instructions+=4;goto B54bf8e;
case 0x54bf8f:c.instructions+=3;goto B54bf8f;
case 0x54bf92:c.instructions+=2;goto B54bf92;
case 0x54bf93:c.instructions+=1;goto B54bf93;
case 0x54bf98:goto L54bf98;
case 0x54bf9c:c.instructions+=24;goto B54bf9c;
case 0x54bfa0:c.instructions+=23;goto B54bfa0;
case 0x54bfa2:c.instructions+=22;goto B54bfa2;
case 0x54bfa5:c.instructions+=21;goto B54bfa5;
case 0x54bfa8:c.instructions+=20;goto B54bfa8;
case 0x54bfab:c.instructions+=19;goto B54bfab;
case 0x54bfae:c.instructions+=18;goto B54bfae;
case 0x54bfb1:c.instructions+=17;goto B54bfb1;
case 0x54bfb4:c.instructions+=16;goto B54bfb4;
case 0x54bfb7:c.instructions+=15;goto B54bfb7;
case 0x54bfbb:c.instructions+=14;goto B54bfbb;
case 0x54bfbe:c.instructions+=13;goto B54bfbe;
case 0x54bfc2:c.instructions+=12;goto B54bfc2;
case 0x54bfc5:c.instructions+=11;goto B54bfc5;
case 0x54bfc9:c.instructions+=10;goto B54bfc9;
case 0x54bfcc:c.instructions+=9;goto B54bfcc;
case 0x54bfcf:c.instructions+=8;goto B54bfcf;
case 0x54bfd2:c.instructions+=7;goto B54bfd2;
case 0x54bfd7:c.instructions+=6;goto B54bfd7;
case 0x54bfd8:c.instructions+=5;goto B54bfd8;
case 0x54bfd9:c.instructions+=4;goto B54bfd9;
case 0x54bfda:c.instructions+=3;goto B54bfda;
case 0x54bfdf:c.instructions+=2;goto B54bfdf;
case 0x54bfe4:c.instructions+=1;goto B54bfe4;
case 0x54bfea:goto L54bfea;
case 0x54bfed:c.instructions+=4;goto B54bfed;
case 0x54bff1:c.instructions+=3;goto B54bff1;
case 0x54bff3:c.instructions+=2;goto B54bff3;
case 0x54bff7:c.instructions+=1;goto B54bff7;
case 0x54bff9:goto L54bff9;
case 0x54bffc:c.instructions+=2;goto B54bffc;
case 0x54bfff:c.instructions+=1;goto B54bfff;
default:missing_instruction(c.pc);}
B54b000:L54b000:{c.instructions+=8;NFSU2_TR(0x54b000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B54b003:{NFSU2_TR(0x54b003);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b004:{NFSU2_TR(0x54b004);
__builtin_memmove((R+24),(R+4),4);
}
B54b006:{NFSU2_TR(0x54b006);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b009:{NFSU2_TR(0x54b009);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b00d:{NFSU2_TR(0x54b00d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54b010:{NFSU2_TR(0x54b010);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54b012:{NFSU2_TR(0x54b012);
if(r1(R+518)){{goto L54b05d;}}
}
B54b014:L54b014:{c.instructions+=6;NFSU2_TR(0x54b014);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b017:{NFSU2_TR(0x54b017);
__builtin_memmove((R+8),(R+4),4);
}
B54b019:{NFSU2_TR(0x54b019);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b01d:{NFSU2_TR(0x54b01d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b01e:{NFSU2_TR(0x54b01e);
__builtin_memmove((R+4),(R+24),4);
}
B54b020:{NFSU2_TR(0x54b020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b025ull));
TAIL_STATIC(0x53da10u,53d);
}
B54b025:L54b025:{c.instructions+=5;NFSU2_TR(0x54b025);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54b029:{NFSU2_TR(0x54b029);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54b02d:{NFSU2_TR(0x54b02d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54b02f:{NFSU2_TR(0x54b02f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B54b032:{NFSU2_TR(0x54b032);
if(r1(R+514)){{goto L54b03d;}}
}
B54b034:L54b034:{c.instructions+=3;NFSU2_TR(0x54b034);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b03a:{NFSU2_TR(0x54b03a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b03b:{NFSU2_TR(0x54b03b);
{goto L54b070;}
}
B54b03d:L54b03d:{c.instructions+=5;NFSU2_TR(0x54b03d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54b041:{NFSU2_TR(0x54b041);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54b045:{NFSU2_TR(0x54b045);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54b047:{NFSU2_TR(0x54b047);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54b04a:{NFSU2_TR(0x54b04a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54b054;}}
}
B54b04c:L54b04c:{c.instructions+=2;NFSU2_TR(0x54b04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b052:{NFSU2_TR(0x54b052);
{goto L54b06f;}
}
B54b054:L54b054:{c.instructions+=3;NFSU2_TR(0x54b054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b05a:{NFSU2_TR(0x54b05a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b05b:{NFSU2_TR(0x54b05b);
{goto L54b070;}
}
B54b05d:L54b05d:{c.instructions+=4;NFSU2_TR(0x54b05d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b061:{NFSU2_TR(0x54b061);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b062:{NFSU2_TR(0x54b062);
__builtin_memmove((R+4),(R+24),4);
}
B54b064:{NFSU2_TR(0x54b064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b069ull));
TAIL_STATIC(0x53da10u,53d);
}
B54b069:L54b069:{c.instructions+=1;NFSU2_TR(0x54b069);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b06f:L54b06f:{c.instructions+=1;NFSU2_TR(0x54b06f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b070:L54b070:{c.instructions+=2;NFSU2_TR(0x54b070);
__builtin_memmove((R+4),(R+24),4);
}
B54b072:{NFSU2_TR(0x54b072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b077ull));
TAIL_STATIC(0x523600u,523);
}
B54b077:L54b077:{c.instructions+=3;NFSU2_TR(0x54b077);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b07a:{NFSU2_TR(0x54b07a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54b07d:{NFSU2_TR(0x54b07d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b080ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54b080:L54b080:{c.instructions+=3;NFSU2_TR(0x54b080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54b081:{NFSU2_TR(0x54b081);
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
B54b084:{NFSU2_TR(0x54b084);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54b090:L54b090:{c.instructions+=5;NFSU2_TR(0x54b090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b091:{NFSU2_TR(0x54b091);
__builtin_memmove((R+24),(R+4),4);
}
B54b093:{NFSU2_TR(0x54b093);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54b096:{NFSU2_TR(0x54b096);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54b098:{NFSU2_TR(0x54b098);
if(r1(R+518)){{goto L54b0ac;}}
}
B54b09a:L54b09a:{c.instructions+=4;NFSU2_TR(0x54b09a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b09d:{NFSU2_TR(0x54b09d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b09e:{NFSU2_TR(0x54b09e);
w4(R+4,u32(0x832dacull));
}
B54b0a3:{NFSU2_TR(0x54b0a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b0a8ull));
TAIL_STATIC(0x488aa0u,488);
}
B54b0a8:L54b0a8:{c.instructions+=1;NFSU2_TR(0x54b0a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54b0ac:L54b0ac:{c.instructions+=2;NFSU2_TR(0x54b0ac);
w4(R+4,u32(0x863780ull));
}
B54b0b1:{NFSU2_TR(0x54b0b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b0b6ull));
TAIL_STATIC(0x510a70u,510);
}
B54b0b6:L54b0b6:{c.instructions+=2;NFSU2_TR(0x54b0b6);
w4(R+4,u32(0x863780ull));
}
B54b0bb:{NFSU2_TR(0x54b0bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b0c0ull));
TAIL_STATIC(0x523b40u,523);
}
B54b0c0:L54b0c0:{c.instructions+=2;NFSU2_TR(0x54b0c0);
__builtin_memmove((R+4),(R+24),4);
}
B54b0c2:{NFSU2_TR(0x54b0c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b0c7ull));
TAIL_STATIC(0x510ce0u,510);
}
B54b0c7:L54b0c7:{c.instructions+=1;NFSU2_TR(0x54b0c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b0ccull));
TAIL_STATIC(0x5be1b0u,5be);
}
B54b0cc:L54b0cc:{c.instructions+=3;NFSU2_TR(0x54b0cc);
s4(0x838578,u32(0x0ull));
}
B54b0d6:{NFSU2_TR(0x54b0d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54b0d7:{NFSU2_TR(0x54b0d7);
TAIL_STATIC(0x5404a0u,540);
}
B54b0e0:L54b0e0:{c.instructions+=2;NFSU2_TR(0x54b0e0);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc98356baull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B54b0e8:{NFSU2_TR(0x54b0e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54b14b;}}
}
B54b0ea:L54b0ea:{c.instructions+=6;NFSU2_TR(0x54b0ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b0eb:{NFSU2_TR(0x54b0eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54b0ee:{NFSU2_TR(0x54b0ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b0ef:{NFSU2_TR(0x54b0ef);
__builtin_memmove((R+28),gp(0x863790),4);
}
B54b0f5:{NFSU2_TR(0x54b0f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54b0f7:{NFSU2_TR(0x54b0f7);
if(r1(R+518)){{goto L54b13b;}}
}
B54b0f9:L54b0f9:{c.instructions+=3;NFSU2_TR(0x54b0f9);
__builtin_memmove((R+0),gp(0x86378c),4);
}
B54b0fe:{NFSU2_TR(0x54b0fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54b100:{NFSU2_TR(0x54b100);
if(r1(R+518)){{goto L54b13b;}}
}
B54b102:L54b102:{c.instructions+=3;NFSU2_TR(0x54b102);
u8 U[4];
w4(U+0,u32(0x79c70cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b107:{NFSU2_TR(0x54b107);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b108:{NFSU2_TR(0x54b108);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b10dull));
TAIL_STATIC(0x4953e0u,495);
}
B54b10d:L54b10d:{c.instructions+=3;NFSU2_TR(0x54b10d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54b110:{NFSU2_TR(0x54b110);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54b112:{NFSU2_TR(0x54b112);
if(r1(R+518)){{goto L54b128;}}
}
B54b114:L54b114:{c.instructions+=2;NFSU2_TR(0x54b114);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54b117:{NFSU2_TR(0x54b117);
if(r1(R+518)){{goto L54b128;}}
}
B54b119:L54b119:{c.instructions+=4;NFSU2_TR(0x54b119);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b11c:{NFSU2_TR(0x54b11c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B54b122:{NFSU2_TR(0x54b122);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b125:{NFSU2_TR(0x54b125);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b128:L54b128:{c.instructions+=3;NFSU2_TR(0x54b128);
u8 U[4];
w4(U+0,u32(0x79c70cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b12d:{NFSU2_TR(0x54b12d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b12e:{NFSU2_TR(0x54b12e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b133ull));
TAIL_STATIC(0x495500u,495);
}
B54b133:L54b133:{c.instructions+=4;NFSU2_TR(0x54b133);
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
B54b136:{NFSU2_TR(0x54b136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54b137:{NFSU2_TR(0x54b137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54b138:{NFSU2_TR(0x54b138);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54b13b:L54b13b:{c.instructions+=3;NFSU2_TR(0x54b13b);
u8 U[4];
w4(U+0,u32(0x79c70cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b140:{NFSU2_TR(0x54b140);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b141:{NFSU2_TR(0x54b141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b146ull));
TAIL_STATIC(0x4954c0u,495);
}
B54b146:L54b146:{c.instructions+=3;NFSU2_TR(0x54b146);
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
B54b149:{NFSU2_TR(0x54b149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54b14a:{NFSU2_TR(0x54b14a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54b14b:L54b14b:{c.instructions+=1;NFSU2_TR(0x54b14b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54b150:L54b150:{c.instructions+=8;NFSU2_TR(0x54b150);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b151:{NFSU2_TR(0x54b151);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b152:{NFSU2_TR(0x54b152);
__builtin_memmove((R+24),(R+4),4);
}
B54b154:{NFSU2_TR(0x54b154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b157:{NFSU2_TR(0x54b157);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b15a:{NFSU2_TR(0x54b15a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B54b15c:{NFSU2_TR(0x54b15c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b15d:{NFSU2_TR(0x54b15d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54b176;}}
}
B54b15f:L54b15f:{c.instructions+=2;NFSU2_TR(0x54b15f);
u8 U[8];
__builtin_memmove((U+0),gp(0x838408),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54b165:{NFSU2_TR(0x54b165);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L54b176;}}
}
B54b167:L54b167:{c.instructions+=5;NFSU2_TR(0x54b167);
__builtin_memmove((R+4),gp(0x83840c),4);
}
B54b16d:{NFSU2_TR(0x54b16d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B54b170:{NFSU2_TR(0x54b170);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B54b172:{NFSU2_TR(0x54b172);
__builtin_memmove((R+28),(R+0),4);
}
B54b174:{NFSU2_TR(0x54b174);
{goto L54b178;}
}
B54b176:L54b176:{c.instructions+=1;NFSU2_TR(0x54b176);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54b178:L54b178:{c.instructions+=11;NFSU2_TR(0x54b178);
__builtin_memmove((R+4),gp(0x838578),4);
}
B54b17e:{NFSU2_TR(0x54b17e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b181:{NFSU2_TR(0x54b181);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B54b182:{NFSU2_TR(0x54b182);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B54b184:{NFSU2_TR(0x54b184);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B54b186:{NFSU2_TR(0x54b186);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x6e07f3b2ull))));
}
B54b18c:{NFSU2_TR(0x54b18c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xf7333312ull))));
}
B54b192:{NFSU2_TR(0x54b192);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b193:{NFSU2_TR(0x54b193);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b198:{NFSU2_TR(0x54b198);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b199:{NFSU2_TR(0x54b199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b19eull));
TAIL_STATIC(0x495460u,495);
}
B54b19e:L54b19e:{c.instructions+=11;NFSU2_TR(0x54b19e);
__builtin_memmove((R+0),gp(0x838578),4);
}
B54b1a3:{NFSU2_TR(0x54b1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b1a6:{NFSU2_TR(0x54b1a6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B54b1a7:{NFSU2_TR(0x54b1a7);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B54b1a9:{NFSU2_TR(0x54b1a9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B54b1ab:{NFSU2_TR(0x54b1ab);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x96a425b2ull))));
}
B54b1b0:{NFSU2_TR(0x54b1b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x246536efull))));
}
B54b1b5:{NFSU2_TR(0x54b1b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1b6:{NFSU2_TR(0x54b1b6);
u8 U[4];
w4(U+0,u32(0x10cba23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1bb:{NFSU2_TR(0x54b1bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1bc:{NFSU2_TR(0x54b1bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b1c1ull));
TAIL_STATIC(0x495460u,495);
}
B54b1c1:L54b1c1:{c.instructions+=5;NFSU2_TR(0x54b1c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b1c4:{NFSU2_TR(0x54b1c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54b1c7:{NFSU2_TR(0x54b1c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1c8:{NFSU2_TR(0x54b1c8);
u8 U[4];
w4(U+0,u32(0x79b858ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1cd:{NFSU2_TR(0x54b1cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b1d2ull));
TAIL_STATIC(0x43db80u,43d);
}
B54b1d2:L54b1d2:{c.instructions+=4;NFSU2_TR(0x54b1d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1d3:{NFSU2_TR(0x54b1d3);
u8 U[4];
w4(U+0,u32(0x9e302291ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1d8:{NFSU2_TR(0x54b1d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1d9:{NFSU2_TR(0x54b1d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b1deull));
TAIL_STATIC(0x495460u,495);
}
B54b1de:L54b1de:{c.instructions+=5;NFSU2_TR(0x54b1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54b1e1:{NFSU2_TR(0x54b1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54b1e4:{NFSU2_TR(0x54b1e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1e5:{NFSU2_TR(0x54b1e5);
u8 U[4];
w4(U+0,u32(0x79c71cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1ea:{NFSU2_TR(0x54b1ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b1efull));
TAIL_STATIC(0x43db80u,43d);
}
B54b1ef:L54b1ef:{c.instructions+=4;NFSU2_TR(0x54b1ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1f0:{NFSU2_TR(0x54b1f0);
u8 U[4];
w4(U+0,u32(0x3554deb1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1f5:{NFSU2_TR(0x54b1f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b1f6:{NFSU2_TR(0x54b1f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b1fbull));
TAIL_STATIC(0x495460u,495);
}
B54b1fb:L54b1fb:{c.instructions+=5;NFSU2_TR(0x54b1fb);
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
B54b1fe:{NFSU2_TR(0x54b1fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54b1ff:{NFSU2_TR(0x54b1ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54b200:{NFSU2_TR(0x54b200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54b201:{NFSU2_TR(0x54b201);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54b210:L54b210:{c.instructions+=13;NFSU2_TR(0x54b210);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b214:{NFSU2_TR(0x54b214);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b218:{NFSU2_TR(0x54b218);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b219:{NFSU2_TR(0x54b219);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b21a:{NFSU2_TR(0x54b21a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54b21e:{NFSU2_TR(0x54b21e);
__builtin_memmove((R+24),(R+4),4);
}
B54b220:{NFSU2_TR(0x54b220);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b224:{NFSU2_TR(0x54b224);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b225:{NFSU2_TR(0x54b225);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b226:{NFSU2_TR(0x54b226);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b227:{NFSU2_TR(0x54b227);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b228:{NFSU2_TR(0x54b228);
__builtin_memmove((R+4),(R+24),4);
}
B54b22a:{NFSU2_TR(0x54b22a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b22full));
TAIL_STATIC(0x543d40u,543);
}
B54b22f:L54b22f:{c.instructions+=2;NFSU2_TR(0x54b22f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xb5971bf1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b235:{NFSU2_TR(0x54b235);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L54b292;}}
}
B54b237:L54b237:{c.instructions+=1;NFSU2_TR(0x54b237);
if(r1(R+518)){{goto L54b24d;}}
}
B54b239:L54b239:{c.instructions+=2;NFSU2_TR(0x54b239);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b23f:{NFSU2_TR(0x54b23f);
if(r1(R+518)){{goto L54b259;}}
}
B54b241:L54b241:{c.instructions+=2;NFSU2_TR(0x54b241);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9120409eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54b247:{NFSU2_TR(0x54b247);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54b2fc;}}
}
B54b24d:L54b24d:{c.instructions+=2;NFSU2_TR(0x54b24d);
__builtin_memmove((R+4),(R+24),4);
}
B54b24f:{NFSU2_TR(0x54b24f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b254ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54b150u);}goto L54b150;}
}
B54b254:L54b254:{c.instructions+=3;NFSU2_TR(0x54b254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54b255:{NFSU2_TR(0x54b255);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54b256:{NFSU2_TR(0x54b256);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54b259:L54b259:{c.instructions+=2;NFSU2_TR(0x54b259);
__builtin_memmove((R+4),(R+24),4);
}
B54b25b:{NFSU2_TR(0x54b25b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b260ull));
TAIL_STATIC(0x510e10u,510);
}
B54b260:L54b260:{c.instructions+=3;NFSU2_TR(0x54b260);
u8 U[8];
__builtin_memmove((U+0),gp(0x838578),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b267:{NFSU2_TR(0x54b267);
s1(0x838581,u8(0x0ull));
}
B54b26e:{NFSU2_TR(0x54b26e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54b281;}}
}
B54b270:L54b270:{c.instructions+=3;NFSU2_TR(0x54b270);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b273:{NFSU2_TR(0x54b273);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b274:{NFSU2_TR(0x54b274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b279ull));
TAIL_STATIC(0x53de30u,53d);
}
B54b279:L54b279:{c.instructions+=4;NFSU2_TR(0x54b279);
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
B54b27c:{NFSU2_TR(0x54b27c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54b27d:{NFSU2_TR(0x54b27d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54b27e:{NFSU2_TR(0x54b27e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54b281:L54b281:{c.instructions+=3;NFSU2_TR(0x54b281);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b284:{NFSU2_TR(0x54b284);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b285:{NFSU2_TR(0x54b285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b28aull));
TAIL_STATIC(0x53de30u,53d);
}
B54b28a:L54b28a:{c.instructions+=4;NFSU2_TR(0x54b28a);
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
B54b28d:{NFSU2_TR(0x54b28d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54b28e:{NFSU2_TR(0x54b28e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54b28f:{NFSU2_TR(0x54b28f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54b292:L54b292:{c.instructions+=2;NFSU2_TR(0x54b292);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc98356baull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54b298:{NFSU2_TR(0x54b298);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54b2fc;}}
}
B54b29a:L54b29a:{c.instructions+=3;NFSU2_TR(0x54b29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b29d:{NFSU2_TR(0x54b29d);
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
B54b29f:{NFSU2_TR(0x54b29f);
if(r1(R+518)){{goto L54b2fc;}}
}
B54b2a1:L54b2a1:{c.instructions+=3;NFSU2_TR(0x54b2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b2a4:{NFSU2_TR(0x54b2a4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B54b2a6:{NFSU2_TR(0x54b2a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54b2bd;}}
}
B54b2a8:L54b2a8:{c.instructions+=2;NFSU2_TR(0x54b2a8);
u8 U[8];
__builtin_memmove((U+0),gp(0x838408),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54b2ae:{NFSU2_TR(0x54b2ae);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L54b2bd;}}
}
B54b2b0:L54b2b0:{c.instructions+=4;NFSU2_TR(0x54b2b0);
__builtin_memmove((R+4),gp(0x83840c),4);
}
B54b2b6:{NFSU2_TR(0x54b2b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B54b2b9:{NFSU2_TR(0x54b2b9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B54b2bb:{NFSU2_TR(0x54b2bb);
{goto L54b2bf;}
}
B54b2bd:L54b2bd:{c.instructions+=1;NFSU2_TR(0x54b2bd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54b2bf:L54b2bf:{c.instructions+=5;NFSU2_TR(0x54b2bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54b2c2:{NFSU2_TR(0x54b2c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b2c5:{NFSU2_TR(0x54b2c5);
u8 U[4];
w4(U+0,u32(0x79c724ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b2ca:{NFSU2_TR(0x54b2ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b2cb:{NFSU2_TR(0x54b2cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b2d0ull));
TAIL_STATIC(0x4953e0u,495);
}
B54b2d0:L54b2d0:{c.instructions+=3;NFSU2_TR(0x54b2d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54b2d3:{NFSU2_TR(0x54b2d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54b2d5:{NFSU2_TR(0x54b2d5);
if(r1(R+518)){{goto L54b2eb;}}
}
B54b2d7:L54b2d7:{c.instructions+=2;NFSU2_TR(0x54b2d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54b2da:{NFSU2_TR(0x54b2da);
if(r1(R+518)){{goto L54b2eb;}}
}
B54b2dc:L54b2dc:{c.instructions+=4;NFSU2_TR(0x54b2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b2df:{NFSU2_TR(0x54b2df);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B54b2e5:{NFSU2_TR(0x54b2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b2e8:{NFSU2_TR(0x54b2e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b2eb:L54b2eb:{c.instructions+=4;NFSU2_TR(0x54b2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b2ee:{NFSU2_TR(0x54b2ee);
u8 U[4];
w4(U+0,u32(0x79c724ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b2f3:{NFSU2_TR(0x54b2f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b2f4:{NFSU2_TR(0x54b2f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b2f9ull));
TAIL_STATIC(0x495500u,495);
}
B54b2f9:L54b2f9:{c.instructions+=1;NFSU2_TR(0x54b2f9);
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
B54b2fc:L54b2fc:{c.instructions+=3;NFSU2_TR(0x54b2fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54b2fd:{NFSU2_TR(0x54b2fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54b2fe:{NFSU2_TR(0x54b2fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54b310:L54b310:{c.instructions+=16;NFSU2_TR(0x54b310);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b312:{NFSU2_TR(0x54b312);
u8 U[4];
w4(U+0,u32(0x777b22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b317:{NFSU2_TR(0x54b317);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b31d:{NFSU2_TR(0x54b31d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b31e:{NFSU2_TR(0x54b31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b325:{NFSU2_TR(0x54b325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc0ull))));
}
B54b32b:{NFSU2_TR(0x54b32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b331:{NFSU2_TR(0x54b331);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b332:{NFSU2_TR(0x54b332);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b333:{NFSU2_TR(0x54b333);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54b335:{NFSU2_TR(0x54b335);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b337:{NFSU2_TR(0x54b337);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b338:{NFSU2_TR(0x54b338);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b339:{NFSU2_TR(0x54b339);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b33d:{NFSU2_TR(0x54b33d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b341:{NFSU2_TR(0x54b341);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54b994;}}
}
B54b347:L54b347:{c.instructions+=2;NFSU2_TR(0x54b347);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b349:{NFSU2_TR(0x54b349);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b34eull));
TAIL_STATIC(0x575620u,575);
}
B54b34e:L54b34e:{c.instructions+=3;NFSU2_TR(0x54b34e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b351:{NFSU2_TR(0x54b351);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b353:{NFSU2_TR(0x54b353);
if(r1(R+518)){{goto L54b38f;}}
}
B54b355:L54b355:{c.instructions+=16;NFSU2_TR(0x54b355);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B54b358:{NFSU2_TR(0x54b358);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54b35a:{NFSU2_TR(0x54b35a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b35d:{NFSU2_TR(0x54b35d);
__builtin_memmove((R+8),(R+0),4);
}
B54b35f:{NFSU2_TR(0x54b35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b362:{NFSU2_TR(0x54b362);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b365:{NFSU2_TR(0x54b365);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b368:{NFSU2_TR(0x54b368);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b36b:{NFSU2_TR(0x54b36b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b36e:{NFSU2_TR(0x54b36e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54b372:{NFSU2_TR(0x54b372);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b379:{NFSU2_TR(0x54b379);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b380:{NFSU2_TR(0x54b380);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B54b386:{NFSU2_TR(0x54b386);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b38a:{NFSU2_TR(0x54b38a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B54b38d:{NFSU2_TR(0x54b38d);
{goto L54b397;}
}
B54b38f:L54b38f:{c.instructions+=3;NFSU2_TR(0x54b38f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B54b391:{NFSU2_TR(0x54b391);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b395:{NFSU2_TR(0x54b395);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54b397:L54b397:{c.instructions+=11;NFSU2_TR(0x54b397);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54b39b:{NFSU2_TR(0x54b39b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4cull))));
}
B54b39e:{NFSU2_TR(0x54b39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b3a1:{NFSU2_TR(0x54b3a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54b3a3:{NFSU2_TR(0x54b3a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54b3a6:{NFSU2_TR(0x54b3a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b3a9:{NFSU2_TR(0x54b3a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b3ac:{NFSU2_TR(0x54b3ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54b3ae:{NFSU2_TR(0x54b3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54b3b1:{NFSU2_TR(0x54b3b1);
__builtin_memmove((R+4),(R+8),4);
}
B54b3b3:{NFSU2_TR(0x54b3b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b3b8ull));
TAIL_STATIC(0x51efd0u,51e);
}
B54b3b8:L54b3b8:{c.instructions+=2;NFSU2_TR(0x54b3b8);
__builtin_memmove((R+4),(R+28),4);
}
B54b3ba:{NFSU2_TR(0x54b3ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b3bfull));
TAIL_STATIC(0x51f560u,51f);
}
B54b3bf:L54b3bf:{c.instructions+=2;NFSU2_TR(0x54b3bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54b3c2:{NFSU2_TR(0x54b3c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54b3d4;}}
}
B54b3c4:L54b3c4:{c.instructions+=3;NFSU2_TR(0x54b3c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B54b3c6:{NFSU2_TR(0x54b3c6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b3c8:{NFSU2_TR(0x54b3c8);
if(r1(R+518)){{goto L54b3cf;}}
}
B54b3ca:L54b3ca:{c.instructions+=2;NFSU2_TR(0x54b3ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B54b3cd:{NFSU2_TR(0x54b3cd);
{goto L54b3d1;}
}
B54b3cf:L54b3cf:{c.instructions+=1;NFSU2_TR(0x54b3cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54b3d1:L54b3d1:{c.instructions+=1;NFSU2_TR(0x54b3d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b3d4:L54b3d4:{c.instructions+=9;NFSU2_TR(0x54b3d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54b3d8:{NFSU2_TR(0x54b3d8);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B54b3d9:{NFSU2_TR(0x54b3d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b3da:{NFSU2_TR(0x54b3da);
u8 U[4];
w4(U+0,u32(0x79c744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b3df:{NFSU2_TR(0x54b3df);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54b3e6:{NFSU2_TR(0x54b3e6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b3e8:{NFSU2_TR(0x54b3e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b3e9:{NFSU2_TR(0x54b3e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b3f0:{NFSU2_TR(0x54b3f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b3f5ull));
TAIL_STATIC(0x50c960u,50c);
}
B54b3f5:L54b3f5:{c.instructions+=8;NFSU2_TR(0x54b3f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b3f9:{NFSU2_TR(0x54b3f9);
u8 U[5];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54b400:{NFSU2_TR(0x54b400);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54b403:{NFSU2_TR(0x54b403);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54b406:{NFSU2_TR(0x54b406);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B54b409:{NFSU2_TR(0x54b409);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54b40b:{NFSU2_TR(0x54b40b);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54b412:{NFSU2_TR(0x54b412);
if(r1(R+518)){{goto L54b42e;}}
}
B54b414:L54b414:{c.instructions+=3;NFSU2_TR(0x54b414);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B54b417:{NFSU2_TR(0x54b417);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54b419:{NFSU2_TR(0x54b419);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54b421;}}
}
B54b41b:L54b41b:{c.instructions+=2;NFSU2_TR(0x54b41b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54b41d:{NFSU2_TR(0x54b41d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54b421;}}
}
B54b41f:L54b41f:{c.instructions+=1;NFSU2_TR(0x54b41f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54b421:L54b421:{c.instructions+=6;NFSU2_TR(0x54b421);
w4(R+8,u32(r1(R+0)));
}
B54b424:{NFSU2_TR(0x54b424);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54b427:{NFSU2_TR(0x54b427);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B54b429:{NFSU2_TR(0x54b429);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54b42a:{NFSU2_TR(0x54b42a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54b42c:{NFSU2_TR(0x54b42c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54b414u);}goto L54b414;}}
}
B54b42e:L54b42e:{c.instructions+=2;NFSU2_TR(0x54b42e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b430:{NFSU2_TR(0x54b430);
if(r1(R+518)){{goto L54b47d;}}
}
B54b432:L54b432:{c.instructions+=2;NFSU2_TR(0x54b432);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b433:{NFSU2_TR(0x54b433);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b438ull));
TAIL_STATIC(0x52cef0u,52c);
}
B54b438:L54b438:{c.instructions+=3;NFSU2_TR(0x54b438);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b43b:{NFSU2_TR(0x54b43b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b43d:{NFSU2_TR(0x54b43d);
if(r1(R+518)){{goto L54b47d;}}
}
B54b43f:L54b43f:{c.instructions+=8;NFSU2_TR(0x54b43f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b447:{NFSU2_TR(0x54b447);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54b44b:{NFSU2_TR(0x54b44b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b44c:{NFSU2_TR(0x54b44c);
__builtin_memmove((R+4),(R+0),4);
}
B54b44e:{NFSU2_TR(0x54b44e);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b455:{NFSU2_TR(0x54b455);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b459:{NFSU2_TR(0x54b459);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b45d:{NFSU2_TR(0x54b45d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b462ull));
TAIL_STATIC(0x504880u,504);
}
B54b462:L54b462:{c.instructions+=5;NFSU2_TR(0x54b462);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b466:{NFSU2_TR(0x54b466);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b468:{NFSU2_TR(0x54b468);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b473:{NFSU2_TR(0x54b473);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b47b:{NFSU2_TR(0x54b47b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54b494;}}
}
B54b47d:L54b47d:{c.instructions+=3;NFSU2_TR(0x54b47d);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54b482:{NFSU2_TR(0x54b482);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b484:{NFSU2_TR(0x54b484);
if(r1(R+518)){{goto L54b49a;}}
}
B54b486:L54b486:{c.instructions+=4;NFSU2_TR(0x54b486);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b489:{NFSU2_TR(0x54b489);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b48a:{NFSU2_TR(0x54b48a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b48b:{NFSU2_TR(0x54b48b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b490ull));
TAIL_STATIC(0x52c570u,52c);
}
B54b490:L54b490:{c.instructions+=2;NFSU2_TR(0x54b490);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b492:{NFSU2_TR(0x54b492);
if(r1(R+518)){{goto L54b49a;}}
}
B54b494:L54b494:{c.instructions+=2;NFSU2_TR(0x54b494);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54b498:{NFSU2_TR(0x54b498);
if(r1(R+518)){{goto L54b49c;}}
}
B54b49a:L54b49a:{c.instructions+=1;NFSU2_TR(0x54b49a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54b49c:L54b49c:{c.instructions+=8;NFSU2_TR(0x54b49c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b4a0:{NFSU2_TR(0x54b4a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b4a1:{NFSU2_TR(0x54b4a1);
u8 U[4];
w4(U+0,u32(0x79c734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b4a6:{NFSU2_TR(0x54b4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b4a9:{NFSU2_TR(0x54b4a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54b4b0:{NFSU2_TR(0x54b4b0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b4b2:{NFSU2_TR(0x54b4b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b4b3:{NFSU2_TR(0x54b4b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b4b8ull));
TAIL_STATIC(0x50c960u,50c);
}
B54b4b8:L54b4b8:{c.instructions+=8;NFSU2_TR(0x54b4b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b4bc:{NFSU2_TR(0x54b4bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54b4c3:{NFSU2_TR(0x54b4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54b4c6:{NFSU2_TR(0x54b4c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54b4c9:{NFSU2_TR(0x54b4c9);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B54b4cc:{NFSU2_TR(0x54b4cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54b4ce:{NFSU2_TR(0x54b4ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54b4d5:{NFSU2_TR(0x54b4d5);
if(r1(R+518)){{goto L54b4f1;}}
}
B54b4d7:L54b4d7:{c.instructions+=3;NFSU2_TR(0x54b4d7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B54b4da:{NFSU2_TR(0x54b4da);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54b4dc:{NFSU2_TR(0x54b4dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54b4e4;}}
}
B54b4de:L54b4de:{c.instructions+=2;NFSU2_TR(0x54b4de);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54b4e0:{NFSU2_TR(0x54b4e0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54b4e4;}}
}
B54b4e2:L54b4e2:{c.instructions+=1;NFSU2_TR(0x54b4e2);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54b4e4:L54b4e4:{c.instructions+=6;NFSU2_TR(0x54b4e4);
w4(R+8,u32(r1(R+0)));
}
B54b4e7:{NFSU2_TR(0x54b4e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54b4ea:{NFSU2_TR(0x54b4ea);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B54b4ec:{NFSU2_TR(0x54b4ec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54b4ed:{NFSU2_TR(0x54b4ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54b4ef:{NFSU2_TR(0x54b4ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54b4d7u);}goto L54b4d7;}}
}
B54b4f1:L54b4f1:{c.instructions+=2;NFSU2_TR(0x54b4f1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b4f3:{NFSU2_TR(0x54b4f3);
if(r1(R+518)){{goto L54b544;}}
}
B54b4f5:L54b4f5:{c.instructions+=2;NFSU2_TR(0x54b4f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b4f6:{NFSU2_TR(0x54b4f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b4fbull));
TAIL_STATIC(0x52cef0u,52c);
}
B54b4fb:L54b4fb:{c.instructions+=3;NFSU2_TR(0x54b4fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b4fe:{NFSU2_TR(0x54b4fe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b500:{NFSU2_TR(0x54b500);
if(r1(R+518)){{goto L54b544;}}
}
B54b502:L54b502:{c.instructions+=8;NFSU2_TR(0x54b502);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b50a:{NFSU2_TR(0x54b50a);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54b50e:{NFSU2_TR(0x54b50e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b50f:{NFSU2_TR(0x54b50f);
__builtin_memmove((R+4),(R+0),4);
}
B54b511:{NFSU2_TR(0x54b511);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b51c:{NFSU2_TR(0x54b51c);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b520:{NFSU2_TR(0x54b520);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b524:{NFSU2_TR(0x54b524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b529ull));
TAIL_STATIC(0x504880u,504);
}
B54b529:L54b529:{c.instructions+=5;NFSU2_TR(0x54b529);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b52d:{NFSU2_TR(0x54b52d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b52f:{NFSU2_TR(0x54b52f);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b53a:{NFSU2_TR(0x54b53a);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b542:{NFSU2_TR(0x54b542);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54b55b;}}
}
B54b544:L54b544:{c.instructions+=3;NFSU2_TR(0x54b544);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54b549:{NFSU2_TR(0x54b549);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b54b:{NFSU2_TR(0x54b54b);
if(r1(R+518)){{goto L54b561;}}
}
B54b54d:L54b54d:{c.instructions+=4;NFSU2_TR(0x54b54d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b550:{NFSU2_TR(0x54b550);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b551:{NFSU2_TR(0x54b551);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b552:{NFSU2_TR(0x54b552);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b557ull));
TAIL_STATIC(0x52c570u,52c);
}
B54b557:L54b557:{c.instructions+=2;NFSU2_TR(0x54b557);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b559:{NFSU2_TR(0x54b559);
if(r1(R+518)){{goto L54b561;}}
}
B54b55b:L54b55b:{c.instructions+=2;NFSU2_TR(0x54b55b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54b55f:{NFSU2_TR(0x54b55f);
if(r1(R+518)){{goto L54b563;}}
}
B54b561:L54b561:{c.instructions+=1;NFSU2_TR(0x54b561);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54b563:L54b563:{c.instructions+=8;NFSU2_TR(0x54b563);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b567:{NFSU2_TR(0x54b567);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54b56b:{NFSU2_TR(0x54b56b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b56e:{NFSU2_TR(0x54b56e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b572:{NFSU2_TR(0x54b572);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54b575:{NFSU2_TR(0x54b575);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xe454e9a5ull))));
}
B54b57b:{NFSU2_TR(0x54b57b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b57d:{NFSU2_TR(0x54b57d);
if(r1(R+518)){{goto L54b5d2;}}
}
B54b57f:L54b57f:{c.instructions+=2;NFSU2_TR(0x54b57f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b580:{NFSU2_TR(0x54b580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b585ull));
TAIL_STATIC(0x52cef0u,52c);
}
B54b585:L54b585:{c.instructions+=3;NFSU2_TR(0x54b585);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b588:{NFSU2_TR(0x54b588);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b58a:{NFSU2_TR(0x54b58a);
if(r1(R+518)){{goto L54b5d2;}}
}
B54b58c:L54b58c:{c.instructions+=8;NFSU2_TR(0x54b58c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b594:{NFSU2_TR(0x54b594);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54b598:{NFSU2_TR(0x54b598);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b599:{NFSU2_TR(0x54b599);
__builtin_memmove((R+4),(R+0),4);
}
B54b59b:{NFSU2_TR(0x54b59b);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b5a6:{NFSU2_TR(0x54b5a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b5aa:{NFSU2_TR(0x54b5aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b5ae:{NFSU2_TR(0x54b5ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b5b3ull));
TAIL_STATIC(0x504880u,504);
}
B54b5b3:L54b5b3:{c.instructions+=5;NFSU2_TR(0x54b5b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b5b7:{NFSU2_TR(0x54b5b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b5b9:{NFSU2_TR(0x54b5b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b5c4:{NFSU2_TR(0x54b5c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b5cc:{NFSU2_TR(0x54b5cc);
if(r1(R+518)){{goto L54b5d2;}}
}
B54b5ce:L54b5ce:{c.instructions+=2;NFSU2_TR(0x54b5ce);
__builtin_memmove((R+24),(R+0),4);
}
B54b5d0:{NFSU2_TR(0x54b5d0);
{goto L54b5eb;}
}
B54b5d2:L54b5d2:{c.instructions+=3;NFSU2_TR(0x54b5d2);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54b5d7:{NFSU2_TR(0x54b5d7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b5d9:{NFSU2_TR(0x54b5d9);
if(r1(R+518)){{goto L54b5e9;}}
}
B54b5db:L54b5db:{c.instructions+=4;NFSU2_TR(0x54b5db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b5de:{NFSU2_TR(0x54b5de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b5df:{NFSU2_TR(0x54b5df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b5e0:{NFSU2_TR(0x54b5e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b5e5ull));
TAIL_STATIC(0x52c570u,52c);
}
B54b5e5:L54b5e5:{c.instructions+=2;NFSU2_TR(0x54b5e5);
__builtin_memmove((R+24),(R+0),4);
}
B54b5e7:{NFSU2_TR(0x54b5e7);
{goto L54b5eb;}
}
B54b5e9:L54b5e9:{c.instructions+=1;NFSU2_TR(0x54b5e9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54b5eb:L54b5eb:{c.instructions+=2;NFSU2_TR(0x54b5eb);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b5ed:{NFSU2_TR(0x54b5ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b5f2ull));
TAIL_STATIC(0x575620u,575);
}
B54b5f2:L54b5f2:{c.instructions+=3;NFSU2_TR(0x54b5f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b5f5:{NFSU2_TR(0x54b5f5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b5f7:{NFSU2_TR(0x54b5f7);
if(r1(R+518)){{goto L54b607;}}
}
B54b5f9:L54b5f9:{c.instructions+=4;NFSU2_TR(0x54b5f9);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B54b5ff:{NFSU2_TR(0x54b5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b602:{NFSU2_TR(0x54b602);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B54b605:{NFSU2_TR(0x54b605);
{goto L54b609;}
}
B54b607:L54b607:{c.instructions+=1;NFSU2_TR(0x54b607);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54b609:L54b609:{c.instructions+=13;NFSU2_TR(0x54b609);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54b60d:{NFSU2_TR(0x54b60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b610:{NFSU2_TR(0x54b610);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b614:{NFSU2_TR(0x54b614);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54b618:{NFSU2_TR(0x54b618);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B54b61b:{NFSU2_TR(0x54b61b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54b61d:{NFSU2_TR(0x54b61d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b620:{NFSU2_TR(0x54b620);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b623:{NFSU2_TR(0x54b623);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54b625:{NFSU2_TR(0x54b625);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54b628:{NFSU2_TR(0x54b628);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x66646fc4ull))));
}
B54b62e:{NFSU2_TR(0x54b62e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b630:{NFSU2_TR(0x54b630);
if(r1(R+518)){{goto L54b685;}}
}
B54b632:L54b632:{c.instructions+=2;NFSU2_TR(0x54b632);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b633:{NFSU2_TR(0x54b633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b638ull));
TAIL_STATIC(0x52cef0u,52c);
}
B54b638:L54b638:{c.instructions+=3;NFSU2_TR(0x54b638);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b63b:{NFSU2_TR(0x54b63b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b63d:{NFSU2_TR(0x54b63d);
if(r1(R+518)){{goto L54b685;}}
}
B54b63f:L54b63f:{c.instructions+=8;NFSU2_TR(0x54b63f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b647:{NFSU2_TR(0x54b647);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54b64b:{NFSU2_TR(0x54b64b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b64c:{NFSU2_TR(0x54b64c);
__builtin_memmove((R+4),(R+0),4);
}
B54b64e:{NFSU2_TR(0x54b64e);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b659:{NFSU2_TR(0x54b659);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b65d:{NFSU2_TR(0x54b65d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b661:{NFSU2_TR(0x54b661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b666ull));
TAIL_STATIC(0x504880u,504);
}
B54b666:L54b666:{c.instructions+=5;NFSU2_TR(0x54b666);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b66a:{NFSU2_TR(0x54b66a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b66c:{NFSU2_TR(0x54b66c);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b677:{NFSU2_TR(0x54b677);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b67f:{NFSU2_TR(0x54b67f);
if(r1(R+518)){{goto L54b685;}}
}
B54b681:L54b681:{c.instructions+=2;NFSU2_TR(0x54b681);
__builtin_memmove((R+28),(R+0),4);
}
B54b683:{NFSU2_TR(0x54b683);
{goto L54b69e;}
}
B54b685:L54b685:{c.instructions+=3;NFSU2_TR(0x54b685);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54b68a:{NFSU2_TR(0x54b68a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b68c:{NFSU2_TR(0x54b68c);
if(r1(R+518)){{goto L54b69c;}}
}
B54b68e:L54b68e:{c.instructions+=4;NFSU2_TR(0x54b68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b691:{NFSU2_TR(0x54b691);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b692:{NFSU2_TR(0x54b692);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b693:{NFSU2_TR(0x54b693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b698ull));
TAIL_STATIC(0x52c570u,52c);
}
B54b698:L54b698:{c.instructions+=2;NFSU2_TR(0x54b698);
__builtin_memmove((R+28),(R+0),4);
}
B54b69a:{NFSU2_TR(0x54b69a);
{goto L54b69e;}
}
B54b69c:L54b69c:{c.instructions+=1;NFSU2_TR(0x54b69c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54b69e:L54b69e:{c.instructions+=2;NFSU2_TR(0x54b69e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b6a0:{NFSU2_TR(0x54b6a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b6a5ull));
TAIL_STATIC(0x575620u,575);
}
B54b6a5:L54b6a5:{c.instructions+=3;NFSU2_TR(0x54b6a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b6a8:{NFSU2_TR(0x54b6a8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b6aa:{NFSU2_TR(0x54b6aa);
if(r1(R+518)){{goto L54b6ba;}}
}
B54b6ac:L54b6ac:{c.instructions+=4;NFSU2_TR(0x54b6ac);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B54b6b2:{NFSU2_TR(0x54b6b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b6b5:{NFSU2_TR(0x54b6b5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B54b6b8:{NFSU2_TR(0x54b6b8);
{goto L54b6bc;}
}
B54b6ba:L54b6ba:{c.instructions+=1;NFSU2_TR(0x54b6ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54b6bc:L54b6bc:{c.instructions+=11;NFSU2_TR(0x54b6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b6bf:{NFSU2_TR(0x54b6bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b6c3:{NFSU2_TR(0x54b6c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54b6c7:{NFSU2_TR(0x54b6c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54b6c9:{NFSU2_TR(0x54b6c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b6cc:{NFSU2_TR(0x54b6cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b6cf:{NFSU2_TR(0x54b6cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54b6d1:{NFSU2_TR(0x54b6d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54b6d4:{NFSU2_TR(0x54b6d4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x2890c8afull))));
}
B54b6da:{NFSU2_TR(0x54b6da);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b6dc:{NFSU2_TR(0x54b6dc);
if(r1(R+518)){{goto L54b731;}}
}
B54b6de:L54b6de:{c.instructions+=2;NFSU2_TR(0x54b6de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b6df:{NFSU2_TR(0x54b6df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b6e4ull));
TAIL_STATIC(0x52cef0u,52c);
}
B54b6e4:L54b6e4:{c.instructions+=3;NFSU2_TR(0x54b6e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b6e7:{NFSU2_TR(0x54b6e7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b6e9:{NFSU2_TR(0x54b6e9);
if(r1(R+518)){{goto L54b731;}}
}
B54b6eb:L54b6eb:{c.instructions+=8;NFSU2_TR(0x54b6eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b6f3:{NFSU2_TR(0x54b6f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54b6f7:{NFSU2_TR(0x54b6f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b6f8:{NFSU2_TR(0x54b6f8);
__builtin_memmove((R+4),(R+0),4);
}
B54b6fa:{NFSU2_TR(0x54b6fa);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b705:{NFSU2_TR(0x54b705);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b709:{NFSU2_TR(0x54b709);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b70d:{NFSU2_TR(0x54b70d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b712ull));
TAIL_STATIC(0x504880u,504);
}
B54b712:L54b712:{c.instructions+=5;NFSU2_TR(0x54b712);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b716:{NFSU2_TR(0x54b716);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b718:{NFSU2_TR(0x54b718);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b723:{NFSU2_TR(0x54b723);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b72b:{NFSU2_TR(0x54b72b);
if(r1(R+518)){{goto L54b731;}}
}
B54b72d:L54b72d:{c.instructions+=2;NFSU2_TR(0x54b72d);
__builtin_memmove((R+28),(R+0),4);
}
B54b72f:{NFSU2_TR(0x54b72f);
{goto L54b74a;}
}
B54b731:L54b731:{c.instructions+=3;NFSU2_TR(0x54b731);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54b736:{NFSU2_TR(0x54b736);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b738:{NFSU2_TR(0x54b738);
if(r1(R+518)){{goto L54b748;}}
}
B54b73a:L54b73a:{c.instructions+=4;NFSU2_TR(0x54b73a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b73d:{NFSU2_TR(0x54b73d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b73e:{NFSU2_TR(0x54b73e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b73f:{NFSU2_TR(0x54b73f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b744ull));
TAIL_STATIC(0x52c570u,52c);
}
B54b744:L54b744:{c.instructions+=2;NFSU2_TR(0x54b744);
__builtin_memmove((R+28),(R+0),4);
}
B54b746:{NFSU2_TR(0x54b746);
{goto L54b74a;}
}
B54b748:L54b748:{c.instructions+=1;NFSU2_TR(0x54b748);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54b74a:L54b74a:{c.instructions+=2;NFSU2_TR(0x54b74a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b74c:{NFSU2_TR(0x54b74c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b751ull));
TAIL_STATIC(0x575620u,575);
}
B54b751:L54b751:{c.instructions+=3;NFSU2_TR(0x54b751);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b754:{NFSU2_TR(0x54b754);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b756:{NFSU2_TR(0x54b756);
if(r1(R+518)){{goto L54b766;}}
}
B54b758:L54b758:{c.instructions+=4;NFSU2_TR(0x54b758);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B54b75e:{NFSU2_TR(0x54b75e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b761:{NFSU2_TR(0x54b761);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B54b764:{NFSU2_TR(0x54b764);
{goto L54b768;}
}
B54b766:L54b766:{c.instructions+=1;NFSU2_TR(0x54b766);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54b768:L54b768:{c.instructions+=11;NFSU2_TR(0x54b768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b76b:{NFSU2_TR(0x54b76b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b76f:{NFSU2_TR(0x54b76f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54b773:{NFSU2_TR(0x54b773);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54b775:{NFSU2_TR(0x54b775);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b778:{NFSU2_TR(0x54b778);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b77b:{NFSU2_TR(0x54b77b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54b77d:{NFSU2_TR(0x54b77d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54b780:{NFSU2_TR(0x54b780);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x77bd189eull))));
}
B54b786:{NFSU2_TR(0x54b786);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b788:{NFSU2_TR(0x54b788);
if(r1(R+518)){{goto L54b7dd;}}
}
B54b78a:L54b78a:{c.instructions+=2;NFSU2_TR(0x54b78a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b78b:{NFSU2_TR(0x54b78b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b790ull));
TAIL_STATIC(0x52cef0u,52c);
}
B54b790:L54b790:{c.instructions+=3;NFSU2_TR(0x54b790);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b793:{NFSU2_TR(0x54b793);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b795:{NFSU2_TR(0x54b795);
if(r1(R+518)){{goto L54b7dd;}}
}
B54b797:L54b797:{c.instructions+=8;NFSU2_TR(0x54b797);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b79f:{NFSU2_TR(0x54b79f);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54b7a3:{NFSU2_TR(0x54b7a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b7a4:{NFSU2_TR(0x54b7a4);
__builtin_memmove((R+4),(R+0),4);
}
B54b7a6:{NFSU2_TR(0x54b7a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b7b1:{NFSU2_TR(0x54b7b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b7b5:{NFSU2_TR(0x54b7b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b7b9:{NFSU2_TR(0x54b7b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b7beull));
TAIL_STATIC(0x504880u,504);
}
B54b7be:L54b7be:{c.instructions+=5;NFSU2_TR(0x54b7be);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b7c2:{NFSU2_TR(0x54b7c2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b7c4:{NFSU2_TR(0x54b7c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b7cf:{NFSU2_TR(0x54b7cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b7d7:{NFSU2_TR(0x54b7d7);
if(r1(R+518)){{goto L54b7dd;}}
}
B54b7d9:L54b7d9:{c.instructions+=2;NFSU2_TR(0x54b7d9);
__builtin_memmove((R+28),(R+0),4);
}
B54b7db:{NFSU2_TR(0x54b7db);
{goto L54b7f6;}
}
B54b7dd:L54b7dd:{c.instructions+=3;NFSU2_TR(0x54b7dd);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54b7e2:{NFSU2_TR(0x54b7e2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b7e4:{NFSU2_TR(0x54b7e4);
if(r1(R+518)){{goto L54b7f4;}}
}
B54b7e6:L54b7e6:{c.instructions+=4;NFSU2_TR(0x54b7e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b7e9:{NFSU2_TR(0x54b7e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b7ea:{NFSU2_TR(0x54b7ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b7eb:{NFSU2_TR(0x54b7eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b7f0ull));
TAIL_STATIC(0x52c570u,52c);
}
B54b7f0:L54b7f0:{c.instructions+=2;NFSU2_TR(0x54b7f0);
__builtin_memmove((R+28),(R+0),4);
}
B54b7f2:{NFSU2_TR(0x54b7f2);
{goto L54b7f6;}
}
B54b7f4:L54b7f4:{c.instructions+=1;NFSU2_TR(0x54b7f4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54b7f6:L54b7f6:{c.instructions+=2;NFSU2_TR(0x54b7f6);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b7f8:{NFSU2_TR(0x54b7f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b7fdull));
TAIL_STATIC(0x575620u,575);
}
B54b7fd:L54b7fd:{c.instructions+=3;NFSU2_TR(0x54b7fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b800:{NFSU2_TR(0x54b800);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b802:{NFSU2_TR(0x54b802);
if(r1(R+518)){{goto L54b812;}}
}
B54b804:L54b804:{c.instructions+=4;NFSU2_TR(0x54b804);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B54b80a:{NFSU2_TR(0x54b80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b80d:{NFSU2_TR(0x54b80d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B54b810:{NFSU2_TR(0x54b810);
{goto L54b814;}
}
B54b812:L54b812:{c.instructions+=1;NFSU2_TR(0x54b812);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54b814:L54b814:{c.instructions+=11;NFSU2_TR(0x54b814);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b817:{NFSU2_TR(0x54b817);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b81b:{NFSU2_TR(0x54b81b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54b81f:{NFSU2_TR(0x54b81f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54b821:{NFSU2_TR(0x54b821);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b824:{NFSU2_TR(0x54b824);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b827:{NFSU2_TR(0x54b827);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54b829:{NFSU2_TR(0x54b829);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54b82c:{NFSU2_TR(0x54b82c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xf3ebdc4eull))));
}
B54b832:{NFSU2_TR(0x54b832);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b834:{NFSU2_TR(0x54b834);
if(r1(R+518)){{goto L54b889;}}
}
B54b836:L54b836:{c.instructions+=2;NFSU2_TR(0x54b836);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b837:{NFSU2_TR(0x54b837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b83cull));
TAIL_STATIC(0x52cef0u,52c);
}
B54b83c:L54b83c:{c.instructions+=3;NFSU2_TR(0x54b83c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b83f:{NFSU2_TR(0x54b83f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b841:{NFSU2_TR(0x54b841);
if(r1(R+518)){{goto L54b889;}}
}
B54b843:L54b843:{c.instructions+=8;NFSU2_TR(0x54b843);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b84b:{NFSU2_TR(0x54b84b);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54b84f:{NFSU2_TR(0x54b84f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b850:{NFSU2_TR(0x54b850);
__builtin_memmove((R+4),(R+0),4);
}
B54b852:{NFSU2_TR(0x54b852);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b85d:{NFSU2_TR(0x54b85d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b861:{NFSU2_TR(0x54b861);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b865:{NFSU2_TR(0x54b865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b86aull));
TAIL_STATIC(0x504880u,504);
}
B54b86a:L54b86a:{c.instructions+=5;NFSU2_TR(0x54b86a);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b86e:{NFSU2_TR(0x54b86e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b870:{NFSU2_TR(0x54b870);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b87b:{NFSU2_TR(0x54b87b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b883:{NFSU2_TR(0x54b883);
if(r1(R+518)){{goto L54b889;}}
}
B54b885:L54b885:{c.instructions+=2;NFSU2_TR(0x54b885);
__builtin_memmove((R+28),(R+0),4);
}
B54b887:{NFSU2_TR(0x54b887);
{goto L54b8a2;}
}
B54b889:L54b889:{c.instructions+=3;NFSU2_TR(0x54b889);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54b88e:{NFSU2_TR(0x54b88e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b890:{NFSU2_TR(0x54b890);
if(r1(R+518)){{goto L54b8a0;}}
}
B54b892:L54b892:{c.instructions+=4;NFSU2_TR(0x54b892);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b895:{NFSU2_TR(0x54b895);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b896:{NFSU2_TR(0x54b896);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b897:{NFSU2_TR(0x54b897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b89cull));
TAIL_STATIC(0x52c570u,52c);
}
B54b89c:L54b89c:{c.instructions+=2;NFSU2_TR(0x54b89c);
__builtin_memmove((R+28),(R+0),4);
}
B54b89e:{NFSU2_TR(0x54b89e);
{goto L54b8a2;}
}
B54b8a0:L54b8a0:{c.instructions+=1;NFSU2_TR(0x54b8a0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54b8a2:L54b8a2:{c.instructions+=2;NFSU2_TR(0x54b8a2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b8a4:{NFSU2_TR(0x54b8a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b8a9ull));
TAIL_STATIC(0x575620u,575);
}
B54b8a9:L54b8a9:{c.instructions+=3;NFSU2_TR(0x54b8a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b8ac:{NFSU2_TR(0x54b8ac);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b8ae:{NFSU2_TR(0x54b8ae);
if(r1(R+518)){{goto L54b8be;}}
}
B54b8b0:L54b8b0:{c.instructions+=4;NFSU2_TR(0x54b8b0);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B54b8b6:{NFSU2_TR(0x54b8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b8b9:{NFSU2_TR(0x54b8b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B54b8bc:{NFSU2_TR(0x54b8bc);
{goto L54b8c0;}
}
B54b8be:L54b8be:{c.instructions+=1;NFSU2_TR(0x54b8be);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54b8c0:L54b8c0:{c.instructions+=11;NFSU2_TR(0x54b8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b8c3:{NFSU2_TR(0x54b8c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b8c7:{NFSU2_TR(0x54b8c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54b8cb:{NFSU2_TR(0x54b8cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54b8cd:{NFSU2_TR(0x54b8cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b8d0:{NFSU2_TR(0x54b8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b8d3:{NFSU2_TR(0x54b8d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54b8d5:{NFSU2_TR(0x54b8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54b8d8:{NFSU2_TR(0x54b8d8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b8da:{NFSU2_TR(0x54b8da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xde635f7cull))));
__builtin_memmove((R+28),(U+0),4);
}
B54b8e0:{NFSU2_TR(0x54b8e0);
if(r1(R+518)){{goto L54b931;}}
}
B54b8e2:L54b8e2:{c.instructions+=2;NFSU2_TR(0x54b8e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b8e3:{NFSU2_TR(0x54b8e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b8e8ull));
TAIL_STATIC(0x52cef0u,52c);
}
B54b8e8:L54b8e8:{c.instructions+=3;NFSU2_TR(0x54b8e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b8eb:{NFSU2_TR(0x54b8eb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b8ed:{NFSU2_TR(0x54b8ed);
if(r1(R+518)){{goto L54b931;}}
}
B54b8ef:L54b8ef:{c.instructions+=8;NFSU2_TR(0x54b8ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b8f7:{NFSU2_TR(0x54b8f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54b8fb:{NFSU2_TR(0x54b8fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b8fc:{NFSU2_TR(0x54b8fc);
__builtin_memmove((R+4),(R+0),4);
}
B54b8fe:{NFSU2_TR(0x54b8fe);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b909:{NFSU2_TR(0x54b909);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b90d:{NFSU2_TR(0x54b90d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b911:{NFSU2_TR(0x54b911);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b916ull));
TAIL_STATIC(0x504880u,504);
}
B54b916:L54b916:{c.instructions+=5;NFSU2_TR(0x54b916);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b91a:{NFSU2_TR(0x54b91a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b91c:{NFSU2_TR(0x54b91c);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b927:{NFSU2_TR(0x54b927);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b92f:{NFSU2_TR(0x54b92f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54b948;}}
}
B54b931:L54b931:{c.instructions+=3;NFSU2_TR(0x54b931);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54b936:{NFSU2_TR(0x54b936);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54b938:{NFSU2_TR(0x54b938);
if(r1(R+518)){{goto L54b946;}}
}
B54b93a:L54b93a:{c.instructions+=4;NFSU2_TR(0x54b93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b93d:{NFSU2_TR(0x54b93d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b93e:{NFSU2_TR(0x54b93e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b93f:{NFSU2_TR(0x54b93f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b944ull));
TAIL_STATIC(0x52c570u,52c);
}
B54b944:L54b944:{c.instructions+=1;NFSU2_TR(0x54b944);
{goto L54b948;}
}
B54b946:L54b946:{c.instructions+=1;NFSU2_TR(0x54b946);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54b948:L54b948:{c.instructions+=16;NFSU2_TR(0x54b948);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b94c:{NFSU2_TR(0x54b94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B54b950:{NFSU2_TR(0x54b950);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B54b953:{NFSU2_TR(0x54b953);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x87ull))));
}
B54b959:{NFSU2_TR(0x54b959);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b95d:{NFSU2_TR(0x54b95d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54b961:{NFSU2_TR(0x54b961);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b964:{NFSU2_TR(0x54b964);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b968:{NFSU2_TR(0x54b968);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w4(U+4,u32(0x44070000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b96f:{NFSU2_TR(0x54b96f);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54b972:{NFSU2_TR(0x54b972);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w4(U+4,u32(0x428c0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b979:{NFSU2_TR(0x54b979);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0xc38d8000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b980:{NFSU2_TR(0x54b980);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54b984:{NFSU2_TR(0x54b984);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B54b98a:{NFSU2_TR(0x54b98a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b98e:{NFSU2_TR(0x54b98e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54b347u);}goto L54b347;}}
}
B54b994:L54b994:{c.instructions+=4;NFSU2_TR(0x54b994);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54b998:{NFSU2_TR(0x54b998);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54b99a:{NFSU2_TR(0x54b99a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4cull))));
}
B54b99d:{NFSU2_TR(0x54b99d);
__builtin_memmove((R+4),(R+4),4);
}
B54b9a0:L54b9a0:{c.instructions+=2;NFSU2_TR(0x54b9a0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54b9a2:{NFSU2_TR(0x54b9a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54b9a7ull));
TAIL_STATIC(0x575620u,575);
}
B54b9a7:L54b9a7:{c.instructions+=3;NFSU2_TR(0x54b9a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54b9aa:{NFSU2_TR(0x54b9aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54b9ac:{NFSU2_TR(0x54b9ac);
if(r1(R+518)){{goto L54b9d2;}}
}
B54b9ae:L54b9ae:{c.instructions+=10;NFSU2_TR(0x54b9ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B54b9b1:{NFSU2_TR(0x54b9b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54b9b3:{NFSU2_TR(0x54b9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b9b6:{NFSU2_TR(0x54b9b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54b9ba:{NFSU2_TR(0x54b9ba);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B54b9c0:{NFSU2_TR(0x54b9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54b9c7:{NFSU2_TR(0x54b9c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54b9cb:{NFSU2_TR(0x54b9cb);
__builtin_memmove((R+24),(R+0),4);
}
B54b9cd:{NFSU2_TR(0x54b9cd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B54b9d0:{NFSU2_TR(0x54b9d0);
{goto L54b9d6;}
}
B54b9d2:L54b9d2:{c.instructions+=2;NFSU2_TR(0x54b9d2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54b9d4:{NFSU2_TR(0x54b9d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54b9d6:L54b9d6:{c.instructions+=12;NFSU2_TR(0x54b9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b9d9:{NFSU2_TR(0x54b9d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54b9dc:{NFSU2_TR(0x54b9dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B54b9de:{NFSU2_TR(0x54b9de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b9e1:{NFSU2_TR(0x54b9e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b9e4:{NFSU2_TR(0x54b9e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54b9e6:{NFSU2_TR(0x54b9e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54b9e9:{NFSU2_TR(0x54b9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54b9ec:{NFSU2_TR(0x54b9ec);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B54b9ed:{NFSU2_TR(0x54b9ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54b9ef:{NFSU2_TR(0x54b9ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54b9f2:{NFSU2_TR(0x54b9f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ba0b;}}
}
B54b9f4:L54b9f4:{c.instructions+=3;NFSU2_TR(0x54b9f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54b9f6:{NFSU2_TR(0x54b9f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54b9f8:{NFSU2_TR(0x54b9f8);
if(r1(R+518)){{goto L54b9ff;}}
}
B54b9fa:L54b9fa:{c.instructions+=2;NFSU2_TR(0x54b9fa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B54b9fd:{NFSU2_TR(0x54b9fd);
{goto L54ba01;}
}
B54b9ff:L54b9ff:{c.instructions+=1;NFSU2_TR(0x54b9ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54ba01:L54ba01:{c.instructions+=2;NFSU2_TR(0x54ba01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ba04:{NFSU2_TR(0x54ba04);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54ba0b:L54ba0b:{c.instructions+=3;NFSU2_TR(0x54ba0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ba0e:{NFSU2_TR(0x54ba0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ba10:{NFSU2_TR(0x54ba10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ba22;}}
}
B54ba12:L54ba12:{c.instructions+=3;NFSU2_TR(0x54ba12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B54ba14:{NFSU2_TR(0x54ba14);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ba16:{NFSU2_TR(0x54ba16);
if(r1(R+518)){{goto L54ba1d;}}
}
B54ba18:L54ba18:{c.instructions+=2;NFSU2_TR(0x54ba18);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B54ba1b:{NFSU2_TR(0x54ba1b);
{goto L54ba1f;}
}
B54ba1d:L54ba1d:{c.instructions+=1;NFSU2_TR(0x54ba1d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54ba1f:L54ba1f:{c.instructions+=1;NFSU2_TR(0x54ba1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ba22:L54ba22:{c.instructions+=4;NFSU2_TR(0x54ba22);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54ba25:{NFSU2_TR(0x54ba25);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ba28:{NFSU2_TR(0x54ba28);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba29:{NFSU2_TR(0x54ba29);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L54ba3c;}}
}
B54ba2b:L54ba2b:{c.instructions+=5;NFSU2_TR(0x54ba2b);
u8 U[4];
w4(U+0,u32(0x79c730ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba30:{NFSU2_TR(0x54ba30);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba32:{NFSU2_TR(0x54ba32);
u8 U[4];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54ba39:{NFSU2_TR(0x54ba39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba3a:{NFSU2_TR(0x54ba3a);
{goto L54ba4b;}
}
B54ba3c:L54ba3c:{c.instructions+=4;NFSU2_TR(0x54ba3c);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba41:{NFSU2_TR(0x54ba41);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba43:{NFSU2_TR(0x54ba43);
u8 U[4];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54ba4a:{NFSU2_TR(0x54ba4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba4b:L54ba4b:{c.instructions+=1;NFSU2_TR(0x54ba4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ba50ull));
TAIL_STATIC(0x50c960u,50c);
}
B54ba50:L54ba50:{c.instructions+=7;NFSU2_TR(0x54ba50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54ba53:{NFSU2_TR(0x54ba53);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba55:{NFSU2_TR(0x54ba55);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba57:{NFSU2_TR(0x54ba57);
u8 U[4];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54ba5e:{NFSU2_TR(0x54ba5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba5f:{NFSU2_TR(0x54ba5f);
__builtin_memmove((R+4),(R+24),4);
}
B54ba61:{NFSU2_TR(0x54ba61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ba66ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B54ba66:L54ba66:{c.instructions+=8;NFSU2_TR(0x54ba66);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83acb8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B54ba6d:{NFSU2_TR(0x54ba6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba6f:{NFSU2_TR(0x54ba6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B54ba72:{NFSU2_TR(0x54ba72);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ecd84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ba78:{NFSU2_TR(0x54ba78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba7a:{NFSU2_TR(0x54ba7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba7b:{NFSU2_TR(0x54ba7b);
__builtin_memmove((R+4),(R+24),4);
}
B54ba7d:{NFSU2_TR(0x54ba7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ba82ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B54ba82:L54ba82:{c.instructions+=8;NFSU2_TR(0x54ba82);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83acb8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B54ba89:{NFSU2_TR(0x54ba89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba8b:{NFSU2_TR(0x54ba8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B54ba8e:{NFSU2_TR(0x54ba8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ecd80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ba94:{NFSU2_TR(0x54ba94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba96:{NFSU2_TR(0x54ba96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ba97:{NFSU2_TR(0x54ba97);
__builtin_memmove((R+4),(R+24),4);
}
B54ba99:{NFSU2_TR(0x54ba99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ba9eull));
TAIL_STATIC(0x4aea60u,4ae);
}
B54ba9e:L54ba9e:{c.instructions+=8;NFSU2_TR(0x54ba9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83acb8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B54baa5:{NFSU2_TR(0x54baa5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54baa7:{NFSU2_TR(0x54baa7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B54baaa:{NFSU2_TR(0x54baaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ecd88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bab0:{NFSU2_TR(0x54bab0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bab2:{NFSU2_TR(0x54bab2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bab3:{NFSU2_TR(0x54bab3);
__builtin_memmove((R+4),(R+24),4);
}
B54bab5:{NFSU2_TR(0x54bab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54babaull));
TAIL_STATIC(0x4aea60u,4ae);
}
B54baba:L54baba:{c.instructions+=7;NFSU2_TR(0x54baba);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83acb8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B54bac1:{NFSU2_TR(0x54bac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bac4:{NFSU2_TR(0x54bac4);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83acbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B54bacb:{NFSU2_TR(0x54bacb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54bace:{NFSU2_TR(0x54bace);
w4(R+0,u32(r1(R+0)));
}
B54bad1:{NFSU2_TR(0x54bad1);
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
B54bad4:{NFSU2_TR(0x54bad4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L54baf9;}}
}
B54bad6:L54bad6:{c.instructions+=1;NFSU2_TR(0x54bad6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x54bd20ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54badd:L54badd:{c.instructions+=2;NFSU2_TR(0x54badd);
w4(R+8,u32(0x9cce9f86ull));
}
B54bae2:{NFSU2_TR(0x54bae2);
{goto L54bafb;}
}
B54bae4:L54bae4:{c.instructions+=2;NFSU2_TR(0x54bae4);
w4(R+8,u32(0x5278c50bull));
}
B54bae9:{NFSU2_TR(0x54bae9);
{goto L54bafb;}
}
B54baeb:L54baeb:{c.instructions+=2;NFSU2_TR(0x54baeb);
w4(R+8,u32(0x5c1b351cull));
}
B54baf0:{NFSU2_TR(0x54baf0);
{goto L54bafb;}
}
B54baf2:L54baf2:{c.instructions+=2;NFSU2_TR(0x54baf2);
w4(R+8,u32(0x9cce64c4ull));
}
B54baf7:{NFSU2_TR(0x54baf7);
{goto L54bafb;}
}
B54baf9:L54baf9:{c.instructions+=1;NFSU2_TR(0x54baf9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B54bafb:L54bafb:{c.instructions+=1;NFSU2_TR(0x54bafb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bb00ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54bb00:L54bb00:{c.instructions+=2;NFSU2_TR(0x54bb00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bb02:{NFSU2_TR(0x54bb02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bb0e;}}
}
B54bb04:L54bb04:{c.instructions+=2;NFSU2_TR(0x54bb04);
w4(R+8,u32(0xc01a6f63ull));
}
B54bb09:{NFSU2_TR(0x54bb09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bb0eull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54bb0e:L54bb0e:{c.instructions+=5;NFSU2_TR(0x54bb0e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb10:{NFSU2_TR(0x54bb10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb11:{NFSU2_TR(0x54bb11);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54bb18:{NFSU2_TR(0x54bb18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb19:{NFSU2_TR(0x54bb19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bb1eull));
TAIL_STATIC(0x43dc00u,43d);
}
B54bb1e:L54bb1e:{c.instructions+=7;NFSU2_TR(0x54bb1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54bb21:{NFSU2_TR(0x54bb21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb23:{NFSU2_TR(0x54bb23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb25:{NFSU2_TR(0x54bb25);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54bb2c:{NFSU2_TR(0x54bb2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb2d:{NFSU2_TR(0x54bb2d);
__builtin_memmove((R+4),(R+24),4);
}
B54bb2f:{NFSU2_TR(0x54bb2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bb34ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B54bb34:L54bb34:{c.instructions+=3;NFSU2_TR(0x54bb34);
__builtin_memmove((R+28),(R+20),4);
}
B54bb36:{NFSU2_TR(0x54bb36);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54bb39:{NFSU2_TR(0x54bb39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54b9a0u);}goto L54b9a0;}}
}
B54bb3f:L54bb3f:{c.instructions+=3;NFSU2_TR(0x54bb3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54bb41:{NFSU2_TR(0x54bb41);
__builtin_memmove((R+4),(R+12),4);
}
B54bb43:{NFSU2_TR(0x54bb43);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bb46ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54bb46:L54bb46:{c.instructions+=3;NFSU2_TR(0x54bb46);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54bb4c:{NFSU2_TR(0x54bb4c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54bb4e:{NFSU2_TR(0x54bb4e);
if(r1(R+518)){{goto L54bbb0;}}
}
B54bb50:L54bb50:{c.instructions+=4;NFSU2_TR(0x54bb50);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54bb56:{NFSU2_TR(0x54bb56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54bb58:{NFSU2_TR(0x54bb58);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54bb5b:{NFSU2_TR(0x54bb5b);
if(r1(R+518)){{goto L54bb71;}}
}
B54bb5d:L54bb5d:{c.instructions+=4;NFSU2_TR(0x54bb5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bb60:{NFSU2_TR(0x54bb60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb61:{NFSU2_TR(0x54bb61);
__builtin_memmove((R+4),(R+12),4);
}
B54bb63:{NFSU2_TR(0x54bb63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bb68ull));
TAIL_STATIC(0x51f440u,51f);
}
B54bb68:L54bb68:{c.instructions+=5;NFSU2_TR(0x54bb68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bb6b:{NFSU2_TR(0x54bb6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb6c:{NFSU2_TR(0x54bb6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb6d:{NFSU2_TR(0x54bb6d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb6f:{NFSU2_TR(0x54bb6f);
{goto L54bb7d;}
}
B54bb71:L54bb71:{c.instructions+=6;NFSU2_TR(0x54bb71);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bb74:{NFSU2_TR(0x54bb74);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bb77:{NFSU2_TR(0x54bb77);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bb7a:{NFSU2_TR(0x54bb7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb7b:{NFSU2_TR(0x54bb7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb7c:{NFSU2_TR(0x54bb7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb7d:L54bb7d:{c.instructions+=2;NFSU2_TR(0x54bb7d);
__builtin_memmove((R+4),(R+24),4);
}
B54bb7f:{NFSU2_TR(0x54bb7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bb84ull));
TAIL_STATIC(0x538080u,538);
}
B54bb84:L54bb84:{c.instructions+=3;NFSU2_TR(0x54bb84);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54bb8a:{NFSU2_TR(0x54bb8a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54bb8c:{NFSU2_TR(0x54bb8c);
if(r1(R+518)){{goto L54bbb0;}}
}
B54bb8e:L54bb8e:{c.instructions+=3;NFSU2_TR(0x54bb8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bb91:{NFSU2_TR(0x54bb91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb92:{NFSU2_TR(0x54bb92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bb97ull));
TAIL_STATIC(0x50ca50u,50c);
}
B54bb97:L54bb97:{c.instructions+=3;NFSU2_TR(0x54bb97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bb9a:{NFSU2_TR(0x54bb9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bb9b:{NFSU2_TR(0x54bb9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bba0ull));
TAIL_STATIC(0x50ca50u,50c);
}
B54bba0:L54bba0:{c.instructions+=3;NFSU2_TR(0x54bba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bba3:{NFSU2_TR(0x54bba3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bba4:{NFSU2_TR(0x54bba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bba9ull));
TAIL_STATIC(0x50ca50u,50c);
}
B54bba9:L54bba9:{c.instructions+=2;NFSU2_TR(0x54bba9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54bbac:{NFSU2_TR(0x54bbac);
__builtin_memmove((R+16),(R+16),4);
}
B54bbb0:L54bbb0:{c.instructions+=3;NFSU2_TR(0x54bbb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bbb3:{NFSU2_TR(0x54bbb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bbb5:{NFSU2_TR(0x54bbb5);
if(r1(R+518)){{goto L54bbbc;}}
}
B54bbb7:L54bbb7:{c.instructions+=2;NFSU2_TR(0x54bbb7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B54bbba:{NFSU2_TR(0x54bbba);
{goto L54bbbe;}
}
B54bbbc:L54bbbc:{c.instructions+=1;NFSU2_TR(0x54bbbc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54bbbe:L54bbbe:{c.instructions+=5;NFSU2_TR(0x54bbbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bbc1:{NFSU2_TR(0x54bbc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54bbc5:{NFSU2_TR(0x54bbc5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54bbc7:{NFSU2_TR(0x54bbc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bbcd:{NFSU2_TR(0x54bbcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bc17;}}
}
B54bbcf:L54bbcf:{c.instructions+=2;NFSU2_TR(0x54bbcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bbd1:{NFSU2_TR(0x54bbd1);
if(r1(R+518)){{goto L54bc63;}}
}
B54bbd7:L54bbd7:{c.instructions+=3;NFSU2_TR(0x54bbd7);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B54bbdd:{NFSU2_TR(0x54bbdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bbdf:{NFSU2_TR(0x54bbdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bbe7;}}
}
B54bbe1:L54bbe1:{c.instructions+=2;NFSU2_TR(0x54bbe1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54bbe5:{NFSU2_TR(0x54bbe5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bbee;}}
}
B54bbe7:L54bbe7:{c.instructions+=1;NFSU2_TR(0x54bbe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54bbee:L54bbee:{c.instructions+=4;NFSU2_TR(0x54bbee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bbf1:{NFSU2_TR(0x54bbf1);
w4(R+20,u32(0x5ull));
}
B54bbf6:{NFSU2_TR(0x54bbf6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54bbf8:{NFSU2_TR(0x54bbf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bc68;}}
}
B54bbfa:L54bbfa:{c.instructions+=4;NFSU2_TR(0x54bbfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bbfd:{NFSU2_TR(0x54bbfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bc00:{NFSU2_TR(0x54bc00);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bc02:{NFSU2_TR(0x54bc02);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54bc68;}}
}
B54bc04:L54bc04:{c.instructions+=1;NFSU2_TR(0x54bc04);
__builtin_memmove((R+24),(R+0),4);
}
B54bc06:L54bc06:{c.instructions+=2;NFSU2_TR(0x54bc06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bc07:{NFSU2_TR(0x54bc07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bc0cull));
TAIL_STATIC(0x50ca00u,50c);
}
B54bc0c:L54bc0c:{c.instructions+=4;NFSU2_TR(0x54bc0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bc0f:{NFSU2_TR(0x54bc0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54bc12:{NFSU2_TR(0x54bc12);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B54bc13:{NFSU2_TR(0x54bc13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54bc06u);}goto L54bc06;}}
}
B54bc15:L54bc15:{c.instructions+=1;NFSU2_TR(0x54bc15);
{goto L54bc68;}
}
B54bc17:L54bc17:{c.instructions+=2;NFSU2_TR(0x54bc17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bc19:{NFSU2_TR(0x54bc19);
if(r1(R+518)){{goto L54bc63;}}
}
B54bc1b:L54bc1b:{c.instructions+=3;NFSU2_TR(0x54bc1b);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B54bc21:{NFSU2_TR(0x54bc21);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bc23:{NFSU2_TR(0x54bc23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bc2b;}}
}
B54bc25:L54bc25:{c.instructions+=2;NFSU2_TR(0x54bc25);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54bc29:{NFSU2_TR(0x54bc29);
if(r1(R+518)){{goto L54bc3a;}}
}
B54bc2b:L54bc2b:{c.instructions+=4;NFSU2_TR(0x54bc2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bc2e:{NFSU2_TR(0x54bc2e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B54bc31:{NFSU2_TR(0x54bc31);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x400000ull))));
}
B54bc37:{NFSU2_TR(0x54bc37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bc3a:L54bc3a:{c.instructions+=4;NFSU2_TR(0x54bc3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bc3d:{NFSU2_TR(0x54bc3d);
w4(R+20,u32(0x5ull));
}
B54bc42:{NFSU2_TR(0x54bc42);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54bc44:{NFSU2_TR(0x54bc44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bc68;}}
}
B54bc46:L54bc46:{c.instructions+=4;NFSU2_TR(0x54bc46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bc49:{NFSU2_TR(0x54bc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bc4c:{NFSU2_TR(0x54bc4c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bc4e:{NFSU2_TR(0x54bc4e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54bc68;}}
}
B54bc50:L54bc50:{c.instructions+=1;NFSU2_TR(0x54bc50);
__builtin_memmove((R+24),(R+0),4);
}
B54bc52:L54bc52:{c.instructions+=2;NFSU2_TR(0x54bc52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bc53:{NFSU2_TR(0x54bc53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bc58ull));
TAIL_STATIC(0x50ca50u,50c);
}
B54bc58:L54bc58:{c.instructions+=4;NFSU2_TR(0x54bc58);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bc5b:{NFSU2_TR(0x54bc5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54bc5e:{NFSU2_TR(0x54bc5e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B54bc5f:{NFSU2_TR(0x54bc5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54bc52u);}goto L54bc52;}}
}
B54bc61:L54bc61:{c.instructions+=1;NFSU2_TR(0x54bc61);
{goto L54bc68;}
}
B54bc63:L54bc63:{c.instructions+=1;NFSU2_TR(0x54bc63);
w4(R+20,u32(0x5ull));
}
B54bc68:L54bc68:{c.instructions+=3;NFSU2_TR(0x54bc68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bc6b:{NFSU2_TR(0x54bc6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bc6d:{NFSU2_TR(0x54bc6d);
if(r1(R+518)){{goto L54bc74;}}
}
B54bc6f:L54bc6f:{c.instructions+=2;NFSU2_TR(0x54bc6f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B54bc72:{NFSU2_TR(0x54bc72);
{goto L54bc76;}
}
B54bc74:L54bc74:{c.instructions+=1;NFSU2_TR(0x54bc74);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54bc76:L54bc76:{c.instructions+=3;NFSU2_TR(0x54bc76);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54bc79:{NFSU2_TR(0x54bc79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bc7f:{NFSU2_TR(0x54bc7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bcc1;}}
}
B54bc81:L54bc81:{c.instructions+=2;NFSU2_TR(0x54bc81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bc83:{NFSU2_TR(0x54bc83);
if(r1(R+518)){{goto L54bd04;}}
}
B54bc85:L54bc85:{c.instructions+=3;NFSU2_TR(0x54bc85);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B54bc8b:{NFSU2_TR(0x54bc8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bc8d:{NFSU2_TR(0x54bc8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bc95;}}
}
B54bc8f:L54bc8f:{c.instructions+=2;NFSU2_TR(0x54bc8f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54bc93:{NFSU2_TR(0x54bc93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bc9c;}}
}
B54bc95:L54bc95:{c.instructions+=1;NFSU2_TR(0x54bc95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54bc9c:L54bc9c:{c.instructions+=2;NFSU2_TR(0x54bc9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54bc9f:{NFSU2_TR(0x54bc9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bd04;}}
}
B54bca1:L54bca1:{c.instructions+=4;NFSU2_TR(0x54bca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bca4:{NFSU2_TR(0x54bca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bca7:{NFSU2_TR(0x54bca7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bca9:{NFSU2_TR(0x54bca9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54bd04;}}
}
B54bcab:L54bcab:{c.instructions+=2;NFSU2_TR(0x54bcab);
__builtin_memmove((R+24),(R+0),4);
}
B54bcad:{NFSU2_TR(0x54bcad);
__builtin_memmove((R+4),(R+4),4);
}
B54bcb0:L54bcb0:{c.instructions+=2;NFSU2_TR(0x54bcb0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bcb1:{NFSU2_TR(0x54bcb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bcb6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B54bcb6:L54bcb6:{c.instructions+=4;NFSU2_TR(0x54bcb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bcb9:{NFSU2_TR(0x54bcb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54bcbc:{NFSU2_TR(0x54bcbc);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B54bcbd:{NFSU2_TR(0x54bcbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54bcb0u);}goto L54bcb0;}}
}
B54bcbf:L54bcbf:{c.instructions+=1;NFSU2_TR(0x54bcbf);
{goto L54bd04;}
}
B54bcc1:L54bcc1:{c.instructions+=2;NFSU2_TR(0x54bcc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bcc3:{NFSU2_TR(0x54bcc3);
if(r1(R+518)){{goto L54bd04;}}
}
B54bcc5:L54bcc5:{c.instructions+=3;NFSU2_TR(0x54bcc5);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B54bccb:{NFSU2_TR(0x54bccb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bccd:{NFSU2_TR(0x54bccd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bcd5;}}
}
B54bccf:L54bccf:{c.instructions+=2;NFSU2_TR(0x54bccf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54bcd3:{NFSU2_TR(0x54bcd3);
if(r1(R+518)){{goto L54bce4;}}
}
B54bcd5:L54bcd5:{c.instructions+=4;NFSU2_TR(0x54bcd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bcd8:{NFSU2_TR(0x54bcd8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B54bcdb:{NFSU2_TR(0x54bcdb);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B54bce1:{NFSU2_TR(0x54bce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bce4:L54bce4:{c.instructions+=2;NFSU2_TR(0x54bce4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54bce7:{NFSU2_TR(0x54bce7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bd04;}}
}
B54bce9:L54bce9:{c.instructions+=4;NFSU2_TR(0x54bce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bcec:{NFSU2_TR(0x54bcec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bcef:{NFSU2_TR(0x54bcef);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bcf1:{NFSU2_TR(0x54bcf1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54bd04;}}
}
B54bcf3:L54bcf3:{c.instructions+=1;NFSU2_TR(0x54bcf3);
__builtin_memmove((R+24),(R+0),4);
}
B54bcf5:L54bcf5:{c.instructions+=2;NFSU2_TR(0x54bcf5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bcf6:{NFSU2_TR(0x54bcf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bcfbull));
TAIL_STATIC(0x50ca50u,50c);
}
B54bcfb:L54bcfb:{c.instructions+=4;NFSU2_TR(0x54bcfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bcfe:{NFSU2_TR(0x54bcfe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54bd01:{NFSU2_TR(0x54bd01);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B54bd02:{NFSU2_TR(0x54bd02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54bcf5u);}goto L54bcf5;}}
}
B54bd04:L54bd04:{c.instructions+=8;NFSU2_TR(0x54bd04);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bd0b:{NFSU2_TR(0x54bd0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54bd0c:{NFSU2_TR(0x54bd0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54bd0d:{NFSU2_TR(0x54bd0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54bd0e:{NFSU2_TR(0x54bd0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54bd0f:{NFSU2_TR(0x54bd0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bd16:{NFSU2_TR(0x54bd16);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xccull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xccull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xccull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54bd1c:{NFSU2_TR(0x54bd1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54bd30:L54bd30:{c.instructions+=12;NFSU2_TR(0x54bd30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bd31:{NFSU2_TR(0x54bd31);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bd32:{NFSU2_TR(0x54bd32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bd33:{NFSU2_TR(0x54bd33);
__builtin_memmove((R+24),(R+4),4);
}
B54bd35:{NFSU2_TR(0x54bd35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bd36:{NFSU2_TR(0x54bd36);
w4(R+12,u32(0xffffff58ull));
}
B54bd3b:{NFSU2_TR(0x54bd3b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B54bd3d:{NFSU2_TR(0x54bd3d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B54bd3f:{NFSU2_TR(0x54bd3f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54bd41:{NFSU2_TR(0x54bd41);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54bd47:{NFSU2_TR(0x54bd47);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B54bd49:{NFSU2_TR(0x54bd49);
__builtin_memmove((R+16),(R+16),4);
}
B54bd50:L54bd50:{c.instructions+=3;NFSU2_TR(0x54bd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54bd53:{NFSU2_TR(0x54bd53);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bd55:{NFSU2_TR(0x54bd55);
if(r1(R+518)){{goto L54bd70;}}
}
B54bd57:L54bd57:{c.instructions+=6;NFSU2_TR(0x54bd57);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54bd5b:{NFSU2_TR(0x54bd5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B54bd5e:{NFSU2_TR(0x54bd5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+20))));
s4(u32(r4(R+0)),r4(U+0));
}
B54bd60:{NFSU2_TR(0x54bd60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B54bd62:{NFSU2_TR(0x54bd62);
u8 U[24];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+16)));
w4(U+20,u32(u32(r4(R+20))-u32(r4(U+16))));
w1(R+519,u8(s32(r4(U+20))<s32(u32(0x0ull))));
}
B54bd69:{NFSU2_TR(0x54bd69);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L54bd70;}}
}
B54bd6b:L54bd6b:{c.instructions+=2;NFSU2_TR(0x54bd6b);
__builtin_memmove((R+8),(R+4),4);
}
B54bd6d:{NFSU2_TR(0x54bd6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B54bd70:L54bd70:{c.instructions+=4;NFSU2_TR(0x54bd70);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54bd71:{NFSU2_TR(0x54bd71);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B54bd74:{NFSU2_TR(0x54bd74);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54bd77:{NFSU2_TR(0x54bd77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54bd50u);}goto L54bd50;}}
}
B54bd79:L54bd79:{c.instructions+=5;NFSU2_TR(0x54bd79);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B54bd7c:{NFSU2_TR(0x54bd7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B54bd7f:{NFSU2_TR(0x54bd7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bd85:{NFSU2_TR(0x54bd85);
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
B54bd87:{NFSU2_TR(0x54bd87);
if(r1(R+518)){{goto L54bde0;}}
}
B54bd89:L54bd89:{c.instructions+=5;NFSU2_TR(0x54bd89);
u8 U[12];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B54bd8d:{NFSU2_TR(0x54bd8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B54bd90:{NFSU2_TR(0x54bd90);
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
B54bd92:{NFSU2_TR(0x54bd92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B54bd95:{NFSU2_TR(0x54bd95);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54bde0;}}
}
B54bd97:L54bd97:{c.instructions+=3;NFSU2_TR(0x54bd97);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B54bd9c:{NFSU2_TR(0x54bd9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bd9e:{NFSU2_TR(0x54bd9e);
if(r1(R+518)){{goto L54bdc1;}}
}
B54bda0:L54bda0:{c.instructions+=3;NFSU2_TR(0x54bda0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54bda3:{NFSU2_TR(0x54bda3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bda5:{NFSU2_TR(0x54bda5);
if(r1(R+518)){{goto L54bdc1;}}
}
B54bda7:L54bda7:{c.instructions+=3;NFSU2_TR(0x54bda7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bda9:{NFSU2_TR(0x54bda9);
__builtin_memmove((R+4),(R+20),4);
}
B54bdab:{NFSU2_TR(0x54bdab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bdb0ull));
TAIL_STATIC(0x46d100u,46d);
}
B54bdb0:L54bdb0:{c.instructions+=2;NFSU2_TR(0x54bdb0);
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
B54bdb2:{NFSU2_TR(0x54bdb2);
if(r1(R+518)){{goto L54bde0;}}
}
B54bdb4:L54bdb4:{c.instructions+=3;NFSU2_TR(0x54bdb4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bdb6:{NFSU2_TR(0x54bdb6);
__builtin_memmove((R+4),(R+20),4);
}
B54bdb8:{NFSU2_TR(0x54bdb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bdbdull));
TAIL_STATIC(0x46d100u,46d);
}
B54bdbd:L54bdbd:{c.instructions+=2;NFSU2_TR(0x54bdbd);
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
B54bdbf:{NFSU2_TR(0x54bdbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bde0;}}
}
B54bdc1:L54bdc1:{c.instructions+=6;NFSU2_TR(0x54bdc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bdc7:{NFSU2_TR(0x54bdc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bdcd:{NFSU2_TR(0x54bdcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bdce:{NFSU2_TR(0x54bdce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bdcf:{NFSU2_TR(0x54bdcf);
__builtin_memmove((R+4),(R+24),4);
}
B54bdd1:{NFSU2_TR(0x54bdd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bdd6ull));
TAIL_STATIC(0x53e0b0u,53e);
}
B54bdd6:L54bdd6:{c.instructions+=4;NFSU2_TR(0x54bdd6);
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
B54bdd8:{NFSU2_TR(0x54bdd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B54bdda:{NFSU2_TR(0x54bdda);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bddd:{NFSU2_TR(0x54bddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bde0:L54bde0:{c.instructions+=5;NFSU2_TR(0x54bde0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54bde1:{NFSU2_TR(0x54bde1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54bde2:{NFSU2_TR(0x54bde2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54bde3:{NFSU2_TR(0x54bde3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54bde4:{NFSU2_TR(0x54bde4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54bdf0:L54bdf0:{c.instructions+=12;NFSU2_TR(0x54bdf0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bdf2:{NFSU2_TR(0x54bdf2);
u8 U[4];
w4(U+0,u32(0x77806bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bdf7:{NFSU2_TR(0x54bdf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bdfd:{NFSU2_TR(0x54bdfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bdfe:{NFSU2_TR(0x54bdfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54be05:{NFSU2_TR(0x54be05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54be06:{NFSU2_TR(0x54be06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54be07:{NFSU2_TR(0x54be07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54be08:{NFSU2_TR(0x54be08);
__builtin_memmove((R+28),(R+4),4);
}
B54be0a:{NFSU2_TR(0x54be0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54be0d:{NFSU2_TR(0x54be0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54be0f:{NFSU2_TR(0x54be0f);
if(r1(R+518)){{goto L54be22;}}
}
B54be11:L54be11:{c.instructions+=3;NFSU2_TR(0x54be11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54be17:{NFSU2_TR(0x54be17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54be19:{NFSU2_TR(0x54be19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54be74;}}
}
B54be1b:L54be1b:{c.instructions+=3;NFSU2_TR(0x54be1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54be1e:{NFSU2_TR(0x54be1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54be20:{NFSU2_TR(0x54be20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54be11u);}goto L54be11;}}
}
B54be22:L54be22:{c.instructions+=2;NFSU2_TR(0x54be22);
u8 U[4];
w4(U+0,u32(0x620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54be27:{NFSU2_TR(0x54be27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54be2cull));
TAIL_STATIC(0x575620u,575);
}
B54be2c:L54be2c:{c.instructions+=5;NFSU2_TR(0x54be2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54be2f:{NFSU2_TR(0x54be2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54be33:{NFSU2_TR(0x54be33);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54be35:{NFSU2_TR(0x54be35);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54be3d:{NFSU2_TR(0x54be3d);
if(r1(R+518)){{goto L54be48;}}
}
B54be3f:L54be3f:{c.instructions+=2;NFSU2_TR(0x54be3f);
__builtin_memmove((R+4),(R+0),4);
}
B54be41:{NFSU2_TR(0x54be41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54be46ull));
TAIL_STATIC(0x53e710u,53e);
}
B54be46:L54be46:{c.instructions+=1;NFSU2_TR(0x54be46);
{goto L54be4a;}
}
B54be48:L54be48:{c.instructions+=1;NFSU2_TR(0x54be48);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54be4a:L54be4a:{c.instructions+=3;NFSU2_TR(0x54be4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54be4c:{NFSU2_TR(0x54be4c);
__builtin_memmove((R+24),(R+0),4);
}
B54be4e:{NFSU2_TR(0x54be4e);
if(r1(R+518)){{goto L54be74;}}
}
B54be50:L54be50:{c.instructions+=4;NFSU2_TR(0x54be50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54be53:{NFSU2_TR(0x54be53);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54be55:{NFSU2_TR(0x54be55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54be58:{NFSU2_TR(0x54be58);
if(r1(R+518)){{goto L54be5d;}}
}
B54be5a:L54be5a:{c.instructions+=1;NFSU2_TR(0x54be5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54be5d:L54be5d:{c.instructions+=5;NFSU2_TR(0x54be5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54be64:{NFSU2_TR(0x54be64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54be67:{NFSU2_TR(0x54be67);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54be69:{NFSU2_TR(0x54be69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54be6c:{NFSU2_TR(0x54be6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54be71;}}
}
B54be6e:L54be6e:{c.instructions+=1;NFSU2_TR(0x54be6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54be71:L54be71:{c.instructions+=1;NFSU2_TR(0x54be71);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54be74:L54be74:{c.instructions+=4;NFSU2_TR(0x54be74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x614ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54be7a:{NFSU2_TR(0x54be7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54be7c:{NFSU2_TR(0x54be7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54be82:{NFSU2_TR(0x54be82);
if(r1(R+518)){{goto L54be8a;}}
}
B54be84:L54be84:{c.instructions+=2;NFSU2_TR(0x54be84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54be85:{NFSU2_TR(0x54be85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54be8aull));
TAIL_STATIC(0x505400u,505);
}
B54be8a:L54be8a:{c.instructions+=10;NFSU2_TR(0x54be8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54be90:{NFSU2_TR(0x54be90);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54be94:{NFSU2_TR(0x54be94);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B54be95:{NFSU2_TR(0x54be95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54be9b:{NFSU2_TR(0x54be9b);
__builtin_memmove((R+0),(R+28),4);
}
B54be9d:{NFSU2_TR(0x54be9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54be9e:{NFSU2_TR(0x54be9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54be9f:{NFSU2_TR(0x54be9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bea6:{NFSU2_TR(0x54bea6);
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
B54bea9:{NFSU2_TR(0x54bea9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54beb0:L54beb0:{c.instructions+=12;NFSU2_TR(0x54beb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54beb2:{NFSU2_TR(0x54beb2);
u8 U[4];
w4(U+0,u32(0x77806bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54beb7:{NFSU2_TR(0x54beb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bebd:{NFSU2_TR(0x54bebd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bebe:{NFSU2_TR(0x54bebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bec5:{NFSU2_TR(0x54bec5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bec6:{NFSU2_TR(0x54bec6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bec7:{NFSU2_TR(0x54bec7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bec8:{NFSU2_TR(0x54bec8);
__builtin_memmove((R+28),(R+4),4);
}
B54beca:{NFSU2_TR(0x54beca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54becd:{NFSU2_TR(0x54becd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54becf:{NFSU2_TR(0x54becf);
if(r1(R+518)){{goto L54bee2;}}
}
B54bed1:L54bed1:{c.instructions+=3;NFSU2_TR(0x54bed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bed7:{NFSU2_TR(0x54bed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bed9:{NFSU2_TR(0x54bed9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bf34;}}
}
B54bedb:L54bedb:{c.instructions+=3;NFSU2_TR(0x54bedb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54bede:{NFSU2_TR(0x54bede);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bee0:{NFSU2_TR(0x54bee0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54bed1u);}goto L54bed1;}}
}
B54bee2:L54bee2:{c.instructions+=2;NFSU2_TR(0x54bee2);
u8 U[4];
w4(U+0,u32(0x6a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bee7:{NFSU2_TR(0x54bee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54beecull));
TAIL_STATIC(0x575620u,575);
}
B54beec:L54beec:{c.instructions+=5;NFSU2_TR(0x54beec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54beef:{NFSU2_TR(0x54beef);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bef3:{NFSU2_TR(0x54bef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bef5:{NFSU2_TR(0x54bef5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54befd:{NFSU2_TR(0x54befd);
if(r1(R+518)){{goto L54bf08;}}
}
B54beff:L54beff:{c.instructions+=2;NFSU2_TR(0x54beff);
__builtin_memmove((R+4),(R+0),4);
}
B54bf01:{NFSU2_TR(0x54bf01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bf06ull));
TAIL_STATIC(0x53e910u,53e);
}
B54bf06:L54bf06:{c.instructions+=1;NFSU2_TR(0x54bf06);
{goto L54bf0a;}
}
B54bf08:L54bf08:{c.instructions+=1;NFSU2_TR(0x54bf08);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54bf0a:L54bf0a:{c.instructions+=3;NFSU2_TR(0x54bf0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bf0c:{NFSU2_TR(0x54bf0c);
__builtin_memmove((R+24),(R+0),4);
}
B54bf0e:{NFSU2_TR(0x54bf0e);
if(r1(R+518)){{goto L54bf34;}}
}
B54bf10:L54bf10:{c.instructions+=4;NFSU2_TR(0x54bf10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bf13:{NFSU2_TR(0x54bf13);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bf15:{NFSU2_TR(0x54bf15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bf18:{NFSU2_TR(0x54bf18);
if(r1(R+518)){{goto L54bf1d;}}
}
B54bf1a:L54bf1a:{c.instructions+=1;NFSU2_TR(0x54bf1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bf1d:L54bf1d:{c.instructions+=5;NFSU2_TR(0x54bf1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54bf24:{NFSU2_TR(0x54bf24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bf27:{NFSU2_TR(0x54bf27);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bf29:{NFSU2_TR(0x54bf29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bf2c:{NFSU2_TR(0x54bf2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54bf31;}}
}
B54bf2e:L54bf2e:{c.instructions+=1;NFSU2_TR(0x54bf2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bf31:L54bf31:{c.instructions+=1;NFSU2_TR(0x54bf31);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54bf34:L54bf34:{c.instructions+=4;NFSU2_TR(0x54bf34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54bf3a:{NFSU2_TR(0x54bf3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54bf3c:{NFSU2_TR(0x54bf3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54bf42:{NFSU2_TR(0x54bf42);
if(r1(R+518)){{goto L54bf4a;}}
}
B54bf44:L54bf44:{c.instructions+=2;NFSU2_TR(0x54bf44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bf45:{NFSU2_TR(0x54bf45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bf4aull));
TAIL_STATIC(0x505400u,505);
}
B54bf4a:L54bf4a:{c.instructions+=10;NFSU2_TR(0x54bf4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bf50:{NFSU2_TR(0x54bf50);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bf54:{NFSU2_TR(0x54bf54);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B54bf55:{NFSU2_TR(0x54bf55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bf5b:{NFSU2_TR(0x54bf5b);
__builtin_memmove((R+0),(R+28),4);
}
B54bf5d:{NFSU2_TR(0x54bf5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54bf5e:{NFSU2_TR(0x54bf5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54bf5f:{NFSU2_TR(0x54bf5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bf66:{NFSU2_TR(0x54bf66);
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
B54bf69:{NFSU2_TR(0x54bf69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54bf70:L54bf70:{c.instructions+=14;NFSU2_TR(0x54bf70);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bf76:{NFSU2_TR(0x54bf76);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bf78:{NFSU2_TR(0x54bf78);
u8 U[4];
w4(U+0,u32(0x777b3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bf7d:{NFSU2_TR(0x54bf7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bf7e:{NFSU2_TR(0x54bf7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54bf82:{NFSU2_TR(0x54bf82);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bf89:{NFSU2_TR(0x54bf89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bf8a:{NFSU2_TR(0x54bf8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bf8b:{NFSU2_TR(0x54bf8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bf8c:{NFSU2_TR(0x54bf8c);
__builtin_memmove((R+24),(R+4),4);
}
B54bf8e:{NFSU2_TR(0x54bf8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bf8f:{NFSU2_TR(0x54bf8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54bf92:{NFSU2_TR(0x54bf92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bf93:{NFSU2_TR(0x54bf93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bf98ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B54bf98:L54bf98:{c.instructions+=25;NFSU2_TR(0x54bf98);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54bf9c:{NFSU2_TR(0x54bf9c);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B54bfa0:{NFSU2_TR(0x54bfa0);
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
B54bfa2:{NFSU2_TR(0x54bfa2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54bfa5:{NFSU2_TR(0x54bfa5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54bfa8:{NFSU2_TR(0x54bfa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54bfab:{NFSU2_TR(0x54bfab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54bfae:{NFSU2_TR(0x54bfae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54bfb1:{NFSU2_TR(0x54bfb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54bfb4:{NFSU2_TR(0x54bfb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54bfb7:{NFSU2_TR(0x54bfb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54bfbb:{NFSU2_TR(0x54bfbb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54bfbe:{NFSU2_TR(0x54bfbe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54bfc2:{NFSU2_TR(0x54bfc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54bfc5:{NFSU2_TR(0x54bfc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54bfc9:{NFSU2_TR(0x54bfc9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54bfcc:{NFSU2_TR(0x54bfcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bfcf:{NFSU2_TR(0x54bfcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54bfd2:{NFSU2_TR(0x54bfd2);
__builtin_memmove((R+0),gp(0x8161f4),4);
}
B54bfd7:{NFSU2_TR(0x54bfd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bfd8:{NFSU2_TR(0x54bfd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bfd9:{NFSU2_TR(0x54bfd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bfda:{NFSU2_TR(0x54bfda);
u8 U[4];
w4(U+0,u32(0x94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bfdf:{NFSU2_TR(0x54bfdf);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54bfe4:{NFSU2_TR(0x54bfe4);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161ec),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54bfeaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B54bfea:L54bfea:{c.instructions+=5;NFSU2_TR(0x54bfea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B54bfed:{NFSU2_TR(0x54bfed);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bff1:{NFSU2_TR(0x54bff1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54bff3:{NFSU2_TR(0x54bff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54bff7:{NFSU2_TR(0x54bff7);
if(r1(R+518)){TAIL_STATIC(0x54c016u,54c);}
}
B54bff9:L54bff9:{c.instructions+=3;NFSU2_TR(0x54bff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54bffc:{NFSU2_TR(0x54bffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54bfff:{NFSU2_TR(0x54bfff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x54c000u,54c);
}
XIT:NFSU2_TR_EXIT(0x54b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
