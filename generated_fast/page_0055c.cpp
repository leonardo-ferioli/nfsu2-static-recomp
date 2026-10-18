#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_547(u8* __restrict R,Cpu& c);
u32 body_548(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_559(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x55c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x55c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_55c(u8* __restrict R,Cpu& c);
u32 page_55c(Cpu& c){return body_55c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_55c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x55c003:goto L55c003;
case 0x55c005:c.instructions+=1;goto B55c005;
case 0x55c00a:goto L55c00a;
case 0x55c00b:c.instructions+=1;goto B55c00b;
case 0x55c010:goto L55c010;
case 0x55c012:c.instructions+=12;goto B55c012;
case 0x55c017:c.instructions+=11;goto B55c017;
case 0x55c01d:c.instructions+=10;goto B55c01d;
case 0x55c01e:c.instructions+=9;goto B55c01e;
case 0x55c025:c.instructions+=8;goto B55c025;
case 0x55c026:c.instructions+=7;goto B55c026;
case 0x55c02a:c.instructions+=6;goto B55c02a;
case 0x55c02b:c.instructions+=5;goto B55c02b;
case 0x55c02c:c.instructions+=4;goto B55c02c;
case 0x55c02e:c.instructions+=3;goto B55c02e;
case 0x55c02f:c.instructions+=2;goto B55c02f;
case 0x55c033:c.instructions+=1;goto B55c033;
case 0x55c038:goto L55c038;
case 0x55c03a:c.instructions+=12;goto B55c03a;
case 0x55c040:c.instructions+=11;goto B55c040;
case 0x55c046:c.instructions+=10;goto B55c046;
case 0x55c04c:c.instructions+=9;goto B55c04c;
case 0x55c052:c.instructions+=8;goto B55c052;
case 0x55c058:c.instructions+=7;goto B55c058;
case 0x55c05e:c.instructions+=6;goto B55c05e;
case 0x55c064:c.instructions+=5;goto B55c064;
case 0x55c06a:c.instructions+=4;goto B55c06a;
case 0x55c070:c.instructions+=3;goto B55c070;
case 0x55c074:c.instructions+=2;goto B55c074;
case 0x55c07a:c.instructions+=1;goto B55c07a;
case 0x55c07f:goto L55c07f;
case 0x55c085:c.instructions+=5;goto B55c085;
case 0x55c08b:c.instructions+=4;goto B55c08b;
case 0x55c08d:c.instructions+=3;goto B55c08d;
case 0x55c093:c.instructions+=2;goto B55c093;
case 0x55c097:c.instructions+=1;goto B55c097;
case 0x55c09c:goto L55c09c;
case 0x55c09e:c.instructions+=1;goto B55c09e;
case 0x55c0a3:goto L55c0a3;
case 0x55c0a6:c.instructions+=2;goto B55c0a6;
case 0x55c0a8:c.instructions+=1;goto B55c0a8;
case 0x55c0aa:goto L55c0aa;
case 0x55c0ad:c.instructions+=1;goto B55c0ad;
case 0x55c0af:goto L55c0af;
case 0x55c0b1:goto L55c0b1;
case 0x55c0b6:c.instructions+=2;goto B55c0b6;
case 0x55c0bc:c.instructions+=1;goto B55c0bc;
case 0x55c0c1:goto L55c0c1;
case 0x55c0c4:c.instructions+=2;goto B55c0c4;
case 0x55c0c6:c.instructions+=1;goto B55c0c6;
case 0x55c0c8:goto L55c0c8;
case 0x55c0ce:c.instructions+=3;goto B55c0ce;
case 0x55c0d0:c.instructions+=2;goto B55c0d0;
case 0x55c0d3:c.instructions+=1;goto B55c0d3;
case 0x55c0d5:goto L55c0d5;
case 0x55c0d7:c.instructions+=3;goto B55c0d7;
case 0x55c0d8:c.instructions+=2;goto B55c0d8;
case 0x55c0dd:c.instructions+=1;goto B55c0dd;
case 0x55c0df:goto L55c0df;
case 0x55c0e0:c.instructions+=3;goto B55c0e0;
case 0x55c0e5:c.instructions+=2;goto B55c0e5;
case 0x55c0e7:c.instructions+=1;goto B55c0e7;
case 0x55c0e9:goto L55c0e9;
case 0x55c0ea:c.instructions+=2;goto B55c0ea;
case 0x55c0ef:c.instructions+=1;goto B55c0ef;
case 0x55c0f0:goto L55c0f0;
case 0x55c0f5:goto L55c0f5;
case 0x55c0fa:c.instructions+=4;goto B55c0fa;
case 0x55c0fc:c.instructions+=3;goto B55c0fc;
case 0x55c0fe:c.instructions+=2;goto B55c0fe;
case 0x55c102:c.instructions+=1;goto B55c102;
case 0x55c107:goto L55c107;
case 0x55c10a:c.instructions+=5;goto B55c10a;
case 0x55c10d:c.instructions+=4;goto B55c10d;
case 0x55c113:c.instructions+=3;goto B55c113;
case 0x55c114:c.instructions+=2;goto B55c114;
case 0x55c115:c.instructions+=1;goto B55c115;
case 0x55c11a:goto L55c11a;
case 0x55c11e:c.instructions+=7;goto B55c11e;
case 0x55c120:c.instructions+=6;goto B55c120;
case 0x55c121:c.instructions+=5;goto B55c121;
case 0x55c127:c.instructions+=4;goto B55c127;
case 0x55c128:c.instructions+=3;goto B55c128;
case 0x55c12f:c.instructions+=2;goto B55c12f;
case 0x55c132:c.instructions+=1;goto B55c132;
case 0x55c140:goto L55c140;
case 0x55c141:c.instructions+=2;goto B55c141;
case 0x55c143:c.instructions+=1;goto B55c143;
case 0x55c148:goto L55c148;
case 0x55c14d:c.instructions+=1;goto B55c14d;
case 0x55c14f:goto L55c14f;
case 0x55c150:c.instructions+=1;goto B55c150;
case 0x55c155:goto L55c155;
case 0x55c158:goto L55c158;
case 0x55c15a:c.instructions+=2;goto B55c15a;
case 0x55c15b:c.instructions+=1;goto B55c15b;
case 0x55c160:goto L55c160;
case 0x55c166:c.instructions+=1;goto B55c166;
case 0x55c170:goto L55c170;
case 0x55c171:c.instructions+=7;goto B55c171;
case 0x55c173:c.instructions+=6;goto B55c173;
case 0x55c174:c.instructions+=5;goto B55c174;
case 0x55c175:c.instructions+=4;goto B55c175;
case 0x55c178:c.instructions+=3;goto B55c178;
case 0x55c17a:c.instructions+=2;goto B55c17a;
case 0x55c17c:c.instructions+=1;goto B55c17c;
case 0x55c17e:goto L55c17e;
case 0x55c184:c.instructions+=1;goto B55c184;
case 0x55c186:goto L55c186;
case 0x55c187:c.instructions+=5;goto B55c187;
case 0x55c18d:c.instructions+=4;goto B55c18d;
case 0x55c190:c.instructions+=3;goto B55c190;
case 0x55c191:c.instructions+=2;goto B55c191;
case 0x55c193:c.instructions+=1;goto B55c193;
case 0x55c198:goto L55c198;
case 0x55c19b:c.instructions+=4;goto B55c19b;
case 0x55c19c:c.instructions+=3;goto B55c19c;
case 0x55c19d:c.instructions+=2;goto B55c19d;
case 0x55c19f:c.instructions+=1;goto B55c19f;
case 0x55c1a4:goto L55c1a4;
case 0x55c1a7:c.instructions+=1;goto B55c1a7;
case 0x55c1a9:goto L55c1a9;
case 0x55c1ac:c.instructions+=4;goto B55c1ac;
case 0x55c1ad:c.instructions+=3;goto B55c1ad;
case 0x55c1af:c.instructions+=2;goto B55c1af;
case 0x55c1b1:c.instructions+=1;goto B55c1b1;
case 0x55c1b6:goto L55c1b6;
case 0x55c1b8:goto L55c1b8;
case 0x55c1bb:c.instructions+=1;goto B55c1bb;
case 0x55c1bd:goto L55c1bd;
case 0x55c1bf:c.instructions+=1;goto B55c1bf;
case 0x55c1c4:goto L55c1c4;
case 0x55c1c6:c.instructions+=3;goto B55c1c6;
case 0x55c1c8:c.instructions+=2;goto B55c1c8;
case 0x55c1c9:c.instructions+=1;goto B55c1c9;
case 0x55c1ce:goto L55c1ce;
case 0x55c1d1:c.instructions+=4;goto B55c1d1;
case 0x55c1d6:c.instructions+=3;goto B55c1d6;
case 0x55c1db:c.instructions+=2;goto B55c1db;
case 0x55c1e0:c.instructions+=1;goto B55c1e0;
case 0x55c1e5:goto L55c1e5;
case 0x55c1e6:goto L55c1e6;
case 0x55c1e7:c.instructions+=3;goto B55c1e7;
case 0x55c1e8:c.instructions+=2;goto B55c1e8;
case 0x55c1e9:c.instructions+=1;goto B55c1e9;
case 0x55c1f0:goto L55c1f0;
case 0x55c1f1:c.instructions+=9;goto B55c1f1;
case 0x55c1f3:c.instructions+=8;goto B55c1f3;
case 0x55c1f6:c.instructions+=7;goto B55c1f6;
case 0x55c1f7:c.instructions+=6;goto B55c1f7;
case 0x55c1fa:c.instructions+=5;goto B55c1fa;
case 0x55c1fd:c.instructions+=4;goto B55c1fd;
case 0x55c1fe:c.instructions+=3;goto B55c1fe;
case 0x55c1ff:c.instructions+=2;goto B55c1ff;
case 0x55c201:c.instructions+=1;goto B55c201;
case 0x55c206:goto L55c206;
case 0x55c208:c.instructions+=3;goto B55c208;
case 0x55c20a:c.instructions+=2;goto B55c20a;
case 0x55c20b:c.instructions+=1;goto B55c20b;
case 0x55c210:goto L55c210;
case 0x55c213:c.instructions+=4;goto B55c213;
case 0x55c218:c.instructions+=3;goto B55c218;
case 0x55c21d:c.instructions+=2;goto B55c21d;
case 0x55c222:c.instructions+=1;goto B55c222;
case 0x55c227:goto L55c227;
case 0x55c228:c.instructions+=2;goto B55c228;
case 0x55c229:c.instructions+=1;goto B55c229;
case 0x55c230:goto L55c230;
case 0x55c231:c.instructions+=7;goto B55c231;
case 0x55c233:c.instructions+=6;goto B55c233;
case 0x55c234:c.instructions+=5;goto B55c234;
case 0x55c235:c.instructions+=4;goto B55c235;
case 0x55c238:c.instructions+=3;goto B55c238;
case 0x55c23a:c.instructions+=2;goto B55c23a;
case 0x55c23d:c.instructions+=1;goto B55c23d;
case 0x55c243:goto L55c243;
case 0x55c249:c.instructions+=1;goto B55c249;
case 0x55c24f:goto L55c24f;
case 0x55c250:c.instructions+=7;goto B55c250;
case 0x55c253:c.instructions+=6;goto B55c253;
case 0x55c254:c.instructions+=5;goto B55c254;
case 0x55c25a:c.instructions+=4;goto B55c25a;
case 0x55c25b:c.instructions+=3;goto B55c25b;
case 0x55c25c:c.instructions+=2;goto B55c25c;
case 0x55c25e:c.instructions+=1;goto B55c25e;
case 0x55c263:goto L55c263;
case 0x55c266:c.instructions+=1;goto B55c266;
case 0x55c268:goto L55c268;
case 0x55c269:c.instructions+=3;goto B55c269;
case 0x55c26b:c.instructions+=2;goto B55c26b;
case 0x55c26d:c.instructions+=1;goto B55c26d;
case 0x55c272:goto L55c272;
case 0x55c277:goto L55c277;
case 0x55c27a:c.instructions+=1;goto B55c27a;
case 0x55c27c:goto L55c27c;
case 0x55c27f:c.instructions+=1;goto B55c27f;
case 0x55c284:goto L55c284;
case 0x55c289:goto L55c289;
case 0x55c28c:c.instructions+=1;goto B55c28c;
case 0x55c28e:goto L55c28e;
case 0x55c290:c.instructions+=3;goto B55c290;
case 0x55c295:c.instructions+=2;goto B55c295;
case 0x55c297:c.instructions+=1;goto B55c297;
case 0x55c29c:goto L55c29c;
case 0x55c29e:c.instructions+=1;goto B55c29e;
case 0x55c2a0:goto L55c2a0;
case 0x55c2a3:c.instructions+=1;goto B55c2a3;
case 0x55c2a8:goto L55c2a8;
case 0x55c2ab:c.instructions+=3;goto B55c2ab;
case 0x55c2ae:c.instructions+=2;goto B55c2ae;
case 0x55c2b0:c.instructions+=1;goto B55c2b0;
case 0x55c2b2:goto L55c2b2;
case 0x55c2b5:c.instructions+=1;goto B55c2b5;
case 0x55c2ba:goto L55c2ba;
case 0x55c2bc:goto L55c2bc;
case 0x55c2bf:c.instructions+=1;goto B55c2bf;
case 0x55c2c1:goto L55c2c1;
case 0x55c2c3:c.instructions+=2;goto B55c2c3;
case 0x55c2c5:c.instructions+=1;goto B55c2c5;
case 0x55c2ca:goto L55c2ca;
case 0x55c2cc:c.instructions+=1;goto B55c2cc;
case 0x55c2ce:goto L55c2ce;
case 0x55c2d1:c.instructions+=3;goto B55c2d1;
case 0x55c2d4:c.instructions+=2;goto B55c2d4;
case 0x55c2d6:c.instructions+=1;goto B55c2d6;
case 0x55c2d8:goto L55c2d8;
case 0x55c2dd:c.instructions+=1;goto B55c2dd;
case 0x55c2df:goto L55c2df;
case 0x55c2e1:goto L55c2e1;
case 0x55c2e3:c.instructions+=2;goto B55c2e3;
case 0x55c2e5:c.instructions+=1;goto B55c2e5;
case 0x55c2ea:goto L55c2ea;
case 0x55c2ec:c.instructions+=1;goto B55c2ec;
case 0x55c2ee:goto L55c2ee;
case 0x55c2f1:c.instructions+=3;goto B55c2f1;
case 0x55c2f4:c.instructions+=2;goto B55c2f4;
case 0x55c2f6:c.instructions+=1;goto B55c2f6;
case 0x55c2f8:goto L55c2f8;
case 0x55c2fa:c.instructions+=2;goto B55c2fa;
case 0x55c2fd:c.instructions+=1;goto B55c2fd;
case 0x55c2ff:goto L55c2ff;
case 0x55c304:goto L55c304;
case 0x55c306:goto L55c306;
case 0x55c309:c.instructions+=1;goto B55c309;
case 0x55c30b:goto L55c30b;
case 0x55c30d:c.instructions+=2;goto B55c30d;
case 0x55c30f:c.instructions+=1;goto B55c30f;
case 0x55c314:goto L55c314;
case 0x55c316:c.instructions+=1;goto B55c316;
case 0x55c318:goto L55c318;
case 0x55c31b:c.instructions+=3;goto B55c31b;
case 0x55c31e:c.instructions+=2;goto B55c31e;
case 0x55c320:c.instructions+=1;goto B55c320;
case 0x55c322:goto L55c322;
case 0x55c325:goto L55c325;
case 0x55c32a:goto L55c32a;
case 0x55c32d:c.instructions+=3;goto B55c32d;
case 0x55c32e:c.instructions+=2;goto B55c32e;
case 0x55c331:c.instructions+=1;goto B55c331;
case 0x55c336:goto L55c336;
case 0x55c338:c.instructions+=3;goto B55c338;
case 0x55c33a:c.instructions+=2;goto B55c33a;
case 0x55c33b:c.instructions+=1;goto B55c33b;
case 0x55c340:goto L55c340;
case 0x55c343:c.instructions+=4;goto B55c343;
case 0x55c346:c.instructions+=3;goto B55c346;
case 0x55c347:c.instructions+=2;goto B55c347;
case 0x55c34a:c.instructions+=1;goto B55c34a;
case 0x55c34f:goto L55c34f;
case 0x55c354:c.instructions+=3;goto B55c354;
case 0x55c359:c.instructions+=2;goto B55c359;
case 0x55c35e:c.instructions+=1;goto B55c35e;
case 0x55c363:goto L55c363;
case 0x55c364:c.instructions+=1;goto B55c364;
case 0x55c365:goto L55c365;
case 0x55c366:c.instructions+=3;goto B55c366;
case 0x55c368:c.instructions+=2;goto B55c368;
case 0x55c369:c.instructions+=1;goto B55c369;
case 0x55c370:goto L55c370;
case 0x55c371:c.instructions+=6;goto B55c371;
case 0x55c373:c.instructions+=5;goto B55c373;
case 0x55c376:c.instructions+=4;goto B55c376;
case 0x55c379:c.instructions+=3;goto B55c379;
case 0x55c37a:c.instructions+=2;goto B55c37a;
case 0x55c37c:c.instructions+=1;goto B55c37c;
case 0x55c382:goto L55c382;
case 0x55c385:c.instructions+=1;goto B55c385;
case 0x55c38b:goto L55c38b;
case 0x55c38c:c.instructions+=3;goto B55c38c;
case 0x55c38f:c.instructions+=2;goto B55c38f;
case 0x55c391:c.instructions+=1;goto B55c391;
case 0x55c397:goto L55c397;
case 0x55c398:c.instructions+=1;goto B55c398;
case 0x55c39d:goto L55c39d;
case 0x55c39f:c.instructions+=1;goto B55c39f;
case 0x55c3a1:goto L55c3a1;
case 0x55c3a3:c.instructions+=1;goto B55c3a3;
case 0x55c3a8:goto L55c3a8;
case 0x55c3aa:c.instructions+=1;goto B55c3aa;
case 0x55c3ac:goto L55c3ac;
case 0x55c3ae:c.instructions+=3;goto B55c3ae;
case 0x55c3b3:c.instructions+=2;goto B55c3b3;
case 0x55c3b5:c.instructions+=1;goto B55c3b5;
case 0x55c3ba:goto L55c3ba;
case 0x55c3bd:c.instructions+=1;goto B55c3bd;
case 0x55c3bf:goto L55c3bf;
case 0x55c3c2:c.instructions+=3;goto B55c3c2;
case 0x55c3c5:c.instructions+=2;goto B55c3c5;
case 0x55c3c7:c.instructions+=1;goto B55c3c7;
case 0x55c3c9:goto L55c3c9;
case 0x55c3cb:c.instructions+=2;goto B55c3cb;
case 0x55c3cd:c.instructions+=1;goto B55c3cd;
case 0x55c3cf:goto L55c3cf;
case 0x55c3d0:goto L55c3d0;
case 0x55c3d3:c.instructions+=2;goto B55c3d3;
case 0x55c3d6:c.instructions+=1;goto B55c3d6;
case 0x55c3d8:goto L55c3d8;
case 0x55c3db:c.instructions+=1;goto B55c3db;
case 0x55c3dd:goto L55c3dd;
case 0x55c3de:c.instructions+=2;goto B55c3de;
case 0x55c3e0:c.instructions+=1;goto B55c3e0;
case 0x55c3e5:goto L55c3e5;
case 0x55c3e7:c.instructions+=1;goto B55c3e7;
case 0x55c3e9:goto L55c3e9;
case 0x55c3ec:c.instructions+=4;goto B55c3ec;
case 0x55c3ed:c.instructions+=3;goto B55c3ed;
case 0x55c3ee:c.instructions+=2;goto B55c3ee;
case 0x55c3f1:c.instructions+=1;goto B55c3f1;
case 0x55c3f6:goto L55c3f6;
case 0x55c3f8:c.instructions+=3;goto B55c3f8;
case 0x55c3fb:c.instructions+=2;goto B55c3fb;
case 0x55c3fd:c.instructions+=1;goto B55c3fd;
case 0x55c3ff:goto L55c3ff;
case 0x55c402:goto L55c402;
case 0x55c405:c.instructions+=4;goto B55c405;
case 0x55c406:c.instructions+=3;goto B55c406;
case 0x55c409:c.instructions+=2;goto B55c409;
case 0x55c40a:c.instructions+=1;goto B55c40a;
case 0x55c40c:goto L55c40c;
case 0x55c411:c.instructions+=1;goto B55c411;
case 0x55c414:goto L55c414;
case 0x55c416:c.instructions+=3;goto B55c416;
case 0x55c417:c.instructions+=2;goto B55c417;
case 0x55c419:c.instructions+=1;goto B55c419;
case 0x55c41e:goto L55c41e;
case 0x55c41f:c.instructions+=2;goto B55c41f;
case 0x55c422:c.instructions+=1;goto B55c422;
case 0x55c424:goto L55c424;
case 0x55c427:c.instructions+=3;goto B55c427;
case 0x55c42a:c.instructions+=2;goto B55c42a;
case 0x55c42b:c.instructions+=1;goto B55c42b;
case 0x55c42c:goto L55c42c;
case 0x55c42e:c.instructions+=1;goto B55c42e;
case 0x55c433:goto L55c433;
case 0x55c435:c.instructions+=3;goto B55c435;
case 0x55c437:c.instructions+=2;goto B55c437;
case 0x55c438:c.instructions+=1;goto B55c438;
case 0x55c43d:goto L55c43d;
case 0x55c440:c.instructions+=4;goto B55c440;
case 0x55c445:c.instructions+=3;goto B55c445;
case 0x55c44a:c.instructions+=2;goto B55c44a;
case 0x55c44f:c.instructions+=1;goto B55c44f;
case 0x55c454:goto L55c454;
case 0x55c455:goto L55c455;
case 0x55c456:goto L55c456;
case 0x55c457:c.instructions+=2;goto B55c457;
case 0x55c458:c.instructions+=1;goto B55c458;
case 0x55c460:goto L55c460;
case 0x55c461:c.instructions+=10;goto B55c461;
case 0x55c462:c.instructions+=9;goto B55c462;
case 0x55c463:c.instructions+=8;goto B55c463;
case 0x55c465:c.instructions+=7;goto B55c465;
case 0x55c466:c.instructions+=6;goto B55c466;
case 0x55c46c:c.instructions+=5;goto B55c46c;
case 0x55c46f:c.instructions+=4;goto B55c46f;
case 0x55c470:c.instructions+=3;goto B55c470;
case 0x55c472:c.instructions+=2;goto B55c472;
case 0x55c476:c.instructions+=1;goto B55c476;
case 0x55c47b:goto L55c47b;
case 0x55c47d:c.instructions+=3;goto B55c47d;
case 0x55c47f:c.instructions+=2;goto B55c47f;
case 0x55c480:c.instructions+=1;goto B55c480;
case 0x55c485:goto L55c485;
case 0x55c488:c.instructions+=4;goto B55c488;
case 0x55c48b:c.instructions+=3;goto B55c48b;
case 0x55c48e:c.instructions+=2;goto B55c48e;
case 0x55c490:c.instructions+=1;goto B55c490;
case 0x55c492:goto L55c492;
case 0x55c494:c.instructions+=2;goto B55c494;
case 0x55c496:c.instructions+=1;goto B55c496;
case 0x55c498:goto L55c498;
case 0x55c49b:c.instructions+=2;goto B55c49b;
case 0x55c49e:c.instructions+=1;goto B55c49e;
case 0x55c4a0:goto L55c4a0;
case 0x55c4a3:c.instructions+=1;goto B55c4a3;
case 0x55c4a5:goto L55c4a5;
case 0x55c4a9:c.instructions+=1;goto B55c4a9;
case 0x55c4ae:goto L55c4ae;
case 0x55c4b0:c.instructions+=1;goto B55c4b0;
case 0x55c4b2:goto L55c4b2;
case 0x55c4b7:goto L55c4b7;
case 0x55c4b9:c.instructions+=3;goto B55c4b9;
case 0x55c4ba:c.instructions+=2;goto B55c4ba;
case 0x55c4bc:c.instructions+=1;goto B55c4bc;
case 0x55c4c1:goto L55c4c1;
case 0x55c4c3:c.instructions+=3;goto B55c4c3;
case 0x55c4c5:c.instructions+=2;goto B55c4c5;
case 0x55c4c6:c.instructions+=1;goto B55c4c6;
case 0x55c4cb:goto L55c4cb;
case 0x55c4ce:c.instructions+=4;goto B55c4ce;
case 0x55c4d3:c.instructions+=3;goto B55c4d3;
case 0x55c4d8:c.instructions+=2;goto B55c4d8;
case 0x55c4dd:c.instructions+=1;goto B55c4dd;
case 0x55c4e2:goto L55c4e2;
case 0x55c4e3:c.instructions+=2;goto B55c4e3;
case 0x55c4e6:c.instructions+=1;goto B55c4e6;
case 0x55c4e8:goto L55c4e8;
case 0x55c4eb:c.instructions+=5;goto B55c4eb;
case 0x55c4ee:c.instructions+=4;goto B55c4ee;
case 0x55c4ef:c.instructions+=3;goto B55c4ef;
case 0x55c4f0:c.instructions+=2;goto B55c4f0;
case 0x55c4f2:c.instructions+=1;goto B55c4f2;
case 0x55c4f7:goto L55c4f7;
case 0x55c4fb:c.instructions+=4;goto B55c4fb;
case 0x55c4fd:c.instructions+=3;goto B55c4fd;
case 0x55c500:c.instructions+=2;goto B55c500;
case 0x55c502:c.instructions+=1;goto B55c502;
case 0x55c504:goto L55c504;
case 0x55c506:c.instructions+=3;goto B55c506;
case 0x55c508:c.instructions+=2;goto B55c508;
case 0x55c509:c.instructions+=1;goto B55c509;
case 0x55c50e:goto L55c50e;
case 0x55c511:goto L55c511;
case 0x55c512:c.instructions+=4;goto B55c512;
case 0x55c513:c.instructions+=3;goto B55c513;
case 0x55c514:c.instructions+=2;goto B55c514;
case 0x55c515:c.instructions+=1;goto B55c515;
case 0x55c520:goto L55c520;
case 0x55c521:c.instructions+=10;goto B55c521;
case 0x55c523:c.instructions+=9;goto B55c523;
case 0x55c524:c.instructions+=8;goto B55c524;
case 0x55c527:c.instructions+=7;goto B55c527;
case 0x55c528:c.instructions+=6;goto B55c528;
case 0x55c52a:c.instructions+=5;goto B55c52a;
case 0x55c530:c.instructions+=4;goto B55c530;
case 0x55c532:c.instructions+=3;goto B55c532;
case 0x55c533:c.instructions+=2;goto B55c533;
case 0x55c536:c.instructions+=1;goto B55c536;
case 0x55c538:goto L55c538;
case 0x55c53b:c.instructions+=7;goto B55c53b;
case 0x55c53e:c.instructions+=6;goto B55c53e;
case 0x55c53f:c.instructions+=5;goto B55c53f;
case 0x55c540:c.instructions+=4;goto B55c540;
case 0x55c541:c.instructions+=3;goto B55c541;
case 0x55c542:c.instructions+=2;goto B55c542;
case 0x55c544:c.instructions+=1;goto B55c544;
case 0x55c549:goto L55c549;
case 0x55c54f:c.instructions+=1;goto B55c54f;
case 0x55c555:goto L55c555;
case 0x55c55b:goto L55c55b;
case 0x55c561:c.instructions+=1;goto B55c561;
case 0x55c567:goto L55c567;
case 0x55c56d:goto L55c56d;
case 0x55c573:c.instructions+=1;goto B55c573;
case 0x55c575:goto L55c575;
case 0x55c57b:c.instructions+=1;goto B55c57b;
case 0x55c581:goto L55c581;
case 0x55c583:c.instructions+=1;goto B55c583;
case 0x55c588:goto L55c588;
case 0x55c58f:c.instructions+=1;goto B55c58f;
case 0x55c594:goto L55c594;
case 0x55c595:c.instructions+=4;goto B55c595;
case 0x55c596:c.instructions+=3;goto B55c596;
case 0x55c597:c.instructions+=2;goto B55c597;
case 0x55c598:c.instructions+=1;goto B55c598;
case 0x55c59b:goto L55c59b;
case 0x55c5a1:c.instructions+=2;goto B55c5a1;
case 0x55c5a3:c.instructions+=1;goto B55c5a3;
case 0x55c5a9:goto L55c5a9;
case 0x55c5ac:c.instructions+=4;goto B55c5ac;
case 0x55c5b1:c.instructions+=3;goto B55c5b1;
case 0x55c5b6:c.instructions+=2;goto B55c5b6;
case 0x55c5b7:c.instructions+=1;goto B55c5b7;
case 0x55c5bc:goto L55c5bc;
case 0x55c5bf:c.instructions+=2;goto B55c5bf;
case 0x55c5c1:c.instructions+=1;goto B55c5c1;
case 0x55c5c7:goto L55c5c7;
case 0x55c5ca:c.instructions+=2;goto B55c5ca;
case 0x55c5cc:c.instructions+=1;goto B55c5cc;
case 0x55c5d1:goto L55c5d1;
case 0x55c5d3:c.instructions+=2;goto B55c5d3;
case 0x55c5d8:c.instructions+=1;goto B55c5d8;
case 0x55c5da:goto L55c5da;
case 0x55c5e0:c.instructions+=1;goto B55c5e0;
case 0x55c5e2:goto L55c5e2;
case 0x55c5e7:c.instructions+=2;goto B55c5e7;
case 0x55c5e9:c.instructions+=1;goto B55c5e9;
case 0x55c5eb:goto L55c5eb;
case 0x55c5ee:c.instructions+=3;goto B55c5ee;
case 0x55c5f1:c.instructions+=2;goto B55c5f1;
case 0x55c5f3:c.instructions+=1;goto B55c5f3;
case 0x55c5f9:goto L55c5f9;
case 0x55c5fc:c.instructions+=4;goto B55c5fc;
case 0x55c601:c.instructions+=3;goto B55c601;
case 0x55c606:c.instructions+=2;goto B55c606;
case 0x55c607:c.instructions+=1;goto B55c607;
case 0x55c60c:goto L55c60c;
case 0x55c60f:c.instructions+=2;goto B55c60f;
case 0x55c611:c.instructions+=1;goto B55c611;
case 0x55c617:goto L55c617;
case 0x55c619:c.instructions+=1;goto B55c619;
case 0x55c61e:goto L55c61e;
case 0x55c621:c.instructions+=5;goto B55c621;
case 0x55c622:c.instructions+=4;goto B55c622;
case 0x55c627:c.instructions+=3;goto B55c627;
case 0x55c62c:c.instructions+=2;goto B55c62c;
case 0x55c62d:c.instructions+=1;goto B55c62d;
case 0x55c632:goto L55c632;
case 0x55c635:goto L55c635;
case 0x55c63b:c.instructions+=1;goto B55c63b;
case 0x55c640:goto L55c640;
case 0x55c641:c.instructions+=4;goto B55c641;
case 0x55c642:c.instructions+=3;goto B55c642;
case 0x55c643:c.instructions+=2;goto B55c643;
case 0x55c644:c.instructions+=1;goto B55c644;
case 0x55c647:goto L55c647;
case 0x55c648:c.instructions+=1;goto B55c648;
case 0x55c64d:goto L55c64d;
case 0x55c650:c.instructions+=2;goto B55c650;
case 0x55c655:c.instructions+=1;goto B55c655;
case 0x55c65a:goto L55c65a;
case 0x55c65c:c.instructions+=1;goto B55c65c;
case 0x55c661:goto L55c661;
case 0x55c662:c.instructions+=4;goto B55c662;
case 0x55c663:c.instructions+=3;goto B55c663;
case 0x55c664:c.instructions+=2;goto B55c664;
case 0x55c665:c.instructions+=1;goto B55c665;
case 0x55c668:goto L55c668;
case 0x55c66e:c.instructions+=1;goto B55c66e;
case 0x55c674:goto L55c674;
case 0x55c676:c.instructions+=2;goto B55c676;
case 0x55c67b:c.instructions+=1;goto B55c67b;
case 0x55c680:goto L55c680;
case 0x55c682:c.instructions+=2;goto B55c682;
case 0x55c687:c.instructions+=1;goto B55c687;
case 0x55c68c:goto L55c68c;
case 0x55c691:goto L55c691;
case 0x55c692:c.instructions+=4;goto B55c692;
case 0x55c693:c.instructions+=3;goto B55c693;
case 0x55c694:c.instructions+=2;goto B55c694;
case 0x55c695:c.instructions+=1;goto B55c695;
case 0x55c698:goto L55c698;
case 0x55c69e:c.instructions+=2;goto B55c69e;
case 0x55c6a0:c.instructions+=1;goto B55c6a0;
case 0x55c6a6:goto L55c6a6;
case 0x55c6a9:c.instructions+=4;goto B55c6a9;
case 0x55c6ae:c.instructions+=3;goto B55c6ae;
case 0x55c6b3:c.instructions+=2;goto B55c6b3;
case 0x55c6b4:c.instructions+=1;goto B55c6b4;
case 0x55c6b9:goto L55c6b9;
case 0x55c6bc:c.instructions+=2;goto B55c6bc;
case 0x55c6be:c.instructions+=1;goto B55c6be;
case 0x55c6c4:goto L55c6c4;
case 0x55c6c9:c.instructions+=2;goto B55c6c9;
case 0x55c6cb:c.instructions+=1;goto B55c6cb;
case 0x55c6cd:goto L55c6cd;
case 0x55c6d2:goto L55c6d2;
case 0x55c6d5:c.instructions+=10;goto B55c6d5;
case 0x55c6da:c.instructions+=9;goto B55c6da;
case 0x55c6dc:c.instructions+=8;goto B55c6dc;
case 0x55c6e1:c.instructions+=7;goto B55c6e1;
case 0x55c6e6:c.instructions+=6;goto B55c6e6;
case 0x55c6eb:c.instructions+=5;goto B55c6eb;
case 0x55c6f0:c.instructions+=4;goto B55c6f0;
case 0x55c6f5:c.instructions+=3;goto B55c6f5;
case 0x55c6fa:c.instructions+=2;goto B55c6fa;
case 0x55c6fb:c.instructions+=1;goto B55c6fb;
case 0x55c700:goto L55c700;
case 0x55c703:c.instructions+=2;goto B55c703;
case 0x55c705:c.instructions+=1;goto B55c705;
case 0x55c70a:goto L55c70a;
case 0x55c70b:c.instructions+=4;goto B55c70b;
case 0x55c70c:c.instructions+=3;goto B55c70c;
case 0x55c70d:c.instructions+=2;goto B55c70d;
case 0x55c70e:c.instructions+=1;goto B55c70e;
case 0x55c711:goto L55c711;
case 0x55c714:c.instructions+=4;goto B55c714;
case 0x55c719:c.instructions+=3;goto B55c719;
case 0x55c71e:c.instructions+=2;goto B55c71e;
case 0x55c71f:c.instructions+=1;goto B55c71f;
case 0x55c724:goto L55c724;
case 0x55c727:c.instructions+=2;goto B55c727;
case 0x55c729:c.instructions+=1;goto B55c729;
case 0x55c72f:goto L55c72f;
case 0x55c730:c.instructions+=1;goto B55c730;
case 0x55c735:goto L55c735;
case 0x55c73a:c.instructions+=5;goto B55c73a;
case 0x55c73f:c.instructions+=4;goto B55c73f;
case 0x55c742:c.instructions+=3;goto B55c742;
case 0x55c748:c.instructions+=2;goto B55c748;
case 0x55c74e:c.instructions+=1;goto B55c74e;
case 0x55c753:goto L55c753;
case 0x55c756:c.instructions+=1;goto B55c756;
case 0x55c75b:goto L55c75b;
case 0x55c75e:c.instructions+=5;goto B55c75e;
case 0x55c75f:c.instructions+=4;goto B55c75f;
case 0x55c764:c.instructions+=3;goto B55c764;
case 0x55c769:c.instructions+=2;goto B55c769;
case 0x55c76a:c.instructions+=1;goto B55c76a;
case 0x55c76f:goto L55c76f;
case 0x55c772:c.instructions+=5;goto B55c772;
case 0x55c773:c.instructions+=4;goto B55c773;
case 0x55c774:c.instructions+=3;goto B55c774;
case 0x55c775:c.instructions+=2;goto B55c775;
case 0x55c776:c.instructions+=1;goto B55c776;
case 0x55c779:goto L55c779;
case 0x55c77f:c.instructions+=1;goto B55c77f;
case 0x55c785:goto L55c785;
case 0x55c787:goto L55c787;
case 0x55c78d:c.instructions+=1;goto B55c78d;
case 0x55c78f:goto L55c78f;
case 0x55c795:c.instructions+=1;goto B55c795;
case 0x55c79b:goto L55c79b;
case 0x55c7a1:c.instructions+=2;goto B55c7a1;
case 0x55c7a3:c.instructions+=1;goto B55c7a3;
case 0x55c7a9:goto L55c7a9;
case 0x55c7ac:c.instructions+=4;goto B55c7ac;
case 0x55c7b1:c.instructions+=3;goto B55c7b1;
case 0x55c7b6:c.instructions+=2;goto B55c7b6;
case 0x55c7b7:c.instructions+=1;goto B55c7b7;
case 0x55c7bc:goto L55c7bc;
case 0x55c7bf:c.instructions+=2;goto B55c7bf;
case 0x55c7c1:c.instructions+=1;goto B55c7c1;
case 0x55c7c7:goto L55c7c7;
case 0x55c7c8:c.instructions+=5;goto B55c7c8;
case 0x55c7cf:c.instructions+=4;goto B55c7cf;
case 0x55c7d0:c.instructions+=3;goto B55c7d0;
case 0x55c7d1:c.instructions+=2;goto B55c7d1;
case 0x55c7d2:c.instructions+=1;goto B55c7d2;
case 0x55c7d5:goto L55c7d5;
case 0x55c7d7:c.instructions+=1;goto B55c7d7;
case 0x55c7dc:goto L55c7dc;
case 0x55c7e3:c.instructions+=1;goto B55c7e3;
case 0x55c7e8:goto L55c7e8;
case 0x55c7e9:c.instructions+=4;goto B55c7e9;
case 0x55c7ea:c.instructions+=3;goto B55c7ea;
case 0x55c7eb:c.instructions+=2;goto B55c7eb;
case 0x55c7ec:c.instructions+=1;goto B55c7ec;
case 0x55c7ef:goto L55c7ef;
case 0x55c7f2:c.instructions+=5;goto B55c7f2;
case 0x55c7f7:c.instructions+=4;goto B55c7f7;
case 0x55c7f8:c.instructions+=3;goto B55c7f8;
case 0x55c7fe:c.instructions+=2;goto B55c7fe;
case 0x55c804:c.instructions+=1;goto B55c804;
case 0x55c809:goto L55c809;
case 0x55c80f:c.instructions+=3;goto B55c80f;
case 0x55c810:c.instructions+=2;goto B55c810;
case 0x55c815:c.instructions+=1;goto B55c815;
case 0x55c81a:goto L55c81a;
case 0x55c81d:c.instructions+=2;goto B55c81d;
case 0x55c81f:c.instructions+=1;goto B55c81f;
case 0x55c821:goto L55c821;
case 0x55c826:c.instructions+=4;goto B55c826;
case 0x55c829:c.instructions+=3;goto B55c829;
case 0x55c82c:c.instructions+=2;goto B55c82c;
case 0x55c82f:c.instructions+=1;goto B55c82f;
case 0x55c832:goto L55c832;
case 0x55c835:c.instructions+=2;goto B55c835;
case 0x55c836:c.instructions+=1;goto B55c836;
case 0x55c83b:goto L55c83b;
case 0x55c83e:c.instructions+=5;goto B55c83e;
case 0x55c83f:c.instructions+=4;goto B55c83f;
case 0x55c840:c.instructions+=3;goto B55c840;
case 0x55c841:c.instructions+=2;goto B55c841;
case 0x55c842:c.instructions+=1;goto B55c842;
case 0x55c845:goto L55c845;
case 0x55c84b:c.instructions+=1;goto B55c84b;
case 0x55c84d:goto L55c84d;
case 0x55c853:c.instructions+=2;goto B55c853;
case 0x55c855:c.instructions+=1;goto B55c855;
case 0x55c857:goto L55c857;
case 0x55c85a:c.instructions+=2;goto B55c85a;
case 0x55c85b:c.instructions+=1;goto B55c85b;
case 0x55c860:goto L55c860;
case 0x55c861:c.instructions+=1;goto B55c861;
case 0x55c866:goto L55c866;
case 0x55c869:c.instructions+=2;goto B55c869;
case 0x55c86b:c.instructions+=1;goto B55c86b;
case 0x55c86d:goto L55c86d;
case 0x55c874:goto L55c874;
case 0x55c879:c.instructions+=2;goto B55c879;
case 0x55c87b:c.instructions+=1;goto B55c87b;
case 0x55c87d:goto L55c87d;
case 0x55c880:c.instructions+=2;goto B55c880;
case 0x55c881:c.instructions+=1;goto B55c881;
case 0x55c886:goto L55c886;
case 0x55c889:c.instructions+=5;goto B55c889;
case 0x55c88a:c.instructions+=4;goto B55c88a;
case 0x55c88b:c.instructions+=3;goto B55c88b;
case 0x55c88c:c.instructions+=2;goto B55c88c;
case 0x55c88d:c.instructions+=1;goto B55c88d;
case 0x55c890:goto L55c890;
case 0x55c895:goto L55c895;
case 0x55c897:c.instructions+=1;goto B55c897;
case 0x55c89c:goto L55c89c;
case 0x55c89d:c.instructions+=4;goto B55c89d;
case 0x55c89e:c.instructions+=3;goto B55c89e;
case 0x55c89f:c.instructions+=2;goto B55c89f;
case 0x55c8a0:c.instructions+=1;goto B55c8a0;
case 0x55c8a3:goto L55c8a3;
case 0x55c8a9:c.instructions+=2;goto B55c8a9;
case 0x55c8ab:c.instructions+=1;goto B55c8ab;
case 0x55c8ad:goto L55c8ad;
case 0x55c8ae:c.instructions+=5;goto B55c8ae;
case 0x55c8b5:c.instructions+=4;goto B55c8b5;
case 0x55c8b6:c.instructions+=3;goto B55c8b6;
case 0x55c8b7:c.instructions+=2;goto B55c8b7;
case 0x55c8b8:c.instructions+=1;goto B55c8b8;
case 0x55c8bb:goto L55c8bb;
case 0x55c8c0:goto L55c8c0;
case 0x55c8c2:c.instructions+=1;goto B55c8c2;
case 0x55c8c7:goto L55c8c7;
case 0x55c8c8:c.instructions+=4;goto B55c8c8;
case 0x55c8c9:c.instructions+=3;goto B55c8c9;
case 0x55c8ca:c.instructions+=2;goto B55c8ca;
case 0x55c8cb:c.instructions+=1;goto B55c8cb;
case 0x55c8d0:goto L55c8d0;
case 0x55c8d2:c.instructions+=7;goto B55c8d2;
case 0x55c8d7:c.instructions+=6;goto B55c8d7;
case 0x55c8dd:c.instructions+=5;goto B55c8dd;
case 0x55c8de:c.instructions+=4;goto B55c8de;
case 0x55c8e5:c.instructions+=3;goto B55c8e5;
case 0x55c8e6:c.instructions+=2;goto B55c8e6;
case 0x55c8eb:c.instructions+=1;goto B55c8eb;
case 0x55c8f0:goto L55c8f0;
case 0x55c8f3:c.instructions+=4;goto B55c8f3;
case 0x55c8f7:c.instructions+=3;goto B55c8f7;
case 0x55c8f9:c.instructions+=2;goto B55c8f9;
case 0x55c901:c.instructions+=1;goto B55c901;
case 0x55c903:goto L55c903;
case 0x55c907:c.instructions+=3;goto B55c907;
case 0x55c908:c.instructions+=2;goto B55c908;
case 0x55c90a:c.instructions+=1;goto B55c90a;
case 0x55c90f:goto L55c90f;
case 0x55c913:c.instructions+=3;goto B55c913;
case 0x55c91a:c.instructions+=2;goto B55c91a;
case 0x55c91d:c.instructions+=1;goto B55c91d;
case 0x55c91e:goto L55c91e;
case 0x55c922:c.instructions+=4;goto B55c922;
case 0x55c924:c.instructions+=3;goto B55c924;
case 0x55c92b:c.instructions+=2;goto B55c92b;
case 0x55c92e:c.instructions+=1;goto B55c92e;
case 0x55c930:goto L55c930;
case 0x55c931:c.instructions+=15;goto B55c931;
case 0x55c933:c.instructions+=14;goto B55c933;
case 0x55c936:c.instructions+=13;goto B55c936;
case 0x55c937:c.instructions+=12;goto B55c937;
case 0x55c93a:c.instructions+=11;goto B55c93a;
case 0x55c93b:c.instructions+=10;goto B55c93b;
case 0x55c93c:c.instructions+=9;goto B55c93c;
case 0x55c93f:c.instructions+=8;goto B55c93f;
case 0x55c940:c.instructions+=7;goto B55c940;
case 0x55c942:c.instructions+=6;goto B55c942;
case 0x55c945:c.instructions+=5;goto B55c945;
case 0x55c946:c.instructions+=4;goto B55c946;
case 0x55c947:c.instructions+=3;goto B55c947;
case 0x55c948:c.instructions+=2;goto B55c948;
case 0x55c94a:c.instructions+=1;goto B55c94a;
case 0x55c94f:goto L55c94f;
case 0x55c955:c.instructions+=1;goto B55c955;
case 0x55c95b:goto L55c95b;
case 0x55c961:goto L55c961;
case 0x55c967:c.instructions+=1;goto B55c967;
case 0x55c969:goto L55c969;
case 0x55c96f:c.instructions+=1;goto B55c96f;
case 0x55c975:goto L55c975;
case 0x55c978:c.instructions+=3;goto B55c978;
case 0x55c97b:c.instructions+=2;goto B55c97b;
case 0x55c97d:c.instructions+=1;goto B55c97d;
case 0x55c983:goto L55c983;
case 0x55c985:c.instructions+=1;goto B55c985;
case 0x55c988:goto L55c988;
case 0x55c989:c.instructions+=4;goto B55c989;
case 0x55c98a:c.instructions+=3;goto B55c98a;
case 0x55c98b:c.instructions+=2;goto B55c98b;
case 0x55c98c:c.instructions+=1;goto B55c98c;
case 0x55c98f:goto L55c98f;
case 0x55c992:c.instructions+=4;goto B55c992;
case 0x55c997:c.instructions+=3;goto B55c997;
case 0x55c99c:c.instructions+=2;goto B55c99c;
case 0x55c99d:c.instructions+=1;goto B55c99d;
case 0x55c9a2:goto L55c9a2;
case 0x55c9a5:c.instructions+=2;goto B55c9a5;
case 0x55c9a7:c.instructions+=1;goto B55c9a7;
case 0x55c9ad:goto L55c9ad;
case 0x55c9b0:c.instructions+=11;goto B55c9b0;
case 0x55c9b3:c.instructions+=10;goto B55c9b3;
case 0x55c9b6:c.instructions+=9;goto B55c9b6;
case 0x55c9b8:c.instructions+=8;goto B55c9b8;
case 0x55c9bd:c.instructions+=7;goto B55c9bd;
case 0x55c9c2:c.instructions+=6;goto B55c9c2;
case 0x55c9c3:c.instructions+=5;goto B55c9c3;
case 0x55c9cd:c.instructions+=4;goto B55c9cd;
case 0x55c9d0:c.instructions+=3;goto B55c9d0;
case 0x55c9d6:c.instructions+=2;goto B55c9d6;
case 0x55c9dc:c.instructions+=1;goto B55c9dc;
case 0x55c9e1:goto L55c9e1;
case 0x55c9e4:c.instructions+=5;goto B55c9e4;
case 0x55c9e5:c.instructions+=4;goto B55c9e5;
case 0x55c9e6:c.instructions+=3;goto B55c9e6;
case 0x55c9e7:c.instructions+=2;goto B55c9e7;
case 0x55c9e8:c.instructions+=1;goto B55c9e8;
case 0x55c9eb:goto L55c9eb;
case 0x55c9f1:c.instructions+=1;goto B55c9f1;
case 0x55c9f7:goto L55c9f7;
case 0x55c9fd:c.instructions+=1;goto B55c9fd;
case 0x55ca03:goto L55ca03;
case 0x55ca0d:c.instructions+=1;goto B55ca0d;
case 0x55ca13:goto L55ca13;
case 0x55ca15:c.instructions+=1;goto B55ca15;
case 0x55ca1a:goto L55ca1a;
case 0x55ca20:c.instructions+=2;goto B55ca20;
case 0x55ca22:c.instructions+=1;goto B55ca22;
case 0x55ca24:goto L55ca24;
case 0x55ca25:c.instructions+=2;goto B55ca25;
case 0x55ca2a:c.instructions+=1;goto B55ca2a;
case 0x55ca2f:goto L55ca2f;
case 0x55ca31:c.instructions+=3;goto B55ca31;
case 0x55ca32:c.instructions+=2;goto B55ca32;
case 0x55ca37:c.instructions+=1;goto B55ca37;
case 0x55ca3c:goto L55ca3c;
case 0x55ca41:goto L55ca41;
case 0x55ca43:c.instructions+=1;goto B55ca43;
case 0x55ca48:goto L55ca48;
case 0x55ca49:c.instructions+=4;goto B55ca49;
case 0x55ca4a:c.instructions+=3;goto B55ca4a;
case 0x55ca4b:c.instructions+=2;goto B55ca4b;
case 0x55ca4c:c.instructions+=1;goto B55ca4c;
case 0x55ca4f:goto L55ca4f;
case 0x55ca55:c.instructions+=2;goto B55ca55;
case 0x55ca57:c.instructions+=1;goto B55ca57;
case 0x55ca59:goto L55ca59;
case 0x55ca5a:c.instructions+=2;goto B55ca5a;
case 0x55ca5f:c.instructions+=1;goto B55ca5f;
case 0x55ca64:goto L55ca64;
case 0x55ca66:c.instructions+=3;goto B55ca66;
case 0x55ca67:c.instructions+=2;goto B55ca67;
case 0x55ca6c:c.instructions+=1;goto B55ca6c;
case 0x55ca71:goto L55ca71;
case 0x55ca76:goto L55ca76;
case 0x55ca78:c.instructions+=1;goto B55ca78;
case 0x55ca7d:goto L55ca7d;
case 0x55ca7e:c.instructions+=4;goto B55ca7e;
case 0x55ca7f:c.instructions+=3;goto B55ca7f;
case 0x55ca80:c.instructions+=2;goto B55ca80;
case 0x55ca81:c.instructions+=1;goto B55ca81;
case 0x55ca84:goto L55ca84;
case 0x55ca87:c.instructions+=4;goto B55ca87;
case 0x55ca8a:c.instructions+=3;goto B55ca8a;
case 0x55ca8e:c.instructions+=2;goto B55ca8e;
case 0x55ca93:c.instructions+=1;goto B55ca93;
case 0x55ca95:goto L55ca95;
case 0x55ca98:c.instructions+=2;goto B55ca98;
case 0x55ca99:c.instructions+=1;goto B55ca99;
case 0x55ca9e:goto L55ca9e;
case 0x55caa1:c.instructions+=5;goto B55caa1;
case 0x55caa2:c.instructions+=4;goto B55caa2;
case 0x55caa3:c.instructions+=3;goto B55caa3;
case 0x55caa4:c.instructions+=2;goto B55caa4;
case 0x55caa5:c.instructions+=1;goto B55caa5;
case 0x55caa8:goto L55caa8;
case 0x55caab:c.instructions+=2;goto B55caab;
case 0x55caac:c.instructions+=1;goto B55caac;
case 0x55cab1:goto L55cab1;
case 0x55cab4:goto L55cab4;
case 0x55cab5:c.instructions+=4;goto B55cab5;
case 0x55cab6:c.instructions+=3;goto B55cab6;
case 0x55cab7:c.instructions+=2;goto B55cab7;
case 0x55cab8:c.instructions+=1;goto B55cab8;
case 0x55cac0:goto L55cac0;
case 0x55cac1:c.instructions+=8;goto B55cac1;
case 0x55cac3:c.instructions+=7;goto B55cac3;
case 0x55cac4:c.instructions+=6;goto B55cac4;
case 0x55cac5:c.instructions+=5;goto B55cac5;
case 0x55cac7:c.instructions+=4;goto B55cac7;
case 0x55caca:c.instructions+=3;goto B55caca;
case 0x55cacd:c.instructions+=2;goto B55cacd;
case 0x55cacf:c.instructions+=1;goto B55cacf;
case 0x55cad5:goto L55cad5;
case 0x55cad8:c.instructions+=6;goto B55cad8;
case 0x55cad9:c.instructions+=5;goto B55cad9;
case 0x55cadc:c.instructions+=4;goto B55cadc;
case 0x55cadf:c.instructions+=3;goto B55cadf;
case 0x55cae0:c.instructions+=2;goto B55cae0;
case 0x55cae3:c.instructions+=1;goto B55cae3;
case 0x55cae5:goto L55cae5;
case 0x55cae8:c.instructions+=2;goto B55cae8;
case 0x55caea:c.instructions+=1;goto B55caea;
case 0x55caef:goto L55caef;
case 0x55caf2:c.instructions+=2;goto B55caf2;
case 0x55caf4:c.instructions+=1;goto B55caf4;
case 0x55caf6:goto L55caf6;
case 0x55caf9:c.instructions+=1;goto B55caf9;
case 0x55cafb:goto L55cafb;
case 0x55cafd:goto L55cafd;
case 0x55cb00:c.instructions+=1;goto B55cb00;
case 0x55cb02:goto L55cb02;
case 0x55cb05:c.instructions+=3;goto B55cb05;
case 0x55cb0c:c.instructions+=2;goto B55cb0c;
case 0x55cb0f:c.instructions+=1;goto B55cb0f;
case 0x55cb11:goto L55cb11;
case 0x55cb17:c.instructions+=2;goto B55cb17;
case 0x55cb18:c.instructions+=1;goto B55cb18;
case 0x55cb1d:goto L55cb1d;
case 0x55cb1f:goto L55cb1f;
case 0x55cb22:c.instructions+=1;goto B55cb22;
case 0x55cb24:goto L55cb24;
case 0x55cb27:c.instructions+=2;goto B55cb27;
case 0x55cb29:c.instructions+=1;goto B55cb29;
case 0x55cb2e:goto L55cb2e;
case 0x55cb30:c.instructions+=1;goto B55cb30;
case 0x55cb35:goto L55cb35;
case 0x55cb37:c.instructions+=1;goto B55cb37;
case 0x55cb39:goto L55cb39;
case 0x55cb3c:c.instructions+=5;goto B55cb3c;
case 0x55cb3f:c.instructions+=4;goto B55cb3f;
case 0x55cb40:c.instructions+=3;goto B55cb40;
case 0x55cb42:c.instructions+=2;goto B55cb42;
case 0x55cb43:c.instructions+=1;goto B55cb43;
case 0x55cb48:goto L55cb48;
case 0x55cb4b:goto L55cb4b;
case 0x55cb4e:c.instructions+=2;goto B55cb4e;
case 0x55cb51:c.instructions+=1;goto B55cb51;
case 0x55cb57:goto L55cb57;
case 0x55cb5a:c.instructions+=10;goto B55cb5a;
case 0x55cb60:c.instructions+=9;goto B55cb60;
case 0x55cb63:c.instructions+=8;goto B55cb63;
case 0x55cb66:c.instructions+=7;goto B55cb66;
case 0x55cb69:c.instructions+=6;goto B55cb69;
case 0x55cb6f:c.instructions+=5;goto B55cb6f;
case 0x55cb72:c.instructions+=4;goto B55cb72;
case 0x55cb73:c.instructions+=3;goto B55cb73;
case 0x55cb74:c.instructions+=2;goto B55cb74;
case 0x55cb79:c.instructions+=1;goto B55cb79;
case 0x55cb7e:goto L55cb7e;
case 0x55cb84:c.instructions+=6;goto B55cb84;
case 0x55cb87:c.instructions+=5;goto B55cb87;
case 0x55cb89:c.instructions+=4;goto B55cb89;
case 0x55cb8b:c.instructions+=3;goto B55cb8b;
case 0x55cb8d:c.instructions+=2;goto B55cb8d;
case 0x55cb8e:c.instructions+=1;goto B55cb8e;
case 0x55cb93:goto L55cb93;
case 0x55cb96:c.instructions+=2;goto B55cb96;
case 0x55cb99:c.instructions+=1;goto B55cb99;
case 0x55cb9b:goto L55cb9b;
case 0x55cba1:c.instructions+=2;goto B55cba1;
case 0x55cba3:c.instructions+=1;goto B55cba3;
case 0x55cba8:goto L55cba8;
case 0x55cbaa:c.instructions+=1;goto B55cbaa;
case 0x55cbaf:goto L55cbaf;
case 0x55cbb1:goto L55cbb1;
case 0x55cbb4:c.instructions+=1;goto B55cbb4;
case 0x55cbb6:goto L55cbb6;
case 0x55cbbc:c.instructions+=2;goto B55cbbc;
case 0x55cbbe:c.instructions+=1;goto B55cbbe;
case 0x55cbc3:goto L55cbc3;
case 0x55cbc5:c.instructions+=1;goto B55cbc5;
case 0x55cbca:goto L55cbca;
case 0x55cbcc:c.instructions+=1;goto B55cbcc;
case 0x55cbd1:goto L55cbd1;
case 0x55cbd4:c.instructions+=3;goto B55cbd4;
case 0x55cbd6:c.instructions+=2;goto B55cbd6;
case 0x55cbd9:c.instructions+=1;goto B55cbd9;
case 0x55cbdb:goto L55cbdb;
case 0x55cbde:c.instructions+=1;goto B55cbde;
case 0x55cbe0:goto L55cbe0;
case 0x55cbe2:goto L55cbe2;
case 0x55cbe5:c.instructions+=1;goto B55cbe5;
case 0x55cbe7:goto L55cbe7;
case 0x55cbed:c.instructions+=2;goto B55cbed;
case 0x55cbee:c.instructions+=1;goto B55cbee;
case 0x55cbf3:goto L55cbf3;
case 0x55cbf6:c.instructions+=6;goto B55cbf6;
case 0x55cbf7:c.instructions+=5;goto B55cbf7;
case 0x55cbf8:c.instructions+=4;goto B55cbf8;
case 0x55cbf9:c.instructions+=3;goto B55cbf9;
case 0x55cbfb:c.instructions+=2;goto B55cbfb;
case 0x55cbfc:c.instructions+=1;goto B55cbfc;
case 0x55cbff:goto L55cbff;
case 0x55cc04:goto L55cc04;
case 0x55cc06:c.instructions+=1;goto B55cc06;
case 0x55cc08:goto L55cc08;
case 0x55cc0e:c.instructions+=2;goto B55cc0e;
case 0x55cc0f:c.instructions+=1;goto B55cc0f;
case 0x55cc14:goto L55cc14;
case 0x55cc17:c.instructions+=6;goto B55cc17;
case 0x55cc18:c.instructions+=5;goto B55cc18;
case 0x55cc19:c.instructions+=4;goto B55cc19;
case 0x55cc1a:c.instructions+=3;goto B55cc1a;
case 0x55cc1c:c.instructions+=2;goto B55cc1c;
case 0x55cc1d:c.instructions+=1;goto B55cc1d;
case 0x55cc20:goto L55cc20;
case 0x55cc26:c.instructions+=2;goto B55cc26;
case 0x55cc27:c.instructions+=1;goto B55cc27;
case 0x55cc2c:goto L55cc2c;
case 0x55cc32:c.instructions+=2;goto B55cc32;
case 0x55cc33:c.instructions+=1;goto B55cc33;
case 0x55cc38:goto L55cc38;
case 0x55cc3b:goto L55cc3b;
case 0x55cc3c:c.instructions+=1;goto B55cc3c;
case 0x55cc3d:goto L55cc3d;
case 0x55cc3e:c.instructions+=3;goto B55cc3e;
case 0x55cc40:c.instructions+=2;goto B55cc40;
case 0x55cc41:c.instructions+=1;goto B55cc41;
case 0x55cc50:goto L55cc50;
case 0x55cc51:c.instructions+=7;goto B55cc51;
case 0x55cc53:c.instructions+=6;goto B55cc53;
case 0x55cc56:c.instructions+=5;goto B55cc56;
case 0x55cc57:c.instructions+=4;goto B55cc57;
case 0x55cc5e:c.instructions+=3;goto B55cc5e;
case 0x55cc61:c.instructions+=2;goto B55cc61;
case 0x55cc64:c.instructions+=1;goto B55cc64;
case 0x55cc66:goto L55cc66;
case 0x55cc67:c.instructions+=1;goto B55cc67;
case 0x55cc6c:goto L55cc6c;
case 0x55cc72:goto L55cc72;
case 0x55cc73:c.instructions+=2;goto B55cc73;
case 0x55cc75:c.instructions+=1;goto B55cc75;
case 0x55cc7a:goto L55cc7a;
case 0x55cc80:c.instructions+=4;goto B55cc80;
case 0x55cc86:c.instructions+=3;goto B55cc86;
case 0x55cc88:c.instructions+=2;goto B55cc88;
case 0x55cc8d:c.instructions+=1;goto B55cc8d;
case 0x55cc8f:goto L55cc8f;
case 0x55cc92:c.instructions+=1;goto B55cc92;
case 0x55cc94:goto L55cc94;
case 0x55cc97:c.instructions+=1;goto B55cc97;
case 0x55cc99:goto L55cc99;
case 0x55cc9f:c.instructions+=1;goto B55cc9f;
case 0x55cca1:goto L55cca1;
case 0x55cca3:c.instructions+=2;goto B55cca3;
case 0x55cca9:c.instructions+=1;goto B55cca9;
case 0x55ccae:goto L55ccae;
case 0x55ccb0:c.instructions+=2;goto B55ccb0;
case 0x55ccb2:c.instructions+=1;goto B55ccb2;
case 0x55ccb5:goto L55ccb5;
case 0x55ccb7:c.instructions+=2;goto B55ccb7;
case 0x55ccb8:c.instructions+=1;goto B55ccb8;
case 0x55ccbe:goto L55ccbe;
case 0x55ccc1:c.instructions+=3;goto B55ccc1;
case 0x55ccc8:c.instructions+=2;goto B55ccc8;
case 0x55cccf:c.instructions+=1;goto B55cccf;
case 0x55ccd1:goto L55ccd1;
case 0x55ccd7:c.instructions+=2;goto B55ccd7;
case 0x55ccd9:c.instructions+=1;goto B55ccd9;
case 0x55ccdc:goto L55ccdc;
case 0x55ccdd:c.instructions+=1;goto B55ccdd;
case 0x55cce2:goto L55cce2;
case 0x55cce5:c.instructions+=2;goto B55cce5;
case 0x55cce7:c.instructions+=1;goto B55cce7;
case 0x55cce9:goto L55cce9;
case 0x55ccee:c.instructions+=3;goto B55ccee;
case 0x55ccf0:c.instructions+=2;goto B55ccf0;
case 0x55ccf2:c.instructions+=1;goto B55ccf2;
case 0x55ccf7:goto L55ccf7;
case 0x55ccfa:c.instructions+=1;goto B55ccfa;
case 0x55ccfc:goto L55ccfc;
case 0x55cd03:c.instructions+=1;goto B55cd03;
case 0x55cd05:goto L55cd05;
case 0x55cd08:c.instructions+=1;goto B55cd08;
case 0x55cd0a:goto L55cd0a;
case 0x55cd11:goto L55cd11;
case 0x55cd14:c.instructions+=3;goto B55cd14;
case 0x55cd19:c.instructions+=2;goto B55cd19;
case 0x55cd1a:c.instructions+=1;goto B55cd1a;
case 0x55cd1f:goto L55cd1f;
case 0x55cd25:c.instructions+=2;goto B55cd25;
case 0x55cd26:c.instructions+=1;goto B55cd26;
case 0x55cd2b:goto L55cd2b;
case 0x55cd2e:c.instructions+=5;goto B55cd2e;
case 0x55cd30:c.instructions+=4;goto B55cd30;
case 0x55cd35:c.instructions+=3;goto B55cd35;
case 0x55cd3a:c.instructions+=2;goto B55cd3a;
case 0x55cd3b:c.instructions+=1;goto B55cd3b;
case 0x55cd40:goto L55cd40;
case 0x55cd43:c.instructions+=5;goto B55cd43;
case 0x55cd46:c.instructions+=4;goto B55cd46;
case 0x55cd49:c.instructions+=3;goto B55cd49;
case 0x55cd4c:c.instructions+=2;goto B55cd4c;
case 0x55cd4f:c.instructions+=1;goto B55cd4f;
case 0x55cd51:goto L55cd51;
case 0x55cd58:c.instructions+=1;goto B55cd58;
case 0x55cd5f:goto L55cd5f;
case 0x55cd65:c.instructions+=4;goto B55cd65;
case 0x55cd67:c.instructions+=3;goto B55cd67;
case 0x55cd6c:c.instructions+=2;goto B55cd6c;
case 0x55cd6d:c.instructions+=1;goto B55cd6d;
case 0x55cd72:goto L55cd72;
case 0x55cd78:c.instructions+=4;goto B55cd78;
case 0x55cd7a:c.instructions+=3;goto B55cd7a;
case 0x55cd7f:c.instructions+=2;goto B55cd7f;
case 0x55cd80:c.instructions+=1;goto B55cd80;
case 0x55cd85:goto L55cd85;
case 0x55cd8b:c.instructions+=2;goto B55cd8b;
case 0x55cd8c:c.instructions+=1;goto B55cd8c;
case 0x55cd91:goto L55cd91;
case 0x55cd97:c.instructions+=2;goto B55cd97;
case 0x55cd98:c.instructions+=1;goto B55cd98;
case 0x55cd9d:goto L55cd9d;
case 0x55cda0:goto L55cda0;
case 0x55cda6:c.instructions+=2;goto B55cda6;
case 0x55cda8:c.instructions+=1;goto B55cda8;
case 0x55cdae:goto L55cdae;
case 0x55cdb1:c.instructions+=2;goto B55cdb1;
case 0x55cdb3:c.instructions+=1;goto B55cdb3;
case 0x55cdb9:goto L55cdb9;
case 0x55cdbc:c.instructions+=2;goto B55cdbc;
case 0x55cdbe:c.instructions+=1;goto B55cdbe;
case 0x55cdc0:goto L55cdc0;
case 0x55cdc2:c.instructions+=3;goto B55cdc2;
case 0x55cdc7:c.instructions+=2;goto B55cdc7;
case 0x55cdc8:c.instructions+=1;goto B55cdc8;
case 0x55cdcd:goto L55cdcd;
case 0x55cdd0:goto L55cdd0;
case 0x55cdd6:c.instructions+=7;goto B55cdd6;
case 0x55cdd9:c.instructions+=6;goto B55cdd9;
case 0x55cddc:c.instructions+=5;goto B55cddc;
case 0x55cddf:c.instructions+=4;goto B55cddf;
case 0x55cde0:c.instructions+=3;goto B55cde0;
case 0x55cde1:c.instructions+=2;goto B55cde1;
case 0x55cde6:c.instructions+=1;goto B55cde6;
case 0x55cdeb:goto L55cdeb;
case 0x55cdf1:c.instructions+=8;goto B55cdf1;
case 0x55cdf4:c.instructions+=7;goto B55cdf4;
case 0x55cdf7:c.instructions+=6;goto B55cdf7;
case 0x55cdfa:c.instructions+=5;goto B55cdfa;
case 0x55cdfc:c.instructions+=4;goto B55cdfc;
case 0x55cdfe:c.instructions+=3;goto B55cdfe;
case 0x55cdff:c.instructions+=2;goto B55cdff;
case 0x55ce00:c.instructions+=1;goto B55ce00;
case 0x55ce05:goto L55ce05;
case 0x55ce0a:c.instructions+=3;goto B55ce0a;
case 0x55ce0d:c.instructions+=2;goto B55ce0d;
case 0x55ce10:c.instructions+=1;goto B55ce10;
case 0x55ce12:goto L55ce12;
case 0x55ce17:c.instructions+=2;goto B55ce17;
case 0x55ce19:c.instructions+=1;goto B55ce19;
case 0x55ce1b:goto L55ce1b;
case 0x55ce1e:c.instructions+=3;goto B55ce1e;
case 0x55ce23:c.instructions+=2;goto B55ce23;
case 0x55ce24:c.instructions+=1;goto B55ce24;
case 0x55ce29:goto L55ce29;
case 0x55ce2c:goto L55ce2c;
case 0x55ce32:c.instructions+=8;goto B55ce32;
case 0x55ce35:c.instructions+=7;goto B55ce35;
case 0x55ce38:c.instructions+=6;goto B55ce38;
case 0x55ce3b:c.instructions+=5;goto B55ce3b;
case 0x55ce3e:c.instructions+=4;goto B55ce3e;
case 0x55ce3f:c.instructions+=3;goto B55ce3f;
case 0x55ce40:c.instructions+=2;goto B55ce40;
case 0x55ce45:c.instructions+=1;goto B55ce45;
case 0x55ce4a:goto L55ce4a;
case 0x55ce4b:c.instructions+=4;goto B55ce4b;
case 0x55ce50:c.instructions+=3;goto B55ce50;
case 0x55ce55:c.instructions+=2;goto B55ce55;
case 0x55ce56:c.instructions+=1;goto B55ce56;
case 0x55ce5b:goto L55ce5b;
case 0x55ce5e:goto L55ce5e;
case 0x55ce61:c.instructions+=4;goto B55ce61;
case 0x55ce67:c.instructions+=3;goto B55ce67;
case 0x55ce68:c.instructions+=2;goto B55ce68;
case 0x55ce6d:c.instructions+=1;goto B55ce6d;
case 0x55ce72:goto L55ce72;
case 0x55ce73:c.instructions+=2;goto B55ce73;
case 0x55ce74:c.instructions+=1;goto B55ce74;
case 0x55ce90:goto L55ce90;
case 0x55ce91:c.instructions+=10;goto B55ce91;
case 0x55ce93:c.instructions+=9;goto B55ce93;
case 0x55ce94:c.instructions+=8;goto B55ce94;
case 0x55ce96:c.instructions+=7;goto B55ce96;
case 0x55ce99:c.instructions+=6;goto B55ce99;
case 0x55ce9b:c.instructions+=5;goto B55ce9b;
case 0x55ce9c:c.instructions+=4;goto B55ce9c;
case 0x55ce9d:c.instructions+=3;goto B55ce9d;
case 0x55cea4:c.instructions+=2;goto B55cea4;
case 0x55ceab:c.instructions+=1;goto B55ceab;
case 0x55cead:goto L55cead;
case 0x55ceb0:c.instructions+=2;goto B55ceb0;
case 0x55ceb3:c.instructions+=1;goto B55ceb3;
case 0x55ceb5:goto L55ceb5;
case 0x55cebb:c.instructions+=2;goto B55cebb;
case 0x55cebd:c.instructions+=1;goto B55cebd;
case 0x55cec0:goto L55cec0;
case 0x55cec1:c.instructions+=1;goto B55cec1;
case 0x55cec6:goto L55cec6;
case 0x55cec9:c.instructions+=2;goto B55cec9;
case 0x55cecb:c.instructions+=1;goto B55cecb;
case 0x55cecd:goto L55cecd;
case 0x55ced2:c.instructions+=3;goto B55ced2;
case 0x55ced4:c.instructions+=2;goto B55ced4;
case 0x55ced6:c.instructions+=1;goto B55ced6;
case 0x55cedb:goto L55cedb;
case 0x55cede:c.instructions+=1;goto B55cede;
case 0x55cee0:goto L55cee0;
case 0x55cee7:c.instructions+=1;goto B55cee7;
case 0x55cee9:goto L55cee9;
case 0x55ceec:c.instructions+=1;goto B55ceec;
case 0x55ceee:goto L55ceee;
case 0x55cef5:goto L55cef5;
case 0x55cef8:c.instructions+=3;goto B55cef8;
case 0x55cefd:c.instructions+=2;goto B55cefd;
case 0x55cefe:c.instructions+=1;goto B55cefe;
case 0x55cf03:goto L55cf03;
case 0x55cf06:c.instructions+=3;goto B55cf06;
case 0x55cf0b:c.instructions+=2;goto B55cf0b;
case 0x55cf0c:c.instructions+=1;goto B55cf0c;
case 0x55cf11:goto L55cf11;
case 0x55cf14:c.instructions+=3;goto B55cf14;
case 0x55cf17:c.instructions+=2;goto B55cf17;
case 0x55cf19:c.instructions+=1;goto B55cf19;
case 0x55cf1b:goto L55cf1b;
case 0x55cf1e:c.instructions+=5;goto B55cf1e;
case 0x55cf20:c.instructions+=4;goto B55cf20;
case 0x55cf25:c.instructions+=3;goto B55cf25;
case 0x55cf2a:c.instructions+=2;goto B55cf2a;
case 0x55cf2b:c.instructions+=1;goto B55cf2b;
case 0x55cf30:goto L55cf30;
case 0x55cf36:c.instructions+=4;goto B55cf36;
case 0x55cf38:c.instructions+=3;goto B55cf38;
case 0x55cf3d:c.instructions+=2;goto B55cf3d;
case 0x55cf3e:c.instructions+=1;goto B55cf3e;
case 0x55cf43:goto L55cf43;
case 0x55cf49:c.instructions+=4;goto B55cf49;
case 0x55cf4b:c.instructions+=3;goto B55cf4b;
case 0x55cf50:c.instructions+=2;goto B55cf50;
case 0x55cf51:c.instructions+=1;goto B55cf51;
case 0x55cf56:goto L55cf56;
case 0x55cf5c:c.instructions+=2;goto B55cf5c;
case 0x55cf5d:c.instructions+=1;goto B55cf5d;
case 0x55cf62:goto L55cf62;
case 0x55cf68:c.instructions+=2;goto B55cf68;
case 0x55cf69:c.instructions+=1;goto B55cf69;
case 0x55cf6e:goto L55cf6e;
case 0x55cf71:goto L55cf71;
case 0x55cf77:c.instructions+=2;goto B55cf77;
case 0x55cf79:c.instructions+=1;goto B55cf79;
case 0x55cf7b:goto L55cf7b;
case 0x55cf7e:c.instructions+=2;goto B55cf7e;
case 0x55cf80:c.instructions+=1;goto B55cf80;
case 0x55cf82:goto L55cf82;
case 0x55cf84:c.instructions+=3;goto B55cf84;
case 0x55cf89:c.instructions+=2;goto B55cf89;
case 0x55cf8a:c.instructions+=1;goto B55cf8a;
case 0x55cf8f:goto L55cf8f;
case 0x55cf92:goto L55cf92;
case 0x55cf95:c.instructions+=3;goto B55cf95;
case 0x55cf9a:c.instructions+=2;goto B55cf9a;
case 0x55cf9b:c.instructions+=1;goto B55cf9b;
case 0x55cfa0:goto L55cfa0;
case 0x55cfa3:c.instructions+=2;goto B55cfa3;
case 0x55cfa8:c.instructions+=1;goto B55cfa8;
case 0x55cfad:goto L55cfad;
case 0x55cfb4:c.instructions+=1;goto B55cfb4;
case 0x55cfba:goto L55cfba;
case 0x55cfbf:c.instructions+=1;goto B55cfbf;
case 0x55cfc4:goto L55cfc4;
case 0x55cfc6:c.instructions+=1;goto B55cfc6;
case 0x55cfc8:goto L55cfc8;
case 0x55cfcd:c.instructions+=5;goto B55cfcd;
case 0x55cfd0:c.instructions+=4;goto B55cfd0;
case 0x55cfd2:c.instructions+=3;goto B55cfd2;
case 0x55cfd3:c.instructions+=2;goto B55cfd3;
case 0x55cfd8:c.instructions+=1;goto B55cfd8;
case 0x55cfdd:goto L55cfdd;
case 0x55cfdf:c.instructions+=3;goto B55cfdf;
case 0x55cfe1:c.instructions+=2;goto B55cfe1;
case 0x55cfe6:c.instructions+=1;goto B55cfe6;
case 0x55cfeb:goto L55cfeb;
case 0x55cfee:c.instructions+=4;goto B55cfee;
case 0x55cff3:c.instructions+=3;goto B55cff3;
case 0x55cff8:c.instructions+=2;goto B55cff8;
case 0x55cffd:c.instructions+=1;goto B55cffd;
default:missing_instruction(c.pc);}
B55c003:L55c003:{c.instructions+=2;NFSU2_TR(0x55c003);
__builtin_memmove((R+4),(R+0),4);
}
B55c005:{NFSU2_TR(0x55c005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c00aull));
TAIL_STATIC(0x55bd60u,55b);
}
B55c00a:L55c00a:{c.instructions+=2;NFSU2_TR(0x55c00a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c00b:{NFSU2_TR(0x55c00b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c010:L55c010:{c.instructions+=13;NFSU2_TR(0x55c010);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c012:{NFSU2_TR(0x55c012);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c017:{NFSU2_TR(0x55c017);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c01d:{NFSU2_TR(0x55c01d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c01e:{NFSU2_TR(0x55c01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c025:{NFSU2_TR(0x55c025);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c026:{NFSU2_TR(0x55c026);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c02a:{NFSU2_TR(0x55c02a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c02b:{NFSU2_TR(0x55c02b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c02c:{NFSU2_TR(0x55c02c);
__builtin_memmove((R+24),(R+4),4);
}
B55c02e:{NFSU2_TR(0x55c02e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c02f:{NFSU2_TR(0x55c02f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c033:{NFSU2_TR(0x55c033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c038ull));
TAIL_STATIC(0x552330u,552);
}
B55c038:L55c038:{c.instructions+=13;NFSU2_TR(0x55c038);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55c03a:{NFSU2_TR(0x55c03a);
u8 U[4];
w4(U+0,u32(0x79d674ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55c040:{NFSU2_TR(0x55c040);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c046:{NFSU2_TR(0x55c046);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c04c:{NFSU2_TR(0x55c04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c052:{NFSU2_TR(0x55c052);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c058:{NFSU2_TR(0x55c058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c05e:{NFSU2_TR(0x55c05e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55c064:{NFSU2_TR(0x55c064);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55c06a:{NFSU2_TR(0x55c06a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55c070:{NFSU2_TR(0x55c070);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c074:{NFSU2_TR(0x55c074);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B55c07a:{NFSU2_TR(0x55c07a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c07full));
TAIL_STATIC(0x5205b0u,520);
}
B55c07f:L55c07f:{c.instructions+=6;NFSU2_TR(0x55c07f);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B55c085:{NFSU2_TR(0x55c085);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c08b:{NFSU2_TR(0x55c08b);
__builtin_memmove((R+4),(R+24),4);
}
B55c08d:{NFSU2_TR(0x55c08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c093:{NFSU2_TR(0x55c093);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55c097:{NFSU2_TR(0x55c097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c09cull));
TAIL_STATIC(0x5593e0u,559);
}
B55c09c:L55c09c:{c.instructions+=2;NFSU2_TR(0x55c09c);
__builtin_memmove((R+4),(R+24),4);
}
B55c09e:{NFSU2_TR(0x55c09e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c0a3ull));
TAIL_STATIC(0x5470f0u,547);
}
B55c0a3:L55c0a3:{c.instructions+=3;NFSU2_TR(0x55c0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c0a6:{NFSU2_TR(0x55c0a6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c0a8:{NFSU2_TR(0x55c0a8);
if(r1(R+518)){{goto L55c0af;}}
}
B55c0aa:L55c0aa:{c.instructions+=2;NFSU2_TR(0x55c0aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55c0ad:{NFSU2_TR(0x55c0ad);
{goto L55c0b1;}
}
B55c0af:L55c0af:{c.instructions+=1;NFSU2_TR(0x55c0af);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B55c0b1:L55c0b1:{c.instructions+=3;NFSU2_TR(0x55c0b1);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c0b6:{NFSU2_TR(0x55c0b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55c0bc:{NFSU2_TR(0x55c0bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c0c1ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55c0c1:L55c0c1:{c.instructions+=3;NFSU2_TR(0x55c0c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55c0c4:{NFSU2_TR(0x55c0c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55c0c6:{NFSU2_TR(0x55c0c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c0f5;}}
}
B55c0c8:L55c0c8:{c.instructions+=4;NFSU2_TR(0x55c0c8);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55c0ce:{NFSU2_TR(0x55c0ce);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c0d0:{NFSU2_TR(0x55c0d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c0d3:{NFSU2_TR(0x55c0d3);
if(r1(R+518)){{goto L55c0f5;}}
}
B55c0d5:L55c0d5:{c.instructions+=4;NFSU2_TR(0x55c0d5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c0d7:{NFSU2_TR(0x55c0d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c0d8:{NFSU2_TR(0x55c0d8);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c0dd:{NFSU2_TR(0x55c0dd);
if(r1(R+518)){{goto L55c0e9;}}
}
B55c0df:L55c0df:{c.instructions+=4;NFSU2_TR(0x55c0df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c0e0:{NFSU2_TR(0x55c0e0);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c0e5:{NFSU2_TR(0x55c0e5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c0e7:{NFSU2_TR(0x55c0e7);
{goto L55c0f0;}
}
B55c0e9:L55c0e9:{c.instructions+=3;NFSU2_TR(0x55c0e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c0ea:{NFSU2_TR(0x55c0ea);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c0ef:{NFSU2_TR(0x55c0ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c0f0:L55c0f0:{c.instructions+=1;NFSU2_TR(0x55c0f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c0f5ull));
TAIL_STATIC(0x555d00u,555);
}
B55c0f5:L55c0f5:{c.instructions+=5;NFSU2_TR(0x55c0f5);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B55c0fa:{NFSU2_TR(0x55c0fa);
__builtin_memmove((R+4),(R+0),4);
}
B55c0fc:{NFSU2_TR(0x55c0fc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c0fe:{NFSU2_TR(0x55c0fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55c102:{NFSU2_TR(0x55c102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c107ull));
TAIL_STATIC(0x542990u,542);
}
B55c107:L55c107:{c.instructions+=6;NFSU2_TR(0x55c107);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55c10a:{NFSU2_TR(0x55c10a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c10d:{NFSU2_TR(0x55c10d);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55c113:{NFSU2_TR(0x55c113);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c114:{NFSU2_TR(0x55c114);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c115:{NFSU2_TR(0x55c115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c11aull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55c11a:L55c11a:{c.instructions+=8;NFSU2_TR(0x55c11a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c11e:{NFSU2_TR(0x55c11e);
__builtin_memmove((R+0),(R+24),4);
}
B55c120:{NFSU2_TR(0x55c120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c121:{NFSU2_TR(0x55c121);
__builtin_memmove(gp(0x83854c),(R+12),1);
}
B55c127:{NFSU2_TR(0x55c127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c128:{NFSU2_TR(0x55c128);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c12f:{NFSU2_TR(0x55c12f);
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
B55c132:{NFSU2_TR(0x55c132);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c140:L55c140:{c.instructions+=3;NFSU2_TR(0x55c140);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c141:{NFSU2_TR(0x55c141);
__builtin_memmove((R+24),(R+4),4);
}
B55c143:{NFSU2_TR(0x55c143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c148ull));
{goto L55c160;}
}
B55c148:L55c148:{c.instructions+=2;NFSU2_TR(0x55c148);
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
B55c14d:{NFSU2_TR(0x55c14d);
if(r1(R+518)){{goto L55c158;}}
}
B55c14f:L55c14f:{c.instructions+=2;NFSU2_TR(0x55c14f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c150:{NFSU2_TR(0x55c150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c155ull));
TAIL_STATIC(0x575630u,575);
}
B55c155:L55c155:{c.instructions+=1;NFSU2_TR(0x55c155);
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
B55c158:L55c158:{c.instructions+=3;NFSU2_TR(0x55c158);
__builtin_memmove((R+0),(R+24),4);
}
B55c15a:{NFSU2_TR(0x55c15a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c15b:{NFSU2_TR(0x55c15b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c160:L55c160:{c.instructions+=2;NFSU2_TR(0x55c160);
u8 U[4];
w4(U+0,u32(0x79d674ull));
s4(u32(r4(R+4)),r4(U+0));
}
B55c166:{NFSU2_TR(0x55c166);
TAIL_STATIC(0x4defb0u,4de);
}
B55c170:L55c170:{c.instructions+=8;NFSU2_TR(0x55c170);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c171:{NFSU2_TR(0x55c171);
__builtin_memmove((R+20),(R+16),4);
}
B55c173:{NFSU2_TR(0x55c173);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c174:{NFSU2_TR(0x55c174);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c175:{NFSU2_TR(0x55c175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55c178:{NFSU2_TR(0x55c178);
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
B55c17a:{NFSU2_TR(0x55c17a);
__builtin_memmove((R+12),(R+4),4);
}
B55c17c:{NFSU2_TR(0x55c17c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55c1e6;}}
}
B55c17e:L55c17e:{c.instructions+=2;NFSU2_TR(0x55c17e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xaaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c184:{NFSU2_TR(0x55c184);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L55c1e6;}}
}
B55c186:L55c186:{c.instructions+=6;NFSU2_TR(0x55c186);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c187:{NFSU2_TR(0x55c187);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x940ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55c18d:{NFSU2_TR(0x55c18d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c190:{NFSU2_TR(0x55c190);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c191:{NFSU2_TR(0x55c191);
__builtin_memmove((R+4),(R+24),4);
}
B55c193:{NFSU2_TR(0x55c193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c198ull));
TAIL_STATIC(0x413440u,413);
}
B55c198:L55c198:{c.instructions+=5;NFSU2_TR(0x55c198);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c19b:{NFSU2_TR(0x55c19b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c19c:{NFSU2_TR(0x55c19c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c19d:{NFSU2_TR(0x55c19d);
__builtin_memmove((R+4),(R+24),4);
}
B55c19f:{NFSU2_TR(0x55c19f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c1a4ull));
TAIL_STATIC(0x631d20u,631);
}
B55c1a4:L55c1a4:{c.instructions+=2;NFSU2_TR(0x55c1a4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c1a7:{NFSU2_TR(0x55c1a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c1b8;}}
}
B55c1a9:L55c1a9:{c.instructions+=5;NFSU2_TR(0x55c1a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55c1ac:{NFSU2_TR(0x55c1ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c1ad:{NFSU2_TR(0x55c1ad);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c1af:{NFSU2_TR(0x55c1af);
__builtin_memmove((R+4),(R+24),4);
}
B55c1b1:{NFSU2_TR(0x55c1b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c1b6ull));
TAIL_STATIC(0x631d20u,631);
}
B55c1b6:L55c1b6:{c.instructions+=1;NFSU2_TR(0x55c1b6);
{goto L55c1c4;}
}
B55c1b8:L55c1b8:{c.instructions+=2;NFSU2_TR(0x55c1b8);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x22ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x22ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x22ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c1bb:{NFSU2_TR(0x55c1bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c1c4;}}
}
B55c1bd:L55c1bd:{c.instructions+=2;NFSU2_TR(0x55c1bd);
__builtin_memmove((R+4),(R+12),4);
}
B55c1bf:{NFSU2_TR(0x55c1bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c1c4ull));
TAIL_STATIC(0x547470u,547);
}
B55c1c4:L55c1c4:{c.instructions+=4;NFSU2_TR(0x55c1c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c1c6:{NFSU2_TR(0x55c1c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c1c8:{NFSU2_TR(0x55c1c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c1c9:{NFSU2_TR(0x55c1c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c1ceull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55c1ce:L55c1ce:{c.instructions+=5;NFSU2_TR(0x55c1ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55c1d1:{NFSU2_TR(0x55c1d1);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c1d6:{NFSU2_TR(0x55c1d6);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c1db:{NFSU2_TR(0x55c1db);
w4(R+4,u32(0x8637d0ull));
}
B55c1e0:{NFSU2_TR(0x55c1e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c1e5ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55c1e5:L55c1e5:{c.instructions+=1;NFSU2_TR(0x55c1e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c1e6:L55c1e6:{c.instructions+=4;NFSU2_TR(0x55c1e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c1e7:{NFSU2_TR(0x55c1e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c1e8:{NFSU2_TR(0x55c1e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c1e9:{NFSU2_TR(0x55c1e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c1f0:L55c1f0:{c.instructions+=10;NFSU2_TR(0x55c1f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c1f1:{NFSU2_TR(0x55c1f1);
__builtin_memmove((R+20),(R+16),4);
}
B55c1f3:{NFSU2_TR(0x55c1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c1f6:{NFSU2_TR(0x55c1f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c1f7:{NFSU2_TR(0x55c1f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c1fa:{NFSU2_TR(0x55c1fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c1fd:{NFSU2_TR(0x55c1fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c1fe:{NFSU2_TR(0x55c1fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c1ff:{NFSU2_TR(0x55c1ff);
__builtin_memmove((R+4),(R+24),4);
}
B55c201:{NFSU2_TR(0x55c201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c206ull));
TAIL_STATIC(0x631d20u,631);
}
B55c206:L55c206:{c.instructions+=4;NFSU2_TR(0x55c206);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c208:{NFSU2_TR(0x55c208);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c20a:{NFSU2_TR(0x55c20a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c20b:{NFSU2_TR(0x55c20b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c210ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55c210:L55c210:{c.instructions+=5;NFSU2_TR(0x55c210);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55c213:{NFSU2_TR(0x55c213);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c218:{NFSU2_TR(0x55c218);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c21d:{NFSU2_TR(0x55c21d);
w4(R+4,u32(0x8637d0ull));
}
B55c222:{NFSU2_TR(0x55c222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c227ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55c227:L55c227:{c.instructions+=3;NFSU2_TR(0x55c227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c228:{NFSU2_TR(0x55c228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c229:{NFSU2_TR(0x55c229);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c230:L55c230:{c.instructions+=8;NFSU2_TR(0x55c230);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c231:{NFSU2_TR(0x55c231);
__builtin_memmove((R+20),(R+16),4);
}
B55c233:{NFSU2_TR(0x55c233);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c234:{NFSU2_TR(0x55c234);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c235:{NFSU2_TR(0x55c235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55c238:{NFSU2_TR(0x55c238);
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
B55c23a:{NFSU2_TR(0x55c23a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c23d:{NFSU2_TR(0x55c23d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55c365;}}
}
B55c243:L55c243:{c.instructions+=2;NFSU2_TR(0x55c243);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xaaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c249:{NFSU2_TR(0x55c249);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L55c365;}}
}
B55c24f:L55c24f:{c.instructions+=8;NFSU2_TR(0x55c24f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c250:{NFSU2_TR(0x55c250);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55c253:{NFSU2_TR(0x55c253);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c254:{NFSU2_TR(0x55c254);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x940ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c25a:{NFSU2_TR(0x55c25a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c25b:{NFSU2_TR(0x55c25b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c25c:{NFSU2_TR(0x55c25c);
__builtin_memmove((R+4),(R+24),4);
}
B55c25e:{NFSU2_TR(0x55c25e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c263ull));
TAIL_STATIC(0x631d20u,631);
}
B55c263:L55c263:{c.instructions+=2;NFSU2_TR(0x55c263);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c266:{NFSU2_TR(0x55c266);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c277;}}
}
B55c268:L55c268:{c.instructions+=4;NFSU2_TR(0x55c268);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c269:{NFSU2_TR(0x55c269);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c26b:{NFSU2_TR(0x55c26b);
__builtin_memmove((R+4),(R+24),4);
}
B55c26d:{NFSU2_TR(0x55c26d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c272ull));
TAIL_STATIC(0x631d20u,631);
}
B55c272:L55c272:{c.instructions+=1;NFSU2_TR(0x55c272);
{goto L55c32a;}
}
B55c277:L55c277:{c.instructions+=2;NFSU2_TR(0x55c277);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x22ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x22ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x22ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c27a:{NFSU2_TR(0x55c27a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c289;}}
}
B55c27c:L55c27c:{c.instructions+=2;NFSU2_TR(0x55c27c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c27f:{NFSU2_TR(0x55c27f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c284ull));
TAIL_STATIC(0x5474a0u,547);
}
B55c284:L55c284:{c.instructions+=1;NFSU2_TR(0x55c284);
{goto L55c32a;}
}
B55c289:L55c289:{c.instructions+=2;NFSU2_TR(0x55c289);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c28c:{NFSU2_TR(0x55c28c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c2bc;}}
}
B55c28e:L55c28e:{c.instructions+=4;NFSU2_TR(0x55c28e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c290:{NFSU2_TR(0x55c290);
u8 U[4];
w4(U+0,u32(0x721aff7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c295:{NFSU2_TR(0x55c295);
__builtin_memmove((R+4),(R+12),4);
}
B55c297:{NFSU2_TR(0x55c297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c29cull));
TAIL_STATIC(0x61b500u,61b);
}
B55c29c:L55c29c:{c.instructions+=2;NFSU2_TR(0x55c29c);
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
B55c29e:{NFSU2_TR(0x55c29e);
if(r1(R+518)){{goto L55c2a8;}}
}
B55c2a0:L55c2a0:{c.instructions+=2;NFSU2_TR(0x55c2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c2a3:{NFSU2_TR(0x55c2a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c2a8ull));
TAIL_STATIC(0x50ec10u,50e);
}
B55c2a8:L55c2a8:{c.instructions+=4;NFSU2_TR(0x55c2a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55c2ab:{NFSU2_TR(0x55c2ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B55c2ae:{NFSU2_TR(0x55c2ae);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55c2b0:{NFSU2_TR(0x55c2b0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L55c32a;}}
}
B55c2b2:L55c2b2:{c.instructions+=2;NFSU2_TR(0x55c2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c2b5:{NFSU2_TR(0x55c2b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c2baull));
TAIL_STATIC(0x50ec50u,50e);
}
B55c2ba:L55c2ba:{c.instructions+=1;NFSU2_TR(0x55c2ba);
{goto L55c32a;}
}
B55c2bc:L55c2bc:{c.instructions+=2;NFSU2_TR(0x55c2bc);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x5dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c2bf:{NFSU2_TR(0x55c2bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c306;}}
}
B55c2c1:L55c2c1:{c.instructions+=3;NFSU2_TR(0x55c2c1);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c2c3:{NFSU2_TR(0x55c2c3);
__builtin_memmove((R+4),(R+24),4);
}
B55c2c5:{NFSU2_TR(0x55c2c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c2caull));
TAIL_STATIC(0x6102f0u,610);
}
B55c2ca:L55c2ca:{c.instructions+=2;NFSU2_TR(0x55c2ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55c2cc:{NFSU2_TR(0x55c2cc);
if(r1(R+518)){{goto L55c2df;}}
}
B55c2ce:L55c2ce:{c.instructions+=4;NFSU2_TR(0x55c2ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B55c2d1:{NFSU2_TR(0x55c2d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B55c2d4:{NFSU2_TR(0x55c2d4);
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
B55c2d6:{NFSU2_TR(0x55c2d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L55c2df;}}
}
B55c2d8:L55c2d8:{c.instructions+=2;NFSU2_TR(0x55c2d8);
w4(R+28,u32(0x1ull));
}
B55c2dd:{NFSU2_TR(0x55c2dd);
{goto L55c2e1;}
}
B55c2df:L55c2df:{c.instructions+=1;NFSU2_TR(0x55c2df);
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
B55c2e1:L55c2e1:{c.instructions+=3;NFSU2_TR(0x55c2e1);
u8 U[4];
w4(U+0,u32(0x5dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c2e3:{NFSU2_TR(0x55c2e3);
__builtin_memmove((R+4),(R+24),4);
}
B55c2e5:{NFSU2_TR(0x55c2e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c2eaull));
TAIL_STATIC(0x6102f0u,610);
}
B55c2ea:L55c2ea:{c.instructions+=2;NFSU2_TR(0x55c2ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55c2ec:{NFSU2_TR(0x55c2ec);
if(r1(R+518)){{goto L55c32a;}}
}
B55c2ee:L55c2ee:{c.instructions+=4;NFSU2_TR(0x55c2ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B55c2f1:{NFSU2_TR(0x55c2f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B55c2f4:{NFSU2_TR(0x55c2f4);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55c2f6:{NFSU2_TR(0x55c2f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L55c32a;}}
}
B55c2f8:L55c2f8:{c.instructions+=3;NFSU2_TR(0x55c2f8);
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
B55c2fa:{NFSU2_TR(0x55c2fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c2fd:{NFSU2_TR(0x55c2fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c325;}}
}
B55c2ff:L55c2ff:{c.instructions+=1;NFSU2_TR(0x55c2ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c304ull));
TAIL_STATIC(0x50ec80u,50e);
}
B55c304:L55c304:{c.instructions+=1;NFSU2_TR(0x55c304);
{goto L55c32a;}
}
B55c306:L55c306:{c.instructions+=2;NFSU2_TR(0x55c306);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c309:{NFSU2_TR(0x55c309);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c32a;}}
}
B55c30b:L55c30b:{c.instructions+=3;NFSU2_TR(0x55c30b);
u8 U[4];
w4(U+0,u32(0x5dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c30d:{NFSU2_TR(0x55c30d);
__builtin_memmove((R+4),(R+24),4);
}
B55c30f:{NFSU2_TR(0x55c30f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c314ull));
TAIL_STATIC(0x6102f0u,610);
}
B55c314:L55c314:{c.instructions+=2;NFSU2_TR(0x55c314);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55c316:{NFSU2_TR(0x55c316);
if(r1(R+518)){{goto L55c32a;}}
}
B55c318:L55c318:{c.instructions+=4;NFSU2_TR(0x55c318);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55c31b:{NFSU2_TR(0x55c31b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B55c31e:{NFSU2_TR(0x55c31e);
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
B55c320:{NFSU2_TR(0x55c320);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L55c32a;}}
}
B55c322:L55c322:{c.instructions+=1;NFSU2_TR(0x55c322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c325:L55c325:{c.instructions+=1;NFSU2_TR(0x55c325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c32aull));
TAIL_STATIC(0x50ece0u,50e);
}
B55c32a:L55c32a:{c.instructions+=4;NFSU2_TR(0x55c32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55c32d:{NFSU2_TR(0x55c32d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c32e:{NFSU2_TR(0x55c32e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55c331:{NFSU2_TR(0x55c331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c336ull));
TAIL_STATIC(0x413440u,413);
}
B55c336:L55c336:{c.instructions+=4;NFSU2_TR(0x55c336);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c338:{NFSU2_TR(0x55c338);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c33a:{NFSU2_TR(0x55c33a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c33b:{NFSU2_TR(0x55c33b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c340ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55c340:L55c340:{c.instructions+=5;NFSU2_TR(0x55c340);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c343:{NFSU2_TR(0x55c343);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55c346:{NFSU2_TR(0x55c346);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c347:{NFSU2_TR(0x55c347);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B55c34a:{NFSU2_TR(0x55c34a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c34full));
TAIL_STATIC(0x503950u,503);
}
B55c34f:L55c34f:{c.instructions+=4;NFSU2_TR(0x55c34f);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c354:{NFSU2_TR(0x55c354);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c359:{NFSU2_TR(0x55c359);
w4(R+4,u32(0x8637d0ull));
}
B55c35e:{NFSU2_TR(0x55c35e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c363ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55c363:L55c363:{c.instructions+=2;NFSU2_TR(0x55c363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c364:{NFSU2_TR(0x55c364);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c365:L55c365:{c.instructions+=4;NFSU2_TR(0x55c365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c366:{NFSU2_TR(0x55c366);
__builtin_memmove((R+16),(R+20),4);
}
B55c368:{NFSU2_TR(0x55c368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c369:{NFSU2_TR(0x55c369);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c370:L55c370:{c.instructions+=7;NFSU2_TR(0x55c370);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c371:{NFSU2_TR(0x55c371);
__builtin_memmove((R+20),(R+16),4);
}
B55c373:{NFSU2_TR(0x55c373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c376:{NFSU2_TR(0x55c376);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c379:{NFSU2_TR(0x55c379);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c37a:{NFSU2_TR(0x55c37a);
__builtin_memmove((R+12),(R+4),4);
}
B55c37c:{NFSU2_TR(0x55c37c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55c456;}}
}
B55c382:L55c382:{c.instructions+=2;NFSU2_TR(0x55c382);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c385:{NFSU2_TR(0x55c385);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L55c456;}}
}
B55c38b:L55c38b:{c.instructions+=4;NFSU2_TR(0x55c38b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c38c:{NFSU2_TR(0x55c38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55c38f:{NFSU2_TR(0x55c38f);
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
B55c391:{NFSU2_TR(0x55c391);
if(r1(R+518)){{goto L55c455;}}
}
B55c397:L55c397:{c.instructions+=2;NFSU2_TR(0x55c397);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c398:{NFSU2_TR(0x55c398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c39dull));
TAIL_STATIC(0x50ef10u,50e);
}
B55c39d:L55c39d:{c.instructions+=2;NFSU2_TR(0x55c39d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55c39f:{NFSU2_TR(0x55c39f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c40c;}}
}
B55c3a1:L55c3a1:{c.instructions+=2;NFSU2_TR(0x55c3a1);
__builtin_memmove((R+4),(R+12),4);
}
B55c3a3:{NFSU2_TR(0x55c3a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c3a8ull));
TAIL_STATIC(0x521580u,521);
}
B55c3a8:L55c3a8:{c.instructions+=2;NFSU2_TR(0x55c3a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55c3aa:{NFSU2_TR(0x55c3aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c40c;}}
}
B55c3ac:L55c3ac:{c.instructions+=4;NFSU2_TR(0x55c3ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c3ae:{NFSU2_TR(0x55c3ae);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c3b3:{NFSU2_TR(0x55c3b3);
__builtin_memmove((R+4),(R+24),4);
}
B55c3b5:{NFSU2_TR(0x55c3b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c3baull));
TAIL_STATIC(0x61b500u,61b);
}
B55c3ba:L55c3ba:{c.instructions+=2;NFSU2_TR(0x55c3ba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c3bd:{NFSU2_TR(0x55c3bd);
if(r1(R+518)){{goto L55c40c;}}
}
B55c3bf:L55c3bf:{c.instructions+=4;NFSU2_TR(0x55c3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c3c2:{NFSU2_TR(0x55c3c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55c3c5:{NFSU2_TR(0x55c3c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c3c7:{NFSU2_TR(0x55c3c7);
if(r1(R+518)){{goto L55c402;}}
}
B55c3c9:L55c3c9:{c.instructions+=3;NFSU2_TR(0x55c3c9);
__builtin_memmove((R+28),(R+4),4);
}
B55c3cb:{NFSU2_TR(0x55c3cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c3cd:{NFSU2_TR(0x55c3cd);
if(r1(R+518)){{goto L55c402;}}
}
B55c3cf:L55c3cf:{c.instructions+=1;NFSU2_TR(0x55c3cf);
}
B55c3d0:L55c3d0:{c.instructions+=3;NFSU2_TR(0x55c3d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55c3d3:{NFSU2_TR(0x55c3d3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55c3d6:{NFSU2_TR(0x55c3d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55c3dd;}}
}
B55c3d8:L55c3d8:{c.instructions+=2;NFSU2_TR(0x55c3d8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c3db:{NFSU2_TR(0x55c3db);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L55c3e9;}}
}
B55c3dd:L55c3dd:{c.instructions+=3;NFSU2_TR(0x55c3dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c3de:{NFSU2_TR(0x55c3de);
__builtin_memmove((R+4),(R+12),4);
}
B55c3e0:{NFSU2_TR(0x55c3e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c3e5ull));
TAIL_STATIC(0x50e170u,50e);
}
B55c3e5:L55c3e5:{c.instructions+=2;NFSU2_TR(0x55c3e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55c3e7:{NFSU2_TR(0x55c3e7);
if(r1(R+518)){{goto L55c3f6;}}
}
B55c3e9:L55c3e9:{c.instructions+=5;NFSU2_TR(0x55c3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c3ec:{NFSU2_TR(0x55c3ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c3ed:{NFSU2_TR(0x55c3ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c3ee:{NFSU2_TR(0x55c3ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55c3f1:{NFSU2_TR(0x55c3f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c3f6ull));
TAIL_STATIC(0x631d20u,631);
}
B55c3f6:L55c3f6:{c.instructions+=4;NFSU2_TR(0x55c3f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B55c3f8:{NFSU2_TR(0x55c3f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55c3fb:{NFSU2_TR(0x55c3fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c3fd:{NFSU2_TR(0x55c3fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55c3d0u);}goto L55c3d0;}}
}
B55c3ff:L55c3ff:{c.instructions+=1;NFSU2_TR(0x55c3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55c402:L55c402:{c.instructions+=5;NFSU2_TR(0x55c402);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c405:{NFSU2_TR(0x55c405);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c406:{NFSU2_TR(0x55c406);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c409:{NFSU2_TR(0x55c409);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c40a:{NFSU2_TR(0x55c40a);
{goto L55c42c;}
}
B55c40c:L55c40c:{c.instructions+=2;NFSU2_TR(0x55c40c);
w4(R+24,u32(0x40ull));
}
B55c411:{NFSU2_TR(0x55c411);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c414:L55c414:{c.instructions+=4;NFSU2_TR(0x55c414);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c416:{NFSU2_TR(0x55c416);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c417:{NFSU2_TR(0x55c417);
__builtin_memmove((R+4),(R+28),4);
}
B55c419:{NFSU2_TR(0x55c419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c41eull));
TAIL_STATIC(0x631d20u,631);
}
B55c41e:L55c41e:{c.instructions+=3;NFSU2_TR(0x55c41e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B55c41f:{NFSU2_TR(0x55c41f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c422:{NFSU2_TR(0x55c422);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55c414u);}goto L55c414;}}
}
B55c424:L55c424:{c.instructions+=4;NFSU2_TR(0x55c424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55c427:{NFSU2_TR(0x55c427);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c42a:{NFSU2_TR(0x55c42a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c42b:{NFSU2_TR(0x55c42b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c42c:L55c42c:{c.instructions+=2;NFSU2_TR(0x55c42c);
__builtin_memmove((R+4),(R+28),4);
}
B55c42e:{NFSU2_TR(0x55c42e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c433ull));
TAIL_STATIC(0x631d20u,631);
}
B55c433:L55c433:{c.instructions+=4;NFSU2_TR(0x55c433);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c435:{NFSU2_TR(0x55c435);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c437:{NFSU2_TR(0x55c437);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c438:{NFSU2_TR(0x55c438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c43dull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55c43d:L55c43d:{c.instructions+=5;NFSU2_TR(0x55c43d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55c440:{NFSU2_TR(0x55c440);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c445:{NFSU2_TR(0x55c445);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c44a:{NFSU2_TR(0x55c44a);
w4(R+4,u32(0x8637d0ull));
}
B55c44f:{NFSU2_TR(0x55c44f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c454ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55c454:L55c454:{c.instructions+=1;NFSU2_TR(0x55c454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c455:L55c455:{c.instructions+=1;NFSU2_TR(0x55c455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c456:L55c456:{c.instructions+=3;NFSU2_TR(0x55c456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c457:{NFSU2_TR(0x55c457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c458:{NFSU2_TR(0x55c458);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c460:L55c460:{c.instructions+=11;NFSU2_TR(0x55c460);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c461:{NFSU2_TR(0x55c461);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c462:{NFSU2_TR(0x55c462);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c463:{NFSU2_TR(0x55c463);
__builtin_memmove((R+12),(R+4),4);
}
B55c465:{NFSU2_TR(0x55c465);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c466:{NFSU2_TR(0x55c466);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x940ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c46c:{NFSU2_TR(0x55c46c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c46f:{NFSU2_TR(0x55c46f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c470:{NFSU2_TR(0x55c470);
__builtin_memmove((R+4),(R+28),4);
}
B55c472:{NFSU2_TR(0x55c472);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c476:{NFSU2_TR(0x55c476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c47bull));
TAIL_STATIC(0x413440u,413);
}
B55c47b:L55c47b:{c.instructions+=4;NFSU2_TR(0x55c47b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c47d:{NFSU2_TR(0x55c47d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c47f:{NFSU2_TR(0x55c47f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c480:{NFSU2_TR(0x55c480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c485ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55c485:L55c485:{c.instructions+=5;NFSU2_TR(0x55c485);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c488:{NFSU2_TR(0x55c488);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55c48b:{NFSU2_TR(0x55c48b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55c48e:{NFSU2_TR(0x55c48e);
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
B55c490:{NFSU2_TR(0x55c490);
if(r1(R+518)){{goto L55c511;}}
}
B55c492:L55c492:{c.instructions+=3;NFSU2_TR(0x55c492);
__builtin_memmove((R+12),(R+4),4);
}
B55c494:{NFSU2_TR(0x55c494);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c496:{NFSU2_TR(0x55c496);
if(r1(R+518)){{goto L55c504;}}
}
B55c498:L55c498:{c.instructions+=3;NFSU2_TR(0x55c498);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c49b:{NFSU2_TR(0x55c49b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55c49e:{NFSU2_TR(0x55c49e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55c4e8;}}
}
B55c4a0:L55c4a0:{c.instructions+=2;NFSU2_TR(0x55c4a0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c4a3:{NFSU2_TR(0x55c4a3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L55c4e8;}}
}
B55c4a5:L55c4a5:{c.instructions+=2;NFSU2_TR(0x55c4a5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c4a9:{NFSU2_TR(0x55c4a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c4aeull));
TAIL_STATIC(0x50ef10u,50e);
}
B55c4ae:L55c4ae:{c.instructions+=2;NFSU2_TR(0x55c4ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55c4b0:{NFSU2_TR(0x55c4b0);
if(r1(R+518)){{goto L55c4e8;}}
}
B55c4b2:L55c4b2:{c.instructions+=1;NFSU2_TR(0x55c4b2);
w4(R+24,u32(0x40ull));
}
B55c4b7:L55c4b7:{c.instructions+=4;NFSU2_TR(0x55c4b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c4b9:{NFSU2_TR(0x55c4b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c4ba:{NFSU2_TR(0x55c4ba);
__builtin_memmove((R+4),(R+28),4);
}
B55c4bc:{NFSU2_TR(0x55c4bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c4c1ull));
TAIL_STATIC(0x631d20u,631);
}
B55c4c1:L55c4c1:{c.instructions+=4;NFSU2_TR(0x55c4c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c4c3:{NFSU2_TR(0x55c4c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c4c5:{NFSU2_TR(0x55c4c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c4c6:{NFSU2_TR(0x55c4c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c4cbull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55c4cb:L55c4cb:{c.instructions+=5;NFSU2_TR(0x55c4cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55c4ce:{NFSU2_TR(0x55c4ce);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c4d3:{NFSU2_TR(0x55c4d3);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c4d8:{NFSU2_TR(0x55c4d8);
w4(R+4,u32(0x8637d0ull));
}
B55c4dd:{NFSU2_TR(0x55c4dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c4e2ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55c4e2:L55c4e2:{c.instructions+=3;NFSU2_TR(0x55c4e2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B55c4e3:{NFSU2_TR(0x55c4e3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c4e6:{NFSU2_TR(0x55c4e6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55c4b7u);}goto L55c4b7;}}
}
B55c4e8:L55c4e8:{c.instructions+=6;NFSU2_TR(0x55c4e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c4eb:{NFSU2_TR(0x55c4eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c4ee:{NFSU2_TR(0x55c4ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c4ef:{NFSU2_TR(0x55c4ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c4f0:{NFSU2_TR(0x55c4f0);
__builtin_memmove((R+4),(R+28),4);
}
B55c4f2:{NFSU2_TR(0x55c4f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c4f7ull));
TAIL_STATIC(0x631d20u,631);
}
B55c4f7:L55c4f7:{c.instructions+=5;NFSU2_TR(0x55c4f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c4fb:{NFSU2_TR(0x55c4fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B55c4fd:{NFSU2_TR(0x55c4fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
}
B55c500:{NFSU2_TR(0x55c500);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c502:{NFSU2_TR(0x55c502);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55c498u);}goto L55c498;}}
}
B55c504:L55c504:{c.instructions+=4;NFSU2_TR(0x55c504);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c506:{NFSU2_TR(0x55c506);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c508:{NFSU2_TR(0x55c508);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c509:{NFSU2_TR(0x55c509);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c50eull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55c50e:L55c50e:{c.instructions+=1;NFSU2_TR(0x55c50e);
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
B55c511:L55c511:{c.instructions+=5;NFSU2_TR(0x55c511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c512:{NFSU2_TR(0x55c512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c513:{NFSU2_TR(0x55c513);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c514:{NFSU2_TR(0x55c514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55c515:{NFSU2_TR(0x55c515);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c520:L55c520:{c.instructions+=11;NFSU2_TR(0x55c520);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c521:{NFSU2_TR(0x55c521);
__builtin_memmove((R+20),(R+16),4);
}
B55c523:{NFSU2_TR(0x55c523);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c524:{NFSU2_TR(0x55c524);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55c527:{NFSU2_TR(0x55c527);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c528:{NFSU2_TR(0x55c528);
__builtin_memmove((R+24),(R+4),4);
}
B55c52a:{NFSU2_TR(0x55c52a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55c530:{NFSU2_TR(0x55c530);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55c532:{NFSU2_TR(0x55c532);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c533:{NFSU2_TR(0x55c533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55c536:{NFSU2_TR(0x55c536);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c549;}}
}
B55c538:L55c538:{c.instructions+=8;NFSU2_TR(0x55c538);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c53b:{NFSU2_TR(0x55c53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c53e:{NFSU2_TR(0x55c53e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c53f:{NFSU2_TR(0x55c53f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c540:{NFSU2_TR(0x55c540);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c541:{NFSU2_TR(0x55c541);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c542:{NFSU2_TR(0x55c542);
__builtin_memmove((R+4),(R+24),4);
}
B55c544:{NFSU2_TR(0x55c544);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c549ull));
TAIL_STATIC(0x543d40u,543);
}
B55c549:L55c549:{c.instructions+=2;NFSU2_TR(0x55c549);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c54f:{NFSU2_TR(0x55c54f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55c779;}}
}
B55c555:L55c555:{c.instructions+=1;NFSU2_TR(0x55c555);
if(r1(R+518)){{goto L55c698;}}
}
B55c55b:L55c55b:{c.instructions+=2;NFSU2_TR(0x55c55b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x34dc1becull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c561:{NFSU2_TR(0x55c561);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55c668;}}
}
B55c567:L55c567:{c.instructions+=1;NFSU2_TR(0x55c567);
if(r1(R+518)){{goto L55c647;}}
}
B55c56d:L55c56d:{c.instructions+=2;NFSU2_TR(0x55c56d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c573:{NFSU2_TR(0x55c573);
if(r1(R+518)){{goto L55c59b;}}
}
B55c575:L55c575:{c.instructions+=2;NFSU2_TR(0x55c575);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x1fab5998ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1fab5998ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1fab5998ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c57b:{NFSU2_TR(0x55c57b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c581:L55c581:{c.instructions+=2;NFSU2_TR(0x55c581);
__builtin_memmove((R+4),(R+24),4);
}
B55c583:{NFSU2_TR(0x55c583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c588ull));
TAIL_STATIC(0x538ca0u,538);
}
B55c588:L55c588:{c.instructions+=2;NFSU2_TR(0x55c588);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55c58f:{NFSU2_TR(0x55c58f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c594ull));
TAIL_STATIC(0x53b660u,53b);
}
B55c594:L55c594:{c.instructions+=5;NFSU2_TR(0x55c594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c595:{NFSU2_TR(0x55c595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c596:{NFSU2_TR(0x55c596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c597:{NFSU2_TR(0x55c597);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c598:{NFSU2_TR(0x55c598);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c59b:L55c59b:{c.instructions+=3;NFSU2_TR(0x55c59b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55c5a1:{NFSU2_TR(0x55c5a1);
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
B55c5a3:{NFSU2_TR(0x55c5a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c5a9:L55c5a9:{c.instructions+=5;NFSU2_TR(0x55c5a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c5ac:{NFSU2_TR(0x55c5ac);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c5b1:{NFSU2_TR(0x55c5b1);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c5b6:{NFSU2_TR(0x55c5b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c5b7:{NFSU2_TR(0x55c5b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c5bcull));
TAIL_STATIC(0x537d40u,537);
}
B55c5bc:L55c5bc:{c.instructions+=3;NFSU2_TR(0x55c5bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55c5bf:{NFSU2_TR(0x55c5bf);
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
B55c5c1:{NFSU2_TR(0x55c5c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c5c7:L55c5c7:{c.instructions+=3;NFSU2_TR(0x55c5c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c5ca:{NFSU2_TR(0x55c5ca);
__builtin_memmove((R+4),(R+28),4);
}
B55c5cc:{NFSU2_TR(0x55c5cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c5d1ull));
TAIL_STATIC(0x527700u,527);
}
B55c5d1:L55c5d1:{c.instructions+=3;NFSU2_TR(0x55c5d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55c5d3:{NFSU2_TR(0x55c5d3);
w4(R+12,u32(0x1ull));
}
B55c5d8:{NFSU2_TR(0x55c5d8);
if(r1(R+518)){{goto L55c5eb;}}
}
B55c5da:L55c5da:{c.instructions+=2;NFSU2_TR(0x55c5da);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c5e0:{NFSU2_TR(0x55c5e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c5eb;}}
}
B55c5e2:L55c5e2:{c.instructions+=3;NFSU2_TR(0x55c5e2);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B55c5e7:{NFSU2_TR(0x55c5e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55c5e9:{NFSU2_TR(0x55c5e9);
if(r1(R+518)){{goto L55c635;}}
}
B55c5eb:L55c5eb:{c.instructions+=4;NFSU2_TR(0x55c5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55c5ee:{NFSU2_TR(0x55c5ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55c5f1:{NFSU2_TR(0x55c5f1);
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
B55c5f3:{NFSU2_TR(0x55c5f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c5f9:L55c5f9:{c.instructions+=5;NFSU2_TR(0x55c5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c5fc:{NFSU2_TR(0x55c5fc);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c601:{NFSU2_TR(0x55c601);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c606:{NFSU2_TR(0x55c606);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c607:{NFSU2_TR(0x55c607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c60cull));
TAIL_STATIC(0x537d40u,537);
}
B55c60c:L55c60c:{c.instructions+=3;NFSU2_TR(0x55c60c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55c60f:{NFSU2_TR(0x55c60f);
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
B55c611:{NFSU2_TR(0x55c611);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c617:L55c617:{c.instructions+=2;NFSU2_TR(0x55c617);
__builtin_memmove((R+4),(R+28),4);
}
B55c619:{NFSU2_TR(0x55c619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c61eull));
TAIL_STATIC(0x51fd10u,51f);
}
B55c61e:L55c61e:{c.instructions+=6;NFSU2_TR(0x55c61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c621:{NFSU2_TR(0x55c621);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c622:{NFSU2_TR(0x55c622);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c627:{NFSU2_TR(0x55c627);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c62c:{NFSU2_TR(0x55c62c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c62d:{NFSU2_TR(0x55c62d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c632ull));
TAIL_STATIC(0x537c60u,537);
}
B55c632:L55c632:{c.instructions+=1;NFSU2_TR(0x55c632);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55c635:L55c635:{c.instructions+=2;NFSU2_TR(0x55c635);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55c63b:{NFSU2_TR(0x55c63b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c640ull));
TAIL_STATIC(0x53b630u,53b);
}
B55c640:L55c640:{c.instructions+=5;NFSU2_TR(0x55c640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c641:{NFSU2_TR(0x55c641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c642:{NFSU2_TR(0x55c642);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c643:{NFSU2_TR(0x55c643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c644:{NFSU2_TR(0x55c644);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c647:L55c647:{c.instructions+=2;NFSU2_TR(0x55c647);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c648:{NFSU2_TR(0x55c648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c64dull));
TAIL_STATIC(0x50d2a0u,50d);
}
B55c64d:L55c64d:{c.instructions+=3;NFSU2_TR(0x55c64d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55c650:{NFSU2_TR(0x55c650);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B55c655:{NFSU2_TR(0x55c655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c65aull));
TAIL_STATIC(0x53b660u,53b);
}
B55c65a:L55c65a:{c.instructions+=2;NFSU2_TR(0x55c65a);
__builtin_memmove((R+4),(R+24),4);
}
B55c65c:{NFSU2_TR(0x55c65c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c661ull));
TAIL_STATIC(0x54ff30u,54f);
}
B55c661:L55c661:{c.instructions+=5;NFSU2_TR(0x55c661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c662:{NFSU2_TR(0x55c662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c663:{NFSU2_TR(0x55c663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c664:{NFSU2_TR(0x55c664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c665:{NFSU2_TR(0x55c665);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c668:L55c668:{c.instructions+=2;NFSU2_TR(0x55c668);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x35f8620bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c66e:{NFSU2_TR(0x55c66e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c674:L55c674:{c.instructions+=3;NFSU2_TR(0x55c674);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c676:{NFSU2_TR(0x55c676);
w4(R+4,u32(0x8635bcull));
}
B55c67b:{NFSU2_TR(0x55c67b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c680ull));
TAIL_STATIC(0x5243d0u,524);
}
B55c680:L55c680:{c.instructions+=3;NFSU2_TR(0x55c680);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c682:{NFSU2_TR(0x55c682);
w4(R+4,u32(0x83a9d0ull));
}
B55c687:{NFSU2_TR(0x55c687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c68cull));
TAIL_STATIC(0x52a460u,52a);
}
B55c68c:L55c68c:{c.instructions+=1;NFSU2_TR(0x55c68c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c691ull));
TAIL_STATIC(0x53b660u,53b);
}
B55c691:L55c691:{c.instructions+=5;NFSU2_TR(0x55c691);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c692:{NFSU2_TR(0x55c692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c693:{NFSU2_TR(0x55c693);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c694:{NFSU2_TR(0x55c694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c695:{NFSU2_TR(0x55c695);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c698:L55c698:{c.instructions+=3;NFSU2_TR(0x55c698);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55c69e:{NFSU2_TR(0x55c69e);
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
B55c6a0:{NFSU2_TR(0x55c6a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c6a6:L55c6a6:{c.instructions+=5;NFSU2_TR(0x55c6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c6a9:{NFSU2_TR(0x55c6a9);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c6ae:{NFSU2_TR(0x55c6ae);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c6b3:{NFSU2_TR(0x55c6b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c6b4:{NFSU2_TR(0x55c6b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c6b9ull));
TAIL_STATIC(0x537d40u,537);
}
B55c6b9:L55c6b9:{c.instructions+=3;NFSU2_TR(0x55c6b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55c6bc:{NFSU2_TR(0x55c6bc);
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
B55c6be:{NFSU2_TR(0x55c6be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c6c4:L55c6c4:{c.instructions+=3;NFSU2_TR(0x55c6c4);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B55c6c9:{NFSU2_TR(0x55c6c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55c6cb:{NFSU2_TR(0x55c6cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c711;}}
}
B55c6cd:L55c6cd:{c.instructions+=1;NFSU2_TR(0x55c6cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c6d2ull));
TAIL_STATIC(0x53b630u,53b);
}
B55c6d2:L55c6d2:{c.instructions+=11;NFSU2_TR(0x55c6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c6d5:{NFSU2_TR(0x55c6d5);
u8 U[4];
w4(U+0,u32(0xd76e0b5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c6da:{NFSU2_TR(0x55c6da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c6dc:{NFSU2_TR(0x55c6dc);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c6e1:{NFSU2_TR(0x55c6e1);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c6e6:{NFSU2_TR(0x55c6e6);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c6eb:{NFSU2_TR(0x55c6eb);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c6f0:{NFSU2_TR(0x55c6f0);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c6f5:{NFSU2_TR(0x55c6f5);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c6fa:{NFSU2_TR(0x55c6fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c6fb:{NFSU2_TR(0x55c6fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c700ull));
TAIL_STATIC(0x558790u,558);
}
B55c700:L55c700:{c.instructions+=3;NFSU2_TR(0x55c700);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B55c703:{NFSU2_TR(0x55c703);
__builtin_memmove((R+4),(R+24),4);
}
B55c705:{NFSU2_TR(0x55c705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c70aull));
TAIL_STATIC(0x538c00u,538);
}
B55c70a:L55c70a:{c.instructions+=5;NFSU2_TR(0x55c70a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c70b:{NFSU2_TR(0x55c70b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c70c:{NFSU2_TR(0x55c70c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c70d:{NFSU2_TR(0x55c70d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c70e:{NFSU2_TR(0x55c70e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c711:L55c711:{c.instructions+=5;NFSU2_TR(0x55c711);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c714:{NFSU2_TR(0x55c714);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c719:{NFSU2_TR(0x55c719);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c71e:{NFSU2_TR(0x55c71e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c71f:{NFSU2_TR(0x55c71f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c724ull));
TAIL_STATIC(0x537d40u,537);
}
B55c724:L55c724:{c.instructions+=3;NFSU2_TR(0x55c724);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55c727:{NFSU2_TR(0x55c727);
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
B55c729:{NFSU2_TR(0x55c729);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c72f:L55c72f:{c.instructions+=2;NFSU2_TR(0x55c72f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c730:{NFSU2_TR(0x55c730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c735ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B55c735:L55c735:{c.instructions+=6;NFSU2_TR(0x55c735);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B55c73a:{NFSU2_TR(0x55c73a);
w4(R+12,u32(0x1ull));
}
B55c73f:{NFSU2_TR(0x55c73f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55c742:{NFSU2_TR(0x55c742);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55c748:{NFSU2_TR(0x55c748);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x152ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55c74e:{NFSU2_TR(0x55c74e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c753ull));
TAIL_STATIC(0x53b630u,53b);
}
B55c753:L55c753:{c.instructions+=2;NFSU2_TR(0x55c753);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55c756:{NFSU2_TR(0x55c756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c75bull));
TAIL_STATIC(0x51fd10u,51f);
}
B55c75b:L55c75b:{c.instructions+=6;NFSU2_TR(0x55c75b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55c75e:{NFSU2_TR(0x55c75e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c75f:{NFSU2_TR(0x55c75f);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c764:{NFSU2_TR(0x55c764);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c769:{NFSU2_TR(0x55c769);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c76a:{NFSU2_TR(0x55c76a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c76full));
TAIL_STATIC(0x537c60u,537);
}
B55c76f:L55c76f:{c.instructions+=6;NFSU2_TR(0x55c76f);
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
B55c772:{NFSU2_TR(0x55c772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c773:{NFSU2_TR(0x55c773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c774:{NFSU2_TR(0x55c774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c775:{NFSU2_TR(0x55c775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c776:{NFSU2_TR(0x55c776);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c779:L55c779:{c.instructions+=2;NFSU2_TR(0x55c779);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xd05fc3a3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd05fc3a3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c77f:{NFSU2_TR(0x55c77f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55c845;}}
}
B55c785:L55c785:{c.instructions+=1;NFSU2_TR(0x55c785);
if(r1(R+518)){{goto L55c7ef;}}
}
B55c787:L55c787:{c.instructions+=2;NFSU2_TR(0x55c787);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c78d:{NFSU2_TR(0x55c78d);
if(r1(R+518)){{goto L55c7d5;}}
}
B55c78f:L55c78f:{c.instructions+=2;NFSU2_TR(0x55c78f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc519bfc3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc519bfc3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc519bfc3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c795:{NFSU2_TR(0x55c795);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c79b:L55c79b:{c.instructions+=3;NFSU2_TR(0x55c79b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55c7a1:{NFSU2_TR(0x55c7a1);
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
B55c7a3:{NFSU2_TR(0x55c7a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c7a9:L55c7a9:{c.instructions+=5;NFSU2_TR(0x55c7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c7ac:{NFSU2_TR(0x55c7ac);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c7b1:{NFSU2_TR(0x55c7b1);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c7b6:{NFSU2_TR(0x55c7b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c7b7:{NFSU2_TR(0x55c7b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c7bcull));
TAIL_STATIC(0x537d40u,537);
}
B55c7bc:L55c7bc:{c.instructions+=3;NFSU2_TR(0x55c7bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55c7bf:{NFSU2_TR(0x55c7bf);
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
B55c7c1:{NFSU2_TR(0x55c7c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c7c7:L55c7c7:{c.instructions+=6;NFSU2_TR(0x55c7c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c7c8:{NFSU2_TR(0x55c7c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x151ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55c7cf:{NFSU2_TR(0x55c7cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c7d0:{NFSU2_TR(0x55c7d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c7d1:{NFSU2_TR(0x55c7d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c7d2:{NFSU2_TR(0x55c7d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c7d5:L55c7d5:{c.instructions+=2;NFSU2_TR(0x55c7d5);
__builtin_memmove((R+4),(R+24),4);
}
B55c7d7:{NFSU2_TR(0x55c7d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c7dcull));
TAIL_STATIC(0x538ca0u,538);
}
B55c7dc:L55c7dc:{c.instructions+=2;NFSU2_TR(0x55c7dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x151ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55c7e3:{NFSU2_TR(0x55c7e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c7e8ull));
TAIL_STATIC(0x53b660u,53b);
}
B55c7e8:L55c7e8:{c.instructions+=5;NFSU2_TR(0x55c7e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c7e9:{NFSU2_TR(0x55c7e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c7ea:{NFSU2_TR(0x55c7ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c7eb:{NFSU2_TR(0x55c7eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c7ec:{NFSU2_TR(0x55c7ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c7ef:L55c7ef:{c.instructions+=6;NFSU2_TR(0x55c7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c7f2:{NFSU2_TR(0x55c7f2);
w4(R+12,u32(0x1ull));
}
B55c7f7:{NFSU2_TR(0x55c7f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c7f8:{NFSU2_TR(0x55c7f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55c7fe:{NFSU2_TR(0x55c7fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x152ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55c804:{NFSU2_TR(0x55c804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c809ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B55c809:L55c809:{c.instructions+=4;NFSU2_TR(0x55c809);
__builtin_memmove((R+4),gp(0x7fa1b4),4);
}
B55c80f:{NFSU2_TR(0x55c80f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c810:{NFSU2_TR(0x55c810);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B55c815:{NFSU2_TR(0x55c815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c81aull));
TAIL_STATIC(0x52cef0u,52c);
}
B55c81a:L55c81a:{c.instructions+=3;NFSU2_TR(0x55c81a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55c81d:{NFSU2_TR(0x55c81d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55c81f:{NFSU2_TR(0x55c81f);
if(r1(R+518)){{goto L55c832;}}
}
B55c821:L55c821:{c.instructions+=5;NFSU2_TR(0x55c821);
w4(R+4,u32(0xffull));
}
B55c826:{NFSU2_TR(0x55c826);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c829:{NFSU2_TR(0x55c829);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c82c:{NFSU2_TR(0x55c82c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c82f:{NFSU2_TR(0x55c82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c832:L55c832:{c.instructions+=3;NFSU2_TR(0x55c832);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55c835:{NFSU2_TR(0x55c835);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c836:{NFSU2_TR(0x55c836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c83bull));
TAIL_STATIC(0x552c80u,552);
}
B55c83b:L55c83b:{c.instructions+=6;NFSU2_TR(0x55c83b);
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
B55c83e:{NFSU2_TR(0x55c83e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c83f:{NFSU2_TR(0x55c83f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c840:{NFSU2_TR(0x55c840);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c841:{NFSU2_TR(0x55c841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c842:{NFSU2_TR(0x55c842);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c845:L55c845:{c.instructions+=2;NFSU2_TR(0x55c845);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c84b:{NFSU2_TR(0x55c84b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c8c7;}}
}
B55c84d:L55c84d:{c.instructions+=3;NFSU2_TR(0x55c84d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x152ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55c853:{NFSU2_TR(0x55c853);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55c855:{NFSU2_TR(0x55c855);
if(r1(R+518)){{goto L55c8a3;}}
}
B55c857:L55c857:{c.instructions+=3;NFSU2_TR(0x55c857);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c85a:{NFSU2_TR(0x55c85a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c85b:{NFSU2_TR(0x55c85b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c860ull));
TAIL_STATIC(0x505450u,505);
}
B55c860:L55c860:{c.instructions+=2;NFSU2_TR(0x55c860);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c861:{NFSU2_TR(0x55c861);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c866ull));
TAIL_STATIC(0x50b840u,50b);
}
B55c866:L55c866:{c.instructions+=3;NFSU2_TR(0x55c866);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55c869:{NFSU2_TR(0x55c869);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55c86b:{NFSU2_TR(0x55c86b);
if(r1(R+518)){{goto L55c874;}}
}
B55c86d:L55c86d:{c.instructions+=1;NFSU2_TR(0x55c86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55c874:L55c874:{c.instructions+=3;NFSU2_TR(0x55c874);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B55c879:{NFSU2_TR(0x55c879);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55c87b:{NFSU2_TR(0x55c87b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55c890;}}
}
B55c87d:L55c87d:{c.instructions+=3;NFSU2_TR(0x55c87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c880:{NFSU2_TR(0x55c880);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c881:{NFSU2_TR(0x55c881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c886ull));
TAIL_STATIC(0x552c80u,552);
}
B55c886:L55c886:{c.instructions+=6;NFSU2_TR(0x55c886);
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
B55c889:{NFSU2_TR(0x55c889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c88a:{NFSU2_TR(0x55c88a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c88b:{NFSU2_TR(0x55c88b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c88c:{NFSU2_TR(0x55c88c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c88d:{NFSU2_TR(0x55c88d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c890:L55c890:{c.instructions+=1;NFSU2_TR(0x55c890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c895ull));
TAIL_STATIC(0x54f980u,54f);
}
B55c895:L55c895:{c.instructions+=2;NFSU2_TR(0x55c895);
__builtin_memmove((R+4),(R+0),4);
}
B55c897:{NFSU2_TR(0x55c897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c89cull));
TAIL_STATIC(0x55bdf0u,55b);
}
B55c89c:L55c89c:{c.instructions+=5;NFSU2_TR(0x55c89c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c89d:{NFSU2_TR(0x55c89d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c89e:{NFSU2_TR(0x55c89e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c89f:{NFSU2_TR(0x55c89f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c8a0:{NFSU2_TR(0x55c8a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c8a3:L55c8a3:{c.instructions+=3;NFSU2_TR(0x55c8a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x151ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55c8a9:{NFSU2_TR(0x55c8a9);
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
B55c8ab:{NFSU2_TR(0x55c8ab);
if(r1(R+518)){{goto L55c8bb;}}
}
B55c8ad:L55c8ad:{c.instructions+=6;NFSU2_TR(0x55c8ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c8ae:{NFSU2_TR(0x55c8ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55c8b5:{NFSU2_TR(0x55c8b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c8b6:{NFSU2_TR(0x55c8b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c8b7:{NFSU2_TR(0x55c8b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c8b8:{NFSU2_TR(0x55c8b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c8bb:L55c8bb:{c.instructions+=1;NFSU2_TR(0x55c8bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c8c0ull));
TAIL_STATIC(0x54f980u,54f);
}
B55c8c0:L55c8c0:{c.instructions+=2;NFSU2_TR(0x55c8c0);
__builtin_memmove((R+4),(R+0),4);
}
B55c8c2:{NFSU2_TR(0x55c8c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c8c7ull));
TAIL_STATIC(0x55bd60u,55b);
}
B55c8c7:L55c8c7:{c.instructions+=5;NFSU2_TR(0x55c8c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c8c8:{NFSU2_TR(0x55c8c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c8c9:{NFSU2_TR(0x55c8c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c8ca:{NFSU2_TR(0x55c8ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c8cb:{NFSU2_TR(0x55c8cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c8d0:L55c8d0:{c.instructions+=8;NFSU2_TR(0x55c8d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c8d2:{NFSU2_TR(0x55c8d2);
u8 U[4];
w4(U+0,u32(0x778394ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c8d7:{NFSU2_TR(0x55c8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c8dd:{NFSU2_TR(0x55c8dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c8de:{NFSU2_TR(0x55c8de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c8e5:{NFSU2_TR(0x55c8e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c8e6:{NFSU2_TR(0x55c8e6);
u8 U[4];
w4(U+0,u32(0x250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c8eb:{NFSU2_TR(0x55c8eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c8f0ull));
TAIL_STATIC(0x575620u,575);
}
B55c8f0:L55c8f0:{c.instructions+=5;NFSU2_TR(0x55c8f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55c8f3:{NFSU2_TR(0x55c8f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B55c8f7:{NFSU2_TR(0x55c8f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55c8f9:{NFSU2_TR(0x55c8f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55c901:{NFSU2_TR(0x55c901);
if(r1(R+518)){{goto L55c91e;}}
}
B55c903:L55c903:{c.instructions+=4;NFSU2_TR(0x55c903);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c907:{NFSU2_TR(0x55c907);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c908:{NFSU2_TR(0x55c908);
__builtin_memmove((R+4),(R+0),4);
}
B55c90a:{NFSU2_TR(0x55c90a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c90full));
TAIL_STATIC(0x559c90u,559);
}
B55c90f:L55c90f:{c.instructions+=4;NFSU2_TR(0x55c90f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c913:{NFSU2_TR(0x55c913);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c91a:{NFSU2_TR(0x55c91a);
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
B55c91d:{NFSU2_TR(0x55c91d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c91e:L55c91e:{c.instructions+=5;NFSU2_TR(0x55c91e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c922:{NFSU2_TR(0x55c922);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55c924:{NFSU2_TR(0x55c924);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c92b:{NFSU2_TR(0x55c92b);
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
B55c92e:{NFSU2_TR(0x55c92e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c930:L55c930:{c.instructions+=16;NFSU2_TR(0x55c930);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c931:{NFSU2_TR(0x55c931);
__builtin_memmove((R+20),(R+16),4);
}
B55c933:{NFSU2_TR(0x55c933);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c936:{NFSU2_TR(0x55c936);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c937:{NFSU2_TR(0x55c937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55c93a:{NFSU2_TR(0x55c93a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c93b:{NFSU2_TR(0x55c93b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c93c:{NFSU2_TR(0x55c93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55c93f:{NFSU2_TR(0x55c93f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c940:{NFSU2_TR(0x55c940);
__builtin_memmove((R+24),(R+4),4);
}
B55c942:{NFSU2_TR(0x55c942);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c945:{NFSU2_TR(0x55c945);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c946:{NFSU2_TR(0x55c946);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c947:{NFSU2_TR(0x55c947);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c948:{NFSU2_TR(0x55c948);
__builtin_memmove((R+4),(R+24),4);
}
B55c94a:{NFSU2_TR(0x55c94a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c94full));
TAIL_STATIC(0x556020u,556);
}
B55c94f:L55c94f:{c.instructions+=2;NFSU2_TR(0x55c94f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x72619778ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c955:{NFSU2_TR(0x55c955);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55c9eb;}}
}
B55c95b:L55c95b:{c.instructions+=1;NFSU2_TR(0x55c95b);
if(r1(R+518)){{goto L55ca84;}}
}
B55c961:L55c961:{c.instructions+=2;NFSU2_TR(0x55c961);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c967:{NFSU2_TR(0x55c967);
if(r1(R+518)){{goto L55c98f;}}
}
B55c969:L55c969:{c.instructions+=2;NFSU2_TR(0x55c969);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x35f8620bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c96f:{NFSU2_TR(0x55c96f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cab4;}}
}
B55c975:L55c975:{c.instructions+=4;NFSU2_TR(0x55c975);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c978:{NFSU2_TR(0x55c978);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55c97b:{NFSU2_TR(0x55c97b);
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
B55c97d:{NFSU2_TR(0x55c97d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cab4;}}
}
B55c983:L55c983:{c.instructions+=2;NFSU2_TR(0x55c983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55c985:{NFSU2_TR(0x55c985);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c988ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55c988:L55c988:{c.instructions+=5;NFSU2_TR(0x55c988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c989:{NFSU2_TR(0x55c989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c98a:{NFSU2_TR(0x55c98a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c98b:{NFSU2_TR(0x55c98b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c98c:{NFSU2_TR(0x55c98c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c98f:L55c98f:{c.instructions+=5;NFSU2_TR(0x55c98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c992:{NFSU2_TR(0x55c992);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c997:{NFSU2_TR(0x55c997);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c99c:{NFSU2_TR(0x55c99c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c99d:{NFSU2_TR(0x55c99d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c9a2ull));
TAIL_STATIC(0x537d40u,537);
}
B55c9a2:L55c9a2:{c.instructions+=3;NFSU2_TR(0x55c9a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55c9a5:{NFSU2_TR(0x55c9a5);
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
B55c9a7:{NFSU2_TR(0x55c9a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cab4;}}
}
B55c9ad:L55c9ad:{c.instructions+=12;NFSU2_TR(0x55c9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55c9b0:{NFSU2_TR(0x55c9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55c9b3:{NFSU2_TR(0x55c9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55c9b6:{NFSU2_TR(0x55c9b6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c9b8:{NFSU2_TR(0x55c9b8);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c9bd:{NFSU2_TR(0x55c9bd);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c9c2:{NFSU2_TR(0x55c9c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55c9c3:{NFSU2_TR(0x55c9c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
w4(U+4,u32(0xc407210ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55c9cd:{NFSU2_TR(0x55c9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c9d0:{NFSU2_TR(0x55c9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c9d6:{NFSU2_TR(0x55c9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55c9dc:{NFSU2_TR(0x55c9dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55c9e1ull));
TAIL_STATIC(0x537c60u,537);
}
B55c9e1:L55c9e1:{c.instructions+=6;NFSU2_TR(0x55c9e1);
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
B55c9e4:{NFSU2_TR(0x55c9e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55c9e5:{NFSU2_TR(0x55c9e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55c9e6:{NFSU2_TR(0x55c9e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55c9e7:{NFSU2_TR(0x55c9e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55c9e8:{NFSU2_TR(0x55c9e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55c9eb:L55c9eb:{c.instructions+=2;NFSU2_TR(0x55c9eb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55c9f1:{NFSU2_TR(0x55c9f1);
if(r1(R+518)){{goto L55ca84;}}
}
B55c9f7:L55c9f7:{c.instructions+=2;NFSU2_TR(0x55c9f7);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55c9fd:{NFSU2_TR(0x55c9fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cab4;}}
}
B55ca03:L55ca03:{c.instructions+=2;NFSU2_TR(0x55ca03);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
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
B55ca0d:{NFSU2_TR(0x55ca0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cab4;}}
}
B55ca13:L55ca13:{c.instructions+=2;NFSU2_TR(0x55ca13);
__builtin_memmove((R+4),(R+24),4);
}
B55ca15:{NFSU2_TR(0x55ca15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ca1aull));
TAIL_STATIC(0x521ef0u,521);
}
B55ca1a:L55ca1a:{c.instructions+=3;NFSU2_TR(0x55ca1a);
__builtin_memmove((R+24),gp(0x839bb4),4);
}
B55ca20:{NFSU2_TR(0x55ca20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55ca22:{NFSU2_TR(0x55ca22);
if(r1(R+518)){{goto L55ca4f;}}
}
B55ca24:L55ca24:{c.instructions+=3;NFSU2_TR(0x55ca24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ca25:{NFSU2_TR(0x55ca25);
w4(R+4,u32(0x838980ull));
}
B55ca2a:{NFSU2_TR(0x55ca2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ca2full));
TAIL_STATIC(0x54fe50u,54f);
}
B55ca2f:L55ca2f:{c.instructions+=4;NFSU2_TR(0x55ca2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ca31:{NFSU2_TR(0x55ca31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ca32:{NFSU2_TR(0x55ca32);
w4(R+4,u32(0x838980ull));
}
B55ca37:{NFSU2_TR(0x55ca37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ca3cull));
TAIL_STATIC(0x521340u,521);
}
B55ca3c:L55ca3c:{c.instructions+=1;NFSU2_TR(0x55ca3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ca41ull));
TAIL_STATIC(0x54f980u,54f);
}
B55ca41:L55ca41:{c.instructions+=2;NFSU2_TR(0x55ca41);
__builtin_memmove((R+4),(R+0),4);
}
B55ca43:{NFSU2_TR(0x55ca43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ca48ull));
TAIL_STATIC(0x55bd60u,55b);
}
B55ca48:L55ca48:{c.instructions+=5;NFSU2_TR(0x55ca48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55ca49:{NFSU2_TR(0x55ca49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ca4a:{NFSU2_TR(0x55ca4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55ca4b:{NFSU2_TR(0x55ca4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55ca4c:{NFSU2_TR(0x55ca4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55ca4f:L55ca4f:{c.instructions+=3;NFSU2_TR(0x55ca4f);
__builtin_memmove((R+24),gp(0x839bb0),4);
}
B55ca55:{NFSU2_TR(0x55ca55);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55ca57:{NFSU2_TR(0x55ca57);
if(r1(R+518)){{goto L55ca71;}}
}
B55ca59:L55ca59:{c.instructions+=3;NFSU2_TR(0x55ca59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ca5a:{NFSU2_TR(0x55ca5a);
w4(R+4,u32(0x838980ull));
}
B55ca5f:{NFSU2_TR(0x55ca5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ca64ull));
TAIL_STATIC(0x521b00u,521);
}
B55ca64:L55ca64:{c.instructions+=4;NFSU2_TR(0x55ca64);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ca66:{NFSU2_TR(0x55ca66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ca67:{NFSU2_TR(0x55ca67);
w4(R+4,u32(0x838980ull));
}
B55ca6c:{NFSU2_TR(0x55ca6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ca71ull));
TAIL_STATIC(0x5213d0u,521);
}
B55ca71:L55ca71:{c.instructions+=1;NFSU2_TR(0x55ca71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ca76ull));
TAIL_STATIC(0x54f980u,54f);
}
B55ca76:L55ca76:{c.instructions+=2;NFSU2_TR(0x55ca76);
__builtin_memmove((R+4),(R+0),4);
}
B55ca78:{NFSU2_TR(0x55ca78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ca7dull));
TAIL_STATIC(0x55bd60u,55b);
}
B55ca7d:L55ca7d:{c.instructions+=5;NFSU2_TR(0x55ca7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55ca7e:{NFSU2_TR(0x55ca7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ca7f:{NFSU2_TR(0x55ca7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55ca80:{NFSU2_TR(0x55ca80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55ca81:{NFSU2_TR(0x55ca81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55ca84:L55ca84:{c.instructions+=5;NFSU2_TR(0x55ca84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ca87:{NFSU2_TR(0x55ca87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ca8a:{NFSU2_TR(0x55ca8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55ca8e:{NFSU2_TR(0x55ca8e);
u8 U[4];
w4(U+0,u32(0xb34a6c2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ca93:{NFSU2_TR(0x55ca93);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L55caa8;}}
}
B55ca95:L55ca95:{c.instructions+=3;NFSU2_TR(0x55ca95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ca98:{NFSU2_TR(0x55ca98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ca99:{NFSU2_TR(0x55ca99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ca9eull));
TAIL_STATIC(0x495520u,495);
}
B55ca9e:L55ca9e:{c.instructions+=6;NFSU2_TR(0x55ca9e);
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
B55caa1:{NFSU2_TR(0x55caa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55caa2:{NFSU2_TR(0x55caa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55caa3:{NFSU2_TR(0x55caa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55caa4:{NFSU2_TR(0x55caa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55caa5:{NFSU2_TR(0x55caa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55caa8:L55caa8:{c.instructions+=3;NFSU2_TR(0x55caa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55caab:{NFSU2_TR(0x55caab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55caac:{NFSU2_TR(0x55caac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cab1ull));
TAIL_STATIC(0x4954e0u,495);
}
B55cab1:L55cab1:{c.instructions+=1;NFSU2_TR(0x55cab1);
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
B55cab4:L55cab4:{c.instructions+=5;NFSU2_TR(0x55cab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55cab5:{NFSU2_TR(0x55cab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55cab6:{NFSU2_TR(0x55cab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55cab7:{NFSU2_TR(0x55cab7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55cab8:{NFSU2_TR(0x55cab8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55cac0:L55cac0:{c.instructions+=9;NFSU2_TR(0x55cac0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cac1:{NFSU2_TR(0x55cac1);
__builtin_memmove((R+20),(R+16),4);
}
B55cac3:{NFSU2_TR(0x55cac3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cac4:{NFSU2_TR(0x55cac4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cac5:{NFSU2_TR(0x55cac5);
__builtin_memmove((R+24),(R+4),4);
}
B55cac7:{NFSU2_TR(0x55cac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55caca:{NFSU2_TR(0x55caca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55cacd:{NFSU2_TR(0x55cacd);
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
B55cacf:{NFSU2_TR(0x55cacf);
if(r1(R+518)){{goto L55cc3d;}}
}
B55cad5:L55cad5:{c.instructions+=7;NFSU2_TR(0x55cad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cad8:{NFSU2_TR(0x55cad8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cad9:{NFSU2_TR(0x55cad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55cadc:{NFSU2_TR(0x55cadc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55cadf:{NFSU2_TR(0x55cadf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cae0:{NFSU2_TR(0x55cae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55cae3:{NFSU2_TR(0x55cae3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cb1f;}}
}
B55cae5:L55cae5:{c.instructions+=3;NFSU2_TR(0x55cae5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55cae8:{NFSU2_TR(0x55cae8);
__builtin_memmove((R+4),(R+28),4);
}
B55caea:{NFSU2_TR(0x55caea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55caefull));
TAIL_STATIC(0x495900u,495);
}
B55caef:L55caef:{c.instructions+=3;NFSU2_TR(0x55caef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55caf2:{NFSU2_TR(0x55caf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55caf4:{NFSU2_TR(0x55caf4);
if(r1(R+518)){{goto L55cafb;}}
}
B55caf6:L55caf6:{c.instructions+=2;NFSU2_TR(0x55caf6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55caf9:{NFSU2_TR(0x55caf9);
{goto L55cafd;}
}
B55cafb:L55cafb:{c.instructions+=1;NFSU2_TR(0x55cafb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55cafd:L55cafd:{c.instructions+=2;NFSU2_TR(0x55cafd);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55cb00:{NFSU2_TR(0x55cb00);
if(r1(R+518)){{goto L55cb4b;}}
}
B55cb02:L55cb02:{c.instructions+=4;NFSU2_TR(0x55cb02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cb05:{NFSU2_TR(0x55cb05);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x838082ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B55cb0c:{NFSU2_TR(0x55cb0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55cb0f:{NFSU2_TR(0x55cb0f);
if(r1(R+518)){{goto L55cb4b;}}
}
B55cb11:L55cb11:{c.instructions+=3;NFSU2_TR(0x55cb11);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B55cb17:{NFSU2_TR(0x55cb17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cb18:{NFSU2_TR(0x55cb18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cb1dull));
TAIL_STATIC(0x458520u,458);
}
B55cb1d:L55cb1d:{c.instructions+=1;NFSU2_TR(0x55cb1d);
{goto L55cb4b;}
}
B55cb1f:L55cb1f:{c.instructions+=2;NFSU2_TR(0x55cb1f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55cb22:{NFSU2_TR(0x55cb22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cb4b;}}
}
B55cb24:L55cb24:{c.instructions+=3;NFSU2_TR(0x55cb24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55cb27:{NFSU2_TR(0x55cb27);
__builtin_memmove((R+4),(R+28),4);
}
B55cb29:{NFSU2_TR(0x55cb29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cb2eull));
TAIL_STATIC(0x4958f0u,495);
}
B55cb2e:L55cb2e:{c.instructions+=2;NFSU2_TR(0x55cb2e);
__builtin_memmove((R+4),(R+28),4);
}
B55cb30:{NFSU2_TR(0x55cb30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cb35ull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B55cb35:L55cb35:{c.instructions+=2;NFSU2_TR(0x55cb35);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55cb37:{NFSU2_TR(0x55cb37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cb4b;}}
}
B55cb39:L55cb39:{c.instructions+=6;NFSU2_TR(0x55cb39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cb3c:{NFSU2_TR(0x55cb3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cb3f:{NFSU2_TR(0x55cb3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cb40:{NFSU2_TR(0x55cb40);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cb42:{NFSU2_TR(0x55cb42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cb43:{NFSU2_TR(0x55cb43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cb48ull));
TAIL_STATIC(0x50d150u,50d);
}
B55cb48:L55cb48:{c.instructions+=1;NFSU2_TR(0x55cb48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55cb4b:L55cb4b:{c.instructions+=3;NFSU2_TR(0x55cb4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cb4e:{NFSU2_TR(0x55cb4e);
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
B55cb51:{NFSU2_TR(0x55cb51);
if(r1(R+518)){{goto L55cc3b;}}
}
B55cb57:L55cb57:{c.instructions+=11;NFSU2_TR(0x55cb57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cb5a:{NFSU2_TR(0x55cb5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cb60:{NFSU2_TR(0x55cb60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55cb63:{NFSU2_TR(0x55cb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cb66:{NFSU2_TR(0x55cb66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cb69:{NFSU2_TR(0x55cb69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cb6f:{NFSU2_TR(0x55cb6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cb72:{NFSU2_TR(0x55cb72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cb73:{NFSU2_TR(0x55cb73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cb74:{NFSU2_TR(0x55cb74);
w4(R+4,u32(0x838980ull));
}
B55cb79:{NFSU2_TR(0x55cb79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cb7eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55c170u);}goto L55c170;}
}
B55cb7e:L55cb7e:{c.instructions+=7;NFSU2_TR(0x55cb7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cb84:{NFSU2_TR(0x55cb84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cb87:{NFSU2_TR(0x55cb87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cb89:{NFSU2_TR(0x55cb89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cb8b:{NFSU2_TR(0x55cb8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cb8d:{NFSU2_TR(0x55cb8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cb8e:{NFSU2_TR(0x55cb8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cb93ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B55cb93:L55cb93:{c.instructions+=3;NFSU2_TR(0x55cb93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55cb96:{NFSU2_TR(0x55cb96);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55cb99:{NFSU2_TR(0x55cb99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cbb1;}}
}
B55cb9b:L55cb9b:{c.instructions+=3;NFSU2_TR(0x55cb9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55cba1:{NFSU2_TR(0x55cba1);
__builtin_memmove((R+4),(R+28),4);
}
B55cba3:{NFSU2_TR(0x55cba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cba8ull));
TAIL_STATIC(0x527610u,527);
}
B55cba8:L55cba8:{c.instructions+=2;NFSU2_TR(0x55cba8);
__builtin_memmove((R+4),(R+28),4);
}
B55cbaa:{NFSU2_TR(0x55cbaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cbafull));
TAIL_STATIC(0x495850u,495);
}
B55cbaf:L55cbaf:{c.instructions+=1;NFSU2_TR(0x55cbaf);
{goto L55cbca;}
}
B55cbb1:L55cbb1:{c.instructions+=2;NFSU2_TR(0x55cbb1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55cbb4:{NFSU2_TR(0x55cbb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cbca;}}
}
B55cbb6:L55cbb6:{c.instructions+=3;NFSU2_TR(0x55cbb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55cbbc:{NFSU2_TR(0x55cbbc);
__builtin_memmove((R+4),(R+28),4);
}
B55cbbe:{NFSU2_TR(0x55cbbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cbc3ull));
TAIL_STATIC(0x527660u,527);
}
B55cbc3:L55cbc3:{c.instructions+=2;NFSU2_TR(0x55cbc3);
__builtin_memmove((R+4),(R+28),4);
}
B55cbc5:{NFSU2_TR(0x55cbc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cbcaull));
TAIL_STATIC(0x495810u,495);
}
B55cbca:L55cbca:{c.instructions+=2;NFSU2_TR(0x55cbca);
__builtin_memmove((R+4),(R+24),4);
}
B55cbcc:{NFSU2_TR(0x55cbcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cbd1ull));
TAIL_STATIC(0x547f30u,547);
}
B55cbd1:L55cbd1:{c.instructions+=4;NFSU2_TR(0x55cbd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cbd4:{NFSU2_TR(0x55cbd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55cbd6:{NFSU2_TR(0x55cbd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55cbd9:{NFSU2_TR(0x55cbd9);
if(r1(R+518)){{goto L55cbe0;}}
}
B55cbdb:L55cbdb:{c.instructions+=2;NFSU2_TR(0x55cbdb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55cbde:{NFSU2_TR(0x55cbde);
{goto L55cbe2;}
}
B55cbe0:L55cbe0:{c.instructions+=1;NFSU2_TR(0x55cbe0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55cbe2:L55cbe2:{c.instructions+=2;NFSU2_TR(0x55cbe2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55cbe5:{NFSU2_TR(0x55cbe5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cbff;}}
}
B55cbe7:L55cbe7:{c.instructions+=3;NFSU2_TR(0x55cbe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cbed:{NFSU2_TR(0x55cbed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cbee:{NFSU2_TR(0x55cbee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cbf3ull));
TAIL_STATIC(0x50ca00u,50c);
}
B55cbf3:L55cbf3:{c.instructions+=7;NFSU2_TR(0x55cbf3);
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
B55cbf6:{NFSU2_TR(0x55cbf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55cbf7:{NFSU2_TR(0x55cbf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55cbf8:{NFSU2_TR(0x55cbf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55cbf9:{NFSU2_TR(0x55cbf9);
__builtin_memmove((R+16),(R+20),4);
}
B55cbfb:{NFSU2_TR(0x55cbfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55cbfc:{NFSU2_TR(0x55cbfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55cbff:L55cbff:{c.instructions+=1;NFSU2_TR(0x55cbff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cc04ull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B55cc04:L55cc04:{c.instructions+=2;NFSU2_TR(0x55cc04);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55cc06:{NFSU2_TR(0x55cc06);
if(r1(R+518)){{goto L55cc20;}}
}
B55cc08:L55cc08:{c.instructions+=3;NFSU2_TR(0x55cc08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cc0e:{NFSU2_TR(0x55cc0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cc0f:{NFSU2_TR(0x55cc0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cc14ull));
TAIL_STATIC(0x50ca00u,50c);
}
B55cc14:L55cc14:{c.instructions+=7;NFSU2_TR(0x55cc14);
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
B55cc17:{NFSU2_TR(0x55cc17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55cc18:{NFSU2_TR(0x55cc18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55cc19:{NFSU2_TR(0x55cc19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55cc1a:{NFSU2_TR(0x55cc1a);
__builtin_memmove((R+16),(R+20),4);
}
B55cc1c:{NFSU2_TR(0x55cc1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55cc1d:{NFSU2_TR(0x55cc1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55cc20:L55cc20:{c.instructions+=3;NFSU2_TR(0x55cc20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cc26:{NFSU2_TR(0x55cc26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cc27:{NFSU2_TR(0x55cc27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cc2cull));
TAIL_STATIC(0x50ca50u,50c);
}
B55cc2c:L55cc2c:{c.instructions+=3;NFSU2_TR(0x55cc2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cc32:{NFSU2_TR(0x55cc32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cc33:{NFSU2_TR(0x55cc33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cc38ull));
TAIL_STATIC(0x50ca50u,50c);
}
B55cc38:L55cc38:{c.instructions+=1;NFSU2_TR(0x55cc38);
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
B55cc3b:L55cc3b:{c.instructions+=2;NFSU2_TR(0x55cc3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55cc3c:{NFSU2_TR(0x55cc3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55cc3d:L55cc3d:{c.instructions+=4;NFSU2_TR(0x55cc3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55cc3e:{NFSU2_TR(0x55cc3e);
__builtin_memmove((R+16),(R+20),4);
}
B55cc40:{NFSU2_TR(0x55cc40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55cc41:{NFSU2_TR(0x55cc41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55cc50:L55cc50:{c.instructions+=8;NFSU2_TR(0x55cc50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cc51:{NFSU2_TR(0x55cc51);
__builtin_memmove((R+24),(R+4),4);
}
B55cc53:{NFSU2_TR(0x55cc53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cc56:{NFSU2_TR(0x55cc56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cc57:{NFSU2_TR(0x55cc57);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55cc5e:{NFSU2_TR(0x55cc5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55cc61:{NFSU2_TR(0x55cc61);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x46ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55cc64:{NFSU2_TR(0x55cc64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cc72;}}
}
B55cc66:L55cc66:{c.instructions+=2;NFSU2_TR(0x55cc66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cc67:{NFSU2_TR(0x55cc67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cc6cull));
TAIL_STATIC(0x50f5b0u,50f);
}
B55cc6c:L55cc6c:{c.instructions+=1;NFSU2_TR(0x55cc6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55cc72:L55cc72:{c.instructions+=3;NFSU2_TR(0x55cc72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cc73:{NFSU2_TR(0x55cc73);
__builtin_memmove((R+4),(R+24),4);
}
B55cc75:{NFSU2_TR(0x55cc75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cc7aull));
TAIL_STATIC(0x548630u,548);
}
B55cc7a:L55cc7a:{c.instructions+=5;NFSU2_TR(0x55cc7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cc80:{NFSU2_TR(0x55cc80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55cc86:{NFSU2_TR(0x55cc86);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55cc88:{NFSU2_TR(0x55cc88);
w4(R+0,u32(0x2daab07ull));
}
B55cc8d:{NFSU2_TR(0x55cc8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cc94;}}
}
B55cc8f:L55cc8f:{c.instructions+=2;NFSU2_TR(0x55cc8f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55cc92:{NFSU2_TR(0x55cc92);
if(r1(R+518)){{goto L55cca1;}}
}
B55cc94:L55cc94:{c.instructions+=2;NFSU2_TR(0x55cc94);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x45ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x45ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55cc97:{NFSU2_TR(0x55cc97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ccae;}}
}
B55cc99:L55cc99:{c.instructions+=2;NFSU2_TR(0x55cc99);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
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
B55cc9f:{NFSU2_TR(0x55cc9f);
if(r1(R+518)){{goto L55ccae;}}
}
B55cca1:L55cca1:{c.instructions+=3;NFSU2_TR(0x55cca1);
__builtin_memmove((R+4),(R+24),4);
}
B55cca3:{NFSU2_TR(0x55cca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55cca9:{NFSU2_TR(0x55cca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ccaeull));
TAIL_STATIC(0x548630u,548);
}
B55ccae:L55ccae:{c.instructions+=3;NFSU2_TR(0x55ccae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55ccb0:{NFSU2_TR(0x55ccb0);
__builtin_memmove((R+4),(R+24),4);
}
B55ccb2:{NFSU2_TR(0x55ccb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ccb5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55ccb5:L55ccb5:{c.instructions+=3;NFSU2_TR(0x55ccb5);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B55ccb7:{NFSU2_TR(0x55ccb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55ccb8:{NFSU2_TR(0x55ccb8);
if(r1(R+518)){{goto L55ce72;}}
}
B55ccbe:L55ccbe:{c.instructions+=4;NFSU2_TR(0x55ccbe);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x44ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x44ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55ccc1:{NFSU2_TR(0x55ccc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x4e4485feull));
s4(u32(r4(U+0)),r4(U+4));
}
B55ccc8:{NFSU2_TR(0x55ccc8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55cccf:{NFSU2_TR(0x55cccf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cd05;}}
}
B55ccd1:L55ccd1:{c.instructions+=3;NFSU2_TR(0x55ccd1);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B55ccd7:{NFSU2_TR(0x55ccd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55ccd9:{NFSU2_TR(0x55ccd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ccdcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55ccdc:L55ccdc:{c.instructions+=2;NFSU2_TR(0x55ccdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ccdd:{NFSU2_TR(0x55ccdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cce2ull));
TAIL_STATIC(0x4a5b10u,4a5);
}
B55cce2:L55cce2:{c.instructions+=3;NFSU2_TR(0x55cce2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55cce5:{NFSU2_TR(0x55cce5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55cce7:{NFSU2_TR(0x55cce7);
if(r1(R+518)){{goto L55ccfc;}}
}
B55cce9:L55cce9:{c.instructions+=4;NFSU2_TR(0x55cce9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ccee:{NFSU2_TR(0x55ccee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ccf0:{NFSU2_TR(0x55ccf0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ccf2:{NFSU2_TR(0x55ccf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ccf7ull));
TAIL_STATIC(0x4c1860u,4c1);
}
B55ccf7:L55ccf7:{c.instructions+=2;NFSU2_TR(0x55ccf7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55ccfa:{NFSU2_TR(0x55ccfa);
{goto L55cd11;}
}
B55ccfc:L55ccfc:{c.instructions+=2;NFSU2_TR(0x55ccfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55cd03:{NFSU2_TR(0x55cd03);
{goto L55cd11;}
}
B55cd05:L55cd05:{c.instructions+=2;NFSU2_TR(0x55cd05);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x46ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55cd08:{NFSU2_TR(0x55cd08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cd11;}}
}
B55cd0a:L55cd0a:{c.instructions+=1;NFSU2_TR(0x55cd0a);
s1(0x839bc1,u8(0x1ull));
}
B55cd11:L55cd11:{c.instructions+=4;NFSU2_TR(0x55cd11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cd14:{NFSU2_TR(0x55cd14);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd19:{NFSU2_TR(0x55cd19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd1a:{NFSU2_TR(0x55cd1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cd1full));
TAIL_STATIC(0x4954e0u,495);
}
B55cd1f:L55cd1f:{c.instructions+=3;NFSU2_TR(0x55cd1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cd25:{NFSU2_TR(0x55cd25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd26:{NFSU2_TR(0x55cd26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cd2bull));
TAIL_STATIC(0x50ca50u,50c);
}
B55cd2b:L55cd2b:{c.instructions+=6;NFSU2_TR(0x55cd2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cd2e:{NFSU2_TR(0x55cd2e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd30:{NFSU2_TR(0x55cd30);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd35:{NFSU2_TR(0x55cd35);
u8 U[4];
w4(U+0,u32(0xdb285767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd3a:{NFSU2_TR(0x55cd3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd3b:{NFSU2_TR(0x55cd3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cd40ull));
TAIL_STATIC(0x537c00u,537);
}
B55cd40:L55cd40:{c.instructions+=6;NFSU2_TR(0x55cd40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cd43:{NFSU2_TR(0x55cd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cd46:{NFSU2_TR(0x55cd46);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffc1ull))));
}
B55cd49:{NFSU2_TR(0x55cd49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B55cd4c:{NFSU2_TR(0x55cd4c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55cd4f:{NFSU2_TR(0x55cd4f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55cda0;}}
}
B55cd51:L55cd51:{c.instructions+=2;NFSU2_TR(0x55cd51);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x55ce80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B55cd58:{NFSU2_TR(0x55cd58);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x55ce78ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55cd5f:L55cd5f:{c.instructions+=5;NFSU2_TR(0x55cd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cd65:{NFSU2_TR(0x55cd65);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd67:{NFSU2_TR(0x55cd67);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd6c:{NFSU2_TR(0x55cd6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd6d:{NFSU2_TR(0x55cd6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cd72ull));
TAIL_STATIC(0x51cf70u,51c);
}
B55cd72:L55cd72:{c.instructions+=5;NFSU2_TR(0x55cd72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cd78:{NFSU2_TR(0x55cd78);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd7a:{NFSU2_TR(0x55cd7a);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd7f:{NFSU2_TR(0x55cd7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd80:{NFSU2_TR(0x55cd80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cd85ull));
TAIL_STATIC(0x51cf70u,51c);
}
B55cd85:L55cd85:{c.instructions+=3;NFSU2_TR(0x55cd85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cd8b:{NFSU2_TR(0x55cd8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd8c:{NFSU2_TR(0x55cd8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cd91ull));
TAIL_STATIC(0x50ca50u,50c);
}
B55cd91:L55cd91:{c.instructions+=3;NFSU2_TR(0x55cd91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cd97:{NFSU2_TR(0x55cd97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cd98:{NFSU2_TR(0x55cd98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cd9dull));
TAIL_STATIC(0x50ca50u,50c);
}
B55cd9d:L55cd9d:{c.instructions+=1;NFSU2_TR(0x55cd9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B55cda0:L55cda0:{c.instructions+=3;NFSU2_TR(0x55cda0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cda6:{NFSU2_TR(0x55cda6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55cda8:{NFSU2_TR(0x55cda8);
if(r1(R+518)){{goto L55ce5e;}}
}
B55cdae:L55cdae:{c.instructions+=3;NFSU2_TR(0x55cdae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cdb1:{NFSU2_TR(0x55cdb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55cdb3:{NFSU2_TR(0x55cdb3);
if(r1(R+518)){{goto L55ce5e;}}
}
B55cdb9:L55cdb9:{c.instructions+=3;NFSU2_TR(0x55cdb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cdbc:{NFSU2_TR(0x55cdbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55cdbe:{NFSU2_TR(0x55cdbe);
if(r1(R+518)){{goto L55cdd0;}}
}
B55cdc0:L55cdc0:{c.instructions+=4;NFSU2_TR(0x55cdc0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cdc2:{NFSU2_TR(0x55cdc2);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cdc7:{NFSU2_TR(0x55cdc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cdc8:{NFSU2_TR(0x55cdc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cdcdull));
TAIL_STATIC(0x51cf70u,51c);
}
B55cdcd:L55cdcd:{c.instructions+=1;NFSU2_TR(0x55cdcd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55cdd0:L55cdd0:{c.instructions+=8;NFSU2_TR(0x55cdd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cdd6:{NFSU2_TR(0x55cdd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cdd9:{NFSU2_TR(0x55cdd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cddc:{NFSU2_TR(0x55cddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cddf:{NFSU2_TR(0x55cddf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cde0:{NFSU2_TR(0x55cde0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cde1:{NFSU2_TR(0x55cde1);
w4(R+4,u32(0x838980ull));
}
B55cde6:{NFSU2_TR(0x55cde6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cdebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55c1f0u);}goto L55c1f0;}
}
B55cdeb:L55cdeb:{c.instructions+=9;NFSU2_TR(0x55cdeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cdf1:{NFSU2_TR(0x55cdf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cdf4:{NFSU2_TR(0x55cdf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cdf7:{NFSU2_TR(0x55cdf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cdfa:{NFSU2_TR(0x55cdfa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cdfc:{NFSU2_TR(0x55cdfc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cdfe:{NFSU2_TR(0x55cdfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cdff:{NFSU2_TR(0x55cdff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce00:{NFSU2_TR(0x55ce00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ce05ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B55ce05:L55ce05:{c.instructions+=4;NFSU2_TR(0x55ce05);
__builtin_memmove((R+0),gp(0x850078),4);
}
B55ce0a:{NFSU2_TR(0x55ce0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55ce0d:{NFSU2_TR(0x55ce0d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ce10:{NFSU2_TR(0x55ce10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ce2c;}}
}
B55ce12:L55ce12:{c.instructions+=3;NFSU2_TR(0x55ce12);
__builtin_memmove((R+0),gp(0x8389a0),4);
}
B55ce17:{NFSU2_TR(0x55ce17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55ce19:{NFSU2_TR(0x55ce19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ce2c;}}
}
B55ce1b:L55ce1b:{c.instructions+=4;NFSU2_TR(0x55ce1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ce1e:{NFSU2_TR(0x55ce1e);
u8 U[4];
w4(U+0,u32(0x79d6acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce23:{NFSU2_TR(0x55ce23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce24:{NFSU2_TR(0x55ce24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ce29ull));
TAIL_STATIC(0x495500u,495);
}
B55ce29:L55ce29:{c.instructions+=1;NFSU2_TR(0x55ce29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55ce2c:L55ce2c:{c.instructions+=9;NFSU2_TR(0x55ce2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ce32:{NFSU2_TR(0x55ce32);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ce35:{NFSU2_TR(0x55ce35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ce38:{NFSU2_TR(0x55ce38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ce3b:{NFSU2_TR(0x55ce3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55ce3e:{NFSU2_TR(0x55ce3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce3f:{NFSU2_TR(0x55ce3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce40:{NFSU2_TR(0x55ce40);
w4(R+4,u32(0x85ad40ull));
}
B55ce45:{NFSU2_TR(0x55ce45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ce4aull));
TAIL_STATIC(0x514280u,514);
}
B55ce4a:L55ce4a:{c.instructions+=5;NFSU2_TR(0x55ce4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce4b:{NFSU2_TR(0x55ce4b);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce50:{NFSU2_TR(0x55ce50);
u8 U[4];
w4(U+0,u32(0x79d6acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce55:{NFSU2_TR(0x55ce55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce56:{NFSU2_TR(0x55ce56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ce5bull));
TAIL_STATIC(0x542600u,542);
}
B55ce5b:L55ce5b:{c.instructions+=1;NFSU2_TR(0x55ce5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55ce5e:L55ce5e:{c.instructions+=5;NFSU2_TR(0x55ce5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ce61:{NFSU2_TR(0x55ce61);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55ce67:{NFSU2_TR(0x55ce67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce68:{NFSU2_TR(0x55ce68);
u8 U[4];
w4(U+0,u32(0x281ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce6d:{NFSU2_TR(0x55ce6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ce72ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55ce72:L55ce72:{c.instructions+=3;NFSU2_TR(0x55ce72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55ce73:{NFSU2_TR(0x55ce73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ce74:{NFSU2_TR(0x55ce74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55ce90:L55ce90:{c.instructions+=11;NFSU2_TR(0x55ce90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce91:{NFSU2_TR(0x55ce91);
__builtin_memmove((R+20),(R+16),4);
}
B55ce93:{NFSU2_TR(0x55ce93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce94:{NFSU2_TR(0x55ce94);
__builtin_memmove((R+12),(R+4),4);
}
B55ce96:{NFSU2_TR(0x55ce96);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ce99:{NFSU2_TR(0x55ce99);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55ce9b:{NFSU2_TR(0x55ce9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce9c:{NFSU2_TR(0x55ce9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ce9d:{NFSU2_TR(0x55ce9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55cea4:{NFSU2_TR(0x55cea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
w4(U+4,u32(0xdc884cbull));
s4(u32(r4(U+0)),r4(U+4));
}
B55ceab:{NFSU2_TR(0x55ceab);
if(r1(R+518)){{goto L55cef5;}}
}
B55cead:L55cead:{c.instructions+=3;NFSU2_TR(0x55cead);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ceb0:{NFSU2_TR(0x55ceb0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x44ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x44ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55ceb3:{NFSU2_TR(0x55ceb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cee9;}}
}
B55ceb5:L55ceb5:{c.instructions+=3;NFSU2_TR(0x55ceb5);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B55cebb:{NFSU2_TR(0x55cebb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55cebd:{NFSU2_TR(0x55cebd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cec0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55cec0:L55cec0:{c.instructions+=2;NFSU2_TR(0x55cec0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cec1:{NFSU2_TR(0x55cec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cec6ull));
TAIL_STATIC(0x4a5b10u,4a5);
}
B55cec6:L55cec6:{c.instructions+=3;NFSU2_TR(0x55cec6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55cec9:{NFSU2_TR(0x55cec9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55cecb:{NFSU2_TR(0x55cecb);
if(r1(R+518)){{goto L55cee0;}}
}
B55cecd:L55cecd:{c.instructions+=4;NFSU2_TR(0x55cecd);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ced2:{NFSU2_TR(0x55ced2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ced4:{NFSU2_TR(0x55ced4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ced6:{NFSU2_TR(0x55ced6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cedbull));
TAIL_STATIC(0x4c1860u,4c1);
}
B55cedb:L55cedb:{c.instructions+=2;NFSU2_TR(0x55cedb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55cede:{NFSU2_TR(0x55cede);
{goto L55cef5;}
}
B55cee0:L55cee0:{c.instructions+=2;NFSU2_TR(0x55cee0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55cee7:{NFSU2_TR(0x55cee7);
{goto L55cef5;}
}
B55cee9:L55cee9:{c.instructions+=2;NFSU2_TR(0x55cee9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x46ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ceec:{NFSU2_TR(0x55ceec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55cef5;}}
}
B55ceee:L55ceee:{c.instructions+=1;NFSU2_TR(0x55ceee);
s1(0x839bc1,u8(0x0ull));
}
B55cef5:L55cef5:{c.instructions+=4;NFSU2_TR(0x55cef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cef8:{NFSU2_TR(0x55cef8);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cefd:{NFSU2_TR(0x55cefd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cefe:{NFSU2_TR(0x55cefe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cf03ull));
TAIL_STATIC(0x495520u,495);
}
B55cf03:L55cf03:{c.instructions+=4;NFSU2_TR(0x55cf03);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cf06:{NFSU2_TR(0x55cf06);
u8 U[4];
w4(U+0,u32(0x9ba6d658ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf0b:{NFSU2_TR(0x55cf0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf0c:{NFSU2_TR(0x55cf0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cf11ull));
TAIL_STATIC(0x4954e0u,495);
}
B55cf11:L55cf11:{c.instructions+=4;NFSU2_TR(0x55cf11);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55cf14:{NFSU2_TR(0x55cf14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55cf17:{NFSU2_TR(0x55cf17);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55cf19:{NFSU2_TR(0x55cf19);
if(r1(R+518)){{goto L55cf71;}}
}
B55cf1b:L55cf1b:{c.instructions+=6;NFSU2_TR(0x55cf1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cf1e:{NFSU2_TR(0x55cf1e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf20:{NFSU2_TR(0x55cf20);
u8 U[4];
w4(U+0,u32(0x790a40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf25:{NFSU2_TR(0x55cf25);
u8 U[4];
w4(U+0,u32(0xdb285767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf2a:{NFSU2_TR(0x55cf2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf2b:{NFSU2_TR(0x55cf2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cf30ull));
TAIL_STATIC(0x537c00u,537);
}
B55cf30:L55cf30:{c.instructions+=5;NFSU2_TR(0x55cf30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cf36:{NFSU2_TR(0x55cf36);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf38:{NFSU2_TR(0x55cf38);
u8 U[4];
w4(U+0,u32(0x790a40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf3d:{NFSU2_TR(0x55cf3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf3e:{NFSU2_TR(0x55cf3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cf43ull));
TAIL_STATIC(0x51cf70u,51c);
}
B55cf43:L55cf43:{c.instructions+=5;NFSU2_TR(0x55cf43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cf49:{NFSU2_TR(0x55cf49);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf4b:{NFSU2_TR(0x55cf4b);
u8 U[4];
w4(U+0,u32(0x790a40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf50:{NFSU2_TR(0x55cf50);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf51:{NFSU2_TR(0x55cf51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cf56ull));
TAIL_STATIC(0x51cf70u,51c);
}
B55cf56:L55cf56:{c.instructions+=3;NFSU2_TR(0x55cf56);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cf5c:{NFSU2_TR(0x55cf5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf5d:{NFSU2_TR(0x55cf5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cf62ull));
TAIL_STATIC(0x50ca00u,50c);
}
B55cf62:L55cf62:{c.instructions+=3;NFSU2_TR(0x55cf62);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55cf68:{NFSU2_TR(0x55cf68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf69:{NFSU2_TR(0x55cf69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cf6eull));
TAIL_STATIC(0x50ca00u,50c);
}
B55cf6e:L55cf6e:{c.instructions+=1;NFSU2_TR(0x55cf6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B55cf71:L55cf71:{c.instructions+=3;NFSU2_TR(0x55cf71);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cf77:{NFSU2_TR(0x55cf77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55cf79:{NFSU2_TR(0x55cf79);
if(r1(R+518)){{goto L55cf92;}}
}
B55cf7b:L55cf7b:{c.instructions+=3;NFSU2_TR(0x55cf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55cf7e:{NFSU2_TR(0x55cf7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55cf80:{NFSU2_TR(0x55cf80);
if(r1(R+518)){{goto L55cf92;}}
}
B55cf82:L55cf82:{c.instructions+=4;NFSU2_TR(0x55cf82);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf84:{NFSU2_TR(0x55cf84);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf89:{NFSU2_TR(0x55cf89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf8a:{NFSU2_TR(0x55cf8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cf8full));
TAIL_STATIC(0x51cf70u,51c);
}
B55cf8f:L55cf8f:{c.instructions+=1;NFSU2_TR(0x55cf8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55cf92:L55cf92:{c.instructions+=4;NFSU2_TR(0x55cf92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55cf95:{NFSU2_TR(0x55cf95);
u8 U[4];
w4(U+0,u32(0x79d6acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf9a:{NFSU2_TR(0x55cf9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cf9b:{NFSU2_TR(0x55cf9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cfa0ull));
TAIL_STATIC(0x4954c0u,495);
}
B55cfa0:L55cfa0:{c.instructions+=3;NFSU2_TR(0x55cfa0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55cfa3:{NFSU2_TR(0x55cfa3);
w4(R+4,u32(0x838980ull));
}
B55cfa8:{NFSU2_TR(0x55cfa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cfadull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55c460u);}goto L55c460;}
}
B55cfad:L55cfad:{c.instructions+=2;NFSU2_TR(0x55cfad);
u8 U[14];
__builtin_memmove((U+6),gp(0x8389a0),4);
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
B55cfb4:{NFSU2_TR(0x55cfb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x55d093u,55d);}
}
B55cfba:L55cfba:{c.instructions+=2;NFSU2_TR(0x55cfba);
w4(R+4,u32(0x838980ull));
}
B55cfbf:{NFSU2_TR(0x55cfbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cfc4ull));
TAIL_STATIC(0x50ef10u,50e);
}
B55cfc4:L55cfc4:{c.instructions+=2;NFSU2_TR(0x55cfc4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55cfc6:{NFSU2_TR(0x55cfc6);
if(r1(R+518)){TAIL_STATIC(0x55d008u,55d);}
}
B55cfc8:L55cfc8:{c.instructions+=6;NFSU2_TR(0x55cfc8);
w4(R+24,u32(0x40ull));
}
B55cfcd:{NFSU2_TR(0x55cfcd);
__builtin_memmove((R+4),(R+4),4);
}
B55cfd0:{NFSU2_TR(0x55cfd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cfd2:{NFSU2_TR(0x55cfd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cfd3:{NFSU2_TR(0x55cfd3);
w4(R+4,u32(0x8389d0ull));
}
B55cfd8:{NFSU2_TR(0x55cfd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cfddull));
TAIL_STATIC(0x631d20u,631);
}
B55cfdd:L55cfdd:{c.instructions+=4;NFSU2_TR(0x55cfdd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cfdf:{NFSU2_TR(0x55cfdf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cfe1:{NFSU2_TR(0x55cfe1);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cfe6:{NFSU2_TR(0x55cfe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55cfebull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55cfeb:L55cfeb:{c.instructions+=5;NFSU2_TR(0x55cfeb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55cfee:{NFSU2_TR(0x55cfee);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cff3:{NFSU2_TR(0x55cff3);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55cff8:{NFSU2_TR(0x55cff8);
w4(R+4,u32(0x8637d0ull));
}
B55cffd:{NFSU2_TR(0x55cffd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d002ull));
TAIL_STATIC(0x55b1a0u,55b);
}
XIT:NFSU2_TR_EXIT(0x55c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
