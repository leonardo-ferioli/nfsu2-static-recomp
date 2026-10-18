#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4da(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_56e(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x56f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x56f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_56f(u8* __restrict R,Cpu& c);
u32 page_56f(Cpu& c){return body_56f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_56f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x56f002:goto L56f002;
case 0x56f004:c.instructions+=1;goto B56f004;
case 0x56f006:goto L56f006;
case 0x56f007:c.instructions+=3;goto B56f007;
case 0x56f00e:c.instructions+=2;goto B56f00e;
case 0x56f00f:c.instructions+=1;goto B56f00f;
case 0x56f010:goto L56f010;
case 0x56f012:c.instructions+=2;goto B56f012;
case 0x56f015:c.instructions+=1;goto B56f015;
case 0x56f018:goto L56f018;
case 0x56f019:c.instructions+=2;goto B56f019;
case 0x56f01a:c.instructions+=1;goto B56f01a;
case 0x56f020:goto L56f020;
case 0x56f021:c.instructions+=9;goto B56f021;
case 0x56f022:c.instructions+=8;goto B56f022;
case 0x56f024:c.instructions+=7;goto B56f024;
case 0x56f026:c.instructions+=6;goto B56f026;
case 0x56f027:c.instructions+=5;goto B56f027;
case 0x56f029:c.instructions+=4;goto B56f029;
case 0x56f02c:c.instructions+=3;goto B56f02c;
case 0x56f02e:c.instructions+=2;goto B56f02e;
case 0x56f036:c.instructions+=1;goto B56f036;
case 0x56f038:goto L56f038;
case 0x56f03d:c.instructions+=1;goto B56f03d;
case 0x56f03f:goto L56f03f;
case 0x56f044:c.instructions+=1;goto B56f044;
case 0x56f049:goto L56f049;
case 0x56f04b:c.instructions+=2;goto B56f04b;
case 0x56f050:c.instructions+=1;goto B56f050;
case 0x56f052:goto L56f052;
case 0x56f057:goto L56f057;
case 0x56f059:c.instructions+=5;goto B56f059;
case 0x56f05c:c.instructions+=4;goto B56f05c;
case 0x56f060:c.instructions+=3;goto B56f060;
case 0x56f064:c.instructions+=2;goto B56f064;
case 0x56f06a:c.instructions+=1;goto B56f06a;
case 0x56f06e:goto L56f06e;
case 0x56f074:c.instructions+=3;goto B56f074;
case 0x56f077:c.instructions+=2;goto B56f077;
case 0x56f078:c.instructions+=1;goto B56f078;
case 0x56f07a:goto L56f07a;
case 0x56f07c:c.instructions+=1;goto B56f07c;
case 0x56f081:goto L56f081;
case 0x56f083:c.instructions+=1;goto B56f083;
case 0x56f085:goto L56f085;
case 0x56f088:c.instructions+=3;goto B56f088;
case 0x56f08e:c.instructions+=2;goto B56f08e;
case 0x56f090:c.instructions+=1;goto B56f090;
case 0x56f092:goto L56f092;
case 0x56f094:c.instructions+=1;goto B56f094;
case 0x56f099:goto L56f099;
case 0x56f09b:c.instructions+=1;goto B56f09b;
case 0x56f09d:goto L56f09d;
case 0x56f0a3:c.instructions+=2;goto B56f0a3;
case 0x56f0a5:c.instructions+=1;goto B56f0a5;
case 0x56f0a7:goto L56f0a7;
case 0x56f0aa:c.instructions+=3;goto B56f0aa;
case 0x56f0ad:c.instructions+=2;goto B56f0ad;
case 0x56f0af:c.instructions+=1;goto B56f0af;
case 0x56f0b1:goto L56f0b1;
case 0x56f0b7:c.instructions+=4;goto B56f0b7;
case 0x56f0bd:c.instructions+=3;goto B56f0bd;
case 0x56f0bf:c.instructions+=2;goto B56f0bf;
case 0x56f0c2:c.instructions+=1;goto B56f0c2;
case 0x56f0c4:goto L56f0c4;
case 0x56f0c7:c.instructions+=4;goto B56f0c7;
case 0x56f0cd:c.instructions+=3;goto B56f0cd;
case 0x56f0d0:c.instructions+=2;goto B56f0d0;
case 0x56f0d2:c.instructions+=1;goto B56f0d2;
case 0x56f0d4:goto L56f0d4;
case 0x56f0d8:c.instructions+=4;goto B56f0d8;
case 0x56f0de:c.instructions+=3;goto B56f0de;
case 0x56f0e0:c.instructions+=2;goto B56f0e0;
case 0x56f0e3:c.instructions+=1;goto B56f0e3;
case 0x56f0e5:goto L56f0e5;
case 0x56f0e8:c.instructions+=4;goto B56f0e8;
case 0x56f0ee:c.instructions+=3;goto B56f0ee;
case 0x56f0f1:c.instructions+=2;goto B56f0f1;
case 0x56f0f3:c.instructions+=1;goto B56f0f3;
case 0x56f0f5:goto L56f0f5;
case 0x56f0f7:c.instructions+=1;goto B56f0f7;
case 0x56f0f9:goto L56f0f9;
case 0x56f0fb:goto L56f0fb;
case 0x56f0fd:c.instructions+=1;goto B56f0fd;
case 0x56f102:goto L56f102;
case 0x56f105:c.instructions+=9;goto B56f105;
case 0x56f108:c.instructions+=8;goto B56f108;
case 0x56f10a:c.instructions+=7;goto B56f10a;
case 0x56f10c:c.instructions+=6;goto B56f10c;
case 0x56f10e:c.instructions+=5;goto B56f10e;
case 0x56f111:c.instructions+=4;goto B56f111;
case 0x56f115:c.instructions+=3;goto B56f115;
case 0x56f116:c.instructions+=2;goto B56f116;
case 0x56f11c:c.instructions+=1;goto B56f11c;
case 0x56f121:goto L56f121;
case 0x56f125:c.instructions+=3;goto B56f125;
case 0x56f127:c.instructions+=2;goto B56f127;
case 0x56f128:c.instructions+=1;goto B56f128;
case 0x56f12a:goto L56f12a;
case 0x56f130:c.instructions+=3;goto B56f130;
case 0x56f132:c.instructions+=2;goto B56f132;
case 0x56f135:c.instructions+=1;goto B56f135;
case 0x56f137:goto L56f137;
case 0x56f13a:c.instructions+=3;goto B56f13a;
case 0x56f140:c.instructions+=2;goto B56f140;
case 0x56f142:c.instructions+=1;goto B56f142;
case 0x56f144:goto L56f144;
case 0x56f147:c.instructions+=2;goto B56f147;
case 0x56f149:c.instructions+=1;goto B56f149;
case 0x56f14b:goto L56f14b;
case 0x56f14d:c.instructions+=2;goto B56f14d;
case 0x56f152:c.instructions+=1;goto B56f152;
case 0x56f157:goto L56f157;
case 0x56f158:c.instructions+=3;goto B56f158;
case 0x56f159:c.instructions+=2;goto B56f159;
case 0x56f15a:c.instructions+=1;goto B56f15a;
case 0x56f15b:goto L56f15b;
case 0x56f15d:goto L56f15d;
case 0x56f15e:c.instructions+=3;goto B56f15e;
case 0x56f15f:c.instructions+=2;goto B56f15f;
case 0x56f160:c.instructions+=1;goto B56f160;
case 0x56f170:goto L56f170;
case 0x56f171:c.instructions+=15;goto B56f171;
case 0x56f173:c.instructions+=14;goto B56f173;
case 0x56f176:c.instructions+=13;goto B56f176;
case 0x56f179:c.instructions+=12;goto B56f179;
case 0x56f17a:c.instructions+=11;goto B56f17a;
case 0x56f17c:c.instructions+=10;goto B56f17c;
case 0x56f17e:c.instructions+=9;goto B56f17e;
case 0x56f17f:c.instructions+=8;goto B56f17f;
case 0x56f181:c.instructions+=7;goto B56f181;
case 0x56f184:c.instructions+=6;goto B56f184;
case 0x56f185:c.instructions+=5;goto B56f185;
case 0x56f187:c.instructions+=4;goto B56f187;
case 0x56f189:c.instructions+=3;goto B56f189;
case 0x56f18d:c.instructions+=2;goto B56f18d;
case 0x56f195:c.instructions+=1;goto B56f195;
case 0x56f197:goto L56f197;
case 0x56f19c:c.instructions+=1;goto B56f19c;
case 0x56f19e:goto L56f19e;
case 0x56f1a3:c.instructions+=1;goto B56f1a3;
case 0x56f1a8:goto L56f1a8;
case 0x56f1aa:c.instructions+=2;goto B56f1aa;
case 0x56f1af:c.instructions+=1;goto B56f1af;
case 0x56f1b1:goto L56f1b1;
case 0x56f1b6:goto L56f1b6;
case 0x56f1b8:c.instructions+=5;goto B56f1b8;
case 0x56f1bb:c.instructions+=4;goto B56f1bb;
case 0x56f1bf:c.instructions+=3;goto B56f1bf;
case 0x56f1c3:c.instructions+=2;goto B56f1c3;
case 0x56f1c9:c.instructions+=1;goto B56f1c9;
case 0x56f1cd:goto L56f1cd;
case 0x56f1cf:c.instructions+=1;goto B56f1cf;
case 0x56f1d4:goto L56f1d4;
case 0x56f1d6:c.instructions+=1;goto B56f1d6;
case 0x56f1dc:goto L56f1dc;
case 0x56f1e2:c.instructions+=4;goto B56f1e2;
case 0x56f1e8:c.instructions+=3;goto B56f1e8;
case 0x56f1ea:c.instructions+=2;goto B56f1ea;
case 0x56f1ed:c.instructions+=1;goto B56f1ed;
case 0x56f1f3:goto L56f1f3;
case 0x56f1f7:c.instructions+=4;goto B56f1f7;
case 0x56f1fd:c.instructions+=3;goto B56f1fd;
case 0x56f1ff:c.instructions+=2;goto B56f1ff;
case 0x56f202:c.instructions+=1;goto B56f202;
case 0x56f208:goto L56f208;
case 0x56f20c:c.instructions+=2;goto B56f20c;
case 0x56f20e:c.instructions+=1;goto B56f20e;
case 0x56f210:goto L56f210;
case 0x56f211:c.instructions+=1;goto B56f211;
case 0x56f217:goto L56f217;
case 0x56f21a:c.instructions+=4;goto B56f21a;
case 0x56f21d:c.instructions+=3;goto B56f21d;
case 0x56f21e:c.instructions+=2;goto B56f21e;
case 0x56f21f:c.instructions+=1;goto B56f21f;
case 0x56f224:goto L56f224;
case 0x56f227:c.instructions+=2;goto B56f227;
case 0x56f229:c.instructions+=1;goto B56f229;
case 0x56f22b:goto L56f22b;
case 0x56f22e:c.instructions+=1;goto B56f22e;
case 0x56f233:goto L56f233;
case 0x56f236:c.instructions+=2;goto B56f236;
case 0x56f23c:c.instructions+=1;goto B56f23c;
case 0x56f242:goto L56f242;
case 0x56f245:c.instructions+=2;goto B56f245;
case 0x56f249:c.instructions+=1;goto B56f249;
case 0x56f24e:goto L56f24e;
case 0x56f250:c.instructions+=1;goto B56f250;
case 0x56f252:goto L56f252;
case 0x56f258:c.instructions+=5;goto B56f258;
case 0x56f25e:c.instructions+=4;goto B56f25e;
case 0x56f262:c.instructions+=3;goto B56f262;
case 0x56f264:c.instructions+=2;goto B56f264;
case 0x56f267:c.instructions+=1;goto B56f267;
case 0x56f26d:goto L56f26d;
case 0x56f270:c.instructions+=1;goto B56f270;
case 0x56f275:goto L56f275;
case 0x56f279:c.instructions+=6;goto B56f279;
case 0x56f27c:c.instructions+=5;goto B56f27c;
case 0x56f27f:c.instructions+=4;goto B56f27f;
case 0x56f282:c.instructions+=3;goto B56f282;
case 0x56f288:c.instructions+=2;goto B56f288;
case 0x56f28a:c.instructions+=1;goto B56f28a;
case 0x56f28c:goto L56f28c;
case 0x56f292:c.instructions+=1;goto B56f292;
case 0x56f294:goto L56f294;
case 0x56f296:goto L56f296;
case 0x56f29b:c.instructions+=1;goto B56f29b;
case 0x56f2a0:goto L56f2a0;
case 0x56f2a2:c.instructions+=2;goto B56f2a2;
case 0x56f2a6:c.instructions+=1;goto B56f2a6;
case 0x56f2ac:goto L56f2ac;
case 0x56f2b0:goto L56f2b0;
case 0x56f2b2:c.instructions+=1;goto B56f2b2;
case 0x56f2b7:goto L56f2b7;
case 0x56f2b9:c.instructions+=1;goto B56f2b9;
case 0x56f2bf:goto L56f2bf;
case 0x56f2c0:c.instructions+=2;goto B56f2c0;
case 0x56f2c2:c.instructions+=1;goto B56f2c2;
case 0x56f2c7:goto L56f2c7;
case 0x56f2c9:c.instructions+=1;goto B56f2c9;
case 0x56f2cf:goto L56f2cf;
case 0x56f2d5:c.instructions+=3;goto B56f2d5;
case 0x56f2d8:c.instructions+=2;goto B56f2d8;
case 0x56f2da:c.instructions+=1;goto B56f2da;
case 0x56f2e0:goto L56f2e0;
case 0x56f2e6:c.instructions+=3;goto B56f2e6;
case 0x56f2e9:c.instructions+=2;goto B56f2e9;
case 0x56f2eb:c.instructions+=1;goto B56f2eb;
case 0x56f2f1:goto L56f2f1;
case 0x56f2f7:c.instructions+=5;goto B56f2f7;
case 0x56f2fb:c.instructions+=4;goto B56f2fb;
case 0x56f2fd:c.instructions+=3;goto B56f2fd;
case 0x56f303:c.instructions+=2;goto B56f303;
case 0x56f307:c.instructions+=1;goto B56f307;
case 0x56f309:goto L56f309;
case 0x56f30b:c.instructions+=1;goto B56f30b;
case 0x56f311:goto L56f311;
case 0x56f313:c.instructions+=1;goto B56f313;
case 0x56f318:goto L56f318;
case 0x56f31a:c.instructions+=1;goto B56f31a;
case 0x56f320:goto L56f320;
case 0x56f324:c.instructions+=1;goto B56f324;
case 0x56f329:goto L56f329;
case 0x56f32b:c.instructions+=1;goto B56f32b;
case 0x56f331:goto L56f331;
case 0x56f333:c.instructions+=1;goto B56f333;
case 0x56f338:goto L56f338;
case 0x56f33a:c.instructions+=1;goto B56f33a;
case 0x56f340:goto L56f340;
case 0x56f344:c.instructions+=1;goto B56f344;
case 0x56f349:goto L56f349;
case 0x56f34b:c.instructions+=1;goto B56f34b;
case 0x56f351:goto L56f351;
case 0x56f357:c.instructions+=2;goto B56f357;
case 0x56f359:c.instructions+=1;goto B56f359;
case 0x56f35f:goto L56f35f;
case 0x56f363:c.instructions+=3;goto B56f363;
case 0x56f369:c.instructions+=2;goto B56f369;
case 0x56f36b:c.instructions+=1;goto B56f36b;
case 0x56f371:goto L56f371;
case 0x56f375:c.instructions+=3;goto B56f375;
case 0x56f377:c.instructions+=2;goto B56f377;
case 0x56f37b:c.instructions+=1;goto B56f37b;
case 0x56f37d:goto L56f37d;
case 0x56f381:goto L56f381;
case 0x56f387:c.instructions+=2;goto B56f387;
case 0x56f389:c.instructions+=1;goto B56f389;
case 0x56f38b:goto L56f38b;
case 0x56f38e:c.instructions+=4;goto B56f38e;
case 0x56f38f:c.instructions+=3;goto B56f38f;
case 0x56f392:c.instructions+=2;goto B56f392;
case 0x56f393:c.instructions+=1;goto B56f393;
case 0x56f398:goto L56f398;
case 0x56f39e:c.instructions+=4;goto B56f39e;
case 0x56f3a1:c.instructions+=3;goto B56f3a1;
case 0x56f3a3:c.instructions+=2;goto B56f3a3;
case 0x56f3a6:c.instructions+=1;goto B56f3a6;
case 0x56f3a8:goto L56f3a8;
case 0x56f3ac:c.instructions+=1;goto B56f3ac;
case 0x56f3b1:goto L56f3b1;
case 0x56f3b4:c.instructions+=6;goto B56f3b4;
case 0x56f3b8:c.instructions+=5;goto B56f3b8;
case 0x56f3bb:c.instructions+=4;goto B56f3bb;
case 0x56f3c1:c.instructions+=3;goto B56f3c1;
case 0x56f3c3:c.instructions+=2;goto B56f3c3;
case 0x56f3c6:c.instructions+=1;goto B56f3c6;
case 0x56f3c8:goto L56f3c8;
case 0x56f3cc:c.instructions+=1;goto B56f3cc;
case 0x56f3ce:goto L56f3ce;
case 0x56f3d1:c.instructions+=4;goto B56f3d1;
case 0x56f3d7:c.instructions+=3;goto B56f3d7;
case 0x56f3d9:c.instructions+=2;goto B56f3d9;
case 0x56f3dc:c.instructions+=1;goto B56f3dc;
case 0x56f3de:goto L56f3de;
case 0x56f3e4:c.instructions+=3;goto B56f3e4;
case 0x56f3e6:c.instructions+=2;goto B56f3e6;
case 0x56f3ec:c.instructions+=1;goto B56f3ec;
case 0x56f3ef:goto L56f3ef;
case 0x56f3f0:c.instructions+=3;goto B56f3f0;
case 0x56f3f2:c.instructions+=2;goto B56f3f2;
case 0x56f3f4:c.instructions+=1;goto B56f3f4;
case 0x56f3f7:goto L56f3f7;
case 0x56f3f8:c.instructions+=3;goto B56f3f8;
case 0x56f3fc:c.instructions+=2;goto B56f3fc;
case 0x56f3fd:c.instructions+=1;goto B56f3fd;
case 0x56f402:goto L56f402;
case 0x56f406:c.instructions+=2;goto B56f406;
case 0x56f407:c.instructions+=1;goto B56f407;
case 0x56f40c:goto L56f40c;
case 0x56f412:c.instructions+=4;goto B56f412;
case 0x56f415:c.instructions+=3;goto B56f415;
case 0x56f417:c.instructions+=2;goto B56f417;
case 0x56f41a:c.instructions+=1;goto B56f41a;
case 0x56f41c:goto L56f41c;
case 0x56f41e:goto L56f41e;
case 0x56f424:c.instructions+=2;goto B56f424;
case 0x56f426:c.instructions+=1;goto B56f426;
case 0x56f428:goto L56f428;
case 0x56f42e:c.instructions+=1;goto B56f42e;
case 0x56f430:goto L56f430;
case 0x56f432:goto L56f432;
case 0x56f436:c.instructions+=1;goto B56f436;
case 0x56f43c:goto L56f43c;
case 0x56f43e:goto L56f43e;
case 0x56f442:goto L56f442;
case 0x56f445:c.instructions+=5;goto B56f445;
case 0x56f44b:c.instructions+=4;goto B56f44b;
case 0x56f44e:c.instructions+=3;goto B56f44e;
case 0x56f454:c.instructions+=2;goto B56f454;
case 0x56f457:c.instructions+=1;goto B56f457;
case 0x56f459:goto L56f459;
case 0x56f45c:c.instructions+=1;goto B56f45c;
case 0x56f45e:goto L56f45e;
case 0x56f461:c.instructions+=1;goto B56f461;
case 0x56f463:goto L56f463;
case 0x56f466:c.instructions+=2;goto B56f466;
case 0x56f469:c.instructions+=1;goto B56f469;
case 0x56f46c:goto L56f46c;
case 0x56f470:goto L56f470;
case 0x56f474:c.instructions+=1;goto B56f474;
case 0x56f476:goto L56f476;
case 0x56f479:c.instructions+=2;goto B56f479;
case 0x56f47b:c.instructions+=1;goto B56f47b;
case 0x56f47d:goto L56f47d;
case 0x56f480:c.instructions+=2;goto B56f480;
case 0x56f483:c.instructions+=1;goto B56f483;
case 0x56f485:goto L56f485;
case 0x56f488:c.instructions+=1;goto B56f488;
case 0x56f48b:goto L56f48b;
case 0x56f48d:c.instructions+=1;goto B56f48d;
case 0x56f48f:goto L56f48f;
case 0x56f492:c.instructions+=2;goto B56f492;
case 0x56f494:c.instructions+=1;goto B56f494;
case 0x56f496:goto L56f496;
case 0x56f497:c.instructions+=2;goto B56f497;
case 0x56f49c:c.instructions+=1;goto B56f49c;
case 0x56f4a1:goto L56f4a1;
case 0x56f4a5:c.instructions+=4;goto B56f4a5;
case 0x56f4a9:c.instructions+=3;goto B56f4a9;
case 0x56f4ac:c.instructions+=2;goto B56f4ac;
case 0x56f4af:c.instructions+=1;goto B56f4af;
case 0x56f4b2:goto L56f4b2;
case 0x56f4b3:c.instructions+=5;goto B56f4b3;
case 0x56f4b4:c.instructions+=4;goto B56f4b4;
case 0x56f4b5:c.instructions+=3;goto B56f4b5;
case 0x56f4b7:c.instructions+=2;goto B56f4b7;
case 0x56f4b8:c.instructions+=1;goto B56f4b8;
case 0x56f4c0:goto L56f4c0;
case 0x56f4c3:c.instructions+=10;goto B56f4c3;
case 0x56f4c4:c.instructions+=9;goto B56f4c4;
case 0x56f4c5:c.instructions+=8;goto B56f4c5;
case 0x56f4c7:c.instructions+=7;goto B56f4c7;
case 0x56f4c9:c.instructions+=6;goto B56f4c9;
case 0x56f4ca:c.instructions+=5;goto B56f4ca;
case 0x56f4cc:c.instructions+=4;goto B56f4cc;
case 0x56f4cf:c.instructions+=3;goto B56f4cf;
case 0x56f4d1:c.instructions+=2;goto B56f4d1;
case 0x56f4d9:c.instructions+=1;goto B56f4d9;
case 0x56f4de:goto L56f4de;
case 0x56f4e4:c.instructions+=9;goto B56f4e4;
case 0x56f4e6:c.instructions+=8;goto B56f4e6;
case 0x56f4ea:c.instructions+=7;goto B56f4ea;
case 0x56f4f0:c.instructions+=6;goto B56f4f0;
case 0x56f4f4:c.instructions+=5;goto B56f4f4;
case 0x56f4fa:c.instructions+=4;goto B56f4fa;
case 0x56f4fe:c.instructions+=3;goto B56f4fe;
case 0x56f500:c.instructions+=2;goto B56f500;
case 0x56f503:c.instructions+=1;goto B56f503;
case 0x56f505:goto L56f505;
case 0x56f509:c.instructions+=4;goto B56f509;
case 0x56f50f:c.instructions+=3;goto B56f50f;
case 0x56f511:c.instructions+=2;goto B56f511;
case 0x56f514:c.instructions+=1;goto B56f514;
case 0x56f516:goto L56f516;
case 0x56f51d:c.instructions+=1;goto B56f51d;
case 0x56f51f:goto L56f51f;
case 0x56f523:c.instructions+=7;goto B56f523;
case 0x56f527:c.instructions+=6;goto B56f527;
case 0x56f52d:c.instructions+=5;goto B56f52d;
case 0x56f533:c.instructions+=4;goto B56f533;
case 0x56f535:c.instructions+=3;goto B56f535;
case 0x56f537:c.instructions+=2;goto B56f537;
case 0x56f53a:c.instructions+=1;goto B56f53a;
case 0x56f53c:goto L56f53c;
case 0x56f53e:c.instructions+=2;goto B56f53e;
case 0x56f546:c.instructions+=1;goto B56f546;
case 0x56f548:goto L56f548;
case 0x56f54c:goto L56f54c;
case 0x56f54f:c.instructions+=3;goto B56f54f;
case 0x56f552:c.instructions+=2;goto B56f552;
case 0x56f554:c.instructions+=1;goto B56f554;
case 0x56f557:goto L56f557;
case 0x56f55a:c.instructions+=3;goto B56f55a;
case 0x56f560:c.instructions+=2;goto B56f560;
case 0x56f562:c.instructions+=1;goto B56f562;
case 0x56f564:goto L56f564;
case 0x56f569:c.instructions+=1;goto B56f569;
case 0x56f56b:goto L56f56b;
case 0x56f570:c.instructions+=2;goto B56f570;
case 0x56f572:c.instructions+=1;goto B56f572;
case 0x56f577:goto L56f577;
case 0x56f579:c.instructions+=2;goto B56f579;
case 0x56f57e:c.instructions+=1;goto B56f57e;
case 0x56f580:goto L56f580;
case 0x56f585:goto L56f585;
case 0x56f587:c.instructions+=4;goto B56f587;
case 0x56f58a:c.instructions+=3;goto B56f58a;
case 0x56f58e:c.instructions+=2;goto B56f58e;
case 0x56f592:c.instructions+=1;goto B56f592;
case 0x56f598:goto L56f598;
case 0x56f59e:c.instructions+=3;goto B56f59e;
case 0x56f5a0:c.instructions+=2;goto B56f5a0;
case 0x56f5a3:c.instructions+=1;goto B56f5a3;
case 0x56f5a5:goto L56f5a5;
case 0x56f5a8:c.instructions+=4;goto B56f5a8;
case 0x56f5ae:c.instructions+=3;goto B56f5ae;
case 0x56f5b0:c.instructions+=2;goto B56f5b0;
case 0x56f5b3:c.instructions+=1;goto B56f5b3;
case 0x56f5b5:goto L56f5b5;
case 0x56f5b8:c.instructions+=3;goto B56f5b8;
case 0x56f5be:c.instructions+=2;goto B56f5be;
case 0x56f5c0:c.instructions+=1;goto B56f5c0;
case 0x56f5c2:goto L56f5c2;
case 0x56f5c5:c.instructions+=2;goto B56f5c5;
case 0x56f5c7:c.instructions+=1;goto B56f5c7;
case 0x56f5c9:goto L56f5c9;
case 0x56f5cc:c.instructions+=2;goto B56f5cc;
case 0x56f5ce:c.instructions+=1;goto B56f5ce;
case 0x56f5d0:goto L56f5d0;
case 0x56f5d3:c.instructions+=1;goto B56f5d3;
case 0x56f5d5:goto L56f5d5;
case 0x56f5d7:c.instructions+=1;goto B56f5d7;
case 0x56f5dc:goto L56f5dc;
case 0x56f5dd:c.instructions+=4;goto B56f5dd;
case 0x56f5de:c.instructions+=3;goto B56f5de;
case 0x56f5df:c.instructions+=2;goto B56f5df;
case 0x56f5e2:c.instructions+=1;goto B56f5e2;
case 0x56f5e3:goto L56f5e3;
case 0x56f5e5:c.instructions+=1;goto B56f5e5;
case 0x56f5e7:goto L56f5e7;
case 0x56f5ea:c.instructions+=3;goto B56f5ea;
case 0x56f5f0:c.instructions+=2;goto B56f5f0;
case 0x56f5f2:c.instructions+=1;goto B56f5f2;
case 0x56f5f4:goto L56f5f4;
case 0x56f5f7:c.instructions+=2;goto B56f5f7;
case 0x56f5f9:c.instructions+=1;goto B56f5f9;
case 0x56f5fb:goto L56f5fb;
case 0x56f601:c.instructions+=5;goto B56f601;
case 0x56f605:c.instructions+=4;goto B56f605;
case 0x56f606:c.instructions+=3;goto B56f606;
case 0x56f609:c.instructions+=2;goto B56f609;
case 0x56f60a:c.instructions+=1;goto B56f60a;
case 0x56f60f:goto L56f60f;
case 0x56f610:c.instructions+=4;goto B56f610;
case 0x56f611:c.instructions+=3;goto B56f611;
case 0x56f612:c.instructions+=2;goto B56f612;
case 0x56f615:c.instructions+=1;goto B56f615;
case 0x56f620:goto L56f620;
case 0x56f623:c.instructions+=16;goto B56f623;
case 0x56f624:c.instructions+=15;goto B56f624;
case 0x56f626:c.instructions+=14;goto B56f626;
case 0x56f628:c.instructions+=13;goto B56f628;
case 0x56f629:c.instructions+=12;goto B56f629;
case 0x56f62b:c.instructions+=11;goto B56f62b;
case 0x56f632:c.instructions+=10;goto B56f632;
case 0x56f635:c.instructions+=9;goto B56f635;
case 0x56f637:c.instructions+=8;goto B56f637;
case 0x56f63b:c.instructions+=7;goto B56f63b;
case 0x56f63f:c.instructions+=6;goto B56f63f;
case 0x56f645:c.instructions+=5;goto B56f645;
case 0x56f649:c.instructions+=4;goto B56f649;
case 0x56f64f:c.instructions+=3;goto B56f64f;
case 0x56f651:c.instructions+=2;goto B56f651;
case 0x56f655:c.instructions+=1;goto B56f655;
case 0x56f657:goto L56f657;
case 0x56f65c:c.instructions+=1;goto B56f65c;
case 0x56f65e:goto L56f65e;
case 0x56f663:c.instructions+=1;goto B56f663;
case 0x56f668:goto L56f668;
case 0x56f66f:c.instructions+=2;goto B56f66f;
case 0x56f670:c.instructions+=1;goto B56f670;
case 0x56f672:goto L56f672;
case 0x56f675:c.instructions+=2;goto B56f675;
case 0x56f677:c.instructions+=1;goto B56f677;
case 0x56f679:goto L56f679;
case 0x56f67d:c.instructions+=4;goto B56f67d;
case 0x56f683:c.instructions+=3;goto B56f683;
case 0x56f685:c.instructions+=2;goto B56f685;
case 0x56f688:c.instructions+=1;goto B56f688;
case 0x56f68a:goto L56f68a;
case 0x56f68c:goto L56f68c;
case 0x56f68e:goto L56f68e;
case 0x56f692:c.instructions+=4;goto B56f692;
case 0x56f698:c.instructions+=3;goto B56f698;
case 0x56f69a:c.instructions+=2;goto B56f69a;
case 0x56f69d:c.instructions+=1;goto B56f69d;
case 0x56f69f:goto L56f69f;
case 0x56f6a1:c.instructions+=1;goto B56f6a1;
case 0x56f6a3:goto L56f6a3;
case 0x56f6a5:goto L56f6a5;
case 0x56f6a8:c.instructions+=1;goto B56f6a8;
case 0x56f6aa:goto L56f6aa;
case 0x56f6ad:c.instructions+=4;goto B56f6ad;
case 0x56f6b1:c.instructions+=3;goto B56f6b1;
case 0x56f6b2:c.instructions+=2;goto B56f6b2;
case 0x56f6b3:c.instructions+=1;goto B56f6b3;
case 0x56f6b8:goto L56f6b8;
case 0x56f6ba:c.instructions+=5;goto B56f6ba;
case 0x56f6c0:c.instructions+=4;goto B56f6c0;
case 0x56f6c3:c.instructions+=3;goto B56f6c3;
case 0x56f6c5:c.instructions+=2;goto B56f6c5;
case 0x56f6c8:c.instructions+=1;goto B56f6c8;
case 0x56f6ca:goto L56f6ca;
case 0x56f6ce:c.instructions+=4;goto B56f6ce;
case 0x56f6d0:c.instructions+=3;goto B56f6d0;
case 0x56f6d3:c.instructions+=2;goto B56f6d3;
case 0x56f6d6:c.instructions+=1;goto B56f6d6;
case 0x56f6d8:goto L56f6d8;
case 0x56f6dc:c.instructions+=4;goto B56f6dc;
case 0x56f6de:c.instructions+=3;goto B56f6de;
case 0x56f6e1:c.instructions+=2;goto B56f6e1;
case 0x56f6e4:c.instructions+=1;goto B56f6e4;
case 0x56f6e6:goto L56f6e6;
case 0x56f6ea:goto L56f6ea;
case 0x56f6ee:c.instructions+=2;goto B56f6ee;
case 0x56f6ef:c.instructions+=1;goto B56f6ef;
case 0x56f6f1:goto L56f6f1;
case 0x56f6f4:c.instructions+=3;goto B56f6f4;
case 0x56f6f7:c.instructions+=2;goto B56f6f7;
case 0x56f6f9:c.instructions+=1;goto B56f6f9;
case 0x56f6fb:goto L56f6fb;
case 0x56f6fe:c.instructions+=2;goto B56f6fe;
case 0x56f700:c.instructions+=1;goto B56f700;
case 0x56f702:goto L56f702;
case 0x56f704:c.instructions+=2;goto B56f704;
case 0x56f709:c.instructions+=1;goto B56f709;
case 0x56f70e:goto L56f70e;
case 0x56f712:goto L56f712;
case 0x56f713:c.instructions+=3;goto B56f713;
case 0x56f714:c.instructions+=2;goto B56f714;
case 0x56f717:c.instructions+=1;goto B56f717;
case 0x56f720:goto L56f720;
case 0x56f725:c.instructions+=9;goto B56f725;
case 0x56f72b:c.instructions+=8;goto B56f72b;
case 0x56f72e:c.instructions+=7;goto B56f72e;
case 0x56f730:c.instructions+=6;goto B56f730;
case 0x56f731:c.instructions+=5;goto B56f731;
case 0x56f733:c.instructions+=4;goto B56f733;
case 0x56f735:c.instructions+=3;goto B56f735;
case 0x56f736:c.instructions+=2;goto B56f736;
case 0x56f738:c.instructions+=1;goto B56f738;
case 0x56f73e:goto L56f73e;
case 0x56f740:c.instructions+=1;goto B56f740;
case 0x56f742:goto L56f742;
case 0x56f745:c.instructions+=1;goto B56f745;
case 0x56f747:goto L56f747;
case 0x56f74c:c.instructions+=8;goto B56f74c;
case 0x56f74d:c.instructions+=7;goto B56f74d;
case 0x56f753:c.instructions+=6;goto B56f753;
case 0x56f755:c.instructions+=5;goto B56f755;
case 0x56f75b:c.instructions+=4;goto B56f75b;
case 0x56f761:c.instructions+=3;goto B56f761;
case 0x56f764:c.instructions+=2;goto B56f764;
case 0x56f765:c.instructions+=1;goto B56f765;
case 0x56f767:goto L56f767;
case 0x56f76a:c.instructions+=5;goto B56f76a;
case 0x56f770:c.instructions+=4;goto B56f770;
case 0x56f776:c.instructions+=3;goto B56f776;
case 0x56f778:c.instructions+=2;goto B56f778;
case 0x56f77b:c.instructions+=1;goto B56f77b;
case 0x56f77d:goto L56f77d;
case 0x56f783:c.instructions+=3;goto B56f783;
case 0x56f785:c.instructions+=2;goto B56f785;
case 0x56f788:c.instructions+=1;goto B56f788;
case 0x56f78a:goto L56f78a;
case 0x56f78e:c.instructions+=1;goto B56f78e;
case 0x56f790:goto L56f790;
case 0x56f796:c.instructions+=4;goto B56f796;
case 0x56f79c:c.instructions+=3;goto B56f79c;
case 0x56f79e:c.instructions+=2;goto B56f79e;
case 0x56f7a1:c.instructions+=1;goto B56f7a1;
case 0x56f7a3:goto L56f7a3;
case 0x56f7a6:c.instructions+=4;goto B56f7a6;
case 0x56f7a8:c.instructions+=3;goto B56f7a8;
case 0x56f7ad:c.instructions+=2;goto B56f7ad;
case 0x56f7af:c.instructions+=1;goto B56f7af;
case 0x56f7b4:goto L56f7b4;
case 0x56f7ba:c.instructions+=1;goto B56f7ba;
case 0x56f7bc:goto L56f7bc;
case 0x56f7be:goto L56f7be;
case 0x56f7c1:c.instructions+=5;goto B56f7c1;
case 0x56f7c7:c.instructions+=4;goto B56f7c7;
case 0x56f7cd:c.instructions+=3;goto B56f7cd;
case 0x56f7cf:c.instructions+=2;goto B56f7cf;
case 0x56f7d2:c.instructions+=1;goto B56f7d2;
case 0x56f7d4:goto L56f7d4;
case 0x56f7d7:c.instructions+=2;goto B56f7d7;
case 0x56f7d9:c.instructions+=1;goto B56f7d9;
case 0x56f7db:goto L56f7db;
case 0x56f7dd:c.instructions+=2;goto B56f7dd;
case 0x56f7e1:c.instructions+=1;goto B56f7e1;
case 0x56f7e4:goto L56f7e4;
case 0x56f7e7:c.instructions+=2;goto B56f7e7;
case 0x56f7ea:c.instructions+=1;goto B56f7ea;
case 0x56f7ec:goto L56f7ec;
case 0x56f7ee:c.instructions+=9;goto B56f7ee;
case 0x56f7f1:c.instructions+=8;goto B56f7f1;
case 0x56f7f4:c.instructions+=7;goto B56f7f4;
case 0x56f7f6:c.instructions+=6;goto B56f7f6;
case 0x56f7fe:c.instructions+=5;goto B56f7fe;
case 0x56f806:c.instructions+=4;goto B56f806;
case 0x56f80e:c.instructions+=3;goto B56f80e;
case 0x56f816:c.instructions+=2;goto B56f816;
case 0x56f81e:c.instructions+=1;goto B56f81e;
case 0x56f820:goto L56f820;
case 0x56f823:c.instructions+=1;goto B56f823;
case 0x56f825:goto L56f825;
case 0x56f829:c.instructions+=5;goto B56f829;
case 0x56f82c:c.instructions+=4;goto B56f82c;
case 0x56f82f:c.instructions+=3;goto B56f82f;
case 0x56f832:c.instructions+=2;goto B56f832;
case 0x56f834:c.instructions+=1;goto B56f834;
case 0x56f836:goto L56f836;
case 0x56f839:c.instructions+=2;goto B56f839;
case 0x56f83b:c.instructions+=1;goto B56f83b;
case 0x56f83d:goto L56f83d;
case 0x56f83f:c.instructions+=2;goto B56f83f;
case 0x56f844:c.instructions+=1;goto B56f844;
case 0x56f849:goto L56f849;
case 0x56f84f:c.instructions+=4;goto B56f84f;
case 0x56f855:c.instructions+=3;goto B56f855;
case 0x56f857:c.instructions+=2;goto B56f857;
case 0x56f85a:c.instructions+=1;goto B56f85a;
case 0x56f85c:goto L56f85c;
case 0x56f862:c.instructions+=4;goto B56f862;
case 0x56f868:c.instructions+=3;goto B56f868;
case 0x56f86a:c.instructions+=2;goto B56f86a;
case 0x56f86d:c.instructions+=1;goto B56f86d;
case 0x56f86f:goto L56f86f;
case 0x56f872:c.instructions+=3;goto B56f872;
case 0x56f878:c.instructions+=2;goto B56f878;
case 0x56f87a:c.instructions+=1;goto B56f87a;
case 0x56f87c:goto L56f87c;
case 0x56f87f:c.instructions+=2;goto B56f87f;
case 0x56f881:c.instructions+=1;goto B56f881;
case 0x56f883:goto L56f883;
case 0x56f889:c.instructions+=3;goto B56f889;
case 0x56f88b:c.instructions+=2;goto B56f88b;
case 0x56f88c:c.instructions+=1;goto B56f88c;
case 0x56f891:goto L56f891;
case 0x56f897:c.instructions+=6;goto B56f897;
case 0x56f89d:c.instructions+=5;goto B56f89d;
case 0x56f89f:c.instructions+=4;goto B56f89f;
case 0x56f8a1:c.instructions+=3;goto B56f8a1;
case 0x56f8a3:c.instructions+=2;goto B56f8a3;
case 0x56f8a6:c.instructions+=1;goto B56f8a6;
case 0x56f8a8:goto L56f8a8;
case 0x56f8ab:c.instructions+=3;goto B56f8ab;
case 0x56f8b1:c.instructions+=2;goto B56f8b1;
case 0x56f8b3:c.instructions+=1;goto B56f8b3;
case 0x56f8b5:goto L56f8b5;
case 0x56f8b8:c.instructions+=2;goto B56f8b8;
case 0x56f8ba:c.instructions+=1;goto B56f8ba;
case 0x56f8bc:goto L56f8bc;
case 0x56f8be:c.instructions+=2;goto B56f8be;
case 0x56f8c3:c.instructions+=1;goto B56f8c3;
case 0x56f8c8:goto L56f8c8;
case 0x56f8cb:c.instructions+=3;goto B56f8cb;
case 0x56f8d1:c.instructions+=2;goto B56f8d1;
case 0x56f8d3:c.instructions+=1;goto B56f8d3;
case 0x56f8d5:goto L56f8d5;
case 0x56f8da:c.instructions+=1;goto B56f8da;
case 0x56f8dc:goto L56f8dc;
case 0x56f8e1:c.instructions+=2;goto B56f8e1;
case 0x56f8e3:c.instructions+=1;goto B56f8e3;
case 0x56f8e8:goto L56f8e8;
case 0x56f8ea:c.instructions+=2;goto B56f8ea;
case 0x56f8ef:c.instructions+=1;goto B56f8ef;
case 0x56f8f1:goto L56f8f1;
case 0x56f8f6:goto L56f8f6;
case 0x56f8f8:c.instructions+=4;goto B56f8f8;
case 0x56f8fb:c.instructions+=3;goto B56f8fb;
case 0x56f8ff:c.instructions+=2;goto B56f8ff;
case 0x56f903:c.instructions+=1;goto B56f903;
case 0x56f909:goto L56f909;
case 0x56f90f:c.instructions+=3;goto B56f90f;
case 0x56f911:c.instructions+=2;goto B56f911;
case 0x56f914:c.instructions+=1;goto B56f914;
case 0x56f916:goto L56f916;
case 0x56f919:c.instructions+=4;goto B56f919;
case 0x56f91f:c.instructions+=3;goto B56f91f;
case 0x56f921:c.instructions+=2;goto B56f921;
case 0x56f924:c.instructions+=1;goto B56f924;
case 0x56f926:goto L56f926;
case 0x56f929:c.instructions+=3;goto B56f929;
case 0x56f92f:c.instructions+=2;goto B56f92f;
case 0x56f931:c.instructions+=1;goto B56f931;
case 0x56f933:goto L56f933;
case 0x56f936:c.instructions+=2;goto B56f936;
case 0x56f938:c.instructions+=1;goto B56f938;
case 0x56f93a:goto L56f93a;
case 0x56f93d:c.instructions+=2;goto B56f93d;
case 0x56f93f:c.instructions+=1;goto B56f93f;
case 0x56f941:goto L56f941;
case 0x56f944:c.instructions+=1;goto B56f944;
case 0x56f946:goto L56f946;
case 0x56f948:c.instructions+=1;goto B56f948;
case 0x56f94d:goto L56f94d;
case 0x56f94e:c.instructions+=3;goto B56f94e;
case 0x56f94f:c.instructions+=2;goto B56f94f;
case 0x56f952:c.instructions+=1;goto B56f952;
case 0x56f960:goto L56f960;
case 0x56f961:c.instructions+=9;goto B56f961;
case 0x56f963:c.instructions+=8;goto B56f963;
case 0x56f965:c.instructions+=7;goto B56f965;
case 0x56f967:c.instructions+=6;goto B56f967;
case 0x56f969:c.instructions+=5;goto B56f969;
case 0x56f96b:c.instructions+=4;goto B56f96b;
case 0x56f970:c.instructions+=3;goto B56f970;
case 0x56f971:c.instructions+=2;goto B56f971;
case 0x56f976:c.instructions+=1;goto B56f976;
case 0x56f97b:goto L56f97b;
case 0x56f97d:c.instructions+=1;goto B56f97d;
case 0x56f97f:goto L56f97f;
case 0x56f984:c.instructions+=1;goto B56f984;
case 0x56f986:goto L56f986;
case 0x56f98c:c.instructions+=4;goto B56f98c;
case 0x56f98f:c.instructions+=3;goto B56f98f;
case 0x56f992:c.instructions+=2;goto B56f992;
case 0x56f994:c.instructions+=1;goto B56f994;
case 0x56f996:goto L56f996;
case 0x56f999:c.instructions+=2;goto B56f999;
case 0x56f99b:c.instructions+=1;goto B56f99b;
case 0x56f99d:goto L56f99d;
case 0x56f99f:c.instructions+=2;goto B56f99f;
case 0x56f9a4:c.instructions+=1;goto B56f9a4;
case 0x56f9a9:goto L56f9a9;
case 0x56f9aa:c.instructions+=1;goto B56f9aa;
case 0x56f9b0:goto L56f9b0;
case 0x56f9b1:c.instructions+=10;goto B56f9b1;
case 0x56f9b2:c.instructions+=9;goto B56f9b2;
case 0x56f9b3:c.instructions+=8;goto B56f9b3;
case 0x56f9b4:c.instructions+=7;goto B56f9b4;
case 0x56f9b6:c.instructions+=6;goto B56f9b6;
case 0x56f9b8:c.instructions+=5;goto B56f9b8;
case 0x56f9ba:c.instructions+=4;goto B56f9ba;
case 0x56f9bb:c.instructions+=3;goto B56f9bb;
case 0x56f9bd:c.instructions+=2;goto B56f9bd;
case 0x56f9bf:c.instructions+=1;goto B56f9bf;
case 0x56f9c3:goto L56f9c3;
case 0x56f9ca:c.instructions+=2;goto B56f9ca;
case 0x56f9cc:c.instructions+=1;goto B56f9cc;
case 0x56f9ce:goto L56f9ce;
case 0x56f9cf:goto L56f9cf;
case 0x56f9d0:c.instructions+=2;goto B56f9d0;
case 0x56f9d2:c.instructions+=1;goto B56f9d2;
case 0x56f9d7:goto L56f9d7;
case 0x56f9da:c.instructions+=1;goto B56f9da;
case 0x56f9dc:goto L56f9dc;
case 0x56f9dd:c.instructions+=2;goto B56f9dd;
case 0x56f9df:c.instructions+=1;goto B56f9df;
case 0x56f9e4:goto L56f9e4;
case 0x56f9e7:c.instructions+=1;goto B56f9e7;
case 0x56f9e9:goto L56f9e9;
case 0x56f9ed:goto L56f9ed;
case 0x56f9ee:c.instructions+=2;goto B56f9ee;
case 0x56f9f1:c.instructions+=1;goto B56f9f1;
case 0x56f9f3:goto L56f9f3;
case 0x56f9f6:c.instructions+=1;goto B56f9f6;
case 0x56f9f8:goto L56f9f8;
case 0x56f9fb:c.instructions+=3;goto B56f9fb;
case 0x56fa01:c.instructions+=2;goto B56fa01;
case 0x56fa03:c.instructions+=1;goto B56fa03;
case 0x56fa05:goto L56fa05;
case 0x56fa08:c.instructions+=2;goto B56fa08;
case 0x56fa0a:c.instructions+=1;goto B56fa0a;
case 0x56fa0c:goto L56fa0c;
case 0x56fa0e:c.instructions+=2;goto B56fa0e;
case 0x56fa13:c.instructions+=1;goto B56fa13;
case 0x56fa18:goto L56fa18;
case 0x56fa1c:c.instructions+=2;goto B56fa1c;
case 0x56fa1e:c.instructions+=1;goto B56fa1e;
case 0x56fa20:goto L56fa20;
case 0x56fa22:c.instructions+=1;goto B56fa22;
case 0x56fa27:goto L56fa27;
case 0x56fa29:c.instructions+=1;goto B56fa29;
case 0x56fa2b:goto L56fa2b;
case 0x56fa2e:c.instructions+=3;goto B56fa2e;
case 0x56fa34:c.instructions+=2;goto B56fa34;
case 0x56fa36:c.instructions+=1;goto B56fa36;
case 0x56fa38:goto L56fa38;
case 0x56fa3b:c.instructions+=2;goto B56fa3b;
case 0x56fa3d:c.instructions+=1;goto B56fa3d;
case 0x56fa3f:goto L56fa3f;
case 0x56fa43:c.instructions+=5;goto B56fa43;
case 0x56fa45:c.instructions+=4;goto B56fa45;
case 0x56fa46:c.instructions+=3;goto B56fa46;
case 0x56fa4c:c.instructions+=2;goto B56fa4c;
case 0x56fa4f:c.instructions+=1;goto B56fa4f;
case 0x56fa54:goto L56fa54;
case 0x56fa55:c.instructions+=5;goto B56fa55;
case 0x56fa56:c.instructions+=4;goto B56fa56;
case 0x56fa57:c.instructions+=3;goto B56fa57;
case 0x56fa58:c.instructions+=2;goto B56fa58;
case 0x56fa59:c.instructions+=1;goto B56fa59;
case 0x56fa60:goto L56fa60;
case 0x56fa61:c.instructions+=6;goto B56fa61;
case 0x56fa63:c.instructions+=5;goto B56fa63;
case 0x56fa65:c.instructions+=4;goto B56fa65;
case 0x56fa66:c.instructions+=3;goto B56fa66;
case 0x56fa68:c.instructions+=2;goto B56fa68;
case 0x56fa6f:c.instructions+=1;goto B56fa6f;
case 0x56fa75:goto L56fa75;
case 0x56fa7a:goto L56fa7a;
case 0x56fa80:c.instructions+=3;goto B56fa80;
case 0x56fa82:c.instructions+=2;goto B56fa82;
case 0x56fa85:c.instructions+=1;goto B56fa85;
case 0x56fa8b:goto L56fa8b;
case 0x56fa8e:c.instructions+=4;goto B56fa8e;
case 0x56fa94:c.instructions+=3;goto B56fa94;
case 0x56fa97:c.instructions+=2;goto B56fa97;
case 0x56fa9a:c.instructions+=1;goto B56fa9a;
case 0x56fa9c:goto L56fa9c;
case 0x56fa9d:c.instructions+=1;goto B56fa9d;
case 0x56fa9f:goto L56fa9f;
case 0x56faa5:c.instructions+=4;goto B56faa5;
case 0x56faab:c.instructions+=3;goto B56faab;
case 0x56faad:c.instructions+=2;goto B56faad;
case 0x56fab0:c.instructions+=1;goto B56fab0;
case 0x56fab2:goto L56fab2;
case 0x56fab6:goto L56fab6;
case 0x56fab8:goto L56fab8;
case 0x56fabc:c.instructions+=1;goto B56fabc;
case 0x56fabe:goto L56fabe;
case 0x56fac1:c.instructions+=3;goto B56fac1;
case 0x56fac4:c.instructions+=2;goto B56fac4;
case 0x56fac6:c.instructions+=1;goto B56fac6;
case 0x56fac8:goto L56fac8;
case 0x56facb:c.instructions+=2;goto B56facb;
case 0x56facd:c.instructions+=1;goto B56facd;
case 0x56facf:goto L56facf;
case 0x56fad1:c.instructions+=2;goto B56fad1;
case 0x56fad6:c.instructions+=1;goto B56fad6;
case 0x56fadb:goto L56fadb;
case 0x56fadf:goto L56fadf;
case 0x56fae0:c.instructions+=2;goto B56fae0;
case 0x56fae1:c.instructions+=1;goto B56fae1;
case 0x56fae2:goto L56fae2;
case 0x56fae8:c.instructions+=3;goto B56fae8;
case 0x56faea:c.instructions+=2;goto B56faea;
case 0x56faed:c.instructions+=1;goto B56faed;
case 0x56faef:goto L56faef;
case 0x56faf1:c.instructions+=2;goto B56faf1;
case 0x56faf4:c.instructions+=1;goto B56faf4;
case 0x56faf6:goto L56faf6;
case 0x56fafc:c.instructions+=6;goto B56fafc;
case 0x56fafe:c.instructions+=5;goto B56fafe;
case 0x56fb00:c.instructions+=4;goto B56fb00;
case 0x56fb02:c.instructions+=3;goto B56fb02;
case 0x56fb04:c.instructions+=2;goto B56fb04;
case 0x56fb07:c.instructions+=1;goto B56fb07;
case 0x56fb09:goto L56fb09;
case 0x56fb0b:c.instructions+=2;goto B56fb0b;
case 0x56fb0e:c.instructions+=1;goto B56fb0e;
case 0x56fb10:goto L56fb10;
case 0x56fb14:c.instructions+=1;goto B56fb14;
case 0x56fb20:goto L56fb20;
case 0x56fb23:c.instructions+=9;goto B56fb23;
case 0x56fb24:c.instructions+=8;goto B56fb24;
case 0x56fb25:c.instructions+=7;goto B56fb25;
case 0x56fb29:c.instructions+=6;goto B56fb29;
case 0x56fb2c:c.instructions+=5;goto B56fb2c;
case 0x56fb2e:c.instructions+=4;goto B56fb2e;
case 0x56fb34:c.instructions+=3;goto B56fb34;
case 0x56fb36:c.instructions+=2;goto B56fb36;
case 0x56fb39:c.instructions+=1;goto B56fb39;
case 0x56fb3f:goto L56fb3f;
case 0x56fb44:c.instructions+=8;goto B56fb44;
case 0x56fb47:c.instructions+=7;goto B56fb47;
case 0x56fb4b:c.instructions+=6;goto B56fb4b;
case 0x56fb4f:c.instructions+=5;goto B56fb4f;
case 0x56fb55:c.instructions+=4;goto B56fb55;
case 0x56fb5b:c.instructions+=3;goto B56fb5b;
case 0x56fb5d:c.instructions+=2;goto B56fb5d;
case 0x56fb60:c.instructions+=1;goto B56fb60;
case 0x56fb66:goto L56fb66;
case 0x56fb67:c.instructions+=2;goto B56fb67;
case 0x56fb69:c.instructions+=1;goto B56fb69;
case 0x56fb6e:goto L56fb6e;
case 0x56fb70:c.instructions+=2;goto B56fb70;
case 0x56fb72:c.instructions+=1;goto B56fb72;
case 0x56fb74:goto L56fb74;
case 0x56fb76:c.instructions+=1;goto B56fb76;
case 0x56fb7b:goto L56fb7b;
case 0x56fb7d:c.instructions+=1;goto B56fb7d;
case 0x56fb7f:goto L56fb7f;
case 0x56fb81:c.instructions+=3;goto B56fb81;
case 0x56fb83:c.instructions+=2;goto B56fb83;
case 0x56fb89:c.instructions+=1;goto B56fb89;
case 0x56fb8b:goto L56fb8b;
case 0x56fb91:c.instructions+=4;goto B56fb91;
case 0x56fb97:c.instructions+=3;goto B56fb97;
case 0x56fb99:c.instructions+=2;goto B56fb99;
case 0x56fb9c:c.instructions+=1;goto B56fb9c;
case 0x56fba2:goto L56fba2;
case 0x56fba5:c.instructions+=4;goto B56fba5;
case 0x56fbab:c.instructions+=3;goto B56fbab;
case 0x56fbad:c.instructions+=2;goto B56fbad;
case 0x56fbb0:c.instructions+=1;goto B56fbb0;
case 0x56fbb2:goto L56fbb2;
case 0x56fbb5:c.instructions+=2;goto B56fbb5;
case 0x56fbb8:c.instructions+=1;goto B56fbb8;
case 0x56fbbb:goto L56fbbb;
case 0x56fbbd:c.instructions+=2;goto B56fbbd;
case 0x56fbc0:c.instructions+=1;goto B56fbc0;
case 0x56fbc5:goto L56fbc5;
case 0x56fbc7:c.instructions+=1;goto B56fbc7;
case 0x56fbcd:goto L56fbcd;
case 0x56fbd1:c.instructions+=5;goto B56fbd1;
case 0x56fbd2:c.instructions+=4;goto B56fbd2;
case 0x56fbd6:c.instructions+=3;goto B56fbd6;
case 0x56fbd7:c.instructions+=2;goto B56fbd7;
case 0x56fbd9:c.instructions+=1;goto B56fbd9;
case 0x56fbde:goto L56fbde;
case 0x56fbe2:c.instructions+=5;goto B56fbe2;
case 0x56fbe5:c.instructions+=4;goto B56fbe5;
case 0x56fbe8:c.instructions+=3;goto B56fbe8;
case 0x56fbed:c.instructions+=2;goto B56fbed;
case 0x56fbef:c.instructions+=1;goto B56fbef;
case 0x56fbf1:goto L56fbf1;
case 0x56fbf5:c.instructions+=3;goto B56fbf5;
case 0x56fbf8:c.instructions+=2;goto B56fbf8;
case 0x56fbfb:c.instructions+=1;goto B56fbfb;
case 0x56fbfd:goto L56fbfd;
case 0x56fc00:c.instructions+=6;goto B56fc00;
case 0x56fc06:c.instructions+=5;goto B56fc06;
case 0x56fc0c:c.instructions+=4;goto B56fc0c;
case 0x56fc0e:c.instructions+=3;goto B56fc0e;
case 0x56fc10:c.instructions+=2;goto B56fc10;
case 0x56fc13:c.instructions+=1;goto B56fc13;
case 0x56fc15:goto L56fc15;
case 0x56fc17:c.instructions+=2;goto B56fc17;
case 0x56fc1f:c.instructions+=1;goto B56fc1f;
case 0x56fc21:goto L56fc21;
case 0x56fc25:goto L56fc25;
case 0x56fc27:c.instructions+=1;goto B56fc27;
case 0x56fc2c:goto L56fc2c;
case 0x56fc2e:c.instructions+=1;goto B56fc2e;
case 0x56fc30:goto L56fc30;
case 0x56fc34:c.instructions+=5;goto B56fc34;
case 0x56fc37:c.instructions+=4;goto B56fc37;
case 0x56fc38:c.instructions+=3;goto B56fc38;
case 0x56fc39:c.instructions+=2;goto B56fc39;
case 0x56fc3b:c.instructions+=1;goto B56fc3b;
case 0x56fc40:goto L56fc40;
case 0x56fc44:goto L56fc44;
case 0x56fc47:c.instructions+=3;goto B56fc47;
case 0x56fc4a:c.instructions+=2;goto B56fc4a;
case 0x56fc4c:c.instructions+=1;goto B56fc4c;
case 0x56fc4e:goto L56fc4e;
case 0x56fc51:c.instructions+=1;goto B56fc51;
case 0x56fc53:goto L56fc53;
case 0x56fc5a:goto L56fc5a;
case 0x56fc5d:c.instructions+=1;goto B56fc5d;
case 0x56fc5f:goto L56fc5f;
case 0x56fc66:goto L56fc66;
case 0x56fc6b:c.instructions+=1;goto B56fc6b;
case 0x56fc70:goto L56fc70;
case 0x56fc72:c.instructions+=2;goto B56fc72;
case 0x56fc77:c.instructions+=1;goto B56fc77;
case 0x56fc79:goto L56fc79;
case 0x56fc7e:goto L56fc7e;
case 0x56fc80:c.instructions+=3;goto B56fc80;
case 0x56fc83:c.instructions+=2;goto B56fc83;
case 0x56fc86:c.instructions+=1;goto B56fc86;
case 0x56fc89:goto L56fc89;
case 0x56fc8a:goto L56fc8a;
case 0x56fc8b:c.instructions+=3;goto B56fc8b;
case 0x56fc8c:c.instructions+=2;goto B56fc8c;
case 0x56fc8f:c.instructions+=1;goto B56fc8f;
case 0x56fca0:goto L56fca0;
case 0x56fca1:c.instructions+=4;goto B56fca1;
case 0x56fca3:c.instructions+=3;goto B56fca3;
case 0x56fca5:c.instructions+=2;goto B56fca5;
case 0x56fca7:c.instructions+=1;goto B56fca7;
case 0x56fca9:goto L56fca9;
case 0x56fcb0:goto L56fcb0;
case 0x56fcb2:c.instructions+=7;goto B56fcb2;
case 0x56fcb5:c.instructions+=6;goto B56fcb5;
case 0x56fcb7:c.instructions+=5;goto B56fcb7;
case 0x56fcb8:c.instructions+=4;goto B56fcb8;
case 0x56fcbb:c.instructions+=3;goto B56fcbb;
case 0x56fcc0:c.instructions+=2;goto B56fcc0;
case 0x56fcc1:c.instructions+=1;goto B56fcc1;
case 0x56fcc6:goto L56fcc6;
case 0x56fcc8:c.instructions+=3;goto B56fcc8;
case 0x56fccb:c.instructions+=2;goto B56fccb;
case 0x56fccd:c.instructions+=1;goto B56fccd;
case 0x56fccf:goto L56fccf;
case 0x56fcd0:c.instructions+=1;goto B56fcd0;
case 0x56fce0:goto L56fce0;
case 0x56fce1:c.instructions+=3;goto B56fce1;
case 0x56fce2:c.instructions+=2;goto B56fce2;
case 0x56fce4:c.instructions+=1;goto B56fce4;
case 0x56fce6:goto L56fce6;
case 0x56fce9:c.instructions+=2;goto B56fce9;
case 0x56fceb:c.instructions+=1;goto B56fceb;
case 0x56fced:goto L56fced;
case 0x56fcee:c.instructions+=3;goto B56fcee;
case 0x56fcf3:c.instructions+=2;goto B56fcf3;
case 0x56fcf4:c.instructions+=1;goto B56fcf4;
case 0x56fcf9:goto L56fcf9;
case 0x56fcfc:goto L56fcfc;
case 0x56fcfd:c.instructions+=2;goto B56fcfd;
case 0x56fd00:c.instructions+=1;goto B56fd00;
case 0x56fd02:goto L56fd02;
case 0x56fd03:c.instructions+=2;goto B56fd03;
case 0x56fd04:c.instructions+=1;goto B56fd04;
case 0x56fd10:goto L56fd10;
case 0x56fd12:c.instructions+=13;goto B56fd12;
case 0x56fd17:c.instructions+=12;goto B56fd17;
case 0x56fd1d:c.instructions+=11;goto B56fd1d;
case 0x56fd1e:c.instructions+=10;goto B56fd1e;
case 0x56fd25:c.instructions+=9;goto B56fd25;
case 0x56fd28:c.instructions+=8;goto B56fd28;
case 0x56fd29:c.instructions+=7;goto B56fd29;
case 0x56fd2a:c.instructions+=6;goto B56fd2a;
case 0x56fd2b:c.instructions+=5;goto B56fd2b;
case 0x56fd2c:c.instructions+=4;goto B56fd2c;
case 0x56fd2e:c.instructions+=3;goto B56fd2e;
case 0x56fd33:c.instructions+=2;goto B56fd33;
case 0x56fd37:c.instructions+=1;goto B56fd37;
case 0x56fd3c:goto L56fd3c;
case 0x56fd3e:c.instructions+=1;goto B56fd3e;
case 0x56fd40:goto L56fd40;
case 0x56fd45:c.instructions+=1;goto B56fd45;
case 0x56fd49:goto L56fd49;
case 0x56fd4e:c.instructions+=3;goto B56fd4e;
case 0x56fd50:c.instructions+=2;goto B56fd50;
case 0x56fd52:c.instructions+=1;goto B56fd52;
case 0x56fd54:goto L56fd54;
case 0x56fd59:goto L56fd59;
case 0x56fd5f:goto L56fd5f;
case 0x56fd63:c.instructions+=7;goto B56fd63;
case 0x56fd67:c.instructions+=6;goto B56fd67;
case 0x56fd6b:c.instructions+=5;goto B56fd6b;
case 0x56fd6f:c.instructions+=4;goto B56fd6f;
case 0x56fd75:c.instructions+=3;goto B56fd75;
case 0x56fd79:c.instructions+=2;goto B56fd79;
case 0x56fd7b:c.instructions+=1;goto B56fd7b;
case 0x56fd80:goto L56fd80;
case 0x56fd84:c.instructions+=3;goto B56fd84;
case 0x56fd87:c.instructions+=2;goto B56fd87;
case 0x56fd89:c.instructions+=1;goto B56fd89;
case 0x56fd8b:goto L56fd8b;
case 0x56fd8e:c.instructions+=1;goto B56fd8e;
case 0x56fd90:goto L56fd90;
case 0x56fd93:c.instructions+=2;goto B56fd93;
case 0x56fd95:c.instructions+=1;goto B56fd95;
case 0x56fd97:goto L56fd97;
case 0x56fd9a:c.instructions+=1;goto B56fd9a;
case 0x56fd9c:goto L56fd9c;
case 0x56fd9f:c.instructions+=1;goto B56fd9f;
case 0x56fda1:goto L56fda1;
case 0x56fda4:c.instructions+=1;goto B56fda4;
case 0x56fda6:goto L56fda6;
case 0x56fda9:c.instructions+=7;goto B56fda9;
case 0x56fdab:c.instructions+=6;goto B56fdab;
case 0x56fdaf:c.instructions+=5;goto B56fdaf;
case 0x56fdb3:c.instructions+=4;goto B56fdb3;
case 0x56fdb6:c.instructions+=3;goto B56fdb6;
case 0x56fdb8:c.instructions+=2;goto B56fdb8;
case 0x56fdbc:c.instructions+=1;goto B56fdbc;
case 0x56fdc0:goto L56fdc0;
case 0x56fdc3:c.instructions+=1;goto B56fdc3;
case 0x56fdc5:goto L56fdc5;
case 0x56fdc8:c.instructions+=1;goto B56fdc8;
case 0x56fdcd:goto L56fdcd;
case 0x56fdd1:c.instructions+=4;goto B56fdd1;
case 0x56fdd5:c.instructions+=3;goto B56fdd5;
case 0x56fdd9:c.instructions+=2;goto B56fdd9;
case 0x56fddf:c.instructions+=1;goto B56fddf;
case 0x56fde5:goto L56fde5;
case 0x56fde6:c.instructions+=2;goto B56fde6;
case 0x56fde9:c.instructions+=1;goto B56fde9;
case 0x56fdeb:goto L56fdeb;
case 0x56fdef:c.instructions+=2;goto B56fdef;
case 0x56fdf1:c.instructions+=1;goto B56fdf1;
case 0x56fdf3:goto L56fdf3;
case 0x56fdf7:c.instructions+=1;goto B56fdf7;
case 0x56fdfc:goto L56fdfc;
case 0x56fdfe:c.instructions+=1;goto B56fdfe;
case 0x56fe00:goto L56fe00;
case 0x56fe06:c.instructions+=4;goto B56fe06;
case 0x56fe0a:c.instructions+=3;goto B56fe0a;
case 0x56fe0b:c.instructions+=2;goto B56fe0b;
case 0x56fe0c:c.instructions+=1;goto B56fe0c;
case 0x56fe11:goto L56fe11;
case 0x56fe14:c.instructions+=2;goto B56fe14;
case 0x56fe19:c.instructions+=1;goto B56fe19;
case 0x56fe1e:goto L56fe1e;
case 0x56fe20:c.instructions+=1;goto B56fe20;
case 0x56fe22:goto L56fe22;
case 0x56fe26:c.instructions+=6;goto B56fe26;
case 0x56fe2c:c.instructions+=5;goto B56fe2c;
case 0x56fe2d:c.instructions+=4;goto B56fe2d;
case 0x56fe31:c.instructions+=3;goto B56fe31;
case 0x56fe32:c.instructions+=2;goto B56fe32;
case 0x56fe37:c.instructions+=1;goto B56fe37;
case 0x56fe3c:goto L56fe3c;
case 0x56fe40:c.instructions+=3;goto B56fe40;
case 0x56fe44:c.instructions+=2;goto B56fe44;
case 0x56fe46:c.instructions+=1;goto B56fe46;
case 0x56fe48:goto L56fe48;
case 0x56fe4a:c.instructions+=7;goto B56fe4a;
case 0x56fe4d:c.instructions+=6;goto B56fe4d;
case 0x56fe4f:c.instructions+=5;goto B56fe4f;
case 0x56fe52:c.instructions+=4;goto B56fe52;
case 0x56fe56:c.instructions+=3;goto B56fe56;
case 0x56fe5a:c.instructions+=2;goto B56fe5a;
case 0x56fe5c:c.instructions+=1;goto B56fe5c;
case 0x56fe5e:goto L56fe5e;
case 0x56fe62:c.instructions+=1;goto B56fe62;
case 0x56fe64:goto L56fe64;
case 0x56fe68:c.instructions+=3;goto B56fe68;
case 0x56fe6b:c.instructions+=2;goto B56fe6b;
case 0x56fe6d:c.instructions+=1;goto B56fe6d;
case 0x56fe6f:goto L56fe6f;
case 0x56fe72:c.instructions+=1;goto B56fe72;
case 0x56fe74:goto L56fe74;
case 0x56fe77:c.instructions+=2;goto B56fe77;
case 0x56fe7a:c.instructions+=1;goto B56fe7a;
case 0x56fe7c:goto L56fe7c;
case 0x56fe7f:c.instructions+=1;goto B56fe7f;
case 0x56fe81:goto L56fe81;
case 0x56fe84:c.instructions+=1;goto B56fe84;
case 0x56fe86:goto L56fe86;
case 0x56fe89:c.instructions+=1;goto B56fe89;
case 0x56fe8b:goto L56fe8b;
case 0x56fe8e:c.instructions+=4;goto B56fe8e;
case 0x56fe91:c.instructions+=3;goto B56fe91;
case 0x56fe94:c.instructions+=2;goto B56fe94;
case 0x56fe97:c.instructions+=1;goto B56fe97;
case 0x56fe99:goto L56fe99;
case 0x56fe9c:c.instructions+=1;goto B56fe9c;
case 0x56fe9e:goto L56fe9e;
case 0x56fea1:c.instructions+=8;goto B56fea1;
case 0x56fea4:c.instructions+=7;goto B56fea4;
case 0x56fea7:c.instructions+=6;goto B56fea7;
case 0x56fea8:c.instructions+=5;goto B56fea8;
case 0x56feab:c.instructions+=4;goto B56feab;
case 0x56feae:c.instructions+=3;goto B56feae;
case 0x56feb0:c.instructions+=2;goto B56feb0;
case 0x56feb3:c.instructions+=1;goto B56feb3;
case 0x56feb5:goto L56feb5;
case 0x56feb8:c.instructions+=2;goto B56feb8;
case 0x56febb:c.instructions+=1;goto B56febb;
case 0x56febe:goto L56febe;
case 0x56fec5:goto L56fec5;
case 0x56fec6:c.instructions+=1;goto B56fec6;
case 0x56fecb:goto L56fecb;
case 0x56fecf:goto L56fecf;
case 0x56fed0:c.instructions+=2;goto B56fed0;
case 0x56fed3:c.instructions+=1;goto B56fed3;
case 0x56fed5:goto L56fed5;
case 0x56fed9:c.instructions+=3;goto B56fed9;
case 0x56fedb:c.instructions+=2;goto B56fedb;
case 0x56fee3:c.instructions+=1;goto B56fee3;
case 0x56fee5:goto L56fee5;
case 0x56fee7:c.instructions+=8;goto B56fee7;
case 0x56feea:c.instructions+=7;goto B56feea;
case 0x56feec:c.instructions+=6;goto B56feec;
case 0x56feee:c.instructions+=5;goto B56feee;
case 0x56fef1:c.instructions+=4;goto B56fef1;
case 0x56fef6:c.instructions+=3;goto B56fef6;
case 0x56fef7:c.instructions+=2;goto B56fef7;
case 0x56fef8:c.instructions+=1;goto B56fef8;
case 0x56fefd:goto L56fefd;
case 0x56ff01:c.instructions+=4;goto B56ff01;
case 0x56ff05:c.instructions+=3;goto B56ff05;
case 0x56ff08:c.instructions+=2;goto B56ff08;
case 0x56ff0a:c.instructions+=1;goto B56ff0a;
case 0x56ff0c:goto L56ff0c;
case 0x56ff10:c.instructions+=7;goto B56ff10;
case 0x56ff11:c.instructions+=6;goto B56ff11;
case 0x56ff12:c.instructions+=5;goto B56ff12;
case 0x56ff13:c.instructions+=4;goto B56ff13;
case 0x56ff14:c.instructions+=3;goto B56ff14;
case 0x56ff1b:c.instructions+=2;goto B56ff1b;
case 0x56ff1e:c.instructions+=1;goto B56ff1e;
case 0x56ff30:goto L56ff30;
case 0x56ff31:c.instructions+=3;goto B56ff31;
case 0x56ff33:c.instructions+=2;goto B56ff33;
case 0x56ff38:c.instructions+=1;goto B56ff38;
case 0x56ff3d:goto L56ff3d;
case 0x56ff3f:c.instructions+=1;goto B56ff3f;
case 0x56ff41:goto L56ff41;
case 0x56ff46:c.instructions+=2;goto B56ff46;
case 0x56ff49:c.instructions+=1;goto B56ff49;
case 0x56ff4b:goto L56ff4b;
case 0x56ff50:c.instructions+=1;goto B56ff50;
case 0x56ff55:goto L56ff55;
case 0x56ff57:c.instructions+=1;goto B56ff57;
case 0x56ff5c:goto L56ff5c;
case 0x56ff5e:c.instructions+=1;goto B56ff5e;
case 0x56ff63:goto L56ff63;
case 0x56ff65:c.instructions+=1;goto B56ff65;
case 0x56ff6a:goto L56ff6a;
case 0x56ff6c:c.instructions+=1;goto B56ff6c;
case 0x56ff71:goto L56ff71;
case 0x56ff73:c.instructions+=1;goto B56ff73;
case 0x56ff78:goto L56ff78;
case 0x56ff7a:c.instructions+=1;goto B56ff7a;
case 0x56ff7f:goto L56ff7f;
case 0x56ff81:c.instructions+=1;goto B56ff81;
case 0x56ff86:goto L56ff86;
case 0x56ff88:c.instructions+=1;goto B56ff88;
case 0x56ff8d:goto L56ff8d;
case 0x56ff8f:c.instructions+=1;goto B56ff8f;
case 0x56ff94:goto L56ff94;
case 0x56ff95:c.instructions+=1;goto B56ff95;
case 0x56ffa0:goto L56ffa0;
case 0x56ffa5:c.instructions+=2;goto B56ffa5;
case 0x56ffa7:c.instructions+=1;goto B56ffa7;
case 0x56ffad:goto L56ffad;
case 0x56ffb2:c.instructions+=9;goto B56ffb2;
case 0x56ffb7:c.instructions+=8;goto B56ffb7;
case 0x56ffc1:c.instructions+=7;goto B56ffc1;
case 0x56ffcb:c.instructions+=6;goto B56ffcb;
case 0x56ffd5:c.instructions+=5;goto B56ffd5;
case 0x56ffdf:c.instructions+=4;goto B56ffdf;
case 0x56ffe9:c.instructions+=3;goto B56ffe9;
case 0x56fff3:c.instructions+=2;goto B56fff3;
case 0x56fffd:c.instructions+=1;goto B56fffd;
default:missing_instruction(c.pc);}
B56f002:L56f002:{c.instructions+=2;NFSU2_TR(0x56f002);
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
B56f004:{NFSU2_TR(0x56f004);
if(r1(R+518)){{goto L56f018;}}
}
B56f006:L56f006:{c.instructions+=4;NFSU2_TR(0x56f006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56f007:{NFSU2_TR(0x56f007);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56f00e:{NFSU2_TR(0x56f00e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56f00f:{NFSU2_TR(0x56f00f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56f010:L56f010:{c.instructions+=3;NFSU2_TR(0x56f010);
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
B56f012:{NFSU2_TR(0x56f012);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B56f015:{NFSU2_TR(0x56f015);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56f018:L56f018:{c.instructions+=3;NFSU2_TR(0x56f018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56f019:{NFSU2_TR(0x56f019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56f01a:{NFSU2_TR(0x56f01a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56f020:L56f020:{c.instructions+=10;NFSU2_TR(0x56f020);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f021:{NFSU2_TR(0x56f021);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f022:{NFSU2_TR(0x56f022);
__builtin_memmove((R+24),(R+4),4);
}
B56f024:{NFSU2_TR(0x56f024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56f026:{NFSU2_TR(0x56f026);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f027:{NFSU2_TR(0x56f027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B56f029:{NFSU2_TR(0x56f029);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f02c:{NFSU2_TR(0x56f02c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f02e:{NFSU2_TR(0x56f02e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34ff3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56f036:{NFSU2_TR(0x56f036);
if(r1(R+518)){{goto L56f06e;}}
}
B56f038:L56f038:{c.instructions+=2;NFSU2_TR(0x56f038);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f03d:{NFSU2_TR(0x56f03d);
if(r1(R+518)){{goto L56f06e;}}
}
B56f03f:L56f03f:{c.instructions+=2;NFSU2_TR(0x56f03f);
w4(R+4,u32(0x89cf48ull));
}
B56f044:{NFSU2_TR(0x56f044);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f049ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56f049:L56f049:{c.instructions+=3;NFSU2_TR(0x56f049);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f04b:{NFSU2_TR(0x56f04b);
w4(R+0,u32(0x8651acull));
}
B56f050:{NFSU2_TR(0x56f050);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f057;}}
}
B56f052:L56f052:{c.instructions+=1;NFSU2_TR(0x56f052);
w4(R+0,u32(0x86518cull));
}
B56f057:L56f057:{c.instructions+=6;NFSU2_TR(0x56f057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56f059:{NFSU2_TR(0x56f059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B56f05c:{NFSU2_TR(0x56f05c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f060:{NFSU2_TR(0x56f060);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56f064:{NFSU2_TR(0x56f064);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56f06a:{NFSU2_TR(0x56f06a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56f06e:L56f06e:{c.instructions+=4;NFSU2_TR(0x56f06e);
__builtin_memmove((R+8),gp(0x890118),4);
}
B56f074:{NFSU2_TR(0x56f074);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B56f077:{NFSU2_TR(0x56f077);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f078:{NFSU2_TR(0x56f078);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f0f9;}}
}
B56f07a:L56f07a:{c.instructions+=2;NFSU2_TR(0x56f07a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56f07c:{NFSU2_TR(0x56f07c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f081ull));
TAIL_STATIC(0x5ee250u,5ee);
}
B56f081:L56f081:{c.instructions+=2;NFSU2_TR(0x56f081);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f083:{NFSU2_TR(0x56f083);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f0f9;}}
}
B56f085:L56f085:{c.instructions+=4;NFSU2_TR(0x56f085);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f088:{NFSU2_TR(0x56f088);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f08e:{NFSU2_TR(0x56f08e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f090:{NFSU2_TR(0x56f090);
if(r1(R+518)){{goto L56f0f9;}}
}
B56f092:L56f092:{c.instructions+=2;NFSU2_TR(0x56f092);
__builtin_memmove((R+4),(R+28),4);
}
B56f094:{NFSU2_TR(0x56f094);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f099ull));
TAIL_STATIC(0x5ed290u,5ed);
}
B56f099:L56f099:{c.instructions+=2;NFSU2_TR(0x56f099);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f09b:{NFSU2_TR(0x56f09b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f0f9;}}
}
B56f09d:L56f09d:{c.instructions+=3;NFSU2_TR(0x56f09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f0a3:{NFSU2_TR(0x56f0a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f0a5:{NFSU2_TR(0x56f0a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f0f9;}}
}
B56f0a7:L56f0a7:{c.instructions+=4;NFSU2_TR(0x56f0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f0aa:{NFSU2_TR(0x56f0aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f0ad:{NFSU2_TR(0x56f0ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f0af:{NFSU2_TR(0x56f0af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f0f9;}}
}
B56f0b1:L56f0b1:{c.instructions+=5;NFSU2_TR(0x56f0b1);
{u32 ea_=u32(r4(R+28)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f0b7:{NFSU2_TR(0x56f0b7);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f0bd:{NFSU2_TR(0x56f0bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f0bf:{NFSU2_TR(0x56f0bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f0c2:{NFSU2_TR(0x56f0c2);
if(r1(R+518)){{goto L56f0d4;}}
}
B56f0c4:L56f0c4:{c.instructions+=5;NFSU2_TR(0x56f0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f0c7:{NFSU2_TR(0x56f0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f0cd:{NFSU2_TR(0x56f0cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f0d0:{NFSU2_TR(0x56f0d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f0d2:{NFSU2_TR(0x56f0d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f0f9;}}
}
B56f0d4:L56f0d4:{c.instructions+=5;NFSU2_TR(0x56f0d4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f0d8:{NFSU2_TR(0x56f0d8);
{u32 ea_=u32(u32(7985956u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f0de:{NFSU2_TR(0x56f0de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f0e0:{NFSU2_TR(0x56f0e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f0e3:{NFSU2_TR(0x56f0e3);
if(r1(R+518)){{goto L56f0f5;}}
}
B56f0e5:L56f0e5:{c.instructions+=5;NFSU2_TR(0x56f0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f0e8:{NFSU2_TR(0x56f0e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f0ee:{NFSU2_TR(0x56f0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f0f1:{NFSU2_TR(0x56f0f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f0f3:{NFSU2_TR(0x56f0f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f0f9;}}
}
B56f0f5:L56f0f5:{c.instructions+=2;NFSU2_TR(0x56f0f5);
w1(R+12,u8(0x1ull));
}
B56f0f7:{NFSU2_TR(0x56f0f7);
{goto L56f0fb;}
}
B56f0f9:L56f0f9:{c.instructions+=1;NFSU2_TR(0x56f0f9);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B56f0fb:L56f0fb:{c.instructions+=2;NFSU2_TR(0x56f0fb);
__builtin_memmove((R+4),(R+28),4);
}
B56f0fd:{NFSU2_TR(0x56f0fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f102ull));
TAIL_STATIC(0x5ed400u,5ed);
}
B56f102:L56f102:{c.instructions+=10;NFSU2_TR(0x56f102);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f105:{NFSU2_TR(0x56f105);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56f108:{NFSU2_TR(0x56f108);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f10a:{NFSU2_TR(0x56f10a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f10c:{NFSU2_TR(0x56f10c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f10e:{NFSU2_TR(0x56f10e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56f111:{NFSU2_TR(0x56f111);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56f115:{NFSU2_TR(0x56f115);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f116:{NFSU2_TR(0x56f116);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5c4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56f11c:{NFSU2_TR(0x56f11c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f121ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B56f121:L56f121:{c.instructions+=4;NFSU2_TR(0x56f121);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B56f125:{NFSU2_TR(0x56f125);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56f127:{NFSU2_TR(0x56f127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56f128:{NFSU2_TR(0x56f128);
if(r1(R+518)){{goto L56f15b;}}
}
B56f12a:L56f12a:{c.instructions+=4;NFSU2_TR(0x56f12a);
{u32 ea_=u32(u32(7985984u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f130:{NFSU2_TR(0x56f130);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f132:{NFSU2_TR(0x56f132);
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
B56f135:{NFSU2_TR(0x56f135);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f15d;}}
}
B56f137:L56f137:{c.instructions+=4;NFSU2_TR(0x56f137);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f13a:{NFSU2_TR(0x56f13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f140:{NFSU2_TR(0x56f140);
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
B56f142:{NFSU2_TR(0x56f142);
if(r1(R+518)){{goto L56f15d;}}
}
B56f144:L56f144:{c.instructions+=3;NFSU2_TR(0x56f144);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f147:{NFSU2_TR(0x56f147);
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
B56f149:{NFSU2_TR(0x56f149);
if(r1(R+518)){{goto L56f15d;}}
}
B56f14b:L56f14b:{c.instructions+=3;NFSU2_TR(0x56f14b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f14d:{NFSU2_TR(0x56f14d);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f152:{NFSU2_TR(0x56f152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f157ull));
TAIL_STATIC(0x56eab0u,56e);
}
B56f157:L56f157:{c.instructions+=4;NFSU2_TR(0x56f157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56f158:{NFSU2_TR(0x56f158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56f159:{NFSU2_TR(0x56f159);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56f15a:{NFSU2_TR(0x56f15a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56f15b:L56f15b:{c.instructions+=1;NFSU2_TR(0x56f15b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56f15d:L56f15d:{c.instructions+=4;NFSU2_TR(0x56f15d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56f15e:{NFSU2_TR(0x56f15e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56f15f:{NFSU2_TR(0x56f15f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56f160:{NFSU2_TR(0x56f160);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56f170:L56f170:{c.instructions+=16;NFSU2_TR(0x56f170);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f171:{NFSU2_TR(0x56f171);
__builtin_memmove((R+20),(R+16),4);
}
B56f173:{NFSU2_TR(0x56f173);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B56f176:{NFSU2_TR(0x56f176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B56f179:{NFSU2_TR(0x56f179);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f17a:{NFSU2_TR(0x56f17a);
__builtin_memmove((R+12),(R+4),4);
}
B56f17c:{NFSU2_TR(0x56f17c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56f17e:{NFSU2_TR(0x56f17e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f17f:{NFSU2_TR(0x56f17f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B56f181:{NFSU2_TR(0x56f181);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f184:{NFSU2_TR(0x56f184);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f185:{NFSU2_TR(0x56f185);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56f187:{NFSU2_TR(0x56f187);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f189:{NFSU2_TR(0x56f189);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f18d:{NFSU2_TR(0x56f18d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34ff3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56f195:{NFSU2_TR(0x56f195);
if(r1(R+518)){{goto L56f1cd;}}
}
B56f197:L56f197:{c.instructions+=2;NFSU2_TR(0x56f197);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f19c:{NFSU2_TR(0x56f19c);
if(r1(R+518)){{goto L56f1cd;}}
}
B56f19e:L56f19e:{c.instructions+=2;NFSU2_TR(0x56f19e);
w4(R+4,u32(0x89cf48ull));
}
B56f1a3:{NFSU2_TR(0x56f1a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f1a8ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56f1a8:L56f1a8:{c.instructions+=3;NFSU2_TR(0x56f1a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f1aa:{NFSU2_TR(0x56f1aa);
w4(R+0,u32(0x8651acull));
}
B56f1af:{NFSU2_TR(0x56f1af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f1b6;}}
}
B56f1b1:L56f1b1:{c.instructions+=1;NFSU2_TR(0x56f1b1);
w4(R+0,u32(0x86518cull));
}
B56f1b6:L56f1b6:{c.instructions+=6;NFSU2_TR(0x56f1b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56f1b8:{NFSU2_TR(0x56f1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B56f1bb:{NFSU2_TR(0x56f1bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f1bf:{NFSU2_TR(0x56f1bf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56f1c3:{NFSU2_TR(0x56f1c3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56f1c9:{NFSU2_TR(0x56f1c9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56f1cd:L56f1cd:{c.instructions+=2;NFSU2_TR(0x56f1cd);
__builtin_memmove((R+4),(R+24),4);
}
B56f1cf:{NFSU2_TR(0x56f1cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f1d4ull));
TAIL_STATIC(0x5ebfa0u,5eb);
}
B56f1d4:L56f1d4:{c.instructions+=2;NFSU2_TR(0x56f1d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f1d6:{NFSU2_TR(0x56f1d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f463;}}
}
B56f1dc:L56f1dc:{c.instructions+=5;NFSU2_TR(0x56f1dc);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f1e2:{NFSU2_TR(0x56f1e2);
{u32 ea_=u32(u32(7986012u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f1e8:{NFSU2_TR(0x56f1e8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f1ea:{NFSU2_TR(0x56f1ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f1ed:{NFSU2_TR(0x56f1ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f463;}}
}
B56f1f3:L56f1f3:{c.instructions+=5;NFSU2_TR(0x56f1f3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f1f7:{NFSU2_TR(0x56f1f7);
{u32 ea_=u32(u32(7986016u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f1fd:{NFSU2_TR(0x56f1fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f1ff:{NFSU2_TR(0x56f1ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f202:{NFSU2_TR(0x56f202);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f463;}}
}
B56f208:L56f208:{c.instructions+=3;NFSU2_TR(0x56f208);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B56f20c:{NFSU2_TR(0x56f20c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B56f20e:{NFSU2_TR(0x56f20e);
if(r1(R+518)){{goto L56f275;}}
}
B56f210:L56f210:{c.instructions+=2;NFSU2_TR(0x56f210);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B56f211:{NFSU2_TR(0x56f211);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f470;}}
}
B56f217:L56f217:{c.instructions+=5;NFSU2_TR(0x56f217);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f21a:{NFSU2_TR(0x56f21a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f21d:{NFSU2_TR(0x56f21d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f21e:{NFSU2_TR(0x56f21e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f21f:{NFSU2_TR(0x56f21f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f224ull));
TAIL_STATIC(0x593050u,593);
}
B56f224:L56f224:{c.instructions+=3;NFSU2_TR(0x56f224);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56f227:{NFSU2_TR(0x56f227);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f229:{NFSU2_TR(0x56f229);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f233;}}
}
B56f22b:L56f22b:{c.instructions+=2;NFSU2_TR(0x56f22b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B56f22e:{NFSU2_TR(0x56f22e);
{goto L56f470;}
}
B56f233:L56f233:{c.instructions+=3;NFSU2_TR(0x56f233);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f236:{NFSU2_TR(0x56f236);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56f23c:{NFSU2_TR(0x56f23c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f46c;}}
}
B56f242:L56f242:{c.instructions+=3;NFSU2_TR(0x56f242);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f245:{NFSU2_TR(0x56f245);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f249:{NFSU2_TR(0x56f249);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f24eull));
TAIL_STATIC(0x592e60u,592);
}
B56f24e:L56f24e:{c.instructions+=2;NFSU2_TR(0x56f24e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f250:{NFSU2_TR(0x56f250);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f26d;}}
}
B56f252:L56f252:{c.instructions+=6;NFSU2_TR(0x56f252);
{u32 ea_=u32(u32(7986004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f258:{NFSU2_TR(0x56f258);
{u32 ea_=u32(u32(7889640u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56f25e:{NFSU2_TR(0x56f25e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f262:{NFSU2_TR(0x56f262);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f264:{NFSU2_TR(0x56f264);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56f267:{NFSU2_TR(0x56f267);
if(r1(R+514)){{goto L56f470;}}
}
B56f26d:L56f26d:{c.instructions+=2;NFSU2_TR(0x56f26d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B56f270:{NFSU2_TR(0x56f270);
{goto L56f470;}
}
B56f275:L56f275:{c.instructions+=7;NFSU2_TR(0x56f275);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1eull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56f279:{NFSU2_TR(0x56f279);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f27c:{NFSU2_TR(0x56f27c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f27f:{NFSU2_TR(0x56f27f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f282:{NFSU2_TR(0x56f282);
__builtin_memmove((R+24),gp(0x86b490),4);
}
B56f288:{NFSU2_TR(0x56f288);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f28a:{NFSU2_TR(0x56f28a);
if(r1(R+518)){{goto L56f294;}}
}
B56f28c:L56f28c:{c.instructions+=2;NFSU2_TR(0x56f28c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffdd0ull))));
}
B56f292:{NFSU2_TR(0x56f292);
{goto L56f296;}
}
B56f294:L56f294:{c.instructions+=1;NFSU2_TR(0x56f294);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B56f296:L56f296:{c.instructions+=2;NFSU2_TR(0x56f296);
w4(R+4,u32(0x86b490ull));
}
B56f29b:{NFSU2_TR(0x56f29b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f2a0ull));
TAIL_STATIC(0x56d4f0u,56d);
}
B56f2a0:L56f2a0:{c.instructions+=3;NFSU2_TR(0x56f2a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f2a2:{NFSU2_TR(0x56f2a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f2a6:{NFSU2_TR(0x56f2a6);
if(r1(R+518)){{goto L56f459;}}
}
B56f2ac:L56f2ac:{c.instructions+=1;NFSU2_TR(0x56f2ac);
__builtin_memmove((R+16),(R+16),4);
}
B56f2b0:L56f2b0:{c.instructions+=2;NFSU2_TR(0x56f2b0);
__builtin_memmove((R+4),(R+24),4);
}
B56f2b2:{NFSU2_TR(0x56f2b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f2b7ull));
TAIL_STATIC(0x592e60u,592);
}
B56f2b7:L56f2b7:{c.instructions+=2;NFSU2_TR(0x56f2b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f2b9:{NFSU2_TR(0x56f2b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f41e;}}
}
B56f2bf:L56f2bf:{c.instructions+=3;NFSU2_TR(0x56f2bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f2c0:{NFSU2_TR(0x56f2c0);
__builtin_memmove((R+4),(R+24),4);
}
B56f2c2:{NFSU2_TR(0x56f2c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f2c7ull));
TAIL_STATIC(0x598730u,598);
}
B56f2c7:L56f2c7:{c.instructions+=2;NFSU2_TR(0x56f2c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f2c9:{NFSU2_TR(0x56f2c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f41e;}}
}
B56f2cf:L56f2cf:{c.instructions+=4;NFSU2_TR(0x56f2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f2d5:{NFSU2_TR(0x56f2d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f2d8:{NFSU2_TR(0x56f2d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f2da:{NFSU2_TR(0x56f2da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f41e;}}
}
B56f2e0:L56f2e0:{c.instructions+=4;NFSU2_TR(0x56f2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f2e6:{NFSU2_TR(0x56f2e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B56f2e9:{NFSU2_TR(0x56f2e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f2eb:{NFSU2_TR(0x56f2eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f41e;}}
}
B56f2f1:L56f2f1:{c.instructions+=6;NFSU2_TR(0x56f2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56f2f7:{NFSU2_TR(0x56f2f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f2fb:{NFSU2_TR(0x56f2fb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f2fd:{NFSU2_TR(0x56f2fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f303:{NFSU2_TR(0x56f303);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f307:{NFSU2_TR(0x56f307);
if(r1(R+518)){{goto L56f311;}}
}
B56f309:L56f309:{c.instructions+=2;NFSU2_TR(0x56f309);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f30b:{NFSU2_TR(0x56f30b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f41c;}}
}
B56f311:L56f311:{c.instructions+=2;NFSU2_TR(0x56f311);
__builtin_memmove((R+4),(R+28),4);
}
B56f313:{NFSU2_TR(0x56f313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f318ull));
TAIL_STATIC(0x5ebfa0u,5eb);
}
B56f318:L56f318:{c.instructions+=2;NFSU2_TR(0x56f318);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f31a:{NFSU2_TR(0x56f31a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f41c;}}
}
B56f320:L56f320:{c.instructions+=2;NFSU2_TR(0x56f320);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f324:{NFSU2_TR(0x56f324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f329ull));
TAIL_STATIC(0x5ebfa0u,5eb);
}
B56f329:L56f329:{c.instructions+=2;NFSU2_TR(0x56f329);
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
B56f32b:{NFSU2_TR(0x56f32b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f41c;}}
}
B56f331:L56f331:{c.instructions+=2;NFSU2_TR(0x56f331);
__builtin_memmove((R+4),(R+28),4);
}
B56f333:{NFSU2_TR(0x56f333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f338ull));
TAIL_STATIC(0x5ec060u,5ec);
}
B56f338:L56f338:{c.instructions+=2;NFSU2_TR(0x56f338);
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
B56f33a:{NFSU2_TR(0x56f33a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f41c;}}
}
B56f340:L56f340:{c.instructions+=2;NFSU2_TR(0x56f340);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f344:{NFSU2_TR(0x56f344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f349ull));
TAIL_STATIC(0x5ec060u,5ec);
}
B56f349:L56f349:{c.instructions+=2;NFSU2_TR(0x56f349);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f34b:{NFSU2_TR(0x56f34b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f41c;}}
}
B56f351:L56f351:{c.instructions+=3;NFSU2_TR(0x56f351);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f357:{NFSU2_TR(0x56f357);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f359:{NFSU2_TR(0x56f359);
if(r1(R+518)){{goto L56f41c;}}
}
B56f35f:L56f35f:{c.instructions+=4;NFSU2_TR(0x56f35f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f363:{NFSU2_TR(0x56f363);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56f369:{NFSU2_TR(0x56f369);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f36b:{NFSU2_TR(0x56f36b);
if(r1(R+518)){{goto L56f41c;}}
}
B56f371:L56f371:{c.instructions+=4;NFSU2_TR(0x56f371);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f375:{NFSU2_TR(0x56f375);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f377:{NFSU2_TR(0x56f377);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f37b:{NFSU2_TR(0x56f37b);
if(r1(R+518)){{goto L56f381;}}
}
B56f37d:L56f37d:{c.instructions+=1;NFSU2_TR(0x56f37d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f381:L56f381:{c.instructions+=3;NFSU2_TR(0x56f381);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f387:{NFSU2_TR(0x56f387);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f389:{NFSU2_TR(0x56f389);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f3ce;}}
}
B56f38b:L56f38b:{c.instructions+=5;NFSU2_TR(0x56f38b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B56f38e:{NFSU2_TR(0x56f38e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f38f:{NFSU2_TR(0x56f38f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x60ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56f392:{NFSU2_TR(0x56f392);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f393:{NFSU2_TR(0x56f393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f398ull));
TAIL_STATIC(0x401150u,401);
}
B56f398:L56f398:{c.instructions+=5;NFSU2_TR(0x56f398);
{u32 ea_=u32(u32(7985996u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f39e:{NFSU2_TR(0x56f39e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56f3a1:{NFSU2_TR(0x56f3a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f3a3:{NFSU2_TR(0x56f3a3);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56f3a6:{NFSU2_TR(0x56f3a6);
if(r1(R+514)){{goto L56f41c;}}
}
B56f3a8:L56f3a8:{c.instructions+=2;NFSU2_TR(0x56f3a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f3ac:{NFSU2_TR(0x56f3ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f3b1ull));
TAIL_STATIC(0x401890u,401);
}
B56f3b1:L56f3b1:{c.instructions+=7;NFSU2_TR(0x56f3b1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f3b4:{NFSU2_TR(0x56f3b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f3b8:{NFSU2_TR(0x56f3b8);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56f3bb:{NFSU2_TR(0x56f3bb);
{u32 ea_=u32(u32(7986000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f3c1:{NFSU2_TR(0x56f3c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f3c3:{NFSU2_TR(0x56f3c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f3c6:{NFSU2_TR(0x56f3c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f41c;}}
}
B56f3c8:L56f3c8:{c.instructions+=2;NFSU2_TR(0x56f3c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56f3cc:{NFSU2_TR(0x56f3cc);
{goto L56f442;}
}
B56f3ce:L56f3ce:{c.instructions+=5;NFSU2_TR(0x56f3ce);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f3d1:{NFSU2_TR(0x56f3d1);
{u32 ea_=u32(u32(7986004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f3d7:{NFSU2_TR(0x56f3d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f3d9:{NFSU2_TR(0x56f3d9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56f3dc:{NFSU2_TR(0x56f3dc);
if(r1(R+514)){{goto L56f41c;}}
}
B56f3de:L56f3de:{c.instructions+=4;NFSU2_TR(0x56f3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f3e4:{NFSU2_TR(0x56f3e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56f3e6:{NFSU2_TR(0x56f3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56f3ec:{NFSU2_TR(0x56f3ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f3efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56f3ef:L56f3ef:{c.instructions+=4;NFSU2_TR(0x56f3ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f3f0:{NFSU2_TR(0x56f3f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56f3f2:{NFSU2_TR(0x56f3f2);
__builtin_memmove((R+4),(R+28),4);
}
B56f3f4:{NFSU2_TR(0x56f3f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f3f7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56f3f7:L56f3f7:{c.instructions+=4;NFSU2_TR(0x56f3f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f3f8:{NFSU2_TR(0x56f3f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56f3fc:{NFSU2_TR(0x56f3fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f3fd:{NFSU2_TR(0x56f3fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f402ull));
TAIL_STATIC(0x4011b0u,401);
}
B56f402:L56f402:{c.instructions+=3;NFSU2_TR(0x56f402);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56f406:{NFSU2_TR(0x56f406);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f407:{NFSU2_TR(0x56f407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f40cull));
TAIL_STATIC(0x440f70u,440);
}
B56f40c:L56f40c:{c.instructions+=5;NFSU2_TR(0x56f40c);
{u32 ea_=u32(u32(7986008u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f412:{NFSU2_TR(0x56f412);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B56f415:{NFSU2_TR(0x56f415);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f417:{NFSU2_TR(0x56f417);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f41a:{NFSU2_TR(0x56f41a);
if(r1(R+518)){{goto L56f43e;}}
}
B56f41c:L56f41c:{c.instructions+=1;NFSU2_TR(0x56f41c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56f41e:L56f41e:{c.instructions+=3;NFSU2_TR(0x56f41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56f424:{NFSU2_TR(0x56f424);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f426:{NFSU2_TR(0x56f426);
if(r1(R+518)){{goto L56f430;}}
}
B56f428:L56f428:{c.instructions+=2;NFSU2_TR(0x56f428);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffdd0ull))));
}
B56f42e:{NFSU2_TR(0x56f42e);
{goto L56f432;}
}
B56f430:L56f430:{c.instructions+=1;NFSU2_TR(0x56f430);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B56f432:L56f432:{c.instructions+=2;NFSU2_TR(0x56f432);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56f436:{NFSU2_TR(0x56f436);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56f2b0u);}goto L56f2b0;}}
}
B56f43c:L56f43c:{c.instructions+=1;NFSU2_TR(0x56f43c);
{goto L56f459;}
}
B56f43e:L56f43e:{c.instructions+=1;NFSU2_TR(0x56f43e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1eull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56f442:L56f442:{c.instructions+=6;NFSU2_TR(0x56f442);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f445:{NFSU2_TR(0x56f445);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f44b:{NFSU2_TR(0x56f44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f44e:{NFSU2_TR(0x56f44e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f454:{NFSU2_TR(0x56f454);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f457:{NFSU2_TR(0x56f457);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56f459:L56f459:{c.instructions+=2;NFSU2_TR(0x56f459);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56f45c:{NFSU2_TR(0x56f45c);
if(r1(R+518)){{goto L56f470;}}
}
B56f45e:L56f45e:{c.instructions+=2;NFSU2_TR(0x56f45e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B56f461:{NFSU2_TR(0x56f461);
{goto L56f470;}
}
B56f463:L56f463:{c.instructions+=3;NFSU2_TR(0x56f463);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f466:{NFSU2_TR(0x56f466);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f469:{NFSU2_TR(0x56f469);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f46c:L56f46c:{c.instructions+=1;NFSU2_TR(0x56f46c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56f470:L56f470:{c.instructions+=2;NFSU2_TR(0x56f470);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x2ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B56f474:{NFSU2_TR(0x56f474);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f4b2;}}
}
B56f476:L56f476:{c.instructions+=3;NFSU2_TR(0x56f476);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f479:{NFSU2_TR(0x56f479);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f47b:{NFSU2_TR(0x56f47b);
if(r1(R+518)){{goto L56f485;}}
}
B56f47d:L56f47d:{c.instructions+=3;NFSU2_TR(0x56f47d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f480:{NFSU2_TR(0x56f480);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f483:{NFSU2_TR(0x56f483);
{goto L56f48b;}
}
B56f485:L56f485:{c.instructions+=2;NFSU2_TR(0x56f485);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f488:{NFSU2_TR(0x56f488);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f48b:L56f48b:{c.instructions+=2;NFSU2_TR(0x56f48b);
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
B56f48d:{NFSU2_TR(0x56f48d);
if(r1(R+518)){{goto L56f4a1;}}
}
B56f48f:L56f48f:{c.instructions+=3;NFSU2_TR(0x56f48f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f492:{NFSU2_TR(0x56f492);
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
B56f494:{NFSU2_TR(0x56f494);
if(r1(R+518)){{goto L56f4a1;}}
}
B56f496:L56f496:{c.instructions+=3;NFSU2_TR(0x56f496);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f497:{NFSU2_TR(0x56f497);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f49c:{NFSU2_TR(0x56f49c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f4a1ull));
TAIL_STATIC(0x56eab0u,56e);
}
B56f4a1:L56f4a1:{c.instructions+=5;NFSU2_TR(0x56f4a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56f4a5:{NFSU2_TR(0x56f4a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1eull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56f4a9:{NFSU2_TR(0x56f4a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f4ac:{NFSU2_TR(0x56f4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f4af:{NFSU2_TR(0x56f4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f4b2:L56f4b2:{c.instructions+=6;NFSU2_TR(0x56f4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56f4b3:{NFSU2_TR(0x56f4b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56f4b4:{NFSU2_TR(0x56f4b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56f4b5:{NFSU2_TR(0x56f4b5);
__builtin_memmove((R+16),(R+20),4);
}
B56f4b7:{NFSU2_TR(0x56f4b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56f4b8:{NFSU2_TR(0x56f4b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56f4c0:L56f4c0:{c.instructions+=11;NFSU2_TR(0x56f4c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B56f4c3:{NFSU2_TR(0x56f4c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f4c4:{NFSU2_TR(0x56f4c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f4c5:{NFSU2_TR(0x56f4c5);
__builtin_memmove((R+24),(R+4),4);
}
B56f4c7:{NFSU2_TR(0x56f4c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56f4c9:{NFSU2_TR(0x56f4c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f4ca:{NFSU2_TR(0x56f4ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B56f4cc:{NFSU2_TR(0x56f4cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56f4cf:{NFSU2_TR(0x56f4cf);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B56f4d1:{NFSU2_TR(0x56f4d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56f4d9:{NFSU2_TR(0x56f4d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f4deull));
TAIL_STATIC(0x59fa10u,59f);
}
B56f4de:L56f4de:{c.instructions+=10;NFSU2_TR(0x56f4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f4e4:{NFSU2_TR(0x56f4e4);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B56f4e6:{NFSU2_TR(0x56f4e6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56f4ea:{NFSU2_TR(0x56f4ea);
{u32 ea_=u32(u32(7985972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f4f0:{NFSU2_TR(0x56f4f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f4f4:{NFSU2_TR(0x56f4f4);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56f4fa:{NFSU2_TR(0x56f4fa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f4fe:{NFSU2_TR(0x56f4fe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f500:{NFSU2_TR(0x56f500);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56f503:{NFSU2_TR(0x56f503);
if(r1(R+514)){{goto L56f557;}}
}
B56f505:L56f505:{c.instructions+=5;NFSU2_TR(0x56f505);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f509:{NFSU2_TR(0x56f509);
{u32 ea_=u32(u32(7985976u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f50f:{NFSU2_TR(0x56f50f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f511:{NFSU2_TR(0x56f511);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f514:{NFSU2_TR(0x56f514);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f557;}}
}
B56f516:L56f516:{c.instructions+=2;NFSU2_TR(0x56f516);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56f51d:{NFSU2_TR(0x56f51d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f557;}}
}
B56f51f:L56f51f:{c.instructions+=8;NFSU2_TR(0x56f51f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f523:{NFSU2_TR(0x56f523);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56f527:{NFSU2_TR(0x56f527);
{u32 ea_=u32(u32(7985980u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B56f52d:{NFSU2_TR(0x56f52d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f533:{NFSU2_TR(0x56f533);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56f535:{NFSU2_TR(0x56f535);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f537:{NFSU2_TR(0x56f537);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56f53a:{NFSU2_TR(0x56f53a);
if(r1(R+514)){{goto L56f548;}}
}
B56f53c:L56f53c:{c.instructions+=3;NFSU2_TR(0x56f53c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56f53e:{NFSU2_TR(0x56f53e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56f546:{NFSU2_TR(0x56f546);
{goto L56f54c;}
}
B56f548:L56f548:{c.instructions+=1;NFSU2_TR(0x56f548);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56f54c:L56f54c:{c.instructions+=4;NFSU2_TR(0x56f54c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f54f:{NFSU2_TR(0x56f54f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f552:{NFSU2_TR(0x56f552);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f554:{NFSU2_TR(0x56f554);
__builtin_memmove((R+12),(R+518),1);
}
B56f557:L56f557:{c.instructions+=4;NFSU2_TR(0x56f557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f55a:{NFSU2_TR(0x56f55a);
{u32 ea_=u32(u32(7986200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f560:{NFSU2_TR(0x56f560);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f562:{NFSU2_TR(0x56f562);
if(r1(R+518)){{goto L56f598;}}
}
B56f564:L56f564:{c.instructions+=2;NFSU2_TR(0x56f564);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f569:{NFSU2_TR(0x56f569);
if(r1(R+518)){{goto L56f598;}}
}
B56f56b:L56f56b:{c.instructions+=3;NFSU2_TR(0x56f56b);
w4(R+4,u32(0x89cf48ull));
}
B56f570:{NFSU2_TR(0x56f570);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56f572:{NFSU2_TR(0x56f572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f577ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56f577:L56f577:{c.instructions+=3;NFSU2_TR(0x56f577);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f579:{NFSU2_TR(0x56f579);
w4(R+0,u32(0x8651acull));
}
B56f57e:{NFSU2_TR(0x56f57e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f585;}}
}
B56f580:L56f580:{c.instructions+=1;NFSU2_TR(0x56f580);
w4(R+0,u32(0x86518cull));
}
B56f585:L56f585:{c.instructions+=5;NFSU2_TR(0x56f585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56f587:{NFSU2_TR(0x56f587);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B56f58a:{NFSU2_TR(0x56f58a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f58e:{NFSU2_TR(0x56f58e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56f592:{NFSU2_TR(0x56f592);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56f598:L56f598:{c.instructions+=4;NFSU2_TR(0x56f598);
{u32 ea_=u32(u32(7985952u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f59e:{NFSU2_TR(0x56f59e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f5a0:{NFSU2_TR(0x56f5a0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56f5a3:{NFSU2_TR(0x56f5a3);
if(r1(R+514)){{goto L56f5e3;}}
}
B56f5a5:L56f5a5:{c.instructions+=5;NFSU2_TR(0x56f5a5);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f5a8:{NFSU2_TR(0x56f5a8);
{u32 ea_=u32(u32(7985968u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f5ae:{NFSU2_TR(0x56f5ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f5b0:{NFSU2_TR(0x56f5b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f5b3:{NFSU2_TR(0x56f5b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f5e3;}}
}
B56f5b5:L56f5b5:{c.instructions+=4;NFSU2_TR(0x56f5b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f5b8:{NFSU2_TR(0x56f5b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f5be:{NFSU2_TR(0x56f5be);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f5c0:{NFSU2_TR(0x56f5c0);
if(r1(R+518)){{goto L56f60f;}}
}
B56f5c2:L56f5c2:{c.instructions+=3;NFSU2_TR(0x56f5c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f5c5:{NFSU2_TR(0x56f5c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f5c7:{NFSU2_TR(0x56f5c7);
if(r1(R+518)){{goto L56f60f;}}
}
B56f5c9:L56f5c9:{c.instructions+=3;NFSU2_TR(0x56f5c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f5cc:{NFSU2_TR(0x56f5cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f5ce:{NFSU2_TR(0x56f5ce);
if(r1(R+518)){{goto L56f5d5;}}
}
B56f5d0:L56f5d0:{c.instructions+=2;NFSU2_TR(0x56f5d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f5d3:{NFSU2_TR(0x56f5d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f60f;}}
}
B56f5d5:L56f5d5:{c.instructions+=2;NFSU2_TR(0x56f5d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f5d7:{NFSU2_TR(0x56f5d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f5dcull));
TAIL_STATIC(0x56d5c0u,56d);
}
B56f5dc:L56f5dc:{c.instructions+=5;NFSU2_TR(0x56f5dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56f5dd:{NFSU2_TR(0x56f5dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56f5de:{NFSU2_TR(0x56f5de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56f5df:{NFSU2_TR(0x56f5df);
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
B56f5e2:{NFSU2_TR(0x56f5e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56f5e3:L56f5e3:{c.instructions+=2;NFSU2_TR(0x56f5e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f5e5:{NFSU2_TR(0x56f5e5);
if(r1(R+518)){{goto L56f60f;}}
}
B56f5e7:L56f5e7:{c.instructions+=4;NFSU2_TR(0x56f5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f5ea:{NFSU2_TR(0x56f5ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f5f0:{NFSU2_TR(0x56f5f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f5f2:{NFSU2_TR(0x56f5f2);
if(r1(R+518)){{goto L56f60f;}}
}
B56f5f4:L56f5f4:{c.instructions+=3;NFSU2_TR(0x56f5f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f5f7:{NFSU2_TR(0x56f5f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f5f9:{NFSU2_TR(0x56f5f9);
if(r1(R+518)){{goto L56f60f;}}
}
B56f5fb:L56f5fb:{c.instructions+=6;NFSU2_TR(0x56f5fb);
{u32 ea_=u32(r4(R+28)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f601:{NFSU2_TR(0x56f601);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f605:{NFSU2_TR(0x56f605);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f606:{NFSU2_TR(0x56f606);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56f609:{NFSU2_TR(0x56f609);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f60a:{NFSU2_TR(0x56f60a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f60full));
TAIL_STATIC(0x56eab0u,56e);
}
B56f60f:L56f60f:{c.instructions+=5;NFSU2_TR(0x56f60f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56f610:{NFSU2_TR(0x56f610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56f611:{NFSU2_TR(0x56f611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56f612:{NFSU2_TR(0x56f612);
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
B56f615:{NFSU2_TR(0x56f615);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56f620:L56f620:{c.instructions+=17;NFSU2_TR(0x56f620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B56f623:{NFSU2_TR(0x56f623);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f624:{NFSU2_TR(0x56f624);
__builtin_memmove((R+24),(R+4),4);
}
B56f626:{NFSU2_TR(0x56f626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56f628:{NFSU2_TR(0x56f628);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f629:{NFSU2_TR(0x56f629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B56f62b:{NFSU2_TR(0x56f62b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B56f632:{NFSU2_TR(0x56f632);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f635:{NFSU2_TR(0x56f635);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f637:{NFSU2_TR(0x56f637);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f63b:{NFSU2_TR(0x56f63b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56f63f:{NFSU2_TR(0x56f63f);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56f645:{NFSU2_TR(0x56f645);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56f649:{NFSU2_TR(0x56f649);
{u32 ea_=u32(r4(R+28)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f64f:{NFSU2_TR(0x56f64f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B56f651:{NFSU2_TR(0x56f651);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56f655:{NFSU2_TR(0x56f655);
if(r1(R+518)){{goto L56f668;}}
}
B56f657:L56f657:{c.instructions+=2;NFSU2_TR(0x56f657);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f65c:{NFSU2_TR(0x56f65c);
if(r1(R+518)){{goto L56f668;}}
}
B56f65e:L56f65e:{c.instructions+=2;NFSU2_TR(0x56f65e);
w4(R+4,u32(0x89cf48ull));
}
B56f663:{NFSU2_TR(0x56f663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f668ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56f668:L56f668:{c.instructions+=3;NFSU2_TR(0x56f668);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56f66f:{NFSU2_TR(0x56f66f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f670:{NFSU2_TR(0x56f670);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f6e6;}}
}
B56f672:L56f672:{c.instructions+=3;NFSU2_TR(0x56f672);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B56f675:{NFSU2_TR(0x56f675);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f677:{NFSU2_TR(0x56f677);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f68c;}}
}
B56f679:L56f679:{c.instructions+=5;NFSU2_TR(0x56f679);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f67d:{NFSU2_TR(0x56f67d);
{u32 ea_=u32(u32(7985988u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f683:{NFSU2_TR(0x56f683);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f685:{NFSU2_TR(0x56f685);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f688:{NFSU2_TR(0x56f688);
if(r1(R+518)){{goto L56f69f;}}
}
B56f68a:L56f68a:{c.instructions+=1;NFSU2_TR(0x56f68a);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f68c:L56f68c:{c.instructions+=1;NFSU2_TR(0x56f68c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56f6e6;}}
}
B56f68e:L56f68e:{c.instructions+=5;NFSU2_TR(0x56f68e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f692:{NFSU2_TR(0x56f692);
{u32 ea_=u32(u32(7985992u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f698:{NFSU2_TR(0x56f698);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f69a:{NFSU2_TR(0x56f69a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f69d:{NFSU2_TR(0x56f69d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f6e6;}}
}
B56f69f:L56f69f:{c.instructions+=2;NFSU2_TR(0x56f69f);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f6a1:{NFSU2_TR(0x56f6a1);
if(r1(R+518)){{goto L56f6d8;}}
}
B56f6a3:L56f6a3:{c.instructions+=1;NFSU2_TR(0x56f6a3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56f6ea;}}
}
B56f6a5:L56f6a5:{c.instructions+=2;NFSU2_TR(0x56f6a5);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x2ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B56f6a8:{NFSU2_TR(0x56f6a8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L56f6ea;}}
}
B56f6aa:L56f6aa:{c.instructions+=5;NFSU2_TR(0x56f6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f6ad:{NFSU2_TR(0x56f6ad);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f6b1:{NFSU2_TR(0x56f6b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f6b2:{NFSU2_TR(0x56f6b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f6b3:{NFSU2_TR(0x56f6b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f6b8ull));
TAIL_STATIC(0x56d020u,56d);
}
B56f6b8:L56f6b8:{c.instructions+=6;NFSU2_TR(0x56f6b8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B56f6ba:{NFSU2_TR(0x56f6ba);
{u32 ea_=u32(u32(7986228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f6c0:{NFSU2_TR(0x56f6c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56f6c3:{NFSU2_TR(0x56f6c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f6c5:{NFSU2_TR(0x56f6c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f6c8:{NFSU2_TR(0x56f6c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f6ea;}}
}
B56f6ca:L56f6ca:{c.instructions+=5;NFSU2_TR(0x56f6ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f6ce:{NFSU2_TR(0x56f6ce);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B56f6d0:{NFSU2_TR(0x56f6d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56f6d3:{NFSU2_TR(0x56f6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f6d6:{NFSU2_TR(0x56f6d6);
{goto L56f6ea;}
}
B56f6d8:L56f6d8:{c.instructions+=5;NFSU2_TR(0x56f6d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f6dc:{NFSU2_TR(0x56f6dc);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B56f6de:{NFSU2_TR(0x56f6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f6e1:{NFSU2_TR(0x56f6e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56f6e4:{NFSU2_TR(0x56f6e4);
{goto L56f6ea;}
}
B56f6e6:L56f6e6:{c.instructions+=1;NFSU2_TR(0x56f6e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56f6ea:L56f6ea:{c.instructions+=3;NFSU2_TR(0x56f6ea);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B56f6ee:{NFSU2_TR(0x56f6ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56f6ef:{NFSU2_TR(0x56f6ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f712;}}
}
B56f6f1:L56f6f1:{c.instructions+=4;NFSU2_TR(0x56f6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f6f4:{NFSU2_TR(0x56f6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f6f7:{NFSU2_TR(0x56f6f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f6f9:{NFSU2_TR(0x56f6f9);
if(r1(R+518)){{goto L56f70e;}}
}
B56f6fb:L56f6fb:{c.instructions+=3;NFSU2_TR(0x56f6fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f6fe:{NFSU2_TR(0x56f6fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f700:{NFSU2_TR(0x56f700);
if(r1(R+518)){{goto L56f70e;}}
}
B56f702:L56f702:{c.instructions+=3;NFSU2_TR(0x56f702);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f704:{NFSU2_TR(0x56f704);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f709:{NFSU2_TR(0x56f709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f70eull));
TAIL_STATIC(0x56eab0u,56e);
}
B56f70e:L56f70e:{c.instructions+=1;NFSU2_TR(0x56f70e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56f712:L56f712:{c.instructions+=4;NFSU2_TR(0x56f712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56f713:{NFSU2_TR(0x56f713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56f714:{NFSU2_TR(0x56f714);
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
B56f717:{NFSU2_TR(0x56f717);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56f720:L56f720:{c.instructions+=10;NFSU2_TR(0x56f720);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B56f725:{NFSU2_TR(0x56f725);
__builtin_memmove((R+8),gp(0x890118),4);
}
B56f72b:{NFSU2_TR(0x56f72b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B56f72e:{NFSU2_TR(0x56f72e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f730:{NFSU2_TR(0x56f730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f731:{NFSU2_TR(0x56f731);
__builtin_memmove((R+24),(R+4),4);
}
B56f733:{NFSU2_TR(0x56f733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56f735:{NFSU2_TR(0x56f735);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f736:{NFSU2_TR(0x56f736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B56f738:{NFSU2_TR(0x56f738);
if(r1(R+518)){{goto L56f7be;}}
}
B56f73e:L56f73e:{c.instructions+=2;NFSU2_TR(0x56f73e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f740:{NFSU2_TR(0x56f740);
if(r1(R+518)){{goto L56f7be;}}
}
B56f742:L56f742:{c.instructions+=2;NFSU2_TR(0x56f742);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B56f745:{NFSU2_TR(0x56f745);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f7be;}}
}
B56f747:L56f747:{c.instructions+=9;NFSU2_TR(0x56f747);
__builtin_memmove((R+0),gp(0x89e7c8),4);
}
B56f74c:{NFSU2_TR(0x56f74c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f74d:{NFSU2_TR(0x56f74d);
__builtin_memmove((R+12),gp(0x89e7cc),4);
}
B56f753:{NFSU2_TR(0x56f753);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B56f755:{NFSU2_TR(0x56f755);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x89e7c4))));
}
B56f75b:{NFSU2_TR(0x56f75b);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x89e7c0))));
}
B56f761:{NFSU2_TR(0x56f761);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f764:{NFSU2_TR(0x56f764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56f765:{NFSU2_TR(0x56f765);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56f7be;}}
}
B56f767:L56f767:{c.instructions+=6;NFSU2_TR(0x56f767);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56f76a:{NFSU2_TR(0x56f76a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56f770:{NFSU2_TR(0x56f770);
{u32 ea_=u32(u32(7986028u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56f776:{NFSU2_TR(0x56f776);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f778:{NFSU2_TR(0x56f778);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56f77b:{NFSU2_TR(0x56f77b);
if(r1(R+514)){{goto L56f7bc;}}
}
B56f77d:L56f77d:{c.instructions+=4;NFSU2_TR(0x56f77d);
{u32 ea_=u32(u32(7986024u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f783:{NFSU2_TR(0x56f783);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f785:{NFSU2_TR(0x56f785);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f788:{NFSU2_TR(0x56f788);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f7be;}}
}
B56f78a:L56f78a:{c.instructions+=2;NFSU2_TR(0x56f78a);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B56f78e:{NFSU2_TR(0x56f78e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f7be;}}
}
B56f790:L56f790:{c.instructions+=5;NFSU2_TR(0x56f790);
{u32 ea_=u32(r4(R+28)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f796:{NFSU2_TR(0x56f796);
{u32 ea_=u32(u32(7986020u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f79c:{NFSU2_TR(0x56f79c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f79e:{NFSU2_TR(0x56f79e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f7a1:{NFSU2_TR(0x56f7a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f7be;}}
}
B56f7a3:L56f7a3:{c.instructions+=5;NFSU2_TR(0x56f7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f7a6:{NFSU2_TR(0x56f7a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f7a8:{NFSU2_TR(0x56f7a8);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f7ad:{NFSU2_TR(0x56f7ad);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f7af:{NFSU2_TR(0x56f7af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f7b4ull));
TAIL_STATIC(0x56ed10u,56e);
}
B56f7b4:L56f7b4:{c.instructions+=2;NFSU2_TR(0x56f7b4);
__builtin_memmove((R+8),gp(0x890118),4);
}
B56f7ba:{NFSU2_TR(0x56f7ba);
{goto L56f7be;}
}
B56f7bc:L56f7bc:{c.instructions+=1;NFSU2_TR(0x56f7bc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56f7be:L56f7be:{c.instructions+=6;NFSU2_TR(0x56f7be);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56f7c1:{NFSU2_TR(0x56f7c1);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56f7c7:{NFSU2_TR(0x56f7c7);
{u32 ea_=u32(u32(7986028u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f7cd:{NFSU2_TR(0x56f7cd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f7cf:{NFSU2_TR(0x56f7cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f7d2:{NFSU2_TR(0x56f7d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f849;}}
}
B56f7d4:L56f7d4:{c.instructions+=3;NFSU2_TR(0x56f7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f7d7:{NFSU2_TR(0x56f7d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f7d9:{NFSU2_TR(0x56f7d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f7e4;}}
}
B56f7db:L56f7db:{c.instructions+=3;NFSU2_TR(0x56f7db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56f7dd:{NFSU2_TR(0x56f7dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B56f7e1:{NFSU2_TR(0x56f7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f7e4:L56f7e4:{c.instructions+=3;NFSU2_TR(0x56f7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f7e7:{NFSU2_TR(0x56f7e7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f7ea:{NFSU2_TR(0x56f7ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56f849;}}
}
B56f7ec:L56f7ec:{c.instructions+=10;NFSU2_TR(0x56f7ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56f7ee:{NFSU2_TR(0x56f7ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B56f7f1:{NFSU2_TR(0x56f7f1);
w4(R+0,u32(s32(s8(r1(R+8)))));
}
B56f7f4:{NFSU2_TR(0x56f7f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56f7f6:{NFSU2_TR(0x56f7f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56f7fe:{NFSU2_TR(0x56f7fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1full));
s4(u32(r4(U+0)),r4(U+4));
}
B56f806:{NFSU2_TR(0x56f806);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B56f80e:{NFSU2_TR(0x56f80e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1dull));
s4(u32(r4(U+0)),r4(U+4));
}
B56f816:{NFSU2_TR(0x56f816);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B56f81e:{NFSU2_TR(0x56f81e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56f849;}}
}
B56f820:L56f820:{c.instructions+=2;NFSU2_TR(0x56f820);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x5ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B56f823:{NFSU2_TR(0x56f823);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56f849;}}
}
B56f825:L56f825:{c.instructions+=6;NFSU2_TR(0x56f825);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B56f829:{NFSU2_TR(0x56f829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f82c:{NFSU2_TR(0x56f82c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f82f:{NFSU2_TR(0x56f82f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B56f832:{NFSU2_TR(0x56f832);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f834:{NFSU2_TR(0x56f834);
if(r1(R+518)){{goto L56f849;}}
}
B56f836:L56f836:{c.instructions+=3;NFSU2_TR(0x56f836);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f839:{NFSU2_TR(0x56f839);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f83b:{NFSU2_TR(0x56f83b);
if(r1(R+518)){{goto L56f849;}}
}
B56f83d:L56f83d:{c.instructions+=3;NFSU2_TR(0x56f83d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f83f:{NFSU2_TR(0x56f83f);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f844:{NFSU2_TR(0x56f844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f849ull));
TAIL_STATIC(0x56eab0u,56e);
}
B56f849:L56f849:{c.instructions+=5;NFSU2_TR(0x56f849);
{u32 ea_=u32(r4(R+28)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f84f:{NFSU2_TR(0x56f84f);
{u32 ea_=u32(u32(7986048u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f855:{NFSU2_TR(0x56f855);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f857:{NFSU2_TR(0x56f857);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f85a:{NFSU2_TR(0x56f85a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f891;}}
}
B56f85c:L56f85c:{c.instructions+=5;NFSU2_TR(0x56f85c);
{u32 ea_=u32(r4(R+28)+u32(1244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f862:{NFSU2_TR(0x56f862);
{u32 ea_=u32(u32(7986052u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f868:{NFSU2_TR(0x56f868);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f86a:{NFSU2_TR(0x56f86a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f86d:{NFSU2_TR(0x56f86d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f891;}}
}
B56f86f:L56f86f:{c.instructions+=4;NFSU2_TR(0x56f86f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f872:{NFSU2_TR(0x56f872);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f878:{NFSU2_TR(0x56f878);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f87a:{NFSU2_TR(0x56f87a);
if(r1(R+518)){{goto L56f891;}}
}
B56f87c:L56f87c:{c.instructions+=3;NFSU2_TR(0x56f87c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f87f:{NFSU2_TR(0x56f87f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f881:{NFSU2_TR(0x56f881);
if(r1(R+518)){{goto L56f891;}}
}
B56f883:L56f883:{c.instructions+=4;NFSU2_TR(0x56f883);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f889:{NFSU2_TR(0x56f889);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f88b:{NFSU2_TR(0x56f88b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f88c:{NFSU2_TR(0x56f88c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f891ull));
TAIL_STATIC(0x56eab0u,56e);
}
B56f891:L56f891:{c.instructions+=7;NFSU2_TR(0x56f891);
{u32 ea_=u32(r4(R+28)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f897:{NFSU2_TR(0x56f897);
{u32 ea_=u32(u32(7986036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f89d:{NFSU2_TR(0x56f89d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B56f89f:{NFSU2_TR(0x56f89f);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B56f8a1:{NFSU2_TR(0x56f8a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f8a3:{NFSU2_TR(0x56f8a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f8a6:{NFSU2_TR(0x56f8a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f8c8;}}
}
B56f8a8:L56f8a8:{c.instructions+=4;NFSU2_TR(0x56f8a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f8ab:{NFSU2_TR(0x56f8ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f8b1:{NFSU2_TR(0x56f8b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f8b3:{NFSU2_TR(0x56f8b3);
if(r1(R+518)){{goto L56f8c8;}}
}
B56f8b5:L56f8b5:{c.instructions+=3;NFSU2_TR(0x56f8b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f8b8:{NFSU2_TR(0x56f8b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f8ba:{NFSU2_TR(0x56f8ba);
if(r1(R+518)){{goto L56f8c8;}}
}
B56f8bc:L56f8bc:{c.instructions+=3;NFSU2_TR(0x56f8bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f8be:{NFSU2_TR(0x56f8be);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f8c3:{NFSU2_TR(0x56f8c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f8c8ull));
TAIL_STATIC(0x56eab0u,56e);
}
B56f8c8:L56f8c8:{c.instructions+=4;NFSU2_TR(0x56f8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f8cb:{NFSU2_TR(0x56f8cb);
{u32 ea_=u32(u32(7986200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f8d1:{NFSU2_TR(0x56f8d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f8d3:{NFSU2_TR(0x56f8d3);
if(r1(R+518)){{goto L56f909;}}
}
B56f8d5:L56f8d5:{c.instructions+=2;NFSU2_TR(0x56f8d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f8da:{NFSU2_TR(0x56f8da);
if(r1(R+518)){{goto L56f909;}}
}
B56f8dc:L56f8dc:{c.instructions+=3;NFSU2_TR(0x56f8dc);
w4(R+4,u32(0x89cf48ull));
}
B56f8e1:{NFSU2_TR(0x56f8e1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56f8e3:{NFSU2_TR(0x56f8e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f8e8ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56f8e8:L56f8e8:{c.instructions+=3;NFSU2_TR(0x56f8e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f8ea:{NFSU2_TR(0x56f8ea);
w4(R+0,u32(0x8651acull));
}
B56f8ef:{NFSU2_TR(0x56f8ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f8f6;}}
}
B56f8f1:L56f8f1:{c.instructions+=1;NFSU2_TR(0x56f8f1);
w4(R+0,u32(0x86518cull));
}
B56f8f6:L56f8f6:{c.instructions+=5;NFSU2_TR(0x56f8f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56f8f8:{NFSU2_TR(0x56f8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B56f8fb:{NFSU2_TR(0x56f8fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f8ff:{NFSU2_TR(0x56f8ff);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56f903:{NFSU2_TR(0x56f903);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56f909:L56f909:{c.instructions+=4;NFSU2_TR(0x56f909);
{u32 ea_=u32(u32(7985956u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f90f:{NFSU2_TR(0x56f90f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f911:{NFSU2_TR(0x56f911);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56f914:{NFSU2_TR(0x56f914);
if(r1(R+514)){{goto L56f94d;}}
}
B56f916:L56f916:{c.instructions+=5;NFSU2_TR(0x56f916);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56f919:{NFSU2_TR(0x56f919);
{u32 ea_=u32(u32(7986032u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56f91f:{NFSU2_TR(0x56f91f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56f921:{NFSU2_TR(0x56f921);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f924:{NFSU2_TR(0x56f924);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f94d;}}
}
B56f926:L56f926:{c.instructions+=4;NFSU2_TR(0x56f926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56f929:{NFSU2_TR(0x56f929);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f92f:{NFSU2_TR(0x56f92f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f931:{NFSU2_TR(0x56f931);
if(r1(R+518)){{goto L56f94d;}}
}
B56f933:L56f933:{c.instructions+=3;NFSU2_TR(0x56f933);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f936:{NFSU2_TR(0x56f936);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f938:{NFSU2_TR(0x56f938);
if(r1(R+518)){{goto L56f94d;}}
}
B56f93a:L56f93a:{c.instructions+=3;NFSU2_TR(0x56f93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56f93d:{NFSU2_TR(0x56f93d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56f93f:{NFSU2_TR(0x56f93f);
if(r1(R+518)){{goto L56f946;}}
}
B56f941:L56f941:{c.instructions+=2;NFSU2_TR(0x56f941);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f944:{NFSU2_TR(0x56f944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f94d;}}
}
B56f946:L56f946:{c.instructions+=2;NFSU2_TR(0x56f946);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f948:{NFSU2_TR(0x56f948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f94dull));
TAIL_STATIC(0x56d5c0u,56d);
}
B56f94d:L56f94d:{c.instructions+=4;NFSU2_TR(0x56f94d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56f94e:{NFSU2_TR(0x56f94e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56f94f:{NFSU2_TR(0x56f94f);
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
B56f952:{NFSU2_TR(0x56f952);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56f960:L56f960:{c.instructions+=10;NFSU2_TR(0x56f960);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f961:{NFSU2_TR(0x56f961);
__builtin_memmove((R+24),(R+4),4);
}
B56f963:{NFSU2_TR(0x56f963);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56f965:{NFSU2_TR(0x56f965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56f967:{NFSU2_TR(0x56f967);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f969:{NFSU2_TR(0x56f969);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f96b:{NFSU2_TR(0x56f96b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8e0ull))));
}
B56f970:{NFSU2_TR(0x56f970);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f971:{NFSU2_TR(0x56f971);
w4(R+4,u32(0x88f298ull));
}
B56f976:{NFSU2_TR(0x56f976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f97bull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B56f97b:L56f97b:{c.instructions+=2;NFSU2_TR(0x56f97b);
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
B56f97d:{NFSU2_TR(0x56f97d);
if(r1(R+518)){{goto L56f9a9;}}
}
B56f97f:L56f97f:{c.instructions+=2;NFSU2_TR(0x56f97f);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B56f984:{NFSU2_TR(0x56f984);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f9a9;}}
}
B56f986:L56f986:{c.instructions+=5;NFSU2_TR(0x56f986);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B56f98c:{NFSU2_TR(0x56f98c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f98f:{NFSU2_TR(0x56f98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f992:{NFSU2_TR(0x56f992);
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
B56f994:{NFSU2_TR(0x56f994);
if(r1(R+518)){{goto L56f9a9;}}
}
B56f996:L56f996:{c.instructions+=3;NFSU2_TR(0x56f996);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56f999:{NFSU2_TR(0x56f999);
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
B56f99b:{NFSU2_TR(0x56f99b);
if(r1(R+518)){{goto L56f9a9;}}
}
B56f99d:L56f99d:{c.instructions+=3;NFSU2_TR(0x56f99d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f99f:{NFSU2_TR(0x56f99f);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f9a4:{NFSU2_TR(0x56f9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f9a9ull));
TAIL_STATIC(0x56eab0u,56e);
}
B56f9a9:L56f9a9:{c.instructions+=2;NFSU2_TR(0x56f9a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56f9aa:{NFSU2_TR(0x56f9aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56f9b0:L56f9b0:{c.instructions+=11;NFSU2_TR(0x56f9b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f9b1:{NFSU2_TR(0x56f9b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f9b2:{NFSU2_TR(0x56f9b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f9b3:{NFSU2_TR(0x56f9b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f9b4:{NFSU2_TR(0x56f9b4);
__builtin_memmove((R+12),(R+4),4);
}
B56f9b6:{NFSU2_TR(0x56f9b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56f9b8:{NFSU2_TR(0x56f9b8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B56f9ba:{NFSU2_TR(0x56f9ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f9bb:{NFSU2_TR(0x56f9bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B56f9bd:{NFSU2_TR(0x56f9bd);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B56f9bf:{NFSU2_TR(0x56f9bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56f9c3:L56f9c3:{c.instructions+=3;NFSU2_TR(0x56f9c3);
u8 U[13];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B56f9ca:{NFSU2_TR(0x56f9ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56f9cc:{NFSU2_TR(0x56f9cc);
if(r1(R+518)){{goto L56f9cf;}}
}
B56f9ce:L56f9ce:{c.instructions+=1;NFSU2_TR(0x56f9ce);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B56f9cf:L56f9cf:{c.instructions+=3;NFSU2_TR(0x56f9cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f9d0:{NFSU2_TR(0x56f9d0);
__builtin_memmove((R+4),(R+28),4);
}
B56f9d2:{NFSU2_TR(0x56f9d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f9d7ull));
TAIL_STATIC(0x5ed470u,5ed);
}
B56f9d7:L56f9d7:{c.instructions+=2;NFSU2_TR(0x56f9d7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f9da:{NFSU2_TR(0x56f9da);
if(r1(R+518)){{goto L56f9e9;}}
}
B56f9dc:L56f9dc:{c.instructions+=3;NFSU2_TR(0x56f9dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56f9dd:{NFSU2_TR(0x56f9dd);
__builtin_memmove((R+4),(R+28),4);
}
B56f9df:{NFSU2_TR(0x56f9df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56f9e4ull));
TAIL_STATIC(0x5ed470u,5ed);
}
B56f9e4:L56f9e4:{c.instructions+=2;NFSU2_TR(0x56f9e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56f9e7:{NFSU2_TR(0x56f9e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56f9ed;}}
}
B56f9e9:L56f9e9:{c.instructions+=1;NFSU2_TR(0x56f9e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B56f9ed:L56f9ed:{c.instructions+=3;NFSU2_TR(0x56f9ed);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B56f9ee:{NFSU2_TR(0x56f9ee);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56f9f1:{NFSU2_TR(0x56f9f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56f9c3u);}goto L56f9c3;}}
}
B56f9f3:L56f9f3:{c.instructions+=2;NFSU2_TR(0x56f9f3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56f9f6:{NFSU2_TR(0x56f9f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L56fa18;}}
}
B56f9f8:L56f9f8:{c.instructions+=4;NFSU2_TR(0x56f9f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56f9fb:{NFSU2_TR(0x56f9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fa01:{NFSU2_TR(0x56fa01);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56fa03:{NFSU2_TR(0x56fa03);
if(r1(R+518)){{goto L56fa18;}}
}
B56fa05:L56fa05:{c.instructions+=3;NFSU2_TR(0x56fa05);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56fa08:{NFSU2_TR(0x56fa08);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56fa0a:{NFSU2_TR(0x56fa0a);
if(r1(R+518)){{goto L56fa18;}}
}
B56fa0c:L56fa0c:{c.instructions+=3;NFSU2_TR(0x56fa0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fa0e:{NFSU2_TR(0x56fa0e);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fa13:{NFSU2_TR(0x56fa13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fa18ull));
TAIL_STATIC(0x56eab0u,56e);
}
B56fa18:L56fa18:{c.instructions+=3;NFSU2_TR(0x56fa18);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56fa1c:{NFSU2_TR(0x56fa1c);
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
B56fa1e:{NFSU2_TR(0x56fa1e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56fa54;}}
}
B56fa20:L56fa20:{c.instructions+=2;NFSU2_TR(0x56fa20);
__builtin_memmove((R+4),(R+28),4);
}
B56fa22:{NFSU2_TR(0x56fa22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fa27ull));
TAIL_STATIC(0x5ed290u,5ed);
}
B56fa27:L56fa27:{c.instructions+=2;NFSU2_TR(0x56fa27);
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
B56fa29:{NFSU2_TR(0x56fa29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fa54;}}
}
B56fa2b:L56fa2b:{c.instructions+=4;NFSU2_TR(0x56fa2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56fa2e:{NFSU2_TR(0x56fa2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fa34:{NFSU2_TR(0x56fa34);
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
B56fa36:{NFSU2_TR(0x56fa36);
if(r1(R+518)){{goto L56fa54;}}
}
B56fa38:L56fa38:{c.instructions+=3;NFSU2_TR(0x56fa38);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56fa3b:{NFSU2_TR(0x56fa3b);
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
B56fa3d:{NFSU2_TR(0x56fa3d);
if(r1(R+518)){{goto L56fa54;}}
}
B56fa3f:L56fa3f:{c.instructions+=6;NFSU2_TR(0x56fa3f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56fa43:{NFSU2_TR(0x56fa43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fa45:{NFSU2_TR(0x56fa45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fa46:{NFSU2_TR(0x56fa46);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56fa4c:{NFSU2_TR(0x56fa4c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56fa4f:{NFSU2_TR(0x56fa4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fa54ull));
TAIL_STATIC(0x56eab0u,56e);
}
B56fa54:L56fa54:{c.instructions+=6;NFSU2_TR(0x56fa54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56fa55:{NFSU2_TR(0x56fa55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56fa56:{NFSU2_TR(0x56fa56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56fa57:{NFSU2_TR(0x56fa57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56fa58:{NFSU2_TR(0x56fa58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56fa59:{NFSU2_TR(0x56fa59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56fa60:L56fa60:{c.instructions+=7;NFSU2_TR(0x56fa60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fa61:{NFSU2_TR(0x56fa61);
__builtin_memmove((R+24),(R+4),4);
}
B56fa63:{NFSU2_TR(0x56fa63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56fa65:{NFSU2_TR(0x56fa65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fa66:{NFSU2_TR(0x56fa66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B56fa68:{NFSU2_TR(0x56fa68);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56fa6f:{NFSU2_TR(0x56fa6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fb10;}}
}
B56fa75:L56fa75:{c.instructions+=1;NFSU2_TR(0x56fa75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fa7aull));
TAIL_STATIC(0x56cfd0u,56c);
}
B56fa7a:L56fa7a:{c.instructions+=4;NFSU2_TR(0x56fa7a);
{u32 ea_=u32(u32(7985952u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56fa80:{NFSU2_TR(0x56fa80);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56fa82:{NFSU2_TR(0x56fa82);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56fa85:{NFSU2_TR(0x56fa85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fb10;}}
}
B56fa8b:L56fa8b:{c.instructions+=5;NFSU2_TR(0x56fa8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56fa8e:{NFSU2_TR(0x56fa8e);
{u32 ea_=u32(r4(R+28)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56fa94:{NFSU2_TR(0x56fa94);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B56fa97:{NFSU2_TR(0x56fa97);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B56fa9a:{NFSU2_TR(0x56fa9a);
if(r1(R+518)){{goto L56faf6;}}
}
B56fa9c:L56fa9c:{c.instructions+=2;NFSU2_TR(0x56fa9c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B56fa9d:{NFSU2_TR(0x56fa9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fab6;}}
}
B56fa9f:L56fa9f:{c.instructions+=5;NFSU2_TR(0x56fa9f);
{u32 ea_=u32(r4(R+28)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56faa5:{NFSU2_TR(0x56faa5);
{u32 ea_=u32(u32(7986044u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56faab:{NFSU2_TR(0x56faab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56faad:{NFSU2_TR(0x56faad);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56fab0:{NFSU2_TR(0x56fab0);
if(r1(R+514)){{goto L56fae2;}}
}
B56fab2:L56fab2:{c.instructions+=1;NFSU2_TR(0x56fab2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56fab6:L56fab6:{c.instructions+=1;NFSU2_TR(0x56fab6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56fab8:L56fab8:{c.instructions+=2;NFSU2_TR(0x56fab8);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x2ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B56fabc:{NFSU2_TR(0x56fabc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fadf;}}
}
B56fabe:L56fabe:{c.instructions+=4;NFSU2_TR(0x56fabe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fac1:{NFSU2_TR(0x56fac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fac4:{NFSU2_TR(0x56fac4);
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
B56fac6:{NFSU2_TR(0x56fac6);
if(r1(R+518)){{goto L56fadb;}}
}
B56fac8:L56fac8:{c.instructions+=3;NFSU2_TR(0x56fac8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56facb:{NFSU2_TR(0x56facb);
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
B56facd:{NFSU2_TR(0x56facd);
if(r1(R+518)){{goto L56fadb;}}
}
B56facf:L56facf:{c.instructions+=3;NFSU2_TR(0x56facf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fad1:{NFSU2_TR(0x56fad1);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fad6:{NFSU2_TR(0x56fad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fadbull));
TAIL_STATIC(0x56eab0u,56e);
}
B56fadb:L56fadb:{c.instructions+=1;NFSU2_TR(0x56fadb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56fadf:L56fadf:{c.instructions+=3;NFSU2_TR(0x56fadf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56fae0:{NFSU2_TR(0x56fae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56fae1:{NFSU2_TR(0x56fae1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56fae2:L56fae2:{c.instructions+=4;NFSU2_TR(0x56fae2);
{u32 ea_=u32(u32(7986044u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56fae8:{NFSU2_TR(0x56fae8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56faea:{NFSU2_TR(0x56faea);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56faed:{NFSU2_TR(0x56faed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56fab8u);}goto L56fab8;}}
}
B56faef:L56faef:{c.instructions+=3;NFSU2_TR(0x56faef);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B56faf1:{NFSU2_TR(0x56faf1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56faf4:{NFSU2_TR(0x56faf4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56fab8u);}goto L56fab8;}
}
B56faf6:L56faf6:{c.instructions+=7;NFSU2_TR(0x56faf6);
{u32 ea_=u32(u32(7986040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56fafc:{NFSU2_TR(0x56fafc);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B56fafe:{NFSU2_TR(0x56fafe);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B56fb00:{NFSU2_TR(0x56fb00);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B56fb02:{NFSU2_TR(0x56fb02);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56fb04:{NFSU2_TR(0x56fb04);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56fb07:{NFSU2_TR(0x56fb07);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56fab8u);}goto L56fab8;}}
}
B56fb09:L56fb09:{c.instructions+=3;NFSU2_TR(0x56fb09);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B56fb0b:{NFSU2_TR(0x56fb0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56fb0e:{NFSU2_TR(0x56fb0e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56fab8u);}goto L56fab8;}
}
B56fb10:L56fb10:{c.instructions+=2;NFSU2_TR(0x56fb10);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56fb14:{NFSU2_TR(0x56fb14);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56fab8u);}goto L56fab8;}
}
B56fb20:L56fb20:{c.instructions+=10;NFSU2_TR(0x56fb20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B56fb23:{NFSU2_TR(0x56fb23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fb24:{NFSU2_TR(0x56fb24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fb25:{NFSU2_TR(0x56fb25);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56fb29:{NFSU2_TR(0x56fb29);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56fb2c:{NFSU2_TR(0x56fb2c);
__builtin_memmove((R+24),(R+4),4);
}
B56fb2e:{NFSU2_TR(0x56fb2e);
{u32 ea_=u32(u32(7985964u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56fb34:{NFSU2_TR(0x56fb34);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56fb36:{NFSU2_TR(0x56fb36);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56fb39:{NFSU2_TR(0x56fb39);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L56fc8a;}}
}
B56fb3f:L56fb3f:{c.instructions+=9;NFSU2_TR(0x56fb3f);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B56fb44:{NFSU2_TR(0x56fb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B56fb47:{NFSU2_TR(0x56fb47);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fb4b:{NFSU2_TR(0x56fb4b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56fb4f:{NFSU2_TR(0x56fb4f);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56fb55:{NFSU2_TR(0x56fb55);
{u32 ea_=u32(u32(7985952u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56fb5b:{NFSU2_TR(0x56fb5b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56fb5d:{NFSU2_TR(0x56fb5d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56fb60:{NFSU2_TR(0x56fb60);
if(r1(R+518)){{goto L56fc8a;}}
}
B56fb66:L56fb66:{c.instructions+=3;NFSU2_TR(0x56fb66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fb67:{NFSU2_TR(0x56fb67);
__builtin_memmove((R+4),(R+28),4);
}
B56fb69:{NFSU2_TR(0x56fb69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fb6eull));
TAIL_STATIC(0x5a0160u,5a0);
}
B56fb6e:L56fb6e:{c.instructions+=3;NFSU2_TR(0x56fb6e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B56fb70:{NFSU2_TR(0x56fb70);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56fb72:{NFSU2_TR(0x56fb72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fba2;}}
}
B56fb74:L56fb74:{c.instructions+=2;NFSU2_TR(0x56fb74);
__builtin_memmove((R+4),(R+28),4);
}
B56fb76:{NFSU2_TR(0x56fb76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fb7bull));
TAIL_STATIC(0x592c60u,592);
}
B56fb7b:L56fb7b:{c.instructions+=2;NFSU2_TR(0x56fb7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56fb7d:{NFSU2_TR(0x56fb7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fba2;}}
}
B56fb7f:L56fb7f:{c.instructions+=4;NFSU2_TR(0x56fb7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56fb81:{NFSU2_TR(0x56fb81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56fb83:{NFSU2_TR(0x56fb83);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56fb89:{NFSU2_TR(0x56fb89);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56fba2;}}
}
B56fb8b:L56fb8b:{c.instructions+=5;NFSU2_TR(0x56fb8b);
{u32 ea_=u32(r4(R+0)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56fb91:{NFSU2_TR(0x56fb91);
{u32 ea_=u32(u32(7885040u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56fb97:{NFSU2_TR(0x56fb97);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56fb99:{NFSU2_TR(0x56fb99);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56fb9c:{NFSU2_TR(0x56fb9c);
if(r1(R+518)){{goto L56fc89;}}
}
B56fba2:L56fba2:{c.instructions+=5;NFSU2_TR(0x56fba2);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56fba5:{NFSU2_TR(0x56fba5);
{u32 ea_=u32(u32(7985948u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56fbab:{NFSU2_TR(0x56fbab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56fbad:{NFSU2_TR(0x56fbad);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56fbb0:{NFSU2_TR(0x56fbb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fbbb;}}
}
B56fbb2:L56fbb2:{c.instructions+=3;NFSU2_TR(0x56fbb2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56fbb5:{NFSU2_TR(0x56fbb5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56fbb8:{NFSU2_TR(0x56fbb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56fbbb:L56fbbb:{c.instructions+=3;NFSU2_TR(0x56fbbb);
__builtin_memmove((R+4),(R+28),4);
}
B56fbbd:{NFSU2_TR(0x56fbbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56fbc0:{NFSU2_TR(0x56fbc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fbc5ull));
TAIL_STATIC(0x592c60u,592);
}
B56fbc5:L56fbc5:{c.instructions+=2;NFSU2_TR(0x56fbc5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56fbc7:{NFSU2_TR(0x56fbc7);
if(r1(R+518)){{goto L56fc5f;}}
}
B56fbcd:L56fbcd:{c.instructions+=6;NFSU2_TR(0x56fbcd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56fbd1:{NFSU2_TR(0x56fbd1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fbd2:{NFSU2_TR(0x56fbd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B56fbd6:{NFSU2_TR(0x56fbd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fbd7:{NFSU2_TR(0x56fbd7);
__builtin_memmove((R+4),(R+28),4);
}
B56fbd9:{NFSU2_TR(0x56fbd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fbdeull));
TAIL_STATIC(0x592c90u,592);
}
B56fbde:L56fbde:{c.instructions+=6;NFSU2_TR(0x56fbde);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fbe2:{NFSU2_TR(0x56fbe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56fbe5:{NFSU2_TR(0x56fbe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fbe8:{NFSU2_TR(0x56fbe8);
w4(R+0,u32(0x3ull));
}
B56fbed:{NFSU2_TR(0x56fbed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fbef:{NFSU2_TR(0x56fbef);
if(r1(R+518)){{goto L56fbfd;}}
}
B56fbf1:L56fbf1:{c.instructions+=4;NFSU2_TR(0x56fbf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fbf5:{NFSU2_TR(0x56fbf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56fbf8:{NFSU2_TR(0x56fbf8);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56fbfb:{NFSU2_TR(0x56fbfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fc44;}}
}
B56fbfd:L56fbfd:{c.instructions+=7;NFSU2_TR(0x56fbfd);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56fc00:{NFSU2_TR(0x56fc00);
{u32 ea_=u32(u32(7985960u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B56fc06:{NFSU2_TR(0x56fc06);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56fc0c:{NFSU2_TR(0x56fc0c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56fc0e:{NFSU2_TR(0x56fc0e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56fc10:{NFSU2_TR(0x56fc10);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56fc13:{NFSU2_TR(0x56fc13);
if(r1(R+514)){{goto L56fc21;}}
}
B56fc15:L56fc15:{c.instructions+=3;NFSU2_TR(0x56fc15);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56fc17:{NFSU2_TR(0x56fc17);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56fc1f:{NFSU2_TR(0x56fc1f);
{goto L56fc25;}
}
B56fc21:L56fc21:{c.instructions+=1;NFSU2_TR(0x56fc21);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56fc25:L56fc25:{c.instructions+=2;NFSU2_TR(0x56fc25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56fc27:{NFSU2_TR(0x56fc27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fc2cull));
TAIL_STATIC(0x5ee250u,5ee);
}
B56fc2c:L56fc2c:{c.instructions+=2;NFSU2_TR(0x56fc2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56fc2e:{NFSU2_TR(0x56fc2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fc40;}}
}
B56fc30:L56fc30:{c.instructions+=6;NFSU2_TR(0x56fc30);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56fc34:{NFSU2_TR(0x56fc34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fc37:{NFSU2_TR(0x56fc37);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fc38:{NFSU2_TR(0x56fc38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fc39:{NFSU2_TR(0x56fc39);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fc3b:{NFSU2_TR(0x56fc3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fc40ull));
TAIL_STATIC(0x56ed10u,56e);
}
B56fc40:L56fc40:{c.instructions+=1;NFSU2_TR(0x56fc40);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56fc44:L56fc44:{c.instructions+=4;NFSU2_TR(0x56fc44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fc47:{NFSU2_TR(0x56fc47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56fc4a:{NFSU2_TR(0x56fc4a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fc4c:{NFSU2_TR(0x56fc4c);
if(r1(R+518)){{goto L56fc5a;}}
}
B56fc4e:L56fc4e:{c.instructions+=2;NFSU2_TR(0x56fc4e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B56fc51:{NFSU2_TR(0x56fc51);
if(r1(R+518)){{goto L56fc5a;}}
}
B56fc53:L56fc53:{c.instructions+=1;NFSU2_TR(0x56fc53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56fc5a:L56fc5a:{c.instructions+=2;NFSU2_TR(0x56fc5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fc5d:{NFSU2_TR(0x56fc5d);
{goto L56fc66;}
}
B56fc5f:L56fc5f:{c.instructions+=1;NFSU2_TR(0x56fc5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56fc66:L56fc66:{c.instructions+=2;NFSU2_TR(0x56fc66);
w4(R+4,u32(0x89cf48ull));
}
B56fc6b:{NFSU2_TR(0x56fc6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fc70ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56fc70:L56fc70:{c.instructions+=3;NFSU2_TR(0x56fc70);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56fc72:{NFSU2_TR(0x56fc72);
w4(R+0,u32(0x8651acull));
}
B56fc77:{NFSU2_TR(0x56fc77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fc7e;}}
}
B56fc79:L56fc79:{c.instructions+=1;NFSU2_TR(0x56fc79);
w4(R+0,u32(0x86518cull));
}
B56fc7e:L56fc7e:{c.instructions+=4;NFSU2_TR(0x56fc7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56fc80:{NFSU2_TR(0x56fc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fc83:{NFSU2_TR(0x56fc83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56fc86:{NFSU2_TR(0x56fc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fc89:L56fc89:{c.instructions+=1;NFSU2_TR(0x56fc89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56fc8a:L56fc8a:{c.instructions+=4;NFSU2_TR(0x56fc8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56fc8b:{NFSU2_TR(0x56fc8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56fc8c:{NFSU2_TR(0x56fc8c);
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
B56fc8f:{NFSU2_TR(0x56fc8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56fca0:L56fca0:{c.instructions+=5;NFSU2_TR(0x56fca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fca1:{NFSU2_TR(0x56fca1);
__builtin_memmove((R+24),(R+4),4);
}
B56fca3:{NFSU2_TR(0x56fca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56fca5:{NFSU2_TR(0x56fca5);
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
B56fca7:{NFSU2_TR(0x56fca7);
if(r1(R+518)){{goto L56fccf;}}
}
B56fca9:L56fca9:{c.instructions+=1;NFSU2_TR(0x56fca9);
__builtin_memmove((R+16),(R+16),4);
}
B56fcb0:L56fcb0:{c.instructions+=8;NFSU2_TR(0x56fcb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56fcb2:{NFSU2_TR(0x56fcb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56fcb5:{NFSU2_TR(0x56fcb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B56fcb7:{NFSU2_TR(0x56fcb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fcb8:{NFSU2_TR(0x56fcb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fcbb:{NFSU2_TR(0x56fcbb);
__builtin_memmove((R+0),gp(0x864628),4);
}
B56fcc0:{NFSU2_TR(0x56fcc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fcc1:{NFSU2_TR(0x56fcc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fcc6ull));
TAIL_STATIC(0x43f920u,43f);
}
B56fcc6:L56fcc6:{c.instructions+=4;NFSU2_TR(0x56fcc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56fcc8:{NFSU2_TR(0x56fcc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56fccb:{NFSU2_TR(0x56fccb);
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
B56fccd:{NFSU2_TR(0x56fccd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56fcb0u);}goto L56fcb0;}}
}
B56fccf:L56fccf:{c.instructions+=2;NFSU2_TR(0x56fccf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56fcd0:{NFSU2_TR(0x56fcd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56fce0:L56fce0:{c.instructions+=4;NFSU2_TR(0x56fce0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fce1:{NFSU2_TR(0x56fce1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fce2:{NFSU2_TR(0x56fce2);
__builtin_memmove((R+28),(R+4),4);
}
B56fce4:{NFSU2_TR(0x56fce4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B56fce6:L56fce6:{c.instructions+=3;NFSU2_TR(0x56fce6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B56fce9:{NFSU2_TR(0x56fce9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56fceb:{NFSU2_TR(0x56fceb);
if(r1(R+518)){{goto L56fcfc;}}
}
B56fced:L56fced:{c.instructions+=4;NFSU2_TR(0x56fced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fcee:{NFSU2_TR(0x56fcee);
__builtin_memmove((R+0),gp(0x864628),4);
}
B56fcf3:{NFSU2_TR(0x56fcf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fcf4:{NFSU2_TR(0x56fcf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fcf9ull));
TAIL_STATIC(0x43f920u,43f);
}
B56fcf9:L56fcf9:{c.instructions+=1;NFSU2_TR(0x56fcf9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56fcfc:L56fcfc:{c.instructions+=3;NFSU2_TR(0x56fcfc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B56fcfd:{NFSU2_TR(0x56fcfd);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x27ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x27ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x27ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56fd00:{NFSU2_TR(0x56fd00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56fce6u);}goto L56fce6;}}
}
B56fd02:L56fd02:{c.instructions+=3;NFSU2_TR(0x56fd02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56fd03:{NFSU2_TR(0x56fd03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56fd04:{NFSU2_TR(0x56fd04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56fd10:L56fd10:{c.instructions+=14;NFSU2_TR(0x56fd10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fd12:{NFSU2_TR(0x56fd12);
u8 U[4];
w4(U+0,u32(0x778788ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fd17:{NFSU2_TR(0x56fd17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56fd1d:{NFSU2_TR(0x56fd1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fd1e:{NFSU2_TR(0x56fd1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fd25:{NFSU2_TR(0x56fd25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B56fd28:{NFSU2_TR(0x56fd28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fd29:{NFSU2_TR(0x56fd29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fd2a:{NFSU2_TR(0x56fd2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fd2b:{NFSU2_TR(0x56fd2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fd2c:{NFSU2_TR(0x56fd2c);
__builtin_memmove((R+28),(R+4),4);
}
B56fd2e:{NFSU2_TR(0x56fd2e);
w4(R+4,u32(0x89cf48ull));
}
B56fd33:{NFSU2_TR(0x56fd33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fd37:{NFSU2_TR(0x56fd37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fd3cull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56fd3c:L56fd3c:{c.instructions+=2;NFSU2_TR(0x56fd3c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56fd3e:{NFSU2_TR(0x56fd3e);
if(r1(R+518)){{goto L56fd49;}}
}
B56fd40:L56fd40:{c.instructions+=2;NFSU2_TR(0x56fd40);
__builtin_memmove((R+0),gp(0x865198),4);
}
B56fd45:{NFSU2_TR(0x56fd45);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fd49:L56fd49:{c.instructions+=4;NFSU2_TR(0x56fd49);
__builtin_memmove((R+0),gp(0x864620),4);
}
B56fd4e:{NFSU2_TR(0x56fd4e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B56fd50:{NFSU2_TR(0x56fd50);
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
B56fd52:{NFSU2_TR(0x56fd52);
if(r1(R+518)){{goto L56fd5f;}}
}
B56fd54:L56fd54:{c.instructions+=1;NFSU2_TR(0x56fd54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fd59ull));
TAIL_STATIC(0x4022c0u,402);
}
B56fd59:L56fd59:{c.instructions+=1;NFSU2_TR(0x56fd59);
__builtin_memmove(gp(0x864620),(R+12),4);
}
B56fd5f:L56fd5f:{c.instructions+=8;NFSU2_TR(0x56fd5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B56fd63:{NFSU2_TR(0x56fd63);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B56fd67:{NFSU2_TR(0x56fd67);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fd6b:{NFSU2_TR(0x56fd6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fd6f:{NFSU2_TR(0x56fd6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fd75:{NFSU2_TR(0x56fd75);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fd79:{NFSU2_TR(0x56fd79);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56fd7b:{NFSU2_TR(0x56fd7b);
{goto L56fd80;}
}
B56fd80:L56fd80:{c.instructions+=4;NFSU2_TR(0x56fd80);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fd84:{NFSU2_TR(0x56fd84);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B56fd87:{NFSU2_TR(0x56fd87);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fd89:{NFSU2_TR(0x56fd89);
if(r1(R+518)){{goto L56fde5;}}
}
B56fd8b:L56fd8b:{c.instructions+=2;NFSU2_TR(0x56fd8b);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B56fd8e:{NFSU2_TR(0x56fd8e);
if(r1(R+518)){{goto L56fde5;}}
}
B56fd90:L56fd90:{c.instructions+=3;NFSU2_TR(0x56fd90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fd93:{NFSU2_TR(0x56fd93);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fd95:{NFSU2_TR(0x56fd95);
if(r1(R+518)){{goto L56fda1;}}
}
B56fd97:L56fd97:{c.instructions+=2;NFSU2_TR(0x56fd97);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fd9a:{NFSU2_TR(0x56fd9a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56fdc0;}}
}
B56fd9c:L56fd9c:{c.instructions+=2;NFSU2_TR(0x56fd9c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fd9f:{NFSU2_TR(0x56fd9f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L56fdc0;}}
}
B56fda1:L56fda1:{c.instructions+=2;NFSU2_TR(0x56fda1);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B56fda4:{NFSU2_TR(0x56fda4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fdc0;}}
}
B56fda6:L56fda6:{c.instructions+=8;NFSU2_TR(0x56fda6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B56fda9:{NFSU2_TR(0x56fda9);
__builtin_memmove((R+4),(R+20),4);
}
B56fdab:{NFSU2_TR(0x56fdab);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fdaf:{NFSU2_TR(0x56fdaf);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56fdb3:{NFSU2_TR(0x56fdb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fdb6:{NFSU2_TR(0x56fdb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B56fdb8:{NFSU2_TR(0x56fdb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B56fdbc:{NFSU2_TR(0x56fdbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56fdc0:L56fdc0:{c.instructions+=2;NFSU2_TR(0x56fdc0);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B56fdc3:{NFSU2_TR(0x56fdc3);
if(r1(R+518)){{goto L56fde5;}}
}
B56fdc5:L56fdc5:{c.instructions+=2;NFSU2_TR(0x56fdc5);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56fdc8:{NFSU2_TR(0x56fdc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fdcdull));
TAIL_STATIC(0x75bed4u,75b);
}
B56fdcd:L56fdcd:{c.instructions+=5;NFSU2_TR(0x56fdcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fdd1:{NFSU2_TR(0x56fdd1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56fdd5:{NFSU2_TR(0x56fdd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56fdd9:{NFSU2_TR(0x56fdd9);
{u32 ea_=u32(r4(R+0)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56fddf:{NFSU2_TR(0x56fddf);
{u32 ea_=u32(r4(R+0)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56fde5:L56fde5:{c.instructions+=3;NFSU2_TR(0x56fde5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B56fde6:{NFSU2_TR(0x56fde6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x27ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x27ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56fde9:{NFSU2_TR(0x56fde9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56fd80u);}goto L56fd80;}}
}
B56fdeb:L56fdeb:{c.instructions+=3;NFSU2_TR(0x56fdeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B56fdef:{NFSU2_TR(0x56fdef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fdf1:{NFSU2_TR(0x56fdf1);
if(r1(R+518)){{goto L56fe5e;}}
}
B56fdf3:L56fdf3:{c.instructions+=2;NFSU2_TR(0x56fdf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fdf7:{NFSU2_TR(0x56fdf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fdfcull));
TAIL_STATIC(0x5ee3a0u,5ee);
}
B56fdfc:L56fdfc:{c.instructions+=2;NFSU2_TR(0x56fdfc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fdfe:{NFSU2_TR(0x56fdfe);
if(r1(R+518)){{goto L56fe3c;}}
}
B56fe00:L56fe00:{c.instructions+=5;NFSU2_TR(0x56fe00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56fe06:{NFSU2_TR(0x56fe06);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56fe0a:{NFSU2_TR(0x56fe0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fe0b:{NFSU2_TR(0x56fe0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fe0c:{NFSU2_TR(0x56fe0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fe11ull));
TAIL_STATIC(0x4da6f0u,4da);
}
B56fe11:L56fe11:{c.instructions+=3;NFSU2_TR(0x56fe11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56fe14:{NFSU2_TR(0x56fe14);
w4(R+4,u32(0x89cf48ull));
}
B56fe19:{NFSU2_TR(0x56fe19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fe1eull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56fe1e:L56fe1e:{c.instructions+=2;NFSU2_TR(0x56fe1e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56fe20:{NFSU2_TR(0x56fe20);
if(r1(R+518)){{goto L56fe3c;}}
}
B56fe22:L56fe22:{c.instructions+=7;NFSU2_TR(0x56fe22);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56fe26:{NFSU2_TR(0x56fe26);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56fe2c:{NFSU2_TR(0x56fe2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fe2d:{NFSU2_TR(0x56fe2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56fe31:{NFSU2_TR(0x56fe31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fe32:{NFSU2_TR(0x56fe32);
w4(R+4,u32(0x89cf48ull));
}
B56fe37:{NFSU2_TR(0x56fe37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fe3cull));
TAIL_STATIC(0x5fee50u,5fe);
}
B56fe3c:L56fe3c:{c.instructions+=4;NFSU2_TR(0x56fe3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56fe40:{NFSU2_TR(0x56fe40);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56fe44:{NFSU2_TR(0x56fe44);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fe46:{NFSU2_TR(0x56fe46);
if(r1(R+518)){{goto L56fe5e;}}
}
B56fe48:L56fe48:{c.instructions+=8;NFSU2_TR(0x56fe48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56fe4a:{NFSU2_TR(0x56fe4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56fe4d:{NFSU2_TR(0x56fe4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B56fe4f:{NFSU2_TR(0x56fe4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fe52:{NFSU2_TR(0x56fe52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56fe56:{NFSU2_TR(0x56fe56);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B56fe5a:{NFSU2_TR(0x56fe5a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fe5c:{NFSU2_TR(0x56fe5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56fe48u);}goto L56fe48;}}
}
B56fe5e:L56fe5e:{c.instructions+=2;NFSU2_TR(0x56fe5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B56fe62:{NFSU2_TR(0x56fe62);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56fe64:L56fe64:{c.instructions+=4;NFSU2_TR(0x56fe64);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56fe68:{NFSU2_TR(0x56fe68);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B56fe6b:{NFSU2_TR(0x56fe6b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fe6d:{NFSU2_TR(0x56fe6d);
if(r1(R+518)){{goto L56fecf;}}
}
B56fe6f:L56fe6f:{c.instructions+=2;NFSU2_TR(0x56fe6f);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B56fe72:{NFSU2_TR(0x56fe72);
if(r1(R+518)){{goto L56fecf;}}
}
B56fe74:L56fe74:{c.instructions+=3;NFSU2_TR(0x56fe74);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56fe77:{NFSU2_TR(0x56fe77);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fe7a:{NFSU2_TR(0x56fe7a);
if(r1(R+518)){{goto L56fe81;}}
}
B56fe7c:L56fe7c:{c.instructions+=2;NFSU2_TR(0x56fe7c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fe7f:{NFSU2_TR(0x56fe7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56fec5;}}
}
B56fe81:L56fe81:{c.instructions+=2;NFSU2_TR(0x56fe81);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B56fe84:{NFSU2_TR(0x56fe84);
if(r1(R+518)){{goto L56fe8b;}}
}
B56fe86:L56fe86:{c.instructions+=2;NFSU2_TR(0x56fe86);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56fe89:{NFSU2_TR(0x56fe89);
{goto L56fec5;}
}
B56fe8b:L56fe8b:{c.instructions+=5;NFSU2_TR(0x56fe8b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fe8e:{NFSU2_TR(0x56fe8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fe91:{NFSU2_TR(0x56fe91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fe94:{NFSU2_TR(0x56fe94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fe97:{NFSU2_TR(0x56fe97);
if(r1(R+518)){{goto L56fec5;}}
}
B56fe99:L56fe99:{c.instructions+=2;NFSU2_TR(0x56fe99);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fe9c:{NFSU2_TR(0x56fe9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56febe;}}
}
B56fe9e:L56fe9e:{c.instructions+=9;NFSU2_TR(0x56fe9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56fea1:{NFSU2_TR(0x56fea1);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56fea4:{NFSU2_TR(0x56fea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56fea7:{NFSU2_TR(0x56fea7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B56fea8:{NFSU2_TR(0x56fea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56feab:{NFSU2_TR(0x56feab);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56feae:{NFSU2_TR(0x56feae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56feb0:{NFSU2_TR(0x56feb0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56feb3:{NFSU2_TR(0x56feb3);
if(r1(R+514)){{goto L56febe;}}
}
B56feb5:L56feb5:{c.instructions+=3;NFSU2_TR(0x56feb5);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56feb8:{NFSU2_TR(0x56feb8);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56febb:{NFSU2_TR(0x56febb);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56febe:L56febe:{c.instructions+=1;NFSU2_TR(0x56febe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56fec5:L56fec5:{c.instructions+=2;NFSU2_TR(0x56fec5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fec6:{NFSU2_TR(0x56fec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fecbull));
TAIL_STATIC(0x56e920u,56e);
}
B56fecb:L56fecb:{c.instructions+=1;NFSU2_TR(0x56fecb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56fecf:L56fecf:{c.instructions+=3;NFSU2_TR(0x56fecf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B56fed0:{NFSU2_TR(0x56fed0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x27ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x27ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56fed3:{NFSU2_TR(0x56fed3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56fe64u);}goto L56fe64;}}
}
B56fed5:L56fed5:{c.instructions+=4;NFSU2_TR(0x56fed5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56fed9:{NFSU2_TR(0x56fed9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56fedb:{NFSU2_TR(0x56fedb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B56fee3:{NFSU2_TR(0x56fee3);
if(r1(R+518)){{goto L56ff0c;}}
}
B56fee5:L56fee5:{c.instructions+=9;NFSU2_TR(0x56fee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56fee7:{NFSU2_TR(0x56fee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56feea:{NFSU2_TR(0x56feea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B56feec:{NFSU2_TR(0x56feec);
__builtin_memmove((R+8),(R+24),4);
}
B56feee:{NFSU2_TR(0x56feee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56fef1:{NFSU2_TR(0x56fef1);
__builtin_memmove((R+0),gp(0x864628),4);
}
B56fef6:{NFSU2_TR(0x56fef6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fef7:{NFSU2_TR(0x56fef7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56fef8:{NFSU2_TR(0x56fef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56fefdull));
TAIL_STATIC(0x43f920u,43f);
}
B56fefd:L56fefd:{c.instructions+=5;NFSU2_TR(0x56fefd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56ff01:{NFSU2_TR(0x56ff01);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56ff05:{NFSU2_TR(0x56ff05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56ff08:{NFSU2_TR(0x56ff08);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ff0a:{NFSU2_TR(0x56ff0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56fee5u);}goto L56fee5;}}
}
B56ff0c:L56ff0c:{c.instructions+=8;NFSU2_TR(0x56ff0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ff10:{NFSU2_TR(0x56ff10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ff11:{NFSU2_TR(0x56ff11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ff12:{NFSU2_TR(0x56ff12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56ff13:{NFSU2_TR(0x56ff13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ff14:{NFSU2_TR(0x56ff14);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ff1b:{NFSU2_TR(0x56ff1b);
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
B56ff1e:{NFSU2_TR(0x56ff1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ff30:L56ff30:{c.instructions+=4;NFSU2_TR(0x56ff30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ff31:{NFSU2_TR(0x56ff31);
__builtin_memmove((R+24),(R+4),4);
}
B56ff33:{NFSU2_TR(0x56ff33);
w4(R+4,u32(0x89cf48ull));
}
B56ff38:{NFSU2_TR(0x56ff38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ff3dull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56ff3d:L56ff3d:{c.instructions+=2;NFSU2_TR(0x56ff3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ff3f:{NFSU2_TR(0x56ff3f);
if(r1(R+518)){{goto L56ff4b;}}
}
B56ff41:L56ff41:{c.instructions+=3;NFSU2_TR(0x56ff41);
__builtin_memmove((R+0),gp(0x890118),4);
}
B56ff46:{NFSU2_TR(0x56ff46);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B56ff49:{NFSU2_TR(0x56ff49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ff94;}}
}
B56ff4b:L56ff4b:{c.instructions+=2;NFSU2_TR(0x56ff4b);
w4(R+4,u32(0x89cf48ull));
}
B56ff50:{NFSU2_TR(0x56ff50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ff55ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56ff55:L56ff55:{c.instructions+=2;NFSU2_TR(0x56ff55);
__builtin_memmove((R+4),(R+24),4);
}
B56ff57:{NFSU2_TR(0x56ff57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ff5cull));
TAIL_STATIC(0x56eee0u,56e);
}
B56ff5c:L56ff5c:{c.instructions+=2;NFSU2_TR(0x56ff5c);
__builtin_memmove((R+4),(R+24),4);
}
B56ff5e:{NFSU2_TR(0x56ff5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ff63ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56f020u);}goto L56f020;}
}
B56ff63:L56ff63:{c.instructions+=2;NFSU2_TR(0x56ff63);
__builtin_memmove((R+4),(R+24),4);
}
B56ff65:{NFSU2_TR(0x56ff65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ff6aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56f4c0u);}goto L56f4c0;}
}
B56ff6a:L56ff6a:{c.instructions+=2;NFSU2_TR(0x56ff6a);
__builtin_memmove((R+4),(R+24),4);
}
B56ff6c:{NFSU2_TR(0x56ff6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ff71ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56f620u);}goto L56f620;}
}
B56ff71:L56ff71:{c.instructions+=2;NFSU2_TR(0x56ff71);
__builtin_memmove((R+4),(R+24),4);
}
B56ff73:{NFSU2_TR(0x56ff73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ff78ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56f170u);}goto L56f170;}
}
B56ff78:L56ff78:{c.instructions+=2;NFSU2_TR(0x56ff78);
__builtin_memmove((R+4),(R+24),4);
}
B56ff7a:{NFSU2_TR(0x56ff7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ff7full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56f720u);}goto L56f720;}
}
B56ff7f:L56ff7f:{c.instructions+=2;NFSU2_TR(0x56ff7f);
__builtin_memmove((R+4),(R+24),4);
}
B56ff81:{NFSU2_TR(0x56ff81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ff86ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56f960u);}goto L56f960;}
}
B56ff86:L56ff86:{c.instructions+=2;NFSU2_TR(0x56ff86);
__builtin_memmove((R+4),(R+24),4);
}
B56ff88:{NFSU2_TR(0x56ff88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ff8dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56fa60u);}goto L56fa60;}
}
B56ff8d:L56ff8d:{c.instructions+=2;NFSU2_TR(0x56ff8d);
__builtin_memmove((R+4),(R+24),4);
}
B56ff8f:{NFSU2_TR(0x56ff8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ff94ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56f9b0u);}goto L56f9b0;}
}
B56ff94:L56ff94:{c.instructions+=2;NFSU2_TR(0x56ff94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ff95:{NFSU2_TR(0x56ff95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ffa0:L56ffa0:{c.instructions+=3;NFSU2_TR(0x56ffa0);
__builtin_memmove((R+0),gp(0x864f18),4);
}
B56ffa5:{NFSU2_TR(0x56ffa5);
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
B56ffa7:{NFSU2_TR(0x56ffa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5701c7u,570);}
}
B56ffad:L56ffad:{c.instructions+=10;NFSU2_TR(0x56ffad);
u8 U[4];
w4(U+0,u32(0x865230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ffb2:{NFSU2_TR(0x56ffb2);
u8 U[4];
w4(U+0,u32(0x865230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ffb7:{NFSU2_TR(0x56ffb7);
s4(0x865230,u32(0x0ull));
}
B56ffc1:{NFSU2_TR(0x56ffc1);
s4(0x865234,u32(0xbf000000ull));
}
B56ffcb:{NFSU2_TR(0x56ffcb);
s4(0x865238,u32(0x3f800000ull));
}
B56ffd5:{NFSU2_TR(0x56ffd5);
s4(0x86523c,u32(0xbf000000ull));
}
B56ffdf:{NFSU2_TR(0x56ffdf);
s4(0x865240,u32(0x3f800000ull));
}
B56ffe9:{NFSU2_TR(0x56ffe9);
s4(0x865244,u32(0x0ull));
}
B56fff3:{NFSU2_TR(0x56fff3);
s4(0x865248,u32(0xc0200000ull));
}
B56fffd:{NFSU2_TR(0x56fffd);
s4(0x86524c,u32(0x3fc00000ull));
TAIL_STATIC(0x570007u,570);
}
XIT:NFSU2_TR_EXIT(0x56f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
