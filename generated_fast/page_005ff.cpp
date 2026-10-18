#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_417(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_422(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_448(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_572(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5ad(u8* __restrict R,Cpu& c);
u32 body_5ae(u8* __restrict R,Cpu& c);
u32 body_5af(u8* __restrict R,Cpu& c);
u32 body_5b1(u8* __restrict R,Cpu& c);
u32 body_5b2(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5df(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e5(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_600(u8* __restrict R,Cpu& c);
u32 body_605(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_61e(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ff,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ff,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ff(u8* __restrict R,Cpu& c);
u32 page_5ff(Cpu& c){return body_5ff(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ff(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ff000:goto L5ff000;
case 0x5ff003:c.instructions+=12;goto B5ff003;
case 0x5ff004:c.instructions+=11;goto B5ff004;
case 0x5ff005:c.instructions+=10;goto B5ff005;
case 0x5ff009:c.instructions+=9;goto B5ff009;
case 0x5ff00a:c.instructions+=8;goto B5ff00a;
case 0x5ff00c:c.instructions+=7;goto B5ff00c;
case 0x5ff010:c.instructions+=6;goto B5ff010;
case 0x5ff012:c.instructions+=5;goto B5ff012;
case 0x5ff014:c.instructions+=4;goto B5ff014;
case 0x5ff015:c.instructions+=3;goto B5ff015;
case 0x5ff017:c.instructions+=2;goto B5ff017;
case 0x5ff01b:c.instructions+=1;goto B5ff01b;
case 0x5ff020:goto L5ff020;
case 0x5ff022:c.instructions+=5;goto B5ff022;
case 0x5ff026:c.instructions+=4;goto B5ff026;
case 0x5ff027:c.instructions+=3;goto B5ff027;
case 0x5ff029:c.instructions+=2;goto B5ff029;
case 0x5ff02d:c.instructions+=1;goto B5ff02d;
case 0x5ff032:goto L5ff032;
case 0x5ff034:c.instructions+=5;goto B5ff034;
case 0x5ff038:c.instructions+=4;goto B5ff038;
case 0x5ff039:c.instructions+=3;goto B5ff039;
case 0x5ff03b:c.instructions+=2;goto B5ff03b;
case 0x5ff03f:c.instructions+=1;goto B5ff03f;
case 0x5ff044:goto L5ff044;
case 0x5ff046:c.instructions+=5;goto B5ff046;
case 0x5ff04a:c.instructions+=4;goto B5ff04a;
case 0x5ff04b:c.instructions+=3;goto B5ff04b;
case 0x5ff04d:c.instructions+=2;goto B5ff04d;
case 0x5ff051:c.instructions+=1;goto B5ff051;
case 0x5ff056:goto L5ff056;
case 0x5ff05b:c.instructions+=3;goto B5ff05b;
case 0x5ff05f:c.instructions+=2;goto B5ff05f;
case 0x5ff061:c.instructions+=1;goto B5ff061;
case 0x5ff067:goto L5ff067;
case 0x5ff06d:c.instructions+=3;goto B5ff06d;
case 0x5ff071:c.instructions+=2;goto B5ff071;
case 0x5ff073:c.instructions+=1;goto B5ff073;
case 0x5ff079:goto L5ff079;
case 0x5ff07a:c.instructions+=2;goto B5ff07a;
case 0x5ff07c:c.instructions+=1;goto B5ff07c;
case 0x5ff082:goto L5ff082;
case 0x5ff087:c.instructions+=5;goto B5ff087;
case 0x5ff089:c.instructions+=4;goto B5ff089;
case 0x5ff08a:c.instructions+=3;goto B5ff08a;
case 0x5ff08d:c.instructions+=2;goto B5ff08d;
case 0x5ff091:c.instructions+=1;goto B5ff091;
case 0x5ff097:goto L5ff097;
case 0x5ff099:c.instructions+=6;goto B5ff099;
case 0x5ff09d:c.instructions+=5;goto B5ff09d;
case 0x5ff09e:c.instructions+=4;goto B5ff09e;
case 0x5ff0a0:c.instructions+=3;goto B5ff0a0;
case 0x5ff0a4:c.instructions+=2;goto B5ff0a4;
case 0x5ff0a8:c.instructions+=1;goto B5ff0a8;
case 0x5ff0ad:goto L5ff0ad;
case 0x5ff0b1:c.instructions+=4;goto B5ff0b1;
case 0x5ff0b6:c.instructions+=3;goto B5ff0b6;
case 0x5ff0b8:c.instructions+=2;goto B5ff0b8;
case 0x5ff0ba:c.instructions+=1;goto B5ff0ba;
case 0x5ff0bc:goto L5ff0bc;
case 0x5ff0c2:c.instructions+=1;goto B5ff0c2;
case 0x5ff0c4:goto L5ff0c4;
case 0x5ff0ca:c.instructions+=1;goto B5ff0ca;
case 0x5ff0cc:goto L5ff0cc;
case 0x5ff0d0:c.instructions+=1;goto B5ff0d0;
case 0x5ff0d5:goto L5ff0d5;
case 0x5ff0d7:c.instructions+=1;goto B5ff0d7;
case 0x5ff0d9:goto L5ff0d9;
case 0x5ff0dd:c.instructions+=5;goto B5ff0dd;
case 0x5ff0e2:c.instructions+=4;goto B5ff0e2;
case 0x5ff0e3:c.instructions+=3;goto B5ff0e3;
case 0x5ff0e5:c.instructions+=2;goto B5ff0e5;
case 0x5ff0e9:c.instructions+=1;goto B5ff0e9;
case 0x5ff0eb:goto L5ff0eb;
case 0x5ff0ed:goto L5ff0ed;
case 0x5ff0f3:c.instructions+=1;goto B5ff0f3;
case 0x5ff0f5:goto L5ff0f5;
case 0x5ff0fb:c.instructions+=1;goto B5ff0fb;
case 0x5ff0fd:goto L5ff0fd;
case 0x5ff0ff:c.instructions+=1;goto B5ff0ff;
case 0x5ff101:goto L5ff101;
case 0x5ff106:goto L5ff106;
case 0x5ff108:c.instructions+=6;goto B5ff108;
case 0x5ff10a:c.instructions+=5;goto B5ff10a;
case 0x5ff10d:c.instructions+=4;goto B5ff10d;
case 0x5ff10f:c.instructions+=3;goto B5ff10f;
case 0x5ff113:c.instructions+=2;goto B5ff113;
case 0x5ff114:c.instructions+=1;goto B5ff114;
case 0x5ff119:goto L5ff119;
case 0x5ff11f:c.instructions+=1;goto B5ff11f;
case 0x5ff121:goto L5ff121;
case 0x5ff127:c.instructions+=1;goto B5ff127;
case 0x5ff129:goto L5ff129;
case 0x5ff12f:c.instructions+=1;goto B5ff12f;
case 0x5ff131:goto L5ff131;
case 0x5ff135:c.instructions+=1;goto B5ff135;
case 0x5ff137:goto L5ff137;
case 0x5ff13d:c.instructions+=1;goto B5ff13d;
case 0x5ff13f:goto L5ff13f;
case 0x5ff145:c.instructions+=1;goto B5ff145;
case 0x5ff147:goto L5ff147;
case 0x5ff149:c.instructions+=1;goto B5ff149;
case 0x5ff14b:goto L5ff14b;
case 0x5ff150:goto L5ff150;
case 0x5ff152:c.instructions+=6;goto B5ff152;
case 0x5ff154:c.instructions+=5;goto B5ff154;
case 0x5ff157:c.instructions+=4;goto B5ff157;
case 0x5ff15b:c.instructions+=3;goto B5ff15b;
case 0x5ff15c:c.instructions+=2;goto B5ff15c;
case 0x5ff15e:c.instructions+=1;goto B5ff15e;
case 0x5ff163:goto L5ff163;
case 0x5ff164:goto L5ff164;
case 0x5ff168:c.instructions+=3;goto B5ff168;
case 0x5ff169:c.instructions+=2;goto B5ff169;
case 0x5ff16b:c.instructions+=1;goto B5ff16b;
case 0x5ff170:goto L5ff170;
case 0x5ff174:c.instructions+=1;goto B5ff174;
case 0x5ff17a:goto L5ff17a;
case 0x5ff17b:c.instructions+=4;goto B5ff17b;
case 0x5ff17c:c.instructions+=3;goto B5ff17c;
case 0x5ff17d:c.instructions+=2;goto B5ff17d;
case 0x5ff180:c.instructions+=1;goto B5ff180;
case 0x5ff190:goto L5ff190;
case 0x5ff191:c.instructions+=10;goto B5ff191;
case 0x5ff192:c.instructions+=9;goto B5ff192;
case 0x5ff193:c.instructions+=8;goto B5ff193;
case 0x5ff197:c.instructions+=7;goto B5ff197;
case 0x5ff199:c.instructions+=6;goto B5ff199;
case 0x5ff19d:c.instructions+=5;goto B5ff19d;
case 0x5ff19f:c.instructions+=4;goto B5ff19f;
case 0x5ff1a0:c.instructions+=3;goto B5ff1a0;
case 0x5ff1a2:c.instructions+=2;goto B5ff1a2;
case 0x5ff1aa:c.instructions+=1;goto B5ff1aa;
case 0x5ff1af:goto L5ff1af;
case 0x5ff1b1:c.instructions+=5;goto B5ff1b1;
case 0x5ff1b5:c.instructions+=4;goto B5ff1b5;
case 0x5ff1b6:c.instructions+=3;goto B5ff1b6;
case 0x5ff1b8:c.instructions+=2;goto B5ff1b8;
case 0x5ff1c0:c.instructions+=1;goto B5ff1c0;
case 0x5ff1c5:goto L5ff1c5;
case 0x5ff1c9:c.instructions+=4;goto B5ff1c9;
case 0x5ff1cc:c.instructions+=3;goto B5ff1cc;
case 0x5ff1d0:c.instructions+=2;goto B5ff1d0;
case 0x5ff1d2:c.instructions+=1;goto B5ff1d2;
case 0x5ff1d8:goto L5ff1d8;
case 0x5ff1de:c.instructions+=3;goto B5ff1de;
case 0x5ff1e0:c.instructions+=2;goto B5ff1e0;
case 0x5ff1e1:c.instructions+=1;goto B5ff1e1;
case 0x5ff1e7:goto L5ff1e7;
case 0x5ff1ea:c.instructions+=3;goto B5ff1ea;
case 0x5ff1ec:c.instructions+=2;goto B5ff1ec;
case 0x5ff1f0:c.instructions+=1;goto B5ff1f0;
case 0x5ff1f2:goto L5ff1f2;
case 0x5ff1f4:c.instructions+=1;goto B5ff1f4;
case 0x5ff1f6:goto L5ff1f6;
case 0x5ff1fc:c.instructions+=2;goto B5ff1fc;
case 0x5ff1fe:c.instructions+=1;goto B5ff1fe;
case 0x5ff200:goto L5ff200;
case 0x5ff205:c.instructions+=1;goto B5ff205;
case 0x5ff207:goto L5ff207;
case 0x5ff20d:goto L5ff20d;
case 0x5ff210:c.instructions+=3;goto B5ff210;
case 0x5ff212:c.instructions+=2;goto B5ff212;
case 0x5ff214:c.instructions+=1;goto B5ff214;
case 0x5ff216:goto L5ff216;
case 0x5ff21c:c.instructions+=1;goto B5ff21c;
case 0x5ff21e:goto L5ff21e;
case 0x5ff224:c.instructions+=2;goto B5ff224;
case 0x5ff226:c.instructions+=1;goto B5ff226;
case 0x5ff228:goto L5ff228;
case 0x5ff22d:c.instructions+=1;goto B5ff22d;
case 0x5ff22f:goto L5ff22f;
case 0x5ff235:goto L5ff235;
case 0x5ff238:c.instructions+=2;goto B5ff238;
case 0x5ff23a:c.instructions+=1;goto B5ff23a;
case 0x5ff23c:goto L5ff23c;
case 0x5ff243:c.instructions+=1;goto B5ff243;
case 0x5ff245:goto L5ff245;
case 0x5ff24b:c.instructions+=2;goto B5ff24b;
case 0x5ff24d:c.instructions+=1;goto B5ff24d;
case 0x5ff24f:goto L5ff24f;
case 0x5ff254:c.instructions+=1;goto B5ff254;
case 0x5ff256:goto L5ff256;
case 0x5ff25c:goto L5ff25c;
case 0x5ff25f:c.instructions+=2;goto B5ff25f;
case 0x5ff261:c.instructions+=1;goto B5ff261;
case 0x5ff263:goto L5ff263;
case 0x5ff26a:c.instructions+=1;goto B5ff26a;
case 0x5ff26c:goto L5ff26c;
case 0x5ff272:c.instructions+=2;goto B5ff272;
case 0x5ff274:c.instructions+=1;goto B5ff274;
case 0x5ff276:goto L5ff276;
case 0x5ff27b:c.instructions+=1;goto B5ff27b;
case 0x5ff27d:goto L5ff27d;
case 0x5ff283:goto L5ff283;
case 0x5ff286:c.instructions+=2;goto B5ff286;
case 0x5ff288:c.instructions+=1;goto B5ff288;
case 0x5ff28a:goto L5ff28a;
case 0x5ff291:c.instructions+=1;goto B5ff291;
case 0x5ff293:goto L5ff293;
case 0x5ff299:c.instructions+=2;goto B5ff299;
case 0x5ff29b:c.instructions+=1;goto B5ff29b;
case 0x5ff29d:goto L5ff29d;
case 0x5ff2a2:c.instructions+=1;goto B5ff2a2;
case 0x5ff2a4:goto L5ff2a4;
case 0x5ff2aa:goto L5ff2aa;
case 0x5ff2ad:c.instructions+=2;goto B5ff2ad;
case 0x5ff2af:c.instructions+=1;goto B5ff2af;
case 0x5ff2b1:goto L5ff2b1;
case 0x5ff2b8:c.instructions+=1;goto B5ff2b8;
case 0x5ff2ba:goto L5ff2ba;
case 0x5ff2c0:c.instructions+=2;goto B5ff2c0;
case 0x5ff2c2:c.instructions+=1;goto B5ff2c2;
case 0x5ff2c4:goto L5ff2c4;
case 0x5ff2c9:c.instructions+=1;goto B5ff2c9;
case 0x5ff2cb:goto L5ff2cb;
case 0x5ff2d1:goto L5ff2d1;
case 0x5ff2d8:c.instructions+=17;goto B5ff2d8;
case 0x5ff2df:c.instructions+=16;goto B5ff2df;
case 0x5ff2e6:c.instructions+=15;goto B5ff2e6;
case 0x5ff2ec:c.instructions+=14;goto B5ff2ec;
case 0x5ff2f3:c.instructions+=13;goto B5ff2f3;
case 0x5ff2fa:c.instructions+=12;goto B5ff2fa;
case 0x5ff2fc:c.instructions+=11;goto B5ff2fc;
case 0x5ff2fe:c.instructions+=10;goto B5ff2fe;
case 0x5ff300:c.instructions+=9;goto B5ff300;
case 0x5ff306:c.instructions+=8;goto B5ff306;
case 0x5ff307:c.instructions+=7;goto B5ff307;
case 0x5ff30d:c.instructions+=6;goto B5ff30d;
case 0x5ff313:c.instructions+=5;goto B5ff313;
case 0x5ff314:c.instructions+=4;goto B5ff314;
case 0x5ff31a:c.instructions+=3;goto B5ff31a;
case 0x5ff31b:c.instructions+=2;goto B5ff31b;
case 0x5ff31c:c.instructions+=1;goto B5ff31c;
case 0x5ff31f:goto L5ff31f;
case 0x5ff323:c.instructions+=4;goto B5ff323;
case 0x5ff32a:c.instructions+=3;goto B5ff32a;
case 0x5ff32c:c.instructions+=2;goto B5ff32c;
case 0x5ff32f:c.instructions+=1;goto B5ff32f;
case 0x5ff334:goto L5ff334;
case 0x5ff336:c.instructions+=2;goto B5ff336;
case 0x5ff338:c.instructions+=1;goto B5ff338;
case 0x5ff33a:goto L5ff33a;
case 0x5ff33c:c.instructions+=2;goto B5ff33c;
case 0x5ff33f:c.instructions+=1;goto B5ff33f;
case 0x5ff341:goto L5ff341;
case 0x5ff344:c.instructions+=1;goto B5ff344;
case 0x5ff346:goto L5ff346;
case 0x5ff348:c.instructions+=1;goto B5ff348;
case 0x5ff34a:goto L5ff34a;
case 0x5ff34d:c.instructions+=1;goto B5ff34d;
case 0x5ff34f:goto L5ff34f;
case 0x5ff355:c.instructions+=2;goto B5ff355;
case 0x5ff357:c.instructions+=1;goto B5ff357;
case 0x5ff359:goto L5ff359;
case 0x5ff35e:c.instructions+=1;goto B5ff35e;
case 0x5ff360:goto L5ff360;
case 0x5ff361:goto L5ff361;
case 0x5ff364:c.instructions+=2;goto B5ff364;
case 0x5ff365:c.instructions+=1;goto B5ff365;
case 0x5ff367:goto L5ff367;
case 0x5ff36a:c.instructions+=1;goto B5ff36a;
case 0x5ff36c:goto L5ff36c;
case 0x5ff373:c.instructions+=11;goto B5ff373;
case 0x5ff37a:c.instructions+=10;goto B5ff37a;
case 0x5ff381:c.instructions+=9;goto B5ff381;
case 0x5ff387:c.instructions+=8;goto B5ff387;
case 0x5ff38e:c.instructions+=7;goto B5ff38e;
case 0x5ff390:c.instructions+=6;goto B5ff390;
case 0x5ff392:c.instructions+=5;goto B5ff392;
case 0x5ff394:c.instructions+=4;goto B5ff394;
case 0x5ff396:c.instructions+=3;goto B5ff396;
case 0x5ff39c:c.instructions+=2;goto B5ff39c;
case 0x5ff3a2:c.instructions+=1;goto B5ff3a2;
case 0x5ff3a8:goto L5ff3a8;
case 0x5ff3a9:goto L5ff3a9;
case 0x5ff3aa:c.instructions+=3;goto B5ff3aa;
case 0x5ff3ab:c.instructions+=2;goto B5ff3ab;
case 0x5ff3ac:c.instructions+=1;goto B5ff3ac;
case 0x5ff3b0:goto L5ff3b0;
case 0x5ff3b1:c.instructions+=5;goto B5ff3b1;
case 0x5ff3b2:c.instructions+=4;goto B5ff3b2;
case 0x5ff3b4:c.instructions+=3;goto B5ff3b4;
case 0x5ff3b6:c.instructions+=2;goto B5ff3b6;
case 0x5ff3b8:c.instructions+=1;goto B5ff3b8;
case 0x5ff3ba:goto L5ff3ba;
case 0x5ff3c0:goto L5ff3c0;
case 0x5ff3c3:c.instructions+=5;goto B5ff3c3;
case 0x5ff3c5:c.instructions+=4;goto B5ff3c5;
case 0x5ff3c7:c.instructions+=3;goto B5ff3c7;
case 0x5ff3ca:c.instructions+=2;goto B5ff3ca;
case 0x5ff3cc:c.instructions+=1;goto B5ff3cc;
case 0x5ff3d1:goto L5ff3d1;
case 0x5ff3d2:c.instructions+=1;goto B5ff3d2;
case 0x5ff3d7:goto L5ff3d7;
case 0x5ff3d9:c.instructions+=3;goto B5ff3d9;
case 0x5ff3dc:c.instructions+=2;goto B5ff3dc;
case 0x5ff3de:c.instructions+=1;goto B5ff3de;
case 0x5ff3e0:goto L5ff3e0;
case 0x5ff3e1:c.instructions+=2;goto B5ff3e1;
case 0x5ff3e2:c.instructions+=1;goto B5ff3e2;
case 0x5ff3f0:goto L5ff3f0;
case 0x5ff3f1:c.instructions+=4;goto B5ff3f1;
case 0x5ff3f3:c.instructions+=3;goto B5ff3f3;
case 0x5ff3f5:c.instructions+=2;goto B5ff3f5;
case 0x5ff3f7:c.instructions+=1;goto B5ff3f7;
case 0x5ff3f9:goto L5ff3f9;
case 0x5ff400:goto L5ff400;
case 0x5ff402:c.instructions+=7;goto B5ff402;
case 0x5ff405:c.instructions+=6;goto B5ff405;
case 0x5ff407:c.instructions+=5;goto B5ff407;
case 0x5ff408:c.instructions+=4;goto B5ff408;
case 0x5ff40b:c.instructions+=3;goto B5ff40b;
case 0x5ff410:c.instructions+=2;goto B5ff410;
case 0x5ff411:c.instructions+=1;goto B5ff411;
case 0x5ff416:goto L5ff416;
case 0x5ff418:c.instructions+=3;goto B5ff418;
case 0x5ff41b:c.instructions+=2;goto B5ff41b;
case 0x5ff41d:c.instructions+=1;goto B5ff41d;
case 0x5ff41f:goto L5ff41f;
case 0x5ff420:c.instructions+=1;goto B5ff420;
case 0x5ff430:goto L5ff430;
case 0x5ff431:c.instructions+=4;goto B5ff431;
case 0x5ff433:c.instructions+=3;goto B5ff433;
case 0x5ff435:c.instructions+=2;goto B5ff435;
case 0x5ff437:c.instructions+=1;goto B5ff437;
case 0x5ff439:goto L5ff439;
case 0x5ff440:goto L5ff440;
case 0x5ff442:c.instructions+=7;goto B5ff442;
case 0x5ff445:c.instructions+=6;goto B5ff445;
case 0x5ff447:c.instructions+=5;goto B5ff447;
case 0x5ff448:c.instructions+=4;goto B5ff448;
case 0x5ff44b:c.instructions+=3;goto B5ff44b;
case 0x5ff450:c.instructions+=2;goto B5ff450;
case 0x5ff451:c.instructions+=1;goto B5ff451;
case 0x5ff456:goto L5ff456;
case 0x5ff458:c.instructions+=3;goto B5ff458;
case 0x5ff45b:c.instructions+=2;goto B5ff45b;
case 0x5ff45d:c.instructions+=1;goto B5ff45d;
case 0x5ff45f:goto L5ff45f;
case 0x5ff460:c.instructions+=1;goto B5ff460;
case 0x5ff470:goto L5ff470;
case 0x5ff474:c.instructions+=7;goto B5ff474;
case 0x5ff478:c.instructions+=6;goto B5ff478;
case 0x5ff47c:c.instructions+=5;goto B5ff47c;
case 0x5ff47d:c.instructions+=4;goto B5ff47d;
case 0x5ff47e:c.instructions+=3;goto B5ff47e;
case 0x5ff482:c.instructions+=2;goto B5ff482;
case 0x5ff483:c.instructions+=1;goto B5ff483;
case 0x5ff488:goto L5ff488;
case 0x5ff490:goto L5ff490;
case 0x5ff492:c.instructions+=25;goto B5ff492;
case 0x5ff497:c.instructions+=24;goto B5ff497;
case 0x5ff49d:c.instructions+=23;goto B5ff49d;
case 0x5ff49e:c.instructions+=22;goto B5ff49e;
case 0x5ff4a5:c.instructions+=21;goto B5ff4a5;
case 0x5ff4a8:c.instructions+=20;goto B5ff4a8;
case 0x5ff4a9:c.instructions+=19;goto B5ff4a9;
case 0x5ff4aa:c.instructions+=18;goto B5ff4aa;
case 0x5ff4ac:c.instructions+=17;goto B5ff4ac;
case 0x5ff4ad:c.instructions+=16;goto B5ff4ad;
case 0x5ff4b1:c.instructions+=15;goto B5ff4b1;
case 0x5ff4b3:c.instructions+=14;goto B5ff4b3;
case 0x5ff4b6:c.instructions+=13;goto B5ff4b6;
case 0x5ff4b9:c.instructions+=12;goto B5ff4b9;
case 0x5ff4bb:c.instructions+=11;goto B5ff4bb;
case 0x5ff4bf:c.instructions+=10;goto B5ff4bf;
case 0x5ff4c1:c.instructions+=9;goto B5ff4c1;
case 0x5ff4c4:c.instructions+=8;goto B5ff4c4;
case 0x5ff4c9:c.instructions+=7;goto B5ff4c9;
case 0x5ff4ce:c.instructions+=6;goto B5ff4ce;
case 0x5ff4d0:c.instructions+=5;goto B5ff4d0;
case 0x5ff4d2:c.instructions+=4;goto B5ff4d2;
case 0x5ff4d8:c.instructions+=3;goto B5ff4d8;
case 0x5ff4d9:c.instructions+=2;goto B5ff4d9;
case 0x5ff4de:c.instructions+=1;goto B5ff4de;
case 0x5ff4e3:goto L5ff4e3;
case 0x5ff4e8:c.instructions+=7;goto B5ff4e8;
case 0x5ff4ed:c.instructions+=6;goto B5ff4ed;
case 0x5ff4ef:c.instructions+=5;goto B5ff4ef;
case 0x5ff4f1:c.instructions+=4;goto B5ff4f1;
case 0x5ff4f7:c.instructions+=3;goto B5ff4f7;
case 0x5ff4f8:c.instructions+=2;goto B5ff4f8;
case 0x5ff4fd:c.instructions+=1;goto B5ff4fd;
case 0x5ff502:goto L5ff502;
case 0x5ff508:c.instructions+=2;goto B5ff508;
case 0x5ff50d:c.instructions+=1;goto B5ff50d;
case 0x5ff512:goto L5ff512;
case 0x5ff518:c.instructions+=2;goto B5ff518;
case 0x5ff51d:c.instructions+=1;goto B5ff51d;
case 0x5ff522:goto L5ff522;
case 0x5ff528:c.instructions+=2;goto B5ff528;
case 0x5ff52d:c.instructions+=1;goto B5ff52d;
case 0x5ff532:goto L5ff532;
case 0x5ff537:c.instructions+=2;goto B5ff537;
case 0x5ff53d:c.instructions+=1;goto B5ff53d;
case 0x5ff542:goto L5ff542;
case 0x5ff547:c.instructions+=1;goto B5ff547;
case 0x5ff54c:goto L5ff54c;
case 0x5ff552:c.instructions+=16;goto B5ff552;
case 0x5ff557:c.instructions+=15;goto B5ff557;
case 0x5ff55d:c.instructions+=14;goto B5ff55d;
case 0x5ff563:c.instructions+=13;goto B5ff563;
case 0x5ff565:c.instructions+=12;goto B5ff565;
case 0x5ff568:c.instructions+=11;goto B5ff568;
case 0x5ff56b:c.instructions+=10;goto B5ff56b;
case 0x5ff56e:c.instructions+=9;goto B5ff56e;
case 0x5ff574:c.instructions+=8;goto B5ff574;
case 0x5ff57e:c.instructions+=7;goto B5ff57e;
case 0x5ff584:c.instructions+=6;goto B5ff584;
case 0x5ff58a:c.instructions+=5;goto B5ff58a;
case 0x5ff590:c.instructions+=4;goto B5ff590;
case 0x5ff596:c.instructions+=3;goto B5ff596;
case 0x5ff59c:c.instructions+=2;goto B5ff59c;
case 0x5ff5a1:c.instructions+=1;goto B5ff5a1;
case 0x5ff5a7:goto L5ff5a7;
case 0x5ff5a9:goto L5ff5a9;
case 0x5ff5ae:c.instructions+=2;goto B5ff5ae;
case 0x5ff5b4:c.instructions+=1;goto B5ff5b4;
case 0x5ff5b7:goto L5ff5b7;
case 0x5ff5b9:goto L5ff5b9;
case 0x5ff5be:goto L5ff5be;
case 0x5ff5c3:c.instructions+=1;goto B5ff5c3;
case 0x5ff5c8:goto L5ff5c8;
case 0x5ff5cd:goto L5ff5cd;
case 0x5ff5d2:goto L5ff5d2;
case 0x5ff5d7:goto L5ff5d7;
case 0x5ff5d9:c.instructions+=1;goto B5ff5d9;
case 0x5ff5de:goto L5ff5de;
case 0x5ff5e1:c.instructions+=4;goto B5ff5e1;
case 0x5ff5e5:c.instructions+=3;goto B5ff5e5;
case 0x5ff5e7:c.instructions+=2;goto B5ff5e7;
case 0x5ff5ec:c.instructions+=1;goto B5ff5ec;
case 0x5ff5ee:goto L5ff5ee;
case 0x5ff5f0:c.instructions+=1;goto B5ff5f0;
case 0x5ff5f5:goto L5ff5f5;
case 0x5ff5f7:goto L5ff5f7;
case 0x5ff5f9:goto L5ff5f9;
case 0x5ff5fe:c.instructions+=2;goto B5ff5fe;
case 0x5ff604:c.instructions+=1;goto B5ff604;
case 0x5ff609:goto L5ff609;
case 0x5ff60e:goto L5ff60e;
case 0x5ff613:goto L5ff613;
case 0x5ff61a:c.instructions+=2;goto B5ff61a;
case 0x5ff61f:c.instructions+=1;goto B5ff61f;
case 0x5ff621:goto L5ff621;
case 0x5ff626:goto L5ff626;
case 0x5ff627:c.instructions+=1;goto B5ff627;
case 0x5ff62c:goto L5ff62c;
case 0x5ff62f:c.instructions+=1;goto B5ff62f;
case 0x5ff634:goto L5ff634;
case 0x5ff639:goto L5ff639;
case 0x5ff63e:goto L5ff63e;
case 0x5ff643:goto L5ff643;
case 0x5ff648:goto L5ff648;
case 0x5ff64d:c.instructions+=1;goto B5ff64d;
case 0x5ff652:goto L5ff652;
case 0x5ff658:c.instructions+=1;goto B5ff658;
case 0x5ff65a:goto L5ff65a;
case 0x5ff660:c.instructions+=1;goto B5ff660;
case 0x5ff662:goto L5ff662;
case 0x5ff668:c.instructions+=1;goto B5ff668;
case 0x5ff66a:goto L5ff66a;
case 0x5ff66b:c.instructions+=4;goto B5ff66b;
case 0x5ff670:c.instructions+=3;goto B5ff670;
case 0x5ff672:c.instructions+=2;goto B5ff672;
case 0x5ff677:c.instructions+=1;goto B5ff677;
case 0x5ff67c:goto L5ff67c;
case 0x5ff682:c.instructions+=3;goto B5ff682;
case 0x5ff683:c.instructions+=2;goto B5ff683;
case 0x5ff688:c.instructions+=1;goto B5ff688;
case 0x5ff68d:goto L5ff68d;
case 0x5ff690:goto L5ff690;
case 0x5ff695:goto L5ff695;
case 0x5ff69a:goto L5ff69a;
case 0x5ff69f:goto L5ff69f;
case 0x5ff6a4:goto L5ff6a4;
case 0x5ff6a6:c.instructions+=1;goto B5ff6a6;
case 0x5ff6ab:goto L5ff6ab;
case 0x5ff6ae:c.instructions+=4;goto B5ff6ae;
case 0x5ff6b2:c.instructions+=3;goto B5ff6b2;
case 0x5ff6b4:c.instructions+=2;goto B5ff6b4;
case 0x5ff6b9:c.instructions+=1;goto B5ff6b9;
case 0x5ff6bb:goto L5ff6bb;
case 0x5ff6bd:c.instructions+=1;goto B5ff6bd;
case 0x5ff6c2:goto L5ff6c2;
case 0x5ff6c4:goto L5ff6c4;
case 0x5ff6c6:goto L5ff6c6;
case 0x5ff6cb:c.instructions+=2;goto B5ff6cb;
case 0x5ff6d1:c.instructions+=1;goto B5ff6d1;
case 0x5ff6d6:goto L5ff6d6;
case 0x5ff6da:c.instructions+=7;goto B5ff6da;
case 0x5ff6db:c.instructions+=6;goto B5ff6db;
case 0x5ff6dd:c.instructions+=5;goto B5ff6dd;
case 0x5ff6de:c.instructions+=4;goto B5ff6de;
case 0x5ff6df:c.instructions+=3;goto B5ff6df;
case 0x5ff6e6:c.instructions+=2;goto B5ff6e6;
case 0x5ff6e9:c.instructions+=1;goto B5ff6e9;
case 0x5ff6f0:goto L5ff6f0;
case 0x5ff6f2:c.instructions+=12;goto B5ff6f2;
case 0x5ff6f7:c.instructions+=11;goto B5ff6f7;
case 0x5ff6fd:c.instructions+=10;goto B5ff6fd;
case 0x5ff6fe:c.instructions+=9;goto B5ff6fe;
case 0x5ff705:c.instructions+=8;goto B5ff705;
case 0x5ff706:c.instructions+=7;goto B5ff706;
case 0x5ff707:c.instructions+=6;goto B5ff707;
case 0x5ff709:c.instructions+=5;goto B5ff709;
case 0x5ff70a:c.instructions+=4;goto B5ff70a;
case 0x5ff70e:c.instructions+=3;goto B5ff70e;
case 0x5ff710:c.instructions+=2;goto B5ff710;
case 0x5ff718:c.instructions+=1;goto B5ff718;
case 0x5ff71d:goto L5ff71d;
case 0x5ff71f:c.instructions+=3;goto B5ff71f;
case 0x5ff722:c.instructions+=2;goto B5ff722;
case 0x5ff724:c.instructions+=1;goto B5ff724;
case 0x5ff726:goto L5ff726;
case 0x5ff729:c.instructions+=5;goto B5ff729;
case 0x5ff72b:c.instructions+=4;goto B5ff72b;
case 0x5ff72d:c.instructions+=3;goto B5ff72d;
case 0x5ff730:c.instructions+=2;goto B5ff730;
case 0x5ff732:c.instructions+=1;goto B5ff732;
case 0x5ff737:goto L5ff737;
case 0x5ff738:c.instructions+=1;goto B5ff738;
case 0x5ff73d:goto L5ff73d;
case 0x5ff73f:c.instructions+=3;goto B5ff73f;
case 0x5ff742:c.instructions+=2;goto B5ff742;
case 0x5ff744:c.instructions+=1;goto B5ff744;
case 0x5ff746:goto L5ff746;
case 0x5ff74b:goto L5ff74b;
case 0x5ff750:goto L5ff750;
case 0x5ff755:goto L5ff755;
case 0x5ff75a:goto L5ff75a;
case 0x5ff75f:c.instructions+=2;goto B5ff75f;
case 0x5ff761:c.instructions+=1;goto B5ff761;
case 0x5ff763:goto L5ff763;
case 0x5ff764:c.instructions+=1;goto B5ff764;
case 0x5ff769:goto L5ff769;
case 0x5ff76c:c.instructions+=2;goto B5ff76c;
case 0x5ff776:c.instructions+=1;goto B5ff776;
case 0x5ff77b:goto L5ff77b;
case 0x5ff780:goto L5ff780;
case 0x5ff785:goto L5ff785;
case 0x5ff78a:goto L5ff78a;
case 0x5ff78f:goto L5ff78f;
case 0x5ff794:goto L5ff794;
case 0x5ff799:goto L5ff799;
case 0x5ff79e:goto L5ff79e;
case 0x5ff7a4:c.instructions+=2;goto B5ff7a4;
case 0x5ff7a6:c.instructions+=1;goto B5ff7a6;
case 0x5ff7a8:goto L5ff7a8;
case 0x5ff7aa:c.instructions+=1;goto B5ff7aa;
case 0x5ff7af:goto L5ff7af;
case 0x5ff7b0:c.instructions+=1;goto B5ff7b0;
case 0x5ff7b5:goto L5ff7b5;
case 0x5ff7b8:goto L5ff7b8;
case 0x5ff7bd:goto L5ff7bd;
case 0x5ff7c2:goto L5ff7c2;
case 0x5ff7cc:c.instructions+=4;goto B5ff7cc;
case 0x5ff7d6:c.instructions+=3;goto B5ff7d6;
case 0x5ff7dc:c.instructions+=2;goto B5ff7dc;
case 0x5ff7de:c.instructions+=1;goto B5ff7de;
case 0x5ff7e0:goto L5ff7e0;
case 0x5ff7e2:c.instructions+=1;goto B5ff7e2;
case 0x5ff7e7:goto L5ff7e7;
case 0x5ff7e8:c.instructions+=1;goto B5ff7e8;
case 0x5ff7ed:goto L5ff7ed;
case 0x5ff7f0:goto L5ff7f0;
case 0x5ff7f5:goto L5ff7f5;
case 0x5ff7fb:c.instructions+=2;goto B5ff7fb;
case 0x5ff800:c.instructions+=1;goto B5ff800;
case 0x5ff805:goto L5ff805;
case 0x5ff80b:c.instructions+=2;goto B5ff80b;
case 0x5ff810:c.instructions+=1;goto B5ff810;
case 0x5ff815:goto L5ff815;
case 0x5ff81b:c.instructions+=2;goto B5ff81b;
case 0x5ff820:c.instructions+=1;goto B5ff820;
case 0x5ff825:goto L5ff825;
case 0x5ff82a:c.instructions+=6;goto B5ff82a;
case 0x5ff82c:c.instructions+=5;goto B5ff82c;
case 0x5ff82e:c.instructions+=4;goto B5ff82e;
case 0x5ff834:c.instructions+=3;goto B5ff834;
case 0x5ff835:c.instructions+=2;goto B5ff835;
case 0x5ff83a:c.instructions+=1;goto B5ff83a;
case 0x5ff83f:goto L5ff83f;
case 0x5ff844:c.instructions+=6;goto B5ff844;
case 0x5ff846:c.instructions+=5;goto B5ff846;
case 0x5ff848:c.instructions+=4;goto B5ff848;
case 0x5ff84e:c.instructions+=3;goto B5ff84e;
case 0x5ff84f:c.instructions+=2;goto B5ff84f;
case 0x5ff854:c.instructions+=1;goto B5ff854;
case 0x5ff859:goto L5ff859;
case 0x5ff85c:c.instructions+=2;goto B5ff85c;
case 0x5ff861:c.instructions+=1;goto B5ff861;
case 0x5ff866:goto L5ff866;
case 0x5ff868:c.instructions+=2;goto B5ff868;
case 0x5ff870:c.instructions+=1;goto B5ff870;
case 0x5ff875:goto L5ff875;
case 0x5ff879:c.instructions+=5;goto B5ff879;
case 0x5ff87a:c.instructions+=4;goto B5ff87a;
case 0x5ff87b:c.instructions+=3;goto B5ff87b;
case 0x5ff882:c.instructions+=2;goto B5ff882;
case 0x5ff885:c.instructions+=1;goto B5ff885;
case 0x5ff890:goto L5ff890;
case 0x5ff891:c.instructions+=9;goto B5ff891;
case 0x5ff893:c.instructions+=8;goto B5ff893;
case 0x5ff894:c.instructions+=7;goto B5ff894;
case 0x5ff897:c.instructions+=6;goto B5ff897;
case 0x5ff898:c.instructions+=5;goto B5ff898;
case 0x5ff89d:c.instructions+=4;goto B5ff89d;
case 0x5ff89f:c.instructions+=3;goto B5ff89f;
case 0x5ff8a1:c.instructions+=2;goto B5ff8a1;
case 0x5ff8a3:c.instructions+=1;goto B5ff8a3;
case 0x5ff8a8:goto L5ff8a8;
case 0x5ff8ae:c.instructions+=3;goto B5ff8ae;
case 0x5ff8af:c.instructions+=2;goto B5ff8af;
case 0x5ff8b1:c.instructions+=1;goto B5ff8b1;
case 0x5ff8b6:goto L5ff8b6;
case 0x5ff8bc:c.instructions+=3;goto B5ff8bc;
case 0x5ff8bd:c.instructions+=2;goto B5ff8bd;
case 0x5ff8bf:c.instructions+=1;goto B5ff8bf;
case 0x5ff8c4:goto L5ff8c4;
case 0x5ff8ca:c.instructions+=3;goto B5ff8ca;
case 0x5ff8cb:c.instructions+=2;goto B5ff8cb;
case 0x5ff8cd:c.instructions+=1;goto B5ff8cd;
case 0x5ff8d2:goto L5ff8d2;
case 0x5ff8d8:c.instructions+=3;goto B5ff8d8;
case 0x5ff8d9:c.instructions+=2;goto B5ff8d9;
case 0x5ff8db:c.instructions+=1;goto B5ff8db;
case 0x5ff8e0:goto L5ff8e0;
case 0x5ff8e2:c.instructions+=6;goto B5ff8e2;
case 0x5ff8e4:c.instructions+=5;goto B5ff8e4;
case 0x5ff8e6:c.instructions+=4;goto B5ff8e6;
case 0x5ff8ec:c.instructions+=3;goto B5ff8ec;
case 0x5ff8ed:c.instructions+=2;goto B5ff8ed;
case 0x5ff8ef:c.instructions+=1;goto B5ff8ef;
case 0x5ff8f4:goto L5ff8f4;
case 0x5ff8fa:c.instructions+=3;goto B5ff8fa;
case 0x5ff8fb:c.instructions+=2;goto B5ff8fb;
case 0x5ff8fd:c.instructions+=1;goto B5ff8fd;
case 0x5ff902:goto L5ff902;
case 0x5ff904:c.instructions+=6;goto B5ff904;
case 0x5ff906:c.instructions+=5;goto B5ff906;
case 0x5ff908:c.instructions+=4;goto B5ff908;
case 0x5ff90e:c.instructions+=3;goto B5ff90e;
case 0x5ff90f:c.instructions+=2;goto B5ff90f;
case 0x5ff911:c.instructions+=1;goto B5ff911;
case 0x5ff916:goto L5ff916;
case 0x5ff918:c.instructions+=6;goto B5ff918;
case 0x5ff91a:c.instructions+=5;goto B5ff91a;
case 0x5ff91c:c.instructions+=4;goto B5ff91c;
case 0x5ff922:c.instructions+=3;goto B5ff922;
case 0x5ff923:c.instructions+=2;goto B5ff923;
case 0x5ff925:c.instructions+=1;goto B5ff925;
case 0x5ff92a:goto L5ff92a;
case 0x5ff930:c.instructions+=3;goto B5ff930;
case 0x5ff931:c.instructions+=2;goto B5ff931;
case 0x5ff933:c.instructions+=1;goto B5ff933;
case 0x5ff938:goto L5ff938;
case 0x5ff93e:c.instructions+=3;goto B5ff93e;
case 0x5ff93f:c.instructions+=2;goto B5ff93f;
case 0x5ff941:c.instructions+=1;goto B5ff941;
case 0x5ff946:goto L5ff946;
case 0x5ff94c:c.instructions+=3;goto B5ff94c;
case 0x5ff94d:c.instructions+=2;goto B5ff94d;
case 0x5ff94f:c.instructions+=1;goto B5ff94f;
case 0x5ff954:goto L5ff954;
case 0x5ff95a:c.instructions+=3;goto B5ff95a;
case 0x5ff95b:c.instructions+=2;goto B5ff95b;
case 0x5ff95d:c.instructions+=1;goto B5ff95d;
case 0x5ff962:goto L5ff962;
case 0x5ff965:c.instructions+=2;goto B5ff965;
case 0x5ff967:c.instructions+=1;goto B5ff967;
case 0x5ff969:goto L5ff969;
case 0x5ff96e:goto L5ff96e;
case 0x5ff973:c.instructions+=1;goto B5ff973;
case 0x5ff978:goto L5ff978;
case 0x5ff97d:goto L5ff97d;
case 0x5ff984:c.instructions+=1;goto B5ff984;
case 0x5ff989:goto L5ff989;
case 0x5ff98a:c.instructions+=2;goto B5ff98a;
case 0x5ff98b:c.instructions+=1;goto B5ff98b;
case 0x5ff990:goto L5ff990;
case 0x5ff991:c.instructions+=1;goto B5ff991;
case 0x5ff996:goto L5ff996;
case 0x5ff999:c.instructions+=3;goto B5ff999;
case 0x5ff99a:c.instructions+=2;goto B5ff99a;
case 0x5ff99f:c.instructions+=1;goto B5ff99f;
case 0x5ff9a4:goto L5ff9a4;
case 0x5ff9a5:c.instructions+=1;goto B5ff9a5;
case 0x5ff9aa:goto L5ff9aa;
case 0x5ff9ad:c.instructions+=4;goto B5ff9ad;
case 0x5ff9b0:c.instructions+=3;goto B5ff9b0;
case 0x5ff9b2:c.instructions+=2;goto B5ff9b2;
case 0x5ff9b4:c.instructions+=1;goto B5ff9b4;
case 0x5ff9b6:goto L5ff9b6;
case 0x5ff9b9:c.instructions+=2;goto B5ff9b9;
case 0x5ff9bc:c.instructions+=1;goto B5ff9bc;
case 0x5ff9c0:goto L5ff9c0;
case 0x5ff9c3:c.instructions+=3;goto B5ff9c3;
case 0x5ff9c5:c.instructions+=2;goto B5ff9c5;
case 0x5ff9c6:c.instructions+=1;goto B5ff9c6;
case 0x5ff9cb:goto L5ff9cb;
case 0x5ff9ce:c.instructions+=6;goto B5ff9ce;
case 0x5ff9d1:c.instructions+=5;goto B5ff9d1;
case 0x5ff9d2:c.instructions+=4;goto B5ff9d2;
case 0x5ff9d5:c.instructions+=3;goto B5ff9d5;
case 0x5ff9d7:c.instructions+=2;goto B5ff9d7;
case 0x5ff9da:c.instructions+=1;goto B5ff9da;
case 0x5ff9dc:goto L5ff9dc;
case 0x5ff9e2:c.instructions+=3;goto B5ff9e2;
case 0x5ff9e4:c.instructions+=2;goto B5ff9e4;
case 0x5ff9e5:c.instructions+=1;goto B5ff9e5;
case 0x5ff9e7:goto L5ff9e7;
case 0x5ff9e8:c.instructions+=2;goto B5ff9e8;
case 0x5ff9ea:c.instructions+=1;goto B5ff9ea;
case 0x5ff9ef:goto L5ff9ef;
case 0x5ff9f2:c.instructions+=2;goto B5ff9f2;
case 0x5ff9f4:c.instructions+=1;goto B5ff9f4;
case 0x5ff9f6:goto L5ff9f6;
case 0x5ff9fb:goto L5ff9fb;
case 0x5ff9fc:c.instructions+=1;goto B5ff9fc;
case 0x5ffa01:goto L5ffa01;
case 0x5ffa02:c.instructions+=1;goto B5ffa02;
case 0x5ffa07:goto L5ffa07;
case 0x5ffa08:c.instructions+=1;goto B5ffa08;
case 0x5ffa0d:goto L5ffa0d;
case 0x5ffa0e:c.instructions+=1;goto B5ffa0e;
case 0x5ffa13:goto L5ffa13;
case 0x5ffa14:c.instructions+=1;goto B5ffa14;
case 0x5ffa19:goto L5ffa19;
case 0x5ffa1c:c.instructions+=2;goto B5ffa1c;
case 0x5ffa1e:c.instructions+=1;goto B5ffa1e;
case 0x5ffa23:goto L5ffa23;
case 0x5ffa28:c.instructions+=1;goto B5ffa28;
case 0x5ffa2d:goto L5ffa2d;
case 0x5ffa2f:c.instructions+=1;goto B5ffa2f;
case 0x5ffa31:goto L5ffa31;
case 0x5ffa32:c.instructions+=2;goto B5ffa32;
case 0x5ffa37:c.instructions+=1;goto B5ffa37;
case 0x5ffa3c:goto L5ffa3c;
case 0x5ffa3e:c.instructions+=1;goto B5ffa3e;
case 0x5ffa43:goto L5ffa43;
case 0x5ffa44:c.instructions+=3;goto B5ffa44;
case 0x5ffa45:c.instructions+=2;goto B5ffa45;
case 0x5ffa46:c.instructions+=1;goto B5ffa46;
case 0x5ffa50:goto L5ffa50;
case 0x5ffa51:c.instructions+=13;goto B5ffa51;
case 0x5ffa53:c.instructions+=12;goto B5ffa53;
case 0x5ffa56:c.instructions+=11;goto B5ffa56;
case 0x5ffa58:c.instructions+=10;goto B5ffa58;
case 0x5ffa5d:c.instructions+=9;goto B5ffa5d;
case 0x5ffa63:c.instructions+=8;goto B5ffa63;
case 0x5ffa64:c.instructions+=7;goto B5ffa64;
case 0x5ffa6b:c.instructions+=6;goto B5ffa6b;
case 0x5ffa6e:c.instructions+=5;goto B5ffa6e;
case 0x5ffa6f:c.instructions+=4;goto B5ffa6f;
case 0x5ffa70:c.instructions+=3;goto B5ffa70;
case 0x5ffa71:c.instructions+=2;goto B5ffa71;
case 0x5ffa75:c.instructions+=1;goto B5ffa75;
case 0x5ffa7a:goto L5ffa7a;
case 0x5ffa80:c.instructions+=2;goto B5ffa80;
case 0x5ffa82:c.instructions+=1;goto B5ffa82;
case 0x5ffa84:goto L5ffa84;
case 0x5ffa8a:c.instructions+=1;goto B5ffa8a;
case 0x5ffa8c:goto L5ffa8c;
case 0x5ffa8e:goto L5ffa8e;
case 0x5ffa93:c.instructions+=1;goto B5ffa93;
case 0x5ffa98:goto L5ffa98;
case 0x5ffa9a:c.instructions+=3;goto B5ffa9a;
case 0x5ffa9c:c.instructions+=2;goto B5ffa9c;
case 0x5ffaa0:c.instructions+=1;goto B5ffaa0;
case 0x5ffaa2:goto L5ffaa2;
case 0x5ffaa8:c.instructions+=2;goto B5ffaa8;
case 0x5ffaaa:c.instructions+=1;goto B5ffaaa;
case 0x5ffaac:goto L5ffaac;
case 0x5ffab2:c.instructions+=1;goto B5ffab2;
case 0x5ffab4:goto L5ffab4;
case 0x5ffab6:goto L5ffab6;
case 0x5ffab8:c.instructions+=1;goto B5ffab8;
case 0x5ffabd:goto L5ffabd;
case 0x5ffabf:c.instructions+=1;goto B5ffabf;
case 0x5ffac1:goto L5ffac1;
case 0x5ffac3:c.instructions+=3;goto B5ffac3;
case 0x5ffac5:c.instructions+=2;goto B5ffac5;
case 0x5ffac7:c.instructions+=1;goto B5ffac7;
case 0x5ffac9:goto L5ffac9;
case 0x5ffacb:c.instructions+=2;goto B5ffacb;
case 0x5ffacd:c.instructions+=1;goto B5ffacd;
case 0x5ffacf:goto L5ffacf;
case 0x5ffad4:c.instructions+=2;goto B5ffad4;
case 0x5ffad6:c.instructions+=1;goto B5ffad6;
case 0x5ffad8:goto L5ffad8;
case 0x5ffadb:c.instructions+=1;goto B5ffadb;
case 0x5ffadd:goto L5ffadd;
case 0x5ffadf:goto L5ffadf;
case 0x5ffae4:c.instructions+=1;goto B5ffae4;
case 0x5ffae9:goto L5ffae9;
case 0x5ffaeb:c.instructions+=2;goto B5ffaeb;
case 0x5ffaed:c.instructions+=1;goto B5ffaed;
case 0x5ffaef:goto L5ffaef;
case 0x5ffaf0:goto L5ffaf0;
case 0x5ffaf3:c.instructions+=2;goto B5ffaf3;
case 0x5ffaf5:c.instructions+=1;goto B5ffaf5;
case 0x5ffaf7:goto L5ffaf7;
case 0x5ffafa:c.instructions+=2;goto B5ffafa;
case 0x5ffafc:c.instructions+=1;goto B5ffafc;
case 0x5ffafe:goto L5ffafe;
case 0x5ffb00:c.instructions+=1;goto B5ffb00;
case 0x5ffb05:goto L5ffb05;
case 0x5ffb08:c.instructions+=2;goto B5ffb08;
case 0x5ffb0a:c.instructions+=1;goto B5ffb0a;
case 0x5ffb0c:goto L5ffb0c;
case 0x5ffb0f:c.instructions+=1;goto B5ffb0f;
case 0x5ffb11:goto L5ffb11;
case 0x5ffb13:goto L5ffb13;
case 0x5ffb15:c.instructions+=1;goto B5ffb15;
case 0x5ffb17:goto L5ffb17;
case 0x5ffb1b:c.instructions+=8;goto B5ffb1b;
case 0x5ffb1f:c.instructions+=7;goto B5ffb1f;
case 0x5ffb23:c.instructions+=6;goto B5ffb23;
case 0x5ffb27:c.instructions+=5;goto B5ffb27;
case 0x5ffb2d:c.instructions+=4;goto B5ffb2d;
case 0x5ffb2f:c.instructions+=3;goto B5ffb2f;
case 0x5ffb31:c.instructions+=2;goto B5ffb31;
case 0x5ffb35:c.instructions+=1;goto B5ffb35;
case 0x5ffb37:goto L5ffb37;
case 0x5ffb3d:c.instructions+=1;goto B5ffb3d;
case 0x5ffb3f:goto L5ffb3f;
case 0x5ffb41:goto L5ffb41;
case 0x5ffb43:c.instructions+=1;goto B5ffb43;
case 0x5ffb45:goto L5ffb45;
case 0x5ffb49:c.instructions+=4;goto B5ffb49;
case 0x5ffb4a:c.instructions+=3;goto B5ffb4a;
case 0x5ffb4c:c.instructions+=2;goto B5ffb4c;
case 0x5ffb52:c.instructions+=1;goto B5ffb52;
case 0x5ffb57:goto L5ffb57;
case 0x5ffb5d:c.instructions+=2;goto B5ffb5d;
case 0x5ffb5f:c.instructions+=1;goto B5ffb5f;
case 0x5ffb61:goto L5ffb61;
case 0x5ffb67:c.instructions+=1;goto B5ffb67;
case 0x5ffb69:goto L5ffb69;
case 0x5ffb6b:goto L5ffb6b;
case 0x5ffb6d:c.instructions+=1;goto B5ffb6d;
case 0x5ffb6f:goto L5ffb6f;
case 0x5ffb74:goto L5ffb74;
case 0x5ffb78:c.instructions+=4;goto B5ffb78;
case 0x5ffb7c:c.instructions+=3;goto B5ffb7c;
case 0x5ffb7e:c.instructions+=2;goto B5ffb7e;
case 0x5ffb82:c.instructions+=1;goto B5ffb82;
case 0x5ffb88:goto L5ffb88;
case 0x5ffb8a:goto L5ffb8a;
case 0x5ffb8c:c.instructions+=1;goto B5ffb8c;
case 0x5ffb90:goto L5ffb90;
case 0x5ffb94:c.instructions+=2;goto B5ffb94;
case 0x5ffb9a:c.instructions+=1;goto B5ffb9a;
case 0x5ffba0:goto L5ffba0;
case 0x5ffba2:c.instructions+=2;goto B5ffba2;
case 0x5ffba4:c.instructions+=1;goto B5ffba4;
case 0x5ffba9:goto L5ffba9;
case 0x5ffbac:c.instructions+=6;goto B5ffbac;
case 0x5ffbb2:c.instructions+=5;goto B5ffbb2;
case 0x5ffbb5:c.instructions+=4;goto B5ffbb5;
case 0x5ffbb8:c.instructions+=3;goto B5ffbb8;
case 0x5ffbba:c.instructions+=2;goto B5ffbba;
case 0x5ffbbd:c.instructions+=1;goto B5ffbbd;
case 0x5ffbbf:goto L5ffbbf;
case 0x5ffbc3:c.instructions+=3;goto B5ffbc3;
case 0x5ffbc4:c.instructions+=2;goto B5ffbc4;
case 0x5ffbc5:c.instructions+=1;goto B5ffbc5;
case 0x5ffbca:goto L5ffbca;
case 0x5ffbcd:goto L5ffbcd;
case 0x5ffbd0:c.instructions+=2;goto B5ffbd0;
case 0x5ffbd2:c.instructions+=1;goto B5ffbd2;
case 0x5ffbd4:goto L5ffbd4;
case 0x5ffbd8:c.instructions+=3;goto B5ffbd8;
case 0x5ffbd9:c.instructions+=2;goto B5ffbd9;
case 0x5ffbda:c.instructions+=1;goto B5ffbda;
case 0x5ffbdf:goto L5ffbdf;
case 0x5ffbe2:goto L5ffbe2;
case 0x5ffbe6:c.instructions+=1;goto B5ffbe6;
case 0x5ffbe8:goto L5ffbe8;
case 0x5ffbee:c.instructions+=4;goto B5ffbee;
case 0x5ffbf4:c.instructions+=3;goto B5ffbf4;
case 0x5ffbf6:c.instructions+=2;goto B5ffbf6;
case 0x5ffbf9:c.instructions+=1;goto B5ffbf9;
case 0x5ffbfb:goto L5ffbfb;
case 0x5ffbff:c.instructions+=3;goto B5ffbff;
case 0x5ffc00:c.instructions+=2;goto B5ffc00;
case 0x5ffc02:c.instructions+=1;goto B5ffc02;
case 0x5ffc07:goto L5ffc07;
case 0x5ffc09:c.instructions+=1;goto B5ffc09;
case 0x5ffc0b:goto L5ffc0b;
case 0x5ffc0e:c.instructions+=2;goto B5ffc0e;
case 0x5ffc10:c.instructions+=1;goto B5ffc10;
case 0x5ffc12:goto L5ffc12;
case 0x5ffc15:c.instructions+=2;goto B5ffc15;
case 0x5ffc17:c.instructions+=1;goto B5ffc17;
case 0x5ffc19:goto L5ffc19;
case 0x5ffc1d:c.instructions+=1;goto B5ffc1d;
case 0x5ffc22:goto L5ffc22;
case 0x5ffc26:c.instructions+=1;goto B5ffc26;
case 0x5ffc28:goto L5ffc28;
case 0x5ffc2e:c.instructions+=4;goto B5ffc2e;
case 0x5ffc34:c.instructions+=3;goto B5ffc34;
case 0x5ffc36:c.instructions+=2;goto B5ffc36;
case 0x5ffc39:c.instructions+=1;goto B5ffc39;
case 0x5ffc3b:goto L5ffc3b;
case 0x5ffc3f:c.instructions+=3;goto B5ffc3f;
case 0x5ffc40:c.instructions+=2;goto B5ffc40;
case 0x5ffc42:c.instructions+=1;goto B5ffc42;
case 0x5ffc47:goto L5ffc47;
case 0x5ffc49:c.instructions+=1;goto B5ffc49;
case 0x5ffc4b:goto L5ffc4b;
case 0x5ffc4e:c.instructions+=2;goto B5ffc4e;
case 0x5ffc50:c.instructions+=1;goto B5ffc50;
case 0x5ffc52:goto L5ffc52;
case 0x5ffc55:c.instructions+=2;goto B5ffc55;
case 0x5ffc57:c.instructions+=1;goto B5ffc57;
case 0x5ffc59:goto L5ffc59;
case 0x5ffc5d:c.instructions+=1;goto B5ffc5d;
case 0x5ffc5e:goto L5ffc5e;
case 0x5ffc60:c.instructions+=2;goto B5ffc60;
case 0x5ffc62:c.instructions+=1;goto B5ffc62;
case 0x5ffc64:goto L5ffc64;
case 0x5ffc68:c.instructions+=1;goto B5ffc68;
case 0x5ffc6d:goto L5ffc6d;
case 0x5ffc6e:c.instructions+=2;goto B5ffc6e;
case 0x5ffc70:c.instructions+=1;goto B5ffc70;
case 0x5ffc72:goto L5ffc72;
case 0x5ffc77:c.instructions+=2;goto B5ffc77;
case 0x5ffc79:c.instructions+=1;goto B5ffc79;
case 0x5ffc7b:goto L5ffc7b;
case 0x5ffc81:c.instructions+=1;goto B5ffc81;
case 0x5ffc83:goto L5ffc83;
case 0x5ffc85:goto L5ffc85;
case 0x5ffc89:c.instructions+=1;goto B5ffc89;
case 0x5ffc8b:goto L5ffc8b;
case 0x5ffc90:goto L5ffc90;
case 0x5ffc92:c.instructions+=2;goto B5ffc92;
case 0x5ffc94:c.instructions+=1;goto B5ffc94;
case 0x5ffc96:goto L5ffc96;
case 0x5ffca0:goto L5ffca0;
case 0x5ffca4:c.instructions+=2;goto B5ffca4;
case 0x5ffcaa:c.instructions+=1;goto B5ffcaa;
case 0x5ffcac:goto L5ffcac;
case 0x5ffcb2:c.instructions+=1;goto B5ffcb2;
case 0x5ffcb4:goto L5ffcb4;
case 0x5ffcba:c.instructions+=2;goto B5ffcba;
case 0x5ffcc0:c.instructions+=1;goto B5ffcc0;
case 0x5ffcc2:goto L5ffcc2;
case 0x5ffcc6:c.instructions+=3;goto B5ffcc6;
case 0x5ffcc7:c.instructions+=2;goto B5ffcc7;
case 0x5ffcc9:c.instructions+=1;goto B5ffcc9;
case 0x5ffcce:goto L5ffcce;
case 0x5ffccf:c.instructions+=2;goto B5ffccf;
case 0x5ffcd1:c.instructions+=1;goto B5ffcd1;
case 0x5ffcd3:goto L5ffcd3;
case 0x5ffcd9:c.instructions+=2;goto B5ffcd9;
case 0x5ffcdb:c.instructions+=1;goto B5ffcdb;
case 0x5ffcdd:goto L5ffcdd;
case 0x5ffce3:c.instructions+=1;goto B5ffce3;
case 0x5ffce5:goto L5ffce5;
case 0x5ffce7:goto L5ffce7;
case 0x5ffceb:c.instructions+=1;goto B5ffceb;
case 0x5ffced:goto L5ffced;
case 0x5ffcf1:c.instructions+=4;goto B5ffcf1;
case 0x5ffcf5:c.instructions+=3;goto B5ffcf5;
case 0x5ffcf9:c.instructions+=2;goto B5ffcf9;
case 0x5ffcfb:c.instructions+=1;goto B5ffcfb;
case 0x5ffd01:goto L5ffd01;
case 0x5ffd05:c.instructions+=2;goto B5ffd05;
case 0x5ffd0b:c.instructions+=1;goto B5ffd0b;
case 0x5ffd0d:goto L5ffd0d;
case 0x5ffd11:c.instructions+=2;goto B5ffd11;
case 0x5ffd13:c.instructions+=1;goto B5ffd13;
case 0x5ffd15:goto L5ffd15;
case 0x5ffd17:c.instructions+=8;goto B5ffd17;
case 0x5ffd19:c.instructions+=7;goto B5ffd19;
case 0x5ffd1c:c.instructions+=6;goto B5ffd1c;
case 0x5ffd1e:c.instructions+=5;goto B5ffd1e;
case 0x5ffd21:c.instructions+=4;goto B5ffd21;
case 0x5ffd26:c.instructions+=3;goto B5ffd26;
case 0x5ffd27:c.instructions+=2;goto B5ffd27;
case 0x5ffd28:c.instructions+=1;goto B5ffd28;
case 0x5ffd2d:goto L5ffd2d;
case 0x5ffd31:c.instructions+=4;goto B5ffd31;
case 0x5ffd35:c.instructions+=3;goto B5ffd35;
case 0x5ffd38:c.instructions+=2;goto B5ffd38;
case 0x5ffd3a:c.instructions+=1;goto B5ffd3a;
case 0x5ffd3c:goto L5ffd3c;
case 0x5ffd40:c.instructions+=4;goto B5ffd40;
case 0x5ffd43:c.instructions+=3;goto B5ffd43;
case 0x5ffd46:c.instructions+=2;goto B5ffd46;
case 0x5ffd48:c.instructions+=1;goto B5ffd48;
case 0x5ffd4a:goto L5ffd4a;
case 0x5ffd50:goto L5ffd50;
case 0x5ffd53:c.instructions+=4;goto B5ffd53;
case 0x5ffd55:c.instructions+=3;goto B5ffd55;
case 0x5ffd56:c.instructions+=2;goto B5ffd56;
case 0x5ffd58:c.instructions+=1;goto B5ffd58;
case 0x5ffd5d:goto L5ffd5d;
case 0x5ffd5f:c.instructions+=1;goto B5ffd5f;
case 0x5ffd61:goto L5ffd61;
case 0x5ffd63:c.instructions+=1;goto B5ffd63;
case 0x5ffd68:goto L5ffd68;
case 0x5ffd6a:c.instructions+=2;goto B5ffd6a;
case 0x5ffd6c:c.instructions+=1;goto B5ffd6c;
case 0x5ffd6e:goto L5ffd6e;
case 0x5ffd73:goto L5ffd73;
case 0x5ffd77:c.instructions+=4;goto B5ffd77;
case 0x5ffd7b:c.instructions+=3;goto B5ffd7b;
case 0x5ffd7d:c.instructions+=2;goto B5ffd7d;
case 0x5ffd85:c.instructions+=1;goto B5ffd85;
case 0x5ffd87:goto L5ffd87;
case 0x5ffd89:c.instructions+=8;goto B5ffd89;
case 0x5ffd8b:c.instructions+=7;goto B5ffd8b;
case 0x5ffd8e:c.instructions+=6;goto B5ffd8e;
case 0x5ffd90:c.instructions+=5;goto B5ffd90;
case 0x5ffd91:c.instructions+=4;goto B5ffd91;
case 0x5ffd94:c.instructions+=3;goto B5ffd94;
case 0x5ffd9a:c.instructions+=2;goto B5ffd9a;
case 0x5ffd9b:c.instructions+=1;goto B5ffd9b;
case 0x5ffda0:goto L5ffda0;
case 0x5ffda4:c.instructions+=4;goto B5ffda4;
case 0x5ffda8:c.instructions+=3;goto B5ffda8;
case 0x5ffdab:c.instructions+=2;goto B5ffdab;
case 0x5ffdad:c.instructions+=1;goto B5ffdad;
case 0x5ffdaf:goto L5ffdaf;
case 0x5ffdb3:c.instructions+=7;goto B5ffdb3;
case 0x5ffdb4:c.instructions+=6;goto B5ffdb4;
case 0x5ffdb5:c.instructions+=5;goto B5ffdb5;
case 0x5ffdbc:c.instructions+=4;goto B5ffdbc;
case 0x5ffdbd:c.instructions+=3;goto B5ffdbd;
case 0x5ffdbf:c.instructions+=2;goto B5ffdbf;
case 0x5ffdc0:c.instructions+=1;goto B5ffdc0;
case 0x5ffdd0:goto L5ffdd0;
case 0x5ffdd1:c.instructions+=4;goto B5ffdd1;
case 0x5ffdd3:c.instructions+=3;goto B5ffdd3;
case 0x5ffdd9:c.instructions+=2;goto B5ffdd9;
case 0x5ffddb:c.instructions+=1;goto B5ffddb;
case 0x5ffddd:goto L5ffddd;
case 0x5ffddf:c.instructions+=1;goto B5ffddf;
case 0x5ffde4:goto L5ffde4;
case 0x5ffde6:goto L5ffde6;
case 0x5ffdec:c.instructions+=2;goto B5ffdec;
case 0x5ffdee:c.instructions+=1;goto B5ffdee;
case 0x5ffdf0:goto L5ffdf0;
case 0x5ffdf2:c.instructions+=2;goto B5ffdf2;
case 0x5ffdf4:c.instructions+=1;goto B5ffdf4;
case 0x5ffdf6:goto L5ffdf6;
case 0x5ffdfc:c.instructions+=4;goto B5ffdfc;
case 0x5ffe02:c.instructions+=3;goto B5ffe02;
case 0x5ffe08:c.instructions+=2;goto B5ffe08;
case 0x5ffe0e:c.instructions+=1;goto B5ffe0e;
case 0x5ffe18:goto L5ffe18;
case 0x5ffe1e:c.instructions+=2;goto B5ffe1e;
case 0x5ffe20:c.instructions+=1;goto B5ffe20;
case 0x5ffe22:goto L5ffe22;
case 0x5ffe26:c.instructions+=1;goto B5ffe26;
case 0x5ffe28:goto L5ffe28;
case 0x5ffe29:c.instructions+=6;goto B5ffe29;
case 0x5ffe2b:c.instructions+=5;goto B5ffe2b;
case 0x5ffe2e:c.instructions+=4;goto B5ffe2e;
case 0x5ffe31:c.instructions+=3;goto B5ffe31;
case 0x5ffe38:c.instructions+=2;goto B5ffe38;
case 0x5ffe39:c.instructions+=1;goto B5ffe39;
case 0x5ffe3e:goto L5ffe3e;
case 0x5ffe44:c.instructions+=3;goto B5ffe44;
case 0x5ffe47:c.instructions+=2;goto B5ffe47;
case 0x5ffe48:c.instructions+=1;goto B5ffe48;
case 0x5ffe4b:goto L5ffe4b;
case 0x5ffe51:c.instructions+=5;goto B5ffe51;
case 0x5ffe53:c.instructions+=4;goto B5ffe53;
case 0x5ffe55:c.instructions+=3;goto B5ffe55;
case 0x5ffe5b:c.instructions+=2;goto B5ffe5b;
case 0x5ffe5c:c.instructions+=1;goto B5ffe5c;
case 0x5ffe5f:goto L5ffe5f;
case 0x5ffe60:goto L5ffe60;
case 0x5ffe66:c.instructions+=3;goto B5ffe66;
case 0x5ffe68:c.instructions+=2;goto B5ffe68;
case 0x5ffe69:c.instructions+=1;goto B5ffe69;
case 0x5ffe70:goto L5ffe70;
case 0x5ffe71:c.instructions+=6;goto B5ffe71;
case 0x5ffe72:c.instructions+=5;goto B5ffe72;
case 0x5ffe74:c.instructions+=4;goto B5ffe74;
case 0x5ffe77:c.instructions+=3;goto B5ffe77;
case 0x5ffe79:c.instructions+=2;goto B5ffe79;
case 0x5ffe7b:c.instructions+=1;goto B5ffe7b;
case 0x5ffe81:goto L5ffe81;
case 0x5ffe84:c.instructions+=2;goto B5ffe84;
case 0x5ffe85:c.instructions+=1;goto B5ffe85;
case 0x5ffe8a:goto L5ffe8a;
case 0x5ffe8d:c.instructions+=5;goto B5ffe8d;
case 0x5ffe90:c.instructions+=4;goto B5ffe90;
case 0x5ffe91:c.instructions+=3;goto B5ffe91;
case 0x5ffe94:c.instructions+=2;goto B5ffe94;
case 0x5ffe9a:c.instructions+=1;goto B5ffe9a;
case 0x5ffe9c:goto L5ffe9c;
case 0x5ffea3:c.instructions+=1;goto B5ffea3;
case 0x5ffeaa:goto L5ffeaa;
case 0x5ffeb0:c.instructions+=1;goto B5ffeb0;
case 0x5ffeb2:goto L5ffeb2;
case 0x5ffeb8:c.instructions+=1;goto B5ffeb8;
case 0x5ffebb:goto L5ffebb;
case 0x5ffec0:c.instructions+=2;goto B5ffec0;
case 0x5ffec3:c.instructions+=1;goto B5ffec3;
case 0x5ffec5:goto L5ffec5;
case 0x5ffec7:c.instructions+=1;goto B5ffec7;
case 0x5ffecc:goto L5ffecc;
case 0x5ffecf:c.instructions+=2;goto B5ffecf;
case 0x5ffed1:c.instructions+=1;goto B5ffed1;
case 0x5ffed3:goto L5ffed3;
case 0x5ffed4:c.instructions+=3;goto B5ffed4;
case 0x5ffeda:c.instructions+=2;goto B5ffeda;
case 0x5ffedc:c.instructions+=1;goto B5ffedc;
case 0x5ffede:goto L5ffede;
case 0x5ffee0:c.instructions+=1;goto B5ffee0;
case 0x5ffee5:goto L5ffee5;
case 0x5ffee6:c.instructions+=2;goto B5ffee6;
case 0x5ffee8:c.instructions+=1;goto B5ffee8;
case 0x5ffeed:goto L5ffeed;
case 0x5ffeee:goto L5ffeee;
case 0x5ffef3:c.instructions+=12;goto B5ffef3;
case 0x5ffefd:c.instructions+=11;goto B5ffefd;
case 0x5fff03:c.instructions+=10;goto B5fff03;
case 0x5fff09:c.instructions+=9;goto B5fff09;
case 0x5fff0f:c.instructions+=8;goto B5fff0f;
case 0x5fff15:c.instructions+=7;goto B5fff15;
case 0x5fff18:c.instructions+=6;goto B5fff18;
case 0x5fff1b:c.instructions+=5;goto B5fff1b;
case 0x5fff1d:c.instructions+=4;goto B5fff1d;
case 0x5fff20:c.instructions+=3;goto B5fff20;
case 0x5fff26:c.instructions+=2;goto B5fff26;
case 0x5fff2c:c.instructions+=1;goto B5fff2c;
case 0x5fff31:goto L5fff31;
case 0x5fff32:c.instructions+=2;goto B5fff32;
case 0x5fff33:c.instructions+=1;goto B5fff33;
case 0x5fff50:goto L5fff50;
case 0x5fff51:c.instructions+=7;goto B5fff51;
case 0x5fff52:c.instructions+=6;goto B5fff52;
case 0x5fff53:c.instructions+=5;goto B5fff53;
case 0x5fff55:c.instructions+=4;goto B5fff55;
case 0x5fff58:c.instructions+=3;goto B5fff58;
case 0x5fff5a:c.instructions+=2;goto B5fff5a;
case 0x5fff5c:c.instructions+=1;goto B5fff5c;
case 0x5fff62:goto L5fff62;
case 0x5fff67:c.instructions+=2;goto B5fff67;
case 0x5fff69:c.instructions+=1;goto B5fff69;
case 0x5fff6b:goto L5fff6b;
case 0x5fff70:c.instructions+=1;goto B5fff70;
case 0x5fff75:goto L5fff75;
case 0x5fff77:c.instructions+=1;goto B5fff77;
case 0x5fff79:goto L5fff79;
case 0x5fff7f:c.instructions+=7;goto B5fff7f;
case 0x5fff82:c.instructions+=6;goto B5fff82;
case 0x5fff84:c.instructions+=5;goto B5fff84;
case 0x5fff8a:c.instructions+=4;goto B5fff8a;
case 0x5fff90:c.instructions+=3;goto B5fff90;
case 0x5fff92:c.instructions+=2;goto B5fff92;
case 0x5fff95:c.instructions+=1;goto B5fff95;
case 0x5fff97:goto L5fff97;
case 0x5fff99:c.instructions+=1;goto B5fff99;
case 0x5fff9b:goto L5fff9b;
case 0x5fffa1:goto L5fffa1;
case 0x5fffa7:c.instructions+=4;goto B5fffa7;
case 0x5fffa9:c.instructions+=3;goto B5fffa9;
case 0x5fffab:c.instructions+=2;goto B5fffab;
case 0x5fffae:c.instructions+=1;goto B5fffae;
case 0x5fffb0:goto L5fffb0;
case 0x5fffb2:c.instructions+=1;goto B5fffb2;
case 0x5fffb8:goto L5fffb8;
case 0x5fffba:c.instructions+=5;goto B5fffba;
case 0x5fffbc:c.instructions+=4;goto B5fffbc;
case 0x5fffbe:c.instructions+=3;goto B5fffbe;
case 0x5fffc0:c.instructions+=2;goto B5fffc0;
case 0x5fffc3:c.instructions+=1;goto B5fffc3;
case 0x5fffc5:goto L5fffc5;
case 0x5fffcb:c.instructions+=2;goto B5fffcb;
case 0x5fffcd:c.instructions+=1;goto B5fffcd;
case 0x5fffd2:goto L5fffd2;
case 0x5fffd3:c.instructions+=4;goto B5fffd3;
case 0x5fffd5:c.instructions+=3;goto B5fffd5;
case 0x5fffd6:c.instructions+=2;goto B5fffd6;
case 0x5fffd7:c.instructions+=1;goto B5fffd7;
case 0x5fffd8:goto L5fffd8;
case 0x5fffdf:c.instructions+=1;goto B5fffdf;
case 0x5fffe1:goto L5fffe1;
case 0x5fffe6:c.instructions+=2;goto B5fffe6;
case 0x5fffe8:c.instructions+=1;goto B5fffe8;
case 0x5fffea:goto L5fffea;
case 0x5fffef:c.instructions+=2;goto B5fffef;
case 0x5ffff1:c.instructions+=1;goto B5ffff1;
case 0x5ffff3:goto L5ffff3;
case 0x5ffff8:c.instructions+=2;goto B5ffff8;
case 0x5ffffa:c.instructions+=1;goto B5ffffa;
case 0x5ffffc:goto L5ffffc;
default:missing_instruction(c.pc);}
B5ff000:L5ff000:{c.instructions+=13;NFSU2_TR(0x5ff000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5ff003:{NFSU2_TR(0x5ff003);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff004:{NFSU2_TR(0x5ff004);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff005:{NFSU2_TR(0x5ff005);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ff009:{NFSU2_TR(0x5ff009);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff00a:{NFSU2_TR(0x5ff00a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff00c:{NFSU2_TR(0x5ff00c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ff010:{NFSU2_TR(0x5ff010);
__builtin_memmove((R+28),(R+4),4);
}
B5ff012:{NFSU2_TR(0x5ff012);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ff014:{NFSU2_TR(0x5ff014);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff015:{NFSU2_TR(0x5ff015);
__builtin_memmove((R+4),(R+24),4);
}
B5ff017:{NFSU2_TR(0x5ff017);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff01b:{NFSU2_TR(0x5ff01b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff020ull));
TAIL_STATIC(0x581d90u,581);
}
B5ff020:L5ff020:{c.instructions+=6;NFSU2_TR(0x5ff020);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff022:{NFSU2_TR(0x5ff022);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff026:{NFSU2_TR(0x5ff026);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff027:{NFSU2_TR(0x5ff027);
__builtin_memmove((R+4),(R+24),4);
}
B5ff029:{NFSU2_TR(0x5ff029);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff02d:{NFSU2_TR(0x5ff02d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff032ull));
TAIL_STATIC(0x581d90u,581);
}
B5ff032:L5ff032:{c.instructions+=6;NFSU2_TR(0x5ff032);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff034:{NFSU2_TR(0x5ff034);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ff038:{NFSU2_TR(0x5ff038);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff039:{NFSU2_TR(0x5ff039);
__builtin_memmove((R+4),(R+24),4);
}
B5ff03b:{NFSU2_TR(0x5ff03b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff03f:{NFSU2_TR(0x5ff03f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff044ull));
TAIL_STATIC(0x581d90u,581);
}
B5ff044:L5ff044:{c.instructions+=6;NFSU2_TR(0x5ff044);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff046:{NFSU2_TR(0x5ff046);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ff04a:{NFSU2_TR(0x5ff04a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff04b:{NFSU2_TR(0x5ff04b);
__builtin_memmove((R+4),(R+24),4);
}
B5ff04d:{NFSU2_TR(0x5ff04d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff051:{NFSU2_TR(0x5ff051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff056ull));
TAIL_STATIC(0x581d90u,581);
}
B5ff056:L5ff056:{c.instructions+=4;NFSU2_TR(0x5ff056);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5ff05b:{NFSU2_TR(0x5ff05b);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5ff05f:{NFSU2_TR(0x5ff05f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff061:{NFSU2_TR(0x5ff061);
if(r1(R+518)){{goto L5ff17a;}}
}
B5ff067:L5ff067:{c.instructions+=4;NFSU2_TR(0x5ff067);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff06d:{NFSU2_TR(0x5ff06d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ff071:{NFSU2_TR(0x5ff071);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff073:{NFSU2_TR(0x5ff073);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5ff17a;}}
}
B5ff079:L5ff079:{c.instructions+=3;NFSU2_TR(0x5ff079);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ff07a:{NFSU2_TR(0x5ff07a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff07c:{NFSU2_TR(0x5ff07c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff164;}}
}
B5ff082:L5ff082:{c.instructions+=6;NFSU2_TR(0x5ff082);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5ff087:{NFSU2_TR(0x5ff087);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff089:{NFSU2_TR(0x5ff089);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff08a:{NFSU2_TR(0x5ff08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ff08d:{NFSU2_TR(0x5ff08d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff091:{NFSU2_TR(0x5ff091);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ff119;}}
}
B5ff097:L5ff097:{c.instructions+=7;NFSU2_TR(0x5ff097);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff099:{NFSU2_TR(0x5ff099);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff09d:{NFSU2_TR(0x5ff09d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff09e:{NFSU2_TR(0x5ff09e);
__builtin_memmove((R+4),(R+24),4);
}
B5ff0a0:{NFSU2_TR(0x5ff0a0);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ff0a4:{NFSU2_TR(0x5ff0a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff0a8:{NFSU2_TR(0x5ff0a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff0adull));
TAIL_STATIC(0x584020u,584);
}
B5ff0ad:L5ff0ad:{c.instructions+=5;NFSU2_TR(0x5ff0ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ff0b1:{NFSU2_TR(0x5ff0b1);
__builtin_memmove((R+0),gp(0x850098),1);
}
B5ff0b6:{NFSU2_TR(0x5ff0b6);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B5ff0b8:{NFSU2_TR(0x5ff0b8);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ff0ba:{NFSU2_TR(0x5ff0ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff0c4;}}
}
B5ff0bc:L5ff0bc:{c.instructions+=2;NFSU2_TR(0x5ff0bc);
u8 U[8];
__builtin_memmove((U+0),gp(0x864fac),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff0c2:{NFSU2_TR(0x5ff0c2);
if(r1(R+518)){{goto L5ff0d9;}}
}
B5ff0c4:L5ff0c4:{c.instructions+=2;NFSU2_TR(0x5ff0c4);
u8 U[2];
__builtin_memmove((U+0),gp(0x89d061),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ff0ca:{NFSU2_TR(0x5ff0ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff0d9;}}
}
B5ff0cc:L5ff0cc:{c.instructions+=2;NFSU2_TR(0x5ff0cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff0d0:{NFSU2_TR(0x5ff0d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff0d5ull));
TAIL_STATIC(0x56c600u,56c);
}
B5ff0d5:L5ff0d5:{c.instructions+=2;NFSU2_TR(0x5ff0d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ff0d7:{NFSU2_TR(0x5ff0d7);
if(r1(R+518)){{goto L5ff0ed;}}
}
B5ff0d9:L5ff0d9:{c.instructions+=6;NFSU2_TR(0x5ff0d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff0dd:{NFSU2_TR(0x5ff0dd);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5ff0e2:{NFSU2_TR(0x5ff0e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ff0e3:{NFSU2_TR(0x5ff0e3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ff0e5:{NFSU2_TR(0x5ff0e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff0e9:{NFSU2_TR(0x5ff0e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ff097u);}goto L5ff097;}}
}
B5ff0eb:L5ff0eb:{c.instructions+=1;NFSU2_TR(0x5ff0eb);
{goto L5ff119;}
}
B5ff0ed:L5ff0ed:{c.instructions+=2;NFSU2_TR(0x5ff0ed);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ff0f3:{NFSU2_TR(0x5ff0f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff101;}}
}
B5ff0f5:L5ff0f5:{c.instructions+=2;NFSU2_TR(0x5ff0f5);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff0fb:{NFSU2_TR(0x5ff0fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff101;}}
}
B5ff0fd:L5ff0fd:{c.instructions+=2;NFSU2_TR(0x5ff0fd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ff0ff:{NFSU2_TR(0x5ff0ff);
{goto L5ff106;}
}
B5ff101:L5ff101:{c.instructions+=1;NFSU2_TR(0x5ff101);
w4(R+0,u32(0x1ull));
}
B5ff106:L5ff106:{c.instructions+=7;NFSU2_TR(0x5ff106);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ff108:{NFSU2_TR(0x5ff108);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ff10a:{NFSU2_TR(0x5ff10a);
__builtin_memmove((R+8),(R+518),1);
}
B5ff10d:{NFSU2_TR(0x5ff10d);
__builtin_memmove((R+4),(R+28),4);
}
B5ff10f:{NFSU2_TR(0x5ff10f);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5ff113:{NFSU2_TR(0x5ff113);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff114:{NFSU2_TR(0x5ff114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff119ull));
TAIL_STATIC(0x5f9010u,5f9);
}
B5ff119:L5ff119:{c.instructions+=2;NFSU2_TR(0x5ff119);
u8 U[2];
__builtin_memmove((U+0),gp(0x850098),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ff11f:{NFSU2_TR(0x5ff11f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff129;}}
}
B5ff121:L5ff121:{c.instructions+=2;NFSU2_TR(0x5ff121);
u8 U[8];
__builtin_memmove((U+0),gp(0x864fac),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff127:{NFSU2_TR(0x5ff127);
if(r1(R+518)){{goto L5ff163;}}
}
B5ff129:L5ff129:{c.instructions+=2;NFSU2_TR(0x5ff129);
u8 U[2];
__builtin_memmove((U+0),gp(0x89d061),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ff12f:{NFSU2_TR(0x5ff12f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff163;}}
}
B5ff131:L5ff131:{c.instructions+=2;NFSU2_TR(0x5ff131);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ff135:{NFSU2_TR(0x5ff135);
if(r1(R+518)){{goto L5ff163;}}
}
B5ff137:L5ff137:{c.instructions+=2;NFSU2_TR(0x5ff137);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ff13d:{NFSU2_TR(0x5ff13d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff14b;}}
}
B5ff13f:L5ff13f:{c.instructions+=2;NFSU2_TR(0x5ff13f);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff145:{NFSU2_TR(0x5ff145);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff14b;}}
}
B5ff147:L5ff147:{c.instructions+=2;NFSU2_TR(0x5ff147);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ff149:{NFSU2_TR(0x5ff149);
{goto L5ff150;}
}
B5ff14b:L5ff14b:{c.instructions+=1;NFSU2_TR(0x5ff14b);
w4(R+0,u32(0x1ull));
}
B5ff150:L5ff150:{c.instructions+=7;NFSU2_TR(0x5ff150);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ff152:{NFSU2_TR(0x5ff152);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ff154:{NFSU2_TR(0x5ff154);
__builtin_memmove((R+4),(R+518),1);
}
B5ff157:{NFSU2_TR(0x5ff157);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ff15b:{NFSU2_TR(0x5ff15b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff15c:{NFSU2_TR(0x5ff15c);
__builtin_memmove((R+4),(R+28),4);
}
B5ff15e:{NFSU2_TR(0x5ff15e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff163ull));
TAIL_STATIC(0x5f9010u,5f9);
}
B5ff163:L5ff163:{c.instructions+=1;NFSU2_TR(0x5ff163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ff164:L5ff164:{c.instructions+=4;NFSU2_TR(0x5ff164);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ff168:{NFSU2_TR(0x5ff168);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff169:{NFSU2_TR(0x5ff169);
__builtin_memmove((R+4),(R+28),4);
}
B5ff16b:{NFSU2_TR(0x5ff16b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff170ull));
TAIL_STATIC(0x5fe090u,5fe);
}
B5ff170:L5ff170:{c.instructions+=2;NFSU2_TR(0x5ff170);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff174:{NFSU2_TR(0x5ff174);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x270ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff17a:L5ff17a:{c.instructions+=5;NFSU2_TR(0x5ff17a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ff17b:{NFSU2_TR(0x5ff17b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ff17c:{NFSU2_TR(0x5ff17c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ff17d:{NFSU2_TR(0x5ff17d);
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
B5ff180:{NFSU2_TR(0x5ff180);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ff190:L5ff190:{c.instructions+=11;NFSU2_TR(0x5ff190);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff191:{NFSU2_TR(0x5ff191);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff192:{NFSU2_TR(0x5ff192);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff193:{NFSU2_TR(0x5ff193);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ff197:{NFSU2_TR(0x5ff197);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff199:{NFSU2_TR(0x5ff199);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ff19d:{NFSU2_TR(0x5ff19d);
__builtin_memmove((R+24),(R+4),4);
}
B5ff19f:{NFSU2_TR(0x5ff19f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff1a0:{NFSU2_TR(0x5ff1a0);
__builtin_memmove((R+4),(R+28),4);
}
B5ff1a2:{NFSU2_TR(0x5ff1a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ff1aa:{NFSU2_TR(0x5ff1aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff1afull));
TAIL_STATIC(0x581d90u,581);
}
B5ff1af:L5ff1af:{c.instructions+=6;NFSU2_TR(0x5ff1af);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff1b1:{NFSU2_TR(0x5ff1b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff1b5:{NFSU2_TR(0x5ff1b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff1b6:{NFSU2_TR(0x5ff1b6);
__builtin_memmove((R+4),(R+28),4);
}
B5ff1b8:{NFSU2_TR(0x5ff1b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ff1c0:{NFSU2_TR(0x5ff1c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff1c5ull));
TAIL_STATIC(0x581d90u,581);
}
B5ff1c5:L5ff1c5:{c.instructions+=5;NFSU2_TR(0x5ff1c5);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5ff1c9:{NFSU2_TR(0x5ff1c9);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B5ff1cc:{NFSU2_TR(0x5ff1cc);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5ff1d0:{NFSU2_TR(0x5ff1d0);
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
B5ff1d2:{NFSU2_TR(0x5ff1d2);
if(r1(R+518)){{goto L5ff3a9;}}
}
B5ff1d8:L5ff1d8:{c.instructions+=4;NFSU2_TR(0x5ff1d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5ff1de:{NFSU2_TR(0x5ff1de);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ff1e0:{NFSU2_TR(0x5ff1e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff1e1:{NFSU2_TR(0x5ff1e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff31f;}}
}
B5ff1e7:L5ff1e7:{c.instructions+=4;NFSU2_TR(0x5ff1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff1ea:{NFSU2_TR(0x5ff1ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff1ec:{NFSU2_TR(0x5ff1ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ff1f0:{NFSU2_TR(0x5ff1f0);
if(r1(R+518)){{goto L5ff20d;}}
}
B5ff1f2:L5ff1f2:{c.instructions+=2;NFSU2_TR(0x5ff1f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ff1f4:{NFSU2_TR(0x5ff1f4);
if(r1(R+518)){{goto L5ff20d;}}
}
B5ff1f6:L5ff1f6:{c.instructions+=3;NFSU2_TR(0x5ff1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff1fc:{NFSU2_TR(0x5ff1fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff1fe:{NFSU2_TR(0x5ff1fe);
if(r1(R+518)){{goto L5ff207;}}
}
B5ff200:L5ff200:{c.instructions+=2;NFSU2_TR(0x5ff200);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff205:{NFSU2_TR(0x5ff205);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff20d;}}
}
B5ff207:L5ff207:{c.instructions+=1;NFSU2_TR(0x5ff207);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff20d:L5ff20d:{c.instructions+=4;NFSU2_TR(0x5ff20d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff210:{NFSU2_TR(0x5ff210);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff212:{NFSU2_TR(0x5ff212);
w1(R+8,u8(0x1ull));
}
B5ff214:{NFSU2_TR(0x5ff214);
if(r1(R+518)){{goto L5ff235;}}
}
B5ff216:L5ff216:{c.instructions+=2;NFSU2_TR(0x5ff216);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5ff21c:{NFSU2_TR(0x5ff21c);
if(r1(R+518)){{goto L5ff235;}}
}
B5ff21e:L5ff21e:{c.instructions+=3;NFSU2_TR(0x5ff21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff224:{NFSU2_TR(0x5ff224);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff226:{NFSU2_TR(0x5ff226);
if(r1(R+518)){{goto L5ff22f;}}
}
B5ff228:L5ff228:{c.instructions+=2;NFSU2_TR(0x5ff228);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff22d:{NFSU2_TR(0x5ff22d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff235;}}
}
B5ff22f:L5ff22f:{c.instructions+=1;NFSU2_TR(0x5ff22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff235:L5ff235:{c.instructions+=3;NFSU2_TR(0x5ff235);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff238:{NFSU2_TR(0x5ff238);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff23a:{NFSU2_TR(0x5ff23a);
if(r1(R+518)){{goto L5ff25c;}}
}
B5ff23c:L5ff23c:{c.instructions+=2;NFSU2_TR(0x5ff23c);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5ff243:{NFSU2_TR(0x5ff243);
if(r1(R+518)){{goto L5ff25c;}}
}
B5ff245:L5ff245:{c.instructions+=3;NFSU2_TR(0x5ff245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff24b:{NFSU2_TR(0x5ff24b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff24d:{NFSU2_TR(0x5ff24d);
if(r1(R+518)){{goto L5ff256;}}
}
B5ff24f:L5ff24f:{c.instructions+=2;NFSU2_TR(0x5ff24f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff254:{NFSU2_TR(0x5ff254);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff25c;}}
}
B5ff256:L5ff256:{c.instructions+=1;NFSU2_TR(0x5ff256);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff25c:L5ff25c:{c.instructions+=3;NFSU2_TR(0x5ff25c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff25f:{NFSU2_TR(0x5ff25f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff261:{NFSU2_TR(0x5ff261);
if(r1(R+518)){{goto L5ff283;}}
}
B5ff263:L5ff263:{c.instructions+=2;NFSU2_TR(0x5ff263);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5ff26a:{NFSU2_TR(0x5ff26a);
if(r1(R+518)){{goto L5ff283;}}
}
B5ff26c:L5ff26c:{c.instructions+=3;NFSU2_TR(0x5ff26c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff272:{NFSU2_TR(0x5ff272);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff274:{NFSU2_TR(0x5ff274);
if(r1(R+518)){{goto L5ff27d;}}
}
B5ff276:L5ff276:{c.instructions+=2;NFSU2_TR(0x5ff276);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff27b:{NFSU2_TR(0x5ff27b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff283;}}
}
B5ff27d:L5ff27d:{c.instructions+=1;NFSU2_TR(0x5ff27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff283:L5ff283:{c.instructions+=3;NFSU2_TR(0x5ff283);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff286:{NFSU2_TR(0x5ff286);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff288:{NFSU2_TR(0x5ff288);
if(r1(R+518)){{goto L5ff2aa;}}
}
B5ff28a:L5ff28a:{c.instructions+=2;NFSU2_TR(0x5ff28a);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5ff291:{NFSU2_TR(0x5ff291);
if(r1(R+518)){{goto L5ff2aa;}}
}
B5ff293:L5ff293:{c.instructions+=3;NFSU2_TR(0x5ff293);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff299:{NFSU2_TR(0x5ff299);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff29b:{NFSU2_TR(0x5ff29b);
if(r1(R+518)){{goto L5ff2a4;}}
}
B5ff29d:L5ff29d:{c.instructions+=2;NFSU2_TR(0x5ff29d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff2a2:{NFSU2_TR(0x5ff2a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff2aa;}}
}
B5ff2a4:L5ff2a4:{c.instructions+=1;NFSU2_TR(0x5ff2a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff2aa:L5ff2aa:{c.instructions+=3;NFSU2_TR(0x5ff2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff2ad:{NFSU2_TR(0x5ff2ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff2af:{NFSU2_TR(0x5ff2af);
if(r1(R+518)){{goto L5ff2d1;}}
}
B5ff2b1:L5ff2b1:{c.instructions+=2;NFSU2_TR(0x5ff2b1);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5ff2b8:{NFSU2_TR(0x5ff2b8);
if(r1(R+518)){{goto L5ff2d1;}}
}
B5ff2ba:L5ff2ba:{c.instructions+=3;NFSU2_TR(0x5ff2ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff2c0:{NFSU2_TR(0x5ff2c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff2c2:{NFSU2_TR(0x5ff2c2);
if(r1(R+518)){{goto L5ff2cb;}}
}
B5ff2c4:L5ff2c4:{c.instructions+=2;NFSU2_TR(0x5ff2c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff2c9:{NFSU2_TR(0x5ff2c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff2d1;}}
}
B5ff2cb:L5ff2cb:{c.instructions+=1;NFSU2_TR(0x5ff2cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff2d1:L5ff2d1:{c.instructions+=18;NFSU2_TR(0x5ff2d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5ff2d8:{NFSU2_TR(0x5ff2d8);
u8 U[16];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5ff2df:{NFSU2_TR(0x5ff2df);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5ff2e6:{NFSU2_TR(0x5ff2e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ff2ec:{NFSU2_TR(0x5ff2ec);
u8 U[16];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5ff2f3:{NFSU2_TR(0x5ff2f3);
u8 U[12];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5ff2fa:{NFSU2_TR(0x5ff2fa);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B5ff2fc:{NFSU2_TR(0x5ff2fc);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B5ff2fe:{NFSU2_TR(0x5ff2fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ff300:{NFSU2_TR(0x5ff300);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5ff306:{NFSU2_TR(0x5ff306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ff307:{NFSU2_TR(0x5ff307);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xea60ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xea60ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xea60ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ff30d:{NFSU2_TR(0x5ff30d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff313:{NFSU2_TR(0x5ff313);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ff314:{NFSU2_TR(0x5ff314);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ff31a:{NFSU2_TR(0x5ff31a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ff31b:{NFSU2_TR(0x5ff31b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff31c:{NFSU2_TR(0x5ff31c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ff31f:L5ff31f:{c.instructions+=5;NFSU2_TR(0x5ff31f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ff323:{NFSU2_TR(0x5ff323);
u8 U[16];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5ff32a:{NFSU2_TR(0x5ff32a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5ff32c:{NFSU2_TR(0x5ff32c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff32f:{NFSU2_TR(0x5ff32f);
w4(R+28,u32(0x6ull));
}
B5ff334:L5ff334:{c.instructions+=3;NFSU2_TR(0x5ff334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ff336:{NFSU2_TR(0x5ff336);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff338:{NFSU2_TR(0x5ff338);
if(r1(R+518)){{goto L5ff361;}}
}
B5ff33a:L5ff33a:{c.instructions+=3;NFSU2_TR(0x5ff33a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ff33c:{NFSU2_TR(0x5ff33c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff33f:{NFSU2_TR(0x5ff33f);
if(r1(R+518)){{goto L5ff361;}}
}
B5ff341:L5ff341:{c.instructions+=2;NFSU2_TR(0x5ff341);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff344:{NFSU2_TR(0x5ff344);
if(r1(R+518)){{goto L5ff361;}}
}
B5ff346:L5ff346:{c.instructions+=2;NFSU2_TR(0x5ff346);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff348:{NFSU2_TR(0x5ff348);
if(r1(R+518)){{goto L5ff361;}}
}
B5ff34a:L5ff34a:{c.instructions+=2;NFSU2_TR(0x5ff34a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff34d:{NFSU2_TR(0x5ff34d);
if(r1(R+518)){{goto L5ff361;}}
}
B5ff34f:L5ff34f:{c.instructions+=3;NFSU2_TR(0x5ff34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff355:{NFSU2_TR(0x5ff355);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff357:{NFSU2_TR(0x5ff357);
if(r1(R+518)){{goto L5ff360;}}
}
B5ff359:L5ff359:{c.instructions+=2;NFSU2_TR(0x5ff359);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff35e:{NFSU2_TR(0x5ff35e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff361;}}
}
B5ff360:L5ff360:{c.instructions+=1;NFSU2_TR(0x5ff360);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5ff361:L5ff361:{c.instructions+=3;NFSU2_TR(0x5ff361);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5ff364:{NFSU2_TR(0x5ff364);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5ff365:{NFSU2_TR(0x5ff365);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ff334u);}goto L5ff334;}}
}
B5ff367:L5ff367:{c.instructions+=2;NFSU2_TR(0x5ff367);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5ff36a:{NFSU2_TR(0x5ff36a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff3a8;}}
}
B5ff36c:L5ff36c:{c.instructions+=12;NFSU2_TR(0x5ff36c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5ff373:{NFSU2_TR(0x5ff373);
u8 U[16];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5ff37a:{NFSU2_TR(0x5ff37a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5ff381:{NFSU2_TR(0x5ff381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ff387:{NFSU2_TR(0x5ff387);
u8 U[12];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5ff38e:{NFSU2_TR(0x5ff38e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ff390:{NFSU2_TR(0x5ff390);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B5ff392:{NFSU2_TR(0x5ff392);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5ff394:{NFSU2_TR(0x5ff394);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ff396:{NFSU2_TR(0x5ff396);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B5ff39c:{NFSU2_TR(0x5ff39c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0xea60ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0xea60ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xea60ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ff3a2:{NFSU2_TR(0x5ff3a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff3a8:L5ff3a8:{c.instructions+=1;NFSU2_TR(0x5ff3a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ff3a9:L5ff3a9:{c.instructions+=4;NFSU2_TR(0x5ff3a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ff3aa:{NFSU2_TR(0x5ff3aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ff3ab:{NFSU2_TR(0x5ff3ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff3ac:{NFSU2_TR(0x5ff3ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ff3b0:L5ff3b0:{c.instructions+=6;NFSU2_TR(0x5ff3b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff3b1:{NFSU2_TR(0x5ff3b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff3b2:{NFSU2_TR(0x5ff3b2);
__builtin_memmove((R+28),(R+4),4);
}
B5ff3b4:{NFSU2_TR(0x5ff3b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5ff3b6:{NFSU2_TR(0x5ff3b6);
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
B5ff3b8:{NFSU2_TR(0x5ff3b8);
if(r1(R+518)){{goto L5ff3e0;}}
}
B5ff3ba:L5ff3ba:{c.instructions+=1;NFSU2_TR(0x5ff3ba);
__builtin_memmove((R+12),(R+12),4);
}
B5ff3c0:L5ff3c0:{c.instructions+=6;NFSU2_TR(0x5ff3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ff3c3:{NFSU2_TR(0x5ff3c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ff3c5:{NFSU2_TR(0x5ff3c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ff3c7:{NFSU2_TR(0x5ff3c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff3ca:{NFSU2_TR(0x5ff3ca);
__builtin_memmove((R+4),(R+24),4);
}
B5ff3cc:{NFSU2_TR(0x5ff3cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff3d1ull));
TAIL_STATIC(0x5f44d0u,5f4);
}
B5ff3d1:L5ff3d1:{c.instructions+=2;NFSU2_TR(0x5ff3d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff3d2:{NFSU2_TR(0x5ff3d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff3d7ull));
TAIL_STATIC(0x575630u,575);
}
B5ff3d7:L5ff3d7:{c.instructions+=4;NFSU2_TR(0x5ff3d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5ff3d9:{NFSU2_TR(0x5ff3d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ff3dc:{NFSU2_TR(0x5ff3dc);
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
B5ff3de:{NFSU2_TR(0x5ff3de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ff3c0u);}goto L5ff3c0;}}
}
B5ff3e0:L5ff3e0:{c.instructions+=3;NFSU2_TR(0x5ff3e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ff3e1:{NFSU2_TR(0x5ff3e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ff3e2:{NFSU2_TR(0x5ff3e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ff3f0:L5ff3f0:{c.instructions+=5;NFSU2_TR(0x5ff3f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff3f1:{NFSU2_TR(0x5ff3f1);
__builtin_memmove((R+24),(R+4),4);
}
B5ff3f3:{NFSU2_TR(0x5ff3f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ff3f5:{NFSU2_TR(0x5ff3f5);
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
B5ff3f7:{NFSU2_TR(0x5ff3f7);
if(r1(R+518)){{goto L5ff41f;}}
}
B5ff3f9:L5ff3f9:{c.instructions+=1;NFSU2_TR(0x5ff3f9);
__builtin_memmove((R+16),(R+16),4);
}
B5ff400:L5ff400:{c.instructions+=8;NFSU2_TR(0x5ff400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ff402:{NFSU2_TR(0x5ff402);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ff405:{NFSU2_TR(0x5ff405);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5ff407:{NFSU2_TR(0x5ff407);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff408:{NFSU2_TR(0x5ff408);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff40b:{NFSU2_TR(0x5ff40b);
__builtin_memmove((R+0),gp(0x8900dc),4);
}
B5ff410:{NFSU2_TR(0x5ff410);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff411:{NFSU2_TR(0x5ff411);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff416ull));
TAIL_STATIC(0x43f920u,43f);
}
B5ff416:L5ff416:{c.instructions+=4;NFSU2_TR(0x5ff416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ff418:{NFSU2_TR(0x5ff418);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ff41b:{NFSU2_TR(0x5ff41b);
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
B5ff41d:{NFSU2_TR(0x5ff41d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ff400u);}goto L5ff400;}}
}
B5ff41f:L5ff41f:{c.instructions+=2;NFSU2_TR(0x5ff41f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ff420:{NFSU2_TR(0x5ff420);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ff430:L5ff430:{c.instructions+=5;NFSU2_TR(0x5ff430);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff431:{NFSU2_TR(0x5ff431);
__builtin_memmove((R+24),(R+4),4);
}
B5ff433:{NFSU2_TR(0x5ff433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ff435:{NFSU2_TR(0x5ff435);
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
B5ff437:{NFSU2_TR(0x5ff437);
if(r1(R+518)){{goto L5ff45f;}}
}
B5ff439:L5ff439:{c.instructions+=1;NFSU2_TR(0x5ff439);
__builtin_memmove((R+16),(R+16),4);
}
B5ff440:L5ff440:{c.instructions+=8;NFSU2_TR(0x5ff440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ff442:{NFSU2_TR(0x5ff442);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ff445:{NFSU2_TR(0x5ff445);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5ff447:{NFSU2_TR(0x5ff447);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff448:{NFSU2_TR(0x5ff448);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff44b:{NFSU2_TR(0x5ff44b);
__builtin_memmove((R+0),gp(0x86b2cc),4);
}
B5ff450:{NFSU2_TR(0x5ff450);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff451:{NFSU2_TR(0x5ff451);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff456ull));
TAIL_STATIC(0x43f920u,43f);
}
B5ff456:L5ff456:{c.instructions+=4;NFSU2_TR(0x5ff456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ff458:{NFSU2_TR(0x5ff458);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ff45b:{NFSU2_TR(0x5ff45b);
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
B5ff45d:{NFSU2_TR(0x5ff45d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ff440u);}goto L5ff440;}}
}
B5ff45f:L5ff45f:{c.instructions+=2;NFSU2_TR(0x5ff45f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ff460:{NFSU2_TR(0x5ff460);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ff470:L5ff470:{c.instructions+=8;NFSU2_TR(0x5ff470);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff474:{NFSU2_TR(0x5ff474);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ff478:{NFSU2_TR(0x5ff478);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ff47c:{NFSU2_TR(0x5ff47c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff47d:{NFSU2_TR(0x5ff47d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff47e:{NFSU2_TR(0x5ff47e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ff482:{NFSU2_TR(0x5ff482);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff483:{NFSU2_TR(0x5ff483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff488ull));
TAIL_STATIC(0x5fad80u,5fa);
}
B5ff488:L5ff488:{c.instructions+=1;NFSU2_TR(0x5ff488);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ff490:L5ff490:{c.instructions+=26;NFSU2_TR(0x5ff490);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff492:{NFSU2_TR(0x5ff492);
u8 U[4];
w4(U+0,u32(0x779dd5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff497:{NFSU2_TR(0x5ff497);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff49d:{NFSU2_TR(0x5ff49d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff49e:{NFSU2_TR(0x5ff49e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff4a5:{NFSU2_TR(0x5ff4a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5ff4a8:{NFSU2_TR(0x5ff4a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4a9:{NFSU2_TR(0x5ff4a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4aa:{NFSU2_TR(0x5ff4aa);
__builtin_memmove((R+24),(R+4),4);
}
B5ff4ac:{NFSU2_TR(0x5ff4ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4ad:{NFSU2_TR(0x5ff4ad);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff4b1:{NFSU2_TR(0x5ff4b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ff4b3:{NFSU2_TR(0x5ff4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff4b6:{NFSU2_TR(0x5ff4b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ff4b9:{NFSU2_TR(0x5ff4b9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ff4bb:{NFSU2_TR(0x5ff4bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff4bf:{NFSU2_TR(0x5ff4bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ff4c1:{NFSU2_TR(0x5ff4c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff4c4:{NFSU2_TR(0x5ff4c4);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4c9:{NFSU2_TR(0x5ff4c9);
u8 U[4];
w4(U+0,u32(0x405320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4ce:{NFSU2_TR(0x5ff4ce);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4d0:{NFSU2_TR(0x5ff4d0);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4d2:{NFSU2_TR(0x5ff4d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ff4d8:{NFSU2_TR(0x5ff4d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4d9:{NFSU2_TR(0x5ff4d9);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff4de:{NFSU2_TR(0x5ff4de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff4e3ull));
TAIL_STATIC(0x75c461u,75c);
}
B5ff4e3:L5ff4e3:{c.instructions+=8;NFSU2_TR(0x5ff4e3);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4e8:{NFSU2_TR(0x5ff4e8);
u8 U[4];
w4(U+0,u32(0x405320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4ed:{NFSU2_TR(0x5ff4ed);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4ef:{NFSU2_TR(0x5ff4ef);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4f1:{NFSU2_TR(0x5ff4f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x770ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff4f7:{NFSU2_TR(0x5ff4f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff4f8:{NFSU2_TR(0x5ff4f8);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff4fd:{NFSU2_TR(0x5ff4fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff502ull));
TAIL_STATIC(0x75c461u,75c);
}
B5ff502:L5ff502:{c.instructions+=3;NFSU2_TR(0x5ff502);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1080ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff508:{NFSU2_TR(0x5ff508);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff50d:{NFSU2_TR(0x5ff50d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff512ull));
TAIL_STATIC(0x420b40u,420);
}
B5ff512:L5ff512:{c.instructions+=3;NFSU2_TR(0x5ff512);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1250ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff518:{NFSU2_TR(0x5ff518);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff51d:{NFSU2_TR(0x5ff51d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff522ull));
TAIL_STATIC(0x420b40u,420);
}
B5ff522:L5ff522:{c.instructions+=3;NFSU2_TR(0x5ff522);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1420ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff528:{NFSU2_TR(0x5ff528);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff52d:{NFSU2_TR(0x5ff52d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff532ull));
TAIL_STATIC(0x420b40u,420);
}
B5ff532:L5ff532:{c.instructions+=3;NFSU2_TR(0x5ff532);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff537:{NFSU2_TR(0x5ff537);
__builtin_memmove(gp(0x890080),(R+24),4);
}
B5ff53d:{NFSU2_TR(0x5ff53d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff542ull));
TAIL_STATIC(0x576cf0u,576);
}
B5ff542:L5ff542:{c.instructions+=2;NFSU2_TR(0x5ff542);
u8 U[4];
w4(U+0,u32(0x7fffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff547:{NFSU2_TR(0x5ff547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff54cull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5ff54c:L5ff54c:{c.instructions+=17;NFSU2_TR(0x5ff54c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff552:{NFSU2_TR(0x5ff552);
w4(R+0,u32(0x1ull));
}
B5ff557:{NFSU2_TR(0x5ff557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff55d:{NFSU2_TR(0x5ff55d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff563:{NFSU2_TR(0x5ff563);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ff565:{NFSU2_TR(0x5ff565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff568:{NFSU2_TR(0x5ff568);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff56b:{NFSU2_TR(0x5ff56b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff56e:{NFSU2_TR(0x5ff56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff574:{NFSU2_TR(0x5ff574);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ff57e:{NFSU2_TR(0x5ff57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff584:{NFSU2_TR(0x5ff584);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff58a:{NFSU2_TR(0x5ff58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff590:{NFSU2_TR(0x5ff590);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff596:{NFSU2_TR(0x5ff596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff59c:{NFSU2_TR(0x5ff59c);
w4(R+4,u32(0x18ull));
}
B5ff5a1:{NFSU2_TR(0x5ff5a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ff5a7:L5ff5a7:{c.instructions+=1;NFSU2_TR(0x5ff5a7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5ff5a9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ff5a7u);}goto L5ff5a7;}
}
B5ff5a9:L5ff5a9:{c.instructions+=3;NFSU2_TR(0x5ff5a9);
w4(R+4,u32(0x6ull));
}
B5ff5ae:{NFSU2_TR(0x5ff5ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ff5b4:{NFSU2_TR(0x5ff5b4);
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
B5ff5b7:L5ff5b7:{c.instructions+=1;NFSU2_TR(0x5ff5b7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5ff5b9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ff5b7u);}goto L5ff5b7;}
}
B5ff5b9:L5ff5b9:{c.instructions+=1;NFSU2_TR(0x5ff5b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff5beull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff5be:L5ff5be:{c.instructions+=2;NFSU2_TR(0x5ff5be);
w4(R+4,u32(0x828770ull));
}
B5ff5c3:{NFSU2_TR(0x5ff5c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff5c8ull));
TAIL_STATIC(0x448060u,448);
}
B5ff5c8:L5ff5c8:{c.instructions+=1;NFSU2_TR(0x5ff5c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff5cdull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff5cd:L5ff5cd:{c.instructions+=1;NFSU2_TR(0x5ff5cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff5d2ull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff5d2:L5ff5d2:{c.instructions+=1;NFSU2_TR(0x5ff5d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff5d7ull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff5d7:L5ff5d7:{c.instructions+=2;NFSU2_TR(0x5ff5d7);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff5d9:{NFSU2_TR(0x5ff5d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff5deull));
TAIL_STATIC(0x575620u,575);
}
B5ff5de:L5ff5de:{c.instructions+=5;NFSU2_TR(0x5ff5de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ff5e1:{NFSU2_TR(0x5ff5e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff5e5:{NFSU2_TR(0x5ff5e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff5e7:{NFSU2_TR(0x5ff5e7);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff5ec:{NFSU2_TR(0x5ff5ec);
if(r1(R+518)){{goto L5ff5f7;}}
}
B5ff5ee:L5ff5ee:{c.instructions+=2;NFSU2_TR(0x5ff5ee);
__builtin_memmove((R+4),(R+0),4);
}
B5ff5f0:{NFSU2_TR(0x5ff5f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff5f5ull));
TAIL_STATIC(0x4179f0u,417);
}
B5ff5f5:L5ff5f5:{c.instructions+=1;NFSU2_TR(0x5ff5f5);
{goto L5ff5f9;}
}
B5ff5f7:L5ff5f7:{c.instructions+=1;NFSU2_TR(0x5ff5f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ff5f9:L5ff5f9:{c.instructions+=3;NFSU2_TR(0x5ff5f9);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff5fe:{NFSU2_TR(0x5ff5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff604:{NFSU2_TR(0x5ff604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff609ull));
TAIL_STATIC(0x605680u,605);
}
B5ff609:L5ff609:{c.instructions+=1;NFSU2_TR(0x5ff609);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff60eull));
TAIL_STATIC(0x60c6a0u,60c);
}
B5ff60e:L5ff60e:{c.instructions+=1;NFSU2_TR(0x5ff60e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff613ull));
TAIL_STATIC(0x5d3300u,5d3);
}
B5ff613:L5ff613:{c.instructions+=3;NFSU2_TR(0x5ff613);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff61a:{NFSU2_TR(0x5ff61a);
w4(R+0,u32(0x80ull));
}
B5ff61f:{NFSU2_TR(0x5ff61f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff626;}}
}
B5ff621:L5ff621:{c.instructions+=1;NFSU2_TR(0x5ff621);
w4(R+0,u32(0x40ull));
}
B5ff626:L5ff626:{c.instructions+=2;NFSU2_TR(0x5ff626);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff627:{NFSU2_TR(0x5ff627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff62cull));
TAIL_STATIC(0x5d3250u,5d3);
}
B5ff62c:L5ff62c:{c.instructions+=2;NFSU2_TR(0x5ff62c);
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
B5ff62f:{NFSU2_TR(0x5ff62f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff634ull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff634:L5ff634:{c.instructions+=1;NFSU2_TR(0x5ff634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff639ull));
TAIL_STATIC(0x5e5670u,5e5);
}
B5ff639:L5ff639:{c.instructions+=1;NFSU2_TR(0x5ff639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff63eull));
TAIL_STATIC(0x5729e0u,572);
}
B5ff63e:L5ff63e:{c.instructions+=1;NFSU2_TR(0x5ff63e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff643ull));
TAIL_STATIC(0x443d10u,443);
}
B5ff643:L5ff643:{c.instructions+=1;NFSU2_TR(0x5ff643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff648ull));
TAIL_STATIC(0x5dfd30u,5df);
}
B5ff648:L5ff648:{c.instructions+=2;NFSU2_TR(0x5ff648);
w4(R+4,u32(0x88f298ull));
}
B5ff64d:{NFSU2_TR(0x5ff64d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff652ull));
TAIL_STATIC(0x5d59c0u,5d5);
}
B5ff652:L5ff652:{c.instructions+=2;NFSU2_TR(0x5ff652);
u8 U[2];
__builtin_memmove((U+0),gp(0x89cf69),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ff658:{NFSU2_TR(0x5ff658);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ff66a;}}
}
B5ff65a:L5ff65a:{c.instructions+=2;NFSU2_TR(0x5ff65a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8669f4),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ff660:{NFSU2_TR(0x5ff660);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5ff66a;}}
}
B5ff662:L5ff662:{c.instructions+=2;NFSU2_TR(0x5ff662);
u8 U[14];
__builtin_memmove((U+6),gp(0x866a14),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ff668:{NFSU2_TR(0x5ff668);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ff690;}}
}
B5ff66a:L5ff66a:{c.instructions+=5;NFSU2_TR(0x5ff66a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff66b:{NFSU2_TR(0x5ff66b);
u8 U[4];
w4(U+0,u32(0x7a6340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff670:{NFSU2_TR(0x5ff670);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff672:{NFSU2_TR(0x5ff672);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff677:{NFSU2_TR(0x5ff677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff67cull));
TAIL_STATIC(0x440df0u,440);
}
B5ff67c:L5ff67c:{c.instructions+=4;NFSU2_TR(0x5ff67c);
__builtin_memmove((R+8),gp(0x7a572c),4);
}
B5ff682:{NFSU2_TR(0x5ff682);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff683:{NFSU2_TR(0x5ff683);
__builtin_memmove(gp(0x89012c),(R+0),4);
}
B5ff688:{NFSU2_TR(0x5ff688);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff68dull));
TAIL_STATIC(0x576cb0u,576);
}
B5ff68d:L5ff68d:{c.instructions+=1;NFSU2_TR(0x5ff68d);
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
B5ff690:L5ff690:{c.instructions+=1;NFSU2_TR(0x5ff690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff695ull));
TAIL_STATIC(0x5b4220u,5b4);
}
B5ff695:L5ff695:{c.instructions+=1;NFSU2_TR(0x5ff695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff69aull));
TAIL_STATIC(0x61e0f0u,61e);
}
B5ff69a:L5ff69a:{c.instructions+=1;NFSU2_TR(0x5ff69a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff69full));
TAIL_STATIC(0x60f680u,60f);
}
B5ff69f:L5ff69f:{c.instructions+=1;NFSU2_TR(0x5ff69f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff6a4ull));
TAIL_STATIC(0x5e0790u,5e0);
}
B5ff6a4:L5ff6a4:{c.instructions+=2;NFSU2_TR(0x5ff6a4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff6a6:{NFSU2_TR(0x5ff6a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff6abull));
TAIL_STATIC(0x575620u,575);
}
B5ff6ab:L5ff6ab:{c.instructions+=5;NFSU2_TR(0x5ff6ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ff6ae:{NFSU2_TR(0x5ff6ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff6b2:{NFSU2_TR(0x5ff6b2);
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
B5ff6b4:{NFSU2_TR(0x5ff6b4);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff6b9:{NFSU2_TR(0x5ff6b9);
if(r1(R+518)){{goto L5ff6c4;}}
}
B5ff6bb:L5ff6bb:{c.instructions+=2;NFSU2_TR(0x5ff6bb);
__builtin_memmove((R+4),(R+0),4);
}
B5ff6bd:{NFSU2_TR(0x5ff6bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff6c2ull));
TAIL_STATIC(0x57bcd0u,57b);
}
B5ff6c2:L5ff6c2:{c.instructions+=1;NFSU2_TR(0x5ff6c2);
{goto L5ff6c6;}
}
B5ff6c4:L5ff6c4:{c.instructions+=1;NFSU2_TR(0x5ff6c4);
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
B5ff6c6:L5ff6c6:{c.instructions+=3;NFSU2_TR(0x5ff6c6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff6cb:{NFSU2_TR(0x5ff6cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff6d1:{NFSU2_TR(0x5ff6d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff6d6ull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff6d6:L5ff6d6:{c.instructions+=8;NFSU2_TR(0x5ff6d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ff6da:{NFSU2_TR(0x5ff6da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ff6db:{NFSU2_TR(0x5ff6db);
__builtin_memmove((R+0),(R+24),4);
}
B5ff6dd:{NFSU2_TR(0x5ff6dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ff6de:{NFSU2_TR(0x5ff6de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ff6df:{NFSU2_TR(0x5ff6df);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff6e6:{NFSU2_TR(0x5ff6e6);
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
B5ff6e9:{NFSU2_TR(0x5ff6e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ff6f0:L5ff6f0:{c.instructions+=13;NFSU2_TR(0x5ff6f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff6f2:{NFSU2_TR(0x5ff6f2);
u8 U[4];
w4(U+0,u32(0x779e4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff6f7:{NFSU2_TR(0x5ff6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff6fd:{NFSU2_TR(0x5ff6fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff6fe:{NFSU2_TR(0x5ff6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff705:{NFSU2_TR(0x5ff705);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff706:{NFSU2_TR(0x5ff706);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff707:{NFSU2_TR(0x5ff707);
__builtin_memmove((R+24),(R+4),4);
}
B5ff709:{NFSU2_TR(0x5ff709);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff70a:{NFSU2_TR(0x5ff70a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff70e:{NFSU2_TR(0x5ff70e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff710:{NFSU2_TR(0x5ff710);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ff718:{NFSU2_TR(0x5ff718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff71dull));
TAIL_STATIC(0x4400b0u,440);
}
B5ff71d:L5ff71d:{c.instructions+=4;NFSU2_TR(0x5ff71d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5ff71f:{NFSU2_TR(0x5ff71f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ff722:{NFSU2_TR(0x5ff722);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5ff724:{NFSU2_TR(0x5ff724);
if(r1(R+518)){{goto L5ff746;}}
}
B5ff726:L5ff726:{c.instructions+=6;NFSU2_TR(0x5ff726);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ff729:{NFSU2_TR(0x5ff729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ff72b:{NFSU2_TR(0x5ff72b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ff72d:{NFSU2_TR(0x5ff72d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff730:{NFSU2_TR(0x5ff730);
__builtin_memmove((R+4),(R+28),4);
}
B5ff732:{NFSU2_TR(0x5ff732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff737ull));
TAIL_STATIC(0x5f44d0u,5f4);
}
B5ff737:L5ff737:{c.instructions+=2;NFSU2_TR(0x5ff737);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff738:{NFSU2_TR(0x5ff738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff73dull));
TAIL_STATIC(0x575630u,575);
}
B5ff73d:L5ff73d:{c.instructions+=4;NFSU2_TR(0x5ff73d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5ff73f:{NFSU2_TR(0x5ff73f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ff742:{NFSU2_TR(0x5ff742);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5ff744:{NFSU2_TR(0x5ff744);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ff726u);}goto L5ff726;}}
}
B5ff746:L5ff746:{c.instructions+=1;NFSU2_TR(0x5ff746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff74bull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff74b:L5ff74b:{c.instructions+=1;NFSU2_TR(0x5ff74b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff750ull));
TAIL_STATIC(0x5e57b0u,5e5);
}
B5ff750:L5ff750:{c.instructions+=1;NFSU2_TR(0x5ff750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff755ull));
TAIL_STATIC(0x5a9bc0u,5a9);
}
B5ff755:L5ff755:{c.instructions+=1;NFSU2_TR(0x5ff755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff75aull));
TAIL_STATIC(0x5ad820u,5ad);
}
B5ff75a:L5ff75a:{c.instructions+=3;NFSU2_TR(0x5ff75a);
__builtin_memmove((R+0),gp(0x89012c),4);
}
B5ff75f:{NFSU2_TR(0x5ff75f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff761:{NFSU2_TR(0x5ff761);
if(r1(R+518)){{goto L5ff77b;}}
}
B5ff763:L5ff763:{c.instructions+=2;NFSU2_TR(0x5ff763);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff764:{NFSU2_TR(0x5ff764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff769ull));
TAIL_STATIC(0x440e40u,440);
}
B5ff769:L5ff769:{c.instructions+=3;NFSU2_TR(0x5ff769);
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
B5ff76c:{NFSU2_TR(0x5ff76c);
s4(0x89012c,u32(0x0ull));
}
B5ff776:{NFSU2_TR(0x5ff776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff77bull));
TAIL_STATIC(0x576cd0u,576);
}
B5ff77b:L5ff77b:{c.instructions+=1;NFSU2_TR(0x5ff77b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff780ull));
TAIL_STATIC(0x5db430u,5db);
}
B5ff780:L5ff780:{c.instructions+=1;NFSU2_TR(0x5ff780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff785ull));
TAIL_STATIC(0x5e5750u,5e5);
}
B5ff785:L5ff785:{c.instructions+=1;NFSU2_TR(0x5ff785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff78aull));
TAIL_STATIC(0x5e0500u,5e0);
}
B5ff78a:L5ff78a:{c.instructions+=1;NFSU2_TR(0x5ff78a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff78full));
TAIL_STATIC(0x5e6720u,5e6);
}
B5ff78f:L5ff78f:{c.instructions+=1;NFSU2_TR(0x5ff78f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff794ull));
TAIL_STATIC(0x5e0960u,5e0);
}
B5ff794:L5ff794:{c.instructions+=1;NFSU2_TR(0x5ff794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff799ull));
TAIL_STATIC(0x60c810u,60c);
}
B5ff799:L5ff799:{c.instructions+=1;NFSU2_TR(0x5ff799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff79eull));
TAIL_STATIC(0x605740u,605);
}
B5ff79e:L5ff79e:{c.instructions+=3;NFSU2_TR(0x5ff79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ff7a4:{NFSU2_TR(0x5ff7a4);
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
B5ff7a6:{NFSU2_TR(0x5ff7a6);
if(r1(R+518)){{goto L5ff7b8;}}
}
B5ff7a8:L5ff7a8:{c.instructions+=2;NFSU2_TR(0x5ff7a8);
__builtin_memmove((R+4),(R+28),4);
}
B5ff7aa:{NFSU2_TR(0x5ff7aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff7afull));
TAIL_STATIC(0x4221d0u,422);
}
B5ff7af:L5ff7af:{c.instructions+=2;NFSU2_TR(0x5ff7af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff7b0:{NFSU2_TR(0x5ff7b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff7b5ull));
TAIL_STATIC(0x575630u,575);
}
B5ff7b5:L5ff7b5:{c.instructions+=1;NFSU2_TR(0x5ff7b5);
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
B5ff7b8:L5ff7b8:{c.instructions+=1;NFSU2_TR(0x5ff7b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff7bdull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff7bd:L5ff7bd:{c.instructions+=1;NFSU2_TR(0x5ff7bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff7c2ull));
TAIL_STATIC(0x576cf0u,576);
}
B5ff7c2:L5ff7c2:{c.instructions+=5;NFSU2_TR(0x5ff7c2);
s4(0x7fb724,u32(0x186a0ull));
}
B5ff7cc:{NFSU2_TR(0x5ff7cc);
s4(0x890080,u32(0x0ull));
}
B5ff7d6:{NFSU2_TR(0x5ff7d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ff7dc:{NFSU2_TR(0x5ff7dc);
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
B5ff7de:{NFSU2_TR(0x5ff7de);
if(r1(R+518)){{goto L5ff7f0;}}
}
B5ff7e0:L5ff7e0:{c.instructions+=2;NFSU2_TR(0x5ff7e0);
__builtin_memmove((R+4),(R+28),4);
}
B5ff7e2:{NFSU2_TR(0x5ff7e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff7e7ull));
TAIL_STATIC(0x5ae160u,5ae);
}
B5ff7e7:L5ff7e7:{c.instructions+=2;NFSU2_TR(0x5ff7e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff7e8:{NFSU2_TR(0x5ff7e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff7edull));
TAIL_STATIC(0x575630u,575);
}
B5ff7ed:L5ff7ed:{c.instructions+=1;NFSU2_TR(0x5ff7ed);
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
B5ff7f0:L5ff7f0:{c.instructions+=1;NFSU2_TR(0x5ff7f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff7f5ull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff7f5:L5ff7f5:{c.instructions+=3;NFSU2_TR(0x5ff7f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1420ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff7fb:{NFSU2_TR(0x5ff7fb);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff800:{NFSU2_TR(0x5ff800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff805ull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff805:L5ff805:{c.instructions+=3;NFSU2_TR(0x5ff805);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1250ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff80b:{NFSU2_TR(0x5ff80b);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff810:{NFSU2_TR(0x5ff810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff815ull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff815:L5ff815:{c.instructions+=3;NFSU2_TR(0x5ff815);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1080ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff81b:{NFSU2_TR(0x5ff81b);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff820:{NFSU2_TR(0x5ff820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff825ull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff825:L5ff825:{c.instructions+=7;NFSU2_TR(0x5ff825);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff82a:{NFSU2_TR(0x5ff82a);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff82c:{NFSU2_TR(0x5ff82c);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff82e:{NFSU2_TR(0x5ff82e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x770ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ff834:{NFSU2_TR(0x5ff834);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff835:{NFSU2_TR(0x5ff835);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff83a:{NFSU2_TR(0x5ff83a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff83full));
TAIL_STATIC(0x75c401u,75c);
}
B5ff83f:L5ff83f:{c.instructions+=7;NFSU2_TR(0x5ff83f);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff844:{NFSU2_TR(0x5ff844);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff846:{NFSU2_TR(0x5ff846);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff848:{NFSU2_TR(0x5ff848);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff84e:{NFSU2_TR(0x5ff84e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff84f:{NFSU2_TR(0x5ff84f);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff854:{NFSU2_TR(0x5ff854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff859ull));
TAIL_STATIC(0x75c401u,75c);
}
B5ff859:L5ff859:{c.instructions+=3;NFSU2_TR(0x5ff859);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff85c:{NFSU2_TR(0x5ff85c);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ff861:{NFSU2_TR(0x5ff861);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff866ull));
TAIL_STATIC(0x5fa6f0u,5fa);
}
B5ff866:L5ff866:{c.instructions+=3;NFSU2_TR(0x5ff866);
__builtin_memmove((R+4),(R+24),4);
}
B5ff868:{NFSU2_TR(0x5ff868);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ff870:{NFSU2_TR(0x5ff870);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff875ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ff3b0u);}goto L5ff3b0;}
}
B5ff875:L5ff875:{c.instructions+=6;NFSU2_TR(0x5ff875);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ff879:{NFSU2_TR(0x5ff879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ff87a:{NFSU2_TR(0x5ff87a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ff87b:{NFSU2_TR(0x5ff87b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff882:{NFSU2_TR(0x5ff882);
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
B5ff885:{NFSU2_TR(0x5ff885);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ff890:L5ff890:{c.instructions+=10;NFSU2_TR(0x5ff890);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff891:{NFSU2_TR(0x5ff891);
__builtin_memmove((R+20),(R+16),4);
}
B5ff893:{NFSU2_TR(0x5ff893);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff894:{NFSU2_TR(0x5ff894);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ff897:{NFSU2_TR(0x5ff897);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff898:{NFSU2_TR(0x5ff898);
u8 U[4];
w4(U+0,u32(0x7873e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff89d:{NFSU2_TR(0x5ff89d);
__builtin_memmove((R+28),(R+4),4);
}
B5ff89f:{NFSU2_TR(0x5ff89f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff8a1:{NFSU2_TR(0x5ff8a1);
__builtin_memmove((R+4),(R+24),4);
}
B5ff8a3:{NFSU2_TR(0x5ff8a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff8a8ull));
TAIL_STATIC(0x578ce0u,578);
}
B5ff8a8:L5ff8a8:{c.instructions+=4;NFSU2_TR(0x5ff8a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ff8ae:{NFSU2_TR(0x5ff8ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff8af:{NFSU2_TR(0x5ff8af);
__builtin_memmove((R+4),(R+24),4);
}
B5ff8b1:{NFSU2_TR(0x5ff8b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff8b6ull));
TAIL_STATIC(0x571770u,571);
}
B5ff8b6:L5ff8b6:{c.instructions+=4;NFSU2_TR(0x5ff8b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff8bc:{NFSU2_TR(0x5ff8bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff8bd:{NFSU2_TR(0x5ff8bd);
__builtin_memmove((R+4),(R+24),4);
}
B5ff8bf:{NFSU2_TR(0x5ff8bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff8c4ull));
TAIL_STATIC(0x571770u,571);
}
B5ff8c4:L5ff8c4:{c.instructions+=4;NFSU2_TR(0x5ff8c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x108ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ff8ca:{NFSU2_TR(0x5ff8ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff8cb:{NFSU2_TR(0x5ff8cb);
__builtin_memmove((R+4),(R+24),4);
}
B5ff8cd:{NFSU2_TR(0x5ff8cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff8d2ull));
TAIL_STATIC(0x571770u,571);
}
B5ff8d2:L5ff8d2:{c.instructions+=4;NFSU2_TR(0x5ff8d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ff8d8:{NFSU2_TR(0x5ff8d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff8d9:{NFSU2_TR(0x5ff8d9);
__builtin_memmove((R+4),(R+24),4);
}
B5ff8db:{NFSU2_TR(0x5ff8db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff8e0ull));
TAIL_STATIC(0x571770u,571);
}
B5ff8e0:L5ff8e0:{c.instructions+=7;NFSU2_TR(0x5ff8e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff8e2:{NFSU2_TR(0x5ff8e2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff8e4:{NFSU2_TR(0x5ff8e4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff8e6:{NFSU2_TR(0x5ff8e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff8ec:{NFSU2_TR(0x5ff8ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff8ed:{NFSU2_TR(0x5ff8ed);
__builtin_memmove((R+4),(R+24),4);
}
B5ff8ef:{NFSU2_TR(0x5ff8ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff8f4ull));
TAIL_STATIC(0x571640u,571);
}
B5ff8f4:L5ff8f4:{c.instructions+=4;NFSU2_TR(0x5ff8f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ff8fa:{NFSU2_TR(0x5ff8fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff8fb:{NFSU2_TR(0x5ff8fb);
__builtin_memmove((R+4),(R+24),4);
}
B5ff8fd:{NFSU2_TR(0x5ff8fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff902ull));
TAIL_STATIC(0x571770u,571);
}
B5ff902:L5ff902:{c.instructions+=7;NFSU2_TR(0x5ff902);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff904:{NFSU2_TR(0x5ff904);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff906:{NFSU2_TR(0x5ff906);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff908:{NFSU2_TR(0x5ff908);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ff90e:{NFSU2_TR(0x5ff90e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff90f:{NFSU2_TR(0x5ff90f);
__builtin_memmove((R+4),(R+24),4);
}
B5ff911:{NFSU2_TR(0x5ff911);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff916ull));
TAIL_STATIC(0x571640u,571);
}
B5ff916:L5ff916:{c.instructions+=7;NFSU2_TR(0x5ff916);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff918:{NFSU2_TR(0x5ff918);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff91a:{NFSU2_TR(0x5ff91a);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff91c:{NFSU2_TR(0x5ff91c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff922:{NFSU2_TR(0x5ff922);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff923:{NFSU2_TR(0x5ff923);
__builtin_memmove((R+4),(R+24),4);
}
B5ff925:{NFSU2_TR(0x5ff925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff92aull));
TAIL_STATIC(0x571640u,571);
}
B5ff92a:L5ff92a:{c.instructions+=4;NFSU2_TR(0x5ff92a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ff930:{NFSU2_TR(0x5ff930);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff931:{NFSU2_TR(0x5ff931);
__builtin_memmove((R+4),(R+24),4);
}
B5ff933:{NFSU2_TR(0x5ff933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff938ull));
TAIL_STATIC(0x571770u,571);
}
B5ff938:L5ff938:{c.instructions+=4;NFSU2_TR(0x5ff938);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ff93e:{NFSU2_TR(0x5ff93e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff93f:{NFSU2_TR(0x5ff93f);
__builtin_memmove((R+4),(R+24),4);
}
B5ff941:{NFSU2_TR(0x5ff941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff946ull));
TAIL_STATIC(0x571770u,571);
}
B5ff946:L5ff946:{c.instructions+=4;NFSU2_TR(0x5ff946);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ff94c:{NFSU2_TR(0x5ff94c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff94d:{NFSU2_TR(0x5ff94d);
__builtin_memmove((R+4),(R+24),4);
}
B5ff94f:{NFSU2_TR(0x5ff94f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff954ull));
TAIL_STATIC(0x571770u,571);
}
B5ff954:L5ff954:{c.instructions+=4;NFSU2_TR(0x5ff954);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x120ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ff95a:{NFSU2_TR(0x5ff95a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff95b:{NFSU2_TR(0x5ff95b);
__builtin_memmove((R+4),(R+24),4);
}
B5ff95d:{NFSU2_TR(0x5ff95d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff962ull));
TAIL_STATIC(0x571770u,571);
}
B5ff962:L5ff962:{c.instructions+=3;NFSU2_TR(0x5ff962);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ff965:{NFSU2_TR(0x5ff965);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ff967:{NFSU2_TR(0x5ff967);
if(r1(R+518)){{goto L5ff989;}}
}
B5ff969:L5ff969:{c.instructions+=1;NFSU2_TR(0x5ff969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff96eull));
TAIL_STATIC(0x5e66e0u,5e6);
}
B5ff96e:L5ff96e:{c.instructions+=2;NFSU2_TR(0x5ff96e);
w4(R+4,u32(0x8357e0ull));
}
B5ff973:{NFSU2_TR(0x5ff973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff978ull));
TAIL_STATIC(0x491e10u,491);
}
B5ff978:L5ff978:{c.instructions+=1;NFSU2_TR(0x5ff978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff97dull));
TAIL_STATIC(0x5e0580u,5e0);
}
B5ff97d:L5ff97d:{c.instructions+=2;NFSU2_TR(0x5ff97d);
s1(0x86e5b8,u8(0x1ull));
}
B5ff984:{NFSU2_TR(0x5ff984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff989ull));
TAIL_STATIC(0x5729e0u,572);
}
B5ff989:L5ff989:{c.instructions+=3;NFSU2_TR(0x5ff989);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff98a:{NFSU2_TR(0x5ff98a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff98b:{NFSU2_TR(0x5ff98b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff990ull));
TAIL_STATIC(0x57bba0u,57b);
}
B5ff990:L5ff990:{c.instructions+=2;NFSU2_TR(0x5ff990);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff991:{NFSU2_TR(0x5ff991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff996ull));
TAIL_STATIC(0x4022c0u,402);
}
B5ff996:L5ff996:{c.instructions+=4;NFSU2_TR(0x5ff996);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ff999:{NFSU2_TR(0x5ff999);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff99a:{NFSU2_TR(0x5ff99a);
w4(R+4,u32(0x88f298ull));
}
B5ff99f:{NFSU2_TR(0x5ff99f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff9a4ull));
TAIL_STATIC(0x5decb0u,5de);
}
B5ff9a4:L5ff9a4:{c.instructions+=2;NFSU2_TR(0x5ff9a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff9a5:{NFSU2_TR(0x5ff9a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff9aaull));
TAIL_STATIC(0x63b690u,63b);
}
B5ff9aa:L5ff9aa:{c.instructions+=5;NFSU2_TR(0x5ff9aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff9ad:{NFSU2_TR(0x5ff9ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ff9b0:{NFSU2_TR(0x5ff9b0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ff9b2:{NFSU2_TR(0x5ff9b2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff9b4:{NFSU2_TR(0x5ff9b4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ff9dc;}}
}
B5ff9b6:L5ff9b6:{c.instructions+=3;NFSU2_TR(0x5ff9b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ff9b9:{NFSU2_TR(0x5ff9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff9bc:{NFSU2_TR(0x5ff9bc);
__builtin_memmove((R+16),(R+16),4);
}
B5ff9c0:L5ff9c0:{c.instructions+=4;NFSU2_TR(0x5ff9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ff9c3:{NFSU2_TR(0x5ff9c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ff9c5:{NFSU2_TR(0x5ff9c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff9c6:{NFSU2_TR(0x5ff9c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff9cbull));
TAIL_STATIC(0x5fb5f0u,5fb);
}
B5ff9cb:L5ff9cb:{c.instructions+=7;NFSU2_TR(0x5ff9cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ff9ce:{NFSU2_TR(0x5ff9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ff9d1:{NFSU2_TR(0x5ff9d1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5ff9d2:{NFSU2_TR(0x5ff9d2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5ff9d5:{NFSU2_TR(0x5ff9d5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ff9d7:{NFSU2_TR(0x5ff9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ff9da:{NFSU2_TR(0x5ff9da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ff9c0u);}goto L5ff9c0;}}
}
B5ff9dc:L5ff9dc:{c.instructions+=4;NFSU2_TR(0x5ff9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ff9e2:{NFSU2_TR(0x5ff9e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ff9e4:{NFSU2_TR(0x5ff9e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ff9e5:{NFSU2_TR(0x5ff9e5);
if(r1(R+518)){{goto L5ff9ef;}}
}
B5ff9e7:L5ff9e7:{c.instructions+=3;NFSU2_TR(0x5ff9e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff9e8:{NFSU2_TR(0x5ff9e8);
__builtin_memmove((R+4),(R+28),4);
}
B5ff9ea:{NFSU2_TR(0x5ff9ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff9efull));
TAIL_STATIC(0x417ab0u,417);
}
B5ff9ef:L5ff9ef:{c.instructions+=3;NFSU2_TR(0x5ff9ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ff9f2:{NFSU2_TR(0x5ff9f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ff9f4:{NFSU2_TR(0x5ff9f4);
if(r1(R+518)){{goto L5ff9fb;}}
}
B5ff9f6:L5ff9f6:{c.instructions+=1;NFSU2_TR(0x5ff9f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ff9fbull));
TAIL_STATIC(0x5a9bc0u,5a9);
}
B5ff9fb:L5ff9fb:{c.instructions+=2;NFSU2_TR(0x5ff9fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ff9fc:{NFSU2_TR(0x5ff9fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffa01ull));
TAIL_STATIC(0x5b1080u,5b1);
}
B5ffa01:L5ffa01:{c.instructions+=2;NFSU2_TR(0x5ffa01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffa02:{NFSU2_TR(0x5ffa02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffa07ull));
TAIL_STATIC(0x5aa280u,5aa);
}
B5ffa07:L5ffa07:{c.instructions+=2;NFSU2_TR(0x5ffa07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffa08:{NFSU2_TR(0x5ffa08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffa0dull));
TAIL_STATIC(0x5930b0u,593);
}
B5ffa0d:L5ffa0d:{c.instructions+=2;NFSU2_TR(0x5ffa0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffa0e:{NFSU2_TR(0x5ffa0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffa13ull));
TAIL_STATIC(0x5ae2d0u,5ae);
}
B5ffa13:L5ffa13:{c.instructions+=2;NFSU2_TR(0x5ffa13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffa14:{NFSU2_TR(0x5ffa14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffa19ull));
TAIL_STATIC(0x417980u,417);
}
B5ffa19:L5ffa19:{c.instructions+=3;NFSU2_TR(0x5ffa19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5ffa1c:{NFSU2_TR(0x5ffa1c);
__builtin_memmove((R+4),(R+24),4);
}
B5ffa1e:{NFSU2_TR(0x5ffa1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffa23ull));
TAIL_STATIC(0x578d90u,578);
}
B5ffa23:L5ffa23:{c.instructions+=2;NFSU2_TR(0x5ffa23);
w4(R+4,u32(0x827b88ull));
}
B5ffa28:{NFSU2_TR(0x5ffa28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffa2dull));
TAIL_STATIC(0x430670u,430);
}
B5ffa2d:L5ffa2d:{c.instructions+=2;NFSU2_TR(0x5ffa2d);
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
B5ffa2f:{NFSU2_TR(0x5ffa2f);
if(r1(R+518)){{goto L5ffa43;}}
}
B5ffa31:L5ffa31:{c.instructions+=3;NFSU2_TR(0x5ffa31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffa32:{NFSU2_TR(0x5ffa32);
w4(R+4,u32(0x827b88ull));
}
B5ffa37:{NFSU2_TR(0x5ffa37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffa3cull));
TAIL_STATIC(0x430670u,430);
}
B5ffa3c:L5ffa3c:{c.instructions+=2;NFSU2_TR(0x5ffa3c);
__builtin_memmove((R+4),(R+0),4);
}
B5ffa3e:{NFSU2_TR(0x5ffa3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffa43ull));
TAIL_STATIC(0x432280u,432);
}
B5ffa43:L5ffa43:{c.instructions+=4;NFSU2_TR(0x5ffa43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ffa44:{NFSU2_TR(0x5ffa44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ffa45:{NFSU2_TR(0x5ffa45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ffa46:{NFSU2_TR(0x5ffa46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ffa50:L5ffa50:{c.instructions+=14;NFSU2_TR(0x5ffa50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffa51:{NFSU2_TR(0x5ffa51);
__builtin_memmove((R+20),(R+16),4);
}
B5ffa53:{NFSU2_TR(0x5ffa53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5ffa56:{NFSU2_TR(0x5ffa56);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffa58:{NFSU2_TR(0x5ffa58);
u8 U[4];
w4(U+0,u32(0x779e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffa5d:{NFSU2_TR(0x5ffa5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffa63:{NFSU2_TR(0x5ffa63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffa64:{NFSU2_TR(0x5ffa64);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffa6b:{NFSU2_TR(0x5ffa6b);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x38ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ffa6e:{NFSU2_TR(0x5ffa6e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffa6f:{NFSU2_TR(0x5ffa6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffa70:{NFSU2_TR(0x5ffa70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffa71:{NFSU2_TR(0x5ffa71);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffa75:{NFSU2_TR(0x5ffa75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffa7aull));
TAIL_STATIC(0x4022c0u,402);
}
B5ffa7a:L5ffa7a:{c.instructions+=3;NFSU2_TR(0x5ffa7a);
__builtin_memmove((R+24),gp(0x86b490),4);
}
B5ffa80:{NFSU2_TR(0x5ffa80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ffa82:{NFSU2_TR(0x5ffa82);
if(r1(R+518)){{goto L5ffa8c;}}
}
B5ffa84:L5ffa84:{c.instructions+=2;NFSU2_TR(0x5ffa84);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffdd0ull))));
}
B5ffa8a:{NFSU2_TR(0x5ffa8a);
{goto L5ffa8e;}
}
B5ffa8c:L5ffa8c:{c.instructions+=1;NFSU2_TR(0x5ffa8c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ffa8e:L5ffa8e:{c.instructions+=2;NFSU2_TR(0x5ffa8e);
w4(R+4,u32(0x86b490ull));
}
B5ffa93:{NFSU2_TR(0x5ffa93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffa98ull));
TAIL_STATIC(0x56d4f0u,56d);
}
B5ffa98:L5ffa98:{c.instructions+=4;NFSU2_TR(0x5ffa98);
__builtin_memmove((R+12),(R+0),4);
}
B5ffa9a:{NFSU2_TR(0x5ffa9a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffa9c:{NFSU2_TR(0x5ffa9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffaa0:{NFSU2_TR(0x5ffaa0);
if(r1(R+518)){{goto L5ffacf;}}
}
B5ffaa2:L5ffaa2:{c.instructions+=3;NFSU2_TR(0x5ffaa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffaa8:{NFSU2_TR(0x5ffaa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ffaaa:{NFSU2_TR(0x5ffaaa);
if(r1(R+518)){{goto L5ffab4;}}
}
B5ffaac:L5ffaac:{c.instructions+=2;NFSU2_TR(0x5ffaac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffdd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ffab2:{NFSU2_TR(0x5ffab2);
{goto L5ffab6;}
}
B5ffab4:L5ffab4:{c.instructions+=1;NFSU2_TR(0x5ffab4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ffab6:L5ffab6:{c.instructions+=2;NFSU2_TR(0x5ffab6);
__builtin_memmove((R+4),(R+24),4);
}
B5ffab8:{NFSU2_TR(0x5ffab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffabdull));
TAIL_STATIC(0x592e60u,592);
}
B5ffabd:L5ffabd:{c.instructions+=2;NFSU2_TR(0x5ffabd);
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
B5ffabf:{NFSU2_TR(0x5ffabf);
if(r1(R+518)){{goto L5ffac9;}}
}
B5ffac1:L5ffac1:{c.instructions+=4;NFSU2_TR(0x5ffac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ffac3:{NFSU2_TR(0x5ffac3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffac5:{NFSU2_TR(0x5ffac5);
__builtin_memmove((R+4),(R+24),4);
}
B5ffac7:{NFSU2_TR(0x5ffac7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffac9ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5ffac9:L5ffac9:{c.instructions+=3;NFSU2_TR(0x5ffac9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffacb:{NFSU2_TR(0x5ffacb);
__builtin_memmove((R+24),(R+28),4);
}
B5ffacd:{NFSU2_TR(0x5ffacd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ffaa2u);}goto L5ffaa2;}}
}
B5ffacf:L5ffacf:{c.instructions+=3;NFSU2_TR(0x5ffacf);
__builtin_memmove((R+0),gp(0x86b4c8),4);
}
B5ffad4:{NFSU2_TR(0x5ffad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ffad6:{NFSU2_TR(0x5ffad6);
if(r1(R+518)){{goto L5ffadd;}}
}
B5ffad8:L5ffad8:{c.instructions+=2;NFSU2_TR(0x5ffad8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ffadb:{NFSU2_TR(0x5ffadb);
{goto L5ffadf;}
}
B5ffadd:L5ffadd:{c.instructions+=1;NFSU2_TR(0x5ffadd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ffadf:L5ffadf:{c.instructions+=2;NFSU2_TR(0x5ffadf);
w4(R+4,u32(0x86b4c8ull));
}
B5ffae4:{NFSU2_TR(0x5ffae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffae9ull));
TAIL_STATIC(0x431780u,431);
}
B5ffae9:L5ffae9:{c.instructions+=3;NFSU2_TR(0x5ffae9);
__builtin_memmove((R+28),(R+0),4);
}
B5ffaeb:{NFSU2_TR(0x5ffaeb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffaed:{NFSU2_TR(0x5ffaed);
if(r1(R+518)){{goto L5ffb17;}}
}
B5ffaef:L5ffaef:{c.instructions+=1;NFSU2_TR(0x5ffaef);
}
B5ffaf0:L5ffaf0:{c.instructions+=3;NFSU2_TR(0x5ffaf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ffaf3:{NFSU2_TR(0x5ffaf3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ffaf5:{NFSU2_TR(0x5ffaf5);
if(r1(R+518)){{goto L5ffb05;}}
}
B5ffaf7:L5ffaf7:{c.instructions+=3;NFSU2_TR(0x5ffaf7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ffafa:{NFSU2_TR(0x5ffafa);
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
B5ffafc:{NFSU2_TR(0x5ffafc);
if(r1(R+518)){{goto L5ffb05;}}
}
B5ffafe:L5ffafe:{c.instructions+=2;NFSU2_TR(0x5ffafe);
__builtin_memmove((R+4),(R+24),4);
}
B5ffb00:{NFSU2_TR(0x5ffb00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffb05ull));
TAIL_STATIC(0x5b23b0u,5b2);
}
B5ffb05:L5ffb05:{c.instructions+=3;NFSU2_TR(0x5ffb05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ffb08:{NFSU2_TR(0x5ffb08);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ffb0a:{NFSU2_TR(0x5ffb0a);
if(r1(R+518)){{goto L5ffb11;}}
}
B5ffb0c:L5ffb0c:{c.instructions+=2;NFSU2_TR(0x5ffb0c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5ffb0f:{NFSU2_TR(0x5ffb0f);
{goto L5ffb13;}
}
B5ffb11:L5ffb11:{c.instructions+=1;NFSU2_TR(0x5ffb11);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ffb13:L5ffb13:{c.instructions+=2;NFSU2_TR(0x5ffb13);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffb15:{NFSU2_TR(0x5ffb15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ffaf0u);}goto L5ffaf0;}}
}
B5ffb17:L5ffb17:{c.instructions+=9;NFSU2_TR(0x5ffb17);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ffb1b:{NFSU2_TR(0x5ffb1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ffb1f:{NFSU2_TR(0x5ffb1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffb23:{NFSU2_TR(0x5ffb23);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffb27:{NFSU2_TR(0x5ffb27);
__builtin_memmove((R+24),gp(0x86b490),4);
}
B5ffb2d:{NFSU2_TR(0x5ffb2d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ffb2f:{NFSU2_TR(0x5ffb2f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffb31:{NFSU2_TR(0x5ffb31);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffb35:{NFSU2_TR(0x5ffb35);
if(r1(R+518)){{goto L5ffb3f;}}
}
B5ffb37:L5ffb37:{c.instructions+=2;NFSU2_TR(0x5ffb37);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffdd0ull))));
}
B5ffb3d:{NFSU2_TR(0x5ffb3d);
{goto L5ffb41;}
}
B5ffb3f:L5ffb3f:{c.instructions+=1;NFSU2_TR(0x5ffb3f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ffb41:L5ffb41:{c.instructions+=2;NFSU2_TR(0x5ffb41);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffb43:{NFSU2_TR(0x5ffb43);
if(r1(R+518)){{goto L5ffb6f;}}
}
B5ffb45:L5ffb45:{c.instructions+=5;NFSU2_TR(0x5ffb45);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ffb49:{NFSU2_TR(0x5ffb49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffb4a:{NFSU2_TR(0x5ffb4a);
__builtin_memmove((R+4),(R+24),4);
}
B5ffb4c:{NFSU2_TR(0x5ffb4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffb52:{NFSU2_TR(0x5ffb52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffb57ull));
TAIL_STATIC(0x5b5050u,5b5);
}
B5ffb57:L5ffb57:{c.instructions+=3;NFSU2_TR(0x5ffb57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ffb5d:{NFSU2_TR(0x5ffb5d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffb5f:{NFSU2_TR(0x5ffb5f);
if(r1(R+518)){{goto L5ffb69;}}
}
B5ffb61:L5ffb61:{c.instructions+=2;NFSU2_TR(0x5ffb61);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffdd0ull))));
}
B5ffb67:{NFSU2_TR(0x5ffb67);
{goto L5ffb6b;}
}
B5ffb69:L5ffb69:{c.instructions+=1;NFSU2_TR(0x5ffb69);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ffb6b:L5ffb6b:{c.instructions+=2;NFSU2_TR(0x5ffb6b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffb6d:{NFSU2_TR(0x5ffb6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ffb45u);}goto L5ffb45;}}
}
B5ffb6f:L5ffb6f:{c.instructions+=1;NFSU2_TR(0x5ffb6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffb74ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5ffb74:L5ffb74:{c.instructions+=5;NFSU2_TR(0x5ffb74);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ffb78:{NFSU2_TR(0x5ffb78);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ffb7c:{NFSU2_TR(0x5ffb7c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffb7e:{NFSU2_TR(0x5ffb7e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffb82:{NFSU2_TR(0x5ffb82);
if(r1(R+518)){{goto L5ffd01;}}
}
B5ffb88:L5ffb88:{c.instructions+=1;NFSU2_TR(0x5ffb88);
{goto L5ffb90;}
}
B5ffb8a:L5ffb8a:{c.instructions+=2;NFSU2_TR(0x5ffb8a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ffb8c:{NFSU2_TR(0x5ffb8c);
__builtin_memmove((R+16),(R+16),4);
}
B5ffb90:L5ffb90:{c.instructions+=3;NFSU2_TR(0x5ffb90);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffb94:{NFSU2_TR(0x5ffb94);
u8 U[8];
__builtin_memmove((U+0),gp(0x802080),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ffb9a:{NFSU2_TR(0x5ffb9a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ffd01;}}
}
B5ffba0:L5ffba0:{c.instructions+=3;NFSU2_TR(0x5ffba0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ffba2:{NFSU2_TR(0x5ffba2);
__builtin_memmove((R+24),(R+4),4);
}
B5ffba4:{NFSU2_TR(0x5ffba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffba9ull));
TAIL_STATIC(0x5b2610u,5b2);
}
B5ffba9:L5ffba9:{c.instructions+=7;NFSU2_TR(0x5ffba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffbac:{NFSU2_TR(0x5ffbac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5ffbb2:{NFSU2_TR(0x5ffbb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ffbb5:{NFSU2_TR(0x5ffbb5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ffbb8:{NFSU2_TR(0x5ffbb8);
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
B5ffbba:{NFSU2_TR(0x5ffbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ffbbd:{NFSU2_TR(0x5ffbbd);
if(r1(R+518)){{goto L5ffbcd;}}
}
B5ffbbf:L5ffbbf:{c.instructions+=4;NFSU2_TR(0x5ffbbf);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ffbc3:{NFSU2_TR(0x5ffbc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffbc4:{NFSU2_TR(0x5ffbc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffbc5:{NFSU2_TR(0x5ffbc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffbcaull));
TAIL_STATIC(0x5af090u,5af);
}
B5ffbca:L5ffbca:{c.instructions+=1;NFSU2_TR(0x5ffbca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ffbcd:L5ffbcd:{c.instructions+=3;NFSU2_TR(0x5ffbcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ffbd0:{NFSU2_TR(0x5ffbd0);
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
B5ffbd2:{NFSU2_TR(0x5ffbd2);
if(r1(R+518)){{goto L5ffbe2;}}
}
B5ffbd4:L5ffbd4:{c.instructions+=4;NFSU2_TR(0x5ffbd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ffbd8:{NFSU2_TR(0x5ffbd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffbd9:{NFSU2_TR(0x5ffbd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffbda:{NFSU2_TR(0x5ffbda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffbdfull));
TAIL_STATIC(0x5af090u,5af);
}
B5ffbdf:L5ffbdf:{c.instructions+=1;NFSU2_TR(0x5ffbdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ffbe2:L5ffbe2:{c.instructions+=2;NFSU2_TR(0x5ffbe2);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5ffbe6:{NFSU2_TR(0x5ffbe6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ffc0b;}}
}
B5ffbe8:L5ffbe8:{c.instructions+=5;NFSU2_TR(0x5ffbe8);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ffbee:{NFSU2_TR(0x5ffbee);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ffbf4:{NFSU2_TR(0x5ffbf4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ffbf6:{NFSU2_TR(0x5ffbf6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ffbf9:{NFSU2_TR(0x5ffbf9);
if(r1(R+514)){{goto L5ffc0b;}}
}
B5ffbfb:L5ffbfb:{c.instructions+=4;NFSU2_TR(0x5ffbfb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ffbff:{NFSU2_TR(0x5ffbff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffc00:{NFSU2_TR(0x5ffc00);
__builtin_memmove((R+4),(R+28),4);
}
B5ffc02:{NFSU2_TR(0x5ffc02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffc07ull));
TAIL_STATIC(0x5ae000u,5ae);
}
B5ffc07:L5ffc07:{c.instructions+=2;NFSU2_TR(0x5ffc07);
__builtin_memmove((R+12),(R+0),4);
}
B5ffc09:{NFSU2_TR(0x5ffc09);
{goto L5ffc22;}
}
B5ffc0b:L5ffc0b:{c.instructions+=3;NFSU2_TR(0x5ffc0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ffc0e:{NFSU2_TR(0x5ffc0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ffc10:{NFSU2_TR(0x5ffc10);
if(r1(R+518)){{goto L5ffc22;}}
}
B5ffc12:L5ffc12:{c.instructions+=3;NFSU2_TR(0x5ffc12);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ffc15:{NFSU2_TR(0x5ffc15);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ffc17:{NFSU2_TR(0x5ffc17);
if(r1(R+518)){{goto L5ffc22;}}
}
B5ffc19:L5ffc19:{c.instructions+=2;NFSU2_TR(0x5ffc19);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffc1d:{NFSU2_TR(0x5ffc1d);
w4(R+12,u32(0x1ull));
}
B5ffc22:L5ffc22:{c.instructions+=2;NFSU2_TR(0x5ffc22);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5ffc26:{NFSU2_TR(0x5ffc26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ffc4b;}}
}
B5ffc28:L5ffc28:{c.instructions+=5;NFSU2_TR(0x5ffc28);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ffc2e:{NFSU2_TR(0x5ffc2e);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ffc34:{NFSU2_TR(0x5ffc34);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ffc36:{NFSU2_TR(0x5ffc36);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ffc39:{NFSU2_TR(0x5ffc39);
if(r1(R+514)){{goto L5ffc4b;}}
}
B5ffc3b:L5ffc3b:{c.instructions+=4;NFSU2_TR(0x5ffc3b);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ffc3f:{NFSU2_TR(0x5ffc3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffc40:{NFSU2_TR(0x5ffc40);
__builtin_memmove((R+4),(R+24),4);
}
B5ffc42:{NFSU2_TR(0x5ffc42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffc47ull));
TAIL_STATIC(0x5ae000u,5ae);
}
B5ffc47:L5ffc47:{c.instructions+=2;NFSU2_TR(0x5ffc47);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B5ffc49:{NFSU2_TR(0x5ffc49);
{goto L5ffc5e;}
}
B5ffc4b:L5ffc4b:{c.instructions+=3;NFSU2_TR(0x5ffc4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ffc4e:{NFSU2_TR(0x5ffc4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ffc50:{NFSU2_TR(0x5ffc50);
if(r1(R+518)){{goto L5ffc5e;}}
}
B5ffc52:L5ffc52:{c.instructions+=3;NFSU2_TR(0x5ffc52);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ffc55:{NFSU2_TR(0x5ffc55);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ffc57:{NFSU2_TR(0x5ffc57);
if(r1(R+518)){{goto L5ffc5e;}}
}
B5ffc59:L5ffc59:{c.instructions+=2;NFSU2_TR(0x5ffc59);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5ffc5d:{NFSU2_TR(0x5ffc5d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5ffc5e:L5ffc5e:{c.instructions+=3;NFSU2_TR(0x5ffc5e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ffc60:{NFSU2_TR(0x5ffc60);
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
B5ffc62:{NFSU2_TR(0x5ffc62);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ffc72;}}
}
B5ffc64:L5ffc64:{c.instructions+=2;NFSU2_TR(0x5ffc64);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5ffc68:{NFSU2_TR(0x5ffc68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffc6dull));
TAIL_STATIC(0x5b23b0u,5b2);
}
B5ffc6d:L5ffc6d:{c.instructions+=3;NFSU2_TR(0x5ffc6d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5ffc6e:{NFSU2_TR(0x5ffc6e);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5ffc70:{NFSU2_TR(0x5ffc70);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ffc64u);}goto L5ffc64;}}
}
B5ffc72:L5ffc72:{c.instructions+=3;NFSU2_TR(0x5ffc72);
__builtin_memmove((R+0),gp(0x86b490),4);
}
B5ffc77:{NFSU2_TR(0x5ffc77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ffc79:{NFSU2_TR(0x5ffc79);
if(r1(R+518)){{goto L5ffc83;}}
}
B5ffc7b:L5ffc7b:{c.instructions+=2;NFSU2_TR(0x5ffc7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffdd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ffc81:{NFSU2_TR(0x5ffc81);
{goto L5ffc85;}
}
B5ffc83:L5ffc83:{c.instructions+=1;NFSU2_TR(0x5ffc83);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ffc85:L5ffc85:{c.instructions+=2;NFSU2_TR(0x5ffc85);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ffc89:{NFSU2_TR(0x5ffc89);
if(r1(R+518)){{goto L5ffced;}}
}
B5ffc8b:L5ffc8b:{c.instructions+=1;NFSU2_TR(0x5ffc8b);
{goto L5ffc90;}
}
B5ffc90:L5ffc90:{c.instructions+=3;NFSU2_TR(0x5ffc90);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ffc92:{NFSU2_TR(0x5ffc92);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ffc94:{NFSU2_TR(0x5ffc94);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ffcd3;}}
}
B5ffc96:L5ffc96:{c.instructions+=1;NFSU2_TR(0x5ffc96);
{goto L5ffca0;}
}
B5ffca0:L5ffca0:{c.instructions+=3;NFSU2_TR(0x5ffca0);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ffca4:{NFSU2_TR(0x5ffca4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ffcaa:{NFSU2_TR(0x5ffcaa);
if(r1(R+518)){{goto L5ffcb4;}}
}
B5ffcac:L5ffcac:{c.instructions+=2;NFSU2_TR(0x5ffcac);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ffcb2:{NFSU2_TR(0x5ffcb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ffcce;}}
}
B5ffcb4:L5ffcb4:{c.instructions+=3;NFSU2_TR(0x5ffcb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ffcba:{NFSU2_TR(0x5ffcba);
u8 U[8];
__builtin_memmove((U+0),gp(0x802084),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ffcc0:{NFSU2_TR(0x5ffcc0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ffcce;}}
}
B5ffcc2:L5ffcc2:{c.instructions+=4;NFSU2_TR(0x5ffcc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ffcc6:{NFSU2_TR(0x5ffcc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffcc7:{NFSU2_TR(0x5ffcc7);
__builtin_memmove((R+4),(R+24),4);
}
B5ffcc9:{NFSU2_TR(0x5ffcc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffcceull));
TAIL_STATIC(0x5b5050u,5b5);
}
B5ffcce:L5ffcce:{c.instructions+=3;NFSU2_TR(0x5ffcce);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5ffccf:{NFSU2_TR(0x5ffccf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ffcd1:{NFSU2_TR(0x5ffcd1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ffca0u);}goto L5ffca0;}}
}
B5ffcd3:L5ffcd3:{c.instructions+=3;NFSU2_TR(0x5ffcd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ffcd9:{NFSU2_TR(0x5ffcd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ffcdb:{NFSU2_TR(0x5ffcdb);
if(r1(R+518)){{goto L5ffce5;}}
}
B5ffcdd:L5ffcdd:{c.instructions+=2;NFSU2_TR(0x5ffcdd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffdd0ull))));
}
B5ffce3:{NFSU2_TR(0x5ffce3);
{goto L5ffce7;}
}
B5ffce5:L5ffce5:{c.instructions+=1;NFSU2_TR(0x5ffce5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ffce7:L5ffce7:{c.instructions+=2;NFSU2_TR(0x5ffce7);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ffceb:{NFSU2_TR(0x5ffceb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ffc90u);}goto L5ffc90;}}
}
B5ffced:L5ffced:{c.instructions+=5;NFSU2_TR(0x5ffced);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5ffcf1:{NFSU2_TR(0x5ffcf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ffcf5:{NFSU2_TR(0x5ffcf5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ffcf9:{NFSU2_TR(0x5ffcf9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffcfb:{NFSU2_TR(0x5ffcfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ffb8au);}goto L5ffb8a;}}
}
B5ffd01:L5ffd01:{c.instructions+=3;NFSU2_TR(0x5ffd01);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffd05:{NFSU2_TR(0x5ffd05);
u8 U[8];
__builtin_memmove((U+0),gp(0x802080),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffd0b:{NFSU2_TR(0x5ffd0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ffd3c;}}
}
B5ffd0d:L5ffd0d:{c.instructions+=3;NFSU2_TR(0x5ffd0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ffd11:{NFSU2_TR(0x5ffd11);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffd13:{NFSU2_TR(0x5ffd13);
if(r1(R+518)){{goto L5ffd3c;}}
}
B5ffd15:L5ffd15:{c.instructions+=9;NFSU2_TR(0x5ffd15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ffd17:{NFSU2_TR(0x5ffd17);
__builtin_memmove((R+8),(R+4),4);
}
B5ffd19:{NFSU2_TR(0x5ffd19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ffd1c:{NFSU2_TR(0x5ffd1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ffd1e:{NFSU2_TR(0x5ffd1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffd21:{NFSU2_TR(0x5ffd21);
__builtin_memmove((R+0),gp(0x86b2cc),4);
}
B5ffd26:{NFSU2_TR(0x5ffd26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffd27:{NFSU2_TR(0x5ffd27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffd28:{NFSU2_TR(0x5ffd28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffd2dull));
TAIL_STATIC(0x43f920u,43f);
}
B5ffd2d:L5ffd2d:{c.instructions+=5;NFSU2_TR(0x5ffd2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ffd31:{NFSU2_TR(0x5ffd31);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ffd35:{NFSU2_TR(0x5ffd35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ffd38:{NFSU2_TR(0x5ffd38);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffd3a:{NFSU2_TR(0x5ffd3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ffd15u);}goto L5ffd15;}}
}
B5ffd3c:L5ffd3c:{c.instructions+=5;NFSU2_TR(0x5ffd3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ffd40:{NFSU2_TR(0x5ffd40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ffd43:{NFSU2_TR(0x5ffd43);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B5ffd46:{NFSU2_TR(0x5ffd46);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5ffd48:{NFSU2_TR(0x5ffd48);
if(r1(R+518)){{goto L5ffd6e;}}
}
B5ffd4a:L5ffd4a:{c.instructions+=1;NFSU2_TR(0x5ffd4a);
__builtin_memmove((R+12),(R+12),4);
}
B5ffd50:L5ffd50:{c.instructions+=5;NFSU2_TR(0x5ffd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffd53:{NFSU2_TR(0x5ffd53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5ffd55:{NFSU2_TR(0x5ffd55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffd56:{NFSU2_TR(0x5ffd56);
__builtin_memmove((R+4),(R+24),4);
}
B5ffd58:{NFSU2_TR(0x5ffd58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffd5dull));
TAIL_STATIC(0x592bd0u,592);
}
B5ffd5d:L5ffd5d:{c.instructions+=2;NFSU2_TR(0x5ffd5d);
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
B5ffd5f:{NFSU2_TR(0x5ffd5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ffd68;}}
}
B5ffd61:L5ffd61:{c.instructions+=2;NFSU2_TR(0x5ffd61);
__builtin_memmove((R+4),(R+24),4);
}
B5ffd63:{NFSU2_TR(0x5ffd63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffd68ull));
TAIL_STATIC(0x5b2270u,5b2);
}
B5ffd68:L5ffd68:{c.instructions+=3;NFSU2_TR(0x5ffd68);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5ffd6a:{NFSU2_TR(0x5ffd6a);
__builtin_memmove((R+24),(R+28),4);
}
B5ffd6c:{NFSU2_TR(0x5ffd6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ffd50u);}goto L5ffd50;}}
}
B5ffd6e:L5ffd6e:{c.instructions+=1;NFSU2_TR(0x5ffd6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffd73ull));
TAIL_STATIC(0x5a0cd0u,5a0);
}
B5ffd73:L5ffd73:{c.instructions+=5;NFSU2_TR(0x5ffd73);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffd77:{NFSU2_TR(0x5ffd77);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ffd7b:{NFSU2_TR(0x5ffd7b);
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
B5ffd7d:{NFSU2_TR(0x5ffd7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ffd85:{NFSU2_TR(0x5ffd85);
if(r1(R+518)){{goto L5ffdaf;}}
}
B5ffd87:L5ffd87:{c.instructions+=9;NFSU2_TR(0x5ffd87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ffd89:{NFSU2_TR(0x5ffd89);
__builtin_memmove((R+8),(R+0),4);
}
B5ffd8b:{NFSU2_TR(0x5ffd8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffd8e:{NFSU2_TR(0x5ffd8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ffd90:{NFSU2_TR(0x5ffd90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffd91:{NFSU2_TR(0x5ffd91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffd94:{NFSU2_TR(0x5ffd94);
__builtin_memmove((R+8),gp(0x86b2cc),4);
}
B5ffd9a:{NFSU2_TR(0x5ffd9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffd9b:{NFSU2_TR(0x5ffd9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffda0ull));
TAIL_STATIC(0x43f920u,43f);
}
B5ffda0:L5ffda0:{c.instructions+=5;NFSU2_TR(0x5ffda0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffda4:{NFSU2_TR(0x5ffda4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ffda8:{NFSU2_TR(0x5ffda8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ffdab:{NFSU2_TR(0x5ffdab);
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
B5ffdad:{NFSU2_TR(0x5ffdad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ffd87u);}goto L5ffd87;}}
}
B5ffdaf:L5ffdaf:{c.instructions+=8;NFSU2_TR(0x5ffdaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ffdb3:{NFSU2_TR(0x5ffdb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ffdb4:{NFSU2_TR(0x5ffdb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ffdb5:{NFSU2_TR(0x5ffdb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffdbc:{NFSU2_TR(0x5ffdbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ffdbd:{NFSU2_TR(0x5ffdbd);
__builtin_memmove((R+16),(R+20),4);
}
B5ffdbf:{NFSU2_TR(0x5ffdbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ffdc0:{NFSU2_TR(0x5ffdc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ffdd0:L5ffdd0:{c.instructions+=5;NFSU2_TR(0x5ffdd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffdd1:{NFSU2_TR(0x5ffdd1);
__builtin_memmove((R+24),(R+4),4);
}
B5ffdd3:{NFSU2_TR(0x5ffdd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffdd9:{NFSU2_TR(0x5ffdd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ffddb:{NFSU2_TR(0x5ffddb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ffde6;}}
}
B5ffddd:L5ffddd:{c.instructions+=2;NFSU2_TR(0x5ffddd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffddf:{NFSU2_TR(0x5ffddf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffde4ull));
TAIL_STATIC(0x5fa820u,5fa);
}
B5ffde4:L5ffde4:{c.instructions+=1;NFSU2_TR(0x5ffde4);
{goto L5ffe18;}
}
B5ffde6:L5ffde6:{c.instructions+=3;NFSU2_TR(0x5ffde6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ffdec:{NFSU2_TR(0x5ffdec);
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
B5ffdee:{NFSU2_TR(0x5ffdee);
if(r1(R+518)){{goto L5ffdf6;}}
}
B5ffdf0:L5ffdf0:{c.instructions+=3;NFSU2_TR(0x5ffdf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ffdf2:{NFSU2_TR(0x5ffdf2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffdf4:{NFSU2_TR(0x5ffdf4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffdf6ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5ffdf6:L5ffdf6:{c.instructions+=5;NFSU2_TR(0x5ffdf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ffdfc:{NFSU2_TR(0x5ffdfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ffe02:{NFSU2_TR(0x5ffe02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffe08:{NFSU2_TR(0x5ffe08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffe0e:{NFSU2_TR(0x5ffe0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ffe18:L5ffe18:{c.instructions+=3;NFSU2_TR(0x5ffe18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffe1e:{NFSU2_TR(0x5ffe1e);
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
B5ffe20:{NFSU2_TR(0x5ffe20);
if(r1(R+518)){{goto L5ffe60;}}
}
B5ffe22:L5ffe22:{c.instructions+=2;NFSU2_TR(0x5ffe22);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B5ffe26:{NFSU2_TR(0x5ffe26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ffe60;}}
}
B5ffe28:L5ffe28:{c.instructions+=7;NFSU2_TR(0x5ffe28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffe29:{NFSU2_TR(0x5ffe29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5ffe2b:{NFSU2_TR(0x5ffe2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffe2e:{NFSU2_TR(0x5ffe2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5ffe31:{NFSU2_TR(0x5ffe31);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5ffe38:{NFSU2_TR(0x5ffe38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffe39:{NFSU2_TR(0x5ffe39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffe3eull));
TAIL_STATIC(0x502500u,502);
}
B5ffe3e:L5ffe3e:{c.instructions+=4;NFSU2_TR(0x5ffe3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ffe44:{NFSU2_TR(0x5ffe44);
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
B5ffe47:{NFSU2_TR(0x5ffe47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffe48:{NFSU2_TR(0x5ffe48);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffe4bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ffe4b:L5ffe4b:{c.instructions+=6;NFSU2_TR(0x5ffe4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ffe51:{NFSU2_TR(0x5ffe51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ffe53:{NFSU2_TR(0x5ffe53);
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
B5ffe55:{NFSU2_TR(0x5ffe55);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x249ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ffe5b:{NFSU2_TR(0x5ffe5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffe5c:{NFSU2_TR(0x5ffe5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffe5full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ffe5f:L5ffe5f:{c.instructions+=1;NFSU2_TR(0x5ffe5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ffe60:L5ffe60:{c.instructions+=4;NFSU2_TR(0x5ffe60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ffe66:{NFSU2_TR(0x5ffe66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ffe68:{NFSU2_TR(0x5ffe68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ffe69:{NFSU2_TR(0x5ffe69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5ffe70:L5ffe70:{c.instructions+=7;NFSU2_TR(0x5ffe70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffe71:{NFSU2_TR(0x5ffe71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffe72:{NFSU2_TR(0x5ffe72);
__builtin_memmove((R+24),(R+4),4);
}
B5ffe74:{NFSU2_TR(0x5ffe74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffe77:{NFSU2_TR(0x5ffe77);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ffe79:{NFSU2_TR(0x5ffe79);
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
B5ffe7b:{NFSU2_TR(0x5ffe7b);
if(r1(R+518)){{goto L5fff31;}}
}
B5ffe81:L5ffe81:{c.instructions+=3;NFSU2_TR(0x5ffe81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffe84:{NFSU2_TR(0x5ffe84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffe85:{NFSU2_TR(0x5ffe85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffe8aull));
TAIL_STATIC(0x4022c0u,402);
}
B5ffe8a:L5ffe8a:{c.instructions+=6;NFSU2_TR(0x5ffe8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffe8d:{NFSU2_TR(0x5ffe8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ffe90:{NFSU2_TR(0x5ffe90);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5ffe91:{NFSU2_TR(0x5ffe91);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5ffe94:{NFSU2_TR(0x5ffe94);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ffe9a:{NFSU2_TR(0x5ffe9a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ffeee;}}
}
B5ffe9c:L5ffe9c:{c.instructions+=2;NFSU2_TR(0x5ffe9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5fff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5ffea3:{NFSU2_TR(0x5ffea3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5fff38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ffeaa:L5ffeaa:{c.instructions+=2;NFSU2_TR(0x5ffeaa);
u8 U[8];
__builtin_memmove((U+0),gp(0x890084),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffeb0:{NFSU2_TR(0x5ffeb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ffebb;}}
}
B5ffeb2:L5ffeb2:{c.instructions+=2;NFSU2_TR(0x5ffeb2);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5ffeb8:{NFSU2_TR(0x5ffeb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ffebb:L5ffebb:{c.instructions+=3;NFSU2_TR(0x5ffebb);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5ffec0:{NFSU2_TR(0x5ffec0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5ffec3:{NFSU2_TR(0x5ffec3);
if(r1(R+518)){{goto L5ffecc;}}
}
B5ffec5:L5ffec5:{c.instructions+=2;NFSU2_TR(0x5ffec5);
__builtin_memmove((R+4),(R+24),4);
}
B5ffec7:{NFSU2_TR(0x5ffec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffeccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ffdd0u);}goto L5ffdd0;}
}
B5ffecc:L5ffecc:{c.instructions+=3;NFSU2_TR(0x5ffecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ffecf:{NFSU2_TR(0x5ffecf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffed1:{NFSU2_TR(0x5ffed1);
if(r1(R+518)){{goto L5ffeee;}}
}
B5ffed3:L5ffed3:{c.instructions+=4;NFSU2_TR(0x5ffed3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffed4:{NFSU2_TR(0x5ffed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ffeda:{NFSU2_TR(0x5ffeda);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ffedc:{NFSU2_TR(0x5ffedc);
if(r1(R+518)){{goto L5ffeed;}}
}
B5ffede:L5ffede:{c.instructions+=2;NFSU2_TR(0x5ffede);
__builtin_memmove((R+4),(R+28),4);
}
B5ffee0:{NFSU2_TR(0x5ffee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffee5ull));
TAIL_STATIC(0x637d70u,637);
}
B5ffee5:L5ffee5:{c.instructions+=3;NFSU2_TR(0x5ffee5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ffee6:{NFSU2_TR(0x5ffee6);
__builtin_memmove((R+4),(R+28),4);
}
B5ffee8:{NFSU2_TR(0x5ffee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ffeedull));
TAIL_STATIC(0x63a4b0u,63a);
}
B5ffeed:L5ffeed:{c.instructions+=1;NFSU2_TR(0x5ffeed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ffeee:L5ffeee:{c.instructions+=13;NFSU2_TR(0x5ffeee);
__builtin_memmove((R+0),gp(0x890080),4);
}
B5ffef3:{NFSU2_TR(0x5ffef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ffefd:{NFSU2_TR(0x5ffefd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fff03:{NFSU2_TR(0x5fff03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fff09:{NFSU2_TR(0x5fff09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fff0f:{NFSU2_TR(0x5fff0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fff15:{NFSU2_TR(0x5fff15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fff18:{NFSU2_TR(0x5fff18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fff1b:{NFSU2_TR(0x5fff1b);
__builtin_memmove((R+4),(R+24),4);
}
B5fff1d:{NFSU2_TR(0x5fff1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fff20:{NFSU2_TR(0x5fff20);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fff26:{NFSU2_TR(0x5fff26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fff2c:{NFSU2_TR(0x5fff2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fff31ull));
TAIL_STATIC(0x5ea650u,5ea);
}
B5fff31:L5fff31:{c.instructions+=3;NFSU2_TR(0x5fff31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fff32:{NFSU2_TR(0x5fff32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fff33:{NFSU2_TR(0x5fff33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fff50:L5fff50:{c.instructions+=8;NFSU2_TR(0x5fff50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fff51:{NFSU2_TR(0x5fff51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fff52:{NFSU2_TR(0x5fff52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fff53:{NFSU2_TR(0x5fff53);
__builtin_memmove((R+24),(R+4),4);
}
B5fff55:{NFSU2_TR(0x5fff55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fff58:{NFSU2_TR(0x5fff58);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5fff5a:{NFSU2_TR(0x5fff5a);
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
B5fff5c:{NFSU2_TR(0x5fff5c);
if(r1(R+518)){TAIL_STATIC(0x60007cu,600);}
}
B5fff62:L5fff62:{c.instructions+=3;NFSU2_TR(0x5fff62);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5fff67:{NFSU2_TR(0x5fff67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fff69:{NFSU2_TR(0x5fff69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fffd8;}}
}
B5fff6b:L5fff6b:{c.instructions+=2;NFSU2_TR(0x5fff6b);
w4(R+4,u32(0x865480ull));
}
B5fff70:{NFSU2_TR(0x5fff70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fff75ull));
TAIL_STATIC(0x571250u,571);
}
B5fff75:L5fff75:{c.instructions+=2;NFSU2_TR(0x5fff75);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fff77:{NFSU2_TR(0x5fff77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fffd8;}}
}
B5fff79:L5fff79:{c.instructions+=8;NFSU2_TR(0x5fff79);
{u32 ea_=u32(u32(8369952u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fff7f:{NFSU2_TR(0x5fff7f);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fff82:{NFSU2_TR(0x5fff82);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5fff84:{NFSU2_TR(0x5fff84);
{u32 ea_=u32(u32(7894460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fff8a:{NFSU2_TR(0x5fff8a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5fff90:{NFSU2_TR(0x5fff90);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fff92:{NFSU2_TR(0x5fff92);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fff95:{NFSU2_TR(0x5fff95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fff9b;}}
}
B5fff97:L5fff97:{c.instructions+=2;NFSU2_TR(0x5fff97);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5fff99:{NFSU2_TR(0x5fff99);
{goto L5fffa1;}
}
B5fff9b:L5fff9b:{c.instructions+=1;NFSU2_TR(0x5fff9b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fffa1:L5fffa1:{c.instructions+=5;NFSU2_TR(0x5fffa1);
{u32 ea_=u32(u32(8017048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fffa7:{NFSU2_TR(0x5fffa7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5fffa9:{NFSU2_TR(0x5fffa9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fffab:{NFSU2_TR(0x5fffab);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fffae:{NFSU2_TR(0x5fffae);
if(r1(R+514)){{goto L5fffb8;}}
}
B5fffb0:L5fffb0:{c.instructions+=2;NFSU2_TR(0x5fffb0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fffb2:{NFSU2_TR(0x5fffb2);
{u32 ea_=u32(u32(8017048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fffb8:L5fffb8:{c.instructions+=6;NFSU2_TR(0x5fffb8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5fffba:{NFSU2_TR(0x5fffba);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5fffbc:{NFSU2_TR(0x5fffbc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fffbe:{NFSU2_TR(0x5fffbe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fffc0:{NFSU2_TR(0x5fffc0);
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
B5fffc3:{NFSU2_TR(0x5fffc3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x60002eu,600);}
}
B5fffc5:L5fffc5:{c.instructions+=3;NFSU2_TR(0x5fffc5);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5fffcb:{NFSU2_TR(0x5fffcb);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5fffcd:{NFSU2_TR(0x5fffcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fffd2ull));
TAIL_STATIC(0x5fca90u,5fc);
}
B5fffd2:L5fffd2:{c.instructions+=5;NFSU2_TR(0x5fffd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fffd3:{NFSU2_TR(0x5fffd3);
__builtin_memmove((R+0),(R+12),1);
}
B5fffd5:{NFSU2_TR(0x5fffd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fffd6:{NFSU2_TR(0x5fffd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fffd7:{NFSU2_TR(0x5fffd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fffd8:L5fffd8:{c.instructions+=2;NFSU2_TR(0x5fffd8);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fffdf:{NFSU2_TR(0x5fffdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x600052u,600);}
}
B5fffe1:L5fffe1:{c.instructions+=3;NFSU2_TR(0x5fffe1);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B5fffe6:{NFSU2_TR(0x5fffe6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fffe8:{NFSU2_TR(0x5fffe8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ffffc;}}
}
B5fffea:L5fffea:{c.instructions+=3;NFSU2_TR(0x5fffea);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B5fffef:{NFSU2_TR(0x5fffef);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ffff1:{NFSU2_TR(0x5ffff1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5ffffc;}}
}
B5ffff3:L5ffff3:{c.instructions+=3;NFSU2_TR(0x5ffff3);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B5ffff8:{NFSU2_TR(0x5ffff8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ffffa:{NFSU2_TR(0x5ffffa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x600052u,600);}
}
B5ffffc:L5ffffc:{c.instructions+=1;NFSU2_TR(0x5ffffc);
{u32 ea_=u32(u32(8369952u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x600002u,600);
}
XIT:NFSU2_TR_EXIT(0x5ff,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
