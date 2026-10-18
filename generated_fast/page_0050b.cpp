#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_4fd(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_506(u8* __restrict R,Cpu& c);
u32 body_507(u8* __restrict R,Cpu& c);
u32 body_508(u8* __restrict R,Cpu& c);
u32 body_509(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_572(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x50b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x50b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_50b(u8* __restrict R,Cpu& c);
u32 page_50b(Cpu& c){return body_50b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_50b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x50b000:goto L50b000;
case 0x50b004:c.instructions+=6;goto B50b004;
case 0x50b005:c.instructions+=5;goto B50b005;
case 0x50b006:c.instructions+=4;goto B50b006;
case 0x50b007:c.instructions+=3;goto B50b007;
case 0x50b009:c.instructions+=2;goto B50b009;
case 0x50b00a:c.instructions+=1;goto B50b00a;
case 0x50b010:goto L50b010;
case 0x50b014:c.instructions+=20;goto B50b014;
case 0x50b018:c.instructions+=19;goto B50b018;
case 0x50b019:c.instructions+=18;goto B50b019;
case 0x50b01d:c.instructions+=17;goto B50b01d;
case 0x50b01e:c.instructions+=16;goto B50b01e;
case 0x50b022:c.instructions+=15;goto B50b022;
case 0x50b023:c.instructions+=14;goto B50b023;
case 0x50b027:c.instructions+=13;goto B50b027;
case 0x50b02a:c.instructions+=12;goto B50b02a;
case 0x50b02b:c.instructions+=11;goto B50b02b;
case 0x50b02f:c.instructions+=10;goto B50b02f;
case 0x50b030:c.instructions+=9;goto B50b030;
case 0x50b034:c.instructions+=8;goto B50b034;
case 0x50b036:c.instructions+=7;goto B50b036;
case 0x50b037:c.instructions+=6;goto B50b037;
case 0x50b038:c.instructions+=5;goto B50b038;
case 0x50b039:c.instructions+=4;goto B50b039;
case 0x50b03a:c.instructions+=3;goto B50b03a;
case 0x50b03b:c.instructions+=2;goto B50b03b;
case 0x50b03c:c.instructions+=1;goto B50b03c;
case 0x50b041:goto L50b041;
case 0x50b044:c.instructions+=2;goto B50b044;
case 0x50b046:c.instructions+=1;goto B50b046;
case 0x50b048:goto L50b048;
case 0x50b049:c.instructions+=5;goto B50b049;
case 0x50b04a:c.instructions+=4;goto B50b04a;
case 0x50b04b:c.instructions+=3;goto B50b04b;
case 0x50b04d:c.instructions+=2;goto B50b04d;
case 0x50b04e:c.instructions+=1;goto B50b04e;
case 0x50b051:goto L50b051;
case 0x50b054:c.instructions+=12;goto B50b054;
case 0x50b058:c.instructions+=11;goto B50b058;
case 0x50b059:c.instructions+=10;goto B50b059;
case 0x50b05d:c.instructions+=9;goto B50b05d;
case 0x50b05e:c.instructions+=8;goto B50b05e;
case 0x50b062:c.instructions+=7;goto B50b062;
case 0x50b063:c.instructions+=6;goto B50b063;
case 0x50b064:c.instructions+=5;goto B50b064;
case 0x50b065:c.instructions+=4;goto B50b065;
case 0x50b066:c.instructions+=3;goto B50b066;
case 0x50b067:c.instructions+=2;goto B50b067;
case 0x50b068:c.instructions+=1;goto B50b068;
case 0x50b06d:goto L50b06d;
case 0x50b070:c.instructions+=2;goto B50b070;
case 0x50b072:c.instructions+=1;goto B50b072;
case 0x50b074:goto L50b074;
case 0x50b077:c.instructions+=12;goto B50b077;
case 0x50b07b:c.instructions+=11;goto B50b07b;
case 0x50b07c:c.instructions+=10;goto B50b07c;
case 0x50b080:c.instructions+=9;goto B50b080;
case 0x50b081:c.instructions+=8;goto B50b081;
case 0x50b085:c.instructions+=7;goto B50b085;
case 0x50b086:c.instructions+=6;goto B50b086;
case 0x50b087:c.instructions+=5;goto B50b087;
case 0x50b088:c.instructions+=4;goto B50b088;
case 0x50b089:c.instructions+=3;goto B50b089;
case 0x50b08a:c.instructions+=2;goto B50b08a;
case 0x50b08b:c.instructions+=1;goto B50b08b;
case 0x50b090:goto L50b090;
case 0x50b093:c.instructions+=2;goto B50b093;
case 0x50b095:c.instructions+=1;goto B50b095;
case 0x50b097:goto L50b097;
case 0x50b09a:c.instructions+=12;goto B50b09a;
case 0x50b09e:c.instructions+=11;goto B50b09e;
case 0x50b09f:c.instructions+=10;goto B50b09f;
case 0x50b0a3:c.instructions+=9;goto B50b0a3;
case 0x50b0a4:c.instructions+=8;goto B50b0a4;
case 0x50b0a8:c.instructions+=7;goto B50b0a8;
case 0x50b0a9:c.instructions+=6;goto B50b0a9;
case 0x50b0aa:c.instructions+=5;goto B50b0aa;
case 0x50b0ab:c.instructions+=4;goto B50b0ab;
case 0x50b0ac:c.instructions+=3;goto B50b0ac;
case 0x50b0ad:c.instructions+=2;goto B50b0ad;
case 0x50b0ae:c.instructions+=1;goto B50b0ae;
case 0x50b0b3:goto L50b0b3;
case 0x50b0b6:c.instructions+=5;goto B50b0b6;
case 0x50b0b7:c.instructions+=4;goto B50b0b7;
case 0x50b0b8:c.instructions+=3;goto B50b0b8;
case 0x50b0b9:c.instructions+=2;goto B50b0b9;
case 0x50b0ba:c.instructions+=1;goto B50b0ba;
case 0x50b0c0:goto L50b0c0;
case 0x50b0c2:c.instructions+=7;goto B50b0c2;
case 0x50b0c6:c.instructions+=6;goto B50b0c6;
case 0x50b0c9:c.instructions+=5;goto B50b0c9;
case 0x50b0ca:c.instructions+=4;goto B50b0ca;
case 0x50b0cb:c.instructions+=3;goto B50b0cb;
case 0x50b0cd:c.instructions+=2;goto B50b0cd;
case 0x50b0ce:c.instructions+=1;goto B50b0ce;
case 0x50b0d0:goto L50b0d0;
case 0x50b0d4:c.instructions+=2;goto B50b0d4;
case 0x50b0d7:c.instructions+=1;goto B50b0d7;
case 0x50b0d9:goto L50b0d9;
case 0x50b0db:c.instructions+=1;goto B50b0db;
case 0x50b0dd:goto L50b0dd;
case 0x50b0e2:goto L50b0e2;
case 0x50b0e6:c.instructions+=13;goto B50b0e6;
case 0x50b0e9:c.instructions+=12;goto B50b0e9;
case 0x50b0ec:c.instructions+=11;goto B50b0ec;
case 0x50b0ee:c.instructions+=10;goto B50b0ee;
case 0x50b0f2:c.instructions+=9;goto B50b0f2;
case 0x50b0f5:c.instructions+=8;goto B50b0f5;
case 0x50b0f9:c.instructions+=7;goto B50b0f9;
case 0x50b0fc:c.instructions+=6;goto B50b0fc;
case 0x50b100:c.instructions+=5;goto B50b100;
case 0x50b104:c.instructions+=4;goto B50b104;
case 0x50b108:c.instructions+=3;goto B50b108;
case 0x50b10c:c.instructions+=2;goto B50b10c;
case 0x50b10e:c.instructions+=1;goto B50b10e;
case 0x50b111:goto L50b111;
case 0x50b115:c.instructions+=4;goto B50b115;
case 0x50b11a:c.instructions+=3;goto B50b11a;
case 0x50b11c:c.instructions+=2;goto B50b11c;
case 0x50b11e:c.instructions+=1;goto B50b11e;
case 0x50b120:goto L50b120;
case 0x50b124:c.instructions+=2;goto B50b124;
case 0x50b126:c.instructions+=1;goto B50b126;
case 0x50b128:goto L50b128;
case 0x50b12a:c.instructions+=1;goto B50b12a;
case 0x50b12c:goto L50b12c;
case 0x50b132:goto L50b132;
case 0x50b133:c.instructions+=3;goto B50b133;
case 0x50b136:c.instructions+=2;goto B50b136;
case 0x50b139:c.instructions+=1;goto B50b139;
case 0x50b13b:goto L50b13b;
case 0x50b13c:c.instructions+=3;goto B50b13c;
case 0x50b13d:c.instructions+=2;goto B50b13d;
case 0x50b13e:c.instructions+=1;goto B50b13e;
case 0x50b150:goto L50b150;
case 0x50b151:c.instructions+=6;goto B50b151;
case 0x50b152:c.instructions+=5;goto B50b152;
case 0x50b153:c.instructions+=4;goto B50b153;
case 0x50b158:c.instructions+=3;goto B50b158;
case 0x50b15b:c.instructions+=2;goto B50b15b;
case 0x50b160:c.instructions+=1;goto B50b160;
case 0x50b163:goto L50b163;
case 0x50b166:c.instructions+=4;goto B50b166;
case 0x50b16b:c.instructions+=3;goto B50b16b;
case 0x50b16d:c.instructions+=2;goto B50b16d;
case 0x50b16f:c.instructions+=1;goto B50b16f;
case 0x50b171:goto L50b171;
case 0x50b174:c.instructions+=2;goto B50b174;
case 0x50b176:c.instructions+=1;goto B50b176;
case 0x50b178:goto L50b178;
case 0x50b17a:goto L50b17a;
case 0x50b17d:c.instructions+=4;goto B50b17d;
case 0x50b182:c.instructions+=3;goto B50b182;
case 0x50b184:c.instructions+=2;goto B50b184;
case 0x50b186:c.instructions+=1;goto B50b186;
case 0x50b188:goto L50b188;
case 0x50b18a:c.instructions+=2;goto B50b18a;
case 0x50b18c:c.instructions+=1;goto B50b18c;
case 0x50b18e:goto L50b18e;
case 0x50b190:goto L50b190;
case 0x50b195:c.instructions+=4;goto B50b195;
case 0x50b197:c.instructions+=3;goto B50b197;
case 0x50b199:c.instructions+=2;goto B50b199;
case 0x50b19b:c.instructions+=1;goto B50b19b;
case 0x50b19d:goto L50b19d;
case 0x50b1a0:c.instructions+=2;goto B50b1a0;
case 0x50b1a2:c.instructions+=1;goto B50b1a2;
case 0x50b1a4:goto L50b1a4;
case 0x50b1a6:goto L50b1a6;
case 0x50b1a9:c.instructions+=4;goto B50b1a9;
case 0x50b1ae:c.instructions+=3;goto B50b1ae;
case 0x50b1b0:c.instructions+=2;goto B50b1b0;
case 0x50b1b2:c.instructions+=1;goto B50b1b2;
case 0x50b1b4:goto L50b1b4;
case 0x50b1b7:c.instructions+=2;goto B50b1b7;
case 0x50b1b9:c.instructions+=1;goto B50b1b9;
case 0x50b1bb:goto L50b1bb;
case 0x50b1bd:goto L50b1bd;
case 0x50b1c0:c.instructions+=4;goto B50b1c0;
case 0x50b1c5:c.instructions+=3;goto B50b1c5;
case 0x50b1c7:c.instructions+=2;goto B50b1c7;
case 0x50b1c9:c.instructions+=1;goto B50b1c9;
case 0x50b1cb:goto L50b1cb;
case 0x50b1ce:c.instructions+=2;goto B50b1ce;
case 0x50b1d0:c.instructions+=1;goto B50b1d0;
case 0x50b1d2:goto L50b1d2;
case 0x50b1d4:goto L50b1d4;
case 0x50b1d7:c.instructions+=4;goto B50b1d7;
case 0x50b1dc:c.instructions+=3;goto B50b1dc;
case 0x50b1de:c.instructions+=2;goto B50b1de;
case 0x50b1e0:c.instructions+=1;goto B50b1e0;
case 0x50b1e2:goto L50b1e2;
case 0x50b1e5:c.instructions+=2;goto B50b1e5;
case 0x50b1e7:c.instructions+=1;goto B50b1e7;
case 0x50b1e9:goto L50b1e9;
case 0x50b1eb:goto L50b1eb;
case 0x50b1ee:c.instructions+=4;goto B50b1ee;
case 0x50b1f3:c.instructions+=3;goto B50b1f3;
case 0x50b1f5:c.instructions+=2;goto B50b1f5;
case 0x50b1f7:c.instructions+=1;goto B50b1f7;
case 0x50b1f9:goto L50b1f9;
case 0x50b1fc:c.instructions+=2;goto B50b1fc;
case 0x50b1fe:c.instructions+=1;goto B50b1fe;
case 0x50b200:goto L50b200;
case 0x50b202:goto L50b202;
case 0x50b205:c.instructions+=4;goto B50b205;
case 0x50b20a:c.instructions+=3;goto B50b20a;
case 0x50b20c:c.instructions+=2;goto B50b20c;
case 0x50b20e:c.instructions+=1;goto B50b20e;
case 0x50b210:goto L50b210;
case 0x50b213:c.instructions+=2;goto B50b213;
case 0x50b215:c.instructions+=1;goto B50b215;
case 0x50b217:goto L50b217;
case 0x50b219:goto L50b219;
case 0x50b21c:c.instructions+=4;goto B50b21c;
case 0x50b21f:c.instructions+=3;goto B50b21f;
case 0x50b222:c.instructions+=2;goto B50b222;
case 0x50b225:c.instructions+=1;goto B50b225;
case 0x50b22b:goto L50b22b;
case 0x50b22c:c.instructions+=3;goto B50b22c;
case 0x50b22d:c.instructions+=2;goto B50b22d;
case 0x50b22e:c.instructions+=1;goto B50b22e;
case 0x50b240:goto L50b240;
case 0x50b246:c.instructions+=4;goto B50b246;
case 0x50b248:c.instructions+=3;goto B50b248;
case 0x50b249:c.instructions+=2;goto B50b249;
case 0x50b24a:c.instructions+=1;goto B50b24a;
case 0x50b24c:goto L50b24c;
case 0x50b250:goto L50b250;
case 0x50b253:c.instructions+=3;goto B50b253;
case 0x50b256:c.instructions+=2;goto B50b256;
case 0x50b25b:c.instructions+=1;goto B50b25b;
case 0x50b25d:goto L50b25d;
case 0x50b25f:c.instructions+=2;goto B50b25f;
case 0x50b261:c.instructions+=1;goto B50b261;
case 0x50b263:goto L50b263;
case 0x50b266:c.instructions+=2;goto B50b266;
case 0x50b269:c.instructions+=1;goto B50b269;
case 0x50b26b:goto L50b26b;
case 0x50b26e:c.instructions+=1;goto B50b26e;
case 0x50b270:goto L50b270;
case 0x50b273:goto L50b273;
case 0x50b276:c.instructions+=5;goto B50b276;
case 0x50b278:c.instructions+=4;goto B50b278;
case 0x50b27b:c.instructions+=3;goto B50b27b;
case 0x50b27c:c.instructions+=2;goto B50b27c;
case 0x50b27e:c.instructions+=1;goto B50b27e;
case 0x50b280:goto L50b280;
case 0x50b282:c.instructions+=1;goto B50b282;
case 0x50b284:goto L50b284;
case 0x50b287:c.instructions+=2;goto B50b287;
case 0x50b289:c.instructions+=1;goto B50b289;
case 0x50b28b:goto L50b28b;
case 0x50b28d:goto L50b28d;
case 0x50b28e:c.instructions+=2;goto B50b28e;
case 0x50b28f:c.instructions+=1;goto B50b28f;
case 0x50b2a0:goto L50b2a0;
case 0x50b2a4:c.instructions+=2;goto B50b2a4;
case 0x50b2a6:c.instructions+=1;goto B50b2a6;
case 0x50b2a8:goto L50b2a8;
case 0x50b2aa:c.instructions+=1;goto B50b2aa;
case 0x50b2b0:goto L50b2b0;
case 0x50b2b6:c.instructions+=1;goto B50b2b6;
case 0x50b2b8:goto L50b2b8;
case 0x50b2bb:c.instructions+=2;goto B50b2bb;
case 0x50b2be:c.instructions+=1;goto B50b2be;
case 0x50b2c0:goto L50b2c0;
case 0x50b2c2:goto L50b2c2;
case 0x50b2c8:c.instructions+=1;goto B50b2c8;
case 0x50b2ca:goto L50b2ca;
case 0x50b2cd:c.instructions+=2;goto B50b2cd;
case 0x50b2d0:c.instructions+=1;goto B50b2d0;
case 0x50b2d2:goto L50b2d2;
case 0x50b2d4:goto L50b2d4;
case 0x50b2da:c.instructions+=1;goto B50b2da;
case 0x50b2dc:goto L50b2dc;
case 0x50b2df:c.instructions+=2;goto B50b2df;
case 0x50b2e2:c.instructions+=1;goto B50b2e2;
case 0x50b2e4:goto L50b2e4;
case 0x50b2ea:c.instructions+=1;goto B50b2ea;
case 0x50b2ec:goto L50b2ec;
case 0x50b2f2:c.instructions+=1;goto B50b2f2;
case 0x50b2f4:goto L50b2f4;
case 0x50b2f6:c.instructions+=1;goto B50b2f6;
case 0x50b2f7:goto L50b2f7;
case 0x50b2f9:c.instructions+=1;goto B50b2f9;
case 0x50b300:goto L50b300;
case 0x50b301:c.instructions+=3;goto B50b301;
case 0x50b305:c.instructions+=2;goto B50b305;
case 0x50b30b:c.instructions+=1;goto B50b30b;
case 0x50b310:goto L50b310;
case 0x50b312:c.instructions+=1;goto B50b312;
case 0x50b314:goto L50b314;
case 0x50b31a:goto L50b31a;
case 0x50b31d:c.instructions+=2;goto B50b31d;
case 0x50b31e:c.instructions+=1;goto B50b31e;
case 0x50b320:goto L50b320;
case 0x50b326:c.instructions+=8;goto B50b326;
case 0x50b32d:c.instructions+=7;goto B50b32d;
case 0x50b333:c.instructions+=6;goto B50b333;
case 0x50b337:c.instructions+=5;goto B50b337;
case 0x50b33e:c.instructions+=4;goto B50b33e;
case 0x50b344:c.instructions+=3;goto B50b344;
case 0x50b345:c.instructions+=2;goto B50b345;
case 0x50b34b:c.instructions+=1;goto B50b34b;
case 0x50b34d:goto L50b34d;
case 0x50b34e:c.instructions+=2;goto B50b34e;
case 0x50b351:c.instructions+=1;goto B50b351;
case 0x50b352:goto L50b352;
case 0x50b358:c.instructions+=2;goto B50b358;
case 0x50b359:c.instructions+=1;goto B50b359;
case 0x50b360:goto L50b360;
case 0x50b361:c.instructions+=4;goto B50b361;
case 0x50b365:c.instructions+=3;goto B50b365;
case 0x50b367:c.instructions+=2;goto B50b367;
case 0x50b36d:c.instructions+=1;goto B50b36d;
case 0x50b370:goto L50b370;
case 0x50b372:c.instructions+=1;goto B50b372;
case 0x50b374:goto L50b374;
case 0x50b375:c.instructions+=3;goto B50b375;
case 0x50b378:c.instructions+=2;goto B50b378;
case 0x50b37b:c.instructions+=1;goto B50b37b;
case 0x50b37d:goto L50b37d;
case 0x50b37f:c.instructions+=2;goto B50b37f;
case 0x50b380:c.instructions+=1;goto B50b380;
case 0x50b383:goto L50b383;
case 0x50b38a:c.instructions+=2;goto B50b38a;
case 0x50b38b:c.instructions+=1;goto B50b38b;
case 0x50b390:goto L50b390;
case 0x50b396:c.instructions+=2;goto B50b396;
case 0x50b39b:c.instructions+=1;goto B50b39b;
case 0x50b3a0:goto L50b3a0;
case 0x50b3a3:c.instructions+=3;goto B50b3a3;
case 0x50b3a8:c.instructions+=2;goto B50b3a8;
case 0x50b3a9:c.instructions+=1;goto B50b3a9;
case 0x50b3ab:goto L50b3ab;
case 0x50b3b5:c.instructions+=1;goto B50b3b5;
case 0x50b3c0:goto L50b3c0;
case 0x50b3c4:c.instructions+=5;goto B50b3c4;
case 0x50b3c6:c.instructions+=4;goto B50b3c6;
case 0x50b3c9:c.instructions+=3;goto B50b3c9;
case 0x50b3cb:c.instructions+=2;goto B50b3cb;
case 0x50b3ce:c.instructions+=1;goto B50b3ce;
case 0x50b3d0:goto L50b3d0;
case 0x50b3d3:c.instructions+=6;goto B50b3d3;
case 0x50b3d5:c.instructions+=5;goto B50b3d5;
case 0x50b3d7:c.instructions+=4;goto B50b3d7;
case 0x50b3da:c.instructions+=3;goto B50b3da;
case 0x50b3dd:c.instructions+=2;goto B50b3dd;
case 0x50b3df:c.instructions+=1;goto B50b3df;
case 0x50b3e2:goto L50b3e2;
case 0x50b3e5:c.instructions+=4;goto B50b3e5;
case 0x50b3e8:c.instructions+=3;goto B50b3e8;
case 0x50b3ea:c.instructions+=2;goto B50b3ea;
case 0x50b3ed:c.instructions+=1;goto B50b3ed;
case 0x50b3ef:goto L50b3ef;
case 0x50b3f2:c.instructions+=6;goto B50b3f2;
case 0x50b3f5:c.instructions+=5;goto B50b3f5;
case 0x50b3f7:c.instructions+=4;goto B50b3f7;
case 0x50b3fa:c.instructions+=3;goto B50b3fa;
case 0x50b3fd:c.instructions+=2;goto B50b3fd;
case 0x50b400:c.instructions+=1;goto B50b400;
case 0x50b403:goto L50b403;
case 0x50b410:goto L50b410;
case 0x50b414:c.instructions+=5;goto B50b414;
case 0x50b418:c.instructions+=4;goto B50b418;
case 0x50b41b:c.instructions+=3;goto B50b41b;
case 0x50b420:c.instructions+=2;goto B50b420;
case 0x50b426:c.instructions+=1;goto B50b426;
case 0x50b430:goto L50b430;
case 0x50b435:c.instructions+=3;goto B50b435;
case 0x50b43b:c.instructions+=2;goto B50b43b;
case 0x50b43d:c.instructions+=1;goto B50b43d;
case 0x50b43f:goto L50b43f;
case 0x50b441:goto L50b441;
case 0x50b446:c.instructions+=5;goto B50b446;
case 0x50b448:c.instructions+=4;goto B50b448;
case 0x50b44d:c.instructions+=3;goto B50b44d;
case 0x50b452:c.instructions+=2;goto B50b452;
case 0x50b457:c.instructions+=1;goto B50b457;
case 0x50b460:goto L50b460;
case 0x50b461:c.instructions+=13;goto B50b461;
case 0x50b463:c.instructions+=12;goto B50b463;
case 0x50b466:c.instructions+=11;goto B50b466;
case 0x50b46c:c.instructions+=10;goto B50b46c;
case 0x50b471:c.instructions+=9;goto B50b471;
case 0x50b472:c.instructions+=8;goto B50b472;
case 0x50b475:c.instructions+=7;goto B50b475;
case 0x50b476:c.instructions+=6;goto B50b476;
case 0x50b477:c.instructions+=5;goto B50b477;
case 0x50b47a:c.instructions+=4;goto B50b47a;
case 0x50b47c:c.instructions+=3;goto B50b47c;
case 0x50b481:c.instructions+=2;goto B50b481;
case 0x50b488:c.instructions+=1;goto B50b488;
case 0x50b48a:goto L50b48a;
case 0x50b490:c.instructions+=1;goto B50b490;
case 0x50b492:goto L50b492;
case 0x50b497:c.instructions+=1;goto B50b497;
case 0x50b49e:goto L50b49e;
case 0x50b4a4:c.instructions+=7;goto B50b4a4;
case 0x50b4a8:c.instructions+=6;goto B50b4a8;
case 0x50b4ac:c.instructions+=5;goto B50b4ac;
case 0x50b4b2:c.instructions+=4;goto B50b4b2;
case 0x50b4b8:c.instructions+=3;goto B50b4b8;
case 0x50b4ba:c.instructions+=2;goto B50b4ba;
case 0x50b4bd:c.instructions+=1;goto B50b4bd;
case 0x50b4bf:goto L50b4bf;
case 0x50b4c6:c.instructions+=1;goto B50b4c6;
case 0x50b4cc:goto L50b4cc;
case 0x50b4d3:c.instructions+=4;goto B50b4d3;
case 0x50b4d4:c.instructions+=3;goto B50b4d4;
case 0x50b4da:c.instructions+=2;goto B50b4da;
case 0x50b4e0:c.instructions+=1;goto B50b4e0;
case 0x50b4e5:goto L50b4e5;
case 0x50b4e7:c.instructions+=6;goto B50b4e7;
case 0x50b4e9:c.instructions+=5;goto B50b4e9;
case 0x50b4ee:c.instructions+=4;goto B50b4ee;
case 0x50b4f9:c.instructions+=3;goto B50b4f9;
case 0x50b504:c.instructions+=2;goto B50b504;
case 0x50b50f:c.instructions+=1;goto B50b50f;
case 0x50b514:goto L50b514;
case 0x50b51b:c.instructions+=3;goto B50b51b;
case 0x50b51c:c.instructions+=2;goto B50b51c;
case 0x50b51e:c.instructions+=1;goto B50b51e;
case 0x50b523:goto L50b523;
case 0x50b526:c.instructions+=7;goto B50b526;
case 0x50b52d:c.instructions+=6;goto B50b52d;
case 0x50b52e:c.instructions+=5;goto B50b52e;
case 0x50b535:c.instructions+=4;goto B50b535;
case 0x50b540:c.instructions+=3;goto B50b540;
case 0x50b543:c.instructions+=2;goto B50b543;
case 0x50b54a:c.instructions+=1;goto B50b54a;
case 0x50b54f:goto L50b54f;
case 0x50b556:c.instructions+=2;goto B50b556;
case 0x50b557:c.instructions+=1;goto B50b557;
case 0x50b55c:goto L50b55c;
case 0x50b563:c.instructions+=2;goto B50b563;
case 0x50b564:c.instructions+=1;goto B50b564;
case 0x50b569:goto L50b569;
case 0x50b56d:c.instructions+=11;goto B50b56d;
case 0x50b571:c.instructions+=10;goto B50b571;
case 0x50b578:c.instructions+=9;goto B50b578;
case 0x50b579:c.instructions+=8;goto B50b579;
case 0x50b57d:c.instructions+=7;goto B50b57d;
case 0x50b584:c.instructions+=6;goto B50b584;
case 0x50b588:c.instructions+=5;goto B50b588;
case 0x50b58c:c.instructions+=4;goto B50b58c;
case 0x50b597:c.instructions+=3;goto B50b597;
case 0x50b59b:c.instructions+=2;goto B50b59b;
case 0x50b5a2:c.instructions+=1;goto B50b5a2;
case 0x50b5a7:goto L50b5a7;
case 0x50b5ab:c.instructions+=2;goto B50b5ab;
case 0x50b5ac:c.instructions+=1;goto B50b5ac;
case 0x50b5b1:goto L50b5b1;
case 0x50b5b8:c.instructions+=6;goto B50b5b8;
case 0x50b5b9:c.instructions+=5;goto B50b5b9;
case 0x50b5bd:c.instructions+=4;goto B50b5bd;
case 0x50b5be:c.instructions+=3;goto B50b5be;
case 0x50b5c2:c.instructions+=2;goto B50b5c2;
case 0x50b5c3:c.instructions+=1;goto B50b5c3;
case 0x50b5c8:goto L50b5c8;
case 0x50b5cf:c.instructions+=6;goto B50b5cf;
case 0x50b5d0:c.instructions+=5;goto B50b5d0;
case 0x50b5d4:c.instructions+=4;goto B50b5d4;
case 0x50b5d5:c.instructions+=3;goto B50b5d5;
case 0x50b5d9:c.instructions+=2;goto B50b5d9;
case 0x50b5da:c.instructions+=1;goto B50b5da;
case 0x50b5df:goto L50b5df;
case 0x50b5e2:c.instructions+=7;goto B50b5e2;
case 0x50b5e9:c.instructions+=6;goto B50b5e9;
case 0x50b5ea:c.instructions+=5;goto B50b5ea;
case 0x50b5ee:c.instructions+=4;goto B50b5ee;
case 0x50b5ef:c.instructions+=3;goto B50b5ef;
case 0x50b5f3:c.instructions+=2;goto B50b5f3;
case 0x50b5f4:c.instructions+=1;goto B50b5f4;
case 0x50b5f9:goto L50b5f9;
case 0x50b600:c.instructions+=6;goto B50b600;
case 0x50b601:c.instructions+=5;goto B50b601;
case 0x50b605:c.instructions+=4;goto B50b605;
case 0x50b606:c.instructions+=3;goto B50b606;
case 0x50b60a:c.instructions+=2;goto B50b60a;
case 0x50b60b:c.instructions+=1;goto B50b60b;
case 0x50b610:goto L50b610;
case 0x50b617:c.instructions+=6;goto B50b617;
case 0x50b618:c.instructions+=5;goto B50b618;
case 0x50b61c:c.instructions+=4;goto B50b61c;
case 0x50b61d:c.instructions+=3;goto B50b61d;
case 0x50b621:c.instructions+=2;goto B50b621;
case 0x50b622:c.instructions+=1;goto B50b622;
case 0x50b627:goto L50b627;
case 0x50b62b:c.instructions+=6;goto B50b62b;
case 0x50b62c:c.instructions+=5;goto B50b62c;
case 0x50b633:c.instructions+=4;goto B50b633;
case 0x50b634:c.instructions+=3;goto B50b634;
case 0x50b638:c.instructions+=2;goto B50b638;
case 0x50b639:c.instructions+=1;goto B50b639;
case 0x50b63e:goto L50b63e;
case 0x50b642:c.instructions+=4;goto B50b642;
case 0x50b646:c.instructions+=3;goto B50b646;
case 0x50b649:c.instructions+=2;goto B50b649;
case 0x50b64b:c.instructions+=1;goto B50b64b;
case 0x50b64d:goto L50b64d;
case 0x50b64e:c.instructions+=3;goto B50b64e;
case 0x50b650:c.instructions+=2;goto B50b650;
case 0x50b652:c.instructions+=1;goto B50b652;
case 0x50b654:goto L50b654;
case 0x50b656:c.instructions+=2;goto B50b656;
case 0x50b658:c.instructions+=1;goto B50b658;
case 0x50b65a:goto L50b65a;
case 0x50b65c:c.instructions+=1;goto B50b65c;
case 0x50b65e:goto L50b65e;
case 0x50b661:c.instructions+=3;goto B50b661;
case 0x50b663:c.instructions+=2;goto B50b663;
case 0x50b665:c.instructions+=1;goto B50b665;
case 0x50b667:goto L50b667;
case 0x50b669:c.instructions+=2;goto B50b669;
case 0x50b66b:c.instructions+=1;goto B50b66b;
case 0x50b66d:goto L50b66d;
case 0x50b671:c.instructions+=2;goto B50b671;
case 0x50b672:c.instructions+=1;goto B50b672;
case 0x50b677:goto L50b677;
case 0x50b67a:c.instructions+=2;goto B50b67a;
case 0x50b67e:c.instructions+=1;goto B50b67e;
case 0x50b683:goto L50b683;
case 0x50b686:c.instructions+=47;goto B50b686;
case 0x50b68a:c.instructions+=46;goto B50b68a;
case 0x50b68e:c.instructions+=45;goto B50b68e;
case 0x50b691:c.instructions+=44;goto B50b691;
case 0x50b695:c.instructions+=43;goto B50b695;
case 0x50b697:c.instructions+=42;goto B50b697;
case 0x50b69b:c.instructions+=41;goto B50b69b;
case 0x50b69c:c.instructions+=40;goto B50b69c;
case 0x50b6a0:c.instructions+=39;goto B50b6a0;
case 0x50b6a4:c.instructions+=38;goto B50b6a4;
case 0x50b6a8:c.instructions+=37;goto B50b6a8;
case 0x50b6aa:c.instructions+=36;goto B50b6aa;
case 0x50b6ae:c.instructions+=35;goto B50b6ae;
case 0x50b6b2:c.instructions+=34;goto B50b6b2;
case 0x50b6b6:c.instructions+=33;goto B50b6b6;
case 0x50b6ba:c.instructions+=32;goto B50b6ba;
case 0x50b6be:c.instructions+=31;goto B50b6be;
case 0x50b6c0:c.instructions+=30;goto B50b6c0;
case 0x50b6c4:c.instructions+=29;goto B50b6c4;
case 0x50b6c8:c.instructions+=28;goto B50b6c8;
case 0x50b6cf:c.instructions+=27;goto B50b6cf;
case 0x50b6d3:c.instructions+=26;goto B50b6d3;
case 0x50b6d5:c.instructions+=25;goto B50b6d5;
case 0x50b6d9:c.instructions+=24;goto B50b6d9;
case 0x50b6de:c.instructions+=23;goto B50b6de;
case 0x50b6e2:c.instructions+=22;goto B50b6e2;
case 0x50b6e9:c.instructions+=21;goto B50b6e9;
case 0x50b6f0:c.instructions+=20;goto B50b6f0;
case 0x50b6f4:c.instructions+=19;goto B50b6f4;
case 0x50b6f6:c.instructions+=18;goto B50b6f6;
case 0x50b6fa:c.instructions+=17;goto B50b6fa;
case 0x50b701:c.instructions+=16;goto B50b701;
case 0x50b708:c.instructions+=15;goto B50b708;
case 0x50b70c:c.instructions+=14;goto B50b70c;
case 0x50b713:c.instructions+=13;goto B50b713;
case 0x50b71a:c.instructions+=12;goto B50b71a;
case 0x50b71e:c.instructions+=11;goto B50b71e;
case 0x50b71f:c.instructions+=10;goto B50b71f;
case 0x50b726:c.instructions+=9;goto B50b726;
case 0x50b731:c.instructions+=8;goto B50b731;
case 0x50b73c:c.instructions+=7;goto B50b73c;
case 0x50b747:c.instructions+=6;goto B50b747;
case 0x50b752:c.instructions+=5;goto B50b752;
case 0x50b75d:c.instructions+=4;goto B50b75d;
case 0x50b768:c.instructions+=3;goto B50b768;
case 0x50b773:c.instructions+=2;goto B50b773;
case 0x50b77e:c.instructions+=1;goto B50b77e;
case 0x50b783:goto L50b783;
case 0x50b786:goto L50b786;
case 0x50b787:c.instructions+=5;goto B50b787;
case 0x50b788:c.instructions+=4;goto B50b788;
case 0x50b789:c.instructions+=3;goto B50b789;
case 0x50b78b:c.instructions+=2;goto B50b78b;
case 0x50b78c:c.instructions+=1;goto B50b78c;
case 0x50b790:goto L50b790;
case 0x50b793:c.instructions+=6;goto B50b793;
case 0x50b794:c.instructions+=5;goto B50b794;
case 0x50b798:c.instructions+=4;goto B50b798;
case 0x50b799:c.instructions+=3;goto B50b799;
case 0x50b79a:c.instructions+=2;goto B50b79a;
case 0x50b79c:c.instructions+=1;goto B50b79c;
case 0x50b7a1:goto L50b7a1;
case 0x50b7a4:c.instructions+=3;goto B50b7a4;
case 0x50b7a7:c.instructions+=2;goto B50b7a7;
case 0x50b7a9:c.instructions+=1;goto B50b7a9;
case 0x50b7ab:goto L50b7ab;
case 0x50b7ad:c.instructions+=2;goto B50b7ad;
case 0x50b7af:c.instructions+=1;goto B50b7af;
case 0x50b7b1:goto L50b7b1;
case 0x50b7b4:c.instructions+=2;goto B50b7b4;
case 0x50b7b6:c.instructions+=1;goto B50b7b6;
case 0x50b7b8:goto L50b7b8;
case 0x50b7ba:c.instructions+=1;goto B50b7ba;
case 0x50b7bc:goto L50b7bc;
case 0x50b7be:goto L50b7be;
case 0x50b7c1:c.instructions+=5;goto B50b7c1;
case 0x50b7c3:c.instructions+=4;goto B50b7c3;
case 0x50b7c6:c.instructions+=3;goto B50b7c6;
case 0x50b7c7:c.instructions+=2;goto B50b7c7;
case 0x50b7c9:c.instructions+=1;goto B50b7c9;
case 0x50b7cb:goto L50b7cb;
case 0x50b7cd:c.instructions+=1;goto B50b7cd;
case 0x50b7cf:goto L50b7cf;
case 0x50b7d2:c.instructions+=1;goto B50b7d2;
case 0x50b7d4:goto L50b7d4;
case 0x50b7d7:c.instructions+=3;goto B50b7d7;
case 0x50b7d8:c.instructions+=2;goto B50b7d8;
case 0x50b7de:c.instructions+=1;goto B50b7de;
case 0x50b7e0:goto L50b7e0;
case 0x50b7e1:c.instructions+=5;goto B50b7e1;
case 0x50b7e2:c.instructions+=4;goto B50b7e2;
case 0x50b7e4:c.instructions+=3;goto B50b7e4;
case 0x50b7e5:c.instructions+=2;goto B50b7e5;
case 0x50b7e8:c.instructions+=1;goto B50b7e8;
case 0x50b7e9:goto L50b7e9;
case 0x50b7ed:c.instructions+=14;goto B50b7ed;
case 0x50b7ef:c.instructions+=13;goto B50b7ef;
case 0x50b7f2:c.instructions+=12;goto B50b7f2;
case 0x50b7f8:c.instructions+=11;goto B50b7f8;
case 0x50b7fc:c.instructions+=10;goto B50b7fc;
case 0x50b802:c.instructions+=9;goto B50b802;
case 0x50b806:c.instructions+=8;goto B50b806;
case 0x50b80c:c.instructions+=7;goto B50b80c;
case 0x50b810:c.instructions+=6;goto B50b810;
case 0x50b814:c.instructions+=5;goto B50b814;
case 0x50b818:c.instructions+=4;goto B50b818;
case 0x50b81c:c.instructions+=3;goto B50b81c;
case 0x50b81d:c.instructions+=2;goto B50b81d;
case 0x50b821:c.instructions+=1;goto B50b821;
case 0x50b827:goto L50b827;
case 0x50b82a:c.instructions+=5;goto B50b82a;
case 0x50b82b:c.instructions+=4;goto B50b82b;
case 0x50b82c:c.instructions+=3;goto B50b82c;
case 0x50b82d:c.instructions+=2;goto B50b82d;
case 0x50b830:c.instructions+=1;goto B50b830;
case 0x50b840:goto L50b840;
case 0x50b841:c.instructions+=6;goto B50b841;
case 0x50b845:c.instructions+=5;goto B50b845;
case 0x50b846:c.instructions+=4;goto B50b846;
case 0x50b847:c.instructions+=3;goto B50b847;
case 0x50b849:c.instructions+=2;goto B50b849;
case 0x50b84e:c.instructions+=1;goto B50b84e;
case 0x50b850:goto L50b850;
case 0x50b852:c.instructions+=3;goto B50b852;
case 0x50b855:c.instructions+=2;goto B50b855;
case 0x50b857:c.instructions+=1;goto B50b857;
case 0x50b859:goto L50b859;
case 0x50b85b:c.instructions+=2;goto B50b85b;
case 0x50b85d:c.instructions+=1;goto B50b85d;
case 0x50b85f:goto L50b85f;
case 0x50b860:goto L50b860;
case 0x50b863:c.instructions+=2;goto B50b863;
case 0x50b866:c.instructions+=1;goto B50b866;
case 0x50b868:goto L50b868;
case 0x50b86b:c.instructions+=1;goto B50b86b;
case 0x50b86d:goto L50b86d;
case 0x50b870:goto L50b870;
case 0x50b873:c.instructions+=5;goto B50b873;
case 0x50b875:c.instructions+=4;goto B50b875;
case 0x50b878:c.instructions+=3;goto B50b878;
case 0x50b879:c.instructions+=2;goto B50b879;
case 0x50b87b:c.instructions+=1;goto B50b87b;
case 0x50b87d:goto L50b87d;
case 0x50b87f:c.instructions+=1;goto B50b87f;
case 0x50b881:goto L50b881;
case 0x50b884:c.instructions+=3;goto B50b884;
case 0x50b885:c.instructions+=2;goto B50b885;
case 0x50b88b:c.instructions+=1;goto B50b88b;
case 0x50b88d:goto L50b88d;
case 0x50b88e:c.instructions+=4;goto B50b88e;
case 0x50b88f:c.instructions+=3;goto B50b88f;
case 0x50b891:c.instructions+=2;goto B50b891;
case 0x50b892:c.instructions+=1;goto B50b892;
case 0x50b893:goto L50b893;
case 0x50b896:c.instructions+=5;goto B50b896;
case 0x50b897:c.instructions+=4;goto B50b897;
case 0x50b898:c.instructions+=3;goto B50b898;
case 0x50b89d:c.instructions+=2;goto B50b89d;
case 0x50b89e:c.instructions+=1;goto B50b89e;
case 0x50b8a0:goto L50b8a0;
case 0x50b8a4:c.instructions+=2;goto B50b8a4;
case 0x50b8a5:c.instructions+=1;goto B50b8a5;
case 0x50b8aa:goto L50b8aa;
case 0x50b8ab:c.instructions+=1;goto B50b8ab;
case 0x50b8b0:goto L50b8b0;
case 0x50b8b3:c.instructions+=2;goto B50b8b3;
case 0x50b8b5:c.instructions+=1;goto B50b8b5;
case 0x50b8b7:goto L50b8b7;
case 0x50b8ba:c.instructions+=1;goto B50b8ba;
case 0x50b8bb:goto L50b8bb;
case 0x50b8bd:c.instructions+=1;goto B50b8bd;
case 0x50b8c0:goto L50b8c0;
case 0x50b8c4:c.instructions+=2;goto B50b8c4;
case 0x50b8c5:c.instructions+=1;goto B50b8c5;
case 0x50b8ca:goto L50b8ca;
case 0x50b8cb:c.instructions+=1;goto B50b8cb;
case 0x50b8d0:goto L50b8d0;
case 0x50b8d3:c.instructions+=2;goto B50b8d3;
case 0x50b8d5:c.instructions+=1;goto B50b8d5;
case 0x50b8d7:goto L50b8d7;
case 0x50b8db:c.instructions+=1;goto B50b8db;
case 0x50b8de:goto L50b8de;
case 0x50b8e0:goto L50b8e0;
case 0x50b8e1:c.instructions+=5;goto B50b8e1;
case 0x50b8e5:c.instructions+=4;goto B50b8e5;
case 0x50b8e6:c.instructions+=3;goto B50b8e6;
case 0x50b8e7:c.instructions+=2;goto B50b8e7;
case 0x50b8eb:c.instructions+=1;goto B50b8eb;
case 0x50b8f0:goto L50b8f0;
case 0x50b8f2:c.instructions+=3;goto B50b8f2;
case 0x50b8f3:c.instructions+=2;goto B50b8f3;
case 0x50b8f4:c.instructions+=1;goto B50b8f4;
case 0x50b8f9:goto L50b8f9;
case 0x50b8fc:c.instructions+=2;goto B50b8fc;
case 0x50b8fe:c.instructions+=1;goto B50b8fe;
case 0x50b900:goto L50b900;
case 0x50b903:goto L50b903;
case 0x50b906:c.instructions+=2;goto B50b906;
case 0x50b90c:c.instructions+=1;goto B50b90c;
case 0x50b90e:goto L50b90e;
case 0x50b90f:c.instructions+=3;goto B50b90f;
case 0x50b910:c.instructions+=2;goto B50b910;
case 0x50b911:c.instructions+=1;goto B50b911;
case 0x50b920:goto L50b920;
case 0x50b923:c.instructions+=3;goto B50b923;
case 0x50b925:c.instructions+=2;goto B50b925;
case 0x50b92a:c.instructions+=1;goto B50b92a;
case 0x50b92c:goto L50b92c;
case 0x50b92f:c.instructions+=2;goto B50b92f;
case 0x50b935:c.instructions+=1;goto B50b935;
case 0x50b937:goto L50b937;
case 0x50b93e:c.instructions+=1;goto B50b93e;
case 0x50b940:goto L50b940;
case 0x50b947:c.instructions+=1;goto B50b947;
case 0x50b949:goto L50b949;
case 0x50b94c:c.instructions+=2;goto B50b94c;
case 0x50b94d:c.instructions+=1;goto B50b94d;
case 0x50b952:goto L50b952;
case 0x50b955:c.instructions+=1;goto B50b955;
case 0x50b956:goto L50b956;
case 0x50b95b:c.instructions+=1;goto B50b95b;
case 0x50b95d:goto L50b95d;
case 0x50b960:c.instructions+=1;goto B50b960;
case 0x50b961:goto L50b961;
case 0x50b963:c.instructions+=1;goto B50b963;
case 0x50b970:goto L50b970;
case 0x50b974:c.instructions+=3;goto B50b974;
case 0x50b977:c.instructions+=2;goto B50b977;
case 0x50b979:c.instructions+=1;goto B50b979;
case 0x50b97b:goto L50b97b;
case 0x50b97e:c.instructions+=1;goto B50b97e;
case 0x50b97f:goto L50b97f;
case 0x50b981:c.instructions+=1;goto B50b981;
case 0x50b990:goto L50b990;
case 0x50b994:c.instructions+=7;goto B50b994;
case 0x50b99a:c.instructions+=6;goto B50b99a;
case 0x50b9a1:c.instructions+=5;goto B50b9a1;
case 0x50b9a2:c.instructions+=4;goto B50b9a2;
case 0x50b9a3:c.instructions+=3;goto B50b9a3;
case 0x50b9a7:c.instructions+=2;goto B50b9a7;
case 0x50b9a8:c.instructions+=1;goto B50b9a8;
case 0x50b9ad:goto L50b9ad;
case 0x50b9b1:c.instructions+=2;goto B50b9b1;
case 0x50b9b2:c.instructions+=1;goto B50b9b2;
case 0x50b9b7:goto L50b9b7;
case 0x50b9bd:c.instructions+=1;goto B50b9bd;
case 0x50b9c0:goto L50b9c0;
case 0x50b9c4:c.instructions+=7;goto B50b9c4;
case 0x50b9ca:c.instructions+=6;goto B50b9ca;
case 0x50b9d1:c.instructions+=5;goto B50b9d1;
case 0x50b9d2:c.instructions+=4;goto B50b9d2;
case 0x50b9d3:c.instructions+=3;goto B50b9d3;
case 0x50b9d7:c.instructions+=2;goto B50b9d7;
case 0x50b9d8:c.instructions+=1;goto B50b9d8;
case 0x50b9dd:goto L50b9dd;
case 0x50b9e1:c.instructions+=5;goto B50b9e1;
case 0x50b9e4:c.instructions+=4;goto B50b9e4;
case 0x50b9e7:c.instructions+=3;goto B50b9e7;
case 0x50b9e9:c.instructions+=2;goto B50b9e9;
case 0x50b9ed:c.instructions+=1;goto B50b9ed;
case 0x50b9ef:goto L50b9ef;
case 0x50b9f0:goto L50b9f0;
case 0x50b9f3:c.instructions+=2;goto B50b9f3;
case 0x50b9f6:c.instructions+=1;goto B50b9f6;
case 0x50b9f8:goto L50b9f8;
case 0x50b9fb:c.instructions+=1;goto B50b9fb;
case 0x50b9fd:goto L50b9fd;
case 0x50ba00:goto L50ba00;
case 0x50ba03:c.instructions+=5;goto B50ba03;
case 0x50ba05:c.instructions+=4;goto B50ba05;
case 0x50ba08:c.instructions+=3;goto B50ba08;
case 0x50ba09:c.instructions+=2;goto B50ba09;
case 0x50ba0b:c.instructions+=1;goto B50ba0b;
case 0x50ba0d:goto L50ba0d;
case 0x50ba13:c.instructions+=1;goto B50ba13;
case 0x50ba20:goto L50ba20;
case 0x50ba25:c.instructions+=2;goto B50ba25;
case 0x50ba27:c.instructions+=1;goto B50ba27;
case 0x50ba29:goto L50ba29;
case 0x50ba2e:c.instructions+=3;goto B50ba2e;
case 0x50ba30:c.instructions+=2;goto B50ba30;
case 0x50ba31:c.instructions+=1;goto B50ba31;
case 0x50ba36:goto L50ba36;
case 0x50ba3c:c.instructions+=7;goto B50ba3c;
case 0x50ba42:c.instructions+=6;goto B50ba42;
case 0x50ba47:c.instructions+=5;goto B50ba47;
case 0x50ba48:c.instructions+=4;goto B50ba48;
case 0x50ba49:c.instructions+=3;goto B50ba49;
case 0x50ba4a:c.instructions+=2;goto B50ba4a;
case 0x50ba4f:c.instructions+=1;goto B50ba4f;
case 0x50ba54:goto L50ba54;
case 0x50ba5a:c.instructions+=6;goto B50ba5a;
case 0x50ba60:c.instructions+=5;goto B50ba60;
case 0x50ba62:c.instructions+=4;goto B50ba62;
case 0x50ba65:c.instructions+=3;goto B50ba65;
case 0x50ba66:c.instructions+=2;goto B50ba66;
case 0x50ba67:c.instructions+=1;goto B50ba67;
case 0x50ba6c:goto L50ba6c;
case 0x50ba6f:goto L50ba6f;
case 0x50ba70:goto L50ba70;
case 0x50ba74:c.instructions+=3;goto B50ba74;
case 0x50ba76:c.instructions+=2;goto B50ba76;
case 0x50ba78:c.instructions+=1;goto B50ba78;
case 0x50ba7a:goto L50ba7a;
case 0x50ba82:c.instructions+=1;goto B50ba82;
case 0x50ba84:goto L50ba84;
case 0x50ba88:c.instructions+=1;goto B50ba88;
case 0x50ba8a:goto L50ba8a;
case 0x50ba8e:c.instructions+=4;goto B50ba8e;
case 0x50ba91:c.instructions+=3;goto B50ba91;
case 0x50ba93:c.instructions+=2;goto B50ba93;
case 0x50ba96:c.instructions+=1;goto B50ba96;
case 0x50ba98:goto L50ba98;
case 0x50ba9c:c.instructions+=1;goto B50ba9c;
case 0x50ba9e:goto L50ba9e;
case 0x50baa2:c.instructions+=4;goto B50baa2;
case 0x50baa5:c.instructions+=3;goto B50baa5;
case 0x50baa6:c.instructions+=2;goto B50baa6;
case 0x50baa9:c.instructions+=1;goto B50baa9;
case 0x50baab:goto L50baab;
case 0x50baad:c.instructions+=1;goto B50baad;
case 0x50bab0:goto L50bab0;
case 0x50bac0:goto L50bac0;
case 0x50bac4:c.instructions+=2;goto B50bac4;
case 0x50bac6:c.instructions+=1;goto B50bac6;
case 0x50bac8:goto L50bac8;
case 0x50bad0:c.instructions+=1;goto B50bad0;
case 0x50bad2:goto L50bad2;
case 0x50bad6:c.instructions+=1;goto B50bad6;
case 0x50bad8:goto L50bad8;
case 0x50badc:c.instructions+=3;goto B50badc;
case 0x50badf:c.instructions+=2;goto B50badf;
case 0x50bae3:c.instructions+=1;goto B50bae3;
case 0x50bae5:goto L50bae5;
case 0x50bae8:c.instructions+=1;goto B50bae8;
case 0x50baea:goto L50baea;
case 0x50baf0:goto L50baf0;
case 0x50baf4:c.instructions+=1;goto B50baf4;
case 0x50baf6:goto L50baf6;
case 0x50bafa:c.instructions+=3;goto B50bafa;
case 0x50bafd:c.instructions+=2;goto B50bafd;
case 0x50bb00:c.instructions+=1;goto B50bb00;
case 0x50bb02:goto L50bb02;
case 0x50bb05:goto L50bb05;
case 0x50bb10:goto L50bb10;
case 0x50bb11:c.instructions+=9;goto B50bb11;
case 0x50bb13:c.instructions+=8;goto B50bb13;
case 0x50bb16:c.instructions+=7;goto B50bb16;
case 0x50bb1c:c.instructions+=6;goto B50bb1c;
case 0x50bb1f:c.instructions+=5;goto B50bb1f;
case 0x50bb20:c.instructions+=4;goto B50bb20;
case 0x50bb22:c.instructions+=3;goto B50bb22;
case 0x50bb26:c.instructions+=2;goto B50bb26;
case 0x50bb27:c.instructions+=1;goto B50bb27;
case 0x50bb2d:goto L50bb2d;
case 0x50bb30:c.instructions+=2;goto B50bb30;
case 0x50bb35:c.instructions+=1;goto B50bb35;
case 0x50bb39:goto L50bb39;
case 0x50bb3b:goto L50bb3b;
case 0x50bb3e:c.instructions+=3;goto B50bb3e;
case 0x50bb40:c.instructions+=2;goto B50bb40;
case 0x50bb44:c.instructions+=1;goto B50bb44;
case 0x50bb46:goto L50bb46;
case 0x50bb4a:c.instructions+=2;goto B50bb4a;
case 0x50bb4c:c.instructions+=1;goto B50bb4c;
case 0x50bb50:goto L50bb50;
case 0x50bb53:c.instructions+=1;goto B50bb53;
case 0x50bb55:goto L50bb55;
case 0x50bb5b:c.instructions+=1;goto B50bb5b;
case 0x50bb5d:goto L50bb5d;
case 0x50bb61:c.instructions+=6;goto B50bb61;
case 0x50bb64:c.instructions+=5;goto B50bb64;
case 0x50bb66:c.instructions+=4;goto B50bb66;
case 0x50bb69:c.instructions+=3;goto B50bb69;
case 0x50bb6c:c.instructions+=2;goto B50bb6c;
case 0x50bb70:c.instructions+=1;goto B50bb70;
case 0x50bb72:goto L50bb72;
case 0x50bb76:c.instructions+=5;goto B50bb76;
case 0x50bb77:c.instructions+=4;goto B50bb77;
case 0x50bb7e:c.instructions+=3;goto B50bb7e;
case 0x50bb83:c.instructions+=2;goto B50bb83;
case 0x50bb84:c.instructions+=1;goto B50bb84;
case 0x50bb89:goto L50bb89;
case 0x50bb90:c.instructions+=3;goto B50bb90;
case 0x50bb95:c.instructions+=2;goto B50bb95;
case 0x50bb96:c.instructions+=1;goto B50bb96;
case 0x50bb9b:goto L50bb9b;
case 0x50bb9e:c.instructions+=2;goto B50bb9e;
case 0x50bba0:c.instructions+=1;goto B50bba0;
case 0x50bba2:goto L50bba2;
case 0x50bba7:c.instructions+=1;goto B50bba7;
case 0x50bba9:goto L50bba9;
case 0x50bbab:c.instructions+=2;goto B50bbab;
case 0x50bbad:c.instructions+=1;goto B50bbad;
case 0x50bbb0:goto L50bbb0;
case 0x50bbb1:c.instructions+=1;goto B50bbb1;
case 0x50bbb6:goto L50bbb6;
case 0x50bbb9:c.instructions+=2;goto B50bbb9;
case 0x50bbbb:c.instructions+=1;goto B50bbbb;
case 0x50bbbd:goto L50bbbd;
case 0x50bbbe:c.instructions+=2;goto B50bbbe;
case 0x50bbc1:c.instructions+=1;goto B50bbc1;
case 0x50bbc3:goto L50bbc3;
case 0x50bbc5:goto L50bbc5;
case 0x50bbcc:c.instructions+=1;goto B50bbcc;
case 0x50bbce:goto L50bbce;
case 0x50bbcf:c.instructions+=2;goto B50bbcf;
case 0x50bbd2:c.instructions+=1;goto B50bbd2;
case 0x50bbd4:goto L50bbd4;
case 0x50bbd6:goto L50bbd6;
case 0x50bbd8:c.instructions+=1;goto B50bbd8;
case 0x50bbda:goto L50bbda;
case 0x50bbdc:goto L50bbdc;
case 0x50bbe3:c.instructions+=3;goto B50bbe3;
case 0x50bbe4:c.instructions+=2;goto B50bbe4;
case 0x50bbe5:c.instructions+=1;goto B50bbe5;
case 0x50bbea:goto L50bbea;
case 0x50bbed:goto L50bbed;
case 0x50bbef:c.instructions+=3;goto B50bbef;
case 0x50bbf1:c.instructions+=2;goto B50bbf1;
case 0x50bbf2:c.instructions+=1;goto B50bbf2;
case 0x50bbf7:goto L50bbf7;
case 0x50bbfa:c.instructions+=5;goto B50bbfa;
case 0x50bbfb:c.instructions+=4;goto B50bbfb;
case 0x50bbfc:c.instructions+=3;goto B50bbfc;
case 0x50bbfe:c.instructions+=2;goto B50bbfe;
case 0x50bbff:c.instructions+=1;goto B50bbff;
case 0x50bc10:goto L50bc10;
case 0x50bc11:c.instructions+=7;goto B50bc11;
case 0x50bc15:c.instructions+=6;goto B50bc15;
case 0x50bc16:c.instructions+=5;goto B50bc16;
case 0x50bc18:c.instructions+=4;goto B50bc18;
case 0x50bc1c:c.instructions+=3;goto B50bc1c;
case 0x50bc1f:c.instructions+=2;goto B50bc1f;
case 0x50bc27:c.instructions+=1;goto B50bc27;
case 0x50bc29:goto L50bc29;
case 0x50bc2d:c.instructions+=1;goto B50bc2d;
case 0x50bc2f:goto L50bc2f;
case 0x50bc33:c.instructions+=1;goto B50bc33;
case 0x50bc35:goto L50bc35;
case 0x50bc39:c.instructions+=1;goto B50bc39;
case 0x50bc3b:goto L50bc3b;
case 0x50bc41:c.instructions+=3;goto B50bc41;
case 0x50bc42:c.instructions+=2;goto B50bc42;
case 0x50bc43:c.instructions+=1;goto B50bc43;
case 0x50bc46:goto L50bc46;
case 0x50bc4a:c.instructions+=1;goto B50bc4a;
case 0x50bc4c:goto L50bc4c;
case 0x50bc51:goto L50bc51;
case 0x50bc55:c.instructions+=1;goto B50bc55;
case 0x50bc57:goto L50bc57;
case 0x50bc5c:c.instructions+=1;goto B50bc5c;
case 0x50bc5e:goto L50bc5e;
case 0x50bc62:c.instructions+=1;goto B50bc62;
case 0x50bc64:goto L50bc64;
case 0x50bc69:goto L50bc69;
case 0x50bc6b:c.instructions+=3;goto B50bc6b;
case 0x50bc6c:c.instructions+=2;goto B50bc6c;
case 0x50bc6d:c.instructions+=1;goto B50bc6d;
case 0x50bc6f:goto L50bc6f;
case 0x50bc73:c.instructions+=1;goto B50bc73;
case 0x50bc75:goto L50bc75;
case 0x50bc77:c.instructions+=2;goto B50bc77;
case 0x50bc7c:c.instructions+=1;goto B50bc7c;
case 0x50bc7e:goto L50bc7e;
case 0x50bc82:goto L50bc82;
case 0x50bc85:c.instructions+=2;goto B50bc85;
case 0x50bc86:c.instructions+=1;goto B50bc86;
case 0x50bc8b:goto L50bc8b;
case 0x50bc8d:c.instructions+=2;goto B50bc8d;
case 0x50bc8f:c.instructions+=1;goto B50bc8f;
case 0x50bc91:goto L50bc91;
case 0x50bc97:c.instructions+=5;goto B50bc97;
case 0x50bc98:c.instructions+=4;goto B50bc98;
case 0x50bc99:c.instructions+=3;goto B50bc99;
case 0x50bc9a:c.instructions+=2;goto B50bc9a;
case 0x50bc9b:c.instructions+=1;goto B50bc9b;
case 0x50bc9e:goto L50bc9e;
case 0x50bca1:c.instructions+=1;goto B50bca1;
case 0x50bca3:goto L50bca3;
case 0x50bca6:c.instructions+=3;goto B50bca6;
case 0x50bca7:c.instructions+=2;goto B50bca7;
case 0x50bca8:c.instructions+=1;goto B50bca8;
case 0x50bcad:goto L50bcad;
case 0x50bcb1:c.instructions+=9;goto B50bcb1;
case 0x50bcb5:c.instructions+=8;goto B50bcb5;
case 0x50bcb9:c.instructions+=7;goto B50bcb9;
case 0x50bcbd:c.instructions+=6;goto B50bcbd;
case 0x50bcbe:c.instructions+=5;goto B50bcbe;
case 0x50bcbf:c.instructions+=4;goto B50bcbf;
case 0x50bcc3:c.instructions+=3;goto B50bcc3;
case 0x50bcc4:c.instructions+=2;goto B50bcc4;
case 0x50bcc5:c.instructions+=1;goto B50bcc5;
case 0x50bcc8:goto L50bcc8;
case 0x50bccc:c.instructions+=8;goto B50bccc;
case 0x50bcd0:c.instructions+=7;goto B50bcd0;
case 0x50bcd4:c.instructions+=6;goto B50bcd4;
case 0x50bcd5:c.instructions+=5;goto B50bcd5;
case 0x50bcd6:c.instructions+=4;goto B50bcd6;
case 0x50bcda:c.instructions+=3;goto B50bcda;
case 0x50bcdb:c.instructions+=2;goto B50bcdb;
case 0x50bcdc:c.instructions+=1;goto B50bcdc;
case 0x50bce0:goto L50bce0;
case 0x50bce3:c.instructions+=5;goto B50bce3;
case 0x50bce4:c.instructions+=4;goto B50bce4;
case 0x50bce8:c.instructions+=3;goto B50bce8;
case 0x50bcea:c.instructions+=2;goto B50bcea;
case 0x50bcee:c.instructions+=1;goto B50bcee;
case 0x50bcf0:goto L50bcf0;
case 0x50bcf6:c.instructions+=3;goto B50bcf6;
case 0x50bcf7:c.instructions+=2;goto B50bcf7;
case 0x50bcfa:c.instructions+=1;goto B50bcfa;
case 0x50bcfd:goto L50bcfd;
case 0x50bcfe:c.instructions+=10;goto B50bcfe;
case 0x50bcff:c.instructions+=9;goto B50bcff;
case 0x50bd00:c.instructions+=8;goto B50bd00;
case 0x50bd02:c.instructions+=7;goto B50bd02;
case 0x50bd05:c.instructions+=6;goto B50bd05;
case 0x50bd07:c.instructions+=5;goto B50bd07;
case 0x50bd09:c.instructions+=4;goto B50bd09;
case 0x50bd0c:c.instructions+=3;goto B50bd0c;
case 0x50bd14:c.instructions+=2;goto B50bd14;
case 0x50bd1c:c.instructions+=1;goto B50bd1c;
case 0x50bd22:goto L50bd22;
case 0x50bd26:c.instructions+=4;goto B50bd26;
case 0x50bd28:c.instructions+=3;goto B50bd28;
case 0x50bd2b:c.instructions+=2;goto B50bd2b;
case 0x50bd2f:c.instructions+=1;goto B50bd2f;
case 0x50bd30:goto L50bd30;
case 0x50bd32:c.instructions+=3;goto B50bd32;
case 0x50bd36:c.instructions+=2;goto B50bd36;
case 0x50bd3a:c.instructions+=1;goto B50bd3a;
case 0x50bd3c:goto L50bd3c;
case 0x50bd3e:c.instructions+=1;goto B50bd3e;
case 0x50bd40:goto L50bd40;
case 0x50bd42:c.instructions+=1;goto B50bd42;
case 0x50bd44:goto L50bd44;
case 0x50bd48:c.instructions+=1;goto B50bd48;
case 0x50bd4e:goto L50bd4e;
case 0x50bd52:c.instructions+=1;goto B50bd52;
case 0x50bd58:goto L50bd58;
case 0x50bd5c:c.instructions+=1;goto B50bd5c;
case 0x50bd5e:goto L50bd5e;
case 0x50bd61:c.instructions+=1;goto B50bd61;
case 0x50bd66:goto L50bd66;
case 0x50bd6a:c.instructions+=1;goto B50bd6a;
case 0x50bd6c:goto L50bd6c;
case 0x50bd70:c.instructions+=1;goto B50bd70;
case 0x50bd74:goto L50bd74;
case 0x50bd76:c.instructions+=1;goto B50bd76;
case 0x50bd78:goto L50bd78;
case 0x50bd7d:c.instructions+=1;goto B50bd7d;
case 0x50bd7f:goto L50bd7f;
case 0x50bd81:c.instructions+=1;goto B50bd81;
case 0x50bd86:goto L50bd86;
case 0x50bd87:c.instructions+=2;goto B50bd87;
case 0x50bd88:c.instructions+=1;goto B50bd88;
case 0x50bd8d:goto L50bd8d;
case 0x50bd90:c.instructions+=2;goto B50bd90;
case 0x50bd92:c.instructions+=1;goto B50bd92;
case 0x50bd94:goto L50bd94;
case 0x50bd98:c.instructions+=3;goto B50bd98;
case 0x50bd99:c.instructions+=2;goto B50bd99;
case 0x50bd9a:c.instructions+=1;goto B50bd9a;
case 0x50bd9f:goto L50bd9f;
case 0x50bda2:c.instructions+=3;goto B50bda2;
case 0x50bda4:c.instructions+=2;goto B50bda4;
case 0x50bda6:c.instructions+=1;goto B50bda6;
case 0x50bda8:goto L50bda8;
case 0x50bdad:c.instructions+=1;goto B50bdad;
case 0x50bdaf:goto L50bdaf;
case 0x50bdb5:goto L50bdb5;
case 0x50bdba:c.instructions+=1;goto B50bdba;
case 0x50bdbc:goto L50bdbc;
case 0x50bdc1:c.instructions+=1;goto B50bdc1;
case 0x50bdc3:goto L50bdc3;
case 0x50bdc8:c.instructions+=1;goto B50bdc8;
case 0x50bdca:goto L50bdca;
case 0x50bdcf:goto L50bdcf;
case 0x50bdd3:c.instructions+=3;goto B50bdd3;
case 0x50bdd6:c.instructions+=2;goto B50bdd6;
case 0x50bdd7:c.instructions+=1;goto B50bdd7;
case 0x50bddc:goto L50bddc;
case 0x50bdde:c.instructions+=2;goto B50bdde;
case 0x50bde0:c.instructions+=1;goto B50bde0;
case 0x50bde2:goto L50bde2;
case 0x50bde4:c.instructions+=1;goto B50bde4;
case 0x50bde6:goto L50bde6;
case 0x50bdea:c.instructions+=6;goto B50bdea;
case 0x50bded:c.instructions+=5;goto B50bded;
case 0x50bdef:c.instructions+=4;goto B50bdef;
case 0x50bdf3:c.instructions+=3;goto B50bdf3;
case 0x50bdf4:c.instructions+=2;goto B50bdf4;
case 0x50bdf5:c.instructions+=1;goto B50bdf5;
case 0x50bdfa:goto L50bdfa;
case 0x50bdfe:c.instructions+=3;goto B50bdfe;
case 0x50be02:c.instructions+=2;goto B50be02;
case 0x50be06:c.instructions+=1;goto B50be06;
case 0x50be08:goto L50be08;
case 0x50be0c:goto L50be0c;
case 0x50be10:c.instructions+=5;goto B50be10;
case 0x50be14:c.instructions+=4;goto B50be14;
case 0x50be18:c.instructions+=3;goto B50be18;
case 0x50be1a:c.instructions+=2;goto B50be1a;
case 0x50be1e:c.instructions+=1;goto B50be1e;
case 0x50be20:goto L50be20;
case 0x50be23:goto L50be23;
case 0x50be27:c.instructions+=2;goto B50be27;
case 0x50be29:c.instructions+=1;goto B50be29;
case 0x50be2b:goto L50be2b;
case 0x50be2f:c.instructions+=1;goto B50be2f;
case 0x50be31:goto L50be31;
case 0x50be33:c.instructions+=3;goto B50be33;
case 0x50be37:c.instructions+=2;goto B50be37;
case 0x50be3b:c.instructions+=1;goto B50be3b;
case 0x50be3d:goto L50be3d;
case 0x50be43:goto L50be43;
case 0x50be47:c.instructions+=3;goto B50be47;
case 0x50be49:c.instructions+=2;goto B50be49;
case 0x50be4c:c.instructions+=1;goto B50be4c;
case 0x50be4e:goto L50be4e;
case 0x50be52:c.instructions+=1;goto B50be52;
case 0x50be56:goto L50be56;
case 0x50be59:c.instructions+=3;goto B50be59;
case 0x50be5a:c.instructions+=2;goto B50be5a;
case 0x50be5d:c.instructions+=1;goto B50be5d;
case 0x50be63:goto L50be63;
case 0x50be67:c.instructions+=6;goto B50be67;
case 0x50be68:c.instructions+=5;goto B50be68;
case 0x50be69:c.instructions+=4;goto B50be69;
case 0x50be6a:c.instructions+=3;goto B50be6a;
case 0x50be6b:c.instructions+=2;goto B50be6b;
case 0x50be6e:c.instructions+=1;goto B50be6e;
case 0x50be71:goto L50be71;
case 0x50be75:c.instructions+=3;goto B50be75;
case 0x50be79:c.instructions+=2;goto B50be79;
case 0x50be7c:c.instructions+=1;goto B50be7c;
case 0x50be7e:goto L50be7e;
case 0x50be80:c.instructions+=1;goto B50be80;
case 0x50be84:goto L50be84;
case 0x50be8a:c.instructions+=3;goto B50be8a;
case 0x50be8c:c.instructions+=2;goto B50be8c;
case 0x50be8f:c.instructions+=1;goto B50be8f;
case 0x50be91:goto L50be91;
case 0x50be95:c.instructions+=1;goto B50be95;
case 0x50be97:goto L50be97;
case 0x50be99:goto L50be99;
case 0x50be9d:c.instructions+=2;goto B50be9d;
case 0x50be9f:c.instructions+=1;goto B50be9f;
case 0x50bea1:goto L50bea1;
case 0x50bea4:goto L50bea4;
case 0x50bea8:c.instructions+=6;goto B50bea8;
case 0x50bea9:c.instructions+=5;goto B50bea9;
case 0x50beaa:c.instructions+=4;goto B50beaa;
case 0x50beab:c.instructions+=3;goto B50beab;
case 0x50beac:c.instructions+=2;goto B50beac;
case 0x50beaf:c.instructions+=1;goto B50beaf;
case 0x50bec0:goto L50bec0;
case 0x50bec1:c.instructions+=8;goto B50bec1;
case 0x50bec5:c.instructions+=7;goto B50bec5;
case 0x50bec6:c.instructions+=6;goto B50bec6;
case 0x50bec8:c.instructions+=5;goto B50bec8;
case 0x50beca:c.instructions+=4;goto B50beca;
case 0x50becc:c.instructions+=3;goto B50becc;
case 0x50becd:c.instructions+=2;goto B50becd;
case 0x50becf:c.instructions+=1;goto B50becf;
case 0x50bed4:goto L50bed4;
case 0x50bed8:c.instructions+=4;goto B50bed8;
case 0x50bedb:c.instructions+=3;goto B50bedb;
case 0x50bede:c.instructions+=2;goto B50bede;
case 0x50bee1:c.instructions+=1;goto B50bee1;
case 0x50bee3:goto L50bee3;
case 0x50bee4:c.instructions+=3;goto B50bee4;
case 0x50bee8:c.instructions+=2;goto B50bee8;
case 0x50beeb:c.instructions+=1;goto B50beeb;
case 0x50bef0:goto L50bef0;
case 0x50bef2:c.instructions+=1;goto B50bef2;
case 0x50bef4:goto L50bef4;
case 0x50bef8:c.instructions+=1;goto B50bef8;
case 0x50befa:goto L50befa;
case 0x50befe:c.instructions+=1;goto B50befe;
case 0x50bf00:goto L50bf00;
case 0x50bf02:c.instructions+=5;goto B50bf02;
case 0x50bf04:c.instructions+=4;goto B50bf04;
case 0x50bf06:c.instructions+=3;goto B50bf06;
case 0x50bf07:c.instructions+=2;goto B50bf07;
case 0x50bf09:c.instructions+=1;goto B50bf09;
case 0x50bf0e:goto L50bf0e;
case 0x50bf12:c.instructions+=3;goto B50bf12;
case 0x50bf14:c.instructions+=2;goto B50bf14;
case 0x50bf17:c.instructions+=1;goto B50bf17;
case 0x50bf19:goto L50bf19;
case 0x50bf1d:c.instructions+=1;goto B50bf1d;
case 0x50bf1f:goto L50bf1f;
case 0x50bf21:goto L50bf21;
case 0x50bf24:c.instructions+=3;goto B50bf24;
case 0x50bf27:c.instructions+=2;goto B50bf27;
case 0x50bf2a:c.instructions+=1;goto B50bf2a;
case 0x50bf2c:goto L50bf2c;
case 0x50bf2d:goto L50bf2d;
case 0x50bf31:c.instructions+=3;goto B50bf31;
case 0x50bf32:c.instructions+=2;goto B50bf32;
case 0x50bf33:c.instructions+=1;goto B50bf33;
case 0x50bf40:goto L50bf40;
case 0x50bf41:c.instructions+=6;goto B50bf41;
case 0x50bf42:c.instructions+=5;goto B50bf42;
case 0x50bf46:c.instructions+=4;goto B50bf46;
case 0x50bf48:c.instructions+=3;goto B50bf48;
case 0x50bf49:c.instructions+=2;goto B50bf49;
case 0x50bf4b:c.instructions+=1;goto B50bf4b;
case 0x50bf4d:goto L50bf4d;
case 0x50bf53:c.instructions+=4;goto B50bf53;
case 0x50bf54:c.instructions+=3;goto B50bf54;
case 0x50bf55:c.instructions+=2;goto B50bf55;
case 0x50bf56:c.instructions+=1;goto B50bf56;
case 0x50bf59:goto L50bf59;
case 0x50bf5c:c.instructions+=5;goto B50bf5c;
case 0x50bf5f:c.instructions+=4;goto B50bf5f;
case 0x50bf62:c.instructions+=3;goto B50bf62;
case 0x50bf6a:c.instructions+=2;goto B50bf6a;
case 0x50bf6f:c.instructions+=1;goto B50bf6f;
case 0x50bf75:goto L50bf75;
case 0x50bf76:c.instructions+=1;goto B50bf76;
case 0x50bf77:goto L50bf77;
case 0x50bf7b:c.instructions+=1;goto B50bf7b;
case 0x50bf7d:goto L50bf7d;
case 0x50bf81:c.instructions+=1;goto B50bf81;
case 0x50bf83:goto L50bf83;
case 0x50bf87:c.instructions+=5;goto B50bf87;
case 0x50bf8c:c.instructions+=4;goto B50bf8c;
case 0x50bf90:c.instructions+=3;goto B50bf90;
case 0x50bf93:c.instructions+=2;goto B50bf93;
case 0x50bf97:c.instructions+=1;goto B50bf97;
case 0x50bf99:goto L50bf99;
case 0x50bf9d:c.instructions+=1;goto B50bf9d;
case 0x50bf9f:goto L50bf9f;
case 0x50bfa2:c.instructions+=15;goto B50bfa2;
case 0x50bfa5:c.instructions+=14;goto B50bfa5;
case 0x50bfaa:c.instructions+=13;goto B50bfaa;
case 0x50bfac:c.instructions+=12;goto B50bfac;
case 0x50bfaf:c.instructions+=11;goto B50bfaf;
case 0x50bfb4:c.instructions+=10;goto B50bfb4;
case 0x50bfb6:c.instructions+=9;goto B50bfb6;
case 0x50bfba:c.instructions+=8;goto B50bfba;
case 0x50bfbc:c.instructions+=7;goto B50bfbc;
case 0x50bfbe:c.instructions+=6;goto B50bfbe;
case 0x50bfc1:c.instructions+=5;goto B50bfc1;
case 0x50bfc4:c.instructions+=4;goto B50bfc4;
case 0x50bfc7:c.instructions+=3;goto B50bfc7;
case 0x50bfca:c.instructions+=2;goto B50bfca;
case 0x50bfcc:c.instructions+=1;goto B50bfcc;
case 0x50bfce:goto L50bfce;
case 0x50bfd1:c.instructions+=3;goto B50bfd1;
case 0x50bfd3:c.instructions+=2;goto B50bfd3;
case 0x50bfd6:c.instructions+=1;goto B50bfd6;
case 0x50bfd8:goto L50bfd8;
case 0x50bfda:c.instructions+=1;goto B50bfda;
case 0x50bfdc:goto L50bfdc;
case 0x50bfdd:c.instructions+=4;goto B50bfdd;
case 0x50bfde:c.instructions+=3;goto B50bfde;
case 0x50bfdf:c.instructions+=2;goto B50bfdf;
case 0x50bfe0:c.instructions+=1;goto B50bfe0;
case 0x50bfe5:goto L50bfe5;
case 0x50bfe8:goto L50bfe8;
case 0x50bfea:c.instructions+=1;goto B50bfea;
case 0x50bfec:goto L50bfec;
case 0x50bff1:goto L50bff1;
case 0x50bff4:c.instructions+=3;goto B50bff4;
case 0x50bff7:c.instructions+=2;goto B50bff7;
case 0x50bffa:c.instructions+=1;goto B50bffa;
default:missing_instruction(c.pc);}
B50b000:L50b000:{c.instructions+=7;NFSU2_TR(0x50b000);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b004:{NFSU2_TR(0x50b004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50b005:{NFSU2_TR(0x50b005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b006:{NFSU2_TR(0x50b006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50b007:{NFSU2_TR(0x50b007);
__builtin_memmove((R+16),(R+20),4);
}
B50b009:{NFSU2_TR(0x50b009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50b00a:{NFSU2_TR(0x50b00a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b010:L50b010:{c.instructions+=21;NFSU2_TR(0x50b010);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b014:{NFSU2_TR(0x50b014);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50b018:{NFSU2_TR(0x50b018);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b019:{NFSU2_TR(0x50b019);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50b01d:{NFSU2_TR(0x50b01d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b01e:{NFSU2_TR(0x50b01e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B50b022:{NFSU2_TR(0x50b022);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b023:{NFSU2_TR(0x50b023);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50b027:{NFSU2_TR(0x50b027);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b02a:{NFSU2_TR(0x50b02a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b02b:{NFSU2_TR(0x50b02b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50b02f:{NFSU2_TR(0x50b02f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b030:{NFSU2_TR(0x50b030);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b034:{NFSU2_TR(0x50b034);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b036:{NFSU2_TR(0x50b036);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b037:{NFSU2_TR(0x50b037);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b038:{NFSU2_TR(0x50b038);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b039:{NFSU2_TR(0x50b039);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b03a:{NFSU2_TR(0x50b03a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b03b:{NFSU2_TR(0x50b03b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b03c:{NFSU2_TR(0x50b03c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b041ull));
TAIL_STATIC(0x506cb0u,506);
}
B50b041:L50b041:{c.instructions+=3;NFSU2_TR(0x50b041);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B50b044:{NFSU2_TR(0x50b044);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b046:{NFSU2_TR(0x50b046);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b051;}}
}
B50b048:L50b048:{c.instructions+=6;NFSU2_TR(0x50b048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50b049:{NFSU2_TR(0x50b049);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b04a:{NFSU2_TR(0x50b04a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50b04b:{NFSU2_TR(0x50b04b);
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
B50b04d:{NFSU2_TR(0x50b04d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50b04e:{NFSU2_TR(0x50b04e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b051:L50b051:{c.instructions+=13;NFSU2_TR(0x50b051);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b054:{NFSU2_TR(0x50b054);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50b058:{NFSU2_TR(0x50b058);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b059:{NFSU2_TR(0x50b059);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b05d:{NFSU2_TR(0x50b05d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b05e:{NFSU2_TR(0x50b05e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b062:{NFSU2_TR(0x50b062);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b063:{NFSU2_TR(0x50b063);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b064:{NFSU2_TR(0x50b064);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b065:{NFSU2_TR(0x50b065);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b066:{NFSU2_TR(0x50b066);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b067:{NFSU2_TR(0x50b067);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b068:{NFSU2_TR(0x50b068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b06dull));
TAIL_STATIC(0x507d80u,507);
}
B50b06d:L50b06d:{c.instructions+=3;NFSU2_TR(0x50b06d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B50b070:{NFSU2_TR(0x50b070);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b072:{NFSU2_TR(0x50b072);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b048u);}goto L50b048;}}
}
B50b074:L50b074:{c.instructions+=13;NFSU2_TR(0x50b074);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50b077:{NFSU2_TR(0x50b077);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b07b:{NFSU2_TR(0x50b07b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b07c:{NFSU2_TR(0x50b07c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50b080:{NFSU2_TR(0x50b080);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b081:{NFSU2_TR(0x50b081);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b085:{NFSU2_TR(0x50b085);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b086:{NFSU2_TR(0x50b086);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b087:{NFSU2_TR(0x50b087);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b088:{NFSU2_TR(0x50b088);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b089:{NFSU2_TR(0x50b089);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b08a:{NFSU2_TR(0x50b08a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b08b:{NFSU2_TR(0x50b08b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b090ull));
TAIL_STATIC(0x508e60u,508);
}
B50b090:L50b090:{c.instructions+=3;NFSU2_TR(0x50b090);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B50b093:{NFSU2_TR(0x50b093);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b095:{NFSU2_TR(0x50b095);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b048u);}goto L50b048;}}
}
B50b097:L50b097:{c.instructions+=13;NFSU2_TR(0x50b097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b09a:{NFSU2_TR(0x50b09a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50b09e:{NFSU2_TR(0x50b09e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b09f:{NFSU2_TR(0x50b09f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b0a3:{NFSU2_TR(0x50b0a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b0a4:{NFSU2_TR(0x50b0a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b0a8:{NFSU2_TR(0x50b0a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b0a9:{NFSU2_TR(0x50b0a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b0aa:{NFSU2_TR(0x50b0aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b0ab:{NFSU2_TR(0x50b0ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b0ac:{NFSU2_TR(0x50b0ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b0ad:{NFSU2_TR(0x50b0ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b0ae:{NFSU2_TR(0x50b0ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b0b3ull));
TAIL_STATIC(0x509f30u,509);
}
B50b0b3:L50b0b3:{c.instructions+=6;NFSU2_TR(0x50b0b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b0b6:{NFSU2_TR(0x50b0b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50b0b7:{NFSU2_TR(0x50b0b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b0b8:{NFSU2_TR(0x50b0b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50b0b9:{NFSU2_TR(0x50b0b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50b0ba:{NFSU2_TR(0x50b0ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b0c0:L50b0c0:{c.instructions+=8;NFSU2_TR(0x50b0c0);
__builtin_memmove((R+0),(R+4),4);
}
B50b0c2:{NFSU2_TR(0x50b0c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b0c6:{NFSU2_TR(0x50b0c6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B50b0c9:{NFSU2_TR(0x50b0c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b0ca:{NFSU2_TR(0x50b0ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b0cb:{NFSU2_TR(0x50b0cb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B50b0cd:{NFSU2_TR(0x50b0cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b0ce:{NFSU2_TR(0x50b0ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b0dd;}}
}
B50b0d0:L50b0d0:{c.instructions+=3;NFSU2_TR(0x50b0d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B50b0d4:{NFSU2_TR(0x50b0d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B50b0d7:{NFSU2_TR(0x50b0d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b0dd;}}
}
B50b0d9:L50b0d9:{c.instructions+=2;NFSU2_TR(0x50b0d9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B50b0db:{NFSU2_TR(0x50b0db);
{goto L50b0e2;}
}
B50b0dd:L50b0dd:{c.instructions+=1;NFSU2_TR(0x50b0dd);
w4(R+8,u32(0x1ull));
}
B50b0e2:L50b0e2:{c.instructions+=14;NFSU2_TR(0x50b0e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50b0e6:{NFSU2_TR(0x50b0e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50b0e9:{NFSU2_TR(0x50b0e9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B50b0ec:{NFSU2_TR(0x50b0ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B50b0ee:{NFSU2_TR(0x50b0ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B50b0f2:{NFSU2_TR(0x50b0f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b0f5:{NFSU2_TR(0x50b0f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B50b0f9:{NFSU2_TR(0x50b0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b0fc:{NFSU2_TR(0x50b0fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B50b100:{NFSU2_TR(0x50b100);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B50b104:{NFSU2_TR(0x50b104);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B50b108:{NFSU2_TR(0x50b108);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B50b10c:{NFSU2_TR(0x50b10c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50b10e:{NFSU2_TR(0x50b10e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b111:L50b111:{c.instructions+=5;NFSU2_TR(0x50b111);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B50b115:{NFSU2_TR(0x50b115);
w4(R+8,u32(0x1ull));
}
B50b11a:{NFSU2_TR(0x50b11a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B50b11c:{NFSU2_TR(0x50b11c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b11e:{NFSU2_TR(0x50b11e);
if(r1(R+518)){{goto L50b132;}}
}
B50b120:L50b120:{c.instructions+=3;NFSU2_TR(0x50b120);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B50b124:{NFSU2_TR(0x50b124);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b126:{NFSU2_TR(0x50b126);
if(r1(R+518)){{goto L50b12c;}}
}
B50b128:L50b128:{c.instructions+=2;NFSU2_TR(0x50b128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(R+24)),r4(U+0));
}
B50b12a:{NFSU2_TR(0x50b12a);
{goto L50b132;}
}
B50b12c:L50b12c:{c.instructions+=1;NFSU2_TR(0x50b12c);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B50b132:L50b132:{c.instructions+=4;NFSU2_TR(0x50b132);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B50b133:{NFSU2_TR(0x50b133);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B50b136:{NFSU2_TR(0x50b136);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B50b139:{NFSU2_TR(0x50b139);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b111u);}goto L50b111;}}
}
B50b13b:L50b13b:{c.instructions+=4;NFSU2_TR(0x50b13b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50b13c:{NFSU2_TR(0x50b13c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b13d:{NFSU2_TR(0x50b13d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50b13e:{NFSU2_TR(0x50b13e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b150:L50b150:{c.instructions+=7;NFSU2_TR(0x50b150);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b151:{NFSU2_TR(0x50b151);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b152:{NFSU2_TR(0x50b152);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b153:{NFSU2_TR(0x50b153);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B50b158:{NFSU2_TR(0x50b158);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B50b15b:{NFSU2_TR(0x50b15b);
w4(R+8,u32(0x2ull));
}
B50b160:{NFSU2_TR(0x50b160);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b163:L50b163:{c.instructions+=5;NFSU2_TR(0x50b163);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B50b166:{NFSU2_TR(0x50b166);
w4(R+12,u32(0x1ull));
}
B50b16b:{NFSU2_TR(0x50b16b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B50b16d:{NFSU2_TR(0x50b16d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b16f:{NFSU2_TR(0x50b16f);
if(r1(R+518)){{goto L50b17a;}}
}
B50b171:L50b171:{c.instructions+=3;NFSU2_TR(0x50b171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b174:{NFSU2_TR(0x50b174);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50b176:{NFSU2_TR(0x50b176);
if(r1(R+512)){{goto L50b17a;}}
}
B50b178:L50b178:{c.instructions+=1;NFSU2_TR(0x50b178);
__builtin_memmove((R+0),(R+4),4);
}
B50b17a:L50b17a:{c.instructions+=5;NFSU2_TR(0x50b17a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B50b17d:{NFSU2_TR(0x50b17d);
w4(R+12,u32(0x1ull));
}
B50b182:{NFSU2_TR(0x50b182);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B50b184:{NFSU2_TR(0x50b184);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b186:{NFSU2_TR(0x50b186);
if(r1(R+518)){{goto L50b190;}}
}
B50b188:L50b188:{c.instructions+=3;NFSU2_TR(0x50b188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50b18a:{NFSU2_TR(0x50b18a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50b18c:{NFSU2_TR(0x50b18c);
if(r1(R+512)){{goto L50b190;}}
}
B50b18e:L50b18e:{c.instructions+=1;NFSU2_TR(0x50b18e);
__builtin_memmove((R+0),(R+4),4);
}
B50b190:L50b190:{c.instructions+=5;NFSU2_TR(0x50b190);
w4(R+12,u32(0x1ull));
}
B50b195:{NFSU2_TR(0x50b195);
__builtin_memmove((R+4),(R+8),4);
}
B50b197:{NFSU2_TR(0x50b197);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B50b199:{NFSU2_TR(0x50b199);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b19b:{NFSU2_TR(0x50b19b);
if(r1(R+518)){{goto L50b1a6;}}
}
B50b19d:L50b19d:{c.instructions+=3;NFSU2_TR(0x50b19d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b1a0:{NFSU2_TR(0x50b1a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50b1a2:{NFSU2_TR(0x50b1a2);
if(r1(R+512)){{goto L50b1a6;}}
}
B50b1a4:L50b1a4:{c.instructions+=1;NFSU2_TR(0x50b1a4);
__builtin_memmove((R+0),(R+4),4);
}
B50b1a6:L50b1a6:{c.instructions+=5;NFSU2_TR(0x50b1a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50b1a9:{NFSU2_TR(0x50b1a9);
w4(R+12,u32(0x1ull));
}
B50b1ae:{NFSU2_TR(0x50b1ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B50b1b0:{NFSU2_TR(0x50b1b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b1b2:{NFSU2_TR(0x50b1b2);
if(r1(R+518)){{goto L50b1bd;}}
}
B50b1b4:L50b1b4:{c.instructions+=3;NFSU2_TR(0x50b1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b1b7:{NFSU2_TR(0x50b1b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50b1b9:{NFSU2_TR(0x50b1b9);
if(r1(R+512)){{goto L50b1bd;}}
}
B50b1bb:L50b1bb:{c.instructions+=1;NFSU2_TR(0x50b1bb);
__builtin_memmove((R+0),(R+4),4);
}
B50b1bd:L50b1bd:{c.instructions+=5;NFSU2_TR(0x50b1bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50b1c0:{NFSU2_TR(0x50b1c0);
w4(R+12,u32(0x1ull));
}
B50b1c5:{NFSU2_TR(0x50b1c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B50b1c7:{NFSU2_TR(0x50b1c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b1c9:{NFSU2_TR(0x50b1c9);
if(r1(R+518)){{goto L50b1d4;}}
}
B50b1cb:L50b1cb:{c.instructions+=3;NFSU2_TR(0x50b1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b1ce:{NFSU2_TR(0x50b1ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50b1d0:{NFSU2_TR(0x50b1d0);
if(r1(R+512)){{goto L50b1d4;}}
}
B50b1d2:L50b1d2:{c.instructions+=1;NFSU2_TR(0x50b1d2);
__builtin_memmove((R+0),(R+4),4);
}
B50b1d4:L50b1d4:{c.instructions+=5;NFSU2_TR(0x50b1d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50b1d7:{NFSU2_TR(0x50b1d7);
w4(R+12,u32(0x1ull));
}
B50b1dc:{NFSU2_TR(0x50b1dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B50b1de:{NFSU2_TR(0x50b1de);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b1e0:{NFSU2_TR(0x50b1e0);
if(r1(R+518)){{goto L50b1eb;}}
}
B50b1e2:L50b1e2:{c.instructions+=3;NFSU2_TR(0x50b1e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b1e5:{NFSU2_TR(0x50b1e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50b1e7:{NFSU2_TR(0x50b1e7);
if(r1(R+512)){{goto L50b1eb;}}
}
B50b1e9:L50b1e9:{c.instructions+=1;NFSU2_TR(0x50b1e9);
__builtin_memmove((R+0),(R+4),4);
}
B50b1eb:L50b1eb:{c.instructions+=5;NFSU2_TR(0x50b1eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50b1ee:{NFSU2_TR(0x50b1ee);
w4(R+12,u32(0x1ull));
}
B50b1f3:{NFSU2_TR(0x50b1f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B50b1f5:{NFSU2_TR(0x50b1f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b1f7:{NFSU2_TR(0x50b1f7);
if(r1(R+518)){{goto L50b202;}}
}
B50b1f9:L50b1f9:{c.instructions+=3;NFSU2_TR(0x50b1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b1fc:{NFSU2_TR(0x50b1fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50b1fe:{NFSU2_TR(0x50b1fe);
if(r1(R+512)){{goto L50b202;}}
}
B50b200:L50b200:{c.instructions+=1;NFSU2_TR(0x50b200);
__builtin_memmove((R+0),(R+4),4);
}
B50b202:L50b202:{c.instructions+=5;NFSU2_TR(0x50b202);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50b205:{NFSU2_TR(0x50b205);
w4(R+12,u32(0x1ull));
}
B50b20a:{NFSU2_TR(0x50b20a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B50b20c:{NFSU2_TR(0x50b20c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b20e:{NFSU2_TR(0x50b20e);
if(r1(R+518)){{goto L50b219;}}
}
B50b210:L50b210:{c.instructions+=3;NFSU2_TR(0x50b210);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b213:{NFSU2_TR(0x50b213);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50b215:{NFSU2_TR(0x50b215);
if(r1(R+512)){{goto L50b219;}}
}
B50b217:L50b217:{c.instructions+=1;NFSU2_TR(0x50b217);
__builtin_memmove((R+0),(R+4),4);
}
B50b219:L50b219:{c.instructions+=5;NFSU2_TR(0x50b219);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B50b21c:{NFSU2_TR(0x50b21c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B50b21f:{NFSU2_TR(0x50b21f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B50b222:{NFSU2_TR(0x50b222);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b225:{NFSU2_TR(0x50b225);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b163u);}goto L50b163;}}
}
B50b22b:L50b22b:{c.instructions+=4;NFSU2_TR(0x50b22b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50b22c:{NFSU2_TR(0x50b22c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b22d:{NFSU2_TR(0x50b22d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50b22e:{NFSU2_TR(0x50b22e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b240:L50b240:{c.instructions+=5;NFSU2_TR(0x50b240);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b246:{NFSU2_TR(0x50b246);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b248:{NFSU2_TR(0x50b248);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b249:{NFSU2_TR(0x50b249);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b24a:{NFSU2_TR(0x50b24a);
if(r1(R+518)){{goto L50b28b;}}
}
B50b24c:L50b24c:{c.instructions+=1;NFSU2_TR(0x50b24c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50b250:L50b250:{c.instructions+=4;NFSU2_TR(0x50b250);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50b253:{NFSU2_TR(0x50b253);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B50b256:{NFSU2_TR(0x50b256);
w4(R+24,u32(0xffffffffull));
}
B50b25b:{NFSU2_TR(0x50b25b);
if(r1(R+518)){{goto L50b280;}}
}
B50b25d:L50b25d:{c.instructions+=3;NFSU2_TR(0x50b25d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B50b25f:{NFSU2_TR(0x50b25f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50b261:{NFSU2_TR(0x50b261);
if(r1(R+518)){{goto L50b280;}}
}
B50b263:L50b263:{c.instructions+=3;NFSU2_TR(0x50b263);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B50b266:{NFSU2_TR(0x50b266);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B50b269:{NFSU2_TR(0x50b269);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50b273;}}
}
B50b26b:L50b26b:{c.instructions+=2;NFSU2_TR(0x50b26b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50b26e:{NFSU2_TR(0x50b26e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50b273;}}
}
B50b270:L50b270:{c.instructions+=1;NFSU2_TR(0x50b270);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0xe0ull))));
}
B50b273:L50b273:{c.instructions+=6;NFSU2_TR(0x50b273);
w4(R+4,u32(r1(R+4)));
}
B50b276:{NFSU2_TR(0x50b276);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B50b278:{NFSU2_TR(0x50b278);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50b27b:{NFSU2_TR(0x50b27b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B50b27c:{NFSU2_TR(0x50b27c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50b27e:{NFSU2_TR(0x50b27e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b263u);}goto L50b263;}}
}
B50b280:L50b280:{c.instructions+=2;NFSU2_TR(0x50b280);
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
B50b282:{NFSU2_TR(0x50b282);
if(r1(R+518)){{goto L50b28d;}}
}
B50b284:L50b284:{c.instructions+=3;NFSU2_TR(0x50b284);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b287:{NFSU2_TR(0x50b287);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b289:{NFSU2_TR(0x50b289);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b250u);}goto L50b250;}}
}
B50b28b:L50b28b:{c.instructions+=1;NFSU2_TR(0x50b28b);
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
B50b28d:L50b28d:{c.instructions+=3;NFSU2_TR(0x50b28d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50b28e:{NFSU2_TR(0x50b28e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b28f:{NFSU2_TR(0x50b28f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b2a0:L50b2a0:{c.instructions+=3;NFSU2_TR(0x50b2a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b2a4:{NFSU2_TR(0x50b2a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b2a6:{NFSU2_TR(0x50b2a6);
if(r1(R+518)){{goto L50b2f7;}}
}
B50b2a8:L50b2a8:{c.instructions+=2;NFSU2_TR(0x50b2a8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50b2aa:{NFSU2_TR(0x50b2aa);
__builtin_memmove((R+12),(R+12),4);
}
B50b2b0:L50b2b0:{c.instructions+=2;NFSU2_TR(0x50b2b0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f7d20ull))));
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
B50b2b6:{NFSU2_TR(0x50b2b6);
if(r1(R+518)){{goto L50b2f4;}}
}
B50b2b8:L50b2b8:{c.instructions+=3;NFSU2_TR(0x50b2b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B50b2bb:{NFSU2_TR(0x50b2bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4cull))));
}
B50b2be:{NFSU2_TR(0x50b2be);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b2b0u);}goto L50b2b0;}}
}
B50b2c0:L50b2c0:{c.instructions+=1;NFSU2_TR(0x50b2c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50b2c2:L50b2c2:{c.instructions+=2;NFSU2_TR(0x50b2c2);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f7d6cull))));
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
B50b2c8:{NFSU2_TR(0x50b2c8);
if(r1(R+518)){{goto L50b2f4;}}
}
B50b2ca:L50b2ca:{c.instructions+=3;NFSU2_TR(0x50b2ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B50b2cd:{NFSU2_TR(0x50b2cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B50b2d0:{NFSU2_TR(0x50b2d0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b2c2u);}goto L50b2c2;}}
}
B50b2d2:L50b2d2:{c.instructions+=1;NFSU2_TR(0x50b2d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50b2d4:L50b2d4:{c.instructions+=2;NFSU2_TR(0x50b2d4);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f7d78ull))));
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
B50b2da:{NFSU2_TR(0x50b2da);
if(r1(R+518)){{goto L50b2f4;}}
}
B50b2dc:L50b2dc:{c.instructions+=3;NFSU2_TR(0x50b2dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B50b2df:{NFSU2_TR(0x50b2df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4cull))));
}
B50b2e2:{NFSU2_TR(0x50b2e2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b2d4u);}goto L50b2d4;}}
}
B50b2e4:L50b2e4:{c.instructions+=2;NFSU2_TR(0x50b2e4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc407210ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b2ea:{NFSU2_TR(0x50b2ea);
if(r1(R+518)){{goto L50b2f4;}}
}
B50b2ec:L50b2ec:{c.instructions+=2;NFSU2_TR(0x50b2ec);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x936a6a7full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x936a6a7full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x936a6a7full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b2f2:{NFSU2_TR(0x50b2f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b2f7;}}
}
B50b2f4:L50b2f4:{c.instructions+=2;NFSU2_TR(0x50b2f4);
w1(R+0,u8(0x1ull));
}
B50b2f6:{NFSU2_TR(0x50b2f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b2f7:L50b2f7:{c.instructions+=2;NFSU2_TR(0x50b2f7);
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
B50b2f9:{NFSU2_TR(0x50b2f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b300:L50b300:{c.instructions+=4;NFSU2_TR(0x50b300);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b301:{NFSU2_TR(0x50b301);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50b305:{NFSU2_TR(0x50b305);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50b30b:{NFSU2_TR(0x50b30b);
w4(R+8,u32(0x20ull));
}
B50b310:L50b310:{c.instructions+=2;NFSU2_TR(0x50b310);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B50b312:{NFSU2_TR(0x50b312);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b31a;}}
}
B50b314:L50b314:{c.instructions+=1;NFSU2_TR(0x50b314);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B50b31a:L50b31a:{c.instructions+=3;NFSU2_TR(0x50b31a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B50b31d:{NFSU2_TR(0x50b31d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B50b31e:{NFSU2_TR(0x50b31e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b310u);}goto L50b310;}}
}
B50b320:L50b320:{c.instructions+=9;NFSU2_TR(0x50b320);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x514cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b326:{NFSU2_TR(0x50b326);
u8 U[16];
w4(U+0,u32(u32(u32(0x5150ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B50b32d:{NFSU2_TR(0x50b32d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x514cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50b333:{NFSU2_TR(0x50b333);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b337:{NFSU2_TR(0x50b337);
u8 U[16];
w4(U+0,u32(u32(u32(0x5154ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B50b33e:{NFSU2_TR(0x50b33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x514cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50b344:{NFSU2_TR(0x50b344);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B50b345:{NFSU2_TR(0x50b345);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8000001full))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b34b:{NFSU2_TR(0x50b34b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L50b352;}}
}
B50b34d:L50b34d:{c.instructions+=3;NFSU2_TR(0x50b34d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B50b34e:{NFSU2_TR(0x50b34e);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffe0ull))));
}
B50b351:{NFSU2_TR(0x50b351);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b352:L50b352:{c.instructions+=3;NFSU2_TR(0x50b352);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x514cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b358:{NFSU2_TR(0x50b358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b359:{NFSU2_TR(0x50b359);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b360:L50b360:{c.instructions+=5;NFSU2_TR(0x50b360);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b361:{NFSU2_TR(0x50b361);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50b365:{NFSU2_TR(0x50b365);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50b367:{NFSU2_TR(0x50b367);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5150ull))));
__builtin_memmove((R+8),(U+0),4);
}
B50b36d:{NFSU2_TR(0x50b36d);
__builtin_memmove((R+4),(R+4),4);
}
B50b370:L50b370:{c.instructions+=2;NFSU2_TR(0x50b370);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B50b372:{NFSU2_TR(0x50b372);
if(r1(R+518)){{goto L50b383;}}
}
B50b374:L50b374:{c.instructions+=4;NFSU2_TR(0x50b374);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50b375:{NFSU2_TR(0x50b375);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B50b378:{NFSU2_TR(0x50b378);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50b37b:{NFSU2_TR(0x50b37b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b370u);}goto L50b370;}}
}
B50b37d:L50b37d:{c.instructions+=3;NFSU2_TR(0x50b37d);
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
B50b37f:{NFSU2_TR(0x50b37f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b380:{NFSU2_TR(0x50b380);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b383:L50b383:{c.instructions+=3;NFSU2_TR(0x50b383);
u8 U[16];
w4(U+0,u32(u32(u32(0x5154ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B50b38a:{NFSU2_TR(0x50b38a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b38b:{NFSU2_TR(0x50b38b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b390:L50b390:{c.instructions+=3;NFSU2_TR(0x50b390);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x414cull))));
__builtin_memmove((R+0),(U+0),4);
}
B50b396:{NFSU2_TR(0x50b396);
w4(R+8,u32(0x10ull));
}
B50b39b:{NFSU2_TR(0x50b39b);
{goto L50b3a0;}
}
B50b3a0:L50b3a0:{c.instructions+=4;NFSU2_TR(0x50b3a0);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B50b3a3:{NFSU2_TR(0x50b3a3);
w1(R+512,carry<u32>(r4(R+0),u32(0x100ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
}
B50b3a8:{NFSU2_TR(0x50b3a8);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b3a9:{NFSU2_TR(0x50b3a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b3a0u);}goto L50b3a0;}}
}
B50b3ab:L50b3ab:{c.instructions+=2;NFSU2_TR(0x50b3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4148ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b3b5:{NFSU2_TR(0x50b3b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b3c0:L50b3c0:{c.instructions+=6;NFSU2_TR(0x50b3c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b3c4:{NFSU2_TR(0x50b3c4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50b3c6:{NFSU2_TR(0x50b3c6);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50b3c9:{NFSU2_TR(0x50b3c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50b3cb:{NFSU2_TR(0x50b3cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50b3ce:{NFSU2_TR(0x50b3ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b3e2;}}
}
B50b3d0:L50b3d0:{c.instructions+=7;NFSU2_TR(0x50b3d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b3d3:{NFSU2_TR(0x50b3d3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50b3d5:{NFSU2_TR(0x50b3d5);
__builtin_memmove((R+8),(R+0),4);
}
B50b3d7:{NFSU2_TR(0x50b3d7);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B50b3da:{NFSU2_TR(0x50b3da);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50b3dd:{NFSU2_TR(0x50b3dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B50b3df:{NFSU2_TR(0x50b3df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b3e2:L50b3e2:{c.instructions+=5;NFSU2_TR(0x50b3e2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50b3e5:{NFSU2_TR(0x50b3e5);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50b3e8:{NFSU2_TR(0x50b3e8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50b3ea:{NFSU2_TR(0x50b3ea);
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
B50b3ed:{NFSU2_TR(0x50b3ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b403;}}
}
B50b3ef:L50b3ef:{c.instructions+=7;NFSU2_TR(0x50b3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b3f2:{NFSU2_TR(0x50b3f2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50b3f5:{NFSU2_TR(0x50b3f5);
__builtin_memmove((R+8),(R+0),4);
}
B50b3f7:{NFSU2_TR(0x50b3f7);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B50b3fa:{NFSU2_TR(0x50b3fa);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50b3fd:{NFSU2_TR(0x50b3fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b400:{NFSU2_TR(0x50b400);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b403:L50b403:{c.instructions+=1;NFSU2_TR(0x50b403);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b410:L50b410:{c.instructions+=6;NFSU2_TR(0x50b410);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b414:{NFSU2_TR(0x50b414);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b418:{NFSU2_TR(0x50b418);
u8 U[48];
w4(U+40,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B50b41b:{NFSU2_TR(0x50b41b);
__builtin_memmove(gp(0x838494),(R+0),4);
}
B50b420:{NFSU2_TR(0x50b420);
__builtin_memmove(gp(0x83848c),(R+4),4);
}
B50b426:{NFSU2_TR(0x50b426);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b430:L50b430:{c.instructions+=4;NFSU2_TR(0x50b430);
__builtin_memmove((R+0),gp(0x838490),4);
}
B50b435:{NFSU2_TR(0x50b435);
__builtin_memmove((R+4),gp(0x838488),4);
}
B50b43b:{NFSU2_TR(0x50b43b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50b43d:{NFSU2_TR(0x50b43d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50b441;}}
}
B50b43f:L50b43f:{c.instructions+=1;NFSU2_TR(0x50b43f);
__builtin_memmove((R+0),(R+4),4);
}
B50b441:L50b441:{c.instructions+=6;NFSU2_TR(0x50b441);
__builtin_memmove(gp(0x838490),(R+0),4);
}
B50b446:{NFSU2_TR(0x50b446);
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
B50b448:{NFSU2_TR(0x50b448);
__builtin_memmove(gp(0x838494),(R+0),4);
}
B50b44d:{NFSU2_TR(0x50b44d);
__builtin_memmove(gp(0x83848c),(R+0),4);
}
B50b452:{NFSU2_TR(0x50b452);
__builtin_memmove(gp(0x838488),(R+0),4);
}
B50b457:{NFSU2_TR(0x50b457);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b460:L50b460:{c.instructions+=14;NFSU2_TR(0x50b460);
if(mod_hook_table[23]&&!mod_bypass_take(23)){SPILL();c.pc=0x50b460u;mod_hook_table[23](c);SPILL();{u32 sp_=r4(R+16);u32 ra_=m4(sp_);w4(R+16,sp_+4u);TAIL_DYNAMIC(ra_);}}
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b461:{NFSU2_TR(0x50b461);
__builtin_memmove((R+20),(R+16),4);
}
B50b463:{NFSU2_TR(0x50b463);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B50b466:{NFSU2_TR(0x50b466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x254ull))));
}
B50b46c:{NFSU2_TR(0x50b46c);
__builtin_memmove((R+0),gp(0x838498),4);
}
B50b471:{NFSU2_TR(0x50b471);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b472:{NFSU2_TR(0x50b472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50b475:{NFSU2_TR(0x50b475);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b476:{NFSU2_TR(0x50b476);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b477:{NFSU2_TR(0x50b477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50b47a:{NFSU2_TR(0x50b47a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50b47c:{NFSU2_TR(0x50b47c);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B50b481:{NFSU2_TR(0x50b481);
s1(0x8384a0,u8(0x0ull));
}
B50b488:{NFSU2_TR(0x50b488);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b492;}}
}
B50b48a:L50b48a:{c.instructions+=2;NFSU2_TR(0x50b48a);
u8 U[8];
__builtin_memmove((U+0),gp(0x83849c),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50b490:{NFSU2_TR(0x50b490);
if(r1(R+518)){{goto L50b49e;}}
}
B50b492:L50b492:{c.instructions+=2;NFSU2_TR(0x50b492);
__builtin_memmove(gp(0x83a9cc),(R+0),4);
}
B50b497:{NFSU2_TR(0x50b497);
s1(0x8384a0,u8(0x1ull));
}
B50b49e:L50b49e:{c.instructions+=8;NFSU2_TR(0x50b49e);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x83a9cc))));
}
B50b4a4:{NFSU2_TR(0x50b4a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b4a8:{NFSU2_TR(0x50b4a8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50b4ac:{NFSU2_TR(0x50b4ac);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50b4b2:{NFSU2_TR(0x50b4b2);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50b4b8:{NFSU2_TR(0x50b4b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50b4ba:{NFSU2_TR(0x50b4ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50b4bd:{NFSU2_TR(0x50b4bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b4cc;}}
}
B50b4bf:L50b4bf:{c.instructions+=2;NFSU2_TR(0x50b4bf);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
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
B50b4c6:{NFSU2_TR(0x50b4c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b786;}}
}
B50b4cc:L50b4cc:{c.instructions+=5;NFSU2_TR(0x50b4cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b4d3:{NFSU2_TR(0x50b4d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b4d4:{NFSU2_TR(0x50b4d4);
__builtin_memmove(gp(0x838498),(R+28),4);
}
B50b4da:{NFSU2_TR(0x50b4da);
__builtin_memmove(gp(0x83849c),(R+12),4);
}
B50b4e0:{NFSU2_TR(0x50b4e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b4e5ull));
TAIL_STATIC(0x43c780u,43c);
}
B50b4e5:L50b4e5:{c.instructions+=7;NFSU2_TR(0x50b4e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b4e7:{NFSU2_TR(0x50b4e7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b4e9:{NFSU2_TR(0x50b4e9);
u8 U[4];
w4(U+0,u32(0x6b6a294full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b4ee:{NFSU2_TR(0x50b4ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+220),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b4f9:{NFSU2_TR(0x50b4f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a4ull))+u32(r4(R+16))));
w4(U+4,u32(0x43700000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b504:{NFSU2_TR(0x50b504);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b50f:{NFSU2_TR(0x50b50f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b514ull));
TAIL_STATIC(0x4901d0u,490);
}
B50b514:L50b514:{c.instructions+=4;NFSU2_TR(0x50b514);
u8 U[4];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50b51b:{NFSU2_TR(0x50b51b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b51c:{NFSU2_TR(0x50b51c);
__builtin_memmove((R+24),(R+0),4);
}
B50b51e:{NFSU2_TR(0x50b51e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b523ull));
TAIL_STATIC(0x43c780u,43c);
}
B50b523:L50b523:{c.instructions+=8;NFSU2_TR(0x50b523);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50b526:{NFSU2_TR(0x50b526);
u8 U[4];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50b52d:{NFSU2_TR(0x50b52d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b52e:{NFSU2_TR(0x50b52e);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50b535:{NFSU2_TR(0x50b535);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b540:{NFSU2_TR(0x50b540);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50b543:{NFSU2_TR(0x50b543);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50b54a:{NFSU2_TR(0x50b54a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b54full));
TAIL_STATIC(0x43c780u,43c);
}
B50b54f:L50b54f:{c.instructions+=3;NFSU2_TR(0x50b54f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b556:{NFSU2_TR(0x50b556);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b557:{NFSU2_TR(0x50b557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b55cull));
TAIL_STATIC(0x43c780u,43c);
}
B50b55c:L50b55c:{c.instructions+=3;NFSU2_TR(0x50b55c);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50b563:{NFSU2_TR(0x50b563);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b564:{NFSU2_TR(0x50b564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b569ull));
TAIL_STATIC(0x43c780u,43c);
}
B50b569:L50b569:{c.instructions+=12;NFSU2_TR(0x50b569);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B50b56d:{NFSU2_TR(0x50b56d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b571:{NFSU2_TR(0x50b571);
u8 U[4];
w4(U+0,u32(u32(u32(0x1c0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50b578:{NFSU2_TR(0x50b578);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b579:{NFSU2_TR(0x50b579);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50b57d:{NFSU2_TR(0x50b57d);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50b584:{NFSU2_TR(0x50b584);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B50b588:{NFSU2_TR(0x50b588);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b58c:{NFSU2_TR(0x50b58c);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b597:{NFSU2_TR(0x50b597);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50b59b:{NFSU2_TR(0x50b59b);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50b5a2:{NFSU2_TR(0x50b5a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b5a7ull));
TAIL_STATIC(0x43c780u,43c);
}
B50b5a7:L50b5a7:{c.instructions+=3;NFSU2_TR(0x50b5a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50b5ab:{NFSU2_TR(0x50b5ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b5ac:{NFSU2_TR(0x50b5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b5b1ull));
TAIL_STATIC(0x43c780u,43c);
}
B50b5b1:L50b5b1:{c.instructions+=7;NFSU2_TR(0x50b5b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b5b8:{NFSU2_TR(0x50b5b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b5b9:{NFSU2_TR(0x50b5b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50b5bd:{NFSU2_TR(0x50b5bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b5be:{NFSU2_TR(0x50b5be);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50b5c2:{NFSU2_TR(0x50b5c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b5c3:{NFSU2_TR(0x50b5c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b5c8ull));
TAIL_STATIC(0x43c990u,43c);
}
B50b5c8:L50b5c8:{c.instructions+=7;NFSU2_TR(0x50b5c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b5cf:{NFSU2_TR(0x50b5cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b5d0:{NFSU2_TR(0x50b5d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50b5d4:{NFSU2_TR(0x50b5d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b5d5:{NFSU2_TR(0x50b5d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50b5d9:{NFSU2_TR(0x50b5d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b5da:{NFSU2_TR(0x50b5da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b5dfull));
TAIL_STATIC(0x43c990u,43c);
}
B50b5df:L50b5df:{c.instructions+=8;NFSU2_TR(0x50b5df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B50b5e2:{NFSU2_TR(0x50b5e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b5e9:{NFSU2_TR(0x50b5e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b5ea:{NFSU2_TR(0x50b5ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50b5ee:{NFSU2_TR(0x50b5ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b5ef:{NFSU2_TR(0x50b5ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50b5f3:{NFSU2_TR(0x50b5f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b5f4:{NFSU2_TR(0x50b5f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b5f9ull));
TAIL_STATIC(0x43c990u,43c);
}
B50b5f9:L50b5f9:{c.instructions+=7;NFSU2_TR(0x50b5f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b600:{NFSU2_TR(0x50b600);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b601:{NFSU2_TR(0x50b601);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50b605:{NFSU2_TR(0x50b605);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b606:{NFSU2_TR(0x50b606);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50b60a:{NFSU2_TR(0x50b60a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b60b:{NFSU2_TR(0x50b60b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b610ull));
TAIL_STATIC(0x43c990u,43c);
}
B50b610:L50b610:{c.instructions+=7;NFSU2_TR(0x50b610);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b617:{NFSU2_TR(0x50b617);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b618:{NFSU2_TR(0x50b618);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50b61c:{NFSU2_TR(0x50b61c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b61d:{NFSU2_TR(0x50b61d);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50b621:{NFSU2_TR(0x50b621);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b622:{NFSU2_TR(0x50b622);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b627ull));
TAIL_STATIC(0x43c990u,43c);
}
B50b627:L50b627:{c.instructions+=7;NFSU2_TR(0x50b627);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b62b:{NFSU2_TR(0x50b62b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b62c:{NFSU2_TR(0x50b62c);
u8 U[4];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50b633:{NFSU2_TR(0x50b633);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b634:{NFSU2_TR(0x50b634);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50b638:{NFSU2_TR(0x50b638);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b639:{NFSU2_TR(0x50b639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b63eull));
TAIL_STATIC(0x43c990u,43c);
}
B50b63e:L50b63e:{c.instructions+=5;NFSU2_TR(0x50b63e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B50b642:{NFSU2_TR(0x50b642);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B50b646:{NFSU2_TR(0x50b646);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B50b649:{NFSU2_TR(0x50b649);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b64b:{NFSU2_TR(0x50b64b);
if(r1(R+518)){{goto L50b65a;}}
}
B50b64d:L50b64d:{c.instructions+=4;NFSU2_TR(0x50b64d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50b64e:{NFSU2_TR(0x50b64e);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B50b650:{NFSU2_TR(0x50b650);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b652:{NFSU2_TR(0x50b652);
if(r1(R+518)){{goto L50b65a;}}
}
B50b654:L50b654:{c.instructions+=3;NFSU2_TR(0x50b654);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B50b656:{NFSU2_TR(0x50b656);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b658:{NFSU2_TR(0x50b658);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b654u);}goto L50b654;}}
}
B50b65a:L50b65a:{c.instructions+=2;NFSU2_TR(0x50b65a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b65c:{NFSU2_TR(0x50b65c);
if(r1(R+518)){{goto L50b66d;}}
}
B50b65e:L50b65e:{c.instructions+=4;NFSU2_TR(0x50b65e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B50b661:{NFSU2_TR(0x50b661);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B50b663:{NFSU2_TR(0x50b663);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b665:{NFSU2_TR(0x50b665);
if(r1(R+518)){{goto L50b66d;}}
}
B50b667:L50b667:{c.instructions+=3;NFSU2_TR(0x50b667);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B50b669:{NFSU2_TR(0x50b669);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b66b:{NFSU2_TR(0x50b66b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b667u);}goto L50b667;}}
}
B50b66d:L50b66d:{c.instructions+=3;NFSU2_TR(0x50b66d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b671:{NFSU2_TR(0x50b671);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b672:{NFSU2_TR(0x50b672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b677ull));
TAIL_STATIC(0x43c780u,43c);
}
B50b677:L50b677:{c.instructions+=3;NFSU2_TR(0x50b677);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50b67a:{NFSU2_TR(0x50b67a);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50b67e:{NFSU2_TR(0x50b67e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b683ull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B50b683:L50b683:{c.instructions+=48;NFSU2_TR(0x50b683);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50b686:{NFSU2_TR(0x50b686);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b68a:{NFSU2_TR(0x50b68a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50b68e:{NFSU2_TR(0x50b68e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffaull))));
__builtin_memmove((R+4),(U+0),4);
}
B50b691:{NFSU2_TR(0x50b691);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b695:{NFSU2_TR(0x50b695);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b697:{NFSU2_TR(0x50b697);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B50b69b:{NFSU2_TR(0x50b69b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b69c:{NFSU2_TR(0x50b69c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50b6a0:{NFSU2_TR(0x50b6a0);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B50b6a4:{NFSU2_TR(0x50b6a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B50b6a8:{NFSU2_TR(0x50b6a8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B50b6aa:{NFSU2_TR(0x50b6aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b6ae:{NFSU2_TR(0x50b6ae);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50b6b2:{NFSU2_TR(0x50b6b2);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50b6b6:{NFSU2_TR(0x50b6b6);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50b6ba:{NFSU2_TR(0x50b6ba);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B50b6be:{NFSU2_TR(0x50b6be);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B50b6c0:{NFSU2_TR(0x50b6c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b6c4:{NFSU2_TR(0x50b6c4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50b6c8:{NFSU2_TR(0x50b6c8);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50b6cf:{NFSU2_TR(0x50b6cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B50b6d3:{NFSU2_TR(0x50b6d3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B50b6d5:{NFSU2_TR(0x50b6d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b6d9:{NFSU2_TR(0x50b6d9);
w4(R+0,u32(0xff808080ull));
}
B50b6de:{NFSU2_TR(0x50b6de);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50b6e2:{NFSU2_TR(0x50b6e2);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50b6e9:{NFSU2_TR(0x50b6e9);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50b6f0:{NFSU2_TR(0x50b6f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B50b6f4:{NFSU2_TR(0x50b6f4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B50b6f6:{NFSU2_TR(0x50b6f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b6fa:{NFSU2_TR(0x50b6fa);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b701:{NFSU2_TR(0x50b701);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b708:{NFSU2_TR(0x50b708);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50b70c:{NFSU2_TR(0x50b70c);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b713:{NFSU2_TR(0x50b713);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b71a:{NFSU2_TR(0x50b71a);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b71e:{NFSU2_TR(0x50b71e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b71f:{NFSU2_TR(0x50b71f);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50b726:{NFSU2_TR(0x50b726);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b731:{NFSU2_TR(0x50b731);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b73c:{NFSU2_TR(0x50b73c);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b747:{NFSU2_TR(0x50b747);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b752:{NFSU2_TR(0x50b752);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b75d:{NFSU2_TR(0x50b75d);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b768:{NFSU2_TR(0x50b768);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b773:{NFSU2_TR(0x50b773);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50b77e:{NFSU2_TR(0x50b77e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b783ull));
TAIL_STATIC(0x5c5020u,5c5);
}
B50b783:L50b783:{c.instructions+=1;NFSU2_TR(0x50b783);
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
B50b786:L50b786:{c.instructions+=6;NFSU2_TR(0x50b786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50b787:{NFSU2_TR(0x50b787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b788:{NFSU2_TR(0x50b788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50b789:{NFSU2_TR(0x50b789);
__builtin_memmove((R+16),(R+20),4);
}
B50b78b:{NFSU2_TR(0x50b78b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50b78c:{NFSU2_TR(0x50b78c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b790:L50b790:{c.instructions+=7;NFSU2_TR(0x50b790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B50b793:{NFSU2_TR(0x50b793);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b794:{NFSU2_TR(0x50b794);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50b798:{NFSU2_TR(0x50b798);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b799:{NFSU2_TR(0x50b799);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b79a:{NFSU2_TR(0x50b79a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B50b79c:{NFSU2_TR(0x50b79c);
w4(R+24,u32(0x7f7dccull));
}
B50b7a1:L50b7a1:{c.instructions+=4;NFSU2_TR(0x50b7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50b7a4:{NFSU2_TR(0x50b7a4);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B50b7a7:{NFSU2_TR(0x50b7a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b7a9:{NFSU2_TR(0x50b7a9);
if(r1(R+518)){{goto L50b7cb;}}
}
B50b7ab:L50b7ab:{c.instructions+=3;NFSU2_TR(0x50b7ab);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B50b7ad:{NFSU2_TR(0x50b7ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50b7af:{NFSU2_TR(0x50b7af);
if(r1(R+518)){{goto L50b7cb;}}
}
B50b7b1:L50b7b1:{c.instructions+=3;NFSU2_TR(0x50b7b1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B50b7b4:{NFSU2_TR(0x50b7b4);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B50b7b6:{NFSU2_TR(0x50b7b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50b7be;}}
}
B50b7b8:L50b7b8:{c.instructions+=2;NFSU2_TR(0x50b7b8);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50b7ba:{NFSU2_TR(0x50b7ba);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50b7be;}}
}
B50b7bc:L50b7bc:{c.instructions+=1;NFSU2_TR(0x50b7bc);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B50b7be:L50b7be:{c.instructions+=6;NFSU2_TR(0x50b7be);
w4(R+0,u32(r1(R+0)));
}
B50b7c1:{NFSU2_TR(0x50b7c1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B50b7c3:{NFSU2_TR(0x50b7c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50b7c6:{NFSU2_TR(0x50b7c6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B50b7c7:{NFSU2_TR(0x50b7c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50b7c9:{NFSU2_TR(0x50b7c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b7b1u);}goto L50b7b1;}}
}
B50b7cb:L50b7cb:{c.instructions+=2;NFSU2_TR(0x50b7cb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50b7cd:{NFSU2_TR(0x50b7cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b7d4;}}
}
B50b7cf:L50b7cf:{c.instructions+=2;NFSU2_TR(0x50b7cf);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B50b7d2:{NFSU2_TR(0x50b7d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b7e9;}}
}
B50b7d4:L50b7d4:{c.instructions+=4;NFSU2_TR(0x50b7d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B50b7d7:{NFSU2_TR(0x50b7d7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B50b7d8:{NFSU2_TR(0x50b7d8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7f917cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7f917cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50b7de:{NFSU2_TR(0x50b7de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b7a1u);}goto L50b7a1;}}
}
B50b7e0:L50b7e0:{c.instructions+=6;NFSU2_TR(0x50b7e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50b7e1:{NFSU2_TR(0x50b7e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b7e2:{NFSU2_TR(0x50b7e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50b7e4:{NFSU2_TR(0x50b7e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50b7e5:{NFSU2_TR(0x50b7e5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b7e8:{NFSU2_TR(0x50b7e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b7e9:L50b7e9:{c.instructions+=15;NFSU2_TR(0x50b7e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50b7ed:{NFSU2_TR(0x50b7ed);
__builtin_memmove((R+0),(R+28),4);
}
B50b7ef:{NFSU2_TR(0x50b7ef);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x1cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B50b7f2:{NFSU2_TR(0x50b7f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f7dc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b7f8:{NFSU2_TR(0x50b7f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b7fc:{NFSU2_TR(0x50b7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f7dd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50b802:{NFSU2_TR(0x50b802);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b806:{NFSU2_TR(0x50b806);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f7dd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b80c:{NFSU2_TR(0x50b80c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b810:{NFSU2_TR(0x50b810);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b814:{NFSU2_TR(0x50b814);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b818:{NFSU2_TR(0x50b818);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50b81c:{NFSU2_TR(0x50b81c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b81d:{NFSU2_TR(0x50b81d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b821:{NFSU2_TR(0x50b821);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f7dccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b827ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50b827:L50b827:{c.instructions+=6;NFSU2_TR(0x50b827);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50b82a:{NFSU2_TR(0x50b82a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50b82b:{NFSU2_TR(0x50b82b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b82c:{NFSU2_TR(0x50b82c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50b82d:{NFSU2_TR(0x50b82d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b830:{NFSU2_TR(0x50b830);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b840:L50b840:{c.instructions+=7;NFSU2_TR(0x50b840);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b841:{NFSU2_TR(0x50b841);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50b845:{NFSU2_TR(0x50b845);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b846:{NFSU2_TR(0x50b846);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b847:{NFSU2_TR(0x50b847);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50b849:{NFSU2_TR(0x50b849);
w4(R+28,u32(0x7f7dc8ull));
}
B50b84e:{NFSU2_TR(0x50b84e);
__builtin_memmove((R+28),(R+28),4);
}
B50b850:L50b850:{c.instructions+=4;NFSU2_TR(0x50b850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50b852:{NFSU2_TR(0x50b852);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B50b855:{NFSU2_TR(0x50b855);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b857:{NFSU2_TR(0x50b857);
if(r1(R+518)){{goto L50b87d;}}
}
B50b859:L50b859:{c.instructions+=3;NFSU2_TR(0x50b859);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B50b85b:{NFSU2_TR(0x50b85b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50b85d:{NFSU2_TR(0x50b85d);
if(r1(R+518)){{goto L50b87d;}}
}
B50b85f:L50b85f:{c.instructions+=1;NFSU2_TR(0x50b85f);
}
B50b860:L50b860:{c.instructions+=3;NFSU2_TR(0x50b860);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B50b863:{NFSU2_TR(0x50b863);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B50b866:{NFSU2_TR(0x50b866);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50b870;}}
}
B50b868:L50b868:{c.instructions+=2;NFSU2_TR(0x50b868);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50b86b:{NFSU2_TR(0x50b86b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50b870;}}
}
B50b86d:L50b86d:{c.instructions+=1;NFSU2_TR(0x50b86d);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0xe0ull))));
}
B50b870:L50b870:{c.instructions+=6;NFSU2_TR(0x50b870);
w4(R+4,u32(r1(R+4)));
}
B50b873:{NFSU2_TR(0x50b873);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B50b875:{NFSU2_TR(0x50b875);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50b878:{NFSU2_TR(0x50b878);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50b879:{NFSU2_TR(0x50b879);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50b87b:{NFSU2_TR(0x50b87b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b860u);}goto L50b860;}}
}
B50b87d:L50b87d:{c.instructions+=2;NFSU2_TR(0x50b87d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50b87f:{NFSU2_TR(0x50b87f);
if(r1(R+518)){{goto L50b893;}}
}
B50b881:L50b881:{c.instructions+=4;NFSU2_TR(0x50b881);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B50b884:{NFSU2_TR(0x50b884);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50b885:{NFSU2_TR(0x50b885);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7f9178ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7f9178ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50b88b:{NFSU2_TR(0x50b88b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b850u);}goto L50b850;}}
}
B50b88d:L50b88d:{c.instructions+=5;NFSU2_TR(0x50b88d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50b88e:{NFSU2_TR(0x50b88e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b88f:{NFSU2_TR(0x50b88f);
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
B50b891:{NFSU2_TR(0x50b891);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50b892:{NFSU2_TR(0x50b892);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b893:L50b893:{c.instructions+=6;NFSU2_TR(0x50b893);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B50b896:{NFSU2_TR(0x50b896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50b897:{NFSU2_TR(0x50b897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b898:{NFSU2_TR(0x50b898);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x7f7dc8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x7f7dc8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f7dc8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b89d:{NFSU2_TR(0x50b89d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50b89e:{NFSU2_TR(0x50b89e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b8a0:L50b8a0:{c.instructions+=3;NFSU2_TR(0x50b8a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b8a4:{NFSU2_TR(0x50b8a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b8a5:{NFSU2_TR(0x50b8a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b8aaull));
TAIL_STATIC(0x505450u,505);
}
B50b8aa:L50b8aa:{c.instructions+=2;NFSU2_TR(0x50b8aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b8ab:{NFSU2_TR(0x50b8ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b8b0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b840u);}goto L50b840;}
}
B50b8b0:L50b8b0:{c.instructions+=3;NFSU2_TR(0x50b8b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50b8b3:{NFSU2_TR(0x50b8b3);
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
B50b8b5:{NFSU2_TR(0x50b8b5);
if(r1(R+518)){{goto L50b8bb;}}
}
B50b8b7:L50b8b7:{c.instructions+=2;NFSU2_TR(0x50b8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b8ba:{NFSU2_TR(0x50b8ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b8bb:L50b8bb:{c.instructions+=2;NFSU2_TR(0x50b8bb);
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
B50b8bd:{NFSU2_TR(0x50b8bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b8c0:L50b8c0:{c.instructions+=3;NFSU2_TR(0x50b8c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b8c4:{NFSU2_TR(0x50b8c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b8c5:{NFSU2_TR(0x50b8c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b8caull));
TAIL_STATIC(0x505450u,505);
}
B50b8ca:L50b8ca:{c.instructions+=2;NFSU2_TR(0x50b8ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b8cb:{NFSU2_TR(0x50b8cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b8d0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b840u);}goto L50b840;}
}
B50b8d0:L50b8d0:{c.instructions+=3;NFSU2_TR(0x50b8d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50b8d3:{NFSU2_TR(0x50b8d3);
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
B50b8d5:{NFSU2_TR(0x50b8d5);
if(r1(R+518)){{goto L50b8de;}}
}
B50b8d7:L50b8d7:{c.instructions+=2;NFSU2_TR(0x50b8d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b8db:{NFSU2_TR(0x50b8db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b8de:L50b8de:{c.instructions+=1;NFSU2_TR(0x50b8de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b8e0:L50b8e0:{c.instructions+=6;NFSU2_TR(0x50b8e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b8e1:{NFSU2_TR(0x50b8e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50b8e5:{NFSU2_TR(0x50b8e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b8e6:{NFSU2_TR(0x50b8e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b8e7:{NFSU2_TR(0x50b8e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50b8eb:{NFSU2_TR(0x50b8eb);
w4(R+24,u32(0x7f7dc8ull));
}
B50b8f0:L50b8f0:{c.instructions+=4;NFSU2_TR(0x50b8f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50b8f2:{NFSU2_TR(0x50b8f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b8f3:{NFSU2_TR(0x50b8f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b8f4:{NFSU2_TR(0x50b8f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b8f9ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B50b8f9:L50b8f9:{c.instructions+=3;NFSU2_TR(0x50b8f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50b8fc:{NFSU2_TR(0x50b8fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b8fe:{NFSU2_TR(0x50b8fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b903;}}
}
B50b900:L50b900:{c.instructions+=1;NFSU2_TR(0x50b900);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50b903:L50b903:{c.instructions+=3;NFSU2_TR(0x50b903);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B50b906:{NFSU2_TR(0x50b906);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x7f9178ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7f9178ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7f9178ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b90c:{NFSU2_TR(0x50b90c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b8f0u);}goto L50b8f0;}}
}
B50b90e:L50b90e:{c.instructions+=4;NFSU2_TR(0x50b90e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50b90f:{NFSU2_TR(0x50b90f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50b910:{NFSU2_TR(0x50b910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50b911:{NFSU2_TR(0x50b911);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b920:L50b920:{c.instructions+=4;NFSU2_TR(0x50b920);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50b923:{NFSU2_TR(0x50b923);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50b925:{NFSU2_TR(0x50b925);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30203ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b92a:{NFSU2_TR(0x50b92a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b956;}}
}
B50b92c:L50b92c:{c.instructions+=3;NFSU2_TR(0x50b92c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b92f:{NFSU2_TR(0x50b92f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xe76e4546ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B50b935:{NFSU2_TR(0x50b935);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b961;}}
}
B50b937:L50b937:{c.instructions+=2;NFSU2_TR(0x50b937);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x64486b50ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B50b93e:{NFSU2_TR(0x50b93e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b961;}}
}
B50b940:L50b940:{c.instructions+=2;NFSU2_TR(0x50b940);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x20000ull))));
}
B50b947:{NFSU2_TR(0x50b947);
if(r1(R+512)){{goto L50b961;}}
}
B50b949:L50b949:{c.instructions+=3;NFSU2_TR(0x50b949);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B50b94c:{NFSU2_TR(0x50b94c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b94d:{NFSU2_TR(0x50b94d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b952ull));
TAIL_STATIC(0x505450u,505);
}
B50b952:L50b952:{c.instructions+=2;NFSU2_TR(0x50b952);
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
B50b955:{NFSU2_TR(0x50b955);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b956:L50b956:{c.instructions+=2;NFSU2_TR(0x50b956);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x30210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x30210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x30210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b95b:{NFSU2_TR(0x50b95b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50b961;}}
}
B50b95d:L50b95d:{c.instructions+=2;NFSU2_TR(0x50b95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b960:{NFSU2_TR(0x50b960);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b961:L50b961:{c.instructions+=2;NFSU2_TR(0x50b961);
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
B50b963:{NFSU2_TR(0x50b963);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b970:L50b970:{c.instructions+=4;NFSU2_TR(0x50b970);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b974:{NFSU2_TR(0x50b974);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50b977:{NFSU2_TR(0x50b977);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50b979:{NFSU2_TR(0x50b979);
if(r1(R+518)){{goto L50b97f;}}
}
B50b97b:L50b97b:{c.instructions+=2;NFSU2_TR(0x50b97b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x24ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b97e:{NFSU2_TR(0x50b97e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b97f:L50b97f:{c.instructions+=2;NFSU2_TR(0x50b97f);
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
B50b981:{NFSU2_TR(0x50b981);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b990:L50b990:{c.instructions+=8;NFSU2_TR(0x50b990);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b994:{NFSU2_TR(0x50b994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B50b99a:{NFSU2_TR(0x50b99a);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b9a1:{NFSU2_TR(0x50b9a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b9a2:{NFSU2_TR(0x50b9a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b9a3:{NFSU2_TR(0x50b9a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50b9a7:{NFSU2_TR(0x50b9a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b9a8:{NFSU2_TR(0x50b9a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b9adull));
TAIL_STATIC(0x43fbc0u,43f);
}
B50b9ad:L50b9ad:{c.instructions+=3;NFSU2_TR(0x50b9ad);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b9b1:{NFSU2_TR(0x50b9b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b9b2:{NFSU2_TR(0x50b9b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b9b7ull));
TAIL_STATIC(0x43db50u,43d);
}
B50b9b7:L50b9b7:{c.instructions+=2;NFSU2_TR(0x50b9b7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x110ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x110ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x110ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50b9bd:{NFSU2_TR(0x50b9bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50b9c0:L50b9c0:{c.instructions+=8;NFSU2_TR(0x50b9c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50b9c4:{NFSU2_TR(0x50b9c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B50b9ca:{NFSU2_TR(0x50b9ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50b9d1:{NFSU2_TR(0x50b9d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b9d2:{NFSU2_TR(0x50b9d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b9d3:{NFSU2_TR(0x50b9d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50b9d7:{NFSU2_TR(0x50b9d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50b9d8:{NFSU2_TR(0x50b9d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50b9ddull));
TAIL_STATIC(0x43fbc0u,43f);
}
B50b9dd:L50b9dd:{c.instructions+=6;NFSU2_TR(0x50b9dd);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50b9e1:{NFSU2_TR(0x50b9e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B50b9e4:{NFSU2_TR(0x50b9e4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B50b9e7:{NFSU2_TR(0x50b9e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50b9e9:{NFSU2_TR(0x50b9e9);
__builtin_memmove((R+8),(R+16),4);
}
B50b9ed:{NFSU2_TR(0x50b9ed);
if(r1(R+518)){{goto L50ba0d;}}
}
B50b9ef:L50b9ef:{c.instructions+=1;NFSU2_TR(0x50b9ef);
}
B50b9f0:L50b9f0:{c.instructions+=3;NFSU2_TR(0x50b9f0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B50b9f3:{NFSU2_TR(0x50b9f3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B50b9f6:{NFSU2_TR(0x50b9f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50ba00;}}
}
B50b9f8:L50b9f8:{c.instructions+=2;NFSU2_TR(0x50b9f8);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50b9fb:{NFSU2_TR(0x50b9fb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50ba00;}}
}
B50b9fd:L50b9fd:{c.instructions+=1;NFSU2_TR(0x50b9fd);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0xe0ull))));
}
B50ba00:L50ba00:{c.instructions+=6;NFSU2_TR(0x50ba00);
w4(R+4,u32(r1(R+4)));
}
B50ba03:{NFSU2_TR(0x50ba03);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B50ba05:{NFSU2_TR(0x50ba05);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50ba08:{NFSU2_TR(0x50ba08);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B50ba09:{NFSU2_TR(0x50ba09);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50ba0b:{NFSU2_TR(0x50ba0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50b9f0u);}goto L50b9f0;}}
}
B50ba0d:L50ba0d:{c.instructions+=2;NFSU2_TR(0x50ba0d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ba13:{NFSU2_TR(0x50ba13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ba20:L50ba20:{c.instructions+=3;NFSU2_TR(0x50ba20);
__builtin_memmove((R+0),gp(0x7f9178),4);
}
B50ba25:{NFSU2_TR(0x50ba25);
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
B50ba27:{NFSU2_TR(0x50ba27);
if(r1(R+518)){{goto L50ba6f;}}
}
B50ba29:L50ba29:{c.instructions+=4;NFSU2_TR(0x50ba29);
__builtin_memmove((R+0),gp(0x7f917c),4);
}
B50ba2e:{NFSU2_TR(0x50ba2e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ba30:{NFSU2_TR(0x50ba30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ba31:{NFSU2_TR(0x50ba31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ba36ull));
TAIL_STATIC(0x440820u,440);
}
B50ba36:L50ba36:{c.instructions+=8;NFSU2_TR(0x50ba36);
__builtin_memmove((R+4),gp(0x7f917c),4);
}
B50ba3c:{NFSU2_TR(0x50ba3c);
__builtin_memmove((R+8),gp(0x7f9178),4);
}
B50ba42:{NFSU2_TR(0x50ba42);
u8 U[4];
w4(U+0,u32(0x79ab68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ba47:{NFSU2_TR(0x50ba47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ba48:{NFSU2_TR(0x50ba48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ba49:{NFSU2_TR(0x50ba49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ba4a:{NFSU2_TR(0x50ba4a);
__builtin_memmove(gp(0x8384a4),(R+0),4);
}
B50ba4f:{NFSU2_TR(0x50ba4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ba54ull));
TAIL_STATIC(0x440330u,440);
}
B50ba54:L50ba54:{c.instructions+=7;NFSU2_TR(0x50ba54);
__builtin_memmove((R+8),gp(0x8384a8),4);
}
B50ba5a:{NFSU2_TR(0x50ba5a);
__builtin_memmove((R+4),gp(0x7f9178),4);
}
B50ba60:{NFSU2_TR(0x50ba60);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ba62:{NFSU2_TR(0x50ba62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B50ba65:{NFSU2_TR(0x50ba65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ba66:{NFSU2_TR(0x50ba66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ba67:{NFSU2_TR(0x50ba67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ba6cull));
TAIL_STATIC(0x440a80u,440);
}
B50ba6c:L50ba6c:{c.instructions+=1;NFSU2_TR(0x50ba6c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ba6f:L50ba6f:{c.instructions+=1;NFSU2_TR(0x50ba6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ba70:L50ba70:{c.instructions+=4;NFSU2_TR(0x50ba70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50ba74:{NFSU2_TR(0x50ba74);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B50ba76:{NFSU2_TR(0x50ba76);
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
B50ba78:{NFSU2_TR(0x50ba78);
if(r1(R+518)){{goto L50bab0;}}
}
B50ba7a:L50ba7a:{c.instructions+=2;NFSU2_TR(0x50ba7a);
u8 U[18];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(u32(0x820ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B50ba82:{NFSU2_TR(0x50ba82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bab0;}}
}
B50ba84:L50ba84:{c.instructions+=2;NFSU2_TR(0x50ba84);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(U+6))<(u16(0x24ull))));
w1(R+523,sborrow<u16>(r2(U+6),u16(0x24ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x24ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ba88:{NFSU2_TR(0x50ba88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bab0;}}
}
B50ba8a:L50ba8a:{c.instructions+=5;NFSU2_TR(0x50ba8a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B50ba8e:{NFSU2_TR(0x50ba8e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B50ba91:{NFSU2_TR(0x50ba91);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B50ba93:{NFSU2_TR(0x50ba93);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50ba96:{NFSU2_TR(0x50ba96);
if(r1(R+518)){{goto L50baab;}}
}
B50ba98:L50ba98:{c.instructions+=2;NFSU2_TR(0x50ba98);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x24ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50ba9c:{NFSU2_TR(0x50ba9c);
if(r1(R+518)){{goto L50baab;}}
}
B50ba9e:L50ba9e:{c.instructions+=5;NFSU2_TR(0x50ba9e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B50baa2:{NFSU2_TR(0x50baa2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B50baa5:{NFSU2_TR(0x50baa5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B50baa6:{NFSU2_TR(0x50baa6);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50baa9:{NFSU2_TR(0x50baa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ba98u);}goto L50ba98;}}
}
B50baab:L50baab:{c.instructions+=2;NFSU2_TR(0x50baab);
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
B50baad:{NFSU2_TR(0x50baad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B50bab0:L50bab0:{c.instructions+=1;NFSU2_TR(0x50bab0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50bac0:L50bac0:{c.instructions+=3;NFSU2_TR(0x50bac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50bac4:{NFSU2_TR(0x50bac4);
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
B50bac6:{NFSU2_TR(0x50bac6);
if(r1(R+518)){{goto L50bb05;}}
}
B50bac8:L50bac8:{c.instructions+=2;NFSU2_TR(0x50bac8);
u8 U[18];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(u32(0x820ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B50bad0:{NFSU2_TR(0x50bad0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bb05;}}
}
B50bad2:L50bad2:{c.instructions+=2;NFSU2_TR(0x50bad2);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(U+6))<(u16(0x24ull))));
w1(R+523,sborrow<u16>(r2(U+6),u16(0x24ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x24ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50bad6:{NFSU2_TR(0x50bad6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bb05;}}
}
B50bad8:L50bad8:{c.instructions+=4;NFSU2_TR(0x50bad8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B50badc:{NFSU2_TR(0x50badc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B50badf:{NFSU2_TR(0x50badf);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0x24ull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0x24ull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0x24ull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B50bae3:{NFSU2_TR(0x50bae3);
if(r1(R+518)){{goto L50bb05;}}
}
B50bae5:L50bae5:{c.instructions+=2;NFSU2_TR(0x50bae5);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bae8:{NFSU2_TR(0x50bae8);
if(r1(R+518)){{goto L50bb02;}}
}
B50baea:L50baea:{c.instructions+=1;NFSU2_TR(0x50baea);
__builtin_memmove((R+12),(R+12),4);
}
B50baf0:L50baf0:{c.instructions+=2;NFSU2_TR(0x50baf0);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x24ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50baf4:{NFSU2_TR(0x50baf4);
if(r1(R+518)){{goto L50bb02;}}
}
B50baf6:L50baf6:{c.instructions+=4;NFSU2_TR(0x50baf6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B50bafa:{NFSU2_TR(0x50bafa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B50bafd:{NFSU2_TR(0x50bafd);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bb00:{NFSU2_TR(0x50bb00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50baf0u);}goto L50baf0;}}
}
B50bb02:L50bb02:{c.instructions+=1;NFSU2_TR(0x50bb02);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x2ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50bb05:L50bb05:{c.instructions+=1;NFSU2_TR(0x50bb05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50bb10:L50bb10:{c.instructions+=10;NFSU2_TR(0x50bb10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bb11:{NFSU2_TR(0x50bb11);
__builtin_memmove((R+20),(R+16),4);
}
B50bb13:{NFSU2_TR(0x50bb13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B50bb16:{NFSU2_TR(0x50bb16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B50bb1c:{NFSU2_TR(0x50bb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50bb1f:{NFSU2_TR(0x50bb1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bb20:{NFSU2_TR(0x50bb20);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50bb22:{NFSU2_TR(0x50bb22);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x24ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B50bb26:{NFSU2_TR(0x50bb26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bb27:{NFSU2_TR(0x50bb27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bbed;}}
}
B50bb2d:L50bb2d:{c.instructions+=3;NFSU2_TR(0x50bb2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B50bb30:{NFSU2_TR(0x50bb30);
w4(R+4,u32(0x20ull));
}
B50bb35:{NFSU2_TR(0x50bb35);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B50bb39:L50bb39:{c.instructions+=1;NFSU2_TR(0x50bb39);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50bb3b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50bb39u);}goto L50bb39;}
}
B50bb3b:L50bb3b:{c.instructions+=4;NFSU2_TR(0x50bb3b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+0),(U+0),2);
}
B50bb3e:{NFSU2_TR(0x50bb3e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50bb40:{NFSU2_TR(0x50bb40);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x24ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bb44:{NFSU2_TR(0x50bb44);
if(r1(R+518)){{goto L50bb72;}}
}
B50bb46:L50bb46:{c.instructions+=3;NFSU2_TR(0x50bb46);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B50bb4a:{NFSU2_TR(0x50bb4a);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B50bb4c:{NFSU2_TR(0x50bb4c);
__builtin_memmove((R+16),(R+16),4);
}
B50bb50:L50bb50:{c.instructions+=2;NFSU2_TR(0x50bb50);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bb53:{NFSU2_TR(0x50bb53);
if(r1(R+518)){{goto L50bb72;}}
}
B50bb55:L50bb55:{c.instructions+=2;NFSU2_TR(0x50bb55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x80ull))));
}
B50bb5b:{NFSU2_TR(0x50bb5b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L50bb72;}}
}
B50bb5d:L50bb5d:{c.instructions+=7;NFSU2_TR(0x50bb5d);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B50bb61:{NFSU2_TR(0x50bb61);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B50bb64:{NFSU2_TR(0x50bb64);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50bb66:{NFSU2_TR(0x50bb66);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+0),(U+0),2);
}
B50bb69:{NFSU2_TR(0x50bb69);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B50bb6c:{NFSU2_TR(0x50bb6c);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x24ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bb70:{NFSU2_TR(0x50bb70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50bb50u);}goto L50bb50;}}
}
B50bb72:L50bb72:{c.instructions+=6;NFSU2_TR(0x50bb72);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50bb76:{NFSU2_TR(0x50bb76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bb77:{NFSU2_TR(0x50bb77);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50bb7e:{NFSU2_TR(0x50bb7e);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bb83:{NFSU2_TR(0x50bb83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bb84:{NFSU2_TR(0x50bb84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bb89ull));
TAIL_STATIC(0x4ff980u,4ff);
}
B50bb89:L50bb89:{c.instructions+=4;NFSU2_TR(0x50bb89);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50bb90:{NFSU2_TR(0x50bb90);
u8 U[4];
w4(U+0,u32(0x79ab78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bb95:{NFSU2_TR(0x50bb95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bb96:{NFSU2_TR(0x50bb96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bb9bull));
TAIL_STATIC(0x43dc30u,43d);
}
B50bb9b:L50bb9b:{c.instructions+=3;NFSU2_TR(0x50bb9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B50bb9e:{NFSU2_TR(0x50bb9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50bba0:{NFSU2_TR(0x50bba0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bba9;}}
}
B50bba2:L50bba2:{c.instructions+=2;NFSU2_TR(0x50bba2);
w4(R+0,u32(0xbca80379ull));
}
B50bba7:{NFSU2_TR(0x50bba7);
{goto L50bbed;}
}
B50bba9:L50bba9:{c.instructions+=3;NFSU2_TR(0x50bba9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B50bbab:{NFSU2_TR(0x50bbab);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B50bbad:{NFSU2_TR(0x50bbad);
__builtin_memmove((R+4),(R+4),4);
}
B50bbb0:L50bbb0:{c.instructions+=2;NFSU2_TR(0x50bbb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bbb1:{NFSU2_TR(0x50bbb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bbb6ull));
TAIL_STATIC(0x571a60u,571);
}
B50bbb6:L50bbb6:{c.instructions+=3;NFSU2_TR(0x50bbb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50bbb9:{NFSU2_TR(0x50bbb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50bbbb:{NFSU2_TR(0x50bbbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bbd6;}}
}
B50bbbd:L50bbbd:{c.instructions+=3;NFSU2_TR(0x50bbbd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50bbbe:{NFSU2_TR(0x50bbbe);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50bbc1:{NFSU2_TR(0x50bbc1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50bbb0u);}goto L50bbb0;}}
}
B50bbc3:L50bbc3:{c.instructions+=1;NFSU2_TR(0x50bbc3);
w1(R+4,u8(0xffull));
}
B50bbc5:L50bbc5:{c.instructions+=2;NFSU2_TR(0x50bbc5);
u8 U[11];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f9414ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(r1(R+4))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B50bbcc:{NFSU2_TR(0x50bbcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bbda;}}
}
B50bbce:L50bbce:{c.instructions+=3;NFSU2_TR(0x50bbce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50bbcf:{NFSU2_TR(0x50bbcf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50bbd2:{NFSU2_TR(0x50bbd2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50bbc5u);}goto L50bbc5;}}
}
B50bbd4:L50bbd4:{c.instructions+=1;NFSU2_TR(0x50bbd4);
{goto L50bbdc;}
}
B50bbd6:L50bbd6:{c.instructions+=2;NFSU2_TR(0x50bbd6);
__builtin_memmove((R+28),(R+24),4);
}
B50bbd8:{NFSU2_TR(0x50bbd8);
{goto L50bbdc;}
}
B50bbda:L50bbda:{c.instructions+=1;NFSU2_TR(0x50bbda);
__builtin_memmove((R+28),(R+0),4);
}
B50bbdc:L50bbdc:{c.instructions+=4;NFSU2_TR(0x50bbdc);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50bbe3:{NFSU2_TR(0x50bbe3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bbe4:{NFSU2_TR(0x50bbe4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bbe5:{NFSU2_TR(0x50bbe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bbeaull));
TAIL_STATIC(0x572190u,572);
}
B50bbea:L50bbea:{c.instructions+=1;NFSU2_TR(0x50bbea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50bbed:L50bbed:{c.instructions+=4;NFSU2_TR(0x50bbed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bbef:{NFSU2_TR(0x50bbef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bbf1:{NFSU2_TR(0x50bbf1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bbf2:{NFSU2_TR(0x50bbf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bbf7ull));
TAIL_STATIC(0x4901d0u,490);
}
B50bbf7:L50bbf7:{c.instructions+=6;NFSU2_TR(0x50bbf7);
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
B50bbfa:{NFSU2_TR(0x50bbfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50bbfb:{NFSU2_TR(0x50bbfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50bbfc:{NFSU2_TR(0x50bbfc);
__builtin_memmove((R+16),(R+20),4);
}
B50bbfe:{NFSU2_TR(0x50bbfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50bbff:{NFSU2_TR(0x50bbff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50bc10:L50bc10:{c.instructions+=8;NFSU2_TR(0x50bc10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bc11:{NFSU2_TR(0x50bc11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50bc15:{NFSU2_TR(0x50bc15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bc16:{NFSU2_TR(0x50bc16);
__builtin_memmove((R+12),(R+4),4);
}
B50bc18:{NFSU2_TR(0x50bc18);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50bc1c:{NFSU2_TR(0x50bc1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50bc1f:{NFSU2_TR(0x50bc1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50bc27:{NFSU2_TR(0x50bc27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bc35;}}
}
B50bc29:L50bc29:{c.instructions+=2;NFSU2_TR(0x50bc29);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xaull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xaull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xaull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B50bc2d:{NFSU2_TR(0x50bc2d);
if(r1(R+518)){{goto L50bc3b;}}
}
B50bc2f:L50bc2f:{c.instructions+=2;NFSU2_TR(0x50bc2f);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x5eull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x5eull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x5eull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B50bc33:{NFSU2_TR(0x50bc33);
if(r1(R+518)){{goto L50bc3b;}}
}
B50bc35:L50bc35:{c.instructions+=2;NFSU2_TR(0x50bc35);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xdull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xdull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xdull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B50bc39:{NFSU2_TR(0x50bc39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bc46;}}
}
B50bc3b:L50bc3b:{c.instructions+=4;NFSU2_TR(0x50bc3b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50bc41:{NFSU2_TR(0x50bc41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50bc42:{NFSU2_TR(0x50bc42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50bc43:{NFSU2_TR(0x50bc43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50bc46:L50bc46:{c.instructions+=2;NFSU2_TR(0x50bc46);
w1(R+512,u8((r2(R+0))<(u16(0xff80ull))));
}
B50bc4a:{NFSU2_TR(0x50bc4a);
if(r1(R+512)){{goto L50bc51;}}
}
B50bc4c:L50bc4c:{c.instructions+=1;NFSU2_TR(0x50bc4c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B50bc51:L50bc51:{c.instructions+=2;NFSU2_TR(0x50bc51);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x99ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bc55:{NFSU2_TR(0x50bc55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bc5e;}}
}
B50bc57:L50bc57:{c.instructions+=2;NFSU2_TR(0x50bc57);
w4(R+0,u32(0x2122ull));
}
B50bc5c:{NFSU2_TR(0x50bc5c);
{goto L50bc69;}
}
B50bc5e:L50bc5e:{c.instructions+=2;NFSU2_TR(0x50bc5e);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x9cull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bc62:{NFSU2_TR(0x50bc62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bc69;}}
}
B50bc64:L50bc64:{c.instructions+=1;NFSU2_TR(0x50bc64);
w4(R+0,u32(0x153ull));
}
B50bc69:L50bc69:{c.instructions+=4;NFSU2_TR(0x50bc69);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B50bc6b:{NFSU2_TR(0x50bc6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bc6c:{NFSU2_TR(0x50bc6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bc6d:{NFSU2_TR(0x50bc6d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L50bc7e;}}
}
B50bc6f:L50bc6f:{c.instructions+=2;NFSU2_TR(0x50bc6f);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xa0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bc73:{NFSU2_TR(0x50bc73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bc7e;}}
}
B50bc75:L50bc75:{c.instructions+=3;NFSU2_TR(0x50bc75);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B50bc77:{NFSU2_TR(0x50bc77);
w4(R+0,u32(0x20ull));
}
B50bc7c:{NFSU2_TR(0x50bc7c);
{goto L50bc82;}
}
B50bc7e:L50bc7e:{c.instructions+=1;NFSU2_TR(0x50bc7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50bc82:L50bc82:{c.instructions+=3;NFSU2_TR(0x50bc82);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50bc85:{NFSU2_TR(0x50bc85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bc86:{NFSU2_TR(0x50bc86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bc8bull));
TAIL_STATIC(0x4fda70u,4fd);
}
B50bc8b:L50bc8b:{c.instructions+=3;NFSU2_TR(0x50bc8b);
__builtin_memmove((R+24),(R+0),4);
}
B50bc8d:{NFSU2_TR(0x50bc8d);
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
B50bc8f:{NFSU2_TR(0x50bc8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bc9e;}}
}
B50bc91:L50bc91:{c.instructions+=6;NFSU2_TR(0x50bc91);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50bc97:{NFSU2_TR(0x50bc97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50bc98:{NFSU2_TR(0x50bc98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50bc99:{NFSU2_TR(0x50bc99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50bc9a:{NFSU2_TR(0x50bc9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50bc9b:{NFSU2_TR(0x50bc9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50bc9e:L50bc9e:{c.instructions+=2;NFSU2_TR(0x50bc9e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+28))&u32(r2(R+28))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B50bca1:{NFSU2_TR(0x50bca1);
if(r1(R+518)){{goto L50bcc8;}}
}
B50bca3:L50bca3:{c.instructions+=4;NFSU2_TR(0x50bca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50bca6:{NFSU2_TR(0x50bca6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bca7:{NFSU2_TR(0x50bca7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bca8:{NFSU2_TR(0x50bca8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bcadull));
TAIL_STATIC(0x6f45f0u,6f4);
}
B50bcad:L50bcad:{c.instructions+=10;NFSU2_TR(0x50bcad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50bcb1:{NFSU2_TR(0x50bcb1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B50bcb5:{NFSU2_TR(0x50bcb5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50bcb9:{NFSU2_TR(0x50bcb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50bcbd:{NFSU2_TR(0x50bcbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50bcbe:{NFSU2_TR(0x50bcbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50bcbf:{NFSU2_TR(0x50bcbf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B50bcc3:{NFSU2_TR(0x50bcc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50bcc4:{NFSU2_TR(0x50bcc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50bcc5:{NFSU2_TR(0x50bcc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50bcc8:L50bcc8:{c.instructions+=9;NFSU2_TR(0x50bcc8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B50bccc:{NFSU2_TR(0x50bccc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50bcd0:{NFSU2_TR(0x50bcd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50bcd4:{NFSU2_TR(0x50bcd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50bcd5:{NFSU2_TR(0x50bcd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50bcd6:{NFSU2_TR(0x50bcd6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B50bcda:{NFSU2_TR(0x50bcda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50bcdb:{NFSU2_TR(0x50bcdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50bcdc:{NFSU2_TR(0x50bcdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50bce0:L50bce0:{c.instructions+=6;NFSU2_TR(0x50bce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B50bce3:{NFSU2_TR(0x50bce3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bce4:{NFSU2_TR(0x50bce4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50bce8:{NFSU2_TR(0x50bce8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50bcea:{NFSU2_TR(0x50bcea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50bcee:{NFSU2_TR(0x50bcee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bcfd;}}
}
B50bcf0:L50bcf0:{c.instructions+=4;NFSU2_TR(0x50bcf0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50bcf6:{NFSU2_TR(0x50bcf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50bcf7:{NFSU2_TR(0x50bcf7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50bcfa:{NFSU2_TR(0x50bcfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50bcfd:L50bcfd:{c.instructions+=11;NFSU2_TR(0x50bcfd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bcfe:{NFSU2_TR(0x50bcfe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bcff:{NFSU2_TR(0x50bcff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bd00:{NFSU2_TR(0x50bd00);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B50bd02:{NFSU2_TR(0x50bd02);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+24),(U+0),2);
}
B50bd05:{NFSU2_TR(0x50bd05);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B50bd07:{NFSU2_TR(0x50bd07);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B50bd09:{NFSU2_TR(0x50bd09);
u8 U[2];
w2(U+0,u16(u32(r2(R+24))&u32(r2(R+24))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bd0c:{NFSU2_TR(0x50bd0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50bd14:{NFSU2_TR(0x50bd14);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50bd1c:{NFSU2_TR(0x50bd1c);
if(r1(R+518)){{goto L50bea4;}}
}
B50bd22:L50bd22:{c.instructions+=5;NFSU2_TR(0x50bd22);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50bd26:{NFSU2_TR(0x50bd26);
__builtin_memmove((R+0),(R+4),4);
}
B50bd28:{NFSU2_TR(0x50bd28);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x20ull))));
}
B50bd2b:{NFSU2_TR(0x50bd2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50bd2f:{NFSU2_TR(0x50bd2f);
}
B50bd30:L50bd30:{c.instructions+=4;NFSU2_TR(0x50bd30);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50bd32:{NFSU2_TR(0x50bd32);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50bd36:{NFSU2_TR(0x50bd36);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50bd3a:{NFSU2_TR(0x50bd3a);
if(r1(R+518)){{goto L50bd40;}}
}
B50bd3c:L50bd3c:{c.instructions+=2;NFSU2_TR(0x50bd3c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B50bd3e:{NFSU2_TR(0x50bd3e);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B50bd40:L50bd40:{c.instructions+=2;NFSU2_TR(0x50bd40);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50bd42:{NFSU2_TR(0x50bd42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bd58;}}
}
B50bd44:L50bd44:{c.instructions+=2;NFSU2_TR(0x50bd44);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xaull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50bd48:{NFSU2_TR(0x50bd48);
if(r1(R+518)){{goto L50bea4;}}
}
B50bd4e:L50bd4e:{c.instructions+=2;NFSU2_TR(0x50bd4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x5eull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50bd52:{NFSU2_TR(0x50bd52);
if(r1(R+518)){{goto L50bea4;}}
}
B50bd58:L50bd58:{c.instructions+=2;NFSU2_TR(0x50bd58);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xdull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50bd5c:{NFSU2_TR(0x50bd5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bd66;}}
}
B50bd5e:L50bd5e:{c.instructions+=2;NFSU2_TR(0x50bd5e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B50bd61:{NFSU2_TR(0x50bd61);
{goto L50be56;}
}
B50bd66:L50bd66:{c.instructions+=2;NFSU2_TR(0x50bd66);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x20ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50bd6a:{NFSU2_TR(0x50bd6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bd74;}}
}
B50bd6c:L50bd6c:{c.instructions+=2;NFSU2_TR(0x50bd6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50bd70:{NFSU2_TR(0x50bd70);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50bd74:L50bd74:{c.instructions+=2;NFSU2_TR(0x50bd74);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B50bd76:{NFSU2_TR(0x50bd76);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L50bd86;}}
}
B50bd78:L50bd78:{c.instructions+=2;NFSU2_TR(0x50bd78);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xa0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50bd7d:{NFSU2_TR(0x50bd7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bd86;}}
}
B50bd7f:L50bd7f:{c.instructions+=2;NFSU2_TR(0x50bd7f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B50bd81:{NFSU2_TR(0x50bd81);
w4(R+24,u32(0x20ull));
}
B50bd86:L50bd86:{c.instructions+=3;NFSU2_TR(0x50bd86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bd87:{NFSU2_TR(0x50bd87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bd88:{NFSU2_TR(0x50bd88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bd8dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ba70u);}goto L50ba70;}
}
B50bd8d:L50bd8d:{c.instructions+=3;NFSU2_TR(0x50bd8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50bd90:{NFSU2_TR(0x50bd90);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50bd92:{NFSU2_TR(0x50bd92);
if(r1(R+518)){{goto L50bda8;}}
}
B50bd94:L50bd94:{c.instructions+=4;NFSU2_TR(0x50bd94);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50bd98:{NFSU2_TR(0x50bd98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bd99:{NFSU2_TR(0x50bd99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bd9a:{NFSU2_TR(0x50bd9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bd9full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50bac0u);}goto L50bac0;}
}
B50bd9f:L50bd9f:{c.instructions+=4;NFSU2_TR(0x50bd9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50bda2:{NFSU2_TR(0x50bda2);
__builtin_memmove((R+28),(R+0),4);
}
B50bda4:{NFSU2_TR(0x50bda4);
w1(R+12,u8(0x1ull));
}
B50bda6:{NFSU2_TR(0x50bda6);
{goto L50be23;}
}
B50bda8:L50bda8:{c.instructions+=2;NFSU2_TR(0x50bda8);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(U+0))<(u16(0xff80ull))));
}
B50bdad:{NFSU2_TR(0x50bdad);
if(r1(R+512)){{goto L50bdb5;}}
}
B50bdaf:L50bdaf:{c.instructions+=1;NFSU2_TR(0x50bdaf);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
}
B50bdb5:L50bdb5:{c.instructions+=2;NFSU2_TR(0x50bdb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x99ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50bdba:{NFSU2_TR(0x50bdba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bdc3;}}
}
B50bdbc:L50bdbc:{c.instructions+=2;NFSU2_TR(0x50bdbc);
w4(R+24,u32(0x2122ull));
}
B50bdc1:{NFSU2_TR(0x50bdc1);
{goto L50bdcf;}
}
B50bdc3:L50bdc3:{c.instructions+=2;NFSU2_TR(0x50bdc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x9cull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50bdc8:{NFSU2_TR(0x50bdc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bdcf;}}
}
B50bdca:L50bdca:{c.instructions+=1;NFSU2_TR(0x50bdca);
w4(R+24,u32(0x153ull));
}
B50bdcf:L50bdcf:{c.instructions+=4;NFSU2_TR(0x50bdcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50bdd3:{NFSU2_TR(0x50bdd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50bdd6:{NFSU2_TR(0x50bdd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bdd7:{NFSU2_TR(0x50bdd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bddcull));
TAIL_STATIC(0x4fda70u,4fd);
}
B50bddc:L50bddc:{c.instructions+=3;NFSU2_TR(0x50bddc);
__builtin_memmove((R+24),(R+0),4);
}
B50bdde:{NFSU2_TR(0x50bdde);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50bde0:{NFSU2_TR(0x50bde0);
if(r1(R+518)){{goto L50be20;}}
}
B50bde2:L50bde2:{c.instructions+=2;NFSU2_TR(0x50bde2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50bde4:{NFSU2_TR(0x50bde4);
if(r1(R+518)){{goto L50be08;}}
}
B50bde6:L50bde6:{c.instructions+=7;NFSU2_TR(0x50bde6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50bdea:{NFSU2_TR(0x50bdea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50bded:{NFSU2_TR(0x50bded);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50bdef:{NFSU2_TR(0x50bdef);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B50bdf3:{NFSU2_TR(0x50bdf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bdf4:{NFSU2_TR(0x50bdf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bdf5:{NFSU2_TR(0x50bdf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bdfaull));
TAIL_STATIC(0x6f45f0u,6f4);
}
B50bdfa:L50bdfa:{c.instructions+=4;NFSU2_TR(0x50bdfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50bdfe:{NFSU2_TR(0x50bdfe);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50be02:{NFSU2_TR(0x50be02);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50be06:{NFSU2_TR(0x50be06);
{goto L50be0c;}
}
B50be08:L50be08:{c.instructions+=1;NFSU2_TR(0x50be08);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50be0c:L50be0c:{c.instructions+=6;NFSU2_TR(0x50be0c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B50be10:{NFSU2_TR(0x50be10);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50be14:{NFSU2_TR(0x50be14);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50be18:{NFSU2_TR(0x50be18);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B50be1a:{NFSU2_TR(0x50be1a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50be1e:{NFSU2_TR(0x50be1e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50be20:L50be20:{c.instructions+=1;NFSU2_TR(0x50be20);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B50be23:L50be23:{c.instructions+=3;NFSU2_TR(0x50be23);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50be27:{NFSU2_TR(0x50be27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50be29:{NFSU2_TR(0x50be29);
if(r1(R+518)){{goto L50be4e;}}
}
B50be2b:L50be2b:{c.instructions+=2;NFSU2_TR(0x50be2b);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B50be2f:{NFSU2_TR(0x50be2f);
if(r1(R+518)){{goto L50be4e;}}
}
B50be31:L50be31:{c.instructions+=4;NFSU2_TR(0x50be31);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B50be33:{NFSU2_TR(0x50be33);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50be37:{NFSU2_TR(0x50be37);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50be3b:{NFSU2_TR(0x50be3b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L50be43;}}
}
B50be3d:L50be3d:{c.instructions+=1;NFSU2_TR(0x50be3d);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50be43:L50be43:{c.instructions+=4;NFSU2_TR(0x50be43);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50be47:{NFSU2_TR(0x50be47);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50be49:{NFSU2_TR(0x50be49);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50be4c:{NFSU2_TR(0x50be4c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L50be71;}}
}
B50be4e:L50be4e:{c.instructions+=2;NFSU2_TR(0x50be4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50be52:{NFSU2_TR(0x50be52);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50be56:L50be56:{c.instructions+=4;NFSU2_TR(0x50be56);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+24),(U+0),2);
}
B50be59:{NFSU2_TR(0x50be59);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B50be5a:{NFSU2_TR(0x50be5a);
u8 U[2];
w2(U+0,u16(u32(r2(R+24))&u32(r2(R+24))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50be5d:{NFSU2_TR(0x50be5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50bd30u);}goto L50bd30;}}
}
B50be63:L50be63:{c.instructions+=7;NFSU2_TR(0x50be63);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50be67:{NFSU2_TR(0x50be67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50be68:{NFSU2_TR(0x50be68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50be69:{NFSU2_TR(0x50be69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50be6a:{NFSU2_TR(0x50be6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50be6b:{NFSU2_TR(0x50be6b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50be6e:{NFSU2_TR(0x50be6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50be71:L50be71:{c.instructions+=4;NFSU2_TR(0x50be71);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50be75:{NFSU2_TR(0x50be75);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50be79:{NFSU2_TR(0x50be79);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50be7c:{NFSU2_TR(0x50be7c);
if(r1(R+518)){{goto L50be84;}}
}
B50be7e:L50be7e:{c.instructions+=2;NFSU2_TR(0x50be7e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50be80:{NFSU2_TR(0x50be80);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50be84:L50be84:{c.instructions+=4;NFSU2_TR(0x50be84);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B50be8a:{NFSU2_TR(0x50be8a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50be8c:{NFSU2_TR(0x50be8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50be8f:{NFSU2_TR(0x50be8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50be97;}}
}
B50be91:L50be91:{c.instructions+=2;NFSU2_TR(0x50be91);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50be95:{NFSU2_TR(0x50be95);
{goto L50be99;}
}
B50be97:L50be97:{c.instructions+=1;NFSU2_TR(0x50be97);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50be99:L50be99:{c.instructions+=3;NFSU2_TR(0x50be99);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50be9d:{NFSU2_TR(0x50be9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50be9f:{NFSU2_TR(0x50be9f);
if(r1(R+518)){{goto L50bea4;}}
}
B50bea1:L50bea1:{c.instructions+=1;NFSU2_TR(0x50bea1);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+0)),r1(U+0));
}
B50bea4:L50bea4:{c.instructions+=7;NFSU2_TR(0x50bea4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50bea8:{NFSU2_TR(0x50bea8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50bea9:{NFSU2_TR(0x50bea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50beaa:{NFSU2_TR(0x50beaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50beab:{NFSU2_TR(0x50beab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50beac:{NFSU2_TR(0x50beac);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50beaf:{NFSU2_TR(0x50beaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50bec0:L50bec0:{c.instructions+=9;NFSU2_TR(0x50bec0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bec1:{NFSU2_TR(0x50bec1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50bec5:{NFSU2_TR(0x50bec5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bec6:{NFSU2_TR(0x50bec6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bec8:{NFSU2_TR(0x50bec8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50beca:{NFSU2_TR(0x50beca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50becc:{NFSU2_TR(0x50becc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50becd:{NFSU2_TR(0x50becd);
__builtin_memmove((R+28),(R+4),4);
}
B50becf:{NFSU2_TR(0x50becf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bed4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50bce0u);}goto L50bce0;}
}
B50bed4:L50bed4:{c.instructions+=5;NFSU2_TR(0x50bed4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50bed8:{NFSU2_TR(0x50bed8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B50bedb:{NFSU2_TR(0x50bedb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B50bede:{NFSU2_TR(0x50bede);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B50bee1:{NFSU2_TR(0x50bee1);
if(r1(R+518)){{goto L50bf2d;}}
}
B50bee3:L50bee3:{c.instructions+=4;NFSU2_TR(0x50bee3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bee4:{NFSU2_TR(0x50bee4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50bee8:{NFSU2_TR(0x50bee8);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x20ull))));
}
B50beeb:{NFSU2_TR(0x50beeb);
{goto L50bef0;}
}
B50bef0:L50bef0:{c.instructions+=2;NFSU2_TR(0x50bef0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50bef2:{NFSU2_TR(0x50bef2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bf00;}}
}
B50bef4:L50bef4:{c.instructions+=2;NFSU2_TR(0x50bef4);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xaull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bef8:{NFSU2_TR(0x50bef8);
if(r1(R+518)){{goto L50bf21;}}
}
B50befa:L50befa:{c.instructions+=2;NFSU2_TR(0x50befa);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x5eull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50befe:{NFSU2_TR(0x50befe);
if(r1(R+518)){{goto L50bf21;}}
}
B50bf00:L50bf00:{c.instructions+=6;NFSU2_TR(0x50bf00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bf02:{NFSU2_TR(0x50bf02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bf04:{NFSU2_TR(0x50bf04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bf06:{NFSU2_TR(0x50bf06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bf07:{NFSU2_TR(0x50bf07);
__builtin_memmove((R+4),(R+28),4);
}
B50bf09:{NFSU2_TR(0x50bf09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bf0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50bce0u);}goto L50bce0;}
}
B50bf0e:L50bf0e:{c.instructions+=4;NFSU2_TR(0x50bf0e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B50bf12:{NFSU2_TR(0x50bf12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50bf14:{NFSU2_TR(0x50bf14);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50bf17:{NFSU2_TR(0x50bf17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bf1f;}}
}
B50bf19:L50bf19:{c.instructions+=2;NFSU2_TR(0x50bf19);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50bf1d:{NFSU2_TR(0x50bf1d);
{goto L50bf21;}
}
B50bf1f:L50bf1f:{c.instructions+=1;NFSU2_TR(0x50bf1f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50bf21:L50bf21:{c.instructions+=4;NFSU2_TR(0x50bf21);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B50bf24:{NFSU2_TR(0x50bf24);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B50bf27:{NFSU2_TR(0x50bf27);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B50bf2a:{NFSU2_TR(0x50bf2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50bef0u);}goto L50bef0;}}
}
B50bf2c:L50bf2c:{c.instructions+=1;NFSU2_TR(0x50bf2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50bf2d:L50bf2d:{c.instructions+=4;NFSU2_TR(0x50bf2d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50bf31:{NFSU2_TR(0x50bf31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50bf32:{NFSU2_TR(0x50bf32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50bf33:{NFSU2_TR(0x50bf33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50bf40:L50bf40:{c.instructions+=7;NFSU2_TR(0x50bf40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bf41:{NFSU2_TR(0x50bf41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bf42:{NFSU2_TR(0x50bf42);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50bf46:{NFSU2_TR(0x50bf46);
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
B50bf48:{NFSU2_TR(0x50bf48);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bf49:{NFSU2_TR(0x50bf49);
__builtin_memmove((R+20),(R+4),4);
}
B50bf4b:{NFSU2_TR(0x50bf4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bf59;}}
}
B50bf4d:L50bf4d:{c.instructions+=5;NFSU2_TR(0x50bf4d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50bf53:{NFSU2_TR(0x50bf53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50bf54:{NFSU2_TR(0x50bf54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50bf55:{NFSU2_TR(0x50bf55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50bf56:{NFSU2_TR(0x50bf56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50bf59:L50bf59:{c.instructions+=6;NFSU2_TR(0x50bf59);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+0),(U+0),2);
}
B50bf5c:{NFSU2_TR(0x50bf5c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B50bf5f:{NFSU2_TR(0x50bf5f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B50bf62:{NFSU2_TR(0x50bf62);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50bf6a:{NFSU2_TR(0x50bf6a);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50bf6f:{NFSU2_TR(0x50bf6f);
if(r1(R+518)){TAIL_STATIC(0x50c00au,50c);}
}
B50bf75:L50bf75:{c.instructions+=2;NFSU2_TR(0x50bf75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bf76:{NFSU2_TR(0x50bf76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bf77:L50bf77:{c.instructions+=2;NFSU2_TR(0x50bf77);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xaull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bf7b:{NFSU2_TR(0x50bf7b);
if(r1(R+518)){{goto L50bf83;}}
}
B50bf7d:L50bf7d:{c.instructions+=2;NFSU2_TR(0x50bf7d);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x5eull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bf81:{NFSU2_TR(0x50bf81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bf99;}}
}
B50bf83:L50bf83:{c.instructions+=6;NFSU2_TR(0x50bf83);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50bf87:{NFSU2_TR(0x50bf87);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50bf8c:{NFSU2_TR(0x50bf8c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50bf90:{NFSU2_TR(0x50bf90);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50bf93:{NFSU2_TR(0x50bf93);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50bf97:{NFSU2_TR(0x50bf97);
{goto L50bff1;}
}
B50bf99:L50bf99:{c.instructions+=2;NFSU2_TR(0x50bf99);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xdull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bf9d:{NFSU2_TR(0x50bf9d);
if(r1(R+518)){{goto L50bff1;}}
}
B50bf9f:L50bf9f:{c.instructions+=16;NFSU2_TR(0x50bf9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50bfa2:{NFSU2_TR(0x50bfa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50bfa5:{NFSU2_TR(0x50bfa5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B50bfaa:{NFSU2_TR(0x50bfaa);
__builtin_memmove((R+28),(R+0),4);
}
B50bfac:{NFSU2_TR(0x50bfac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50bfaf:{NFSU2_TR(0x50bfaf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x40000ull))));
}
B50bfb4:{NFSU2_TR(0x50bfb4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B50bfb6:{NFSU2_TR(0x50bfb6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B50bfba:{NFSU2_TR(0x50bfba);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B50bfbc:{NFSU2_TR(0x50bfbc);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B50bfbe:{NFSU2_TR(0x50bfbe);
w4(R+24,u32(r2(R+28)));
}
B50bfc1:{NFSU2_TR(0x50bfc1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B50bfc4:{NFSU2_TR(0x50bfc4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
}
B50bfc7:{NFSU2_TR(0x50bfc7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B50bfca:{NFSU2_TR(0x50bfca);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50bfcc:{NFSU2_TR(0x50bfcc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L50bfdc;}}
}
B50bfce:L50bfce:{c.instructions+=4;NFSU2_TR(0x50bfce);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B50bfd1:{NFSU2_TR(0x50bfd1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B50bfd3:{NFSU2_TR(0x50bfd3);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+28))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B50bfd6:{NFSU2_TR(0x50bfd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50bfdc;}}
}
B50bfd8:L50bfd8:{c.instructions+=2;NFSU2_TR(0x50bfd8);
__builtin_memmove((R+0),(R+24),4);
}
B50bfda:{NFSU2_TR(0x50bfda);
{goto L50bfe8;}
}
B50bfdc:L50bfdc:{c.instructions+=5;NFSU2_TR(0x50bfdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bfdd:{NFSU2_TR(0x50bfdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bfde:{NFSU2_TR(0x50bfde);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bfdf:{NFSU2_TR(0x50bfdf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50bfe0:{NFSU2_TR(0x50bfe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50bfe5ull));
TAIL_STATIC(0x6f45b0u,6f4);
}
B50bfe5:L50bfe5:{c.instructions+=1;NFSU2_TR(0x50bfe5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B50bfe8:L50bfe8:{c.instructions+=2;NFSU2_TR(0x50bfe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50bfea:{NFSU2_TR(0x50bfea);
if(r1(R+518)){{goto L50bff1;}}
}
B50bfec:L50bfec:{c.instructions+=1;NFSU2_TR(0x50bfec);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50bff1:L50bff1:{c.instructions+=4;NFSU2_TR(0x50bff1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+0),(U+0),2);
}
B50bff4:{NFSU2_TR(0x50bff4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B50bff7:{NFSU2_TR(0x50bff7);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50bffa:{NFSU2_TR(0x50bffa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50bf77u);}goto L50bf77;}}
TAIL_STATIC(0x50c000u,50c);
}
XIT:NFSU2_TR_EXIT(0x50b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
