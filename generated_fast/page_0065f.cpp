#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_660(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x65f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x65f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_65f(u8* __restrict R,Cpu& c);
u32 page_65f(Cpu& c){return body_65f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_65f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x65f000:goto L65f000;
case 0x65f003:c.instructions+=4;goto B65f003;
case 0x65f005:c.instructions+=3;goto B65f005;
case 0x65f008:c.instructions+=2;goto B65f008;
case 0x65f00a:c.instructions+=1;goto B65f00a;
case 0x65f00f:goto L65f00f;
case 0x65f012:c.instructions+=9;goto B65f012;
case 0x65f014:c.instructions+=8;goto B65f014;
case 0x65f017:c.instructions+=7;goto B65f017;
case 0x65f01a:c.instructions+=6;goto B65f01a;
case 0x65f01c:c.instructions+=5;goto B65f01c;
case 0x65f020:c.instructions+=4;goto B65f020;
case 0x65f024:c.instructions+=3;goto B65f024;
case 0x65f026:c.instructions+=2;goto B65f026;
case 0x65f029:c.instructions+=1;goto B65f029;
case 0x65f02f:goto L65f02f;
case 0x65f031:c.instructions+=1;goto B65f031;
case 0x65f037:goto L65f037;
case 0x65f03b:c.instructions+=2;goto B65f03b;
case 0x65f03f:c.instructions+=1;goto B65f03f;
case 0x65f041:goto L65f041;
case 0x65f043:c.instructions+=2;goto B65f043;
case 0x65f045:c.instructions+=1;goto B65f045;
case 0x65f047:goto L65f047;
case 0x65f04a:c.instructions+=1;goto B65f04a;
case 0x65f04c:goto L65f04c;
case 0x65f04f:c.instructions+=1;goto B65f04f;
case 0x65f052:goto L65f052;
case 0x65f054:c.instructions+=6;goto B65f054;
case 0x65f057:c.instructions+=5;goto B65f057;
case 0x65f05a:c.instructions+=4;goto B65f05a;
case 0x65f05d:c.instructions+=3;goto B65f05d;
case 0x65f05e:c.instructions+=2;goto B65f05e;
case 0x65f061:c.instructions+=1;goto B65f061;
case 0x65f063:goto L65f063;
case 0x65f066:c.instructions+=5;goto B65f066;
case 0x65f067:c.instructions+=4;goto B65f067;
case 0x65f06a:c.instructions+=3;goto B65f06a;
case 0x65f06d:c.instructions+=2;goto B65f06d;
case 0x65f070:c.instructions+=1;goto B65f070;
case 0x65f072:goto L65f072;
case 0x65f076:c.instructions+=4;goto B65f076;
case 0x65f079:c.instructions+=3;goto B65f079;
case 0x65f07c:c.instructions+=2;goto B65f07c;
case 0x65f07f:c.instructions+=1;goto B65f07f;
case 0x65f081:goto L65f081;
case 0x65f083:goto L65f083;
case 0x65f086:c.instructions+=9;goto B65f086;
case 0x65f088:c.instructions+=8;goto B65f088;
case 0x65f08b:c.instructions+=7;goto B65f08b;
case 0x65f08e:c.instructions+=6;goto B65f08e;
case 0x65f090:c.instructions+=5;goto B65f090;
case 0x65f094:c.instructions+=4;goto B65f094;
case 0x65f098:c.instructions+=3;goto B65f098;
case 0x65f09a:c.instructions+=2;goto B65f09a;
case 0x65f09d:c.instructions+=1;goto B65f09d;
case 0x65f09f:goto L65f09f;
case 0x65f0a1:c.instructions+=1;goto B65f0a1;
case 0x65f0a3:goto L65f0a3;
case 0x65f0a7:c.instructions+=2;goto B65f0a7;
case 0x65f0ab:c.instructions+=1;goto B65f0ab;
case 0x65f0ad:goto L65f0ad;
case 0x65f0af:c.instructions+=2;goto B65f0af;
case 0x65f0b1:c.instructions+=1;goto B65f0b1;
case 0x65f0b3:goto L65f0b3;
case 0x65f0b6:c.instructions+=1;goto B65f0b6;
case 0x65f0b8:goto L65f0b8;
case 0x65f0bb:c.instructions+=1;goto B65f0bb;
case 0x65f0be:goto L65f0be;
case 0x65f0c0:c.instructions+=6;goto B65f0c0;
case 0x65f0c3:c.instructions+=5;goto B65f0c3;
case 0x65f0c6:c.instructions+=4;goto B65f0c6;
case 0x65f0c9:c.instructions+=3;goto B65f0c9;
case 0x65f0ca:c.instructions+=2;goto B65f0ca;
case 0x65f0cd:c.instructions+=1;goto B65f0cd;
case 0x65f0cf:goto L65f0cf;
case 0x65f0d2:c.instructions+=5;goto B65f0d2;
case 0x65f0d3:c.instructions+=4;goto B65f0d3;
case 0x65f0d6:c.instructions+=3;goto B65f0d6;
case 0x65f0d9:c.instructions+=2;goto B65f0d9;
case 0x65f0dc:c.instructions+=1;goto B65f0dc;
case 0x65f0de:goto L65f0de;
case 0x65f0e2:c.instructions+=4;goto B65f0e2;
case 0x65f0e5:c.instructions+=3;goto B65f0e5;
case 0x65f0e8:c.instructions+=2;goto B65f0e8;
case 0x65f0eb:c.instructions+=1;goto B65f0eb;
case 0x65f0ed:goto L65f0ed;
case 0x65f0f0:c.instructions+=6;goto B65f0f0;
case 0x65f0f2:c.instructions+=5;goto B65f0f2;
case 0x65f0f5:c.instructions+=4;goto B65f0f5;
case 0x65f0f7:c.instructions+=3;goto B65f0f7;
case 0x65f0fa:c.instructions+=2;goto B65f0fa;
case 0x65f0fd:c.instructions+=1;goto B65f0fd;
case 0x65f0ff:goto L65f0ff;
case 0x65f102:c.instructions+=1;goto B65f102;
case 0x65f107:goto L65f107;
case 0x65f10a:c.instructions+=11;goto B65f10a;
case 0x65f10c:c.instructions+=10;goto B65f10c;
case 0x65f10f:c.instructions+=9;goto B65f10f;
case 0x65f111:c.instructions+=8;goto B65f111;
case 0x65f114:c.instructions+=7;goto B65f114;
case 0x65f117:c.instructions+=6;goto B65f117;
case 0x65f119:c.instructions+=5;goto B65f119;
case 0x65f11b:c.instructions+=4;goto B65f11b;
case 0x65f11e:c.instructions+=3;goto B65f11e;
case 0x65f121:c.instructions+=2;goto B65f121;
case 0x65f124:c.instructions+=1;goto B65f124;
case 0x65f126:goto L65f126;
case 0x65f128:c.instructions+=4;goto B65f128;
case 0x65f129:c.instructions+=3;goto B65f129;
case 0x65f12b:c.instructions+=2;goto B65f12b;
case 0x65f12e:c.instructions+=1;goto B65f12e;
case 0x65f131:goto L65f131;
case 0x65f132:c.instructions+=1;goto B65f132;
case 0x65f138:goto L65f138;
case 0x65f139:c.instructions+=1;goto B65f139;
case 0x65f13b:goto L65f13b;
case 0x65f13c:c.instructions+=1;goto B65f13c;
case 0x65f142:goto L65f142;
case 0x65f145:c.instructions+=8;goto B65f145;
case 0x65f148:c.instructions+=7;goto B65f148;
case 0x65f14a:c.instructions+=6;goto B65f14a;
case 0x65f14d:c.instructions+=5;goto B65f14d;
case 0x65f150:c.instructions+=4;goto B65f150;
case 0x65f152:c.instructions+=3;goto B65f152;
case 0x65f154:c.instructions+=2;goto B65f154;
case 0x65f157:c.instructions+=1;goto B65f157;
case 0x65f15d:goto L65f15d;
case 0x65f15f:c.instructions+=1;goto B65f15f;
case 0x65f165:goto L65f165;
case 0x65f167:c.instructions+=2;goto B65f167;
case 0x65f16a:c.instructions+=1;goto B65f16a;
case 0x65f16c:goto L65f16c;
case 0x65f16e:c.instructions+=1;goto B65f16e;
case 0x65f170:goto L65f170;
case 0x65f172:c.instructions+=13;goto B65f172;
case 0x65f174:c.instructions+=12;goto B65f174;
case 0x65f177:c.instructions+=11;goto B65f177;
case 0x65f17a:c.instructions+=10;goto B65f17a;
case 0x65f17d:c.instructions+=9;goto B65f17d;
case 0x65f180:c.instructions+=8;goto B65f180;
case 0x65f183:c.instructions+=7;goto B65f183;
case 0x65f186:c.instructions+=6;goto B65f186;
case 0x65f189:c.instructions+=5;goto B65f189;
case 0x65f18c:c.instructions+=4;goto B65f18c;
case 0x65f18d:c.instructions+=3;goto B65f18d;
case 0x65f18e:c.instructions+=2;goto B65f18e;
case 0x65f191:c.instructions+=1;goto B65f191;
case 0x65f193:goto L65f193;
case 0x65f196:c.instructions+=5;goto B65f196;
case 0x65f199:c.instructions+=4;goto B65f199;
case 0x65f19c:c.instructions+=3;goto B65f19c;
case 0x65f19f:c.instructions+=2;goto B65f19f;
case 0x65f1a2:c.instructions+=1;goto B65f1a2;
case 0x65f1a4:goto L65f1a4;
case 0x65f1a9:goto L65f1a9;
case 0x65f1ac:c.instructions+=8;goto B65f1ac;
case 0x65f1af:c.instructions+=7;goto B65f1af;
case 0x65f1b1:c.instructions+=6;goto B65f1b1;
case 0x65f1b4:c.instructions+=5;goto B65f1b4;
case 0x65f1b6:c.instructions+=4;goto B65f1b6;
case 0x65f1b9:c.instructions+=3;goto B65f1b9;
case 0x65f1bb:c.instructions+=2;goto B65f1bb;
case 0x65f1be:c.instructions+=1;goto B65f1be;
case 0x65f1c4:goto L65f1c4;
case 0x65f1c6:c.instructions+=1;goto B65f1c6;
case 0x65f1cc:goto L65f1cc;
case 0x65f1d0:c.instructions+=2;goto B65f1d0;
case 0x65f1d4:c.instructions+=1;goto B65f1d4;
case 0x65f1d6:goto L65f1d6;
case 0x65f1d8:c.instructions+=1;goto B65f1d8;
case 0x65f1da:goto L65f1da;
case 0x65f1dd:c.instructions+=2;goto B65f1dd;
case 0x65f1df:c.instructions+=1;goto B65f1df;
case 0x65f1e1:goto L65f1e1;
case 0x65f1e3:c.instructions+=2;goto B65f1e3;
case 0x65f1e5:c.instructions+=1;goto B65f1e5;
case 0x65f1e7:goto L65f1e7;
case 0x65f1ea:c.instructions+=4;goto B65f1ea;
case 0x65f1ec:c.instructions+=3;goto B65f1ec;
case 0x65f1ef:c.instructions+=2;goto B65f1ef;
case 0x65f1f0:c.instructions+=1;goto B65f1f0;
case 0x65f1f2:goto L65f1f2;
case 0x65f1f5:goto L65f1f5;
case 0x65f1f8:c.instructions+=6;goto B65f1f8;
case 0x65f1fb:c.instructions+=5;goto B65f1fb;
case 0x65f1fc:c.instructions+=4;goto B65f1fc;
case 0x65f1ff:c.instructions+=3;goto B65f1ff;
case 0x65f202:c.instructions+=2;goto B65f202;
case 0x65f205:c.instructions+=1;goto B65f205;
case 0x65f207:goto L65f207;
case 0x65f20a:c.instructions+=4;goto B65f20a;
case 0x65f20d:c.instructions+=3;goto B65f20d;
case 0x65f210:c.instructions+=2;goto B65f210;
case 0x65f213:c.instructions+=1;goto B65f213;
case 0x65f215:goto L65f215;
case 0x65f217:goto L65f217;
case 0x65f21a:c.instructions+=8;goto B65f21a;
case 0x65f21d:c.instructions+=7;goto B65f21d;
case 0x65f21f:c.instructions+=6;goto B65f21f;
case 0x65f222:c.instructions+=5;goto B65f222;
case 0x65f224:c.instructions+=4;goto B65f224;
case 0x65f227:c.instructions+=3;goto B65f227;
case 0x65f229:c.instructions+=2;goto B65f229;
case 0x65f22c:c.instructions+=1;goto B65f22c;
case 0x65f22e:goto L65f22e;
case 0x65f230:c.instructions+=1;goto B65f230;
case 0x65f232:goto L65f232;
case 0x65f236:c.instructions+=2;goto B65f236;
case 0x65f23a:c.instructions+=1;goto B65f23a;
case 0x65f23c:goto L65f23c;
case 0x65f23e:c.instructions+=1;goto B65f23e;
case 0x65f240:goto L65f240;
case 0x65f243:c.instructions+=2;goto B65f243;
case 0x65f245:c.instructions+=1;goto B65f245;
case 0x65f247:goto L65f247;
case 0x65f249:c.instructions+=2;goto B65f249;
case 0x65f24b:c.instructions+=1;goto B65f24b;
case 0x65f24d:goto L65f24d;
case 0x65f250:c.instructions+=4;goto B65f250;
case 0x65f252:c.instructions+=3;goto B65f252;
case 0x65f255:c.instructions+=2;goto B65f255;
case 0x65f256:c.instructions+=1;goto B65f256;
case 0x65f258:goto L65f258;
case 0x65f25b:goto L65f25b;
case 0x65f25e:c.instructions+=6;goto B65f25e;
case 0x65f261:c.instructions+=5;goto B65f261;
case 0x65f262:c.instructions+=4;goto B65f262;
case 0x65f265:c.instructions+=3;goto B65f265;
case 0x65f268:c.instructions+=2;goto B65f268;
case 0x65f26b:c.instructions+=1;goto B65f26b;
case 0x65f26d:goto L65f26d;
case 0x65f270:c.instructions+=4;goto B65f270;
case 0x65f273:c.instructions+=3;goto B65f273;
case 0x65f276:c.instructions+=2;goto B65f276;
case 0x65f279:c.instructions+=1;goto B65f279;
case 0x65f27b:goto L65f27b;
case 0x65f27e:goto L65f27e;
case 0x65f280:c.instructions+=6;goto B65f280;
case 0x65f283:c.instructions+=5;goto B65f283;
case 0x65f285:c.instructions+=4;goto B65f285;
case 0x65f288:c.instructions+=3;goto B65f288;
case 0x65f28a:c.instructions+=2;goto B65f28a;
case 0x65f28d:c.instructions+=1;goto B65f28d;
case 0x65f290:goto L65f290;
case 0x65f291:c.instructions+=4;goto B65f291;
case 0x65f292:c.instructions+=3;goto B65f292;
case 0x65f293:c.instructions+=2;goto B65f293;
case 0x65f294:c.instructions+=1;goto B65f294;
case 0x65f297:goto L65f297;
case 0x65f299:c.instructions+=10;goto B65f299;
case 0x65f29a:c.instructions+=9;goto B65f29a;
case 0x65f29c:c.instructions+=8;goto B65f29c;
case 0x65f29f:c.instructions+=7;goto B65f29f;
case 0x65f2a2:c.instructions+=6;goto B65f2a2;
case 0x65f2a3:c.instructions+=5;goto B65f2a3;
case 0x65f2a4:c.instructions+=4;goto B65f2a4;
case 0x65f2a7:c.instructions+=3;goto B65f2a7;
case 0x65f2a9:c.instructions+=2;goto B65f2a9;
case 0x65f2aa:c.instructions+=1;goto B65f2aa;
case 0x65f2ac:goto L65f2ac;
case 0x65f2af:c.instructions+=3;goto B65f2af;
case 0x65f2b1:c.instructions+=2;goto B65f2b1;
case 0x65f2b4:c.instructions+=1;goto B65f2b4;
case 0x65f2b6:goto L65f2b6;
case 0x65f2b8:c.instructions+=2;goto B65f2b8;
case 0x65f2bb:c.instructions+=1;goto B65f2bb;
case 0x65f2be:goto L65f2be;
case 0x65f2c1:c.instructions+=4;goto B65f2c1;
case 0x65f2c3:c.instructions+=3;goto B65f2c3;
case 0x65f2c4:c.instructions+=2;goto B65f2c4;
case 0x65f2c7:c.instructions+=1;goto B65f2c7;
case 0x65f2c9:goto L65f2c9;
case 0x65f2cc:c.instructions+=1;goto B65f2cc;
case 0x65f2ce:goto L65f2ce;
case 0x65f2d0:c.instructions+=4;goto B65f2d0;
case 0x65f2d3:c.instructions+=3;goto B65f2d3;
case 0x65f2d5:c.instructions+=2;goto B65f2d5;
case 0x65f2d8:c.instructions+=1;goto B65f2d8;
case 0x65f2da:goto L65f2da;
case 0x65f2dd:goto L65f2dd;
case 0x65f2df:c.instructions+=1;goto B65f2df;
case 0x65f2e5:goto L65f2e5;
case 0x65f2e7:c.instructions+=1;goto B65f2e7;
case 0x65f2ed:goto L65f2ed;
case 0x65f2f0:c.instructions+=1;goto B65f2f0;
case 0x65f2f6:goto L65f2f6;
case 0x65f2f9:c.instructions+=1;goto B65f2f9;
case 0x65f2ff:goto L65f2ff;
case 0x65f302:c.instructions+=1;goto B65f302;
case 0x65f308:goto L65f308;
case 0x65f30c:c.instructions+=2;goto B65f30c;
case 0x65f30e:c.instructions+=1;goto B65f30e;
case 0x65f310:goto L65f310;
case 0x65f313:c.instructions+=2;goto B65f313;
case 0x65f315:c.instructions+=1;goto B65f315;
case 0x65f318:goto L65f318;
case 0x65f31a:c.instructions+=6;goto B65f31a;
case 0x65f31e:c.instructions+=5;goto B65f31e;
case 0x65f322:c.instructions+=4;goto B65f322;
case 0x65f325:c.instructions+=3;goto B65f325;
case 0x65f328:c.instructions+=2;goto B65f328;
case 0x65f32a:c.instructions+=1;goto B65f32a;
case 0x65f330:goto L65f330;
case 0x65f333:c.instructions+=2;goto B65f333;
case 0x65f336:c.instructions+=1;goto B65f336;
case 0x65f33c:goto L65f33c;
case 0x65f340:c.instructions+=3;goto B65f340;
case 0x65f342:c.instructions+=2;goto B65f342;
case 0x65f344:c.instructions+=1;goto B65f344;
case 0x65f346:goto L65f346;
case 0x65f349:c.instructions+=1;goto B65f349;
case 0x65f34c:goto L65f34c;
case 0x65f34f:c.instructions+=2;goto B65f34f;
case 0x65f352:c.instructions+=1;goto B65f352;
case 0x65f354:goto L65f354;
case 0x65f358:c.instructions+=1;goto B65f358;
case 0x65f35a:goto L65f35a;
case 0x65f35c:c.instructions+=1;goto B65f35c;
case 0x65f35f:goto L65f35f;
case 0x65f361:c.instructions+=7;goto B65f361;
case 0x65f364:c.instructions+=6;goto B65f364;
case 0x65f367:c.instructions+=5;goto B65f367;
case 0x65f36a:c.instructions+=4;goto B65f36a;
case 0x65f36d:c.instructions+=3;goto B65f36d;
case 0x65f370:c.instructions+=2;goto B65f370;
case 0x65f373:c.instructions+=1;goto B65f373;
case 0x65f378:goto L65f378;
case 0x65f37b:c.instructions+=4;goto B65f37b;
case 0x65f37e:c.instructions+=3;goto B65f37e;
case 0x65f381:c.instructions+=2;goto B65f381;
case 0x65f384:c.instructions+=1;goto B65f384;
case 0x65f386:goto L65f386;
case 0x65f389:c.instructions+=3;goto B65f389;
case 0x65f38c:c.instructions+=2;goto B65f38c;
case 0x65f38f:c.instructions+=1;goto B65f38f;
case 0x65f391:goto L65f391;
case 0x65f396:goto L65f396;
case 0x65f398:c.instructions+=7;goto B65f398;
case 0x65f39b:c.instructions+=6;goto B65f39b;
case 0x65f39e:c.instructions+=5;goto B65f39e;
case 0x65f3a1:c.instructions+=4;goto B65f3a1;
case 0x65f3a3:c.instructions+=3;goto B65f3a3;
case 0x65f3a4:c.instructions+=2;goto B65f3a4;
case 0x65f3a7:c.instructions+=1;goto B65f3a7;
case 0x65f3ad:goto L65f3ad;
case 0x65f3ae:c.instructions+=1;goto B65f3ae;
case 0x65f3b4:goto L65f3b4;
case 0x65f3b5:c.instructions+=1;goto B65f3b5;
case 0x65f3bb:goto L65f3bb;
case 0x65f3be:c.instructions+=9;goto B65f3be;
case 0x65f3c0:c.instructions+=8;goto B65f3c0;
case 0x65f3c3:c.instructions+=7;goto B65f3c3;
case 0x65f3c5:c.instructions+=6;goto B65f3c5;
case 0x65f3c8:c.instructions+=5;goto B65f3c8;
case 0x65f3ca:c.instructions+=4;goto B65f3ca;
case 0x65f3ce:c.instructions+=3;goto B65f3ce;
case 0x65f3d2:c.instructions+=2;goto B65f3d2;
case 0x65f3d5:c.instructions+=1;goto B65f3d5;
case 0x65f3d7:goto L65f3d7;
case 0x65f3d9:c.instructions+=1;goto B65f3d9;
case 0x65f3db:goto L65f3db;
case 0x65f3df:c.instructions+=2;goto B65f3df;
case 0x65f3e3:c.instructions+=1;goto B65f3e3;
case 0x65f3e5:goto L65f3e5;
case 0x65f3e8:goto L65f3e8;
case 0x65f3ea:c.instructions+=1;goto B65f3ea;
case 0x65f3ec:goto L65f3ec;
case 0x65f3ee:c.instructions+=2;goto B65f3ee;
case 0x65f3f1:c.instructions+=1;goto B65f3f1;
case 0x65f3f3:goto L65f3f3;
case 0x65f3f6:c.instructions+=1;goto B65f3f6;
case 0x65f3f9:goto L65f3f9;
case 0x65f3fc:c.instructions+=2;goto B65f3fc;
case 0x65f3fe:c.instructions+=1;goto B65f3fe;
case 0x65f403:goto L65f403;
case 0x65f407:c.instructions+=4;goto B65f407;
case 0x65f40a:c.instructions+=3;goto B65f40a;
case 0x65f40b:c.instructions+=2;goto B65f40b;
case 0x65f40e:c.instructions+=1;goto B65f40e;
case 0x65f410:goto L65f410;
case 0x65f414:c.instructions+=6;goto B65f414;
case 0x65f417:c.instructions+=5;goto B65f417;
case 0x65f418:c.instructions+=4;goto B65f418;
case 0x65f41b:c.instructions+=3;goto B65f41b;
case 0x65f41e:c.instructions+=2;goto B65f41e;
case 0x65f421:c.instructions+=1;goto B65f421;
case 0x65f423:goto L65f423;
case 0x65f426:c.instructions+=7;goto B65f426;
case 0x65f429:c.instructions+=6;goto B65f429;
case 0x65f42c:c.instructions+=5;goto B65f42c;
case 0x65f42f:c.instructions+=4;goto B65f42f;
case 0x65f432:c.instructions+=3;goto B65f432;
case 0x65f435:c.instructions+=2;goto B65f435;
case 0x65f438:c.instructions+=1;goto B65f438;
case 0x65f43a:goto L65f43a;
case 0x65f43d:c.instructions+=5;goto B65f43d;
case 0x65f43f:c.instructions+=4;goto B65f43f;
case 0x65f442:c.instructions+=3;goto B65f442;
case 0x65f444:c.instructions+=2;goto B65f444;
case 0x65f447:c.instructions+=1;goto B65f447;
case 0x65f44c:goto L65f44c;
case 0x65f44f:c.instructions+=9;goto B65f44f;
case 0x65f451:c.instructions+=8;goto B65f451;
case 0x65f454:c.instructions+=7;goto B65f454;
case 0x65f457:c.instructions+=6;goto B65f457;
case 0x65f459:c.instructions+=5;goto B65f459;
case 0x65f45d:c.instructions+=4;goto B65f45d;
case 0x65f461:c.instructions+=3;goto B65f461;
case 0x65f463:c.instructions+=2;goto B65f463;
case 0x65f466:c.instructions+=1;goto B65f466;
case 0x65f46c:goto L65f46c;
case 0x65f46e:c.instructions+=1;goto B65f46e;
case 0x65f474:goto L65f474;
case 0x65f478:c.instructions+=2;goto B65f478;
case 0x65f47c:c.instructions+=1;goto B65f47c;
case 0x65f47e:goto L65f47e;
case 0x65f480:c.instructions+=1;goto B65f480;
case 0x65f482:goto L65f482;
case 0x65f484:c.instructions+=2;goto B65f484;
case 0x65f487:c.instructions+=1;goto B65f487;
case 0x65f489:goto L65f489;
case 0x65f48c:c.instructions+=1;goto B65f48c;
case 0x65f48f:goto L65f48f;
case 0x65f491:c.instructions+=6;goto B65f491;
case 0x65f494:c.instructions+=5;goto B65f494;
case 0x65f497:c.instructions+=4;goto B65f497;
case 0x65f498:c.instructions+=3;goto B65f498;
case 0x65f49b:c.instructions+=2;goto B65f49b;
case 0x65f49e:c.instructions+=1;goto B65f49e;
case 0x65f4a0:goto L65f4a0;
case 0x65f4a3:c.instructions+=5;goto B65f4a3;
case 0x65f4a4:c.instructions+=4;goto B65f4a4;
case 0x65f4a7:c.instructions+=3;goto B65f4a7;
case 0x65f4aa:c.instructions+=2;goto B65f4aa;
case 0x65f4ad:c.instructions+=1;goto B65f4ad;
case 0x65f4af:goto L65f4af;
case 0x65f4b3:c.instructions+=4;goto B65f4b3;
case 0x65f4b6:c.instructions+=3;goto B65f4b6;
case 0x65f4b9:c.instructions+=2;goto B65f4b9;
case 0x65f4bc:c.instructions+=1;goto B65f4bc;
case 0x65f4be:goto L65f4be;
case 0x65f4c0:goto L65f4c0;
case 0x65f4c3:c.instructions+=9;goto B65f4c3;
case 0x65f4c5:c.instructions+=8;goto B65f4c5;
case 0x65f4c8:c.instructions+=7;goto B65f4c8;
case 0x65f4cb:c.instructions+=6;goto B65f4cb;
case 0x65f4cd:c.instructions+=5;goto B65f4cd;
case 0x65f4d1:c.instructions+=4;goto B65f4d1;
case 0x65f4d5:c.instructions+=3;goto B65f4d5;
case 0x65f4d7:c.instructions+=2;goto B65f4d7;
case 0x65f4da:c.instructions+=1;goto B65f4da;
case 0x65f4dc:goto L65f4dc;
case 0x65f4de:c.instructions+=1;goto B65f4de;
case 0x65f4e0:goto L65f4e0;
case 0x65f4e4:c.instructions+=2;goto B65f4e4;
case 0x65f4e8:c.instructions+=1;goto B65f4e8;
case 0x65f4ea:goto L65f4ea;
case 0x65f4ec:c.instructions+=1;goto B65f4ec;
case 0x65f4ee:goto L65f4ee;
case 0x65f4f0:c.instructions+=2;goto B65f4f0;
case 0x65f4f3:c.instructions+=1;goto B65f4f3;
case 0x65f4f5:goto L65f4f5;
case 0x65f4f8:c.instructions+=1;goto B65f4f8;
case 0x65f4fb:goto L65f4fb;
case 0x65f4fd:c.instructions+=6;goto B65f4fd;
case 0x65f500:c.instructions+=5;goto B65f500;
case 0x65f503:c.instructions+=4;goto B65f503;
case 0x65f504:c.instructions+=3;goto B65f504;
case 0x65f507:c.instructions+=2;goto B65f507;
case 0x65f50a:c.instructions+=1;goto B65f50a;
case 0x65f50c:goto L65f50c;
case 0x65f50f:c.instructions+=5;goto B65f50f;
case 0x65f510:c.instructions+=4;goto B65f510;
case 0x65f513:c.instructions+=3;goto B65f513;
case 0x65f516:c.instructions+=2;goto B65f516;
case 0x65f519:c.instructions+=1;goto B65f519;
case 0x65f51b:goto L65f51b;
case 0x65f51f:c.instructions+=4;goto B65f51f;
case 0x65f522:c.instructions+=3;goto B65f522;
case 0x65f525:c.instructions+=2;goto B65f525;
case 0x65f528:c.instructions+=1;goto B65f528;
case 0x65f52a:goto L65f52a;
case 0x65f52d:c.instructions+=5;goto B65f52d;
case 0x65f52f:c.instructions+=4;goto B65f52f;
case 0x65f532:c.instructions+=3;goto B65f532;
case 0x65f534:c.instructions+=2;goto B65f534;
case 0x65f537:c.instructions+=1;goto B65f537;
case 0x65f53a:goto L65f53a;
case 0x65f53c:c.instructions+=2;goto B65f53c;
case 0x65f53f:c.instructions+=1;goto B65f53f;
case 0x65f544:goto L65f544;
case 0x65f547:c.instructions+=10;goto B65f547;
case 0x65f549:c.instructions+=9;goto B65f549;
case 0x65f54c:c.instructions+=8;goto B65f54c;
case 0x65f54e:c.instructions+=7;goto B65f54e;
case 0x65f551:c.instructions+=6;goto B65f551;
case 0x65f553:c.instructions+=5;goto B65f553;
case 0x65f556:c.instructions+=4;goto B65f556;
case 0x65f559:c.instructions+=3;goto B65f559;
case 0x65f55c:c.instructions+=2;goto B65f55c;
case 0x65f55f:c.instructions+=1;goto B65f55f;
case 0x65f561:goto L65f561;
case 0x65f563:c.instructions+=4;goto B65f563;
case 0x65f564:c.instructions+=3;goto B65f564;
case 0x65f566:c.instructions+=2;goto B65f566;
case 0x65f569:c.instructions+=1;goto B65f569;
case 0x65f56c:goto L65f56c;
case 0x65f56d:c.instructions+=1;goto B65f56d;
case 0x65f573:goto L65f573;
case 0x65f574:c.instructions+=1;goto B65f574;
case 0x65f57a:goto L65f57a;
case 0x65f57b:c.instructions+=1;goto B65f57b;
case 0x65f581:goto L65f581;
case 0x65f584:c.instructions+=8;goto B65f584;
case 0x65f586:c.instructions+=7;goto B65f586;
case 0x65f589:c.instructions+=6;goto B65f589;
case 0x65f58b:c.instructions+=5;goto B65f58b;
case 0x65f58e:c.instructions+=4;goto B65f58e;
case 0x65f592:c.instructions+=3;goto B65f592;
case 0x65f596:c.instructions+=2;goto B65f596;
case 0x65f598:c.instructions+=1;goto B65f598;
case 0x65f59a:goto L65f59a;
case 0x65f59c:c.instructions+=1;goto B65f59c;
case 0x65f59e:goto L65f59e;
case 0x65f5a2:c.instructions+=2;goto B65f5a2;
case 0x65f5a6:c.instructions+=1;goto B65f5a6;
case 0x65f5a8:goto L65f5a8;
case 0x65f5aa:c.instructions+=1;goto B65f5aa;
case 0x65f5ac:goto L65f5ac;
case 0x65f5ae:c.instructions+=1;goto B65f5ae;
case 0x65f5b3:goto L65f5b3;
case 0x65f5b5:c.instructions+=2;goto B65f5b5;
case 0x65f5b8:c.instructions+=1;goto B65f5b8;
case 0x65f5bd:goto L65f5bd;
case 0x65f5c0:c.instructions+=2;goto B65f5c0;
case 0x65f5c3:c.instructions+=1;goto B65f5c3;
case 0x65f5c8:goto L65f5c8;
case 0x65f5cb:c.instructions+=2;goto B65f5cb;
case 0x65f5ce:c.instructions+=1;goto B65f5ce;
case 0x65f5d3:goto L65f5d3;
case 0x65f5d6:c.instructions+=7;goto B65f5d6;
case 0x65f5d9:c.instructions+=6;goto B65f5d9;
case 0x65f5dc:c.instructions+=5;goto B65f5dc;
case 0x65f5dd:c.instructions+=4;goto B65f5dd;
case 0x65f5e0:c.instructions+=3;goto B65f5e0;
case 0x65f5e3:c.instructions+=2;goto B65f5e3;
case 0x65f5e6:c.instructions+=1;goto B65f5e6;
case 0x65f5e8:goto L65f5e8;
case 0x65f5eb:c.instructions+=5;goto B65f5eb;
case 0x65f5ee:c.instructions+=4;goto B65f5ee;
case 0x65f5f1:c.instructions+=3;goto B65f5f1;
case 0x65f5f4:c.instructions+=2;goto B65f5f4;
case 0x65f5f7:c.instructions+=1;goto B65f5f7;
case 0x65f5f9:goto L65f5f9;
case 0x65f5fc:c.instructions+=6;goto B65f5fc;
case 0x65f5fe:c.instructions+=5;goto B65f5fe;
case 0x65f601:c.instructions+=4;goto B65f601;
case 0x65f603:c.instructions+=3;goto B65f603;
case 0x65f606:c.instructions+=2;goto B65f606;
case 0x65f608:c.instructions+=1;goto B65f608;
case 0x65f60d:goto L65f60d;
case 0x65f610:c.instructions+=8;goto B65f610;
case 0x65f612:c.instructions+=7;goto B65f612;
case 0x65f615:c.instructions+=6;goto B65f615;
case 0x65f617:c.instructions+=5;goto B65f617;
case 0x65f61a:c.instructions+=4;goto B65f61a;
case 0x65f61e:c.instructions+=3;goto B65f61e;
case 0x65f622:c.instructions+=2;goto B65f622;
case 0x65f624:c.instructions+=1;goto B65f624;
case 0x65f62a:goto L65f62a;
case 0x65f62c:c.instructions+=1;goto B65f62c;
case 0x65f632:goto L65f632;
case 0x65f636:c.instructions+=2;goto B65f636;
case 0x65f63a:c.instructions+=1;goto B65f63a;
case 0x65f63c:goto L65f63c;
case 0x65f63e:c.instructions+=1;goto B65f63e;
case 0x65f640:goto L65f640;
case 0x65f642:c.instructions+=1;goto B65f642;
case 0x65f644:goto L65f644;
case 0x65f646:c.instructions+=3;goto B65f646;
case 0x65f648:c.instructions+=2;goto B65f648;
case 0x65f64a:c.instructions+=1;goto B65f64a;
case 0x65f64d:goto L65f64d;
case 0x65f650:c.instructions+=4;goto B65f650;
case 0x65f652:c.instructions+=3;goto B65f652;
case 0x65f655:c.instructions+=2;goto B65f655;
case 0x65f658:c.instructions+=1;goto B65f658;
case 0x65f65a:goto L65f65a;
case 0x65f65d:c.instructions+=1;goto B65f65d;
case 0x65f660:goto L65f660;
case 0x65f663:c.instructions+=6;goto B65f663;
case 0x65f666:c.instructions+=5;goto B65f666;
case 0x65f669:c.instructions+=4;goto B65f669;
case 0x65f66a:c.instructions+=3;goto B65f66a;
case 0x65f66d:c.instructions+=2;goto B65f66d;
case 0x65f670:c.instructions+=1;goto B65f670;
case 0x65f672:goto L65f672;
case 0x65f675:c.instructions+=4;goto B65f675;
case 0x65f678:c.instructions+=3;goto B65f678;
case 0x65f67b:c.instructions+=2;goto B65f67b;
case 0x65f67e:c.instructions+=1;goto B65f67e;
case 0x65f680:goto L65f680;
case 0x65f682:goto L65f682;
case 0x65f685:c.instructions+=8;goto B65f685;
case 0x65f687:c.instructions+=7;goto B65f687;
case 0x65f68a:c.instructions+=6;goto B65f68a;
case 0x65f68c:c.instructions+=5;goto B65f68c;
case 0x65f68f:c.instructions+=4;goto B65f68f;
case 0x65f693:c.instructions+=3;goto B65f693;
case 0x65f697:c.instructions+=2;goto B65f697;
case 0x65f699:c.instructions+=1;goto B65f699;
case 0x65f69b:goto L65f69b;
case 0x65f69d:c.instructions+=1;goto B65f69d;
case 0x65f69f:goto L65f69f;
case 0x65f6a3:c.instructions+=2;goto B65f6a3;
case 0x65f6a7:c.instructions+=1;goto B65f6a7;
case 0x65f6a9:goto L65f6a9;
case 0x65f6ab:c.instructions+=1;goto B65f6ab;
case 0x65f6ad:goto L65f6ad;
case 0x65f6af:c.instructions+=1;goto B65f6af;
case 0x65f6b1:goto L65f6b1;
case 0x65f6b3:c.instructions+=3;goto B65f6b3;
case 0x65f6b5:c.instructions+=2;goto B65f6b5;
case 0x65f6b7:c.instructions+=1;goto B65f6b7;
case 0x65f6ba:goto L65f6ba;
case 0x65f6bd:c.instructions+=4;goto B65f6bd;
case 0x65f6bf:c.instructions+=3;goto B65f6bf;
case 0x65f6c2:c.instructions+=2;goto B65f6c2;
case 0x65f6c5:c.instructions+=1;goto B65f6c5;
case 0x65f6c7:goto L65f6c7;
case 0x65f6ca:c.instructions+=1;goto B65f6ca;
case 0x65f6cd:goto L65f6cd;
case 0x65f6d0:c.instructions+=6;goto B65f6d0;
case 0x65f6d3:c.instructions+=5;goto B65f6d3;
case 0x65f6d6:c.instructions+=4;goto B65f6d6;
case 0x65f6d7:c.instructions+=3;goto B65f6d7;
case 0x65f6da:c.instructions+=2;goto B65f6da;
case 0x65f6dd:c.instructions+=1;goto B65f6dd;
case 0x65f6df:goto L65f6df;
case 0x65f6e2:c.instructions+=4;goto B65f6e2;
case 0x65f6e5:c.instructions+=3;goto B65f6e5;
case 0x65f6e8:c.instructions+=2;goto B65f6e8;
case 0x65f6eb:c.instructions+=1;goto B65f6eb;
case 0x65f6ed:goto L65f6ed;
case 0x65f6f0:c.instructions+=5;goto B65f6f0;
case 0x65f6f2:c.instructions+=4;goto B65f6f2;
case 0x65f6f5:c.instructions+=3;goto B65f6f5;
case 0x65f6f7:c.instructions+=2;goto B65f6f7;
case 0x65f6fa:c.instructions+=1;goto B65f6fa;
case 0x65f6fc:goto L65f6fc;
case 0x65f6ff:c.instructions+=1;goto B65f6ff;
case 0x65f702:goto L65f702;
case 0x65f703:c.instructions+=4;goto B65f703;
case 0x65f704:c.instructions+=3;goto B65f704;
case 0x65f705:c.instructions+=2;goto B65f705;
case 0x65f706:c.instructions+=1;goto B65f706;
case 0x65f709:goto L65f709;
case 0x65f70b:c.instructions+=9;goto B65f70b;
case 0x65f70c:c.instructions+=8;goto B65f70c;
case 0x65f70e:c.instructions+=7;goto B65f70e;
case 0x65f711:c.instructions+=6;goto B65f711;
case 0x65f712:c.instructions+=5;goto B65f712;
case 0x65f713:c.instructions+=4;goto B65f713;
case 0x65f716:c.instructions+=3;goto B65f716;
case 0x65f718:c.instructions+=2;goto B65f718;
case 0x65f719:c.instructions+=1;goto B65f719;
case 0x65f71b:goto L65f71b;
case 0x65f71e:c.instructions+=3;goto B65f71e;
case 0x65f721:c.instructions+=2;goto B65f721;
case 0x65f724:c.instructions+=1;goto B65f724;
case 0x65f726:goto L65f726;
case 0x65f729:c.instructions+=3;goto B65f729;
case 0x65f72b:c.instructions+=2;goto B65f72b;
case 0x65f72e:c.instructions+=1;goto B65f72e;
case 0x65f731:goto L65f731;
case 0x65f734:c.instructions+=5;goto B65f734;
case 0x65f737:c.instructions+=4;goto B65f737;
case 0x65f739:c.instructions+=3;goto B65f739;
case 0x65f73a:c.instructions+=2;goto B65f73a;
case 0x65f73d:c.instructions+=1;goto B65f73d;
case 0x65f73f:goto L65f73f;
case 0x65f742:c.instructions+=1;goto B65f742;
case 0x65f744:goto L65f744;
case 0x65f746:c.instructions+=4;goto B65f746;
case 0x65f749:c.instructions+=3;goto B65f749;
case 0x65f74b:c.instructions+=2;goto B65f74b;
case 0x65f74e:c.instructions+=1;goto B65f74e;
case 0x65f750:goto L65f750;
case 0x65f753:goto L65f753;
case 0x65f755:c.instructions+=1;goto B65f755;
case 0x65f75b:goto L65f75b;
case 0x65f75d:c.instructions+=1;goto B65f75d;
case 0x65f763:goto L65f763;
case 0x65f766:c.instructions+=1;goto B65f766;
case 0x65f76c:goto L65f76c;
case 0x65f76f:c.instructions+=1;goto B65f76f;
case 0x65f775:goto L65f775;
case 0x65f778:c.instructions+=1;goto B65f778;
case 0x65f77e:goto L65f77e;
case 0x65f782:c.instructions+=2;goto B65f782;
case 0x65f784:c.instructions+=1;goto B65f784;
case 0x65f786:goto L65f786;
case 0x65f789:c.instructions+=2;goto B65f789;
case 0x65f78b:c.instructions+=1;goto B65f78b;
case 0x65f78e:goto L65f78e;
case 0x65f790:c.instructions+=6;goto B65f790;
case 0x65f794:c.instructions+=5;goto B65f794;
case 0x65f798:c.instructions+=4;goto B65f798;
case 0x65f79b:c.instructions+=3;goto B65f79b;
case 0x65f79e:c.instructions+=2;goto B65f79e;
case 0x65f7a0:c.instructions+=1;goto B65f7a0;
case 0x65f7a6:goto L65f7a6;
case 0x65f7a8:goto L65f7a8;
case 0x65f7ab:goto L65f7ab;
case 0x65f7ae:c.instructions+=2;goto B65f7ae;
case 0x65f7b1:c.instructions+=1;goto B65f7b1;
case 0x65f7b7:goto L65f7b7;
case 0x65f7bb:c.instructions+=3;goto B65f7bb;
case 0x65f7bd:c.instructions+=2;goto B65f7bd;
case 0x65f7bf:c.instructions+=1;goto B65f7bf;
case 0x65f7c1:goto L65f7c1;
case 0x65f7c4:c.instructions+=2;goto B65f7c4;
case 0x65f7c7:c.instructions+=1;goto B65f7c7;
case 0x65f7c9:goto L65f7c9;
case 0x65f7cc:goto L65f7cc;
case 0x65f7cf:c.instructions+=1;goto B65f7cf;
case 0x65f7d1:goto L65f7d1;
case 0x65f7d5:c.instructions+=1;goto B65f7d5;
case 0x65f7d7:goto L65f7d7;
case 0x65f7d9:c.instructions+=1;goto B65f7d9;
case 0x65f7dc:goto L65f7dc;
case 0x65f7de:c.instructions+=7;goto B65f7de;
case 0x65f7df:c.instructions+=6;goto B65f7df;
case 0x65f7e2:c.instructions+=5;goto B65f7e2;
case 0x65f7e5:c.instructions+=4;goto B65f7e5;
case 0x65f7e8:c.instructions+=3;goto B65f7e8;
case 0x65f7eb:c.instructions+=2;goto B65f7eb;
case 0x65f7ee:c.instructions+=1;goto B65f7ee;
case 0x65f7f3:goto L65f7f3;
case 0x65f7f6:c.instructions+=3;goto B65f7f6;
case 0x65f7f9:c.instructions+=2;goto B65f7f9;
case 0x65f7fc:c.instructions+=1;goto B65f7fc;
case 0x65f7fe:goto L65f7fe;
case 0x65f801:c.instructions+=3;goto B65f801;
case 0x65f804:c.instructions+=2;goto B65f804;
case 0x65f807:c.instructions+=1;goto B65f807;
case 0x65f809:goto L65f809;
case 0x65f80e:goto L65f80e;
case 0x65f810:c.instructions+=5;goto B65f810;
case 0x65f813:c.instructions+=4;goto B65f813;
case 0x65f815:c.instructions+=3;goto B65f815;
case 0x65f816:c.instructions+=2;goto B65f816;
case 0x65f819:c.instructions+=1;goto B65f819;
case 0x65f81f:goto L65f81f;
case 0x65f820:c.instructions+=1;goto B65f820;
case 0x65f822:goto L65f822;
case 0x65f823:c.instructions+=1;goto B65f823;
case 0x65f829:goto L65f829;
case 0x65f82c:c.instructions+=8;goto B65f82c;
case 0x65f82e:c.instructions+=7;goto B65f82e;
case 0x65f831:c.instructions+=6;goto B65f831;
case 0x65f833:c.instructions+=5;goto B65f833;
case 0x65f836:c.instructions+=4;goto B65f836;
case 0x65f83a:c.instructions+=3;goto B65f83a;
case 0x65f83e:c.instructions+=2;goto B65f83e;
case 0x65f840:c.instructions+=1;goto B65f840;
case 0x65f842:goto L65f842;
case 0x65f844:c.instructions+=1;goto B65f844;
case 0x65f846:goto L65f846;
case 0x65f84a:c.instructions+=2;goto B65f84a;
case 0x65f84e:c.instructions+=1;goto B65f84e;
case 0x65f850:goto L65f850;
case 0x65f852:c.instructions+=1;goto B65f852;
case 0x65f854:goto L65f854;
case 0x65f857:c.instructions+=2;goto B65f857;
case 0x65f85a:c.instructions+=1;goto B65f85a;
case 0x65f85f:goto L65f85f;
case 0x65f861:c.instructions+=6;goto B65f861;
case 0x65f864:c.instructions+=5;goto B65f864;
case 0x65f865:c.instructions+=4;goto B65f865;
case 0x65f868:c.instructions+=3;goto B65f868;
case 0x65f86b:c.instructions+=2;goto B65f86b;
case 0x65f86e:c.instructions+=1;goto B65f86e;
case 0x65f870:goto L65f870;
case 0x65f873:c.instructions+=4;goto B65f873;
case 0x65f876:c.instructions+=3;goto B65f876;
case 0x65f879:c.instructions+=2;goto B65f879;
case 0x65f87c:c.instructions+=1;goto B65f87c;
case 0x65f87e:goto L65f87e;
case 0x65f881:c.instructions+=6;goto B65f881;
case 0x65f883:c.instructions+=5;goto B65f883;
case 0x65f886:c.instructions+=4;goto B65f886;
case 0x65f888:c.instructions+=3;goto B65f888;
case 0x65f88b:c.instructions+=2;goto B65f88b;
case 0x65f88d:c.instructions+=1;goto B65f88d;
case 0x65f892:goto L65f892;
case 0x65f895:c.instructions+=8;goto B65f895;
case 0x65f897:c.instructions+=7;goto B65f897;
case 0x65f89a:c.instructions+=6;goto B65f89a;
case 0x65f89d:c.instructions+=5;goto B65f89d;
case 0x65f8a1:c.instructions+=4;goto B65f8a1;
case 0x65f8a5:c.instructions+=3;goto B65f8a5;
case 0x65f8a7:c.instructions+=2;goto B65f8a7;
case 0x65f8a9:c.instructions+=1;goto B65f8a9;
case 0x65f8ab:goto L65f8ab;
case 0x65f8ad:c.instructions+=1;goto B65f8ad;
case 0x65f8af:goto L65f8af;
case 0x65f8b1:c.instructions+=2;goto B65f8b1;
case 0x65f8b4:c.instructions+=1;goto B65f8b4;
case 0x65f8b6:goto L65f8b6;
case 0x65f8b8:c.instructions+=1;goto B65f8b8;
case 0x65f8ba:goto L65f8ba;
case 0x65f8bc:c.instructions+=7;goto B65f8bc;
case 0x65f8bf:c.instructions+=6;goto B65f8bf;
case 0x65f8c1:c.instructions+=5;goto B65f8c1;
case 0x65f8c4:c.instructions+=4;goto B65f8c4;
case 0x65f8c5:c.instructions+=3;goto B65f8c5;
case 0x65f8c6:c.instructions+=2;goto B65f8c6;
case 0x65f8c9:c.instructions+=1;goto B65f8c9;
case 0x65f8cb:goto L65f8cb;
case 0x65f8ce:c.instructions+=4;goto B65f8ce;
case 0x65f8d1:c.instructions+=3;goto B65f8d1;
case 0x65f8d4:c.instructions+=2;goto B65f8d4;
case 0x65f8d7:c.instructions+=1;goto B65f8d7;
case 0x65f8d9:goto L65f8d9;
case 0x65f8db:goto L65f8db;
case 0x65f8de:c.instructions+=8;goto B65f8de;
case 0x65f8e0:c.instructions+=7;goto B65f8e0;
case 0x65f8e3:c.instructions+=6;goto B65f8e3;
case 0x65f8e6:c.instructions+=5;goto B65f8e6;
case 0x65f8ea:c.instructions+=4;goto B65f8ea;
case 0x65f8ee:c.instructions+=3;goto B65f8ee;
case 0x65f8f0:c.instructions+=2;goto B65f8f0;
case 0x65f8f2:c.instructions+=1;goto B65f8f2;
case 0x65f8f4:goto L65f8f4;
case 0x65f8f6:c.instructions+=1;goto B65f8f6;
case 0x65f8f8:goto L65f8f8;
case 0x65f8fa:c.instructions+=2;goto B65f8fa;
case 0x65f8fd:c.instructions+=1;goto B65f8fd;
case 0x65f8ff:goto L65f8ff;
case 0x65f901:c.instructions+=1;goto B65f901;
case 0x65f903:goto L65f903;
case 0x65f905:c.instructions+=7;goto B65f905;
case 0x65f908:c.instructions+=6;goto B65f908;
case 0x65f90a:c.instructions+=5;goto B65f90a;
case 0x65f90d:c.instructions+=4;goto B65f90d;
case 0x65f90e:c.instructions+=3;goto B65f90e;
case 0x65f90f:c.instructions+=2;goto B65f90f;
case 0x65f912:c.instructions+=1;goto B65f912;
case 0x65f914:goto L65f914;
case 0x65f917:c.instructions+=4;goto B65f917;
case 0x65f91a:c.instructions+=3;goto B65f91a;
case 0x65f91d:c.instructions+=2;goto B65f91d;
case 0x65f920:c.instructions+=1;goto B65f920;
case 0x65f922:goto L65f922;
case 0x65f925:c.instructions+=4;goto B65f925;
case 0x65f927:c.instructions+=3;goto B65f927;
case 0x65f92a:c.instructions+=2;goto B65f92a;
case 0x65f92c:c.instructions+=1;goto B65f92c;
case 0x65f92e:goto L65f92e;
case 0x65f931:c.instructions+=2;goto B65f931;
case 0x65f934:c.instructions+=1;goto B65f934;
case 0x65f939:goto L65f939;
case 0x65f93b:c.instructions+=7;goto B65f93b;
case 0x65f93e:c.instructions+=6;goto B65f93e;
case 0x65f940:c.instructions+=5;goto B65f940;
case 0x65f942:c.instructions+=4;goto B65f942;
case 0x65f945:c.instructions+=3;goto B65f945;
case 0x65f948:c.instructions+=2;goto B65f948;
case 0x65f94b:c.instructions+=1;goto B65f94b;
case 0x65f94d:goto L65f94d;
case 0x65f94f:c.instructions+=4;goto B65f94f;
case 0x65f950:c.instructions+=3;goto B65f950;
case 0x65f952:c.instructions+=2;goto B65f952;
case 0x65f955:c.instructions+=1;goto B65f955;
case 0x65f958:goto L65f958;
case 0x65f959:c.instructions+=1;goto B65f959;
case 0x65f95f:goto L65f95f;
case 0x65f960:c.instructions+=1;goto B65f960;
case 0x65f966:goto L65f966;
case 0x65f967:c.instructions+=1;goto B65f967;
case 0x65f96d:goto L65f96d;
case 0x65f970:c.instructions+=10;goto B65f970;
case 0x65f972:c.instructions+=9;goto B65f972;
case 0x65f975:c.instructions+=8;goto B65f975;
case 0x65f977:c.instructions+=7;goto B65f977;
case 0x65f97a:c.instructions+=6;goto B65f97a;
case 0x65f97d:c.instructions+=5;goto B65f97d;
case 0x65f97f:c.instructions+=4;goto B65f97f;
case 0x65f981:c.instructions+=3;goto B65f981;
case 0x65f984:c.instructions+=2;goto B65f984;
case 0x65f987:c.instructions+=1;goto B65f987;
case 0x65f989:goto L65f989;
case 0x65f98b:goto L65f98b;
case 0x65f98d:goto L65f98d;
case 0x65f990:c.instructions+=1;goto B65f990;
case 0x65f992:goto L65f992;
case 0x65f995:c.instructions+=2;goto B65f995;
case 0x65f998:c.instructions+=1;goto B65f998;
case 0x65f99a:goto L65f99a;
case 0x65f99e:c.instructions+=1;goto B65f99e;
case 0x65f9a0:goto L65f9a0;
case 0x65f9a2:c.instructions+=1;goto B65f9a2;
case 0x65f9a7:goto L65f9a7;
case 0x65f9a9:c.instructions+=3;goto B65f9a9;
case 0x65f9ac:c.instructions+=2;goto B65f9ac;
case 0x65f9af:c.instructions+=1;goto B65f9af;
case 0x65f9b4:goto L65f9b4;
case 0x65f9b6:c.instructions+=2;goto B65f9b6;
case 0x65f9b9:c.instructions+=1;goto B65f9b9;
case 0x65f9be:goto L65f9be;
case 0x65f9c1:c.instructions+=2;goto B65f9c1;
case 0x65f9c4:c.instructions+=1;goto B65f9c4;
case 0x65f9c9:goto L65f9c9;
case 0x65f9cc:c.instructions+=7;goto B65f9cc;
case 0x65f9cf:c.instructions+=6;goto B65f9cf;
case 0x65f9d2:c.instructions+=5;goto B65f9d2;
case 0x65f9d5:c.instructions+=4;goto B65f9d5;
case 0x65f9d8:c.instructions+=3;goto B65f9d8;
case 0x65f9db:c.instructions+=2;goto B65f9db;
case 0x65f9dd:c.instructions+=1;goto B65f9dd;
case 0x65f9df:goto L65f9df;
case 0x65f9e2:c.instructions+=6;goto B65f9e2;
case 0x65f9e5:c.instructions+=5;goto B65f9e5;
case 0x65f9e8:c.instructions+=4;goto B65f9e8;
case 0x65f9eb:c.instructions+=3;goto B65f9eb;
case 0x65f9ee:c.instructions+=2;goto B65f9ee;
case 0x65f9f1:c.instructions+=1;goto B65f9f1;
case 0x65f9f3:goto L65f9f3;
case 0x65f9f6:c.instructions+=7;goto B65f9f6;
case 0x65f9f9:c.instructions+=6;goto B65f9f9;
case 0x65f9fb:c.instructions+=5;goto B65f9fb;
case 0x65f9fe:c.instructions+=4;goto B65f9fe;
case 0x65fa00:c.instructions+=3;goto B65fa00;
case 0x65fa03:c.instructions+=2;goto B65fa03;
case 0x65fa05:c.instructions+=1;goto B65fa05;
case 0x65fa0a:goto L65fa0a;
case 0x65fa0d:c.instructions+=8;goto B65fa0d;
case 0x65fa10:c.instructions+=7;goto B65fa10;
case 0x65fa12:c.instructions+=6;goto B65fa12;
case 0x65fa15:c.instructions+=5;goto B65fa15;
case 0x65fa18:c.instructions+=4;goto B65fa18;
case 0x65fa1a:c.instructions+=3;goto B65fa1a;
case 0x65fa1c:c.instructions+=2;goto B65fa1c;
case 0x65fa1f:c.instructions+=1;goto B65fa1f;
case 0x65fa21:goto L65fa21;
case 0x65fa23:c.instructions+=1;goto B65fa23;
case 0x65fa25:goto L65fa25;
case 0x65fa27:c.instructions+=2;goto B65fa27;
case 0x65fa2a:c.instructions+=1;goto B65fa2a;
case 0x65fa2c:goto L65fa2c;
case 0x65fa2e:c.instructions+=1;goto B65fa2e;
case 0x65fa30:goto L65fa30;
case 0x65fa32:c.instructions+=7;goto B65fa32;
case 0x65fa35:c.instructions+=6;goto B65fa35;
case 0x65fa37:c.instructions+=5;goto B65fa37;
case 0x65fa3a:c.instructions+=4;goto B65fa3a;
case 0x65fa3b:c.instructions+=3;goto B65fa3b;
case 0x65fa3c:c.instructions+=2;goto B65fa3c;
case 0x65fa3f:c.instructions+=1;goto B65fa3f;
case 0x65fa41:goto L65fa41;
case 0x65fa44:c.instructions+=5;goto B65fa44;
case 0x65fa47:c.instructions+=4;goto B65fa47;
case 0x65fa4a:c.instructions+=3;goto B65fa4a;
case 0x65fa4d:c.instructions+=2;goto B65fa4d;
case 0x65fa50:c.instructions+=1;goto B65fa50;
case 0x65fa52:goto L65fa52;
case 0x65fa54:goto L65fa54;
case 0x65fa57:c.instructions+=8;goto B65fa57;
case 0x65fa5a:c.instructions+=7;goto B65fa5a;
case 0x65fa5c:c.instructions+=6;goto B65fa5c;
case 0x65fa5f:c.instructions+=5;goto B65fa5f;
case 0x65fa62:c.instructions+=4;goto B65fa62;
case 0x65fa64:c.instructions+=3;goto B65fa64;
case 0x65fa66:c.instructions+=2;goto B65fa66;
case 0x65fa69:c.instructions+=1;goto B65fa69;
case 0x65fa6b:goto L65fa6b;
case 0x65fa6d:c.instructions+=1;goto B65fa6d;
case 0x65fa6f:goto L65fa6f;
case 0x65fa71:c.instructions+=2;goto B65fa71;
case 0x65fa74:c.instructions+=1;goto B65fa74;
case 0x65fa76:goto L65fa76;
case 0x65fa78:c.instructions+=1;goto B65fa78;
case 0x65fa7a:goto L65fa7a;
case 0x65fa7c:c.instructions+=7;goto B65fa7c;
case 0x65fa7f:c.instructions+=6;goto B65fa7f;
case 0x65fa81:c.instructions+=5;goto B65fa81;
case 0x65fa84:c.instructions+=4;goto B65fa84;
case 0x65fa85:c.instructions+=3;goto B65fa85;
case 0x65fa86:c.instructions+=2;goto B65fa86;
case 0x65fa89:c.instructions+=1;goto B65fa89;
case 0x65fa8b:goto L65fa8b;
case 0x65fa8e:c.instructions+=5;goto B65fa8e;
case 0x65fa91:c.instructions+=4;goto B65fa91;
case 0x65fa94:c.instructions+=3;goto B65fa94;
case 0x65fa97:c.instructions+=2;goto B65fa97;
case 0x65fa9a:c.instructions+=1;goto B65fa9a;
case 0x65fa9c:goto L65fa9c;
case 0x65fa9f:c.instructions+=5;goto B65fa9f;
case 0x65faa1:c.instructions+=4;goto B65faa1;
case 0x65faa4:c.instructions+=3;goto B65faa4;
case 0x65faa6:c.instructions+=2;goto B65faa6;
case 0x65faa9:c.instructions+=1;goto B65faa9;
case 0x65faab:goto L65faab;
case 0x65faae:goto L65faae;
case 0x65faaf:c.instructions+=4;goto B65faaf;
case 0x65fab0:c.instructions+=3;goto B65fab0;
case 0x65fab1:c.instructions+=2;goto B65fab1;
case 0x65fab2:c.instructions+=1;goto B65fab2;
case 0x65fab5:goto L65fab5;
case 0x65fab7:c.instructions+=10;goto B65fab7;
case 0x65fab8:c.instructions+=9;goto B65fab8;
case 0x65faba:c.instructions+=8;goto B65faba;
case 0x65fabd:c.instructions+=7;goto B65fabd;
case 0x65fac0:c.instructions+=6;goto B65fac0;
case 0x65fac1:c.instructions+=5;goto B65fac1;
case 0x65fac2:c.instructions+=4;goto B65fac2;
case 0x65fac5:c.instructions+=3;goto B65fac5;
case 0x65fac7:c.instructions+=2;goto B65fac7;
case 0x65fac8:c.instructions+=1;goto B65fac8;
case 0x65faca:goto L65faca;
case 0x65facd:c.instructions+=3;goto B65facd;
case 0x65facf:c.instructions+=2;goto B65facf;
case 0x65fad2:c.instructions+=1;goto B65fad2;
case 0x65fad4:goto L65fad4;
case 0x65fad6:c.instructions+=2;goto B65fad6;
case 0x65fad9:c.instructions+=1;goto B65fad9;
case 0x65fadc:goto L65fadc;
case 0x65fadf:c.instructions+=4;goto B65fadf;
case 0x65fae1:c.instructions+=3;goto B65fae1;
case 0x65fae2:c.instructions+=2;goto B65fae2;
case 0x65fae5:c.instructions+=1;goto B65fae5;
case 0x65fae7:goto L65fae7;
case 0x65faea:c.instructions+=1;goto B65faea;
case 0x65faec:goto L65faec;
case 0x65faee:c.instructions+=4;goto B65faee;
case 0x65faf1:c.instructions+=3;goto B65faf1;
case 0x65faf3:c.instructions+=2;goto B65faf3;
case 0x65faf6:c.instructions+=1;goto B65faf6;
case 0x65faf8:goto L65faf8;
case 0x65fafb:goto L65fafb;
case 0x65fafd:c.instructions+=1;goto B65fafd;
case 0x65fb03:goto L65fb03;
case 0x65fb05:c.instructions+=1;goto B65fb05;
case 0x65fb0b:goto L65fb0b;
case 0x65fb0e:c.instructions+=1;goto B65fb0e;
case 0x65fb14:goto L65fb14;
case 0x65fb17:c.instructions+=1;goto B65fb17;
case 0x65fb1d:goto L65fb1d;
case 0x65fb20:c.instructions+=1;goto B65fb20;
case 0x65fb26:goto L65fb26;
case 0x65fb2a:c.instructions+=2;goto B65fb2a;
case 0x65fb2c:c.instructions+=1;goto B65fb2c;
case 0x65fb2e:goto L65fb2e;
case 0x65fb31:c.instructions+=2;goto B65fb31;
case 0x65fb33:c.instructions+=1;goto B65fb33;
case 0x65fb36:goto L65fb36;
case 0x65fb38:c.instructions+=6;goto B65fb38;
case 0x65fb3c:c.instructions+=5;goto B65fb3c;
case 0x65fb40:c.instructions+=4;goto B65fb40;
case 0x65fb43:c.instructions+=3;goto B65fb43;
case 0x65fb46:c.instructions+=2;goto B65fb46;
case 0x65fb48:c.instructions+=1;goto B65fb48;
case 0x65fb4e:goto L65fb4e;
case 0x65fb51:c.instructions+=2;goto B65fb51;
case 0x65fb54:c.instructions+=1;goto B65fb54;
case 0x65fb5a:goto L65fb5a;
case 0x65fb5e:c.instructions+=3;goto B65fb5e;
case 0x65fb60:c.instructions+=2;goto B65fb60;
case 0x65fb62:c.instructions+=1;goto B65fb62;
case 0x65fb64:goto L65fb64;
case 0x65fb67:c.instructions+=1;goto B65fb67;
case 0x65fb6a:goto L65fb6a;
case 0x65fb6d:c.instructions+=2;goto B65fb6d;
case 0x65fb70:c.instructions+=1;goto B65fb70;
case 0x65fb72:goto L65fb72;
case 0x65fb76:c.instructions+=1;goto B65fb76;
case 0x65fb78:goto L65fb78;
case 0x65fb7a:c.instructions+=1;goto B65fb7a;
case 0x65fb7d:goto L65fb7d;
case 0x65fb7f:c.instructions+=7;goto B65fb7f;
case 0x65fb82:c.instructions+=6;goto B65fb82;
case 0x65fb85:c.instructions+=5;goto B65fb85;
case 0x65fb88:c.instructions+=4;goto B65fb88;
case 0x65fb8b:c.instructions+=3;goto B65fb8b;
case 0x65fb8e:c.instructions+=2;goto B65fb8e;
case 0x65fb91:c.instructions+=1;goto B65fb91;
case 0x65fb96:goto L65fb96;
case 0x65fb99:c.instructions+=4;goto B65fb99;
case 0x65fb9c:c.instructions+=3;goto B65fb9c;
case 0x65fb9f:c.instructions+=2;goto B65fb9f;
case 0x65fba2:c.instructions+=1;goto B65fba2;
case 0x65fba4:goto L65fba4;
case 0x65fba7:c.instructions+=3;goto B65fba7;
case 0x65fbaa:c.instructions+=2;goto B65fbaa;
case 0x65fbad:c.instructions+=1;goto B65fbad;
case 0x65fbaf:goto L65fbaf;
case 0x65fbb4:goto L65fbb4;
case 0x65fbb6:c.instructions+=7;goto B65fbb6;
case 0x65fbb9:c.instructions+=6;goto B65fbb9;
case 0x65fbbc:c.instructions+=5;goto B65fbbc;
case 0x65fbbf:c.instructions+=4;goto B65fbbf;
case 0x65fbc1:c.instructions+=3;goto B65fbc1;
case 0x65fbc2:c.instructions+=2;goto B65fbc2;
case 0x65fbc5:c.instructions+=1;goto B65fbc5;
case 0x65fbcb:goto L65fbcb;
case 0x65fbcc:c.instructions+=1;goto B65fbcc;
case 0x65fbd2:goto L65fbd2;
case 0x65fbd3:c.instructions+=1;goto B65fbd3;
case 0x65fbd9:goto L65fbd9;
case 0x65fbdc:c.instructions+=8;goto B65fbdc;
case 0x65fbdf:c.instructions+=7;goto B65fbdf;
case 0x65fbe2:c.instructions+=6;goto B65fbe2;
case 0x65fbe6:c.instructions+=5;goto B65fbe6;
case 0x65fbea:c.instructions+=4;goto B65fbea;
case 0x65fbec:c.instructions+=3;goto B65fbec;
case 0x65fbee:c.instructions+=2;goto B65fbee;
case 0x65fbf0:c.instructions+=1;goto B65fbf0;
case 0x65fbf2:goto L65fbf2;
case 0x65fbf4:c.instructions+=1;goto B65fbf4;
case 0x65fbf6:goto L65fbf6;
case 0x65fbfa:c.instructions+=2;goto B65fbfa;
case 0x65fbfe:c.instructions+=1;goto B65fbfe;
case 0x65fc00:goto L65fc00;
case 0x65fc03:goto L65fc03;
case 0x65fc05:c.instructions+=1;goto B65fc05;
case 0x65fc07:goto L65fc07;
case 0x65fc09:c.instructions+=2;goto B65fc09;
case 0x65fc0c:c.instructions+=1;goto B65fc0c;
case 0x65fc0e:goto L65fc0e;
case 0x65fc11:goto L65fc11;
case 0x65fc13:c.instructions+=5;goto B65fc13;
case 0x65fc16:c.instructions+=4;goto B65fc16;
case 0x65fc19:c.instructions+=3;goto B65fc19;
case 0x65fc1a:c.instructions+=2;goto B65fc1a;
case 0x65fc1d:c.instructions+=1;goto B65fc1d;
case 0x65fc1f:goto L65fc1f;
case 0x65fc23:c.instructions+=7;goto B65fc23;
case 0x65fc26:c.instructions+=6;goto B65fc26;
case 0x65fc27:c.instructions+=5;goto B65fc27;
case 0x65fc2a:c.instructions+=4;goto B65fc2a;
case 0x65fc2d:c.instructions+=3;goto B65fc2d;
case 0x65fc30:c.instructions+=2;goto B65fc30;
case 0x65fc33:c.instructions+=1;goto B65fc33;
case 0x65fc35:goto L65fc35;
case 0x65fc38:c.instructions+=4;goto B65fc38;
case 0x65fc3b:c.instructions+=3;goto B65fc3b;
case 0x65fc3e:c.instructions+=2;goto B65fc3e;
case 0x65fc41:c.instructions+=1;goto B65fc41;
case 0x65fc43:goto L65fc43;
case 0x65fc45:c.instructions+=5;goto B65fc45;
case 0x65fc48:c.instructions+=4;goto B65fc48;
case 0x65fc4a:c.instructions+=3;goto B65fc4a;
case 0x65fc4d:c.instructions+=2;goto B65fc4d;
case 0x65fc4f:c.instructions+=1;goto B65fc4f;
case 0x65fc54:goto L65fc54;
case 0x65fc57:c.instructions+=9;goto B65fc57;
case 0x65fc59:c.instructions+=8;goto B65fc59;
case 0x65fc5c:c.instructions+=7;goto B65fc5c;
case 0x65fc5f:c.instructions+=6;goto B65fc5f;
case 0x65fc61:c.instructions+=5;goto B65fc61;
case 0x65fc65:c.instructions+=4;goto B65fc65;
case 0x65fc69:c.instructions+=3;goto B65fc69;
case 0x65fc6b:c.instructions+=2;goto B65fc6b;
case 0x65fc6e:c.instructions+=1;goto B65fc6e;
case 0x65fc74:goto L65fc74;
case 0x65fc76:c.instructions+=1;goto B65fc76;
case 0x65fc7c:goto L65fc7c;
case 0x65fc80:c.instructions+=2;goto B65fc80;
case 0x65fc84:c.instructions+=1;goto B65fc84;
case 0x65fc86:goto L65fc86;
case 0x65fc88:c.instructions+=2;goto B65fc88;
case 0x65fc8a:c.instructions+=1;goto B65fc8a;
case 0x65fc8c:goto L65fc8c;
case 0x65fc8f:c.instructions+=1;goto B65fc8f;
case 0x65fc91:goto L65fc91;
case 0x65fc94:c.instructions+=1;goto B65fc94;
case 0x65fc97:goto L65fc97;
case 0x65fc99:c.instructions+=6;goto B65fc99;
case 0x65fc9c:c.instructions+=5;goto B65fc9c;
case 0x65fc9f:c.instructions+=4;goto B65fc9f;
case 0x65fca2:c.instructions+=3;goto B65fca2;
case 0x65fca3:c.instructions+=2;goto B65fca3;
case 0x65fca6:c.instructions+=1;goto B65fca6;
case 0x65fca8:goto L65fca8;
case 0x65fcab:c.instructions+=5;goto B65fcab;
case 0x65fcac:c.instructions+=4;goto B65fcac;
case 0x65fcaf:c.instructions+=3;goto B65fcaf;
case 0x65fcb2:c.instructions+=2;goto B65fcb2;
case 0x65fcb5:c.instructions+=1;goto B65fcb5;
case 0x65fcb7:goto L65fcb7;
case 0x65fcbb:c.instructions+=4;goto B65fcbb;
case 0x65fcbe:c.instructions+=3;goto B65fcbe;
case 0x65fcc1:c.instructions+=2;goto B65fcc1;
case 0x65fcc4:c.instructions+=1;goto B65fcc4;
case 0x65fcc6:goto L65fcc6;
case 0x65fcc8:goto L65fcc8;
case 0x65fccb:c.instructions+=9;goto B65fccb;
case 0x65fccd:c.instructions+=8;goto B65fccd;
case 0x65fcd0:c.instructions+=7;goto B65fcd0;
case 0x65fcd3:c.instructions+=6;goto B65fcd3;
case 0x65fcd5:c.instructions+=5;goto B65fcd5;
case 0x65fcd9:c.instructions+=4;goto B65fcd9;
case 0x65fcdd:c.instructions+=3;goto B65fcdd;
case 0x65fcdf:c.instructions+=2;goto B65fcdf;
case 0x65fce2:c.instructions+=1;goto B65fce2;
case 0x65fce4:goto L65fce4;
case 0x65fce6:c.instructions+=1;goto B65fce6;
case 0x65fce8:goto L65fce8;
case 0x65fcec:c.instructions+=2;goto B65fcec;
case 0x65fcf0:c.instructions+=1;goto B65fcf0;
case 0x65fcf2:goto L65fcf2;
case 0x65fcf4:c.instructions+=2;goto B65fcf4;
case 0x65fcf6:c.instructions+=1;goto B65fcf6;
case 0x65fcf8:goto L65fcf8;
case 0x65fcfb:c.instructions+=1;goto B65fcfb;
case 0x65fcfd:goto L65fcfd;
case 0x65fd00:c.instructions+=1;goto B65fd00;
case 0x65fd03:goto L65fd03;
case 0x65fd05:c.instructions+=6;goto B65fd05;
case 0x65fd08:c.instructions+=5;goto B65fd08;
case 0x65fd0b:c.instructions+=4;goto B65fd0b;
case 0x65fd0e:c.instructions+=3;goto B65fd0e;
case 0x65fd0f:c.instructions+=2;goto B65fd0f;
case 0x65fd12:c.instructions+=1;goto B65fd12;
case 0x65fd14:goto L65fd14;
case 0x65fd17:c.instructions+=5;goto B65fd17;
case 0x65fd18:c.instructions+=4;goto B65fd18;
case 0x65fd1b:c.instructions+=3;goto B65fd1b;
case 0x65fd1e:c.instructions+=2;goto B65fd1e;
case 0x65fd21:c.instructions+=1;goto B65fd21;
case 0x65fd23:goto L65fd23;
case 0x65fd27:c.instructions+=4;goto B65fd27;
case 0x65fd2a:c.instructions+=3;goto B65fd2a;
case 0x65fd2d:c.instructions+=2;goto B65fd2d;
case 0x65fd30:c.instructions+=1;goto B65fd30;
case 0x65fd32:goto L65fd32;
case 0x65fd35:c.instructions+=6;goto B65fd35;
case 0x65fd37:c.instructions+=5;goto B65fd37;
case 0x65fd3a:c.instructions+=4;goto B65fd3a;
case 0x65fd3c:c.instructions+=3;goto B65fd3c;
case 0x65fd3f:c.instructions+=2;goto B65fd3f;
case 0x65fd42:c.instructions+=1;goto B65fd42;
case 0x65fd44:goto L65fd44;
case 0x65fd47:c.instructions+=1;goto B65fd47;
case 0x65fd4c:goto L65fd4c;
case 0x65fd4f:c.instructions+=10;goto B65fd4f;
case 0x65fd51:c.instructions+=9;goto B65fd51;
case 0x65fd54:c.instructions+=8;goto B65fd54;
case 0x65fd56:c.instructions+=7;goto B65fd56;
case 0x65fd59:c.instructions+=6;goto B65fd59;
case 0x65fd5b:c.instructions+=5;goto B65fd5b;
case 0x65fd5e:c.instructions+=4;goto B65fd5e;
case 0x65fd61:c.instructions+=3;goto B65fd61;
case 0x65fd64:c.instructions+=2;goto B65fd64;
case 0x65fd67:c.instructions+=1;goto B65fd67;
case 0x65fd69:goto L65fd69;
case 0x65fd6b:c.instructions+=4;goto B65fd6b;
case 0x65fd6c:c.instructions+=3;goto B65fd6c;
case 0x65fd6e:c.instructions+=2;goto B65fd6e;
case 0x65fd71:c.instructions+=1;goto B65fd71;
case 0x65fd74:goto L65fd74;
case 0x65fd75:c.instructions+=1;goto B65fd75;
case 0x65fd7b:goto L65fd7b;
case 0x65fd7c:c.instructions+=1;goto B65fd7c;
case 0x65fd7e:goto L65fd7e;
case 0x65fd7f:c.instructions+=1;goto B65fd7f;
case 0x65fd85:goto L65fd85;
case 0x65fd88:c.instructions+=8;goto B65fd88;
case 0x65fd8b:c.instructions+=7;goto B65fd8b;
case 0x65fd8d:c.instructions+=6;goto B65fd8d;
case 0x65fd90:c.instructions+=5;goto B65fd90;
case 0x65fd93:c.instructions+=4;goto B65fd93;
case 0x65fd95:c.instructions+=3;goto B65fd95;
case 0x65fd97:c.instructions+=2;goto B65fd97;
case 0x65fd9a:c.instructions+=1;goto B65fd9a;
case 0x65fd9c:goto L65fd9c;
case 0x65fd9e:c.instructions+=1;goto B65fd9e;
case 0x65fda0:goto L65fda0;
case 0x65fda2:c.instructions+=2;goto B65fda2;
case 0x65fda5:c.instructions+=1;goto B65fda5;
case 0x65fda7:goto L65fda7;
case 0x65fda9:c.instructions+=1;goto B65fda9;
case 0x65fdab:goto L65fdab;
case 0x65fdad:c.instructions+=13;goto B65fdad;
case 0x65fdb0:c.instructions+=12;goto B65fdb0;
case 0x65fdb2:c.instructions+=11;goto B65fdb2;
case 0x65fdb5:c.instructions+=10;goto B65fdb5;
case 0x65fdb8:c.instructions+=9;goto B65fdb8;
case 0x65fdb9:c.instructions+=8;goto B65fdb9;
case 0x65fdbc:c.instructions+=7;goto B65fdbc;
case 0x65fdbd:c.instructions+=6;goto B65fdbd;
case 0x65fdc0:c.instructions+=5;goto B65fdc0;
case 0x65fdc3:c.instructions+=4;goto B65fdc3;
case 0x65fdc6:c.instructions+=3;goto B65fdc6;
case 0x65fdc9:c.instructions+=2;goto B65fdc9;
case 0x65fdcc:c.instructions+=1;goto B65fdcc;
case 0x65fdce:goto L65fdce;
case 0x65fdd1:c.instructions+=5;goto B65fdd1;
case 0x65fdd4:c.instructions+=4;goto B65fdd4;
case 0x65fdd7:c.instructions+=3;goto B65fdd7;
case 0x65fdda:c.instructions+=2;goto B65fdda;
case 0x65fddd:c.instructions+=1;goto B65fddd;
case 0x65fddf:goto L65fddf;
case 0x65fde1:c.instructions+=1;goto B65fde1;
case 0x65fde6:goto L65fde6;
case 0x65fde9:c.instructions+=8;goto B65fde9;
case 0x65fdec:c.instructions+=7;goto B65fdec;
case 0x65fdee:c.instructions+=6;goto B65fdee;
case 0x65fdf1:c.instructions+=5;goto B65fdf1;
case 0x65fdf4:c.instructions+=4;goto B65fdf4;
case 0x65fdf6:c.instructions+=3;goto B65fdf6;
case 0x65fdf8:c.instructions+=2;goto B65fdf8;
case 0x65fdfb:c.instructions+=1;goto B65fdfb;
case 0x65fe01:goto L65fe01;
case 0x65fe03:c.instructions+=1;goto B65fe03;
case 0x65fe09:goto L65fe09;
case 0x65fe0b:c.instructions+=2;goto B65fe0b;
case 0x65fe0e:c.instructions+=1;goto B65fe0e;
case 0x65fe10:goto L65fe10;
case 0x65fe12:c.instructions+=1;goto B65fe12;
case 0x65fe14:goto L65fe14;
case 0x65fe16:c.instructions+=2;goto B65fe16;
case 0x65fe19:c.instructions+=1;goto B65fe19;
case 0x65fe1b:goto L65fe1b;
case 0x65fe1e:c.instructions+=4;goto B65fe1e;
case 0x65fe21:c.instructions+=3;goto B65fe21;
case 0x65fe22:c.instructions+=2;goto B65fe22;
case 0x65fe25:c.instructions+=1;goto B65fe25;
case 0x65fe27:goto L65fe27;
case 0x65fe2a:c.instructions+=5;goto B65fe2a;
case 0x65fe2d:c.instructions+=4;goto B65fe2d;
case 0x65fe2e:c.instructions+=3;goto B65fe2e;
case 0x65fe2f:c.instructions+=2;goto B65fe2f;
case 0x65fe32:c.instructions+=1;goto B65fe32;
case 0x65fe34:goto L65fe34;
case 0x65fe37:c.instructions+=5;goto B65fe37;
case 0x65fe3a:c.instructions+=4;goto B65fe3a;
case 0x65fe3d:c.instructions+=3;goto B65fe3d;
case 0x65fe40:c.instructions+=2;goto B65fe40;
case 0x65fe43:c.instructions+=1;goto B65fe43;
case 0x65fe45:goto L65fe45;
case 0x65fe47:goto L65fe47;
case 0x65fe4a:c.instructions+=8;goto B65fe4a;
case 0x65fe4d:c.instructions+=7;goto B65fe4d;
case 0x65fe4f:c.instructions+=6;goto B65fe4f;
case 0x65fe52:c.instructions+=5;goto B65fe52;
case 0x65fe55:c.instructions+=4;goto B65fe55;
case 0x65fe57:c.instructions+=3;goto B65fe57;
case 0x65fe59:c.instructions+=2;goto B65fe59;
case 0x65fe5c:c.instructions+=1;goto B65fe5c;
case 0x65fe5e:goto L65fe5e;
case 0x65fe60:c.instructions+=1;goto B65fe60;
case 0x65fe62:goto L65fe62;
case 0x65fe66:c.instructions+=2;goto B65fe66;
case 0x65fe6a:c.instructions+=1;goto B65fe6a;
case 0x65fe6c:goto L65fe6c;
case 0x65fe6e:c.instructions+=1;goto B65fe6e;
case 0x65fe70:goto L65fe70;
case 0x65fe72:c.instructions+=2;goto B65fe72;
case 0x65fe75:c.instructions+=1;goto B65fe75;
case 0x65fe77:goto L65fe77;
case 0x65fe7a:c.instructions+=4;goto B65fe7a;
case 0x65fe7d:c.instructions+=3;goto B65fe7d;
case 0x65fe7e:c.instructions+=2;goto B65fe7e;
case 0x65fe81:c.instructions+=1;goto B65fe81;
case 0x65fe83:goto L65fe83;
case 0x65fe86:c.instructions+=6;goto B65fe86;
case 0x65fe89:c.instructions+=5;goto B65fe89;
case 0x65fe8a:c.instructions+=4;goto B65fe8a;
case 0x65fe8d:c.instructions+=3;goto B65fe8d;
case 0x65fe90:c.instructions+=2;goto B65fe90;
case 0x65fe93:c.instructions+=1;goto B65fe93;
case 0x65fe95:goto L65fe95;
case 0x65fe98:c.instructions+=5;goto B65fe98;
case 0x65fe9b:c.instructions+=4;goto B65fe9b;
case 0x65fe9e:c.instructions+=3;goto B65fe9e;
case 0x65fea1:c.instructions+=2;goto B65fea1;
case 0x65fea4:c.instructions+=1;goto B65fea4;
case 0x65fea6:goto L65fea6;
case 0x65fea8:goto L65fea8;
case 0x65feab:c.instructions+=5;goto B65feab;
case 0x65fead:c.instructions+=4;goto B65fead;
case 0x65feb0:c.instructions+=3;goto B65feb0;
case 0x65feb2:c.instructions+=2;goto B65feb2;
case 0x65feb5:c.instructions+=1;goto B65feb5;
case 0x65feb8:goto L65feb8;
case 0x65feb9:c.instructions+=4;goto B65feb9;
case 0x65feba:c.instructions+=3;goto B65feba;
case 0x65febb:c.instructions+=2;goto B65febb;
case 0x65febc:c.instructions+=1;goto B65febc;
case 0x65febf:goto L65febf;
case 0x65fec1:c.instructions+=9;goto B65fec1;
case 0x65fec2:c.instructions+=8;goto B65fec2;
case 0x65fec4:c.instructions+=7;goto B65fec4;
case 0x65fec7:c.instructions+=6;goto B65fec7;
case 0x65fec8:c.instructions+=5;goto B65fec8;
case 0x65fec9:c.instructions+=4;goto B65fec9;
case 0x65fecc:c.instructions+=3;goto B65fecc;
case 0x65fece:c.instructions+=2;goto B65fece;
case 0x65fecf:c.instructions+=1;goto B65fecf;
case 0x65fed1:goto L65fed1;
case 0x65fed4:c.instructions+=3;goto B65fed4;
case 0x65fed7:c.instructions+=2;goto B65fed7;
case 0x65feda:c.instructions+=1;goto B65feda;
case 0x65fedc:goto L65fedc;
case 0x65fedf:c.instructions+=3;goto B65fedf;
case 0x65fee1:c.instructions+=2;goto B65fee1;
case 0x65fee4:c.instructions+=1;goto B65fee4;
case 0x65fee7:goto L65fee7;
case 0x65feea:c.instructions+=5;goto B65feea;
case 0x65feed:c.instructions+=4;goto B65feed;
case 0x65feef:c.instructions+=3;goto B65feef;
case 0x65fef0:c.instructions+=2;goto B65fef0;
case 0x65fef3:c.instructions+=1;goto B65fef3;
case 0x65fef5:goto L65fef5;
case 0x65fef8:c.instructions+=1;goto B65fef8;
case 0x65fefa:goto L65fefa;
case 0x65fefc:c.instructions+=4;goto B65fefc;
case 0x65feff:c.instructions+=3;goto B65feff;
case 0x65ff01:c.instructions+=2;goto B65ff01;
case 0x65ff04:c.instructions+=1;goto B65ff04;
case 0x65ff06:goto L65ff06;
case 0x65ff09:goto L65ff09;
case 0x65ff0b:c.instructions+=1;goto B65ff0b;
case 0x65ff11:goto L65ff11;
case 0x65ff13:c.instructions+=1;goto B65ff13;
case 0x65ff19:goto L65ff19;
case 0x65ff1c:c.instructions+=1;goto B65ff1c;
case 0x65ff22:goto L65ff22;
case 0x65ff25:c.instructions+=1;goto B65ff25;
case 0x65ff2b:goto L65ff2b;
case 0x65ff2e:c.instructions+=1;goto B65ff2e;
case 0x65ff34:goto L65ff34;
case 0x65ff38:c.instructions+=2;goto B65ff38;
case 0x65ff3a:c.instructions+=1;goto B65ff3a;
case 0x65ff3c:goto L65ff3c;
case 0x65ff3f:c.instructions+=2;goto B65ff3f;
case 0x65ff41:c.instructions+=1;goto B65ff41;
case 0x65ff44:goto L65ff44;
case 0x65ff46:c.instructions+=6;goto B65ff46;
case 0x65ff4a:c.instructions+=5;goto B65ff4a;
case 0x65ff4e:c.instructions+=4;goto B65ff4e;
case 0x65ff51:c.instructions+=3;goto B65ff51;
case 0x65ff54:c.instructions+=2;goto B65ff54;
case 0x65ff56:c.instructions+=1;goto B65ff56;
case 0x65ff5c:goto L65ff5c;
case 0x65ff5f:c.instructions+=3;goto B65ff5f;
case 0x65ff61:c.instructions+=2;goto B65ff61;
case 0x65ff63:c.instructions+=1;goto B65ff63;
case 0x65ff69:goto L65ff69;
case 0x65ff6b:c.instructions+=3;goto B65ff6b;
case 0x65ff6e:c.instructions+=2;goto B65ff6e;
case 0x65ff70:c.instructions+=1;goto B65ff70;
case 0x65ff72:goto L65ff72;
case 0x65ff75:c.instructions+=3;goto B65ff75;
case 0x65ff78:c.instructions+=2;goto B65ff78;
case 0x65ff7b:c.instructions+=1;goto B65ff7b;
case 0x65ff7d:goto L65ff7d;
case 0x65ff80:goto L65ff80;
case 0x65ff83:c.instructions+=1;goto B65ff83;
case 0x65ff85:goto L65ff85;
case 0x65ff89:c.instructions+=1;goto B65ff89;
case 0x65ff8b:goto L65ff8b;
case 0x65ff8e:c.instructions+=2;goto B65ff8e;
case 0x65ff90:c.instructions+=1;goto B65ff90;
case 0x65ff93:goto L65ff93;
case 0x65ff95:c.instructions+=7;goto B65ff95;
case 0x65ff96:c.instructions+=6;goto B65ff96;
case 0x65ff99:c.instructions+=5;goto B65ff99;
case 0x65ff9c:c.instructions+=4;goto B65ff9c;
case 0x65ff9f:c.instructions+=3;goto B65ff9f;
case 0x65ffa2:c.instructions+=2;goto B65ffa2;
case 0x65ffa5:c.instructions+=1;goto B65ffa5;
case 0x65ffaa:goto L65ffaa;
case 0x65ffae:c.instructions+=3;goto B65ffae;
case 0x65ffaf:c.instructions+=2;goto B65ffaf;
case 0x65ffb1:c.instructions+=1;goto B65ffb1;
case 0x65ffb3:goto L65ffb3;
case 0x65ffb6:c.instructions+=3;goto B65ffb6;
case 0x65ffb9:c.instructions+=2;goto B65ffb9;
case 0x65ffbc:c.instructions+=1;goto B65ffbc;
case 0x65ffbe:goto L65ffbe;
case 0x65ffc3:goto L65ffc3;
case 0x65ffc5:c.instructions+=5;goto B65ffc5;
case 0x65ffc8:c.instructions+=4;goto B65ffc8;
case 0x65ffca:c.instructions+=3;goto B65ffca;
case 0x65ffcb:c.instructions+=2;goto B65ffcb;
case 0x65ffce:c.instructions+=1;goto B65ffce;
case 0x65ffd4:goto L65ffd4;
case 0x65ffd5:c.instructions+=1;goto B65ffd5;
case 0x65ffd7:goto L65ffd7;
case 0x65ffd8:c.instructions+=1;goto B65ffd8;
case 0x65ffde:goto L65ffde;
case 0x65ffe1:c.instructions+=8;goto B65ffe1;
case 0x65ffe3:c.instructions+=7;goto B65ffe3;
case 0x65ffe6:c.instructions+=6;goto B65ffe6;
case 0x65ffe9:c.instructions+=5;goto B65ffe9;
case 0x65ffeb:c.instructions+=4;goto B65ffeb;
case 0x65ffed:c.instructions+=3;goto B65ffed;
case 0x65ffef:c.instructions+=2;goto B65ffef;
case 0x65fff2:c.instructions+=1;goto B65fff2;
case 0x65fff4:goto L65fff4;
case 0x65fff6:c.instructions+=1;goto B65fff6;
case 0x65fff8:goto L65fff8;
case 0x65fffa:c.instructions+=2;goto B65fffa;
case 0x65fffd:c.instructions+=1;goto B65fffd;
case 0x65ffff:goto L65ffff;
default:missing_instruction(c.pc);}
B65f000:L65f000:{c.instructions+=5;NFSU2_TR(0x65f000);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f003:{NFSU2_TR(0x65f003);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f005:{NFSU2_TR(0x65f005);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f008:{NFSU2_TR(0x65f008);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f00a:{NFSU2_TR(0x65f00a);
{goto L65f0ff;}
}
B65f00f:L65f00f:{c.instructions+=10;NFSU2_TR(0x65f00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f012:{NFSU2_TR(0x65f012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f014:{NFSU2_TR(0x65f014);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f017:{NFSU2_TR(0x65f017);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f01a:{NFSU2_TR(0x65f01a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65f01c:{NFSU2_TR(0x65f01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f020:{NFSU2_TR(0x65f020);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f024:{NFSU2_TR(0x65f024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f026:{NFSU2_TR(0x65f026);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f029:{NFSU2_TR(0x65f029);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f0ed;}}
}
B65f02f:L65f02f:{c.instructions+=2;NFSU2_TR(0x65f02f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f031:{NFSU2_TR(0x65f031);
if(r1(R+518)){{goto L65f0ed;}}
}
B65f037:L65f037:{c.instructions+=3;NFSU2_TR(0x65f037);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f03b:{NFSU2_TR(0x65f03b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f03f:{NFSU2_TR(0x65f03f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f072;}}
}
B65f041:L65f041:{c.instructions+=3;NFSU2_TR(0x65f041);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65f043:{NFSU2_TR(0x65f043);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f045:{NFSU2_TR(0x65f045);
if(r1(R+518)){{goto L65f072;}}
}
B65f047:L65f047:{c.instructions+=2;NFSU2_TR(0x65f047);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f04a:{NFSU2_TR(0x65f04a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f063;}}
}
B65f04c:L65f04c:{c.instructions+=2;NFSU2_TR(0x65f04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f04f:{NFSU2_TR(0x65f04f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B65f052:L65f052:{c.instructions+=7;NFSU2_TR(0x65f052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65f054:{NFSU2_TR(0x65f054);
{u32 ea_=u32(r4(R+12)+r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65f057:{NFSU2_TR(0x65f057);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65f05a:{NFSU2_TR(0x65f05a);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65f05d:{NFSU2_TR(0x65f05d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65f05e:{NFSU2_TR(0x65f05e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65f061:{NFSU2_TR(0x65f061);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f052u);}goto L65f052;}}
}
B65f063:L65f063:{c.instructions+=6;NFSU2_TR(0x65f063);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65f066:{NFSU2_TR(0x65f066);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65f067:{NFSU2_TR(0x65f067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f06a:{NFSU2_TR(0x65f06a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f06d:{NFSU2_TR(0x65f06d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65f070:{NFSU2_TR(0x65f070);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f041u);}goto L65f041;}}
}
B65f072:L65f072:{c.instructions+=5;NFSU2_TR(0x65f072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f076:{NFSU2_TR(0x65f076);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f079:{NFSU2_TR(0x65f079);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f07c:{NFSU2_TR(0x65f07c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65f07f:{NFSU2_TR(0x65f07f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f02fu);}goto L65f02f;}}
}
B65f081:L65f081:{c.instructions+=1;NFSU2_TR(0x65f081);
{goto L65f0ed;}
}
B65f083:L65f083:{c.instructions+=10;NFSU2_TR(0x65f083);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f086:{NFSU2_TR(0x65f086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f088:{NFSU2_TR(0x65f088);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f08b:{NFSU2_TR(0x65f08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f08e:{NFSU2_TR(0x65f08e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65f090:{NFSU2_TR(0x65f090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f094:{NFSU2_TR(0x65f094);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f098:{NFSU2_TR(0x65f098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f09a:{NFSU2_TR(0x65f09a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f09d:{NFSU2_TR(0x65f09d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f0ed;}}
}
B65f09f:L65f09f:{c.instructions+=2;NFSU2_TR(0x65f09f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f0a1:{NFSU2_TR(0x65f0a1);
if(r1(R+518)){{goto L65f0ed;}}
}
B65f0a3:L65f0a3:{c.instructions+=3;NFSU2_TR(0x65f0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f0a7:{NFSU2_TR(0x65f0a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f0ab:{NFSU2_TR(0x65f0ab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f0de;}}
}
B65f0ad:L65f0ad:{c.instructions+=3;NFSU2_TR(0x65f0ad);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65f0af:{NFSU2_TR(0x65f0af);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f0b1:{NFSU2_TR(0x65f0b1);
if(r1(R+518)){{goto L65f0de;}}
}
B65f0b3:L65f0b3:{c.instructions+=2;NFSU2_TR(0x65f0b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f0b6:{NFSU2_TR(0x65f0b6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f0cf;}}
}
B65f0b8:L65f0b8:{c.instructions+=2;NFSU2_TR(0x65f0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f0bb:{NFSU2_TR(0x65f0bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B65f0be:L65f0be:{c.instructions+=7;NFSU2_TR(0x65f0be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65f0c0:{NFSU2_TR(0x65f0c0);
{u32 ea_=u32(r4(R+12)+r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65f0c3:{NFSU2_TR(0x65f0c3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65f0c6:{NFSU2_TR(0x65f0c6);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65f0c9:{NFSU2_TR(0x65f0c9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65f0ca:{NFSU2_TR(0x65f0ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65f0cd:{NFSU2_TR(0x65f0cd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f0beu);}goto L65f0be;}}
}
B65f0cf:L65f0cf:{c.instructions+=6;NFSU2_TR(0x65f0cf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65f0d2:{NFSU2_TR(0x65f0d2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65f0d3:{NFSU2_TR(0x65f0d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f0d6:{NFSU2_TR(0x65f0d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f0d9:{NFSU2_TR(0x65f0d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65f0dc:{NFSU2_TR(0x65f0dc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f0adu);}goto L65f0ad;}}
}
B65f0de:L65f0de:{c.instructions+=5;NFSU2_TR(0x65f0de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f0e2:{NFSU2_TR(0x65f0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f0e5:{NFSU2_TR(0x65f0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f0e8:{NFSU2_TR(0x65f0e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65f0eb:{NFSU2_TR(0x65f0eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f09fu);}goto L65f09f;}}
}
B65f0ed:L65f0ed:{c.instructions+=7;NFSU2_TR(0x65f0ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f0f0:{NFSU2_TR(0x65f0f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65f0f2:{NFSU2_TR(0x65f0f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f0f5:{NFSU2_TR(0x65f0f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f0f7:{NFSU2_TR(0x65f0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f0fa:{NFSU2_TR(0x65f0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65f0fd:{NFSU2_TR(0x65f0fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65f0ff:L65f0ff:{c.instructions+=2;NFSU2_TR(0x65f0ff);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+8)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65f102:{NFSU2_TR(0x65f102);
{goto L65f290;}
}
B65f107:L65f107:{c.instructions+=12;NFSU2_TR(0x65f107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f10a:{NFSU2_TR(0x65f10a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f10c:{NFSU2_TR(0x65f10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f10f:{NFSU2_TR(0x65f10f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f111:{NFSU2_TR(0x65f111);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f114:{NFSU2_TR(0x65f114);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f117:{NFSU2_TR(0x65f117);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65f119:{NFSU2_TR(0x65f119);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65f11b:{NFSU2_TR(0x65f11b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f11e:{NFSU2_TR(0x65f11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f121:{NFSU2_TR(0x65f121);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f124:{NFSU2_TR(0x65f124);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65f131;}}
}
B65f126:L65f126:{c.instructions+=5;NFSU2_TR(0x65f126);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f128:{NFSU2_TR(0x65f128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65f129:{NFSU2_TR(0x65f129);
w1(R+512,u8((r4(R+24))<(r4(R+0))));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B65f12b:{NFSU2_TR(0x65f12b);
u8 U[23];
w4(U+15,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+24),4);
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B65f12e:{NFSU2_TR(0x65f12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f131:L65f131:{c.instructions+=2;NFSU2_TR(0x65f131);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65f132:{NFSU2_TR(0x65f132);
if(r1(R+518)){{goto L65f217;}}
}
B65f138:L65f138:{c.instructions+=2;NFSU2_TR(0x65f138);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65f139:{NFSU2_TR(0x65f139);
if(r1(R+518)){{goto L65f1a9;}}
}
B65f13b:L65f13b:{c.instructions+=2;NFSU2_TR(0x65f13b);
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
B65f13c:{NFSU2_TR(0x65f13c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65f290;}}
}
B65f142:L65f142:{c.instructions+=9;NFSU2_TR(0x65f142);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f145:{NFSU2_TR(0x65f145);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f148:{NFSU2_TR(0x65f148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f14a:{NFSU2_TR(0x65f14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f14d:{NFSU2_TR(0x65f14d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f150:{NFSU2_TR(0x65f150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65f152:{NFSU2_TR(0x65f152);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f154:{NFSU2_TR(0x65f154);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f157:{NFSU2_TR(0x65f157);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f27e;}}
}
B65f15d:L65f15d:{c.instructions+=2;NFSU2_TR(0x65f15d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f15f:{NFSU2_TR(0x65f15f);
if(r1(R+518)){{goto L65f27e;}}
}
B65f165:L65f165:{c.instructions+=3;NFSU2_TR(0x65f165);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65f167:{NFSU2_TR(0x65f167);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f16a:{NFSU2_TR(0x65f16a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f193;}}
}
B65f16c:L65f16c:{c.instructions+=2;NFSU2_TR(0x65f16c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f16e:{NFSU2_TR(0x65f16e);
if(r1(R+518)){{goto L65f193;}}
}
B65f170:L65f170:{c.instructions+=14;NFSU2_TR(0x65f170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65f172:{NFSU2_TR(0x65f172);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65f174:{NFSU2_TR(0x65f174);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f177:{NFSU2_TR(0x65f177);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f17a:{NFSU2_TR(0x65f17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f17d:{NFSU2_TR(0x65f17d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f180:{NFSU2_TR(0x65f180);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f183:{NFSU2_TR(0x65f183);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B65f186:{NFSU2_TR(0x65f186);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65f189:{NFSU2_TR(0x65f189);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f18c:{NFSU2_TR(0x65f18c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65f18d:{NFSU2_TR(0x65f18d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65f18e:{NFSU2_TR(0x65f18e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65f191:{NFSU2_TR(0x65f191);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f16cu);}goto L65f16c;}}
}
B65f193:L65f193:{c.instructions+=6;NFSU2_TR(0x65f193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f196:{NFSU2_TR(0x65f196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f199:{NFSU2_TR(0x65f199);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65f19c:{NFSU2_TR(0x65f19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f19f:{NFSU2_TR(0x65f19f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65f1a2:{NFSU2_TR(0x65f1a2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f15du);}goto L65f15d;}}
}
B65f1a4:L65f1a4:{c.instructions+=1;NFSU2_TR(0x65f1a4);
{goto L65f27e;}
}
B65f1a9:L65f1a9:{c.instructions+=9;NFSU2_TR(0x65f1a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f1ac:{NFSU2_TR(0x65f1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f1af:{NFSU2_TR(0x65f1af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65f1b1:{NFSU2_TR(0x65f1b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f1b4:{NFSU2_TR(0x65f1b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f1b6:{NFSU2_TR(0x65f1b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f1b9:{NFSU2_TR(0x65f1b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f1bb:{NFSU2_TR(0x65f1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f1be:{NFSU2_TR(0x65f1be);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f27b;}}
}
B65f1c4:L65f1c4:{c.instructions+=2;NFSU2_TR(0x65f1c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f1c6:{NFSU2_TR(0x65f1c6);
if(r1(R+518)){{goto L65f27b;}}
}
B65f1cc:L65f1cc:{c.instructions+=3;NFSU2_TR(0x65f1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f1d0:{NFSU2_TR(0x65f1d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f1d4:{NFSU2_TR(0x65f1d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f207;}}
}
B65f1d6:L65f1d6:{c.instructions+=2;NFSU2_TR(0x65f1d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f1d8:{NFSU2_TR(0x65f1d8);
if(r1(R+518)){{goto L65f207;}}
}
B65f1da:L65f1da:{c.instructions+=3;NFSU2_TR(0x65f1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f1dd:{NFSU2_TR(0x65f1dd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f1df:{NFSU2_TR(0x65f1df);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f1f5;}}
}
B65f1e1:L65f1e1:{c.instructions+=3;NFSU2_TR(0x65f1e1);
__builtin_memmove((R+28),(R+0),4);
}
B65f1e3:{NFSU2_TR(0x65f1e3);
__builtin_memmove((R+24),(R+4),4);
}
B65f1e5:{NFSU2_TR(0x65f1e5);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B65f1e7:L65f1e7:{c.instructions+=5;NFSU2_TR(0x65f1e7);
{u32 ea_=u32(r4(R+24)+r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65f1ea:{NFSU2_TR(0x65f1ea);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65f1ec:{NFSU2_TR(0x65f1ec);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B65f1ef:{NFSU2_TR(0x65f1ef);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B65f1f0:{NFSU2_TR(0x65f1f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f1e7u);}goto L65f1e7;}}
}
B65f1f2:L65f1f2:{c.instructions+=1;NFSU2_TR(0x65f1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f1f5:L65f1f5:{c.instructions+=7;NFSU2_TR(0x65f1f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B65f1f8:{NFSU2_TR(0x65f1f8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65f1fb:{NFSU2_TR(0x65f1fb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65f1fc:{NFSU2_TR(0x65f1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f1ff:{NFSU2_TR(0x65f1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f202:{NFSU2_TR(0x65f202);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65f205:{NFSU2_TR(0x65f205);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f1d6u);}goto L65f1d6;}}
}
B65f207:L65f207:{c.instructions+=5;NFSU2_TR(0x65f207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f20a:{NFSU2_TR(0x65f20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f20d:{NFSU2_TR(0x65f20d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65f210:{NFSU2_TR(0x65f210);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65f213:{NFSU2_TR(0x65f213);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f1c4u);}goto L65f1c4;}}
}
B65f215:L65f215:{c.instructions+=1;NFSU2_TR(0x65f215);
{goto L65f27b;}
}
B65f217:L65f217:{c.instructions+=9;NFSU2_TR(0x65f217);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f21a:{NFSU2_TR(0x65f21a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f21d:{NFSU2_TR(0x65f21d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65f21f:{NFSU2_TR(0x65f21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f222:{NFSU2_TR(0x65f222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f224:{NFSU2_TR(0x65f224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f227:{NFSU2_TR(0x65f227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f229:{NFSU2_TR(0x65f229);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f22c:{NFSU2_TR(0x65f22c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f27b;}}
}
B65f22e:L65f22e:{c.instructions+=2;NFSU2_TR(0x65f22e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f230:{NFSU2_TR(0x65f230);
if(r1(R+518)){{goto L65f27b;}}
}
B65f232:L65f232:{c.instructions+=3;NFSU2_TR(0x65f232);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f236:{NFSU2_TR(0x65f236);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f23a:{NFSU2_TR(0x65f23a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f26d;}}
}
B65f23c:L65f23c:{c.instructions+=2;NFSU2_TR(0x65f23c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f23e:{NFSU2_TR(0x65f23e);
if(r1(R+518)){{goto L65f26d;}}
}
B65f240:L65f240:{c.instructions+=3;NFSU2_TR(0x65f240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f243:{NFSU2_TR(0x65f243);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f245:{NFSU2_TR(0x65f245);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f25b;}}
}
B65f247:L65f247:{c.instructions+=3;NFSU2_TR(0x65f247);
__builtin_memmove((R+28),(R+0),4);
}
B65f249:{NFSU2_TR(0x65f249);
__builtin_memmove((R+24),(R+4),4);
}
B65f24b:{NFSU2_TR(0x65f24b);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B65f24d:L65f24d:{c.instructions+=5;NFSU2_TR(0x65f24d);
{u32 ea_=u32(r4(R+24)+r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65f250:{NFSU2_TR(0x65f250);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65f252:{NFSU2_TR(0x65f252);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B65f255:{NFSU2_TR(0x65f255);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B65f256:{NFSU2_TR(0x65f256);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f24du);}goto L65f24d;}}
}
B65f258:L65f258:{c.instructions+=1;NFSU2_TR(0x65f258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f25b:L65f25b:{c.instructions+=7;NFSU2_TR(0x65f25b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B65f25e:{NFSU2_TR(0x65f25e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65f261:{NFSU2_TR(0x65f261);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65f262:{NFSU2_TR(0x65f262);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f265:{NFSU2_TR(0x65f265);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f268:{NFSU2_TR(0x65f268);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65f26b:{NFSU2_TR(0x65f26b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f23cu);}goto L65f23c;}}
}
B65f26d:L65f26d:{c.instructions+=5;NFSU2_TR(0x65f26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f270:{NFSU2_TR(0x65f270);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f273:{NFSU2_TR(0x65f273);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65f276:{NFSU2_TR(0x65f276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65f279:{NFSU2_TR(0x65f279);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f22eu);}goto L65f22e;}}
}
B65f27b:L65f27b:{c.instructions+=1;NFSU2_TR(0x65f27b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f27e:L65f27e:{c.instructions+=7;NFSU2_TR(0x65f27e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65f280:{NFSU2_TR(0x65f280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f283:{NFSU2_TR(0x65f283);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65f285:{NFSU2_TR(0x65f285);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f288:{NFSU2_TR(0x65f288);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65f28a:{NFSU2_TR(0x65f28a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f28d:{NFSU2_TR(0x65f28d);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65f290:L65f290:{c.instructions+=5;NFSU2_TR(0x65f290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65f291:{NFSU2_TR(0x65f291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65f292:{NFSU2_TR(0x65f292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65f293:{NFSU2_TR(0x65f293);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65f294:{NFSU2_TR(0x65f294);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65f297:L65f297:{c.instructions+=11;NFSU2_TR(0x65f297);
__builtin_memmove((R+28),(R+28),4);
}
B65f299:{NFSU2_TR(0x65f299);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f29a:{NFSU2_TR(0x65f29a);
__builtin_memmove((R+20),(R+16),4);
}
B65f29c:{NFSU2_TR(0x65f29c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B65f29f:{NFSU2_TR(0x65f29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65f2a2:{NFSU2_TR(0x65f2a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f2a3:{NFSU2_TR(0x65f2a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f2a4:{NFSU2_TR(0x65f2a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f2a7:{NFSU2_TR(0x65f2a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f2a9:{NFSU2_TR(0x65f2a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f2aa:{NFSU2_TR(0x65f2aa);
if(r1(R+518)){{goto L65f2b6;}}
}
B65f2ac:L65f2ac:{c.instructions+=4;NFSU2_TR(0x65f2ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f2af:{NFSU2_TR(0x65f2af);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65f2b1:{NFSU2_TR(0x65f2b1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B65f2b4:{NFSU2_TR(0x65f2b4);
{goto L65f2be;}
}
B65f2b6:L65f2b6:{c.instructions+=3;NFSU2_TR(0x65f2b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f2b8:{NFSU2_TR(0x65f2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f2bb:{NFSU2_TR(0x65f2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f2be:L65f2be:{c.instructions+=5;NFSU2_TR(0x65f2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f2c1:{NFSU2_TR(0x65f2c1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65f2c3:{NFSU2_TR(0x65f2c3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65f2c4:{NFSU2_TR(0x65f2c4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f2c7:{NFSU2_TR(0x65f2c7);
if(r1(R+518)){{goto L65f2ce;}}
}
B65f2c9:L65f2c9:{c.instructions+=2;NFSU2_TR(0x65f2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f2cc:{NFSU2_TR(0x65f2cc);
{goto L65f2dd;}
}
B65f2ce:L65f2ce:{c.instructions+=5;NFSU2_TR(0x65f2ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65f2d0:{NFSU2_TR(0x65f2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f2d3:{NFSU2_TR(0x65f2d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f2d5:{NFSU2_TR(0x65f2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f2d8:{NFSU2_TR(0x65f2d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65f2dd;}}
}
B65f2da:L65f2da:{c.instructions+=1;NFSU2_TR(0x65f2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f2dd:L65f2dd:{c.instructions+=2;NFSU2_TR(0x65f2dd);
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
B65f2df:{NFSU2_TR(0x65f2df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65f702;}}
}
B65f2e5:L65f2e5:{c.instructions+=2;NFSU2_TR(0x65f2e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f2e7:{NFSU2_TR(0x65f2e7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65f544;}}
}
B65f2ed:L65f2ed:{c.instructions+=2;NFSU2_TR(0x65f2ed);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f2f0:{NFSU2_TR(0x65f2f0);
if(r1(R+518)){{goto L65f396;}}
}
B65f2f6:L65f2f6:{c.instructions+=2;NFSU2_TR(0x65f2f6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f2f9:{NFSU2_TR(0x65f2f9);
if(r1(R+518)){{goto L65f544;}}
}
B65f2ff:L65f2ff:{c.instructions+=2;NFSU2_TR(0x65f2ff);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B65f302:{NFSU2_TR(0x65f302);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65f702;}}
}
B65f308:L65f308:{c.instructions+=3;NFSU2_TR(0x65f308);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f30c:{NFSU2_TR(0x65f30c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f30e:{NFSU2_TR(0x65f30e);
if(r1(R+518)){{goto L65f318;}}
}
B65f310:L65f310:{c.instructions+=3;NFSU2_TR(0x65f310);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f313:{NFSU2_TR(0x65f313);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65f315:{NFSU2_TR(0x65f315);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f318:L65f318:{c.instructions+=7;NFSU2_TR(0x65f318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f31a:{NFSU2_TR(0x65f31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f31e:{NFSU2_TR(0x65f31e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65f322:{NFSU2_TR(0x65f322);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f325:{NFSU2_TR(0x65f325);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65f328:{NFSU2_TR(0x65f328);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65f32a:{NFSU2_TR(0x65f32a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f702;}}
}
B65f330:L65f330:{c.instructions+=3;NFSU2_TR(0x65f330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f333:{NFSU2_TR(0x65f333);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B65f336:{NFSU2_TR(0x65f336);
if(r1(R+518)){{goto L65f702;}}
}
B65f33c:L65f33c:{c.instructions+=4;NFSU2_TR(0x65f33c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f340:{NFSU2_TR(0x65f340);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f342:{NFSU2_TR(0x65f342);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65f344:{NFSU2_TR(0x65f344);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f386;}}
}
B65f346:L65f346:{c.instructions+=2;NFSU2_TR(0x65f346);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f349:{NFSU2_TR(0x65f349);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B65f34c:L65f34c:{c.instructions+=3;NFSU2_TR(0x65f34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f34f:{NFSU2_TR(0x65f34f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65f352:{NFSU2_TR(0x65f352);
if(r1(R+518)){{goto L65f386;}}
}
B65f354:L65f354:{c.instructions+=2;NFSU2_TR(0x65f354);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f358:{NFSU2_TR(0x65f358);
if(r1(R+518)){{goto L65f35f;}}
}
B65f35a:L65f35a:{c.instructions+=2;NFSU2_TR(0x65f35a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f35c:{NFSU2_TR(0x65f35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f35f:L65f35f:{c.instructions+=8;NFSU2_TR(0x65f35f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f361:{NFSU2_TR(0x65f361);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65f364:{NFSU2_TR(0x65f364);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65f367:{NFSU2_TR(0x65f367);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65f36a:{NFSU2_TR(0x65f36a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65f36d:{NFSU2_TR(0x65f36d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65f370:{NFSU2_TR(0x65f370);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65f373:{NFSU2_TR(0x65f373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65f378ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f297u);}goto L65f297;}
}
B65f378:L65f378:{c.instructions+=5;NFSU2_TR(0x65f378);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f37b:{NFSU2_TR(0x65f37b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65f37e:{NFSU2_TR(0x65f37e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B65f381:{NFSU2_TR(0x65f381);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65f384:{NFSU2_TR(0x65f384);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f34cu);}goto L65f34c;}}
}
B65f386:L65f386:{c.instructions+=4;NFSU2_TR(0x65f386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f389:{NFSU2_TR(0x65f389);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f38c:{NFSU2_TR(0x65f38c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B65f38f:{NFSU2_TR(0x65f38f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f330u);}goto L65f330;}}
}
B65f391:L65f391:{c.instructions+=1;NFSU2_TR(0x65f391);
{goto L65f702;}
}
B65f396:L65f396:{c.instructions+=8;NFSU2_TR(0x65f396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f398:{NFSU2_TR(0x65f398);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f39b:{NFSU2_TR(0x65f39b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f39e:{NFSU2_TR(0x65f39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f3a1:{NFSU2_TR(0x65f3a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f3a3:{NFSU2_TR(0x65f3a3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65f3a4:{NFSU2_TR(0x65f3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f3a7:{NFSU2_TR(0x65f3a7);
if(r1(R+518)){{goto L65f4c0;}}
}
B65f3ad:L65f3ad:{c.instructions+=2;NFSU2_TR(0x65f3ad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65f3ae:{NFSU2_TR(0x65f3ae);
if(r1(R+518)){{goto L65f44c;}}
}
B65f3b4:L65f3b4:{c.instructions+=2;NFSU2_TR(0x65f3b4);
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
B65f3b5:{NFSU2_TR(0x65f3b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65f702;}}
}
B65f3bb:L65f3bb:{c.instructions+=10;NFSU2_TR(0x65f3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f3be:{NFSU2_TR(0x65f3be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65f3c0:{NFSU2_TR(0x65f3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f3c3:{NFSU2_TR(0x65f3c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65f3c5:{NFSU2_TR(0x65f3c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f3c8:{NFSU2_TR(0x65f3c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f3ca:{NFSU2_TR(0x65f3ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f3ce:{NFSU2_TR(0x65f3ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f3d2:{NFSU2_TR(0x65f3d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f3d5:{NFSU2_TR(0x65f3d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f43a;}}
}
B65f3d7:L65f3d7:{c.instructions+=2;NFSU2_TR(0x65f3d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f3d9:{NFSU2_TR(0x65f3d9);
if(r1(R+518)){{goto L65f43a;}}
}
B65f3db:L65f3db:{c.instructions+=3;NFSU2_TR(0x65f3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f3df:{NFSU2_TR(0x65f3df);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f3e3:{NFSU2_TR(0x65f3e3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f423;}}
}
B65f3e5:L65f3e5:{c.instructions+=1;NFSU2_TR(0x65f3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f3e8:L65f3e8:{c.instructions+=2;NFSU2_TR(0x65f3e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f3ea:{NFSU2_TR(0x65f3ea);
if(r1(R+518)){{goto L65f423;}}
}
B65f3ec:L65f3ec:{c.instructions+=3;NFSU2_TR(0x65f3ec);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65f3ee:{NFSU2_TR(0x65f3ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f3f1:{NFSU2_TR(0x65f3f1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f410;}}
}
B65f3f3:L65f3f3:{c.instructions+=2;NFSU2_TR(0x65f3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f3f6:{NFSU2_TR(0x65f3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f3f9:L65f3f9:{c.instructions+=3;NFSU2_TR(0x65f3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f3fc:{NFSU2_TR(0x65f3fc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65f3fe:{NFSU2_TR(0x65f3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65f403ull));
TAIL_STATIC(0x75dd28u,75d);
}
B65f403:L65f403:{c.instructions+=5;NFSU2_TR(0x65f403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f407:{NFSU2_TR(0x65f407);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65f40a:{NFSU2_TR(0x65f40a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65f40b:{NFSU2_TR(0x65f40b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B65f40e:{NFSU2_TR(0x65f40e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f3f9u);}goto L65f3f9;}}
}
B65f410:L65f410:{c.instructions+=7;NFSU2_TR(0x65f410);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f414:{NFSU2_TR(0x65f414);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B65f417:{NFSU2_TR(0x65f417);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B65f418:{NFSU2_TR(0x65f418);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f41b:{NFSU2_TR(0x65f41b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f41e:{NFSU2_TR(0x65f41e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65f421:{NFSU2_TR(0x65f421);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f3e8u);}goto L65f3e8;}}
}
B65f423:L65f423:{c.instructions+=8;NFSU2_TR(0x65f423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f426:{NFSU2_TR(0x65f426);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65f429:{NFSU2_TR(0x65f429);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B65f42c:{NFSU2_TR(0x65f42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f42f:{NFSU2_TR(0x65f42f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f432:{NFSU2_TR(0x65f432);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B65f435:{NFSU2_TR(0x65f435);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f438:{NFSU2_TR(0x65f438);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f3d7u);}goto L65f3d7;}}
}
B65f43a:L65f43a:{c.instructions+=6;NFSU2_TR(0x65f43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f43d:{NFSU2_TR(0x65f43d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65f43f:{NFSU2_TR(0x65f43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f442:{NFSU2_TR(0x65f442);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65f444:{NFSU2_TR(0x65f444);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f447:{NFSU2_TR(0x65f447);
{goto L65f53a;}
}
B65f44c:L65f44c:{c.instructions+=10;NFSU2_TR(0x65f44c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f44f:{NFSU2_TR(0x65f44f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f451:{NFSU2_TR(0x65f451);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f454:{NFSU2_TR(0x65f454);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f457:{NFSU2_TR(0x65f457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65f459:{NFSU2_TR(0x65f459);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f45d:{NFSU2_TR(0x65f45d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f461:{NFSU2_TR(0x65f461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f463:{NFSU2_TR(0x65f463);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f466:{NFSU2_TR(0x65f466);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f52a;}}
}
B65f46c:L65f46c:{c.instructions+=2;NFSU2_TR(0x65f46c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f46e:{NFSU2_TR(0x65f46e);
if(r1(R+518)){{goto L65f52a;}}
}
B65f474:L65f474:{c.instructions+=3;NFSU2_TR(0x65f474);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f478:{NFSU2_TR(0x65f478);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f47c:{NFSU2_TR(0x65f47c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f4af;}}
}
B65f47e:L65f47e:{c.instructions+=2;NFSU2_TR(0x65f47e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f480:{NFSU2_TR(0x65f480);
if(r1(R+518)){{goto L65f4af;}}
}
B65f482:L65f482:{c.instructions+=3;NFSU2_TR(0x65f482);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65f484:{NFSU2_TR(0x65f484);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f487:{NFSU2_TR(0x65f487);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f4a0;}}
}
B65f489:L65f489:{c.instructions+=2;NFSU2_TR(0x65f489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f48c:{NFSU2_TR(0x65f48c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B65f48f:L65f48f:{c.instructions+=7;NFSU2_TR(0x65f48f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65f491:{NFSU2_TR(0x65f491);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B65f494:{NFSU2_TR(0x65f494);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65f497:{NFSU2_TR(0x65f497);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65f498:{NFSU2_TR(0x65f498);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65f49b:{NFSU2_TR(0x65f49b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65f49e:{NFSU2_TR(0x65f49e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f48fu);}goto L65f48f;}}
}
B65f4a0:L65f4a0:{c.instructions+=6;NFSU2_TR(0x65f4a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65f4a3:{NFSU2_TR(0x65f4a3);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65f4a4:{NFSU2_TR(0x65f4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f4a7:{NFSU2_TR(0x65f4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f4aa:{NFSU2_TR(0x65f4aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65f4ad:{NFSU2_TR(0x65f4ad);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f47eu);}goto L65f47e;}}
}
B65f4af:L65f4af:{c.instructions+=5;NFSU2_TR(0x65f4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f4b3:{NFSU2_TR(0x65f4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f4b6:{NFSU2_TR(0x65f4b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f4b9:{NFSU2_TR(0x65f4b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65f4bc:{NFSU2_TR(0x65f4bc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f46cu);}goto L65f46c;}}
}
B65f4be:L65f4be:{c.instructions+=1;NFSU2_TR(0x65f4be);
{goto L65f52a;}
}
B65f4c0:L65f4c0:{c.instructions+=10;NFSU2_TR(0x65f4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f4c3:{NFSU2_TR(0x65f4c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f4c5:{NFSU2_TR(0x65f4c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f4c8:{NFSU2_TR(0x65f4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f4cb:{NFSU2_TR(0x65f4cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65f4cd:{NFSU2_TR(0x65f4cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f4d1:{NFSU2_TR(0x65f4d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f4d5:{NFSU2_TR(0x65f4d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f4d7:{NFSU2_TR(0x65f4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f4da:{NFSU2_TR(0x65f4da);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f52a;}}
}
B65f4dc:L65f4dc:{c.instructions+=2;NFSU2_TR(0x65f4dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f4de:{NFSU2_TR(0x65f4de);
if(r1(R+518)){{goto L65f52a;}}
}
B65f4e0:L65f4e0:{c.instructions+=3;NFSU2_TR(0x65f4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f4e4:{NFSU2_TR(0x65f4e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f4e8:{NFSU2_TR(0x65f4e8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f51b;}}
}
B65f4ea:L65f4ea:{c.instructions+=2;NFSU2_TR(0x65f4ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f4ec:{NFSU2_TR(0x65f4ec);
if(r1(R+518)){{goto L65f51b;}}
}
B65f4ee:L65f4ee:{c.instructions+=3;NFSU2_TR(0x65f4ee);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65f4f0:{NFSU2_TR(0x65f4f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f4f3:{NFSU2_TR(0x65f4f3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f50c;}}
}
B65f4f5:L65f4f5:{c.instructions+=2;NFSU2_TR(0x65f4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f4f8:{NFSU2_TR(0x65f4f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B65f4fb:L65f4fb:{c.instructions+=7;NFSU2_TR(0x65f4fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65f4fd:{NFSU2_TR(0x65f4fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B65f500:{NFSU2_TR(0x65f500);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65f503:{NFSU2_TR(0x65f503);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65f504:{NFSU2_TR(0x65f504);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65f507:{NFSU2_TR(0x65f507);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65f50a:{NFSU2_TR(0x65f50a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f4fbu);}goto L65f4fb;}}
}
B65f50c:L65f50c:{c.instructions+=6;NFSU2_TR(0x65f50c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65f50f:{NFSU2_TR(0x65f50f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65f510:{NFSU2_TR(0x65f510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f513:{NFSU2_TR(0x65f513);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f516:{NFSU2_TR(0x65f516);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65f519:{NFSU2_TR(0x65f519);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f4eau);}goto L65f4ea;}}
}
B65f51b:L65f51b:{c.instructions+=5;NFSU2_TR(0x65f51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f51f:{NFSU2_TR(0x65f51f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f522:{NFSU2_TR(0x65f522);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f525:{NFSU2_TR(0x65f525);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65f528:{NFSU2_TR(0x65f528);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f4dcu);}goto L65f4dc;}}
}
B65f52a:L65f52a:{c.instructions+=6;NFSU2_TR(0x65f52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f52d:{NFSU2_TR(0x65f52d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65f52f:{NFSU2_TR(0x65f52f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f532:{NFSU2_TR(0x65f532);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f534:{NFSU2_TR(0x65f534);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f537:{NFSU2_TR(0x65f537);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65f53a:L65f53a:{c.instructions+=3;NFSU2_TR(0x65f53a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65f53c:{NFSU2_TR(0x65f53c);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+8)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65f53f:{NFSU2_TR(0x65f53f);
{goto L65f702;}
}
B65f544:L65f544:{c.instructions+=11;NFSU2_TR(0x65f544);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f547:{NFSU2_TR(0x65f547);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f549:{NFSU2_TR(0x65f549);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f54c:{NFSU2_TR(0x65f54c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f54e:{NFSU2_TR(0x65f54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f551:{NFSU2_TR(0x65f551);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65f553:{NFSU2_TR(0x65f553);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f556:{NFSU2_TR(0x65f556);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f559:{NFSU2_TR(0x65f559);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f55c:{NFSU2_TR(0x65f55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f55f:{NFSU2_TR(0x65f55f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65f56c;}}
}
B65f561:L65f561:{c.instructions+=5;NFSU2_TR(0x65f561);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f563:{NFSU2_TR(0x65f563);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65f564:{NFSU2_TR(0x65f564);
w1(R+512,u8((r4(R+24))<(r4(R+0))));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B65f566:{NFSU2_TR(0x65f566);
u8 U[23];
w4(U+15,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+24),4);
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B65f569:{NFSU2_TR(0x65f569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f56c:L65f56c:{c.instructions+=2;NFSU2_TR(0x65f56c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65f56d:{NFSU2_TR(0x65f56d);
if(r1(R+518)){{goto L65f682;}}
}
B65f573:L65f573:{c.instructions+=2;NFSU2_TR(0x65f573);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65f574:{NFSU2_TR(0x65f574);
if(r1(R+518)){{goto L65f60d;}}
}
B65f57a:L65f57a:{c.instructions+=2;NFSU2_TR(0x65f57a);
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
B65f57b:{NFSU2_TR(0x65f57b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65f702;}}
}
B65f581:L65f581:{c.instructions+=9;NFSU2_TR(0x65f581);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f584:{NFSU2_TR(0x65f584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65f586:{NFSU2_TR(0x65f586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f589:{NFSU2_TR(0x65f589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65f58b:{NFSU2_TR(0x65f58b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f58e:{NFSU2_TR(0x65f58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f592:{NFSU2_TR(0x65f592);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f596:{NFSU2_TR(0x65f596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65f598:{NFSU2_TR(0x65f598);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f5f9;}}
}
B65f59a:L65f59a:{c.instructions+=2;NFSU2_TR(0x65f59a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f59c:{NFSU2_TR(0x65f59c);
if(r1(R+518)){{goto L65f5f9;}}
}
B65f59e:L65f59e:{c.instructions+=3;NFSU2_TR(0x65f59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f5a2:{NFSU2_TR(0x65f5a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f5a6:{NFSU2_TR(0x65f5a6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f5e8;}}
}
B65f5a8:L65f5a8:{c.instructions+=2;NFSU2_TR(0x65f5a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f5aa:{NFSU2_TR(0x65f5aa);
if(r1(R+518)){{goto L65f5e8;}}
}
B65f5ac:L65f5ac:{c.instructions+=2;NFSU2_TR(0x65f5ac);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65f5ae:{NFSU2_TR(0x65f5ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65f5b3ull));
TAIL_STATIC(0x75dd28u,75d);
}
B65f5b3:L65f5b3:{c.instructions+=3;NFSU2_TR(0x65f5b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65f5b5:{NFSU2_TR(0x65f5b5);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65f5b8:{NFSU2_TR(0x65f5b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65f5bdull));
TAIL_STATIC(0x75dd28u,75d);
}
B65f5bd:L65f5bd:{c.instructions+=3;NFSU2_TR(0x65f5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f5c0:{NFSU2_TR(0x65f5c0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65f5c3:{NFSU2_TR(0x65f5c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65f5c8ull));
TAIL_STATIC(0x75dd28u,75d);
}
B65f5c8:L65f5c8:{c.instructions+=3;NFSU2_TR(0x65f5c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f5cb:{NFSU2_TR(0x65f5cb);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65f5ce:{NFSU2_TR(0x65f5ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65f5d3ull));
TAIL_STATIC(0x75dd28u,75d);
}
B65f5d3:L65f5d3:{c.instructions+=8;NFSU2_TR(0x65f5d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f5d6:{NFSU2_TR(0x65f5d6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65f5d9:{NFSU2_TR(0x65f5d9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B65f5dc:{NFSU2_TR(0x65f5dc);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B65f5dd:{NFSU2_TR(0x65f5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f5e0:{NFSU2_TR(0x65f5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f5e3:{NFSU2_TR(0x65f5e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65f5e6:{NFSU2_TR(0x65f5e6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f5a8u);}goto L65f5a8;}}
}
B65f5e8:L65f5e8:{c.instructions+=6;NFSU2_TR(0x65f5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f5eb:{NFSU2_TR(0x65f5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f5ee:{NFSU2_TR(0x65f5ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65f5f1:{NFSU2_TR(0x65f5f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f5f4:{NFSU2_TR(0x65f5f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65f5f7:{NFSU2_TR(0x65f5f7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f59au);}goto L65f59a;}}
}
B65f5f9:L65f5f9:{c.instructions+=7;NFSU2_TR(0x65f5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f5fc:{NFSU2_TR(0x65f5fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f5fe:{NFSU2_TR(0x65f5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f601:{NFSU2_TR(0x65f601);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f603:{NFSU2_TR(0x65f603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f606:{NFSU2_TR(0x65f606);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f608:{NFSU2_TR(0x65f608);
{goto L65f6fc;}
}
B65f60d:L65f60d:{c.instructions+=9;NFSU2_TR(0x65f60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f610:{NFSU2_TR(0x65f610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65f612:{NFSU2_TR(0x65f612);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f615:{NFSU2_TR(0x65f615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f617:{NFSU2_TR(0x65f617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f61a:{NFSU2_TR(0x65f61a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f61e:{NFSU2_TR(0x65f61e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f622:{NFSU2_TR(0x65f622);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f624:{NFSU2_TR(0x65f624);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f6ed;}}
}
B65f62a:L65f62a:{c.instructions+=2;NFSU2_TR(0x65f62a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f62c:{NFSU2_TR(0x65f62c);
if(r1(R+518)){{goto L65f6ed;}}
}
B65f632:L65f632:{c.instructions+=3;NFSU2_TR(0x65f632);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f636:{NFSU2_TR(0x65f636);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f63a:{NFSU2_TR(0x65f63a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f672;}}
}
B65f63c:L65f63c:{c.instructions+=2;NFSU2_TR(0x65f63c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f63e:{NFSU2_TR(0x65f63e);
if(r1(R+518)){{goto L65f672;}}
}
B65f640:L65f640:{c.instructions+=2;NFSU2_TR(0x65f640);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f642:{NFSU2_TR(0x65f642);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f660;}}
}
B65f644:L65f644:{c.instructions+=4;NFSU2_TR(0x65f644);
__builtin_memmove((R+28),(R+0),4);
}
B65f646:{NFSU2_TR(0x65f646);
__builtin_memmove((R+24),(R+4),4);
}
B65f648:{NFSU2_TR(0x65f648);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B65f64a:{NFSU2_TR(0x65f64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f64d:L65f64d:{c.instructions+=5;NFSU2_TR(0x65f64d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B65f650:{NFSU2_TR(0x65f650);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65f652:{NFSU2_TR(0x65f652);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B65f655:{NFSU2_TR(0x65f655);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f658:{NFSU2_TR(0x65f658);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f64du);}goto L65f64d;}}
}
B65f65a:L65f65a:{c.instructions+=2;NFSU2_TR(0x65f65a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f65d:{NFSU2_TR(0x65f65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f660:L65f660:{c.instructions+=7;NFSU2_TR(0x65f660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f663:{NFSU2_TR(0x65f663);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B65f666:{NFSU2_TR(0x65f666);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65f669:{NFSU2_TR(0x65f669);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65f66a:{NFSU2_TR(0x65f66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f66d:{NFSU2_TR(0x65f66d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65f670:{NFSU2_TR(0x65f670);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f63cu);}goto L65f63c;}}
}
B65f672:L65f672:{c.instructions+=5;NFSU2_TR(0x65f672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f675:{NFSU2_TR(0x65f675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f678:{NFSU2_TR(0x65f678);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65f67b:{NFSU2_TR(0x65f67b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65f67e:{NFSU2_TR(0x65f67e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f62au);}goto L65f62a;}}
}
B65f680:L65f680:{c.instructions+=1;NFSU2_TR(0x65f680);
{goto L65f6ed;}
}
B65f682:L65f682:{c.instructions+=9;NFSU2_TR(0x65f682);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f685:{NFSU2_TR(0x65f685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65f687:{NFSU2_TR(0x65f687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f68a:{NFSU2_TR(0x65f68a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f68c:{NFSU2_TR(0x65f68c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f68f:{NFSU2_TR(0x65f68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f693:{NFSU2_TR(0x65f693);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f697:{NFSU2_TR(0x65f697);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f699:{NFSU2_TR(0x65f699);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f6ed;}}
}
B65f69b:L65f69b:{c.instructions+=2;NFSU2_TR(0x65f69b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f69d:{NFSU2_TR(0x65f69d);
if(r1(R+518)){{goto L65f6ed;}}
}
B65f69f:L65f69f:{c.instructions+=3;NFSU2_TR(0x65f69f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f6a3:{NFSU2_TR(0x65f6a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f6a7:{NFSU2_TR(0x65f6a7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f6df;}}
}
B65f6a9:L65f6a9:{c.instructions+=2;NFSU2_TR(0x65f6a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f6ab:{NFSU2_TR(0x65f6ab);
if(r1(R+518)){{goto L65f6df;}}
}
B65f6ad:L65f6ad:{c.instructions+=2;NFSU2_TR(0x65f6ad);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f6af:{NFSU2_TR(0x65f6af);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f6cd;}}
}
B65f6b1:L65f6b1:{c.instructions+=4;NFSU2_TR(0x65f6b1);
__builtin_memmove((R+28),(R+0),4);
}
B65f6b3:{NFSU2_TR(0x65f6b3);
__builtin_memmove((R+24),(R+4),4);
}
B65f6b5:{NFSU2_TR(0x65f6b5);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B65f6b7:{NFSU2_TR(0x65f6b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f6ba:L65f6ba:{c.instructions+=5;NFSU2_TR(0x65f6ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B65f6bd:{NFSU2_TR(0x65f6bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65f6bf:{NFSU2_TR(0x65f6bf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B65f6c2:{NFSU2_TR(0x65f6c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f6c5:{NFSU2_TR(0x65f6c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f6bau);}goto L65f6ba;}}
}
B65f6c7:L65f6c7:{c.instructions+=2;NFSU2_TR(0x65f6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f6ca:{NFSU2_TR(0x65f6ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f6cd:L65f6cd:{c.instructions+=7;NFSU2_TR(0x65f6cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f6d0:{NFSU2_TR(0x65f6d0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B65f6d3:{NFSU2_TR(0x65f6d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65f6d6:{NFSU2_TR(0x65f6d6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65f6d7:{NFSU2_TR(0x65f6d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f6da:{NFSU2_TR(0x65f6da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65f6dd:{NFSU2_TR(0x65f6dd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f6a9u);}goto L65f6a9;}}
}
B65f6df:L65f6df:{c.instructions+=5;NFSU2_TR(0x65f6df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f6e2:{NFSU2_TR(0x65f6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f6e5:{NFSU2_TR(0x65f6e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65f6e8:{NFSU2_TR(0x65f6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65f6eb:{NFSU2_TR(0x65f6eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f69bu);}goto L65f69b;}}
}
B65f6ed:L65f6ed:{c.instructions+=6;NFSU2_TR(0x65f6ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f6f0:{NFSU2_TR(0x65f6f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65f6f2:{NFSU2_TR(0x65f6f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f6f5:{NFSU2_TR(0x65f6f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65f6f7:{NFSU2_TR(0x65f6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f6fa:{NFSU2_TR(0x65f6fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65f6fc:L65f6fc:{c.instructions+=2;NFSU2_TR(0x65f6fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f6ff:{NFSU2_TR(0x65f6ff);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65f702:L65f702:{c.instructions+=5;NFSU2_TR(0x65f702);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65f703:{NFSU2_TR(0x65f703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65f704:{NFSU2_TR(0x65f704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65f705:{NFSU2_TR(0x65f705);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65f706:{NFSU2_TR(0x65f706);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65f709:L65f709:{c.instructions+=10;NFSU2_TR(0x65f709);
__builtin_memmove((R+28),(R+28),4);
}
B65f70b:{NFSU2_TR(0x65f70b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f70c:{NFSU2_TR(0x65f70c);
__builtin_memmove((R+20),(R+16),4);
}
B65f70e:{NFSU2_TR(0x65f70e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B65f711:{NFSU2_TR(0x65f711);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f712:{NFSU2_TR(0x65f712);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f713:{NFSU2_TR(0x65f713);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f716:{NFSU2_TR(0x65f716);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f718:{NFSU2_TR(0x65f718);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f719:{NFSU2_TR(0x65f719);
if(r1(R+518)){{goto L65f726;}}
}
B65f71b:L65f71b:{c.instructions+=4;NFSU2_TR(0x65f71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f71e:{NFSU2_TR(0x65f71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B65f721:{NFSU2_TR(0x65f721);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(r2(U+0)));
}
B65f724:{NFSU2_TR(0x65f724);
{goto L65f731;}
}
B65f726:L65f726:{c.instructions+=4;NFSU2_TR(0x65f726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f729:{NFSU2_TR(0x65f729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f72b:{NFSU2_TR(0x65f72b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f72e:{NFSU2_TR(0x65f72e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65f731:L65f731:{c.instructions+=6;NFSU2_TR(0x65f731);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f734:{NFSU2_TR(0x65f734);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f737:{NFSU2_TR(0x65f737);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65f739:{NFSU2_TR(0x65f739);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65f73a:{NFSU2_TR(0x65f73a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f73d:{NFSU2_TR(0x65f73d);
if(r1(R+518)){{goto L65f744;}}
}
B65f73f:L65f73f:{c.instructions+=2;NFSU2_TR(0x65f73f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f742:{NFSU2_TR(0x65f742);
{goto L65f753;}
}
B65f744:L65f744:{c.instructions+=5;NFSU2_TR(0x65f744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f746:{NFSU2_TR(0x65f746);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f749:{NFSU2_TR(0x65f749);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f74b:{NFSU2_TR(0x65f74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f74e:{NFSU2_TR(0x65f74e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65f753;}}
}
B65f750:L65f750:{c.instructions+=1;NFSU2_TR(0x65f750);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f753:L65f753:{c.instructions+=2;NFSU2_TR(0x65f753);
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
B65f755:{NFSU2_TR(0x65f755);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65faae;}}
}
B65f75b:L65f75b:{c.instructions+=2;NFSU2_TR(0x65f75b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f75d:{NFSU2_TR(0x65f75d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65f939;}}
}
B65f763:L65f763:{c.instructions+=2;NFSU2_TR(0x65f763);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f766:{NFSU2_TR(0x65f766);
if(r1(R+518)){{goto L65f80e;}}
}
B65f76c:L65f76c:{c.instructions+=2;NFSU2_TR(0x65f76c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f76f:{NFSU2_TR(0x65f76f);
if(r1(R+518)){{goto L65f939;}}
}
B65f775:L65f775:{c.instructions+=2;NFSU2_TR(0x65f775);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B65f778:{NFSU2_TR(0x65f778);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65faae;}}
}
B65f77e:L65f77e:{c.instructions+=3;NFSU2_TR(0x65f77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f782:{NFSU2_TR(0x65f782);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f784:{NFSU2_TR(0x65f784);
if(r1(R+518)){{goto L65f78e;}}
}
B65f786:L65f786:{c.instructions+=3;NFSU2_TR(0x65f786);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65f789:{NFSU2_TR(0x65f789);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B65f78b:{NFSU2_TR(0x65f78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f78e:L65f78e:{c.instructions+=7;NFSU2_TR(0x65f78e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f790:{NFSU2_TR(0x65f790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f794:{NFSU2_TR(0x65f794);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65f798:{NFSU2_TR(0x65f798);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f79b:{NFSU2_TR(0x65f79b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65f79e:{NFSU2_TR(0x65f79e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B65f7a0:{NFSU2_TR(0x65f7a0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65faae;}}
}
B65f7a6:L65f7a6:{c.instructions+=1;NFSU2_TR(0x65f7a6);
{goto L65f7ab;}
}
B65f7a8:L65f7a8:{c.instructions+=1;NFSU2_TR(0x65f7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f7ab:L65f7ab:{c.instructions+=3;NFSU2_TR(0x65f7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f7ae:{NFSU2_TR(0x65f7ae);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B65f7b1:{NFSU2_TR(0x65f7b1);
if(r1(R+518)){{goto L65faae;}}
}
B65f7b7:L65f7b7:{c.instructions+=4;NFSU2_TR(0x65f7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f7bb:{NFSU2_TR(0x65f7bb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f7bd:{NFSU2_TR(0x65f7bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B65f7bf:{NFSU2_TR(0x65f7bf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f7fe;}}
}
B65f7c1:L65f7c1:{c.instructions+=3;NFSU2_TR(0x65f7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f7c4:{NFSU2_TR(0x65f7c4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B65f7c7:{NFSU2_TR(0x65f7c7);
{goto L65f7cc;}
}
B65f7c9:L65f7c9:{c.instructions+=1;NFSU2_TR(0x65f7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f7cc:L65f7cc:{c.instructions+=2;NFSU2_TR(0x65f7cc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65f7cf:{NFSU2_TR(0x65f7cf);
if(r1(R+518)){{goto L65f7fe;}}
}
B65f7d1:L65f7d1:{c.instructions+=2;NFSU2_TR(0x65f7d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f7d5:{NFSU2_TR(0x65f7d5);
if(r1(R+518)){{goto L65f7dc;}}
}
B65f7d7:L65f7d7:{c.instructions+=2;NFSU2_TR(0x65f7d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65f7d9:{NFSU2_TR(0x65f7d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f7dc:L65f7dc:{c.instructions+=8;NFSU2_TR(0x65f7dc);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f7de:{NFSU2_TR(0x65f7de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f7df:{NFSU2_TR(0x65f7df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65f7e2:{NFSU2_TR(0x65f7e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65f7e5:{NFSU2_TR(0x65f7e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65f7e8:{NFSU2_TR(0x65f7e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65f7eb:{NFSU2_TR(0x65f7eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65f7ee:{NFSU2_TR(0x65f7ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65f7f3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f709u);}goto L65f709;}
}
B65f7f3:L65f7f3:{c.instructions+=4;NFSU2_TR(0x65f7f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f7f6:{NFSU2_TR(0x65f7f6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B65f7f9:{NFSU2_TR(0x65f7f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65f7fc:{NFSU2_TR(0x65f7fc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f7c9u);}goto L65f7c9;}}
}
B65f7fe:L65f7fe:{c.instructions+=4;NFSU2_TR(0x65f7fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f801:{NFSU2_TR(0x65f801);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f804:{NFSU2_TR(0x65f804);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B65f807:{NFSU2_TR(0x65f807);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f7a8u);}goto L65f7a8;}}
}
B65f809:L65f809:{c.instructions+=1;NFSU2_TR(0x65f809);
{goto L65faae;}
}
B65f80e:L65f80e:{c.instructions+=6;NFSU2_TR(0x65f80e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f810:{NFSU2_TR(0x65f810);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f813:{NFSU2_TR(0x65f813);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f815:{NFSU2_TR(0x65f815);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65f816:{NFSU2_TR(0x65f816);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f819:{NFSU2_TR(0x65f819);
if(r1(R+518)){{goto L65f8db;}}
}
B65f81f:L65f81f:{c.instructions+=2;NFSU2_TR(0x65f81f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65f820:{NFSU2_TR(0x65f820);
if(r1(R+518)){{goto L65f892;}}
}
B65f822:L65f822:{c.instructions+=2;NFSU2_TR(0x65f822);
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
B65f823:{NFSU2_TR(0x65f823);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65faae;}}
}
B65f829:L65f829:{c.instructions+=9;NFSU2_TR(0x65f829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f82c:{NFSU2_TR(0x65f82c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65f82e:{NFSU2_TR(0x65f82e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f831:{NFSU2_TR(0x65f831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65f833:{NFSU2_TR(0x65f833);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f836:{NFSU2_TR(0x65f836);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f83a:{NFSU2_TR(0x65f83a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f83e:{NFSU2_TR(0x65f83e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65f840:{NFSU2_TR(0x65f840);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f87e;}}
}
B65f842:L65f842:{c.instructions+=2;NFSU2_TR(0x65f842);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f844:{NFSU2_TR(0x65f844);
if(r1(R+518)){{goto L65f87e;}}
}
B65f846:L65f846:{c.instructions+=3;NFSU2_TR(0x65f846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f84a:{NFSU2_TR(0x65f84a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f84e:{NFSU2_TR(0x65f84e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f870;}}
}
B65f850:L65f850:{c.instructions+=2;NFSU2_TR(0x65f850);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f852:{NFSU2_TR(0x65f852);
if(r1(R+518)){{goto L65f870;}}
}
B65f854:L65f854:{c.instructions+=3;NFSU2_TR(0x65f854);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f857:{NFSU2_TR(0x65f857);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65f85a:{NFSU2_TR(0x65f85a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65f85full));
TAIL_STATIC(0x75dd28u,75d);
}
B65f85f:L65f85f:{c.instructions+=7;NFSU2_TR(0x65f85f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65f861:{NFSU2_TR(0x65f861);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B65f864:{NFSU2_TR(0x65f864);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B65f865:{NFSU2_TR(0x65f865);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f868:{NFSU2_TR(0x65f868);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f86b:{NFSU2_TR(0x65f86b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65f86e:{NFSU2_TR(0x65f86e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f850u);}goto L65f850;}}
}
B65f870:L65f870:{c.instructions+=5;NFSU2_TR(0x65f870);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B65f873:{NFSU2_TR(0x65f873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f876:{NFSU2_TR(0x65f876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f879:{NFSU2_TR(0x65f879);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65f87c:{NFSU2_TR(0x65f87c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f842u);}goto L65f842;}}
}
B65f87e:L65f87e:{c.instructions+=7;NFSU2_TR(0x65f87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f881:{NFSU2_TR(0x65f881);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f883:{NFSU2_TR(0x65f883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f886:{NFSU2_TR(0x65f886);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f888:{NFSU2_TR(0x65f888);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f88b:{NFSU2_TR(0x65f88b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f88d:{NFSU2_TR(0x65f88d);
{goto L65f92e;}
}
B65f892:L65f892:{c.instructions+=9;NFSU2_TR(0x65f892);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f895:{NFSU2_TR(0x65f895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f897:{NFSU2_TR(0x65f897);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f89a:{NFSU2_TR(0x65f89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f89d:{NFSU2_TR(0x65f89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f8a1:{NFSU2_TR(0x65f8a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f8a5:{NFSU2_TR(0x65f8a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f8a7:{NFSU2_TR(0x65f8a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65f8a9:{NFSU2_TR(0x65f8a9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f922;}}
}
B65f8ab:L65f8ab:{c.instructions+=2;NFSU2_TR(0x65f8ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f8ad:{NFSU2_TR(0x65f8ad);
if(r1(R+518)){{goto L65f922;}}
}
B65f8af:L65f8af:{c.instructions+=3;NFSU2_TR(0x65f8af);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65f8b1:{NFSU2_TR(0x65f8b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f8b4:{NFSU2_TR(0x65f8b4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f8cb;}}
}
B65f8b6:L65f8b6:{c.instructions+=2;NFSU2_TR(0x65f8b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f8b8:{NFSU2_TR(0x65f8b8);
if(r1(R+518)){{goto L65f8cb;}}
}
B65f8ba:L65f8ba:{c.instructions+=8;NFSU2_TR(0x65f8ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65f8bc:{NFSU2_TR(0x65f8bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B65f8bf:{NFSU2_TR(0x65f8bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f8c1:{NFSU2_TR(0x65f8c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B65f8c4:{NFSU2_TR(0x65f8c4);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65f8c5:{NFSU2_TR(0x65f8c5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65f8c6:{NFSU2_TR(0x65f8c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65f8c9:{NFSU2_TR(0x65f8c9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f8b6u);}goto L65f8b6;}}
}
B65f8cb:L65f8cb:{c.instructions+=5;NFSU2_TR(0x65f8cb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B65f8ce:{NFSU2_TR(0x65f8ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f8d1:{NFSU2_TR(0x65f8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f8d4:{NFSU2_TR(0x65f8d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65f8d7:{NFSU2_TR(0x65f8d7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f8abu);}goto L65f8ab;}}
}
B65f8d9:L65f8d9:{c.instructions+=1;NFSU2_TR(0x65f8d9);
{goto L65f922;}
}
B65f8db:L65f8db:{c.instructions+=9;NFSU2_TR(0x65f8db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f8de:{NFSU2_TR(0x65f8de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f8e0:{NFSU2_TR(0x65f8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f8e3:{NFSU2_TR(0x65f8e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f8e6:{NFSU2_TR(0x65f8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f8ea:{NFSU2_TR(0x65f8ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f8ee:{NFSU2_TR(0x65f8ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f8f0:{NFSU2_TR(0x65f8f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65f8f2:{NFSU2_TR(0x65f8f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f922;}}
}
B65f8f4:L65f8f4:{c.instructions+=2;NFSU2_TR(0x65f8f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f8f6:{NFSU2_TR(0x65f8f6);
if(r1(R+518)){{goto L65f922;}}
}
B65f8f8:L65f8f8:{c.instructions+=3;NFSU2_TR(0x65f8f8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65f8fa:{NFSU2_TR(0x65f8fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f8fd:{NFSU2_TR(0x65f8fd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f914;}}
}
B65f8ff:L65f8ff:{c.instructions+=2;NFSU2_TR(0x65f8ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65f901:{NFSU2_TR(0x65f901);
if(r1(R+518)){{goto L65f914;}}
}
B65f903:L65f903:{c.instructions+=8;NFSU2_TR(0x65f903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65f905:{NFSU2_TR(0x65f905);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B65f908:{NFSU2_TR(0x65f908);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f90a:{NFSU2_TR(0x65f90a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B65f90d:{NFSU2_TR(0x65f90d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65f90e:{NFSU2_TR(0x65f90e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65f90f:{NFSU2_TR(0x65f90f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65f912:{NFSU2_TR(0x65f912);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f8ffu);}goto L65f8ff;}}
}
B65f914:L65f914:{c.instructions+=5;NFSU2_TR(0x65f914);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B65f917:{NFSU2_TR(0x65f917);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f91a:{NFSU2_TR(0x65f91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f91d:{NFSU2_TR(0x65f91d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65f920:{NFSU2_TR(0x65f920);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f8f4u);}goto L65f8f4;}}
}
B65f922:L65f922:{c.instructions+=5;NFSU2_TR(0x65f922);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65f925:{NFSU2_TR(0x65f925);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65f927:{NFSU2_TR(0x65f927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f92a:{NFSU2_TR(0x65f92a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f92c:{NFSU2_TR(0x65f92c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65f92e:L65f92e:{c.instructions+=3;NFSU2_TR(0x65f92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f931:{NFSU2_TR(0x65f931);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65f934:{NFSU2_TR(0x65f934);
{goto L65faae;}
}
B65f939:L65f939:{c.instructions+=8;NFSU2_TR(0x65f939);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f93b:{NFSU2_TR(0x65f93b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65f93e:{NFSU2_TR(0x65f93e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65f940:{NFSU2_TR(0x65f940);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65f942:{NFSU2_TR(0x65f942);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65f945:{NFSU2_TR(0x65f945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f948:{NFSU2_TR(0x65f948);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f94b:{NFSU2_TR(0x65f94b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65f958;}}
}
B65f94d:L65f94d:{c.instructions+=5;NFSU2_TR(0x65f94d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65f94f:{NFSU2_TR(0x65f94f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65f950:{NFSU2_TR(0x65f950);
w1(R+512,u8((r4(R+0))<(r4(R+24))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B65f952:{NFSU2_TR(0x65f952);
u8 U[23];
w4(U+15,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B65f955:{NFSU2_TR(0x65f955);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f958:L65f958:{c.instructions+=2;NFSU2_TR(0x65f958);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65f959:{NFSU2_TR(0x65f959);
if(r1(R+518)){{goto L65fa54;}}
}
B65f95f:L65f95f:{c.instructions+=2;NFSU2_TR(0x65f95f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65f960:{NFSU2_TR(0x65f960);
if(r1(R+518)){{goto L65fa0a;}}
}
B65f966:L65f966:{c.instructions+=2;NFSU2_TR(0x65f966);
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
B65f967:{NFSU2_TR(0x65f967);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65faae;}}
}
B65f96d:L65f96d:{c.instructions+=11;NFSU2_TR(0x65f96d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f970:{NFSU2_TR(0x65f970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65f972:{NFSU2_TR(0x65f972);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f975:{NFSU2_TR(0x65f975);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65f977:{NFSU2_TR(0x65f977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f97a:{NFSU2_TR(0x65f97a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f97d:{NFSU2_TR(0x65f97d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65f97f:{NFSU2_TR(0x65f97f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65f981:{NFSU2_TR(0x65f981);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f984:{NFSU2_TR(0x65f984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f987:{NFSU2_TR(0x65f987);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f9f3;}}
}
B65f989:L65f989:{c.instructions+=1;NFSU2_TR(0x65f989);
{goto L65f98d;}
}
B65f98b:L65f98b:{c.instructions+=1;NFSU2_TR(0x65f98b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65f98d:L65f98d:{c.instructions+=2;NFSU2_TR(0x65f98d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f990:{NFSU2_TR(0x65f990);
if(r1(R+518)){{goto L65f9f3;}}
}
B65f992:L65f992:{c.instructions+=3;NFSU2_TR(0x65f992);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f995:{NFSU2_TR(0x65f995);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f998:{NFSU2_TR(0x65f998);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65f9df;}}
}
B65f99a:L65f99a:{c.instructions+=2;NFSU2_TR(0x65f99a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65f99e:{NFSU2_TR(0x65f99e);
if(r1(R+518)){{goto L65f9df;}}
}
B65f9a0:L65f9a0:{c.instructions+=2;NFSU2_TR(0x65f9a0);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65f9a2:{NFSU2_TR(0x65f9a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65f9a7ull));
TAIL_STATIC(0x75dd28u,75d);
}
B65f9a7:L65f9a7:{c.instructions+=4;NFSU2_TR(0x65f9a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65f9a9:{NFSU2_TR(0x65f9a9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65f9ac:{NFSU2_TR(0x65f9ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65f9af:{NFSU2_TR(0x65f9af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65f9b4ull));
TAIL_STATIC(0x75dd28u,75d);
}
B65f9b4:L65f9b4:{c.instructions+=3;NFSU2_TR(0x65f9b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B65f9b6:{NFSU2_TR(0x65f9b6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65f9b9:{NFSU2_TR(0x65f9b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65f9beull));
TAIL_STATIC(0x75dd28u,75d);
}
B65f9be:L65f9be:{c.instructions+=3;NFSU2_TR(0x65f9be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f9c1:{NFSU2_TR(0x65f9c1);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65f9c4:{NFSU2_TR(0x65f9c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65f9c9ull));
TAIL_STATIC(0x75dd28u,75d);
}
B65f9c9:L65f9c9:{c.instructions+=8;NFSU2_TR(0x65f9c9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B65f9cc:{NFSU2_TR(0x65f9cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f9cf:{NFSU2_TR(0x65f9cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f9d2:{NFSU2_TR(0x65f9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65f9d5:{NFSU2_TR(0x65f9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f9d8:{NFSU2_TR(0x65f9d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65f9db:{NFSU2_TR(0x65f9db);
__builtin_memmove((R+28),(R+12),4);
}
B65f9dd:{NFSU2_TR(0x65f9dd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f99au);}goto L65f99a;}}
}
B65f9df:L65f9df:{c.instructions+=7;NFSU2_TR(0x65f9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f9e2:{NFSU2_TR(0x65f9e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65f9e5:{NFSU2_TR(0x65f9e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65f9e8:{NFSU2_TR(0x65f9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65f9eb:{NFSU2_TR(0x65f9eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f9ee:{NFSU2_TR(0x65f9ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65f9f1:{NFSU2_TR(0x65f9f1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65f98bu);}goto L65f98b;}}
}
B65f9f3:L65f9f3:{c.instructions+=8;NFSU2_TR(0x65f9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f9f6:{NFSU2_TR(0x65f9f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65f9f9:{NFSU2_TR(0x65f9f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65f9fb:{NFSU2_TR(0x65f9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65f9fe:{NFSU2_TR(0x65f9fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65fa00:{NFSU2_TR(0x65fa00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fa03:{NFSU2_TR(0x65fa03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65fa05:{NFSU2_TR(0x65fa05);
{goto L65faab;}
}
B65fa0a:L65fa0a:{c.instructions+=9;NFSU2_TR(0x65fa0a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fa0d:{NFSU2_TR(0x65fa0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fa10:{NFSU2_TR(0x65fa10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65fa12:{NFSU2_TR(0x65fa12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fa15:{NFSU2_TR(0x65fa15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fa18:{NFSU2_TR(0x65fa18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65fa1a:{NFSU2_TR(0x65fa1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fa1c:{NFSU2_TR(0x65fa1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fa1f:{NFSU2_TR(0x65fa1f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fa9c;}}
}
B65fa21:L65fa21:{c.instructions+=2;NFSU2_TR(0x65fa21);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fa23:{NFSU2_TR(0x65fa23);
if(r1(R+518)){{goto L65fa9c;}}
}
B65fa25:L65fa25:{c.instructions+=3;NFSU2_TR(0x65fa25);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65fa27:{NFSU2_TR(0x65fa27);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fa2a:{NFSU2_TR(0x65fa2a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fa41;}}
}
B65fa2c:L65fa2c:{c.instructions+=2;NFSU2_TR(0x65fa2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fa2e:{NFSU2_TR(0x65fa2e);
if(r1(R+518)){{goto L65fa41;}}
}
B65fa30:L65fa30:{c.instructions+=8;NFSU2_TR(0x65fa30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65fa32:{NFSU2_TR(0x65fa32);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65fa35:{NFSU2_TR(0x65fa35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65fa37:{NFSU2_TR(0x65fa37);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65fa3a:{NFSU2_TR(0x65fa3a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65fa3b:{NFSU2_TR(0x65fa3b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65fa3c:{NFSU2_TR(0x65fa3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65fa3f:{NFSU2_TR(0x65fa3f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fa2cu);}goto L65fa2c;}}
}
B65fa41:L65fa41:{c.instructions+=6;NFSU2_TR(0x65fa41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fa44:{NFSU2_TR(0x65fa44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fa47:{NFSU2_TR(0x65fa47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65fa4a:{NFSU2_TR(0x65fa4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fa4d:{NFSU2_TR(0x65fa4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65fa50:{NFSU2_TR(0x65fa50);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fa21u);}goto L65fa21;}}
}
B65fa52:L65fa52:{c.instructions+=1;NFSU2_TR(0x65fa52);
{goto L65fa9c;}
}
B65fa54:L65fa54:{c.instructions+=9;NFSU2_TR(0x65fa54);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fa57:{NFSU2_TR(0x65fa57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fa5a:{NFSU2_TR(0x65fa5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65fa5c:{NFSU2_TR(0x65fa5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fa5f:{NFSU2_TR(0x65fa5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fa62:{NFSU2_TR(0x65fa62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65fa64:{NFSU2_TR(0x65fa64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fa66:{NFSU2_TR(0x65fa66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fa69:{NFSU2_TR(0x65fa69);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fa9c;}}
}
B65fa6b:L65fa6b:{c.instructions+=2;NFSU2_TR(0x65fa6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fa6d:{NFSU2_TR(0x65fa6d);
if(r1(R+518)){{goto L65fa9c;}}
}
B65fa6f:L65fa6f:{c.instructions+=3;NFSU2_TR(0x65fa6f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65fa71:{NFSU2_TR(0x65fa71);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fa74:{NFSU2_TR(0x65fa74);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fa8b;}}
}
B65fa76:L65fa76:{c.instructions+=2;NFSU2_TR(0x65fa76);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fa78:{NFSU2_TR(0x65fa78);
if(r1(R+518)){{goto L65fa8b;}}
}
B65fa7a:L65fa7a:{c.instructions+=8;NFSU2_TR(0x65fa7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65fa7c:{NFSU2_TR(0x65fa7c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65fa7f:{NFSU2_TR(0x65fa7f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65fa81:{NFSU2_TR(0x65fa81);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65fa84:{NFSU2_TR(0x65fa84);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65fa85:{NFSU2_TR(0x65fa85);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65fa86:{NFSU2_TR(0x65fa86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65fa89:{NFSU2_TR(0x65fa89);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fa76u);}goto L65fa76;}}
}
B65fa8b:L65fa8b:{c.instructions+=6;NFSU2_TR(0x65fa8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fa8e:{NFSU2_TR(0x65fa8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fa91:{NFSU2_TR(0x65fa91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65fa94:{NFSU2_TR(0x65fa94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fa97:{NFSU2_TR(0x65fa97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65fa9a:{NFSU2_TR(0x65fa9a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fa6bu);}goto L65fa6b;}}
}
B65fa9c:L65fa9c:{c.instructions+=6;NFSU2_TR(0x65fa9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65fa9f:{NFSU2_TR(0x65fa9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65faa1:{NFSU2_TR(0x65faa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65faa4:{NFSU2_TR(0x65faa4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65faa6:{NFSU2_TR(0x65faa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65faa9:{NFSU2_TR(0x65faa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65faab:L65faab:{c.instructions+=1;NFSU2_TR(0x65faab);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+12)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65faae:L65faae:{c.instructions+=5;NFSU2_TR(0x65faae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65faaf:{NFSU2_TR(0x65faaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65fab0:{NFSU2_TR(0x65fab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65fab1:{NFSU2_TR(0x65fab1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65fab2:{NFSU2_TR(0x65fab2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65fab5:L65fab5:{c.instructions+=11;NFSU2_TR(0x65fab5);
__builtin_memmove((R+28),(R+28),4);
}
B65fab7:{NFSU2_TR(0x65fab7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65fab8:{NFSU2_TR(0x65fab8);
__builtin_memmove((R+20),(R+16),4);
}
B65faba:{NFSU2_TR(0x65faba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B65fabd:{NFSU2_TR(0x65fabd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65fac0:{NFSU2_TR(0x65fac0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65fac1:{NFSU2_TR(0x65fac1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65fac2:{NFSU2_TR(0x65fac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fac5:{NFSU2_TR(0x65fac5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fac7:{NFSU2_TR(0x65fac7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65fac8:{NFSU2_TR(0x65fac8);
if(r1(R+518)){{goto L65fad4;}}
}
B65faca:L65faca:{c.instructions+=4;NFSU2_TR(0x65faca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65facd:{NFSU2_TR(0x65facd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65facf:{NFSU2_TR(0x65facf);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B65fad2:{NFSU2_TR(0x65fad2);
{goto L65fadc;}
}
B65fad4:L65fad4:{c.instructions+=3;NFSU2_TR(0x65fad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fad6:{NFSU2_TR(0x65fad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65fad9:{NFSU2_TR(0x65fad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fadc:L65fadc:{c.instructions+=5;NFSU2_TR(0x65fadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fadf:{NFSU2_TR(0x65fadf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65fae1:{NFSU2_TR(0x65fae1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65fae2:{NFSU2_TR(0x65fae2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65fae5:{NFSU2_TR(0x65fae5);
if(r1(R+518)){{goto L65faec;}}
}
B65fae7:L65fae7:{c.instructions+=2;NFSU2_TR(0x65fae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65faea:{NFSU2_TR(0x65faea);
{goto L65fafb;}
}
B65faec:L65faec:{c.instructions+=5;NFSU2_TR(0x65faec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65faee:{NFSU2_TR(0x65faee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65faf1:{NFSU2_TR(0x65faf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65faf3:{NFSU2_TR(0x65faf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65faf6:{NFSU2_TR(0x65faf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65fafb;}}
}
B65faf8:L65faf8:{c.instructions+=1;NFSU2_TR(0x65faf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fafb:L65fafb:{c.instructions+=2;NFSU2_TR(0x65fafb);
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
B65fafd:{NFSU2_TR(0x65fafd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65feb8;}}
}
B65fb03:L65fb03:{c.instructions+=2;NFSU2_TR(0x65fb03);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65fb05:{NFSU2_TR(0x65fb05);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65fd4c;}}
}
B65fb0b:L65fb0b:{c.instructions+=2;NFSU2_TR(0x65fb0b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65fb0e:{NFSU2_TR(0x65fb0e);
if(r1(R+518)){{goto L65fbb4;}}
}
B65fb14:L65fb14:{c.instructions+=2;NFSU2_TR(0x65fb14);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65fb17:{NFSU2_TR(0x65fb17);
if(r1(R+518)){{goto L65fd4c;}}
}
B65fb1d:L65fb1d:{c.instructions+=2;NFSU2_TR(0x65fb1d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B65fb20:{NFSU2_TR(0x65fb20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65feb8;}}
}
B65fb26:L65fb26:{c.instructions+=3;NFSU2_TR(0x65fb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fb2a:{NFSU2_TR(0x65fb2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fb2c:{NFSU2_TR(0x65fb2c);
if(r1(R+518)){{goto L65fb36;}}
}
B65fb2e:L65fb2e:{c.instructions+=3;NFSU2_TR(0x65fb2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fb31:{NFSU2_TR(0x65fb31);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65fb33:{NFSU2_TR(0x65fb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fb36:L65fb36:{c.instructions+=7;NFSU2_TR(0x65fb36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fb38:{NFSU2_TR(0x65fb38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fb3c:{NFSU2_TR(0x65fb3c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65fb40:{NFSU2_TR(0x65fb40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fb43:{NFSU2_TR(0x65fb43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65fb46:{NFSU2_TR(0x65fb46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65fb48:{NFSU2_TR(0x65fb48);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65feb8;}}
}
B65fb4e:L65fb4e:{c.instructions+=3;NFSU2_TR(0x65fb4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fb51:{NFSU2_TR(0x65fb51);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B65fb54:{NFSU2_TR(0x65fb54);
if(r1(R+518)){{goto L65feb8;}}
}
B65fb5a:L65fb5a:{c.instructions+=4;NFSU2_TR(0x65fb5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fb5e:{NFSU2_TR(0x65fb5e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fb60:{NFSU2_TR(0x65fb60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65fb62:{NFSU2_TR(0x65fb62);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fba4;}}
}
B65fb64:L65fb64:{c.instructions+=2;NFSU2_TR(0x65fb64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65fb67:{NFSU2_TR(0x65fb67);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B65fb6a:L65fb6a:{c.instructions+=3;NFSU2_TR(0x65fb6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fb6d:{NFSU2_TR(0x65fb6d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65fb70:{NFSU2_TR(0x65fb70);
if(r1(R+518)){{goto L65fba4;}}
}
B65fb72:L65fb72:{c.instructions+=2;NFSU2_TR(0x65fb72);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fb76:{NFSU2_TR(0x65fb76);
if(r1(R+518)){{goto L65fb7d;}}
}
B65fb78:L65fb78:{c.instructions+=2;NFSU2_TR(0x65fb78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fb7a:{NFSU2_TR(0x65fb7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fb7d:L65fb7d:{c.instructions+=8;NFSU2_TR(0x65fb7d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65fb7f:{NFSU2_TR(0x65fb7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65fb82:{NFSU2_TR(0x65fb82);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65fb85:{NFSU2_TR(0x65fb85);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65fb88:{NFSU2_TR(0x65fb88);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65fb8b:{NFSU2_TR(0x65fb8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65fb8e:{NFSU2_TR(0x65fb8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65fb91:{NFSU2_TR(0x65fb91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65fb96ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fab5u);}goto L65fab5;}
}
B65fb96:L65fb96:{c.instructions+=5;NFSU2_TR(0x65fb96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fb99:{NFSU2_TR(0x65fb99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65fb9c:{NFSU2_TR(0x65fb9c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B65fb9f:{NFSU2_TR(0x65fb9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65fba2:{NFSU2_TR(0x65fba2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fb6au);}goto L65fb6a;}}
}
B65fba4:L65fba4:{c.instructions+=4;NFSU2_TR(0x65fba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fba7:{NFSU2_TR(0x65fba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fbaa:{NFSU2_TR(0x65fbaa);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B65fbad:{NFSU2_TR(0x65fbad);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fb4eu);}goto L65fb4e;}}
}
B65fbaf:L65fbaf:{c.instructions+=1;NFSU2_TR(0x65fbaf);
{goto L65feb8;}
}
B65fbb4:L65fbb4:{c.instructions+=8;NFSU2_TR(0x65fbb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fbb6:{NFSU2_TR(0x65fbb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65fbb9:{NFSU2_TR(0x65fbb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fbbc:{NFSU2_TR(0x65fbbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65fbbf:{NFSU2_TR(0x65fbbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fbc1:{NFSU2_TR(0x65fbc1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65fbc2:{NFSU2_TR(0x65fbc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fbc5:{NFSU2_TR(0x65fbc5);
if(r1(R+518)){{goto L65fcc8;}}
}
B65fbcb:L65fbcb:{c.instructions+=2;NFSU2_TR(0x65fbcb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65fbcc:{NFSU2_TR(0x65fbcc);
if(r1(R+518)){{goto L65fc54;}}
}
B65fbd2:L65fbd2:{c.instructions+=2;NFSU2_TR(0x65fbd2);
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
B65fbd3:{NFSU2_TR(0x65fbd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65feb8;}}
}
B65fbd9:L65fbd9:{c.instructions+=9;NFSU2_TR(0x65fbd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65fbdc:{NFSU2_TR(0x65fbdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65fbdf:{NFSU2_TR(0x65fbdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fbe2:{NFSU2_TR(0x65fbe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fbe6:{NFSU2_TR(0x65fbe6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fbea:{NFSU2_TR(0x65fbea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fbec:{NFSU2_TR(0x65fbec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65fbee:{NFSU2_TR(0x65fbee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65fbf0:{NFSU2_TR(0x65fbf0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fc43;}}
}
B65fbf2:L65fbf2:{c.instructions+=2;NFSU2_TR(0x65fbf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fbf4:{NFSU2_TR(0x65fbf4);
if(r1(R+518)){{goto L65fc43;}}
}
B65fbf6:L65fbf6:{c.instructions+=3;NFSU2_TR(0x65fbf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fbfa:{NFSU2_TR(0x65fbfa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fbfe:{NFSU2_TR(0x65fbfe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fc35;}}
}
B65fc00:L65fc00:{c.instructions+=1;NFSU2_TR(0x65fc00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fc03:L65fc03:{c.instructions+=2;NFSU2_TR(0x65fc03);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fc05:{NFSU2_TR(0x65fc05);
if(r1(R+518)){{goto L65fc35;}}
}
B65fc07:L65fc07:{c.instructions+=3;NFSU2_TR(0x65fc07);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65fc09:{NFSU2_TR(0x65fc09);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fc0c:{NFSU2_TR(0x65fc0c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fc1f;}}
}
B65fc0e:L65fc0e:{c.instructions+=1;NFSU2_TR(0x65fc0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fc11:L65fc11:{c.instructions+=6;NFSU2_TR(0x65fc11);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65fc13:{NFSU2_TR(0x65fc13);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65fc16:{NFSU2_TR(0x65fc16);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B65fc19:{NFSU2_TR(0x65fc19);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B65fc1a:{NFSU2_TR(0x65fc1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B65fc1d:{NFSU2_TR(0x65fc1d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fc11u);}goto L65fc11;}}
}
B65fc1f:L65fc1f:{c.instructions+=8;NFSU2_TR(0x65fc1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fc23:{NFSU2_TR(0x65fc23);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B65fc26:{NFSU2_TR(0x65fc26);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B65fc27:{NFSU2_TR(0x65fc27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fc2a:{NFSU2_TR(0x65fc2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65fc2d:{NFSU2_TR(0x65fc2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B65fc30:{NFSU2_TR(0x65fc30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65fc33:{NFSU2_TR(0x65fc33);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fc03u);}goto L65fc03;}}
}
B65fc35:L65fc35:{c.instructions+=5;NFSU2_TR(0x65fc35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fc38:{NFSU2_TR(0x65fc38);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B65fc3b:{NFSU2_TR(0x65fc3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fc3e:{NFSU2_TR(0x65fc3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65fc41:{NFSU2_TR(0x65fc41);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fbf2u);}goto L65fbf2;}}
}
B65fc43:L65fc43:{c.instructions+=6;NFSU2_TR(0x65fc43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B65fc45:{NFSU2_TR(0x65fc45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fc48:{NFSU2_TR(0x65fc48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65fc4a:{NFSU2_TR(0x65fc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fc4d:{NFSU2_TR(0x65fc4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65fc4f:{NFSU2_TR(0x65fc4f);
{goto L65fd44;}
}
B65fc54:L65fc54:{c.instructions+=10;NFSU2_TR(0x65fc54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65fc57:{NFSU2_TR(0x65fc57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65fc59:{NFSU2_TR(0x65fc59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65fc5c:{NFSU2_TR(0x65fc5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fc5f:{NFSU2_TR(0x65fc5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65fc61:{NFSU2_TR(0x65fc61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fc65:{NFSU2_TR(0x65fc65);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fc69:{NFSU2_TR(0x65fc69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fc6b:{NFSU2_TR(0x65fc6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fc6e:{NFSU2_TR(0x65fc6e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fd32;}}
}
B65fc74:L65fc74:{c.instructions+=2;NFSU2_TR(0x65fc74);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fc76:{NFSU2_TR(0x65fc76);
if(r1(R+518)){{goto L65fd32;}}
}
B65fc7c:L65fc7c:{c.instructions+=3;NFSU2_TR(0x65fc7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fc80:{NFSU2_TR(0x65fc80);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fc84:{NFSU2_TR(0x65fc84);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fcb7;}}
}
B65fc86:L65fc86:{c.instructions+=3;NFSU2_TR(0x65fc86);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65fc88:{NFSU2_TR(0x65fc88);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65fc8a:{NFSU2_TR(0x65fc8a);
if(r1(R+518)){{goto L65fcb7;}}
}
B65fc8c:L65fc8c:{c.instructions+=2;NFSU2_TR(0x65fc8c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fc8f:{NFSU2_TR(0x65fc8f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fca8;}}
}
B65fc91:L65fc91:{c.instructions+=2;NFSU2_TR(0x65fc91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fc94:{NFSU2_TR(0x65fc94);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B65fc97:L65fc97:{c.instructions+=7;NFSU2_TR(0x65fc97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65fc99:{NFSU2_TR(0x65fc99);
{u32 ea_=u32(r4(R+12)+r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65fc9c:{NFSU2_TR(0x65fc9c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65fc9f:{NFSU2_TR(0x65fc9f);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B65fca2:{NFSU2_TR(0x65fca2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65fca3:{NFSU2_TR(0x65fca3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65fca6:{NFSU2_TR(0x65fca6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fc97u);}goto L65fc97;}}
}
B65fca8:L65fca8:{c.instructions+=6;NFSU2_TR(0x65fca8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B65fcab:{NFSU2_TR(0x65fcab);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65fcac:{NFSU2_TR(0x65fcac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fcaf:{NFSU2_TR(0x65fcaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fcb2:{NFSU2_TR(0x65fcb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65fcb5:{NFSU2_TR(0x65fcb5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fc86u);}goto L65fc86;}}
}
B65fcb7:L65fcb7:{c.instructions+=5;NFSU2_TR(0x65fcb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fcbb:{NFSU2_TR(0x65fcbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fcbe:{NFSU2_TR(0x65fcbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fcc1:{NFSU2_TR(0x65fcc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65fcc4:{NFSU2_TR(0x65fcc4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fc74u);}goto L65fc74;}}
}
B65fcc6:L65fcc6:{c.instructions+=1;NFSU2_TR(0x65fcc6);
{goto L65fd32;}
}
B65fcc8:L65fcc8:{c.instructions+=10;NFSU2_TR(0x65fcc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65fccb:{NFSU2_TR(0x65fccb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65fccd:{NFSU2_TR(0x65fccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65fcd0:{NFSU2_TR(0x65fcd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fcd3:{NFSU2_TR(0x65fcd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65fcd5:{NFSU2_TR(0x65fcd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fcd9:{NFSU2_TR(0x65fcd9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fcdd:{NFSU2_TR(0x65fcdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fcdf:{NFSU2_TR(0x65fcdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fce2:{NFSU2_TR(0x65fce2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fd32;}}
}
B65fce4:L65fce4:{c.instructions+=2;NFSU2_TR(0x65fce4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fce6:{NFSU2_TR(0x65fce6);
if(r1(R+518)){{goto L65fd32;}}
}
B65fce8:L65fce8:{c.instructions+=3;NFSU2_TR(0x65fce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fcec:{NFSU2_TR(0x65fcec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fcf0:{NFSU2_TR(0x65fcf0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fd23;}}
}
B65fcf2:L65fcf2:{c.instructions+=3;NFSU2_TR(0x65fcf2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65fcf4:{NFSU2_TR(0x65fcf4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65fcf6:{NFSU2_TR(0x65fcf6);
if(r1(R+518)){{goto L65fd23;}}
}
B65fcf8:L65fcf8:{c.instructions+=2;NFSU2_TR(0x65fcf8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fcfb:{NFSU2_TR(0x65fcfb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fd14;}}
}
B65fcfd:L65fcfd:{c.instructions+=2;NFSU2_TR(0x65fcfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fd00:{NFSU2_TR(0x65fd00);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B65fd03:L65fd03:{c.instructions+=7;NFSU2_TR(0x65fd03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65fd05:{NFSU2_TR(0x65fd05);
{u32 ea_=u32(r4(R+12)+r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65fd08:{NFSU2_TR(0x65fd08);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65fd0b:{NFSU2_TR(0x65fd0b);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B65fd0e:{NFSU2_TR(0x65fd0e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65fd0f:{NFSU2_TR(0x65fd0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65fd12:{NFSU2_TR(0x65fd12);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fd03u);}goto L65fd03;}}
}
B65fd14:L65fd14:{c.instructions+=6;NFSU2_TR(0x65fd14);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B65fd17:{NFSU2_TR(0x65fd17);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65fd18:{NFSU2_TR(0x65fd18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fd1b:{NFSU2_TR(0x65fd1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fd1e:{NFSU2_TR(0x65fd1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65fd21:{NFSU2_TR(0x65fd21);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fcf2u);}goto L65fcf2;}}
}
B65fd23:L65fd23:{c.instructions+=5;NFSU2_TR(0x65fd23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fd27:{NFSU2_TR(0x65fd27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fd2a:{NFSU2_TR(0x65fd2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fd2d:{NFSU2_TR(0x65fd2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65fd30:{NFSU2_TR(0x65fd30);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fce4u);}goto L65fce4;}}
}
B65fd32:L65fd32:{c.instructions+=7;NFSU2_TR(0x65fd32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fd35:{NFSU2_TR(0x65fd35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65fd37:{NFSU2_TR(0x65fd37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fd3a:{NFSU2_TR(0x65fd3a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65fd3c:{NFSU2_TR(0x65fd3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fd3f:{NFSU2_TR(0x65fd3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65fd42:{NFSU2_TR(0x65fd42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65fd44:L65fd44:{c.instructions+=2;NFSU2_TR(0x65fd44);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+8)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65fd47:{NFSU2_TR(0x65fd47);
{goto L65feb8;}
}
B65fd4c:L65fd4c:{c.instructions+=11;NFSU2_TR(0x65fd4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fd4f:{NFSU2_TR(0x65fd4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fd51:{NFSU2_TR(0x65fd51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fd54:{NFSU2_TR(0x65fd54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65fd56:{NFSU2_TR(0x65fd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fd59:{NFSU2_TR(0x65fd59);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65fd5b:{NFSU2_TR(0x65fd5b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65fd5e:{NFSU2_TR(0x65fd5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fd61:{NFSU2_TR(0x65fd61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fd64:{NFSU2_TR(0x65fd64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fd67:{NFSU2_TR(0x65fd67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65fd74;}}
}
B65fd69:L65fd69:{c.instructions+=5;NFSU2_TR(0x65fd69);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65fd6b:{NFSU2_TR(0x65fd6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65fd6c:{NFSU2_TR(0x65fd6c);
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B65fd6e:{NFSU2_TR(0x65fd6e);
u8 U[23];
w4(U+15,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B65fd71:{NFSU2_TR(0x65fd71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fd74:L65fd74:{c.instructions+=2;NFSU2_TR(0x65fd74);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65fd75:{NFSU2_TR(0x65fd75);
if(r1(R+518)){{goto L65fe47;}}
}
B65fd7b:L65fd7b:{c.instructions+=2;NFSU2_TR(0x65fd7b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65fd7c:{NFSU2_TR(0x65fd7c);
if(r1(R+518)){{goto L65fde6;}}
}
B65fd7e:L65fd7e:{c.instructions+=2;NFSU2_TR(0x65fd7e);
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
B65fd7f:{NFSU2_TR(0x65fd7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65feb8;}}
}
B65fd85:L65fd85:{c.instructions+=9;NFSU2_TR(0x65fd85);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fd88:{NFSU2_TR(0x65fd88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fd8b:{NFSU2_TR(0x65fd8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65fd8d:{NFSU2_TR(0x65fd8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fd90:{NFSU2_TR(0x65fd90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fd93:{NFSU2_TR(0x65fd93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65fd95:{NFSU2_TR(0x65fd95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fd97:{NFSU2_TR(0x65fd97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fd9a:{NFSU2_TR(0x65fd9a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fddf;}}
}
B65fd9c:L65fd9c:{c.instructions+=2;NFSU2_TR(0x65fd9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fd9e:{NFSU2_TR(0x65fd9e);
if(r1(R+518)){{goto L65fddf;}}
}
B65fda0:L65fda0:{c.instructions+=3;NFSU2_TR(0x65fda0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65fda2:{NFSU2_TR(0x65fda2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fda5:{NFSU2_TR(0x65fda5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fdce;}}
}
B65fda7:L65fda7:{c.instructions+=2;NFSU2_TR(0x65fda7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fda9:{NFSU2_TR(0x65fda9);
if(r1(R+518)){{goto L65fdce;}}
}
B65fdab:L65fdab:{c.instructions+=14;NFSU2_TR(0x65fdab);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65fdad:{NFSU2_TR(0x65fdad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65fdb0:{NFSU2_TR(0x65fdb0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B65fdb2:{NFSU2_TR(0x65fdb2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B65fdb5:{NFSU2_TR(0x65fdb5);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65fdb8:{NFSU2_TR(0x65fdb8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65fdb9:{NFSU2_TR(0x65fdb9);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B65fdbc:{NFSU2_TR(0x65fdbc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65fdbd:{NFSU2_TR(0x65fdbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65fdc0:{NFSU2_TR(0x65fdc0);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65fdc3:{NFSU2_TR(0x65fdc3);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B65fdc6:{NFSU2_TR(0x65fdc6);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65fdc9:{NFSU2_TR(0x65fdc9);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B65fdcc:{NFSU2_TR(0x65fdcc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fda7u);}goto L65fda7;}}
}
B65fdce:L65fdce:{c.instructions+=6;NFSU2_TR(0x65fdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fdd1:{NFSU2_TR(0x65fdd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fdd4:{NFSU2_TR(0x65fdd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65fdd7:{NFSU2_TR(0x65fdd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fdda:{NFSU2_TR(0x65fdda);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65fddd:{NFSU2_TR(0x65fddd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fd9cu);}goto L65fd9c;}}
}
B65fddf:L65fddf:{c.instructions+=2;NFSU2_TR(0x65fddf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65fde1:{NFSU2_TR(0x65fde1);
{goto L65fea8;}
}
B65fde6:L65fde6:{c.instructions+=9;NFSU2_TR(0x65fde6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fde9:{NFSU2_TR(0x65fde9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fdec:{NFSU2_TR(0x65fdec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65fdee:{NFSU2_TR(0x65fdee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fdf1:{NFSU2_TR(0x65fdf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fdf4:{NFSU2_TR(0x65fdf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65fdf6:{NFSU2_TR(0x65fdf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fdf8:{NFSU2_TR(0x65fdf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fdfb:{NFSU2_TR(0x65fdfb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fea6;}}
}
B65fe01:L65fe01:{c.instructions+=2;NFSU2_TR(0x65fe01);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fe03:{NFSU2_TR(0x65fe03);
if(r1(R+518)){{goto L65fea6;}}
}
B65fe09:L65fe09:{c.instructions+=3;NFSU2_TR(0x65fe09);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65fe0b:{NFSU2_TR(0x65fe0b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fe0e:{NFSU2_TR(0x65fe0e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fe34;}}
}
B65fe10:L65fe10:{c.instructions+=2;NFSU2_TR(0x65fe10);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fe12:{NFSU2_TR(0x65fe12);
if(r1(R+518)){{goto L65fe34;}}
}
B65fe14:L65fe14:{c.instructions+=3;NFSU2_TR(0x65fe14);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65fe16:{NFSU2_TR(0x65fe16);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fe19:{NFSU2_TR(0x65fe19);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fe27;}}
}
B65fe1b:L65fe1b:{c.instructions+=5;NFSU2_TR(0x65fe1b);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65fe1e:{NFSU2_TR(0x65fe1e);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B65fe21:{NFSU2_TR(0x65fe21);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65fe22:{NFSU2_TR(0x65fe22);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65fe25:{NFSU2_TR(0x65fe25);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fe1bu);}goto L65fe1b;}}
}
B65fe27:L65fe27:{c.instructions+=6;NFSU2_TR(0x65fe27);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B65fe2a:{NFSU2_TR(0x65fe2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65fe2d:{NFSU2_TR(0x65fe2d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65fe2e:{NFSU2_TR(0x65fe2e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65fe2f:{NFSU2_TR(0x65fe2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B65fe32:{NFSU2_TR(0x65fe32);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fe10u);}goto L65fe10;}}
}
B65fe34:L65fe34:{c.instructions+=6;NFSU2_TR(0x65fe34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fe37:{NFSU2_TR(0x65fe37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fe3a:{NFSU2_TR(0x65fe3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65fe3d:{NFSU2_TR(0x65fe3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fe40:{NFSU2_TR(0x65fe40);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65fe43:{NFSU2_TR(0x65fe43);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fe01u);}goto L65fe01;}}
}
B65fe45:L65fe45:{c.instructions+=1;NFSU2_TR(0x65fe45);
{goto L65fea6;}
}
B65fe47:L65fe47:{c.instructions+=9;NFSU2_TR(0x65fe47);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fe4a:{NFSU2_TR(0x65fe4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fe4d:{NFSU2_TR(0x65fe4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65fe4f:{NFSU2_TR(0x65fe4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65fe52:{NFSU2_TR(0x65fe52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fe55:{NFSU2_TR(0x65fe55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65fe57:{NFSU2_TR(0x65fe57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fe59:{NFSU2_TR(0x65fe59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fe5c:{NFSU2_TR(0x65fe5c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fea6;}}
}
B65fe5e:L65fe5e:{c.instructions+=2;NFSU2_TR(0x65fe5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fe60:{NFSU2_TR(0x65fe60);
if(r1(R+518)){{goto L65fea6;}}
}
B65fe62:L65fe62:{c.instructions+=3;NFSU2_TR(0x65fe62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fe66:{NFSU2_TR(0x65fe66);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fe6a:{NFSU2_TR(0x65fe6a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fe95;}}
}
B65fe6c:L65fe6c:{c.instructions+=2;NFSU2_TR(0x65fe6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fe6e:{NFSU2_TR(0x65fe6e);
if(r1(R+518)){{goto L65fe95;}}
}
B65fe70:L65fe70:{c.instructions+=3;NFSU2_TR(0x65fe70);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65fe72:{NFSU2_TR(0x65fe72);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fe75:{NFSU2_TR(0x65fe75);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65fe83;}}
}
B65fe77:L65fe77:{c.instructions+=5;NFSU2_TR(0x65fe77);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65fe7a:{NFSU2_TR(0x65fe7a);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B65fe7d:{NFSU2_TR(0x65fe7d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65fe7e:{NFSU2_TR(0x65fe7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65fe81:{NFSU2_TR(0x65fe81);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fe77u);}goto L65fe77;}}
}
B65fe83:L65fe83:{c.instructions+=7;NFSU2_TR(0x65fe83);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B65fe86:{NFSU2_TR(0x65fe86);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65fe89:{NFSU2_TR(0x65fe89);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65fe8a:{NFSU2_TR(0x65fe8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fe8d:{NFSU2_TR(0x65fe8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fe90:{NFSU2_TR(0x65fe90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65fe93:{NFSU2_TR(0x65fe93);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fe6cu);}goto L65fe6c;}}
}
B65fe95:L65fe95:{c.instructions+=6;NFSU2_TR(0x65fe95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fe98:{NFSU2_TR(0x65fe98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65fe9b:{NFSU2_TR(0x65fe9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65fe9e:{NFSU2_TR(0x65fe9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fea1:{NFSU2_TR(0x65fea1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65fea4:{NFSU2_TR(0x65fea4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65fe5eu);}goto L65fe5e;}}
}
B65fea6:L65fea6:{c.instructions+=1;NFSU2_TR(0x65fea6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65fea8:L65fea8:{c.instructions+=6;NFSU2_TR(0x65fea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65feab:{NFSU2_TR(0x65feab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65fead:{NFSU2_TR(0x65fead);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65feb0:{NFSU2_TR(0x65feb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65feb2:{NFSU2_TR(0x65feb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65feb5:{NFSU2_TR(0x65feb5);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65feb8:L65feb8:{c.instructions+=5;NFSU2_TR(0x65feb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65feb9:{NFSU2_TR(0x65feb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65feba:{NFSU2_TR(0x65feba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65febb:{NFSU2_TR(0x65febb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65febc:{NFSU2_TR(0x65febc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65febf:L65febf:{c.instructions+=10;NFSU2_TR(0x65febf);
__builtin_memmove((R+28),(R+28),4);
}
B65fec1:{NFSU2_TR(0x65fec1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65fec2:{NFSU2_TR(0x65fec2);
__builtin_memmove((R+20),(R+16),4);
}
B65fec4:{NFSU2_TR(0x65fec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B65fec7:{NFSU2_TR(0x65fec7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65fec8:{NFSU2_TR(0x65fec8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65fec9:{NFSU2_TR(0x65fec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65fecc:{NFSU2_TR(0x65fecc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fece:{NFSU2_TR(0x65fece);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65fecf:{NFSU2_TR(0x65fecf);
if(r1(R+518)){{goto L65fedc;}}
}
B65fed1:L65fed1:{c.instructions+=4;NFSU2_TR(0x65fed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fed4:{NFSU2_TR(0x65fed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B65fed7:{NFSU2_TR(0x65fed7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(r2(U+0)));
}
B65feda:{NFSU2_TR(0x65feda);
{goto L65fee7;}
}
B65fedc:L65fedc:{c.instructions+=4;NFSU2_TR(0x65fedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65fedf:{NFSU2_TR(0x65fedf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fee1:{NFSU2_TR(0x65fee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65fee4:{NFSU2_TR(0x65fee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65fee7:L65fee7:{c.instructions+=6;NFSU2_TR(0x65fee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65feea:{NFSU2_TR(0x65feea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65feed:{NFSU2_TR(0x65feed);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65feef:{NFSU2_TR(0x65feef);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65fef0:{NFSU2_TR(0x65fef0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65fef3:{NFSU2_TR(0x65fef3);
if(r1(R+518)){{goto L65fefa;}}
}
B65fef5:L65fef5:{c.instructions+=2;NFSU2_TR(0x65fef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65fef8:{NFSU2_TR(0x65fef8);
{goto L65ff09;}
}
B65fefa:L65fefa:{c.instructions+=5;NFSU2_TR(0x65fefa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65fefc:{NFSU2_TR(0x65fefc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65feff:{NFSU2_TR(0x65feff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ff01:{NFSU2_TR(0x65ff01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ff04:{NFSU2_TR(0x65ff04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65ff09;}}
}
B65ff06:L65ff06:{c.instructions+=1;NFSU2_TR(0x65ff06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ff09:L65ff09:{c.instructions+=2;NFSU2_TR(0x65ff09);
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
B65ff0b:{NFSU2_TR(0x65ff0b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6601feu,660);}
}
B65ff11:L65ff11:{c.instructions+=2;NFSU2_TR(0x65ff11);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ff13:{NFSU2_TR(0x65ff13);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6600c3u,660);}
}
B65ff19:L65ff19:{c.instructions+=2;NFSU2_TR(0x65ff19);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ff1c:{NFSU2_TR(0x65ff1c);
if(r1(R+518)){{goto L65ffc3;}}
}
B65ff22:L65ff22:{c.instructions+=2;NFSU2_TR(0x65ff22);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ff25:{NFSU2_TR(0x65ff25);
if(r1(R+518)){TAIL_STATIC(0x6600c3u,660);}
}
B65ff2b:L65ff2b:{c.instructions+=2;NFSU2_TR(0x65ff2b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B65ff2e:{NFSU2_TR(0x65ff2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6601feu,660);}
}
B65ff34:L65ff34:{c.instructions+=3;NFSU2_TR(0x65ff34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ff38:{NFSU2_TR(0x65ff38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ff3a:{NFSU2_TR(0x65ff3a);
if(r1(R+518)){{goto L65ff44;}}
}
B65ff3c:L65ff3c:{c.instructions+=3;NFSU2_TR(0x65ff3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65ff3f:{NFSU2_TR(0x65ff3f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B65ff41:{NFSU2_TR(0x65ff41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ff44:L65ff44:{c.instructions+=7;NFSU2_TR(0x65ff44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ff46:{NFSU2_TR(0x65ff46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ff4a:{NFSU2_TR(0x65ff4a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65ff4e:{NFSU2_TR(0x65ff4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ff51:{NFSU2_TR(0x65ff51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65ff54:{NFSU2_TR(0x65ff54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B65ff56:{NFSU2_TR(0x65ff56);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6601feu,660);}
}
B65ff5c:L65ff5c:{c.instructions+=4;NFSU2_TR(0x65ff5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ff5f:{NFSU2_TR(0x65ff5f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65ff61:{NFSU2_TR(0x65ff61);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B65ff63:{NFSU2_TR(0x65ff63);
if(r1(R+518)){TAIL_STATIC(0x6601feu,660);}
}
B65ff69:L65ff69:{c.instructions+=4;NFSU2_TR(0x65ff69);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ff6b:{NFSU2_TR(0x65ff6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ff6e:{NFSU2_TR(0x65ff6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65ff70:{NFSU2_TR(0x65ff70);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65ffb3;}}
}
B65ff72:L65ff72:{c.instructions+=4;NFSU2_TR(0x65ff72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ff75:{NFSU2_TR(0x65ff75);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65ff78:{NFSU2_TR(0x65ff78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ff7b:{NFSU2_TR(0x65ff7b);
{goto L65ff80;}
}
B65ff7d:L65ff7d:{c.instructions+=1;NFSU2_TR(0x65ff7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ff80:L65ff80:{c.instructions+=2;NFSU2_TR(0x65ff80);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65ff83:{NFSU2_TR(0x65ff83);
if(r1(R+518)){{goto L65ffb3;}}
}
B65ff85:L65ff85:{c.instructions+=2;NFSU2_TR(0x65ff85);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65ff89:{NFSU2_TR(0x65ff89);
if(r1(R+518)){{goto L65ff93;}}
}
B65ff8b:L65ff8b:{c.instructions+=3;NFSU2_TR(0x65ff8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ff8e:{NFSU2_TR(0x65ff8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ff90:{NFSU2_TR(0x65ff90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ff93:L65ff93:{c.instructions+=8;NFSU2_TR(0x65ff93);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ff95:{NFSU2_TR(0x65ff95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ff96:{NFSU2_TR(0x65ff96);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ff99:{NFSU2_TR(0x65ff99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ff9c:{NFSU2_TR(0x65ff9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ff9f:{NFSU2_TR(0x65ff9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ffa2:{NFSU2_TR(0x65ffa2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ffa5:{NFSU2_TR(0x65ffa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ffaaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65febfu);}goto L65febf;}
}
B65ffaa:L65ffaa:{c.instructions+=4;NFSU2_TR(0x65ffaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ffae:{NFSU2_TR(0x65ffae);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65ffaf:{NFSU2_TR(0x65ffaf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B65ffb1:{NFSU2_TR(0x65ffb1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ff7du);}goto L65ff7d;}}
}
B65ffb3:L65ffb3:{c.instructions+=4;NFSU2_TR(0x65ffb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ffb6:{NFSU2_TR(0x65ffb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ffb9:{NFSU2_TR(0x65ffb9);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B65ffbc:{NFSU2_TR(0x65ffbc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ff5cu);}goto L65ff5c;}}
}
B65ffbe:L65ffbe:{c.instructions+=1;NFSU2_TR(0x65ffbe);
TAIL_STATIC(0x6601feu,660);
}
B65ffc3:L65ffc3:{c.instructions+=6;NFSU2_TR(0x65ffc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ffc5:{NFSU2_TR(0x65ffc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ffc8:{NFSU2_TR(0x65ffc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ffca:{NFSU2_TR(0x65ffca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65ffcb:{NFSU2_TR(0x65ffcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ffce:{NFSU2_TR(0x65ffce);
if(r1(R+518)){TAIL_STATIC(0x66006bu,660);}
}
B65ffd4:L65ffd4:{c.instructions+=2;NFSU2_TR(0x65ffd4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65ffd5:{NFSU2_TR(0x65ffd5);
if(r1(R+518)){TAIL_STATIC(0x660022u,660);}
}
B65ffd7:L65ffd7:{c.instructions+=2;NFSU2_TR(0x65ffd7);
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
B65ffd8:{NFSU2_TR(0x65ffd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6601feu,660);}
}
B65ffde:L65ffde:{c.instructions+=9;NFSU2_TR(0x65ffde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ffe1:{NFSU2_TR(0x65ffe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65ffe3:{NFSU2_TR(0x65ffe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ffe6:{NFSU2_TR(0x65ffe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ffe9:{NFSU2_TR(0x65ffe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ffeb:{NFSU2_TR(0x65ffeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ffed:{NFSU2_TR(0x65ffed);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65ffef:{NFSU2_TR(0x65ffef);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fff2:{NFSU2_TR(0x65fff2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66001bu,660);}
}
B65fff4:L65fff4:{c.instructions+=2;NFSU2_TR(0x65fff4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65fff6:{NFSU2_TR(0x65fff6);
if(r1(R+518)){TAIL_STATIC(0x66001bu,660);}
}
B65fff8:L65fff8:{c.instructions+=3;NFSU2_TR(0x65fff8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65fffa:{NFSU2_TR(0x65fffa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65fffd:{NFSU2_TR(0x65fffd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x660012u,660);}
}
B65ffff:L65ffff:{c.instructions+=1;NFSU2_TR(0x65ffff);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
TAIL_STATIC(0x660001u,660);
}
XIT:NFSU2_TR_EXIT(0x65f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
