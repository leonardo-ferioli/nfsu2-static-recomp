#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_49c(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_49f(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4a1(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4bd(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_603(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4bc,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4bc,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4bc(u8* __restrict R,Cpu& c);
u32 page_4bc(Cpu& c){return body_4bc(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4bc(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4bc010:goto L4bc010;
case 0x4bc011:c.instructions+=4;goto B4bc011;
case 0x4bc013:c.instructions+=3;goto B4bc013;
case 0x4bc016:c.instructions+=2;goto B4bc016;
case 0x4bc018:c.instructions+=1;goto B4bc018;
case 0x4bc01e:goto L4bc01e;
case 0x4bc01f:c.instructions+=6;goto B4bc01f;
case 0x4bc020:c.instructions+=5;goto B4bc020;
case 0x4bc021:c.instructions+=4;goto B4bc021;
case 0x4bc024:c.instructions+=3;goto B4bc024;
case 0x4bc025:c.instructions+=2;goto B4bc025;
case 0x4bc027:c.instructions+=1;goto B4bc027;
case 0x4bc02c:goto L4bc02c;
case 0x4bc030:c.instructions+=5;goto B4bc030;
case 0x4bc033:c.instructions+=4;goto B4bc033;
case 0x4bc035:c.instructions+=3;goto B4bc035;
case 0x4bc037:c.instructions+=2;goto B4bc037;
case 0x4bc039:c.instructions+=1;goto B4bc039;
case 0x4bc03b:goto L4bc03b;
case 0x4bc040:goto L4bc040;
case 0x4bc043:c.instructions+=1;goto B4bc043;
case 0x4bc045:goto L4bc045;
case 0x4bc048:c.instructions+=3;goto B4bc048;
case 0x4bc049:c.instructions+=2;goto B4bc049;
case 0x4bc04b:c.instructions+=1;goto B4bc04b;
case 0x4bc04d:goto L4bc04d;
case 0x4bc04e:c.instructions+=2;goto B4bc04e;
case 0x4bc050:c.instructions+=1;goto B4bc050;
case 0x4bc052:goto L4bc052;
case 0x4bc054:c.instructions+=3;goto B4bc054;
case 0x4bc056:c.instructions+=2;goto B4bc056;
case 0x4bc058:c.instructions+=1;goto B4bc058;
case 0x4bc05a:goto L4bc05a;
case 0x4bc060:goto L4bc060;
case 0x4bc062:c.instructions+=3;goto B4bc062;
case 0x4bc063:c.instructions+=2;goto B4bc063;
case 0x4bc065:c.instructions+=1;goto B4bc065;
case 0x4bc067:goto L4bc067;
case 0x4bc068:c.instructions+=2;goto B4bc068;
case 0x4bc06b:c.instructions+=1;goto B4bc06b;
case 0x4bc06d:goto L4bc06d;
case 0x4bc06f:c.instructions+=1;goto B4bc06f;
case 0x4bc071:goto L4bc071;
case 0x4bc073:c.instructions+=7;goto B4bc073;
case 0x4bc074:c.instructions+=6;goto B4bc074;
case 0x4bc075:c.instructions+=5;goto B4bc075;
case 0x4bc076:c.instructions+=4;goto B4bc076;
case 0x4bc077:c.instructions+=3;goto B4bc077;
case 0x4bc07a:c.instructions+=2;goto B4bc07a;
case 0x4bc07d:c.instructions+=1;goto B4bc07d;
case 0x4bc082:goto L4bc082;
case 0x4bc083:c.instructions+=1;goto B4bc083;
case 0x4bc088:goto L4bc088;
case 0x4bc08b:c.instructions+=12;goto B4bc08b;
case 0x4bc092:c.instructions+=11;goto B4bc092;
case 0x4bc095:c.instructions+=10;goto B4bc095;
case 0x4bc098:c.instructions+=9;goto B4bc098;
case 0x4bc09b:c.instructions+=8;goto B4bc09b;
case 0x4bc09d:c.instructions+=7;goto B4bc09d;
case 0x4bc09f:c.instructions+=6;goto B4bc09f;
case 0x4bc0a0:c.instructions+=5;goto B4bc0a0;
case 0x4bc0a1:c.instructions+=4;goto B4bc0a1;
case 0x4bc0a4:c.instructions+=3;goto B4bc0a4;
case 0x4bc0a5:c.instructions+=2;goto B4bc0a5;
case 0x4bc0a6:c.instructions+=1;goto B4bc0a6;
case 0x4bc0a8:goto L4bc0a8;
case 0x4bc0ad:goto L4bc0ad;
case 0x4bc0ae:c.instructions+=4;goto B4bc0ae;
case 0x4bc0af:c.instructions+=3;goto B4bc0af;
case 0x4bc0b1:c.instructions+=2;goto B4bc0b1;
case 0x4bc0b4:c.instructions+=1;goto B4bc0b4;
case 0x4bc0b9:goto L4bc0b9;
case 0x4bc0ba:c.instructions+=1;goto B4bc0ba;
case 0x4bc0c0:goto L4bc0c0;
case 0x4bc0c1:c.instructions+=6;goto B4bc0c1;
case 0x4bc0c2:c.instructions+=5;goto B4bc0c2;
case 0x4bc0c6:c.instructions+=4;goto B4bc0c6;
case 0x4bc0c9:c.instructions+=3;goto B4bc0c9;
case 0x4bc0ca:c.instructions+=2;goto B4bc0ca;
case 0x4bc0cc:c.instructions+=1;goto B4bc0cc;
case 0x4bc0ce:goto L4bc0ce;
case 0x4bc0d0:goto L4bc0d0;
case 0x4bc0d1:c.instructions+=2;goto B4bc0d1;
case 0x4bc0d3:c.instructions+=1;goto B4bc0d3;
case 0x4bc0d8:goto L4bc0d8;
case 0x4bc0da:c.instructions+=3;goto B4bc0da;
case 0x4bc0dd:c.instructions+=2;goto B4bc0dd;
case 0x4bc0e2:c.instructions+=1;goto B4bc0e2;
case 0x4bc0e4:goto L4bc0e4;
case 0x4bc0e5:c.instructions+=3;goto B4bc0e5;
case 0x4bc0e6:c.instructions+=2;goto B4bc0e6;
case 0x4bc0e8:c.instructions+=1;goto B4bc0e8;
case 0x4bc0ed:goto L4bc0ed;
case 0x4bc0f0:c.instructions+=3;goto B4bc0f0;
case 0x4bc0f2:c.instructions+=2;goto B4bc0f2;
case 0x4bc0f4:c.instructions+=1;goto B4bc0f4;
case 0x4bc0f6:goto L4bc0f6;
case 0x4bc0f9:c.instructions+=3;goto B4bc0f9;
case 0x4bc0fa:c.instructions+=2;goto B4bc0fa;
case 0x4bc0fc:c.instructions+=1;goto B4bc0fc;
case 0x4bc0fe:goto L4bc0fe;
case 0x4bc101:c.instructions+=1;goto B4bc101;
case 0x4bc103:goto L4bc103;
case 0x4bc105:c.instructions+=1;goto B4bc105;
case 0x4bc10a:goto L4bc10a;
case 0x4bc10b:c.instructions+=3;goto B4bc10b;
case 0x4bc10c:c.instructions+=2;goto B4bc10c;
case 0x4bc10d:c.instructions+=1;goto B4bc10d;
case 0x4bc110:goto L4bc110;
case 0x4bc114:c.instructions+=3;goto B4bc114;
case 0x4bc118:c.instructions+=2;goto B4bc118;
case 0x4bc119:c.instructions+=1;goto B4bc119;
case 0x4bc11e:goto L4bc11e;
case 0x4bc120:goto L4bc120;
case 0x4bc121:c.instructions+=4;goto B4bc121;
case 0x4bc123:c.instructions+=3;goto B4bc123;
case 0x4bc126:c.instructions+=2;goto B4bc126;
case 0x4bc129:c.instructions+=1;goto B4bc129;
case 0x4bc12b:goto L4bc12b;
case 0x4bc12d:c.instructions+=4;goto B4bc12d;
case 0x4bc12f:c.instructions+=3;goto B4bc12f;
case 0x4bc134:c.instructions+=2;goto B4bc134;
case 0x4bc135:c.instructions+=1;goto B4bc135;
case 0x4bc13a:goto L4bc13a;
case 0x4bc13d:c.instructions+=6;goto B4bc13d;
case 0x4bc140:c.instructions+=5;goto B4bc140;
case 0x4bc141:c.instructions+=4;goto B4bc141;
case 0x4bc144:c.instructions+=3;goto B4bc144;
case 0x4bc146:c.instructions+=2;goto B4bc146;
case 0x4bc147:c.instructions+=1;goto B4bc147;
case 0x4bc14c:goto L4bc14c;
case 0x4bc14d:c.instructions+=1;goto B4bc14d;
case 0x4bc150:goto L4bc150;
case 0x4bc151:c.instructions+=3;goto B4bc151;
case 0x4bc153:c.instructions+=2;goto B4bc153;
case 0x4bc157:c.instructions+=1;goto B4bc157;
case 0x4bc159:goto L4bc159;
case 0x4bc15c:c.instructions+=4;goto B4bc15c;
case 0x4bc15e:c.instructions+=3;goto B4bc15e;
case 0x4bc163:c.instructions+=2;goto B4bc163;
case 0x4bc164:c.instructions+=1;goto B4bc164;
case 0x4bc169:goto L4bc169;
case 0x4bc16c:c.instructions+=6;goto B4bc16c;
case 0x4bc16f:c.instructions+=5;goto B4bc16f;
case 0x4bc170:c.instructions+=4;goto B4bc170;
case 0x4bc173:c.instructions+=3;goto B4bc173;
case 0x4bc175:c.instructions+=2;goto B4bc175;
case 0x4bc176:c.instructions+=1;goto B4bc176;
case 0x4bc17b:goto L4bc17b;
case 0x4bc17c:c.instructions+=1;goto B4bc17c;
case 0x4bc180:goto L4bc180;
case 0x4bc184:c.instructions+=9;goto B4bc184;
case 0x4bc187:c.instructions+=8;goto B4bc187;
case 0x4bc18a:c.instructions+=7;goto B4bc18a;
case 0x4bc18c:c.instructions+=6;goto B4bc18c;
case 0x4bc18d:c.instructions+=5;goto B4bc18d;
case 0x4bc193:c.instructions+=4;goto B4bc193;
case 0x4bc194:c.instructions+=3;goto B4bc194;
case 0x4bc195:c.instructions+=2;goto B4bc195;
case 0x4bc196:c.instructions+=1;goto B4bc196;
case 0x4bc19b:goto L4bc19b;
case 0x4bc19e:c.instructions+=1;goto B4bc19e;
case 0x4bc1a0:goto L4bc1a0;
case 0x4bc1a5:c.instructions+=2;goto B4bc1a5;
case 0x4bc1a7:c.instructions+=1;goto B4bc1a7;
case 0x4bc1ad:goto L4bc1ad;
case 0x4bc1ae:c.instructions+=4;goto B4bc1ae;
case 0x4bc1af:c.instructions+=3;goto B4bc1af;
case 0x4bc1b0:c.instructions+=2;goto B4bc1b0;
case 0x4bc1b1:c.instructions+=1;goto B4bc1b1;
case 0x4bc1b6:goto L4bc1b6;
case 0x4bc1b8:c.instructions+=1;goto B4bc1b8;
case 0x4bc1bd:goto L4bc1bd;
case 0x4bc1bf:c.instructions+=2;goto B4bc1bf;
case 0x4bc1c4:c.instructions+=1;goto B4bc1c4;
case 0x4bc1c9:goto L4bc1c9;
case 0x4bc1cd:c.instructions+=4;goto B4bc1cd;
case 0x4bc1d0:c.instructions+=3;goto B4bc1d0;
case 0x4bc1d3:c.instructions+=2;goto B4bc1d3;
case 0x4bc1d5:c.instructions+=1;goto B4bc1d5;
case 0x4bc1d7:goto L4bc1d7;
case 0x4bc1d9:c.instructions+=1;goto B4bc1d9;
case 0x4bc1db:goto L4bc1db;
case 0x4bc1dc:c.instructions+=1;goto B4bc1dc;
case 0x4bc1e1:goto L4bc1e1;
case 0x4bc1e4:c.instructions+=1;goto B4bc1e4;
case 0x4bc1e6:goto L4bc1e6;
case 0x4bc1eb:c.instructions+=4;goto B4bc1eb;
case 0x4bc1ef:c.instructions+=3;goto B4bc1ef;
case 0x4bc1f4:c.instructions+=2;goto B4bc1f4;
case 0x4bc1f6:c.instructions+=1;goto B4bc1f6;
case 0x4bc1f8:goto L4bc1f8;
case 0x4bc1fe:c.instructions+=4;goto B4bc1fe;
case 0x4bc204:c.instructions+=3;goto B4bc204;
case 0x4bc207:c.instructions+=2;goto B4bc207;
case 0x4bc20c:c.instructions+=1;goto B4bc20c;
case 0x4bc212:goto L4bc212;
case 0x4bc217:c.instructions+=5;goto B4bc217;
case 0x4bc219:c.instructions+=4;goto B4bc219;
case 0x4bc21f:c.instructions+=3;goto B4bc21f;
case 0x4bc225:c.instructions+=2;goto B4bc225;
case 0x4bc22b:c.instructions+=1;goto B4bc22b;
case 0x4bc22d:goto L4bc22d;
case 0x4bc237:c.instructions+=2;goto B4bc237;
case 0x4bc241:c.instructions+=1;goto B4bc241;
case 0x4bc243:goto L4bc243;
case 0x4bc248:goto L4bc248;
case 0x4bc24b:c.instructions+=5;goto B4bc24b;
case 0x4bc24c:c.instructions+=4;goto B4bc24c;
case 0x4bc24d:c.instructions+=3;goto B4bc24d;
case 0x4bc24e:c.instructions+=2;goto B4bc24e;
case 0x4bc24f:c.instructions+=1;goto B4bc24f;
case 0x4bc254:goto L4bc254;
case 0x4bc257:goto L4bc257;
case 0x4bc259:c.instructions+=2;goto B4bc259;
case 0x4bc25e:c.instructions+=1;goto B4bc25e;
case 0x4bc263:goto L4bc263;
case 0x4bc264:c.instructions+=4;goto B4bc264;
case 0x4bc265:c.instructions+=3;goto B4bc265;
case 0x4bc266:c.instructions+=2;goto B4bc266;
case 0x4bc26c:c.instructions+=1;goto B4bc26c;
case 0x4bc26d:goto L4bc26d;
case 0x4bc270:goto L4bc270;
case 0x4bc272:c.instructions+=2;goto B4bc272;
case 0x4bc277:c.instructions+=1;goto B4bc277;
case 0x4bc27c:goto L4bc27c;
case 0x4bc27f:c.instructions+=1;goto B4bc27f;
case 0x4bc284:goto L4bc284;
case 0x4bc286:c.instructions+=1;goto B4bc286;
case 0x4bc28b:goto L4bc28b;
case 0x4bc290:c.instructions+=5;goto B4bc290;
case 0x4bc295:c.instructions+=4;goto B4bc295;
case 0x4bc29a:c.instructions+=3;goto B4bc29a;
case 0x4bc29c:c.instructions+=2;goto B4bc29c;
case 0x4bc2a3:c.instructions+=1;goto B4bc2a3;
case 0x4bc2a5:goto L4bc2a5;
case 0x4bc2a7:c.instructions+=4;goto B4bc2a7;
case 0x4bc2ac:c.instructions+=3;goto B4bc2ac;
case 0x4bc2b6:c.instructions+=2;goto B4bc2b6;
case 0x4bc2c0:c.instructions+=1;goto B4bc2c0;
case 0x4bc2c5:goto L4bc2c5;
case 0x4bc2cc:c.instructions+=1;goto B4bc2cc;
case 0x4bc2cd:goto L4bc2cd;
case 0x4bc2cf:c.instructions+=3;goto B4bc2cf;
case 0x4bc2d4:c.instructions+=2;goto B4bc2d4;
case 0x4bc2d6:c.instructions+=1;goto B4bc2d6;
case 0x4bc2db:goto L4bc2db;
case 0x4bc2de:c.instructions+=3;goto B4bc2de;
case 0x4bc2e0:c.instructions+=2;goto B4bc2e0;
case 0x4bc2e5:c.instructions+=1;goto B4bc2e5;
case 0x4bc2ea:goto L4bc2ea;
case 0x4bc2f1:c.instructions+=1;goto B4bc2f1;
case 0x4bc300:goto L4bc300;
case 0x4bc302:c.instructions+=12;goto B4bc302;
case 0x4bc307:c.instructions+=11;goto B4bc307;
case 0x4bc30d:c.instructions+=10;goto B4bc30d;
case 0x4bc30e:c.instructions+=9;goto B4bc30e;
case 0x4bc315:c.instructions+=8;goto B4bc315;
case 0x4bc318:c.instructions+=7;goto B4bc318;
case 0x4bc31c:c.instructions+=6;goto B4bc31c;
case 0x4bc31d:c.instructions+=5;goto B4bc31d;
case 0x4bc31e:c.instructions+=4;goto B4bc31e;
case 0x4bc320:c.instructions+=3;goto B4bc320;
case 0x4bc321:c.instructions+=2;goto B4bc321;
case 0x4bc325:c.instructions+=1;goto B4bc325;
case 0x4bc32a:goto L4bc32a;
case 0x4bc32c:c.instructions+=10;goto B4bc32c;
case 0x4bc32d:c.instructions+=9;goto B4bc32d;
case 0x4bc331:c.instructions+=8;goto B4bc331;
case 0x4bc337:c.instructions+=7;goto B4bc337;
case 0x4bc33a:c.instructions+=6;goto B4bc33a;
case 0x4bc33d:c.instructions+=5;goto B4bc33d;
case 0x4bc340:c.instructions+=4;goto B4bc340;
case 0x4bc345:c.instructions+=3;goto B4bc345;
case 0x4bc349:c.instructions+=2;goto B4bc349;
case 0x4bc34a:c.instructions+=1;goto B4bc34a;
case 0x4bc350:goto L4bc350;
case 0x4bc357:c.instructions+=2;goto B4bc357;
case 0x4bc359:c.instructions+=1;goto B4bc359;
case 0x4bc35f:goto L4bc35f;
case 0x4bc360:c.instructions+=2;goto B4bc360;
case 0x4bc365:c.instructions+=1;goto B4bc365;
case 0x4bc36a:goto L4bc36a;
case 0x4bc36c:c.instructions+=2;goto B4bc36c;
case 0x4bc36e:c.instructions+=1;goto B4bc36e;
case 0x4bc373:goto L4bc373;
case 0x4bc376:c.instructions+=6;goto B4bc376;
case 0x4bc377:c.instructions+=5;goto B4bc377;
case 0x4bc37c:c.instructions+=4;goto B4bc37c;
case 0x4bc380:c.instructions+=3;goto B4bc380;
case 0x4bc382:c.instructions+=2;goto B4bc382;
case 0x4bc383:c.instructions+=1;goto B4bc383;
case 0x4bc388:goto L4bc388;
case 0x4bc38b:c.instructions+=6;goto B4bc38b;
case 0x4bc38e:c.instructions+=5;goto B4bc38e;
case 0x4bc38f:c.instructions+=4;goto B4bc38f;
case 0x4bc393:c.instructions+=3;goto B4bc393;
case 0x4bc394:c.instructions+=2;goto B4bc394;
case 0x4bc395:c.instructions+=1;goto B4bc395;
case 0x4bc39a:goto L4bc39a;
case 0x4bc39b:c.instructions+=5;goto B4bc39b;
case 0x4bc3a0:c.instructions+=4;goto B4bc3a0;
case 0x4bc3a4:c.instructions+=3;goto B4bc3a4;
case 0x4bc3a6:c.instructions+=2;goto B4bc3a6;
case 0x4bc3a7:c.instructions+=1;goto B4bc3a7;
case 0x4bc3ac:goto L4bc3ac;
case 0x4bc3ad:c.instructions+=2;goto B4bc3ad;
case 0x4bc3b2:c.instructions+=1;goto B4bc3b2;
case 0x4bc3b7:goto L4bc3b7;
case 0x4bc3ba:c.instructions+=5;goto B4bc3ba;
case 0x4bc3bd:c.instructions+=4;goto B4bc3bd;
case 0x4bc3be:c.instructions+=3;goto B4bc3be;
case 0x4bc3c2:c.instructions+=2;goto B4bc3c2;
case 0x4bc3c3:c.instructions+=1;goto B4bc3c3;
case 0x4bc3c8:goto L4bc3c8;
case 0x4bc3c9:c.instructions+=2;goto B4bc3c9;
case 0x4bc3ca:c.instructions+=1;goto B4bc3ca;
case 0x4bc3cf:goto L4bc3cf;
case 0x4bc3d2:c.instructions+=2;goto B4bc3d2;
case 0x4bc3d3:c.instructions+=1;goto B4bc3d3;
case 0x4bc3d8:goto L4bc3d8;
case 0x4bc3d9:c.instructions+=5;goto B4bc3d9;
case 0x4bc3de:c.instructions+=4;goto B4bc3de;
case 0x4bc3e2:c.instructions+=3;goto B4bc3e2;
case 0x4bc3e4:c.instructions+=2;goto B4bc3e4;
case 0x4bc3e5:c.instructions+=1;goto B4bc3e5;
case 0x4bc3ea:goto L4bc3ea;
case 0x4bc3ed:c.instructions+=5;goto B4bc3ed;
case 0x4bc3f2:c.instructions+=4;goto B4bc3f2;
case 0x4bc3f6:c.instructions+=3;goto B4bc3f6;
case 0x4bc3f7:c.instructions+=2;goto B4bc3f7;
case 0x4bc3f8:c.instructions+=1;goto B4bc3f8;
case 0x4bc3fd:goto L4bc3fd;
case 0x4bc401:c.instructions+=2;goto B4bc401;
case 0x4bc404:c.instructions+=1;goto B4bc404;
case 0x4bc405:goto L4bc405;
case 0x4bc406:c.instructions+=3;goto B4bc406;
case 0x4bc409:c.instructions+=2;goto B4bc409;
case 0x4bc40d:c.instructions+=1;goto B4bc40d;
case 0x4bc413:goto L4bc413;
case 0x4bc416:c.instructions+=3;goto B4bc416;
case 0x4bc417:c.instructions+=2;goto B4bc417;
case 0x4bc418:c.instructions+=1;goto B4bc418;
case 0x4bc41e:goto L4bc41e;
case 0x4bc420:goto L4bc420;
case 0x4bc421:c.instructions+=5;goto B4bc421;
case 0x4bc426:c.instructions+=4;goto B4bc426;
case 0x4bc42a:c.instructions+=3;goto B4bc42a;
case 0x4bc42c:c.instructions+=2;goto B4bc42c;
case 0x4bc42d:c.instructions+=1;goto B4bc42d;
case 0x4bc432:goto L4bc432;
case 0x4bc435:c.instructions+=5;goto B4bc435;
case 0x4bc43a:c.instructions+=4;goto B4bc43a;
case 0x4bc43e:c.instructions+=3;goto B4bc43e;
case 0x4bc43f:c.instructions+=2;goto B4bc43f;
case 0x4bc440:c.instructions+=1;goto B4bc440;
case 0x4bc445:goto L4bc445;
case 0x4bc446:c.instructions+=5;goto B4bc446;
case 0x4bc44b:c.instructions+=4;goto B4bc44b;
case 0x4bc44f:c.instructions+=3;goto B4bc44f;
case 0x4bc451:c.instructions+=2;goto B4bc451;
case 0x4bc452:c.instructions+=1;goto B4bc452;
case 0x4bc457:goto L4bc457;
case 0x4bc45a:c.instructions+=5;goto B4bc45a;
case 0x4bc45f:c.instructions+=4;goto B4bc45f;
case 0x4bc463:c.instructions+=3;goto B4bc463;
case 0x4bc464:c.instructions+=2;goto B4bc464;
case 0x4bc465:c.instructions+=1;goto B4bc465;
case 0x4bc46a:goto L4bc46a;
case 0x4bc46b:c.instructions+=5;goto B4bc46b;
case 0x4bc470:c.instructions+=4;goto B4bc470;
case 0x4bc474:c.instructions+=3;goto B4bc474;
case 0x4bc476:c.instructions+=2;goto B4bc476;
case 0x4bc477:c.instructions+=1;goto B4bc477;
case 0x4bc47c:goto L4bc47c;
case 0x4bc47f:c.instructions+=6;goto B4bc47f;
case 0x4bc482:c.instructions+=5;goto B4bc482;
case 0x4bc487:c.instructions+=4;goto B4bc487;
case 0x4bc48b:c.instructions+=3;goto B4bc48b;
case 0x4bc48c:c.instructions+=2;goto B4bc48c;
case 0x4bc48d:c.instructions+=1;goto B4bc48d;
case 0x4bc492:goto L4bc492;
case 0x4bc495:c.instructions+=3;goto B4bc495;
case 0x4bc496:c.instructions+=2;goto B4bc496;
case 0x4bc499:c.instructions+=1;goto B4bc499;
case 0x4bc49b:goto L4bc49b;
case 0x4bc4a0:goto L4bc4a0;
case 0x4bc4a1:c.instructions+=5;goto B4bc4a1;
case 0x4bc4a6:c.instructions+=4;goto B4bc4a6;
case 0x4bc4aa:c.instructions+=3;goto B4bc4aa;
case 0x4bc4ac:c.instructions+=2;goto B4bc4ac;
case 0x4bc4ad:c.instructions+=1;goto B4bc4ad;
case 0x4bc4b2:goto L4bc4b2;
case 0x4bc4b5:c.instructions+=5;goto B4bc4b5;
case 0x4bc4ba:c.instructions+=4;goto B4bc4ba;
case 0x4bc4be:c.instructions+=3;goto B4bc4be;
case 0x4bc4bf:c.instructions+=2;goto B4bc4bf;
case 0x4bc4c0:c.instructions+=1;goto B4bc4c0;
case 0x4bc4c5:goto L4bc4c5;
case 0x4bc4c8:c.instructions+=3;goto B4bc4c8;
case 0x4bc4c9:c.instructions+=2;goto B4bc4c9;
case 0x4bc4cc:c.instructions+=1;goto B4bc4cc;
case 0x4bc4ce:goto L4bc4ce;
case 0x4bc4d0:c.instructions+=1;goto B4bc4d0;
case 0x4bc4d5:goto L4bc4d5;
case 0x4bc4d9:c.instructions+=6;goto B4bc4d9;
case 0x4bc4db:c.instructions+=5;goto B4bc4db;
case 0x4bc4dc:c.instructions+=4;goto B4bc4dc;
case 0x4bc4dd:c.instructions+=3;goto B4bc4dd;
case 0x4bc4e4:c.instructions+=2;goto B4bc4e4;
case 0x4bc4e7:c.instructions+=1;goto B4bc4e7;
case 0x4bc4f0:goto L4bc4f0;
case 0x4bc4f1:c.instructions+=2;goto B4bc4f1;
case 0x4bc4f3:c.instructions+=1;goto B4bc4f3;
case 0x4bc4f8:goto L4bc4f8;
case 0x4bc4fd:c.instructions+=1;goto B4bc4fd;
case 0x4bc4ff:goto L4bc4ff;
case 0x4bc500:c.instructions+=1;goto B4bc500;
case 0x4bc505:goto L4bc505;
case 0x4bc508:goto L4bc508;
case 0x4bc50a:c.instructions+=2;goto B4bc50a;
case 0x4bc50b:c.instructions+=1;goto B4bc50b;
case 0x4bc510:goto L4bc510;
case 0x4bc516:c.instructions+=1;goto B4bc516;
case 0x4bc520:goto L4bc520;
case 0x4bc524:c.instructions+=4;goto B4bc524;
case 0x4bc529:c.instructions+=3;goto B4bc529;
case 0x4bc52a:c.instructions+=2;goto B4bc52a;
case 0x4bc52c:c.instructions+=1;goto B4bc52c;
case 0x4bc52e:goto L4bc52e;
case 0x4bc533:c.instructions+=1;goto B4bc533;
case 0x4bc539:goto L4bc539;
case 0x4bc540:c.instructions+=1;goto B4bc540;
case 0x4bc542:goto L4bc542;
case 0x4bc547:c.instructions+=1;goto B4bc547;
case 0x4bc54c:goto L4bc54c;
case 0x4bc54f:c.instructions+=2;goto B4bc54f;
case 0x4bc550:c.instructions+=1;goto B4bc550;
case 0x4bc553:goto L4bc553;
case 0x4bc555:c.instructions+=1;goto B4bc555;
case 0x4bc55a:goto L4bc55a;
case 0x4bc55d:c.instructions+=5;goto B4bc55d;
case 0x4bc55e:c.instructions+=4;goto B4bc55e;
case 0x4bc560:c.instructions+=3;goto B4bc560;
case 0x4bc563:c.instructions+=2;goto B4bc563;
case 0x4bc566:c.instructions+=1;goto B4bc566;
case 0x4bc568:goto L4bc568;
case 0x4bc56d:c.instructions+=1;goto B4bc56d;
case 0x4bc572:goto L4bc572;
case 0x4bc574:c.instructions+=1;goto B4bc574;
case 0x4bc576:goto L4bc576;
case 0x4bc579:c.instructions+=2;goto B4bc579;
case 0x4bc57b:c.instructions+=1;goto B4bc57b;
case 0x4bc57d:goto L4bc57d;
case 0x4bc580:c.instructions+=2;goto B4bc580;
case 0x4bc581:c.instructions+=1;goto B4bc581;
case 0x4bc586:goto L4bc586;
case 0x4bc589:c.instructions+=3;goto B4bc589;
case 0x4bc58c:c.instructions+=2;goto B4bc58c;
case 0x4bc58d:c.instructions+=1;goto B4bc58d;
case 0x4bc590:goto L4bc590;
case 0x4bc592:c.instructions+=2;goto B4bc592;
case 0x4bc597:c.instructions+=1;goto B4bc597;
case 0x4bc59c:goto L4bc59c;
case 0x4bc59d:c.instructions+=1;goto B4bc59d;
case 0x4bc5a2:goto L4bc5a2;
case 0x4bc5a5:c.instructions+=3;goto B4bc5a5;
case 0x4bc5a7:c.instructions+=2;goto B4bc5a7;
case 0x4bc5ac:c.instructions+=1;goto B4bc5ac;
case 0x4bc5b1:goto L4bc5b1;
case 0x4bc5bb:c.instructions+=3;goto B4bc5bb;
case 0x4bc5be:c.instructions+=2;goto B4bc5be;
case 0x4bc5bf:c.instructions+=1;goto B4bc5bf;
case 0x4bc5c4:goto L4bc5c4;
case 0x4bc5ca:c.instructions+=2;goto B4bc5ca;
case 0x4bc5cd:c.instructions+=1;goto B4bc5cd;
case 0x4bc5d2:goto L4bc5d2;
case 0x4bc5d3:c.instructions+=1;goto B4bc5d3;
case 0x4bc5e0:goto L4bc5e0;
case 0x4bc5e5:c.instructions+=3;goto B4bc5e5;
case 0x4bc5eb:c.instructions+=2;goto B4bc5eb;
case 0x4bc5ec:c.instructions+=1;goto B4bc5ec;
case 0x4bc5f1:goto L4bc5f1;
case 0x4bc5f8:c.instructions+=3;goto B4bc5f8;
case 0x4bc5fb:c.instructions+=2;goto B4bc5fb;
case 0x4bc600:c.instructions+=1;goto B4bc600;
case 0x4bc606:goto L4bc606;
case 0x4bc60b:c.instructions+=2;goto B4bc60b;
case 0x4bc60d:c.instructions+=1;goto B4bc60d;
case 0x4bc613:goto L4bc613;
case 0x4bc61a:c.instructions+=1;goto B4bc61a;
case 0x4bc61f:goto L4bc61f;
case 0x4bc621:c.instructions+=1;goto B4bc621;
case 0x4bc626:goto L4bc626;
case 0x4bc628:c.instructions+=2;goto B4bc628;
case 0x4bc62d:c.instructions+=1;goto B4bc62d;
case 0x4bc62f:goto L4bc62f;
case 0x4bc634:c.instructions+=6;goto B4bc634;
case 0x4bc639:c.instructions+=5;goto B4bc639;
case 0x4bc63d:c.instructions+=4;goto B4bc63d;
case 0x4bc63e:c.instructions+=3;goto B4bc63e;
case 0x4bc643:c.instructions+=2;goto B4bc643;
case 0x4bc644:c.instructions+=1;goto B4bc644;
case 0x4bc649:goto L4bc649;
case 0x4bc64c:c.instructions+=2;goto B4bc64c;
case 0x4bc64d:c.instructions+=1;goto B4bc64d;
case 0x4bc652:goto L4bc652;
case 0x4bc655:goto L4bc655;
case 0x4bc656:c.instructions+=7;goto B4bc656;
case 0x4bc65b:c.instructions+=6;goto B4bc65b;
case 0x4bc660:c.instructions+=5;goto B4bc660;
case 0x4bc662:c.instructions+=4;goto B4bc662;
case 0x4bc666:c.instructions+=3;goto B4bc666;
case 0x4bc66b:c.instructions+=2;goto B4bc66b;
case 0x4bc66c:c.instructions+=1;goto B4bc66c;
case 0x4bc671:goto L4bc671;
case 0x4bc676:c.instructions+=5;goto B4bc676;
case 0x4bc678:c.instructions+=4;goto B4bc678;
case 0x4bc679:c.instructions+=3;goto B4bc679;
case 0x4bc67e:c.instructions+=2;goto B4bc67e;
case 0x4bc680:c.instructions+=1;goto B4bc680;
case 0x4bc685:goto L4bc685;
case 0x4bc687:c.instructions+=3;goto B4bc687;
case 0x4bc688:c.instructions+=2;goto B4bc688;
case 0x4bc68d:c.instructions+=1;goto B4bc68d;
case 0x4bc692:goto L4bc692;
case 0x4bc699:c.instructions+=4;goto B4bc699;
case 0x4bc69b:c.instructions+=3;goto B4bc69b;
case 0x4bc6a0:c.instructions+=2;goto B4bc6a0;
case 0x4bc6a1:c.instructions+=1;goto B4bc6a1;
case 0x4bc6a6:goto L4bc6a6;
case 0x4bc6a9:c.instructions+=1;goto B4bc6a9;
case 0x4bc6aa:goto L4bc6aa;
case 0x4bc6b0:c.instructions+=1;goto B4bc6b0;
case 0x4bc6c0:goto L4bc6c0;
case 0x4bc6c8:c.instructions+=1;goto B4bc6c8;
case 0x4bc6ca:goto L4bc6ca;
case 0x4bc6ce:c.instructions+=4;goto B4bc6ce;
case 0x4bc6d0:c.instructions+=3;goto B4bc6d0;
case 0x4bc6d5:c.instructions+=2;goto B4bc6d5;
case 0x4bc6d6:c.instructions+=1;goto B4bc6d6;
case 0x4bc6db:goto L4bc6db;
case 0x4bc6de:goto L4bc6de;
case 0x4bc6f0:goto L4bc6f0;
case 0x4bc6f8:c.instructions+=1;goto B4bc6f8;
case 0x4bc6fa:goto L4bc6fa;
case 0x4bc704:c.instructions+=1;goto B4bc704;
case 0x4bc706:goto L4bc706;
case 0x4bc710:goto L4bc710;
case 0x4bc714:c.instructions+=4;goto B4bc714;
case 0x4bc716:c.instructions+=3;goto B4bc716;
case 0x4bc71b:c.instructions+=2;goto B4bc71b;
case 0x4bc71c:c.instructions+=1;goto B4bc71c;
case 0x4bc721:goto L4bc721;
case 0x4bc724:goto L4bc724;
case 0x4bc730:goto L4bc730;
case 0x4bc738:c.instructions+=1;goto B4bc738;
case 0x4bc73a:goto L4bc73a;
case 0x4bc73e:c.instructions+=4;goto B4bc73e;
case 0x4bc740:c.instructions+=3;goto B4bc740;
case 0x4bc745:c.instructions+=2;goto B4bc745;
case 0x4bc746:c.instructions+=1;goto B4bc746;
case 0x4bc74b:goto L4bc74b;
case 0x4bc74e:goto L4bc74e;
case 0x4bc760:goto L4bc760;
case 0x4bc768:c.instructions+=1;goto B4bc768;
case 0x4bc76a:goto L4bc76a;
case 0x4bc76c:c.instructions+=3;goto B4bc76c;
case 0x4bc771:c.instructions+=2;goto B4bc771;
case 0x4bc77b:c.instructions+=1;goto B4bc77b;
case 0x4bc780:goto L4bc780;
case 0x4bc782:c.instructions+=3;goto B4bc782;
case 0x4bc787:c.instructions+=2;goto B4bc787;
case 0x4bc78c:c.instructions+=1;goto B4bc78c;
case 0x4bc791:goto L4bc791;
case 0x4bc796:c.instructions+=2;goto B4bc796;
case 0x4bc799:c.instructions+=1;goto B4bc799;
case 0x4bc79e:goto L4bc79e;
case 0x4bc7b0:goto L4bc7b0;
case 0x4bc7b2:c.instructions+=13;goto B4bc7b2;
case 0x4bc7b7:c.instructions+=12;goto B4bc7b7;
case 0x4bc7bd:c.instructions+=11;goto B4bc7bd;
case 0x4bc7be:c.instructions+=10;goto B4bc7be;
case 0x4bc7c5:c.instructions+=9;goto B4bc7c5;
case 0x4bc7c6:c.instructions+=8;goto B4bc7c6;
case 0x4bc7cb:c.instructions+=7;goto B4bc7cb;
case 0x4bc7cc:c.instructions+=6;goto B4bc7cc;
case 0x4bc7cd:c.instructions+=5;goto B4bc7cd;
case 0x4bc7d0:c.instructions+=4;goto B4bc7d0;
case 0x4bc7d5:c.instructions+=3;goto B4bc7d5;
case 0x4bc7d6:c.instructions+=2;goto B4bc7d6;
case 0x4bc7d8:c.instructions+=1;goto B4bc7d8;
case 0x4bc7da:goto L4bc7da;
case 0x4bc7dc:c.instructions+=1;goto B4bc7dc;
case 0x4bc7e1:goto L4bc7e1;
case 0x4bc7e3:c.instructions+=5;goto B4bc7e3;
case 0x4bc7e6:c.instructions+=4;goto B4bc7e6;
case 0x4bc7ea:c.instructions+=3;goto B4bc7ea;
case 0x4bc7ec:c.instructions+=2;goto B4bc7ec;
case 0x4bc7f4:c.instructions+=1;goto B4bc7f4;
case 0x4bc7f6:goto L4bc7f6;
case 0x4bc7f8:c.instructions+=4;goto B4bc7f8;
case 0x4bc7fd:c.instructions+=3;goto B4bc7fd;
case 0x4bc802:c.instructions+=2;goto B4bc802;
case 0x4bc804:c.instructions+=1;goto B4bc804;
case 0x4bc809:goto L4bc809;
case 0x4bc80f:c.instructions+=1;goto B4bc80f;
case 0x4bc811:goto L4bc811;
case 0x4bc813:goto L4bc813;
case 0x4bc815:c.instructions+=4;goto B4bc815;
case 0x4bc816:c.instructions+=3;goto B4bc816;
case 0x4bc818:c.instructions+=2;goto B4bc818;
case 0x4bc81c:c.instructions+=1;goto B4bc81c;
case 0x4bc81f:goto L4bc81f;
case 0x4bc821:c.instructions+=1;goto B4bc821;
case 0x4bc826:goto L4bc826;
case 0x4bc828:c.instructions+=5;goto B4bc828;
case 0x4bc82b:c.instructions+=4;goto B4bc82b;
case 0x4bc82f:c.instructions+=3;goto B4bc82f;
case 0x4bc831:c.instructions+=2;goto B4bc831;
case 0x4bc839:c.instructions+=1;goto B4bc839;
case 0x4bc83b:goto L4bc83b;
case 0x4bc83d:c.instructions+=4;goto B4bc83d;
case 0x4bc842:c.instructions+=3;goto B4bc842;
case 0x4bc847:c.instructions+=2;goto B4bc847;
case 0x4bc849:c.instructions+=1;goto B4bc849;
case 0x4bc84e:goto L4bc84e;
case 0x4bc854:c.instructions+=2;goto B4bc854;
case 0x4bc858:c.instructions+=1;goto B4bc858;
case 0x4bc85a:goto L4bc85a;
case 0x4bc85c:goto L4bc85c;
case 0x4bc85e:c.instructions+=4;goto B4bc85e;
case 0x4bc85f:c.instructions+=3;goto B4bc85f;
case 0x4bc861:c.instructions+=2;goto B4bc861;
case 0x4bc865:c.instructions+=1;goto B4bc865;
case 0x4bc868:goto L4bc868;
case 0x4bc86a:c.instructions+=1;goto B4bc86a;
case 0x4bc86f:goto L4bc86f;
case 0x4bc871:c.instructions+=5;goto B4bc871;
case 0x4bc874:c.instructions+=4;goto B4bc874;
case 0x4bc878:c.instructions+=3;goto B4bc878;
case 0x4bc87a:c.instructions+=2;goto B4bc87a;
case 0x4bc882:c.instructions+=1;goto B4bc882;
case 0x4bc884:goto L4bc884;
case 0x4bc886:c.instructions+=4;goto B4bc886;
case 0x4bc88b:c.instructions+=3;goto B4bc88b;
case 0x4bc890:c.instructions+=2;goto B4bc890;
case 0x4bc892:c.instructions+=1;goto B4bc892;
case 0x4bc897:goto L4bc897;
case 0x4bc89d:c.instructions+=1;goto B4bc89d;
case 0x4bc89f:goto L4bc89f;
case 0x4bc8a1:goto L4bc8a1;
case 0x4bc8a3:c.instructions+=4;goto B4bc8a3;
case 0x4bc8a4:c.instructions+=3;goto B4bc8a4;
case 0x4bc8a6:c.instructions+=2;goto B4bc8a6;
case 0x4bc8aa:c.instructions+=1;goto B4bc8aa;
case 0x4bc8ad:goto L4bc8ad;
case 0x4bc8b7:c.instructions+=1;goto B4bc8b7;
case 0x4bc8b9:goto L4bc8b9;
case 0x4bc8bb:c.instructions+=1;goto B4bc8bb;
case 0x4bc8c0:goto L4bc8c0;
case 0x4bc8c2:c.instructions+=5;goto B4bc8c2;
case 0x4bc8c5:c.instructions+=4;goto B4bc8c5;
case 0x4bc8c9:c.instructions+=3;goto B4bc8c9;
case 0x4bc8cb:c.instructions+=2;goto B4bc8cb;
case 0x4bc8d3:c.instructions+=1;goto B4bc8d3;
case 0x4bc8d5:goto L4bc8d5;
case 0x4bc8d7:c.instructions+=4;goto B4bc8d7;
case 0x4bc8dc:c.instructions+=3;goto B4bc8dc;
case 0x4bc8e1:c.instructions+=2;goto B4bc8e1;
case 0x4bc8e3:c.instructions+=1;goto B4bc8e3;
case 0x4bc8e8:goto L4bc8e8;
case 0x4bc8ee:c.instructions+=1;goto B4bc8ee;
case 0x4bc8f0:goto L4bc8f0;
case 0x4bc8f2:goto L4bc8f2;
case 0x4bc8f4:c.instructions+=4;goto B4bc8f4;
case 0x4bc8f5:c.instructions+=3;goto B4bc8f5;
case 0x4bc8f7:c.instructions+=2;goto B4bc8f7;
case 0x4bc8fb:c.instructions+=1;goto B4bc8fb;
case 0x4bc8fe:goto L4bc8fe;
case 0x4bc900:c.instructions+=1;goto B4bc900;
case 0x4bc905:goto L4bc905;
case 0x4bc907:c.instructions+=5;goto B4bc907;
case 0x4bc90a:c.instructions+=4;goto B4bc90a;
case 0x4bc90e:c.instructions+=3;goto B4bc90e;
case 0x4bc910:c.instructions+=2;goto B4bc910;
case 0x4bc918:c.instructions+=1;goto B4bc918;
case 0x4bc91a:goto L4bc91a;
case 0x4bc91c:c.instructions+=4;goto B4bc91c;
case 0x4bc921:c.instructions+=3;goto B4bc921;
case 0x4bc926:c.instructions+=2;goto B4bc926;
case 0x4bc928:c.instructions+=1;goto B4bc928;
case 0x4bc92d:goto L4bc92d;
case 0x4bc933:c.instructions+=1;goto B4bc933;
case 0x4bc935:goto L4bc935;
case 0x4bc937:goto L4bc937;
case 0x4bc939:c.instructions+=4;goto B4bc939;
case 0x4bc93a:c.instructions+=3;goto B4bc93a;
case 0x4bc93c:c.instructions+=2;goto B4bc93c;
case 0x4bc940:c.instructions+=1;goto B4bc940;
case 0x4bc943:goto L4bc943;
case 0x4bc946:c.instructions+=4;goto B4bc946;
case 0x4bc949:c.instructions+=3;goto B4bc949;
case 0x4bc94c:c.instructions+=2;goto B4bc94c;
case 0x4bc94d:c.instructions+=1;goto B4bc94d;
case 0x4bc952:goto L4bc952;
case 0x4bc955:c.instructions+=3;goto B4bc955;
case 0x4bc956:c.instructions+=2;goto B4bc956;
case 0x4bc958:c.instructions+=1;goto B4bc958;
case 0x4bc95b:goto L4bc95b;
case 0x4bc965:c.instructions+=1;goto B4bc965;
case 0x4bc967:goto L4bc967;
case 0x4bc96a:c.instructions+=2;goto B4bc96a;
case 0x4bc96f:c.instructions+=1;goto B4bc96f;
case 0x4bc974:goto L4bc974;
case 0x4bc975:c.instructions+=3;goto B4bc975;
case 0x4bc97a:c.instructions+=2;goto B4bc97a;
case 0x4bc97b:c.instructions+=1;goto B4bc97b;
case 0x4bc980:goto L4bc980;
case 0x4bc983:goto L4bc983;
case 0x4bc985:c.instructions+=2;goto B4bc985;
case 0x4bc987:c.instructions+=1;goto B4bc987;
case 0x4bc98a:goto L4bc98a;
case 0x4bc98d:c.instructions+=2;goto B4bc98d;
case 0x4bc98f:c.instructions+=1;goto B4bc98f;
case 0x4bc991:goto L4bc991;
case 0x4bc992:c.instructions+=2;goto B4bc992;
case 0x4bc994:c.instructions+=1;goto B4bc994;
case 0x4bc999:goto L4bc999;
case 0x4bc99c:c.instructions+=1;goto B4bc99c;
case 0x4bc99e:goto L4bc99e;
case 0x4bc99f:c.instructions+=5;goto B4bc99f;
case 0x4bc9a2:c.instructions+=4;goto B4bc9a2;
case 0x4bc9a7:c.instructions+=3;goto B4bc9a7;
case 0x4bc9ac:c.instructions+=2;goto B4bc9ac;
case 0x4bc9ad:c.instructions+=1;goto B4bc9ad;
case 0x4bc9b2:goto L4bc9b2;
case 0x4bc9b5:goto L4bc9b5;
case 0x4bc9b9:c.instructions+=6;goto B4bc9b9;
case 0x4bc9ba:c.instructions+=5;goto B4bc9ba;
case 0x4bc9bb:c.instructions+=4;goto B4bc9bb;
case 0x4bc9bc:c.instructions+=3;goto B4bc9bc;
case 0x4bc9c3:c.instructions+=2;goto B4bc9c3;
case 0x4bc9c6:c.instructions+=1;goto B4bc9c6;
case 0x4bc9d0:goto L4bc9d0;
case 0x4bc9d1:c.instructions+=2;goto B4bc9d1;
case 0x4bc9d3:c.instructions+=1;goto B4bc9d3;
case 0x4bc9d8:goto L4bc9d8;
case 0x4bc9dd:c.instructions+=1;goto B4bc9dd;
case 0x4bc9df:goto L4bc9df;
case 0x4bc9e0:c.instructions+=1;goto B4bc9e0;
case 0x4bc9e5:goto L4bc9e5;
case 0x4bc9e8:goto L4bc9e8;
case 0x4bc9ea:c.instructions+=2;goto B4bc9ea;
case 0x4bc9eb:c.instructions+=1;goto B4bc9eb;
case 0x4bc9f0:goto L4bc9f0;
case 0x4bc9f1:c.instructions+=2;goto B4bc9f1;
case 0x4bc9f3:c.instructions+=1;goto B4bc9f3;
case 0x4bc9f8:goto L4bc9f8;
case 0x4bc9fd:c.instructions+=1;goto B4bc9fd;
case 0x4bc9ff:goto L4bc9ff;
case 0x4bca00:c.instructions+=1;goto B4bca00;
case 0x4bca05:goto L4bca05;
case 0x4bca08:goto L4bca08;
case 0x4bca0a:c.instructions+=2;goto B4bca0a;
case 0x4bca0b:c.instructions+=1;goto B4bca0b;
case 0x4bca10:goto L4bca10;
case 0x4bca13:c.instructions+=7;goto B4bca13;
case 0x4bca14:c.instructions+=6;goto B4bca14;
case 0x4bca15:c.instructions+=5;goto B4bca15;
case 0x4bca17:c.instructions+=4;goto B4bca17;
case 0x4bca1e:c.instructions+=3;goto B4bca1e;
case 0x4bca21:c.instructions+=2;goto B4bca21;
case 0x4bca22:c.instructions+=1;goto B4bca22;
case 0x4bca24:goto L4bca24;
case 0x4bca29:c.instructions+=2;goto B4bca29;
case 0x4bca2a:c.instructions+=1;goto B4bca2a;
case 0x4bca2f:goto L4bca2f;
case 0x4bca30:c.instructions+=1;goto B4bca30;
case 0x4bca35:goto L4bca35;
case 0x4bca38:c.instructions+=3;goto B4bca38;
case 0x4bca3d:c.instructions+=2;goto B4bca3d;
case 0x4bca3e:c.instructions+=1;goto B4bca3e;
case 0x4bca43:goto L4bca43;
case 0x4bca44:c.instructions+=1;goto B4bca44;
case 0x4bca49:goto L4bca49;
case 0x4bca4e:c.instructions+=3;goto B4bca4e;
case 0x4bca56:c.instructions+=2;goto B4bca56;
case 0x4bca5b:c.instructions+=1;goto B4bca5b;
case 0x4bca5d:goto L4bca5d;
case 0x4bca62:c.instructions+=2;goto B4bca62;
case 0x4bca63:c.instructions+=1;goto B4bca63;
case 0x4bca68:goto L4bca68;
case 0x4bca69:c.instructions+=1;goto B4bca69;
case 0x4bca6e:goto L4bca6e;
case 0x4bca71:c.instructions+=3;goto B4bca71;
case 0x4bca76:c.instructions+=2;goto B4bca76;
case 0x4bca77:c.instructions+=1;goto B4bca77;
case 0x4bca7c:goto L4bca7c;
case 0x4bca7d:c.instructions+=1;goto B4bca7d;
case 0x4bca82:goto L4bca82;
case 0x4bca87:c.instructions+=2;goto B4bca87;
case 0x4bca8f:c.instructions+=1;goto B4bca8f;
case 0x4bca94:goto L4bca94;
case 0x4bca97:c.instructions+=1;goto B4bca97;
case 0x4bca9c:goto L4bca9c;
case 0x4bca9f:c.instructions+=4;goto B4bca9f;
case 0x4bcaa0:c.instructions+=3;goto B4bcaa0;
case 0x4bcaa5:c.instructions+=2;goto B4bcaa5;
case 0x4bcaaa:c.instructions+=1;goto B4bcaaa;
case 0x4bcaaf:goto L4bcaaf;
case 0x4bcab2:c.instructions+=3;goto B4bcab2;
case 0x4bcab3:c.instructions+=2;goto B4bcab3;
case 0x4bcab4:c.instructions+=1;goto B4bcab4;
case 0x4bcab9:goto L4bcab9;
case 0x4bcabc:c.instructions+=1;goto B4bcabc;
case 0x4bcac1:goto L4bcac1;
case 0x4bcac5:c.instructions+=4;goto B4bcac5;
case 0x4bcac9:c.instructions+=3;goto B4bcac9;
case 0x4bcace:c.instructions+=2;goto B4bcace;
case 0x4bcad2:c.instructions+=1;goto B4bcad2;
case 0x4bcad8:goto L4bcad8;
case 0x4bcad9:c.instructions+=1;goto B4bcad9;
case 0x4bcae0:goto L4bcae0;
case 0x4bcae8:c.instructions+=1;goto B4bcae8;
case 0x4bcaf0:goto L4bcaf0;
case 0x4bcaf4:c.instructions+=6;goto B4bcaf4;
case 0x4bcafa:c.instructions+=5;goto B4bcafa;
case 0x4bcafb:c.instructions+=4;goto B4bcafb;
case 0x4bcafc:c.instructions+=3;goto B4bcafc;
case 0x4bcb00:c.instructions+=2;goto B4bcb00;
case 0x4bcb01:c.instructions+=1;goto B4bcb01;
case 0x4bcb06:goto L4bcb06;
case 0x4bcb08:c.instructions+=3;goto B4bcb08;
case 0x4bcb0a:c.instructions+=2;goto B4bcb0a;
case 0x4bcb0c:c.instructions+=1;goto B4bcb0c;
case 0x4bcb0e:goto L4bcb0e;
case 0x4bcb10:c.instructions+=2;goto B4bcb10;
case 0x4bcb16:c.instructions+=1;goto B4bcb16;
case 0x4bcb18:goto L4bcb18;
case 0x4bcb19:c.instructions+=2;goto B4bcb19;
case 0x4bcb1c:c.instructions+=1;goto B4bcb1c;
case 0x4bcb1d:goto L4bcb1d;
case 0x4bcb1f:goto L4bcb1f;
case 0x4bcb22:c.instructions+=3;goto B4bcb22;
case 0x4bcb23:c.instructions+=2;goto B4bcb23;
case 0x4bcb25:c.instructions+=1;goto B4bcb25;
case 0x4bcb2a:goto L4bcb2a;
case 0x4bcb2b:c.instructions+=3;goto B4bcb2b;
case 0x4bcb2c:c.instructions+=2;goto B4bcb2c;
case 0x4bcb31:c.instructions+=1;goto B4bcb31;
case 0x4bcb36:goto L4bcb36;
case 0x4bcb39:c.instructions+=3;goto B4bcb39;
case 0x4bcb3a:c.instructions+=2;goto B4bcb3a;
case 0x4bcb3b:c.instructions+=1;goto B4bcb3b;
case 0x4bcb40:goto L4bcb40;
case 0x4bcb43:goto L4bcb43;
case 0x4bcb46:c.instructions+=4;goto B4bcb46;
case 0x4bcb4b:c.instructions+=3;goto B4bcb4b;
case 0x4bcb4c:c.instructions+=2;goto B4bcb4c;
case 0x4bcb51:c.instructions+=1;goto B4bcb51;
case 0x4bcb56:goto L4bcb56;
case 0x4bcb59:c.instructions+=3;goto B4bcb59;
case 0x4bcb5a:c.instructions+=2;goto B4bcb5a;
case 0x4bcb5b:c.instructions+=1;goto B4bcb5b;
case 0x4bcb60:goto L4bcb60;
case 0x4bcb63:c.instructions+=5;goto B4bcb63;
case 0x4bcb66:c.instructions+=4;goto B4bcb66;
case 0x4bcb6b:c.instructions+=3;goto B4bcb6b;
case 0x4bcb6c:c.instructions+=2;goto B4bcb6c;
case 0x4bcb71:c.instructions+=1;goto B4bcb71;
case 0x4bcb76:goto L4bcb76;
case 0x4bcb79:c.instructions+=3;goto B4bcb79;
case 0x4bcb7a:c.instructions+=2;goto B4bcb7a;
case 0x4bcb7b:c.instructions+=1;goto B4bcb7b;
case 0x4bcb80:goto L4bcb80;
case 0x4bcb83:c.instructions+=1;goto B4bcb83;
case 0x4bcb88:goto L4bcb88;
case 0x4bcb8d:c.instructions+=10;goto B4bcb8d;
case 0x4bcb91:c.instructions+=9;goto B4bcb91;
case 0x4bcb95:c.instructions+=8;goto B4bcb95;
case 0x4bcb99:c.instructions+=7;goto B4bcb99;
case 0x4bcb9d:c.instructions+=6;goto B4bcb9d;
case 0x4bcb9f:c.instructions+=5;goto B4bcb9f;
case 0x4bcba3:c.instructions+=4;goto B4bcba3;
case 0x4bcba4:c.instructions+=3;goto B4bcba4;
case 0x4bcba7:c.instructions+=2;goto B4bcba7;
case 0x4bcba8:c.instructions+=1;goto B4bcba8;
case 0x4bcbad:goto L4bcbad;
case 0x4bcbaf:c.instructions+=3;goto B4bcbaf;
case 0x4bcbb2:c.instructions+=2;goto B4bcbb2;
case 0x4bcbb8:c.instructions+=1;goto B4bcbb8;
case 0x4bcbba:goto L4bcbba;
case 0x4bcbbb:c.instructions+=2;goto B4bcbbb;
case 0x4bcbbe:c.instructions+=1;goto B4bcbbe;
case 0x4bcbbf:goto L4bcbbf;
case 0x4bcbc1:goto L4bcbc1;
case 0x4bcbc4:c.instructions+=4;goto B4bcbc4;
case 0x4bcbc5:c.instructions+=3;goto B4bcbc5;
case 0x4bcbc7:c.instructions+=2;goto B4bcbc7;
case 0x4bcbcb:c.instructions+=1;goto B4bcbcb;
case 0x4bcbd0:goto L4bcbd0;
case 0x4bcbd1:c.instructions+=3;goto B4bcbd1;
case 0x4bcbd2:c.instructions+=2;goto B4bcbd2;
case 0x4bcbd7:c.instructions+=1;goto B4bcbd7;
case 0x4bcbdc:goto L4bcbdc;
case 0x4bcbe0:c.instructions+=4;goto B4bcbe0;
case 0x4bcbe3:c.instructions+=3;goto B4bcbe3;
case 0x4bcbe4:c.instructions+=2;goto B4bcbe4;
case 0x4bcbe5:c.instructions+=1;goto B4bcbe5;
case 0x4bcbea:goto L4bcbea;
case 0x4bcbed:goto L4bcbed;
case 0x4bcbf0:c.instructions+=6;goto B4bcbf0;
case 0x4bcbf3:c.instructions+=5;goto B4bcbf3;
case 0x4bcbf4:c.instructions+=4;goto B4bcbf4;
case 0x4bcbf9:c.instructions+=3;goto B4bcbf9;
case 0x4bcbfa:c.instructions+=2;goto B4bcbfa;
case 0x4bcbff:c.instructions+=1;goto B4bcbff;
case 0x4bcc04:goto L4bcc04;
case 0x4bcc07:c.instructions+=3;goto B4bcc07;
case 0x4bcc08:c.instructions+=2;goto B4bcc08;
case 0x4bcc09:c.instructions+=1;goto B4bcc09;
case 0x4bcc0e:goto L4bcc0e;
case 0x4bcc10:c.instructions+=7;goto B4bcc10;
case 0x4bcc13:c.instructions+=6;goto B4bcc13;
case 0x4bcc16:c.instructions+=5;goto B4bcc16;
case 0x4bcc17:c.instructions+=4;goto B4bcc17;
case 0x4bcc1c:c.instructions+=3;goto B4bcc1c;
case 0x4bcc1d:c.instructions+=2;goto B4bcc1d;
case 0x4bcc22:c.instructions+=1;goto B4bcc22;
case 0x4bcc27:goto L4bcc27;
case 0x4bcc2a:c.instructions+=3;goto B4bcc2a;
case 0x4bcc2b:c.instructions+=2;goto B4bcc2b;
case 0x4bcc2c:c.instructions+=1;goto B4bcc2c;
case 0x4bcc31:goto L4bcc31;
case 0x4bcc35:c.instructions+=1;goto B4bcc35;
case 0x4bcc38:goto L4bcc38;
case 0x4bcc3c:c.instructions+=5;goto B4bcc3c;
case 0x4bcc3d:c.instructions+=4;goto B4bcc3d;
case 0x4bcc3e:c.instructions+=3;goto B4bcc3e;
case 0x4bcc41:c.instructions+=2;goto B4bcc41;
case 0x4bcc45:c.instructions+=1;goto B4bcc45;
case 0x4bcc4b:goto L4bcc4b;
case 0x4bcc4f:c.instructions+=4;goto B4bcc4f;
case 0x4bcc50:c.instructions+=3;goto B4bcc50;
case 0x4bcc52:c.instructions+=2;goto B4bcc52;
case 0x4bcc56:c.instructions+=1;goto B4bcc56;
case 0x4bcc5c:goto L4bcc5c;
case 0x4bcc5d:goto L4bcc5d;
case 0x4bcc5e:c.instructions+=5;goto B4bcc5e;
case 0x4bcc5f:c.instructions+=4;goto B4bcc5f;
case 0x4bcc61:c.instructions+=3;goto B4bcc61;
case 0x4bcc62:c.instructions+=2;goto B4bcc62;
case 0x4bcc65:c.instructions+=1;goto B4bcc65;
case 0x4bcc70:goto L4bcc70;
case 0x4bcc71:c.instructions+=4;goto B4bcc71;
case 0x4bcc75:c.instructions+=3;goto B4bcc75;
case 0x4bcc78:c.instructions+=2;goto B4bcc78;
case 0x4bcc7a:c.instructions+=1;goto B4bcc7a;
case 0x4bcc7c:goto L4bcc7c;
case 0x4bcc7d:c.instructions+=1;goto B4bcc7d;
case 0x4bcc82:goto L4bcc82;
case 0x4bcc85:c.instructions+=1;goto B4bcc85;
case 0x4bcc8c:goto L4bcc8c;
case 0x4bcc90:c.instructions+=4;goto B4bcc90;
case 0x4bcc9a:c.instructions+=3;goto B4bcc9a;
case 0x4bcc9d:c.instructions+=2;goto B4bcc9d;
case 0x4bcc9f:c.instructions+=1;goto B4bcc9f;
case 0x4bcca1:goto L4bcca1;
case 0x4bcca4:c.instructions+=2;goto B4bcca4;
case 0x4bcca9:c.instructions+=1;goto B4bcca9;
case 0x4bccae:goto L4bccae;
case 0x4bccaf:c.instructions+=6;goto B4bccaf;
case 0x4bccb4:c.instructions+=5;goto B4bccb4;
case 0x4bccb9:c.instructions+=4;goto B4bccb9;
case 0x4bccbe:c.instructions+=3;goto B4bccbe;
case 0x4bccc3:c.instructions+=2;goto B4bccc3;
case 0x4bccc4:c.instructions+=1;goto B4bccc4;
case 0x4bccc9:goto L4bccc9;
case 0x4bcccc:c.instructions+=2;goto B4bcccc;
case 0x4bcccd:c.instructions+=1;goto B4bcccd;
case 0x4bccce:goto L4bccce;
case 0x4bccd0:c.instructions+=2;goto B4bccd0;
case 0x4bccd1:c.instructions+=1;goto B4bccd1;
case 0x4bcce0:goto L4bcce0;
case 0x4bcce1:c.instructions+=5;goto B4bcce1;
case 0x4bcce2:c.instructions+=4;goto B4bcce2;
case 0x4bcce6:c.instructions+=3;goto B4bcce6;
case 0x4bccec:c.instructions+=2;goto B4bccec;
case 0x4bccee:c.instructions+=1;goto B4bccee;
case 0x4bccf0:goto L4bccf0;
case 0x4bccf2:c.instructions+=1;goto B4bccf2;
case 0x4bccf4:goto L4bccf4;
case 0x4bccfa:c.instructions+=1;goto B4bccfa;
case 0x4bccfc:goto L4bccfc;
case 0x4bccfe:goto L4bccfe;
case 0x4bcd00:c.instructions+=1;goto B4bcd00;
case 0x4bcd05:goto L4bcd05;
case 0x4bcd07:c.instructions+=3;goto B4bcd07;
case 0x4bcd08:c.instructions+=2;goto B4bcd08;
case 0x4bcd0a:c.instructions+=1;goto B4bcd0a;
case 0x4bcd0d:goto L4bcd0d;
case 0x4bcd0f:c.instructions+=2;goto B4bcd0f;
case 0x4bcd11:c.instructions+=1;goto B4bcd11;
case 0x4bcd14:goto L4bcd14;
case 0x4bcd15:c.instructions+=2;goto B4bcd15;
case 0x4bcd16:c.instructions+=1;goto B4bcd16;
case 0x4bcd20:goto L4bcd20;
case 0x4bcd21:c.instructions+=5;goto B4bcd21;
case 0x4bcd23:c.instructions+=4;goto B4bcd23;
case 0x4bcd29:c.instructions+=3;goto B4bcd29;
case 0x4bcd2b:c.instructions+=2;goto B4bcd2b;
case 0x4bcd2e:c.instructions+=1;goto B4bcd2e;
case 0x4bcd30:goto L4bcd30;
case 0x4bcd37:goto L4bcd37;
case 0x4bcd3c:c.instructions+=1;goto B4bcd3c;
case 0x4bcd3e:goto L4bcd3e;
case 0x4bcd43:c.instructions+=1;goto B4bcd43;
case 0x4bcd45:goto L4bcd45;
case 0x4bcd4a:c.instructions+=1;goto B4bcd4a;
case 0x4bcd4c:goto L4bcd4c;
case 0x4bcd51:c.instructions+=1;goto B4bcd51;
case 0x4bcd53:goto L4bcd53;
case 0x4bcd58:c.instructions+=1;goto B4bcd58;
case 0x4bcd5a:goto L4bcd5a;
case 0x4bcd5f:c.instructions+=1;goto B4bcd5f;
case 0x4bcd61:goto L4bcd61;
case 0x4bcd66:goto L4bcd66;
case 0x4bcd67:c.instructions+=3;goto B4bcd67;
case 0x4bcd6a:c.instructions+=2;goto B4bcd6a;
case 0x4bcd6b:c.instructions+=1;goto B4bcd6b;
case 0x4bcd70:goto L4bcd70;
case 0x4bcd73:c.instructions+=3;goto B4bcd73;
case 0x4bcd78:c.instructions+=2;goto B4bcd78;
case 0x4bcd79:c.instructions+=1;goto B4bcd79;
case 0x4bcd7e:goto L4bcd7e;
case 0x4bcd81:c.instructions+=2;goto B4bcd81;
case 0x4bcd82:c.instructions+=1;goto B4bcd82;
case 0x4bcdb0:goto L4bcdb0;
case 0x4bcdb3:c.instructions+=7;goto B4bcdb3;
case 0x4bcdb4:c.instructions+=6;goto B4bcdb4;
case 0x4bcdb5:c.instructions+=5;goto B4bcdb5;
case 0x4bcdb7:c.instructions+=4;goto B4bcdb7;
case 0x4bcdb9:c.instructions+=3;goto B4bcdb9;
case 0x4bcdbe:c.instructions+=2;goto B4bcdbe;
case 0x4bcdc3:c.instructions+=1;goto B4bcdc3;
case 0x4bcdc7:goto L4bcdc7;
case 0x4bcdc9:goto L4bcdc9;
case 0x4bcdcd:c.instructions+=11;goto B4bcdcd;
case 0x4bcdcf:c.instructions+=10;goto B4bcdcf;
case 0x4bcdd0:c.instructions+=9;goto B4bcdd0;
case 0x4bcdd2:c.instructions+=8;goto B4bcdd2;
case 0x4bcdd6:c.instructions+=7;goto B4bcdd6;
case 0x4bcdda:c.instructions+=6;goto B4bcdda;
case 0x4bcddb:c.instructions+=5;goto B4bcddb;
case 0x4bcddf:c.instructions+=4;goto B4bcddf;
case 0x4bcde3:c.instructions+=3;goto B4bcde3;
case 0x4bcde4:c.instructions+=2;goto B4bcde4;
case 0x4bcde8:c.instructions+=1;goto B4bcde8;
case 0x4bcded:goto L4bcded;
case 0x4bcdf2:c.instructions+=1;goto B4bcdf2;
case 0x4bcdf7:goto L4bcdf7;
case 0x4bcdf8:c.instructions+=4;goto B4bcdf8;
case 0x4bcdfc:c.instructions+=3;goto B4bcdfc;
case 0x4bcdfe:c.instructions+=2;goto B4bcdfe;
case 0x4bcdff:c.instructions+=1;goto B4bcdff;
case 0x4bce04:goto L4bce04;
case 0x4bce07:c.instructions+=5;goto B4bce07;
case 0x4bce0b:c.instructions+=4;goto B4bce0b;
case 0x4bce0c:c.instructions+=3;goto B4bce0c;
case 0x4bce11:c.instructions+=2;goto B4bce11;
case 0x4bce12:c.instructions+=1;goto B4bce12;
case 0x4bce17:goto L4bce17;
case 0x4bce1a:c.instructions+=1;goto B4bce1a;
case 0x4bce1f:goto L4bce1f;
case 0x4bce25:c.instructions+=6;goto B4bce25;
case 0x4bce26:c.instructions+=5;goto B4bce26;
case 0x4bce2b:c.instructions+=4;goto B4bce2b;
case 0x4bce2f:c.instructions+=3;goto B4bce2f;
case 0x4bce30:c.instructions+=2;goto B4bce30;
case 0x4bce31:c.instructions+=1;goto B4bce31;
case 0x4bce36:goto L4bce36;
case 0x4bce39:c.instructions+=2;goto B4bce39;
case 0x4bce3b:c.instructions+=1;goto B4bce3b;
case 0x4bce3d:goto L4bce3d;
case 0x4bce3e:c.instructions+=3;goto B4bce3e;
case 0x4bce41:c.instructions+=2;goto B4bce41;
case 0x4bce42:c.instructions+=1;goto B4bce42;
case 0x4bce47:goto L4bce47;
case 0x4bce4a:goto L4bce4a;
case 0x4bce4b:c.instructions+=3;goto B4bce4b;
case 0x4bce4c:c.instructions+=2;goto B4bce4c;
case 0x4bce4f:c.instructions+=1;goto B4bce4f;
case 0x4bce60:goto L4bce60;
case 0x4bce61:c.instructions+=9;goto B4bce61;
case 0x4bce63:c.instructions+=8;goto B4bce63;
case 0x4bce66:c.instructions+=7;goto B4bce66;
case 0x4bce6c:c.instructions+=6;goto B4bce6c;
case 0x4bce6d:c.instructions+=5;goto B4bce6d;
case 0x4bce6e:c.instructions+=4;goto B4bce6e;
case 0x4bce6f:c.instructions+=3;goto B4bce6f;
case 0x4bce70:c.instructions+=2;goto B4bce70;
case 0x4bce72:c.instructions+=1;goto B4bce72;
case 0x4bce77:goto L4bce77;
case 0x4bce79:c.instructions+=1;goto B4bce79;
case 0x4bce7e:goto L4bce7e;
case 0x4bce80:c.instructions+=3;goto B4bce80;
case 0x4bce82:c.instructions+=2;goto B4bce82;
case 0x4bce85:c.instructions+=1;goto B4bce85;
case 0x4bce87:goto L4bce87;
case 0x4bce88:c.instructions+=1;goto B4bce88;
case 0x4bce8d:goto L4bce8d;
case 0x4bce8f:c.instructions+=1;goto B4bce8f;
case 0x4bce94:goto L4bce94;
case 0x4bce95:c.instructions+=3;goto B4bce95;
case 0x4bce9c:c.instructions+=2;goto B4bce9c;
case 0x4bce9d:c.instructions+=1;goto B4bce9d;
case 0x4bcea2:goto L4bcea2;
case 0x4bcea4:c.instructions+=2;goto B4bcea4;
case 0x4bcea9:c.instructions+=1;goto B4bcea9;
case 0x4bcead:goto L4bcead;
case 0x4bceaf:goto L4bceaf;
case 0x4bceb3:c.instructions+=3;goto B4bceb3;
case 0x4bceb6:c.instructions+=2;goto B4bceb6;
case 0x4bceb8:c.instructions+=1;goto B4bceb8;
case 0x4bceba:goto L4bceba;
case 0x4bcec0:goto L4bcec0;
case 0x4bcec3:c.instructions+=3;goto B4bcec3;
case 0x4bcec4:c.instructions+=2;goto B4bcec4;
case 0x4bcec6:c.instructions+=1;goto B4bcec6;
case 0x4bcec8:goto L4bcec8;
case 0x4bcece:c.instructions+=2;goto B4bcece;
case 0x4bced0:c.instructions+=1;goto B4bced0;
case 0x4bced2:goto L4bced2;
case 0x4bced4:c.instructions+=2;goto B4bced4;
case 0x4bced6:c.instructions+=1;goto B4bced6;
case 0x4bcedb:goto L4bcedb;
case 0x4bcedd:c.instructions+=2;goto B4bcedd;
case 0x4bcee2:c.instructions+=1;goto B4bcee2;
case 0x4bcee7:goto L4bcee7;
case 0x4bceea:goto L4bceea;
case 0x4bceeb:c.instructions+=6;goto B4bceeb;
case 0x4bceec:c.instructions+=5;goto B4bceec;
case 0x4bceed:c.instructions+=4;goto B4bceed;
case 0x4bceee:c.instructions+=3;goto B4bceee;
case 0x4bcef0:c.instructions+=2;goto B4bcef0;
case 0x4bcef1:c.instructions+=1;goto B4bcef1;
case 0x4bcf00:goto L4bcf00;
case 0x4bcf06:c.instructions+=7;goto B4bcf06;
case 0x4bcf07:c.instructions+=6;goto B4bcf07;
case 0x4bcf08:c.instructions+=5;goto B4bcf08;
case 0x4bcf09:c.instructions+=4;goto B4bcf09;
case 0x4bcf0a:c.instructions+=3;goto B4bcf0a;
case 0x4bcf0c:c.instructions+=2;goto B4bcf0c;
case 0x4bcf0e:c.instructions+=1;goto B4bcf0e;
case 0x4bcf10:goto L4bcf10;
case 0x4bcf13:c.instructions+=3;goto B4bcf13;
case 0x4bcf14:c.instructions+=2;goto B4bcf14;
case 0x4bcf16:c.instructions+=1;goto B4bcf16;
case 0x4bcf1b:goto L4bcf1b;
case 0x4bcf1d:c.instructions+=1;goto B4bcf1d;
case 0x4bcf23:goto L4bcf23;
case 0x4bcf26:c.instructions+=3;goto B4bcf26;
case 0x4bcf28:c.instructions+=2;goto B4bcf28;
case 0x4bcf2c:c.instructions+=1;goto B4bcf2c;
case 0x4bcf32:goto L4bcf32;
case 0x4bcf33:c.instructions+=2;goto B4bcf33;
case 0x4bcf35:c.instructions+=1;goto B4bcf35;
case 0x4bcf3a:goto L4bcf3a;
case 0x4bcf3c:c.instructions+=1;goto B4bcf3c;
case 0x4bcf3e:goto L4bcf3e;
case 0x4bcf41:c.instructions+=1;goto B4bcf41;
case 0x4bcf43:goto L4bcf43;
case 0x4bcf45:goto L4bcf45;
case 0x4bcf46:c.instructions+=2;goto B4bcf46;
case 0x4bcf49:c.instructions+=1;goto B4bcf49;
case 0x4bcf4e:goto L4bcf4e;
case 0x4bcf51:c.instructions+=2;goto B4bcf51;
case 0x4bcf53:c.instructions+=1;goto B4bcf53;
case 0x4bcf55:goto L4bcf55;
case 0x4bcf58:c.instructions+=2;goto B4bcf58;
case 0x4bcf59:c.instructions+=1;goto B4bcf59;
case 0x4bcf5e:goto L4bcf5e;
case 0x4bcf60:c.instructions+=1;goto B4bcf60;
case 0x4bcf65:goto L4bcf65;
case 0x4bcf66:c.instructions+=3;goto B4bcf66;
case 0x4bcf6a:c.instructions+=2;goto B4bcf6a;
case 0x4bcf6b:c.instructions+=1;goto B4bcf6b;
case 0x4bcf70:goto L4bcf70;
case 0x4bcf76:c.instructions+=3;goto B4bcf76;
case 0x4bcf78:c.instructions+=2;goto B4bcf78;
case 0x4bcf7a:c.instructions+=1;goto B4bcf7a;
case 0x4bcf7f:goto L4bcf7f;
case 0x4bcf81:goto L4bcf81;
case 0x4bcf88:c.instructions+=4;goto B4bcf88;
case 0x4bcf8b:c.instructions+=3;goto B4bcf8b;
case 0x4bcf8c:c.instructions+=2;goto B4bcf8c;
case 0x4bcf8e:c.instructions+=1;goto B4bcf8e;
case 0x4bcf93:goto L4bcf93;
case 0x4bcf95:goto L4bcf95;
case 0x4bcf98:c.instructions+=3;goto B4bcf98;
case 0x4bcf99:c.instructions+=2;goto B4bcf99;
case 0x4bcf9e:c.instructions+=1;goto B4bcf9e;
case 0x4bcfa3:goto L4bcfa3;
case 0x4bcfa5:c.instructions+=5;goto B4bcfa5;
case 0x4bcfaa:c.instructions+=4;goto B4bcfaa;
case 0x4bcfab:c.instructions+=3;goto B4bcfab;
case 0x4bcfae:c.instructions+=2;goto B4bcfae;
case 0x4bcfaf:c.instructions+=1;goto B4bcfaf;
case 0x4bcfb4:goto L4bcfb4;
case 0x4bcfb5:c.instructions+=2;goto B4bcfb5;
case 0x4bcfba:c.instructions+=1;goto B4bcfba;
case 0x4bcfbf:goto L4bcfbf;
case 0x4bcfc2:c.instructions+=3;goto B4bcfc2;
case 0x4bcfc3:c.instructions+=2;goto B4bcfc3;
case 0x4bcfc4:c.instructions+=1;goto B4bcfc4;
case 0x4bcfc9:goto L4bcfc9;
case 0x4bcfca:c.instructions+=1;goto B4bcfca;
case 0x4bcfcf:goto L4bcfcf;
case 0x4bcfd2:goto L4bcfd2;
case 0x4bcfd3:c.instructions+=2;goto B4bcfd3;
case 0x4bcfd6:c.instructions+=1;goto B4bcfd6;
case 0x4bcfdc:goto L4bcfdc;
case 0x4bcfdd:c.instructions+=5;goto B4bcfdd;
case 0x4bcfde:c.instructions+=4;goto B4bcfde;
case 0x4bcfdf:c.instructions+=3;goto B4bcfdf;
case 0x4bcfe0:c.instructions+=2;goto B4bcfe0;
case 0x4bcfe6:c.instructions+=1;goto B4bcfe6;
case 0x4bcff0:goto L4bcff0;
case 0x4bcff1:c.instructions+=6;goto B4bcff1;
case 0x4bcff3:c.instructions+=5;goto B4bcff3;
case 0x4bcff6:c.instructions+=4;goto B4bcff6;
case 0x4bcffc:c.instructions+=3;goto B4bcffc;
case 0x4bcffd:c.instructions+=2;goto B4bcffd;
case 0x4bcfff:c.instructions+=1;goto B4bcfff;
default:missing_instruction(c.pc);}
B4bc010:L4bc010:{c.instructions+=5;NFSU2_TR(0x4bc010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc011:{NFSU2_TR(0x4bc011);
__builtin_memmove((R+24),(R+4),4);
}
B4bc013:{NFSU2_TR(0x4bc013);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc016:{NFSU2_TR(0x4bc016);
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
B4bc018:{NFSU2_TR(0x4bc018);
if(r1(R+518)){{goto L4bc0b9;}}
}
B4bc01e:L4bc01e:{c.instructions+=7;NFSU2_TR(0x4bc01e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc01f:{NFSU2_TR(0x4bc01f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc020:{NFSU2_TR(0x4bc020);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc021:{NFSU2_TR(0x4bc021);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bc024:{NFSU2_TR(0x4bc024);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc025:{NFSU2_TR(0x4bc025);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4bc027:{NFSU2_TR(0x4bc027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc02cull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4bc02c:L4bc02c:{c.instructions+=6;NFSU2_TR(0x4bc02c);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B4bc030:{NFSU2_TR(0x4bc030);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bc033:{NFSU2_TR(0x4bc033);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bc035:{NFSU2_TR(0x4bc035);
__builtin_memmove((R+0),(R+20),4);
}
B4bc037:{NFSU2_TR(0x4bc037);
w1(R+8,u8(0xaull));
}
B4bc039:{NFSU2_TR(0x4bc039);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4bc052;}}
}
B4bc03b:L4bc03b:{c.instructions+=1;NFSU2_TR(0x4bc03b);
{goto L4bc040;}
}
B4bc040:L4bc040:{c.instructions+=2;NFSU2_TR(0x4bc040);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4bc043:{NFSU2_TR(0x4bc043);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc04d;}}
}
B4bc045:L4bc045:{c.instructions+=4;NFSU2_TR(0x4bc045);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bc048:{NFSU2_TR(0x4bc048);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4bc049:{NFSU2_TR(0x4bc049);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bc04b:{NFSU2_TR(0x4bc04b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4bc052;}}
}
B4bc04d:L4bc04d:{c.instructions+=3;NFSU2_TR(0x4bc04d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4bc04e:{NFSU2_TR(0x4bc04e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bc050:{NFSU2_TR(0x4bc050);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bc040u);}goto L4bc040;}}
}
B4bc052:L4bc052:{c.instructions+=4;NFSU2_TR(0x4bc052);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4bc054:{NFSU2_TR(0x4bc054);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B4bc056:{NFSU2_TR(0x4bc056);
__builtin_memmove((R+4),(R+0),4);
}
B4bc058:{NFSU2_TR(0x4bc058);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4bc071;}}
}
B4bc05a:L4bc05a:{c.instructions+=1;NFSU2_TR(0x4bc05a);
__builtin_memmove((R+12),(R+12),4);
}
B4bc060:L4bc060:{c.instructions+=4;NFSU2_TR(0x4bc060);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B4bc062:{NFSU2_TR(0x4bc062);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4bc063:{NFSU2_TR(0x4bc063);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4bc065:{NFSU2_TR(0x4bc065);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc06d;}}
}
B4bc067:L4bc067:{c.instructions+=3;NFSU2_TR(0x4bc067);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4bc068:{NFSU2_TR(0x4bc068);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bc06b:{NFSU2_TR(0x4bc06b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bc071;}}
}
B4bc06d:L4bc06d:{c.instructions+=2;NFSU2_TR(0x4bc06d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B4bc06f:{NFSU2_TR(0x4bc06f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bc060u);}goto L4bc060;}}
}
B4bc071:L4bc071:{c.instructions+=8;NFSU2_TR(0x4bc071);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B4bc073:{NFSU2_TR(0x4bc073);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc074:{NFSU2_TR(0x4bc074);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4bc075:{NFSU2_TR(0x4bc075);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc076:{NFSU2_TR(0x4bc076);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc077:{NFSU2_TR(0x4bc077);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bc07a:{NFSU2_TR(0x4bc07a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B4bc07d:{NFSU2_TR(0x4bc07d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc082ull));
TAIL_STATIC(0x51dee0u,51d);
}
B4bc082:L4bc082:{c.instructions+=2;NFSU2_TR(0x4bc082);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc083:{NFSU2_TR(0x4bc083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc088ull));
TAIL_STATIC(0x4ae760u,4ae);
}
B4bc088:L4bc088:{c.instructions+=13;NFSU2_TR(0x4bc088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc08b:{NFSU2_TR(0x4bc08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400002ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4bc092:{NFSU2_TR(0x4bc092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bc095:{NFSU2_TR(0x4bc095);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bc098:{NFSU2_TR(0x4bc098);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bc09b:{NFSU2_TR(0x4bc09b);
__builtin_memmove((R+0),(R+4),4);
}
B4bc09d:{NFSU2_TR(0x4bc09d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B4bc09f:{NFSU2_TR(0x4bc09f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bc0a0:{NFSU2_TR(0x4bc0a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4bc0a1:{NFSU2_TR(0x4bc0a1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bc0a4:{NFSU2_TR(0x4bc0a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bc0a5:{NFSU2_TR(0x4bc0a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bc0a6:{NFSU2_TR(0x4bc0a6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bc0ad;}}
}
B4bc0a8:L4bc0a8:{c.instructions+=1;NFSU2_TR(0x4bc0a8);
w4(R+0,u32(0x1ull));
}
B4bc0ad:L4bc0ad:{c.instructions+=5;NFSU2_TR(0x4bc0ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc0ae:{NFSU2_TR(0x4bc0ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc0af:{NFSU2_TR(0x4bc0af);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc0b1:{NFSU2_TR(0x4bc0b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bc0b4:{NFSU2_TR(0x4bc0b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc0b9ull));
TAIL_STATIC(0x538080u,538);
}
B4bc0b9:L4bc0b9:{c.instructions+=2;NFSU2_TR(0x4bc0b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc0ba:{NFSU2_TR(0x4bc0ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc0c0:L4bc0c0:{c.instructions+=7;NFSU2_TR(0x4bc0c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc0c1:{NFSU2_TR(0x4bc0c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc0c2:{NFSU2_TR(0x4bc0c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bc0c6:{NFSU2_TR(0x4bc0c6);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4bc0c9:{NFSU2_TR(0x4bc0c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc0ca:{NFSU2_TR(0x4bc0ca);
__builtin_memmove((R+12),(R+4),4);
}
B4bc0cc:{NFSU2_TR(0x4bc0cc);
if(r1(R+518)){{goto L4bc103;}}
}
B4bc0ce:L4bc0ce:{c.instructions+=1;NFSU2_TR(0x4bc0ce);
__builtin_memmove((R+28),(R+28),4);
}
B4bc0d0:L4bc0d0:{c.instructions+=3;NFSU2_TR(0x4bc0d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc0d1:{NFSU2_TR(0x4bc0d1);
__builtin_memmove((R+4),(R+12),4);
}
B4bc0d3:{NFSU2_TR(0x4bc0d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc0d8ull));
TAIL_STATIC(0x49f970u,49f);
}
B4bc0d8:L4bc0d8:{c.instructions+=4;NFSU2_TR(0x4bc0d8);
__builtin_memmove((R+28),(R+0),4);
}
B4bc0da:{NFSU2_TR(0x4bc0da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bc0dd:{NFSU2_TR(0x4bc0dd);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bc0e2:{NFSU2_TR(0x4bc0e2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bc10a;}}
}
B4bc0e4:L4bc0e4:{c.instructions+=4;NFSU2_TR(0x4bc0e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc0e5:{NFSU2_TR(0x4bc0e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc0e6:{NFSU2_TR(0x4bc0e6);
__builtin_memmove((R+4),(R+12),4);
}
B4bc0e8:{NFSU2_TR(0x4bc0e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc0edull));
TAIL_STATIC(0x49fa00u,49f);
}
B4bc0ed:L4bc0ed:{c.instructions+=4;NFSU2_TR(0x4bc0ed);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B4bc0f0:{NFSU2_TR(0x4bc0f0);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B4bc0f2:{NFSU2_TR(0x4bc0f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bc0f4:{NFSU2_TR(0x4bc0f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc0fe;}}
}
B4bc0f6:L4bc0f6:{c.instructions+=4;NFSU2_TR(0x4bc0f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bc0f9:{NFSU2_TR(0x4bc0f9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4bc0fa:{NFSU2_TR(0x4bc0fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bc0fc:{NFSU2_TR(0x4bc0fc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bc0f6u);}goto L4bc0f6;}}
}
B4bc0fe:L4bc0fe:{c.instructions+=2;NFSU2_TR(0x4bc0fe);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4bc101:{NFSU2_TR(0x4bc101);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bc0d0u);}goto L4bc0d0;}}
}
B4bc103:L4bc103:{c.instructions+=2;NFSU2_TR(0x4bc103);
__builtin_memmove((R+4),(R+12),4);
}
B4bc105:{NFSU2_TR(0x4bc105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc10aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bc010u);}goto L4bc010;}
}
B4bc10a:L4bc10a:{c.instructions+=4;NFSU2_TR(0x4bc10a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bc10b:{NFSU2_TR(0x4bc10b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc10c:{NFSU2_TR(0x4bc10c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bc10d:{NFSU2_TR(0x4bc10d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc110:L4bc110:{c.instructions+=4;NFSU2_TR(0x4bc110);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc114:{NFSU2_TR(0x4bc114);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bc118:{NFSU2_TR(0x4bc118);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc119:{NFSU2_TR(0x4bc119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc11eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bc0c0u);}goto L4bc0c0;}
}
B4bc11e:L4bc11e:{c.instructions+=1;NFSU2_TR(0x4bc11e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc120:L4bc120:{c.instructions+=5;NFSU2_TR(0x4bc120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc121:{NFSU2_TR(0x4bc121);
__builtin_memmove((R+24),(R+4),4);
}
B4bc123:{NFSU2_TR(0x4bc123);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc126:{NFSU2_TR(0x4bc126);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
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
B4bc129:{NFSU2_TR(0x4bc129);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bc14c;}}
}
B4bc12b:L4bc12b:{c.instructions+=5;NFSU2_TR(0x4bc12b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4bc12d:{NFSU2_TR(0x4bc12d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc12f:{NFSU2_TR(0x4bc12f);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc134:{NFSU2_TR(0x4bc134);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc135:{NFSU2_TR(0x4bc135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc13aull));
TAIL_STATIC(0x51cf70u,51c);
}
B4bc13a:L4bc13a:{c.instructions+=7;NFSU2_TR(0x4bc13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc13d:{NFSU2_TR(0x4bc13d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bc140:{NFSU2_TR(0x4bc140);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4bc141:{NFSU2_TR(0x4bc141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc144:{NFSU2_TR(0x4bc144);
__builtin_memmove((R+4),(R+24),4);
}
B4bc146:{NFSU2_TR(0x4bc146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc147:{NFSU2_TR(0x4bc147);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bc010u);}goto L4bc010;}
}
B4bc14c:L4bc14c:{c.instructions+=2;NFSU2_TR(0x4bc14c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc14d:{NFSU2_TR(0x4bc14d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc150:L4bc150:{c.instructions+=4;NFSU2_TR(0x4bc150);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc151:{NFSU2_TR(0x4bc151);
__builtin_memmove((R+24),(R+4),4);
}
B4bc153:{NFSU2_TR(0x4bc153);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bc157:{NFSU2_TR(0x4bc157);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bc17b;}}
}
B4bc159:L4bc159:{c.instructions+=5;NFSU2_TR(0x4bc159);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc15c:{NFSU2_TR(0x4bc15c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc15e:{NFSU2_TR(0x4bc15e);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc163:{NFSU2_TR(0x4bc163);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc164:{NFSU2_TR(0x4bc164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc169ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4bc169:L4bc169:{c.instructions+=7;NFSU2_TR(0x4bc169);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc16c:{NFSU2_TR(0x4bc16c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bc16f:{NFSU2_TR(0x4bc16f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4bc170:{NFSU2_TR(0x4bc170);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc173:{NFSU2_TR(0x4bc173);
__builtin_memmove((R+4),(R+24),4);
}
B4bc175:{NFSU2_TR(0x4bc175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc176:{NFSU2_TR(0x4bc176);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bc010u);}goto L4bc010;}
}
B4bc17b:L4bc17b:{c.instructions+=2;NFSU2_TR(0x4bc17b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc17c:{NFSU2_TR(0x4bc17c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc180:L4bc180:{c.instructions+=10;NFSU2_TR(0x4bc180);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc184:{NFSU2_TR(0x4bc184);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bc187:{NFSU2_TR(0x4bc187);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bc18a:{NFSU2_TR(0x4bc18a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bc18c:{NFSU2_TR(0x4bc18c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc18d:{NFSU2_TR(0x4bc18d);
__builtin_memmove((R+4),gp(0x83651c),4);
}
B4bc193:{NFSU2_TR(0x4bc193);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc194:{NFSU2_TR(0x4bc194);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc195:{NFSU2_TR(0x4bc195);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc196:{NFSU2_TR(0x4bc196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc19bull));
TAIL_STATIC(0x4a0090u,4a0);
}
B4bc19b:L4bc19b:{c.instructions+=2;NFSU2_TR(0x4bc19b);
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
B4bc19e:{NFSU2_TR(0x4bc19e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc1a0:L4bc1a0:{c.instructions+=3;NFSU2_TR(0x4bc1a0);
__builtin_memmove((R+0),gp(0x8500cc),1);
}
B4bc1a5:{NFSU2_TR(0x4bc1a5);
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
B4bc1a7:{NFSU2_TR(0x4bc1a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc26d;}}
}
B4bc1ad:L4bc1ad:{c.instructions+=5;NFSU2_TR(0x4bc1ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc1ae:{NFSU2_TR(0x4bc1ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc1af:{NFSU2_TR(0x4bc1af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc1b0:{NFSU2_TR(0x4bc1b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc1b1:{NFSU2_TR(0x4bc1b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc1b6ull));
TAIL_STATIC(0x582b60u,582);
}
B4bc1b6:L4bc1b6:{c.instructions+=2;NFSU2_TR(0x4bc1b6);
__builtin_memmove((R+4),(R+0),4);
}
B4bc1b8:{NFSU2_TR(0x4bc1b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc1bdull));
TAIL_STATIC(0x582ad0u,582);
}
B4bc1bd:L4bc1bd:{c.instructions+=3;NFSU2_TR(0x4bc1bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc1bf:{NFSU2_TR(0x4bc1bf);
u8 U[4];
w4(U+0,u32(0xd15c04ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc1c4:{NFSU2_TR(0x4bc1c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc1c9ull));
TAIL_STATIC(0x55dde0u,55d);
}
B4bc1c9:L4bc1c9:{c.instructions+=5;NFSU2_TR(0x4bc1c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bc1cd:{NFSU2_TR(0x4bc1cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc1d0:{NFSU2_TR(0x4bc1d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bc1d3:{NFSU2_TR(0x4bc1d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bc1d5:{NFSU2_TR(0x4bc1d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc1db;}}
}
B4bc1d7:L4bc1d7:{c.instructions+=2;NFSU2_TR(0x4bc1d7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4bc1d9:{NFSU2_TR(0x4bc1d9);
{goto L4bc1e6;}
}
B4bc1db:L4bc1db:{c.instructions+=2;NFSU2_TR(0x4bc1db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc1dc:{NFSU2_TR(0x4bc1dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc1e1ull));
TAIL_STATIC(0x43de50u,43d);
}
B4bc1e1:L4bc1e1:{c.instructions+=2;NFSU2_TR(0x4bc1e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bc1e4:{NFSU2_TR(0x4bc1e4);
__builtin_memmove((R+24),(R+0),4);
}
B4bc1e6:L4bc1e6:{c.instructions+=5;NFSU2_TR(0x4bc1e6);
__builtin_memmove((R+0),gp(0x837ab4),1);
}
B4bc1eb:{NFSU2_TR(0x4bc1eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bc1ef:{NFSU2_TR(0x4bc1ef);
w4(R+12,u32(0x1ull));
}
B4bc1f4:{NFSU2_TR(0x4bc1f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bc1f6:{NFSU2_TR(0x4bc1f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc212;}}
}
B4bc1f8:L4bc1f8:{c.instructions+=5;NFSU2_TR(0x4bc1f8);
s4(0x837ab4,u32(u32(m4(0x837ab4))|u32(r4(R+12))));
}
B4bc1fe:{NFSU2_TR(0x4bc1fe);
__builtin_memmove(gp(0x837aa8),(R+28),4);
}
B4bc204:{NFSU2_TR(0x4bc204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc207:{NFSU2_TR(0x4bc207);
__builtin_memmove(gp(0x837aac),(R+0),4);
}
B4bc20c:{NFSU2_TR(0x4bc20c);
__builtin_memmove(gp(0x837ab0),(R+24),4);
}
B4bc212:L4bc212:{c.instructions+=6;NFSU2_TR(0x4bc212);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4bc217:{NFSU2_TR(0x4bc217);
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
B4bc219:{NFSU2_TR(0x4bc219);
__builtin_memmove((R+4),gp(0x8500d0),4);
}
B4bc21f:{NFSU2_TR(0x4bc21f);
__builtin_memmove(gp(0x83636c),(R+12),1);
}
B4bc225:{NFSU2_TR(0x4bc225);
__builtin_memmove(gp(0x7f4488),(R+4),4);
}
B4bc22b:{NFSU2_TR(0x4bc22b);
if(r1(R+518)){{goto L4bc243;}}
}
B4bc22d:L4bc22d:{c.instructions+=3;NFSU2_TR(0x4bc22d);
s4(0x836524,u32(0x4bc180ull));
}
B4bc237:{NFSU2_TR(0x4bc237);
s4(0x836528,u32(0x837aa8ull));
}
B4bc241:{NFSU2_TR(0x4bc241);
{goto L4bc257;}
}
B4bc243:L4bc243:{c.instructions+=1;NFSU2_TR(0x4bc243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc248ull));
TAIL_STATIC(0x4a0000u,4a0);
}
B4bc248:L4bc248:{c.instructions+=6;NFSU2_TR(0x4bc248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bc24b:{NFSU2_TR(0x4bc24b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc24c:{NFSU2_TR(0x4bc24c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc24d:{NFSU2_TR(0x4bc24d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc24e:{NFSU2_TR(0x4bc24e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc24f:{NFSU2_TR(0x4bc24f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc254ull));
TAIL_STATIC(0x4a0090u,4a0);
}
B4bc254:L4bc254:{c.instructions+=1;NFSU2_TR(0x4bc254);
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
B4bc257:L4bc257:{c.instructions+=3;NFSU2_TR(0x4bc257);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc259:{NFSU2_TR(0x4bc259);
w4(R+4,u32(0x850080ull));
}
B4bc25e:{NFSU2_TR(0x4bc25e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc263ull));
TAIL_STATIC(0x5031b0u,503);
}
B4bc263:L4bc263:{c.instructions+=5;NFSU2_TR(0x4bc263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bc264:{NFSU2_TR(0x4bc264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc265:{NFSU2_TR(0x4bc265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bc266:{NFSU2_TR(0x4bc266);
__builtin_memmove(gp(0x8500cc),(R+12),1);
}
B4bc26c:{NFSU2_TR(0x4bc26c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bc26d:L4bc26d:{c.instructions+=1;NFSU2_TR(0x4bc26d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc270:L4bc270:{c.instructions+=3;NFSU2_TR(0x4bc270);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc272:{NFSU2_TR(0x4bc272);
u8 U[4];
w4(U+0,u32(0xd15c04ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc277:{NFSU2_TR(0x4bc277);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc27cull));
TAIL_STATIC(0x55dde0u,55d);
}
B4bc27c:L4bc27c:{c.instructions+=2;NFSU2_TR(0x4bc27c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bc27f:{NFSU2_TR(0x4bc27f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc284ull));
TAIL_STATIC(0x582b60u,582);
}
B4bc284:L4bc284:{c.instructions+=2;NFSU2_TR(0x4bc284);
__builtin_memmove((R+4),(R+0),4);
}
B4bc286:{NFSU2_TR(0x4bc286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc28bull));
TAIL_STATIC(0x582ad0u,582);
}
B4bc28b:L4bc28b:{c.instructions+=6;NFSU2_TR(0x4bc28b);
__builtin_memmove((R+0),gp(0x8500d0),4);
}
B4bc290:{NFSU2_TR(0x4bc290);
__builtin_memmove(gp(0x7f4488),(R+0),4);
}
B4bc295:{NFSU2_TR(0x4bc295);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4bc29a:{NFSU2_TR(0x4bc29a);
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
B4bc29c:{NFSU2_TR(0x4bc29c);
s1(0x83636c,u8(0x1ull));
}
B4bc2a3:{NFSU2_TR(0x4bc2a3);
if(r1(R+518)){{goto L4bc2cd;}}
}
B4bc2a5:L4bc2a5:{c.instructions+=5;NFSU2_TR(0x4bc2a5);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc2a7:{NFSU2_TR(0x4bc2a7);
w4(R+4,u32(0x850080ull));
}
B4bc2ac:{NFSU2_TR(0x4bc2ac);
s4(0x836524,u32(0x4a0120ull));
}
B4bc2b6:{NFSU2_TR(0x4bc2b6);
s4(0x836528,u32(0x5a6f817full));
}
B4bc2c0:{NFSU2_TR(0x4bc2c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc2c5ull));
TAIL_STATIC(0x5031b0u,503);
}
B4bc2c5:L4bc2c5:{c.instructions+=2;NFSU2_TR(0x4bc2c5);
s1(0x8500cc,u8(0x1ull));
}
B4bc2cc:{NFSU2_TR(0x4bc2cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc2cd:L4bc2cd:{c.instructions+=4;NFSU2_TR(0x4bc2cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc2cf:{NFSU2_TR(0x4bc2cf);
u8 U[4];
w4(U+0,u32(0x78787878ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc2d4:{NFSU2_TR(0x4bc2d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc2d6:{NFSU2_TR(0x4bc2d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc2dbull));
TAIL_STATIC(0x49d8c0u,49d);
}
B4bc2db:L4bc2db:{c.instructions+=4;NFSU2_TR(0x4bc2db);
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
B4bc2de:{NFSU2_TR(0x4bc2de);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc2e0:{NFSU2_TR(0x4bc2e0);
w4(R+4,u32(0x850080ull));
}
B4bc2e5:{NFSU2_TR(0x4bc2e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc2eaull));
TAIL_STATIC(0x5031b0u,503);
}
B4bc2ea:L4bc2ea:{c.instructions+=2;NFSU2_TR(0x4bc2ea);
s1(0x8500cc,u8(0x1ull));
}
B4bc2f1:{NFSU2_TR(0x4bc2f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc300:L4bc300:{c.instructions+=13;NFSU2_TR(0x4bc300);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc302:{NFSU2_TR(0x4bc302);
u8 U[4];
w4(U+0,u32(0x773a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc307:{NFSU2_TR(0x4bc307);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc30d:{NFSU2_TR(0x4bc30d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc30e:{NFSU2_TR(0x4bc30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc315:{NFSU2_TR(0x4bc315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4bc318:{NFSU2_TR(0x4bc318);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc31c:{NFSU2_TR(0x4bc31c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc31d:{NFSU2_TR(0x4bc31d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc31e:{NFSU2_TR(0x4bc31e);
__builtin_memmove((R+28),(R+4),4);
}
B4bc320:{NFSU2_TR(0x4bc320);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc321:{NFSU2_TR(0x4bc321);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc325:{NFSU2_TR(0x4bc325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc32aull));
TAIL_STATIC(0x551de0u,551);
}
B4bc32a:L4bc32a:{c.instructions+=11;NFSU2_TR(0x4bc32a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bc32c:{NFSU2_TR(0x4bc32c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc32d:{NFSU2_TR(0x4bc32d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc331:{NFSU2_TR(0x4bc331);
u8 U[4];
w4(U+0,u32(0x794d94ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bc337:{NFSU2_TR(0x4bc337);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc33a:{NFSU2_TR(0x4bc33a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bc33d:{NFSU2_TR(0x4bc33d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc340:{NFSU2_TR(0x4bc340);
w4(R+24,u32(0x1ull));
}
B4bc345:{NFSU2_TR(0x4bc345);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc349:{NFSU2_TR(0x4bc349);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc34a:{NFSU2_TR(0x4bc34a);
__builtin_memmove((R+12),(R+12),4);
}
B4bc350:L4bc350:{c.instructions+=3;NFSU2_TR(0x4bc350);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cf50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4bc357:{NFSU2_TR(0x4bc357);
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
B4bc359:{NFSU2_TR(0x4bc359);
if(r1(R+518)){{goto L4bc405;}}
}
B4bc35f:L4bc35f:{c.instructions+=3;NFSU2_TR(0x4bc35f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc360:{NFSU2_TR(0x4bc360);
w4(R+4,u32(0x89cf48ull));
}
B4bc365:{NFSU2_TR(0x4bc365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc36aull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4bc36a:L4bc36a:{c.instructions+=3;NFSU2_TR(0x4bc36a);
__builtin_memmove((R+20),(R+0),4);
}
B4bc36c:{NFSU2_TR(0x4bc36c);
__builtin_memmove((R+4),(R+20),4);
}
B4bc36e:{NFSU2_TR(0x4bc36e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc373ull));
TAIL_STATIC(0x5f8fe0u,5f8);
}
B4bc373:L4bc373:{c.instructions+=7;NFSU2_TR(0x4bc373);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bc376:{NFSU2_TR(0x4bc376);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc377:{NFSU2_TR(0x4bc377);
u8 U[4];
w4(U+0,u32(0x794d84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc37c:{NFSU2_TR(0x4bc37c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bc380:{NFSU2_TR(0x4bc380);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc382:{NFSU2_TR(0x4bc382);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc383:{NFSU2_TR(0x4bc383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc388ull));
TAIL_STATIC(0x50c960u,50c);
}
B4bc388:L4bc388:{c.instructions+=7;NFSU2_TR(0x4bc388);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc38b:{NFSU2_TR(0x4bc38b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x12ull))));
}
B4bc38e:{NFSU2_TR(0x4bc38e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc38f:{NFSU2_TR(0x4bc38f);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bc393:{NFSU2_TR(0x4bc393);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc394:{NFSU2_TR(0x4bc394);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc395:{NFSU2_TR(0x4bc395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc39aull));
TAIL_STATIC(0x542600u,542);
}
B4bc39a:L4bc39a:{c.instructions+=6;NFSU2_TR(0x4bc39a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc39b:{NFSU2_TR(0x4bc39b);
u8 U[4];
w4(U+0,u32(0x794d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3a0:{NFSU2_TR(0x4bc3a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bc3a4:{NFSU2_TR(0x4bc3a4);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3a6:{NFSU2_TR(0x4bc3a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3a7:{NFSU2_TR(0x4bc3a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc3acull));
TAIL_STATIC(0x50c960u,50c);
}
B4bc3ac:L4bc3ac:{c.instructions+=3;NFSU2_TR(0x4bc3ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3ad:{NFSU2_TR(0x4bc3ad);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3b2:{NFSU2_TR(0x4bc3b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc3b7ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bc3b7:L4bc3b7:{c.instructions+=6;NFSU2_TR(0x4bc3b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bc3ba:{NFSU2_TR(0x4bc3ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B4bc3bd:{NFSU2_TR(0x4bc3bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3be:{NFSU2_TR(0x4bc3be);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bc3c2:{NFSU2_TR(0x4bc3c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3c3:{NFSU2_TR(0x4bc3c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc3c8ull));
TAIL_STATIC(0x505450u,505);
}
B4bc3c8:L4bc3c8:{c.instructions+=3;NFSU2_TR(0x4bc3c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3c9:{NFSU2_TR(0x4bc3c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3ca:{NFSU2_TR(0x4bc3ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc3cfull));
TAIL_STATIC(0x537a10u,537);
}
B4bc3cf:L4bc3cf:{c.instructions+=3;NFSU2_TR(0x4bc3cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bc3d2:{NFSU2_TR(0x4bc3d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3d3:{NFSU2_TR(0x4bc3d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc3d8ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bc3d8:L4bc3d8:{c.instructions+=6;NFSU2_TR(0x4bc3d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3d9:{NFSU2_TR(0x4bc3d9);
u8 U[4];
w4(U+0,u32(0x790050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3de:{NFSU2_TR(0x4bc3de);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bc3e2:{NFSU2_TR(0x4bc3e2);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3e4:{NFSU2_TR(0x4bc3e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3e5:{NFSU2_TR(0x4bc3e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc3eaull));
TAIL_STATIC(0x50c960u,50c);
}
B4bc3ea:L4bc3ea:{c.instructions+=6;NFSU2_TR(0x4bc3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bc3ed:{NFSU2_TR(0x4bc3ed);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3f2:{NFSU2_TR(0x4bc3f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bc3f6:{NFSU2_TR(0x4bc3f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3f7:{NFSU2_TR(0x4bc3f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc3f8:{NFSU2_TR(0x4bc3f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc3fdull));
TAIL_STATIC(0x542600u,542);
}
B4bc3fd:L4bc3fd:{c.instructions+=3;NFSU2_TR(0x4bc3fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc401:{NFSU2_TR(0x4bc401);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4bc404:{NFSU2_TR(0x4bc404);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4bc405:L4bc405:{c.instructions+=4;NFSU2_TR(0x4bc405);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4bc406:{NFSU2_TR(0x4bc406);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bc409:{NFSU2_TR(0x4bc409);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc40d:{NFSU2_TR(0x4bc40d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bc350u);}goto L4bc350;}}
}
B4bc413:L4bc413:{c.instructions+=4;NFSU2_TR(0x4bc413);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bc416:{NFSU2_TR(0x4bc416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bc417:{NFSU2_TR(0x4bc417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bc418:{NFSU2_TR(0x4bc418);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4bc49b;}}
}
B4bc41e:L4bc41e:{c.instructions+=1;NFSU2_TR(0x4bc41e);
__builtin_memmove((R+28),(R+28),4);
}
B4bc420:L4bc420:{c.instructions+=6;NFSU2_TR(0x4bc420);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc421:{NFSU2_TR(0x4bc421);
u8 U[4];
w4(U+0,u32(0x794d84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc426:{NFSU2_TR(0x4bc426);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bc42a:{NFSU2_TR(0x4bc42a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc42c:{NFSU2_TR(0x4bc42c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc42d:{NFSU2_TR(0x4bc42d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc432ull));
TAIL_STATIC(0x50c960u,50c);
}
B4bc432:L4bc432:{c.instructions+=6;NFSU2_TR(0x4bc432);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bc435:{NFSU2_TR(0x4bc435);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc43a:{NFSU2_TR(0x4bc43a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bc43e:{NFSU2_TR(0x4bc43e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc43f:{NFSU2_TR(0x4bc43f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc440:{NFSU2_TR(0x4bc440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc445ull));
TAIL_STATIC(0x542600u,542);
}
B4bc445:L4bc445:{c.instructions+=6;NFSU2_TR(0x4bc445);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc446:{NFSU2_TR(0x4bc446);
u8 U[4];
w4(U+0,u32(0x794d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc44b:{NFSU2_TR(0x4bc44b);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bc44f:{NFSU2_TR(0x4bc44f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc451:{NFSU2_TR(0x4bc451);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc452:{NFSU2_TR(0x4bc452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc457ull));
TAIL_STATIC(0x50c960u,50c);
}
B4bc457:L4bc457:{c.instructions+=6;NFSU2_TR(0x4bc457);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bc45a:{NFSU2_TR(0x4bc45a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc45f:{NFSU2_TR(0x4bc45f);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bc463:{NFSU2_TR(0x4bc463);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc464:{NFSU2_TR(0x4bc464);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc465:{NFSU2_TR(0x4bc465);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc46aull));
TAIL_STATIC(0x542600u,542);
}
B4bc46a:L4bc46a:{c.instructions+=6;NFSU2_TR(0x4bc46a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc46b:{NFSU2_TR(0x4bc46b);
u8 U[4];
w4(U+0,u32(0x790050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc470:{NFSU2_TR(0x4bc470);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bc474:{NFSU2_TR(0x4bc474);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc476:{NFSU2_TR(0x4bc476);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc477:{NFSU2_TR(0x4bc477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc47cull));
TAIL_STATIC(0x50c960u,50c);
}
B4bc47c:L4bc47c:{c.instructions+=7;NFSU2_TR(0x4bc47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bc47f:{NFSU2_TR(0x4bc47f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B4bc482:{NFSU2_TR(0x4bc482);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc487:{NFSU2_TR(0x4bc487);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bc48b:{NFSU2_TR(0x4bc48b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc48c:{NFSU2_TR(0x4bc48c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc48d:{NFSU2_TR(0x4bc48d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc492ull));
TAIL_STATIC(0x542600u,542);
}
B4bc492:L4bc492:{c.instructions+=4;NFSU2_TR(0x4bc492);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bc495:{NFSU2_TR(0x4bc495);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4bc496:{NFSU2_TR(0x4bc496);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bc499:{NFSU2_TR(0x4bc499);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bc420u);}goto L4bc420;}}
}
B4bc49b:L4bc49b:{c.instructions+=1;NFSU2_TR(0x4bc49b);
w4(R+24,u32(0x1ull));
}
B4bc4a0:L4bc4a0:{c.instructions+=6;NFSU2_TR(0x4bc4a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc4a1:{NFSU2_TR(0x4bc4a1);
u8 U[4];
w4(U+0,u32(0x794d68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc4a6:{NFSU2_TR(0x4bc4a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bc4aa:{NFSU2_TR(0x4bc4aa);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc4ac:{NFSU2_TR(0x4bc4ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc4ad:{NFSU2_TR(0x4bc4ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc4b2ull));
TAIL_STATIC(0x50c960u,50c);
}
B4bc4b2:L4bc4b2:{c.instructions+=6;NFSU2_TR(0x4bc4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bc4b5:{NFSU2_TR(0x4bc4b5);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc4ba:{NFSU2_TR(0x4bc4ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bc4be:{NFSU2_TR(0x4bc4be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc4bf:{NFSU2_TR(0x4bc4bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc4c0:{NFSU2_TR(0x4bc4c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc4c5ull));
TAIL_STATIC(0x542600u,542);
}
B4bc4c5:L4bc4c5:{c.instructions+=4;NFSU2_TR(0x4bc4c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4bc4c8:{NFSU2_TR(0x4bc4c8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4bc4c9:{NFSU2_TR(0x4bc4c9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bc4cc:{NFSU2_TR(0x4bc4cc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bc4a0u);}goto L4bc4a0;}}
}
B4bc4ce:L4bc4ce:{c.instructions+=2;NFSU2_TR(0x4bc4ce);
__builtin_memmove((R+4),(R+28),4);
}
B4bc4d0:{NFSU2_TR(0x4bc4d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc4d5ull));
TAIL_STATIC(0x4a0360u,4a0);
}
B4bc4d5:L4bc4d5:{c.instructions+=7;NFSU2_TR(0x4bc4d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bc4d9:{NFSU2_TR(0x4bc4d9);
__builtin_memmove((R+0),(R+28),4);
}
B4bc4db:{NFSU2_TR(0x4bc4db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bc4dc:{NFSU2_TR(0x4bc4dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc4dd:{NFSU2_TR(0x4bc4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc4e4:{NFSU2_TR(0x4bc4e4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bc4e7:{NFSU2_TR(0x4bc4e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc4f0:L4bc4f0:{c.instructions+=3;NFSU2_TR(0x4bc4f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc4f1:{NFSU2_TR(0x4bc4f1);
__builtin_memmove((R+24),(R+4),4);
}
B4bc4f3:{NFSU2_TR(0x4bc4f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc4f8ull));
{goto L4bc510;}
}
B4bc4f8:L4bc4f8:{c.instructions+=2;NFSU2_TR(0x4bc4f8);
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
B4bc4fd:{NFSU2_TR(0x4bc4fd);
if(r1(R+518)){{goto L4bc508;}}
}
B4bc4ff:L4bc4ff:{c.instructions+=2;NFSU2_TR(0x4bc4ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc500:{NFSU2_TR(0x4bc500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc505ull));
TAIL_STATIC(0x575630u,575);
}
B4bc505:L4bc505:{c.instructions+=1;NFSU2_TR(0x4bc505);
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
B4bc508:L4bc508:{c.instructions+=3;NFSU2_TR(0x4bc508);
__builtin_memmove((R+0),(R+24),4);
}
B4bc50a:{NFSU2_TR(0x4bc50a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc50b:{NFSU2_TR(0x4bc50b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc510:L4bc510:{c.instructions+=2;NFSU2_TR(0x4bc510);
u8 U[4];
w4(U+0,u32(0x794d94ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4bc516:{NFSU2_TR(0x4bc516);
TAIL_STATIC(0x510d40u,510);
}
B4bc520:L4bc520:{c.instructions+=5;NFSU2_TR(0x4bc520);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc524:{NFSU2_TR(0x4bc524);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bc529:{NFSU2_TR(0x4bc529);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc52a:{NFSU2_TR(0x4bc52a);
__builtin_memmove((R+24),(R+4),4);
}
B4bc52c:{NFSU2_TR(0x4bc52c);
if(r1(R+518)){{goto L4bc590;}}
}
B4bc52e:L4bc52e:{c.instructions+=2;NFSU2_TR(0x4bc52e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bc533:{NFSU2_TR(0x4bc533);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc5d2;}}
}
B4bc539:L4bc539:{c.instructions+=2;NFSU2_TR(0x4bc539);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bc540:{NFSU2_TR(0x4bc540);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc553;}}
}
B4bc542:L4bc542:{c.instructions+=2;NFSU2_TR(0x4bc542);
u8 U[4];
w4(U+0,u32(0x794da4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc547:{NFSU2_TR(0x4bc547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc54cull));
TAIL_STATIC(0x558f00u,558);
}
B4bc54c:L4bc54c:{c.instructions+=3;NFSU2_TR(0x4bc54c);
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
B4bc54f:{NFSU2_TR(0x4bc54f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc550:{NFSU2_TR(0x4bc550);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc553:L4bc553:{c.instructions+=2;NFSU2_TR(0x4bc553);
__builtin_memmove((R+4),(R+24),4);
}
B4bc555:{NFSU2_TR(0x4bc555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc55aull));
TAIL_STATIC(0x4a0360u,4a0);
}
B4bc55a:L4bc55a:{c.instructions+=6;NFSU2_TR(0x4bc55a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bc55d:{NFSU2_TR(0x4bc55d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4bc55e:{NFSU2_TR(0x4bc55e);
__builtin_memmove((R+0),(R+4),4);
}
B4bc560:{NFSU2_TR(0x4bc560);
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
B4bc563:{NFSU2_TR(0x4bc563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc566:{NFSU2_TR(0x4bc566);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bc5d2;}}
}
B4bc568:L4bc568:{c.instructions+=2;NFSU2_TR(0x4bc568);
w4(R+4,u32(0x89cf48ull));
}
B4bc56d:{NFSU2_TR(0x4bc56d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc572ull));
TAIL_STATIC(0x5fe370u,5fe);
}
B4bc572:L4bc572:{c.instructions+=2;NFSU2_TR(0x4bc572);
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
B4bc574:{NFSU2_TR(0x4bc574);
if(r1(R+518)){{goto L4bc5d2;}}
}
B4bc576:L4bc576:{c.instructions+=3;NFSU2_TR(0x4bc576);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc579:{NFSU2_TR(0x4bc579);
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
B4bc57b:{NFSU2_TR(0x4bc57b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc5d2;}}
}
B4bc57d:L4bc57d:{c.instructions+=3;NFSU2_TR(0x4bc57d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc580:{NFSU2_TR(0x4bc580);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc581:{NFSU2_TR(0x4bc581);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc586ull));
TAIL_STATIC(0x4a0200u,4a0);
}
B4bc586:L4bc586:{c.instructions+=4;NFSU2_TR(0x4bc586);
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
B4bc589:{NFSU2_TR(0x4bc589);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc58c:{NFSU2_TR(0x4bc58c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc58d:{NFSU2_TR(0x4bc58d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc590:L4bc590:{c.instructions+=3;NFSU2_TR(0x4bc590);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc592:{NFSU2_TR(0x4bc592);
w4(R+4,u32(0x83a9d0ull));
}
B4bc597:{NFSU2_TR(0x4bc597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc59cull));
TAIL_STATIC(0x502ff0u,502);
}
B4bc59c:L4bc59c:{c.instructions+=2;NFSU2_TR(0x4bc59c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc59d:{NFSU2_TR(0x4bc59d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc5a2ull));
TAIL_STATIC(0x50c8d0u,50c);
}
B4bc5a2:L4bc5a2:{c.instructions+=4;NFSU2_TR(0x4bc5a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bc5a5:{NFSU2_TR(0x4bc5a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc5a7:{NFSU2_TR(0x4bc5a7);
w4(R+4,u32(0x83a9d0ull));
}
B4bc5ac:{NFSU2_TR(0x4bc5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc5b1ull));
TAIL_STATIC(0x503040u,503);
}
B4bc5b1:L4bc5b1:{c.instructions+=4;NFSU2_TR(0x4bc5b1);
s4(0x89e7b0,u32(0x0ull));
}
B4bc5bb:{NFSU2_TR(0x4bc5bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc5be:{NFSU2_TR(0x4bc5be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc5bf:{NFSU2_TR(0x4bc5bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc5c4ull));
TAIL_STATIC(0x558f00u,558);
}
B4bc5c4:L4bc5c4:{c.instructions+=3;NFSU2_TR(0x4bc5c4);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4bc5ca:{NFSU2_TR(0x4bc5ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bc5cd:{NFSU2_TR(0x4bc5cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc5d2ull));
TAIL_STATIC(0x603790u,603);
}
B4bc5d2:L4bc5d2:{c.instructions+=2;NFSU2_TR(0x4bc5d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc5d3:{NFSU2_TR(0x4bc5d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc5e0:L4bc5e0:{c.instructions+=4;NFSU2_TR(0x4bc5e0);
__builtin_memmove((R+0),gp(0x7f44f8),4);
}
B4bc5e5:{NFSU2_TR(0x4bc5e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B4bc5eb:{NFSU2_TR(0x4bc5eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc5ec:{NFSU2_TR(0x4bc5ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc5f1ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4bc5f1:L4bc5f1:{c.instructions+=4;NFSU2_TR(0x4bc5f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc5f8:{NFSU2_TR(0x4bc5f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bc5fb:{NFSU2_TR(0x4bc5fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bc600:{NFSU2_TR(0x4bc600);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc6aa;}}
}
B4bc606:L4bc606:{c.instructions+=3;NFSU2_TR(0x4bc606);
__builtin_memmove((R+0),gp(0x838520),1);
}
B4bc60b:{NFSU2_TR(0x4bc60b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bc60d:{NFSU2_TR(0x4bc60d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc6aa;}}
}
B4bc613:L4bc613:{c.instructions+=2;NFSU2_TR(0x4bc613);
s1(0x838528,u8(0x0ull));
}
B4bc61a:{NFSU2_TR(0x4bc61a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc61full));
TAIL_STATIC(0x58a0e0u,58a);
}
B4bc61f:L4bc61f:{c.instructions+=2;NFSU2_TR(0x4bc61f);
__builtin_memmove((R+4),(R+0),4);
}
B4bc621:{NFSU2_TR(0x4bc621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc626ull));
TAIL_STATIC(0x582380u,582);
}
B4bc626:L4bc626:{c.instructions+=3;NFSU2_TR(0x4bc626);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bc628:{NFSU2_TR(0x4bc628);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+16)),r1(U+0));
}
B4bc62d:{NFSU2_TR(0x4bc62d);
if(r1(R+518)){{goto L4bc655;}}
}
B4bc62f:L4bc62f:{c.instructions+=7;NFSU2_TR(0x4bc62f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc634:{NFSU2_TR(0x4bc634);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc639:{NFSU2_TR(0x4bc639);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bc63d:{NFSU2_TR(0x4bc63d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc63e:{NFSU2_TR(0x4bc63e);
u8 U[4];
w4(U+0,u32(0x794dd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc643:{NFSU2_TR(0x4bc643);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc644:{NFSU2_TR(0x4bc644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc649ull));
TAIL_STATIC(0x7414a0u,741);
}
B4bc649:L4bc649:{c.instructions+=3;NFSU2_TR(0x4bc649);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bc64c:{NFSU2_TR(0x4bc64c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc64d:{NFSU2_TR(0x4bc64d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc652ull));
TAIL_STATIC(0x742360u,742);
}
B4bc652:L4bc652:{c.instructions+=1;NFSU2_TR(0x4bc652);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bc655:L4bc655:{c.instructions+=8;NFSU2_TR(0x4bc655);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc656:{NFSU2_TR(0x4bc656);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc65b:{NFSU2_TR(0x4bc65b);
u8 U[4];
w4(U+0,u32(0x3efe5317ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc660:{NFSU2_TR(0x4bc660);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc662:{NFSU2_TR(0x4bc662);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bc666:{NFSU2_TR(0x4bc666);
u8 U[4];
w4(U+0,u32(0x783f8d11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc66b:{NFSU2_TR(0x4bc66b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc66c:{NFSU2_TR(0x4bc66c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc671ull));
TAIL_STATIC(0x49cdb0u,49c);
}
B4bc671:L4bc671:{c.instructions+=6;NFSU2_TR(0x4bc671);
__builtin_memmove((R+0),gp(0x7f44f8),4);
}
B4bc676:{NFSU2_TR(0x4bc676);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc678:{NFSU2_TR(0x4bc678);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc679:{NFSU2_TR(0x4bc679);
u8 U[4];
w4(U+0,u32(0x835b98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc67e:{NFSU2_TR(0x4bc67e);
__builtin_memmove((R+24),(R+0),4);
}
B4bc680:{NFSU2_TR(0x4bc680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc685ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4bc685:L4bc685:{c.instructions+=4;NFSU2_TR(0x4bc685);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc687:{NFSU2_TR(0x4bc687);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc688:{NFSU2_TR(0x4bc688);
u8 U[4];
w4(U+0,u32(0x836304ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc68d:{NFSU2_TR(0x4bc68d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc692ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4bc692:L4bc692:{c.instructions+=5;NFSU2_TR(0x4bc692);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc699:{NFSU2_TR(0x4bc699);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc69b:{NFSU2_TR(0x4bc69b);
u8 U[4];
w4(U+0,u32(0x794dc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc6a0:{NFSU2_TR(0x4bc6a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc6a1:{NFSU2_TR(0x4bc6a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc6a6ull));
TAIL_STATIC(0x537980u,537);
}
B4bc6a6:L4bc6a6:{c.instructions+=2;NFSU2_TR(0x4bc6a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B4bc6a9:{NFSU2_TR(0x4bc6a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc6aa:L4bc6aa:{c.instructions+=2;NFSU2_TR(0x4bc6aa);
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
B4bc6b0:{NFSU2_TR(0x4bc6b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc6c0:L4bc6c0:{c.instructions+=2;NFSU2_TR(0x4bc6c0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bc6c8:{NFSU2_TR(0x4bc6c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc6de;}}
}
B4bc6ca:L4bc6ca:{c.instructions+=5;NFSU2_TR(0x4bc6ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc6ce:{NFSU2_TR(0x4bc6ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc6d0:{NFSU2_TR(0x4bc6d0);
u8 U[4];
w4(U+0,u32(0x78f320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc6d5:{NFSU2_TR(0x4bc6d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc6d6:{NFSU2_TR(0x4bc6d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc6dbull));
TAIL_STATIC(0x537980u,537);
}
B4bc6db:L4bc6db:{c.instructions+=1;NFSU2_TR(0x4bc6db);
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
B4bc6de:L4bc6de:{c.instructions+=1;NFSU2_TR(0x4bc6de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc6f0:L4bc6f0:{c.instructions+=2;NFSU2_TR(0x4bc6f0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bc6f8:{NFSU2_TR(0x4bc6f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc724;}}
}
B4bc6fa:L4bc6fa:{c.instructions+=2;NFSU2_TR(0x4bc6fa);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bc704:{NFSU2_TR(0x4bc704);
if(r1(R+518)){{goto L4bc710;}}
}
B4bc706:L4bc706:{c.instructions+=1;NFSU2_TR(0x4bc706);
s4(0x850078,u32(0x8ull));
}
B4bc710:L4bc710:{c.instructions+=5;NFSU2_TR(0x4bc710);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc714:{NFSU2_TR(0x4bc714);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc716:{NFSU2_TR(0x4bc716);
u8 U[4];
w4(U+0,u32(0x794df0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc71b:{NFSU2_TR(0x4bc71b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc71c:{NFSU2_TR(0x4bc71c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc721ull));
TAIL_STATIC(0x537980u,537);
}
B4bc721:L4bc721:{c.instructions+=1;NFSU2_TR(0x4bc721);
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
B4bc724:L4bc724:{c.instructions+=1;NFSU2_TR(0x4bc724);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc730:L4bc730:{c.instructions+=2;NFSU2_TR(0x4bc730);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bc738:{NFSU2_TR(0x4bc738);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc74e;}}
}
B4bc73a:L4bc73a:{c.instructions+=5;NFSU2_TR(0x4bc73a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc73e:{NFSU2_TR(0x4bc73e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc740:{NFSU2_TR(0x4bc740);
u8 U[4];
w4(U+0,u32(0x790070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc745:{NFSU2_TR(0x4bc745);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc746:{NFSU2_TR(0x4bc746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc74bull));
TAIL_STATIC(0x537980u,537);
}
B4bc74b:L4bc74b:{c.instructions+=1;NFSU2_TR(0x4bc74b);
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
B4bc74e:L4bc74e:{c.instructions+=1;NFSU2_TR(0x4bc74e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc760:L4bc760:{c.instructions+=2;NFSU2_TR(0x4bc760);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bc768:{NFSU2_TR(0x4bc768);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc79e;}}
}
B4bc76a:L4bc76a:{c.instructions+=4;NFSU2_TR(0x4bc76a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc76c:{NFSU2_TR(0x4bc76c);
w4(R+4,u32(0x83a9d0ull));
}
B4bc771:{NFSU2_TR(0x4bc771);
s4(0x83635c,u32(0x78f240ull));
}
B4bc77b:{NFSU2_TR(0x4bc77b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc780ull));
TAIL_STATIC(0x52a460u,52a);
}
B4bc780:L4bc780:{c.instructions+=4;NFSU2_TR(0x4bc780);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc782:{NFSU2_TR(0x4bc782);
u8 U[4];
w4(U+0,u32(0x78fa3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc787:{NFSU2_TR(0x4bc787);
u8 U[4];
w4(U+0,u32(0x78f240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc78c:{NFSU2_TR(0x4bc78c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc791ull));
TAIL_STATIC(0x537980u,537);
}
B4bc791:L4bc791:{c.instructions+=3;NFSU2_TR(0x4bc791);
__builtin_memmove((R+0),gp(0x844ad8),1);
}
B4bc796:{NFSU2_TR(0x4bc796);
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
B4bc799:{NFSU2_TR(0x4bc799);
__builtin_memmove(gp(0x836360),(R+0),1);
}
B4bc79e:L4bc79e:{c.instructions+=1;NFSU2_TR(0x4bc79e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc7b0:L4bc7b0:{c.instructions+=14;NFSU2_TR(0x4bc7b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc7b2:{NFSU2_TR(0x4bc7b2);
u8 U[4];
w4(U+0,u32(0x773914ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc7b7:{NFSU2_TR(0x4bc7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc7bd:{NFSU2_TR(0x4bc7bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc7be:{NFSU2_TR(0x4bc7be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc7c5:{NFSU2_TR(0x4bc7c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc7c6:{NFSU2_TR(0x4bc7c6);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4bc7cb:{NFSU2_TR(0x4bc7cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc7cc:{NFSU2_TR(0x4bc7cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc7cd:{NFSU2_TR(0x4bc7cd);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B4bc7d0:{NFSU2_TR(0x4bc7d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bc7d5:{NFSU2_TR(0x4bc7d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc7d6:{NFSU2_TR(0x4bc7d6);
__builtin_memmove((R+24),(R+4),4);
}
B4bc7d8:{NFSU2_TR(0x4bc7d8);
if(r1(R+518)){{goto L4bc81f;}}
}
B4bc7da:L4bc7da:{c.instructions+=2;NFSU2_TR(0x4bc7da);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc7dc:{NFSU2_TR(0x4bc7dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc7e1ull));
TAIL_STATIC(0x575620u,575);
}
B4bc7e1:L4bc7e1:{c.instructions+=6;NFSU2_TR(0x4bc7e1);
__builtin_memmove((R+28),(R+0),4);
}
B4bc7e3:{NFSU2_TR(0x4bc7e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bc7e6:{NFSU2_TR(0x4bc7e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc7ea:{NFSU2_TR(0x4bc7ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bc7ec:{NFSU2_TR(0x4bc7ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bc7f4:{NFSU2_TR(0x4bc7f4);
if(r1(R+518)){{goto L4bc811;}}
}
B4bc7f6:L4bc7f6:{c.instructions+=5;NFSU2_TR(0x4bc7f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc7f8:{NFSU2_TR(0x4bc7f8);
u8 U[4];
w4(U+0,u32(0x4815fdbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc7fd:{NFSU2_TR(0x4bc7fd);
u8 U[4];
w4(U+0,u32(0x114f5968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc802:{NFSU2_TR(0x4bc802);
__builtin_memmove((R+4),(R+28),4);
}
B4bc804:{NFSU2_TR(0x4bc804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc809ull));
TAIL_STATIC(0x51f670u,51f);
}
B4bc809:L4bc809:{c.instructions+=2;NFSU2_TR(0x4bc809);
u8 U[4];
w4(U+0,u32(0x794dbcull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bc80f:{NFSU2_TR(0x4bc80f);
{goto L4bc813;}
}
B4bc811:L4bc811:{c.instructions+=1;NFSU2_TR(0x4bc811);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bc813:L4bc813:{c.instructions+=5;NFSU2_TR(0x4bc813);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bc815:{NFSU2_TR(0x4bc815);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc816:{NFSU2_TR(0x4bc816);
__builtin_memmove((R+4),(R+24),4);
}
B4bc818:{NFSU2_TR(0x4bc818);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc81c:{NFSU2_TR(0x4bc81c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc81full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bc81f:L4bc81f:{c.instructions+=2;NFSU2_TR(0x4bc81f);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc821:{NFSU2_TR(0x4bc821);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc826ull));
TAIL_STATIC(0x575620u,575);
}
B4bc826:L4bc826:{c.instructions+=6;NFSU2_TR(0x4bc826);
__builtin_memmove((R+28),(R+0),4);
}
B4bc828:{NFSU2_TR(0x4bc828);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bc82b:{NFSU2_TR(0x4bc82b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc82f:{NFSU2_TR(0x4bc82f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bc831:{NFSU2_TR(0x4bc831);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bc839:{NFSU2_TR(0x4bc839);
if(r1(R+518)){{goto L4bc85a;}}
}
B4bc83b:L4bc83b:{c.instructions+=5;NFSU2_TR(0x4bc83b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc83d:{NFSU2_TR(0x4bc83d);
u8 U[4];
w4(U+0,u32(0x4ab6a4f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc842:{NFSU2_TR(0x4bc842);
u8 U[4];
w4(U+0,u32(0x3b1b7603ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc847:{NFSU2_TR(0x4bc847);
__builtin_memmove((R+4),(R+28),4);
}
B4bc849:{NFSU2_TR(0x4bc849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc84eull));
TAIL_STATIC(0x51f670u,51f);
}
B4bc84e:L4bc84e:{c.instructions+=3;NFSU2_TR(0x4bc84e);
u8 U[4];
w4(U+0,u32(0x794de0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bc854:{NFSU2_TR(0x4bc854);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bc858:{NFSU2_TR(0x4bc858);
{goto L4bc85c;}
}
B4bc85a:L4bc85a:{c.instructions+=1;NFSU2_TR(0x4bc85a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bc85c:L4bc85c:{c.instructions+=5;NFSU2_TR(0x4bc85c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bc85e:{NFSU2_TR(0x4bc85e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc85f:{NFSU2_TR(0x4bc85f);
__builtin_memmove((R+4),(R+24),4);
}
B4bc861:{NFSU2_TR(0x4bc861);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc865:{NFSU2_TR(0x4bc865);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc868ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bc868:L4bc868:{c.instructions+=2;NFSU2_TR(0x4bc868);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc86a:{NFSU2_TR(0x4bc86a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc86full));
TAIL_STATIC(0x575620u,575);
}
B4bc86f:L4bc86f:{c.instructions+=6;NFSU2_TR(0x4bc86f);
__builtin_memmove((R+28),(R+0),4);
}
B4bc871:{NFSU2_TR(0x4bc871);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bc874:{NFSU2_TR(0x4bc874);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc878:{NFSU2_TR(0x4bc878);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bc87a:{NFSU2_TR(0x4bc87a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bc882:{NFSU2_TR(0x4bc882);
if(r1(R+518)){{goto L4bc89f;}}
}
B4bc884:L4bc884:{c.instructions+=5;NFSU2_TR(0x4bc884);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc886:{NFSU2_TR(0x4bc886);
u8 U[4];
w4(U+0,u32(0xc0bedf15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc88b:{NFSU2_TR(0x4bc88b);
u8 U[4];
w4(U+0,u32(0x9c0a19e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc890:{NFSU2_TR(0x4bc890);
__builtin_memmove((R+4),(R+28),4);
}
B4bc892:{NFSU2_TR(0x4bc892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc897ull));
TAIL_STATIC(0x51f670u,51f);
}
B4bc897:L4bc897:{c.instructions+=2;NFSU2_TR(0x4bc897);
u8 U[4];
w4(U+0,u32(0x794de8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bc89d:{NFSU2_TR(0x4bc89d);
{goto L4bc8a1;}
}
B4bc89f:L4bc89f:{c.instructions+=1;NFSU2_TR(0x4bc89f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bc8a1:L4bc8a1:{c.instructions+=5;NFSU2_TR(0x4bc8a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bc8a3:{NFSU2_TR(0x4bc8a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc8a4:{NFSU2_TR(0x4bc8a4);
__builtin_memmove((R+4),(R+24),4);
}
B4bc8a6:{NFSU2_TR(0x4bc8a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc8aa:{NFSU2_TR(0x4bc8aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc8adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bc8ad:L4bc8ad:{c.instructions+=2;NFSU2_TR(0x4bc8ad);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bc8b7:{NFSU2_TR(0x4bc8b7);
if(r1(R+518)){{goto L4bc8fe;}}
}
B4bc8b9:L4bc8b9:{c.instructions+=2;NFSU2_TR(0x4bc8b9);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc8bb:{NFSU2_TR(0x4bc8bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc8c0ull));
TAIL_STATIC(0x575620u,575);
}
B4bc8c0:L4bc8c0:{c.instructions+=6;NFSU2_TR(0x4bc8c0);
__builtin_memmove((R+28),(R+0),4);
}
B4bc8c2:{NFSU2_TR(0x4bc8c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bc8c5:{NFSU2_TR(0x4bc8c5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc8c9:{NFSU2_TR(0x4bc8c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bc8cb:{NFSU2_TR(0x4bc8cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bc8d3:{NFSU2_TR(0x4bc8d3);
if(r1(R+518)){{goto L4bc8f0;}}
}
B4bc8d5:L4bc8d5:{c.instructions+=5;NFSU2_TR(0x4bc8d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc8d7:{NFSU2_TR(0x4bc8d7);
u8 U[4];
w4(U+0,u32(0x8106d26aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc8dc:{NFSU2_TR(0x4bc8dc);
u8 U[4];
w4(U+0,u32(0xda665928ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc8e1:{NFSU2_TR(0x4bc8e1);
__builtin_memmove((R+4),(R+28),4);
}
B4bc8e3:{NFSU2_TR(0x4bc8e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc8e8ull));
TAIL_STATIC(0x51f670u,51f);
}
B4bc8e8:L4bc8e8:{c.instructions+=2;NFSU2_TR(0x4bc8e8);
u8 U[4];
w4(U+0,u32(0x794e04ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bc8ee:{NFSU2_TR(0x4bc8ee);
{goto L4bc8f2;}
}
B4bc8f0:L4bc8f0:{c.instructions+=1;NFSU2_TR(0x4bc8f0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bc8f2:L4bc8f2:{c.instructions+=5;NFSU2_TR(0x4bc8f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bc8f4:{NFSU2_TR(0x4bc8f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc8f5:{NFSU2_TR(0x4bc8f5);
__builtin_memmove((R+4),(R+24),4);
}
B4bc8f7:{NFSU2_TR(0x4bc8f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc8fb:{NFSU2_TR(0x4bc8fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc8feull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bc8fe:L4bc8fe:{c.instructions+=2;NFSU2_TR(0x4bc8fe);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc900:{NFSU2_TR(0x4bc900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc905ull));
TAIL_STATIC(0x575620u,575);
}
B4bc905:L4bc905:{c.instructions+=6;NFSU2_TR(0x4bc905);
__builtin_memmove((R+28),(R+0),4);
}
B4bc907:{NFSU2_TR(0x4bc907);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bc90a:{NFSU2_TR(0x4bc90a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc90e:{NFSU2_TR(0x4bc90e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bc910:{NFSU2_TR(0x4bc910);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bc918:{NFSU2_TR(0x4bc918);
if(r1(R+518)){{goto L4bc935;}}
}
B4bc91a:L4bc91a:{c.instructions+=5;NFSU2_TR(0x4bc91a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc91c:{NFSU2_TR(0x4bc91c);
u8 U[4];
w4(U+0,u32(0xbd81116cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc921:{NFSU2_TR(0x4bc921);
u8 U[4];
w4(U+0,u32(0x5a5e5137ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc926:{NFSU2_TR(0x4bc926);
__builtin_memmove((R+4),(R+28),4);
}
B4bc928:{NFSU2_TR(0x4bc928);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc92dull));
TAIL_STATIC(0x51f670u,51f);
}
B4bc92d:L4bc92d:{c.instructions+=2;NFSU2_TR(0x4bc92d);
u8 U[4];
w4(U+0,u32(0x794e0cull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bc933:{NFSU2_TR(0x4bc933);
{goto L4bc937;}
}
B4bc935:L4bc935:{c.instructions+=1;NFSU2_TR(0x4bc935);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bc937:L4bc937:{c.instructions+=5;NFSU2_TR(0x4bc937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bc939:{NFSU2_TR(0x4bc939);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc93a:{NFSU2_TR(0x4bc93a);
__builtin_memmove((R+4),(R+24),4);
}
B4bc93c:{NFSU2_TR(0x4bc93c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc940:{NFSU2_TR(0x4bc940);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc943ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bc943:L4bc943:{c.instructions+=5;NFSU2_TR(0x4bc943);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc946:{NFSU2_TR(0x4bc946);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bc949:{NFSU2_TR(0x4bc949);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bc94c:{NFSU2_TR(0x4bc94c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc94d:{NFSU2_TR(0x4bc94d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc952ull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4bc952:L4bc952:{c.instructions+=4;NFSU2_TR(0x4bc952);
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
B4bc955:{NFSU2_TR(0x4bc955);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc956:{NFSU2_TR(0x4bc956);
__builtin_memmove((R+4),(R+28),4);
}
B4bc958:{NFSU2_TR(0x4bc958);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc95bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bc95b:L4bc95b:{c.instructions+=2;NFSU2_TR(0x4bc95b);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bc965:{NFSU2_TR(0x4bc965);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc983;}}
}
B4bc967:L4bc967:{c.instructions+=3;NFSU2_TR(0x4bc967);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bc96a:{NFSU2_TR(0x4bc96a);
u8 U[4];
w4(U+0,u32(0x3f6f2bfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc96f:{NFSU2_TR(0x4bc96f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc974ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bc974:L4bc974:{c.instructions+=4;NFSU2_TR(0x4bc974);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc975:{NFSU2_TR(0x4bc975);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc97a:{NFSU2_TR(0x4bc97a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc97b:{NFSU2_TR(0x4bc97b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc980ull));
TAIL_STATIC(0x542600u,542);
}
B4bc980:L4bc980:{c.instructions+=1;NFSU2_TR(0x4bc980);
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
B4bc983:L4bc983:{c.instructions+=3;NFSU2_TR(0x4bc983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bc985:{NFSU2_TR(0x4bc985);
__builtin_memmove((R+4),(R+24),4);
}
B4bc987:{NFSU2_TR(0x4bc987);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc98aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bc98a:L4bc98a:{c.instructions+=3;NFSU2_TR(0x4bc98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc98d:{NFSU2_TR(0x4bc98d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bc98f:{NFSU2_TR(0x4bc98f);
if(r1(R+518)){{goto L4bc9b5;}}
}
B4bc991:L4bc991:{c.instructions+=3;NFSU2_TR(0x4bc991);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc992:{NFSU2_TR(0x4bc992);
__builtin_memmove((R+4),(R+28),4);
}
B4bc994:{NFSU2_TR(0x4bc994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc999ull));
TAIL_STATIC(0x51f820u,51f);
}
B4bc999:L4bc999:{c.instructions+=2;NFSU2_TR(0x4bc999);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bc99c:{NFSU2_TR(0x4bc99c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bc9b5;}}
}
B4bc99e:L4bc99e:{c.instructions+=6;NFSU2_TR(0x4bc99e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc99f:{NFSU2_TR(0x4bc99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bc9a2:{NFSU2_TR(0x4bc9a2);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc9a7:{NFSU2_TR(0x4bc9a7);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc9ac:{NFSU2_TR(0x4bc9ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc9ad:{NFSU2_TR(0x4bc9ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc9b2ull));
TAIL_STATIC(0x537c00u,537);
}
B4bc9b2:L4bc9b2:{c.instructions+=1;NFSU2_TR(0x4bc9b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bc9b5:L4bc9b5:{c.instructions+=7;NFSU2_TR(0x4bc9b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bc9b9:{NFSU2_TR(0x4bc9b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bc9ba:{NFSU2_TR(0x4bc9ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc9bb:{NFSU2_TR(0x4bc9bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bc9bc:{NFSU2_TR(0x4bc9bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bc9c3:{NFSU2_TR(0x4bc9c3);
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
B4bc9c6:{NFSU2_TR(0x4bc9c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc9d0:L4bc9d0:{c.instructions+=3;NFSU2_TR(0x4bc9d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc9d1:{NFSU2_TR(0x4bc9d1);
__builtin_memmove((R+24),(R+4),4);
}
B4bc9d3:{NFSU2_TR(0x4bc9d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc9d8ull));
TAIL_STATIC(0x4a03f0u,4a0);
}
B4bc9d8:L4bc9d8:{c.instructions+=2;NFSU2_TR(0x4bc9d8);
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
B4bc9dd:{NFSU2_TR(0x4bc9dd);
if(r1(R+518)){{goto L4bc9e8;}}
}
B4bc9df:L4bc9df:{c.instructions+=2;NFSU2_TR(0x4bc9df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc9e0:{NFSU2_TR(0x4bc9e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc9e5ull));
TAIL_STATIC(0x575630u,575);
}
B4bc9e5:L4bc9e5:{c.instructions+=1;NFSU2_TR(0x4bc9e5);
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
B4bc9e8:L4bc9e8:{c.instructions+=3;NFSU2_TR(0x4bc9e8);
__builtin_memmove((R+0),(R+24),4);
}
B4bc9ea:{NFSU2_TR(0x4bc9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bc9eb:{NFSU2_TR(0x4bc9eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bc9f0:L4bc9f0:{c.instructions+=3;NFSU2_TR(0x4bc9f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bc9f1:{NFSU2_TR(0x4bc9f1);
__builtin_memmove((R+24),(R+4),4);
}
B4bc9f3:{NFSU2_TR(0x4bc9f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bc9f8ull));
TAIL_STATIC(0x4a0810u,4a0);
}
B4bc9f8:L4bc9f8:{c.instructions+=2;NFSU2_TR(0x4bc9f8);
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
B4bc9fd:{NFSU2_TR(0x4bc9fd);
if(r1(R+518)){{goto L4bca08;}}
}
B4bc9ff:L4bc9ff:{c.instructions+=2;NFSU2_TR(0x4bc9ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca00:{NFSU2_TR(0x4bca00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bca05ull));
TAIL_STATIC(0x575630u,575);
}
B4bca05:L4bca05:{c.instructions+=1;NFSU2_TR(0x4bca05);
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
B4bca08:L4bca08:{c.instructions+=3;NFSU2_TR(0x4bca08);
__builtin_memmove((R+0),(R+24),4);
}
B4bca0a:{NFSU2_TR(0x4bca0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bca0b:{NFSU2_TR(0x4bca0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bca10:L4bca10:{c.instructions+=8;NFSU2_TR(0x4bca10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4bca13:{NFSU2_TR(0x4bca13);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca14:{NFSU2_TR(0x4bca14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca15:{NFSU2_TR(0x4bca15);
__builtin_memmove((R+24),(R+4),4);
}
B4bca17:{NFSU2_TR(0x4bca17);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4bca1e:{NFSU2_TR(0x4bca1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bca21:{NFSU2_TR(0x4bca21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca22:{NFSU2_TR(0x4bca22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bca5d;}}
}
B4bca24:L4bca24:{c.instructions+=3;NFSU2_TR(0x4bca24);
u8 U[4];
w4(U+0,u32(0x42aa46c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca29:{NFSU2_TR(0x4bca29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca2a:{NFSU2_TR(0x4bca2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bca2full));
TAIL_STATIC(0x5379c0u,537);
}
B4bca2f:L4bca2f:{c.instructions+=2;NFSU2_TR(0x4bca2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca30:{NFSU2_TR(0x4bca30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bca35ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bca35:L4bca35:{c.instructions+=4;NFSU2_TR(0x4bca35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bca38:{NFSU2_TR(0x4bca38);
u8 U[4];
w4(U+0,u32(0x42aa46c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca3d:{NFSU2_TR(0x4bca3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca3e:{NFSU2_TR(0x4bca3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bca43ull));
TAIL_STATIC(0x5379c0u,537);
}
B4bca43:L4bca43:{c.instructions+=2;NFSU2_TR(0x4bca43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca44:{NFSU2_TR(0x4bca44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bca49ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4bca49:L4bca49:{c.instructions+=4;NFSU2_TR(0x4bca49);
w4(R+20,u32(0x3dull));
}
B4bca4e:{NFSU2_TR(0x4bca4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x42ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bca56:{NFSU2_TR(0x4bca56);
u8 U[4];
w4(U+0,u32(0x40faf14bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca5b:{NFSU2_TR(0x4bca5b);
{goto L4bca94;}
}
B4bca5d:L4bca5d:{c.instructions+=3;NFSU2_TR(0x4bca5d);
u8 U[4];
w4(U+0,u32(0x42aa46c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca62:{NFSU2_TR(0x4bca62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca63:{NFSU2_TR(0x4bca63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bca68ull));
TAIL_STATIC(0x5379c0u,537);
}
B4bca68:L4bca68:{c.instructions+=2;NFSU2_TR(0x4bca68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca69:{NFSU2_TR(0x4bca69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bca6eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bca6e:L4bca6e:{c.instructions+=4;NFSU2_TR(0x4bca6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bca71:{NFSU2_TR(0x4bca71);
u8 U[4];
w4(U+0,u32(0x42aa46c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca76:{NFSU2_TR(0x4bca76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca77:{NFSU2_TR(0x4bca77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bca7cull));
TAIL_STATIC(0x5379c0u,537);
}
B4bca7c:L4bca7c:{c.instructions+=2;NFSU2_TR(0x4bca7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca7d:{NFSU2_TR(0x4bca7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bca82ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4bca82:L4bca82:{c.instructions+=3;NFSU2_TR(0x4bca82);
w4(R+20,u32(0x43ull));
}
B4bca87:{NFSU2_TR(0x4bca87);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x48ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bca8f:{NFSU2_TR(0x4bca8f);
u8 U[4];
w4(U+0,u32(0x703970f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bca94:L4bca94:{c.instructions+=2;NFSU2_TR(0x4bca94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bca97:{NFSU2_TR(0x4bca97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bca9cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bca9c:L4bca9c:{c.instructions+=5;NFSU2_TR(0x4bca9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4bca9f:{NFSU2_TR(0x4bca9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcaa0:{NFSU2_TR(0x4bcaa0);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcaa5:{NFSU2_TR(0x4bcaa5);
u8 U[4];
w4(U+0,u32(0x794e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcaaa:{NFSU2_TR(0x4bcaaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcaafull));
TAIL_STATIC(0x43db50u,43d);
}
B4bcaaf:L4bcaaf:{c.instructions+=4;NFSU2_TR(0x4bcaaf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bcab2:{NFSU2_TR(0x4bcab2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcab3:{NFSU2_TR(0x4bcab3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcab4:{NFSU2_TR(0x4bcab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcab9ull));
TAIL_STATIC(0x537b80u,537);
}
B4bcab9:L4bcab9:{c.instructions+=2;NFSU2_TR(0x4bcab9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bcabc:{NFSU2_TR(0x4bcabc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcac1ull));
TAIL_STATIC(0x58f230u,58f);
}
B4bcac1:L4bcac1:{c.instructions+=5;NFSU2_TR(0x4bcac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcac5:{NFSU2_TR(0x4bcac5);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4bcac9:{NFSU2_TR(0x4bcac9);
w4(R+28,u32(0x1ull));
}
B4bcace:{NFSU2_TR(0x4bcace);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcad2:{NFSU2_TR(0x4bcad2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4bcc5d;}}
}
B4bcad8:L4bcad8:{c.instructions+=2;NFSU2_TR(0x4bcad8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcad9:{NFSU2_TR(0x4bcad9);
__builtin_memmove((R+16),(R+16),4);
}
B4bcae0:L4bcae0:{c.instructions+=2;NFSU2_TR(0x4bcae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bcae8:{NFSU2_TR(0x4bcae8);
{goto L4bcaf0;}
}
B4bcaf0:L4bcaf0:{c.instructions+=7;NFSU2_TR(0x4bcaf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bcaf4:{NFSU2_TR(0x4bcaf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bcafa:{NFSU2_TR(0x4bcafa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcafb:{NFSU2_TR(0x4bcafb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcafc:{NFSU2_TR(0x4bcafc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bcb00:{NFSU2_TR(0x4bcb00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb01:{NFSU2_TR(0x4bcb01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcb06ull));
TAIL_STATIC(0x586c40u,586);
}
B4bcb06:L4bcb06:{c.instructions+=4;NFSU2_TR(0x4bcb06);
__builtin_memmove((R+12),(R+0),4);
}
B4bcb08:{NFSU2_TR(0x4bcb08);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bcb0a:{NFSU2_TR(0x4bcb0a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bcb0c:{NFSU2_TR(0x4bcb0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bcb88;}}
}
B4bcb0e:L4bcb0e:{c.instructions+=3;NFSU2_TR(0x4bcb0e);
__builtin_memmove((R+8),(R+28),4);
}
B4bcb10:{NFSU2_TR(0x4bcb10);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4bcb16:{NFSU2_TR(0x4bcb16);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4bcb1d;}}
}
B4bcb18:L4bcb18:{c.instructions+=3;NFSU2_TR(0x4bcb18);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4bcb19:{NFSU2_TR(0x4bcb19);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffeull))));
}
B4bcb1c:{NFSU2_TR(0x4bcb1c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4bcb1d:L4bcb1d:{c.instructions+=1;NFSU2_TR(0x4bcb1d);
if(r1(R+518)){{goto L4bcb43;}}
}
B4bcb1f:L4bcb1f:{c.instructions+=4;NFSU2_TR(0x4bcb1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bcb22:{NFSU2_TR(0x4bcb22);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb23:{NFSU2_TR(0x4bcb23);
__builtin_memmove((R+4),(R+24),4);
}
B4bcb25:{NFSU2_TR(0x4bcb25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcb2aull));
TAIL_STATIC(0x4a0890u,4a0);
}
B4bcb2a:L4bcb2a:{c.instructions+=4;NFSU2_TR(0x4bcb2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb2b:{NFSU2_TR(0x4bcb2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb2c:{NFSU2_TR(0x4bcb2c);
u8 U[4];
w4(U+0,u32(0x794e6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb31:{NFSU2_TR(0x4bcb31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcb36ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bcb36:L4bcb36:{c.instructions+=4;NFSU2_TR(0x4bcb36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bcb39:{NFSU2_TR(0x4bcb39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb3a:{NFSU2_TR(0x4bcb3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb3b:{NFSU2_TR(0x4bcb3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcb40ull));
TAIL_STATIC(0x537b80u,537);
}
B4bcb40:L4bcb40:{c.instructions+=1;NFSU2_TR(0x4bcb40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bcb43:L4bcb43:{c.instructions+=5;NFSU2_TR(0x4bcb43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bcb46:{NFSU2_TR(0x4bcb46);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb4b:{NFSU2_TR(0x4bcb4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb4c:{NFSU2_TR(0x4bcb4c);
u8 U[4];
w4(U+0,u32(0x79013cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb51:{NFSU2_TR(0x4bcb51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcb56ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bcb56:L4bcb56:{c.instructions+=4;NFSU2_TR(0x4bcb56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bcb59:{NFSU2_TR(0x4bcb59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb5a:{NFSU2_TR(0x4bcb5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb5b:{NFSU2_TR(0x4bcb5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcb60ull));
TAIL_STATIC(0x537b80u,537);
}
B4bcb60:L4bcb60:{c.instructions+=6;NFSU2_TR(0x4bcb60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bcb63:{NFSU2_TR(0x4bcb63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bcb66:{NFSU2_TR(0x4bcb66);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb6b:{NFSU2_TR(0x4bcb6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb6c:{NFSU2_TR(0x4bcb6c);
u8 U[4];
w4(U+0,u32(0x79012cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb71:{NFSU2_TR(0x4bcb71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcb76ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bcb76:L4bcb76:{c.instructions+=4;NFSU2_TR(0x4bcb76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bcb79:{NFSU2_TR(0x4bcb79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb7a:{NFSU2_TR(0x4bcb7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb7b:{NFSU2_TR(0x4bcb7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcb80ull));
TAIL_STATIC(0x537b80u,537);
}
B4bcb80:L4bcb80:{c.instructions+=2;NFSU2_TR(0x4bcb80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bcb83:{NFSU2_TR(0x4bcb83);
{goto L4bcc38;}
}
B4bcb88:L4bcb88:{c.instructions+=11;NFSU2_TR(0x4bcb88);
u8 U[4];
w4(U+0,u32(0x794e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb8d:{NFSU2_TR(0x4bcb8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcb91:{NFSU2_TR(0x4bcb91);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcb95:{NFSU2_TR(0x4bcb95);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcb99:{NFSU2_TR(0x4bcb99);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcb9d:{NFSU2_TR(0x4bcb9d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcb9f:{NFSU2_TR(0x4bcb9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bcba3:{NFSU2_TR(0x4bcba3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcba4:{NFSU2_TR(0x4bcba4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bcba7:{NFSU2_TR(0x4bcba7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcba8:{NFSU2_TR(0x4bcba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcbadull));
TAIL_STATIC(0x7425d0u,742);
}
B4bcbad:L4bcbad:{c.instructions+=4;NFSU2_TR(0x4bcbad);
__builtin_memmove((R+8),(R+28),4);
}
B4bcbaf:{NFSU2_TR(0x4bcbaf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bcbb2:{NFSU2_TR(0x4bcbb2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4bcbb8:{NFSU2_TR(0x4bcbb8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4bcbbf;}}
}
B4bcbba:L4bcbba:{c.instructions+=3;NFSU2_TR(0x4bcbba);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4bcbbb:{NFSU2_TR(0x4bcbbb);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffeull))));
}
B4bcbbe:{NFSU2_TR(0x4bcbbe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4bcbbf:L4bcbbf:{c.instructions+=1;NFSU2_TR(0x4bcbbf);
if(r1(R+518)){{goto L4bcbed;}}
}
B4bcbc1:L4bcbc1:{c.instructions+=5;NFSU2_TR(0x4bcbc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bcbc4:{NFSU2_TR(0x4bcbc4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcbc5:{NFSU2_TR(0x4bcbc5);
__builtin_memmove((R+4),(R+24),4);
}
B4bcbc7:{NFSU2_TR(0x4bcbc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcbcb:{NFSU2_TR(0x4bcbcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcbd0ull));
TAIL_STATIC(0x4a0890u,4a0);
}
B4bcbd0:L4bcbd0:{c.instructions+=4;NFSU2_TR(0x4bcbd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcbd1:{NFSU2_TR(0x4bcbd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcbd2:{NFSU2_TR(0x4bcbd2);
u8 U[4];
w4(U+0,u32(0x794e6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcbd7:{NFSU2_TR(0x4bcbd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcbdcull));
TAIL_STATIC(0x50b990u,50b);
}
B4bcbdc:L4bcbdc:{c.instructions+=5;NFSU2_TR(0x4bcbdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bcbe0:{NFSU2_TR(0x4bcbe0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bcbe3:{NFSU2_TR(0x4bcbe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcbe4:{NFSU2_TR(0x4bcbe4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcbe5:{NFSU2_TR(0x4bcbe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcbeaull));
TAIL_STATIC(0x537b80u,537);
}
B4bcbea:L4bcbea:{c.instructions+=1;NFSU2_TR(0x4bcbea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bcbed:L4bcbed:{c.instructions+=7;NFSU2_TR(0x4bcbed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bcbf0:{NFSU2_TR(0x4bcbf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4bcbf3:{NFSU2_TR(0x4bcbf3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcbf4:{NFSU2_TR(0x4bcbf4);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcbf9:{NFSU2_TR(0x4bcbf9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcbfa:{NFSU2_TR(0x4bcbfa);
u8 U[4];
w4(U+0,u32(0x79013cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcbff:{NFSU2_TR(0x4bcbff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcc04ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bcc04:L4bcc04:{c.instructions+=4;NFSU2_TR(0x4bcc04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bcc07:{NFSU2_TR(0x4bcc07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcc08:{NFSU2_TR(0x4bcc08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcc09:{NFSU2_TR(0x4bcc09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcc0eull));
TAIL_STATIC(0x537b80u,537);
}
B4bcc0e:L4bcc0e:{c.instructions+=8;NFSU2_TR(0x4bcc0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bcc10:{NFSU2_TR(0x4bcc10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bcc13:{NFSU2_TR(0x4bcc13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bcc16:{NFSU2_TR(0x4bcc16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcc17:{NFSU2_TR(0x4bcc17);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcc1c:{NFSU2_TR(0x4bcc1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcc1d:{NFSU2_TR(0x4bcc1d);
u8 U[4];
w4(U+0,u32(0x79012cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcc22:{NFSU2_TR(0x4bcc22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcc27ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bcc27:L4bcc27:{c.instructions+=4;NFSU2_TR(0x4bcc27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bcc2a:{NFSU2_TR(0x4bcc2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcc2b:{NFSU2_TR(0x4bcc2b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcc2c:{NFSU2_TR(0x4bcc2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcc31ull));
TAIL_STATIC(0x537b80u,537);
}
B4bcc31:L4bcc31:{c.instructions+=2;NFSU2_TR(0x4bcc31);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bcc35:{NFSU2_TR(0x4bcc35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bcc38:L4bcc38:{c.instructions+=6;NFSU2_TR(0x4bcc38);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bcc3c:{NFSU2_TR(0x4bcc3c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4bcc3d:{NFSU2_TR(0x4bcc3d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4bcc3e:{NFSU2_TR(0x4bcc3e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bcc41:{NFSU2_TR(0x4bcc41);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcc45:{NFSU2_TR(0x4bcc45);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bcaf0u);}goto L4bcaf0;}}
}
B4bcc4b:L4bcc4b:{c.instructions+=5;NFSU2_TR(0x4bcc4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bcc4f:{NFSU2_TR(0x4bcc4f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4bcc50:{NFSU2_TR(0x4bcc50);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bcc52:{NFSU2_TR(0x4bcc52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcc56:{NFSU2_TR(0x4bcc56);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bcae0u);}goto L4bcae0;}}
}
B4bcc5c:L4bcc5c:{c.instructions+=1;NFSU2_TR(0x4bcc5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bcc5d:L4bcc5d:{c.instructions+=6;NFSU2_TR(0x4bcc5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bcc5e:{NFSU2_TR(0x4bcc5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bcc5f:{NFSU2_TR(0x4bcc5f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bcc61:{NFSU2_TR(0x4bcc61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bcc62:{NFSU2_TR(0x4bcc62);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bcc65:{NFSU2_TR(0x4bcc65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bcc70:L4bcc70:{c.instructions+=5;NFSU2_TR(0x4bcc70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcc71:{NFSU2_TR(0x4bcc71);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bcc75:{NFSU2_TR(0x4bcc75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bcc78:{NFSU2_TR(0x4bcc78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bcc7a:{NFSU2_TR(0x4bcc7a);
if(r1(R+518)){{goto L4bcc8c;}}
}
B4bcc7c:L4bcc7c:{c.instructions+=2;NFSU2_TR(0x4bcc7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcc7d:{NFSU2_TR(0x4bcc7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcc82ull));
TAIL_STATIC(0x540a60u,540);
}
B4bcc82:L4bcc82:{c.instructions+=2;NFSU2_TR(0x4bcc82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bcc85:{NFSU2_TR(0x4bcc85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bcc8c:L4bcc8c:{c.instructions+=5;NFSU2_TR(0x4bcc8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bcc90:{NFSU2_TR(0x4bcc90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bcc9a:{NFSU2_TR(0x4bcc9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bcc9d:{NFSU2_TR(0x4bcc9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bcc9f:{NFSU2_TR(0x4bcc9f);
if(r1(R+518)){{goto L4bccce;}}
}
B4bcca1:L4bcca1:{c.instructions+=3;NFSU2_TR(0x4bcca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bcca4:{NFSU2_TR(0x4bcca4);
u8 U[4];
w4(U+0,u32(0x6cf6e689ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcca9:{NFSU2_TR(0x4bcca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bccaeull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bccae:L4bccae:{c.instructions+=7;NFSU2_TR(0x4bccae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bccaf:{NFSU2_TR(0x4bccaf);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bccb4:{NFSU2_TR(0x4bccb4);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bccb9:{NFSU2_TR(0x4bccb9);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bccbe:{NFSU2_TR(0x4bccbe);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bccc3:{NFSU2_TR(0x4bccc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bccc4:{NFSU2_TR(0x4bccc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bccc9ull));
TAIL_STATIC(0x558540u,558);
}
B4bccc9:L4bccc9:{c.instructions+=3;NFSU2_TR(0x4bccc9);
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
B4bcccc:{NFSU2_TR(0x4bcccc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bcccd:{NFSU2_TR(0x4bcccd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bccce:L4bccce:{c.instructions+=3;NFSU2_TR(0x4bccce);
__builtin_memmove((R+4),(R+24),4);
}
B4bccd0:{NFSU2_TR(0x4bccd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bccd1:{NFSU2_TR(0x4bccd1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bca10u);}goto L4bca10;}
}
B4bcce0:L4bcce0:{c.instructions+=6;NFSU2_TR(0x4bcce0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcce1:{NFSU2_TR(0x4bcce1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcce2:{NFSU2_TR(0x4bcce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bcce6:{NFSU2_TR(0x4bcce6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bccec:{NFSU2_TR(0x4bccec);
__builtin_memmove((R+24),(R+4),4);
}
B4bccee:{NFSU2_TR(0x4bccee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bccf4;}}
}
B4bccf0:L4bccf0:{c.instructions+=2;NFSU2_TR(0x4bccf0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bccf2:{NFSU2_TR(0x4bccf2);
{goto L4bccfe;}
}
B4bccf4:L4bccf4:{c.instructions+=2;NFSU2_TR(0x4bccf4);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bccfa:{NFSU2_TR(0x4bccfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bcd05;}}
}
B4bccfc:L4bccfc:{c.instructions+=1;NFSU2_TR(0x4bccfc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bccfe:L4bccfe:{c.instructions+=2;NFSU2_TR(0x4bccfe);
__builtin_memmove((R+4),(R+24),4);
}
B4bcd00:{NFSU2_TR(0x4bcd00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcd05ull));
TAIL_STATIC(0x4a0b80u,4a0);
}
B4bcd05:L4bcd05:{c.instructions+=4;NFSU2_TR(0x4bcd05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bcd07:{NFSU2_TR(0x4bcd07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcd08:{NFSU2_TR(0x4bcd08);
__builtin_memmove((R+4),(R+24),4);
}
B4bcd0a:{NFSU2_TR(0x4bcd0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcd0dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bcd0d:L4bcd0d:{c.instructions+=3;NFSU2_TR(0x4bcd0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bcd0f:{NFSU2_TR(0x4bcd0f);
__builtin_memmove((R+4),(R+24),4);
}
B4bcd11:{NFSU2_TR(0x4bcd11);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcd14ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bcd14:L4bcd14:{c.instructions+=3;NFSU2_TR(0x4bcd14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bcd15:{NFSU2_TR(0x4bcd15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bcd16:{NFSU2_TR(0x4bcd16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bcd20:L4bcd20:{c.instructions+=6;NFSU2_TR(0x4bcd20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcd21:{NFSU2_TR(0x4bcd21);
__builtin_memmove((R+24),(R+4),4);
}
B4bcd23:{NFSU2_TR(0x4bcd23);
__builtin_memmove((R+4),gp(0x850088),4);
}
B4bcd29:{NFSU2_TR(0x4bcd29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bcd2b:{NFSU2_TR(0x4bcd2b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bcd2e:{NFSU2_TR(0x4bcd2e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4bcd66;}}
}
B4bcd30:L4bcd30:{c.instructions+=1;NFSU2_TR(0x4bcd30);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4bcd84ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bcd37:L4bcd37:{c.instructions+=2;NFSU2_TR(0x4bcd37);
w4(R+0,u32(0x93fdee74ull));
}
B4bcd3c:{NFSU2_TR(0x4bcd3c);
{goto L4bcd66;}
}
B4bcd3e:L4bcd3e:{c.instructions+=2;NFSU2_TR(0x4bcd3e);
w4(R+0,u32(0xdcb9f861ull));
}
B4bcd43:{NFSU2_TR(0x4bcd43);
{goto L4bcd66;}
}
B4bcd45:L4bcd45:{c.instructions+=2;NFSU2_TR(0x4bcd45);
w4(R+0,u32(0x35102edfull));
}
B4bcd4a:{NFSU2_TR(0x4bcd4a);
{goto L4bcd66;}
}
B4bcd4c:L4bcd4c:{c.instructions+=2;NFSU2_TR(0x4bcd4c);
w4(R+0,u32(0xd7162cfaull));
}
B4bcd51:{NFSU2_TR(0x4bcd51);
{goto L4bcd66;}
}
B4bcd53:L4bcd53:{c.instructions+=2;NFSU2_TR(0x4bcd53);
w4(R+0,u32(0x30da61e1ull));
}
B4bcd58:{NFSU2_TR(0x4bcd58);
{goto L4bcd66;}
}
B4bcd5a:L4bcd5a:{c.instructions+=2;NFSU2_TR(0x4bcd5a);
w4(R+0,u32(0x75f903f4ull));
}
B4bcd5f:{NFSU2_TR(0x4bcd5f);
{goto L4bcd66;}
}
B4bcd61:L4bcd61:{c.instructions+=1;NFSU2_TR(0x4bcd61);
w4(R+0,u32(0x613d3106ull));
}
B4bcd66:L4bcd66:{c.instructions+=4;NFSU2_TR(0x4bcd66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcd67:{NFSU2_TR(0x4bcd67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bcd6a:{NFSU2_TR(0x4bcd6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcd6b:{NFSU2_TR(0x4bcd6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcd70ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bcd70:L4bcd70:{c.instructions+=4;NFSU2_TR(0x4bcd70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bcd73:{NFSU2_TR(0x4bcd73);
u8 U[4];
w4(U+0,u32(0xfd81b9f7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcd78:{NFSU2_TR(0x4bcd78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcd79:{NFSU2_TR(0x4bcd79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcd7eull));
TAIL_STATIC(0x50c900u,50c);
}
B4bcd7e:L4bcd7e:{c.instructions+=3;NFSU2_TR(0x4bcd7e);
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
B4bcd81:{NFSU2_TR(0x4bcd81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bcd82:{NFSU2_TR(0x4bcd82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bcdb0:L4bcdb0:{c.instructions+=8;NFSU2_TR(0x4bcdb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B4bcdb3:{NFSU2_TR(0x4bcdb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcdb4:{NFSU2_TR(0x4bcdb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcdb5:{NFSU2_TR(0x4bcdb5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bcdb7:{NFSU2_TR(0x4bcdb7);
__builtin_memmove((R+24),(R+4),4);
}
B4bcdb9:{NFSU2_TR(0x4bcdb9);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bcdbe:{NFSU2_TR(0x4bcdbe);
w4(R+4,u32(0xfull));
}
B4bcdc3:{NFSU2_TR(0x4bcdc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4bcdc7:L4bcdc7:{c.instructions+=1;NFSU2_TR(0x4bcdc7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4bcdc9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bcdc7u);}goto L4bcdc7;}
}
B4bcdc9:L4bcdc9:{c.instructions+=12;NFSU2_TR(0x4bcdc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bcdcd:{NFSU2_TR(0x4bcdcd);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4bcdcf:{NFSU2_TR(0x4bcdcf);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4bcdd0:{NFSU2_TR(0x4bcdd0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bcdd2:{NFSU2_TR(0x4bcdd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcdd6:{NFSU2_TR(0x4bcdd6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcdda:{NFSU2_TR(0x4bcdda);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcddb:{NFSU2_TR(0x4bcddb);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bcddf:{NFSU2_TR(0x4bcddf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcde3:{NFSU2_TR(0x4bcde3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcde4:{NFSU2_TR(0x4bcde4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcde8:{NFSU2_TR(0x4bcde8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcdedull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4bcded:L4bcded:{c.instructions+=2;NFSU2_TR(0x4bcded);
u8 U[4];
w4(U+0,u32(0x2f0cfb04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcdf2:{NFSU2_TR(0x4bcdf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcdf7ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bcdf7:L4bcdf7:{c.instructions+=5;NFSU2_TR(0x4bcdf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcdf8:{NFSU2_TR(0x4bcdf8);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bcdfc:{NFSU2_TR(0x4bcdfc);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcdfe:{NFSU2_TR(0x4bcdfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcdff:{NFSU2_TR(0x4bcdff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bce04ull));
TAIL_STATIC(0x50c960u,50c);
}
B4bce04:L4bce04:{c.instructions+=6;NFSU2_TR(0x4bce04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bce07:{NFSU2_TR(0x4bce07);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bce0b:{NFSU2_TR(0x4bce0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce0c:{NFSU2_TR(0x4bce0c);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce11:{NFSU2_TR(0x4bce11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce12:{NFSU2_TR(0x4bce12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bce17ull));
TAIL_STATIC(0x558310u,558);
}
B4bce17:L4bce17:{c.instructions+=2;NFSU2_TR(0x4bce17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bce1a:{NFSU2_TR(0x4bce1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bce1full));
TAIL_STATIC(0x582b60u,582);
}
B4bce1f:L4bce1f:{c.instructions+=7;NFSU2_TR(0x4bce1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bce25:{NFSU2_TR(0x4bce25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce26:{NFSU2_TR(0x4bce26);
u8 U[4];
w4(U+0,u32(0x4ae650ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce2b:{NFSU2_TR(0x4bce2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bce2f:{NFSU2_TR(0x4bce2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce30:{NFSU2_TR(0x4bce30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce31:{NFSU2_TR(0x4bce31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bce36ull));
TAIL_STATIC(0x73f8d0u,73f);
}
B4bce36:L4bce36:{c.instructions+=3;NFSU2_TR(0x4bce36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B4bce39:{NFSU2_TR(0x4bce39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bce3b:{NFSU2_TR(0x4bce3b);
if(r1(R+518)){{goto L4bce4a;}}
}
B4bce3d:L4bce3d:{c.instructions+=4;NFSU2_TR(0x4bce3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce3e:{NFSU2_TR(0x4bce3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bce41:{NFSU2_TR(0x4bce41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce42:{NFSU2_TR(0x4bce42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bce47ull));
TAIL_STATIC(0x49e810u,49e);
}
B4bce47:L4bce47:{c.instructions+=1;NFSU2_TR(0x4bce47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bce4a:L4bce4a:{c.instructions+=4;NFSU2_TR(0x4bce4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bce4b:{NFSU2_TR(0x4bce4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bce4c:{NFSU2_TR(0x4bce4c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x50ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bce4f:{NFSU2_TR(0x4bce4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bce60:L4bce60:{c.instructions+=10;NFSU2_TR(0x4bce60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce61:{NFSU2_TR(0x4bce61);
__builtin_memmove((R+20),(R+16),4);
}
B4bce63:{NFSU2_TR(0x4bce63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4bce66:{NFSU2_TR(0x4bce66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x500ull))));
}
B4bce6c:{NFSU2_TR(0x4bce6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce6d:{NFSU2_TR(0x4bce6d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce6e:{NFSU2_TR(0x4bce6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce6f:{NFSU2_TR(0x4bce6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce70:{NFSU2_TR(0x4bce70);
__builtin_memmove((R+20),(R+4),4);
}
B4bce72:{NFSU2_TR(0x4bce72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bce77ull));
TAIL_STATIC(0x582b60u,582);
}
B4bce77:L4bce77:{c.instructions+=2;NFSU2_TR(0x4bce77);
__builtin_memmove((R+4),(R+0),4);
}
B4bce79:{NFSU2_TR(0x4bce79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bce7eull));
TAIL_STATIC(0x583140u,583);
}
B4bce7e:L4bce7e:{c.instructions+=4;NFSU2_TR(0x4bce7e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4bce80:{NFSU2_TR(0x4bce80);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bce82:{NFSU2_TR(0x4bce82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bce85:{NFSU2_TR(0x4bce85);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bcec8;}}
}
B4bce87:L4bce87:{c.instructions+=2;NFSU2_TR(0x4bce87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce88:{NFSU2_TR(0x4bce88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bce8dull));
TAIL_STATIC(0x582b60u,582);
}
B4bce8d:L4bce8d:{c.instructions+=2;NFSU2_TR(0x4bce8d);
__builtin_memmove((R+4),(R+0),4);
}
B4bce8f:{NFSU2_TR(0x4bce8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bce94ull));
TAIL_STATIC(0x582b90u,582);
}
B4bce94:L4bce94:{c.instructions+=4;NFSU2_TR(0x4bce94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce95:{NFSU2_TR(0x4bce95);
u8 U[4];
w4(U+0,u32(u32(u32(0x298ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bce9c:{NFSU2_TR(0x4bce9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bce9d:{NFSU2_TR(0x4bce9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcea2ull));
TAIL_STATIC(0x49e870u,49e);
}
B4bcea2:L4bcea2:{c.instructions+=3;NFSU2_TR(0x4bcea2);
__builtin_memmove((R+24),(R+0),4);
}
B4bcea4:{NFSU2_TR(0x4bcea4);
w4(R+4,u32(0x9full));
}
B4bcea9:{NFSU2_TR(0x4bcea9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4bcead:L4bcead:{c.instructions+=1;NFSU2_TR(0x4bcead);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4bceaf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bceadu);}goto L4bcead;}
}
B4bceaf:L4bceaf:{c.instructions+=4;NFSU2_TR(0x4bceaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bceb3:{NFSU2_TR(0x4bceb3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bceb6:{NFSU2_TR(0x4bceb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bceb8:{NFSU2_TR(0x4bceb8);
if(r1(R+518)){{goto L4bcec0;}}
}
B4bceba:L4bceba:{c.instructions+=1;NFSU2_TR(0x4bceba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4bcec0:L4bcec0:{c.instructions+=4;NFSU2_TR(0x4bcec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bcec3:{NFSU2_TR(0x4bcec3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4bcec4:{NFSU2_TR(0x4bcec4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bcec6:{NFSU2_TR(0x4bcec6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bce87u);}goto L4bce87;}}
}
B4bcec8:L4bcec8:{c.instructions+=3;NFSU2_TR(0x4bcec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bcece:{NFSU2_TR(0x4bcece);
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
B4bced0:{NFSU2_TR(0x4bced0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bceea;}}
}
B4bced2:L4bced2:{c.instructions+=3;NFSU2_TR(0x4bced2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bced4:{NFSU2_TR(0x4bced4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bced6:{NFSU2_TR(0x4bced6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcedbull));
TAIL_STATIC(0x50cee0u,50c);
}
B4bcedb:L4bcedb:{c.instructions+=3;NFSU2_TR(0x4bcedb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcedd:{NFSU2_TR(0x4bcedd);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcee2:{NFSU2_TR(0x4bcee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcee7ull));
TAIL_STATIC(0x55dde0u,55d);
}
B4bcee7:L4bcee7:{c.instructions+=1;NFSU2_TR(0x4bcee7);
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
B4bceea:L4bceea:{c.instructions+=7;NFSU2_TR(0x4bceea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bceeb:{NFSU2_TR(0x4bceeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bceec:{NFSU2_TR(0x4bceec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bceed:{NFSU2_TR(0x4bceed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bceee:{NFSU2_TR(0x4bceee);
__builtin_memmove((R+16),(R+20),4);
}
B4bcef0:{NFSU2_TR(0x4bcef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bcef1:{NFSU2_TR(0x4bcef1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bcf00:L4bcf00:{c.instructions+=8;NFSU2_TR(0x4bcf00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x280ull))));
}
B4bcf06:{NFSU2_TR(0x4bcf06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf07:{NFSU2_TR(0x4bcf07);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf08:{NFSU2_TR(0x4bcf08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf09:{NFSU2_TR(0x4bcf09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf0a:{NFSU2_TR(0x4bcf0a);
__builtin_memmove((R+12),(R+4),4);
}
B4bcf0c:{NFSU2_TR(0x4bcf0c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4bcf0e:{NFSU2_TR(0x4bcf0e);
__builtin_memmove((R+28),(R+28),4);
}
B4bcf10:L4bcf10:{c.instructions+=4;NFSU2_TR(0x4bcf10);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bcf13:{NFSU2_TR(0x4bcf13);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf14:{NFSU2_TR(0x4bcf14);
__builtin_memmove((R+4),(R+24),4);
}
B4bcf16:{NFSU2_TR(0x4bcf16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcf1bull));
TAIL_STATIC(0x43be60u,43b);
}
B4bcf1b:L4bcf1b:{c.instructions+=2;NFSU2_TR(0x4bcf1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bcf1d:{NFSU2_TR(0x4bcf1d);
if(r1(R+518)){{goto L4bcfd2;}}
}
B4bcf23:L4bcf23:{c.instructions+=4;NFSU2_TR(0x4bcf23);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4bcf26:{NFSU2_TR(0x4bcf26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bcf28:{NFSU2_TR(0x4bcf28);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bcf2c:{NFSU2_TR(0x4bcf2c);
if(r1(R+518)){{goto L4bcfd2;}}
}
B4bcf32:L4bcf32:{c.instructions+=3;NFSU2_TR(0x4bcf32);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf33:{NFSU2_TR(0x4bcf33);
__builtin_memmove((R+4),(R+24),4);
}
B4bcf35:{NFSU2_TR(0x4bcf35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcf3aull));
TAIL_STATIC(0x43be60u,43b);
}
B4bcf3a:L4bcf3a:{c.instructions+=2;NFSU2_TR(0x4bcf3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bcf3c:{NFSU2_TR(0x4bcf3c);
if(r1(R+518)){{goto L4bcf43;}}
}
B4bcf3e:L4bcf3e:{c.instructions+=2;NFSU2_TR(0x4bcf3e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4bcf41:{NFSU2_TR(0x4bcf41);
{goto L4bcf45;}
}
B4bcf43:L4bcf43:{c.instructions+=1;NFSU2_TR(0x4bcf43);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bcf45:L4bcf45:{c.instructions+=3;NFSU2_TR(0x4bcf45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf46:{NFSU2_TR(0x4bcf46);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bcf49:{NFSU2_TR(0x4bcf49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcf4eull));
TAIL_STATIC(0x52e7d0u,52e);
}
B4bcf4e:L4bcf4e:{c.instructions+=3;NFSU2_TR(0x4bcf4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4bcf51:{NFSU2_TR(0x4bcf51);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bcf53:{NFSU2_TR(0x4bcf53);
if(r1(R+518)){{goto L4bcf95;}}
}
B4bcf55:L4bcf55:{c.instructions+=3;NFSU2_TR(0x4bcf55);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B4bcf58:{NFSU2_TR(0x4bcf58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf59:{NFSU2_TR(0x4bcf59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcf5eull));
TAIL_STATIC(0x582b60u,582);
}
B4bcf5e:L4bcf5e:{c.instructions+=2;NFSU2_TR(0x4bcf5e);
__builtin_memmove((R+4),(R+0),4);
}
B4bcf60:{NFSU2_TR(0x4bcf60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcf65ull));
TAIL_STATIC(0x582bb0u,582);
}
B4bcf65:L4bcf65:{c.instructions+=4;NFSU2_TR(0x4bcf65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf66:{NFSU2_TR(0x4bcf66);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bcf6a:{NFSU2_TR(0x4bcf6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf6b:{NFSU2_TR(0x4bcf6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcf70ull));
TAIL_STATIC(0x49e870u,49e);
}
B4bcf70:L4bcf70:{c.instructions+=4;NFSU2_TR(0x4bcf70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x274ull))));
}
B4bcf76:{NFSU2_TR(0x4bcf76);
__builtin_memmove((R+28),(R+16),4);
}
B4bcf78:{NFSU2_TR(0x4bcf78);
__builtin_memmove((R+24),(R+0),4);
}
B4bcf7a:{NFSU2_TR(0x4bcf7a);
w4(R+4,u32(0x9full));
}
B4bcf7f:L4bcf7f:{c.instructions+=1;NFSU2_TR(0x4bcf7f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4bcf81;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bcf7fu);}goto L4bcf7f;}
}
B4bcf81:L4bcf81:{c.instructions+=5;NFSU2_TR(0x4bcf81);
u8 U[8];
w4(U+0,u32(u32(u32(0x28cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bcf88:{NFSU2_TR(0x4bcf88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bcf8b:{NFSU2_TR(0x4bcf8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf8c:{NFSU2_TR(0x4bcf8c);
__builtin_memmove((R+4),(R+12),4);
}
B4bcf8e:{NFSU2_TR(0x4bcf8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcf93ull));
TAIL_STATIC(0x4a1380u,4a1);
}
B4bcf93:L4bcf93:{c.instructions+=1;NFSU2_TR(0x4bcf93);
{goto L4bcfd2;}
}
B4bcf95:L4bcf95:{c.instructions+=4;NFSU2_TR(0x4bcf95);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bcf98:{NFSU2_TR(0x4bcf98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf99:{NFSU2_TR(0x4bcf99);
u8 U[4];
w4(U+0,u32(0x790258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcf9e:{NFSU2_TR(0x4bcf9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcfa3ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4bcfa3:L4bcfa3:{c.instructions+=6;NFSU2_TR(0x4bcfa3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcfa5:{NFSU2_TR(0x4bcfa5);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcfaa:{NFSU2_TR(0x4bcfaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcfab:{NFSU2_TR(0x4bcfab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bcfae:{NFSU2_TR(0x4bcfae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcfaf:{NFSU2_TR(0x4bcfaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcfb4ull));
TAIL_STATIC(0x537c00u,537);
}
B4bcfb4:L4bcfb4:{c.instructions+=3;NFSU2_TR(0x4bcfb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcfb5:{NFSU2_TR(0x4bcfb5);
u8 U[4];
w4(U+0,u32(0x78febcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcfba:{NFSU2_TR(0x4bcfba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcfbfull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4bcfbf:L4bcfbf:{c.instructions+=4;NFSU2_TR(0x4bcfbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bcfc2:{NFSU2_TR(0x4bcfc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcfc3:{NFSU2_TR(0x4bcfc3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcfc4:{NFSU2_TR(0x4bcfc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcfc9ull));
TAIL_STATIC(0x5379c0u,537);
}
B4bcfc9:L4bcfc9:{c.instructions+=2;NFSU2_TR(0x4bcfc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcfca:{NFSU2_TR(0x4bcfca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bcfcfull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bcfcf:L4bcfcf:{c.instructions+=1;NFSU2_TR(0x4bcfcf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B4bcfd2:L4bcfd2:{c.instructions+=3;NFSU2_TR(0x4bcfd2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4bcfd3:{NFSU2_TR(0x4bcfd3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bcfd6:{NFSU2_TR(0x4bcfd6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bcf10u);}goto L4bcf10;}}
}
B4bcfdc:L4bcfdc:{c.instructions+=6;NFSU2_TR(0x4bcfdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bcfdd:{NFSU2_TR(0x4bcfdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bcfde:{NFSU2_TR(0x4bcfde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bcfdf:{NFSU2_TR(0x4bcfdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bcfe0:{NFSU2_TR(0x4bcfe0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x280ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x280ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x280ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bcfe6:{NFSU2_TR(0x4bcfe6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bcff0:L4bcff0:{c.instructions+=7;NFSU2_TR(0x4bcff0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcff1:{NFSU2_TR(0x4bcff1);
__builtin_memmove((R+20),(R+16),4);
}
B4bcff3:{NFSU2_TR(0x4bcff3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4bcff6:{NFSU2_TR(0x4bcff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x504ull))));
}
B4bcffc:{NFSU2_TR(0x4bcffc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bcffd:{NFSU2_TR(0x4bcffd);
__builtin_memmove((R+12),(R+4),4);
}
B4bcfff:{NFSU2_TR(0x4bcfff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x4bd005u,4bd);
}
XIT:NFSU2_TR_EXIT(0x4bc,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
