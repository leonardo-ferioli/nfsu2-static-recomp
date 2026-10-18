#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_608(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x53c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x53c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_53c(u8* __restrict R,Cpu& c);
u32 page_53c(Cpu& c){return body_53c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_53c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x53c003:goto L53c003;
case 0x53c005:c.instructions+=6;goto B53c005;
case 0x53c006:c.instructions+=5;goto B53c006;
case 0x53c008:c.instructions+=4;goto B53c008;
case 0x53c00d:c.instructions+=3;goto B53c00d;
case 0x53c012:c.instructions+=2;goto B53c012;
case 0x53c014:c.instructions+=1;goto B53c014;
case 0x53c019:goto L53c019;
case 0x53c01b:goto L53c01b;
case 0x53c01d:goto L53c01d;
case 0x53c01f:c.instructions+=4;goto B53c01f;
case 0x53c020:c.instructions+=3;goto B53c020;
case 0x53c022:c.instructions+=2;goto B53c022;
case 0x53c026:c.instructions+=1;goto B53c026;
case 0x53c029:goto L53c029;
case 0x53c02b:c.instructions+=1;goto B53c02b;
case 0x53c030:goto L53c030;
case 0x53c032:c.instructions+=5;goto B53c032;
case 0x53c035:c.instructions+=4;goto B53c035;
case 0x53c039:c.instructions+=3;goto B53c039;
case 0x53c03b:c.instructions+=2;goto B53c03b;
case 0x53c043:c.instructions+=1;goto B53c043;
case 0x53c045:goto L53c045;
case 0x53c047:c.instructions+=2;goto B53c047;
case 0x53c049:c.instructions+=1;goto B53c049;
case 0x53c04e:goto L53c04e;
case 0x53c050:c.instructions+=6;goto B53c050;
case 0x53c051:c.instructions+=5;goto B53c051;
case 0x53c053:c.instructions+=4;goto B53c053;
case 0x53c058:c.instructions+=3;goto B53c058;
case 0x53c05d:c.instructions+=2;goto B53c05d;
case 0x53c05f:c.instructions+=1;goto B53c05f;
case 0x53c064:goto L53c064;
case 0x53c066:goto L53c066;
case 0x53c068:goto L53c068;
case 0x53c06a:c.instructions+=4;goto B53c06a;
case 0x53c06b:c.instructions+=3;goto B53c06b;
case 0x53c06d:c.instructions+=2;goto B53c06d;
case 0x53c071:c.instructions+=1;goto B53c071;
case 0x53c074:goto L53c074;
case 0x53c076:c.instructions+=1;goto B53c076;
case 0x53c07b:goto L53c07b;
case 0x53c07d:c.instructions+=5;goto B53c07d;
case 0x53c080:c.instructions+=4;goto B53c080;
case 0x53c084:c.instructions+=3;goto B53c084;
case 0x53c086:c.instructions+=2;goto B53c086;
case 0x53c08e:c.instructions+=1;goto B53c08e;
case 0x53c090:goto L53c090;
case 0x53c092:c.instructions+=2;goto B53c092;
case 0x53c094:c.instructions+=1;goto B53c094;
case 0x53c099:goto L53c099;
case 0x53c09b:c.instructions+=6;goto B53c09b;
case 0x53c09c:c.instructions+=5;goto B53c09c;
case 0x53c09e:c.instructions+=4;goto B53c09e;
case 0x53c0a3:c.instructions+=3;goto B53c0a3;
case 0x53c0a8:c.instructions+=2;goto B53c0a8;
case 0x53c0aa:c.instructions+=1;goto B53c0aa;
case 0x53c0af:goto L53c0af;
case 0x53c0b1:goto L53c0b1;
case 0x53c0b3:goto L53c0b3;
case 0x53c0b5:c.instructions+=4;goto B53c0b5;
case 0x53c0b6:c.instructions+=3;goto B53c0b6;
case 0x53c0b8:c.instructions+=2;goto B53c0b8;
case 0x53c0bc:c.instructions+=1;goto B53c0bc;
case 0x53c0bf:goto L53c0bf;
case 0x53c0c1:c.instructions+=1;goto B53c0c1;
case 0x53c0c6:goto L53c0c6;
case 0x53c0c8:c.instructions+=5;goto B53c0c8;
case 0x53c0cb:c.instructions+=4;goto B53c0cb;
case 0x53c0cf:c.instructions+=3;goto B53c0cf;
case 0x53c0d1:c.instructions+=2;goto B53c0d1;
case 0x53c0d9:c.instructions+=1;goto B53c0d9;
case 0x53c0db:goto L53c0db;
case 0x53c0dd:c.instructions+=2;goto B53c0dd;
case 0x53c0df:c.instructions+=1;goto B53c0df;
case 0x53c0e4:goto L53c0e4;
case 0x53c0e6:c.instructions+=6;goto B53c0e6;
case 0x53c0e7:c.instructions+=5;goto B53c0e7;
case 0x53c0e9:c.instructions+=4;goto B53c0e9;
case 0x53c0ee:c.instructions+=3;goto B53c0ee;
case 0x53c0f3:c.instructions+=2;goto B53c0f3;
case 0x53c0f5:c.instructions+=1;goto B53c0f5;
case 0x53c0fa:goto L53c0fa;
case 0x53c0fc:goto L53c0fc;
case 0x53c0fe:goto L53c0fe;
case 0x53c102:c.instructions+=4;goto B53c102;
case 0x53c104:c.instructions+=3;goto B53c104;
case 0x53c106:c.instructions+=2;goto B53c106;
case 0x53c107:c.instructions+=1;goto B53c107;
case 0x53c10a:goto L53c10a;
case 0x53c10d:c.instructions+=3;goto B53c10d;
case 0x53c110:c.instructions+=2;goto B53c110;
case 0x53c112:c.instructions+=1;goto B53c112;
case 0x53c115:goto L53c115;
case 0x53c118:c.instructions+=2;goto B53c118;
case 0x53c11a:c.instructions+=1;goto B53c11a;
case 0x53c11c:goto L53c11c;
case 0x53c11f:c.instructions+=3;goto B53c11f;
case 0x53c120:c.instructions+=2;goto B53c120;
case 0x53c122:c.instructions+=1;goto B53c122;
case 0x53c127:goto L53c127;
case 0x53c128:c.instructions+=7;goto B53c128;
case 0x53c12e:c.instructions+=6;goto B53c12e;
case 0x53c12f:c.instructions+=5;goto B53c12f;
case 0x53c130:c.instructions+=4;goto B53c130;
case 0x53c134:c.instructions+=3;goto B53c134;
case 0x53c13b:c.instructions+=2;goto B53c13b;
case 0x53c13e:c.instructions+=1;goto B53c13e;
case 0x53c13f:goto L53c13f;
case 0x53c143:c.instructions+=7;goto B53c143;
case 0x53c144:c.instructions+=6;goto B53c144;
case 0x53c14e:c.instructions+=5;goto B53c14e;
case 0x53c14f:c.instructions+=4;goto B53c14f;
case 0x53c150:c.instructions+=3;goto B53c150;
case 0x53c157:c.instructions+=2;goto B53c157;
case 0x53c15a:c.instructions+=1;goto B53c15a;
case 0x53c160:goto L53c160;
case 0x53c161:c.instructions+=3;goto B53c161;
case 0x53c165:c.instructions+=2;goto B53c165;
case 0x53c167:c.instructions+=1;goto B53c167;
case 0x53c169:goto L53c169;
case 0x53c16a:c.instructions+=5;goto B53c16a;
case 0x53c170:c.instructions+=4;goto B53c170;
case 0x53c171:c.instructions+=3;goto B53c171;
case 0x53c173:c.instructions+=2;goto B53c173;
case 0x53c175:c.instructions+=1;goto B53c175;
case 0x53c177:goto L53c177;
case 0x53c17a:c.instructions+=2;goto B53c17a;
case 0x53c17d:c.instructions+=1;goto B53c17d;
case 0x53c17f:goto L53c17f;
case 0x53c181:c.instructions+=7;goto B53c181;
case 0x53c183:c.instructions+=6;goto B53c183;
case 0x53c186:c.instructions+=5;goto B53c186;
case 0x53c188:c.instructions+=4;goto B53c188;
case 0x53c18a:c.instructions+=3;goto B53c18a;
case 0x53c18b:c.instructions+=2;goto B53c18b;
case 0x53c18e:c.instructions+=1;goto B53c18e;
case 0x53c193:goto L53c193;
case 0x53c196:c.instructions+=1;goto B53c196;
case 0x53c198:goto L53c198;
case 0x53c19a:goto L53c19a;
case 0x53c19c:c.instructions+=1;goto B53c19c;
case 0x53c19e:goto L53c19e;
case 0x53c1a0:c.instructions+=1;goto B53c1a0;
case 0x53c1a5:goto L53c1a5;
case 0x53c1a8:c.instructions+=2;goto B53c1a8;
case 0x53c1aa:c.instructions+=1;goto B53c1aa;
case 0x53c1ac:goto L53c1ac;
case 0x53c1af:c.instructions+=14;goto B53c1af;
case 0x53c1b2:c.instructions+=13;goto B53c1b2;
case 0x53c1b5:c.instructions+=12;goto B53c1b5;
case 0x53c1b8:c.instructions+=11;goto B53c1b8;
case 0x53c1bb:c.instructions+=10;goto B53c1bb;
case 0x53c1be:c.instructions+=9;goto B53c1be;
case 0x53c1c1:c.instructions+=8;goto B53c1c1;
case 0x53c1c3:c.instructions+=7;goto B53c1c3;
case 0x53c1c6:c.instructions+=6;goto B53c1c6;
case 0x53c1c7:c.instructions+=5;goto B53c1c7;
case 0x53c1c9:c.instructions+=4;goto B53c1c9;
case 0x53c1ca:c.instructions+=3;goto B53c1ca;
case 0x53c1cd:c.instructions+=2;goto B53c1cd;
case 0x53c1ce:c.instructions+=1;goto B53c1ce;
case 0x53c1d1:goto L53c1d1;
case 0x53c1d4:c.instructions+=7;goto B53c1d4;
case 0x53c1d6:c.instructions+=6;goto B53c1d6;
case 0x53c1d8:c.instructions+=5;goto B53c1d8;
case 0x53c1db:c.instructions+=4;goto B53c1db;
case 0x53c1dc:c.instructions+=3;goto B53c1dc;
case 0x53c1de:c.instructions+=2;goto B53c1de;
case 0x53c1e1:c.instructions+=1;goto B53c1e1;
case 0x53c1e2:goto L53c1e2;
case 0x53c1e3:c.instructions+=1;goto B53c1e3;
case 0x53c1f0:goto L53c1f0;
case 0x53c1f2:c.instructions+=16;goto B53c1f2;
case 0x53c1f7:c.instructions+=15;goto B53c1f7;
case 0x53c1fd:c.instructions+=14;goto B53c1fd;
case 0x53c1fe:c.instructions+=13;goto B53c1fe;
case 0x53c205:c.instructions+=12;goto B53c205;
case 0x53c208:c.instructions+=11;goto B53c208;
case 0x53c209:c.instructions+=10;goto B53c209;
case 0x53c20a:c.instructions+=9;goto B53c20a;
case 0x53c20c:c.instructions+=8;goto B53c20c;
case 0x53c212:c.instructions+=7;goto B53c212;
case 0x53c213:c.instructions+=6;goto B53c213;
case 0x53c216:c.instructions+=5;goto B53c216;
case 0x53c219:c.instructions+=4;goto B53c219;
case 0x53c21d:c.instructions+=3;goto B53c21d;
case 0x53c221:c.instructions+=2;goto B53c221;
case 0x53c225:c.instructions+=1;goto B53c225;
case 0x53c22a:goto L53c22a;
case 0x53c22c:c.instructions+=11;goto B53c22c;
case 0x53c230:c.instructions+=10;goto B53c230;
case 0x53c234:c.instructions+=9;goto B53c234;
case 0x53c23a:c.instructions+=8;goto B53c23a;
case 0x53c23e:c.instructions+=7;goto B53c23e;
case 0x53c242:c.instructions+=6;goto B53c242;
case 0x53c243:c.instructions+=5;goto B53c243;
case 0x53c247:c.instructions+=4;goto B53c247;
case 0x53c248:c.instructions+=3;goto B53c248;
case 0x53c249:c.instructions+=2;goto B53c249;
case 0x53c24d:c.instructions+=1;goto B53c24d;
case 0x53c252:goto L53c252;
case 0x53c256:c.instructions+=5;goto B53c256;
case 0x53c25a:c.instructions+=4;goto B53c25a;
case 0x53c25d:c.instructions+=3;goto B53c25d;
case 0x53c25f:c.instructions+=2;goto B53c25f;
case 0x53c263:c.instructions+=1;goto B53c263;
case 0x53c265:goto L53c265;
case 0x53c26d:c.instructions+=1;goto B53c26d;
case 0x53c272:goto L53c272;
case 0x53c273:c.instructions+=6;goto B53c273;
case 0x53c274:c.instructions+=5;goto B53c274;
case 0x53c275:c.instructions+=4;goto B53c275;
case 0x53c279:c.instructions+=3;goto B53c279;
case 0x53c280:c.instructions+=2;goto B53c280;
case 0x53c283:c.instructions+=1;goto B53c283;
case 0x53c284:goto L53c284;
case 0x53c286:c.instructions+=1;goto B53c286;
case 0x53c28b:goto L53c28b;
case 0x53c28d:c.instructions+=2;goto B53c28d;
case 0x53c291:c.instructions+=1;goto B53c291;
case 0x53c297:goto L53c297;
case 0x53c29b:c.instructions+=2;goto B53c29b;
case 0x53c29e:c.instructions+=1;goto B53c29e;
case 0x53c2a0:goto L53c2a0;
case 0x53c2a3:c.instructions+=4;goto B53c2a3;
case 0x53c2a6:c.instructions+=3;goto B53c2a6;
case 0x53c2a9:c.instructions+=2;goto B53c2a9;
case 0x53c2ac:c.instructions+=1;goto B53c2ac;
case 0x53c2b2:goto L53c2b2;
case 0x53c2b4:goto L53c2b4;
case 0x53c2b7:c.instructions+=1;goto B53c2b7;
case 0x53c2b9:goto L53c2b9;
case 0x53c2bf:c.instructions+=2;goto B53c2bf;
case 0x53c2c1:c.instructions+=1;goto B53c2c1;
case 0x53c2c4:goto L53c2c4;
case 0x53c2c7:c.instructions+=4;goto B53c2c7;
case 0x53c2ca:c.instructions+=3;goto B53c2ca;
case 0x53c2cd:c.instructions+=2;goto B53c2cd;
case 0x53c2d0:c.instructions+=1;goto B53c2d0;
case 0x53c2d2:goto L53c2d2;
case 0x53c2d8:c.instructions+=6;goto B53c2d8;
case 0x53c2de:c.instructions+=5;goto B53c2de;
case 0x53c2e6:c.instructions+=4;goto B53c2e6;
case 0x53c2e7:c.instructions+=3;goto B53c2e7;
case 0x53c2e9:c.instructions+=2;goto B53c2e9;
case 0x53c2ee:c.instructions+=1;goto B53c2ee;
case 0x53c2f3:goto L53c2f3;
case 0x53c2f6:c.instructions+=2;goto B53c2f6;
case 0x53c2f8:c.instructions+=1;goto B53c2f8;
case 0x53c2fa:goto L53c2fa;
case 0x53c2fc:c.instructions+=1;goto B53c2fc;
case 0x53c301:goto L53c301;
case 0x53c304:c.instructions+=2;goto B53c304;
case 0x53c306:c.instructions+=1;goto B53c306;
case 0x53c308:goto L53c308;
case 0x53c30b:c.instructions+=11;goto B53c30b;
case 0x53c30e:c.instructions+=10;goto B53c30e;
case 0x53c311:c.instructions+=9;goto B53c311;
case 0x53c314:c.instructions+=8;goto B53c314;
case 0x53c317:c.instructions+=7;goto B53c317;
case 0x53c31a:c.instructions+=6;goto B53c31a;
case 0x53c31e:c.instructions+=5;goto B53c31e;
case 0x53c321:c.instructions+=4;goto B53c321;
case 0x53c324:c.instructions+=3;goto B53c324;
case 0x53c32a:c.instructions+=2;goto B53c32a;
case 0x53c32d:c.instructions+=1;goto B53c32d;
case 0x53c32f:goto L53c32f;
case 0x53c331:goto L53c331;
case 0x53c335:c.instructions+=4;goto B53c335;
case 0x53c337:c.instructions+=3;goto B53c337;
case 0x53c339:c.instructions+=2;goto B53c339;
case 0x53c33a:c.instructions+=1;goto B53c33a;
case 0x53c33f:goto L53c33f;
case 0x53c343:c.instructions+=1;goto B53c343;
case 0x53c349:goto L53c349;
case 0x53c34d:goto L53c34d;
case 0x53c34f:c.instructions+=2;goto B53c34f;
case 0x53c353:c.instructions+=1;goto B53c353;
case 0x53c359:goto L53c359;
case 0x53c35d:c.instructions+=4;goto B53c35d;
case 0x53c360:c.instructions+=3;goto B53c360;
case 0x53c363:c.instructions+=2;goto B53c363;
case 0x53c365:c.instructions+=1;goto B53c365;
case 0x53c367:goto L53c367;
case 0x53c36b:c.instructions+=3;goto B53c36b;
case 0x53c36d:c.instructions+=2;goto B53c36d;
case 0x53c375:c.instructions+=1;goto B53c375;
case 0x53c37b:goto L53c37b;
case 0x53c380:goto L53c380;
case 0x53c382:c.instructions+=6;goto B53c382;
case 0x53c384:c.instructions+=5;goto B53c384;
case 0x53c387:c.instructions+=4;goto B53c387;
case 0x53c389:c.instructions+=3;goto B53c389;
case 0x53c38a:c.instructions+=2;goto B53c38a;
case 0x53c38d:c.instructions+=1;goto B53c38d;
case 0x53c392:goto L53c392;
case 0x53c396:c.instructions+=4;goto B53c396;
case 0x53c39a:c.instructions+=3;goto B53c39a;
case 0x53c39d:c.instructions+=2;goto B53c39d;
case 0x53c39f:c.instructions+=1;goto B53c39f;
case 0x53c3a1:goto L53c3a1;
case 0x53c3a2:c.instructions+=6;goto B53c3a2;
case 0x53c3a3:c.instructions+=5;goto B53c3a3;
case 0x53c3a4:c.instructions+=4;goto B53c3a4;
case 0x53c3a8:c.instructions+=3;goto B53c3a8;
case 0x53c3af:c.instructions+=2;goto B53c3af;
case 0x53c3b2:c.instructions+=1;goto B53c3b2;
case 0x53c3b3:goto L53c3b3;
case 0x53c3b7:c.instructions+=3;goto B53c3b7;
case 0x53c3ba:c.instructions+=2;goto B53c3ba;
case 0x53c3bc:c.instructions+=1;goto B53c3bc;
case 0x53c3be:goto L53c3be;
case 0x53c3c1:goto L53c3c1;
case 0x53c3c2:c.instructions+=2;goto B53c3c2;
case 0x53c3c4:c.instructions+=1;goto B53c3c4;
case 0x53c3c9:goto L53c3c9;
case 0x53c3cb:c.instructions+=3;goto B53c3cb;
case 0x53c3cd:c.instructions+=2;goto B53c3cd;
case 0x53c3d1:c.instructions+=1;goto B53c3d1;
case 0x53c3d6:goto L53c3d6;
case 0x53c3da:c.instructions+=4;goto B53c3da;
case 0x53c3de:c.instructions+=3;goto B53c3de;
case 0x53c3e0:c.instructions+=2;goto B53c3e0;
case 0x53c3e8:c.instructions+=1;goto B53c3e8;
case 0x53c3ea:goto L53c3ea;
case 0x53c3f0:goto L53c3f0;
case 0x53c3f2:c.instructions+=6;goto B53c3f2;
case 0x53c3f4:c.instructions+=5;goto B53c3f4;
case 0x53c3f7:c.instructions+=4;goto B53c3f7;
case 0x53c3f9:c.instructions+=3;goto B53c3f9;
case 0x53c3fa:c.instructions+=2;goto B53c3fa;
case 0x53c3fd:c.instructions+=1;goto B53c3fd;
case 0x53c402:goto L53c402;
case 0x53c406:c.instructions+=4;goto B53c406;
case 0x53c40a:c.instructions+=3;goto B53c40a;
case 0x53c40d:c.instructions+=2;goto B53c40d;
case 0x53c40f:c.instructions+=1;goto B53c40f;
case 0x53c411:goto L53c411;
case 0x53c415:c.instructions+=6;goto B53c415;
case 0x53c416:c.instructions+=5;goto B53c416;
case 0x53c417:c.instructions+=4;goto B53c417;
case 0x53c418:c.instructions+=3;goto B53c418;
case 0x53c41f:c.instructions+=2;goto B53c41f;
case 0x53c422:c.instructions+=1;goto B53c422;
case 0x53c430:goto L53c430;
case 0x53c432:c.instructions+=13;goto B53c432;
case 0x53c437:c.instructions+=12;goto B53c437;
case 0x53c43d:c.instructions+=11;goto B53c43d;
case 0x53c43e:c.instructions+=10;goto B53c43e;
case 0x53c445:c.instructions+=9;goto B53c445;
case 0x53c446:c.instructions+=8;goto B53c446;
case 0x53c447:c.instructions+=7;goto B53c447;
case 0x53c449:c.instructions+=6;goto B53c449;
case 0x53c44d:c.instructions+=5;goto B53c44d;
case 0x53c453:c.instructions+=4;goto B53c453;
case 0x53c456:c.instructions+=3;goto B53c456;
case 0x53c458:c.instructions+=2;goto B53c458;
case 0x53c460:c.instructions+=1;goto B53c460;
case 0x53c462:goto L53c462;
case 0x53c463:c.instructions+=1;goto B53c463;
case 0x53c468:goto L53c468;
case 0x53c46b:goto L53c46b;
case 0x53c470:c.instructions+=6;goto B53c470;
case 0x53c472:c.instructions+=5;goto B53c472;
case 0x53c474:c.instructions+=4;goto B53c474;
case 0x53c477:c.instructions+=3;goto B53c477;
case 0x53c478:c.instructions+=2;goto B53c478;
case 0x53c47d:c.instructions+=1;goto B53c47d;
case 0x53c482:goto L53c482;
case 0x53c486:c.instructions+=5;goto B53c486;
case 0x53c48c:c.instructions+=4;goto B53c48c;
case 0x53c48d:c.instructions+=3;goto B53c48d;
case 0x53c494:c.instructions+=2;goto B53c494;
case 0x53c497:c.instructions+=1;goto B53c497;
case 0x53c4a0:goto L53c4a0;
case 0x53c4a1:c.instructions+=6;goto B53c4a1;
case 0x53c4a2:c.instructions+=5;goto B53c4a2;
case 0x53c4a4:c.instructions+=4;goto B53c4a4;
case 0x53c4a7:c.instructions+=3;goto B53c4a7;
case 0x53c4a8:c.instructions+=2;goto B53c4a8;
case 0x53c4a9:c.instructions+=1;goto B53c4a9;
case 0x53c4ae:goto L53c4ae;
case 0x53c4b1:c.instructions+=3;goto B53c4b1;
case 0x53c4b4:c.instructions+=2;goto B53c4b4;
case 0x53c4b6:c.instructions+=1;goto B53c4b6;
case 0x53c4b8:goto L53c4b8;
case 0x53c4b9:c.instructions+=1;goto B53c4b9;
case 0x53c4be:goto L53c4be;
case 0x53c4c1:c.instructions+=2;goto B53c4c1;
case 0x53c4c3:c.instructions+=1;goto B53c4c3;
case 0x53c4c5:goto L53c4c5;
case 0x53c4ca:c.instructions+=2;goto B53c4ca;
case 0x53c4cc:c.instructions+=1;goto B53c4cc;
case 0x53c4d1:goto L53c4d1;
case 0x53c4d3:c.instructions+=1;goto B53c4d3;
case 0x53c4d5:goto L53c4d5;
case 0x53c4da:c.instructions+=2;goto B53c4da;
case 0x53c4dc:c.instructions+=1;goto B53c4dc;
case 0x53c4de:goto L53c4de;
case 0x53c4e1:c.instructions+=3;goto B53c4e1;
case 0x53c4e2:c.instructions+=2;goto B53c4e2;
case 0x53c4e7:c.instructions+=1;goto B53c4e7;
case 0x53c4ec:goto L53c4ec;
case 0x53c4ee:c.instructions+=2;goto B53c4ee;
case 0x53c4f0:c.instructions+=1;goto B53c4f0;
case 0x53c4f2:goto L53c4f2;
case 0x53c4f5:c.instructions+=2;goto B53c4f5;
case 0x53c4f7:c.instructions+=1;goto B53c4f7;
case 0x53c4f9:goto L53c4f9;
case 0x53c500:goto L53c500;
case 0x53c505:c.instructions+=1;goto B53c505;
case 0x53c50a:goto L53c50a;
case 0x53c50d:c.instructions+=3;goto B53c50d;
case 0x53c510:c.instructions+=2;goto B53c510;
case 0x53c512:c.instructions+=1;goto B53c512;
case 0x53c514:goto L53c514;
case 0x53c517:c.instructions+=2;goto B53c517;
case 0x53c519:c.instructions+=1;goto B53c519;
case 0x53c51b:goto L53c51b;
case 0x53c51d:goto L53c51d;
case 0x53c51f:c.instructions+=1;goto B53c51f;
case 0x53c521:goto L53c521;
case 0x53c524:c.instructions+=1;goto B53c524;
case 0x53c526:goto L53c526;
case 0x53c528:c.instructions+=2;goto B53c528;
case 0x53c52b:c.instructions+=1;goto B53c52b;
case 0x53c530:goto L53c530;
case 0x53c533:c.instructions+=1;goto B53c533;
case 0x53c53a:goto L53c53a;
case 0x53c541:goto L53c541;
case 0x53c547:c.instructions+=2;goto B53c547;
case 0x53c548:c.instructions+=1;goto B53c548;
case 0x53c54d:goto L53c54d;
case 0x53c553:c.instructions+=2;goto B53c553;
case 0x53c554:c.instructions+=1;goto B53c554;
case 0x53c559:goto L53c559;
case 0x53c55c:c.instructions+=4;goto B53c55c;
case 0x53c55d:c.instructions+=3;goto B53c55d;
case 0x53c55e:c.instructions+=2;goto B53c55e;
case 0x53c55f:c.instructions+=1;goto B53c55f;
case 0x53c560:goto L53c560;
case 0x53c561:c.instructions+=6;goto B53c561;
case 0x53c562:c.instructions+=5;goto B53c562;
case 0x53c564:c.instructions+=4;goto B53c564;
case 0x53c567:c.instructions+=3;goto B53c567;
case 0x53c568:c.instructions+=2;goto B53c568;
case 0x53c569:c.instructions+=1;goto B53c569;
case 0x53c56e:goto L53c56e;
case 0x53c571:c.instructions+=3;goto B53c571;
case 0x53c574:c.instructions+=2;goto B53c574;
case 0x53c576:c.instructions+=1;goto B53c576;
case 0x53c578:goto L53c578;
case 0x53c579:c.instructions+=1;goto B53c579;
case 0x53c57e:goto L53c57e;
case 0x53c581:c.instructions+=2;goto B53c581;
case 0x53c583:c.instructions+=1;goto B53c583;
case 0x53c585:goto L53c585;
case 0x53c58a:c.instructions+=2;goto B53c58a;
case 0x53c58c:c.instructions+=1;goto B53c58c;
case 0x53c591:goto L53c591;
case 0x53c593:c.instructions+=1;goto B53c593;
case 0x53c595:goto L53c595;
case 0x53c59a:c.instructions+=2;goto B53c59a;
case 0x53c59c:c.instructions+=1;goto B53c59c;
case 0x53c59e:goto L53c59e;
case 0x53c5a1:c.instructions+=3;goto B53c5a1;
case 0x53c5a2:c.instructions+=2;goto B53c5a2;
case 0x53c5a7:c.instructions+=1;goto B53c5a7;
case 0x53c5ac:goto L53c5ac;
case 0x53c5ae:c.instructions+=2;goto B53c5ae;
case 0x53c5b0:c.instructions+=1;goto B53c5b0;
case 0x53c5b2:goto L53c5b2;
case 0x53c5b5:c.instructions+=2;goto B53c5b5;
case 0x53c5b7:c.instructions+=1;goto B53c5b7;
case 0x53c5b9:goto L53c5b9;
case 0x53c5c0:goto L53c5c0;
case 0x53c5c5:c.instructions+=1;goto B53c5c5;
case 0x53c5ca:goto L53c5ca;
case 0x53c5cd:c.instructions+=3;goto B53c5cd;
case 0x53c5d0:c.instructions+=2;goto B53c5d0;
case 0x53c5d2:c.instructions+=1;goto B53c5d2;
case 0x53c5d4:goto L53c5d4;
case 0x53c5d7:c.instructions+=2;goto B53c5d7;
case 0x53c5d9:c.instructions+=1;goto B53c5d9;
case 0x53c5db:goto L53c5db;
case 0x53c5dd:goto L53c5dd;
case 0x53c5df:c.instructions+=1;goto B53c5df;
case 0x53c5e1:goto L53c5e1;
case 0x53c5e4:c.instructions+=1;goto B53c5e4;
case 0x53c5e6:goto L53c5e6;
case 0x53c5e8:c.instructions+=2;goto B53c5e8;
case 0x53c5eb:c.instructions+=1;goto B53c5eb;
case 0x53c5f0:goto L53c5f0;
case 0x53c5f3:c.instructions+=1;goto B53c5f3;
case 0x53c5fa:goto L53c5fa;
case 0x53c601:goto L53c601;
case 0x53c607:c.instructions+=2;goto B53c607;
case 0x53c608:c.instructions+=1;goto B53c608;
case 0x53c60d:goto L53c60d;
case 0x53c613:c.instructions+=2;goto B53c613;
case 0x53c614:c.instructions+=1;goto B53c614;
case 0x53c619:goto L53c619;
case 0x53c61c:c.instructions+=4;goto B53c61c;
case 0x53c61d:c.instructions+=3;goto B53c61d;
case 0x53c61e:c.instructions+=2;goto B53c61e;
case 0x53c61f:c.instructions+=1;goto B53c61f;
case 0x53c620:goto L53c620;
case 0x53c624:c.instructions+=6;goto B53c624;
case 0x53c627:c.instructions+=5;goto B53c627;
case 0x53c628:c.instructions+=4;goto B53c628;
case 0x53c629:c.instructions+=3;goto B53c629;
case 0x53c62a:c.instructions+=2;goto B53c62a;
case 0x53c62c:c.instructions+=1;goto B53c62c;
case 0x53c62e:goto L53c62e;
case 0x53c62f:c.instructions+=1;goto B53c62f;
case 0x53c631:goto L53c631;
case 0x53c632:c.instructions+=1;goto B53c632;
case 0x53c638:goto L53c638;
case 0x53c63b:c.instructions+=3;goto B53c63b;
case 0x53c640:c.instructions+=2;goto B53c640;
case 0x53c641:c.instructions+=1;goto B53c641;
case 0x53c646:goto L53c646;
case 0x53c64b:c.instructions+=1;goto B53c64b;
case 0x53c64d:goto L53c64d;
case 0x53c650:c.instructions+=3;goto B53c650;
case 0x53c655:c.instructions+=2;goto B53c655;
case 0x53c656:c.instructions+=1;goto B53c656;
case 0x53c65b:goto L53c65b;
case 0x53c660:c.instructions+=1;goto B53c660;
case 0x53c662:goto L53c662;
case 0x53c665:c.instructions+=3;goto B53c665;
case 0x53c66a:c.instructions+=2;goto B53c66a;
case 0x53c66b:c.instructions+=1;goto B53c66b;
case 0x53c670:goto L53c670;
case 0x53c675:goto L53c675;
case 0x53c677:c.instructions+=3;goto B53c677;
case 0x53c67a:c.instructions+=2;goto B53c67a;
case 0x53c67b:c.instructions+=1;goto B53c67b;
case 0x53c680:goto L53c680;
case 0x53c683:c.instructions+=3;goto B53c683;
case 0x53c685:c.instructions+=2;goto B53c685;
case 0x53c687:c.instructions+=1;goto B53c687;
case 0x53c68d:goto L53c68d;
case 0x53c690:c.instructions+=4;goto B53c690;
case 0x53c693:c.instructions+=3;goto B53c693;
case 0x53c697:c.instructions+=2;goto B53c697;
case 0x53c69e:c.instructions+=1;goto B53c69e;
case 0x53c6a0:goto L53c6a0;
case 0x53c6a1:c.instructions+=3;goto B53c6a1;
case 0x53c6a5:c.instructions+=2;goto B53c6a5;
case 0x53c6a6:c.instructions+=1;goto B53c6a6;
case 0x53c6ab:goto L53c6ab;
case 0x53c6ae:c.instructions+=2;goto B53c6ae;
case 0x53c6b0:c.instructions+=1;goto B53c6b0;
case 0x53c6b2:goto L53c6b2;
case 0x53c6b9:goto L53c6b9;
case 0x53c6bb:c.instructions+=5;goto B53c6bb;
case 0x53c6bf:c.instructions+=4;goto B53c6bf;
case 0x53c6c0:c.instructions+=3;goto B53c6c0;
case 0x53c6c2:c.instructions+=2;goto B53c6c2;
case 0x53c6c4:c.instructions+=1;goto B53c6c4;
case 0x53c6c9:goto L53c6c9;
case 0x53c6cc:c.instructions+=4;goto B53c6cc;
case 0x53c6d3:c.instructions+=3;goto B53c6d3;
case 0x53c6d6:c.instructions+=2;goto B53c6d6;
case 0x53c6da:c.instructions+=1;goto B53c6da;
case 0x53c6dc:goto L53c6dc;
case 0x53c6dd:c.instructions+=3;goto B53c6dd;
case 0x53c6e1:c.instructions+=2;goto B53c6e1;
case 0x53c6e2:c.instructions+=1;goto B53c6e2;
case 0x53c6e7:goto L53c6e7;
case 0x53c6ea:c.instructions+=2;goto B53c6ea;
case 0x53c6ec:c.instructions+=1;goto B53c6ec;
case 0x53c6ee:goto L53c6ee;
case 0x53c6f5:goto L53c6f5;
case 0x53c6f7:c.instructions+=5;goto B53c6f7;
case 0x53c6fb:c.instructions+=4;goto B53c6fb;
case 0x53c6fc:c.instructions+=3;goto B53c6fc;
case 0x53c6fe:c.instructions+=2;goto B53c6fe;
case 0x53c700:c.instructions+=1;goto B53c700;
case 0x53c705:goto L53c705;
case 0x53c709:c.instructions+=2;goto B53c709;
case 0x53c70b:c.instructions+=1;goto B53c70b;
case 0x53c711:goto L53c711;
case 0x53c715:c.instructions+=2;goto B53c715;
case 0x53c718:c.instructions+=1;goto B53c718;
case 0x53c71a:goto L53c71a;
case 0x53c71b:c.instructions+=1;goto B53c71b;
case 0x53c71d:goto L53c71d;
case 0x53c71e:c.instructions+=1;goto B53c71e;
case 0x53c724:goto L53c724;
case 0x53c728:c.instructions+=13;goto B53c728;
case 0x53c72c:c.instructions+=12;goto B53c72c;
case 0x53c730:c.instructions+=11;goto B53c730;
case 0x53c736:c.instructions+=10;goto B53c736;
case 0x53c73b:c.instructions+=9;goto B53c73b;
case 0x53c741:c.instructions+=8;goto B53c741;
case 0x53c747:c.instructions+=7;goto B53c747;
case 0x53c74d:c.instructions+=6;goto B53c74d;
case 0x53c750:c.instructions+=5;goto B53c750;
case 0x53c751:c.instructions+=4;goto B53c751;
case 0x53c752:c.instructions+=3;goto B53c752;
case 0x53c758:c.instructions+=2;goto B53c758;
case 0x53c759:c.instructions+=1;goto B53c759;
case 0x53c75c:goto L53c75c;
case 0x53c760:c.instructions+=13;goto B53c760;
case 0x53c764:c.instructions+=12;goto B53c764;
case 0x53c768:c.instructions+=11;goto B53c768;
case 0x53c76e:c.instructions+=10;goto B53c76e;
case 0x53c774:c.instructions+=9;goto B53c774;
case 0x53c779:c.instructions+=8;goto B53c779;
case 0x53c77f:c.instructions+=7;goto B53c77f;
case 0x53c785:c.instructions+=6;goto B53c785;
case 0x53c788:c.instructions+=5;goto B53c788;
case 0x53c789:c.instructions+=4;goto B53c789;
case 0x53c78a:c.instructions+=3;goto B53c78a;
case 0x53c78f:c.instructions+=2;goto B53c78f;
case 0x53c790:c.instructions+=1;goto B53c790;
case 0x53c793:goto L53c793;
case 0x53c797:c.instructions+=9;goto B53c797;
case 0x53c79b:c.instructions+=8;goto B53c79b;
case 0x53c79f:c.instructions+=7;goto B53c79f;
case 0x53c7a5:c.instructions+=6;goto B53c7a5;
case 0x53c7ab:c.instructions+=5;goto B53c7ab;
case 0x53c7b1:c.instructions+=4;goto B53c7b1;
case 0x53c7b6:c.instructions+=3;goto B53c7b6;
case 0x53c7b9:c.instructions+=2;goto B53c7b9;
case 0x53c7bc:c.instructions+=1;goto B53c7bc;
case 0x53c7c2:goto L53c7c2;
case 0x53c7c3:c.instructions+=3;goto B53c7c3;
case 0x53c7c4:c.instructions+=2;goto B53c7c4;
case 0x53c7c5:c.instructions+=1;goto B53c7c5;
case 0x53c7d0:goto L53c7d0;
case 0x53c7d8:c.instructions+=1;goto B53c7d8;
case 0x53c7da:goto L53c7da;
case 0x53c7df:c.instructions+=1;goto B53c7df;
case 0x53c7e4:goto L53c7e4;
case 0x53c7e7:c.instructions+=2;goto B53c7e7;
case 0x53c7e9:c.instructions+=1;goto B53c7e9;
case 0x53c7eb:goto L53c7eb;
case 0x53c7f1:c.instructions+=2;goto B53c7f1;
case 0x53c7f3:c.instructions+=1;goto B53c7f3;
case 0x53c7f5:goto L53c7f5;
case 0x53c7fa:c.instructions+=1;goto B53c7fa;
case 0x53c7ff:goto L53c7ff;
case 0x53c805:c.instructions+=2;goto B53c805;
case 0x53c807:c.instructions+=1;goto B53c807;
case 0x53c80c:goto L53c80c;
case 0x53c810:c.instructions+=2;goto B53c810;
case 0x53c811:c.instructions+=1;goto B53c811;
case 0x53c816:goto L53c816;
case 0x53c817:c.instructions+=1;goto B53c817;
case 0x53c81c:goto L53c81c;
case 0x53c81f:c.instructions+=2;goto B53c81f;
case 0x53c821:c.instructions+=1;goto B53c821;
case 0x53c823:goto L53c823;
case 0x53c82a:goto L53c82a;
case 0x53c830:goto L53c830;
case 0x53c838:c.instructions+=1;goto B53c838;
case 0x53c83a:goto L53c83a;
case 0x53c840:c.instructions+=2;goto B53c840;
case 0x53c842:c.instructions+=1;goto B53c842;
case 0x53c844:goto L53c844;
case 0x53c849:c.instructions+=5;goto B53c849;
case 0x53c84d:c.instructions+=4;goto B53c84d;
case 0x53c84f:c.instructions+=3;goto B53c84f;
case 0x53c850:c.instructions+=2;goto B53c850;
case 0x53c851:c.instructions+=1;goto B53c851;
case 0x53c856:goto L53c856;
case 0x53c860:goto L53c860;
case 0x53c868:c.instructions+=1;goto B53c868;
case 0x53c86a:goto L53c86a;
case 0x53c870:c.instructions+=2;goto B53c870;
case 0x53c872:c.instructions+=1;goto B53c872;
case 0x53c874:goto L53c874;
case 0x53c878:c.instructions+=4;goto B53c878;
case 0x53c87a:c.instructions+=3;goto B53c87a;
case 0x53c87f:c.instructions+=2;goto B53c87f;
case 0x53c880:c.instructions+=1;goto B53c880;
case 0x53c885:goto L53c885;
case 0x53c890:goto L53c890;
case 0x53c898:c.instructions+=1;goto B53c898;
case 0x53c89a:goto L53c89a;
case 0x53c8a0:c.instructions+=2;goto B53c8a0;
case 0x53c8a2:c.instructions+=1;goto B53c8a2;
case 0x53c8a4:goto L53c8a4;
case 0x53c8a9:c.instructions+=5;goto B53c8a9;
case 0x53c8ad:c.instructions+=4;goto B53c8ad;
case 0x53c8af:c.instructions+=3;goto B53c8af;
case 0x53c8b0:c.instructions+=2;goto B53c8b0;
case 0x53c8b1:c.instructions+=1;goto B53c8b1;
case 0x53c8b6:goto L53c8b6;
case 0x53c8c0:goto L53c8c0;
case 0x53c8c1:c.instructions+=3;goto B53c8c1;
case 0x53c8c3:c.instructions+=2;goto B53c8c3;
case 0x53c8ca:c.instructions+=1;goto B53c8ca;
case 0x53c8d0:goto L53c8d0;
case 0x53c8d5:c.instructions+=1;goto B53c8d5;
case 0x53c8da:goto L53c8da;
case 0x53c8dd:c.instructions+=2;goto B53c8dd;
case 0x53c8df:c.instructions+=1;goto B53c8df;
case 0x53c8e1:goto L53c8e1;
case 0x53c8e7:c.instructions+=2;goto B53c8e7;
case 0x53c8e9:c.instructions+=1;goto B53c8e9;
case 0x53c8eb:goto L53c8eb;
case 0x53c8f0:c.instructions+=1;goto B53c8f0;
case 0x53c8f5:goto L53c8f5;
case 0x53c8f7:c.instructions+=2;goto B53c8f7;
case 0x53c8fc:c.instructions+=1;goto B53c8fc;
case 0x53c901:goto L53c901;
case 0x53c906:c.instructions+=2;goto B53c906;
case 0x53c908:c.instructions+=1;goto B53c908;
case 0x53c90a:goto L53c90a;
case 0x53c90b:c.instructions+=4;goto B53c90b;
case 0x53c90c:c.instructions+=3;goto B53c90c;
case 0x53c90f:c.instructions+=2;goto B53c90f;
case 0x53c914:c.instructions+=1;goto B53c914;
case 0x53c919:goto L53c919;
case 0x53c91b:goto L53c91b;
case 0x53c91c:c.instructions+=2;goto B53c91c;
case 0x53c91d:c.instructions+=1;goto B53c91d;
case 0x53c91e:goto L53c91e;
case 0x53c920:c.instructions+=1;goto B53c920;
case 0x53c925:goto L53c925;
case 0x53c928:c.instructions+=4;goto B53c928;
case 0x53c929:c.instructions+=3;goto B53c929;
case 0x53c930:c.instructions+=2;goto B53c930;
case 0x53c93a:c.instructions+=1;goto B53c93a;
case 0x53c93f:goto L53c93f;
case 0x53c940:c.instructions+=1;goto B53c940;
case 0x53c945:goto L53c945;
case 0x53c948:c.instructions+=2;goto B53c948;
case 0x53c94a:c.instructions+=1;goto B53c94a;
case 0x53c94c:goto L53c94c;
case 0x53c953:goto L53c953;
case 0x53c959:c.instructions+=2;goto B53c959;
case 0x53c95c:c.instructions+=1;goto B53c95c;
case 0x53c95e:goto L53c95e;
case 0x53c960:c.instructions+=1;goto B53c960;
case 0x53c965:goto L53c965;
case 0x53c96b:c.instructions+=1;goto B53c96b;
case 0x53c970:goto L53c970;
case 0x53c973:c.instructions+=2;goto B53c973;
case 0x53c975:c.instructions+=1;goto B53c975;
case 0x53c977:goto L53c977;
case 0x53c97d:c.instructions+=4;goto B53c97d;
case 0x53c97f:c.instructions+=3;goto B53c97f;
case 0x53c986:c.instructions+=2;goto B53c986;
case 0x53c987:c.instructions+=1;goto B53c987;
case 0x53c98a:goto L53c98a;
case 0x53c98c:c.instructions+=1;goto B53c98c;
case 0x53c98e:goto L53c98e;
case 0x53c994:c.instructions+=4;goto B53c994;
case 0x53c999:c.instructions+=3;goto B53c999;
case 0x53c9a0:c.instructions+=2;goto B53c9a0;
case 0x53c9a1:c.instructions+=1;goto B53c9a1;
case 0x53c9a4:goto L53c9a4;
case 0x53c9a6:c.instructions+=1;goto B53c9a6;
case 0x53c9a8:goto L53c9a8;
case 0x53c9ae:c.instructions+=4;goto B53c9ae;
case 0x53c9b3:c.instructions+=3;goto B53c9b3;
case 0x53c9ba:c.instructions+=2;goto B53c9ba;
case 0x53c9bb:c.instructions+=1;goto B53c9bb;
case 0x53c9be:goto L53c9be;
case 0x53c9c4:c.instructions+=6;goto B53c9c4;
case 0x53c9c6:c.instructions+=5;goto B53c9c6;
case 0x53c9c8:c.instructions+=4;goto B53c9c8;
case 0x53c9ca:c.instructions+=3;goto B53c9ca;
case 0x53c9cd:c.instructions+=2;goto B53c9cd;
case 0x53c9ce:c.instructions+=1;goto B53c9ce;
case 0x53c9d5:goto L53c9d5;
case 0x53c9d6:c.instructions+=1;goto B53c9d6;
case 0x53c9e0:goto L53c9e0;
case 0x53c9e1:c.instructions+=5;goto B53c9e1;
case 0x53c9e2:c.instructions+=4;goto B53c9e2;
case 0x53c9e3:c.instructions+=3;goto B53c9e3;
case 0x53c9e5:c.instructions+=2;goto B53c9e5;
case 0x53c9e7:c.instructions+=1;goto B53c9e7;
case 0x53c9ec:goto L53c9ec;
case 0x53c9ee:c.instructions+=4;goto B53c9ee;
case 0x53c9f1:c.instructions+=3;goto B53c9f1;
case 0x53c9f3:c.instructions+=2;goto B53c9f3;
case 0x53c9f8:c.instructions+=1;goto B53c9f8;
case 0x53c9fa:goto L53c9fa;
case 0x53ca01:c.instructions+=17;goto B53ca01;
case 0x53ca04:c.instructions+=16;goto B53ca04;
case 0x53ca07:c.instructions+=15;goto B53ca07;
case 0x53ca0a:c.instructions+=14;goto B53ca0a;
case 0x53ca0d:c.instructions+=13;goto B53ca0d;
case 0x53ca11:c.instructions+=12;goto B53ca11;
case 0x53ca14:c.instructions+=11;goto B53ca14;
case 0x53ca17:c.instructions+=10;goto B53ca17;
case 0x53ca1e:c.instructions+=9;goto B53ca1e;
case 0x53ca21:c.instructions+=8;goto B53ca21;
case 0x53ca24:c.instructions+=7;goto B53ca24;
case 0x53ca27:c.instructions+=6;goto B53ca27;
case 0x53ca2a:c.instructions+=5;goto B53ca2a;
case 0x53ca2d:c.instructions+=4;goto B53ca2d;
case 0x53ca31:c.instructions+=3;goto B53ca31;
case 0x53ca34:c.instructions+=2;goto B53ca34;
case 0x53ca3a:c.instructions+=1;goto B53ca3a;
case 0x53ca3c:goto L53ca3c;
case 0x53ca3e:goto L53ca3e;
case 0x53ca40:c.instructions+=3;goto B53ca40;
case 0x53ca41:c.instructions+=2;goto B53ca41;
case 0x53ca43:c.instructions+=1;goto B53ca43;
case 0x53ca46:goto L53ca46;
case 0x53ca48:c.instructions+=1;goto B53ca48;
case 0x53ca4d:goto L53ca4d;
case 0x53ca50:c.instructions+=2;goto B53ca50;
case 0x53ca52:c.instructions+=1;goto B53ca52;
case 0x53ca54:goto L53ca54;
case 0x53ca5b:c.instructions+=17;goto B53ca5b;
case 0x53ca5e:c.instructions+=16;goto B53ca5e;
case 0x53ca61:c.instructions+=15;goto B53ca61;
case 0x53ca64:c.instructions+=14;goto B53ca64;
case 0x53ca67:c.instructions+=13;goto B53ca67;
case 0x53ca6b:c.instructions+=12;goto B53ca6b;
case 0x53ca6e:c.instructions+=11;goto B53ca6e;
case 0x53ca71:c.instructions+=10;goto B53ca71;
case 0x53ca78:c.instructions+=9;goto B53ca78;
case 0x53ca7b:c.instructions+=8;goto B53ca7b;
case 0x53ca7e:c.instructions+=7;goto B53ca7e;
case 0x53ca81:c.instructions+=6;goto B53ca81;
case 0x53ca84:c.instructions+=5;goto B53ca84;
case 0x53ca87:c.instructions+=4;goto B53ca87;
case 0x53ca8b:c.instructions+=3;goto B53ca8b;
case 0x53ca8e:c.instructions+=2;goto B53ca8e;
case 0x53ca94:c.instructions+=1;goto B53ca94;
case 0x53ca96:goto L53ca96;
case 0x53ca98:goto L53ca98;
case 0x53ca9a:c.instructions+=3;goto B53ca9a;
case 0x53ca9b:c.instructions+=2;goto B53ca9b;
case 0x53ca9d:c.instructions+=1;goto B53ca9d;
case 0x53caa0:goto L53caa0;
case 0x53caa2:c.instructions+=1;goto B53caa2;
case 0x53caa7:goto L53caa7;
case 0x53caaa:c.instructions+=2;goto B53caaa;
case 0x53caac:c.instructions+=1;goto B53caac;
case 0x53caae:goto L53caae;
case 0x53cab5:c.instructions+=17;goto B53cab5;
case 0x53cab8:c.instructions+=16;goto B53cab8;
case 0x53cabb:c.instructions+=15;goto B53cabb;
case 0x53cabe:c.instructions+=14;goto B53cabe;
case 0x53cac1:c.instructions+=13;goto B53cac1;
case 0x53cac5:c.instructions+=12;goto B53cac5;
case 0x53cac8:c.instructions+=11;goto B53cac8;
case 0x53cacb:c.instructions+=10;goto B53cacb;
case 0x53cad2:c.instructions+=9;goto B53cad2;
case 0x53cad5:c.instructions+=8;goto B53cad5;
case 0x53cad8:c.instructions+=7;goto B53cad8;
case 0x53cadb:c.instructions+=6;goto B53cadb;
case 0x53cade:c.instructions+=5;goto B53cade;
case 0x53cae1:c.instructions+=4;goto B53cae1;
case 0x53cae5:c.instructions+=3;goto B53cae5;
case 0x53cae8:c.instructions+=2;goto B53cae8;
case 0x53caee:c.instructions+=1;goto B53caee;
case 0x53caf0:goto L53caf0;
case 0x53caf2:goto L53caf2;
case 0x53caf4:c.instructions+=3;goto B53caf4;
case 0x53caf5:c.instructions+=2;goto B53caf5;
case 0x53caf7:c.instructions+=1;goto B53caf7;
case 0x53cafa:goto L53cafa;
case 0x53cafc:c.instructions+=1;goto B53cafc;
case 0x53cb01:goto L53cb01;
case 0x53cb04:c.instructions+=2;goto B53cb04;
case 0x53cb06:c.instructions+=1;goto B53cb06;
case 0x53cb08:goto L53cb08;
case 0x53cb0f:c.instructions+=17;goto B53cb0f;
case 0x53cb12:c.instructions+=16;goto B53cb12;
case 0x53cb15:c.instructions+=15;goto B53cb15;
case 0x53cb18:c.instructions+=14;goto B53cb18;
case 0x53cb1b:c.instructions+=13;goto B53cb1b;
case 0x53cb1f:c.instructions+=12;goto B53cb1f;
case 0x53cb22:c.instructions+=11;goto B53cb22;
case 0x53cb25:c.instructions+=10;goto B53cb25;
case 0x53cb2c:c.instructions+=9;goto B53cb2c;
case 0x53cb2f:c.instructions+=8;goto B53cb2f;
case 0x53cb32:c.instructions+=7;goto B53cb32;
case 0x53cb35:c.instructions+=6;goto B53cb35;
case 0x53cb38:c.instructions+=5;goto B53cb38;
case 0x53cb3b:c.instructions+=4;goto B53cb3b;
case 0x53cb3f:c.instructions+=3;goto B53cb3f;
case 0x53cb42:c.instructions+=2;goto B53cb42;
case 0x53cb48:c.instructions+=1;goto B53cb48;
case 0x53cb4a:goto L53cb4a;
case 0x53cb4c:goto L53cb4c;
case 0x53cb4e:c.instructions+=3;goto B53cb4e;
case 0x53cb4f:c.instructions+=2;goto B53cb4f;
case 0x53cb51:c.instructions+=1;goto B53cb51;
case 0x53cb54:goto L53cb54;
case 0x53cb56:c.instructions+=1;goto B53cb56;
case 0x53cb5b:goto L53cb5b;
case 0x53cb5e:c.instructions+=2;goto B53cb5e;
case 0x53cb60:c.instructions+=1;goto B53cb60;
case 0x53cb62:goto L53cb62;
case 0x53cb69:c.instructions+=17;goto B53cb69;
case 0x53cb6c:c.instructions+=16;goto B53cb6c;
case 0x53cb6f:c.instructions+=15;goto B53cb6f;
case 0x53cb72:c.instructions+=14;goto B53cb72;
case 0x53cb75:c.instructions+=13;goto B53cb75;
case 0x53cb79:c.instructions+=12;goto B53cb79;
case 0x53cb7c:c.instructions+=11;goto B53cb7c;
case 0x53cb7f:c.instructions+=10;goto B53cb7f;
case 0x53cb86:c.instructions+=9;goto B53cb86;
case 0x53cb89:c.instructions+=8;goto B53cb89;
case 0x53cb8c:c.instructions+=7;goto B53cb8c;
case 0x53cb8f:c.instructions+=6;goto B53cb8f;
case 0x53cb92:c.instructions+=5;goto B53cb92;
case 0x53cb95:c.instructions+=4;goto B53cb95;
case 0x53cb99:c.instructions+=3;goto B53cb99;
case 0x53cb9c:c.instructions+=2;goto B53cb9c;
case 0x53cba2:c.instructions+=1;goto B53cba2;
case 0x53cba4:goto L53cba4;
case 0x53cba6:goto L53cba6;
case 0x53cba8:c.instructions+=3;goto B53cba8;
case 0x53cba9:c.instructions+=2;goto B53cba9;
case 0x53cbab:c.instructions+=1;goto B53cbab;
case 0x53cbae:goto L53cbae;
case 0x53cbb0:c.instructions+=1;goto B53cbb0;
case 0x53cbb5:goto L53cbb5;
case 0x53cbb8:c.instructions+=2;goto B53cbb8;
case 0x53cbba:c.instructions+=1;goto B53cbba;
case 0x53cbbc:goto L53cbbc;
case 0x53cbc3:c.instructions+=17;goto B53cbc3;
case 0x53cbc6:c.instructions+=16;goto B53cbc6;
case 0x53cbc9:c.instructions+=15;goto B53cbc9;
case 0x53cbcc:c.instructions+=14;goto B53cbcc;
case 0x53cbcf:c.instructions+=13;goto B53cbcf;
case 0x53cbd3:c.instructions+=12;goto B53cbd3;
case 0x53cbd6:c.instructions+=11;goto B53cbd6;
case 0x53cbd9:c.instructions+=10;goto B53cbd9;
case 0x53cbe0:c.instructions+=9;goto B53cbe0;
case 0x53cbe3:c.instructions+=8;goto B53cbe3;
case 0x53cbe6:c.instructions+=7;goto B53cbe6;
case 0x53cbe9:c.instructions+=6;goto B53cbe9;
case 0x53cbec:c.instructions+=5;goto B53cbec;
case 0x53cbef:c.instructions+=4;goto B53cbef;
case 0x53cbf3:c.instructions+=3;goto B53cbf3;
case 0x53cbf9:c.instructions+=2;goto B53cbf9;
case 0x53cbfd:c.instructions+=1;goto B53cbfd;
case 0x53cbff:goto L53cbff;
case 0x53cc01:goto L53cc01;
case 0x53cc03:c.instructions+=3;goto B53cc03;
case 0x53cc04:c.instructions+=2;goto B53cc04;
case 0x53cc06:c.instructions+=1;goto B53cc06;
case 0x53cc09:goto L53cc09;
case 0x53cc0e:c.instructions+=5;goto B53cc0e;
case 0x53cc11:c.instructions+=4;goto B53cc11;
case 0x53cc17:c.instructions+=3;goto B53cc17;
case 0x53cc1a:c.instructions+=2;goto B53cc1a;
case 0x53cc1c:c.instructions+=1;goto B53cc1c;
case 0x53cc1e:goto L53cc1e;
case 0x53cc23:c.instructions+=1;goto B53cc23;
case 0x53cc25:goto L53cc25;
case 0x53cc28:c.instructions+=1;goto B53cc28;
case 0x53cc2a:goto L53cc2a;
case 0x53cc2f:c.instructions+=1;goto B53cc2f;
case 0x53cc31:goto L53cc31;
case 0x53cc34:c.instructions+=1;goto B53cc34;
case 0x53cc36:goto L53cc36;
case 0x53cc3b:c.instructions+=1;goto B53cc3b;
case 0x53cc3d:goto L53cc3d;
case 0x53cc3f:c.instructions+=5;goto B53cc3f;
case 0x53cc42:c.instructions+=4;goto B53cc42;
case 0x53cc45:c.instructions+=3;goto B53cc45;
case 0x53cc46:c.instructions+=2;goto B53cc46;
case 0x53cc49:c.instructions+=1;goto B53cc49;
case 0x53cc4b:goto L53cc4b;
case 0x53cc4e:c.instructions+=2;goto B53cc4e;
case 0x53cc4f:c.instructions+=1;goto B53cc4f;
case 0x53cc54:goto L53cc54;
case 0x53cc57:c.instructions+=2;goto B53cc57;
case 0x53cc59:c.instructions+=1;goto B53cc59;
case 0x53cc5b:goto L53cc5b;
case 0x53cc5e:c.instructions+=3;goto B53cc5e;
case 0x53cc61:c.instructions+=2;goto B53cc61;
case 0x53cc64:c.instructions+=1;goto B53cc64;
case 0x53cc67:goto L53cc67;
case 0x53cc68:c.instructions+=3;goto B53cc68;
case 0x53cc69:c.instructions+=2;goto B53cc69;
case 0x53cc6a:c.instructions+=1;goto B53cc6a;
case 0x53cc70:goto L53cc70;
case 0x53cc71:c.instructions+=4;goto B53cc71;
case 0x53cc72:c.instructions+=3;goto B53cc72;
case 0x53cc77:c.instructions+=2;goto B53cc77;
case 0x53cc79:c.instructions+=1;goto B53cc79;
case 0x53cc7e:goto L53cc7e;
case 0x53cc81:c.instructions+=3;goto B53cc81;
case 0x53cc83:c.instructions+=2;goto B53cc83;
case 0x53cc85:c.instructions+=1;goto B53cc85;
case 0x53cc87:goto L53cc87;
case 0x53cc8d:c.instructions+=2;goto B53cc8d;
case 0x53cc8f:c.instructions+=1;goto B53cc8f;
case 0x53cc91:goto L53cc91;
case 0x53cc96:c.instructions+=1;goto B53cc96;
case 0x53cc9b:goto L53cc9b;
case 0x53cca1:c.instructions+=3;goto B53cca1;
case 0x53cca3:c.instructions+=2;goto B53cca3;
case 0x53cca5:c.instructions+=1;goto B53cca5;
case 0x53cca7:goto L53cca7;
case 0x53cca8:c.instructions+=1;goto B53cca8;
case 0x53ccaa:goto L53ccaa;
case 0x53ccab:c.instructions+=1;goto B53ccab;
case 0x53ccad:goto L53ccad;
case 0x53ccb2:c.instructions+=1;goto B53ccb2;
case 0x53ccb4:goto L53ccb4;
case 0x53ccb9:c.instructions+=1;goto B53ccb9;
case 0x53ccbb:goto L53ccbb;
case 0x53ccc0:c.instructions+=1;goto B53ccc0;
case 0x53ccc7:goto L53ccc7;
case 0x53cccc:c.instructions+=3;goto B53cccc;
case 0x53cccf:c.instructions+=2;goto B53cccf;
case 0x53ccd0:c.instructions+=1;goto B53ccd0;
case 0x53ccd5:goto L53ccd5;
case 0x53ccd6:c.instructions+=1;goto B53ccd6;
case 0x53ccdb:goto L53ccdb;
case 0x53ccde:c.instructions+=2;goto B53ccde;
case 0x53cce0:c.instructions+=1;goto B53cce0;
case 0x53cce2:goto L53cce2;
case 0x53cce5:goto L53cce5;
case 0x53cce6:c.instructions+=5;goto B53cce6;
case 0x53ccec:c.instructions+=4;goto B53ccec;
case 0x53ccf2:c.instructions+=3;goto B53ccf2;
case 0x53ccf8:c.instructions+=2;goto B53ccf8;
case 0x53cd02:c.instructions+=1;goto B53cd02;
case 0x53cd07:goto L53cd07;
case 0x53cd0d:c.instructions+=6;goto B53cd0d;
case 0x53cd10:c.instructions+=5;goto B53cd10;
case 0x53cd12:c.instructions+=4;goto B53cd12;
case 0x53cd18:c.instructions+=3;goto B53cd18;
case 0x53cd1e:c.instructions+=2;goto B53cd1e;
case 0x53cd24:c.instructions+=1;goto B53cd24;
case 0x53cd29:goto L53cd29;
case 0x53cd2a:c.instructions+=2;goto B53cd2a;
case 0x53cd2b:c.instructions+=1;goto B53cd2b;
case 0x53cd30:goto L53cd30;
case 0x53cd31:c.instructions+=5;goto B53cd31;
case 0x53cd32:c.instructions+=4;goto B53cd32;
case 0x53cd34:c.instructions+=3;goto B53cd34;
case 0x53cd37:c.instructions+=2;goto B53cd37;
case 0x53cd3a:c.instructions+=1;goto B53cd3a;
case 0x53cd3d:goto L53cd3d;
case 0x53cd40:c.instructions+=2;goto B53cd40;
case 0x53cd41:c.instructions+=1;goto B53cd41;
case 0x53cd46:goto L53cd46;
case 0x53cd4c:c.instructions+=5;goto B53cd4c;
case 0x53cd4e:c.instructions+=4;goto B53cd4e;
case 0x53cd51:c.instructions+=3;goto B53cd51;
case 0x53cd52:c.instructions+=2;goto B53cd52;
case 0x53cd53:c.instructions+=1;goto B53cd53;
case 0x53cd58:goto L53cd58;
case 0x53cd5b:c.instructions+=2;goto B53cd5b;
case 0x53cd5d:c.instructions+=1;goto B53cd5d;
case 0x53cd5f:goto L53cd5f;
case 0x53cd62:c.instructions+=3;goto B53cd62;
case 0x53cd63:c.instructions+=2;goto B53cd63;
case 0x53cd64:c.instructions+=1;goto B53cd64;
case 0x53cd69:goto L53cd69;
case 0x53cd6c:c.instructions+=1;goto B53cd6c;
case 0x53cd6e:goto L53cd6e;
case 0x53cd6f:c.instructions+=2;goto B53cd6f;
case 0x53cd71:c.instructions+=1;goto B53cd71;
case 0x53cd76:goto L53cd76;
case 0x53cd78:c.instructions+=2;goto B53cd78;
case 0x53cd7a:c.instructions+=1;goto B53cd7a;
case 0x53cd7c:goto L53cd7c;
case 0x53cd81:c.instructions+=1;goto B53cd81;
case 0x53cd86:goto L53cd86;
case 0x53cd88:goto L53cd88;
case 0x53cd8a:c.instructions+=1;goto B53cd8a;
case 0x53cd8f:goto L53cd8f;
case 0x53cd91:c.instructions+=1;goto B53cd91;
case 0x53cd93:goto L53cd93;
case 0x53cd98:c.instructions+=1;goto B53cd98;
case 0x53cd9d:goto L53cd9d;
case 0x53cda0:c.instructions+=5;goto B53cda0;
case 0x53cda1:c.instructions+=4;goto B53cda1;
case 0x53cda2:c.instructions+=3;goto B53cda2;
case 0x53cda7:c.instructions+=2;goto B53cda7;
case 0x53cda8:c.instructions+=1;goto B53cda8;
case 0x53cdad:goto L53cdad;
case 0x53cdb0:c.instructions+=1;goto B53cdb0;
case 0x53cdb1:goto L53cdb1;
case 0x53cdb4:c.instructions+=2;goto B53cdb4;
case 0x53cdb7:c.instructions+=1;goto B53cdb7;
case 0x53cdb9:goto L53cdb9;
case 0x53cdbc:c.instructions+=1;goto B53cdbc;
case 0x53cdbe:goto L53cdbe;
case 0x53cdc4:c.instructions+=6;goto B53cdc4;
case 0x53cdca:c.instructions+=5;goto B53cdca;
case 0x53cdcd:c.instructions+=4;goto B53cdcd;
case 0x53cdd0:c.instructions+=3;goto B53cdd0;
case 0x53cdd5:c.instructions+=2;goto B53cdd5;
case 0x53cdd6:c.instructions+=1;goto B53cdd6;
case 0x53cdd8:goto L53cdd8;
case 0x53cddb:c.instructions+=2;goto B53cddb;
case 0x53cddd:c.instructions+=1;goto B53cddd;
case 0x53cddf:goto L53cddf;
case 0x53cde4:c.instructions+=2;goto B53cde4;
case 0x53cde5:c.instructions+=1;goto B53cde5;
case 0x53cdea:goto L53cdea;
case 0x53cded:goto L53cded;
case 0x53cdf3:c.instructions+=5;goto B53cdf3;
case 0x53cdf9:c.instructions+=4;goto B53cdf9;
case 0x53cdfc:c.instructions+=3;goto B53cdfc;
case 0x53cdff:c.instructions+=2;goto B53cdff;
case 0x53ce04:c.instructions+=1;goto B53ce04;
case 0x53ce05:goto L53ce05;
case 0x53ce0a:goto L53ce0a;
case 0x53ce0d:c.instructions+=3;goto B53ce0d;
case 0x53ce10:c.instructions+=2;goto B53ce10;
case 0x53ce12:c.instructions+=1;goto B53ce12;
case 0x53ce14:goto L53ce14;
case 0x53ce17:c.instructions+=2;goto B53ce17;
case 0x53ce19:c.instructions+=1;goto B53ce19;
case 0x53ce1b:goto L53ce1b;
case 0x53ce1e:c.instructions+=3;goto B53ce1e;
case 0x53ce1f:c.instructions+=2;goto B53ce1f;
case 0x53ce20:c.instructions+=1;goto B53ce20;
case 0x53ce25:goto L53ce25;
case 0x53ce28:c.instructions+=4;goto B53ce28;
case 0x53ce2b:c.instructions+=3;goto B53ce2b;
case 0x53ce2c:c.instructions+=2;goto B53ce2c;
case 0x53ce2d:c.instructions+=1;goto B53ce2d;
case 0x53ce32:goto L53ce32;
case 0x53ce35:goto L53ce35;
case 0x53ce36:c.instructions+=2;goto B53ce36;
case 0x53ce37:c.instructions+=1;goto B53ce37;
case 0x53ce40:goto L53ce40;
case 0x53ce41:c.instructions+=7;goto B53ce41;
case 0x53ce42:c.instructions+=6;goto B53ce42;
case 0x53ce46:c.instructions+=5;goto B53ce46;
case 0x53ce48:c.instructions+=4;goto B53ce48;
case 0x53ce49:c.instructions+=3;goto B53ce49;
case 0x53ce4d:c.instructions+=2;goto B53ce4d;
case 0x53ce4f:c.instructions+=1;goto B53ce4f;
case 0x53ce51:goto L53ce51;
case 0x53ce52:c.instructions+=1;goto B53ce52;
case 0x53ce57:goto L53ce57;
case 0x53ce5a:c.instructions+=2;goto B53ce5a;
case 0x53ce5c:c.instructions+=1;goto B53ce5c;
case 0x53ce5e:goto L53ce5e;
case 0x53ce5f:c.instructions+=2;goto B53ce5f;
case 0x53ce61:c.instructions+=1;goto B53ce61;
case 0x53ce66:goto L53ce66;
case 0x53ce68:c.instructions+=1;goto B53ce68;
case 0x53ce6a:goto L53ce6a;
case 0x53ce6f:c.instructions+=2;goto B53ce6f;
case 0x53ce71:c.instructions+=1;goto B53ce71;
case 0x53ce73:goto L53ce73;
case 0x53ce76:c.instructions+=3;goto B53ce76;
case 0x53ce77:c.instructions+=2;goto B53ce77;
case 0x53ce78:c.instructions+=1;goto B53ce78;
case 0x53ce7d:goto L53ce7d;
case 0x53ce7f:c.instructions+=1;goto B53ce7f;
case 0x53ce81:goto L53ce81;
case 0x53ce85:c.instructions+=1;goto B53ce85;
case 0x53ce87:goto L53ce87;
case 0x53ce89:goto L53ce89;
case 0x53ce8a:c.instructions+=4;goto B53ce8a;
case 0x53ce8b:c.instructions+=3;goto B53ce8b;
case 0x53ce8e:c.instructions+=2;goto B53ce8e;
case 0x53ce8f:c.instructions+=1;goto B53ce8f;
case 0x53cea0:goto L53cea0;
case 0x53cea1:c.instructions+=7;goto B53cea1;
case 0x53cea2:c.instructions+=6;goto B53cea2;
case 0x53cea6:c.instructions+=5;goto B53cea6;
case 0x53cea8:c.instructions+=4;goto B53cea8;
case 0x53cea9:c.instructions+=3;goto B53cea9;
case 0x53cead:c.instructions+=2;goto B53cead;
case 0x53ceaf:c.instructions+=1;goto B53ceaf;
case 0x53ceb1:goto L53ceb1;
case 0x53ceb2:c.instructions+=1;goto B53ceb2;
case 0x53ceb7:goto L53ceb7;
case 0x53ceba:c.instructions+=2;goto B53ceba;
case 0x53cebc:c.instructions+=1;goto B53cebc;
case 0x53cebe:goto L53cebe;
case 0x53cebf:c.instructions+=2;goto B53cebf;
case 0x53cec1:c.instructions+=1;goto B53cec1;
case 0x53cec6:goto L53cec6;
case 0x53cec8:c.instructions+=1;goto B53cec8;
case 0x53ceca:goto L53ceca;
case 0x53cecf:c.instructions+=2;goto B53cecf;
case 0x53ced1:c.instructions+=1;goto B53ced1;
case 0x53ced3:goto L53ced3;
case 0x53ced6:c.instructions+=3;goto B53ced6;
case 0x53ced7:c.instructions+=2;goto B53ced7;
case 0x53ced8:c.instructions+=1;goto B53ced8;
case 0x53cedd:goto L53cedd;
case 0x53cedf:c.instructions+=1;goto B53cedf;
case 0x53cee1:goto L53cee1;
case 0x53cee5:c.instructions+=1;goto B53cee5;
case 0x53cee7:goto L53cee7;
case 0x53cee9:goto L53cee9;
case 0x53ceea:c.instructions+=4;goto B53ceea;
case 0x53ceeb:c.instructions+=3;goto B53ceeb;
case 0x53ceee:c.instructions+=2;goto B53ceee;
case 0x53ceef:c.instructions+=1;goto B53ceef;
case 0x53cf00:goto L53cf00;
case 0x53cf01:c.instructions+=7;goto B53cf01;
case 0x53cf02:c.instructions+=6;goto B53cf02;
case 0x53cf06:c.instructions+=5;goto B53cf06;
case 0x53cf08:c.instructions+=4;goto B53cf08;
case 0x53cf09:c.instructions+=3;goto B53cf09;
case 0x53cf0d:c.instructions+=2;goto B53cf0d;
case 0x53cf0f:c.instructions+=1;goto B53cf0f;
case 0x53cf11:goto L53cf11;
case 0x53cf12:c.instructions+=1;goto B53cf12;
case 0x53cf17:goto L53cf17;
case 0x53cf1a:c.instructions+=2;goto B53cf1a;
case 0x53cf1c:c.instructions+=1;goto B53cf1c;
case 0x53cf1e:goto L53cf1e;
case 0x53cf1f:c.instructions+=2;goto B53cf1f;
case 0x53cf21:c.instructions+=1;goto B53cf21;
case 0x53cf26:goto L53cf26;
case 0x53cf28:c.instructions+=1;goto B53cf28;
case 0x53cf2a:goto L53cf2a;
case 0x53cf2f:c.instructions+=2;goto B53cf2f;
case 0x53cf31:c.instructions+=1;goto B53cf31;
case 0x53cf33:goto L53cf33;
case 0x53cf36:c.instructions+=3;goto B53cf36;
case 0x53cf37:c.instructions+=2;goto B53cf37;
case 0x53cf38:c.instructions+=1;goto B53cf38;
case 0x53cf3d:goto L53cf3d;
case 0x53cf3f:c.instructions+=1;goto B53cf3f;
case 0x53cf41:goto L53cf41;
case 0x53cf45:c.instructions+=1;goto B53cf45;
case 0x53cf47:goto L53cf47;
case 0x53cf49:goto L53cf49;
case 0x53cf4a:c.instructions+=4;goto B53cf4a;
case 0x53cf4b:c.instructions+=3;goto B53cf4b;
case 0x53cf4e:c.instructions+=2;goto B53cf4e;
case 0x53cf4f:c.instructions+=1;goto B53cf4f;
case 0x53cf60:goto L53cf60;
case 0x53cf61:c.instructions+=7;goto B53cf61;
case 0x53cf62:c.instructions+=6;goto B53cf62;
case 0x53cf66:c.instructions+=5;goto B53cf66;
case 0x53cf68:c.instructions+=4;goto B53cf68;
case 0x53cf69:c.instructions+=3;goto B53cf69;
case 0x53cf6d:c.instructions+=2;goto B53cf6d;
case 0x53cf6f:c.instructions+=1;goto B53cf6f;
case 0x53cf71:goto L53cf71;
case 0x53cf72:c.instructions+=1;goto B53cf72;
case 0x53cf77:goto L53cf77;
case 0x53cf7a:c.instructions+=2;goto B53cf7a;
case 0x53cf7c:c.instructions+=1;goto B53cf7c;
case 0x53cf7e:goto L53cf7e;
case 0x53cf7f:c.instructions+=2;goto B53cf7f;
case 0x53cf81:c.instructions+=1;goto B53cf81;
case 0x53cf86:goto L53cf86;
case 0x53cf88:c.instructions+=1;goto B53cf88;
case 0x53cf8a:goto L53cf8a;
case 0x53cf8f:c.instructions+=2;goto B53cf8f;
case 0x53cf91:c.instructions+=1;goto B53cf91;
case 0x53cf93:goto L53cf93;
case 0x53cf96:c.instructions+=3;goto B53cf96;
case 0x53cf97:c.instructions+=2;goto B53cf97;
case 0x53cf98:c.instructions+=1;goto B53cf98;
case 0x53cf9d:goto L53cf9d;
case 0x53cf9f:c.instructions+=1;goto B53cf9f;
case 0x53cfa1:goto L53cfa1;
case 0x53cfa5:c.instructions+=1;goto B53cfa5;
case 0x53cfa7:goto L53cfa7;
case 0x53cfa9:goto L53cfa9;
case 0x53cfaa:c.instructions+=4;goto B53cfaa;
case 0x53cfab:c.instructions+=3;goto B53cfab;
case 0x53cfae:c.instructions+=2;goto B53cfae;
case 0x53cfaf:c.instructions+=1;goto B53cfaf;
case 0x53cfc0:goto L53cfc0;
case 0x53cfc2:c.instructions+=16;goto B53cfc2;
case 0x53cfc8:c.instructions+=15;goto B53cfc8;
case 0x53cfcf:c.instructions+=14;goto B53cfcf;
case 0x53cfd1:c.instructions+=13;goto B53cfd1;
case 0x53cfd4:c.instructions+=12;goto B53cfd4;
case 0x53cfdb:c.instructions+=11;goto B53cfdb;
case 0x53cfde:c.instructions+=10;goto B53cfde;
case 0x53cfe1:c.instructions+=9;goto B53cfe1;
case 0x53cfe4:c.instructions+=8;goto B53cfe4;
case 0x53cfea:c.instructions+=7;goto B53cfea;
case 0x53cfed:c.instructions+=6;goto B53cfed;
case 0x53cff0:c.instructions+=5;goto B53cff0;
case 0x53cff6:c.instructions+=4;goto B53cff6;
case 0x53cff8:c.instructions+=3;goto B53cff8;
case 0x53cffb:c.instructions+=2;goto B53cffb;
case 0x53cffe:c.instructions+=1;goto B53cffe;
default:missing_instruction(c.pc);}
B53c003:L53c003:{c.instructions+=7;NFSU2_TR(0x53c003);
__builtin_memmove((R+4),(R+28),4);
}
B53c005:{NFSU2_TR(0x53c005);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c006:{NFSU2_TR(0x53c006);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c008:{NFSU2_TR(0x53c008);
u8 U[4];
w4(U+0,u32(0xdd3bebf9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c00d:{NFSU2_TR(0x53c00d);
u8 U[4];
w4(U+0,u32(0xd223f84aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c012:{NFSU2_TR(0x53c012);
u8 U[4];
w4(U+0,u32(0x4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c014:{NFSU2_TR(0x53c014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c019ull));
TAIL_STATIC(0x521ff0u,521);
}
B53c019:L53c019:{c.instructions+=1;NFSU2_TR(0x53c019);
{goto L53c01d;}
}
B53c01b:L53c01b:{c.instructions+=1;NFSU2_TR(0x53c01b);
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
B53c01d:L53c01d:{c.instructions+=5;NFSU2_TR(0x53c01d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53c01f:{NFSU2_TR(0x53c01f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c020:{NFSU2_TR(0x53c020);
__builtin_memmove((R+4),(R+24),4);
}
B53c022:{NFSU2_TR(0x53c022);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c026:{NFSU2_TR(0x53c026);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c029ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53c029:L53c029:{c.instructions+=2;NFSU2_TR(0x53c029);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c02b:{NFSU2_TR(0x53c02b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c030ull));
TAIL_STATIC(0x575620u,575);
}
B53c030:L53c030:{c.instructions+=6;NFSU2_TR(0x53c030);
__builtin_memmove((R+28),(R+0),4);
}
B53c032:{NFSU2_TR(0x53c032);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c035:{NFSU2_TR(0x53c035);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c039:{NFSU2_TR(0x53c039);
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
B53c03b:{NFSU2_TR(0x53c03b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c043:{NFSU2_TR(0x53c043);
if(r1(R+518)){{goto L53c066;}}
}
B53c045:L53c045:{c.instructions+=3;NFSU2_TR(0x53c045);
u8 U[4];
w4(U+0,u32(0x46ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c047:{NFSU2_TR(0x53c047);
__builtin_memmove((R+4),(R+24),4);
}
B53c049:{NFSU2_TR(0x53c049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c04eull));
TAIL_STATIC(0x530820u,530);
}
B53c04e:L53c04e:{c.instructions+=7;NFSU2_TR(0x53c04e);
__builtin_memmove((R+4),(R+28),4);
}
B53c050:{NFSU2_TR(0x53c050);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c051:{NFSU2_TR(0x53c051);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c053:{NFSU2_TR(0x53c053);
u8 U[4];
w4(U+0,u32(0xdacd9fffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c058:{NFSU2_TR(0x53c058);
u8 U[4];
w4(U+0,u32(0x7eb55a26ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c05d:{NFSU2_TR(0x53c05d);
u8 U[4];
w4(U+0,u32(0x46ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c05f:{NFSU2_TR(0x53c05f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c064ull));
TAIL_STATIC(0x521ff0u,521);
}
B53c064:L53c064:{c.instructions+=1;NFSU2_TR(0x53c064);
{goto L53c068;}
}
B53c066:L53c066:{c.instructions+=1;NFSU2_TR(0x53c066);
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
B53c068:L53c068:{c.instructions+=5;NFSU2_TR(0x53c068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53c06a:{NFSU2_TR(0x53c06a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c06b:{NFSU2_TR(0x53c06b);
__builtin_memmove((R+4),(R+24),4);
}
B53c06d:{NFSU2_TR(0x53c06d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c071:{NFSU2_TR(0x53c071);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c074ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53c074:L53c074:{c.instructions+=2;NFSU2_TR(0x53c074);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c076:{NFSU2_TR(0x53c076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c07bull));
TAIL_STATIC(0x575620u,575);
}
B53c07b:L53c07b:{c.instructions+=6;NFSU2_TR(0x53c07b);
__builtin_memmove((R+28),(R+0),4);
}
B53c07d:{NFSU2_TR(0x53c07d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c080:{NFSU2_TR(0x53c080);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c084:{NFSU2_TR(0x53c084);
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
B53c086:{NFSU2_TR(0x53c086);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c08e:{NFSU2_TR(0x53c08e);
if(r1(R+518)){{goto L53c0b1;}}
}
B53c090:L53c090:{c.instructions+=3;NFSU2_TR(0x53c090);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c092:{NFSU2_TR(0x53c092);
__builtin_memmove((R+4),(R+24),4);
}
B53c094:{NFSU2_TR(0x53c094);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c099ull));
TAIL_STATIC(0x530820u,530);
}
B53c099:L53c099:{c.instructions+=7;NFSU2_TR(0x53c099);
__builtin_memmove((R+4),(R+28),4);
}
B53c09b:{NFSU2_TR(0x53c09b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c09c:{NFSU2_TR(0x53c09c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c09e:{NFSU2_TR(0x53c09e);
u8 U[4];
w4(U+0,u32(0x3b3bfaf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c0a3:{NFSU2_TR(0x53c0a3);
u8 U[4];
w4(U+0,u32(0x4e875a92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c0a8:{NFSU2_TR(0x53c0a8);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c0aa:{NFSU2_TR(0x53c0aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c0afull));
TAIL_STATIC(0x521ff0u,521);
}
B53c0af:L53c0af:{c.instructions+=1;NFSU2_TR(0x53c0af);
{goto L53c0b3;}
}
B53c0b1:L53c0b1:{c.instructions+=1;NFSU2_TR(0x53c0b1);
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
B53c0b3:L53c0b3:{c.instructions+=5;NFSU2_TR(0x53c0b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53c0b5:{NFSU2_TR(0x53c0b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c0b6:{NFSU2_TR(0x53c0b6);
__builtin_memmove((R+4),(R+24),4);
}
B53c0b8:{NFSU2_TR(0x53c0b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c0bc:{NFSU2_TR(0x53c0bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c0bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53c0bf:L53c0bf:{c.instructions+=2;NFSU2_TR(0x53c0bf);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c0c1:{NFSU2_TR(0x53c0c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c0c6ull));
TAIL_STATIC(0x575620u,575);
}
B53c0c6:L53c0c6:{c.instructions+=6;NFSU2_TR(0x53c0c6);
__builtin_memmove((R+28),(R+0),4);
}
B53c0c8:{NFSU2_TR(0x53c0c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c0cb:{NFSU2_TR(0x53c0cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c0cf:{NFSU2_TR(0x53c0cf);
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
B53c0d1:{NFSU2_TR(0x53c0d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c0d9:{NFSU2_TR(0x53c0d9);
if(r1(R+518)){{goto L53c0fc;}}
}
B53c0db:L53c0db:{c.instructions+=3;NFSU2_TR(0x53c0db);
u8 U[4];
w4(U+0,u32(0x47ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c0dd:{NFSU2_TR(0x53c0dd);
__builtin_memmove((R+4),(R+24),4);
}
B53c0df:{NFSU2_TR(0x53c0df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c0e4ull));
TAIL_STATIC(0x530820u,530);
}
B53c0e4:L53c0e4:{c.instructions+=7;NFSU2_TR(0x53c0e4);
__builtin_memmove((R+4),(R+28),4);
}
B53c0e6:{NFSU2_TR(0x53c0e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c0e7:{NFSU2_TR(0x53c0e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c0e9:{NFSU2_TR(0x53c0e9);
u8 U[4];
w4(U+0,u32(0xba1cc49cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c0ee:{NFSU2_TR(0x53c0ee);
u8 U[4];
w4(U+0,u32(0xa6343aecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c0f3:{NFSU2_TR(0x53c0f3);
u8 U[4];
w4(U+0,u32(0x47ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c0f5:{NFSU2_TR(0x53c0f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c0faull));
TAIL_STATIC(0x521ff0u,521);
}
B53c0fa:L53c0fa:{c.instructions+=1;NFSU2_TR(0x53c0fa);
{goto L53c0fe;}
}
B53c0fc:L53c0fc:{c.instructions+=1;NFSU2_TR(0x53c0fc);
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
B53c0fe:L53c0fe:{c.instructions+=5;NFSU2_TR(0x53c0fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c102:{NFSU2_TR(0x53c102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53c104:{NFSU2_TR(0x53c104);
__builtin_memmove((R+4),(R+24),4);
}
B53c106:{NFSU2_TR(0x53c106);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c107:{NFSU2_TR(0x53c107);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c10aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53c10a:L53c10a:{c.instructions+=4;NFSU2_TR(0x53c10a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c10d:{NFSU2_TR(0x53c10d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53c110:{NFSU2_TR(0x53c110);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c112:{NFSU2_TR(0x53c112);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c115ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53c115:L53c115:{c.instructions+=3;NFSU2_TR(0x53c115);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c118:{NFSU2_TR(0x53c118);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c11a:{NFSU2_TR(0x53c11a);
if(r1(R+518)){{goto L53c13f;}}
}
B53c11c:L53c11c:{c.instructions+=4;NFSU2_TR(0x53c11c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c11f:{NFSU2_TR(0x53c11f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c120:{NFSU2_TR(0x53c120);
__builtin_memmove((R+4),(R+24),4);
}
B53c122:{NFSU2_TR(0x53c122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c127ull));
TAIL_STATIC(0x50f5b0u,50f);
}
B53c127:L53c127:{c.instructions+=8;NFSU2_TR(0x53c127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c128:{NFSU2_TR(0x53c128);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c12e:{NFSU2_TR(0x53c12e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c12f:{NFSU2_TR(0x53c12f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53c130:{NFSU2_TR(0x53c130);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c134:{NFSU2_TR(0x53c134);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c13b:{NFSU2_TR(0x53c13b);
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
B53c13e:{NFSU2_TR(0x53c13e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c13f:L53c13f:{c.instructions+=8;NFSU2_TR(0x53c13f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c143:{NFSU2_TR(0x53c143);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c144:{NFSU2_TR(0x53c144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
w4(U+4,u32(0x2daab07ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c14e:{NFSU2_TR(0x53c14e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c14f:{NFSU2_TR(0x53c14f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53c150:{NFSU2_TR(0x53c150);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c157:{NFSU2_TR(0x53c157);
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
B53c15a:{NFSU2_TR(0x53c15a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c160:L53c160:{c.instructions+=4;NFSU2_TR(0x53c160);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c161:{NFSU2_TR(0x53c161);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53c165:{NFSU2_TR(0x53c165);
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
B53c167:{NFSU2_TR(0x53c167);
if(r1(R+518)){{goto L53c1e2;}}
}
B53c169:L53c169:{c.instructions+=6;NFSU2_TR(0x53c169);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c16a:{NFSU2_TR(0x53c16a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53c170:{NFSU2_TR(0x53c170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c171:{NFSU2_TR(0x53c171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53c173:{NFSU2_TR(0x53c173);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c175:{NFSU2_TR(0x53c175);
if(r1(R+518)){{goto L53c19e;}}
}
B53c177:L53c177:{c.instructions+=3;NFSU2_TR(0x53c177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c17a:{NFSU2_TR(0x53c17a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53c17d:{NFSU2_TR(0x53c17d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c198;}}
}
B53c17f:L53c17f:{c.instructions+=8;NFSU2_TR(0x53c17f);
__builtin_memmove((R+0),(R+24),4);
}
B53c181:{NFSU2_TR(0x53c181);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53c183:{NFSU2_TR(0x53c183);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53c186:{NFSU2_TR(0x53c186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53c188:{NFSU2_TR(0x53c188);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B53c18a:{NFSU2_TR(0x53c18a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c18b:{NFSU2_TR(0x53c18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c18e:{NFSU2_TR(0x53c18e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c193ull));
TAIL_STATIC(0x575630u,575);
}
B53c193:L53c193:{c.instructions+=2;NFSU2_TR(0x53c193);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c196:{NFSU2_TR(0x53c196);
{goto L53c19a;}
}
B53c198:L53c198:{c.instructions+=1;NFSU2_TR(0x53c198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53c19a:L53c19a:{c.instructions+=2;NFSU2_TR(0x53c19a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c19c:{NFSU2_TR(0x53c19c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53c177u);}goto L53c177;}}
}
B53c19e:L53c19e:{c.instructions+=2;NFSU2_TR(0x53c19e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c1a0:{NFSU2_TR(0x53c1a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c1a5ull));
TAIL_STATIC(0x575620u,575);
}
B53c1a5:L53c1a5:{c.instructions+=3;NFSU2_TR(0x53c1a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c1a8:{NFSU2_TR(0x53c1a8);
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
B53c1aa:{NFSU2_TR(0x53c1aa);
if(r1(R+518)){{goto L53c1d1;}}
}
B53c1ac:L53c1ac:{c.instructions+=15;NFSU2_TR(0x53c1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c1af:{NFSU2_TR(0x53c1af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c1b2:{NFSU2_TR(0x53c1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53c1b5:{NFSU2_TR(0x53c1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c1b8:{NFSU2_TR(0x53c1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c1bb:{NFSU2_TR(0x53c1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c1be:{NFSU2_TR(0x53c1be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c1c1:{NFSU2_TR(0x53c1c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53c1c3:{NFSU2_TR(0x53c1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c1c6:{NFSU2_TR(0x53c1c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c1c7:{NFSU2_TR(0x53c1c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53c1c9:{NFSU2_TR(0x53c1c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53c1ca:{NFSU2_TR(0x53c1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c1cd:{NFSU2_TR(0x53c1cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c1ce:{NFSU2_TR(0x53c1ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c1d1:L53c1d1:{c.instructions+=8;NFSU2_TR(0x53c1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c1d4:{NFSU2_TR(0x53c1d4);
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
B53c1d6:{NFSU2_TR(0x53c1d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53c1d8:{NFSU2_TR(0x53c1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c1db:{NFSU2_TR(0x53c1db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c1dc:{NFSU2_TR(0x53c1dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53c1de:{NFSU2_TR(0x53c1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c1e1:{NFSU2_TR(0x53c1e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53c1e2:L53c1e2:{c.instructions+=2;NFSU2_TR(0x53c1e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c1e3:{NFSU2_TR(0x53c1e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c1f0:L53c1f0:{c.instructions+=17;NFSU2_TR(0x53c1f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c1f2:{NFSU2_TR(0x53c1f2);
u8 U[4];
w4(U+0,u32(0x7775c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c1f7:{NFSU2_TR(0x53c1f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c1fd:{NFSU2_TR(0x53c1fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c1fe:{NFSU2_TR(0x53c1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c205:{NFSU2_TR(0x53c205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B53c208:{NFSU2_TR(0x53c208);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c209:{NFSU2_TR(0x53c209);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c20a:{NFSU2_TR(0x53c20a);
__builtin_memmove((R+24),(R+4),4);
}
B53c20c:{NFSU2_TR(0x53c20c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c212:{NFSU2_TR(0x53c212);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c213:{NFSU2_TR(0x53c213);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53c216:{NFSU2_TR(0x53c216);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53c219:{NFSU2_TR(0x53c219);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c21d:{NFSU2_TR(0x53c21d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c221:{NFSU2_TR(0x53c221);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c225:{NFSU2_TR(0x53c225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c22aull));
TAIL_STATIC(0x5385c0u,538);
}
B53c22a:L53c22a:{c.instructions+=12;NFSU2_TR(0x53c22a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53c22c:{NFSU2_TR(0x53c22c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53c230:{NFSU2_TR(0x53c230);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53c234:{NFSU2_TR(0x53c234);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c23a:{NFSU2_TR(0x53c23a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c23e:{NFSU2_TR(0x53c23e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c242:{NFSU2_TR(0x53c242);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c243:{NFSU2_TR(0x53c243);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53c247:{NFSU2_TR(0x53c247);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c248:{NFSU2_TR(0x53c248);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c249:{NFSU2_TR(0x53c249);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c24d:{NFSU2_TR(0x53c24d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c252ull));
TAIL_STATIC(0x539960u,539);
}
B53c252:L53c252:{c.instructions+=6;NFSU2_TR(0x53c252);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c256:{NFSU2_TR(0x53c256);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53c25a:{NFSU2_TR(0x53c25a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53c25d:{NFSU2_TR(0x53c25d);
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
B53c25f:{NFSU2_TR(0x53c25f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53c263:{NFSU2_TR(0x53c263);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c284;}}
}
B53c265:L53c265:{c.instructions+=2;NFSU2_TR(0x53c265);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c26d:{NFSU2_TR(0x53c26d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c272ull));
TAIL_STATIC(0x4def30u,4de);
}
B53c272:L53c272:{c.instructions+=7;NFSU2_TR(0x53c272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c273:{NFSU2_TR(0x53c273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c274:{NFSU2_TR(0x53c274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53c275:{NFSU2_TR(0x53c275);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c279:{NFSU2_TR(0x53c279);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c280:{NFSU2_TR(0x53c280);
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
B53c283:{NFSU2_TR(0x53c283);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c284:L53c284:{c.instructions+=2;NFSU2_TR(0x53c284);
__builtin_memmove((R+28),(R+24),4);
}
B53c286:{NFSU2_TR(0x53c286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c28bull));
TAIL_STATIC(0x502fd0u,502);
}
B53c28b:L53c28b:{c.instructions+=3;NFSU2_TR(0x53c28b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c28d:{NFSU2_TR(0x53c28d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c291:{NFSU2_TR(0x53c291);
if(r1(R+518)){{goto L53c359;}}
}
B53c297:L53c297:{c.instructions+=3;NFSU2_TR(0x53c297);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c29b:{NFSU2_TR(0x53c29b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c29e:{NFSU2_TR(0x53c29e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c2b4;}}
}
B53c2a0:L53c2a0:{c.instructions+=5;NFSU2_TR(0x53c2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c2a3:{NFSU2_TR(0x53c2a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B53c2a6:{NFSU2_TR(0x53c2a6);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1full))));
}
B53c2a9:{NFSU2_TR(0x53c2a9);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B53c2ac:{NFSU2_TR(0x53c2ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c34d;}}
}
B53c2b2:L53c2b2:{c.instructions+=1;NFSU2_TR(0x53c2b2);
{goto L53c2fa;}
}
B53c2b4:L53c2b4:{c.instructions+=2;NFSU2_TR(0x53c2b4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53c2b7:{NFSU2_TR(0x53c2b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c2fa;}}
}
B53c2b9:L53c2b9:{c.instructions+=3;NFSU2_TR(0x53c2b9);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B53c2bf:{NFSU2_TR(0x53c2bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53c2c1:{NFSU2_TR(0x53c2c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c2c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53c2c4:L53c2c4:{c.instructions+=5;NFSU2_TR(0x53c2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c2c7:{NFSU2_TR(0x53c2c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B53c2ca:{NFSU2_TR(0x53c2ca);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1full))));
}
B53c2cd:{NFSU2_TR(0x53c2cd);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B53c2d0:{NFSU2_TR(0x53c2d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c349;}}
}
B53c2d2:L53c2d2:{c.instructions+=7;NFSU2_TR(0x53c2d2);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B53c2d8:{NFSU2_TR(0x53c2d8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B53c2de:{NFSU2_TR(0x53c2de);
u8 U[13];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(s32(s8(r1(U+12)))));
}
B53c2e6:{NFSU2_TR(0x53c2e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c2e7:{NFSU2_TR(0x53c2e7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B53c2e9:{NFSU2_TR(0x53c2e9);
u8 U[4];
w4(U+0,u32(0xce7d8db5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c2ee:{NFSU2_TR(0x53c2ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c2f3ull));
TAIL_STATIC(0x61b500u,61b);
}
B53c2f3:L53c2f3:{c.instructions+=3;NFSU2_TR(0x53c2f3);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B53c2f6:{NFSU2_TR(0x53c2f6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c2f8:{NFSU2_TR(0x53c2f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c349;}}
}
B53c2fa:L53c2fa:{c.instructions+=2;NFSU2_TR(0x53c2fa);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c2fc:{NFSU2_TR(0x53c2fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c301ull));
TAIL_STATIC(0x575620u,575);
}
B53c301:L53c301:{c.instructions+=3;NFSU2_TR(0x53c301);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c304:{NFSU2_TR(0x53c304);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c306:{NFSU2_TR(0x53c306);
if(r1(R+518)){{goto L53c32f;}}
}
B53c308:L53c308:{c.instructions+=12;NFSU2_TR(0x53c308);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c30b:{NFSU2_TR(0x53c30b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c30e:{NFSU2_TR(0x53c30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c311:{NFSU2_TR(0x53c311);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c314:{NFSU2_TR(0x53c314);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c317:{NFSU2_TR(0x53c317);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53c31a:{NFSU2_TR(0x53c31a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53c31e:{NFSU2_TR(0x53c31e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53c321:{NFSU2_TR(0x53c321);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53c324:{NFSU2_TR(0x53c324);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+0)),r4(U+0));
}
B53c32a:{NFSU2_TR(0x53c32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c32d:{NFSU2_TR(0x53c32d);
{goto L53c331;}
}
B53c32f:L53c32f:{c.instructions+=1;NFSU2_TR(0x53c32f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53c331:L53c331:{c.instructions+=5;NFSU2_TR(0x53c331);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c335:{NFSU2_TR(0x53c335);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c337:{NFSU2_TR(0x53c337);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c339:{NFSU2_TR(0x53c339);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c33a:{NFSU2_TR(0x53c33a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c33full));
TAIL_STATIC(0x52ed80u,52e);
}
B53c33f:L53c33f:{c.instructions+=2;NFSU2_TR(0x53c33f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c343:{NFSU2_TR(0x53c343);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53c349:L53c349:{c.instructions+=1;NFSU2_TR(0x53c349);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c34d:L53c34d:{c.instructions+=3;NFSU2_TR(0x53c34d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B53c34f:{NFSU2_TR(0x53c34f);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53c353:{NFSU2_TR(0x53c353);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53c297u);}goto L53c297;}}
}
B53c359:L53c359:{c.instructions+=5;NFSU2_TR(0x53c359);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c35d:{NFSU2_TR(0x53c35d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c360:{NFSU2_TR(0x53c360);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
}
B53c363:{NFSU2_TR(0x53c363);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c365:{NFSU2_TR(0x53c365);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c3b3;}}
}
B53c367:L53c367:{c.instructions+=4;NFSU2_TR(0x53c367);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53c36b:{NFSU2_TR(0x53c36b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c36d:{NFSU2_TR(0x53c36d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c375:{NFSU2_TR(0x53c375);
if(r1(R+518)){{goto L53c411;}}
}
B53c37b:L53c37b:{c.instructions+=1;NFSU2_TR(0x53c37b);
{goto L53c380;}
}
B53c380:L53c380:{c.instructions+=7;NFSU2_TR(0x53c380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53c382:{NFSU2_TR(0x53c382);
__builtin_memmove((R+4),(R+24),4);
}
B53c384:{NFSU2_TR(0x53c384);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c387:{NFSU2_TR(0x53c387);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B53c389:{NFSU2_TR(0x53c389);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c38a:{NFSU2_TR(0x53c38a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c38d:{NFSU2_TR(0x53c38d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c392ull));
TAIL_STATIC(0x575630u,575);
}
B53c392:L53c392:{c.instructions+=5;NFSU2_TR(0x53c392);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c396:{NFSU2_TR(0x53c396);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53c39a:{NFSU2_TR(0x53c39a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c39d:{NFSU2_TR(0x53c39d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c39f:{NFSU2_TR(0x53c39f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53c380u);}goto L53c380;}}
}
B53c3a1:L53c3a1:{c.instructions+=7;NFSU2_TR(0x53c3a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c3a2:{NFSU2_TR(0x53c3a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c3a3:{NFSU2_TR(0x53c3a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53c3a4:{NFSU2_TR(0x53c3a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c3a8:{NFSU2_TR(0x53c3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c3af:{NFSU2_TR(0x53c3af);
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
B53c3b2:{NFSU2_TR(0x53c3b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c3b3:L53c3b3:{c.instructions+=4;NFSU2_TR(0x53c3b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c3b7:{NFSU2_TR(0x53c3b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c3ba:{NFSU2_TR(0x53c3ba);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c3bc:{NFSU2_TR(0x53c3bc);
if(r1(R+518)){{goto L53c3c1;}}
}
B53c3be:L53c3be:{c.instructions+=1;NFSU2_TR(0x53c3be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B53c3c1:L53c3c1:{c.instructions+=3;NFSU2_TR(0x53c3c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c3c2:{NFSU2_TR(0x53c3c2);
__builtin_memmove((R+4),(R+24),4);
}
B53c3c4:{NFSU2_TR(0x53c3c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c3c9ull));
TAIL_STATIC(0x5386a0u,538);
}
B53c3c9:L53c3c9:{c.instructions+=4;NFSU2_TR(0x53c3c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c3cb:{NFSU2_TR(0x53c3cb);
__builtin_memmove((R+4),(R+24),4);
}
B53c3cd:{NFSU2_TR(0x53c3cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53c3d1:{NFSU2_TR(0x53c3d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c3d6ull));
TAIL_STATIC(0x52eb90u,52e);
}
B53c3d6:L53c3d6:{c.instructions+=5;NFSU2_TR(0x53c3d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c3da:{NFSU2_TR(0x53c3da);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53c3de:{NFSU2_TR(0x53c3de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c3e0:{NFSU2_TR(0x53c3e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c3e8:{NFSU2_TR(0x53c3e8);
if(r1(R+518)){{goto L53c411;}}
}
B53c3ea:L53c3ea:{c.instructions+=1;NFSU2_TR(0x53c3ea);
__builtin_memmove((R+12),(R+12),4);
}
B53c3f0:L53c3f0:{c.instructions+=7;NFSU2_TR(0x53c3f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53c3f2:{NFSU2_TR(0x53c3f2);
__builtin_memmove((R+8),(R+0),4);
}
B53c3f4:{NFSU2_TR(0x53c3f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c3f7:{NFSU2_TR(0x53c3f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53c3f9:{NFSU2_TR(0x53c3f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c3fa:{NFSU2_TR(0x53c3fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c3fd:{NFSU2_TR(0x53c3fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c402ull));
TAIL_STATIC(0x575630u,575);
}
B53c402:L53c402:{c.instructions+=5;NFSU2_TR(0x53c402);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c406:{NFSU2_TR(0x53c406);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53c40a:{NFSU2_TR(0x53c40a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c40d:{NFSU2_TR(0x53c40d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c40f:{NFSU2_TR(0x53c40f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53c3f0u);}goto L53c3f0;}}
}
B53c411:L53c411:{c.instructions+=7;NFSU2_TR(0x53c411);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c415:{NFSU2_TR(0x53c415);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c416:{NFSU2_TR(0x53c416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c417:{NFSU2_TR(0x53c417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53c418:{NFSU2_TR(0x53c418);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c41f:{NFSU2_TR(0x53c41f);
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
B53c422:{NFSU2_TR(0x53c422);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c430:L53c430:{c.instructions+=14;NFSU2_TR(0x53c430);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c432:{NFSU2_TR(0x53c432);
u8 U[4];
w4(U+0,u32(0x77785eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c437:{NFSU2_TR(0x53c437);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c43d:{NFSU2_TR(0x53c43d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c43e:{NFSU2_TR(0x53c43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c445:{NFSU2_TR(0x53c445);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c446:{NFSU2_TR(0x53c446);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c447:{NFSU2_TR(0x53c447);
__builtin_memmove((R+24),(R+4),4);
}
B53c449:{NFSU2_TR(0x53c449);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c44d:{NFSU2_TR(0x53c44d);
u8 U[4];
w4(U+0,u32(0x79bea0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53c453:{NFSU2_TR(0x53c453);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c456:{NFSU2_TR(0x53c456);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c458:{NFSU2_TR(0x53c458);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c460:{NFSU2_TR(0x53c460);
if(r1(R+518)){{goto L53c46b;}}
}
B53c462:L53c462:{c.instructions+=2;NFSU2_TR(0x53c462);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c463:{NFSU2_TR(0x53c463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c468ull));
TAIL_STATIC(0x580e90u,580);
}
B53c468:L53c468:{c.instructions+=1;NFSU2_TR(0x53c468);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c46b:L53c46b:{c.instructions+=7;NFSU2_TR(0x53c46b);
u8 U[4];
w4(U+0,u32(0x4def30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c470:{NFSU2_TR(0x53c470);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c472:{NFSU2_TR(0x53c472);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c474:{NFSU2_TR(0x53c474);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53c477:{NFSU2_TR(0x53c477);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c478:{NFSU2_TR(0x53c478);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53c47d:{NFSU2_TR(0x53c47d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c482ull));
TAIL_STATIC(0x75c401u,75c);
}
B53c482:L53c482:{c.instructions+=6;NFSU2_TR(0x53c482);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c486:{NFSU2_TR(0x53c486);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53c48c:{NFSU2_TR(0x53c48c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c48d:{NFSU2_TR(0x53c48d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c494:{NFSU2_TR(0x53c494);
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
B53c497:{NFSU2_TR(0x53c497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c4a0:L53c4a0:{c.instructions+=7;NFSU2_TR(0x53c4a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c4a1:{NFSU2_TR(0x53c4a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c4a2:{NFSU2_TR(0x53c4a2);
__builtin_memmove((R+20),(R+4),4);
}
B53c4a4:{NFSU2_TR(0x53c4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c4a7:{NFSU2_TR(0x53c4a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c4a8:{NFSU2_TR(0x53c4a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c4a9:{NFSU2_TR(0x53c4a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c4aeull));
TAIL_STATIC(0x50ca50u,50c);
}
B53c4ae:L53c4ae:{c.instructions+=4;NFSU2_TR(0x53c4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c4b1:{NFSU2_TR(0x53c4b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c4b4:{NFSU2_TR(0x53c4b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c4b6:{NFSU2_TR(0x53c4b6);
if(r1(R+518)){{goto L53c4d5;}}
}
B53c4b8:L53c4b8:{c.instructions+=2;NFSU2_TR(0x53c4b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c4b9:{NFSU2_TR(0x53c4b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c4beull));
TAIL_STATIC(0x52cef0u,52c);
}
B53c4be:L53c4be:{c.instructions+=3;NFSU2_TR(0x53c4be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c4c1:{NFSU2_TR(0x53c4c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c4c3:{NFSU2_TR(0x53c4c3);
if(r1(R+518)){{goto L53c4d5;}}
}
B53c4c5:L53c4c5:{c.instructions+=3;NFSU2_TR(0x53c4c5);
u8 U[4];
w4(U+0,u32(0xdb285767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c4ca:{NFSU2_TR(0x53c4ca);
__builtin_memmove((R+4),(R+0),4);
}
B53c4cc:{NFSU2_TR(0x53c4cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c4d1ull));
TAIL_STATIC(0x517f80u,517);
}
B53c4d1:L53c4d1:{c.instructions+=2;NFSU2_TR(0x53c4d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c4d3:{NFSU2_TR(0x53c4d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c4ec;}}
}
B53c4d5:L53c4d5:{c.instructions+=3;NFSU2_TR(0x53c4d5);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53c4da:{NFSU2_TR(0x53c4da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c4dc:{NFSU2_TR(0x53c4dc);
if(r1(R+518)){{goto L53c541;}}
}
B53c4de:L53c4de:{c.instructions+=4;NFSU2_TR(0x53c4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c4e1:{NFSU2_TR(0x53c4e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c4e2:{NFSU2_TR(0x53c4e2);
u8 U[4];
w4(U+0,u32(0xdb285767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c4e7:{NFSU2_TR(0x53c4e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c4ecull));
TAIL_STATIC(0x52c570u,52c);
}
B53c4ec:L53c4ec:{c.instructions+=3;NFSU2_TR(0x53c4ec);
__builtin_memmove((R+28),(R+0),4);
}
B53c4ee:{NFSU2_TR(0x53c4ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c4f0:{NFSU2_TR(0x53c4f0);
if(r1(R+518)){{goto L53c541;}}
}
B53c4f2:L53c4f2:{c.instructions+=3;NFSU2_TR(0x53c4f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c4f5:{NFSU2_TR(0x53c4f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c4f7:{NFSU2_TR(0x53c4f7);
if(r1(R+518)){{goto L53c541;}}
}
B53c4f9:L53c4f9:{c.instructions+=1;NFSU2_TR(0x53c4f9);
__builtin_memmove((R+16),(R+16),4);
}
B53c500:L53c500:{c.instructions+=2;NFSU2_TR(0x53c500);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c505:{NFSU2_TR(0x53c505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c50aull));
TAIL_STATIC(0x505450u,505);
}
B53c50a:L53c50a:{c.instructions+=4;NFSU2_TR(0x53c50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c50d:{NFSU2_TR(0x53c50d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c510:{NFSU2_TR(0x53c510);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c512:{NFSU2_TR(0x53c512);
if(r1(R+518)){{goto L53c51d;}}
}
B53c514:L53c514:{c.instructions+=3;NFSU2_TR(0x53c514);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c517:{NFSU2_TR(0x53c517);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c519:{NFSU2_TR(0x53c519);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53c500u);}goto L53c500;}}
}
B53c51b:L53c51b:{c.instructions+=1;NFSU2_TR(0x53c51b);
{goto L53c541;}
}
B53c51d:L53c51d:{c.instructions+=2;NFSU2_TR(0x53c51d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c51f:{NFSU2_TR(0x53c51f);
if(r1(R+518)){{goto L53c541;}}
}
B53c521:L53c521:{c.instructions+=2;NFSU2_TR(0x53c521);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53c524:{NFSU2_TR(0x53c524);
if(r1(R+518)){{goto L53c53a;}}
}
B53c526:L53c526:{c.instructions+=3;NFSU2_TR(0x53c526);
__builtin_memmove((R+4),(R+28),4);
}
B53c528:{NFSU2_TR(0x53c528);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c52b:{NFSU2_TR(0x53c52b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c530ull));
TAIL_STATIC(0x517720u,517);
}
B53c530:L53c530:{c.instructions+=2;NFSU2_TR(0x53c530);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c533:{NFSU2_TR(0x53c533);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c53a:L53c53a:{c.instructions+=1;NFSU2_TR(0x53c53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c541:L53c541:{c.instructions+=3;NFSU2_TR(0x53c541);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53c547:{NFSU2_TR(0x53c547);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c548:{NFSU2_TR(0x53c548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c54dull));
TAIL_STATIC(0x50ca50u,50c);
}
B53c54d:L53c54d:{c.instructions+=3;NFSU2_TR(0x53c54d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c553:{NFSU2_TR(0x53c553);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c554:{NFSU2_TR(0x53c554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c559ull));
TAIL_STATIC(0x50ca50u,50c);
}
B53c559:L53c559:{c.instructions+=5;NFSU2_TR(0x53c559);
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
B53c55c:{NFSU2_TR(0x53c55c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c55d:{NFSU2_TR(0x53c55d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c55e:{NFSU2_TR(0x53c55e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53c55f:{NFSU2_TR(0x53c55f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c560:L53c560:{c.instructions+=7;NFSU2_TR(0x53c560);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c561:{NFSU2_TR(0x53c561);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c562:{NFSU2_TR(0x53c562);
__builtin_memmove((R+20),(R+4),4);
}
B53c564:{NFSU2_TR(0x53c564);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c567:{NFSU2_TR(0x53c567);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c568:{NFSU2_TR(0x53c568);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c569:{NFSU2_TR(0x53c569);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c56eull));
TAIL_STATIC(0x50ca00u,50c);
}
B53c56e:L53c56e:{c.instructions+=4;NFSU2_TR(0x53c56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c571:{NFSU2_TR(0x53c571);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c574:{NFSU2_TR(0x53c574);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c576:{NFSU2_TR(0x53c576);
if(r1(R+518)){{goto L53c595;}}
}
B53c578:L53c578:{c.instructions+=2;NFSU2_TR(0x53c578);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c579:{NFSU2_TR(0x53c579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c57eull));
TAIL_STATIC(0x52cef0u,52c);
}
B53c57e:L53c57e:{c.instructions+=3;NFSU2_TR(0x53c57e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c581:{NFSU2_TR(0x53c581);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c583:{NFSU2_TR(0x53c583);
if(r1(R+518)){{goto L53c595;}}
}
B53c585:L53c585:{c.instructions+=3;NFSU2_TR(0x53c585);
u8 U[4];
w4(U+0,u32(0xdb285767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c58a:{NFSU2_TR(0x53c58a);
__builtin_memmove((R+4),(R+0),4);
}
B53c58c:{NFSU2_TR(0x53c58c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c591ull));
TAIL_STATIC(0x517f80u,517);
}
B53c591:L53c591:{c.instructions+=2;NFSU2_TR(0x53c591);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c593:{NFSU2_TR(0x53c593);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c5ac;}}
}
B53c595:L53c595:{c.instructions+=3;NFSU2_TR(0x53c595);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53c59a:{NFSU2_TR(0x53c59a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c59c:{NFSU2_TR(0x53c59c);
if(r1(R+518)){{goto L53c601;}}
}
B53c59e:L53c59e:{c.instructions+=4;NFSU2_TR(0x53c59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c5a1:{NFSU2_TR(0x53c5a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c5a2:{NFSU2_TR(0x53c5a2);
u8 U[4];
w4(U+0,u32(0xdb285767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c5a7:{NFSU2_TR(0x53c5a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c5acull));
TAIL_STATIC(0x52c570u,52c);
}
B53c5ac:L53c5ac:{c.instructions+=3;NFSU2_TR(0x53c5ac);
__builtin_memmove((R+28),(R+0),4);
}
B53c5ae:{NFSU2_TR(0x53c5ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c5b0:{NFSU2_TR(0x53c5b0);
if(r1(R+518)){{goto L53c601;}}
}
B53c5b2:L53c5b2:{c.instructions+=3;NFSU2_TR(0x53c5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c5b5:{NFSU2_TR(0x53c5b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c5b7:{NFSU2_TR(0x53c5b7);
if(r1(R+518)){{goto L53c601;}}
}
B53c5b9:L53c5b9:{c.instructions+=1;NFSU2_TR(0x53c5b9);
__builtin_memmove((R+16),(R+16),4);
}
B53c5c0:L53c5c0:{c.instructions+=2;NFSU2_TR(0x53c5c0);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c5c5:{NFSU2_TR(0x53c5c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c5caull));
TAIL_STATIC(0x505450u,505);
}
B53c5ca:L53c5ca:{c.instructions+=4;NFSU2_TR(0x53c5ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c5cd:{NFSU2_TR(0x53c5cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c5d0:{NFSU2_TR(0x53c5d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53c5d2:{NFSU2_TR(0x53c5d2);
if(r1(R+518)){{goto L53c5dd;}}
}
B53c5d4:L53c5d4:{c.instructions+=3;NFSU2_TR(0x53c5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c5d7:{NFSU2_TR(0x53c5d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c5d9:{NFSU2_TR(0x53c5d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53c5c0u);}goto L53c5c0;}}
}
B53c5db:L53c5db:{c.instructions+=1;NFSU2_TR(0x53c5db);
{goto L53c601;}
}
B53c5dd:L53c5dd:{c.instructions+=2;NFSU2_TR(0x53c5dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c5df:{NFSU2_TR(0x53c5df);
if(r1(R+518)){{goto L53c601;}}
}
B53c5e1:L53c5e1:{c.instructions+=2;NFSU2_TR(0x53c5e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53c5e4:{NFSU2_TR(0x53c5e4);
if(r1(R+518)){{goto L53c5fa;}}
}
B53c5e6:L53c5e6:{c.instructions+=3;NFSU2_TR(0x53c5e6);
__builtin_memmove((R+4),(R+28),4);
}
B53c5e8:{NFSU2_TR(0x53c5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c5eb:{NFSU2_TR(0x53c5eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c5f0ull));
TAIL_STATIC(0x517720u,517);
}
B53c5f0:L53c5f0:{c.instructions+=2;NFSU2_TR(0x53c5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c5f3:{NFSU2_TR(0x53c5f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c5fa:L53c5fa:{c.instructions+=1;NFSU2_TR(0x53c5fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c601:L53c601:{c.instructions+=3;NFSU2_TR(0x53c601);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53c607:{NFSU2_TR(0x53c607);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c608:{NFSU2_TR(0x53c608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c60dull));
TAIL_STATIC(0x50ca00u,50c);
}
B53c60d:L53c60d:{c.instructions+=3;NFSU2_TR(0x53c60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c613:{NFSU2_TR(0x53c613);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c614:{NFSU2_TR(0x53c614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c619ull));
TAIL_STATIC(0x50ca00u,50c);
}
B53c619:L53c619:{c.instructions+=5;NFSU2_TR(0x53c619);
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
B53c61c:{NFSU2_TR(0x53c61c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c61d:{NFSU2_TR(0x53c61d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c61e:{NFSU2_TR(0x53c61e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53c61f:{NFSU2_TR(0x53c61f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c620:L53c620:{c.instructions+=7;NFSU2_TR(0x53c620);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c624:{NFSU2_TR(0x53c624);
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B53c627:{NFSU2_TR(0x53c627);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c628:{NFSU2_TR(0x53c628);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c629:{NFSU2_TR(0x53c629);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c62a:{NFSU2_TR(0x53c62a);
__builtin_memmove((R+28),(R+4),4);
}
B53c62c:{NFSU2_TR(0x53c62c);
if(r1(R+518)){{goto L53c662;}}
}
B53c62e:L53c62e:{c.instructions+=2;NFSU2_TR(0x53c62e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B53c62f:{NFSU2_TR(0x53c62f);
if(r1(R+518)){{goto L53c64d;}}
}
B53c631:L53c631:{c.instructions+=2;NFSU2_TR(0x53c631);
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
B53c632:{NFSU2_TR(0x53c632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c7c2;}}
}
B53c638:L53c638:{c.instructions+=4;NFSU2_TR(0x53c638);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c63b:{NFSU2_TR(0x53c63b);
u8 U[4];
w4(U+0,u32(0xf0250dacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c640:{NFSU2_TR(0x53c640);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c641:{NFSU2_TR(0x53c641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c646ull));
TAIL_STATIC(0x537a60u,537);
}
B53c646:L53c646:{c.instructions+=2;NFSU2_TR(0x53c646);
u8 U[4];
w4(U+0,u32(0x6d5ece44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c64b:{NFSU2_TR(0x53c64b);
{goto L53c675;}
}
B53c64d:L53c64d:{c.instructions+=4;NFSU2_TR(0x53c64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c650:{NFSU2_TR(0x53c650);
u8 U[4];
w4(U+0,u32(0x1d9051aaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c655:{NFSU2_TR(0x53c655);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c656:{NFSU2_TR(0x53c656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c65bull));
TAIL_STATIC(0x537a60u,537);
}
B53c65b:L53c65b:{c.instructions+=2;NFSU2_TR(0x53c65b);
u8 U[4];
w4(U+0,u32(0x19c99185ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c660:{NFSU2_TR(0x53c660);
{goto L53c675;}
}
B53c662:L53c662:{c.instructions+=4;NFSU2_TR(0x53c662);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c665:{NFSU2_TR(0x53c665);
u8 U[4];
w4(U+0,u32(0x5d19f25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c66a:{NFSU2_TR(0x53c66a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c66b:{NFSU2_TR(0x53c66b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c670ull));
TAIL_STATIC(0x537a60u,537);
}
B53c670:L53c670:{c.instructions+=1;NFSU2_TR(0x53c670);
u8 U[4];
w4(U+0,u32(0x6d5fe871ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c675:L53c675:{c.instructions+=4;NFSU2_TR(0x53c675);
__builtin_memmove((R+24),(R+0),4);
}
B53c677:{NFSU2_TR(0x53c677);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c67a:{NFSU2_TR(0x53c67a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c67b:{NFSU2_TR(0x53c67b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c680ull));
TAIL_STATIC(0x537a60u,537);
}
B53c680:L53c680:{c.instructions+=4;NFSU2_TR(0x53c680);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53c683:{NFSU2_TR(0x53c683);
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
B53c685:{NFSU2_TR(0x53c685);
__builtin_memmove((R+12),(R+0),4);
}
B53c687:{NFSU2_TR(0x53c687);
if(r1(R+518)){{goto L53c7c2;}}
}
B53c68d:L53c68d:{c.instructions+=5;NFSU2_TR(0x53c68d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c690:{NFSU2_TR(0x53c690);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c693:{NFSU2_TR(0x53c693);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c697:{NFSU2_TR(0x53c697);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B53c69e:{NFSU2_TR(0x53c69e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L53c6c9;}}
}
B53c6a0:L53c6a0:{c.instructions+=4;NFSU2_TR(0x53c6a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c6a1:{NFSU2_TR(0x53c6a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53c6a5:{NFSU2_TR(0x53c6a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c6a6:{NFSU2_TR(0x53c6a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c6abull));
TAIL_STATIC(0x504640u,504);
}
B53c6ab:L53c6ab:{c.instructions+=3;NFSU2_TR(0x53c6ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53c6ae:{NFSU2_TR(0x53c6ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53c6b0:{NFSU2_TR(0x53c6b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c6b9;}}
}
B53c6b2:L53c6b2:{c.instructions+=1;NFSU2_TR(0x53c6b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53c6b9:L53c6b9:{c.instructions+=6;NFSU2_TR(0x53c6b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c6bb:{NFSU2_TR(0x53c6bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53c6bf:{NFSU2_TR(0x53c6bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c6c0:{NFSU2_TR(0x53c6c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c6c2:{NFSU2_TR(0x53c6c2);
__builtin_memmove((R+4),(R+24),4);
}
B53c6c4:{NFSU2_TR(0x53c6c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c6c9ull));
TAIL_STATIC(0x517ad0u,517);
}
B53c6c9:L53c6c9:{c.instructions+=5;NFSU2_TR(0x53c6c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c6cc:{NFSU2_TR(0x53c6cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B53c6d3:{NFSU2_TR(0x53c6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53c6d6:{NFSU2_TR(0x53c6d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53c6da:{NFSU2_TR(0x53c6da);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L53c705;}}
}
B53c6dc:L53c6dc:{c.instructions+=4;NFSU2_TR(0x53c6dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c6dd:{NFSU2_TR(0x53c6dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53c6e1:{NFSU2_TR(0x53c6e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c6e2:{NFSU2_TR(0x53c6e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c6e7ull));
TAIL_STATIC(0x504640u,504);
}
B53c6e7:L53c6e7:{c.instructions+=3;NFSU2_TR(0x53c6e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53c6ea:{NFSU2_TR(0x53c6ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53c6ec:{NFSU2_TR(0x53c6ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c6f5;}}
}
B53c6ee:L53c6ee:{c.instructions+=1;NFSU2_TR(0x53c6ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53c6f5:L53c6f5:{c.instructions+=6;NFSU2_TR(0x53c6f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c6f7:{NFSU2_TR(0x53c6f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53c6fb:{NFSU2_TR(0x53c6fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c6fc:{NFSU2_TR(0x53c6fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c6fe:{NFSU2_TR(0x53c6fe);
__builtin_memmove((R+4),(R+12),4);
}
B53c700:{NFSU2_TR(0x53c700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c705ull));
TAIL_STATIC(0x517ad0u,517);
}
B53c705:L53c705:{c.instructions+=3;NFSU2_TR(0x53c705);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53c709:{NFSU2_TR(0x53c709);
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
B53c70b:{NFSU2_TR(0x53c70b);
if(r1(R+518)){{goto L53c7c2;}}
}
B53c711:L53c711:{c.instructions+=3;NFSU2_TR(0x53c711);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c715:{NFSU2_TR(0x53c715);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53c718:{NFSU2_TR(0x53c718);
if(r1(R+518)){{goto L53c793;}}
}
B53c71a:L53c71a:{c.instructions+=2;NFSU2_TR(0x53c71a);
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
B53c71b:{NFSU2_TR(0x53c71b);
if(r1(R+518)){{goto L53c75c;}}
}
B53c71d:L53c71d:{c.instructions+=2;NFSU2_TR(0x53c71d);
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
B53c71e:{NFSU2_TR(0x53c71e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c7c2;}}
}
B53c724:L53c724:{c.instructions+=14;NFSU2_TR(0x53c724);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c728:{NFSU2_TR(0x53c728);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c72c:{NFSU2_TR(0x53c72c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53c730:{NFSU2_TR(0x53c730);
__builtin_memmove(gp(0x839c20),(R+24),4);
}
B53c736:{NFSU2_TR(0x53c736);
__builtin_memmove(gp(0x839c1c),(R+0),4);
}
B53c73b:{NFSU2_TR(0x53c73b);
__builtin_memmove(gp(0x839c18),(R+4),4);
}
B53c741:{NFSU2_TR(0x53c741);
__builtin_memmove(gp(0x839c14),(R+8),4);
}
B53c747:{NFSU2_TR(0x53c747);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c74d:{NFSU2_TR(0x53c74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c750:{NFSU2_TR(0x53c750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c751:{NFSU2_TR(0x53c751);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c752:{NFSU2_TR(0x53c752);
__builtin_memmove(gp(0x839c2c),(R+4),4);
}
B53c758:{NFSU2_TR(0x53c758);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53c759:{NFSU2_TR(0x53c759);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c75c:L53c75c:{c.instructions+=14;NFSU2_TR(0x53c75c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53c760:{NFSU2_TR(0x53c760);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c764:{NFSU2_TR(0x53c764);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c768:{NFSU2_TR(0x53c768);
__builtin_memmove(gp(0x839c10),(R+24),4);
}
B53c76e:{NFSU2_TR(0x53c76e);
__builtin_memmove(gp(0x839c0c),(R+8),4);
}
B53c774:{NFSU2_TR(0x53c774);
__builtin_memmove(gp(0x839c08),(R+0),4);
}
B53c779:{NFSU2_TR(0x53c779);
__builtin_memmove(gp(0x839c04),(R+4),4);
}
B53c77f:{NFSU2_TR(0x53c77f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53c785:{NFSU2_TR(0x53c785);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c788:{NFSU2_TR(0x53c788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c789:{NFSU2_TR(0x53c789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c78a:{NFSU2_TR(0x53c78a);
__builtin_memmove(gp(0x839c28),(R+0),4);
}
B53c78f:{NFSU2_TR(0x53c78f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53c790:{NFSU2_TR(0x53c790);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c793:L53c793:{c.instructions+=10;NFSU2_TR(0x53c793);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c797:{NFSU2_TR(0x53c797);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53c79b:{NFSU2_TR(0x53c79b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c79f:{NFSU2_TR(0x53c79f);
__builtin_memmove(gp(0x839c00),(R+24),4);
}
B53c7a5:{NFSU2_TR(0x53c7a5);
__builtin_memmove(gp(0x839bfc),(R+4),4);
}
B53c7ab:{NFSU2_TR(0x53c7ab);
__builtin_memmove(gp(0x839bf8),(R+8),4);
}
B53c7b1:{NFSU2_TR(0x53c7b1);
__builtin_memmove(gp(0x839bf4),(R+0),4);
}
B53c7b6:{NFSU2_TR(0x53c7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53c7b9:{NFSU2_TR(0x53c7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53c7bc:{NFSU2_TR(0x53c7bc);
__builtin_memmove(gp(0x839c24),(R+8),4);
}
B53c7c2:L53c7c2:{c.instructions+=4;NFSU2_TR(0x53c7c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c7c3:{NFSU2_TR(0x53c7c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c7c4:{NFSU2_TR(0x53c7c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53c7c5:{NFSU2_TR(0x53c7c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c7d0:L53c7d0:{c.instructions+=2;NFSU2_TR(0x53c7d0);
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
B53c7d8:{NFSU2_TR(0x53c7d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c82a;}}
}
B53c7da:L53c7da:{c.instructions+=2;NFSU2_TR(0x53c7da);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c7df:{NFSU2_TR(0x53c7df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c7e4ull));
TAIL_STATIC(0x52cf60u,52c);
}
B53c7e4:L53c7e4:{c.instructions+=3;NFSU2_TR(0x53c7e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c7e7:{NFSU2_TR(0x53c7e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53c7e9:{NFSU2_TR(0x53c7e9);
if(r1(R+518)){{goto L53c7ff;}}
}
B53c7eb:L53c7eb:{c.instructions+=3;NFSU2_TR(0x53c7eb);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53c7f1:{NFSU2_TR(0x53c7f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c7f3:{NFSU2_TR(0x53c7f3);
if(r1(R+518)){{goto L53c7ff;}}
}
B53c7f5:L53c7f5:{c.instructions+=2;NFSU2_TR(0x53c7f5);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c7fa:{NFSU2_TR(0x53c7fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c7ffull));
TAIL_STATIC(0x5376f0u,537);
}
B53c7ff:L53c7ff:{c.instructions+=3;NFSU2_TR(0x53c7ff);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B53c805:{NFSU2_TR(0x53c805);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c807:{NFSU2_TR(0x53c807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c80cull));
TAIL_STATIC(0x5f4240u,5f4);
}
B53c80c:L53c80c:{c.instructions+=3;NFSU2_TR(0x53c80c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c810:{NFSU2_TR(0x53c810);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c811:{NFSU2_TR(0x53c811);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c816ull));
TAIL_STATIC(0x505450u,505);
}
B53c816:L53c816:{c.instructions+=2;NFSU2_TR(0x53c816);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c817:{NFSU2_TR(0x53c817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c81cull));
TAIL_STATIC(0x50b840u,50b);
}
B53c81c:L53c81c:{c.instructions+=3;NFSU2_TR(0x53c81c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53c81f:{NFSU2_TR(0x53c81f);
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
B53c821:{NFSU2_TR(0x53c821);
if(r1(R+518)){{goto L53c82a;}}
}
B53c823:L53c823:{c.instructions+=1;NFSU2_TR(0x53c823);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c82a:L53c82a:{c.instructions+=1;NFSU2_TR(0x53c82a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c830:L53c830:{c.instructions+=2;NFSU2_TR(0x53c830);
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
B53c838:{NFSU2_TR(0x53c838);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c856;}}
}
B53c83a:L53c83a:{c.instructions+=3;NFSU2_TR(0x53c83a);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53c840:{NFSU2_TR(0x53c840);
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
B53c842:{NFSU2_TR(0x53c842);
if(r1(R+518)){{goto L53c856;}}
}
B53c844:L53c844:{c.instructions+=6;NFSU2_TR(0x53c844);
__builtin_memmove((R+0),gp(0x7fa230),4);
}
B53c849:{NFSU2_TR(0x53c849);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53c84d:{NFSU2_TR(0x53c84d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c84f:{NFSU2_TR(0x53c84f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c850:{NFSU2_TR(0x53c850);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c851:{NFSU2_TR(0x53c851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c856ull));
TAIL_STATIC(0x5377a0u,537);
}
B53c856:L53c856:{c.instructions+=1;NFSU2_TR(0x53c856);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c860:L53c860:{c.instructions+=2;NFSU2_TR(0x53c860);
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
B53c868:{NFSU2_TR(0x53c868);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c885;}}
}
B53c86a:L53c86a:{c.instructions+=3;NFSU2_TR(0x53c86a);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53c870:{NFSU2_TR(0x53c870);
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
B53c872:{NFSU2_TR(0x53c872);
if(r1(R+518)){{goto L53c885;}}
}
B53c874:L53c874:{c.instructions+=5;NFSU2_TR(0x53c874);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c878:{NFSU2_TR(0x53c878);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c87a:{NFSU2_TR(0x53c87a);
u8 U[4];
w4(U+0,u32(0x79071cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c87f:{NFSU2_TR(0x53c87f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c880:{NFSU2_TR(0x53c880);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c885ull));
TAIL_STATIC(0x5377a0u,537);
}
B53c885:L53c885:{c.instructions+=1;NFSU2_TR(0x53c885);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c890:L53c890:{c.instructions+=2;NFSU2_TR(0x53c890);
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
B53c898:{NFSU2_TR(0x53c898);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c8b6;}}
}
B53c89a:L53c89a:{c.instructions+=3;NFSU2_TR(0x53c89a);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53c8a0:{NFSU2_TR(0x53c8a0);
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
B53c8a2:{NFSU2_TR(0x53c8a2);
if(r1(R+518)){{goto L53c8b6;}}
}
B53c8a4:L53c8a4:{c.instructions+=6;NFSU2_TR(0x53c8a4);
__builtin_memmove((R+0),gp(0x7fa214),4);
}
B53c8a9:{NFSU2_TR(0x53c8a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53c8ad:{NFSU2_TR(0x53c8ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c8af:{NFSU2_TR(0x53c8af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c8b0:{NFSU2_TR(0x53c8b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c8b1:{NFSU2_TR(0x53c8b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c8b6ull));
TAIL_STATIC(0x5377a0u,537);
}
B53c8b6:L53c8b6:{c.instructions+=1;NFSU2_TR(0x53c8b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c8c0:L53c8c0:{c.instructions+=4;NFSU2_TR(0x53c8c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c8c1:{NFSU2_TR(0x53c8c1);
__builtin_memmove((R+20),(R+16),4);
}
B53c8c3:{NFSU2_TR(0x53c8c3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B53c8ca:{NFSU2_TR(0x53c8ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c9d5;}}
}
B53c8d0:L53c8d0:{c.instructions+=2;NFSU2_TR(0x53c8d0);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c8d5:{NFSU2_TR(0x53c8d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c8daull));
TAIL_STATIC(0x52cf60u,52c);
}
B53c8da:L53c8da:{c.instructions+=3;NFSU2_TR(0x53c8da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c8dd:{NFSU2_TR(0x53c8dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53c8df:{NFSU2_TR(0x53c8df);
if(r1(R+518)){{goto L53c8f5;}}
}
B53c8e1:L53c8e1:{c.instructions+=3;NFSU2_TR(0x53c8e1);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53c8e7:{NFSU2_TR(0x53c8e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c8e9:{NFSU2_TR(0x53c8e9);
if(r1(R+518)){{goto L53c8f5;}}
}
B53c8eb:L53c8eb:{c.instructions+=2;NFSU2_TR(0x53c8eb);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c8f0:{NFSU2_TR(0x53c8f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c8f5ull));
TAIL_STATIC(0x5376f0u,537);
}
B53c8f5:L53c8f5:{c.instructions+=3;NFSU2_TR(0x53c8f5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c8f7:{NFSU2_TR(0x53c8f7);
w4(R+4,u32(0x83a611ull));
}
B53c8fc:{NFSU2_TR(0x53c8fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c901ull));
TAIL_STATIC(0x59afe0u,59a);
}
B53c901:L53c901:{c.instructions+=3;NFSU2_TR(0x53c901);
__builtin_memmove((R+0),gp(0x83a540),4);
}
B53c906:{NFSU2_TR(0x53c906);
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
B53c908:{NFSU2_TR(0x53c908);
if(r1(R+518)){{goto L53c91e;}}
}
B53c90a:L53c90a:{c.instructions+=5;NFSU2_TR(0x53c90a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c90b:{NFSU2_TR(0x53c90b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c90c:{NFSU2_TR(0x53c90c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c90f:{NFSU2_TR(0x53c90f);
w4(R+4,u32(0xaull));
}
B53c914:{NFSU2_TR(0x53c914);
w4(R+28,u32(0x83a611ull));
}
B53c919:L53c919:{c.instructions+=1;NFSU2_TR(0x53c919);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L53c91b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53c919u);}goto L53c919;}
}
B53c91b:L53c91b:{c.instructions+=3;NFSU2_TR(0x53c91b);
u8 U[34];
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
}
B53c91c:{NFSU2_TR(0x53c91c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53c91d:{NFSU2_TR(0x53c91d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53c91e:L53c91e:{c.instructions+=2;NFSU2_TR(0x53c91e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c920:{NFSU2_TR(0x53c920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c925ull));
TAIL_STATIC(0x5b7ed0u,5b7);
}
B53c925:L53c925:{c.instructions+=5;NFSU2_TR(0x53c925);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c928:{NFSU2_TR(0x53c928);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c929:{NFSU2_TR(0x53c929);
s1(0x83a7a4,u8(0x0ull));
}
B53c930:{NFSU2_TR(0x53c930);
s4(0x83a644,u32(0x0ull));
}
B53c93a:{NFSU2_TR(0x53c93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c93full));
TAIL_STATIC(0x505450u,505);
}
B53c93f:L53c93f:{c.instructions+=2;NFSU2_TR(0x53c93f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c940:{NFSU2_TR(0x53c940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c945ull));
TAIL_STATIC(0x50b840u,50b);
}
B53c945:L53c945:{c.instructions+=3;NFSU2_TR(0x53c945);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53c948:{NFSU2_TR(0x53c948);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53c94a:{NFSU2_TR(0x53c94a);
if(r1(R+518)){{goto L53c953;}}
}
B53c94c:L53c94c:{c.instructions+=1;NFSU2_TR(0x53c94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53c953:L53c953:{c.instructions+=3;NFSU2_TR(0x53c953);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B53c959:{NFSU2_TR(0x53c959);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B53c95c:{NFSU2_TR(0x53c95c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53c965;}}
}
B53c95e:L53c95e:{c.instructions+=2;NFSU2_TR(0x53c95e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c960:{NFSU2_TR(0x53c960);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c965ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B53c965:L53c965:{c.instructions+=2;NFSU2_TR(0x53c965);
__builtin_memmove((R+4),gp(0x890118),4);
}
B53c96b:{NFSU2_TR(0x53c96b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c970ull));
TAIL_STATIC(0x608ca0u,608);
}
B53c970:L53c970:{c.instructions+=3;NFSU2_TR(0x53c970);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53c973:{NFSU2_TR(0x53c973);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53c975:{NFSU2_TR(0x53c975);
if(r1(R+518)){{goto L53c98a;}}
}
B53c977:L53c977:{c.instructions+=5;NFSU2_TR(0x53c977);
__builtin_memmove((R+4),gp(0x83a64c),4);
}
B53c97d:{NFSU2_TR(0x53c97d);
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
B53c97f:{NFSU2_TR(0x53c97f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B53c986:{NFSU2_TR(0x53c986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53c987:{NFSU2_TR(0x53c987);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c98a:L53c98a:{c.instructions+=2;NFSU2_TR(0x53c98a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B53c98c:{NFSU2_TR(0x53c98c);
if(r1(R+518)){{goto L53c9a4;}}
}
B53c98e:L53c98e:{c.instructions+=5;NFSU2_TR(0x53c98e);
__builtin_memmove((R+4),gp(0x83a64c),4);
}
B53c994:{NFSU2_TR(0x53c994);
w4(R+0,u32(0x1ull));
}
B53c999:{NFSU2_TR(0x53c999);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B53c9a0:{NFSU2_TR(0x53c9a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53c9a1:{NFSU2_TR(0x53c9a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c9a4:L53c9a4:{c.instructions+=2;NFSU2_TR(0x53c9a4);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B53c9a6:{NFSU2_TR(0x53c9a6);
if(r1(R+518)){{goto L53c9be;}}
}
B53c9a8:L53c9a8:{c.instructions+=5;NFSU2_TR(0x53c9a8);
__builtin_memmove((R+4),gp(0x83a64c),4);
}
B53c9ae:{NFSU2_TR(0x53c9ae);
w4(R+0,u32(0x2ull));
}
B53c9b3:{NFSU2_TR(0x53c9b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B53c9ba:{NFSU2_TR(0x53c9ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53c9bb:{NFSU2_TR(0x53c9bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c9be:L53c9be:{c.instructions+=7;NFSU2_TR(0x53c9be);
__builtin_memmove((R+4),gp(0x83a64c),4);
}
B53c9c4:{NFSU2_TR(0x53c9c4);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
}
B53c9c6:{NFSU2_TR(0x53c9c6);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B53c9c8:{NFSU2_TR(0x53c9c8);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B53c9ca:{NFSU2_TR(0x53c9ca);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B53c9cd:{NFSU2_TR(0x53c9cd);
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
B53c9ce:{NFSU2_TR(0x53c9ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B53c9d5:L53c9d5:{c.instructions+=2;NFSU2_TR(0x53c9d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53c9d6:{NFSU2_TR(0x53c9d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53c9e0:L53c9e0:{c.instructions+=6;NFSU2_TR(0x53c9e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c9e1:{NFSU2_TR(0x53c9e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c9e2:{NFSU2_TR(0x53c9e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c9e3:{NFSU2_TR(0x53c9e3);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53c9e5:{NFSU2_TR(0x53c9e5);
__builtin_memmove((R+24),(R+4),4);
}
B53c9e7:{NFSU2_TR(0x53c9e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c9ecull));
TAIL_STATIC(0x575620u,575);
}
B53c9ec:L53c9ec:{c.instructions+=5;NFSU2_TR(0x53c9ec);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53c9ee:{NFSU2_TR(0x53c9ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53c9f1:{NFSU2_TR(0x53c9f1);
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
B53c9f3:{NFSU2_TR(0x53c9f3);
w4(R+28,u32(0x3f800000ull));
}
B53c9f8:{NFSU2_TR(0x53c9f8);
if(r1(R+518)){{goto L53ca3c;}}
}
B53c9fa:L53c9fa:{c.instructions+=18;NFSU2_TR(0x53c9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x12bb5ea2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ca01:{NFSU2_TR(0x53ca01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca04:{NFSU2_TR(0x53ca04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca07:{NFSU2_TR(0x53ca07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca0a:{NFSU2_TR(0x53ca0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ca0d:{NFSU2_TR(0x53ca0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53ca11:{NFSU2_TR(0x53ca11);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ca14:{NFSU2_TR(0x53ca14);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ca17:{NFSU2_TR(0x53ca17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x105149cbull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ca1e:{NFSU2_TR(0x53ca1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca21:{NFSU2_TR(0x53ca21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca24:{NFSU2_TR(0x53ca24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca27:{NFSU2_TR(0x53ca27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca2a:{NFSU2_TR(0x53ca2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca2d:{NFSU2_TR(0x53ca2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53ca31:{NFSU2_TR(0x53ca31);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ca34:{NFSU2_TR(0x53ca34);
u8 U[4];
w4(U+0,u32(0x79b720ull));
s4(u32(r4(R+0)),r4(U+0));
}
B53ca3a:{NFSU2_TR(0x53ca3a);
{goto L53ca3e;}
}
B53ca3c:L53ca3c:{c.instructions+=1;NFSU2_TR(0x53ca3c);
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
B53ca3e:L53ca3e:{c.instructions+=4;NFSU2_TR(0x53ca3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53ca40:{NFSU2_TR(0x53ca40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ca41:{NFSU2_TR(0x53ca41);
__builtin_memmove((R+4),(R+24),4);
}
B53ca43:{NFSU2_TR(0x53ca43);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ca46ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53ca46:L53ca46:{c.instructions+=2;NFSU2_TR(0x53ca46);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ca48:{NFSU2_TR(0x53ca48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ca4dull));
TAIL_STATIC(0x575620u,575);
}
B53ca4d:L53ca4d:{c.instructions+=3;NFSU2_TR(0x53ca4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53ca50:{NFSU2_TR(0x53ca50);
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
B53ca52:{NFSU2_TR(0x53ca52);
if(r1(R+518)){{goto L53ca96;}}
}
B53ca54:L53ca54:{c.instructions+=18;NFSU2_TR(0x53ca54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xb295a6b6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ca5b:{NFSU2_TR(0x53ca5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca5e:{NFSU2_TR(0x53ca5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca61:{NFSU2_TR(0x53ca61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca64:{NFSU2_TR(0x53ca64);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ca67:{NFSU2_TR(0x53ca67);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53ca6b:{NFSU2_TR(0x53ca6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ca6e:{NFSU2_TR(0x53ca6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ca71:{NFSU2_TR(0x53ca71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x80833fc2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ca78:{NFSU2_TR(0x53ca78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca7b:{NFSU2_TR(0x53ca7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca7e:{NFSU2_TR(0x53ca7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca81:{NFSU2_TR(0x53ca81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca84:{NFSU2_TR(0x53ca84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ca87:{NFSU2_TR(0x53ca87);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53ca8b:{NFSU2_TR(0x53ca8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ca8e:{NFSU2_TR(0x53ca8e);
u8 U[4];
w4(U+0,u32(0x79b728ull));
s4(u32(r4(R+0)),r4(U+0));
}
B53ca94:{NFSU2_TR(0x53ca94);
{goto L53ca98;}
}
B53ca96:L53ca96:{c.instructions+=1;NFSU2_TR(0x53ca96);
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
B53ca98:L53ca98:{c.instructions+=4;NFSU2_TR(0x53ca98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53ca9a:{NFSU2_TR(0x53ca9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ca9b:{NFSU2_TR(0x53ca9b);
__builtin_memmove((R+4),(R+24),4);
}
B53ca9d:{NFSU2_TR(0x53ca9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53caa0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53caa0:L53caa0:{c.instructions+=2;NFSU2_TR(0x53caa0);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53caa2:{NFSU2_TR(0x53caa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53caa7ull));
TAIL_STATIC(0x575620u,575);
}
B53caa7:L53caa7:{c.instructions+=3;NFSU2_TR(0x53caa7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53caaa:{NFSU2_TR(0x53caaa);
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
B53caac:{NFSU2_TR(0x53caac);
if(r1(R+518)){{goto L53caf0;}}
}
B53caae:L53caae:{c.instructions+=18;NFSU2_TR(0x53caae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xd4060fc4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53cab5:{NFSU2_TR(0x53cab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cab8:{NFSU2_TR(0x53cab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cabb:{NFSU2_TR(0x53cabb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cabe:{NFSU2_TR(0x53cabe);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cac1:{NFSU2_TR(0x53cac1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53cac5:{NFSU2_TR(0x53cac5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cac8:{NFSU2_TR(0x53cac8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cacb:{NFSU2_TR(0x53cacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xa34e13bdull));
s4(u32(r4(U+0)),r4(U+4));
}
B53cad2:{NFSU2_TR(0x53cad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cad5:{NFSU2_TR(0x53cad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cad8:{NFSU2_TR(0x53cad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cadb:{NFSU2_TR(0x53cadb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cade:{NFSU2_TR(0x53cade);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cae1:{NFSU2_TR(0x53cae1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53cae5:{NFSU2_TR(0x53cae5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cae8:{NFSU2_TR(0x53cae8);
u8 U[4];
w4(U+0,u32(0x79b748ull));
s4(u32(r4(R+0)),r4(U+0));
}
B53caee:{NFSU2_TR(0x53caee);
{goto L53caf2;}
}
B53caf0:L53caf0:{c.instructions+=1;NFSU2_TR(0x53caf0);
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
B53caf2:L53caf2:{c.instructions+=4;NFSU2_TR(0x53caf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53caf4:{NFSU2_TR(0x53caf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53caf5:{NFSU2_TR(0x53caf5);
__builtin_memmove((R+4),(R+24),4);
}
B53caf7:{NFSU2_TR(0x53caf7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cafaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53cafa:L53cafa:{c.instructions+=2;NFSU2_TR(0x53cafa);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cafc:{NFSU2_TR(0x53cafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cb01ull));
TAIL_STATIC(0x575620u,575);
}
B53cb01:L53cb01:{c.instructions+=3;NFSU2_TR(0x53cb01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53cb04:{NFSU2_TR(0x53cb04);
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
B53cb06:{NFSU2_TR(0x53cb06);
if(r1(R+518)){{goto L53cb4a;}}
}
B53cb08:L53cb08:{c.instructions+=18;NFSU2_TR(0x53cb08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xfe1e723eull));
s4(u32(r4(U+0)),r4(U+4));
}
B53cb0f:{NFSU2_TR(0x53cb0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb12:{NFSU2_TR(0x53cb12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb15:{NFSU2_TR(0x53cb15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb18:{NFSU2_TR(0x53cb18);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cb1b:{NFSU2_TR(0x53cb1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53cb1f:{NFSU2_TR(0x53cb1f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cb22:{NFSU2_TR(0x53cb22);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cb25:{NFSU2_TR(0x53cb25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x18d5a136ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53cb2c:{NFSU2_TR(0x53cb2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb2f:{NFSU2_TR(0x53cb2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb32:{NFSU2_TR(0x53cb32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb35:{NFSU2_TR(0x53cb35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb38:{NFSU2_TR(0x53cb38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb3b:{NFSU2_TR(0x53cb3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53cb3f:{NFSU2_TR(0x53cb3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cb42:{NFSU2_TR(0x53cb42);
u8 U[4];
w4(U+0,u32(0x79b738ull));
s4(u32(r4(R+0)),r4(U+0));
}
B53cb48:{NFSU2_TR(0x53cb48);
{goto L53cb4c;}
}
B53cb4a:L53cb4a:{c.instructions+=1;NFSU2_TR(0x53cb4a);
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
B53cb4c:L53cb4c:{c.instructions+=4;NFSU2_TR(0x53cb4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53cb4e:{NFSU2_TR(0x53cb4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cb4f:{NFSU2_TR(0x53cb4f);
__builtin_memmove((R+4),(R+24),4);
}
B53cb51:{NFSU2_TR(0x53cb51);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cb54ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53cb54:L53cb54:{c.instructions+=2;NFSU2_TR(0x53cb54);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cb56:{NFSU2_TR(0x53cb56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cb5bull));
TAIL_STATIC(0x575620u,575);
}
B53cb5b:L53cb5b:{c.instructions+=3;NFSU2_TR(0x53cb5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53cb5e:{NFSU2_TR(0x53cb5e);
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
B53cb60:{NFSU2_TR(0x53cb60);
if(r1(R+518)){{goto L53cba4;}}
}
B53cb62:L53cb62:{c.instructions+=18;NFSU2_TR(0x53cb62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x520de4e3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53cb69:{NFSU2_TR(0x53cb69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb6c:{NFSU2_TR(0x53cb6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb6f:{NFSU2_TR(0x53cb6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb72:{NFSU2_TR(0x53cb72);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cb75:{NFSU2_TR(0x53cb75);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53cb79:{NFSU2_TR(0x53cb79);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cb7c:{NFSU2_TR(0x53cb7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cb7f:{NFSU2_TR(0x53cb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xb34993c9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53cb86:{NFSU2_TR(0x53cb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb89:{NFSU2_TR(0x53cb89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb8c:{NFSU2_TR(0x53cb8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb8f:{NFSU2_TR(0x53cb8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb92:{NFSU2_TR(0x53cb92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cb95:{NFSU2_TR(0x53cb95);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53cb99:{NFSU2_TR(0x53cb99);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cb9c:{NFSU2_TR(0x53cb9c);
u8 U[4];
w4(U+0,u32(0x79b740ull));
s4(u32(r4(R+0)),r4(U+0));
}
B53cba2:{NFSU2_TR(0x53cba2);
{goto L53cba6;}
}
B53cba4:L53cba4:{c.instructions+=1;NFSU2_TR(0x53cba4);
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
B53cba6:L53cba6:{c.instructions+=4;NFSU2_TR(0x53cba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53cba8:{NFSU2_TR(0x53cba8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cba9:{NFSU2_TR(0x53cba9);
__builtin_memmove((R+4),(R+24),4);
}
B53cbab:{NFSU2_TR(0x53cbab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cbaeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53cbae:L53cbae:{c.instructions+=2;NFSU2_TR(0x53cbae);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cbb0:{NFSU2_TR(0x53cbb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cbb5ull));
TAIL_STATIC(0x575620u,575);
}
B53cbb5:L53cbb5:{c.instructions+=3;NFSU2_TR(0x53cbb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53cbb8:{NFSU2_TR(0x53cbb8);
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
B53cbba:{NFSU2_TR(0x53cbba);
if(r1(R+518)){{goto L53cbff;}}
}
B53cbbc:L53cbbc:{c.instructions+=18;NFSU2_TR(0x53cbbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x4c9e34e6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53cbc3:{NFSU2_TR(0x53cbc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cbc6:{NFSU2_TR(0x53cbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cbc9:{NFSU2_TR(0x53cbc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cbcc:{NFSU2_TR(0x53cbcc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cbcf:{NFSU2_TR(0x53cbcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53cbd3:{NFSU2_TR(0x53cbd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cbd6:{NFSU2_TR(0x53cbd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53cbd9:{NFSU2_TR(0x53cbd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xde5cdfb2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53cbe0:{NFSU2_TR(0x53cbe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cbe3:{NFSU2_TR(0x53cbe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cbe6:{NFSU2_TR(0x53cbe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cbe9:{NFSU2_TR(0x53cbe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cbec:{NFSU2_TR(0x53cbec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cbef:{NFSU2_TR(0x53cbef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53cbf3:{NFSU2_TR(0x53cbf3);
u8 U[4];
w4(U+0,u32(0x79b760ull));
s4(u32(r4(R+0)),r4(U+0));
}
B53cbf9:{NFSU2_TR(0x53cbf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53cbfd:{NFSU2_TR(0x53cbfd);
{goto L53cc01;}
}
B53cbff:L53cbff:{c.instructions+=1;NFSU2_TR(0x53cbff);
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
B53cc01:L53cc01:{c.instructions+=4;NFSU2_TR(0x53cc01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53cc03:{NFSU2_TR(0x53cc03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cc04:{NFSU2_TR(0x53cc04);
__builtin_memmove((R+4),(R+24),4);
}
B53cc06:{NFSU2_TR(0x53cc06);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cc09ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53cc09:L53cc09:{c.instructions+=6;NFSU2_TR(0x53cc09);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B53cc0e:{NFSU2_TR(0x53cc0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53cc11:{NFSU2_TR(0x53cc11);
__builtin_memmove(gp(0x83a7a0),(R+4),4);
}
B53cc17:{NFSU2_TR(0x53cc17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53cc1a:{NFSU2_TR(0x53cc1a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53cc1c:{NFSU2_TR(0x53cc1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53cc25;}}
}
B53cc1e:L53cc1e:{c.instructions+=2;NFSU2_TR(0x53cc1e);
w4(R+28,u32(0x1ull));
}
B53cc23:{NFSU2_TR(0x53cc23);
{goto L53cc4b;}
}
B53cc25:L53cc25:{c.instructions+=2;NFSU2_TR(0x53cc25);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53cc28:{NFSU2_TR(0x53cc28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53cc31;}}
}
B53cc2a:L53cc2a:{c.instructions+=2;NFSU2_TR(0x53cc2a);
w4(R+28,u32(0x2ull));
}
B53cc2f:{NFSU2_TR(0x53cc2f);
{goto L53cc4b;}
}
B53cc31:L53cc31:{c.instructions+=2;NFSU2_TR(0x53cc31);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53cc34:{NFSU2_TR(0x53cc34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53cc3d;}}
}
B53cc36:L53cc36:{c.instructions+=2;NFSU2_TR(0x53cc36);
w4(R+28,u32(0x4ull));
}
B53cc3b:{NFSU2_TR(0x53cc3b);
{goto L53cc4b;}
}
B53cc3d:L53cc3d:{c.instructions+=6;NFSU2_TR(0x53cc3d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B53cc3f:{NFSU2_TR(0x53cc3f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53cc42:{NFSU2_TR(0x53cc42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B53cc45:{NFSU2_TR(0x53cc45);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B53cc46:{NFSU2_TR(0x53cc46);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8ull))));
}
B53cc49:{NFSU2_TR(0x53cc49);
__builtin_memmove((R+28),(R+8),4);
}
B53cc4b:L53cc4b:{c.instructions+=3;NFSU2_TR(0x53cc4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53cc4e:{NFSU2_TR(0x53cc4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cc4f:{NFSU2_TR(0x53cc4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cc54ull));
TAIL_STATIC(0x52cef0u,52c);
}
B53cc54:L53cc54:{c.instructions+=3;NFSU2_TR(0x53cc54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53cc57:{NFSU2_TR(0x53cc57);
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
B53cc59:{NFSU2_TR(0x53cc59);
if(r1(R+518)){{goto L53cc67;}}
}
B53cc5b:L53cc5b:{c.instructions+=4;NFSU2_TR(0x53cc5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cc5e:{NFSU2_TR(0x53cc5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cc61:{NFSU2_TR(0x53cc61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cc64:{NFSU2_TR(0x53cc64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cc67:L53cc67:{c.instructions+=4;NFSU2_TR(0x53cc67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53cc68:{NFSU2_TR(0x53cc68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53cc69:{NFSU2_TR(0x53cc69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53cc6a:{NFSU2_TR(0x53cc6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53cc70:L53cc70:{c.instructions+=5;NFSU2_TR(0x53cc70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cc71:{NFSU2_TR(0x53cc71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cc72:{NFSU2_TR(0x53cc72);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cc77:{NFSU2_TR(0x53cc77);
__builtin_memmove((R+24),(R+4),4);
}
B53cc79:{NFSU2_TR(0x53cc79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cc7eull));
TAIL_STATIC(0x52cf60u,52c);
}
B53cc7e:L53cc7e:{c.instructions+=4;NFSU2_TR(0x53cc7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53cc81:{NFSU2_TR(0x53cc81);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53cc83:{NFSU2_TR(0x53cc83);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53cc85:{NFSU2_TR(0x53cc85);
if(r1(R+518)){{goto L53cc9b;}}
}
B53cc87:L53cc87:{c.instructions+=3;NFSU2_TR(0x53cc87);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53cc8d:{NFSU2_TR(0x53cc8d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53cc8f:{NFSU2_TR(0x53cc8f);
if(r1(R+518)){{goto L53cc9b;}}
}
B53cc91:L53cc91:{c.instructions+=2;NFSU2_TR(0x53cc91);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cc96:{NFSU2_TR(0x53cc96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cc9bull));
TAIL_STATIC(0x5376f0u,537);
}
B53cc9b:L53cc9b:{c.instructions+=4;NFSU2_TR(0x53cc9b);
__builtin_memmove((R+4),gp(0x83a640),4);
}
B53cca1:{NFSU2_TR(0x53cca1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53cca3:{NFSU2_TR(0x53cca3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B53cca5:{NFSU2_TR(0x53cca5);
if(r1(R+518)){{goto L53ccbb;}}
}
B53cca7:L53cca7:{c.instructions+=2;NFSU2_TR(0x53cca7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B53cca8:{NFSU2_TR(0x53cca8);
if(r1(R+518)){{goto L53ccb4;}}
}
B53ccaa:L53ccaa:{c.instructions+=2;NFSU2_TR(0x53ccaa);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B53ccab:{NFSU2_TR(0x53ccab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53ccc7;}}
}
B53ccad:L53ccad:{c.instructions+=2;NFSU2_TR(0x53ccad);
w4(R+0,u32(0x79049cull));
}
B53ccb2:{NFSU2_TR(0x53ccb2);
{goto L53ccc7;}
}
B53ccb4:L53ccb4:{c.instructions+=2;NFSU2_TR(0x53ccb4);
w4(R+0,u32(0x790478ull));
}
B53ccb9:{NFSU2_TR(0x53ccb9);
{goto L53ccc7;}
}
B53ccbb:L53ccbb:{c.instructions+=2;NFSU2_TR(0x53ccbb);
w4(R+0,u32(0x78f5a4ull));
}
B53ccc0:{NFSU2_TR(0x53ccc0);
s1(0x8635b9,u8(0x1ull));
}
B53ccc7:L53ccc7:{c.instructions+=4;NFSU2_TR(0x53ccc7);
__builtin_memmove(gp(0x8384c8),(R+0),4);
}
B53cccc:{NFSU2_TR(0x53cccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53cccf:{NFSU2_TR(0x53cccf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ccd0:{NFSU2_TR(0x53ccd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ccd5ull));
TAIL_STATIC(0x505450u,505);
}
B53ccd5:L53ccd5:{c.instructions+=2;NFSU2_TR(0x53ccd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ccd6:{NFSU2_TR(0x53ccd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ccdbull));
TAIL_STATIC(0x50b840u,50b);
}
B53ccdb:L53ccdb:{c.instructions+=3;NFSU2_TR(0x53ccdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53ccde:{NFSU2_TR(0x53ccde);
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
B53cce0:{NFSU2_TR(0x53cce0);
if(r1(R+518)){{goto L53cce5;}}
}
B53cce2:L53cce2:{c.instructions+=1;NFSU2_TR(0x53cce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cce5:L53cce5:{c.instructions+=6;NFSU2_TR(0x53cce5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cce6:{NFSU2_TR(0x53cce6);
__builtin_memmove(gp(0x839c40),(R+12),4);
}
B53ccec:{NFSU2_TR(0x53ccec);
__builtin_memmove(gp(0x83a64c),(R+12),4);
}
B53ccf2:{NFSU2_TR(0x53ccf2);
__builtin_memmove(gp(0x83a540),(R+12),4);
}
B53ccf8:{NFSU2_TR(0x53ccf8);
s4(0x83a63c,u32(0xffull));
}
B53cd02:{NFSU2_TR(0x53cd02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cd07ull));
TAIL_STATIC(0x5b7ed0u,5b7);
}
B53cd07:L53cd07:{c.instructions+=7;NFSU2_TR(0x53cd07);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B53cd0d:{NFSU2_TR(0x53cd0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53cd10:{NFSU2_TR(0x53cd10);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cd12:{NFSU2_TR(0x53cd12);
__builtin_memmove(gp(0x83a7a4),(R+12),1);
}
B53cd18:{NFSU2_TR(0x53cd18);
__builtin_memmove(gp(0x83a655),(R+12),1);
}
B53cd1e:{NFSU2_TR(0x53cd1e);
__builtin_memmove(gp(0x83a654),(R+12),1);
}
B53cd24:{NFSU2_TR(0x53cd24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cd29ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B53cd29:L53cd29:{c.instructions+=3;NFSU2_TR(0x53cd29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53cd2a:{NFSU2_TR(0x53cd2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53cd2b:{NFSU2_TR(0x53cd2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53cd30:L53cd30:{c.instructions+=6;NFSU2_TR(0x53cd30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cd31:{NFSU2_TR(0x53cd31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cd32:{NFSU2_TR(0x53cd32);
__builtin_memmove((R+24),(R+4),4);
}
B53cd34:{NFSU2_TR(0x53cd34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53cd37:{NFSU2_TR(0x53cd37);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53cd3a:{NFSU2_TR(0x53cd3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cd3dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53cd3d:L53cd3d:{c.instructions+=3;NFSU2_TR(0x53cd3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53cd40:{NFSU2_TR(0x53cd40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cd41:{NFSU2_TR(0x53cd41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cd46ull));
TAIL_STATIC(0x50fe90u,50f);
}
B53cd46:L53cd46:{c.instructions+=6;NFSU2_TR(0x53cd46);
__builtin_memmove((R+8),gp(0x83a540),4);
}
B53cd4c:{NFSU2_TR(0x53cd4c);
__builtin_memmove((R+12),(R+0),4);
}
B53cd4e:{NFSU2_TR(0x53cd4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53cd51:{NFSU2_TR(0x53cd51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cd52:{NFSU2_TR(0x53cd52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cd53:{NFSU2_TR(0x53cd53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cd58ull));
TAIL_STATIC(0x50ffb0u,50f);
}
B53cd58:L53cd58:{c.instructions+=3;NFSU2_TR(0x53cd58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53cd5b:{NFSU2_TR(0x53cd5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cd5d:{NFSU2_TR(0x53cd5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53cd6e;}}
}
B53cd5f:L53cd5f:{c.instructions+=4;NFSU2_TR(0x53cd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53cd62:{NFSU2_TR(0x53cd62);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cd63:{NFSU2_TR(0x53cd63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cd64:{NFSU2_TR(0x53cd64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cd69ull));
TAIL_STATIC(0x50c900u,50c);
}
B53cd69:L53cd69:{c.instructions+=2;NFSU2_TR(0x53cd69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53cd6c:{NFSU2_TR(0x53cd6c);
{goto L53cdb1;}
}
B53cd6e:L53cd6e:{c.instructions+=3;NFSU2_TR(0x53cd6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cd6f:{NFSU2_TR(0x53cd6f);
__builtin_memmove((R+8),(R+0),4);
}
B53cd71:{NFSU2_TR(0x53cd71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cd76ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53cd76:L53cd76:{c.instructions+=3;NFSU2_TR(0x53cd76);
__builtin_memmove((R+28),(R+0),4);
}
B53cd78:{NFSU2_TR(0x53cd78);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cd7a:{NFSU2_TR(0x53cd7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53cd88;}}
}
B53cd7c:L53cd7c:{c.instructions+=2;NFSU2_TR(0x53cd7c);
w4(R+8,u32(0xc01a6f63ull));
}
B53cd81:{NFSU2_TR(0x53cd81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cd86ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53cd86:L53cd86:{c.instructions+=1;NFSU2_TR(0x53cd86);
__builtin_memmove((R+28),(R+0),4);
}
B53cd88:L53cd88:{c.instructions+=2;NFSU2_TR(0x53cd88);
__builtin_memmove((R+8),(R+12),4);
}
B53cd8a:{NFSU2_TR(0x53cd8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cd8full));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53cd8f:L53cd8f:{c.instructions+=2;NFSU2_TR(0x53cd8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cd91:{NFSU2_TR(0x53cd91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53cd9d;}}
}
B53cd93:L53cd93:{c.instructions+=2;NFSU2_TR(0x53cd93);
w4(R+8,u32(0xc01a6f63ull));
}
B53cd98:{NFSU2_TR(0x53cd98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cd9dull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53cd9d:L53cd9d:{c.instructions+=6;NFSU2_TR(0x53cd9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53cda0:{NFSU2_TR(0x53cda0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cda1:{NFSU2_TR(0x53cda1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cda2:{NFSU2_TR(0x53cda2);
u8 U[4];
w4(U+0,u32(0x79beb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cda7:{NFSU2_TR(0x53cda7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cda8:{NFSU2_TR(0x53cda8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cdadull));
TAIL_STATIC(0x537be0u,537);
}
B53cdad:L53cdad:{c.instructions+=2;NFSU2_TR(0x53cdad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53cdb0:{NFSU2_TR(0x53cdb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53cdb1:L53cdb1:{c.instructions+=3;NFSU2_TR(0x53cdb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53cdb4:{NFSU2_TR(0x53cdb4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53cdb7:{NFSU2_TR(0x53cdb7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53cdd8;}}
}
B53cdb9:L53cdb9:{c.instructions+=2;NFSU2_TR(0x53cdb9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53cdbc:{NFSU2_TR(0x53cdbc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L53cdd8;}}
}
B53cdbe:L53cdbe:{c.instructions+=7;NFSU2_TR(0x53cdbe);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53cdc4:{NFSU2_TR(0x53cdc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53cdca:{NFSU2_TR(0x53cdca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B53cdcd:{NFSU2_TR(0x53cdcd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B53cdd0:{NFSU2_TR(0x53cdd0);
u8 U[4];
w4(U+0,u32(0x795b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cdd5:{NFSU2_TR(0x53cdd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cdd6:{NFSU2_TR(0x53cdd6);
{goto L53ce05;}
}
B53cdd8:L53cdd8:{c.instructions+=3;NFSU2_TR(0x53cdd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53cddb:{NFSU2_TR(0x53cddb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cddd:{NFSU2_TR(0x53cddd);
if(r1(R+518)){{goto L53cded;}}
}
B53cddf:L53cddf:{c.instructions+=3;NFSU2_TR(0x53cddf);
u8 U[4];
w4(U+0,u32(0xcbbcb1c5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cde4:{NFSU2_TR(0x53cde4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cde5:{NFSU2_TR(0x53cde5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cdeaull));
TAIL_STATIC(0x50c900u,50c);
}
B53cdea:L53cdea:{c.instructions+=1;NFSU2_TR(0x53cdea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53cded:L53cded:{c.instructions+=6;NFSU2_TR(0x53cded);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53cdf3:{NFSU2_TR(0x53cdf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53cdf9:{NFSU2_TR(0x53cdf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B53cdfc:{NFSU2_TR(0x53cdfc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B53cdff:{NFSU2_TR(0x53cdff);
u8 U[4];
w4(U+0,u32(0x795b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce04:{NFSU2_TR(0x53ce04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce05:L53ce05:{c.instructions+=1;NFSU2_TR(0x53ce05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ce0aull));
TAIL_STATIC(0x537be0u,537);
}
B53ce0a:L53ce0a:{c.instructions+=4;NFSU2_TR(0x53ce0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ce0d:{NFSU2_TR(0x53ce0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53ce10:{NFSU2_TR(0x53ce10);
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
B53ce12:{NFSU2_TR(0x53ce12);
if(r1(R+518)){{goto L53ce35;}}
}
B53ce14:L53ce14:{c.instructions+=3;NFSU2_TR(0x53ce14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ce17:{NFSU2_TR(0x53ce17);
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
B53ce19:{NFSU2_TR(0x53ce19);
if(r1(R+518)){{goto L53ce35;}}
}
B53ce1b:L53ce1b:{c.instructions+=4;NFSU2_TR(0x53ce1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53ce1e:{NFSU2_TR(0x53ce1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce1f:{NFSU2_TR(0x53ce1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce20:{NFSU2_TR(0x53ce20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ce25ull));
TAIL_STATIC(0x50c900u,50c);
}
B53ce25:L53ce25:{c.instructions+=5;NFSU2_TR(0x53ce25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ce28:{NFSU2_TR(0x53ce28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ce2b:{NFSU2_TR(0x53ce2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce2c:{NFSU2_TR(0x53ce2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce2d:{NFSU2_TR(0x53ce2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ce32ull));
TAIL_STATIC(0x50c900u,50c);
}
B53ce32:L53ce32:{c.instructions+=1;NFSU2_TR(0x53ce32);
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
B53ce35:L53ce35:{c.instructions+=3;NFSU2_TR(0x53ce35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ce36:{NFSU2_TR(0x53ce36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53ce37:{NFSU2_TR(0x53ce37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53ce40:L53ce40:{c.instructions+=8;NFSU2_TR(0x53ce40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce41:{NFSU2_TR(0x53ce41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce42:{NFSU2_TR(0x53ce42);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53ce46:{NFSU2_TR(0x53ce46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ce48:{NFSU2_TR(0x53ce48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce49:{NFSU2_TR(0x53ce49);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ce4d:{NFSU2_TR(0x53ce4d);
__builtin_memmove((R+12),(R+4),4);
}
B53ce4f:{NFSU2_TR(0x53ce4f);
if(r1(R+518)){{goto L53ce6a;}}
}
B53ce51:L53ce51:{c.instructions+=2;NFSU2_TR(0x53ce51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce52:{NFSU2_TR(0x53ce52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ce57ull));
TAIL_STATIC(0x52cef0u,52c);
}
B53ce57:L53ce57:{c.instructions+=3;NFSU2_TR(0x53ce57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53ce5a:{NFSU2_TR(0x53ce5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ce5c:{NFSU2_TR(0x53ce5c);
if(r1(R+518)){{goto L53ce6a;}}
}
B53ce5e:L53ce5e:{c.instructions+=3;NFSU2_TR(0x53ce5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce5f:{NFSU2_TR(0x53ce5f);
__builtin_memmove((R+4),(R+0),4);
}
B53ce61:{NFSU2_TR(0x53ce61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ce66ull));
TAIL_STATIC(0x517f80u,517);
}
B53ce66:L53ce66:{c.instructions+=2;NFSU2_TR(0x53ce66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ce68:{NFSU2_TR(0x53ce68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53ce81;}}
}
B53ce6a:L53ce6a:{c.instructions+=3;NFSU2_TR(0x53ce6a);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53ce6f:{NFSU2_TR(0x53ce6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ce71:{NFSU2_TR(0x53ce71);
if(r1(R+518)){{goto L53ce87;}}
}
B53ce73:L53ce73:{c.instructions+=4;NFSU2_TR(0x53ce73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ce76:{NFSU2_TR(0x53ce76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce77:{NFSU2_TR(0x53ce77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ce78:{NFSU2_TR(0x53ce78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ce7dull));
TAIL_STATIC(0x52c570u,52c);
}
B53ce7d:L53ce7d:{c.instructions+=2;NFSU2_TR(0x53ce7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ce7f:{NFSU2_TR(0x53ce7f);
if(r1(R+518)){{goto L53ce87;}}
}
B53ce81:L53ce81:{c.instructions+=2;NFSU2_TR(0x53ce81);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B53ce85:{NFSU2_TR(0x53ce85);
if(r1(R+518)){{goto L53ce89;}}
}
B53ce87:L53ce87:{c.instructions+=1;NFSU2_TR(0x53ce87);
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
B53ce89:L53ce89:{c.instructions+=5;NFSU2_TR(0x53ce89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53ce8a:{NFSU2_TR(0x53ce8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ce8b:{NFSU2_TR(0x53ce8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ce8e:{NFSU2_TR(0x53ce8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53ce8f:{NFSU2_TR(0x53ce8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53cea0:L53cea0:{c.instructions+=8;NFSU2_TR(0x53cea0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cea1:{NFSU2_TR(0x53cea1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cea2:{NFSU2_TR(0x53cea2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53cea6:{NFSU2_TR(0x53cea6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cea8:{NFSU2_TR(0x53cea8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cea9:{NFSU2_TR(0x53cea9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53cead:{NFSU2_TR(0x53cead);
__builtin_memmove((R+12),(R+4),4);
}
B53ceaf:{NFSU2_TR(0x53ceaf);
if(r1(R+518)){{goto L53ceca;}}
}
B53ceb1:L53ceb1:{c.instructions+=2;NFSU2_TR(0x53ceb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ceb2:{NFSU2_TR(0x53ceb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ceb7ull));
TAIL_STATIC(0x52cef0u,52c);
}
B53ceb7:L53ceb7:{c.instructions+=3;NFSU2_TR(0x53ceb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53ceba:{NFSU2_TR(0x53ceba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cebc:{NFSU2_TR(0x53cebc);
if(r1(R+518)){{goto L53ceca;}}
}
B53cebe:L53cebe:{c.instructions+=3;NFSU2_TR(0x53cebe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cebf:{NFSU2_TR(0x53cebf);
__builtin_memmove((R+4),(R+0),4);
}
B53cec1:{NFSU2_TR(0x53cec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cec6ull));
TAIL_STATIC(0x517f80u,517);
}
B53cec6:L53cec6:{c.instructions+=2;NFSU2_TR(0x53cec6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cec8:{NFSU2_TR(0x53cec8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53cee1;}}
}
B53ceca:L53ceca:{c.instructions+=3;NFSU2_TR(0x53ceca);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53cecf:{NFSU2_TR(0x53cecf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ced1:{NFSU2_TR(0x53ced1);
if(r1(R+518)){{goto L53cee7;}}
}
B53ced3:L53ced3:{c.instructions+=4;NFSU2_TR(0x53ced3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ced6:{NFSU2_TR(0x53ced6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ced7:{NFSU2_TR(0x53ced7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ced8:{NFSU2_TR(0x53ced8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ceddull));
TAIL_STATIC(0x52c570u,52c);
}
B53cedd:L53cedd:{c.instructions+=2;NFSU2_TR(0x53cedd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cedf:{NFSU2_TR(0x53cedf);
if(r1(R+518)){{goto L53cee7;}}
}
B53cee1:L53cee1:{c.instructions+=2;NFSU2_TR(0x53cee1);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B53cee5:{NFSU2_TR(0x53cee5);
if(r1(R+518)){{goto L53cee9;}}
}
B53cee7:L53cee7:{c.instructions+=1;NFSU2_TR(0x53cee7);
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
B53cee9:L53cee9:{c.instructions+=5;NFSU2_TR(0x53cee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53ceea:{NFSU2_TR(0x53ceea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ceeb:{NFSU2_TR(0x53ceeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ceee:{NFSU2_TR(0x53ceee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53ceef:{NFSU2_TR(0x53ceef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53cf00:L53cf00:{c.instructions+=8;NFSU2_TR(0x53cf00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf01:{NFSU2_TR(0x53cf01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf02:{NFSU2_TR(0x53cf02);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53cf06:{NFSU2_TR(0x53cf06);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cf08:{NFSU2_TR(0x53cf08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf09:{NFSU2_TR(0x53cf09);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53cf0d:{NFSU2_TR(0x53cf0d);
__builtin_memmove((R+12),(R+4),4);
}
B53cf0f:{NFSU2_TR(0x53cf0f);
if(r1(R+518)){{goto L53cf2a;}}
}
B53cf11:L53cf11:{c.instructions+=2;NFSU2_TR(0x53cf11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf12:{NFSU2_TR(0x53cf12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cf17ull));
TAIL_STATIC(0x52cef0u,52c);
}
B53cf17:L53cf17:{c.instructions+=3;NFSU2_TR(0x53cf17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53cf1a:{NFSU2_TR(0x53cf1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cf1c:{NFSU2_TR(0x53cf1c);
if(r1(R+518)){{goto L53cf2a;}}
}
B53cf1e:L53cf1e:{c.instructions+=3;NFSU2_TR(0x53cf1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf1f:{NFSU2_TR(0x53cf1f);
__builtin_memmove((R+4),(R+0),4);
}
B53cf21:{NFSU2_TR(0x53cf21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cf26ull));
TAIL_STATIC(0x517f80u,517);
}
B53cf26:L53cf26:{c.instructions+=2;NFSU2_TR(0x53cf26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cf28:{NFSU2_TR(0x53cf28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53cf41;}}
}
B53cf2a:L53cf2a:{c.instructions+=3;NFSU2_TR(0x53cf2a);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53cf2f:{NFSU2_TR(0x53cf2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cf31:{NFSU2_TR(0x53cf31);
if(r1(R+518)){{goto L53cf47;}}
}
B53cf33:L53cf33:{c.instructions+=4;NFSU2_TR(0x53cf33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53cf36:{NFSU2_TR(0x53cf36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf37:{NFSU2_TR(0x53cf37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf38:{NFSU2_TR(0x53cf38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cf3dull));
TAIL_STATIC(0x52c570u,52c);
}
B53cf3d:L53cf3d:{c.instructions+=2;NFSU2_TR(0x53cf3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cf3f:{NFSU2_TR(0x53cf3f);
if(r1(R+518)){{goto L53cf47;}}
}
B53cf41:L53cf41:{c.instructions+=2;NFSU2_TR(0x53cf41);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B53cf45:{NFSU2_TR(0x53cf45);
if(r1(R+518)){{goto L53cf49;}}
}
B53cf47:L53cf47:{c.instructions+=1;NFSU2_TR(0x53cf47);
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
B53cf49:L53cf49:{c.instructions+=5;NFSU2_TR(0x53cf49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53cf4a:{NFSU2_TR(0x53cf4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53cf4b:{NFSU2_TR(0x53cf4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cf4e:{NFSU2_TR(0x53cf4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53cf4f:{NFSU2_TR(0x53cf4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53cf60:L53cf60:{c.instructions+=8;NFSU2_TR(0x53cf60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf61:{NFSU2_TR(0x53cf61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf62:{NFSU2_TR(0x53cf62);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53cf66:{NFSU2_TR(0x53cf66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cf68:{NFSU2_TR(0x53cf68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf69:{NFSU2_TR(0x53cf69);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53cf6d:{NFSU2_TR(0x53cf6d);
__builtin_memmove((R+12),(R+4),4);
}
B53cf6f:{NFSU2_TR(0x53cf6f);
if(r1(R+518)){{goto L53cf8a;}}
}
B53cf71:L53cf71:{c.instructions+=2;NFSU2_TR(0x53cf71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf72:{NFSU2_TR(0x53cf72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cf77ull));
TAIL_STATIC(0x52cef0u,52c);
}
B53cf77:L53cf77:{c.instructions+=3;NFSU2_TR(0x53cf77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53cf7a:{NFSU2_TR(0x53cf7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cf7c:{NFSU2_TR(0x53cf7c);
if(r1(R+518)){{goto L53cf8a;}}
}
B53cf7e:L53cf7e:{c.instructions+=3;NFSU2_TR(0x53cf7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf7f:{NFSU2_TR(0x53cf7f);
__builtin_memmove((R+4),(R+0),4);
}
B53cf81:{NFSU2_TR(0x53cf81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cf86ull));
TAIL_STATIC(0x517f80u,517);
}
B53cf86:L53cf86:{c.instructions+=2;NFSU2_TR(0x53cf86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cf88:{NFSU2_TR(0x53cf88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53cfa1;}}
}
B53cf8a:L53cf8a:{c.instructions+=3;NFSU2_TR(0x53cf8a);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53cf8f:{NFSU2_TR(0x53cf8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cf91:{NFSU2_TR(0x53cf91);
if(r1(R+518)){{goto L53cfa7;}}
}
B53cf93:L53cf93:{c.instructions+=4;NFSU2_TR(0x53cf93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53cf96:{NFSU2_TR(0x53cf96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf97:{NFSU2_TR(0x53cf97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53cf98:{NFSU2_TR(0x53cf98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53cf9dull));
TAIL_STATIC(0x52c570u,52c);
}
B53cf9d:L53cf9d:{c.instructions+=2;NFSU2_TR(0x53cf9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53cf9f:{NFSU2_TR(0x53cf9f);
if(r1(R+518)){{goto L53cfa7;}}
}
B53cfa1:L53cfa1:{c.instructions+=2;NFSU2_TR(0x53cfa1);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B53cfa5:{NFSU2_TR(0x53cfa5);
if(r1(R+518)){{goto L53cfa9;}}
}
B53cfa7:L53cfa7:{c.instructions+=1;NFSU2_TR(0x53cfa7);
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
B53cfa9:L53cfa9:{c.instructions+=5;NFSU2_TR(0x53cfa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53cfaa:{NFSU2_TR(0x53cfaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53cfab:{NFSU2_TR(0x53cfab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cfae:{NFSU2_TR(0x53cfae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53cfaf:{NFSU2_TR(0x53cfaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53cfc0:L53cfc0:{c.instructions+=17;NFSU2_TR(0x53cfc0);
__builtin_memmove((R+0),(R+4),4);
}
B53cfc2:{NFSU2_TR(0x53cfc2);
__builtin_memmove((R+4),gp(0x799388),4);
}
B53cfc8:{NFSU2_TR(0x53cfc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53cfcf:{NFSU2_TR(0x53cfcf);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53cfd1:{NFSU2_TR(0x53cfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cfd4:{NFSU2_TR(0x53cfd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53cfdb:{NFSU2_TR(0x53cfdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cfde:{NFSU2_TR(0x53cfde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cfe1:{NFSU2_TR(0x53cfe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cfe4:{NFSU2_TR(0x53cfe4);
__builtin_memmove((R+4),gp(0x79938c),4);
}
B53cfea:{NFSU2_TR(0x53cfea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cfed:{NFSU2_TR(0x53cfed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53cff0:{NFSU2_TR(0x53cff0);
u8 U[4];
w4(U+0,u32(0x79beb8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B53cff6:{NFSU2_TR(0x53cff6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53cff8:{NFSU2_TR(0x53cff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cffb:{NFSU2_TR(0x53cffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53cffe:{NFSU2_TR(0x53cffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x53d005u,53d);
}
XIT:NFSU2_TR_EXIT(0x53c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
