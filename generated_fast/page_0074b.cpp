#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_74c(u8* __restrict R,Cpu& c);
u32 body_754(u8* __restrict R,Cpu& c);
u32 body_755(u8* __restrict R,Cpu& c);
u32 body_756(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x74b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x74b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_74b(u8* __restrict R,Cpu& c);
u32 page_74b(Cpu& c){return body_74b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_74b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x74b003:goto L74b003;
case 0x74b008:goto L74b008;
case 0x74b00b:c.instructions+=6;goto B74b00b;
case 0x74b00c:c.instructions+=5;goto B74b00c;
case 0x74b011:c.instructions+=4;goto B74b011;
case 0x74b015:c.instructions+=3;goto B74b015;
case 0x74b01a:c.instructions+=2;goto B74b01a;
case 0x74b01b:c.instructions+=1;goto B74b01b;
case 0x74b020:goto L74b020;
case 0x74b023:c.instructions+=6;goto B74b023;
case 0x74b025:c.instructions+=5;goto B74b025;
case 0x74b029:c.instructions+=4;goto B74b029;
case 0x74b02a:c.instructions+=3;goto B74b02a;
case 0x74b02b:c.instructions+=2;goto B74b02b;
case 0x74b02c:c.instructions+=1;goto B74b02c;
case 0x74b031:goto L74b031;
case 0x74b033:c.instructions+=15;goto B74b033;
case 0x74b037:c.instructions+=14;goto B74b037;
case 0x74b03a:c.instructions+=13;goto B74b03a;
case 0x74b03f:c.instructions+=12;goto B74b03f;
case 0x74b044:c.instructions+=11;goto B74b044;
case 0x74b048:c.instructions+=10;goto B74b048;
case 0x74b04b:c.instructions+=9;goto B74b04b;
case 0x74b04d:c.instructions+=8;goto B74b04d;
case 0x74b050:c.instructions+=7;goto B74b050;
case 0x74b053:c.instructions+=6;goto B74b053;
case 0x74b057:c.instructions+=5;goto B74b057;
case 0x74b058:c.instructions+=4;goto B74b058;
case 0x74b05b:c.instructions+=3;goto B74b05b;
case 0x74b05f:c.instructions+=2;goto B74b05f;
case 0x74b063:c.instructions+=1;goto B74b063;
case 0x74b065:goto L74b065;
case 0x74b067:c.instructions+=7;goto B74b067;
case 0x74b06a:c.instructions+=6;goto B74b06a;
case 0x74b06c:c.instructions+=5;goto B74b06c;
case 0x74b06f:c.instructions+=4;goto B74b06f;
case 0x74b071:c.instructions+=3;goto B74b071;
case 0x74b072:c.instructions+=2;goto B74b072;
case 0x74b075:c.instructions+=1;goto B74b075;
case 0x74b077:goto L74b077;
case 0x74b07a:c.instructions+=3;goto B74b07a;
case 0x74b07c:c.instructions+=2;goto B74b07c;
case 0x74b082:c.instructions+=1;goto B74b082;
case 0x74b084:goto L74b084;
case 0x74b087:c.instructions+=5;goto B74b087;
case 0x74b088:c.instructions+=4;goto B74b088;
case 0x74b08b:c.instructions+=3;goto B74b08b;
case 0x74b090:c.instructions+=2;goto B74b090;
case 0x74b091:c.instructions+=1;goto B74b091;
case 0x74b093:goto L74b093;
case 0x74b096:goto L74b096;
case 0x74b09a:c.instructions+=6;goto B74b09a;
case 0x74b09d:c.instructions+=5;goto B74b09d;
case 0x74b09e:c.instructions+=4;goto B74b09e;
case 0x74b0a1:c.instructions+=3;goto B74b0a1;
case 0x74b0a3:c.instructions+=2;goto B74b0a3;
case 0x74b0a7:c.instructions+=1;goto B74b0a7;
case 0x74b0ad:goto L74b0ad;
case 0x74b0b1:c.instructions+=9;goto B74b0b1;
case 0x74b0b2:c.instructions+=8;goto B74b0b2;
case 0x74b0b5:c.instructions+=7;goto B74b0b5;
case 0x74b0b9:c.instructions+=6;goto B74b0b9;
case 0x74b0ba:c.instructions+=5;goto B74b0ba;
case 0x74b0be:c.instructions+=4;goto B74b0be;
case 0x74b0bf:c.instructions+=3;goto B74b0bf;
case 0x74b0c0:c.instructions+=2;goto B74b0c0;
case 0x74b0c8:c.instructions+=1;goto B74b0c8;
case 0x74b0cd:goto L74b0cd;
case 0x74b0d0:c.instructions+=2;goto B74b0d0;
case 0x74b0d2:c.instructions+=1;goto B74b0d2;
case 0x74b0d8:goto L74b0d8;
case 0x74b0dd:c.instructions+=1;goto B74b0dd;
case 0x74b0df:goto L74b0df;
case 0x74b0e2:c.instructions+=2;goto B74b0e2;
case 0x74b0e4:c.instructions+=1;goto B74b0e4;
case 0x74b0e6:goto L74b0e6;
case 0x74b0e9:c.instructions+=6;goto B74b0e9;
case 0x74b0ed:c.instructions+=5;goto B74b0ed;
case 0x74b0ee:c.instructions+=4;goto B74b0ee;
case 0x74b0ef:c.instructions+=3;goto B74b0ef;
case 0x74b0f3:c.instructions+=2;goto B74b0f3;
case 0x74b0f4:c.instructions+=1;goto B74b0f4;
case 0x74b0f6:goto L74b0f6;
case 0x74b0fb:goto L74b0fb;
case 0x74b0fd:c.instructions+=4;goto B74b0fd;
case 0x74b101:c.instructions+=3;goto B74b101;
case 0x74b106:c.instructions+=2;goto B74b106;
case 0x74b107:c.instructions+=1;goto B74b107;
case 0x74b10c:goto L74b10c;
case 0x74b10f:c.instructions+=2;goto B74b10f;
case 0x74b110:c.instructions+=1;goto B74b110;
case 0x74b115:goto L74b115;
case 0x74b118:c.instructions+=2;goto B74b118;
case 0x74b11a:c.instructions+=1;goto B74b11a;
case 0x74b11c:goto L74b11c;
case 0x74b11f:c.instructions+=1;goto B74b11f;
case 0x74b121:goto L74b121;
case 0x74b124:c.instructions+=5;goto B74b124;
case 0x74b128:c.instructions+=4;goto B74b128;
case 0x74b12d:c.instructions+=3;goto B74b12d;
case 0x74b131:c.instructions+=2;goto B74b131;
case 0x74b133:c.instructions+=1;goto B74b133;
case 0x74b135:goto L74b135;
case 0x74b137:goto L74b137;
case 0x74b139:goto L74b139;
case 0x74b13c:c.instructions+=3;goto B74b13c;
case 0x74b13e:c.instructions+=2;goto B74b13e;
case 0x74b140:c.instructions+=1;goto B74b140;
case 0x74b142:goto L74b142;
case 0x74b145:goto L74b145;
case 0x74b14a:c.instructions+=3;goto B74b14a;
case 0x74b14e:c.instructions+=2;goto B74b14e;
case 0x74b150:c.instructions+=1;goto B74b150;
case 0x74b152:goto L74b152;
case 0x74b154:goto L74b154;
case 0x74b156:goto L74b156;
case 0x74b159:c.instructions+=4;goto B74b159;
case 0x74b15a:c.instructions+=3;goto B74b15a;
case 0x74b15d:c.instructions+=2;goto B74b15d;
case 0x74b15f:c.instructions+=1;goto B74b15f;
case 0x74b161:goto L74b161;
case 0x74b163:goto L74b163;
case 0x74b166:c.instructions+=1;goto B74b166;
case 0x74b168:goto L74b168;
case 0x74b16b:c.instructions+=2;goto B74b16b;
case 0x74b16e:c.instructions+=1;goto B74b16e;
case 0x74b170:goto L74b170;
case 0x74b172:c.instructions+=1;goto B74b172;
case 0x74b174:goto L74b174;
case 0x74b178:c.instructions+=2;goto B74b178;
case 0x74b17e:c.instructions+=1;goto B74b17e;
case 0x74b180:goto L74b180;
case 0x74b185:c.instructions+=1;goto B74b185;
case 0x74b189:goto L74b189;
case 0x74b18d:c.instructions+=3;goto B74b18d;
case 0x74b190:c.instructions+=2;goto B74b190;
case 0x74b192:c.instructions+=1;goto B74b192;
case 0x74b194:goto L74b194;
case 0x74b197:c.instructions+=6;goto B74b197;
case 0x74b19b:c.instructions+=5;goto B74b19b;
case 0x74b19c:c.instructions+=4;goto B74b19c;
case 0x74b19d:c.instructions+=3;goto B74b19d;
case 0x74b1a1:c.instructions+=2;goto B74b1a1;
case 0x74b1a2:c.instructions+=1;goto B74b1a2;
case 0x74b1a4:goto L74b1a4;
case 0x74b1a7:goto L74b1a7;
case 0x74b1ab:c.instructions+=8;goto B74b1ab;
case 0x74b1ac:c.instructions+=7;goto B74b1ac;
case 0x74b1af:c.instructions+=6;goto B74b1af;
case 0x74b1b3:c.instructions+=5;goto B74b1b3;
case 0x74b1b4:c.instructions+=4;goto B74b1b4;
case 0x74b1b8:c.instructions+=3;goto B74b1b8;
case 0x74b1b9:c.instructions+=2;goto B74b1b9;
case 0x74b1ba:c.instructions+=1;goto B74b1ba;
case 0x74b1bf:goto L74b1bf;
case 0x74b1c2:c.instructions+=2;goto B74b1c2;
case 0x74b1c4:c.instructions+=1;goto B74b1c4;
case 0x74b1ca:goto L74b1ca;
case 0x74b1d1:c.instructions+=5;goto B74b1d1;
case 0x74b1d2:c.instructions+=4;goto B74b1d2;
case 0x74b1d3:c.instructions+=3;goto B74b1d3;
case 0x74b1d4:c.instructions+=2;goto B74b1d4;
case 0x74b1d5:c.instructions+=1;goto B74b1d5;
case 0x74b1da:goto L74b1da;
case 0x74b1e0:c.instructions+=1;goto B74b1e0;
case 0x74b1f0:goto L74b1f0;
case 0x74b1f1:c.instructions+=9;goto B74b1f1;
case 0x74b1f5:c.instructions+=8;goto B74b1f5;
case 0x74b1f8:c.instructions+=7;goto B74b1f8;
case 0x74b1f9:c.instructions+=6;goto B74b1f9;
case 0x74b1fd:c.instructions+=5;goto B74b1fd;
case 0x74b1fe:c.instructions+=4;goto B74b1fe;
case 0x74b200:c.instructions+=3;goto B74b200;
case 0x74b202:c.instructions+=2;goto B74b202;
case 0x74b203:c.instructions+=1;goto B74b203;
case 0x74b205:goto L74b205;
case 0x74b208:c.instructions+=2;goto B74b208;
case 0x74b20c:c.instructions+=1;goto B74b20c;
case 0x74b210:goto L74b210;
case 0x74b215:c.instructions+=2;goto B74b215;
case 0x74b217:c.instructions+=1;goto B74b217;
case 0x74b219:goto L74b219;
case 0x74b21b:goto L74b21b;
case 0x74b21d:goto L74b21d;
case 0x74b221:c.instructions+=6;goto B74b221;
case 0x74b224:c.instructions+=5;goto B74b224;
case 0x74b225:c.instructions+=4;goto B74b225;
case 0x74b228:c.instructions+=3;goto B74b228;
case 0x74b22a:c.instructions+=2;goto B74b22a;
case 0x74b22e:c.instructions+=1;goto B74b22e;
case 0x74b230:goto L74b230;
case 0x74b233:c.instructions+=2;goto B74b233;
case 0x74b235:c.instructions+=1;goto B74b235;
case 0x74b237:goto L74b237;
case 0x74b239:c.instructions+=1;goto B74b239;
case 0x74b23e:goto L74b23e;
case 0x74b23f:c.instructions+=3;goto B74b23f;
case 0x74b242:c.instructions+=2;goto B74b242;
case 0x74b244:c.instructions+=1;goto B74b244;
case 0x74b246:goto L74b246;
case 0x74b249:c.instructions+=1;goto B74b249;
case 0x74b24b:goto L74b24b;
case 0x74b24e:c.instructions+=6;goto B74b24e;
case 0x74b24f:c.instructions+=5;goto B74b24f;
case 0x74b252:c.instructions+=4;goto B74b252;
case 0x74b254:c.instructions+=3;goto B74b254;
case 0x74b256:c.instructions+=2;goto B74b256;
case 0x74b259:c.instructions+=1;goto B74b259;
case 0x74b25b:goto L74b25b;
case 0x74b25e:c.instructions+=4;goto B74b25e;
case 0x74b261:c.instructions+=3;goto B74b261;
case 0x74b263:c.instructions+=2;goto B74b263;
case 0x74b264:c.instructions+=1;goto B74b264;
case 0x74b267:goto L74b267;
case 0x74b26a:c.instructions+=19;goto B74b26a;
case 0x74b26c:c.instructions+=18;goto B74b26c;
case 0x74b26e:c.instructions+=17;goto B74b26e;
case 0x74b271:c.instructions+=16;goto B74b271;
case 0x74b274:c.instructions+=15;goto B74b274;
case 0x74b277:c.instructions+=14;goto B74b277;
case 0x74b27a:c.instructions+=13;goto B74b27a;
case 0x74b27d:c.instructions+=12;goto B74b27d;
case 0x74b280:c.instructions+=11;goto B74b280;
case 0x74b283:c.instructions+=10;goto B74b283;
case 0x74b286:c.instructions+=9;goto B74b286;
case 0x74b28a:c.instructions+=8;goto B74b28a;
case 0x74b28e:c.instructions+=7;goto B74b28e;
case 0x74b291:c.instructions+=6;goto B74b291;
case 0x74b294:c.instructions+=5;goto B74b294;
case 0x74b29a:c.instructions+=4;goto B74b29a;
case 0x74b29d:c.instructions+=3;goto B74b29d;
case 0x74b29f:c.instructions+=2;goto B74b29f;
case 0x74b2a2:c.instructions+=1;goto B74b2a2;
case 0x74b2a5:goto L74b2a5;
case 0x74b2a9:c.instructions+=6;goto B74b2a9;
case 0x74b2ac:c.instructions+=5;goto B74b2ac;
case 0x74b2ad:c.instructions+=4;goto B74b2ad;
case 0x74b2ae:c.instructions+=3;goto B74b2ae;
case 0x74b2af:c.instructions+=2;goto B74b2af;
case 0x74b2b0:c.instructions+=1;goto B74b2b0;
case 0x74b2b2:goto L74b2b2;
case 0x74b2b7:c.instructions+=1;goto B74b2b7;
case 0x74b2b8:goto L74b2b8;
case 0x74b2bd:c.instructions+=1;goto B74b2bd;
case 0x74b2bf:goto L74b2bf;
case 0x74b2c2:goto L74b2c2;
case 0x74b2d0:goto L74b2d0;
case 0x74b2d4:c.instructions+=9;goto B74b2d4;
case 0x74b2d8:c.instructions+=8;goto B74b2d8;
case 0x74b2dc:c.instructions+=7;goto B74b2dc;
case 0x74b2df:c.instructions+=6;goto B74b2df;
case 0x74b2e2:c.instructions+=5;goto B74b2e2;
case 0x74b2ea:c.instructions+=4;goto B74b2ea;
case 0x74b2f2:c.instructions+=3;goto B74b2f2;
case 0x74b2f5:c.instructions+=2;goto B74b2f5;
case 0x74b2f9:c.instructions+=1;goto B74b2f9;
case 0x74b300:goto L74b300;
case 0x74b304:c.instructions+=5;goto B74b304;
case 0x74b307:c.instructions+=4;goto B74b307;
case 0x74b308:c.instructions+=3;goto B74b308;
case 0x74b30a:c.instructions+=2;goto B74b30a;
case 0x74b30c:c.instructions+=1;goto B74b30c;
case 0x74b30e:goto L74b30e;
case 0x74b311:goto L74b311;
case 0x74b317:c.instructions+=9;goto B74b317;
case 0x74b31a:c.instructions+=8;goto B74b31a;
case 0x74b31c:c.instructions+=7;goto B74b31c;
case 0x74b31e:c.instructions+=6;goto B74b31e;
case 0x74b321:c.instructions+=5;goto B74b321;
case 0x74b324:c.instructions+=4;goto B74b324;
case 0x74b325:c.instructions+=3;goto B74b325;
case 0x74b328:c.instructions+=2;goto B74b328;
case 0x74b32a:c.instructions+=1;goto B74b32a;
case 0x74b32c:goto L74b32c;
case 0x74b32d:c.instructions+=1;goto B74b32d;
case 0x74b330:goto L74b330;
case 0x74b335:c.instructions+=1;goto B74b335;
case 0x74b33a:goto L74b33a;
case 0x74b33f:c.instructions+=5;goto B74b33f;
case 0x74b340:c.instructions+=4;goto B74b340;
case 0x74b347:c.instructions+=3;goto B74b347;
case 0x74b34a:c.instructions+=2;goto B74b34a;
case 0x74b351:c.instructions+=1;goto B74b351;
case 0x74b357:goto L74b357;
case 0x74b35d:c.instructions+=2;goto B74b35d;
case 0x74b35e:c.instructions+=1;goto B74b35e;
case 0x74b360:goto L74b360;
case 0x74b364:c.instructions+=6;goto B74b364;
case 0x74b36b:c.instructions+=5;goto B74b36b;
case 0x74b372:c.instructions+=4;goto B74b372;
case 0x74b376:c.instructions+=3;goto B74b376;
case 0x74b37a:c.instructions+=2;goto B74b37a;
case 0x74b37e:c.instructions+=1;goto B74b37e;
case 0x74b380:goto L74b380;
case 0x74b387:c.instructions+=2;goto B74b387;
case 0x74b388:c.instructions+=1;goto B74b388;
case 0x74b38d:goto L74b38d;
case 0x74b38e:c.instructions+=2;goto B74b38e;
case 0x74b392:c.instructions+=1;goto B74b392;
case 0x74b397:goto L74b397;
case 0x74b398:c.instructions+=2;goto B74b398;
case 0x74b39c:c.instructions+=1;goto B74b39c;
case 0x74b3a1:goto L74b3a1;
case 0x74b3a5:c.instructions+=2;goto B74b3a5;
case 0x74b3a8:c.instructions+=1;goto B74b3a8;
case 0x74b3ac:goto L74b3ac;
case 0x74b3ad:c.instructions+=4;goto B74b3ad;
case 0x74b3ae:c.instructions+=3;goto B74b3ae;
case 0x74b3b5:c.instructions+=2;goto B74b3b5;
case 0x74b3bb:c.instructions+=1;goto B74b3bb;
case 0x74b3bd:goto L74b3bd;
case 0x74b3c4:c.instructions+=2;goto B74b3c4;
case 0x74b3c8:c.instructions+=1;goto B74b3c8;
case 0x74b3ca:goto L74b3ca;
case 0x74b3cb:c.instructions+=1;goto B74b3cb;
case 0x74b3d0:goto L74b3d0;
case 0x74b3d3:c.instructions+=1;goto B74b3d3;
case 0x74b3d7:goto L74b3d7;
case 0x74b3de:c.instructions+=10;goto B74b3de;
case 0x74b3e1:c.instructions+=9;goto B74b3e1;
case 0x74b3e5:c.instructions+=8;goto B74b3e5;
case 0x74b3e7:c.instructions+=7;goto B74b3e7;
case 0x74b3e9:c.instructions+=6;goto B74b3e9;
case 0x74b3eb:c.instructions+=5;goto B74b3eb;
case 0x74b3ed:c.instructions+=4;goto B74b3ed;
case 0x74b3f1:c.instructions+=3;goto B74b3f1;
case 0x74b3f3:c.instructions+=2;goto B74b3f3;
case 0x74b3f9:c.instructions+=1;goto B74b3f9;
case 0x74b3fb:goto L74b3fb;
case 0x74b400:goto L74b400;
case 0x74b404:c.instructions+=6;goto B74b404;
case 0x74b406:c.instructions+=5;goto B74b406;
case 0x74b40d:c.instructions+=4;goto B74b40d;
case 0x74b40e:c.instructions+=3;goto B74b40e;
case 0x74b40f:c.instructions+=2;goto B74b40f;
case 0x74b410:c.instructions+=1;goto B74b410;
case 0x74b417:goto L74b417;
case 0x74b41a:c.instructions+=2;goto B74b41a;
case 0x74b41c:c.instructions+=1;goto B74b41c;
case 0x74b41e:goto L74b41e;
case 0x74b421:c.instructions+=1;goto B74b421;
case 0x74b423:goto L74b423;
case 0x74b426:c.instructions+=1;goto B74b426;
case 0x74b42d:goto L74b42d;
case 0x74b431:c.instructions+=7;goto B74b431;
case 0x74b438:c.instructions+=6;goto B74b438;
case 0x74b43b:c.instructions+=5;goto B74b43b;
case 0x74b43d:c.instructions+=4;goto B74b43d;
case 0x74b43f:c.instructions+=3;goto B74b43f;
case 0x74b441:c.instructions+=2;goto B74b441;
case 0x74b445:c.instructions+=1;goto B74b445;
case 0x74b447:goto L74b447;
case 0x74b44a:c.instructions+=8;goto B74b44a;
case 0x74b44c:c.instructions+=7;goto B74b44c;
case 0x74b44f:c.instructions+=6;goto B74b44f;
case 0x74b452:c.instructions+=5;goto B74b452;
case 0x74b455:c.instructions+=4;goto B74b455;
case 0x74b457:c.instructions+=3;goto B74b457;
case 0x74b45a:c.instructions+=2;goto B74b45a;
case 0x74b45e:c.instructions+=1;goto B74b45e;
case 0x74b464:goto L74b464;
case 0x74b466:goto L74b466;
case 0x74b46a:c.instructions+=1;goto B74b46a;
case 0x74b470:goto L74b470;
case 0x74b472:c.instructions+=19;goto B74b472;
case 0x74b474:c.instructions+=18;goto B74b474;
case 0x74b476:c.instructions+=17;goto B74b476;
case 0x74b479:c.instructions+=16;goto B74b479;
case 0x74b47d:c.instructions+=15;goto B74b47d;
case 0x74b480:c.instructions+=14;goto B74b480;
case 0x74b484:c.instructions+=13;goto B74b484;
case 0x74b487:c.instructions+=12;goto B74b487;
case 0x74b489:c.instructions+=11;goto B74b489;
case 0x74b48d:c.instructions+=10;goto B74b48d;
case 0x74b490:c.instructions+=9;goto B74b490;
case 0x74b494:c.instructions+=8;goto B74b494;
case 0x74b496:c.instructions+=7;goto B74b496;
case 0x74b499:c.instructions+=6;goto B74b499;
case 0x74b49b:c.instructions+=5;goto B74b49b;
case 0x74b49e:c.instructions+=4;goto B74b49e;
case 0x74b4a2:c.instructions+=3;goto B74b4a2;
case 0x74b4a6:c.instructions+=2;goto B74b4a6;
case 0x74b4aa:c.instructions+=1;goto B74b4aa;
case 0x74b4b0:goto L74b4b0;
case 0x74b4b2:goto L74b4b2;
case 0x74b4b6:goto L74b4b6;
case 0x74b4ba:c.instructions+=1;goto B74b4ba;
case 0x74b4bc:goto L74b4bc;
case 0x74b4be:c.instructions+=1;goto B74b4be;
case 0x74b4c0:goto L74b4c0;
case 0x74b4c4:c.instructions+=6;goto B74b4c4;
case 0x74b4c6:c.instructions+=5;goto B74b4c6;
case 0x74b4c8:c.instructions+=4;goto B74b4c8;
case 0x74b4cb:c.instructions+=3;goto B74b4cb;
case 0x74b4cf:c.instructions+=2;goto B74b4cf;
case 0x74b4d2:c.instructions+=1;goto B74b4d2;
case 0x74b4d4:goto L74b4d4;
case 0x74b4d6:c.instructions+=1;goto B74b4d6;
case 0x74b4d8:goto L74b4d8;
case 0x74b4dc:c.instructions+=6;goto B74b4dc;
case 0x74b4de:c.instructions+=5;goto B74b4de;
case 0x74b4e0:c.instructions+=4;goto B74b4e0;
case 0x74b4e3:c.instructions+=3;goto B74b4e3;
case 0x74b4e7:c.instructions+=2;goto B74b4e7;
case 0x74b4ea:c.instructions+=1;goto B74b4ea;
case 0x74b4ec:goto L74b4ec;
case 0x74b4ee:c.instructions+=6;goto B74b4ee;
case 0x74b4f0:c.instructions+=5;goto B74b4f0;
case 0x74b4f7:c.instructions+=4;goto B74b4f7;
case 0x74b4f8:c.instructions+=3;goto B74b4f8;
case 0x74b4f9:c.instructions+=2;goto B74b4f9;
case 0x74b4fa:c.instructions+=1;goto B74b4fa;
case 0x74b501:goto L74b501;
case 0x74b504:c.instructions+=3;goto B74b504;
case 0x74b506:c.instructions+=2;goto B74b506;
case 0x74b50a:c.instructions+=1;goto B74b50a;
case 0x74b50c:goto L74b50c;
case 0x74b50e:c.instructions+=5;goto B74b50e;
case 0x74b510:c.instructions+=4;goto B74b510;
case 0x74b513:c.instructions+=3;goto B74b513;
case 0x74b517:c.instructions+=2;goto B74b517;
case 0x74b51a:c.instructions+=1;goto B74b51a;
case 0x74b51c:goto L74b51c;
case 0x74b51e:c.instructions+=5;goto B74b51e;
case 0x74b520:c.instructions+=4;goto B74b520;
case 0x74b523:c.instructions+=3;goto B74b523;
case 0x74b527:c.instructions+=2;goto B74b527;
case 0x74b52a:c.instructions+=1;goto B74b52a;
case 0x74b52c:goto L74b52c;
case 0x74b530:c.instructions+=17;goto B74b530;
case 0x74b534:c.instructions+=16;goto B74b534;
case 0x74b536:c.instructions+=15;goto B74b536;
case 0x74b538:c.instructions+=14;goto B74b538;
case 0x74b53b:c.instructions+=13;goto B74b53b;
case 0x74b53e:c.instructions+=12;goto B74b53e;
case 0x74b541:c.instructions+=11;goto B74b541;
case 0x74b544:c.instructions+=10;goto B74b544;
case 0x74b547:c.instructions+=9;goto B74b547;
case 0x74b549:c.instructions+=8;goto B74b549;
case 0x74b54c:c.instructions+=7;goto B74b54c;
case 0x74b54e:c.instructions+=6;goto B74b54e;
case 0x74b551:c.instructions+=5;goto B74b551;
case 0x74b555:c.instructions+=4;goto B74b555;
case 0x74b559:c.instructions+=3;goto B74b559;
case 0x74b55d:c.instructions+=2;goto B74b55d;
case 0x74b561:c.instructions+=1;goto B74b561;
case 0x74b567:goto L74b567;
case 0x74b56b:c.instructions+=9;goto B74b56b;
case 0x74b56f:c.instructions+=8;goto B74b56f;
case 0x74b575:c.instructions+=7;goto B74b575;
case 0x74b578:c.instructions+=6;goto B74b578;
case 0x74b57f:c.instructions+=5;goto B74b57f;
case 0x74b582:c.instructions+=4;goto B74b582;
case 0x74b583:c.instructions+=3;goto B74b583;
case 0x74b585:c.instructions+=2;goto B74b585;
case 0x74b589:c.instructions+=1;goto B74b589;
case 0x74b58f:goto L74b58f;
case 0x74b591:c.instructions+=1;goto B74b591;
case 0x74b597:goto L74b597;
case 0x74b59a:c.instructions+=6;goto B74b59a;
case 0x74b59e:c.instructions+=5;goto B74b59e;
case 0x74b5a5:c.instructions+=4;goto B74b5a5;
case 0x74b5a7:c.instructions+=3;goto B74b5a7;
case 0x74b5a9:c.instructions+=2;goto B74b5a9;
case 0x74b5ad:c.instructions+=1;goto B74b5ad;
case 0x74b5b3:goto L74b5b3;
case 0x74b5b6:c.instructions+=2;goto B74b5b6;
case 0x74b5b8:c.instructions+=1;goto B74b5b8;
case 0x74b5be:goto L74b5be;
case 0x74b5c5:c.instructions+=3;goto B74b5c5;
case 0x74b5c9:c.instructions+=2;goto B74b5c9;
case 0x74b5cb:c.instructions+=1;goto B74b5cb;
case 0x74b5ce:goto L74b5ce;
case 0x74b5d0:goto L74b5d0;
case 0x74b5d2:c.instructions+=2;goto B74b5d2;
case 0x74b5d9:c.instructions+=1;goto B74b5d9;
case 0x74b5dc:goto L74b5dc;
case 0x74b5de:goto L74b5de;
case 0x74b5e1:c.instructions+=5;goto B74b5e1;
case 0x74b5e3:c.instructions+=4;goto B74b5e3;
case 0x74b5e4:c.instructions+=3;goto B74b5e4;
case 0x74b5eb:c.instructions+=2;goto B74b5eb;
case 0x74b5ef:c.instructions+=1;goto B74b5ef;
case 0x74b5f1:goto L74b5f1;
case 0x74b5f4:c.instructions+=4;goto B74b5f4;
case 0x74b5fb:c.instructions+=3;goto B74b5fb;
case 0x74b5fe:c.instructions+=2;goto B74b5fe;
case 0x74b600:c.instructions+=1;goto B74b600;
case 0x74b603:goto L74b603;
case 0x74b605:goto L74b605;
case 0x74b607:c.instructions+=2;goto B74b607;
case 0x74b60e:c.instructions+=1;goto B74b60e;
case 0x74b611:goto L74b611;
case 0x74b613:goto L74b613;
case 0x74b61a:c.instructions+=7;goto B74b61a;
case 0x74b61c:c.instructions+=6;goto B74b61c;
case 0x74b61f:c.instructions+=5;goto B74b61f;
case 0x74b621:c.instructions+=4;goto B74b621;
case 0x74b622:c.instructions+=3;goto B74b622;
case 0x74b629:c.instructions+=2;goto B74b629;
case 0x74b62d:c.instructions+=1;goto B74b62d;
case 0x74b62f:goto L74b62f;
case 0x74b636:c.instructions+=4;goto B74b636;
case 0x74b639:c.instructions+=3;goto B74b639;
case 0x74b63d:c.instructions+=2;goto B74b63d;
case 0x74b63f:c.instructions+=1;goto B74b63f;
case 0x74b642:goto L74b642;
case 0x74b644:goto L74b644;
case 0x74b646:c.instructions+=1;goto B74b646;
case 0x74b649:goto L74b649;
case 0x74b64b:goto L74b64b;
case 0x74b652:c.instructions+=1;goto B74b652;
case 0x74b656:goto L74b656;
case 0x74b65d:c.instructions+=4;goto B74b65d;
case 0x74b65e:c.instructions+=3;goto B74b65e;
case 0x74b660:c.instructions+=2;goto B74b660;
case 0x74b664:c.instructions+=1;goto B74b664;
case 0x74b66a:goto L74b66a;
case 0x74b66e:goto L74b66e;
case 0x74b672:c.instructions+=4;goto B74b672;
case 0x74b674:c.instructions+=3;goto B74b674;
case 0x74b675:c.instructions+=2;goto B74b675;
case 0x74b676:c.instructions+=1;goto B74b676;
case 0x74b678:goto L74b678;
case 0x74b679:c.instructions+=1;goto B74b679;
case 0x74b67e:goto L74b67e;
case 0x74b682:c.instructions+=2;goto B74b682;
case 0x74b683:c.instructions+=1;goto B74b683;
case 0x74b688:goto L74b688;
case 0x74b68c:c.instructions+=2;goto B74b68c;
case 0x74b68d:c.instructions+=1;goto B74b68d;
case 0x74b692:goto L74b692;
case 0x74b695:goto L74b695;
case 0x74b699:c.instructions+=4;goto B74b699;
case 0x74b6a0:c.instructions+=3;goto B74b6a0;
case 0x74b6a2:c.instructions+=2;goto B74b6a2;
case 0x74b6a3:c.instructions+=1;goto B74b6a3;
case 0x74b6a5:goto L74b6a5;
case 0x74b6a6:c.instructions+=1;goto B74b6a6;
case 0x74b6ab:goto L74b6ab;
case 0x74b6ae:goto L74b6ae;
case 0x74b6b5:c.instructions+=2;goto B74b6b5;
case 0x74b6b6:c.instructions+=1;goto B74b6b6;
case 0x74b6bb:goto L74b6bb;
case 0x74b6c1:c.instructions+=1;goto B74b6c1;
case 0x74b6d0:goto L74b6d0;
case 0x74b6d4:c.instructions+=7;goto B74b6d4;
case 0x74b6d5:c.instructions+=6;goto B74b6d5;
case 0x74b6d9:c.instructions+=5;goto B74b6d9;
case 0x74b6db:c.instructions+=4;goto B74b6db;
case 0x74b6dc:c.instructions+=3;goto B74b6dc;
case 0x74b6e0:c.instructions+=2;goto B74b6e0;
case 0x74b6e2:c.instructions+=1;goto B74b6e2;
case 0x74b6e4:goto L74b6e4;
case 0x74b6e6:c.instructions+=2;goto B74b6e6;
case 0x74b6e8:c.instructions+=1;goto B74b6e8;
case 0x74b6ea:goto L74b6ea;
case 0x74b6f0:goto L74b6f0;
case 0x74b6f2:c.instructions+=1;goto B74b6f2;
case 0x74b6f4:goto L74b6f4;
case 0x74b6f7:c.instructions+=4;goto B74b6f7;
case 0x74b6f8:c.instructions+=3;goto B74b6f8;
case 0x74b6f9:c.instructions+=2;goto B74b6f9;
case 0x74b6fb:c.instructions+=1;goto B74b6fb;
case 0x74b6fd:goto L74b6fd;
case 0x74b6ff:goto L74b6ff;
case 0x74b700:c.instructions+=2;goto B74b700;
case 0x74b701:c.instructions+=1;goto B74b701;
case 0x74b702:goto L74b702;
case 0x74b705:c.instructions+=5;goto B74b705;
case 0x74b708:c.instructions+=4;goto B74b708;
case 0x74b709:c.instructions+=3;goto B74b709;
case 0x74b70b:c.instructions+=2;goto B74b70b;
case 0x74b70c:c.instructions+=1;goto B74b70c;
case 0x74b70d:goto L74b70d;
case 0x74b70f:goto L74b70f;
case 0x74b711:goto L74b711;
case 0x74b715:c.instructions+=3;goto B74b715;
case 0x74b718:c.instructions+=2;goto B74b718;
case 0x74b71a:c.instructions+=1;goto B74b71a;
case 0x74b71c:goto L74b71c;
case 0x74b71d:c.instructions+=3;goto B74b71d;
case 0x74b71e:c.instructions+=2;goto B74b71e;
case 0x74b720:c.instructions+=1;goto B74b720;
case 0x74b722:goto L74b722;
case 0x74b723:c.instructions+=3;goto B74b723;
case 0x74b725:c.instructions+=2;goto B74b725;
case 0x74b726:c.instructions+=1;goto B74b726;
case 0x74b730:goto L74b730;
case 0x74b740:goto L74b740;
case 0x74b744:c.instructions+=3;goto B74b744;
case 0x74b746:c.instructions+=2;goto B74b746;
case 0x74b748:c.instructions+=1;goto B74b748;
case 0x74b74a:goto L74b74a;
case 0x74b74f:goto L74b74f;
case 0x74b751:c.instructions+=5;goto B74b751;
case 0x74b754:c.instructions+=4;goto B74b754;
case 0x74b757:c.instructions+=3;goto B74b757;
case 0x74b75a:c.instructions+=2;goto B74b75a;
case 0x74b75b:c.instructions+=1;goto B74b75b;
case 0x74b761:goto L74b761;
case 0x74b770:goto L74b770;
case 0x74b774:c.instructions+=2;goto B74b774;
case 0x74b776:c.instructions+=1;goto B74b776;
case 0x74b778:goto L74b778;
case 0x74b77d:goto L74b77d;
case 0x74b784:c.instructions+=3;goto B74b784;
case 0x74b787:c.instructions+=2;goto B74b787;
case 0x74b788:c.instructions+=1;goto B74b788;
case 0x74b78e:goto L74b78e;
case 0x74b790:goto L74b790;
case 0x74b791:c.instructions+=4;goto B74b791;
case 0x74b795:c.instructions+=3;goto B74b795;
case 0x74b797:c.instructions+=2;goto B74b797;
case 0x74b798:c.instructions+=1;goto B74b798;
case 0x74b79a:goto L74b79a;
case 0x74b79f:goto L74b79f;
case 0x74b7a5:c.instructions+=1;goto B74b7a5;
case 0x74b7a7:goto L74b7a7;
case 0x74b7a9:c.instructions+=1;goto B74b7a9;
case 0x74b7ab:goto L74b7ab;
case 0x74b7ad:c.instructions+=3;goto B74b7ad;
case 0x74b7b0:c.instructions+=2;goto B74b7b0;
case 0x74b7b1:c.instructions+=1;goto B74b7b1;
case 0x74b7b7:goto L74b7b7;
case 0x74b7b9:c.instructions+=1;goto B74b7b9;
case 0x74b7bb:goto L74b7bb;
case 0x74b7bc:c.instructions+=3;goto B74b7bc;
case 0x74b7be:c.instructions+=2;goto B74b7be;
case 0x74b7bf:c.instructions+=1;goto B74b7bf;
case 0x74b7c0:goto L74b7c0;
case 0x74b7c3:c.instructions+=2;goto B74b7c3;
case 0x74b7c4:c.instructions+=1;goto B74b7c4;
case 0x74b7ca:goto L74b7ca;
case 0x74b7cc:goto L74b7cc;
case 0x74b7ce:goto L74b7ce;
case 0x74b7d1:c.instructions+=4;goto B74b7d1;
case 0x74b7d2:c.instructions+=3;goto B74b7d2;
case 0x74b7d7:c.instructions+=2;goto B74b7d7;
case 0x74b7d8:c.instructions+=1;goto B74b7d8;
case 0x74b7e0:goto L74b7e0;
case 0x74b7e1:c.instructions+=7;goto B74b7e1;
case 0x74b7e2:c.instructions+=6;goto B74b7e2;
case 0x74b7e3:c.instructions+=5;goto B74b7e3;
case 0x74b7e7:c.instructions+=4;goto B74b7e7;
case 0x74b7e9:c.instructions+=3;goto B74b7e9;
case 0x74b7ea:c.instructions+=2;goto B74b7ea;
case 0x74b7ec:c.instructions+=1;goto B74b7ec;
case 0x74b7ee:goto L74b7ee;
case 0x74b7f3:goto L74b7f3;
case 0x74b7f9:c.instructions+=2;goto B74b7f9;
case 0x74b7ff:c.instructions+=1;goto B74b7ff;
case 0x74b800:goto L74b800;
case 0x74b802:c.instructions+=1;goto B74b802;
case 0x74b804:goto L74b804;
case 0x74b809:goto L74b809;
case 0x74b80f:goto L74b80f;
case 0x74b811:c.instructions+=1;goto B74b811;
case 0x74b813:goto L74b813;
case 0x74b815:c.instructions+=3;goto B74b815;
case 0x74b818:c.instructions+=2;goto B74b818;
case 0x74b819:c.instructions+=1;goto B74b819;
case 0x74b81b:goto L74b81b;
case 0x74b81d:c.instructions+=1;goto B74b81d;
case 0x74b81f:goto L74b81f;
case 0x74b822:c.instructions+=2;goto B74b822;
case 0x74b823:c.instructions+=1;goto B74b823;
case 0x74b825:goto L74b825;
case 0x74b827:c.instructions+=3;goto B74b827;
case 0x74b82a:c.instructions+=2;goto B74b82a;
case 0x74b82b:c.instructions+=1;goto B74b82b;
case 0x74b82d:goto L74b82d;
case 0x74b82f:c.instructions+=1;goto B74b82f;
case 0x74b831:goto L74b831;
case 0x74b832:c.instructions+=1;goto B74b832;
case 0x74b838:goto L74b838;
case 0x74b83c:c.instructions+=1;goto B74b83c;
case 0x74b83e:goto L74b83e;
case 0x74b841:c.instructions+=2;goto B74b841;
case 0x74b842:c.instructions+=1;goto B74b842;
case 0x74b844:goto L74b844;
case 0x74b84a:goto L74b84a;
case 0x74b84c:goto L74b84c;
case 0x74b84f:c.instructions+=7;goto B74b84f;
case 0x74b850:c.instructions+=6;goto B74b850;
case 0x74b851:c.instructions+=5;goto B74b851;
case 0x74b854:c.instructions+=4;goto B74b854;
case 0x74b855:c.instructions+=3;goto B74b855;
case 0x74b856:c.instructions+=2;goto B74b856;
case 0x74b857:c.instructions+=1;goto B74b857;
case 0x74b858:goto L74b858;
case 0x74b85e:goto L74b85e;
case 0x74b860:c.instructions+=6;goto B74b860;
case 0x74b863:c.instructions+=5;goto B74b863;
case 0x74b864:c.instructions+=4;goto B74b864;
case 0x74b865:c.instructions+=3;goto B74b865;
case 0x74b866:c.instructions+=2;goto B74b866;
case 0x74b867:c.instructions+=1;goto B74b867;
case 0x74b870:goto L74b870;
case 0x74b874:c.instructions+=3;goto B74b874;
case 0x74b876:c.instructions+=2;goto B74b876;
case 0x74b878:c.instructions+=1;goto B74b878;
case 0x74b87a:goto L74b87a;
case 0x74b87f:goto L74b87f;
case 0x74b882:c.instructions+=2;goto B74b882;
case 0x74b885:c.instructions+=1;goto B74b885;
case 0x74b887:goto L74b887;
case 0x74b888:c.instructions+=2;goto B74b888;
case 0x74b88b:c.instructions+=1;goto B74b88b;
case 0x74b88c:goto L74b88c;
case 0x74b88e:c.instructions+=5;goto B74b88e;
case 0x74b891:c.instructions+=4;goto B74b891;
case 0x74b894:c.instructions+=3;goto B74b894;
case 0x74b897:c.instructions+=2;goto B74b897;
case 0x74b898:c.instructions+=1;goto B74b898;
case 0x74b89e:goto L74b89e;
case 0x74b8a0:goto L74b8a0;
case 0x74b8a4:c.instructions+=2;goto B74b8a4;
case 0x74b8a6:c.instructions+=1;goto B74b8a6;
case 0x74b8a8:goto L74b8a8;
case 0x74b8ac:c.instructions+=2;goto B74b8ac;
case 0x74b8ae:c.instructions+=1;goto B74b8ae;
case 0x74b8b0:goto L74b8b0;
case 0x74b8b5:c.instructions+=4;goto B74b8b5;
case 0x74b8bc:c.instructions+=3;goto B74b8bc;
case 0x74b8c3:c.instructions+=2;goto B74b8c3;
case 0x74b8c4:c.instructions+=1;goto B74b8c4;
case 0x74b8c9:goto L74b8c9;
case 0x74b8d0:goto L74b8d0;
case 0x74b8d1:c.instructions+=3;goto B74b8d1;
case 0x74b8d5:c.instructions+=2;goto B74b8d5;
case 0x74b8d7:c.instructions+=1;goto B74b8d7;
case 0x74b8d9:goto L74b8d9;
case 0x74b8dd:c.instructions+=2;goto B74b8dd;
case 0x74b8df:c.instructions+=1;goto B74b8df;
case 0x74b8e1:goto L74b8e1;
case 0x74b8e7:c.instructions+=3;goto B74b8e7;
case 0x74b8e9:c.instructions+=2;goto B74b8e9;
case 0x74b8eb:c.instructions+=1;goto B74b8eb;
case 0x74b8ed:goto L74b8ed;
case 0x74b8f0:goto L74b8f0;
case 0x74b8f7:c.instructions+=1;goto B74b8f7;
case 0x74b8f9:goto L74b8f9;
case 0x74b900:c.instructions+=1;goto B74b900;
case 0x74b902:goto L74b902;
case 0x74b903:c.instructions+=2;goto B74b903;
case 0x74b905:c.instructions+=1;goto B74b905;
case 0x74b907:goto L74b907;
case 0x74b908:c.instructions+=1;goto B74b908;
case 0x74b909:goto L74b909;
case 0x74b914:c.instructions+=1;goto B74b914;
case 0x74b91f:goto L74b91f;
case 0x74b920:c.instructions+=1;goto B74b920;
case 0x74b930:goto L74b930;
case 0x74b935:c.instructions+=1;goto B74b935;
case 0x74b93a:goto L74b93a;
case 0x74b93f:c.instructions+=3;goto B74b93f;
case 0x74b942:c.instructions+=2;goto B74b942;
case 0x74b945:c.instructions+=1;goto B74b945;
case 0x74b947:goto L74b947;
case 0x74b948:c.instructions+=2;goto B74b948;
case 0x74b94d:c.instructions+=1;goto B74b94d;
case 0x74b94e:goto L74b94e;
case 0x74b950:c.instructions+=5;goto B74b950;
case 0x74b955:c.instructions+=4;goto B74b955;
case 0x74b95a:c.instructions+=3;goto B74b95a;
case 0x74b95f:c.instructions+=2;goto B74b95f;
case 0x74b964:c.instructions+=1;goto B74b964;
case 0x74b96a:goto L74b96a;
case 0x74b970:goto L74b970;
case 0x74b971:c.instructions+=2;goto B74b971;
case 0x74b977:c.instructions+=1;goto B74b977;
case 0x74b979:goto L74b979;
case 0x74b97f:c.instructions+=1;goto B74b97f;
case 0x74b981:goto L74b981;
case 0x74b983:c.instructions+=2;goto B74b983;
case 0x74b988:c.instructions+=1;goto B74b988;
case 0x74b98e:goto L74b98e;
case 0x74b990:c.instructions+=1;goto B74b990;
case 0x74b996:goto L74b996;
case 0x74b99b:c.instructions+=1;goto B74b99b;
case 0x74b9a1:goto L74b9a1;
case 0x74b9a3:goto L74b9a3;
case 0x74b9a8:goto L74b9a8;
case 0x74b9ae:c.instructions+=6;goto B74b9ae;
case 0x74b9b3:c.instructions+=5;goto B74b9b3;
case 0x74b9b4:c.instructions+=4;goto B74b9b4;
case 0x74b9b6:c.instructions+=3;goto B74b9b6;
case 0x74b9b8:c.instructions+=2;goto B74b9b8;
case 0x74b9ba:c.instructions+=1;goto B74b9ba;
case 0x74b9bc:goto L74b9bc;
case 0x74b9c0:goto L74b9c0;
case 0x74b9c7:c.instructions+=3;goto B74b9c7;
case 0x74b9c9:c.instructions+=2;goto B74b9c9;
case 0x74b9d0:c.instructions+=1;goto B74b9d0;
case 0x74b9d2:goto L74b9d2;
case 0x74b9d4:c.instructions+=1;goto B74b9d4;
case 0x74b9d6:goto L74b9d6;
case 0x74b9d7:c.instructions+=1;goto B74b9d7;
case 0x74b9d9:goto L74b9d9;
case 0x74b9de:c.instructions+=2;goto B74b9de;
case 0x74b9e1:c.instructions+=1;goto B74b9e1;
case 0x74b9e3:goto L74b9e3;
case 0x74b9ea:c.instructions+=8;goto B74b9ea;
case 0x74b9f1:c.instructions+=7;goto B74b9f1;
case 0x74b9f8:c.instructions+=6;goto B74b9f8;
case 0x74b9ff:c.instructions+=5;goto B74b9ff;
case 0x74ba06:c.instructions+=4;goto B74ba06;
case 0x74ba0d:c.instructions+=3;goto B74ba0d;
case 0x74ba0e:c.instructions+=2;goto B74ba0e;
case 0x74ba13:c.instructions+=1;goto B74ba13;
case 0x74ba14:goto L74ba14;
case 0x74ba15:c.instructions+=2;goto B74ba15;
case 0x74ba17:c.instructions+=1;goto B74ba17;
case 0x74ba19:goto L74ba19;
case 0x74ba1e:c.instructions+=2;goto B74ba1e;
case 0x74ba21:c.instructions+=1;goto B74ba21;
case 0x74ba23:goto L74ba23;
case 0x74ba24:c.instructions+=4;goto B74ba24;
case 0x74ba25:c.instructions+=3;goto B74ba25;
case 0x74ba2a:c.instructions+=2;goto B74ba2a;
case 0x74ba2b:c.instructions+=1;goto B74ba2b;
case 0x74ba2c:goto L74ba2c;
case 0x74ba31:c.instructions+=4;goto B74ba31;
case 0x74ba37:c.instructions+=3;goto B74ba37;
case 0x74ba3d:c.instructions+=2;goto B74ba3d;
case 0x74ba43:c.instructions+=1;goto B74ba43;
case 0x74ba49:goto L74ba49;
case 0x74ba4a:goto L74ba4a;
case 0x74ba4b:c.instructions+=1;goto B74ba4b;
case 0x74ba50:goto L74ba50;
case 0x74ba55:c.instructions+=3;goto B74ba55;
case 0x74ba57:c.instructions+=2;goto B74ba57;
case 0x74ba61:c.instructions+=1;goto B74ba61;
case 0x74ba63:goto L74ba63;
case 0x74ba64:c.instructions+=2;goto B74ba64;
case 0x74ba6a:c.instructions+=1;goto B74ba6a;
case 0x74ba70:goto L74ba70;
case 0x74ba75:goto L74ba75;
case 0x74ba77:c.instructions+=1;goto B74ba77;
case 0x74ba79:goto L74ba79;
case 0x74ba7e:c.instructions+=2;goto B74ba7e;
case 0x74ba80:c.instructions+=1;goto B74ba80;
case 0x74ba82:goto L74ba82;
case 0x74ba83:goto L74ba83;
case 0x74ba8d:c.instructions+=1;goto B74ba8d;
case 0x74ba90:goto L74ba90;
case 0x74ba91:c.instructions+=11;goto B74ba91;
case 0x74ba92:c.instructions+=10;goto B74ba92;
case 0x74ba93:c.instructions+=9;goto B74ba93;
case 0x74ba99:c.instructions+=8;goto B74ba99;
case 0x74ba9b:c.instructions+=7;goto B74ba9b;
case 0x74baa0:c.instructions+=6;goto B74baa0;
case 0x74baa6:c.instructions+=5;goto B74baa6;
case 0x74bab0:c.instructions+=4;goto B74bab0;
case 0x74bab6:c.instructions+=3;goto B74bab6;
case 0x74babc:c.instructions+=2;goto B74babc;
case 0x74bac2:c.instructions+=1;goto B74bac2;
case 0x74bac4:goto L74bac4;
case 0x74bac9:c.instructions+=4;goto B74bac9;
case 0x74bacf:c.instructions+=3;goto B74bacf;
case 0x74bad5:c.instructions+=2;goto B74bad5;
case 0x74badb:c.instructions+=1;goto B74badb;
case 0x74badd:goto L74badd;
case 0x74bae1:c.instructions+=8;goto B74bae1;
case 0x74bae2:c.instructions+=7;goto B74bae2;
case 0x74bae3:c.instructions+=6;goto B74bae3;
case 0x74bae4:c.instructions+=5;goto B74bae4;
case 0x74bae9:c.instructions+=4;goto B74bae9;
case 0x74baea:c.instructions+=3;goto B74baea;
case 0x74baeb:c.instructions+=2;goto B74baeb;
case 0x74baf5:c.instructions+=1;goto B74baf5;
case 0x74bafb:goto L74bafb;
case 0x74bafc:c.instructions+=4;goto B74bafc;
case 0x74bafe:c.instructions+=3;goto B74bafe;
case 0x74bb03:c.instructions+=2;goto B74bb03;
case 0x74bb04:c.instructions+=1;goto B74bb04;
case 0x74bb06:goto L74bb06;
case 0x74bb0a:c.instructions+=3;goto B74bb0a;
case 0x74bb0b:c.instructions+=2;goto B74bb0b;
case 0x74bb0c:c.instructions+=1;goto B74bb0c;
case 0x74bb12:goto L74bb12;
case 0x74bb18:c.instructions+=2;goto B74bb18;
case 0x74bb19:c.instructions+=1;goto B74bb19;
case 0x74bb1f:goto L74bb1f;
case 0x74bb20:c.instructions+=1;goto B74bb20;
case 0x74bb30:goto L74bb30;
case 0x74bb35:c.instructions+=4;goto B74bb35;
case 0x74bb37:c.instructions+=3;goto B74bb37;
case 0x74bb38:c.instructions+=2;goto B74bb38;
case 0x74bb42:c.instructions+=1;goto B74bb42;
case 0x74bb44:goto L74bb44;
case 0x74bb4a:c.instructions+=1;goto B74bb4a;
case 0x74bb50:goto L74bb50;
case 0x74bb52:c.instructions+=1;goto B74bb52;
case 0x74bb54:goto L74bb54;
case 0x74bb59:c.instructions+=2;goto B74bb59;
case 0x74bb5b:c.instructions+=1;goto B74bb5b;
case 0x74bb5d:goto L74bb5d;
case 0x74bb63:c.instructions+=3;goto B74bb63;
case 0x74bb68:c.instructions+=2;goto B74bb68;
case 0x74bb72:c.instructions+=1;goto B74bb72;
case 0x74bb74:goto L74bb74;
case 0x74bb79:c.instructions+=2;goto B74bb79;
case 0x74bb83:c.instructions+=1;goto B74bb83;
case 0x74bb85:goto L74bb85;
case 0x74bb86:c.instructions+=1;goto B74bb86;
case 0x74bb90:goto L74bb90;
case 0x74bb94:c.instructions+=4;goto B74bb94;
case 0x74bb95:c.instructions+=3;goto B74bb95;
case 0x74bb99:c.instructions+=2;goto B74bb99;
case 0x74bb9a:c.instructions+=1;goto B74bb9a;
case 0x74bba0:goto L74bba0;
case 0x74bba3:c.instructions+=4;goto B74bba3;
case 0x74bba9:c.instructions+=3;goto B74bba9;
case 0x74bbaa:c.instructions+=2;goto B74bbaa;
case 0x74bbad:c.instructions+=1;goto B74bbad;
case 0x74bbaf:goto L74bbaf;
case 0x74bbb0:goto L74bbb0;
case 0x74bbb3:c.instructions+=4;goto B74bbb3;
case 0x74bbb9:c.instructions+=3;goto B74bbb9;
case 0x74bbba:c.instructions+=2;goto B74bbba;
case 0x74bbbc:c.instructions+=1;goto B74bbbc;
case 0x74bbbe:goto L74bbbe;
case 0x74bbc1:c.instructions+=3;goto B74bbc1;
case 0x74bbc4:c.instructions+=2;goto B74bbc4;
case 0x74bbc6:c.instructions+=1;goto B74bbc6;
case 0x74bbc8:goto L74bbc8;
case 0x74bbca:c.instructions+=1;goto B74bbca;
case 0x74bbcc:goto L74bbcc;
case 0x74bbce:goto L74bbce;
case 0x74bbcf:c.instructions+=2;goto B74bbcf;
case 0x74bbd0:c.instructions+=1;goto B74bbd0;
case 0x74bbe0:goto L74bbe0;
case 0x74bbe5:c.instructions+=6;goto B74bbe5;
case 0x74bbe6:c.instructions+=5;goto B74bbe6;
case 0x74bbea:c.instructions+=4;goto B74bbea;
case 0x74bbeb:c.instructions+=3;goto B74bbeb;
case 0x74bbed:c.instructions+=2;goto B74bbed;
case 0x74bbef:c.instructions+=1;goto B74bbef;
case 0x74bbf1:goto L74bbf1;
case 0x74bbf6:goto L74bbf6;
case 0x74bbf8:c.instructions+=1;goto B74bbf8;
case 0x74bbfa:goto L74bbfa;
case 0x74bbfc:c.instructions+=2;goto B74bbfc;
case 0x74bbfe:c.instructions+=1;goto B74bbfe;
case 0x74bc00:goto L74bc00;
case 0x74bc04:goto L74bc04;
case 0x74bc08:c.instructions+=1;goto B74bc08;
case 0x74bc0a:goto L74bc0a;
case 0x74bc0b:c.instructions+=2;goto B74bc0b;
case 0x74bc0d:c.instructions+=1;goto B74bc0d;
case 0x74bc0f:goto L74bc0f;
case 0x74bc12:c.instructions+=4;goto B74bc12;
case 0x74bc15:c.instructions+=3;goto B74bc15;
case 0x74bc16:c.instructions+=2;goto B74bc16;
case 0x74bc18:c.instructions+=1;goto B74bc18;
case 0x74bc1a:goto L74bc1a;
case 0x74bc1b:c.instructions+=3;goto B74bc1b;
case 0x74bc1e:c.instructions+=2;goto B74bc1e;
case 0x74bc1f:c.instructions+=1;goto B74bc1f;
case 0x74bc20:goto L74bc20;
case 0x74bc24:c.instructions+=8;goto B74bc24;
case 0x74bc28:c.instructions+=7;goto B74bc28;
case 0x74bc2b:c.instructions+=6;goto B74bc2b;
case 0x74bc2e:c.instructions+=5;goto B74bc2e;
case 0x74bc34:c.instructions+=4;goto B74bc34;
case 0x74bc35:c.instructions+=3;goto B74bc35;
case 0x74bc36:c.instructions+=2;goto B74bc36;
case 0x74bc37:c.instructions+=1;goto B74bc37;
case 0x74bc3c:goto L74bc3c;
case 0x74bc43:c.instructions+=4;goto B74bc43;
case 0x74bc46:c.instructions+=3;goto B74bc46;
case 0x74bc47:c.instructions+=2;goto B74bc47;
case 0x74bc48:c.instructions+=1;goto B74bc48;
case 0x74bc50:goto L74bc50;
case 0x74bc54:c.instructions+=4;goto B74bc54;
case 0x74bc56:c.instructions+=3;goto B74bc56;
case 0x74bc5b:c.instructions+=2;goto B74bc5b;
case 0x74bc5c:c.instructions+=1;goto B74bc5c;
case 0x74bc61:goto L74bc61;
case 0x74bc64:c.instructions+=2;goto B74bc64;
case 0x74bc65:c.instructions+=1;goto B74bc65;
case 0x74bc6a:goto L74bc6a;
case 0x74bc6c:c.instructions+=6;goto B74bc6c;
case 0x74bc71:c.instructions+=5;goto B74bc71;
case 0x74bc74:c.instructions+=4;goto B74bc74;
case 0x74bc7a:c.instructions+=3;goto B74bc7a;
case 0x74bc7d:c.instructions+=2;goto B74bc7d;
case 0x74bc7f:c.instructions+=1;goto B74bc7f;
case 0x74bc80:goto L74bc80;
case 0x74bc81:c.instructions+=4;goto B74bc81;
case 0x74bc85:c.instructions+=3;goto B74bc85;
case 0x74bc8b:c.instructions+=2;goto B74bc8b;
case 0x74bc8d:c.instructions+=1;goto B74bc8d;
case 0x74bc8f:goto L74bc8f;
case 0x74bc94:c.instructions+=2;goto B74bc94;
case 0x74bc99:c.instructions+=1;goto B74bc99;
case 0x74bc9e:goto L74bc9e;
case 0x74bca1:c.instructions+=1;goto B74bca1;
case 0x74bca7:goto L74bca7;
case 0x74bcad:c.instructions+=2;goto B74bcad;
case 0x74bcaf:c.instructions+=1;goto B74bcaf;
case 0x74bcb1:goto L74bcb1;
case 0x74bcb3:c.instructions+=3;goto B74bcb3;
case 0x74bcb5:c.instructions+=2;goto B74bcb5;
case 0x74bcb7:c.instructions+=1;goto B74bcb7;
case 0x74bcbc:goto L74bcbc;
case 0x74bcbf:c.instructions+=1;goto B74bcbf;
case 0x74bcc5:goto L74bcc5;
case 0x74bcc6:c.instructions+=1;goto B74bcc6;
case 0x74bcd0:goto L74bcd0;
case 0x74bcd3:c.instructions+=12;goto B74bcd3;
case 0x74bcd8:c.instructions+=11;goto B74bcd8;
case 0x74bcdc:c.instructions+=10;goto B74bcdc;
case 0x74bcde:c.instructions+=9;goto B74bcde;
case 0x74bce1:c.instructions+=8;goto B74bce1;
case 0x74bce5:c.instructions+=7;goto B74bce5;
case 0x74bce9:c.instructions+=6;goto B74bce9;
case 0x74bced:c.instructions+=5;goto B74bced;
case 0x74bcf1:c.instructions+=4;goto B74bcf1;
case 0x74bcf5:c.instructions+=3;goto B74bcf5;
case 0x74bcfb:c.instructions+=2;goto B74bcfb;
case 0x74bcfd:c.instructions+=1;goto B74bcfd;
case 0x74bcff:goto L74bcff;
case 0x74bd02:c.instructions+=1;goto B74bd02;
case 0x74bd04:goto L74bd04;
case 0x74bd0a:c.instructions+=2;goto B74bd0a;
case 0x74bd0c:c.instructions+=1;goto B74bd0c;
case 0x74bd0e:goto L74bd0e;
case 0x74bd15:c.instructions+=11;goto B74bd15;
case 0x74bd18:c.instructions+=10;goto B74bd18;
case 0x74bd19:c.instructions+=9;goto B74bd19;
case 0x74bd20:c.instructions+=8;goto B74bd20;
case 0x74bd21:c.instructions+=7;goto B74bd21;
case 0x74bd28:c.instructions+=6;goto B74bd28;
case 0x74bd29:c.instructions+=5;goto B74bd29;
case 0x74bd2a:c.instructions+=4;goto B74bd2a;
case 0x74bd2e:c.instructions+=3;goto B74bd2e;
case 0x74bd33:c.instructions+=2;goto B74bd33;
case 0x74bd34:c.instructions+=1;goto B74bd34;
case 0x74bd39:goto L74bd39;
case 0x74bd3b:c.instructions+=5;goto B74bd3b;
case 0x74bd3f:c.instructions+=4;goto B74bd3f;
case 0x74bd40:c.instructions+=3;goto B74bd40;
case 0x74bd44:c.instructions+=2;goto B74bd44;
case 0x74bd45:c.instructions+=1;goto B74bd45;
case 0x74bd4a:goto L74bd4a;
case 0x74bd4f:c.instructions+=3;goto B74bd4f;
case 0x74bd52:c.instructions+=2;goto B74bd52;
case 0x74bd56:c.instructions+=1;goto B74bd56;
case 0x74bd5b:goto L74bd5b;
case 0x74bd5e:c.instructions+=1;goto B74bd5e;
case 0x74bd5f:goto L74bd5f;
case 0x74bd62:c.instructions+=2;goto B74bd62;
case 0x74bd63:c.instructions+=1;goto B74bd63;
case 0x74bd68:goto L74bd68;
case 0x74bd6c:c.instructions+=2;goto B74bd6c;
case 0x74bd6f:c.instructions+=1;goto B74bd6f;
case 0x74bd74:goto L74bd74;
case 0x74bd77:c.instructions+=1;goto B74bd77;
case 0x74bd80:goto L74bd80;
case 0x74bd82:c.instructions+=2;goto B74bd82;
case 0x74bd83:c.instructions+=1;goto B74bd83;
case 0x74bd88:goto L74bd88;
case 0x74bd8b:c.instructions+=2;goto B74bd8b;
case 0x74bd8d:c.instructions+=1;goto B74bd8d;
case 0x74bd8f:goto L74bd8f;
case 0x74bd92:goto L74bd92;
case 0x74bd94:c.instructions+=2;goto B74bd94;
case 0x74bd95:c.instructions+=1;goto B74bd95;
case 0x74bd9a:goto L74bd9a;
case 0x74bd9d:c.instructions+=2;goto B74bd9d;
case 0x74bd9f:c.instructions+=1;goto B74bd9f;
case 0x74bda1:goto L74bda1;
case 0x74bda4:goto L74bda4;
case 0x74bda6:c.instructions+=2;goto B74bda6;
case 0x74bda7:c.instructions+=1;goto B74bda7;
case 0x74bdac:goto L74bdac;
case 0x74bdaf:c.instructions+=2;goto B74bdaf;
case 0x74bdb1:c.instructions+=1;goto B74bdb1;
case 0x74bdb3:goto L74bdb3;
case 0x74bdb6:goto L74bdb6;
case 0x74bdc0:goto L74bdc0;
case 0x74bdc6:c.instructions+=11;goto B74bdc6;
case 0x74bdcb:c.instructions+=10;goto B74bdcb;
case 0x74bdcc:c.instructions+=9;goto B74bdcc;
case 0x74bdd3:c.instructions+=8;goto B74bdd3;
case 0x74bdd4:c.instructions+=7;goto B74bdd4;
case 0x74bddb:c.instructions+=6;goto B74bddb;
case 0x74bde2:c.instructions+=5;goto B74bde2;
case 0x74bde7:c.instructions+=4;goto B74bde7;
case 0x74bde8:c.instructions+=3;goto B74bde8;
case 0x74bdec:c.instructions+=2;goto B74bdec;
case 0x74bded:c.instructions+=1;goto B74bded;
case 0x74bdf2:goto L74bdf2;
case 0x74bdf6:c.instructions+=3;goto B74bdf6;
case 0x74bdf8:c.instructions+=2;goto B74bdf8;
case 0x74bdf9:c.instructions+=1;goto B74bdf9;
case 0x74bdfe:goto L74bdfe;
case 0x74be01:c.instructions+=4;goto B74be01;
case 0x74be03:c.instructions+=3;goto B74be03;
case 0x74be05:c.instructions+=2;goto B74be05;
case 0x74be06:c.instructions+=1;goto B74be06;
case 0x74be08:goto L74be08;
case 0x74be0c:c.instructions+=3;goto B74be0c;
case 0x74be0d:c.instructions+=2;goto B74be0d;
case 0x74be0e:c.instructions+=1;goto B74be0e;
case 0x74be13:goto L74be13;
case 0x74be16:c.instructions+=5;goto B74be16;
case 0x74be17:c.instructions+=4;goto B74be17;
case 0x74be1a:c.instructions+=3;goto B74be1a;
case 0x74be1b:c.instructions+=2;goto B74be1b;
case 0x74be22:c.instructions+=1;goto B74be22;
case 0x74be27:goto L74be27;
case 0x74be2d:c.instructions+=1;goto B74be2d;
case 0x74be2e:goto L74be2e;
case 0x74be32:c.instructions+=4;goto B74be32;
case 0x74be33:c.instructions+=3;goto B74be33;
case 0x74be34:c.instructions+=2;goto B74be34;
case 0x74be37:c.instructions+=1;goto B74be37;
case 0x74be3c:goto L74be3c;
case 0x74be43:c.instructions+=4;goto B74be43;
case 0x74be44:c.instructions+=3;goto B74be44;
case 0x74be45:c.instructions+=2;goto B74be45;
case 0x74be46:c.instructions+=1;goto B74be46;
case 0x74be4b:goto L74be4b;
case 0x74be52:c.instructions+=4;goto B74be52;
case 0x74be55:c.instructions+=3;goto B74be55;
case 0x74be56:c.instructions+=2;goto B74be56;
case 0x74be57:c.instructions+=1;goto B74be57;
case 0x74be5c:goto L74be5c;
case 0x74be62:c.instructions+=1;goto B74be62;
case 0x74be70:goto L74be70;
case 0x74be76:c.instructions+=11;goto B74be76;
case 0x74be7b:c.instructions+=10;goto B74be7b;
case 0x74be7c:c.instructions+=9;goto B74be7c;
case 0x74be83:c.instructions+=8;goto B74be83;
case 0x74be8a:c.instructions+=7;goto B74be8a;
case 0x74be8d:c.instructions+=6;goto B74be8d;
case 0x74be8e:c.instructions+=5;goto B74be8e;
case 0x74be8f:c.instructions+=4;goto B74be8f;
case 0x74be96:c.instructions+=3;goto B74be96;
case 0x74be9b:c.instructions+=2;goto B74be9b;
case 0x74be9c:c.instructions+=1;goto B74be9c;
case 0x74bea1:goto L74bea1;
case 0x74bea4:c.instructions+=8;goto B74bea4;
case 0x74bea9:c.instructions+=7;goto B74bea9;
case 0x74beae:c.instructions+=6;goto B74beae;
case 0x74beb2:c.instructions+=5;goto B74beb2;
case 0x74beb3:c.instructions+=4;goto B74beb3;
case 0x74beba:c.instructions+=3;goto B74beba;
case 0x74bebf:c.instructions+=2;goto B74bebf;
case 0x74bec0:c.instructions+=1;goto B74bec0;
case 0x74bec5:goto L74bec5;
case 0x74bec8:c.instructions+=2;goto B74bec8;
case 0x74bec9:c.instructions+=1;goto B74bec9;
case 0x74bece:goto L74bece;
case 0x74bed5:c.instructions+=3;goto B74bed5;
case 0x74beda:c.instructions+=2;goto B74beda;
case 0x74bedb:c.instructions+=1;goto B74bedb;
case 0x74bee0:goto L74bee0;
case 0x74bee4:c.instructions+=3;goto B74bee4;
case 0x74bee6:c.instructions+=2;goto B74bee6;
case 0x74bee7:c.instructions+=1;goto B74bee7;
case 0x74beec:goto L74beec;
case 0x74beee:c.instructions+=3;goto B74beee;
case 0x74bef1:c.instructions+=2;goto B74bef1;
case 0x74bef3:c.instructions+=1;goto B74bef3;
case 0x74bef9:goto L74bef9;
case 0x74befc:c.instructions+=2;goto B74befc;
case 0x74befe:c.instructions+=1;goto B74befe;
case 0x74bf00:goto L74bf00;
case 0x74bf04:c.instructions+=4;goto B74bf04;
case 0x74bf0b:c.instructions+=3;goto B74bf0b;
case 0x74bf0c:c.instructions+=2;goto B74bf0c;
case 0x74bf0e:c.instructions+=1;goto B74bf0e;
case 0x74bf10:goto L74bf10;
case 0x74bf17:c.instructions+=3;goto B74bf17;
case 0x74bf19:c.instructions+=2;goto B74bf19;
case 0x74bf1a:c.instructions+=1;goto B74bf1a;
case 0x74bf1f:goto L74bf1f;
case 0x74bf22:c.instructions+=2;goto B74bf22;
case 0x74bf24:c.instructions+=1;goto B74bf24;
case 0x74bf26:goto L74bf26;
case 0x74bf29:goto L74bf29;
case 0x74bf30:c.instructions+=6;goto B74bf30;
case 0x74bf31:c.instructions+=5;goto B74bf31;
case 0x74bf36:c.instructions+=4;goto B74bf36;
case 0x74bf3d:c.instructions+=3;goto B74bf3d;
case 0x74bf42:c.instructions+=2;goto B74bf42;
case 0x74bf43:c.instructions+=1;goto B74bf43;
case 0x74bf48:goto L74bf48;
case 0x74bf4b:c.instructions+=5;goto B74bf4b;
case 0x74bf4c:c.instructions+=4;goto B74bf4c;
case 0x74bf4f:c.instructions+=3;goto B74bf4f;
case 0x74bf51:c.instructions+=2;goto B74bf51;
case 0x74bf52:c.instructions+=1;goto B74bf52;
case 0x74bf57:goto L74bf57;
case 0x74bf59:c.instructions+=3;goto B74bf59;
case 0x74bf5c:c.instructions+=2;goto B74bf5c;
case 0x74bf5e:c.instructions+=1;goto B74bf5e;
case 0x74bf60:goto L74bf60;
case 0x74bf63:goto L74bf63;
case 0x74bf64:c.instructions+=5;goto B74bf64;
case 0x74bf69:c.instructions+=4;goto B74bf69;
case 0x74bf70:c.instructions+=3;goto B74bf70;
case 0x74bf75:c.instructions+=2;goto B74bf75;
case 0x74bf76:c.instructions+=1;goto B74bf76;
case 0x74bf7b:goto L74bf7b;
case 0x74bf7e:c.instructions+=3;goto B74bf7e;
case 0x74bf80:c.instructions+=2;goto B74bf80;
case 0x74bf81:c.instructions+=1;goto B74bf81;
case 0x74bf83:goto L74bf83;
case 0x74bf84:c.instructions+=6;goto B74bf84;
case 0x74bf85:c.instructions+=5;goto B74bf85;
case 0x74bf8a:c.instructions+=4;goto B74bf8a;
case 0x74bf8f:c.instructions+=3;goto B74bf8f;
case 0x74bf96:c.instructions+=2;goto B74bf96;
case 0x74bf97:c.instructions+=1;goto B74bf97;
case 0x74bf9c:goto L74bf9c;
case 0x74bf9f:goto L74bf9f;
case 0x74bfa6:c.instructions+=6;goto B74bfa6;
case 0x74bfa8:c.instructions+=5;goto B74bfa8;
case 0x74bfaa:c.instructions+=4;goto B74bfaa;
case 0x74bfaf:c.instructions+=3;goto B74bfaf;
case 0x74bfb0:c.instructions+=2;goto B74bfb0;
case 0x74bfb3:c.instructions+=1;goto B74bfb3;
case 0x74bfb8:goto L74bfb8;
case 0x74bfbb:c.instructions+=2;goto B74bfbb;
case 0x74bfbc:c.instructions+=1;goto B74bfbc;
case 0x74bfc1:goto L74bfc1;
case 0x74bfc4:c.instructions+=6;goto B74bfc4;
case 0x74bfca:c.instructions+=5;goto B74bfca;
case 0x74bfd0:c.instructions+=4;goto B74bfd0;
case 0x74bfd1:c.instructions+=3;goto B74bfd1;
case 0x74bfd2:c.instructions+=2;goto B74bfd2;
case 0x74bfd3:c.instructions+=1;goto B74bfd3;
case 0x74bfd9:goto L74bfd9;
case 0x74bfe0:c.instructions+=4;goto B74bfe0;
case 0x74bfe3:c.instructions+=3;goto B74bfe3;
case 0x74bfe4:c.instructions+=2;goto B74bfe4;
case 0x74bfe5:c.instructions+=1;goto B74bfe5;
case 0x74bfea:goto L74bfea;
case 0x74bff0:c.instructions+=1;goto B74bff0;
case 0x74bff1:goto L74bff1;
case 0x74bff5:c.instructions+=3;goto B74bff5;
case 0x74bff6:c.instructions+=2;goto B74bff6;
case 0x74bffb:c.instructions+=1;goto B74bffb;
default:missing_instruction(c.pc);}
B74b003:L74b003:{c.instructions+=1;NFSU2_TR(0x74b003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b008ull));
TAIL_STATIC(0x741690u,741);
}
B74b008:L74b008:{c.instructions+=7;NFSU2_TR(0x74b008);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeaull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b00b:{NFSU2_TR(0x74b00b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b00c:{NFSU2_TR(0x74b00c);
u8 U[4];
w4(U+0,u32(0x7a12ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b011:{NFSU2_TR(0x74b011);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74b015:{NFSU2_TR(0x74b015);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b01a:{NFSU2_TR(0x74b01a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b01b:{NFSU2_TR(0x74b01b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b020ull));
TAIL_STATIC(0x741a50u,741);
}
B74b020:L74b020:{c.instructions+=7;NFSU2_TR(0x74b020);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b023:{NFSU2_TR(0x74b023);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b025:{NFSU2_TR(0x74b025);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74b029:{NFSU2_TR(0x74b029);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b02a:{NFSU2_TR(0x74b02a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b02b:{NFSU2_TR(0x74b02b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b02c:{NFSU2_TR(0x74b02c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b031ull));
TAIL_STATIC(0x756a30u,756);
}
B74b031:L74b031:{c.instructions+=16;NFSU2_TR(0x74b031);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74b033:{NFSU2_TR(0x74b033);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B74b037:{NFSU2_TR(0x74b037);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B74b03a:{NFSU2_TR(0x74b03a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B74b03f:{NFSU2_TR(0x74b03f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4000ull))));
}
B74b044:{NFSU2_TR(0x74b044);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B74b048:{NFSU2_TR(0x74b048);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74b04b:{NFSU2_TR(0x74b04b);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B74b04d:{NFSU2_TR(0x74b04d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74b050:{NFSU2_TR(0x74b050);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+20)),r1(U+0));
}
B74b053:{NFSU2_TR(0x74b053);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b057:{NFSU2_TR(0x74b057);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74b058:{NFSU2_TR(0x74b058);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b05b:{NFSU2_TR(0x74b05b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b05f:{NFSU2_TR(0x74b05f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B74b063:{NFSU2_TR(0x74b063);
if(r1(R+518)){{goto L74b096;}}
}
B74b065:L74b065:{c.instructions+=8;NFSU2_TR(0x74b065);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74b067:{NFSU2_TR(0x74b067);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74b06a:{NFSU2_TR(0x74b06a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74b06c:{NFSU2_TR(0x74b06c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+8),(U+0),1);
}
B74b06f:{NFSU2_TR(0x74b06f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B74b071:{NFSU2_TR(0x74b071);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B74b072:{NFSU2_TR(0x74b072);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74b075:{NFSU2_TR(0x74b075);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b096;}}
}
B74b077:L74b077:{c.instructions+=4;NFSU2_TR(0x74b077);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b07a:{NFSU2_TR(0x74b07a);
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
B74b07c:{NFSU2_TR(0x74b07c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
w2(U+4,u16(0x2000ull));
s2(u32(r4(U+0)),r2(U+4));
}
B74b082:{NFSU2_TR(0x74b082);
if(r1(R+518)){{goto L74b096;}}
}
B74b084:L74b084:{c.instructions+=6;NFSU2_TR(0x74b084);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b087:{NFSU2_TR(0x74b087);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b088:{NFSU2_TR(0x74b088);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeaull))));
__builtin_memmove((R+8),(U+0),4);
}
B74b08b:{NFSU2_TR(0x74b08b);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b090:{NFSU2_TR(0x74b090);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b091:{NFSU2_TR(0x74b091);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b093ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b093:L74b093:{c.instructions+=1;NFSU2_TR(0x74b093);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74b096:L74b096:{c.instructions+=7;NFSU2_TR(0x74b096);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b09a:{NFSU2_TR(0x74b09a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b09d:{NFSU2_TR(0x74b09d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B74b09e:{NFSU2_TR(0x74b09e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x20ull))));
}
B74b0a1:{NFSU2_TR(0x74b0a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B74b0a3:{NFSU2_TR(0x74b0a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b0a7:{NFSU2_TR(0x74b0a7);
if(r1(R+512)){TAIL_STATIC(0x74af90u,74a);}
}
B74b0ad:L74b0ad:{c.instructions+=10;NFSU2_TR(0x74b0ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74b0b1:{NFSU2_TR(0x74b0b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b0b2:{NFSU2_TR(0x74b0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b0b5:{NFSU2_TR(0x74b0b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74b0b9:{NFSU2_TR(0x74b0b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b0ba:{NFSU2_TR(0x74b0ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74b0be:{NFSU2_TR(0x74b0be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b0bf:{NFSU2_TR(0x74b0bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b0c0:{NFSU2_TR(0x74b0c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74b0c8:{NFSU2_TR(0x74b0c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b0cdull));
TAIL_STATIC(0x756a90u,756);
}
B74b0cd:L74b0cd:{c.instructions+=3;NFSU2_TR(0x74b0cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74b0d0:{NFSU2_TR(0x74b0d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b0d2:{NFSU2_TR(0x74b0d2);
if(r1(R+518)){{goto L74b1ca;}}
}
B74b0d8:L74b0d8:{c.instructions+=2;NFSU2_TR(0x74b0d8);
u8 U[16];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74b0dd:{NFSU2_TR(0x74b0dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b0fb;}}
}
B74b0df:L74b0df:{c.instructions+=3;NFSU2_TR(0x74b0df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b0e2:{NFSU2_TR(0x74b0e2);
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
B74b0e4:{NFSU2_TR(0x74b0e4);
if(r1(R+518)){{goto L74b0fb;}}
}
B74b0e6:L74b0e6:{c.instructions+=7;NFSU2_TR(0x74b0e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b0e9:{NFSU2_TR(0x74b0e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b0ed:{NFSU2_TR(0x74b0ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b0ee:{NFSU2_TR(0x74b0ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b0ef:{NFSU2_TR(0x74b0ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74b0f3:{NFSU2_TR(0x74b0f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b0f4:{NFSU2_TR(0x74b0f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b0f6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b0f6:L74b0f6:{c.instructions+=1;NFSU2_TR(0x74b0f6);
{goto L74b1a4;}
}
B74b0fb:L74b0fb:{c.instructions+=5;NFSU2_TR(0x74b0fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b0fd:{NFSU2_TR(0x74b0fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74b101:{NFSU2_TR(0x74b101);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b106:{NFSU2_TR(0x74b106);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b107:{NFSU2_TR(0x74b107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b10cull));
TAIL_STATIC(0x7414a0u,741);
}
B74b10c:L74b10c:{c.instructions+=3;NFSU2_TR(0x74b10c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74b10f:{NFSU2_TR(0x74b10f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b110:{NFSU2_TR(0x74b110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b115ull));
TAIL_STATIC(0x7420b0u,742);
}
B74b115:L74b115:{c.instructions+=3;NFSU2_TR(0x74b115);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74b118:{NFSU2_TR(0x74b118);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B74b11a:{NFSU2_TR(0x74b11a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74b139;}}
}
B74b11c:L74b11c:{c.instructions+=2;NFSU2_TR(0x74b11c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B74b11f:{NFSU2_TR(0x74b11f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74b139;}}
}
B74b121:L74b121:{c.instructions+=6;NFSU2_TR(0x74b121);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74b124:{NFSU2_TR(0x74b124);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B74b128:{NFSU2_TR(0x74b128);
w4(R+4,u32(0x5ull));
}
B74b12d:{NFSU2_TR(0x74b12d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74b131:{NFSU2_TR(0x74b131);
__builtin_memmove((R+24),(R+0),4);
}
B74b133:{NFSU2_TR(0x74b133);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B74b135:L74b135:{c.instructions+=1;NFSU2_TR(0x74b135);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74b137;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b135u);}goto L74b135;}}
}
B74b137:L74b137:{c.instructions+=1;NFSU2_TR(0x74b137);
if(r1(R+518)){{goto L74b170;}}
}
B74b139:L74b139:{c.instructions+=4;NFSU2_TR(0x74b139);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b13c:{NFSU2_TR(0x74b13c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74b13e:{NFSU2_TR(0x74b13e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b140:{NFSU2_TR(0x74b140);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74b1a7;}}
}
B74b142:L74b142:{c.instructions+=1;NFSU2_TR(0x74b142);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74b145:L74b145:{c.instructions+=4;NFSU2_TR(0x74b145);
w4(R+4,u32(0x5ull));
}
B74b14a:{NFSU2_TR(0x74b14a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74b14e:{NFSU2_TR(0x74b14e);
__builtin_memmove((R+24),(R+8),4);
}
B74b150:{NFSU2_TR(0x74b150);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B74b152:L74b152:{c.instructions+=1;NFSU2_TR(0x74b152);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74b154;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b152u);}goto L74b152;}}
}
B74b154:L74b154:{c.instructions+=1;NFSU2_TR(0x74b154);
if(r1(R+518)){{goto L74b163;}}
}
B74b156:L74b156:{c.instructions+=5;NFSU2_TR(0x74b156);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b159:{NFSU2_TR(0x74b159);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74b15a:{NFSU2_TR(0x74b15a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B74b15d:{NFSU2_TR(0x74b15d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B74b15f:{NFSU2_TR(0x74b15f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b145u);}goto L74b145;}}
}
B74b161:L74b161:{c.instructions+=1;NFSU2_TR(0x74b161);
{goto L74b1a7;}
}
B74b163:L74b163:{c.instructions+=2;NFSU2_TR(0x74b163);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b166:{NFSU2_TR(0x74b166);
if(r1(R+518)){{goto L74b1a7;}}
}
B74b168:L74b168:{c.instructions+=3;NFSU2_TR(0x74b168);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74b16b:{NFSU2_TR(0x74b16b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74b16e:{NFSU2_TR(0x74b16e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B74b170:L74b170:{c.instructions+=2;NFSU2_TR(0x74b170);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b172:{NFSU2_TR(0x74b172);
if(r1(R+518)){{goto L74b1a7;}}
}
B74b174:L74b174:{c.instructions+=3;NFSU2_TR(0x74b174);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b178:{NFSU2_TR(0x74b178);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b17e:{NFSU2_TR(0x74b17e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74b189;}}
}
B74b180:L74b180:{c.instructions+=2;NFSU2_TR(0x74b180);
w4(R+4,u32(0xfffull));
}
B74b185:{NFSU2_TR(0x74b185);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b189:L74b189:{c.instructions+=4;NFSU2_TR(0x74b189);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B74b18d:{NFSU2_TR(0x74b18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b190:{NFSU2_TR(0x74b190);
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
B74b192:{NFSU2_TR(0x74b192);
if(r1(R+518)){{goto L74b1a7;}}
}
B74b194:L74b194:{c.instructions+=7;NFSU2_TR(0x74b194);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b197:{NFSU2_TR(0x74b197);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b19b:{NFSU2_TR(0x74b19b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b19c:{NFSU2_TR(0x74b19c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b19d:{NFSU2_TR(0x74b19d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74b1a1:{NFSU2_TR(0x74b1a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b1a2:{NFSU2_TR(0x74b1a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b1a4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b1a4:L74b1a4:{c.instructions+=1;NFSU2_TR(0x74b1a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74b1a7:L74b1a7:{c.instructions+=9;NFSU2_TR(0x74b1a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74b1ab:{NFSU2_TR(0x74b1ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b1ac:{NFSU2_TR(0x74b1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b1af:{NFSU2_TR(0x74b1af);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74b1b3:{NFSU2_TR(0x74b1b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b1b4:{NFSU2_TR(0x74b1b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74b1b8:{NFSU2_TR(0x74b1b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b1b9:{NFSU2_TR(0x74b1b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b1ba:{NFSU2_TR(0x74b1ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b1bfull));
TAIL_STATIC(0x756a90u,756);
}
B74b1bf:L74b1bf:{c.instructions+=3;NFSU2_TR(0x74b1bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74b1c2:{NFSU2_TR(0x74b1c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b1c4:{NFSU2_TR(0x74b1c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b0d8u);}goto L74b0d8;}}
}
B74b1ca:L74b1ca:{c.instructions+=6;NFSU2_TR(0x74b1ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b1d1:{NFSU2_TR(0x74b1d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74b1d2:{NFSU2_TR(0x74b1d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b1d3:{NFSU2_TR(0x74b1d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74b1d4:{NFSU2_TR(0x74b1d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74b1d5:{NFSU2_TR(0x74b1d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b1daull));
TAIL_STATIC(0x76115eu,761);
}
B74b1da:L74b1da:{c.instructions+=2;NFSU2_TR(0x74b1da);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xc0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xc0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74b1e0:{NFSU2_TR(0x74b1e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b1f0:L74b1f0:{c.instructions+=10;NFSU2_TR(0x74b1f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b1f1:{NFSU2_TR(0x74b1f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74b1f5:{NFSU2_TR(0x74b1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b1f8:{NFSU2_TR(0x74b1f8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b1f9:{NFSU2_TR(0x74b1f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74b1fd:{NFSU2_TR(0x74b1fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b1fe:{NFSU2_TR(0x74b1fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74b200:{NFSU2_TR(0x74b200);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b202:{NFSU2_TR(0x74b202);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b203:{NFSU2_TR(0x74b203);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74b230;}}
}
B74b205:L74b205:{c.instructions+=3;NFSU2_TR(0x74b205);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b208:{NFSU2_TR(0x74b208);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b20c:{NFSU2_TR(0x74b20c);
__builtin_memmove((R+16),(R+16),4);
}
B74b210:L74b210:{c.instructions+=3;NFSU2_TR(0x74b210);
w4(R+4,u32(0x5ull));
}
B74b215:{NFSU2_TR(0x74b215);
__builtin_memmove((R+28),(R+20),4);
}
B74b217:{NFSU2_TR(0x74b217);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B74b219:L74b219:{c.instructions+=1;NFSU2_TR(0x74b219);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74b21b;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b219u);}goto L74b219;}}
}
B74b21b:L74b21b:{c.instructions+=1;NFSU2_TR(0x74b21b);
if(r1(R+518)){{goto L74b246;}}
}
B74b21d:L74b21d:{c.instructions+=7;NFSU2_TR(0x74b21d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74b221:{NFSU2_TR(0x74b221);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b224:{NFSU2_TR(0x74b224);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74b225:{NFSU2_TR(0x74b225);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B74b228:{NFSU2_TR(0x74b228);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B74b22a:{NFSU2_TR(0x74b22a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b22e:{NFSU2_TR(0x74b22e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b210u);}goto L74b210;}}
}
B74b230:L74b230:{c.instructions+=3;NFSU2_TR(0x74b230);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b233:{NFSU2_TR(0x74b233);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B74b235:{NFSU2_TR(0x74b235);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b25b;}}
}
B74b237:L74b237:{c.instructions+=2;NFSU2_TR(0x74b237);
__builtin_memmove((R+4),(R+12),4);
}
B74b239:{NFSU2_TR(0x74b239);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b23eull));
TAIL_STATIC(0x74ae00u,74a);
}
B74b23e:L74b23e:{c.instructions+=4;NFSU2_TR(0x74b23e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74b23f:{NFSU2_TR(0x74b23f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74b242:{NFSU2_TR(0x74b242);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B74b244:{NFSU2_TR(0x74b244);
{goto L74b267;}
}
B74b246:L74b246:{c.instructions+=2;NFSU2_TR(0x74b246);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b249:{NFSU2_TR(0x74b249);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b230u);}goto L74b230;}}
}
B74b24b:L74b24b:{c.instructions+=7;NFSU2_TR(0x74b24b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74b24e:{NFSU2_TR(0x74b24e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74b24f:{NFSU2_TR(0x74b24f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74b252:{NFSU2_TR(0x74b252);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B74b254:{NFSU2_TR(0x74b254);
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x1ull))));
}
B74b256:{NFSU2_TR(0x74b256);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74b259:{NFSU2_TR(0x74b259);
{goto L74b2a5;}
}
B74b25b:L74b25b:{c.instructions+=5;NFSU2_TR(0x74b25b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74b25e:{NFSU2_TR(0x74b25e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74b261:{NFSU2_TR(0x74b261);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B74b263:{NFSU2_TR(0x74b263);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74b264:{NFSU2_TR(0x74b264);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b267:L74b267:{c.instructions+=20;NFSU2_TR(0x74b267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74b26a:{NFSU2_TR(0x74b26a);
__builtin_memmove((R+8),(R+0),4);
}
B74b26c:{NFSU2_TR(0x74b26c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74b26e:{NFSU2_TR(0x74b26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b271:{NFSU2_TR(0x74b271);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b274:{NFSU2_TR(0x74b274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b277:{NFSU2_TR(0x74b277);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b27a:{NFSU2_TR(0x74b27a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b27d:{NFSU2_TR(0x74b27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b280:{NFSU2_TR(0x74b280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b283:{NFSU2_TR(0x74b283);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b286:{NFSU2_TR(0x74b286);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b28a:{NFSU2_TR(0x74b28a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b28e:{NFSU2_TR(0x74b28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b291:{NFSU2_TR(0x74b291);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b294:{NFSU2_TR(0x74b294);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w2(U+4,u16(0x8000ull));
s2(u32(r4(U+0)),r2(U+4));
}
B74b29a:{NFSU2_TR(0x74b29a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B74b29d:{NFSU2_TR(0x74b29d);
w1(R+12,u8(u32(r1(R+12))-u32(u8(0x1ull))));
}
B74b29f:{NFSU2_TR(0x74b29f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74b2a2:{NFSU2_TR(0x74b2a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74b2a5:L74b2a5:{c.instructions+=7;NFSU2_TR(0x74b2a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B74b2a9:{NFSU2_TR(0x74b2a9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B74b2ac:{NFSU2_TR(0x74b2ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74b2ad:{NFSU2_TR(0x74b2ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b2ae:{NFSU2_TR(0x74b2ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74b2af:{NFSU2_TR(0x74b2af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74b2b0:{NFSU2_TR(0x74b2b0);
if(r1(R+518)){{goto L74b2b8;}}
}
B74b2b2:L74b2b2:{c.instructions+=2;NFSU2_TR(0x74b2b2);
w4(R+0,u32(0xfffffffeull));
}
B74b2b7:{NFSU2_TR(0x74b2b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b2b8:L74b2b8:{c.instructions+=2;NFSU2_TR(0x74b2b8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff0fffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74b2bd:{NFSU2_TR(0x74b2bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b2c2;}}
}
B74b2bf:L74b2bf:{c.instructions+=1;NFSU2_TR(0x74b2bf);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74b2c2:L74b2c2:{c.instructions+=1;NFSU2_TR(0x74b2c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b2d0:L74b2d0:{c.instructions+=10;NFSU2_TR(0x74b2d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b2d4:{NFSU2_TR(0x74b2d4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b2d8:{NFSU2_TR(0x74b2d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b2dc:{NFSU2_TR(0x74b2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b2df:{NFSU2_TR(0x74b2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b2e2:{NFSU2_TR(0x74b2e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74b2ea:{NFSU2_TR(0x74b2ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74b2f2:{NFSU2_TR(0x74b2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b2f5:{NFSU2_TR(0x74b2f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b2f9:{NFSU2_TR(0x74b2f9);
TAIL_STATIC(0x756a70u,756);
}
B74b300:L74b300:{c.instructions+=6;NFSU2_TR(0x74b300);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b304:{NFSU2_TR(0x74b304);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b307:{NFSU2_TR(0x74b307);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b308:{NFSU2_TR(0x74b308);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74b30a:{NFSU2_TR(0x74b30a);
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
B74b30c:{NFSU2_TR(0x74b30c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74b32c;}}
}
B74b30e:L74b30e:{c.instructions+=1;NFSU2_TR(0x74b30e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x37ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74b311:L74b311:{c.instructions+=10;NFSU2_TR(0x74b311);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
w2(U+4,u16(0x8000ull));
s2(u32(r4(U+0)),r2(U+4));
}
B74b317:{NFSU2_TR(0x74b317);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74b31a:{NFSU2_TR(0x74b31a);
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x1ull))));
}
B74b31c:{NFSU2_TR(0x74b31c);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B74b31e:{NFSU2_TR(0x74b31e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74b321:{NFSU2_TR(0x74b321);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b324:{NFSU2_TR(0x74b324);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74b325:{NFSU2_TR(0x74b325);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B74b328:{NFSU2_TR(0x74b328);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B74b32a:{NFSU2_TR(0x74b32a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b311u);}goto L74b311;}}
}
B74b32c:L74b32c:{c.instructions+=2;NFSU2_TR(0x74b32c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b32d:{NFSU2_TR(0x74b32d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b330:L74b330:{c.instructions+=2;NFSU2_TR(0x74b330);
w4(R+0,u32(0x402cull));
}
B74b335:{NFSU2_TR(0x74b335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b33aull));
TAIL_STATIC(0x75c4d0u,75c);
}
B74b33a:L74b33a:{c.instructions+=6;NFSU2_TR(0x74b33a);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74b33f:{NFSU2_TR(0x74b33f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b340:{NFSU2_TR(0x74b340);
u8 U[8];
w4(U+0,u32(u32(u32(0x403cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74b347:{NFSU2_TR(0x74b347);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74b34a:{NFSU2_TR(0x74b34a);
u8 U[8];
w4(U+0,u32(u32(u32(0x402cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b351:{NFSU2_TR(0x74b351);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74b6ae;}}
}
B74b357:L74b357:{c.instructions+=3;NFSU2_TR(0x74b357);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x400ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74b35d:{NFSU2_TR(0x74b35d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b35e:{NFSU2_TR(0x74b35e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74b380;}}
}
B74b360:L74b360:{c.instructions+=7;NFSU2_TR(0x74b360);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74b364:{NFSU2_TR(0x74b364);
u8 U[4];
w4(U+0,u32(u32(u32(0x1030ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74b36b:{NFSU2_TR(0x74b36b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2030ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74b372:{NFSU2_TR(0x74b372);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b376:{NFSU2_TR(0x74b376);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b37a:{NFSU2_TR(0x74b37a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b37e:{NFSU2_TR(0x74b37e);
{goto L74b3ac;}
}
B74b380:L74b380:{c.instructions+=3;NFSU2_TR(0x74b380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B74b387:{NFSU2_TR(0x74b387);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b388:{NFSU2_TR(0x74b388);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b38dull));
TAIL_STATIC(0x5836d0u,583);
}
B74b38d:L74b38d:{c.instructions+=3;NFSU2_TR(0x74b38d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b38e:{NFSU2_TR(0x74b38e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b392:{NFSU2_TR(0x74b392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b397ull));
TAIL_STATIC(0x5836d0u,583);
}
B74b397:L74b397:{c.instructions+=3;NFSU2_TR(0x74b397);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b398:{NFSU2_TR(0x74b398);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b39c:{NFSU2_TR(0x74b39c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b3a1ull));
TAIL_STATIC(0x5836d0u,583);
}
B74b3a1:L74b3a1:{c.instructions+=3;NFSU2_TR(0x74b3a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74b3a5:{NFSU2_TR(0x74b3a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74b3a8:{NFSU2_TR(0x74b3a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b3ac:L74b3ac:{c.instructions+=5;NFSU2_TR(0x74b3ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b3ad:{NFSU2_TR(0x74b3ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b3ae:{NFSU2_TR(0x74b3ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x404cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74b3b5:{NFSU2_TR(0x74b3b5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b3bb:{NFSU2_TR(0x74b3bb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74b3ca;}}
}
B74b3bd:L74b3bd:{c.instructions+=3;NFSU2_TR(0x74b3bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x3038ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74b3c4:{NFSU2_TR(0x74b3c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b3c8:{NFSU2_TR(0x74b3c8);
{goto L74b3d7;}
}
B74b3ca:L74b3ca:{c.instructions+=2;NFSU2_TR(0x74b3ca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b3cb:{NFSU2_TR(0x74b3cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b3d0ull));
TAIL_STATIC(0x5836d0u,583);
}
B74b3d0:L74b3d0:{c.instructions+=2;NFSU2_TR(0x74b3d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74b3d3:{NFSU2_TR(0x74b3d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b3d7:L74b3d7:{c.instructions+=11;NFSU2_TR(0x74b3d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4044ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74b3de:{NFSU2_TR(0x74b3de);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B74b3e1:{NFSU2_TR(0x74b3e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b3e5:{NFSU2_TR(0x74b3e5);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B74b3e7:{NFSU2_TR(0x74b3e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B74b3e9:{NFSU2_TR(0x74b3e9);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B74b3eb:{NFSU2_TR(0x74b3eb);
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
B74b3ed:{NFSU2_TR(0x74b3ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b3f1:{NFSU2_TR(0x74b3f1);
__builtin_memmove((R+20),(R+28),4);
}
B74b3f3:{NFSU2_TR(0x74b3f3);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+28)),r4(U+0));
}
B74b3f9:{NFSU2_TR(0x74b3f9);
if(r1(R+518)){{goto L74b447;}}
}
B74b3fb:L74b3fb:{c.instructions+=1;NFSU2_TR(0x74b3fb);
{goto L74b400;}
}
B74b400:L74b400:{c.instructions+=7;NFSU2_TR(0x74b400);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b404:{NFSU2_TR(0x74b404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74b406:{NFSU2_TR(0x74b406);
u8 U[8];
w4(U+0,u32(u32(u32(0x4040ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b40d:{NFSU2_TR(0x74b40d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b40e:{NFSU2_TR(0x74b40e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b40f:{NFSU2_TR(0x74b40f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b410:{NFSU2_TR(0x74b410);
u8 U[12];
w4(U+0,u32(u32(u32(0x405cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b417ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74b417:L74b417:{c.instructions+=3;NFSU2_TR(0x74b417);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74b41a:{NFSU2_TR(0x74b41a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b41c:{NFSU2_TR(0x74b41c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74b423;}}
}
B74b41e:L74b41e:{c.instructions+=2;NFSU2_TR(0x74b41e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+20)),r4(U+0));
}
B74b421:{NFSU2_TR(0x74b421);
{goto L74b42d;}
}
B74b423:L74b423:{c.instructions+=2;NFSU2_TR(0x74b423);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B74b426:{NFSU2_TR(0x74b426);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+20)),r4(U+0));
}
B74b42d:L74b42d:{c.instructions+=8;NFSU2_TR(0x74b42d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b431:{NFSU2_TR(0x74b431);
u8 U[8];
w4(U+0,u32(u32(u32(0x404cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b438:{NFSU2_TR(0x74b438);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B74b43b:{NFSU2_TR(0x74b43b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B74b43d:{NFSU2_TR(0x74b43d);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B74b43f:{NFSU2_TR(0x74b43f);
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
B74b441:{NFSU2_TR(0x74b441);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b445:{NFSU2_TR(0x74b445);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b400u);}goto L74b400;}}
}
B74b447:L74b447:{c.instructions+=9;NFSU2_TR(0x74b447);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B74b44a:{NFSU2_TR(0x74b44a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74b44c:{NFSU2_TR(0x74b44c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B74b44f:{NFSU2_TR(0x74b44f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b452:{NFSU2_TR(0x74b452);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b455:{NFSU2_TR(0x74b455);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b457:{NFSU2_TR(0x74b457);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74b45a:{NFSU2_TR(0x74b45a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b45e:{NFSU2_TR(0x74b45e);
if(r1(R+518)){{goto L74b66e;}}
}
B74b464:L74b464:{c.instructions+=1;NFSU2_TR(0x74b464);
{goto L74b470;}
}
B74b466:L74b466:{c.instructions+=2;NFSU2_TR(0x74b466);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74b46a:{NFSU2_TR(0x74b46a);
__builtin_memmove((R+12),(R+12),4);
}
B74b470:L74b470:{c.instructions+=20;NFSU2_TR(0x74b470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B74b472:{NFSU2_TR(0x74b472);
__builtin_memmove((R+4),(R+0),4);
}
B74b474:{NFSU2_TR(0x74b474);
w4(R+4,u32(~u32(r4(R+4))));
}
B74b476:{NFSU2_TR(0x74b476);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B74b479:{NFSU2_TR(0x74b479);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B74b47d:{NFSU2_TR(0x74b47d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B74b480:{NFSU2_TR(0x74b480);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B74b484:{NFSU2_TR(0x74b484);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B74b487:{NFSU2_TR(0x74b487);
__builtin_memmove((R+8),(R+28),4);
}
B74b489:{NFSU2_TR(0x74b489);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b48d:{NFSU2_TR(0x74b48d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74b490:{NFSU2_TR(0x74b490);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b494:{NFSU2_TR(0x74b494);
__builtin_memmove((R+28),(R+0),4);
}
B74b496:{NFSU2_TR(0x74b496);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B74b499:{NFSU2_TR(0x74b499);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b49b:{NFSU2_TR(0x74b49b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B74b49e:{NFSU2_TR(0x74b49e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b4a2:{NFSU2_TR(0x74b4a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b4a6:{NFSU2_TR(0x74b4a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b4aa:{NFSU2_TR(0x74b4aa);
if(r1(R+518)){{goto L74b567;}}
}
B74b4b0:L74b4b0:{c.instructions+=1;NFSU2_TR(0x74b4b0);
{goto L74b4b6;}
}
B74b4b2:L74b4b2:{c.instructions+=1;NFSU2_TR(0x74b4b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b4b6:L74b4b6:{c.instructions+=2;NFSU2_TR(0x74b4b6);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74b4ba:{NFSU2_TR(0x74b4ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b4d4;}}
}
B74b4bc:L74b4bc:{c.instructions+=2;NFSU2_TR(0x74b4bc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b4be:{NFSU2_TR(0x74b4be);
if(r1(R+518)){{goto L74b52c;}}
}
B74b4c0:L74b4c0:{c.instructions+=7;NFSU2_TR(0x74b4c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b4c4:{NFSU2_TR(0x74b4c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B74b4c6:{NFSU2_TR(0x74b4c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B74b4c8:{NFSU2_TR(0x74b4c8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B74b4cb:{NFSU2_TR(0x74b4cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b4cf:{NFSU2_TR(0x74b4cf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B74b4d2:{NFSU2_TR(0x74b4d2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b4b6u);}goto L74b4b6;}
}
B74b4d4:L74b4d4:{c.instructions+=2;NFSU2_TR(0x74b4d4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B74b4d6:{NFSU2_TR(0x74b4d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b4ec;}}
}
B74b4d8:L74b4d8:{c.instructions+=7;NFSU2_TR(0x74b4d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b4dc:{NFSU2_TR(0x74b4dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B74b4de:{NFSU2_TR(0x74b4de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B74b4e0:{NFSU2_TR(0x74b4e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B74b4e3:{NFSU2_TR(0x74b4e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b4e7:{NFSU2_TR(0x74b4e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B74b4ea:{NFSU2_TR(0x74b4ea);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b4b6u);}goto L74b4b6;}
}
B74b4ec:L74b4ec:{c.instructions+=7;NFSU2_TR(0x74b4ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74b4ee:{NFSU2_TR(0x74b4ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74b4f0:{NFSU2_TR(0x74b4f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4040ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b4f7:{NFSU2_TR(0x74b4f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b4f8:{NFSU2_TR(0x74b4f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b4f9:{NFSU2_TR(0x74b4f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b4fa:{NFSU2_TR(0x74b4fa);
u8 U[12];
w4(U+0,u32(u32(u32(0x405cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b501ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74b501:L74b501:{c.instructions+=4;NFSU2_TR(0x74b501);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74b504:{NFSU2_TR(0x74b504);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b506:{NFSU2_TR(0x74b506);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b50a:{NFSU2_TR(0x74b50a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74b51c;}}
}
B74b50c:L74b50c:{c.instructions+=6;NFSU2_TR(0x74b50c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74b50e:{NFSU2_TR(0x74b50e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B74b510:{NFSU2_TR(0x74b510);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B74b513:{NFSU2_TR(0x74b513);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b517:{NFSU2_TR(0x74b517);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B74b51a:{NFSU2_TR(0x74b51a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b4b2u);}goto L74b4b2;}
}
B74b51c:L74b51c:{c.instructions+=6;NFSU2_TR(0x74b51c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B74b51e:{NFSU2_TR(0x74b51e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B74b520:{NFSU2_TR(0x74b520);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B74b523:{NFSU2_TR(0x74b523);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b527:{NFSU2_TR(0x74b527);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B74b52a:{NFSU2_TR(0x74b52a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b4b2u);}goto L74b4b2;}
}
B74b52c:L74b52c:{c.instructions+=18;NFSU2_TR(0x74b52c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b530:{NFSU2_TR(0x74b530);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b534:{NFSU2_TR(0x74b534);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B74b536:{NFSU2_TR(0x74b536);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74b538:{NFSU2_TR(0x74b538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+12),(U+0),4);
}
B74b53b:{NFSU2_TR(0x74b53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b53e:{NFSU2_TR(0x74b53e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B74b541:{NFSU2_TR(0x74b541);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B74b544:{NFSU2_TR(0x74b544);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B74b547:{NFSU2_TR(0x74b547);
__builtin_memmove((R+24),(R+0),4);
}
B74b549:{NFSU2_TR(0x74b549);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B74b54c:{NFSU2_TR(0x74b54c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b54e:{NFSU2_TR(0x74b54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B74b551:{NFSU2_TR(0x74b551);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b555:{NFSU2_TR(0x74b555);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b559:{NFSU2_TR(0x74b559);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b55d:{NFSU2_TR(0x74b55d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b561:{NFSU2_TR(0x74b561);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b4b2u);}goto L74b4b2;}}
}
B74b567:L74b567:{c.instructions+=10;NFSU2_TR(0x74b567);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74b56b:{NFSU2_TR(0x74b56b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b56f:{NFSU2_TR(0x74b56f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B74b575:{NFSU2_TR(0x74b575);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B74b578:{NFSU2_TR(0x74b578);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74b57f:{NFSU2_TR(0x74b57f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74b582:{NFSU2_TR(0x74b582);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74b583:{NFSU2_TR(0x74b583);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b585:{NFSU2_TR(0x74b585);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b589:{NFSU2_TR(0x74b589);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b466u);}goto L74b466;}}
}
B74b58f:L74b58f:{c.instructions+=2;NFSU2_TR(0x74b58f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b591:{NFSU2_TR(0x74b591);
if(r1(R+518)){{goto L74b66a;}}
}
B74b597:L74b597:{c.instructions+=7;NFSU2_TR(0x74b597);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B74b59a:{NFSU2_TR(0x74b59a);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B74b59e:{NFSU2_TR(0x74b59e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4048ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b5a5:{NFSU2_TR(0x74b5a5);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B74b5a7:{NFSU2_TR(0x74b5a7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b5a9:{NFSU2_TR(0x74b5a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b5ad:{NFSU2_TR(0x74b5ad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74b66a;}}
}
B74b5b3:L74b5b3:{c.instructions+=3;NFSU2_TR(0x74b5b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B74b5b6:{NFSU2_TR(0x74b5b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b5b8:{NFSU2_TR(0x74b5b8);
if(r1(R+518)){{goto L74b656;}}
}
B74b5be:L74b5be:{c.instructions+=4;NFSU2_TR(0x74b5be);
u8 U[8];
w4(U+0,u32(u32(u32(0x404cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b5c5:{NFSU2_TR(0x74b5c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74b5c9:{NFSU2_TR(0x74b5c9);
__builtin_memmove((R+8),(R+4),4);
}
B74b5cb:{NFSU2_TR(0x74b5cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B74b5ce:L74b5ce:{c.instructions+=1;NFSU2_TR(0x74b5ce);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74b5d0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b5ceu);}goto L74b5ce;}
}
B74b5d0:L74b5d0:{c.instructions+=3;NFSU2_TR(0x74b5d0);
__builtin_memmove((R+4),(R+8),4);
}
B74b5d2:{NFSU2_TR(0x74b5d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4044ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b5d9:{NFSU2_TR(0x74b5d9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B74b5dc:L74b5dc:{c.instructions+=1;NFSU2_TR(0x74b5dc);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L74b5de;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b5dcu);}goto L74b5dc;}
}
B74b5de:L74b5de:{c.instructions+=6;NFSU2_TR(0x74b5de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B74b5e1:{NFSU2_TR(0x74b5e1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74b5e3:{NFSU2_TR(0x74b5e3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B74b5e4:{NFSU2_TR(0x74b5e4);
u8 U[64];
w4(U+0,u32(u32(u32(0x404cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74b5e4);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74b5e4);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B74b5eb:{NFSU2_TR(0x74b5eb);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74b5ef:{NFSU2_TR(0x74b5ef);
if(r1(R+518)){{goto L74b62f;}}
}
B74b5f1:L74b5f1:{c.instructions+=5;NFSU2_TR(0x74b5f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B74b5f4:{NFSU2_TR(0x74b5f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x404cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b5fb:{NFSU2_TR(0x74b5fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B74b5fe:{NFSU2_TR(0x74b5fe);
__builtin_memmove((R+8),(R+4),4);
}
B74b600:{NFSU2_TR(0x74b600);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B74b603:L74b603:{c.instructions+=1;NFSU2_TR(0x74b603);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74b605;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b603u);}goto L74b603;}
}
B74b605:L74b605:{c.instructions+=3;NFSU2_TR(0x74b605);
__builtin_memmove((R+4),(R+8),4);
}
B74b607:{NFSU2_TR(0x74b607);
u8 U[8];
w4(U+0,u32(u32(u32(0x4044ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b60e:{NFSU2_TR(0x74b60e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B74b611:L74b611:{c.instructions+=1;NFSU2_TR(0x74b611);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L74b613;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b611u);}goto L74b611;}
}
B74b613:L74b613:{c.instructions+=8;NFSU2_TR(0x74b613);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B74b61a:{NFSU2_TR(0x74b61a);
__builtin_memmove((R+20),(R+0),4);
}
B74b61c:{NFSU2_TR(0x74b61c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B74b61f:{NFSU2_TR(0x74b61f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74b621:{NFSU2_TR(0x74b621);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B74b622:{NFSU2_TR(0x74b622);
u8 U[64];
w4(U+0,u32(u32(u32(0x404cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74b622);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74b622);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B74b629:{NFSU2_TR(0x74b629);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74b62d:{NFSU2_TR(0x74b62d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b5f1u);}goto L74b5f1;}}
}
B74b62f:L74b62f:{c.instructions+=5;NFSU2_TR(0x74b62f);
u8 U[8];
w4(U+0,u32(u32(u32(0x404cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b636:{NFSU2_TR(0x74b636);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B74b639:{NFSU2_TR(0x74b639);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74b63d:{NFSU2_TR(0x74b63d);
__builtin_memmove((R+0),(R+4),4);
}
B74b63f:{NFSU2_TR(0x74b63f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B74b642:L74b642:{c.instructions+=1;NFSU2_TR(0x74b642);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74b644;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b642u);}goto L74b642;}
}
B74b644:L74b644:{c.instructions+=2;NFSU2_TR(0x74b644);
__builtin_memmove((R+4),(R+0),4);
}
B74b646:{NFSU2_TR(0x74b646);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B74b649:L74b649:{c.instructions+=1;NFSU2_TR(0x74b649);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L74b64b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b649u);}goto L74b649;}
}
B74b64b:L74b64b:{c.instructions+=2;NFSU2_TR(0x74b64b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B74b652:{NFSU2_TR(0x74b652);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74b656:L74b656:{c.instructions+=5;NFSU2_TR(0x74b656);
u8 U[8];
w4(U+0,u32(u32(u32(0x4048ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b65d:{NFSU2_TR(0x74b65d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B74b65e:{NFSU2_TR(0x74b65e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74b660:{NFSU2_TR(0x74b660);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b664:{NFSU2_TR(0x74b664);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b5b3u);}goto L74b5b3;}}
}
B74b66a:L74b66a:{c.instructions+=1;NFSU2_TR(0x74b66a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74b66e:L74b66e:{c.instructions+=5;NFSU2_TR(0x74b66e);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74b672:{NFSU2_TR(0x74b672);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b674:{NFSU2_TR(0x74b674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74b675:{NFSU2_TR(0x74b675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74b676:{NFSU2_TR(0x74b676);
if(r1(R+518)){{goto L74b695;}}
}
B74b678:L74b678:{c.instructions+=2;NFSU2_TR(0x74b678);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b679:{NFSU2_TR(0x74b679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b67eull));
TAIL_STATIC(0x598ec0u,598);
}
B74b67e:L74b67e:{c.instructions+=3;NFSU2_TR(0x74b67e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b682:{NFSU2_TR(0x74b682);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b683:{NFSU2_TR(0x74b683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b688ull));
TAIL_STATIC(0x598ec0u,598);
}
B74b688:L74b688:{c.instructions+=3;NFSU2_TR(0x74b688);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b68c:{NFSU2_TR(0x74b68c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b68d:{NFSU2_TR(0x74b68d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b692ull));
TAIL_STATIC(0x598ec0u,598);
}
B74b692:L74b692:{c.instructions+=1;NFSU2_TR(0x74b692);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74b695:L74b695:{c.instructions+=5;NFSU2_TR(0x74b695);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b699:{NFSU2_TR(0x74b699);
u8 U[4];
w4(U+0,u32(u32(u32(0x3030ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74b6a0:{NFSU2_TR(0x74b6a0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b6a2:{NFSU2_TR(0x74b6a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74b6a3:{NFSU2_TR(0x74b6a3);
if(r1(R+518)){{goto L74b6ae;}}
}
B74b6a5:L74b6a5:{c.instructions+=2;NFSU2_TR(0x74b6a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b6a6:{NFSU2_TR(0x74b6a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b6abull));
TAIL_STATIC(0x598ec0u,598);
}
B74b6ab:L74b6ab:{c.instructions+=1;NFSU2_TR(0x74b6ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74b6ae:L74b6ae:{c.instructions+=3;NFSU2_TR(0x74b6ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x402cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b6b5:{NFSU2_TR(0x74b6b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b6b6:{NFSU2_TR(0x74b6b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b6bbull));
TAIL_STATIC(0x76115eu,761);
}
B74b6bb:L74b6bb:{c.instructions+=2;NFSU2_TR(0x74b6bb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x402cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x402cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x402cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74b6c1:{NFSU2_TR(0x74b6c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b6d0:L74b6d0:{c.instructions+=8;NFSU2_TR(0x74b6d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b6d4:{NFSU2_TR(0x74b6d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b6d5:{NFSU2_TR(0x74b6d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74b6d9:{NFSU2_TR(0x74b6d9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b6db:{NFSU2_TR(0x74b6db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b6dc:{NFSU2_TR(0x74b6dc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74b6e0:{NFSU2_TR(0x74b6e0);
__builtin_memmove((R+4),(R+28),4);
}
B74b6e2:{NFSU2_TR(0x74b6e2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74b70d;}}
}
B74b6e4:L74b6e4:{c.instructions+=3;NFSU2_TR(0x74b6e4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74b6e6:{NFSU2_TR(0x74b6e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74b6e8:{NFSU2_TR(0x74b6e8);
if(r1(R+518)){{goto L74b6fd;}}
}
B74b6ea:L74b6ea:{c.instructions+=1;NFSU2_TR(0x74b6ea);
__builtin_memmove((R+12),(R+12),4);
}
B74b6f0:L74b6f0:{c.instructions+=2;NFSU2_TR(0x74b6f0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74b6f2:{NFSU2_TR(0x74b6f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b702;}}
}
B74b6f4:L74b6f4:{c.instructions+=5;NFSU2_TR(0x74b6f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74b6f7:{NFSU2_TR(0x74b6f7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74b6f8:{NFSU2_TR(0x74b6f8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B74b6f9:{NFSU2_TR(0x74b6f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74b6fb:{NFSU2_TR(0x74b6fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b6f0u);}goto L74b6f0;}}
}
B74b6fd:L74b6fd:{c.instructions+=1;NFSU2_TR(0x74b6fd);
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
B74b6ff:L74b6ff:{c.instructions+=3;NFSU2_TR(0x74b6ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74b700:{NFSU2_TR(0x74b700);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b701:{NFSU2_TR(0x74b701);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b702:L74b702:{c.instructions+=6;NFSU2_TR(0x74b702);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+8,u32(r1(U+0)));
}
B74b705:{NFSU2_TR(0x74b705);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B74b708:{NFSU2_TR(0x74b708);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74b709:{NFSU2_TR(0x74b709);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74b70b:{NFSU2_TR(0x74b70b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b70c:{NFSU2_TR(0x74b70c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b70d:L74b70d:{c.instructions+=1;NFSU2_TR(0x74b70d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74b722;}}
}
B74b70f:L74b70f:{c.instructions+=1;NFSU2_TR(0x74b70f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B74b711:L74b711:{c.instructions+=4;NFSU2_TR(0x74b711);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B74b715:{NFSU2_TR(0x74b715);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B74b718:{NFSU2_TR(0x74b718);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74b71a:{NFSU2_TR(0x74b71a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b6ffu);}goto L74b6ff;}}
}
B74b71c:L74b71c:{c.instructions+=4;NFSU2_TR(0x74b71c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74b71d:{NFSU2_TR(0x74b71d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B74b71e:{NFSU2_TR(0x74b71e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b720:{NFSU2_TR(0x74b720);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b711u);}goto L74b711;}}
}
B74b722:L74b722:{c.instructions+=4;NFSU2_TR(0x74b722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74b723:{NFSU2_TR(0x74b723);
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
B74b725:{NFSU2_TR(0x74b725);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b726:{NFSU2_TR(0x74b726);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b730:L74b730:{c.instructions+=1;NFSU2_TR(0x74b730);
{u32 t_=u32(m4(0x78320c));TAIL_DYNAMIC(t_);}
}
B74b740:L74b740:{c.instructions+=4;NFSU2_TR(0x74b740);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b744:{NFSU2_TR(0x74b744);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74b746:{NFSU2_TR(0x74b746);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b748:{NFSU2_TR(0x74b748);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b74f;}}
}
B74b74a:L74b74a:{c.instructions+=1;NFSU2_TR(0x74b74a);
w4(R+0,u32(0x8b7cb8ull));
}
B74b74f:L74b74f:{c.instructions+=6;NFSU2_TR(0x74b74f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B74b751:{NFSU2_TR(0x74b751);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b754:{NFSU2_TR(0x74b754);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b757:{NFSU2_TR(0x74b757);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74b75a:{NFSU2_TR(0x74b75a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b75b:{NFSU2_TR(0x74b75b);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b761ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b761:L74b761:{c.instructions+=1;NFSU2_TR(0x74b761);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b770:L74b770:{c.instructions+=3;NFSU2_TR(0x74b770);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b774:{NFSU2_TR(0x74b774);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b776:{NFSU2_TR(0x74b776);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b77d;}}
}
B74b778:L74b778:{c.instructions+=1;NFSU2_TR(0x74b778);
w4(R+0,u32(0x8b7cb8ull));
}
B74b77d:L74b77d:{c.instructions+=4;NFSU2_TR(0x74b77d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74b784:{NFSU2_TR(0x74b784);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74b787:{NFSU2_TR(0x74b787);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b788:{NFSU2_TR(0x74b788);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831b8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b78eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b78e:L74b78e:{c.instructions+=1;NFSU2_TR(0x74b78e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b790:L74b790:{c.instructions+=5;NFSU2_TR(0x74b790);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b791:{NFSU2_TR(0x74b791);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74b795:{NFSU2_TR(0x74b795);
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
B74b797:{NFSU2_TR(0x74b797);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b798:{NFSU2_TR(0x74b798);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b79f;}}
}
B74b79a:L74b79a:{c.instructions+=1;NFSU2_TR(0x74b79a);
w4(R+24,u32(0x8b7cb8ull));
}
B74b79f:L74b79f:{c.instructions+=2;NFSU2_TR(0x74b79f);
__builtin_memmove((R+28),gp(0x783200),4);
}
B74b7a5:{NFSU2_TR(0x74b7a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b7a7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b7a7:L74b7a7:{c.instructions+=2;NFSU2_TR(0x74b7a7);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+0)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B74b7a9:{NFSU2_TR(0x74b7a9);
if(r1(R+518)){{goto L74b7ce;}}
}
B74b7ab:L74b7ab:{c.instructions+=4;NFSU2_TR(0x74b7ab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b7ad:{NFSU2_TR(0x74b7ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74b7b0:{NFSU2_TR(0x74b7b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b7b1:{NFSU2_TR(0x74b7b1);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b7b7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b7b7:L74b7b7:{c.instructions+=2;NFSU2_TR(0x74b7b7);
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
B74b7b9:{NFSU2_TR(0x74b7b9);
if(r1(R+518)){{goto L74b7c0;}}
}
B74b7bb:L74b7bb:{c.instructions+=4;NFSU2_TR(0x74b7bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74b7bc:{NFSU2_TR(0x74b7bc);
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
B74b7be:{NFSU2_TR(0x74b7be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b7bf:{NFSU2_TR(0x74b7bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b7c0:L74b7c0:{c.instructions+=3;NFSU2_TR(0x74b7c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B74b7c3:{NFSU2_TR(0x74b7c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b7c4:{NFSU2_TR(0x74b7c4);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b7caull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b7ca:L74b7ca:{c.instructions+=1;NFSU2_TR(0x74b7ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b7ccull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b7cc:L74b7cc:{c.instructions+=1;NFSU2_TR(0x74b7cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B74b7ce:L74b7ce:{c.instructions+=5;NFSU2_TR(0x74b7ce);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B74b7d1:{NFSU2_TR(0x74b7d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74b7d2:{NFSU2_TR(0x74b7d2);
w4(R+0,u32(0x1ull));
}
B74b7d7:{NFSU2_TR(0x74b7d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b7d8:{NFSU2_TR(0x74b7d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b7e0:L74b7e0:{c.instructions+=8;NFSU2_TR(0x74b7e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b7e1:{NFSU2_TR(0x74b7e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b7e2:{NFSU2_TR(0x74b7e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b7e3:{NFSU2_TR(0x74b7e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74b7e7:{NFSU2_TR(0x74b7e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74b7e9:{NFSU2_TR(0x74b7e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b7ea:{NFSU2_TR(0x74b7ea);
__builtin_memmove((R+28),(R+24),4);
}
B74b7ec:{NFSU2_TR(0x74b7ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b7f3;}}
}
B74b7ee:L74b7ee:{c.instructions+=1;NFSU2_TR(0x74b7ee);
w4(R+28,u32(0x8b7cb8ull));
}
B74b7f3:L74b7f3:{c.instructions+=3;NFSU2_TR(0x74b7f3);
__builtin_memmove((R+20),gp(0x7831a8),4);
}
B74b7f9:{NFSU2_TR(0x74b7f9);
__builtin_memmove((R+12),gp(0x7831ac),4);
}
B74b7ff:{NFSU2_TR(0x74b7ff);
}
B74b800:L74b800:{c.instructions+=2;NFSU2_TR(0x74b800);
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
B74b802:{NFSU2_TR(0x74b802);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b809;}}
}
B74b804:L74b804:{c.instructions+=1;NFSU2_TR(0x74b804);
w4(R+24,u32(0x8b7cb8ull));
}
B74b809:L74b809:{c.instructions+=1;NFSU2_TR(0x74b809);
u8 U[4];
__builtin_memmove((U+0),gp(0x783200),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b80full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b80f:L74b80f:{c.instructions+=2;NFSU2_TR(0x74b80f);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+0)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B74b811:{NFSU2_TR(0x74b811);
if(r1(R+518)){{goto L74b84c;}}
}
B74b813:L74b813:{c.instructions+=4;NFSU2_TR(0x74b813);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b815:{NFSU2_TR(0x74b815);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74b818:{NFSU2_TR(0x74b818);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b819:{NFSU2_TR(0x74b819);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b81bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b81b:L74b81b:{c.instructions+=2;NFSU2_TR(0x74b81b);
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
B74b81d:{NFSU2_TR(0x74b81d);
if(r1(R+518)){{goto L74b83e;}}
}
B74b81f:L74b81f:{c.instructions+=3;NFSU2_TR(0x74b81f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b822:{NFSU2_TR(0x74b822);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b823:{NFSU2_TR(0x74b823);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b825ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b825:L74b825:{c.instructions+=4;NFSU2_TR(0x74b825);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b827:{NFSU2_TR(0x74b827);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74b82a:{NFSU2_TR(0x74b82a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b82b:{NFSU2_TR(0x74b82b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b82dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b82d:L74b82d:{c.instructions+=2;NFSU2_TR(0x74b82d);
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
B74b82f:{NFSU2_TR(0x74b82f);
if(r1(R+518)){{goto L74b858;}}
}
B74b831:L74b831:{c.instructions+=2;NFSU2_TR(0x74b831);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b832:{NFSU2_TR(0x74b832);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b838ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b838:L74b838:{c.instructions+=2;NFSU2_TR(0x74b838);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74b83c:{NFSU2_TR(0x74b83c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b800u);}goto L74b800;}
}
B74b83e:L74b83e:{c.instructions+=3;NFSU2_TR(0x74b83e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B74b841:{NFSU2_TR(0x74b841);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b842:{NFSU2_TR(0x74b842);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b844ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b844:L74b844:{c.instructions+=1;NFSU2_TR(0x74b844);
u8 U[4];
__builtin_memmove((U+0),gp(0x783200),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b84aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b84a:L74b84a:{c.instructions+=1;NFSU2_TR(0x74b84a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B74b84c:L74b84c:{c.instructions+=8;NFSU2_TR(0x74b84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b84f:{NFSU2_TR(0x74b84f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74b850:{NFSU2_TR(0x74b850);
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
B74b851:{NFSU2_TR(0x74b851);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b854:{NFSU2_TR(0x74b854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b855:{NFSU2_TR(0x74b855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74b856:{NFSU2_TR(0x74b856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74b857:{NFSU2_TR(0x74b857);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b858:L74b858:{c.instructions+=1;NFSU2_TR(0x74b858);
u8 U[4];
__builtin_memmove((U+0),gp(0x783200),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b85eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b85e:L74b85e:{c.instructions+=7;NFSU2_TR(0x74b85e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B74b860:{NFSU2_TR(0x74b860);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B74b863:{NFSU2_TR(0x74b863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74b864:{NFSU2_TR(0x74b864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b865:{NFSU2_TR(0x74b865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74b866:{NFSU2_TR(0x74b866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74b867:{NFSU2_TR(0x74b867);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b870:L74b870:{c.instructions+=4;NFSU2_TR(0x74b870);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74b874:{NFSU2_TR(0x74b874);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74b876:{NFSU2_TR(0x74b876);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b878:{NFSU2_TR(0x74b878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b87f;}}
}
B74b87a:L74b87a:{c.instructions+=1;NFSU2_TR(0x74b87a);
w4(R+0,u32(0x8b7cb8ull));
}
B74b87f:L74b87f:{c.instructions+=3;NFSU2_TR(0x74b87f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b882:{NFSU2_TR(0x74b882);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b885:{NFSU2_TR(0x74b885);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74b88c;}}
}
B74b887:L74b887:{c.instructions+=3;NFSU2_TR(0x74b887);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74b888:{NFSU2_TR(0x74b888);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b88b:{NFSU2_TR(0x74b88b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b88c:L74b88c:{c.instructions+=6;NFSU2_TR(0x74b88c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B74b88e:{NFSU2_TR(0x74b88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b891:{NFSU2_TR(0x74b891);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74b894:{NFSU2_TR(0x74b894);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74b897:{NFSU2_TR(0x74b897);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b898:{NFSU2_TR(0x74b898);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b89eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b89e:L74b89e:{c.instructions+=1;NFSU2_TR(0x74b89e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b8a0:L74b8a0:{c.instructions+=3;NFSU2_TR(0x74b8a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b8a4:{NFSU2_TR(0x74b8a4);
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
B74b8a6:{NFSU2_TR(0x74b8a6);
if(r1(R+518)){{goto L74b8c9;}}
}
B74b8a8:L74b8a8:{c.instructions+=3;NFSU2_TR(0x74b8a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74b8ac:{NFSU2_TR(0x74b8ac);
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
B74b8ae:{NFSU2_TR(0x74b8ae);
if(r1(R+518)){{goto L74b8c9;}}
}
B74b8b0:L74b8b0:{c.instructions+=5;NFSU2_TR(0x74b8b0);
__builtin_memmove((R+0),gp(0x8b7e04),4);
}
B74b8b5:{NFSU2_TR(0x74b8b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7ce0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B74b8bc:{NFSU2_TR(0x74b8bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7ce4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B74b8c3:{NFSU2_TR(0x74b8c3);
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
B74b8c4:{NFSU2_TR(0x74b8c4);
__builtin_memmove(gp(0x8b7e04),(R+0),4);
}
B74b8c9:L74b8c9:{c.instructions+=1;NFSU2_TR(0x74b8c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b8d0:L74b8d0:{c.instructions+=4;NFSU2_TR(0x74b8d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b8d1:{NFSU2_TR(0x74b8d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74b8d5:{NFSU2_TR(0x74b8d5);
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
B74b8d7:{NFSU2_TR(0x74b8d7);
if(r1(R+518)){{goto L74b91f;}}
}
B74b8d9:L74b8d9:{c.instructions+=3;NFSU2_TR(0x74b8d9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74b8dd:{NFSU2_TR(0x74b8dd);
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
B74b8df:{NFSU2_TR(0x74b8df);
if(r1(R+518)){{goto L74b91f;}}
}
B74b8e1:L74b8e1:{c.instructions+=4;NFSU2_TR(0x74b8e1);
__builtin_memmove((R+4),gp(0x8b7e04),4);
}
B74b8e7:{NFSU2_TR(0x74b8e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74b8e9:{NFSU2_TR(0x74b8e9);
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
B74b8eb:{NFSU2_TR(0x74b8eb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74b91f;}}
}
B74b8ed:L74b8ed:{c.instructions+=1;NFSU2_TR(0x74b8ed);
__builtin_memmove((R+4),(R+4),4);
}
B74b8f0:L74b8f0:{c.instructions+=2;NFSU2_TR(0x74b8f0);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7ce0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+24))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B74b8f7:{NFSU2_TR(0x74b8f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74b902;}}
}
B74b8f9:L74b8f9:{c.instructions+=2;NFSU2_TR(0x74b8f9);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7ce4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+8)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B74b900:{NFSU2_TR(0x74b900);
if(r1(R+518)){{goto L74b909;}}
}
B74b902:L74b902:{c.instructions+=3;NFSU2_TR(0x74b902);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74b903:{NFSU2_TR(0x74b903);
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
B74b905:{NFSU2_TR(0x74b905);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b8f0u);}goto L74b8f0;}}
}
B74b907:L74b907:{c.instructions+=2;NFSU2_TR(0x74b907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b908:{NFSU2_TR(0x74b908);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b909:L74b909:{c.instructions+=2;NFSU2_TR(0x74b909);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7ce0ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B74b914:{NFSU2_TR(0x74b914);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7ce4ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B74b91f:L74b91f:{c.instructions+=2;NFSU2_TR(0x74b91f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74b920:{NFSU2_TR(0x74b920);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b930:L74b930:{c.instructions+=2;NFSU2_TR(0x74b930);
u8 U[4];
w4(U+0,u32(0x8b7de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b935:{NFSU2_TR(0x74b935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b93aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b7e0u);}goto L74b7e0;}
}
B74b93a:L74b93a:{c.instructions+=4;NFSU2_TR(0x74b93a);
__builtin_memmove((R+0),gp(0x8b7de4),4);
}
B74b93f:{NFSU2_TR(0x74b93f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74b942:{NFSU2_TR(0x74b942);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b945:{NFSU2_TR(0x74b945);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74b94e;}}
}
B74b947:L74b947:{c.instructions+=3;NFSU2_TR(0x74b947);
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
B74b948:{NFSU2_TR(0x74b948);
__builtin_memmove(gp(0x8b7de4),(R+0),4);
}
B74b94d:{NFSU2_TR(0x74b94d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b94e:L74b94e:{c.instructions+=6;NFSU2_TR(0x74b94e);
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
B74b950:{NFSU2_TR(0x74b950);
u8 U[4];
w4(U+0,u32(0x8b7decull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b955:{NFSU2_TR(0x74b955);
__builtin_memmove(gp(0x8b7de0),(R+0),4);
}
B74b95a:{NFSU2_TR(0x74b95a);
__builtin_memmove(gp(0x8b7de4),(R+0),4);
}
B74b95f:{NFSU2_TR(0x74b95f);
__builtin_memmove(gp(0x8b7de8),(R+0),4);
}
B74b964:{NFSU2_TR(0x74b964);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b96aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b96a:L74b96a:{c.instructions+=1;NFSU2_TR(0x74b96a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74b970:L74b970:{c.instructions+=3;NFSU2_TR(0x74b970);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b971:{NFSU2_TR(0x74b971);
__builtin_memmove((R+24),gp(0x783200),4);
}
B74b977:{NFSU2_TR(0x74b977);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b979ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b979:L74b979:{c.instructions+=2;NFSU2_TR(0x74b979);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b7de0),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74b97f:{NFSU2_TR(0x74b97f);
if(r1(R+518)){{goto L74b9a8;}}
}
B74b981:L74b981:{c.instructions+=3;NFSU2_TR(0x74b981);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b983:{NFSU2_TR(0x74b983);
u8 U[4];
w4(U+0,u32(0x8b7de8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b988:{NFSU2_TR(0x74b988);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b98eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b98e:L74b98e:{c.instructions+=2;NFSU2_TR(0x74b98e);
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
B74b990:{NFSU2_TR(0x74b990);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ba4a;}}
}
B74b996:L74b996:{c.instructions+=2;NFSU2_TR(0x74b996);
u8 U[4];
w4(U+0,u32(0x8b7decull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b99b:{NFSU2_TR(0x74b99b);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b9a1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b9a1:L74b9a1:{c.instructions+=1;NFSU2_TR(0x74b9a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b9a3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b9a3:L74b9a3:{c.instructions+=1;NFSU2_TR(0x74b9a3);
__builtin_memmove(gp(0x8b7de0),(R+0),4);
}
B74b9a8:L74b9a8:{c.instructions+=7;NFSU2_TR(0x74b9a8);
s4(0x8b7de4,u32(u32(m4(0x8b7de4))+u32(u32(0x1ull))));
}
B74b9ae:{NFSU2_TR(0x74b9ae);
__builtin_memmove((R+0),gp(0x8b7e04),4);
}
B74b9b3:{NFSU2_TR(0x74b9b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b9b4:{NFSU2_TR(0x74b9b4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B74b9b6:{NFSU2_TR(0x74b9b6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74b9b8:{NFSU2_TR(0x74b9b8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b9ba:{NFSU2_TR(0x74b9ba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74ba19;}}
}
B74b9bc:L74b9bc:{c.instructions+=1;NFSU2_TR(0x74b9bc);
__builtin_memmove((R+16),(R+16),4);
}
B74b9c0:L74b9c0:{c.instructions+=4;NFSU2_TR(0x74b9c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7ce0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B74b9c7:{NFSU2_TR(0x74b9c7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74b9c9:{NFSU2_TR(0x74b9c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7ce4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B74b9d0:{NFSU2_TR(0x74b9d0);
if(r1(R+518)){{goto L74b9e3;}}
}
B74b9d2:L74b9d2:{c.instructions+=2;NFSU2_TR(0x74b9d2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74b9d4:{NFSU2_TR(0x74b9d4);
if(r1(R+518)){{goto L74b9e3;}}
}
B74b9d6:L74b9d6:{c.instructions+=2;NFSU2_TR(0x74b9d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74b9d7:{NFSU2_TR(0x74b9d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74b9d9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74b9d9:L74b9d9:{c.instructions+=3;NFSU2_TR(0x74b9d9);
__builtin_memmove((R+0),gp(0x8b7e04),4);
}
B74b9de:{NFSU2_TR(0x74b9de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74b9e1:{NFSU2_TR(0x74b9e1);
{goto L74ba14;}
}
B74b9e3:L74b9e3:{c.instructions+=9;NFSU2_TR(0x74b9e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7cd8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B74b9ea:{NFSU2_TR(0x74b9ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7ce0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B74b9f1:{NFSU2_TR(0x74b9f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7cdcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B74b9f8:{NFSU2_TR(0x74b9f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7ce4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B74b9ff:{NFSU2_TR(0x74b9ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7cd8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B74ba06:{NFSU2_TR(0x74ba06);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b7cdcull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B74ba0d:{NFSU2_TR(0x74ba0d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B74ba0e:{NFSU2_TR(0x74ba0e);
__builtin_memmove(gp(0x8b7e04),(R+0),4);
}
B74ba13:{NFSU2_TR(0x74ba13);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B74ba14:L74ba14:{c.instructions+=3;NFSU2_TR(0x74ba14);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74ba15:{NFSU2_TR(0x74ba15);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74ba17:{NFSU2_TR(0x74ba17);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b9c0u);}goto L74b9c0;}}
}
B74ba19:L74ba19:{c.instructions+=3;NFSU2_TR(0x74ba19);
__builtin_memmove((R+0),gp(0x8b7de4),4);
}
B74ba1e:{NFSU2_TR(0x74ba1e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B74ba21:{NFSU2_TR(0x74ba21);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74ba2c;}}
}
B74ba23:L74ba23:{c.instructions+=5;NFSU2_TR(0x74ba23);
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
B74ba24:{NFSU2_TR(0x74ba24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74ba25:{NFSU2_TR(0x74ba25);
__builtin_memmove(gp(0x8b7de4),(R+0),4);
}
B74ba2a:{NFSU2_TR(0x74ba2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74ba2b:{NFSU2_TR(0x74ba2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74ba2c:L74ba2c:{c.instructions+=5;NFSU2_TR(0x74ba2c);
u8 U[4];
w4(U+0,u32(0x8b7decull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ba31:{NFSU2_TR(0x74ba31);
__builtin_memmove(gp(0x8b7de0),(R+28),4);
}
B74ba37:{NFSU2_TR(0x74ba37);
__builtin_memmove(gp(0x8b7de4),(R+28),4);
}
B74ba3d:{NFSU2_TR(0x74ba3d);
__builtin_memmove(gp(0x8b7de8),(R+28),4);
}
B74ba43:{NFSU2_TR(0x74ba43);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ba49ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74ba49:L74ba49:{c.instructions+=1;NFSU2_TR(0x74ba49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74ba4a:L74ba4a:{c.instructions+=2;NFSU2_TR(0x74ba4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74ba4b:{NFSU2_TR(0x74ba4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74ba50:L74ba50:{c.instructions+=4;NFSU2_TR(0x74ba50);
__builtin_memmove((R+0),gp(0x8b7e08),4);
}
B74ba55:{NFSU2_TR(0x74ba55);
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
B74ba57:{NFSU2_TR(0x74ba57);
s4(0x819bd0,u32(0x1ull));
}
B74ba61:{NFSU2_TR(0x74ba61);
if(r1(R+518)){{goto L74ba83;}}
}
B74ba63:L74ba63:{c.instructions+=3;NFSU2_TR(0x74ba63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ba64:{NFSU2_TR(0x74ba64);
__builtin_memmove((R+24),gp(0x783150),4);
}
B74ba6a:{NFSU2_TR(0x74ba6a);
__builtin_memmove((R+12),(R+12),4);
}
B74ba70:L74ba70:{c.instructions+=1;NFSU2_TR(0x74ba70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ba75ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74b970u);}goto L74b970;}
}
B74ba75:L74ba75:{c.instructions+=2;NFSU2_TR(0x74ba75);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ba77:{NFSU2_TR(0x74ba77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ba79ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74ba79:L74ba79:{c.instructions+=3;NFSU2_TR(0x74ba79);
__builtin_memmove((R+0),gp(0x8b7e08),4);
}
B74ba7e:{NFSU2_TR(0x74ba7e);
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
B74ba80:{NFSU2_TR(0x74ba80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ba70u);}goto L74ba70;}}
}
B74ba82:L74ba82:{c.instructions+=1;NFSU2_TR(0x74ba82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74ba83:L74ba83:{c.instructions+=2;NFSU2_TR(0x74ba83);
s4(0x819bd0,u32(0x0ull));
}
B74ba8d:{NFSU2_TR(0x74ba8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74ba90:L74ba90:{c.instructions+=12;NFSU2_TR(0x74ba90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ba91:{NFSU2_TR(0x74ba91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ba92:{NFSU2_TR(0x74ba92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ba93:{NFSU2_TR(0x74ba93);
__builtin_memmove((R+28),gp(0x7831b0),4);
}
B74ba99:{NFSU2_TR(0x74ba99);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ba9b:{NFSU2_TR(0x74ba9b);
u8 U[4];
w4(U+0,u32(0x8b7cc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74baa0:{NFSU2_TR(0x74baa0);
__builtin_memmove(gp(0x8b7e04),(R+24),4);
}
B74baa6:{NFSU2_TR(0x74baa6);
s4(0x819bd0,u32(0xffffffffull));
}
B74bab0:{NFSU2_TR(0x74bab0);
__builtin_memmove(gp(0x8b7cb8),(R+24),4);
}
B74bab6:{NFSU2_TR(0x74bab6);
__builtin_memmove(gp(0x8b7cbc),(R+24),4);
}
B74babc:{NFSU2_TR(0x74babc);
__builtin_memmove(gp(0x8b7cc0),(R+24),4);
}
B74bac2:{NFSU2_TR(0x74bac2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bac4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74bac4:L74bac4:{c.instructions+=5;NFSU2_TR(0x74bac4);
u8 U[4];
w4(U+0,u32(0x8b7decull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bac9:{NFSU2_TR(0x74bac9);
__builtin_memmove(gp(0x8b7de0),(R+24),4);
}
B74bacf:{NFSU2_TR(0x74bacf);
__builtin_memmove(gp(0x8b7de4),(R+24),4);
}
B74bad5:{NFSU2_TR(0x74bad5);
__builtin_memmove(gp(0x8b7de8),(R+24),4);
}
B74badb:{NFSU2_TR(0x74badb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74baddull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74badd:L74badd:{c.instructions+=9;NFSU2_TR(0x74badd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74bae1:{NFSU2_TR(0x74bae1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bae2:{NFSU2_TR(0x74bae2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bae3:{NFSU2_TR(0x74bae3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bae4:{NFSU2_TR(0x74bae4);
u8 U[4];
w4(U+0,u32(0x74ba50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bae9:{NFSU2_TR(0x74bae9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74baea:{NFSU2_TR(0x74baea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74baeb:{NFSU2_TR(0x74baeb);
s4(0x8b7e08,u32(0x1ull));
}
B74baf5:{NFSU2_TR(0x74baf5);
u8 U[4];
__builtin_memmove((U+0),gp(0x783248),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bafbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74bafb:L74bafb:{c.instructions+=5;NFSU2_TR(0x74bafb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74bafc:{NFSU2_TR(0x74bafc);
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
B74bafe:{NFSU2_TR(0x74bafe);
__builtin_memmove(gp(0x8b7e08),(R+0),4);
}
B74bb03:{NFSU2_TR(0x74bb03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74bb04:{NFSU2_TR(0x74bb04);
if(r1(R+518)){{goto L74bb1f;}}
}
B74bb06:L74bb06:{c.instructions+=4;NFSU2_TR(0x74bb06);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74bb0a:{NFSU2_TR(0x74bb0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bb0b:{NFSU2_TR(0x74bb0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bb0c:{NFSU2_TR(0x74bb0c);
u8 U[4];
__builtin_memmove((U+0),gp(0x783174),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bb12ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74bb12:L74bb12:{c.instructions+=3;NFSU2_TR(0x74bb12);
__builtin_memmove((R+8),gp(0x8b7e08),4);
}
B74bb18:{NFSU2_TR(0x74bb18);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bb19:{NFSU2_TR(0x74bb19);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bb1full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74bb1f:L74bb1f:{c.instructions+=2;NFSU2_TR(0x74bb1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74bb20:{NFSU2_TR(0x74bb20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74bb30:L74bb30:{c.instructions+=5;NFSU2_TR(0x74bb30);
__builtin_memmove((R+0),gp(0x819bd0),4);
}
B74bb35:{NFSU2_TR(0x74bb35);
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
B74bb37:{NFSU2_TR(0x74bb37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bb38:{NFSU2_TR(0x74bb38);
s4(0x8b7e08,u32(0x0ull));
}
B74bb42:{NFSU2_TR(0x74bb42);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74bb5d;}}
}
B74bb44:L74bb44:{c.instructions+=2;NFSU2_TR(0x74bb44);
__builtin_memmove((R+24),gp(0x783150),4);
}
B74bb4a:{NFSU2_TR(0x74bb4a);
__builtin_memmove((R+12),(R+12),4);
}
B74bb50:L74bb50:{c.instructions+=2;NFSU2_TR(0x74bb50);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bb52:{NFSU2_TR(0x74bb52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bb54ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74bb54:L74bb54:{c.instructions+=3;NFSU2_TR(0x74bb54);
__builtin_memmove((R+0),gp(0x819bd0),4);
}
B74bb59:{NFSU2_TR(0x74bb59);
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
B74bb5b:{NFSU2_TR(0x74bb5b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74bb50u);}goto L74bb50;}}
}
B74bb5d:L74bb5d:{c.instructions+=4;NFSU2_TR(0x74bb5d);
__builtin_memmove((R+24),gp(0x7831b8),4);
}
B74bb63:{NFSU2_TR(0x74bb63);
u8 U[4];
w4(U+0,u32(0x8b7cc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bb68:{NFSU2_TR(0x74bb68);
s4(0x8b7cc0,u32(0x0ull));
}
B74bb72:{NFSU2_TR(0x74bb72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bb74ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74bb74:L74bb74:{c.instructions+=3;NFSU2_TR(0x74bb74);
u8 U[4];
w4(U+0,u32(0x8b7decull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bb79:{NFSU2_TR(0x74bb79);
s4(0x8b7de8,u32(0x0ull));
}
B74bb83:{NFSU2_TR(0x74bb83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bb85ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74bb85:L74bb85:{c.instructions+=2;NFSU2_TR(0x74bb85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74bb86:{NFSU2_TR(0x74bb86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74bb90:L74bb90:{c.instructions+=5;NFSU2_TR(0x74bb90);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74bb94:{NFSU2_TR(0x74bb94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bb95:{NFSU2_TR(0x74bb95);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74bb99:{NFSU2_TR(0x74bb99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bb9a:{NFSU2_TR(0x74bb9a);
__builtin_memmove((R+12),(R+12),4);
}
B74bba0:L74bba0:{c.instructions+=5;NFSU2_TR(0x74bba0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B74bba3:{NFSU2_TR(0x74bba3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2d68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74bba9:{NFSU2_TR(0x74bba9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74bbaa:{NFSU2_TR(0x74bbaa);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74bbad:{NFSU2_TR(0x74bbad);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74bba0u);}goto L74bba0;}}
}
B74bbaf:L74bbaf:{c.instructions+=1;NFSU2_TR(0x74bbaf);
}
B74bbb0:L74bbb0:{c.instructions+=5;NFSU2_TR(0x74bbb0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B74bbb3:{NFSU2_TR(0x74bbb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d2d68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74bbb9:{NFSU2_TR(0x74bbb9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B74bbba:{NFSU2_TR(0x74bbba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74bbbc:{NFSU2_TR(0x74bbbc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74bbb0u);}goto L74bbb0;}}
}
B74bbbe:L74bbbe:{c.instructions+=4;NFSU2_TR(0x74bbbe);
w4(R+28,u32(r1(R+0)));
}
B74bbc1:{NFSU2_TR(0x74bbc1);
w4(R+0,u32(r1(R+4)));
}
B74bbc4:{NFSU2_TR(0x74bbc4);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74bbc6:{NFSU2_TR(0x74bbc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74bbce;}}
}
B74bbc8:L74bbc8:{c.instructions+=2;NFSU2_TR(0x74bbc8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74bbca:{NFSU2_TR(0x74bbca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74bba0u);}goto L74bba0;}}
}
B74bbcc:L74bbcc:{c.instructions+=1;NFSU2_TR(0x74bbcc);
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
B74bbce:L74bbce:{c.instructions+=3;NFSU2_TR(0x74bbce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74bbcf:{NFSU2_TR(0x74bbcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74bbd0:{NFSU2_TR(0x74bbd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74bbe0:L74bbe0:{c.instructions+=7;NFSU2_TR(0x74bbe0);
__builtin_memmove((R+0),gp(0x8b7e18),4);
}
B74bbe5:{NFSU2_TR(0x74bbe5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bbe6:{NFSU2_TR(0x74bbe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74bbea:{NFSU2_TR(0x74bbea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bbeb:{NFSU2_TR(0x74bbeb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74bbed:{NFSU2_TR(0x74bbed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74bbef:{NFSU2_TR(0x74bbef);
if(r1(R+518)){{goto L74bc1a;}}
}
B74bbf1:L74bbf1:{c.instructions+=1;NFSU2_TR(0x74bbf1);
w4(R+8,u32(0x8b7e18ull));
}
B74bbf6:L74bbf6:{c.instructions+=2;NFSU2_TR(0x74bbf6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74bbf8:{NFSU2_TR(0x74bbf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74bc0f;}}
}
B74bbfa:L74bbfa:{c.instructions+=3;NFSU2_TR(0x74bbfa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74bbfc:{NFSU2_TR(0x74bbfc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74bbfe:{NFSU2_TR(0x74bbfe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74bc0f;}}
}
B74bc00:L74bc00:{c.instructions+=1;NFSU2_TR(0x74bc00);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B74bc04:L74bc04:{c.instructions+=2;NFSU2_TR(0x74bc04);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+4))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B74bc08:{NFSU2_TR(0x74bc08);
if(r1(R+518)){{goto L74bc20;}}
}
B74bc0a:L74bc0a:{c.instructions+=3;NFSU2_TR(0x74bc0a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74bc0b:{NFSU2_TR(0x74bc0b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74bc0d:{NFSU2_TR(0x74bc0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74bc04u);}goto L74bc04;}}
}
B74bc0f:L74bc0f:{c.instructions+=5;NFSU2_TR(0x74bc0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74bc12:{NFSU2_TR(0x74bc12);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B74bc15:{NFSU2_TR(0x74bc15);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74bc16:{NFSU2_TR(0x74bc16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74bc18:{NFSU2_TR(0x74bc18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74bbf6u);}goto L74bbf6;}}
}
B74bc1a:L74bc1a:{c.instructions+=4;NFSU2_TR(0x74bc1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74bc1b:{NFSU2_TR(0x74bc1b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))^u32(r2(R+0))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B74bc1e:{NFSU2_TR(0x74bc1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74bc1f:{NFSU2_TR(0x74bc1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74bc20:L74bc20:{c.instructions+=9;NFSU2_TR(0x74bc20);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74bc24:{NFSU2_TR(0x74bc24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74bc28:{NFSU2_TR(0x74bc28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B74bc2b:{NFSU2_TR(0x74bc2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B74bc2e:{NFSU2_TR(0x74bc2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b7e20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74bc34:{NFSU2_TR(0x74bc34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bc35:{NFSU2_TR(0x74bc35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bc36:{NFSU2_TR(0x74bc36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bc37:{NFSU2_TR(0x74bc37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bc3cull));
TAIL_STATIC(0x741650u,741);
}
B74bc3c:L74bc3c:{c.instructions+=5;NFSU2_TR(0x74bc3c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b7e1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B74bc43:{NFSU2_TR(0x74bc43);
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
B74bc46:{NFSU2_TR(0x74bc46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74bc47:{NFSU2_TR(0x74bc47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74bc48:{NFSU2_TR(0x74bc48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74bc50:L74bc50:{c.instructions+=5;NFSU2_TR(0x74bc50);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74bc54:{NFSU2_TR(0x74bc54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bc56:{NFSU2_TR(0x74bc56);
u8 U[4];
w4(U+0,u32(0x7a1578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bc5b:{NFSU2_TR(0x74bc5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bc5c:{NFSU2_TR(0x74bc5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bc61ull));
TAIL_STATIC(0x7414a0u,741);
}
B74bc61:L74bc61:{c.instructions+=3;NFSU2_TR(0x74bc61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74bc64:{NFSU2_TR(0x74bc64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bc65:{NFSU2_TR(0x74bc65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bc6aull));
TAIL_STATIC(0x742100u,742);
}
B74bc6a:L74bc6a:{c.instructions+=7;NFSU2_TR(0x74bc6a);
__builtin_memmove((R+4),(R+0),4);
}
B74bc6c:{NFSU2_TR(0x74bc6c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x100000ull))));
}
B74bc71:{NFSU2_TR(0x74bc71);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74bc74:{NFSU2_TR(0x74bc74);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xc0000ull))));
}
B74bc7a:{NFSU2_TR(0x74bc7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74bc7d:{NFSU2_TR(0x74bc7d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74bc7f:{NFSU2_TR(0x74bc7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74bc80:L74bc80:{c.instructions+=5;NFSU2_TR(0x74bc80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bc81:{NFSU2_TR(0x74bc81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74bc85:{NFSU2_TR(0x74bc85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74bc8b:{NFSU2_TR(0x74bc8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74bc8d:{NFSU2_TR(0x74bc8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74bca7;}}
}
B74bc8f:L74bc8f:{c.instructions+=3;NFSU2_TR(0x74bc8f);
u8 U[4];
w4(U+0,u32(0x7d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bc94:{NFSU2_TR(0x74bc94);
u8 U[4];
w4(U+0,u32(0x3e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bc99:{NFSU2_TR(0x74bc99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bc9eull));
TAIL_STATIC(0x7551a0u,755);
}
B74bc9e:L74bc9e:{c.instructions+=2;NFSU2_TR(0x74bc9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74bca1:{NFSU2_TR(0x74bca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74bca7:L74bca7:{c.instructions+=3;NFSU2_TR(0x74bca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74bcad:{NFSU2_TR(0x74bcad);
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
B74bcaf:{NFSU2_TR(0x74bcaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74bcc5;}}
}
B74bcb1:L74bcb1:{c.instructions+=4;NFSU2_TR(0x74bcb1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bcb3:{NFSU2_TR(0x74bcb3);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bcb5:{NFSU2_TR(0x74bcb5);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bcb7:{NFSU2_TR(0x74bcb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bcbcull));
TAIL_STATIC(0x73d6d0u,73d);
}
B74bcbc:L74bcbc:{c.instructions+=2;NFSU2_TR(0x74bcbc);
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
B74bcbf:{NFSU2_TR(0x74bcbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74bcc5:L74bcc5:{c.instructions+=2;NFSU2_TR(0x74bcc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74bcc6:{NFSU2_TR(0x74bcc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74bcd0:L74bcd0:{c.instructions+=13;NFSU2_TR(0x74bcd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B74bcd3:{NFSU2_TR(0x74bcd3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74bcd8:{NFSU2_TR(0x74bcd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74bcdc:{NFSU2_TR(0x74bcdc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74bcde:{NFSU2_TR(0x74bcde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B74bce1:{NFSU2_TR(0x74bce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74bce5:{NFSU2_TR(0x74bce5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74bce9:{NFSU2_TR(0x74bce9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74bced:{NFSU2_TR(0x74bced);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74bcf1:{NFSU2_TR(0x74bcf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74bcf5:{NFSU2_TR(0x74bcf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74bcfb:{NFSU2_TR(0x74bcfb);
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
B74bcfd:{NFSU2_TR(0x74bcfd);
if(r1(R+518)){{goto L74bd5f;}}
}
B74bcff:L74bcff:{c.instructions+=2;NFSU2_TR(0x74bcff);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B74bd02:{NFSU2_TR(0x74bd02);
if(r1(R+518)){{goto L74bd5f;}}
}
B74bd04:L74bd04:{c.instructions+=3;NFSU2_TR(0x74bd04);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74bd0a:{NFSU2_TR(0x74bd0a);
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
B74bd0c:{NFSU2_TR(0x74bd0c);
if(r1(R+518)){{goto L74bd5f;}}
}
B74bd0e:L74bd0e:{c.instructions+=12;NFSU2_TR(0x74bd0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B74bd15:{NFSU2_TR(0x74bd15);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B74bd18:{NFSU2_TR(0x74bd18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd19:{NFSU2_TR(0x74bd19);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B74bd20:{NFSU2_TR(0x74bd20);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd21:{NFSU2_TR(0x74bd21);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B74bd28:{NFSU2_TR(0x74bd28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd29:{NFSU2_TR(0x74bd29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd2a:{NFSU2_TR(0x74bd2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74bd2e:{NFSU2_TR(0x74bd2e);
u8 U[4];
w4(U+0,u32(0x7d2f04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd33:{NFSU2_TR(0x74bd33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd34:{NFSU2_TR(0x74bd34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bd39ull));
TAIL_STATIC(0x75c784u,75c);
}
B74bd39:L74bd39:{c.instructions+=6;NFSU2_TR(0x74bd39);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd3b:{NFSU2_TR(0x74bd3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74bd3f:{NFSU2_TR(0x74bd3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd40:{NFSU2_TR(0x74bd40);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74bd44:{NFSU2_TR(0x74bd44);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd45:{NFSU2_TR(0x74bd45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bd4aull));
TAIL_STATIC(0x7424f0u,742);
}
B74bd4a:L74bd4a:{c.instructions+=4;NFSU2_TR(0x74bd4a);
u8 U[6];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B74bd4f:{NFSU2_TR(0x74bd4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B74bd52:{NFSU2_TR(0x74bd52);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74bd56:{NFSU2_TR(0x74bd56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bd5bull));
TAIL_STATIC(0x76115eu,761);
}
B74bd5b:L74bd5b:{c.instructions+=2;NFSU2_TR(0x74bd5b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74bd5e:{NFSU2_TR(0x74bd5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74bd5f:L74bd5f:{c.instructions+=3;NFSU2_TR(0x74bd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74bd62:{NFSU2_TR(0x74bd62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd63:{NFSU2_TR(0x74bd63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bd68ull));
TAIL_STATIC(0x754c40u,754);
}
B74bd68:L74bd68:{c.instructions+=3;NFSU2_TR(0x74bd68);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74bd6c:{NFSU2_TR(0x74bd6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74bd6f:{NFSU2_TR(0x74bd6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bd74ull));
TAIL_STATIC(0x76115eu,761);
}
B74bd74:L74bd74:{c.instructions+=2;NFSU2_TR(0x74bd74);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74bd77:{NFSU2_TR(0x74bd77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74bd80:L74bd80:{c.instructions+=3;NFSU2_TR(0x74bd80);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd82:{NFSU2_TR(0x74bd82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd83:{NFSU2_TR(0x74bd83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bd88ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74bd88:L74bd88:{c.instructions+=3;NFSU2_TR(0x74bd88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74bd8b:{NFSU2_TR(0x74bd8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74bd8d:{NFSU2_TR(0x74bd8d);
if(r1(R+518)){{goto L74bd92;}}
}
B74bd8f:L74bd8f:{c.instructions+=1;NFSU2_TR(0x74bd8f);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74bd92:L74bd92:{c.instructions+=3;NFSU2_TR(0x74bd92);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd94:{NFSU2_TR(0x74bd94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bd95:{NFSU2_TR(0x74bd95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bd9aull));
TAIL_STATIC(0x75cf10u,75c);
}
B74bd9a:L74bd9a:{c.instructions+=3;NFSU2_TR(0x74bd9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74bd9d:{NFSU2_TR(0x74bd9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74bd9f:{NFSU2_TR(0x74bd9f);
if(r1(R+518)){{goto L74bda4;}}
}
B74bda1:L74bda1:{c.instructions+=1;NFSU2_TR(0x74bda1);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74bda4:L74bda4:{c.instructions+=3;NFSU2_TR(0x74bda4);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bda6:{NFSU2_TR(0x74bda6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bda7:{NFSU2_TR(0x74bda7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bdacull));
TAIL_STATIC(0x75cf10u,75c);
}
B74bdac:L74bdac:{c.instructions+=3;NFSU2_TR(0x74bdac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74bdaf:{NFSU2_TR(0x74bdaf);
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
B74bdb1:{NFSU2_TR(0x74bdb1);
if(r1(R+518)){{goto L74bdb6;}}
}
B74bdb3:L74bdb3:{c.instructions+=1;NFSU2_TR(0x74bdb3);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74bdb6:L74bdb6:{c.instructions+=1;NFSU2_TR(0x74bdb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74bdc0:L74bdc0:{c.instructions+=12;NFSU2_TR(0x74bdc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B74bdc6:{NFSU2_TR(0x74bdc6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74bdcb:{NFSU2_TR(0x74bdcb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bdcc:{NFSU2_TR(0x74bdcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74bdd3:{NFSU2_TR(0x74bdd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bdd4:{NFSU2_TR(0x74bdd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74bddb:{NFSU2_TR(0x74bddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74bde2:{NFSU2_TR(0x74bde2);
u8 U[4];
w4(U+0,u32(0xfeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bde7:{NFSU2_TR(0x74bde7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bde8:{NFSU2_TR(0x74bde8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74bdec:{NFSU2_TR(0x74bdec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bded:{NFSU2_TR(0x74bded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bdf2ull));
TAIL_STATIC(0x75c840u,75c);
}
B74bdf2:L74bdf2:{c.instructions+=4;NFSU2_TR(0x74bdf2);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74bdf6:{NFSU2_TR(0x74bdf6);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bdf8:{NFSU2_TR(0x74bdf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bdf9:{NFSU2_TR(0x74bdf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bdfeull));
TAIL_STATIC(0x75cf10u,75c);
}
B74bdfe:L74bdfe:{c.instructions+=5;NFSU2_TR(0x74bdfe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74be01:{NFSU2_TR(0x74be01);
__builtin_memmove((R+24),(R+0),4);
}
B74be03:{NFSU2_TR(0x74be03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74be05:{NFSU2_TR(0x74be05);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be06:{NFSU2_TR(0x74be06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74be2e;}}
}
B74be08:L74be08:{c.instructions+=4;NFSU2_TR(0x74be08);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74be0c:{NFSU2_TR(0x74be0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be0d:{NFSU2_TR(0x74be0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be0e:{NFSU2_TR(0x74be0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74be13ull));
TAIL_STATIC(0x75c840u,75c);
}
B74be13:L74be13:{c.instructions+=6;NFSU2_TR(0x74be13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74be16:{NFSU2_TR(0x74be16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74be17:{NFSU2_TR(0x74be17);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B74be1a:{NFSU2_TR(0x74be1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74be1b:{NFSU2_TR(0x74be1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74be22:{NFSU2_TR(0x74be22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74be27ull));
TAIL_STATIC(0x76115eu,761);
}
B74be27:L74be27:{c.instructions+=2;NFSU2_TR(0x74be27);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74be2d:{NFSU2_TR(0x74be2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74be2e:L74be2e:{c.instructions+=5;NFSU2_TR(0x74be2e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74be32:{NFSU2_TR(0x74be32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be33:{NFSU2_TR(0x74be33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be34:{NFSU2_TR(0x74be34);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B74be37:{NFSU2_TR(0x74be37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74be3cull));
TAIL_STATIC(0x75c840u,75c);
}
B74be3c:L74be3c:{c.instructions+=5;NFSU2_TR(0x74be3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74be43:{NFSU2_TR(0x74be43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be44:{NFSU2_TR(0x74be44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be45:{NFSU2_TR(0x74be45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be46:{NFSU2_TR(0x74be46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74be4bull));
TAIL_STATIC(0x75c840u,75c);
}
B74be4b:L74be4b:{c.instructions+=5;NFSU2_TR(0x74be4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74be52:{NFSU2_TR(0x74be52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74be55:{NFSU2_TR(0x74be55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74be56:{NFSU2_TR(0x74be56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74be57:{NFSU2_TR(0x74be57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74be5cull));
TAIL_STATIC(0x76115eu,761);
}
B74be5c:L74be5c:{c.instructions+=2;NFSU2_TR(0x74be5c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74be62:{NFSU2_TR(0x74be62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74be70:L74be70:{c.instructions+=12;NFSU2_TR(0x74be70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa04ull))));
}
B74be76:{NFSU2_TR(0x74be76);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74be7b:{NFSU2_TR(0x74be7b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be7c:{NFSU2_TR(0x74be7c);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74be83:{NFSU2_TR(0x74be83);
u8 U[8];
w4(U+0,u32(u32(u32(0xa04ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74be8a:{NFSU2_TR(0x74be8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74be8d:{NFSU2_TR(0x74be8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be8e:{NFSU2_TR(0x74be8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be8f:{NFSU2_TR(0x74be8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74be96:{NFSU2_TR(0x74be96);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be9b:{NFSU2_TR(0x74be9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74be9c:{NFSU2_TR(0x74be9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bea1ull));
TAIL_STATIC(0x741650u,741);
}
B74bea1:L74bea1:{c.instructions+=9;NFSU2_TR(0x74bea1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74bea4:{NFSU2_TR(0x74bea4);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bea9:{NFSU2_TR(0x74bea9);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74beae:{NFSU2_TR(0x74beae);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74beb2:{NFSU2_TR(0x74beb2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74beb3:{NFSU2_TR(0x74beb3);
u8 U[4];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74beba:{NFSU2_TR(0x74beba);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bebf:{NFSU2_TR(0x74bebf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bec0:{NFSU2_TR(0x74bec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bec5ull));
TAIL_STATIC(0x7414a0u,741);
}
B74bec5:L74bec5:{c.instructions+=3;NFSU2_TR(0x74bec5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74bec8:{NFSU2_TR(0x74bec8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bec9:{NFSU2_TR(0x74bec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74beceull));
TAIL_STATIC(0x742360u,742);
}
B74bece:L74bece:{c.instructions+=4;NFSU2_TR(0x74bece);
u8 U[4];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74bed5:{NFSU2_TR(0x74bed5);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74beda:{NFSU2_TR(0x74beda);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bedb:{NFSU2_TR(0x74bedb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bee0ull));
TAIL_STATIC(0x7415d0u,741);
}
B74bee0:L74bee0:{c.instructions+=4;NFSU2_TR(0x74bee0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74bee4:{NFSU2_TR(0x74bee4);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bee6:{NFSU2_TR(0x74bee6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bee7:{NFSU2_TR(0x74bee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74beecull));
TAIL_STATIC(0x75cf10u,75c);
}
B74beec:L74beec:{c.instructions+=4;NFSU2_TR(0x74beec);
__builtin_memmove((R+24),(R+0),4);
}
B74beee:{NFSU2_TR(0x74beee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74bef1:{NFSU2_TR(0x74bef1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74bef3:{NFSU2_TR(0x74bef3);
if(r1(R+518)){{goto L74bff1;}}
}
B74bef9:L74bef9:{c.instructions+=3;NFSU2_TR(0x74bef9);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B74befc:{NFSU2_TR(0x74befc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74befe:{NFSU2_TR(0x74befe);
__builtin_memmove((R+28),(R+28),4);
}
B74bf00:L74bf00:{c.instructions+=5;NFSU2_TR(0x74bf00);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B74bf04:{NFSU2_TR(0x74bf04);
u8 U[13];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B74bf0b:{NFSU2_TR(0x74bf0b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74bf0c:{NFSU2_TR(0x74bf0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74bf0e:{NFSU2_TR(0x74bf0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74bf00u);}goto L74bf00;}}
}
B74bf10:L74bf10:{c.instructions+=4;NFSU2_TR(0x74bf10);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74bf17:{NFSU2_TR(0x74bf17);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf19:{NFSU2_TR(0x74bf19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf1a:{NFSU2_TR(0x74bf1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bf1full));
TAIL_STATIC(0x75cf10u,75c);
}
B74bf1f:L74bf1f:{c.instructions+=3;NFSU2_TR(0x74bf1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74bf22:{NFSU2_TR(0x74bf22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74bf24:{NFSU2_TR(0x74bf24);
if(r1(R+518)){{goto L74bf29;}}
}
B74bf26:L74bf26:{c.instructions+=1;NFSU2_TR(0x74bf26);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74bf29:L74bf29:{c.instructions+=7;NFSU2_TR(0x74bf29);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74bf30:{NFSU2_TR(0x74bf30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf31:{NFSU2_TR(0x74bf31);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf36:{NFSU2_TR(0x74bf36);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74bf3d:{NFSU2_TR(0x74bf3d);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf42:{NFSU2_TR(0x74bf42);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf43:{NFSU2_TR(0x74bf43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bf48ull));
TAIL_STATIC(0x741a50u,741);
}
B74bf48:L74bf48:{c.instructions+=6;NFSU2_TR(0x74bf48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74bf4b:{NFSU2_TR(0x74bf4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf4c:{NFSU2_TR(0x74bf4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74bf4f:{NFSU2_TR(0x74bf4f);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf51:{NFSU2_TR(0x74bf51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf52:{NFSU2_TR(0x74bf52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bf57ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74bf57:L74bf57:{c.instructions+=4;NFSU2_TR(0x74bf57);
__builtin_memmove((R+24),(R+0),4);
}
B74bf59:{NFSU2_TR(0x74bf59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74bf5c:{NFSU2_TR(0x74bf5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74bf5e:{NFSU2_TR(0x74bf5e);
if(r1(R+518)){{goto L74bf63;}}
}
B74bf60:L74bf60:{c.instructions+=1;NFSU2_TR(0x74bf60);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B74bf63:L74bf63:{c.instructions+=6;NFSU2_TR(0x74bf63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf64:{NFSU2_TR(0x74bf64);
u8 U[4];
w4(U+0,u32(0x7d2f18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf69:{NFSU2_TR(0x74bf69);
u8 U[4];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74bf70:{NFSU2_TR(0x74bf70);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf75:{NFSU2_TR(0x74bf75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf76:{NFSU2_TR(0x74bf76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bf7bull));
TAIL_STATIC(0x741a50u,741);
}
B74bf7b:L74bf7b:{c.instructions+=4;NFSU2_TR(0x74bf7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74bf7e:{NFSU2_TR(0x74bf7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74bf80:{NFSU2_TR(0x74bf80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74bf81:{NFSU2_TR(0x74bf81);
if(r1(R+518)){{goto L74bf9f;}}
}
B74bf83:L74bf83:{c.instructions+=7;NFSU2_TR(0x74bf83);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74bf84:{NFSU2_TR(0x74bf84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf85:{NFSU2_TR(0x74bf85);
u8 U[4];
w4(U+0,u32(0x7d2f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf8a:{NFSU2_TR(0x74bf8a);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf8f:{NFSU2_TR(0x74bf8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74bf96:{NFSU2_TR(0x74bf96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bf97:{NFSU2_TR(0x74bf97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bf9cull));
TAIL_STATIC(0x741a50u,741);
}
B74bf9c:L74bf9c:{c.instructions+=1;NFSU2_TR(0x74bf9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74bf9f:L74bf9f:{c.instructions+=7;NFSU2_TR(0x74bf9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x208ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74bfa6:{NFSU2_TR(0x74bfa6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bfa8:{NFSU2_TR(0x74bfa8);
__builtin_memmove((R+8),(R+4),4);
}
B74bfaa:{NFSU2_TR(0x74bfaa);
u8 U[4];
w4(U+0,u32(0x7a16b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bfaf:{NFSU2_TR(0x74bfaf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bfb0:{NFSU2_TR(0x74bfb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74bfb3:{NFSU2_TR(0x74bfb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bfb8ull));
TAIL_STATIC(0x7414a0u,741);
}
B74bfb8:L74bfb8:{c.instructions+=3;NFSU2_TR(0x74bfb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74bfbb:{NFSU2_TR(0x74bfbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bfbc:{NFSU2_TR(0x74bfbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bfc1ull));
TAIL_STATIC(0x7420b0u,742);
}
B74bfc1:L74bfc1:{c.instructions+=7;NFSU2_TR(0x74bfc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74bfc4:{NFSU2_TR(0x74bfc4);
u8 U[4];
w4(U+0,u32(0x63686174ull));
s4(u32(r4(R+12)),r4(U+0));
}
B74bfca:{NFSU2_TR(0x74bfca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74bfd0:{NFSU2_TR(0x74bfd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bfd1:{NFSU2_TR(0x74bfd1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bfd2:{NFSU2_TR(0x74bfd2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bfd3:{NFSU2_TR(0x74bfd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bfd9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74bfd9:L74bfd9:{c.instructions+=5;NFSU2_TR(0x74bfd9);
u8 U[8];
w4(U+0,u32(u32(u32(0xa1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74bfe0:{NFSU2_TR(0x74bfe0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74bfe3:{NFSU2_TR(0x74bfe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74bfe4:{NFSU2_TR(0x74bfe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74bfe5:{NFSU2_TR(0x74bfe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74bfeaull));
TAIL_STATIC(0x76115eu,761);
}
B74bfea:L74bfea:{c.instructions+=2;NFSU2_TR(0x74bfea);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa04ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa04ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa04ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74bff0:{NFSU2_TR(0x74bff0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74bff1:L74bff1:{c.instructions+=4;NFSU2_TR(0x74bff1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74bff5:{NFSU2_TR(0x74bff5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bff6:{NFSU2_TR(0x74bff6);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74bffb:{NFSU2_TR(0x74bffb);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x74c000u,74c);
}
XIT:NFSU2_TR_EXIT(0x74b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
