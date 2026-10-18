#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x69b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x69b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_69b(u8* __restrict R,Cpu& c);
u32 page_69b(Cpu& c){return body_69b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_69b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x69b003:goto L69b003;
case 0x69b006:c.instructions+=3;goto B69b006;
case 0x69b008:c.instructions+=2;goto B69b008;
case 0x69b00a:c.instructions+=1;goto B69b00a;
case 0x69b010:goto L69b010;
case 0x69b014:c.instructions+=1;goto B69b014;
case 0x69b016:goto L69b016;
case 0x69b01a:c.instructions+=1;goto B69b01a;
case 0x69b020:goto L69b020;
case 0x69b024:c.instructions+=1;goto B69b024;
case 0x69b026:goto L69b026;
case 0x69b029:c.instructions+=1;goto B69b029;
case 0x69b02b:goto L69b02b;
case 0x69b02f:c.instructions+=1;goto B69b02f;
case 0x69b035:goto L69b035;
case 0x69b037:c.instructions+=2;goto B69b037;
case 0x69b03a:c.instructions+=1;goto B69b03a;
case 0x69b040:goto L69b040;
case 0x69b043:c.instructions+=5;goto B69b043;
case 0x69b046:c.instructions+=4;goto B69b046;
case 0x69b049:c.instructions+=3;goto B69b049;
case 0x69b04c:c.instructions+=2;goto B69b04c;
case 0x69b04f:c.instructions+=1;goto B69b04f;
case 0x69b052:goto L69b052;
case 0x69b056:c.instructions+=5;goto B69b056;
case 0x69b059:c.instructions+=4;goto B69b059;
case 0x69b05c:c.instructions+=3;goto B69b05c;
case 0x69b05f:c.instructions+=2;goto B69b05f;
case 0x69b062:c.instructions+=1;goto B69b062;
case 0x69b064:goto L69b064;
case 0x69b067:c.instructions+=3;goto B69b067;
case 0x69b06a:c.instructions+=2;goto B69b06a;
case 0x69b06d:c.instructions+=1;goto B69b06d;
case 0x69b06f:goto L69b06f;
case 0x69b072:c.instructions+=6;goto B69b072;
case 0x69b075:c.instructions+=5;goto B69b075;
case 0x69b078:c.instructions+=4;goto B69b078;
case 0x69b07b:c.instructions+=3;goto B69b07b;
case 0x69b07e:c.instructions+=2;goto B69b07e;
case 0x69b081:c.instructions+=1;goto B69b081;
case 0x69b084:goto L69b084;
case 0x69b087:c.instructions+=7;goto B69b087;
case 0x69b08a:c.instructions+=6;goto B69b08a;
case 0x69b08d:c.instructions+=5;goto B69b08d;
case 0x69b090:c.instructions+=4;goto B69b090;
case 0x69b093:c.instructions+=3;goto B69b093;
case 0x69b096:c.instructions+=2;goto B69b096;
case 0x69b09a:c.instructions+=1;goto B69b09a;
case 0x69b09c:goto L69b09c;
case 0x69b09f:c.instructions+=2;goto B69b09f;
case 0x69b0a3:c.instructions+=1;goto B69b0a3;
case 0x69b0a5:goto L69b0a5;
case 0x69b0a8:c.instructions+=5;goto B69b0a8;
case 0x69b0aa:c.instructions+=4;goto B69b0aa;
case 0x69b0ac:c.instructions+=3;goto B69b0ac;
case 0x69b0ae:c.instructions+=2;goto B69b0ae;
case 0x69b0b1:c.instructions+=1;goto B69b0b1;
case 0x69b0b3:goto L69b0b3;
case 0x69b0b6:c.instructions+=4;goto B69b0b6;
case 0x69b0b9:c.instructions+=3;goto B69b0b9;
case 0x69b0bc:c.instructions+=2;goto B69b0bc;
case 0x69b0c0:c.instructions+=1;goto B69b0c0;
case 0x69b0c2:goto L69b0c2;
case 0x69b0c5:c.instructions+=2;goto B69b0c5;
case 0x69b0c9:c.instructions+=1;goto B69b0c9;
case 0x69b0cb:goto L69b0cb;
case 0x69b0ce:c.instructions+=5;goto B69b0ce;
case 0x69b0d0:c.instructions+=4;goto B69b0d0;
case 0x69b0d2:c.instructions+=3;goto B69b0d2;
case 0x69b0d4:c.instructions+=2;goto B69b0d4;
case 0x69b0d7:c.instructions+=1;goto B69b0d7;
case 0x69b0d9:goto L69b0d9;
case 0x69b0dc:c.instructions+=8;goto B69b0dc;
case 0x69b0df:c.instructions+=7;goto B69b0df;
case 0x69b0e2:c.instructions+=6;goto B69b0e2;
case 0x69b0e5:c.instructions+=5;goto B69b0e5;
case 0x69b0e8:c.instructions+=4;goto B69b0e8;
case 0x69b0eb:c.instructions+=3;goto B69b0eb;
case 0x69b0ee:c.instructions+=2;goto B69b0ee;
case 0x69b0f2:c.instructions+=1;goto B69b0f2;
case 0x69b0f5:goto L69b0f5;
case 0x69b0f8:c.instructions+=5;goto B69b0f8;
case 0x69b0fc:c.instructions+=4;goto B69b0fc;
case 0x69b0fd:c.instructions+=3;goto B69b0fd;
case 0x69b100:c.instructions+=2;goto B69b100;
case 0x69b103:c.instructions+=1;goto B69b103;
case 0x69b109:goto L69b109;
case 0x69b10c:c.instructions+=9;goto B69b10c;
case 0x69b10e:c.instructions+=8;goto B69b10e;
case 0x69b111:c.instructions+=7;goto B69b111;
case 0x69b114:c.instructions+=6;goto B69b114;
case 0x69b117:c.instructions+=5;goto B69b117;
case 0x69b11a:c.instructions+=4;goto B69b11a;
case 0x69b11d:c.instructions+=3;goto B69b11d;
case 0x69b11f:c.instructions+=2;goto B69b11f;
case 0x69b121:c.instructions+=1;goto B69b121;
case 0x69b124:goto L69b124;
case 0x69b126:goto L69b126;
case 0x69b128:c.instructions+=1;goto B69b128;
case 0x69b12b:goto L69b12b;
case 0x69b12d:goto L69b12d;
case 0x69b130:c.instructions+=4;goto B69b130;
case 0x69b132:c.instructions+=3;goto B69b132;
case 0x69b133:c.instructions+=2;goto B69b133;
case 0x69b135:c.instructions+=1;goto B69b135;
case 0x69b137:goto L69b137;
case 0x69b13c:c.instructions+=1;goto B69b13c;
case 0x69b13e:goto L69b13e;
case 0x69b140:c.instructions+=2;goto B69b140;
case 0x69b145:c.instructions+=1;goto B69b145;
case 0x69b14a:goto L69b14a;
case 0x69b14c:c.instructions+=9;goto B69b14c;
case 0x69b14f:c.instructions+=8;goto B69b14f;
case 0x69b152:c.instructions+=7;goto B69b152;
case 0x69b154:c.instructions+=6;goto B69b154;
case 0x69b157:c.instructions+=5;goto B69b157;
case 0x69b15a:c.instructions+=4;goto B69b15a;
case 0x69b15d:c.instructions+=3;goto B69b15d;
case 0x69b160:c.instructions+=2;goto B69b160;
case 0x69b163:c.instructions+=1;goto B69b163;
case 0x69b165:goto L69b165;
case 0x69b167:c.instructions+=2;goto B69b167;
case 0x69b169:c.instructions+=1;goto B69b169;
case 0x69b16e:goto L69b16e;
case 0x69b170:goto L69b170;
case 0x69b174:c.instructions+=1;goto B69b174;
case 0x69b176:goto L69b176;
case 0x69b17a:c.instructions+=1;goto B69b17a;
case 0x69b180:goto L69b180;
case 0x69b184:c.instructions+=1;goto B69b184;
case 0x69b18a:goto L69b18a;
case 0x69b18d:c.instructions+=4;goto B69b18d;
case 0x69b18f:c.instructions+=3;goto B69b18f;
case 0x69b191:c.instructions+=2;goto B69b191;
case 0x69b194:c.instructions+=1;goto B69b194;
case 0x69b19a:goto L69b19a;
case 0x69b19c:c.instructions+=2;goto B69b19c;
case 0x69b19f:c.instructions+=1;goto B69b19f;
case 0x69b1a2:goto L69b1a2;
case 0x69b1a6:c.instructions+=1;goto B69b1a6;
case 0x69b1a8:goto L69b1a8;
case 0x69b1ab:c.instructions+=6;goto B69b1ab;
case 0x69b1ae:c.instructions+=5;goto B69b1ae;
case 0x69b1b1:c.instructions+=4;goto B69b1b1;
case 0x69b1b4:c.instructions+=3;goto B69b1b4;
case 0x69b1b7:c.instructions+=2;goto B69b1b7;
case 0x69b1ba:c.instructions+=1;goto B69b1ba;
case 0x69b1bc:goto L69b1bc;
case 0x69b1bf:c.instructions+=9;goto B69b1bf;
case 0x69b1c2:c.instructions+=8;goto B69b1c2;
case 0x69b1c5:c.instructions+=7;goto B69b1c5;
case 0x69b1c8:c.instructions+=6;goto B69b1c8;
case 0x69b1cb:c.instructions+=5;goto B69b1cb;
case 0x69b1ce:c.instructions+=4;goto B69b1ce;
case 0x69b1d1:c.instructions+=3;goto B69b1d1;
case 0x69b1d4:c.instructions+=2;goto B69b1d4;
case 0x69b1d7:c.instructions+=1;goto B69b1d7;
case 0x69b1da:goto L69b1da;
case 0x69b1dd:c.instructions+=4;goto B69b1dd;
case 0x69b1e0:c.instructions+=3;goto B69b1e0;
case 0x69b1e3:c.instructions+=2;goto B69b1e3;
case 0x69b1e7:c.instructions+=1;goto B69b1e7;
case 0x69b1e9:goto L69b1e9;
case 0x69b1ed:c.instructions+=1;goto B69b1ed;
case 0x69b1ef:goto L69b1ef;
case 0x69b1f2:c.instructions+=5;goto B69b1f2;
case 0x69b1f8:c.instructions+=4;goto B69b1f8;
case 0x69b1fa:c.instructions+=3;goto B69b1fa;
case 0x69b1fc:c.instructions+=2;goto B69b1fc;
case 0x69b1ff:c.instructions+=1;goto B69b1ff;
case 0x69b201:goto L69b201;
case 0x69b204:c.instructions+=3;goto B69b204;
case 0x69b207:c.instructions+=2;goto B69b207;
case 0x69b20b:c.instructions+=1;goto B69b20b;
case 0x69b20d:goto L69b20d;
case 0x69b211:c.instructions+=1;goto B69b211;
case 0x69b213:goto L69b213;
case 0x69b216:c.instructions+=5;goto B69b216;
case 0x69b21c:c.instructions+=4;goto B69b21c;
case 0x69b21e:c.instructions+=3;goto B69b21e;
case 0x69b220:c.instructions+=2;goto B69b220;
case 0x69b223:c.instructions+=1;goto B69b223;
case 0x69b225:goto L69b225;
case 0x69b228:c.instructions+=7;goto B69b228;
case 0x69b22b:c.instructions+=6;goto B69b22b;
case 0x69b22c:c.instructions+=5;goto B69b22c;
case 0x69b22f:c.instructions+=4;goto B69b22f;
case 0x69b232:c.instructions+=3;goto B69b232;
case 0x69b235:c.instructions+=2;goto B69b235;
case 0x69b238:c.instructions+=1;goto B69b238;
case 0x69b23e:goto L69b23e;
case 0x69b241:c.instructions+=2;goto B69b241;
case 0x69b244:c.instructions+=1;goto B69b244;
case 0x69b24a:goto L69b24a;
case 0x69b24c:c.instructions+=3;goto B69b24c;
case 0x69b24e:c.instructions+=2;goto B69b24e;
case 0x69b251:c.instructions+=1;goto B69b251;
case 0x69b253:goto L69b253;
case 0x69b256:c.instructions+=1;goto B69b256;
case 0x69b259:goto L69b259;
case 0x69b25d:c.instructions+=3;goto B69b25d;
case 0x69b260:c.instructions+=2;goto B69b260;
case 0x69b263:c.instructions+=1;goto B69b263;
case 0x69b265:goto L69b265;
case 0x69b267:c.instructions+=3;goto B69b267;
case 0x69b26a:c.instructions+=2;goto B69b26a;
case 0x69b26d:c.instructions+=1;goto B69b26d;
case 0x69b26f:goto L69b26f;
case 0x69b272:c.instructions+=4;goto B69b272;
case 0x69b274:c.instructions+=3;goto B69b274;
case 0x69b277:c.instructions+=2;goto B69b277;
case 0x69b27a:c.instructions+=1;goto B69b27a;
case 0x69b27d:goto L69b27d;
case 0x69b280:c.instructions+=5;goto B69b280;
case 0x69b283:c.instructions+=4;goto B69b283;
case 0x69b286:c.instructions+=3;goto B69b286;
case 0x69b289:c.instructions+=2;goto B69b289;
case 0x69b28d:c.instructions+=1;goto B69b28d;
case 0x69b28f:goto L69b28f;
case 0x69b292:c.instructions+=2;goto B69b292;
case 0x69b296:c.instructions+=1;goto B69b296;
case 0x69b298:goto L69b298;
case 0x69b29b:c.instructions+=5;goto B69b29b;
case 0x69b2a1:c.instructions+=4;goto B69b2a1;
case 0x69b2a3:c.instructions+=3;goto B69b2a3;
case 0x69b2a5:c.instructions+=2;goto B69b2a5;
case 0x69b2a8:c.instructions+=1;goto B69b2a8;
case 0x69b2aa:goto L69b2aa;
case 0x69b2ad:c.instructions+=2;goto B69b2ad;
case 0x69b2b0:c.instructions+=1;goto B69b2b0;
case 0x69b2b2:goto L69b2b2;
case 0x69b2b5:c.instructions+=5;goto B69b2b5;
case 0x69b2b9:c.instructions+=4;goto B69b2b9;
case 0x69b2ba:c.instructions+=3;goto B69b2ba;
case 0x69b2bd:c.instructions+=2;goto B69b2bd;
case 0x69b2c0:c.instructions+=1;goto B69b2c0;
case 0x69b2c2:goto L69b2c2;
case 0x69b2c4:c.instructions+=3;goto B69b2c4;
case 0x69b2c5:c.instructions+=2;goto B69b2c5;
case 0x69b2c8:c.instructions+=1;goto B69b2c8;
case 0x69b2ca:goto L69b2ca;
case 0x69b2d0:c.instructions+=2;goto B69b2d0;
case 0x69b2d3:c.instructions+=1;goto B69b2d3;
case 0x69b2d5:goto L69b2d5;
case 0x69b2db:c.instructions+=1;goto B69b2db;
case 0x69b2e2:goto L69b2e2;
case 0x69b2e9:goto L69b2e9;
case 0x69b2eb:c.instructions+=3;goto B69b2eb;
case 0x69b2ee:c.instructions+=2;goto B69b2ee;
case 0x69b2f1:c.instructions+=1;goto B69b2f1;
case 0x69b2f3:goto L69b2f3;
case 0x69b2f5:c.instructions+=1;goto B69b2f5;
case 0x69b2f6:goto L69b2f6;
case 0x69b2f7:c.instructions+=4;goto B69b2f7;
case 0x69b2f8:c.instructions+=3;goto B69b2f8;
case 0x69b2f9:c.instructions+=2;goto B69b2f9;
case 0x69b2fa:c.instructions+=1;goto B69b2fa;
case 0x69b2fd:goto L69b2fd;
case 0x69b2ff:c.instructions+=7;goto B69b2ff;
case 0x69b300:c.instructions+=6;goto B69b300;
case 0x69b302:c.instructions+=5;goto B69b302;
case 0x69b305:c.instructions+=4;goto B69b305;
case 0x69b308:c.instructions+=3;goto B69b308;
case 0x69b309:c.instructions+=2;goto B69b309;
case 0x69b30b:c.instructions+=1;goto B69b30b;
case 0x69b30d:goto L69b30d;
case 0x69b30f:c.instructions+=2;goto B69b30f;
case 0x69b310:c.instructions+=1;goto B69b310;
case 0x69b315:goto L69b315;
case 0x69b318:c.instructions+=7;goto B69b318;
case 0x69b31b:c.instructions+=6;goto B69b31b;
case 0x69b31e:c.instructions+=5;goto B69b31e;
case 0x69b31f:c.instructions+=4;goto B69b31f;
case 0x69b322:c.instructions+=3;goto B69b322;
case 0x69b325:c.instructions+=2;goto B69b325;
case 0x69b329:c.instructions+=1;goto B69b329;
case 0x69b32b:goto L69b32b;
case 0x69b32d:c.instructions+=1;goto B69b32d;
case 0x69b332:goto L69b332;
case 0x69b335:c.instructions+=7;goto B69b335;
case 0x69b338:c.instructions+=6;goto B69b338;
case 0x69b33b:c.instructions+=5;goto B69b33b;
case 0x69b33d:c.instructions+=4;goto B69b33d;
case 0x69b342:c.instructions+=3;goto B69b342;
case 0x69b347:c.instructions+=2;goto B69b347;
case 0x69b348:c.instructions+=1;goto B69b348;
case 0x69b34a:goto L69b34a;
case 0x69b34d:c.instructions+=3;goto B69b34d;
case 0x69b34f:c.instructions+=2;goto B69b34f;
case 0x69b351:c.instructions+=1;goto B69b351;
case 0x69b353:goto L69b353;
case 0x69b356:goto L69b356;
case 0x69b358:c.instructions+=1;goto B69b358;
case 0x69b35a:goto L69b35a;
case 0x69b35b:c.instructions+=3;goto B69b35b;
case 0x69b35e:c.instructions+=2;goto B69b35e;
case 0x69b360:c.instructions+=1;goto B69b360;
case 0x69b362:goto L69b362;
case 0x69b365:c.instructions+=4;goto B69b365;
case 0x69b368:c.instructions+=3;goto B69b368;
case 0x69b36a:c.instructions+=2;goto B69b36a;
case 0x69b36d:c.instructions+=1;goto B69b36d;
case 0x69b372:goto L69b372;
case 0x69b374:c.instructions+=1;goto B69b374;
case 0x69b376:goto L69b376;
case 0x69b378:c.instructions+=2;goto B69b378;
case 0x69b379:c.instructions+=1;goto B69b379;
case 0x69b37b:goto L69b37b;
case 0x69b37e:goto L69b37e;
case 0x69b380:c.instructions+=3;goto B69b380;
case 0x69b385:c.instructions+=2;goto B69b385;
case 0x69b38a:c.instructions+=1;goto B69b38a;
case 0x69b38c:goto L69b38c;
case 0x69b38f:c.instructions+=3;goto B69b38f;
case 0x69b391:c.instructions+=2;goto B69b391;
case 0x69b393:c.instructions+=1;goto B69b393;
case 0x69b395:goto L69b395;
case 0x69b398:goto L69b398;
case 0x69b39a:c.instructions+=1;goto B69b39a;
case 0x69b39c:goto L69b39c;
case 0x69b39d:c.instructions+=3;goto B69b39d;
case 0x69b3a0:c.instructions+=2;goto B69b3a0;
case 0x69b3a2:c.instructions+=1;goto B69b3a2;
case 0x69b3a4:goto L69b3a4;
case 0x69b3a7:c.instructions+=4;goto B69b3a7;
case 0x69b3aa:c.instructions+=3;goto B69b3aa;
case 0x69b3ac:c.instructions+=2;goto B69b3ac;
case 0x69b3af:c.instructions+=1;goto B69b3af;
case 0x69b3b4:goto L69b3b4;
case 0x69b3b6:c.instructions+=1;goto B69b3b6;
case 0x69b3b8:goto L69b3b8;
case 0x69b3bb:c.instructions+=6;goto B69b3bb;
case 0x69b3be:c.instructions+=5;goto B69b3be;
case 0x69b3c0:c.instructions+=4;goto B69b3c0;
case 0x69b3c3:c.instructions+=3;goto B69b3c3;
case 0x69b3c5:c.instructions+=2;goto B69b3c5;
case 0x69b3c8:c.instructions+=1;goto B69b3c8;
case 0x69b3cd:goto L69b3cd;
case 0x69b3cf:c.instructions+=1;goto B69b3cf;
case 0x69b3d1:goto L69b3d1;
case 0x69b3d3:goto L69b3d3;
case 0x69b3d4:goto L69b3d4;
case 0x69b3d5:goto L69b3d5;
case 0x69b3d6:c.instructions+=2;goto B69b3d6;
case 0x69b3d7:c.instructions+=1;goto B69b3d7;
case 0x69b3da:goto L69b3da;
case 0x69b3dc:c.instructions+=13;goto B69b3dc;
case 0x69b3dd:c.instructions+=12;goto B69b3dd;
case 0x69b3df:c.instructions+=11;goto B69b3df;
case 0x69b3e2:c.instructions+=10;goto B69b3e2;
case 0x69b3e3:c.instructions+=9;goto B69b3e3;
case 0x69b3e6:c.instructions+=8;goto B69b3e6;
case 0x69b3e7:c.instructions+=7;goto B69b3e7;
case 0x69b3e9:c.instructions+=6;goto B69b3e9;
case 0x69b3ec:c.instructions+=5;goto B69b3ec;
case 0x69b3ef:c.instructions+=4;goto B69b3ef;
case 0x69b3f2:c.instructions+=3;goto B69b3f2;
case 0x69b3f4:c.instructions+=2;goto B69b3f4;
case 0x69b3f7:c.instructions+=1;goto B69b3f7;
case 0x69b3f9:goto L69b3f9;
case 0x69b3fc:c.instructions+=1;goto B69b3fc;
case 0x69b3fe:goto L69b3fe;
case 0x69b401:c.instructions+=1;goto B69b401;
case 0x69b406:goto L69b406;
case 0x69b409:c.instructions+=2;goto B69b409;
case 0x69b40c:c.instructions+=1;goto B69b40c;
case 0x69b40e:goto L69b40e;
case 0x69b411:c.instructions+=2;goto B69b411;
case 0x69b414:c.instructions+=1;goto B69b414;
case 0x69b416:goto L69b416;
case 0x69b41a:c.instructions+=1;goto B69b41a;
case 0x69b41c:goto L69b41c;
case 0x69b41f:c.instructions+=4;goto B69b41f;
case 0x69b422:c.instructions+=3;goto B69b422;
case 0x69b425:c.instructions+=2;goto B69b425;
case 0x69b429:c.instructions+=1;goto B69b429;
case 0x69b42b:goto L69b42b;
case 0x69b42e:c.instructions+=7;goto B69b42e;
case 0x69b431:c.instructions+=6;goto B69b431;
case 0x69b434:c.instructions+=5;goto B69b434;
case 0x69b437:c.instructions+=4;goto B69b437;
case 0x69b439:c.instructions+=3;goto B69b439;
case 0x69b43b:c.instructions+=2;goto B69b43b;
case 0x69b43c:c.instructions+=1;goto B69b43c;
case 0x69b43e:goto L69b43e;
case 0x69b441:goto L69b441;
case 0x69b443:c.instructions+=1;goto B69b443;
case 0x69b445:goto L69b445;
case 0x69b446:c.instructions+=3;goto B69b446;
case 0x69b449:c.instructions+=2;goto B69b449;
case 0x69b44b:c.instructions+=1;goto B69b44b;
case 0x69b44d:goto L69b44d;
case 0x69b44f:c.instructions+=1;goto B69b44f;
case 0x69b455:goto L69b455;
case 0x69b457:c.instructions+=3;goto B69b457;
case 0x69b45d:c.instructions+=2;goto B69b45d;
case 0x69b463:c.instructions+=1;goto B69b463;
case 0x69b465:goto L69b465;
case 0x69b469:c.instructions+=8;goto B69b469;
case 0x69b46c:c.instructions+=7;goto B69b46c;
case 0x69b46f:c.instructions+=6;goto B69b46f;
case 0x69b470:c.instructions+=5;goto B69b470;
case 0x69b473:c.instructions+=4;goto B69b473;
case 0x69b474:c.instructions+=3;goto B69b474;
case 0x69b477:c.instructions+=2;goto B69b477;
case 0x69b479:c.instructions+=1;goto B69b479;
case 0x69b47e:goto L69b47e;
case 0x69b480:c.instructions+=1;goto B69b480;
case 0x69b486:goto L69b486;
case 0x69b48b:goto L69b48b;
case 0x69b491:c.instructions+=1;goto B69b491;
case 0x69b493:goto L69b493;
case 0x69b497:c.instructions+=8;goto B69b497;
case 0x69b49a:c.instructions+=7;goto B69b49a;
case 0x69b49d:c.instructions+=6;goto B69b49d;
case 0x69b49e:c.instructions+=5;goto B69b49e;
case 0x69b4a1:c.instructions+=4;goto B69b4a1;
case 0x69b4a2:c.instructions+=3;goto B69b4a2;
case 0x69b4a5:c.instructions+=2;goto B69b4a5;
case 0x69b4a7:c.instructions+=1;goto B69b4a7;
case 0x69b4ac:goto L69b4ac;
case 0x69b4ae:c.instructions+=1;goto B69b4ae;
case 0x69b4b4:goto L69b4b4;
case 0x69b4b7:c.instructions+=2;goto B69b4b7;
case 0x69b4b9:c.instructions+=1;goto B69b4b9;
case 0x69b4be:goto L69b4be;
case 0x69b4c4:c.instructions+=1;goto B69b4c4;
case 0x69b4ca:goto L69b4ca;
case 0x69b4cd:c.instructions+=7;goto B69b4cd;
case 0x69b4d0:c.instructions+=6;goto B69b4d0;
case 0x69b4d2:c.instructions+=5;goto B69b4d2;
case 0x69b4d5:c.instructions+=4;goto B69b4d5;
case 0x69b4d9:c.instructions+=3;goto B69b4d9;
case 0x69b4db:c.instructions+=2;goto B69b4db;
case 0x69b4dd:c.instructions+=1;goto B69b4dd;
case 0x69b4df:goto L69b4df;
case 0x69b4e2:c.instructions+=5;goto B69b4e2;
case 0x69b4e3:c.instructions+=4;goto B69b4e3;
case 0x69b4e6:c.instructions+=3;goto B69b4e6;
case 0x69b4e7:c.instructions+=2;goto B69b4e7;
case 0x69b4e8:c.instructions+=1;goto B69b4e8;
case 0x69b4ed:goto L69b4ed;
case 0x69b4ef:c.instructions+=1;goto B69b4ef;
case 0x69b4f5:goto L69b4f5;
case 0x69b4f8:c.instructions+=2;goto B69b4f8;
case 0x69b4fa:c.instructions+=1;goto B69b4fa;
case 0x69b4ff:goto L69b4ff;
case 0x69b502:c.instructions+=5;goto B69b502;
case 0x69b503:c.instructions+=4;goto B69b503;
case 0x69b506:c.instructions+=3;goto B69b506;
case 0x69b507:c.instructions+=2;goto B69b507;
case 0x69b508:c.instructions+=1;goto B69b508;
case 0x69b50d:goto L69b50d;
case 0x69b50f:c.instructions+=1;goto B69b50f;
case 0x69b511:goto L69b511;
case 0x69b514:c.instructions+=6;goto B69b514;
case 0x69b515:c.instructions+=5;goto B69b515;
case 0x69b518:c.instructions+=4;goto B69b518;
case 0x69b519:c.instructions+=3;goto B69b519;
case 0x69b51a:c.instructions+=2;goto B69b51a;
case 0x69b51c:c.instructions+=1;goto B69b51c;
case 0x69b521:goto L69b521;
case 0x69b523:c.instructions+=1;goto B69b523;
case 0x69b525:goto L69b525;
case 0x69b529:c.instructions+=7;goto B69b529;
case 0x69b52c:c.instructions+=6;goto B69b52c;
case 0x69b52d:c.instructions+=5;goto B69b52d;
case 0x69b530:c.instructions+=4;goto B69b530;
case 0x69b531:c.instructions+=3;goto B69b531;
case 0x69b532:c.instructions+=2;goto B69b532;
case 0x69b534:c.instructions+=1;goto B69b534;
case 0x69b539:goto L69b539;
case 0x69b53b:c.instructions+=1;goto B69b53b;
case 0x69b541:goto L69b541;
case 0x69b544:c.instructions+=6;goto B69b544;
case 0x69b545:c.instructions+=5;goto B69b545;
case 0x69b548:c.instructions+=4;goto B69b548;
case 0x69b549:c.instructions+=3;goto B69b549;
case 0x69b54a:c.instructions+=2;goto B69b54a;
case 0x69b54c:c.instructions+=1;goto B69b54c;
case 0x69b551:goto L69b551;
case 0x69b553:c.instructions+=1;goto B69b553;
case 0x69b559:goto L69b559;
case 0x69b55c:c.instructions+=2;goto B69b55c;
case 0x69b55f:c.instructions+=1;goto B69b55f;
case 0x69b564:goto L69b564;
case 0x69b56a:c.instructions+=1;goto B69b56a;
case 0x69b570:goto L69b570;
case 0x69b573:c.instructions+=7;goto B69b573;
case 0x69b576:c.instructions+=6;goto B69b576;
case 0x69b578:c.instructions+=5;goto B69b578;
case 0x69b57b:c.instructions+=4;goto B69b57b;
case 0x69b57d:c.instructions+=3;goto B69b57d;
case 0x69b580:c.instructions+=2;goto B69b580;
case 0x69b583:c.instructions+=1;goto B69b583;
case 0x69b589:goto L69b589;
case 0x69b58c:c.instructions+=9;goto B69b58c;
case 0x69b58f:c.instructions+=8;goto B69b58f;
case 0x69b591:c.instructions+=7;goto B69b591;
case 0x69b594:c.instructions+=6;goto B69b594;
case 0x69b597:c.instructions+=5;goto B69b597;
case 0x69b59a:c.instructions+=4;goto B69b59a;
case 0x69b59d:c.instructions+=3;goto B69b59d;
case 0x69b5a2:c.instructions+=2;goto B69b5a2;
case 0x69b5a5:c.instructions+=1;goto B69b5a5;
case 0x69b5a7:goto L69b5a7;
case 0x69b5ab:c.instructions+=1;goto B69b5ab;
case 0x69b5ad:goto L69b5ad;
case 0x69b5b1:c.instructions+=7;goto B69b5b1;
case 0x69b5b4:c.instructions+=6;goto B69b5b4;
case 0x69b5b5:c.instructions+=5;goto B69b5b5;
case 0x69b5b8:c.instructions+=4;goto B69b5b8;
case 0x69b5b9:c.instructions+=3;goto B69b5b9;
case 0x69b5bc:c.instructions+=2;goto B69b5bc;
case 0x69b5be:c.instructions+=1;goto B69b5be;
case 0x69b5c3:goto L69b5c3;
case 0x69b5c5:c.instructions+=1;goto B69b5c5;
case 0x69b5c7:goto L69b5c7;
case 0x69b5ca:c.instructions+=2;goto B69b5ca;
case 0x69b5cd:c.instructions+=1;goto B69b5cd;
case 0x69b5cf:goto L69b5cf;
case 0x69b5d2:goto L69b5d2;
case 0x69b5d5:c.instructions+=9;goto B69b5d5;
case 0x69b5d8:c.instructions+=8;goto B69b5d8;
case 0x69b5db:c.instructions+=7;goto B69b5db;
case 0x69b5de:c.instructions+=6;goto B69b5de;
case 0x69b5e1:c.instructions+=5;goto B69b5e1;
case 0x69b5e4:c.instructions+=4;goto B69b5e4;
case 0x69b5e7:c.instructions+=3;goto B69b5e7;
case 0x69b5ea:c.instructions+=2;goto B69b5ea;
case 0x69b5ed:c.instructions+=1;goto B69b5ed;
case 0x69b5ef:goto L69b5ef;
case 0x69b5f3:c.instructions+=1;goto B69b5f3;
case 0x69b5f5:goto L69b5f5;
case 0x69b5f9:c.instructions+=7;goto B69b5f9;
case 0x69b5fc:c.instructions+=6;goto B69b5fc;
case 0x69b5fd:c.instructions+=5;goto B69b5fd;
case 0x69b600:c.instructions+=4;goto B69b600;
case 0x69b601:c.instructions+=3;goto B69b601;
case 0x69b602:c.instructions+=2;goto B69b602;
case 0x69b604:c.instructions+=1;goto B69b604;
case 0x69b609:goto L69b609;
case 0x69b60b:c.instructions+=1;goto B69b60b;
case 0x69b60d:goto L69b60d;
case 0x69b610:c.instructions+=2;goto B69b610;
case 0x69b613:c.instructions+=1;goto B69b613;
case 0x69b616:goto L69b616;
case 0x69b619:c.instructions+=2;goto B69b619;
case 0x69b61c:c.instructions+=1;goto B69b61c;
case 0x69b61e:goto L69b61e;
case 0x69b621:goto L69b621;
case 0x69b623:c.instructions+=1;goto B69b623;
case 0x69b626:goto L69b626;
case 0x69b629:goto L69b629;
case 0x69b62a:goto L69b62a;
case 0x69b62d:c.instructions+=5;goto B69b62d;
case 0x69b62f:c.instructions+=4;goto B69b62f;
case 0x69b632:c.instructions+=3;goto B69b632;
case 0x69b633:c.instructions+=2;goto B69b633;
case 0x69b634:c.instructions+=1;goto B69b634;
case 0x69b636:goto L69b636;
case 0x69b639:c.instructions+=1;goto B69b639;
case 0x69b63b:goto L69b63b;
case 0x69b640:c.instructions+=1;goto B69b640;
case 0x69b642:goto L69b642;
case 0x69b645:c.instructions+=10;goto B69b645;
case 0x69b648:c.instructions+=9;goto B69b648;
case 0x69b64b:c.instructions+=8;goto B69b64b;
case 0x69b64e:c.instructions+=7;goto B69b64e;
case 0x69b651:c.instructions+=6;goto B69b651;
case 0x69b653:c.instructions+=5;goto B69b653;
case 0x69b656:c.instructions+=4;goto B69b656;
case 0x69b659:c.instructions+=3;goto B69b659;
case 0x69b65c:c.instructions+=2;goto B69b65c;
case 0x69b65e:c.instructions+=1;goto B69b65e;
case 0x69b660:goto L69b660;
case 0x69b661:c.instructions+=1;goto B69b661;
case 0x69b664:goto L69b664;
case 0x69b666:c.instructions+=12;goto B69b666;
case 0x69b667:c.instructions+=11;goto B69b667;
case 0x69b669:c.instructions+=10;goto B69b669;
case 0x69b66c:c.instructions+=9;goto B69b66c;
case 0x69b66d:c.instructions+=8;goto B69b66d;
case 0x69b670:c.instructions+=7;goto B69b670;
case 0x69b671:c.instructions+=6;goto B69b671;
case 0x69b673:c.instructions+=5;goto B69b673;
case 0x69b676:c.instructions+=4;goto B69b676;
case 0x69b679:c.instructions+=3;goto B69b679;
case 0x69b67d:c.instructions+=2;goto B69b67d;
case 0x69b680:c.instructions+=1;goto B69b680;
case 0x69b682:goto L69b682;
case 0x69b685:c.instructions+=1;goto B69b685;
case 0x69b687:goto L69b687;
case 0x69b68a:c.instructions+=4;goto B69b68a;
case 0x69b68d:c.instructions+=3;goto B69b68d;
case 0x69b690:c.instructions+=2;goto B69b690;
case 0x69b694:c.instructions+=1;goto B69b694;
case 0x69b696:goto L69b696;
case 0x69b69b:c.instructions+=1;goto B69b69b;
case 0x69b6a0:goto L69b6a0;
case 0x69b6a3:c.instructions+=7;goto B69b6a3;
case 0x69b6a6:c.instructions+=6;goto B69b6a6;
case 0x69b6a9:c.instructions+=5;goto B69b6a9;
case 0x69b6ac:c.instructions+=4;goto B69b6ac;
case 0x69b6ae:c.instructions+=3;goto B69b6ae;
case 0x69b6b0:c.instructions+=2;goto B69b6b0;
case 0x69b6b1:c.instructions+=1;goto B69b6b1;
case 0x69b6b3:goto L69b6b3;
case 0x69b6b6:goto L69b6b6;
case 0x69b6b8:c.instructions+=1;goto B69b6b8;
case 0x69b6ba:goto L69b6ba;
case 0x69b6bb:c.instructions+=3;goto B69b6bb;
case 0x69b6be:c.instructions+=2;goto B69b6be;
case 0x69b6c0:c.instructions+=1;goto B69b6c0;
case 0x69b6c2:goto L69b6c2;
case 0x69b6c4:c.instructions+=1;goto B69b6c4;
case 0x69b6ca:goto L69b6ca;
case 0x69b6cc:c.instructions+=3;goto B69b6cc;
case 0x69b6d2:c.instructions+=2;goto B69b6d2;
case 0x69b6d8:c.instructions+=1;goto B69b6d8;
case 0x69b6da:goto L69b6da;
case 0x69b6dd:c.instructions+=7;goto B69b6dd;
case 0x69b6e0:c.instructions+=6;goto B69b6e0;
case 0x69b6e3:c.instructions+=5;goto B69b6e3;
case 0x69b6e6:c.instructions+=4;goto B69b6e6;
case 0x69b6e9:c.instructions+=3;goto B69b6e9;
case 0x69b6ec:c.instructions+=2;goto B69b6ec;
case 0x69b6ef:c.instructions+=1;goto B69b6ef;
case 0x69b6f1:goto L69b6f1;
case 0x69b6f7:c.instructions+=1;goto B69b6f7;
case 0x69b6f9:goto L69b6f9;
case 0x69b6fc:c.instructions+=11;goto B69b6fc;
case 0x69b6ff:c.instructions+=10;goto B69b6ff;
case 0x69b702:c.instructions+=9;goto B69b702;
case 0x69b705:c.instructions+=8;goto B69b705;
case 0x69b708:c.instructions+=7;goto B69b708;
case 0x69b70a:c.instructions+=6;goto B69b70a;
case 0x69b70d:c.instructions+=5;goto B69b70d;
case 0x69b710:c.instructions+=4;goto B69b710;
case 0x69b713:c.instructions+=3;goto B69b713;
case 0x69b715:c.instructions+=2;goto B69b715;
case 0x69b716:c.instructions+=1;goto B69b716;
case 0x69b71b:goto L69b71b;
case 0x69b71d:c.instructions+=1;goto B69b71d;
case 0x69b723:goto L69b723;
case 0x69b725:c.instructions+=1;goto B69b725;
case 0x69b72b:goto L69b72b;
case 0x69b72e:c.instructions+=5;goto B69b72e;
case 0x69b731:c.instructions+=4;goto B69b731;
case 0x69b734:c.instructions+=3;goto B69b734;
case 0x69b737:c.instructions+=2;goto B69b737;
case 0x69b73a:c.instructions+=1;goto B69b73a;
case 0x69b73b:goto L69b73b;
case 0x69b73d:c.instructions+=1;goto B69b73d;
case 0x69b742:goto L69b742;
case 0x69b744:c.instructions+=1;goto B69b744;
case 0x69b74a:goto L69b74a;
case 0x69b74f:goto L69b74f;
case 0x69b755:c.instructions+=1;goto B69b755;
case 0x69b75b:goto L69b75b;
case 0x69b75e:c.instructions+=8;goto B69b75e;
case 0x69b761:c.instructions+=7;goto B69b761;
case 0x69b763:c.instructions+=6;goto B69b763;
case 0x69b766:c.instructions+=5;goto B69b766;
case 0x69b769:c.instructions+=4;goto B69b769;
case 0x69b76b:c.instructions+=3;goto B69b76b;
case 0x69b76e:c.instructions+=2;goto B69b76e;
case 0x69b773:c.instructions+=1;goto B69b773;
case 0x69b775:goto L69b775;
case 0x69b777:c.instructions+=1;goto B69b777;
case 0x69b779:goto L69b779;
case 0x69b77c:c.instructions+=7;goto B69b77c;
case 0x69b77f:c.instructions+=6;goto B69b77f;
case 0x69b782:c.instructions+=5;goto B69b782;
case 0x69b785:c.instructions+=4;goto B69b785;
case 0x69b788:c.instructions+=3;goto B69b788;
case 0x69b78b:c.instructions+=2;goto B69b78b;
case 0x69b78e:c.instructions+=1;goto B69b78e;
case 0x69b790:goto L69b790;
case 0x69b793:c.instructions+=2;goto B69b793;
case 0x69b797:c.instructions+=1;goto B69b797;
case 0x69b799:goto L69b799;
case 0x69b79c:c.instructions+=3;goto B69b79c;
case 0x69b79e:c.instructions+=2;goto B69b79e;
case 0x69b7a1:c.instructions+=1;goto B69b7a1;
case 0x69b7a7:goto L69b7a7;
case 0x69b7aa:c.instructions+=7;goto B69b7aa;
case 0x69b7ad:c.instructions+=6;goto B69b7ad;
case 0x69b7b0:c.instructions+=5;goto B69b7b0;
case 0x69b7b3:c.instructions+=4;goto B69b7b3;
case 0x69b7b6:c.instructions+=3;goto B69b7b6;
case 0x69b7b8:c.instructions+=2;goto B69b7b8;
case 0x69b7bb:c.instructions+=1;goto B69b7bb;
case 0x69b7bd:goto L69b7bd;
case 0x69b7c2:goto L69b7c2;
case 0x69b7c5:c.instructions+=3;goto B69b7c5;
case 0x69b7c7:c.instructions+=2;goto B69b7c7;
case 0x69b7ca:c.instructions+=1;goto B69b7ca;
case 0x69b7cc:goto L69b7cc;
case 0x69b7ce:c.instructions+=1;goto B69b7ce;
case 0x69b7d4:goto L69b7d4;
case 0x69b7d7:c.instructions+=7;goto B69b7d7;
case 0x69b7da:c.instructions+=6;goto B69b7da;
case 0x69b7dd:c.instructions+=5;goto B69b7dd;
case 0x69b7e0:c.instructions+=4;goto B69b7e0;
case 0x69b7e3:c.instructions+=3;goto B69b7e3;
case 0x69b7e6:c.instructions+=2;goto B69b7e6;
case 0x69b7e9:c.instructions+=1;goto B69b7e9;
case 0x69b7ef:goto L69b7ef;
case 0x69b7f2:c.instructions+=2;goto B69b7f2;
case 0x69b7f6:c.instructions+=1;goto B69b7f6;
case 0x69b7fc:goto L69b7fc;
case 0x69b7ff:c.instructions+=3;goto B69b7ff;
case 0x69b801:c.instructions+=2;goto B69b801;
case 0x69b804:c.instructions+=1;goto B69b804;
case 0x69b806:goto L69b806;
case 0x69b809:c.instructions+=7;goto B69b809;
case 0x69b80c:c.instructions+=6;goto B69b80c;
case 0x69b80f:c.instructions+=5;goto B69b80f;
case 0x69b812:c.instructions+=4;goto B69b812;
case 0x69b815:c.instructions+=3;goto B69b815;
case 0x69b817:c.instructions+=2;goto B69b817;
case 0x69b81a:c.instructions+=1;goto B69b81a;
case 0x69b81c:goto L69b81c;
case 0x69b81f:c.instructions+=2;goto B69b81f;
case 0x69b821:c.instructions+=1;goto B69b821;
case 0x69b823:goto L69b823;
case 0x69b825:c.instructions+=1;goto B69b825;
case 0x69b82a:goto L69b82a;
case 0x69b830:c.instructions+=1;goto B69b830;
case 0x69b836:goto L69b836;
case 0x69b839:c.instructions+=8;goto B69b839;
case 0x69b83c:c.instructions+=7;goto B69b83c;
case 0x69b83e:c.instructions+=6;goto B69b83e;
case 0x69b841:c.instructions+=5;goto B69b841;
case 0x69b844:c.instructions+=4;goto B69b844;
case 0x69b846:c.instructions+=3;goto B69b846;
case 0x69b849:c.instructions+=2;goto B69b849;
case 0x69b84e:c.instructions+=1;goto B69b84e;
case 0x69b850:goto L69b850;
case 0x69b852:c.instructions+=1;goto B69b852;
case 0x69b854:goto L69b854;
case 0x69b857:c.instructions+=7;goto B69b857;
case 0x69b85a:c.instructions+=6;goto B69b85a;
case 0x69b85d:c.instructions+=5;goto B69b85d;
case 0x69b860:c.instructions+=4;goto B69b860;
case 0x69b863:c.instructions+=3;goto B69b863;
case 0x69b866:c.instructions+=2;goto B69b866;
case 0x69b869:c.instructions+=1;goto B69b869;
case 0x69b86b:goto L69b86b;
case 0x69b86e:c.instructions+=2;goto B69b86e;
case 0x69b872:c.instructions+=1;goto B69b872;
case 0x69b874:goto L69b874;
case 0x69b877:c.instructions+=3;goto B69b877;
case 0x69b879:c.instructions+=2;goto B69b879;
case 0x69b87c:c.instructions+=1;goto B69b87c;
case 0x69b87e:goto L69b87e;
case 0x69b881:c.instructions+=7;goto B69b881;
case 0x69b884:c.instructions+=6;goto B69b884;
case 0x69b887:c.instructions+=5;goto B69b887;
case 0x69b88a:c.instructions+=4;goto B69b88a;
case 0x69b88d:c.instructions+=3;goto B69b88d;
case 0x69b88f:c.instructions+=2;goto B69b88f;
case 0x69b892:c.instructions+=1;goto B69b892;
case 0x69b894:goto L69b894;
case 0x69b897:c.instructions+=3;goto B69b897;
case 0x69b899:c.instructions+=2;goto B69b899;
case 0x69b89b:c.instructions+=1;goto B69b89b;
case 0x69b89d:goto L69b89d;
case 0x69b8a0:c.instructions+=3;goto B69b8a0;
case 0x69b8a2:c.instructions+=2;goto B69b8a2;
case 0x69b8a5:c.instructions+=1;goto B69b8a5;
case 0x69b8a7:goto L69b8a7;
case 0x69b8a9:c.instructions+=1;goto B69b8a9;
case 0x69b8af:goto L69b8af;
case 0x69b8b2:c.instructions+=7;goto B69b8b2;
case 0x69b8b5:c.instructions+=6;goto B69b8b5;
case 0x69b8b8:c.instructions+=5;goto B69b8b8;
case 0x69b8bb:c.instructions+=4;goto B69b8bb;
case 0x69b8be:c.instructions+=3;goto B69b8be;
case 0x69b8c1:c.instructions+=2;goto B69b8c1;
case 0x69b8c4:c.instructions+=1;goto B69b8c4;
case 0x69b8ca:goto L69b8ca;
case 0x69b8cd:c.instructions+=2;goto B69b8cd;
case 0x69b8d1:c.instructions+=1;goto B69b8d1;
case 0x69b8d7:goto L69b8d7;
case 0x69b8da:c.instructions+=3;goto B69b8da;
case 0x69b8dc:c.instructions+=2;goto B69b8dc;
case 0x69b8df:c.instructions+=1;goto B69b8df;
case 0x69b8e5:goto L69b8e5;
case 0x69b8e8:c.instructions+=7;goto B69b8e8;
case 0x69b8eb:c.instructions+=6;goto B69b8eb;
case 0x69b8ee:c.instructions+=5;goto B69b8ee;
case 0x69b8f1:c.instructions+=4;goto B69b8f1;
case 0x69b8f4:c.instructions+=3;goto B69b8f4;
case 0x69b8f6:c.instructions+=2;goto B69b8f6;
case 0x69b8f9:c.instructions+=1;goto B69b8f9;
case 0x69b8ff:goto L69b8ff;
case 0x69b904:goto L69b904;
case 0x69b90a:c.instructions+=1;goto B69b90a;
case 0x69b910:goto L69b910;
case 0x69b913:c.instructions+=17;goto B69b913;
case 0x69b916:c.instructions+=16;goto B69b916;
case 0x69b919:c.instructions+=15;goto B69b919;
case 0x69b91c:c.instructions+=14;goto B69b91c;
case 0x69b91f:c.instructions+=13;goto B69b91f;
case 0x69b922:c.instructions+=12;goto B69b922;
case 0x69b925:c.instructions+=11;goto B69b925;
case 0x69b928:c.instructions+=10;goto B69b928;
case 0x69b92b:c.instructions+=9;goto B69b92b;
case 0x69b92e:c.instructions+=8;goto B69b92e;
case 0x69b931:c.instructions+=7;goto B69b931;
case 0x69b934:c.instructions+=6;goto B69b934;
case 0x69b937:c.instructions+=5;goto B69b937;
case 0x69b93a:c.instructions+=4;goto B69b93a;
case 0x69b93d:c.instructions+=3;goto B69b93d;
case 0x69b942:c.instructions+=2;goto B69b942;
case 0x69b945:c.instructions+=1;goto B69b945;
case 0x69b94b:goto L69b94b;
case 0x69b94e:c.instructions+=2;goto B69b94e;
case 0x69b952:c.instructions+=1;goto B69b952;
case 0x69b958:goto L69b958;
case 0x69b95b:c.instructions+=4;goto B69b95b;
case 0x69b95e:c.instructions+=3;goto B69b95e;
case 0x69b961:c.instructions+=2;goto B69b961;
case 0x69b964:c.instructions+=1;goto B69b964;
case 0x69b96a:goto L69b96a;
case 0x69b96d:c.instructions+=2;goto B69b96d;
case 0x69b971:c.instructions+=1;goto B69b971;
case 0x69b977:goto L69b977;
case 0x69b97a:c.instructions+=6;goto B69b97a;
case 0x69b97d:c.instructions+=5;goto B69b97d;
case 0x69b983:c.instructions+=4;goto B69b983;
case 0x69b985:c.instructions+=3;goto B69b985;
case 0x69b987:c.instructions+=2;goto B69b987;
case 0x69b98a:c.instructions+=1;goto B69b98a;
case 0x69b98c:goto L69b98c;
case 0x69b98f:c.instructions+=6;goto B69b98f;
case 0x69b992:c.instructions+=5;goto B69b992;
case 0x69b998:c.instructions+=4;goto B69b998;
case 0x69b99a:c.instructions+=3;goto B69b99a;
case 0x69b99c:c.instructions+=2;goto B69b99c;
case 0x69b99f:c.instructions+=1;goto B69b99f;
case 0x69b9a1:goto L69b9a1;
case 0x69b9a4:c.instructions+=6;goto B69b9a4;
case 0x69b9a7:c.instructions+=5;goto B69b9a7;
case 0x69b9ad:c.instructions+=4;goto B69b9ad;
case 0x69b9af:c.instructions+=3;goto B69b9af;
case 0x69b9b1:c.instructions+=2;goto B69b9b1;
case 0x69b9b4:c.instructions+=1;goto B69b9b4;
case 0x69b9ba:goto L69b9ba;
case 0x69b9bd:c.instructions+=6;goto B69b9bd;
case 0x69b9c0:c.instructions+=5;goto B69b9c0;
case 0x69b9c6:c.instructions+=4;goto B69b9c6;
case 0x69b9c8:c.instructions+=3;goto B69b9c8;
case 0x69b9ca:c.instructions+=2;goto B69b9ca;
case 0x69b9cd:c.instructions+=1;goto B69b9cd;
case 0x69b9d3:goto L69b9d3;
case 0x69b9d6:c.instructions+=7;goto B69b9d6;
case 0x69b9d9:c.instructions+=6;goto B69b9d9;
case 0x69b9dc:c.instructions+=5;goto B69b9dc;
case 0x69b9df:c.instructions+=4;goto B69b9df;
case 0x69b9e2:c.instructions+=3;goto B69b9e2;
case 0x69b9e5:c.instructions+=2;goto B69b9e5;
case 0x69b9e9:c.instructions+=1;goto B69b9e9;
case 0x69b9ef:goto L69b9ef;
case 0x69b9f2:c.instructions+=7;goto B69b9f2;
case 0x69b9f5:c.instructions+=6;goto B69b9f5;
case 0x69b9f8:c.instructions+=5;goto B69b9f8;
case 0x69b9fa:c.instructions+=4;goto B69b9fa;
case 0x69b9ff:c.instructions+=3;goto B69b9ff;
case 0x69ba04:c.instructions+=2;goto B69ba04;
case 0x69ba07:c.instructions+=1;goto B69ba07;
case 0x69ba09:goto L69ba09;
case 0x69ba0e:c.instructions+=1;goto B69ba0e;
case 0x69ba14:goto L69ba14;
case 0x69ba17:c.instructions+=3;goto B69ba17;
case 0x69ba1b:c.instructions+=2;goto B69ba1b;
case 0x69ba1d:c.instructions+=1;goto B69ba1d;
case 0x69ba1f:goto L69ba1f;
case 0x69ba22:c.instructions+=1;goto B69ba22;
case 0x69ba25:goto L69ba25;
case 0x69ba28:c.instructions+=2;goto B69ba28;
case 0x69ba2a:c.instructions+=1;goto B69ba2a;
case 0x69ba2c:goto L69ba2c;
case 0x69ba2f:c.instructions+=3;goto B69ba2f;
case 0x69ba33:c.instructions+=2;goto B69ba33;
case 0x69ba36:c.instructions+=1;goto B69ba36;
case 0x69ba38:goto L69ba38;
case 0x69ba3f:c.instructions+=1;goto B69ba3f;
case 0x69ba41:goto L69ba41;
case 0x69ba42:c.instructions+=8;goto B69ba42;
case 0x69ba44:c.instructions+=7;goto B69ba44;
case 0x69ba45:c.instructions+=6;goto B69ba45;
case 0x69ba48:c.instructions+=5;goto B69ba48;
case 0x69ba4a:c.instructions+=4;goto B69ba4a;
case 0x69ba4c:c.instructions+=3;goto B69ba4c;
case 0x69ba4f:c.instructions+=2;goto B69ba4f;
case 0x69ba51:c.instructions+=1;goto B69ba51;
case 0x69ba56:goto L69ba56;
case 0x69ba59:c.instructions+=5;goto B69ba59;
case 0x69ba5b:c.instructions+=4;goto B69ba5b;
case 0x69ba5e:c.instructions+=3;goto B69ba5e;
case 0x69ba61:c.instructions+=2;goto B69ba61;
case 0x69ba64:c.instructions+=1;goto B69ba64;
case 0x69ba6a:goto L69ba6a;
case 0x69ba6f:c.instructions+=1;goto B69ba6f;
case 0x69ba74:goto L69ba74;
case 0x69ba77:c.instructions+=9;goto B69ba77;
case 0x69ba7b:c.instructions+=8;goto B69ba7b;
case 0x69ba7e:c.instructions+=7;goto B69ba7e;
case 0x69ba80:c.instructions+=6;goto B69ba80;
case 0x69ba82:c.instructions+=5;goto B69ba82;
case 0x69ba85:c.instructions+=4;goto B69ba85;
case 0x69ba87:c.instructions+=3;goto B69ba87;
case 0x69ba8a:c.instructions+=2;goto B69ba8a;
case 0x69ba8d:c.instructions+=1;goto B69ba8d;
case 0x69ba90:goto L69ba90;
case 0x69ba93:c.instructions+=10;goto B69ba93;
case 0x69ba95:c.instructions+=9;goto B69ba95;
case 0x69ba98:c.instructions+=8;goto B69ba98;
case 0x69ba9b:c.instructions+=7;goto B69ba9b;
case 0x69ba9e:c.instructions+=6;goto B69ba9e;
case 0x69baa1:c.instructions+=5;goto B69baa1;
case 0x69baa4:c.instructions+=4;goto B69baa4;
case 0x69baa7:c.instructions+=3;goto B69baa7;
case 0x69baaa:c.instructions+=2;goto B69baaa;
case 0x69baae:c.instructions+=1;goto B69baae;
case 0x69bab0:goto L69bab0;
case 0x69bab3:c.instructions+=7;goto B69bab3;
case 0x69bab6:c.instructions+=6;goto B69bab6;
case 0x69bab9:c.instructions+=5;goto B69bab9;
case 0x69babc:c.instructions+=4;goto B69babc;
case 0x69babe:c.instructions+=3;goto B69babe;
case 0x69bac4:c.instructions+=2;goto B69bac4;
case 0x69baca:c.instructions+=1;goto B69baca;
case 0x69bacc:goto L69bacc;
case 0x69bacf:c.instructions+=3;goto B69bacf;
case 0x69bad2:c.instructions+=2;goto B69bad2;
case 0x69bad6:c.instructions+=1;goto B69bad6;
case 0x69bad8:goto L69bad8;
case 0x69badb:c.instructions+=2;goto B69badb;
case 0x69bade:c.instructions+=1;goto B69bade;
case 0x69bae0:goto L69bae0;
case 0x69bae4:c.instructions+=2;goto B69bae4;
case 0x69bae8:c.instructions+=1;goto B69bae8;
case 0x69baea:goto L69baea;
case 0x69baed:c.instructions+=1;goto B69baed;
case 0x69baef:goto L69baef;
case 0x69baf2:goto L69baf2;
case 0x69baf5:c.instructions+=2;goto B69baf5;
case 0x69baf7:c.instructions+=1;goto B69baf7;
case 0x69baf9:goto L69baf9;
case 0x69bafc:c.instructions+=5;goto B69bafc;
case 0x69baff:c.instructions+=4;goto B69baff;
case 0x69bb02:c.instructions+=3;goto B69bb02;
case 0x69bb05:c.instructions+=2;goto B69bb05;
case 0x69bb08:c.instructions+=1;goto B69bb08;
case 0x69bb0a:goto L69bb0a;
case 0x69bb0e:c.instructions+=6;goto B69bb0e;
case 0x69bb11:c.instructions+=5;goto B69bb11;
case 0x69bb14:c.instructions+=4;goto B69bb14;
case 0x69bb17:c.instructions+=3;goto B69bb17;
case 0x69bb1a:c.instructions+=2;goto B69bb1a;
case 0x69bb1d:c.instructions+=1;goto B69bb1d;
case 0x69bb20:goto L69bb20;
case 0x69bb24:c.instructions+=1;goto B69bb24;
case 0x69bb2a:goto L69bb2a;
case 0x69bb2d:c.instructions+=3;goto B69bb2d;
case 0x69bb2f:c.instructions+=2;goto B69bb2f;
case 0x69bb32:c.instructions+=1;goto B69bb32;
case 0x69bb34:goto L69bb34;
case 0x69bb36:c.instructions+=1;goto B69bb36;
case 0x69bb3c:goto L69bb3c;
case 0x69bb3f:c.instructions+=7;goto B69bb3f;
case 0x69bb42:c.instructions+=6;goto B69bb42;
case 0x69bb45:c.instructions+=5;goto B69bb45;
case 0x69bb48:c.instructions+=4;goto B69bb48;
case 0x69bb4b:c.instructions+=3;goto B69bb4b;
case 0x69bb4e:c.instructions+=2;goto B69bb4e;
case 0x69bb51:c.instructions+=1;goto B69bb51;
case 0x69bb53:goto L69bb53;
case 0x69bb56:c.instructions+=2;goto B69bb56;
case 0x69bb5a:c.instructions+=1;goto B69bb5a;
case 0x69bb5c:goto L69bb5c;
case 0x69bb5f:c.instructions+=6;goto B69bb5f;
case 0x69bb62:c.instructions+=5;goto B69bb62;
case 0x69bb68:c.instructions+=4;goto B69bb68;
case 0x69bb6a:c.instructions+=3;goto B69bb6a;
case 0x69bb6c:c.instructions+=2;goto B69bb6c;
case 0x69bb6f:c.instructions+=1;goto B69bb6f;
case 0x69bb71:goto L69bb71;
case 0x69bb74:c.instructions+=3;goto B69bb74;
case 0x69bb76:c.instructions+=2;goto B69bb76;
case 0x69bb79:c.instructions+=1;goto B69bb79;
case 0x69bb7b:goto L69bb7b;
case 0x69bb7e:c.instructions+=7;goto B69bb7e;
case 0x69bb81:c.instructions+=6;goto B69bb81;
case 0x69bb84:c.instructions+=5;goto B69bb84;
case 0x69bb87:c.instructions+=4;goto B69bb87;
case 0x69bb8a:c.instructions+=3;goto B69bb8a;
case 0x69bb8c:c.instructions+=2;goto B69bb8c;
case 0x69bb8f:c.instructions+=1;goto B69bb8f;
case 0x69bb95:goto L69bb95;
case 0x69bb97:goto L69bb97;
case 0x69bb9a:c.instructions+=3;goto B69bb9a;
case 0x69bb9c:c.instructions+=2;goto B69bb9c;
case 0x69bb9f:c.instructions+=1;goto B69bb9f;
case 0x69bba1:goto L69bba1;
case 0x69bba4:c.instructions+=7;goto B69bba4;
case 0x69bba7:c.instructions+=6;goto B69bba7;
case 0x69bbaa:c.instructions+=5;goto B69bbaa;
case 0x69bbad:c.instructions+=4;goto B69bbad;
case 0x69bbb0:c.instructions+=3;goto B69bbb0;
case 0x69bbb2:c.instructions+=2;goto B69bbb2;
case 0x69bbb5:c.instructions+=1;goto B69bbb5;
case 0x69bbbb:goto L69bbbb;
case 0x69bbbe:c.instructions+=3;goto B69bbbe;
case 0x69bbc0:c.instructions+=2;goto B69bbc0;
case 0x69bbc2:c.instructions+=1;goto B69bbc2;
case 0x69bbc7:goto L69bbc7;
case 0x69bbca:c.instructions+=3;goto B69bbca;
case 0x69bbcc:c.instructions+=2;goto B69bbcc;
case 0x69bbcf:c.instructions+=1;goto B69bbcf;
case 0x69bbd1:goto L69bbd1;
case 0x69bbd3:c.instructions+=1;goto B69bbd3;
case 0x69bbd9:goto L69bbd9;
case 0x69bbdc:c.instructions+=7;goto B69bbdc;
case 0x69bbdf:c.instructions+=6;goto B69bbdf;
case 0x69bbe2:c.instructions+=5;goto B69bbe2;
case 0x69bbe5:c.instructions+=4;goto B69bbe5;
case 0x69bbe8:c.instructions+=3;goto B69bbe8;
case 0x69bbeb:c.instructions+=2;goto B69bbeb;
case 0x69bbee:c.instructions+=1;goto B69bbee;
case 0x69bbf0:goto L69bbf0;
case 0x69bbf3:c.instructions+=2;goto B69bbf3;
case 0x69bbf7:c.instructions+=1;goto B69bbf7;
case 0x69bbf9:goto L69bbf9;
case 0x69bbfc:c.instructions+=6;goto B69bbfc;
case 0x69bbff:c.instructions+=5;goto B69bbff;
case 0x69bc05:c.instructions+=4;goto B69bc05;
case 0x69bc07:c.instructions+=3;goto B69bc07;
case 0x69bc09:c.instructions+=2;goto B69bc09;
case 0x69bc0c:c.instructions+=1;goto B69bc0c;
case 0x69bc0e:goto L69bc0e;
case 0x69bc11:c.instructions+=3;goto B69bc11;
case 0x69bc13:c.instructions+=2;goto B69bc13;
case 0x69bc16:c.instructions+=1;goto B69bc16;
case 0x69bc18:goto L69bc18;
case 0x69bc1b:c.instructions+=7;goto B69bc1b;
case 0x69bc1e:c.instructions+=6;goto B69bc1e;
case 0x69bc21:c.instructions+=5;goto B69bc21;
case 0x69bc24:c.instructions+=4;goto B69bc24;
case 0x69bc27:c.instructions+=3;goto B69bc27;
case 0x69bc29:c.instructions+=2;goto B69bc29;
case 0x69bc2c:c.instructions+=1;goto B69bc2c;
case 0x69bc32:goto L69bc32;
case 0x69bc34:goto L69bc34;
case 0x69bc37:c.instructions+=3;goto B69bc37;
case 0x69bc39:c.instructions+=2;goto B69bc39;
case 0x69bc3c:c.instructions+=1;goto B69bc3c;
case 0x69bc3e:goto L69bc3e;
case 0x69bc41:c.instructions+=7;goto B69bc41;
case 0x69bc44:c.instructions+=6;goto B69bc44;
case 0x69bc47:c.instructions+=5;goto B69bc47;
case 0x69bc4a:c.instructions+=4;goto B69bc4a;
case 0x69bc4d:c.instructions+=3;goto B69bc4d;
case 0x69bc4f:c.instructions+=2;goto B69bc4f;
case 0x69bc52:c.instructions+=1;goto B69bc52;
case 0x69bc58:goto L69bc58;
case 0x69bc5b:c.instructions+=3;goto B69bc5b;
case 0x69bc5d:c.instructions+=2;goto B69bc5d;
case 0x69bc5f:c.instructions+=1;goto B69bc5f;
case 0x69bc64:goto L69bc64;
case 0x69bc69:goto L69bc69;
case 0x69bc6a:goto L69bc6a;
case 0x69bc6b:c.instructions+=3;goto B69bc6b;
case 0x69bc6c:c.instructions+=2;goto B69bc6c;
case 0x69bc6d:c.instructions+=1;goto B69bc6d;
case 0x69bc70:goto L69bc70;
case 0x69bc72:c.instructions+=14;goto B69bc72;
case 0x69bc73:c.instructions+=13;goto B69bc73;
case 0x69bc75:c.instructions+=12;goto B69bc75;
case 0x69bc78:c.instructions+=11;goto B69bc78;
case 0x69bc7b:c.instructions+=10;goto B69bc7b;
case 0x69bc7c:c.instructions+=9;goto B69bc7c;
case 0x69bc7f:c.instructions+=8;goto B69bc7f;
case 0x69bc82:c.instructions+=7;goto B69bc82;
case 0x69bc85:c.instructions+=6;goto B69bc85;
case 0x69bc86:c.instructions+=5;goto B69bc86;
case 0x69bc89:c.instructions+=4;goto B69bc89;
case 0x69bc8c:c.instructions+=3;goto B69bc8c;
case 0x69bc8f:c.instructions+=2;goto B69bc8f;
case 0x69bc92:c.instructions+=1;goto B69bc92;
case 0x69bc94:goto L69bc94;
case 0x69bc97:c.instructions+=5;goto B69bc97;
case 0x69bc9a:c.instructions+=4;goto B69bc9a;
case 0x69bc9d:c.instructions+=3;goto B69bc9d;
case 0x69bca0:c.instructions+=2;goto B69bca0;
case 0x69bca3:c.instructions+=1;goto B69bca3;
case 0x69bca5:goto L69bca5;
case 0x69bca8:c.instructions+=5;goto B69bca8;
case 0x69bcab:c.instructions+=4;goto B69bcab;
case 0x69bcae:c.instructions+=3;goto B69bcae;
case 0x69bcb1:c.instructions+=2;goto B69bcb1;
case 0x69bcb4:c.instructions+=1;goto B69bcb4;
case 0x69bcb6:goto L69bcb6;
case 0x69bcb9:c.instructions+=5;goto B69bcb9;
case 0x69bcbc:c.instructions+=4;goto B69bcbc;
case 0x69bcbf:c.instructions+=3;goto B69bcbf;
case 0x69bcc2:c.instructions+=2;goto B69bcc2;
case 0x69bcc5:c.instructions+=1;goto B69bcc5;
case 0x69bcc7:goto L69bcc7;
case 0x69bcca:c.instructions+=5;goto B69bcca;
case 0x69bccd:c.instructions+=4;goto B69bccd;
case 0x69bcd0:c.instructions+=3;goto B69bcd0;
case 0x69bcd3:c.instructions+=2;goto B69bcd3;
case 0x69bcd6:c.instructions+=1;goto B69bcd6;
case 0x69bcd8:goto L69bcd8;
case 0x69bcda:c.instructions+=2;goto B69bcda;
case 0x69bcdb:c.instructions+=1;goto B69bcdb;
case 0x69bcdd:goto L69bcdd;
case 0x69bcdf:goto L69bcdf;
case 0x69bce0:c.instructions+=3;goto B69bce0;
case 0x69bce1:c.instructions+=2;goto B69bce1;
case 0x69bce2:c.instructions+=1;goto B69bce2;
case 0x69bce5:goto L69bce5;
case 0x69bce7:c.instructions+=7;goto B69bce7;
case 0x69bce8:c.instructions+=6;goto B69bce8;
case 0x69bcea:c.instructions+=5;goto B69bcea;
case 0x69bced:c.instructions+=4;goto B69bced;
case 0x69bcee:c.instructions+=3;goto B69bcee;
case 0x69bcf1:c.instructions+=2;goto B69bcf1;
case 0x69bcf3:c.instructions+=1;goto B69bcf3;
case 0x69bcf5:goto L69bcf5;
case 0x69bcf8:c.instructions+=5;goto B69bcf8;
case 0x69bcfb:c.instructions+=4;goto B69bcfb;
case 0x69bcfe:c.instructions+=3;goto B69bcfe;
case 0x69bd01:c.instructions+=2;goto B69bd01;
case 0x69bd04:c.instructions+=1;goto B69bd04;
case 0x69bd06:goto L69bd06;
case 0x69bd08:c.instructions+=1;goto B69bd08;
case 0x69bd0a:goto L69bd0a;
case 0x69bd0c:c.instructions+=1;goto B69bd0c;
case 0x69bd0d:goto L69bd0d;
case 0x69bd0e:c.instructions+=2;goto B69bd0e;
case 0x69bd0f:c.instructions+=1;goto B69bd0f;
case 0x69bd12:goto L69bd12;
case 0x69bd14:c.instructions+=17;goto B69bd14;
case 0x69bd15:c.instructions+=16;goto B69bd15;
case 0x69bd17:c.instructions+=15;goto B69bd17;
case 0x69bd1a:c.instructions+=14;goto B69bd1a;
case 0x69bd1b:c.instructions+=13;goto B69bd1b;
case 0x69bd1c:c.instructions+=12;goto B69bd1c;
case 0x69bd1d:c.instructions+=11;goto B69bd1d;
case 0x69bd1f:c.instructions+=10;goto B69bd1f;
case 0x69bd22:c.instructions+=9;goto B69bd22;
case 0x69bd24:c.instructions+=8;goto B69bd24;
case 0x69bd27:c.instructions+=7;goto B69bd27;
case 0x69bd2d:c.instructions+=6;goto B69bd2d;
case 0x69bd2f:c.instructions+=5;goto B69bd2f;
case 0x69bd31:c.instructions+=4;goto B69bd31;
case 0x69bd35:c.instructions+=3;goto B69bd35;
case 0x69bd37:c.instructions+=2;goto B69bd37;
case 0x69bd3a:c.instructions+=1;goto B69bd3a;
case 0x69bd3c:goto L69bd3c;
case 0x69bd3f:c.instructions+=9;goto B69bd3f;
case 0x69bd42:c.instructions+=8;goto B69bd42;
case 0x69bd44:c.instructions+=7;goto B69bd44;
case 0x69bd47:c.instructions+=6;goto B69bd47;
case 0x69bd4a:c.instructions+=5;goto B69bd4a;
case 0x69bd4d:c.instructions+=4;goto B69bd4d;
case 0x69bd50:c.instructions+=3;goto B69bd50;
case 0x69bd53:c.instructions+=2;goto B69bd53;
case 0x69bd56:c.instructions+=1;goto B69bd56;
case 0x69bd59:goto L69bd59;
case 0x69bd5c:c.instructions+=9;goto B69bd5c;
case 0x69bd5e:c.instructions+=8;goto B69bd5e;
case 0x69bd60:c.instructions+=7;goto B69bd60;
case 0x69bd63:c.instructions+=6;goto B69bd63;
case 0x69bd66:c.instructions+=5;goto B69bd66;
case 0x69bd69:c.instructions+=4;goto B69bd69;
case 0x69bd6c:c.instructions+=3;goto B69bd6c;
case 0x69bd6f:c.instructions+=2;goto B69bd6f;
case 0x69bd73:c.instructions+=1;goto B69bd73;
case 0x69bd75:goto L69bd75;
case 0x69bd78:c.instructions+=5;goto B69bd78;
case 0x69bd7b:c.instructions+=4;goto B69bd7b;
case 0x69bd7e:c.instructions+=3;goto B69bd7e;
case 0x69bd81:c.instructions+=2;goto B69bd81;
case 0x69bd85:c.instructions+=1;goto B69bd85;
case 0x69bd87:goto L69bd87;
case 0x69bd8a:c.instructions+=3;goto B69bd8a;
case 0x69bd8b:c.instructions+=2;goto B69bd8b;
case 0x69bd8d:c.instructions+=1;goto B69bd8d;
case 0x69bd92:goto L69bd92;
case 0x69bd94:c.instructions+=1;goto B69bd94;
case 0x69bd96:goto L69bd96;
case 0x69bd99:c.instructions+=6;goto B69bd99;
case 0x69bd9c:c.instructions+=5;goto B69bd9c;
case 0x69bd9f:c.instructions+=4;goto B69bd9f;
case 0x69bda1:c.instructions+=3;goto B69bda1;
case 0x69bda4:c.instructions+=2;goto B69bda4;
case 0x69bda7:c.instructions+=1;goto B69bda7;
case 0x69bda9:goto L69bda9;
case 0x69bdab:goto L69bdab;
case 0x69bdac:c.instructions+=4;goto B69bdac;
case 0x69bdad:c.instructions+=3;goto B69bdad;
case 0x69bdae:c.instructions+=2;goto B69bdae;
case 0x69bdaf:c.instructions+=1;goto B69bdaf;
case 0x69bdb2:goto L69bdb2;
case 0x69bdb4:c.instructions+=2;goto B69bdb4;
case 0x69bdb5:c.instructions+=1;goto B69bdb5;
case 0x69bdb7:goto L69bdb7;
case 0x69bdb9:c.instructions+=17;goto B69bdb9;
case 0x69bdba:c.instructions+=16;goto B69bdba;
case 0x69bdbc:c.instructions+=15;goto B69bdbc;
case 0x69bdbf:c.instructions+=14;goto B69bdbf;
case 0x69bdc0:c.instructions+=13;goto B69bdc0;
case 0x69bdc1:c.instructions+=12;goto B69bdc1;
case 0x69bdc4:c.instructions+=11;goto B69bdc4;
case 0x69bdc7:c.instructions+=10;goto B69bdc7;
case 0x69bdc8:c.instructions+=9;goto B69bdc8;
case 0x69bdcb:c.instructions+=8;goto B69bdcb;
case 0x69bdcd:c.instructions+=7;goto B69bdcd;
case 0x69bdcf:c.instructions+=6;goto B69bdcf;
case 0x69bdd1:c.instructions+=5;goto B69bdd1;
case 0x69bdd3:c.instructions+=4;goto B69bdd3;
case 0x69bdd6:c.instructions+=3;goto B69bdd6;
case 0x69bdd9:c.instructions+=2;goto B69bdd9;
case 0x69bddc:c.instructions+=1;goto B69bddc;
case 0x69bde1:goto L69bde1;
case 0x69bde3:c.instructions+=1;goto B69bde3;
case 0x69bde5:goto L69bde5;
case 0x69bde9:c.instructions+=2;goto B69bde9;
case 0x69bdeb:c.instructions+=1;goto B69bdeb;
case 0x69bded:goto L69bded;
case 0x69bdef:c.instructions+=7;goto B69bdef;
case 0x69bdf1:c.instructions+=6;goto B69bdf1;
case 0x69bdf6:c.instructions+=5;goto B69bdf6;
case 0x69bdf8:c.instructions+=4;goto B69bdf8;
case 0x69bdfb:c.instructions+=3;goto B69bdfb;
case 0x69bdfc:c.instructions+=2;goto B69bdfc;
case 0x69bdfe:c.instructions+=1;goto B69bdfe;
case 0x69be03:goto L69be03;
case 0x69be06:c.instructions+=1;goto B69be06;
case 0x69be0c:goto L69be0c;
case 0x69be0f:c.instructions+=4;goto B69be0f;
case 0x69be12:c.instructions+=3;goto B69be12;
case 0x69be13:c.instructions+=2;goto B69be13;
case 0x69be15:c.instructions+=1;goto B69be15;
case 0x69be1a:goto L69be1a;
case 0x69be1c:c.instructions+=2;goto B69be1c;
case 0x69be1f:c.instructions+=1;goto B69be1f;
case 0x69be21:goto L69be21;
case 0x69be24:c.instructions+=9;goto B69be24;
case 0x69be27:c.instructions+=8;goto B69be27;
case 0x69be2a:c.instructions+=7;goto B69be2a;
case 0x69be2d:c.instructions+=6;goto B69be2d;
case 0x69be30:c.instructions+=5;goto B69be30;
case 0x69be33:c.instructions+=4;goto B69be33;
case 0x69be36:c.instructions+=3;goto B69be36;
case 0x69be37:c.instructions+=2;goto B69be37;
case 0x69be3a:c.instructions+=1;goto B69be3a;
case 0x69be3c:goto L69be3c;
case 0x69be3f:goto L69be3f;
case 0x69be42:c.instructions+=8;goto B69be42;
case 0x69be45:c.instructions+=7;goto B69be45;
case 0x69be48:c.instructions+=6;goto B69be48;
case 0x69be4b:c.instructions+=5;goto B69be4b;
case 0x69be4c:c.instructions+=4;goto B69be4c;
case 0x69be4f:c.instructions+=3;goto B69be4f;
case 0x69be51:c.instructions+=2;goto B69be51;
case 0x69be54:c.instructions+=1;goto B69be54;
case 0x69be56:goto L69be56;
case 0x69be58:c.instructions+=5;goto B69be58;
case 0x69be59:c.instructions+=4;goto B69be59;
case 0x69be5a:c.instructions+=3;goto B69be5a;
case 0x69be5b:c.instructions+=2;goto B69be5b;
case 0x69be5c:c.instructions+=1;goto B69be5c;
case 0x69be5f:goto L69be5f;
case 0x69be61:c.instructions+=4;goto B69be61;
case 0x69be63:c.instructions+=3;goto B69be63;
case 0x69be66:c.instructions+=2;goto B69be66;
case 0x69be69:c.instructions+=1;goto B69be69;
case 0x69be6f:goto L69be6f;
case 0x69be72:c.instructions+=3;goto B69be72;
case 0x69be75:c.instructions+=2;goto B69be75;
case 0x69be78:c.instructions+=1;goto B69be78;
case 0x69be7e:goto L69be7e;
case 0x69be81:c.instructions+=6;goto B69be81;
case 0x69be84:c.instructions+=5;goto B69be84;
case 0x69be87:c.instructions+=4;goto B69be87;
case 0x69be8a:c.instructions+=3;goto B69be8a;
case 0x69be8d:c.instructions+=2;goto B69be8d;
case 0x69be91:c.instructions+=1;goto B69be91;
case 0x69be97:goto L69be97;
case 0x69be9b:c.instructions+=4;goto B69be9b;
case 0x69be9e:c.instructions+=3;goto B69be9e;
case 0x69bea0:c.instructions+=2;goto B69bea0;
case 0x69bea3:c.instructions+=1;goto B69bea3;
case 0x69bea5:goto L69bea5;
case 0x69bea7:goto L69bea7;
case 0x69beaa:goto L69beaa;
case 0x69beac:c.instructions+=3;goto B69beac;
case 0x69beaf:c.instructions+=2;goto B69beaf;
case 0x69beb3:c.instructions+=1;goto B69beb3;
case 0x69beb5:goto L69beb5;
case 0x69beb8:c.instructions+=4;goto B69beb8;
case 0x69bebb:c.instructions+=3;goto B69bebb;
case 0x69bebd:c.instructions+=2;goto B69bebd;
case 0x69bec0:c.instructions+=1;goto B69bec0;
case 0x69bec5:goto L69bec5;
case 0x69bec7:c.instructions+=1;goto B69bec7;
case 0x69bec9:goto L69bec9;
case 0x69becc:goto L69becc;
case 0x69becf:c.instructions+=4;goto B69becf;
case 0x69bed0:c.instructions+=3;goto B69bed0;
case 0x69bed3:c.instructions+=2;goto B69bed3;
case 0x69bed6:c.instructions+=1;goto B69bed6;
case 0x69bed8:goto L69bed8;
case 0x69beda:c.instructions+=8;goto B69beda;
case 0x69bedd:c.instructions+=7;goto B69bedd;
case 0x69bedf:c.instructions+=6;goto B69bedf;
case 0x69bee4:c.instructions+=5;goto B69bee4;
case 0x69bee6:c.instructions+=4;goto B69bee6;
case 0x69bee8:c.instructions+=3;goto B69bee8;
case 0x69bee9:c.instructions+=2;goto B69bee9;
case 0x69beeb:c.instructions+=1;goto B69beeb;
case 0x69bef0:goto L69bef0;
case 0x69bef3:c.instructions+=1;goto B69bef3;
case 0x69bef9:goto L69bef9;
case 0x69befc:c.instructions+=4;goto B69befc;
case 0x69beff:c.instructions+=3;goto B69beff;
case 0x69bf00:c.instructions+=2;goto B69bf00;
case 0x69bf02:c.instructions+=1;goto B69bf02;
case 0x69bf07:goto L69bf07;
case 0x69bf0a:c.instructions+=6;goto B69bf0a;
case 0x69bf0d:c.instructions+=5;goto B69bf0d;
case 0x69bf10:c.instructions+=4;goto B69bf10;
case 0x69bf14:c.instructions+=3;goto B69bf14;
case 0x69bf17:c.instructions+=2;goto B69bf17;
case 0x69bf1a:c.instructions+=1;goto B69bf1a;
case 0x69bf1c:goto L69bf1c;
case 0x69bf1f:c.instructions+=1;goto B69bf1f;
case 0x69bf21:goto L69bf21;
case 0x69bf24:c.instructions+=3;goto B69bf24;
case 0x69bf27:c.instructions+=2;goto B69bf27;
case 0x69bf2a:c.instructions+=1;goto B69bf2a;
case 0x69bf2c:goto L69bf2c;
case 0x69bf2f:c.instructions+=3;goto B69bf2f;
case 0x69bf30:c.instructions+=2;goto B69bf30;
case 0x69bf33:c.instructions+=1;goto B69bf33;
case 0x69bf38:goto L69bf38;
case 0x69bf3a:c.instructions+=1;goto B69bf3a;
case 0x69bf3c:goto L69bf3c;
case 0x69bf40:c.instructions+=2;goto B69bf40;
case 0x69bf44:c.instructions+=1;goto B69bf44;
case 0x69bf46:goto L69bf46;
case 0x69bf49:c.instructions+=14;goto B69bf49;
case 0x69bf4d:c.instructions+=13;goto B69bf4d;
case 0x69bf50:c.instructions+=12;goto B69bf50;
case 0x69bf54:c.instructions+=11;goto B69bf54;
case 0x69bf57:c.instructions+=10;goto B69bf57;
case 0x69bf5a:c.instructions+=9;goto B69bf5a;
case 0x69bf5c:c.instructions+=8;goto B69bf5c;
case 0x69bf5f:c.instructions+=7;goto B69bf5f;
case 0x69bf62:c.instructions+=6;goto B69bf62;
case 0x69bf65:c.instructions+=5;goto B69bf65;
case 0x69bf68:c.instructions+=4;goto B69bf68;
case 0x69bf6b:c.instructions+=3;goto B69bf6b;
case 0x69bf6e:c.instructions+=2;goto B69bf6e;
case 0x69bf71:c.instructions+=1;goto B69bf71;
case 0x69bf73:goto L69bf73;
case 0x69bf76:c.instructions+=8;goto B69bf76;
case 0x69bf79:c.instructions+=7;goto B69bf79;
case 0x69bf7c:c.instructions+=6;goto B69bf7c;
case 0x69bf7f:c.instructions+=5;goto B69bf7f;
case 0x69bf82:c.instructions+=4;goto B69bf82;
case 0x69bf85:c.instructions+=3;goto B69bf85;
case 0x69bf89:c.instructions+=2;goto B69bf89;
case 0x69bf8c:c.instructions+=1;goto B69bf8c;
case 0x69bf8f:goto L69bf8f;
case 0x69bf90:c.instructions+=2;goto B69bf90;
case 0x69bf93:c.instructions+=1;goto B69bf93;
case 0x69bf95:goto L69bf95;
case 0x69bf98:goto L69bf98;
case 0x69bf9b:c.instructions+=4;goto B69bf9b;
case 0x69bf9c:c.instructions+=3;goto B69bf9c;
case 0x69bf9f:c.instructions+=2;goto B69bf9f;
case 0x69bfa2:c.instructions+=1;goto B69bfa2;
case 0x69bfa8:goto L69bfa8;
case 0x69bfaa:c.instructions+=1;goto B69bfaa;
case 0x69bfaf:goto L69bfaf;
case 0x69bfb1:c.instructions+=6;goto B69bfb1;
case 0x69bfb2:c.instructions+=5;goto B69bfb2;
case 0x69bfb4:c.instructions+=4;goto B69bfb4;
case 0x69bfb7:c.instructions+=3;goto B69bfb7;
case 0x69bfba:c.instructions+=2;goto B69bfba;
case 0x69bfbd:c.instructions+=1;goto B69bfbd;
case 0x69bfbf:goto L69bfbf;
case 0x69bfc2:c.instructions+=2;goto B69bfc2;
case 0x69bfc5:c.instructions+=1;goto B69bfc5;
case 0x69bfc7:goto L69bfc7;
case 0x69bfca:goto L69bfca;
case 0x69bfcc:c.instructions+=2;goto B69bfcc;
case 0x69bfcf:c.instructions+=1;goto B69bfcf;
case 0x69bfd1:goto L69bfd1;
case 0x69bfd4:c.instructions+=6;goto B69bfd4;
case 0x69bfd7:c.instructions+=5;goto B69bfd7;
case 0x69bfda:c.instructions+=4;goto B69bfda;
case 0x69bfdd:c.instructions+=3;goto B69bfdd;
case 0x69bfe0:c.instructions+=2;goto B69bfe0;
case 0x69bfe4:c.instructions+=1;goto B69bfe4;
case 0x69bfe6:goto L69bfe6;
case 0x69bfe9:c.instructions+=4;goto B69bfe9;
case 0x69bfec:c.instructions+=3;goto B69bfec;
case 0x69bfef:c.instructions+=2;goto B69bfef;
case 0x69bff2:c.instructions+=1;goto B69bff2;
case 0x69bff4:goto L69bff4;
case 0x69bff6:goto L69bff6;
case 0x69bff9:goto L69bff9;
case 0x69bffd:c.instructions+=1;goto B69bffd;
default:missing_instruction(c.pc);}
B69b003:L69b003:{c.instructions+=4;NFSU2_TR(0x69b003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b006:{NFSU2_TR(0x69b006);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69b008:{NFSU2_TR(0x69b008);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b00a:{NFSU2_TR(0x69b00a);
if(r1(R+518)){{goto L69b16e;}}
}
B69b010:L69b010:{c.instructions+=2;NFSU2_TR(0x69b010);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b014:{NFSU2_TR(0x69b014);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b020;}}
}
B69b016:L69b016:{c.instructions+=2;NFSU2_TR(0x69b016);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69b01a:{NFSU2_TR(0x69b01a);
if(r1(R+518)){{goto L69b16e;}}
}
B69b020:L69b020:{c.instructions+=2;NFSU2_TR(0x69b020);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b024:{NFSU2_TR(0x69b024);
if(r1(R+518)){{goto L69b035;}}
}
B69b026:L69b026:{c.instructions+=2;NFSU2_TR(0x69b026);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b029:{NFSU2_TR(0x69b029);
if(r1(R+518)){{goto L69b035;}}
}
B69b02b:L69b02b:{c.instructions+=2;NFSU2_TR(0x69b02b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69b02f:{NFSU2_TR(0x69b02f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b16e;}}
}
B69b035:L69b035:{c.instructions+=3;NFSU2_TR(0x69b035);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69b037:{NFSU2_TR(0x69b037);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69b03a:{NFSU2_TR(0x69b03a);
if(r1(R+518)){{goto L69b165;}}
}
B69b040:L69b040:{c.instructions+=6;NFSU2_TR(0x69b040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b043:{NFSU2_TR(0x69b043);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b046:{NFSU2_TR(0x69b046);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69b049:{NFSU2_TR(0x69b049);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b04c:{NFSU2_TR(0x69b04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b04f:{NFSU2_TR(0x69b04f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b052:L69b052:{c.instructions+=6;NFSU2_TR(0x69b052);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b056:{NFSU2_TR(0x69b056);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b059:{NFSU2_TR(0x69b059);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69b05c:{NFSU2_TR(0x69b05c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b05f:{NFSU2_TR(0x69b05f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b062:{NFSU2_TR(0x69b062);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b06f;}}
}
B69b064:L69b064:{c.instructions+=4;NFSU2_TR(0x69b064);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b067:{NFSU2_TR(0x69b067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b06a:{NFSU2_TR(0x69b06a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b06d:{NFSU2_TR(0x69b06d);
{goto L69b084;}
}
B69b06f:L69b06f:{c.instructions+=7;NFSU2_TR(0x69b06f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b072:{NFSU2_TR(0x69b072);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b075:{NFSU2_TR(0x69b075);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b078:{NFSU2_TR(0x69b078);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b07b:{NFSU2_TR(0x69b07b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b07e:{NFSU2_TR(0x69b07e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b081:{NFSU2_TR(0x69b081);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b084:L69b084:{c.instructions+=8;NFSU2_TR(0x69b084);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b087:{NFSU2_TR(0x69b087);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b08a:{NFSU2_TR(0x69b08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b08d:{NFSU2_TR(0x69b08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b090:{NFSU2_TR(0x69b090);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b093:{NFSU2_TR(0x69b093);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b096:{NFSU2_TR(0x69b096);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69b09a:{NFSU2_TR(0x69b09a);
if(r1(R+518)){{goto L69b0b3;}}
}
B69b09c:L69b09c:{c.instructions+=3;NFSU2_TR(0x69b09c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b09f:{NFSU2_TR(0x69b09f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b0a3:{NFSU2_TR(0x69b0a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b0b3;}}
}
B69b0a5:L69b0a5:{c.instructions+=6;NFSU2_TR(0x69b0a5);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b0a8:{NFSU2_TR(0x69b0a8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B69b0aa:{NFSU2_TR(0x69b0aa);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69b0ac:{NFSU2_TR(0x69b0ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b0ae:{NFSU2_TR(0x69b0ae);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69b0b1:{NFSU2_TR(0x69b0b1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L69b0f5;}}
}
B69b0b3:L69b0b3:{c.instructions+=5;NFSU2_TR(0x69b0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b0b6:{NFSU2_TR(0x69b0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b0b9:{NFSU2_TR(0x69b0b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b0bc:{NFSU2_TR(0x69b0bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69b0c0:{NFSU2_TR(0x69b0c0);
if(r1(R+518)){{goto L69b0d9;}}
}
B69b0c2:L69b0c2:{c.instructions+=3;NFSU2_TR(0x69b0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b0c5:{NFSU2_TR(0x69b0c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b0c9:{NFSU2_TR(0x69b0c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b0d9;}}
}
B69b0cb:L69b0cb:{c.instructions+=6;NFSU2_TR(0x69b0cb);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b0ce:{NFSU2_TR(0x69b0ce);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B69b0d0:{NFSU2_TR(0x69b0d0);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69b0d2:{NFSU2_TR(0x69b0d2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b0d4:{NFSU2_TR(0x69b0d4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69b0d7:{NFSU2_TR(0x69b0d7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L69b0f5;}}
}
B69b0d9:L69b0d9:{c.instructions+=9;NFSU2_TR(0x69b0d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b0dc:{NFSU2_TR(0x69b0dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69b0df:{NFSU2_TR(0x69b0df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69b0e2:{NFSU2_TR(0x69b0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b0e5:{NFSU2_TR(0x69b0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b0e8:{NFSU2_TR(0x69b0e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69b0eb:{NFSU2_TR(0x69b0eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69b0ee:{NFSU2_TR(0x69b0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69b0f2:{NFSU2_TR(0x69b0f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69b0f5:L69b0f5:{c.instructions+=6;NFSU2_TR(0x69b0f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b0f8:{NFSU2_TR(0x69b0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69b0fc:{NFSU2_TR(0x69b0fc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69b0fd:{NFSU2_TR(0x69b0fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69b100:{NFSU2_TR(0x69b100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b103:{NFSU2_TR(0x69b103);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b052u);}goto L69b052;}}
}
B69b109:L69b109:{c.instructions+=10;NFSU2_TR(0x69b109);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b10c:{NFSU2_TR(0x69b10c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B69b10e:{NFSU2_TR(0x69b10e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b111:{NFSU2_TR(0x69b111);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69b114:{NFSU2_TR(0x69b114);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69b117:{NFSU2_TR(0x69b117);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B69b11a:{NFSU2_TR(0x69b11a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B69b11d:{NFSU2_TR(0x69b11d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B69b11f:{NFSU2_TR(0x69b11f);
__builtin_memmove((R+0),(R+4),4);
}
B69b121:{NFSU2_TR(0x69b121);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B69b124:L69b124:{c.instructions+=1;NFSU2_TR(0x69b124);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L69b126;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b124u);}goto L69b124;}
}
B69b126:L69b126:{c.instructions+=2;NFSU2_TR(0x69b126);
__builtin_memmove((R+4),(R+0),4);
}
B69b128:{NFSU2_TR(0x69b128);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B69b12b:L69b12b:{c.instructions+=1;NFSU2_TR(0x69b12b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L69b12d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b12bu);}goto L69b12b;}
}
B69b12d:L69b12d:{c.instructions+=5;NFSU2_TR(0x69b12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69b130:{NFSU2_TR(0x69b130);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69b132:{NFSU2_TR(0x69b132);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69b133:{NFSU2_TR(0x69b133);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b135:{NFSU2_TR(0x69b135);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b13e;}}
}
B69b137:L69b137:{c.instructions+=2;NFSU2_TR(0x69b137);
w4(R+0,u32(0x20500001ull));
}
B69b13c:{NFSU2_TR(0x69b13c);
{goto L69b14a;}
}
B69b13e:L69b13e:{c.instructions+=3;NFSU2_TR(0x69b13e);
__builtin_memmove((R+0),(R+24),4);
}
B69b140:{NFSU2_TR(0x69b140);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69b145:{NFSU2_TR(0x69b145);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50000000ull))));
}
B69b14a:L69b14a:{c.instructions+=10;NFSU2_TR(0x69b14a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B69b14c:{NFSU2_TR(0x69b14c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69b14f:{NFSU2_TR(0x69b14f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b152:{NFSU2_TR(0x69b152);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69b154:{NFSU2_TR(0x69b154);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b157:{NFSU2_TR(0x69b157);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b15a:{NFSU2_TR(0x69b15a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B69b15d:{NFSU2_TR(0x69b15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b160:{NFSU2_TR(0x69b160);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b163:{NFSU2_TR(0x69b163);
{goto L69b170;}
}
B69b165:L69b165:{c.instructions+=3;NFSU2_TR(0x69b165);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B69b167:{NFSU2_TR(0x69b167);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B69b169:{NFSU2_TR(0x69b169);
{goto L69b2f6;}
}
B69b16e:L69b16e:{c.instructions+=1;NFSU2_TR(0x69b16e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B69b170:L69b170:{c.instructions+=2;NFSU2_TR(0x69b170);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b174:{NFSU2_TR(0x69b174);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69b18a;}}
}
B69b176:L69b176:{c.instructions+=2;NFSU2_TR(0x69b176);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b17a:{NFSU2_TR(0x69b17a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b2e9;}}
}
B69b180:L69b180:{c.instructions+=2;NFSU2_TR(0x69b180);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69b184:{NFSU2_TR(0x69b184);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b2e9;}}
}
B69b18a:L69b18a:{c.instructions+=5;NFSU2_TR(0x69b18a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b18d:{NFSU2_TR(0x69b18d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69b18f:{NFSU2_TR(0x69b18f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69b191:{NFSU2_TR(0x69b191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b194:{NFSU2_TR(0x69b194);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69b23e;}}
}
B69b19a:L69b19a:{c.instructions+=3;NFSU2_TR(0x69b19a);
__builtin_memmove((R+28),(R+0),4);
}
B69b19c:{NFSU2_TR(0x69b19c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B69b19f:{NFSU2_TR(0x69b19f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b1a2:L69b1a2:{c.instructions+=2;NFSU2_TR(0x69b1a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b1a6:{NFSU2_TR(0x69b1a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b1bc;}}
}
B69b1a8:L69b1a8:{c.instructions+=7;NFSU2_TR(0x69b1a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b1ab:{NFSU2_TR(0x69b1ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b1ae:{NFSU2_TR(0x69b1ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69b1b1:{NFSU2_TR(0x69b1b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b1b4:{NFSU2_TR(0x69b1b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69b1b7:{NFSU2_TR(0x69b1b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69b1ba:{NFSU2_TR(0x69b1ba);
{goto L69b1da;}
}
B69b1bc:L69b1bc:{c.instructions+=10;NFSU2_TR(0x69b1bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b1bf:{NFSU2_TR(0x69b1bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69b1c2:{NFSU2_TR(0x69b1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b1c5:{NFSU2_TR(0x69b1c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69b1c8:{NFSU2_TR(0x69b1c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69b1cb:{NFSU2_TR(0x69b1cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69b1ce:{NFSU2_TR(0x69b1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69b1d1:{NFSU2_TR(0x69b1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b1d4:{NFSU2_TR(0x69b1d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69b1d7:{NFSU2_TR(0x69b1d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69b1da:L69b1da:{c.instructions+=5;NFSU2_TR(0x69b1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b1dd:{NFSU2_TR(0x69b1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b1e0:{NFSU2_TR(0x69b1e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b1e3:{NFSU2_TR(0x69b1e3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69b1e7:{NFSU2_TR(0x69b1e7);
if(r1(R+518)){{goto L69b201;}}
}
B69b1e9:L69b1e9:{c.instructions+=2;NFSU2_TR(0x69b1e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b1ed:{NFSU2_TR(0x69b1ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b201;}}
}
B69b1ef:L69b1ef:{c.instructions+=6;NFSU2_TR(0x69b1ef);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b1f2:{NFSU2_TR(0x69b1f2);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b1f8:{NFSU2_TR(0x69b1f8);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69b1fa:{NFSU2_TR(0x69b1fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b1fc:{NFSU2_TR(0x69b1fc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69b1ff:{NFSU2_TR(0x69b1ff);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L69b225;}}
}
B69b201:L69b201:{c.instructions+=4;NFSU2_TR(0x69b201);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b204:{NFSU2_TR(0x69b204);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b207:{NFSU2_TR(0x69b207);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69b20b:{NFSU2_TR(0x69b20b);
if(r1(R+518)){{goto L69b23e;}}
}
B69b20d:L69b20d:{c.instructions+=2;NFSU2_TR(0x69b20d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b211:{NFSU2_TR(0x69b211);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b23e;}}
}
B69b213:L69b213:{c.instructions+=6;NFSU2_TR(0x69b213);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b216:{NFSU2_TR(0x69b216);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b21c:{NFSU2_TR(0x69b21c);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69b21e:{NFSU2_TR(0x69b21e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b220:{NFSU2_TR(0x69b220);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69b223:{NFSU2_TR(0x69b223);
if(r1(R+514)){{goto L69b23e;}}
}
B69b225:L69b225:{c.instructions+=8;NFSU2_TR(0x69b225);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69b228:{NFSU2_TR(0x69b228);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b22b:{NFSU2_TR(0x69b22b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B69b22c:{NFSU2_TR(0x69b22c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B69b22f:{NFSU2_TR(0x69b22f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B69b232:{NFSU2_TR(0x69b232);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b235:{NFSU2_TR(0x69b235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b238:{NFSU2_TR(0x69b238);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b1a2u);}goto L69b1a2;}}
}
B69b23e:L69b23e:{c.instructions+=3;NFSU2_TR(0x69b23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b241:{NFSU2_TR(0x69b241);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b244:{NFSU2_TR(0x69b244);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b2e9;}}
}
B69b24a:L69b24a:{c.instructions+=4;NFSU2_TR(0x69b24a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69b24c:{NFSU2_TR(0x69b24c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69b24e:{NFSU2_TR(0x69b24e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b251:{NFSU2_TR(0x69b251);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69b2c2;}}
}
B69b253:L69b253:{c.instructions+=2;NFSU2_TR(0x69b253);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69b256:{NFSU2_TR(0x69b256);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b259:L69b259:{c.instructions+=4;NFSU2_TR(0x69b259);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b25d:{NFSU2_TR(0x69b25d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b260:{NFSU2_TR(0x69b260);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B69b263:{NFSU2_TR(0x69b263);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b26f;}}
}
B69b265:L69b265:{c.instructions+=4;NFSU2_TR(0x69b265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b267:{NFSU2_TR(0x69b267);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b26a:{NFSU2_TR(0x69b26a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b26d:{NFSU2_TR(0x69b26d);
{goto L69b27d;}
}
B69b26f:L69b26f:{c.instructions+=5;NFSU2_TR(0x69b26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b272:{NFSU2_TR(0x69b272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69b274:{NFSU2_TR(0x69b274);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b277:{NFSU2_TR(0x69b277);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b27a:{NFSU2_TR(0x69b27a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b27d:L69b27d:{c.instructions+=6;NFSU2_TR(0x69b27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b280:{NFSU2_TR(0x69b280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b283:{NFSU2_TR(0x69b283);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b286:{NFSU2_TR(0x69b286);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b289:{NFSU2_TR(0x69b289);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69b28d:{NFSU2_TR(0x69b28d);
if(r1(R+518)){{goto L69b2b2;}}
}
B69b28f:L69b28f:{c.instructions+=3;NFSU2_TR(0x69b28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b292:{NFSU2_TR(0x69b292);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b296:{NFSU2_TR(0x69b296);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b2b2;}}
}
B69b298:L69b298:{c.instructions+=6;NFSU2_TR(0x69b298);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b29b:{NFSU2_TR(0x69b29b);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b2a1:{NFSU2_TR(0x69b2a1);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69b2a3:{NFSU2_TR(0x69b2a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b2a5:{NFSU2_TR(0x69b2a5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69b2a8:{NFSU2_TR(0x69b2a8);
if(r1(R+514)){{goto L69b2b2;}}
}
B69b2aa:L69b2aa:{c.instructions+=3;NFSU2_TR(0x69b2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b2ad:{NFSU2_TR(0x69b2ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b2b0:{NFSU2_TR(0x69b2b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B69b2b2:L69b2b2:{c.instructions+=6;NFSU2_TR(0x69b2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b2b5:{NFSU2_TR(0x69b2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69b2b9:{NFSU2_TR(0x69b2b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69b2ba:{NFSU2_TR(0x69b2ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69b2bd:{NFSU2_TR(0x69b2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b2c0:{NFSU2_TR(0x69b2c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b259u);}goto L69b259;}}
}
B69b2c2:L69b2c2:{c.instructions+=4;NFSU2_TR(0x69b2c2);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b2c4:{NFSU2_TR(0x69b2c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b2c5:{NFSU2_TR(0x69b2c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b2c8:{NFSU2_TR(0x69b2c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b2d5;}}
}
B69b2ca:L69b2ca:{c.instructions+=3;NFSU2_TR(0x69b2ca);
u8 U[4];
w4(U+0,u32(0x20400001ull));
s4(u32(r4(R+8)),r4(U+0));
}
B69b2d0:{NFSU2_TR(0x69b2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b2d3:{NFSU2_TR(0x69b2d3);
{goto L69b2e2;}
}
B69b2d5:L69b2d5:{c.instructions+=2;NFSU2_TR(0x69b2d5);
u8 U[4];
w4(U+0,u32(0x10000001ull));
s4(u32(r4(R+8)),r4(U+0));
}
B69b2db:{NFSU2_TR(0x69b2db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69b2e2:L69b2e2:{c.instructions+=1;NFSU2_TR(0x69b2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69b2e9:L69b2e9:{c.instructions+=4;NFSU2_TR(0x69b2e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69b2eb:{NFSU2_TR(0x69b2eb);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B69b2ee:{NFSU2_TR(0x69b2ee);
__builtin_memmove((R+0),(R+518),1);
}
B69b2f1:{NFSU2_TR(0x69b2f1);
{goto L69b2f6;}
}
B69b2f3:L69b2f3:{c.instructions+=2;NFSU2_TR(0x69b2f3);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69b2f5:{NFSU2_TR(0x69b2f5);
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
B69b2f6:L69b2f6:{c.instructions+=5;NFSU2_TR(0x69b2f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69b2f7:{NFSU2_TR(0x69b2f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69b2f8:{NFSU2_TR(0x69b2f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69b2f9:{NFSU2_TR(0x69b2f9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69b2fa:{NFSU2_TR(0x69b2fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69b2fd:L69b2fd:{c.instructions+=8;NFSU2_TR(0x69b2fd);
__builtin_memmove((R+28),(R+28),4);
}
B69b2ff:{NFSU2_TR(0x69b2ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b300:{NFSU2_TR(0x69b300);
__builtin_memmove((R+20),(R+16),4);
}
B69b302:{NFSU2_TR(0x69b302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b305:{NFSU2_TR(0x69b305);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b308:{NFSU2_TR(0x69b308);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b309:{NFSU2_TR(0x69b309);
__builtin_memmove((R+28),(R+4),4);
}
B69b30b:{NFSU2_TR(0x69b30b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b315;}}
}
B69b30d:L69b30d:{c.instructions+=3;NFSU2_TR(0x69b30d);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69b30f:{NFSU2_TR(0x69b30f);
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
B69b310:{NFSU2_TR(0x69b310);
{goto L69b3d5;}
}
B69b315:L69b315:{c.instructions+=8;NFSU2_TR(0x69b315);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b318:{NFSU2_TR(0x69b318);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b31b:{NFSU2_TR(0x69b31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b31e:{NFSU2_TR(0x69b31e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b31f:{NFSU2_TR(0x69b31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69b322:{NFSU2_TR(0x69b322);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69b325:{NFSU2_TR(0x69b325);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69b329:{NFSU2_TR(0x69b329);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b332;}}
}
B69b32b:L69b32b:{c.instructions+=2;NFSU2_TR(0x69b32b);
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
B69b32d:{NFSU2_TR(0x69b32d);
{goto L69b3d4;}
}
B69b332:L69b332:{c.instructions+=8;NFSU2_TR(0x69b332);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b335:{NFSU2_TR(0x69b335);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b338:{NFSU2_TR(0x69b338);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69b33b:{NFSU2_TR(0x69b33b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b33d:{NFSU2_TR(0x69b33d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B69b342:{NFSU2_TR(0x69b342);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69b347:{NFSU2_TR(0x69b347);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b348:{NFSU2_TR(0x69b348);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b37e;}}
}
B69b34a:L69b34a:{c.instructions+=4;NFSU2_TR(0x69b34a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69b34d:{NFSU2_TR(0x69b34d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69b34f:{NFSU2_TR(0x69b34f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69b351:{NFSU2_TR(0x69b351);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69b362;}}
}
B69b353:L69b353:{c.instructions+=1;NFSU2_TR(0x69b353);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b356:L69b356:{c.instructions+=2;NFSU2_TR(0x69b356);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69b358:{NFSU2_TR(0x69b358);
if(r1(R+518)){{goto L69b362;}}
}
B69b35a:L69b35a:{c.instructions+=4;NFSU2_TR(0x69b35a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69b35b:{NFSU2_TR(0x69b35b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B69b35e:{NFSU2_TR(0x69b35e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B69b360:{NFSU2_TR(0x69b360);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b356u);}goto L69b356;}}
}
B69b362:L69b362:{c.instructions+=5;NFSU2_TR(0x69b362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b365:{NFSU2_TR(0x69b365);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69b368:{NFSU2_TR(0x69b368);
__builtin_memmove((R+4),(R+28),4);
}
B69b36a:{NFSU2_TR(0x69b36a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b36d:{NFSU2_TR(0x69b36d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b372ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b2fdu);}goto L69b2fd;}
}
B69b372:L69b372:{c.instructions+=2;NFSU2_TR(0x69b372);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69b374:{NFSU2_TR(0x69b374);
if(r1(R+518)){{goto L69b37b;}}
}
B69b376:L69b376:{c.instructions+=3;NFSU2_TR(0x69b376);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69b378:{NFSU2_TR(0x69b378);
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
B69b379:{NFSU2_TR(0x69b379);
{goto L69b3d3;}
}
B69b37b:L69b37b:{c.instructions+=1;NFSU2_TR(0x69b37b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b37e:L69b37e:{c.instructions+=4;NFSU2_TR(0x69b37e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b380:{NFSU2_TR(0x69b380);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B69b385:{NFSU2_TR(0x69b385);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69b38a:{NFSU2_TR(0x69b38a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b3d1;}}
}
B69b38c:L69b38c:{c.instructions+=4;NFSU2_TR(0x69b38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b38f:{NFSU2_TR(0x69b38f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69b391:{NFSU2_TR(0x69b391);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69b393:{NFSU2_TR(0x69b393);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69b3a4;}}
}
B69b395:L69b395:{c.instructions+=1;NFSU2_TR(0x69b395);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b398:L69b398:{c.instructions+=2;NFSU2_TR(0x69b398);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69b39a:{NFSU2_TR(0x69b39a);
if(r1(R+518)){{goto L69b3a4;}}
}
B69b39c:L69b39c:{c.instructions+=4;NFSU2_TR(0x69b39c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69b39d:{NFSU2_TR(0x69b39d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B69b3a0:{NFSU2_TR(0x69b3a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B69b3a2:{NFSU2_TR(0x69b3a2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b398u);}goto L69b398;}}
}
B69b3a4:L69b3a4:{c.instructions+=5;NFSU2_TR(0x69b3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b3a7:{NFSU2_TR(0x69b3a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69b3aa:{NFSU2_TR(0x69b3aa);
__builtin_memmove((R+4),(R+28),4);
}
B69b3ac:{NFSU2_TR(0x69b3ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b3af:{NFSU2_TR(0x69b3af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b3b4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b2fdu);}goto L69b2fd;}
}
B69b3b4:L69b3b4:{c.instructions+=2;NFSU2_TR(0x69b3b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69b3b6:{NFSU2_TR(0x69b3b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b376u);}goto L69b376;}}
}
B69b3b8:L69b3b8:{c.instructions+=7;NFSU2_TR(0x69b3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b3bb:{NFSU2_TR(0x69b3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b3be:{NFSU2_TR(0x69b3be);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B69b3c0:{NFSU2_TR(0x69b3c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69b3c3:{NFSU2_TR(0x69b3c3);
__builtin_memmove((R+4),(R+28),4);
}
B69b3c5:{NFSU2_TR(0x69b3c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b3c8:{NFSU2_TR(0x69b3c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b3cdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b2fdu);}goto L69b2fd;}
}
B69b3cd:L69b3cd:{c.instructions+=2;NFSU2_TR(0x69b3cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69b3cf:{NFSU2_TR(0x69b3cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b376u);}goto L69b376;}}
}
B69b3d1:L69b3d1:{c.instructions+=1;NFSU2_TR(0x69b3d1);
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
B69b3d3:L69b3d3:{c.instructions+=1;NFSU2_TR(0x69b3d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69b3d4:L69b3d4:{c.instructions+=1;NFSU2_TR(0x69b3d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69b3d5:L69b3d5:{c.instructions+=3;NFSU2_TR(0x69b3d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69b3d6:{NFSU2_TR(0x69b3d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69b3d7:{NFSU2_TR(0x69b3d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69b3da:L69b3da:{c.instructions+=14;NFSU2_TR(0x69b3da);
__builtin_memmove((R+28),(R+28),4);
}
B69b3dc:{NFSU2_TR(0x69b3dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b3dd:{NFSU2_TR(0x69b3dd);
__builtin_memmove((R+20),(R+16),4);
}
B69b3df:{NFSU2_TR(0x69b3df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B69b3e2:{NFSU2_TR(0x69b3e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b3e3:{NFSU2_TR(0x69b3e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69b3e6:{NFSU2_TR(0x69b3e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b3e7:{NFSU2_TR(0x69b3e7);
__builtin_memmove((R+24),(R+4),4);
}
B69b3e9:{NFSU2_TR(0x69b3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b3ec:{NFSU2_TR(0x69b3ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69b3ef:{NFSU2_TR(0x69b3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b3f2:{NFSU2_TR(0x69b3f2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69b3f4:{NFSU2_TR(0x69b3f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b3f7:{NFSU2_TR(0x69b3f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b406;}}
}
B69b3f9:L69b3f9:{c.instructions+=2;NFSU2_TR(0x69b3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b3fc:{NFSU2_TR(0x69b3fc);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B69b3fe:L69b3fe:{c.instructions+=2;NFSU2_TR(0x69b3fe);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69b401:{NFSU2_TR(0x69b401);
{goto L69b62a;}
}
B69b406:L69b406:{c.instructions+=3;NFSU2_TR(0x69b406);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b409:{NFSU2_TR(0x69b409);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b40c:{NFSU2_TR(0x69b40c);
if(r1(R+518)){{goto L69b416;}}
}
B69b40e:L69b40e:{c.instructions+=3;NFSU2_TR(0x69b40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b411:{NFSU2_TR(0x69b411);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b414:{NFSU2_TR(0x69b414);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b3feu);}goto L69b3fe;}
}
B69b416:L69b416:{c.instructions+=2;NFSU2_TR(0x69b416);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b41a:{NFSU2_TR(0x69b41a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b3f9u);}goto L69b3f9;}}
}
B69b41c:L69b41c:{c.instructions+=5;NFSU2_TR(0x69b41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b41f:{NFSU2_TR(0x69b41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b422:{NFSU2_TR(0x69b422);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b425:{NFSU2_TR(0x69b425);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69b429:{NFSU2_TR(0x69b429);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b3f9u);}goto L69b3f9;}}
}
B69b42b:L69b42b:{c.instructions+=8;NFSU2_TR(0x69b42b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b42e:{NFSU2_TR(0x69b42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b431:{NFSU2_TR(0x69b431);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69b434:{NFSU2_TR(0x69b434);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b437:{NFSU2_TR(0x69b437);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69b439:{NFSU2_TR(0x69b439);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69b43b:{NFSU2_TR(0x69b43b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b43c:{NFSU2_TR(0x69b43c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69b44d;}}
}
B69b43e:L69b43e:{c.instructions+=1;NFSU2_TR(0x69b43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b441:L69b441:{c.instructions+=2;NFSU2_TR(0x69b441);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69b443:{NFSU2_TR(0x69b443);
if(r1(R+518)){{goto L69b44d;}}
}
B69b445:L69b445:{c.instructions+=4;NFSU2_TR(0x69b445);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69b446:{NFSU2_TR(0x69b446);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B69b449:{NFSU2_TR(0x69b449);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B69b44b:{NFSU2_TR(0x69b44b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b441u);}goto L69b441;}}
}
B69b44d:L69b44d:{c.instructions+=2;NFSU2_TR(0x69b44d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b44f:{NFSU2_TR(0x69b44f);
if(r1(R+518)){{goto L69b621;}}
}
B69b455:L69b455:{c.instructions+=4;NFSU2_TR(0x69b455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69b457:{NFSU2_TR(0x69b457);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfff00000ull))));
}
B69b45d:{NFSU2_TR(0x69b45d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b463:{NFSU2_TR(0x69b463);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b48b;}}
}
B69b465:L69b465:{c.instructions+=9;NFSU2_TR(0x69b465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69b469:{NFSU2_TR(0x69b469);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b46c:{NFSU2_TR(0x69b46c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B69b46f:{NFSU2_TR(0x69b46f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b470:{NFSU2_TR(0x69b470);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B69b473:{NFSU2_TR(0x69b473);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b474:{NFSU2_TR(0x69b474);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69b477:{NFSU2_TR(0x69b477);
__builtin_memmove((R+4),(R+24),4);
}
B69b479:{NFSU2_TR(0x69b479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b47eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b3dau);}goto L69b3da;}
}
B69b47e:L69b47e:{c.instructions+=2;NFSU2_TR(0x69b47e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B69b480:{NFSU2_TR(0x69b480);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L69b629;}}
}
B69b486:L69b486:{c.instructions+=1;NFSU2_TR(0x69b486);
{goto L69b621;}
}
B69b48b:L69b48b:{c.instructions+=2;NFSU2_TR(0x69b48b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b491:{NFSU2_TR(0x69b491);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b4be;}}
}
B69b493:L69b493:{c.instructions+=9;NFSU2_TR(0x69b493);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69b497:{NFSU2_TR(0x69b497);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b49a:{NFSU2_TR(0x69b49a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B69b49d:{NFSU2_TR(0x69b49d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b49e:{NFSU2_TR(0x69b49e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B69b4a1:{NFSU2_TR(0x69b4a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b4a2:{NFSU2_TR(0x69b4a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69b4a5:{NFSU2_TR(0x69b4a5);
__builtin_memmove((R+4),(R+24),4);
}
B69b4a7:{NFSU2_TR(0x69b4a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b4acull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b3dau);}goto L69b3da;}
}
B69b4ac:L69b4ac:{c.instructions+=2;NFSU2_TR(0x69b4ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B69b4ae:{NFSU2_TR(0x69b4ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69b621;}}
}
B69b4b4:L69b4b4:{c.instructions+=3;NFSU2_TR(0x69b4b4);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b4b7:{NFSU2_TR(0x69b4b7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B69b4b9:{NFSU2_TR(0x69b4b9);
{goto L69b626;}
}
B69b4be:L69b4be:{c.instructions+=2;NFSU2_TR(0x69b4be);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b4c4:{NFSU2_TR(0x69b4c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b564;}}
}
B69b4ca:L69b4ca:{c.instructions+=8;NFSU2_TR(0x69b4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b4cd:{NFSU2_TR(0x69b4cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b4d0:{NFSU2_TR(0x69b4d0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B69b4d2:{NFSU2_TR(0x69b4d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69b4d5:{NFSU2_TR(0x69b4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69b4d9:{NFSU2_TR(0x69b4d9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b4db:{NFSU2_TR(0x69b4db);
__builtin_memmove((R+4),(R+24),4);
}
B69b4dd:{NFSU2_TR(0x69b4dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b4ff;}}
}
B69b4df:L69b4df:{c.instructions+=6;NFSU2_TR(0x69b4df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b4e2:{NFSU2_TR(0x69b4e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b4e3:{NFSU2_TR(0x69b4e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b4e6:{NFSU2_TR(0x69b4e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b4e7:{NFSU2_TR(0x69b4e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b4e8:{NFSU2_TR(0x69b4e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b4edull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b3dau);}goto L69b3da;}
}
B69b4ed:L69b4ed:{c.instructions+=2;NFSU2_TR(0x69b4ed);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B69b4ef:{NFSU2_TR(0x69b4ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69b61e;}}
}
B69b4f5:L69b4f5:{c.instructions+=3;NFSU2_TR(0x69b4f5);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b4f8:{NFSU2_TR(0x69b4f8);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B69b4fa:{NFSU2_TR(0x69b4fa);
{goto L69b626;}
}
B69b4ff:L69b4ff:{c.instructions+=6;NFSU2_TR(0x69b4ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b502:{NFSU2_TR(0x69b502);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b503:{NFSU2_TR(0x69b503);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b506:{NFSU2_TR(0x69b506);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b507:{NFSU2_TR(0x69b507);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b508:{NFSU2_TR(0x69b508);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b50dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b3dau);}goto L69b3da;}
}
B69b50d:L69b50d:{c.instructions+=2;NFSU2_TR(0x69b50d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B69b50f:{NFSU2_TR(0x69b50f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69b525;}}
}
B69b511:L69b511:{c.instructions+=7;NFSU2_TR(0x69b511);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b514:{NFSU2_TR(0x69b514);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b515:{NFSU2_TR(0x69b515);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b518:{NFSU2_TR(0x69b518);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b519:{NFSU2_TR(0x69b519);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b51a:{NFSU2_TR(0x69b51a);
__builtin_memmove((R+4),(R+24),4);
}
B69b51c:{NFSU2_TR(0x69b51c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b521ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b3dau);}goto L69b3da;}
}
B69b521:L69b521:{c.instructions+=2;NFSU2_TR(0x69b521);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B69b523:{NFSU2_TR(0x69b523);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L69b559;}}
}
B69b525:L69b525:{c.instructions+=8;NFSU2_TR(0x69b525);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69b529:{NFSU2_TR(0x69b529);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b52c:{NFSU2_TR(0x69b52c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b52d:{NFSU2_TR(0x69b52d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b530:{NFSU2_TR(0x69b530);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b531:{NFSU2_TR(0x69b531);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b532:{NFSU2_TR(0x69b532);
__builtin_memmove((R+4),(R+24),4);
}
B69b534:{NFSU2_TR(0x69b534);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b539ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b3dau);}goto L69b3da;}
}
B69b539:L69b539:{c.instructions+=2;NFSU2_TR(0x69b539);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B69b53b:{NFSU2_TR(0x69b53b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69b61e;}}
}
B69b541:L69b541:{c.instructions+=7;NFSU2_TR(0x69b541);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b544:{NFSU2_TR(0x69b544);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b545:{NFSU2_TR(0x69b545);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b548:{NFSU2_TR(0x69b548);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b549:{NFSU2_TR(0x69b549);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b54a:{NFSU2_TR(0x69b54a);
__builtin_memmove((R+4),(R+24),4);
}
B69b54c:{NFSU2_TR(0x69b54c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b551ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b3dau);}goto L69b3da;}
}
B69b551:L69b551:{c.instructions+=2;NFSU2_TR(0x69b551);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B69b553:{NFSU2_TR(0x69b553);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69b61e;}}
}
B69b559:L69b559:{c.instructions+=3;NFSU2_TR(0x69b559);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b55c:{NFSU2_TR(0x69b55c);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B69b55f:{NFSU2_TR(0x69b55f);
{goto L69b626;}
}
B69b564:L69b564:{c.instructions+=2;NFSU2_TR(0x69b564);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b56a:{NFSU2_TR(0x69b56a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b621;}}
}
B69b570:L69b570:{c.instructions+=8;NFSU2_TR(0x69b570);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b573:{NFSU2_TR(0x69b573);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b576:{NFSU2_TR(0x69b576);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B69b578:{NFSU2_TR(0x69b578);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69b57b:{NFSU2_TR(0x69b57b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b57d:{NFSU2_TR(0x69b57d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b580:{NFSU2_TR(0x69b580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b583:{NFSU2_TR(0x69b583);
if(r1(R+518)){{goto L69b621;}}
}
B69b589:L69b589:{c.instructions+=10;NFSU2_TR(0x69b589);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b58c:{NFSU2_TR(0x69b58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b58f:{NFSU2_TR(0x69b58f);
__builtin_memmove((R+28),(R+8),4);
}
B69b591:{NFSU2_TR(0x69b591);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B69b594:{NFSU2_TR(0x69b594);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b597:{NFSU2_TR(0x69b597);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69b59a:{NFSU2_TR(0x69b59a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69b59d:{NFSU2_TR(0x69b59d);
w4(R+12,u32(0x100ull));
}
B69b5a2:{NFSU2_TR(0x69b5a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69b5a5:{NFSU2_TR(0x69b5a5);
if(r1(R+518)){{goto L69b5d2;}}
}
B69b5a7:L69b5a7:{c.instructions+=2;NFSU2_TR(0x69b5a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b5ab:{NFSU2_TR(0x69b5ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b5d2;}}
}
B69b5ad:L69b5ad:{c.instructions+=8;NFSU2_TR(0x69b5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69b5b1:{NFSU2_TR(0x69b5b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b5b4:{NFSU2_TR(0x69b5b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b5b5:{NFSU2_TR(0x69b5b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b5b8:{NFSU2_TR(0x69b5b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b5b9:{NFSU2_TR(0x69b5b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b5bc:{NFSU2_TR(0x69b5bc);
__builtin_memmove((R+4),(R+24),4);
}
B69b5be:{NFSU2_TR(0x69b5be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b5c3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b3dau);}goto L69b3da;}
}
B69b5c3:L69b5c3:{c.instructions+=2;NFSU2_TR(0x69b5c3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B69b5c5:{NFSU2_TR(0x69b5c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69b5cf;}}
}
B69b5c7:L69b5c7:{c.instructions+=3;NFSU2_TR(0x69b5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b5ca:{NFSU2_TR(0x69b5ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b5cd:{NFSU2_TR(0x69b5cd);
{goto L69b616;}
}
B69b5cf:L69b5cf:{c.instructions+=1;NFSU2_TR(0x69b5cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b5d2:L69b5d2:{c.instructions+=10;NFSU2_TR(0x69b5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b5d5:{NFSU2_TR(0x69b5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b5d8:{NFSU2_TR(0x69b5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b5db:{NFSU2_TR(0x69b5db);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69b5de:{NFSU2_TR(0x69b5de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b5e1:{NFSU2_TR(0x69b5e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b5e4:{NFSU2_TR(0x69b5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b5e7:{NFSU2_TR(0x69b5e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69b5ea:{NFSU2_TR(0x69b5ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69b5ed:{NFSU2_TR(0x69b5ed);
if(r1(R+518)){{goto L69b61e;}}
}
B69b5ef:L69b5ef:{c.instructions+=2;NFSU2_TR(0x69b5ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b5f3:{NFSU2_TR(0x69b5f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b61e;}}
}
B69b5f5:L69b5f5:{c.instructions+=8;NFSU2_TR(0x69b5f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69b5f9:{NFSU2_TR(0x69b5f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b5fc:{NFSU2_TR(0x69b5fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b5fd:{NFSU2_TR(0x69b5fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B69b600:{NFSU2_TR(0x69b600);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b601:{NFSU2_TR(0x69b601);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b602:{NFSU2_TR(0x69b602);
__builtin_memmove((R+4),(R+24),4);
}
B69b604:{NFSU2_TR(0x69b604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b609ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b3dau);}goto L69b3da;}
}
B69b609:L69b609:{c.instructions+=2;NFSU2_TR(0x69b609);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B69b60b:{NFSU2_TR(0x69b60b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69b61e;}}
}
B69b60d:L69b60d:{c.instructions+=3;NFSU2_TR(0x69b60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b610:{NFSU2_TR(0x69b610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b613:{NFSU2_TR(0x69b613);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b616:L69b616:{c.instructions+=3;NFSU2_TR(0x69b616);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b619:{NFSU2_TR(0x69b619);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B69b61c:{NFSU2_TR(0x69b61c);
{goto L69b626;}
}
B69b61e:L69b61e:{c.instructions+=1;NFSU2_TR(0x69b61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69b621:L69b621:{c.instructions+=2;NFSU2_TR(0x69b621);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B69b623:{NFSU2_TR(0x69b623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b626:L69b626:{c.instructions+=1;NFSU2_TR(0x69b626);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69b629:L69b629:{c.instructions+=1;NFSU2_TR(0x69b629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69b62a:L69b62a:{c.instructions+=6;NFSU2_TR(0x69b62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b62d:{NFSU2_TR(0x69b62d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b62f:{NFSU2_TR(0x69b62f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b632:{NFSU2_TR(0x69b632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69b633:{NFSU2_TR(0x69b633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69b634:{NFSU2_TR(0x69b634);
if(r1(R+518)){{goto L69b642;}}
}
B69b636:L69b636:{c.instructions+=2;NFSU2_TR(0x69b636);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B69b639:{NFSU2_TR(0x69b639);
if(r1(R+518)){{goto L69b642;}}
}
B69b63b:L69b63b:{c.instructions+=2;NFSU2_TR(0x69b63b);
w4(R+0,u32(0x80004005ull));
}
B69b640:{NFSU2_TR(0x69b640);
{goto L69b660;}
}
B69b642:L69b642:{c.instructions+=11;NFSU2_TR(0x69b642);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b645:{NFSU2_TR(0x69b645);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b648:{NFSU2_TR(0x69b648);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b64b:{NFSU2_TR(0x69b64b);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b64e:{NFSU2_TR(0x69b64e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b651:{NFSU2_TR(0x69b651);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69b653:{NFSU2_TR(0x69b653);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69b656:{NFSU2_TR(0x69b656);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b659:{NFSU2_TR(0x69b659);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b65c:{NFSU2_TR(0x69b65c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69b65e:{NFSU2_TR(0x69b65e);
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
B69b660:L69b660:{c.instructions+=2;NFSU2_TR(0x69b660);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69b661:{NFSU2_TR(0x69b661);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69b664:L69b664:{c.instructions+=13;NFSU2_TR(0x69b664);
__builtin_memmove((R+28),(R+28),4);
}
B69b666:{NFSU2_TR(0x69b666);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b667:{NFSU2_TR(0x69b667);
__builtin_memmove((R+20),(R+16),4);
}
B69b669:{NFSU2_TR(0x69b669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B69b66c:{NFSU2_TR(0x69b66c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b66d:{NFSU2_TR(0x69b66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69b670:{NFSU2_TR(0x69b670);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b671:{NFSU2_TR(0x69b671);
__builtin_memmove((R+28),(R+4),4);
}
B69b673:{NFSU2_TR(0x69b673);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b676:{NFSU2_TR(0x69b676);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b679:{NFSU2_TR(0x69b679);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69b67d:{NFSU2_TR(0x69b67d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b680:{NFSU2_TR(0x69b680);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b696;}}
}
B69b682:L69b682:{c.instructions+=2;NFSU2_TR(0x69b682);
u8 U[5];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+4,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B69b685:{NFSU2_TR(0x69b685);
if(r1(R+518)){{goto L69b696;}}
}
B69b687:L69b687:{c.instructions+=5;NFSU2_TR(0x69b687);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b68a:{NFSU2_TR(0x69b68a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b68d:{NFSU2_TR(0x69b68d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69b690:{NFSU2_TR(0x69b690);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B69b694:{NFSU2_TR(0x69b694);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b6a0;}}
}
B69b696:L69b696:{c.instructions+=2;NFSU2_TR(0x69b696);
w4(R+0,u32(0x80004005ull));
}
B69b69b:{NFSU2_TR(0x69b69b);
{goto L69bc6a;}
}
B69b6a0:L69b6a0:{c.instructions+=8;NFSU2_TR(0x69b6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b6a3:{NFSU2_TR(0x69b6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b6a6:{NFSU2_TR(0x69b6a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69b6a9:{NFSU2_TR(0x69b6a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b6ac:{NFSU2_TR(0x69b6ac);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69b6ae:{NFSU2_TR(0x69b6ae);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69b6b0:{NFSU2_TR(0x69b6b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b6b1:{NFSU2_TR(0x69b6b1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69b6c2;}}
}
B69b6b3:L69b6b3:{c.instructions+=1;NFSU2_TR(0x69b6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69b6b6:L69b6b6:{c.instructions+=2;NFSU2_TR(0x69b6b6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69b6b8:{NFSU2_TR(0x69b6b8);
if(r1(R+518)){{goto L69b6c2;}}
}
B69b6ba:L69b6ba:{c.instructions+=4;NFSU2_TR(0x69b6ba);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69b6bb:{NFSU2_TR(0x69b6bb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B69b6be:{NFSU2_TR(0x69b6be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B69b6c0:{NFSU2_TR(0x69b6c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b6b6u);}goto L69b6b6;}}
}
B69b6c2:L69b6c2:{c.instructions+=2;NFSU2_TR(0x69b6c2);
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
B69b6c4:{NFSU2_TR(0x69b6c4);
if(r1(R+518)){{goto L69bc64;}}
}
B69b6ca:L69b6ca:{c.instructions+=4;NFSU2_TR(0x69b6ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B69b6cc:{NFSU2_TR(0x69b6cc);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfff00000ull))));
}
B69b6d2:{NFSU2_TR(0x69b6d2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b6d8:{NFSU2_TR(0x69b6d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b6f1;}}
}
B69b6da:L69b6da:{c.instructions+=8;NFSU2_TR(0x69b6da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b6dd:{NFSU2_TR(0x69b6dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b6e0:{NFSU2_TR(0x69b6e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b6e3:{NFSU2_TR(0x69b6e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b6e6:{NFSU2_TR(0x69b6e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b6e9:{NFSU2_TR(0x69b6e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b6ec:{NFSU2_TR(0x69b6ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69b6ef:{NFSU2_TR(0x69b6ef);
{goto L69b73b;}
}
B69b6f1:L69b6f1:{c.instructions+=2;NFSU2_TR(0x69b6f1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b6f7:{NFSU2_TR(0x69b6f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b74f;}}
}
B69b6f9:L69b6f9:{c.instructions+=12;NFSU2_TR(0x69b6f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b6fc:{NFSU2_TR(0x69b6fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b6ff:{NFSU2_TR(0x69b6ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b702:{NFSU2_TR(0x69b702);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69b705:{NFSU2_TR(0x69b705);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b708:{NFSU2_TR(0x69b708);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B69b70a:{NFSU2_TR(0x69b70a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b70d:{NFSU2_TR(0x69b70d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69b710:{NFSU2_TR(0x69b710);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b713:{NFSU2_TR(0x69b713);
__builtin_memmove((R+4),(R+28),4);
}
B69b715:{NFSU2_TR(0x69b715);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b716:{NFSU2_TR(0x69b716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b71bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b664u);}goto L69b664;}
}
B69b71b:L69b71b:{c.instructions+=2;NFSU2_TR(0x69b71b);
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
B69b71d:{NFSU2_TR(0x69b71d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69bc69;}}
}
B69b723:L69b723:{c.instructions+=2;NFSU2_TR(0x69b723);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b725:{NFSU2_TR(0x69b725);
if(r1(R+518)){{goto L69b823;}}
}
B69b72b:L69b72b:{c.instructions+=6;NFSU2_TR(0x69b72b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b72e:{NFSU2_TR(0x69b72e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b731:{NFSU2_TR(0x69b731);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b734:{NFSU2_TR(0x69b734);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b737:{NFSU2_TR(0x69b737);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69b73a:{NFSU2_TR(0x69b73a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69b73b:L69b73b:{c.instructions+=2;NFSU2_TR(0x69b73b);
__builtin_memmove((R+4),(R+28),4);
}
B69b73d:{NFSU2_TR(0x69b73d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69b742ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b664u);}goto L69b664;}
}
B69b742:L69b742:{c.instructions+=2;NFSU2_TR(0x69b742);
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
B69b744:{NFSU2_TR(0x69b744);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69bc69;}}
}
B69b74a:L69b74a:{c.instructions+=1;NFSU2_TR(0x69b74a);
{goto L69b823;}
}
B69b74f:L69b74f:{c.instructions+=2;NFSU2_TR(0x69b74f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b755:{NFSU2_TR(0x69b755);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b82a;}}
}
B69b75b:L69b75b:{c.instructions+=9;NFSU2_TR(0x69b75b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b75e:{NFSU2_TR(0x69b75e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69b761:{NFSU2_TR(0x69b761);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B69b763:{NFSU2_TR(0x69b763);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69b766:{NFSU2_TR(0x69b766);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b769:{NFSU2_TR(0x69b769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b76b:{NFSU2_TR(0x69b76b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b76e:{NFSU2_TR(0x69b76e);
w4(R+12,u32(0x100ull));
}
B69b773:{NFSU2_TR(0x69b773);
if(r1(R+518)){{goto L69b779;}}
}
B69b775:L69b775:{c.instructions+=2;NFSU2_TR(0x69b775);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b777:{NFSU2_TR(0x69b777);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b7c2;}}
}
B69b779:L69b779:{c.instructions+=8;NFSU2_TR(0x69b779);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b77c:{NFSU2_TR(0x69b77c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b77f:{NFSU2_TR(0x69b77f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b782:{NFSU2_TR(0x69b782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b785:{NFSU2_TR(0x69b785);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b788:{NFSU2_TR(0x69b788);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b78b:{NFSU2_TR(0x69b78b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69b78e:{NFSU2_TR(0x69b78e);
if(r1(R+518)){{goto L69b7c2;}}
}
B69b790:L69b790:{c.instructions+=3;NFSU2_TR(0x69b790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b793:{NFSU2_TR(0x69b793);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b797:{NFSU2_TR(0x69b797);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b7c2;}}
}
B69b799:L69b799:{c.instructions+=4;NFSU2_TR(0x69b799);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b79c:{NFSU2_TR(0x69b79c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b79e:{NFSU2_TR(0x69b79e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b7a1:{NFSU2_TR(0x69b7a1);
if(r1(R+518)){{goto L69b894;}}
}
B69b7a7:L69b7a7:{c.instructions+=8;NFSU2_TR(0x69b7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b7aa:{NFSU2_TR(0x69b7aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b7ad:{NFSU2_TR(0x69b7ad);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b7b0:{NFSU2_TR(0x69b7b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b7b3:{NFSU2_TR(0x69b7b3);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B69b7b6:{NFSU2_TR(0x69b7b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b7b8:{NFSU2_TR(0x69b7b8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69b7bb:{NFSU2_TR(0x69b7bb);
if(r1(R+514)){{goto L69b823;}}
}
B69b7bd:L69b7bd:{c.instructions+=1;NFSU2_TR(0x69b7bd);
{goto L69b894;}
}
B69b7c2:L69b7c2:{c.instructions+=4;NFSU2_TR(0x69b7c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b7c5:{NFSU2_TR(0x69b7c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b7c7:{NFSU2_TR(0x69b7c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b7ca:{NFSU2_TR(0x69b7ca);
if(r1(R+518)){{goto L69b7d4;}}
}
B69b7cc:L69b7cc:{c.instructions+=2;NFSU2_TR(0x69b7cc);
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
B69b7ce:{NFSU2_TR(0x69b7ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bc64;}}
}
B69b7d4:L69b7d4:{c.instructions+=8;NFSU2_TR(0x69b7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b7d7:{NFSU2_TR(0x69b7d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b7da:{NFSU2_TR(0x69b7da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b7dd:{NFSU2_TR(0x69b7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b7e0:{NFSU2_TR(0x69b7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b7e3:{NFSU2_TR(0x69b7e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b7e6:{NFSU2_TR(0x69b7e6);
u8 U[18];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69b7e9:{NFSU2_TR(0x69b7e9);
if(r1(R+518)){{goto L69bc64;}}
}
B69b7ef:L69b7ef:{c.instructions+=3;NFSU2_TR(0x69b7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b7f2:{NFSU2_TR(0x69b7f2);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69b7f6:{NFSU2_TR(0x69b7f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bc64;}}
}
B69b7fc:L69b7fc:{c.instructions+=4;NFSU2_TR(0x69b7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b7ff:{NFSU2_TR(0x69b7ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b801:{NFSU2_TR(0x69b801);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b804:{NFSU2_TR(0x69b804);
if(r1(R+518)){{goto L69b81c;}}
}
B69b806:L69b806:{c.instructions+=8;NFSU2_TR(0x69b806);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b809:{NFSU2_TR(0x69b809);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b80c:{NFSU2_TR(0x69b80c);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b80f:{NFSU2_TR(0x69b80f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b812:{NFSU2_TR(0x69b812);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B69b815:{NFSU2_TR(0x69b815);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b817:{NFSU2_TR(0x69b817);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69b81a:{NFSU2_TR(0x69b81a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b823;}}
}
B69b81c:L69b81c:{c.instructions+=3;NFSU2_TR(0x69b81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b81f:{NFSU2_TR(0x69b81f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69b821:{NFSU2_TR(0x69b821);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69b823:L69b823:{c.instructions+=2;NFSU2_TR(0x69b823);
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
B69b825:{NFSU2_TR(0x69b825);
{goto L69bc69;}
}
B69b82a:L69b82a:{c.instructions+=2;NFSU2_TR(0x69b82a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b830:{NFSU2_TR(0x69b830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b904;}}
}
B69b836:L69b836:{c.instructions+=9;NFSU2_TR(0x69b836);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b839:{NFSU2_TR(0x69b839);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69b83c:{NFSU2_TR(0x69b83c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B69b83e:{NFSU2_TR(0x69b83e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69b841:{NFSU2_TR(0x69b841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b844:{NFSU2_TR(0x69b844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b846:{NFSU2_TR(0x69b846);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b849:{NFSU2_TR(0x69b849);
w4(R+12,u32(0x100ull));
}
B69b84e:{NFSU2_TR(0x69b84e);
if(r1(R+518)){{goto L69b854;}}
}
B69b850:L69b850:{c.instructions+=2;NFSU2_TR(0x69b850);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b852:{NFSU2_TR(0x69b852);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b89d;}}
}
B69b854:L69b854:{c.instructions+=8;NFSU2_TR(0x69b854);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b857:{NFSU2_TR(0x69b857);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b85a:{NFSU2_TR(0x69b85a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b85d:{NFSU2_TR(0x69b85d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b860:{NFSU2_TR(0x69b860);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b863:{NFSU2_TR(0x69b863);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b866:{NFSU2_TR(0x69b866);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69b869:{NFSU2_TR(0x69b869);
if(r1(R+518)){{goto L69b89d;}}
}
B69b86b:L69b86b:{c.instructions+=3;NFSU2_TR(0x69b86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b86e:{NFSU2_TR(0x69b86e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69b872:{NFSU2_TR(0x69b872);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69b89d;}}
}
B69b874:L69b874:{c.instructions+=4;NFSU2_TR(0x69b874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b877:{NFSU2_TR(0x69b877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b879:{NFSU2_TR(0x69b879);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b87c:{NFSU2_TR(0x69b87c);
if(r1(R+518)){{goto L69b894;}}
}
B69b87e:L69b87e:{c.instructions+=8;NFSU2_TR(0x69b87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b881:{NFSU2_TR(0x69b881);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b884:{NFSU2_TR(0x69b884);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b887:{NFSU2_TR(0x69b887);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b88a:{NFSU2_TR(0x69b88a);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B69b88d:{NFSU2_TR(0x69b88d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b88f:{NFSU2_TR(0x69b88f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69b892:{NFSU2_TR(0x69b892);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b823u);}goto L69b823;}}
}
B69b894:L69b894:{c.instructions+=4;NFSU2_TR(0x69b894);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b897:{NFSU2_TR(0x69b897);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69b899:{NFSU2_TR(0x69b899);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69b89b:{NFSU2_TR(0x69b89b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b823u);}goto L69b823;}
}
B69b89d:L69b89d:{c.instructions+=4;NFSU2_TR(0x69b89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b8a0:{NFSU2_TR(0x69b8a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b8a2:{NFSU2_TR(0x69b8a2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b8a5:{NFSU2_TR(0x69b8a5);
if(r1(R+518)){{goto L69b8af;}}
}
B69b8a7:L69b8a7:{c.instructions+=2;NFSU2_TR(0x69b8a7);
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
B69b8a9:{NFSU2_TR(0x69b8a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bc64;}}
}
B69b8af:L69b8af:{c.instructions+=8;NFSU2_TR(0x69b8af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b8b2:{NFSU2_TR(0x69b8b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b8b5:{NFSU2_TR(0x69b8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b8b8:{NFSU2_TR(0x69b8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b8bb:{NFSU2_TR(0x69b8bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b8be:{NFSU2_TR(0x69b8be);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b8c1:{NFSU2_TR(0x69b8c1);
u8 U[18];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69b8c4:{NFSU2_TR(0x69b8c4);
if(r1(R+518)){{goto L69bc64;}}
}
B69b8ca:L69b8ca:{c.instructions+=3;NFSU2_TR(0x69b8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b8cd:{NFSU2_TR(0x69b8cd);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69b8d1:{NFSU2_TR(0x69b8d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bc64;}}
}
B69b8d7:L69b8d7:{c.instructions+=4;NFSU2_TR(0x69b8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69b8da:{NFSU2_TR(0x69b8da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b8dc:{NFSU2_TR(0x69b8dc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69b8df:{NFSU2_TR(0x69b8df);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b81cu);}goto L69b81c;}}
}
B69b8e5:L69b8e5:{c.instructions+=8;NFSU2_TR(0x69b8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b8e8:{NFSU2_TR(0x69b8e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b8eb:{NFSU2_TR(0x69b8eb);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b8ee:{NFSU2_TR(0x69b8ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b8f1:{NFSU2_TR(0x69b8f1);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B69b8f4:{NFSU2_TR(0x69b8f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b8f6:{NFSU2_TR(0x69b8f6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69b8f9:{NFSU2_TR(0x69b8f9);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b823u);}goto L69b823;}}
}
B69b8ff:L69b8ff:{c.instructions+=1;NFSU2_TR(0x69b8ff);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b81cu);}goto L69b81c;}
}
B69b904:L69b904:{c.instructions+=2;NFSU2_TR(0x69b904);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x30000000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x30000000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x30000000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69b90a:{NFSU2_TR(0x69b90a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bc64;}}
}
B69b910:L69b910:{c.instructions+=18;NFSU2_TR(0x69b910);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b913:{NFSU2_TR(0x69b913);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69b916:{NFSU2_TR(0x69b916);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b919:{NFSU2_TR(0x69b919);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B69b91c:{NFSU2_TR(0x69b91c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69b91f:{NFSU2_TR(0x69b91f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69b922:{NFSU2_TR(0x69b922);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69b925:{NFSU2_TR(0x69b925);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b928:{NFSU2_TR(0x69b928);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b92b:{NFSU2_TR(0x69b92b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69b92e:{NFSU2_TR(0x69b92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69b931:{NFSU2_TR(0x69b931);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b934:{NFSU2_TR(0x69b934);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b937:{NFSU2_TR(0x69b937);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b93a:{NFSU2_TR(0x69b93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69b93d:{NFSU2_TR(0x69b93d);
w4(R+12,u32(0x100ull));
}
B69b942:{NFSU2_TR(0x69b942);
u8 U[18];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69b945:{NFSU2_TR(0x69b945);
if(r1(R+518)){{goto L69bc64;}}
}
B69b94b:L69b94b:{c.instructions+=3;NFSU2_TR(0x69b94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b94e:{NFSU2_TR(0x69b94e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69b952:{NFSU2_TR(0x69b952);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bc64;}}
}
B69b958:L69b958:{c.instructions+=5;NFSU2_TR(0x69b958);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b95b:{NFSU2_TR(0x69b95b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b95e:{NFSU2_TR(0x69b95e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b961:{NFSU2_TR(0x69b961);
u8 U[18];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69b964:{NFSU2_TR(0x69b964);
if(r1(R+518)){{goto L69bc64;}}
}
B69b96a:L69b96a:{c.instructions+=3;NFSU2_TR(0x69b96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b96d:{NFSU2_TR(0x69b96d);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69b971:{NFSU2_TR(0x69b971);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bc64;}}
}
B69b977:L69b977:{c.instructions+=7;NFSU2_TR(0x69b977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b97a:{NFSU2_TR(0x69b97a);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b97d:{NFSU2_TR(0x69b97d);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b983:{NFSU2_TR(0x69b983);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69b985:{NFSU2_TR(0x69b985);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b987:{NFSU2_TR(0x69b987);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69b98a:{NFSU2_TR(0x69b98a);
if(r1(R+514)){{goto L69b9a1;}}
}
B69b98c:L69b98c:{c.instructions+=7;NFSU2_TR(0x69b98c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b98f:{NFSU2_TR(0x69b98f);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b992:{NFSU2_TR(0x69b992);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b998:{NFSU2_TR(0x69b998);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69b99a:{NFSU2_TR(0x69b99a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b99c:{NFSU2_TR(0x69b99c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69b99f:{NFSU2_TR(0x69b99f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L69b9d3;}}
}
B69b9a1:L69b9a1:{c.instructions+=7;NFSU2_TR(0x69b9a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b9a4:{NFSU2_TR(0x69b9a4);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b9a7:{NFSU2_TR(0x69b9a7);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b9ad:{NFSU2_TR(0x69b9ad);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69b9af:{NFSU2_TR(0x69b9af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b9b1:{NFSU2_TR(0x69b9b1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69b9b4:{NFSU2_TR(0x69b9b4);
if(r1(R+514)){{goto L69bc64;}}
}
B69b9ba:L69b9ba:{c.instructions+=7;NFSU2_TR(0x69b9ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b9bd:{NFSU2_TR(0x69b9bd);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b9c0:{NFSU2_TR(0x69b9c0);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69b9c6:{NFSU2_TR(0x69b9c6);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69b9c8:{NFSU2_TR(0x69b9c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69b9ca:{NFSU2_TR(0x69b9ca);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69b9cd:{NFSU2_TR(0x69b9cd);
if(r1(R+514)){{goto L69bc64;}}
}
B69b9d3:L69b9d3:{c.instructions+=8;NFSU2_TR(0x69b9d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b9d6:{NFSU2_TR(0x69b9d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69b9d9:{NFSU2_TR(0x69b9d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b9dc:{NFSU2_TR(0x69b9dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69b9df:{NFSU2_TR(0x69b9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b9e2:{NFSU2_TR(0x69b9e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69b9e5:{NFSU2_TR(0x69b9e5);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B69b9e9:{NFSU2_TR(0x69b9e9);
if(r1(R+518)){{goto L69bc64;}}
}
B69b9ef:L69b9ef:{c.instructions+=8;NFSU2_TR(0x69b9ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69b9f2:{NFSU2_TR(0x69b9f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69b9f5:{NFSU2_TR(0x69b9f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69b9f8:{NFSU2_TR(0x69b9f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69b9fa:{NFSU2_TR(0x69b9fa);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B69b9ff:{NFSU2_TR(0x69b9ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69ba04:{NFSU2_TR(0x69ba04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ba07:{NFSU2_TR(0x69ba07);
if(r1(R+518)){{goto L69ba14;}}
}
B69ba09:L69ba09:{c.instructions+=2;NFSU2_TR(0x69ba09);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x10100000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10100000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69ba0e:{NFSU2_TR(0x69ba0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bc64;}}
}
B69ba14:L69ba14:{c.instructions+=4;NFSU2_TR(0x69ba14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ba17:{NFSU2_TR(0x69ba17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ba1b:{NFSU2_TR(0x69ba1b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69ba1d:{NFSU2_TR(0x69ba1d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ba38;}}
}
B69ba1f:L69ba1f:{c.instructions+=2;NFSU2_TR(0x69ba1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ba22:{NFSU2_TR(0x69ba22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ba25:L69ba25:{c.instructions+=3;NFSU2_TR(0x69ba25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ba28:{NFSU2_TR(0x69ba28);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69ba2a:{NFSU2_TR(0x69ba2a);
if(r1(R+518)){{goto L69ba38;}}
}
B69ba2c:L69ba2c:{c.instructions+=4;NFSU2_TR(0x69ba2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ba2f:{NFSU2_TR(0x69ba2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ba33:{NFSU2_TR(0x69ba33);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B69ba36:{NFSU2_TR(0x69ba36);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ba25u);}goto L69ba25;}}
}
B69ba38:L69ba38:{c.instructions+=2;NFSU2_TR(0x69ba38);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ba3f:{NFSU2_TR(0x69ba3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ba74;}}
}
B69ba41:L69ba41:{c.instructions+=9;NFSU2_TR(0x69ba41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ba42:{NFSU2_TR(0x69ba42);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69ba44:{NFSU2_TR(0x69ba44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ba45:{NFSU2_TR(0x69ba45);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69ba48:{NFSU2_TR(0x69ba48);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ba4a:{NFSU2_TR(0x69ba4a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ba4c:{NFSU2_TR(0x69ba4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ba4f:{NFSU2_TR(0x69ba4f);
__builtin_memmove((R+4),(R+24),4);
}
B69ba51:{NFSU2_TR(0x69ba51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ba56ull));
TAIL_STATIC(0x699c39u,699);
}
B69ba56:L69ba56:{c.instructions+=6;NFSU2_TR(0x69ba56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ba59:{NFSU2_TR(0x69ba59);
__builtin_memmove((R+8),(R+0),4);
}
B69ba5b:{NFSU2_TR(0x69ba5b);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B69ba5e:{NFSU2_TR(0x69ba5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ba61:{NFSU2_TR(0x69ba61);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69ba64:{NFSU2_TR(0x69ba64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bb2a;}}
}
B69ba6a:L69ba6a:{c.instructions+=2;NFSU2_TR(0x69ba6a);
w4(R+0,u32(0x8007000eull));
}
B69ba6f:{NFSU2_TR(0x69ba6f);
{goto L69bc69;}
}
B69ba74:L69ba74:{c.instructions+=10;NFSU2_TR(0x69ba74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ba77:{NFSU2_TR(0x69ba77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ba7b:{NFSU2_TR(0x69ba7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ba7e:{NFSU2_TR(0x69ba7e);
__builtin_memmove((R+8),(R+0),4);
}
B69ba80:{NFSU2_TR(0x69ba80);
w4(R+8,u32(0-u32(r4(R+8))));
}
B69ba82:{NFSU2_TR(0x69ba82);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B69ba85:{NFSU2_TR(0x69ba85);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B69ba87:{NFSU2_TR(0x69ba87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B69ba8a:{NFSU2_TR(0x69ba8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ba8d:{NFSU2_TR(0x69ba8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ba90:L69ba90:{c.instructions+=11;NFSU2_TR(0x69ba90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ba93:{NFSU2_TR(0x69ba93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69ba95:{NFSU2_TR(0x69ba95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ba98:{NFSU2_TR(0x69ba98);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69ba9b:{NFSU2_TR(0x69ba9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ba9e:{NFSU2_TR(0x69ba9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69baa1:{NFSU2_TR(0x69baa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69baa4:{NFSU2_TR(0x69baa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69baa7:{NFSU2_TR(0x69baa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69baaa:{NFSU2_TR(0x69baaa);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69baae:{NFSU2_TR(0x69baae);
if(r1(R+518)){{goto L69bacc;}}
}
B69bab0:L69bab0:{c.instructions+=8;NFSU2_TR(0x69bab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bab3:{NFSU2_TR(0x69bab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69bab6:{NFSU2_TR(0x69bab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bab9:{NFSU2_TR(0x69bab9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69babc:{NFSU2_TR(0x69babc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69babe:{NFSU2_TR(0x69babe);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfff00000ull))));
}
B69bac4:{NFSU2_TR(0x69bac4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69baca:{NFSU2_TR(0x69baca);
if(r1(R+518)){{goto L69bae0;}}
}
B69bacc:L69bacc:{c.instructions+=4;NFSU2_TR(0x69bacc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bacf:{NFSU2_TR(0x69bacf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bad2:{NFSU2_TR(0x69bad2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B69bad6:{NFSU2_TR(0x69bad6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ba90u);}goto L69ba90;}}
}
B69bad8:L69bad8:{c.instructions+=3;NFSU2_TR(0x69bad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69badb:{NFSU2_TR(0x69badb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bade:{NFSU2_TR(0x69bade);
{goto L69bb20;}
}
B69bae0:L69bae0:{c.instructions+=3;NFSU2_TR(0x69bae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bae4:{NFSU2_TR(0x69bae4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69bae8:{NFSU2_TR(0x69bae8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69bb0a;}}
}
B69baea:L69baea:{c.instructions+=2;NFSU2_TR(0x69baea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69baed:{NFSU2_TR(0x69baed);
{goto L69baf2;}
}
B69baef:L69baef:{c.instructions+=1;NFSU2_TR(0x69baef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69baf2:L69baf2:{c.instructions+=3;NFSU2_TR(0x69baf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69baf5:{NFSU2_TR(0x69baf5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69baf7:{NFSU2_TR(0x69baf7);
if(r1(R+518)){{goto L69bb0a;}}
}
B69baf9:L69baf9:{c.instructions+=6;NFSU2_TR(0x69baf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bafc:{NFSU2_TR(0x69bafc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B69baff:{NFSU2_TR(0x69baff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bb02:{NFSU2_TR(0x69bb02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69bb05:{NFSU2_TR(0x69bb05);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69bb08:{NFSU2_TR(0x69bb08);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69baefu);}goto L69baef;}}
}
B69bb0a:L69bb0a:{c.instructions+=7;NFSU2_TR(0x69bb0a);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B69bb0e:{NFSU2_TR(0x69bb0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B69bb11:{NFSU2_TR(0x69bb11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69bb14:{NFSU2_TR(0x69bb14);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69bb17:{NFSU2_TR(0x69bb17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bb1a:{NFSU2_TR(0x69bb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bb1d:{NFSU2_TR(0x69bb1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69bb20:L69bb20:{c.instructions+=2;NFSU2_TR(0x69bb20);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69bb24:{NFSU2_TR(0x69bb24);
if(r1(R+518)){{goto L69bc64;}}
}
B69bb2a:L69bb2a:{c.instructions+=4;NFSU2_TR(0x69bb2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bb2d:{NFSU2_TR(0x69bb2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69bb2f:{NFSU2_TR(0x69bb2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69bb32:{NFSU2_TR(0x69bb32);
if(r1(R+518)){{goto L69bb3c;}}
}
B69bb34:L69bb34:{c.instructions+=2;NFSU2_TR(0x69bb34);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69bb36:{NFSU2_TR(0x69bb36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bbc7;}}
}
B69bb3c:L69bb3c:{c.instructions+=8;NFSU2_TR(0x69bb3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bb3f:{NFSU2_TR(0x69bb3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bb42:{NFSU2_TR(0x69bb42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69bb45:{NFSU2_TR(0x69bb45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bb48:{NFSU2_TR(0x69bb48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bb4b:{NFSU2_TR(0x69bb4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bb4e:{NFSU2_TR(0x69bb4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69bb51:{NFSU2_TR(0x69bb51);
if(r1(R+518)){{goto L69bbc7;}}
}
B69bb53:L69bb53:{c.instructions+=3;NFSU2_TR(0x69bb53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bb56:{NFSU2_TR(0x69bb56);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69bb5a:{NFSU2_TR(0x69bb5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bbc7;}}
}
B69bb5c:L69bb5c:{c.instructions+=7;NFSU2_TR(0x69bb5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bb5f:{NFSU2_TR(0x69bb5f);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69bb62:{NFSU2_TR(0x69bb62);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69bb68:{NFSU2_TR(0x69bb68);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69bb6a:{NFSU2_TR(0x69bb6a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69bb6c:{NFSU2_TR(0x69bb6c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69bb6f:{NFSU2_TR(0x69bb6f);
if(r1(R+514)){{goto L69bb97;}}
}
B69bb71:L69bb71:{c.instructions+=4;NFSU2_TR(0x69bb71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69bb74:{NFSU2_TR(0x69bb74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69bb76:{NFSU2_TR(0x69bb76);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69bb79:{NFSU2_TR(0x69bb79);
if(r1(R+518)){{goto L69bbbb;}}
}
B69bb7b:L69bb7b:{c.instructions+=8;NFSU2_TR(0x69bb7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bb7e:{NFSU2_TR(0x69bb7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bb81:{NFSU2_TR(0x69bb81);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69bb84:{NFSU2_TR(0x69bb84);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69bb87:{NFSU2_TR(0x69bb87);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B69bb8a:{NFSU2_TR(0x69bb8a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69bb8c:{NFSU2_TR(0x69bb8c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69bb8f:{NFSU2_TR(0x69bb8f);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b823u);}goto L69b823;}}
}
B69bb95:L69bb95:{c.instructions+=1;NFSU2_TR(0x69bb95);
{goto L69bbbb;}
}
B69bb97:L69bb97:{c.instructions+=4;NFSU2_TR(0x69bb97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69bb9a:{NFSU2_TR(0x69bb9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69bb9c:{NFSU2_TR(0x69bb9c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69bb9f:{NFSU2_TR(0x69bb9f);
if(r1(R+518)){{goto L69bbbb;}}
}
B69bba1:L69bba1:{c.instructions+=8;NFSU2_TR(0x69bba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bba4:{NFSU2_TR(0x69bba4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bba7:{NFSU2_TR(0x69bba7);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69bbaa:{NFSU2_TR(0x69bbaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69bbad:{NFSU2_TR(0x69bbad);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B69bbb0:{NFSU2_TR(0x69bbb0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69bbb2:{NFSU2_TR(0x69bbb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69bbb5:{NFSU2_TR(0x69bbb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b823u);}goto L69b823;}}
}
B69bbbb:L69bbbb:{c.instructions+=4;NFSU2_TR(0x69bbbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bbbe:{NFSU2_TR(0x69bbbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69bbc0:{NFSU2_TR(0x69bbc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B69bbc2:{NFSU2_TR(0x69bbc2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b823u);}goto L69b823;}
}
B69bbc7:L69bbc7:{c.instructions+=4;NFSU2_TR(0x69bbc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bbca:{NFSU2_TR(0x69bbca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69bbcc:{NFSU2_TR(0x69bbcc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69bbcf:{NFSU2_TR(0x69bbcf);
if(r1(R+518)){{goto L69bbd9;}}
}
B69bbd1:L69bbd1:{c.instructions+=2;NFSU2_TR(0x69bbd1);
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
B69bbd3:{NFSU2_TR(0x69bbd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bc64;}}
}
B69bbd9:L69bbd9:{c.instructions+=8;NFSU2_TR(0x69bbd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bbdc:{NFSU2_TR(0x69bbdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bbdf:{NFSU2_TR(0x69bbdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69bbe2:{NFSU2_TR(0x69bbe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bbe5:{NFSU2_TR(0x69bbe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bbe8:{NFSU2_TR(0x69bbe8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bbeb:{NFSU2_TR(0x69bbeb);
u8 U[18];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69bbee:{NFSU2_TR(0x69bbee);
if(r1(R+518)){{goto L69bc64;}}
}
B69bbf0:L69bbf0:{c.instructions+=3;NFSU2_TR(0x69bbf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bbf3:{NFSU2_TR(0x69bbf3);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69bbf7:{NFSU2_TR(0x69bbf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bc64;}}
}
B69bbf9:L69bbf9:{c.instructions+=7;NFSU2_TR(0x69bbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bbfc:{NFSU2_TR(0x69bbfc);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69bbff:{NFSU2_TR(0x69bbff);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69bc05:{NFSU2_TR(0x69bc05);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69bc07:{NFSU2_TR(0x69bc07);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69bc09:{NFSU2_TR(0x69bc09);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69bc0c:{NFSU2_TR(0x69bc0c);
if(r1(R+514)){{goto L69bc34;}}
}
B69bc0e:L69bc0e:{c.instructions+=4;NFSU2_TR(0x69bc0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69bc11:{NFSU2_TR(0x69bc11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69bc13:{NFSU2_TR(0x69bc13);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69bc16:{NFSU2_TR(0x69bc16);
if(r1(R+518)){{goto L69bc58;}}
}
B69bc18:L69bc18:{c.instructions+=8;NFSU2_TR(0x69bc18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bc1b:{NFSU2_TR(0x69bc1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bc1e:{NFSU2_TR(0x69bc1e);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69bc21:{NFSU2_TR(0x69bc21);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69bc24:{NFSU2_TR(0x69bc24);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B69bc27:{NFSU2_TR(0x69bc27);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69bc29:{NFSU2_TR(0x69bc29);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69bc2c:{NFSU2_TR(0x69bc2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b823u);}goto L69b823;}}
}
B69bc32:L69bc32:{c.instructions+=1;NFSU2_TR(0x69bc32);
{goto L69bc58;}
}
B69bc34:L69bc34:{c.instructions+=4;NFSU2_TR(0x69bc34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69bc37:{NFSU2_TR(0x69bc37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69bc39:{NFSU2_TR(0x69bc39);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69bc3c:{NFSU2_TR(0x69bc3c);
if(r1(R+518)){{goto L69bc58;}}
}
B69bc3e:L69bc3e:{c.instructions+=8;NFSU2_TR(0x69bc3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bc41:{NFSU2_TR(0x69bc41);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bc44:{NFSU2_TR(0x69bc44);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69bc47:{NFSU2_TR(0x69bc47);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69bc4a:{NFSU2_TR(0x69bc4a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B69bc4d:{NFSU2_TR(0x69bc4d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69bc4f:{NFSU2_TR(0x69bc4f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69bc52:{NFSU2_TR(0x69bc52);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b823u);}goto L69b823;}}
}
B69bc58:L69bc58:{c.instructions+=4;NFSU2_TR(0x69bc58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bc5b:{NFSU2_TR(0x69bc5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69bc5d:{NFSU2_TR(0x69bc5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B69bc5f:{NFSU2_TR(0x69bc5f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69b823u);}goto L69b823;}
}
B69bc64:L69bc64:{c.instructions+=1;NFSU2_TR(0x69bc64);
w4(R+0,u32(0x80004005ull));
}
B69bc69:L69bc69:{c.instructions+=1;NFSU2_TR(0x69bc69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69bc6a:L69bc6a:{c.instructions+=4;NFSU2_TR(0x69bc6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69bc6b:{NFSU2_TR(0x69bc6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69bc6c:{NFSU2_TR(0x69bc6c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69bc6d:{NFSU2_TR(0x69bc6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69bc70:L69bc70:{c.instructions+=15;NFSU2_TR(0x69bc70);
__builtin_memmove((R+28),(R+28),4);
}
B69bc72:{NFSU2_TR(0x69bc72);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bc73:{NFSU2_TR(0x69bc73);
__builtin_memmove((R+20),(R+16),4);
}
B69bc75:{NFSU2_TR(0x69bc75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69bc78:{NFSU2_TR(0x69bc78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bc7b:{NFSU2_TR(0x69bc7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bc7c:{NFSU2_TR(0x69bc7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bc7f:{NFSU2_TR(0x69bc7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B69bc82:{NFSU2_TR(0x69bc82);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69bc85:{NFSU2_TR(0x69bc85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bc86:{NFSU2_TR(0x69bc86);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69bc89:{NFSU2_TR(0x69bc89);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69bc8c:{NFSU2_TR(0x69bc8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bc8f:{NFSU2_TR(0x69bc8f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69bc92:{NFSU2_TR(0x69bc92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bcdd;}}
}
B69bc94:L69bc94:{c.instructions+=6;NFSU2_TR(0x69bc94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bc97:{NFSU2_TR(0x69bc97);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69bc9a:{NFSU2_TR(0x69bc9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69bc9d:{NFSU2_TR(0x69bc9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bca0:{NFSU2_TR(0x69bca0);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69bca3:{NFSU2_TR(0x69bca3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bcdd;}}
}
B69bca5:L69bca5:{c.instructions+=6;NFSU2_TR(0x69bca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bca8:{NFSU2_TR(0x69bca8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69bcab:{NFSU2_TR(0x69bcab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69bcae:{NFSU2_TR(0x69bcae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bcb1:{NFSU2_TR(0x69bcb1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69bcb4:{NFSU2_TR(0x69bcb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bcdd;}}
}
B69bcb6:L69bcb6:{c.instructions+=6;NFSU2_TR(0x69bcb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bcb9:{NFSU2_TR(0x69bcb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69bcbc:{NFSU2_TR(0x69bcbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69bcbf:{NFSU2_TR(0x69bcbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bcc2:{NFSU2_TR(0x69bcc2);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69bcc5:{NFSU2_TR(0x69bcc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bcdd;}}
}
B69bcc7:L69bcc7:{c.instructions+=6;NFSU2_TR(0x69bcc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bcca:{NFSU2_TR(0x69bcca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bccd:{NFSU2_TR(0x69bccd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69bcd0:{NFSU2_TR(0x69bcd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bcd3:{NFSU2_TR(0x69bcd3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69bcd6:{NFSU2_TR(0x69bcd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bcdd;}}
}
B69bcd8:L69bcd8:{c.instructions+=3;NFSU2_TR(0x69bcd8);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69bcda:{NFSU2_TR(0x69bcda);
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
B69bcdb:{NFSU2_TR(0x69bcdb);
{goto L69bcdf;}
}
B69bcdd:L69bcdd:{c.instructions+=1;NFSU2_TR(0x69bcdd);
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
B69bcdf:L69bcdf:{c.instructions+=4;NFSU2_TR(0x69bcdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69bce0:{NFSU2_TR(0x69bce0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69bce1:{NFSU2_TR(0x69bce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69bce2:{NFSU2_TR(0x69bce2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69bce5:L69bce5:{c.instructions+=8;NFSU2_TR(0x69bce5);
__builtin_memmove((R+28),(R+28),4);
}
B69bce7:{NFSU2_TR(0x69bce7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bce8:{NFSU2_TR(0x69bce8);
__builtin_memmove((R+20),(R+16),4);
}
B69bcea:{NFSU2_TR(0x69bcea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69bced:{NFSU2_TR(0x69bced);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bcee:{NFSU2_TR(0x69bcee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bcf1:{NFSU2_TR(0x69bcf1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69bcf3:{NFSU2_TR(0x69bcf3);
if(r1(R+518)){{goto L69bd0a;}}
}
B69bcf5:L69bcf5:{c.instructions+=6;NFSU2_TR(0x69bcf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bcf8:{NFSU2_TR(0x69bcf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69bcfb:{NFSU2_TR(0x69bcfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bcfe:{NFSU2_TR(0x69bcfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bd01:{NFSU2_TR(0x69bd01);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69bd04:{NFSU2_TR(0x69bd04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bd0a;}}
}
B69bd06:L69bd06:{c.instructions+=2;NFSU2_TR(0x69bd06);
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
B69bd08:{NFSU2_TR(0x69bd08);
{goto L69bd0d;}
}
B69bd0a:L69bd0a:{c.instructions+=2;NFSU2_TR(0x69bd0a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69bd0c:{NFSU2_TR(0x69bd0c);
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
B69bd0d:L69bd0d:{c.instructions+=3;NFSU2_TR(0x69bd0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69bd0e:{NFSU2_TR(0x69bd0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69bd0f:{NFSU2_TR(0x69bd0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69bd12:L69bd12:{c.instructions+=18;NFSU2_TR(0x69bd12);
__builtin_memmove((R+28),(R+28),4);
}
B69bd14:{NFSU2_TR(0x69bd14);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bd15:{NFSU2_TR(0x69bd15);
__builtin_memmove((R+20),(R+16),4);
}
B69bd17:{NFSU2_TR(0x69bd17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B69bd1a:{NFSU2_TR(0x69bd1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bd1b:{NFSU2_TR(0x69bd1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bd1c:{NFSU2_TR(0x69bd1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bd1d:{NFSU2_TR(0x69bd1d);
__builtin_memmove((R+28),(R+4),4);
}
B69bd1f:{NFSU2_TR(0x69bd1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bd22:{NFSU2_TR(0x69bd22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B69bd24:{NFSU2_TR(0x69bd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bd27:{NFSU2_TR(0x69bd27);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B69bd2d:{NFSU2_TR(0x69bd2d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69bd2f:{NFSU2_TR(0x69bd2f);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69bd2f);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69bd2f);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B69bd31:{NFSU2_TR(0x69bd31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bd35:{NFSU2_TR(0x69bd35);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69bd37:{NFSU2_TR(0x69bd37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bd3a:{NFSU2_TR(0x69bd3a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69bda9;}}
}
B69bd3c:L69bd3c:{c.instructions+=10;NFSU2_TR(0x69bd3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bd3f:{NFSU2_TR(0x69bd3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69bd42:{NFSU2_TR(0x69bd42);
__builtin_memmove((R+4),(R+24),4);
}
B69bd44:{NFSU2_TR(0x69bd44);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69bd47:{NFSU2_TR(0x69bd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bd4a:{NFSU2_TR(0x69bd4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bd4d:{NFSU2_TR(0x69bd4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B69bd50:{NFSU2_TR(0x69bd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bd53:{NFSU2_TR(0x69bd53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bd56:{NFSU2_TR(0x69bd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B69bd59:L69bd59:{c.instructions+=10;NFSU2_TR(0x69bd59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bd5c:{NFSU2_TR(0x69bd5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69bd5e:{NFSU2_TR(0x69bd5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69bd60:{NFSU2_TR(0x69bd60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bd63:{NFSU2_TR(0x69bd63);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bd66:{NFSU2_TR(0x69bd66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69bd69:{NFSU2_TR(0x69bd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bd6c:{NFSU2_TR(0x69bd6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69bd6f:{NFSU2_TR(0x69bd6f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69bd73:{NFSU2_TR(0x69bd73);
if(r1(R+518)){{goto L69bd96;}}
}
B69bd75:L69bd75:{c.instructions+=6;NFSU2_TR(0x69bd75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69bd78:{NFSU2_TR(0x69bd78);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69bd7b:{NFSU2_TR(0x69bd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69bd7e:{NFSU2_TR(0x69bd7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bd81:{NFSU2_TR(0x69bd81);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69bd85:{NFSU2_TR(0x69bd85);
if(r1(R+518)){{goto L69bd96;}}
}
B69bd87:L69bd87:{c.instructions+=4;NFSU2_TR(0x69bd87);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69bd8a:{NFSU2_TR(0x69bd8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bd8b:{NFSU2_TR(0x69bd8b);
__builtin_memmove((R+4),(R+28),4);
}
B69bd8d:{NFSU2_TR(0x69bd8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69bd92ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69bc70u);}goto L69bc70;}
}
B69bd92:L69bd92:{c.instructions+=2;NFSU2_TR(0x69bd92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69bd94:{NFSU2_TR(0x69bd94);
if(r1(R+518)){{goto L69bdb2;}}
}
B69bd96:L69bd96:{c.instructions+=7;NFSU2_TR(0x69bd96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bd99:{NFSU2_TR(0x69bd99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bd9c:{NFSU2_TR(0x69bd9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bd9f:{NFSU2_TR(0x69bd9f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B69bda1:{NFSU2_TR(0x69bda1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bda4:{NFSU2_TR(0x69bda4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69bda7:{NFSU2_TR(0x69bda7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69bd59u);}goto L69bd59;}}
}
B69bda9:L69bda9:{c.instructions+=1;NFSU2_TR(0x69bda9);
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
B69bdab:L69bdab:{c.instructions+=5;NFSU2_TR(0x69bdab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69bdac:{NFSU2_TR(0x69bdac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69bdad:{NFSU2_TR(0x69bdad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69bdae:{NFSU2_TR(0x69bdae);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69bdaf:{NFSU2_TR(0x69bdaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69bdb2:L69bdb2:{c.instructions+=3;NFSU2_TR(0x69bdb2);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69bdb4:{NFSU2_TR(0x69bdb4);
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
B69bdb5:{NFSU2_TR(0x69bdb5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69bdabu);}goto L69bdab;}
}
B69bdb7:L69bdb7:{c.instructions+=18;NFSU2_TR(0x69bdb7);
__builtin_memmove((R+28),(R+28),4);
}
B69bdb9:{NFSU2_TR(0x69bdb9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bdba:{NFSU2_TR(0x69bdba);
__builtin_memmove((R+20),(R+16),4);
}
B69bdbc:{NFSU2_TR(0x69bdbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B69bdbf:{NFSU2_TR(0x69bdbf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bdc0:{NFSU2_TR(0x69bdc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bdc1:{NFSU2_TR(0x69bdc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69bdc4:{NFSU2_TR(0x69bdc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bdc7:{NFSU2_TR(0x69bdc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bdc8:{NFSU2_TR(0x69bdc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69bdcb:{NFSU2_TR(0x69bdcb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69bdcd:{NFSU2_TR(0x69bdcd);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69bdcd);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69bdcd);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B69bdcf:{NFSU2_TR(0x69bdcf);
__builtin_memmove((R+12),(R+4),4);
}
B69bdd1:{NFSU2_TR(0x69bdd1);
__builtin_memmove((R+4),(R+24),4);
}
B69bdd3:{NFSU2_TR(0x69bdd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bdd6:{NFSU2_TR(0x69bdd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bdd9:{NFSU2_TR(0x69bdd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bddc:{NFSU2_TR(0x69bddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69bde1ull));
TAIL_STATIC(0x698f42u,698);
}
B69bde1:L69bde1:{c.instructions+=2;NFSU2_TR(0x69bde1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69bde3:{NFSU2_TR(0x69bde3);
if(r1(R+518)){{goto L69be5f;}}
}
B69bde5:L69bde5:{c.instructions+=3;NFSU2_TR(0x69bde5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bde9:{NFSU2_TR(0x69bde9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69bdeb:{NFSU2_TR(0x69bdeb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69be56;}}
}
B69bded:L69bded:{c.instructions+=8;NFSU2_TR(0x69bded);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69bdef:{NFSU2_TR(0x69bdef);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bdf1:{NFSU2_TR(0x69bdf1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00001ull))));
}
B69bdf6:{NFSU2_TR(0x69bdf6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bdf8:{NFSU2_TR(0x69bdf8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1ull))));
}
B69bdfb:{NFSU2_TR(0x69bdfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bdfc:{NFSU2_TR(0x69bdfc);
__builtin_memmove((R+4),(R+12),4);
}
B69bdfe:{NFSU2_TR(0x69bdfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69be03ull));
TAIL_STATIC(0x699c99u,699);
}
B69be03:L69be03:{c.instructions+=2;NFSU2_TR(0x69be03);
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
B69be06:{NFSU2_TR(0x69be06);
if(r1(R+518)){TAIL_STATIC(0x69c19bu,69c);}
}
B69be0c:L69be0c:{c.instructions+=5;NFSU2_TR(0x69be0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69be0f:{NFSU2_TR(0x69be0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69be12:{NFSU2_TR(0x69be12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69be13:{NFSU2_TR(0x69be13);
__builtin_memmove((R+4),(R+28),4);
}
B69be15:{NFSU2_TR(0x69be15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69be1aull));
TAIL_STATIC(0x698eb3u,698);
}
B69be1a:L69be1a:{c.instructions+=3;NFSU2_TR(0x69be1a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69be1c:{NFSU2_TR(0x69be1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69be1f:{NFSU2_TR(0x69be1f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69be3f;}}
}
B69be21:L69be21:{c.instructions+=10;NFSU2_TR(0x69be21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69be24:{NFSU2_TR(0x69be24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69be27:{NFSU2_TR(0x69be27);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B69be2a:{NFSU2_TR(0x69be2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B69be2d:{NFSU2_TR(0x69be2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69be30:{NFSU2_TR(0x69be30);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69be33:{NFSU2_TR(0x69be33);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69be36:{NFSU2_TR(0x69be36);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69be37:{NFSU2_TR(0x69be37);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69be3a:{NFSU2_TR(0x69be3a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69be21u);}goto L69be21;}}
}
B69be3c:L69be3c:{c.instructions+=1;NFSU2_TR(0x69be3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69be3f:L69be3f:{c.instructions+=9;NFSU2_TR(0x69be3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69be42:{NFSU2_TR(0x69be42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69be45:{NFSU2_TR(0x69be45);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69be48:{NFSU2_TR(0x69be48);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69be4b:{NFSU2_TR(0x69be4b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69be4c:{NFSU2_TR(0x69be4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69be4f:{NFSU2_TR(0x69be4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B69be51:{NFSU2_TR(0x69be51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69be54:{NFSU2_TR(0x69be54);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69bdedu);}goto L69bded;}}
}
B69be56:L69be56:{c.instructions+=6;NFSU2_TR(0x69be56);
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
B69be58:{NFSU2_TR(0x69be58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69be59:{NFSU2_TR(0x69be59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69be5a:{NFSU2_TR(0x69be5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69be5b:{NFSU2_TR(0x69be5b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69be5c:{NFSU2_TR(0x69be5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69be5f:L69be5f:{c.instructions+=5;NFSU2_TR(0x69be5f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69be61:{NFSU2_TR(0x69be61);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69be63:{NFSU2_TR(0x69be63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69be66:{NFSU2_TR(0x69be66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69be69:{NFSU2_TR(0x69be69);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69bfa8;}}
}
B69be6f:L69be6f:{c.instructions+=4;NFSU2_TR(0x69be6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69be72:{NFSU2_TR(0x69be72);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69be75:{NFSU2_TR(0x69be75);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69be78:{NFSU2_TR(0x69be78);
if(r1(R+518)){{goto L69bf98;}}
}
B69be7e:L69be7e:{c.instructions+=7;NFSU2_TR(0x69be7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69be81:{NFSU2_TR(0x69be81);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69be84:{NFSU2_TR(0x69be84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69be87:{NFSU2_TR(0x69be87);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69be8a:{NFSU2_TR(0x69be8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69be8d:{NFSU2_TR(0x69be8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69be91:{NFSU2_TR(0x69be91);
if(r1(R+518)){{goto L69bf98;}}
}
B69be97:L69be97:{c.instructions+=5;NFSU2_TR(0x69be97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69be9b:{NFSU2_TR(0x69be9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69be9e:{NFSU2_TR(0x69be9e);
__builtin_memmove((R+0),(R+8),4);
}
B69bea0:{NFSU2_TR(0x69bea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bea3:{NFSU2_TR(0x69bea3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69bed8;}}
}
B69bea5:L69bea5:{c.instructions+=1;NFSU2_TR(0x69bea5);
{goto L69beaa;}
}
B69bea7:L69bea7:{c.instructions+=1;NFSU2_TR(0x69bea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69beaa:L69beaa:{c.instructions+=4;NFSU2_TR(0x69beaa);
__builtin_memmove((R+4),(R+0),4);
}
B69beac:{NFSU2_TR(0x69beac);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69beaf:{NFSU2_TR(0x69beaf);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B69beb3:{NFSU2_TR(0x69beb3);
if(r1(R+518)){{goto L69becc;}}
}
B69beb5:L69beb5:{c.instructions+=5;NFSU2_TR(0x69beb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69beb8:{NFSU2_TR(0x69beb8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69bebb:{NFSU2_TR(0x69bebb);
__builtin_memmove((R+4),(R+12),4);
}
B69bebd:{NFSU2_TR(0x69bebd);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69bec0:{NFSU2_TR(0x69bec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69bec5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69bc70u);}goto L69bc70;}
}
B69bec5:L69bec5:{c.instructions+=2;NFSU2_TR(0x69bec5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69bec7:{NFSU2_TR(0x69bec7);
if(r1(R+518)){{goto L69becc;}}
}
B69bec9:L69bec9:{c.instructions+=1;NFSU2_TR(0x69bec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69becc:L69becc:{c.instructions+=5;NFSU2_TR(0x69becc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69becf:{NFSU2_TR(0x69becf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69bed0:{NFSU2_TR(0x69bed0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69bed3:{NFSU2_TR(0x69bed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bed6:{NFSU2_TR(0x69bed6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69bea7u);}goto L69bea7;}}
}
B69bed8:L69bed8:{c.instructions+=9;NFSU2_TR(0x69bed8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69beda:{NFSU2_TR(0x69beda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B69bedd:{NFSU2_TR(0x69bedd);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bedf:{NFSU2_TR(0x69bedf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69bee4:{NFSU2_TR(0x69bee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+0))));
}
B69bee6:{NFSU2_TR(0x69bee6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bee8:{NFSU2_TR(0x69bee8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bee9:{NFSU2_TR(0x69bee9);
__builtin_memmove((R+4),(R+12),4);
}
B69beeb:{NFSU2_TR(0x69beeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69bef0ull));
TAIL_STATIC(0x699c99u,699);
}
B69bef0:L69bef0:{c.instructions+=2;NFSU2_TR(0x69bef0);
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
B69bef3:{NFSU2_TR(0x69bef3);
if(r1(R+518)){TAIL_STATIC(0x69c19bu,69c);}
}
B69bef9:L69bef9:{c.instructions+=5;NFSU2_TR(0x69bef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69befc:{NFSU2_TR(0x69befc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69beff:{NFSU2_TR(0x69beff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bf00:{NFSU2_TR(0x69bf00);
__builtin_memmove((R+4),(R+28),4);
}
B69bf02:{NFSU2_TR(0x69bf02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69bf07ull));
TAIL_STATIC(0x698eb3u,698);
}
B69bf07:L69bf07:{c.instructions+=7;NFSU2_TR(0x69bf07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69bf0a:{NFSU2_TR(0x69bf0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bf0d:{NFSU2_TR(0x69bf0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bf10:{NFSU2_TR(0x69bf10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bf14:{NFSU2_TR(0x69bf14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bf17:{NFSU2_TR(0x69bf17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bf1a:{NFSU2_TR(0x69bf1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B69bf1c:L69bf1c:{c.instructions+=2;NFSU2_TR(0x69bf1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bf1f:{NFSU2_TR(0x69bf1f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69bf95;}}
}
B69bf21:L69bf21:{c.instructions+=4;NFSU2_TR(0x69bf21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bf24:{NFSU2_TR(0x69bf24);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bf27:{NFSU2_TR(0x69bf27);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69bf2a:{NFSU2_TR(0x69bf2a);
if(r1(R+518)){{goto L69bf8f;}}
}
B69bf2c:L69bf2c:{c.instructions+=4;NFSU2_TR(0x69bf2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bf2f:{NFSU2_TR(0x69bf2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69bf30:{NFSU2_TR(0x69bf30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69bf33:{NFSU2_TR(0x69bf33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69bf38ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69bc70u);}goto L69bc70;}
}
B69bf38:L69bf38:{c.instructions+=2;NFSU2_TR(0x69bf38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69bf3a:{NFSU2_TR(0x69bf3a);
if(r1(R+518)){{goto L69bf8f;}}
}
B69bf3c:L69bf3c:{c.instructions+=3;NFSU2_TR(0x69bf3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bf40:{NFSU2_TR(0x69bf40);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69bf44:{NFSU2_TR(0x69bf44);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69bf73;}}
}
B69bf46:L69bf46:{c.instructions+=15;NFSU2_TR(0x69bf46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bf49:{NFSU2_TR(0x69bf49);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B69bf4d:{NFSU2_TR(0x69bf4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69bf50:{NFSU2_TR(0x69bf50);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B69bf54:{NFSU2_TR(0x69bf54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bf57:{NFSU2_TR(0x69bf57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B69bf5a:{NFSU2_TR(0x69bf5a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B69bf5c:{NFSU2_TR(0x69bf5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69bf5f:{NFSU2_TR(0x69bf5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bf62:{NFSU2_TR(0x69bf62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bf65:{NFSU2_TR(0x69bf65);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69bf68:{NFSU2_TR(0x69bf68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bf6b:{NFSU2_TR(0x69bf6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69bf6e:{NFSU2_TR(0x69bf6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69bf71:{NFSU2_TR(0x69bf71);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69bf46u);}goto L69bf46;}}
}
B69bf73:L69bf73:{c.instructions+=9;NFSU2_TR(0x69bf73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bf76:{NFSU2_TR(0x69bf76);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bf79:{NFSU2_TR(0x69bf79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bf7c:{NFSU2_TR(0x69bf7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69bf7f:{NFSU2_TR(0x69bf7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69bf82:{NFSU2_TR(0x69bf82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bf85:{NFSU2_TR(0x69bf85);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B69bf89:{NFSU2_TR(0x69bf89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bf8c:{NFSU2_TR(0x69bf8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bf8f:L69bf8f:{c.instructions+=3;NFSU2_TR(0x69bf8f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69bf90:{NFSU2_TR(0x69bf90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69bf93:{NFSU2_TR(0x69bf93);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69bf1cu);}goto L69bf1c;}
}
B69bf95:L69bf95:{c.instructions+=1;NFSU2_TR(0x69bf95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69bf98:L69bf98:{c.instructions+=5;NFSU2_TR(0x69bf98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69bf9b:{NFSU2_TR(0x69bf9b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69bf9c:{NFSU2_TR(0x69bf9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69bf9f:{NFSU2_TR(0x69bf9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bfa2:{NFSU2_TR(0x69bfa2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69be6fu);}goto L69be6f;}}
}
B69bfa8:L69bfa8:{c.instructions+=2;NFSU2_TR(0x69bfa8);
__builtin_memmove((R+4),(R+24),4);
}
B69bfaa:{NFSU2_TR(0x69bfaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69bfafull));
TAIL_STATIC(0x699107u,699);
}
B69bfaf:L69bfaf:{c.instructions+=7;NFSU2_TR(0x69bfaf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69bfb1:{NFSU2_TR(0x69bfb1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69bfb2:{NFSU2_TR(0x69bfb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69bfb4:{NFSU2_TR(0x69bfb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bfb7:{NFSU2_TR(0x69bfb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bfba:{NFSU2_TR(0x69bfba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bfbd:{NFSU2_TR(0x69bfbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bff9;}}
}
B69bfbf:L69bfbf:{c.instructions+=3;NFSU2_TR(0x69bfbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bfc2:{NFSU2_TR(0x69bfc2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69bfc5:{NFSU2_TR(0x69bfc5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69bff9;}}
}
B69bfc7:L69bfc7:{c.instructions+=1;NFSU2_TR(0x69bfc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69bfca:L69bfca:{c.instructions+=3;NFSU2_TR(0x69bfca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69bfcc:{NFSU2_TR(0x69bfcc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69bfcf:{NFSU2_TR(0x69bfcf);
if(r1(R+518)){{goto L69bfe6;}}
}
B69bfd1:L69bfd1:{c.instructions+=7;NFSU2_TR(0x69bfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69bfd4:{NFSU2_TR(0x69bfd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bfd7:{NFSU2_TR(0x69bfd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bfda:{NFSU2_TR(0x69bfda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69bfdd:{NFSU2_TR(0x69bfdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69bfe0:{NFSU2_TR(0x69bfe0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69bfe4:{NFSU2_TR(0x69bfe4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69bff6;}}
}
B69bfe6:L69bfe6:{c.instructions+=5;NFSU2_TR(0x69bfe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69bfe9:{NFSU2_TR(0x69bfe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69bfec:{NFSU2_TR(0x69bfec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B69bfef:{NFSU2_TR(0x69bfef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69bff2:{NFSU2_TR(0x69bff2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69bfcau);}goto L69bfca;}}
}
B69bff4:L69bff4:{c.instructions+=1;NFSU2_TR(0x69bff4);
{goto L69bff9;}
}
B69bff6:L69bff6:{c.instructions+=1;NFSU2_TR(0x69bff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69bff9:L69bff9:{c.instructions+=2;NFSU2_TR(0x69bff9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69bffd:{NFSU2_TR(0x69bffd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69be56u);}goto L69be56;}}
TAIL_STATIC(0x69c003u,69c);
}
XIT:NFSU2_TR_EXIT(0x69b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
