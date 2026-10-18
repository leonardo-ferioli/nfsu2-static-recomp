#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41d(u8* __restrict R,Cpu& c);
u32 body_41e(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_422(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_425(u8* __restrict R,Cpu& c);
u32 body_428(u8* __restrict R,Cpu& c);
u32 body_42a(u8* __restrict R,Cpu& c);
u32 body_42d(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_604(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x42c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x42c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_42c(u8* __restrict R,Cpu& c);
u32 page_42c(Cpu& c){return body_42c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_42c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x42c000:goto L42c000;
case 0x42c002:c.instructions+=5;goto B42c002;
case 0x42c004:c.instructions+=4;goto B42c004;
case 0x42c00a:c.instructions+=3;goto B42c00a;
case 0x42c00b:c.instructions+=2;goto B42c00b;
case 0x42c00d:c.instructions+=1;goto B42c00d;
case 0x42c012:goto L42c012;
case 0x42c014:c.instructions+=6;goto B42c014;
case 0x42c016:c.instructions+=5;goto B42c016;
case 0x42c018:c.instructions+=4;goto B42c018;
case 0x42c01e:c.instructions+=3;goto B42c01e;
case 0x42c01f:c.instructions+=2;goto B42c01f;
case 0x42c021:c.instructions+=1;goto B42c021;
case 0x42c026:goto L42c026;
case 0x42c028:c.instructions+=6;goto B42c028;
case 0x42c02a:c.instructions+=5;goto B42c02a;
case 0x42c02c:c.instructions+=4;goto B42c02c;
case 0x42c032:c.instructions+=3;goto B42c032;
case 0x42c033:c.instructions+=2;goto B42c033;
case 0x42c035:c.instructions+=1;goto B42c035;
case 0x42c03a:goto L42c03a;
case 0x42c03c:c.instructions+=6;goto B42c03c;
case 0x42c03e:c.instructions+=5;goto B42c03e;
case 0x42c040:c.instructions+=4;goto B42c040;
case 0x42c046:c.instructions+=3;goto B42c046;
case 0x42c047:c.instructions+=2;goto B42c047;
case 0x42c049:c.instructions+=1;goto B42c049;
case 0x42c04e:goto L42c04e;
case 0x42c050:c.instructions+=1;goto B42c050;
case 0x42c055:goto L42c055;
case 0x42c056:c.instructions+=2;goto B42c056;
case 0x42c057:c.instructions+=1;goto B42c057;
case 0x42c060:goto L42c060;
case 0x42c065:c.instructions+=2;goto B42c065;
case 0x42c067:c.instructions+=1;goto B42c067;
case 0x42c069:goto L42c069;
case 0x42c06e:c.instructions+=2;goto B42c06e;
case 0x42c070:c.instructions+=1;goto B42c070;
case 0x42c072:goto L42c072;
case 0x42c07c:c.instructions+=1;goto B42c07c;
case 0x42c07e:goto L42c07e;
case 0x42c083:c.instructions+=2;goto B42c083;
case 0x42c085:c.instructions+=1;goto B42c085;
case 0x42c087:goto L42c087;
case 0x42c08e:c.instructions+=1;goto B42c08e;
case 0x42c090:goto L42c090;
case 0x42c092:c.instructions+=1;goto B42c092;
case 0x42c097:goto L42c097;
case 0x42c098:goto L42c098;
case 0x42c09b:c.instructions+=3;goto B42c09b;
case 0x42c09e:c.instructions+=2;goto B42c09e;
case 0x42c0a2:c.instructions+=1;goto B42c0a2;
case 0x42c0a4:goto L42c0a4;
case 0x42c0a6:c.instructions+=1;goto B42c0a6;
case 0x42c0ab:goto L42c0ab;
case 0x42c0ac:goto L42c0ac;
case 0x42c0ae:c.instructions+=1;goto B42c0ae;
case 0x42c0b3:goto L42c0b3;
case 0x42c0c0:goto L42c0c0;
case 0x42c0c3:c.instructions+=10;goto B42c0c3;
case 0x42c0c4:c.instructions+=9;goto B42c0c4;
case 0x42c0c5:c.instructions+=8;goto B42c0c5;
case 0x42c0c7:c.instructions+=7;goto B42c0c7;
case 0x42c0ca:c.instructions+=6;goto B42c0ca;
case 0x42c0d0:c.instructions+=5;goto B42c0d0;
case 0x42c0d5:c.instructions+=4;goto B42c0d5;
case 0x42c0d7:c.instructions+=3;goto B42c0d7;
case 0x42c0da:c.instructions+=2;goto B42c0da;
case 0x42c0dc:c.instructions+=1;goto B42c0dc;
case 0x42c0de:goto L42c0de;
case 0x42c0e3:c.instructions+=2;goto B42c0e3;
case 0x42c0e5:c.instructions+=1;goto B42c0e5;
case 0x42c0eb:goto L42c0eb;
case 0x42c0f1:c.instructions+=4;goto B42c0f1;
case 0x42c0f7:c.instructions+=3;goto B42c0f7;
case 0x42c0f9:c.instructions+=2;goto B42c0f9;
case 0x42c0fc:c.instructions+=1;goto B42c0fc;
case 0x42c0fe:goto L42c0fe;
case 0x42c100:c.instructions+=2;goto B42c100;
case 0x42c102:c.instructions+=1;goto B42c102;
case 0x42c105:goto L42c105;
case 0x42c107:c.instructions+=16;goto B42c107;
case 0x42c109:c.instructions+=15;goto B42c109;
case 0x42c10c:c.instructions+=14;goto B42c10c;
case 0x42c10d:c.instructions+=13;goto B42c10d;
case 0x42c10f:c.instructions+=12;goto B42c10f;
case 0x42c115:c.instructions+=11;goto B42c115;
case 0x42c118:c.instructions+=10;goto B42c118;
case 0x42c11b:c.instructions+=9;goto B42c11b;
case 0x42c11e:c.instructions+=8;goto B42c11e;
case 0x42c11f:c.instructions+=7;goto B42c11f;
case 0x42c122:c.instructions+=6;goto B42c122;
case 0x42c126:c.instructions+=5;goto B42c126;
case 0x42c12d:c.instructions+=4;goto B42c12d;
case 0x42c133:c.instructions+=3;goto B42c133;
case 0x42c137:c.instructions+=2;goto B42c137;
case 0x42c13a:c.instructions+=1;goto B42c13a;
case 0x42c13f:goto L42c13f;
case 0x42c143:c.instructions+=2;goto B42c143;
case 0x42c149:c.instructions+=1;goto B42c149;
case 0x42c14f:goto L42c14f;
case 0x42c155:c.instructions+=5;goto B42c155;
case 0x42c15b:c.instructions+=4;goto B42c15b;
case 0x42c161:c.instructions+=3;goto B42c161;
case 0x42c163:c.instructions+=2;goto B42c163;
case 0x42c166:c.instructions+=1;goto B42c166;
case 0x42c168:goto L42c168;
case 0x42c16d:goto L42c16d;
case 0x42c173:c.instructions+=5;goto B42c173;
case 0x42c175:c.instructions+=4;goto B42c175;
case 0x42c177:c.instructions+=3;goto B42c177;
case 0x42c179:c.instructions+=2;goto B42c179;
case 0x42c17c:c.instructions+=1;goto B42c17c;
case 0x42c182:goto L42c182;
case 0x42c188:c.instructions+=2;goto B42c188;
case 0x42c18b:c.instructions+=1;goto B42c18b;
case 0x42c191:goto L42c191;
case 0x42c194:c.instructions+=6;goto B42c194;
case 0x42c196:c.instructions+=5;goto B42c196;
case 0x42c198:c.instructions+=4;goto B42c198;
case 0x42c19a:c.instructions+=3;goto B42c19a;
case 0x42c19c:c.instructions+=2;goto B42c19c;
case 0x42c1a1:c.instructions+=1;goto B42c1a1;
case 0x42c1a4:goto L42c1a4;
case 0x42c1a6:c.instructions+=1;goto B42c1a6;
case 0x42c1ab:goto L42c1ab;
case 0x42c1ac:c.instructions+=3;goto B42c1ac;
case 0x42c1ad:c.instructions+=2;goto B42c1ad;
case 0x42c1b0:c.instructions+=1;goto B42c1b0;
case 0x42c1b3:goto L42c1b3;
case 0x42c1b6:c.instructions+=2;goto B42c1b6;
case 0x42c1b8:c.instructions+=1;goto B42c1b8;
case 0x42c1ba:goto L42c1ba;
case 0x42c1bf:c.instructions+=1;goto B42c1bf;
case 0x42c1c1:goto L42c1c1;
case 0x42c1c7:c.instructions+=5;goto B42c1c7;
case 0x42c1c9:c.instructions+=4;goto B42c1c9;
case 0x42c1cd:c.instructions+=3;goto B42c1cd;
case 0x42c1d1:c.instructions+=2;goto B42c1d1;
case 0x42c1d7:c.instructions+=1;goto B42c1d7;
case 0x42c1d9:goto L42c1d9;
case 0x42c1df:goto L42c1df;
case 0x42c1e5:c.instructions+=3;goto B42c1e5;
case 0x42c1e7:c.instructions+=2;goto B42c1e7;
case 0x42c1ea:c.instructions+=1;goto B42c1ea;
case 0x42c1ec:goto L42c1ec;
case 0x42c1ef:c.instructions+=6;goto B42c1ef;
case 0x42c1f1:c.instructions+=5;goto B42c1f1;
case 0x42c1f3:c.instructions+=4;goto B42c1f3;
case 0x42c1f5:c.instructions+=3;goto B42c1f5;
case 0x42c1f7:c.instructions+=2;goto B42c1f7;
case 0x42c1f9:c.instructions+=1;goto B42c1f9;
case 0x42c1fc:goto L42c1fc;
case 0x42c1fe:c.instructions+=1;goto B42c1fe;
case 0x42c203:goto L42c203;
case 0x42c204:c.instructions+=3;goto B42c204;
case 0x42c205:c.instructions+=2;goto B42c205;
case 0x42c208:c.instructions+=1;goto B42c208;
case 0x42c20b:goto L42c20b;
case 0x42c211:goto L42c211;
case 0x42c216:goto L42c216;
case 0x42c218:c.instructions+=1;goto B42c218;
case 0x42c21a:goto L42c21a;
case 0x42c21f:c.instructions+=2;goto B42c21f;
case 0x42c221:c.instructions+=1;goto B42c221;
case 0x42c223:goto L42c223;
case 0x42c228:c.instructions+=2;goto B42c228;
case 0x42c22a:c.instructions+=1;goto B42c22a;
case 0x42c22c:goto L42c22c;
case 0x42c22f:c.instructions+=6;goto B42c22f;
case 0x42c231:c.instructions+=5;goto B42c231;
case 0x42c233:c.instructions+=4;goto B42c233;
case 0x42c235:c.instructions+=3;goto B42c235;
case 0x42c237:c.instructions+=2;goto B42c237;
case 0x42c239:c.instructions+=1;goto B42c239;
case 0x42c23c:goto L42c23c;
case 0x42c23e:c.instructions+=1;goto B42c23e;
case 0x42c243:goto L42c243;
case 0x42c249:c.instructions+=3;goto B42c249;
case 0x42c24f:c.instructions+=2;goto B42c24f;
case 0x42c255:c.instructions+=1;goto B42c255;
case 0x42c25a:goto L42c25a;
case 0x42c260:goto L42c260;
case 0x42c263:c.instructions+=4;goto B42c263;
case 0x42c266:c.instructions+=3;goto B42c266;
case 0x42c268:c.instructions+=2;goto B42c268;
case 0x42c269:c.instructions+=1;goto B42c269;
case 0x42c26b:goto L42c26b;
case 0x42c270:goto L42c270;
case 0x42c272:c.instructions+=1;goto B42c272;
case 0x42c274:goto L42c274;
case 0x42c276:c.instructions+=1;goto B42c276;
case 0x42c278:goto L42c278;
case 0x42c27b:c.instructions+=2;goto B42c27b;
case 0x42c27f:c.instructions+=1;goto B42c27f;
case 0x42c281:goto L42c281;
case 0x42c287:c.instructions+=3;goto B42c287;
case 0x42c289:c.instructions+=2;goto B42c289;
case 0x42c28f:c.instructions+=1;goto B42c28f;
case 0x42c291:goto L42c291;
case 0x42c296:c.instructions+=1;goto B42c296;
case 0x42c298:goto L42c298;
case 0x42c29c:c.instructions+=3;goto B42c29c;
case 0x42c29d:c.instructions+=2;goto B42c29d;
case 0x42c29f:c.instructions+=1;goto B42c29f;
case 0x42c2a4:goto L42c2a4;
case 0x42c2a6:c.instructions+=1;goto B42c2a6;
case 0x42c2a8:goto L42c2a8;
case 0x42c2ab:c.instructions+=2;goto B42c2ab;
case 0x42c2b2:c.instructions+=1;goto B42c2b2;
case 0x42c2b4:goto L42c2b4;
case 0x42c2ba:c.instructions+=1;goto B42c2ba;
case 0x42c2bc:goto L42c2bc;
case 0x42c2be:c.instructions+=1;goto B42c2be;
case 0x42c2c0:goto L42c2c0;
case 0x42c2c1:c.instructions+=1;goto B42c2c1;
case 0x42c2c6:goto L42c2c6;
case 0x42c2c9:c.instructions+=3;goto B42c2c9;
case 0x42c2cc:c.instructions+=2;goto B42c2cc;
case 0x42c2cd:c.instructions+=1;goto B42c2cd;
case 0x42c2cf:goto L42c2cf;
case 0x42c2d2:c.instructions+=2;goto B42c2d2;
case 0x42c2d6:c.instructions+=1;goto B42c2d6;
case 0x42c2d8:goto L42c2d8;
case 0x42c2da:goto L42c2da;
case 0x42c2dc:goto L42c2dc;
case 0x42c2de:goto L42c2de;
case 0x42c2e3:goto L42c2e3;
case 0x42c2e9:c.instructions+=1;goto B42c2e9;
case 0x42c2ee:goto L42c2ee;
case 0x42c2f0:c.instructions+=1;goto B42c2f0;
case 0x42c2f6:goto L42c2f6;
case 0x42c2fb:c.instructions+=2;goto B42c2fb;
case 0x42c2fd:c.instructions+=1;goto B42c2fd;
case 0x42c303:goto L42c303;
case 0x42c308:c.instructions+=2;goto B42c308;
case 0x42c30a:c.instructions+=1;goto B42c30a;
case 0x42c310:goto L42c310;
case 0x42c313:c.instructions+=1;goto B42c313;
case 0x42c319:goto L42c319;
case 0x42c31f:c.instructions+=3;goto B42c31f;
case 0x42c321:c.instructions+=2;goto B42c321;
case 0x42c327:c.instructions+=1;goto B42c327;
case 0x42c329:goto L42c329;
case 0x42c32e:c.instructions+=1;goto B42c32e;
case 0x42c330:goto L42c330;
case 0x42c334:c.instructions+=3;goto B42c334;
case 0x42c335:c.instructions+=2;goto B42c335;
case 0x42c337:c.instructions+=1;goto B42c337;
case 0x42c33c:goto L42c33c;
case 0x42c33e:c.instructions+=1;goto B42c33e;
case 0x42c340:goto L42c340;
case 0x42c345:c.instructions+=3;goto B42c345;
case 0x42c346:c.instructions+=2;goto B42c346;
case 0x42c348:c.instructions+=1;goto B42c348;
case 0x42c34d:goto L42c34d;
case 0x42c350:c.instructions+=8;goto B42c350;
case 0x42c353:c.instructions+=7;goto B42c353;
case 0x42c356:c.instructions+=6;goto B42c356;
case 0x42c357:c.instructions+=5;goto B42c357;
case 0x42c35d:c.instructions+=4;goto B42c35d;
case 0x42c35f:c.instructions+=3;goto B42c35f;
case 0x42c365:c.instructions+=2;goto B42c365;
case 0x42c368:c.instructions+=1;goto B42c368;
case 0x42c36d:goto L42c36d;
case 0x42c373:c.instructions+=2;goto B42c373;
case 0x42c375:c.instructions+=1;goto B42c375;
case 0x42c37b:goto L42c37b;
case 0x42c382:c.instructions+=1;goto B42c382;
case 0x42c388:goto L42c388;
case 0x42c38b:c.instructions+=2;goto B42c38b;
case 0x42c38e:c.instructions+=1;goto B42c38e;
case 0x42c393:goto L42c393;
case 0x42c395:c.instructions+=1;goto B42c395;
case 0x42c39b:goto L42c39b;
case 0x42c3a1:c.instructions+=2;goto B42c3a1;
case 0x42c3a3:c.instructions+=1;goto B42c3a3;
case 0x42c3a8:goto L42c3a8;
case 0x42c3aa:c.instructions+=1;goto B42c3aa;
case 0x42c3b0:goto L42c3b0;
case 0x42c3b4:c.instructions+=3;goto B42c3b4;
case 0x42c3b5:c.instructions+=2;goto B42c3b5;
case 0x42c3b7:c.instructions+=1;goto B42c3b7;
case 0x42c3bc:goto L42c3bc;
case 0x42c3be:c.instructions+=1;goto B42c3be;
case 0x42c3c4:goto L42c3c4;
case 0x42c3ca:c.instructions+=3;goto B42c3ca;
case 0x42c3cb:c.instructions+=2;goto B42c3cb;
case 0x42c3cd:c.instructions+=1;goto B42c3cd;
case 0x42c3d2:goto L42c3d2;
case 0x42c3d5:c.instructions+=8;goto B42c3d5;
case 0x42c3d8:c.instructions+=7;goto B42c3d8;
case 0x42c3db:c.instructions+=6;goto B42c3db;
case 0x42c3dc:c.instructions+=5;goto B42c3dc;
case 0x42c3e2:c.instructions+=4;goto B42c3e2;
case 0x42c3e4:c.instructions+=3;goto B42c3e4;
case 0x42c3ea:c.instructions+=2;goto B42c3ea;
case 0x42c3ed:c.instructions+=1;goto B42c3ed;
case 0x42c3f2:goto L42c3f2;
case 0x42c3f5:c.instructions+=4;goto B42c3f5;
case 0x42c3fb:c.instructions+=3;goto B42c3fb;
case 0x42c3fe:c.instructions+=2;goto B42c3fe;
case 0x42c3ff:c.instructions+=1;goto B42c3ff;
case 0x42c404:goto L42c404;
case 0x42c40a:c.instructions+=3;goto B42c40a;
case 0x42c40c:c.instructions+=2;goto B42c40c;
case 0x42c40f:c.instructions+=1;goto B42c40f;
case 0x42c411:goto L42c411;
case 0x42c413:c.instructions+=1;goto B42c413;
case 0x42c415:goto L42c415;
case 0x42c417:goto L42c417;
case 0x42c41a:c.instructions+=1;goto B42c41a;
case 0x42c41f:goto L42c41f;
case 0x42c421:c.instructions+=1;goto B42c421;
case 0x42c423:goto L42c423;
case 0x42c429:c.instructions+=3;goto B42c429;
case 0x42c42c:c.instructions+=2;goto B42c42c;
case 0x42c42f:c.instructions+=1;goto B42c42f;
case 0x42c431:goto L42c431;
case 0x42c434:c.instructions+=4;goto B42c434;
case 0x42c43a:c.instructions+=3;goto B42c43a;
case 0x42c43c:c.instructions+=2;goto B42c43c;
case 0x42c43f:c.instructions+=1;goto B42c43f;
case 0x42c441:goto L42c441;
case 0x42c443:c.instructions+=1;goto B42c443;
case 0x42c445:goto L42c445;
case 0x42c448:c.instructions+=1;goto B42c448;
case 0x42c44d:goto L42c44d;
case 0x42c452:c.instructions+=2;goto B42c452;
case 0x42c454:c.instructions+=1;goto B42c454;
case 0x42c45a:goto L42c45a;
case 0x42c45d:c.instructions+=2;goto B42c45d;
case 0x42c45f:c.instructions+=1;goto B42c45f;
case 0x42c465:goto L42c465;
case 0x42c468:c.instructions+=4;goto B42c468;
case 0x42c46e:c.instructions+=3;goto B42c46e;
case 0x42c475:c.instructions+=2;goto B42c475;
case 0x42c477:c.instructions+=1;goto B42c477;
case 0x42c479:goto L42c479;
case 0x42c47d:c.instructions+=2;goto B42c47d;
case 0x42c481:c.instructions+=1;goto B42c481;
case 0x42c483:goto L42c483;
case 0x42c48b:goto L42c48b;
case 0x42c48d:c.instructions+=1;goto B42c48d;
case 0x42c492:goto L42c492;
case 0x42c494:c.instructions+=4;goto B42c494;
case 0x42c499:c.instructions+=3;goto B42c499;
case 0x42c49e:c.instructions+=2;goto B42c49e;
case 0x42c49f:c.instructions+=1;goto B42c49f;
case 0x42c4a0:goto L42c4a0;
case 0x42c4a2:c.instructions+=2;goto B42c4a2;
case 0x42c4a4:c.instructions+=1;goto B42c4a4;
case 0x42c4a6:goto L42c4a6;
case 0x42c4ad:c.instructions+=2;goto B42c4ad;
case 0x42c4af:c.instructions+=1;goto B42c4af;
case 0x42c4b1:goto L42c4b1;
case 0x42c4b5:c.instructions+=2;goto B42c4b5;
case 0x42c4ba:c.instructions+=1;goto B42c4ba;
case 0x42c4bc:goto L42c4bc;
case 0x42c4bf:c.instructions+=10;goto B42c4bf;
case 0x42c4c2:c.instructions+=9;goto B42c4c2;
case 0x42c4c4:c.instructions+=8;goto B42c4c4;
case 0x42c4c6:c.instructions+=7;goto B42c4c6;
case 0x42c4c9:c.instructions+=6;goto B42c4c9;
case 0x42c4ca:c.instructions+=5;goto B42c4ca;
case 0x42c4cc:c.instructions+=4;goto B42c4cc;
case 0x42c4d0:c.instructions+=3;goto B42c4d0;
case 0x42c4d1:c.instructions+=2;goto B42c4d1;
case 0x42c4d3:c.instructions+=1;goto B42c4d3;
case 0x42c4d5:goto L42c4d5;
case 0x42c4d7:goto L42c4d7;
case 0x42c4d9:c.instructions+=1;goto B42c4d9;
case 0x42c4db:goto L42c4db;
case 0x42c4dd:goto L42c4dd;
case 0x42c4df:c.instructions+=1;goto B42c4df;
case 0x42c4e1:goto L42c4e1;
case 0x42c4e3:goto L42c4e3;
case 0x42c4e5:c.instructions+=1;goto B42c4e5;
case 0x42c4eb:goto L42c4eb;
case 0x42c4ee:c.instructions+=2;goto B42c4ee;
case 0x42c4f4:c.instructions+=1;goto B42c4f4;
case 0x42c4f6:goto L42c4f6;
case 0x42c4fa:c.instructions+=2;goto B42c4fa;
case 0x42c4fc:c.instructions+=1;goto B42c4fc;
case 0x42c502:goto L42c502;
case 0x42c507:c.instructions+=2;goto B42c507;
case 0x42c509:c.instructions+=1;goto B42c509;
case 0x42c50b:goto L42c50b;
case 0x42c512:c.instructions+=2;goto B42c512;
case 0x42c516:c.instructions+=1;goto B42c516;
case 0x42c518:goto L42c518;
case 0x42c520:goto L42c520;
case 0x42c524:c.instructions+=13;goto B42c524;
case 0x42c528:c.instructions+=12;goto B42c528;
case 0x42c52b:c.instructions+=11;goto B42c52b;
case 0x42c52f:c.instructions+=10;goto B42c52f;
case 0x42c532:c.instructions+=9;goto B42c532;
case 0x42c537:c.instructions+=8;goto B42c537;
case 0x42c539:c.instructions+=7;goto B42c539;
case 0x42c540:c.instructions+=6;goto B42c540;
case 0x42c542:c.instructions+=5;goto B42c542;
case 0x42c545:c.instructions+=4;goto B42c545;
case 0x42c546:c.instructions+=3;goto B42c546;
case 0x42c548:c.instructions+=2;goto B42c548;
case 0x42c54a:c.instructions+=1;goto B42c54a;
case 0x42c54c:goto L42c54c;
case 0x42c54e:goto L42c54e;
case 0x42c554:c.instructions+=5;goto B42c554;
case 0x42c556:c.instructions+=4;goto B42c556;
case 0x42c558:c.instructions+=3;goto B42c558;
case 0x42c55b:c.instructions+=2;goto B42c55b;
case 0x42c55e:c.instructions+=1;goto B42c55e;
case 0x42c560:goto L42c560;
case 0x42c566:c.instructions+=10;goto B42c566;
case 0x42c56b:c.instructions+=9;goto B42c56b;
case 0x42c56d:c.instructions+=8;goto B42c56d;
case 0x42c570:c.instructions+=7;goto B42c570;
case 0x42c572:c.instructions+=6;goto B42c572;
case 0x42c574:c.instructions+=5;goto B42c574;
case 0x42c577:c.instructions+=4;goto B42c577;
case 0x42c578:c.instructions+=3;goto B42c578;
case 0x42c57a:c.instructions+=2;goto B42c57a;
case 0x42c57c:c.instructions+=1;goto B42c57c;
case 0x42c57e:goto L42c57e;
case 0x42c580:goto L42c580;
case 0x42c584:c.instructions+=5;goto B42c584;
case 0x42c587:c.instructions+=4;goto B42c587;
case 0x42c58e:c.instructions+=3;goto B42c58e;
case 0x42c591:c.instructions+=2;goto B42c591;
case 0x42c594:c.instructions+=1;goto B42c594;
case 0x42c599:goto L42c599;
case 0x42c59f:c.instructions+=9;goto B42c59f;
case 0x42c5a4:c.instructions+=8;goto B42c5a4;
case 0x42c5a7:c.instructions+=7;goto B42c5a7;
case 0x42c5ab:c.instructions+=6;goto B42c5ab;
case 0x42c5ac:c.instructions+=5;goto B42c5ac;
case 0x42c5ae:c.instructions+=4;goto B42c5ae;
case 0x42c5b2:c.instructions+=3;goto B42c5b2;
case 0x42c5b8:c.instructions+=2;goto B42c5b8;
case 0x42c5bc:c.instructions+=1;goto B42c5bc;
case 0x42c5c1:goto L42c5c1;
case 0x42c5c5:c.instructions+=3;goto B42c5c5;
case 0x42c5c8:c.instructions+=2;goto B42c5c8;
case 0x42c5d0:c.instructions+=1;goto B42c5d0;
case 0x42c5d2:goto L42c5d2;
case 0x42c5d3:c.instructions+=2;goto B42c5d3;
case 0x42c5d5:c.instructions+=1;goto B42c5d5;
case 0x42c5da:goto L42c5da;
case 0x42c5de:c.instructions+=1;goto B42c5de;
case 0x42c5e6:goto L42c5e6;
case 0x42c5e9:c.instructions+=3;goto B42c5e9;
case 0x42c5ec:c.instructions+=2;goto B42c5ec;
case 0x42c5ef:c.instructions+=1;goto B42c5ef;
case 0x42c5f4:goto L42c5f4;
case 0x42c5f7:c.instructions+=3;goto B42c5f7;
case 0x42c5fa:c.instructions+=2;goto B42c5fa;
case 0x42c5fb:c.instructions+=1;goto B42c5fb;
case 0x42c5fd:goto L42c5fd;
case 0x42c601:c.instructions+=13;goto B42c601;
case 0x42c605:c.instructions+=12;goto B42c605;
case 0x42c609:c.instructions+=11;goto B42c609;
case 0x42c60a:c.instructions+=10;goto B42c60a;
case 0x42c60e:c.instructions+=9;goto B42c60e;
case 0x42c610:c.instructions+=8;goto B42c610;
case 0x42c612:c.instructions+=7;goto B42c612;
case 0x42c613:c.instructions+=6;goto B42c613;
case 0x42c615:c.instructions+=5;goto B42c615;
case 0x42c616:c.instructions+=4;goto B42c616;
case 0x42c617:c.instructions+=3;goto B42c617;
case 0x42c618:c.instructions+=2;goto B42c618;
case 0x42c61b:c.instructions+=1;goto B42c61b;
case 0x42c620:goto L42c620;
case 0x42c623:c.instructions+=3;goto B42c623;
case 0x42c626:c.instructions+=2;goto B42c626;
case 0x42c628:c.instructions+=1;goto B42c628;
case 0x42c62b:goto L42c62b;
case 0x42c62d:c.instructions+=1;goto B42c62d;
case 0x42c632:goto L42c632;
case 0x42c635:c.instructions+=5;goto B42c635;
case 0x42c638:c.instructions+=4;goto B42c638;
case 0x42c63a:c.instructions+=3;goto B42c63a;
case 0x42c63d:c.instructions+=2;goto B42c63d;
case 0x42c640:c.instructions+=1;goto B42c640;
case 0x42c647:goto L42c647;
case 0x42c648:goto L42c648;
case 0x42c64c:c.instructions+=3;goto B42c64c;
case 0x42c64d:c.instructions+=2;goto B42c64d;
case 0x42c64f:c.instructions+=1;goto B42c64f;
case 0x42c654:goto L42c654;
case 0x42c655:c.instructions+=4;goto B42c655;
case 0x42c656:c.instructions+=3;goto B42c656;
case 0x42c657:c.instructions+=2;goto B42c657;
case 0x42c65a:c.instructions+=1;goto B42c65a;
case 0x42c660:goto L42c660;
case 0x42c662:c.instructions+=1;goto B42c662;
case 0x42c667:goto L42c667;
case 0x42c670:goto L42c670;
case 0x42c671:c.instructions+=14;goto B42c671;
case 0x42c673:c.instructions+=13;goto B42c673;
case 0x42c676:c.instructions+=12;goto B42c676;
case 0x42c678:c.instructions+=11;goto B42c678;
case 0x42c67d:c.instructions+=10;goto B42c67d;
case 0x42c683:c.instructions+=9;goto B42c683;
case 0x42c684:c.instructions+=8;goto B42c684;
case 0x42c68b:c.instructions+=7;goto B42c68b;
case 0x42c68e:c.instructions+=6;goto B42c68e;
case 0x42c68f:c.instructions+=5;goto B42c68f;
case 0x42c692:c.instructions+=4;goto B42c692;
case 0x42c694:c.instructions+=3;goto B42c694;
case 0x42c695:c.instructions+=2;goto B42c695;
case 0x42c696:c.instructions+=1;goto B42c696;
case 0x42c698:goto L42c698;
case 0x42c69b:c.instructions+=4;goto B42c69b;
case 0x42c6a0:c.instructions+=3;goto B42c6a0;
case 0x42c6a7:c.instructions+=2;goto B42c6a7;
case 0x42c6ab:c.instructions+=1;goto B42c6ab;
case 0x42c6ad:goto L42c6ad;
case 0x42c6b5:goto L42c6b5;
case 0x42c6b8:c.instructions+=2;goto B42c6b8;
case 0x42c6bb:c.instructions+=1;goto B42c6bb;
case 0x42c6bd:goto L42c6bd;
case 0x42c6c0:c.instructions+=2;goto B42c6c0;
case 0x42c6c5:c.instructions+=1;goto B42c6c5;
case 0x42c6c7:goto L42c6c7;
case 0x42c6cc:goto L42c6cc;
case 0x42c6cd:c.instructions+=2;goto B42c6cd;
case 0x42c6cf:c.instructions+=1;goto B42c6cf;
case 0x42c6d4:goto L42c6d4;
case 0x42c6d8:c.instructions+=3;goto B42c6d8;
case 0x42c6dc:c.instructions+=2;goto B42c6dc;
case 0x42c6de:c.instructions+=1;goto B42c6de;
case 0x42c6e0:goto L42c6e0;
case 0x42c6e3:goto L42c6e3;
case 0x42c6e8:c.instructions+=5;goto B42c6e8;
case 0x42c6eb:c.instructions+=4;goto B42c6eb;
case 0x42c6ee:c.instructions+=3;goto B42c6ee;
case 0x42c6f2:c.instructions+=2;goto B42c6f2;
case 0x42c6f6:c.instructions+=1;goto B42c6f6;
case 0x42c6f8:goto L42c6f8;
case 0x42c6f9:c.instructions+=1;goto B42c6f9;
case 0x42c6fb:goto L42c6fb;
case 0x42c6fc:c.instructions+=1;goto B42c6fc;
case 0x42c6fe:goto L42c6fe;
case 0x42c706:c.instructions+=1;goto B42c706;
case 0x42c708:goto L42c708;
case 0x42c710:c.instructions+=1;goto B42c710;
case 0x42c712:goto L42c712;
case 0x42c71a:goto L42c71a;
case 0x42c71c:c.instructions+=1;goto B42c71c;
case 0x42c71e:goto L42c71e;
case 0x42c722:c.instructions+=12;goto B42c722;
case 0x42c726:c.instructions+=11;goto B42c726;
case 0x42c72a:c.instructions+=10;goto B42c72a;
case 0x42c72e:c.instructions+=9;goto B42c72e;
case 0x42c732:c.instructions+=8;goto B42c732;
case 0x42c738:c.instructions+=7;goto B42c738;
case 0x42c73c:c.instructions+=6;goto B42c73c;
case 0x42c740:c.instructions+=5;goto B42c740;
case 0x42c744:c.instructions+=4;goto B42c744;
case 0x42c74a:c.instructions+=3;goto B42c74a;
case 0x42c74e:c.instructions+=2;goto B42c74e;
case 0x42c752:c.instructions+=1;goto B42c752;
case 0x42c754:goto L42c754;
case 0x42c758:c.instructions+=3;goto B42c758;
case 0x42c759:c.instructions+=2;goto B42c759;
case 0x42c75b:c.instructions+=1;goto B42c75b;
case 0x42c760:goto L42c760;
case 0x42c764:c.instructions+=1;goto B42c764;
case 0x42c768:goto L42c768;
case 0x42c769:c.instructions+=2;goto B42c769;
case 0x42c76a:c.instructions+=1;goto B42c76a;
case 0x42c76f:goto L42c76f;
case 0x42c772:c.instructions+=8;goto B42c772;
case 0x42c776:c.instructions+=7;goto B42c776;
case 0x42c778:c.instructions+=6;goto B42c778;
case 0x42c77c:c.instructions+=5;goto B42c77c;
case 0x42c77d:c.instructions+=4;goto B42c77d;
case 0x42c77f:c.instructions+=3;goto B42c77f;
case 0x42c780:c.instructions+=2;goto B42c780;
case 0x42c782:c.instructions+=1;goto B42c782;
case 0x42c787:goto L42c787;
case 0x42c78c:c.instructions+=1;goto B42c78c;
case 0x42c791:goto L42c791;
case 0x42c794:c.instructions+=4;goto B42c794;
case 0x42c798:c.instructions+=3;goto B42c798;
case 0x42c79a:c.instructions+=2;goto B42c79a;
case 0x42c7a2:c.instructions+=1;goto B42c7a2;
case 0x42c7a4:goto L42c7a4;
case 0x42c7a7:c.instructions+=10;goto B42c7a7;
case 0x42c7a9:c.instructions+=9;goto B42c7a9;
case 0x42c7aa:c.instructions+=8;goto B42c7aa;
case 0x42c7ad:c.instructions+=7;goto B42c7ad;
case 0x42c7b1:c.instructions+=6;goto B42c7b1;
case 0x42c7b2:c.instructions+=5;goto B42c7b2;
case 0x42c7b6:c.instructions+=4;goto B42c7b6;
case 0x42c7b7:c.instructions+=3;goto B42c7b7;
case 0x42c7b8:c.instructions+=2;goto B42c7b8;
case 0x42c7ba:c.instructions+=1;goto B42c7ba;
case 0x42c7bf:goto L42c7bf;
case 0x42c7c1:c.instructions+=1;goto B42c7c1;
case 0x42c7c3:goto L42c7c3;
case 0x42c7c5:goto L42c7c5;
case 0x42c7c7:c.instructions+=3;goto B42c7c7;
case 0x42c7c9:c.instructions+=2;goto B42c7c9;
case 0x42c7cd:c.instructions+=1;goto B42c7cd;
case 0x42c7d2:goto L42c7d2;
case 0x42c7d4:c.instructions+=2;goto B42c7d4;
case 0x42c7d6:c.instructions+=1;goto B42c7d6;
case 0x42c7db:goto L42c7db;
case 0x42c7df:c.instructions+=7;goto B42c7df;
case 0x42c7e2:c.instructions+=6;goto B42c7e2;
case 0x42c7e6:c.instructions+=5;goto B42c7e6;
case 0x42c7e7:c.instructions+=4;goto B42c7e7;
case 0x42c7e8:c.instructions+=3;goto B42c7e8;
case 0x42c7e9:c.instructions+=2;goto B42c7e9;
case 0x42c7eb:c.instructions+=1;goto B42c7eb;
case 0x42c7f0:goto L42c7f0;
case 0x42c7f4:c.instructions+=8;goto B42c7f4;
case 0x42c7fa:c.instructions+=7;goto B42c7fa;
case 0x42c7fc:c.instructions+=6;goto B42c7fc;
case 0x42c800:c.instructions+=5;goto B42c800;
case 0x42c803:c.instructions+=4;goto B42c803;
case 0x42c805:c.instructions+=3;goto B42c805;
case 0x42c808:c.instructions+=2;goto B42c808;
case 0x42c80e:c.instructions+=1;goto B42c80e;
case 0x42c810:goto L42c810;
case 0x42c816:goto L42c816;
case 0x42c819:c.instructions+=3;goto B42c819;
case 0x42c81b:c.instructions+=2;goto B42c81b;
case 0x42c821:c.instructions+=1;goto B42c821;
case 0x42c823:goto L42c823;
case 0x42c829:c.instructions+=2;goto B42c829;
case 0x42c82b:c.instructions+=1;goto B42c82b;
case 0x42c830:goto L42c830;
case 0x42c835:c.instructions+=2;goto B42c835;
case 0x42c836:c.instructions+=1;goto B42c836;
case 0x42c83b:goto L42c83b;
case 0x42c83e:c.instructions+=2;goto B42c83e;
case 0x42c840:c.instructions+=1;goto B42c840;
case 0x42c842:goto L42c842;
case 0x42c847:c.instructions+=2;goto B42c847;
case 0x42c849:c.instructions+=1;goto B42c849;
case 0x42c84e:goto L42c84e;
case 0x42c850:goto L42c850;
case 0x42c852:goto L42c852;
case 0x42c854:c.instructions+=2;goto B42c854;
case 0x42c85a:c.instructions+=1;goto B42c85a;
case 0x42c85c:goto L42c85c;
case 0x42c862:c.instructions+=1;goto B42c862;
case 0x42c863:goto L42c863;
case 0x42c868:goto L42c868;
case 0x42c86a:c.instructions+=3;goto B42c86a;
case 0x42c86d:c.instructions+=2;goto B42c86d;
case 0x42c86f:c.instructions+=1;goto B42c86f;
case 0x42c871:goto L42c871;
case 0x42c876:c.instructions+=2;goto B42c876;
case 0x42c878:c.instructions+=1;goto B42c878;
case 0x42c87d:goto L42c87d;
case 0x42c884:c.instructions+=2;goto B42c884;
case 0x42c88a:c.instructions+=1;goto B42c88a;
case 0x42c88c:goto L42c88c;
case 0x42c88e:c.instructions+=1;goto B42c88e;
case 0x42c893:goto L42c893;
case 0x42c899:c.instructions+=2;goto B42c899;
case 0x42c89a:c.instructions+=1;goto B42c89a;
case 0x42c89f:goto L42c89f;
case 0x42c8a2:c.instructions+=2;goto B42c8a2;
case 0x42c8a4:c.instructions+=1;goto B42c8a4;
case 0x42c8a6:goto L42c8a6;
case 0x42c8ab:c.instructions+=2;goto B42c8ab;
case 0x42c8ad:c.instructions+=1;goto B42c8ad;
case 0x42c8b2:goto L42c8b2;
case 0x42c8b4:goto L42c8b4;
case 0x42c8b6:goto L42c8b6;
case 0x42c8b8:c.instructions+=2;goto B42c8b8;
case 0x42c8be:c.instructions+=1;goto B42c8be;
case 0x42c8c0:goto L42c8c0;
case 0x42c8c5:c.instructions+=2;goto B42c8c5;
case 0x42c8c6:c.instructions+=1;goto B42c8c6;
case 0x42c8c8:goto L42c8c8;
case 0x42c8ca:goto L42c8ca;
case 0x42c8d0:goto L42c8d0;
case 0x42c8d2:c.instructions+=1;goto B42c8d2;
case 0x42c8d7:goto L42c8d7;
case 0x42c8da:c.instructions+=4;goto B42c8da;
case 0x42c8e0:c.instructions+=3;goto B42c8e0;
case 0x42c8e2:c.instructions+=2;goto B42c8e2;
case 0x42c8e5:c.instructions+=1;goto B42c8e5;
case 0x42c8e7:goto L42c8e7;
case 0x42c8ea:c.instructions+=6;goto B42c8ea;
case 0x42c8eb:c.instructions+=5;goto B42c8eb;
case 0x42c8f1:c.instructions+=4;goto B42c8f1;
case 0x42c8f2:c.instructions+=3;goto B42c8f2;
case 0x42c8f6:c.instructions+=2;goto B42c8f6;
case 0x42c8f7:c.instructions+=1;goto B42c8f7;
case 0x42c8fc:goto L42c8fc;
case 0x42c8ff:c.instructions+=1;goto B42c8ff;
case 0x42c901:goto L42c901;
case 0x42c909:c.instructions+=2;goto B42c909;
case 0x42c911:c.instructions+=1;goto B42c911;
case 0x42c919:goto L42c919;
case 0x42c91d:c.instructions+=3;goto B42c91d;
case 0x42c91e:c.instructions+=2;goto B42c91e;
case 0x42c921:c.instructions+=1;goto B42c921;
case 0x42c926:goto L42c926;
case 0x42c928:c.instructions+=2;goto B42c928;
case 0x42c92a:c.instructions+=1;goto B42c92a;
case 0x42c92f:goto L42c92f;
case 0x42c931:c.instructions+=2;goto B42c931;
case 0x42c933:c.instructions+=1;goto B42c933;
case 0x42c938:goto L42c938;
case 0x42c93c:c.instructions+=8;goto B42c93c;
case 0x42c93e:c.instructions+=7;goto B42c93e;
case 0x42c93f:c.instructions+=6;goto B42c93f;
case 0x42c940:c.instructions+=5;goto B42c940;
case 0x42c947:c.instructions+=4;goto B42c947;
case 0x42c948:c.instructions+=3;goto B42c948;
case 0x42c94a:c.instructions+=2;goto B42c94a;
case 0x42c94b:c.instructions+=1;goto B42c94b;
case 0x42c950:goto L42c950;
case 0x42c954:c.instructions+=4;goto B42c954;
case 0x42c956:c.instructions+=3;goto B42c956;
case 0x42c959:c.instructions+=2;goto B42c959;
case 0x42c95b:c.instructions+=1;goto B42c95b;
case 0x42c95d:goto L42c95d;
case 0x42c960:c.instructions+=4;goto B42c960;
case 0x42c965:c.instructions+=3;goto B42c965;
case 0x42c96c:c.instructions+=2;goto B42c96c;
case 0x42c970:c.instructions+=1;goto B42c970;
case 0x42c972:goto L42c972;
case 0x42c976:goto L42c976;
case 0x42c977:c.instructions+=6;goto B42c977;
case 0x42c978:c.instructions+=5;goto B42c978;
case 0x42c979:c.instructions+=4;goto B42c979;
case 0x42c97a:c.instructions+=3;goto B42c97a;
case 0x42c97e:c.instructions+=2;goto B42c97e;
case 0x42c981:c.instructions+=1;goto B42c981;
case 0x42c983:goto L42c983;
case 0x42c986:c.instructions+=1;goto B42c986;
case 0x42c988:goto L42c988;
case 0x42c98a:c.instructions+=1;goto B42c98a;
case 0x42c98c:goto L42c98c;
case 0x42c98e:goto L42c98e;
case 0x42c993:c.instructions+=3;goto B42c993;
case 0x42c995:c.instructions+=2;goto B42c995;
case 0x42c99d:c.instructions+=1;goto B42c99d;
case 0x42c99f:goto L42c99f;
case 0x42c9a0:c.instructions+=1;goto B42c9a0;
case 0x42c9a2:goto L42c9a2;
case 0x42c9a3:c.instructions+=1;goto B42c9a3;
case 0x42c9a5:goto L42c9a5;
case 0x42c9a9:c.instructions+=1;goto B42c9a9;
case 0x42c9ab:goto L42c9ab;
case 0x42c9b3:c.instructions+=1;goto B42c9b3;
case 0x42c9b5:goto L42c9b5;
case 0x42c9bd:goto L42c9bd;
case 0x42c9c1:c.instructions+=3;goto B42c9c1;
case 0x42c9c4:c.instructions+=2;goto B42c9c4;
case 0x42c9c5:c.instructions+=1;goto B42c9c5;
case 0x42c9ca:goto L42c9ca;
case 0x42c9ce:c.instructions+=2;goto B42c9ce;
case 0x42c9d0:c.instructions+=1;goto B42c9d0;
case 0x42c9d2:goto L42c9d2;
case 0x42c9da:c.instructions+=1;goto B42c9da;
case 0x42c9dc:goto L42c9dc;
case 0x42c9e4:c.instructions+=1;goto B42c9e4;
case 0x42c9e7:goto L42c9e7;
case 0x42c9eb:c.instructions+=4;goto B42c9eb;
case 0x42c9ed:c.instructions+=3;goto B42c9ed;
case 0x42c9ee:c.instructions+=2;goto B42c9ee;
case 0x42c9f0:c.instructions+=1;goto B42c9f0;
case 0x42c9f3:goto L42c9f3;
case 0x42c9f5:c.instructions+=3;goto B42c9f5;
case 0x42c9f6:c.instructions+=2;goto B42c9f6;
case 0x42c9f8:c.instructions+=1;goto B42c9f8;
case 0x42c9fb:goto L42c9fb;
case 0x42c9ff:c.instructions+=9;goto B42c9ff;
case 0x42ca03:c.instructions+=8;goto B42ca03;
case 0x42ca05:c.instructions+=7;goto B42ca05;
case 0x42ca08:c.instructions+=6;goto B42ca08;
case 0x42ca0b:c.instructions+=5;goto B42ca0b;
case 0x42ca11:c.instructions+=4;goto B42ca11;
case 0x42ca13:c.instructions+=3;goto B42ca13;
case 0x42ca19:c.instructions+=2;goto B42ca19;
case 0x42ca1f:c.instructions+=1;goto B42ca1f;
case 0x42ca21:goto L42ca21;
case 0x42ca27:goto L42ca27;
case 0x42ca2b:c.instructions+=3;goto B42ca2b;
case 0x42ca2d:c.instructions+=2;goto B42ca2d;
case 0x42ca33:c.instructions+=1;goto B42ca33;
case 0x42ca35:goto L42ca35;
case 0x42ca3b:goto L42ca3b;
case 0x42ca3d:c.instructions+=4;goto B42ca3d;
case 0x42ca43:c.instructions+=3;goto B42ca43;
case 0x42ca49:c.instructions+=2;goto B42ca49;
case 0x42ca4b:c.instructions+=1;goto B42ca4b;
case 0x42ca4d:goto L42ca4d;
case 0x42ca4f:c.instructions+=1;goto B42ca4f;
case 0x42ca51:goto L42ca51;
case 0x42ca53:goto L42ca53;
case 0x42ca58:goto L42ca58;
case 0x42ca5c:c.instructions+=15;goto B42ca5c;
case 0x42ca60:c.instructions+=14;goto B42ca60;
case 0x42ca64:c.instructions+=13;goto B42ca64;
case 0x42ca65:c.instructions+=12;goto B42ca65;
case 0x42ca69:c.instructions+=11;goto B42ca69;
case 0x42ca6a:c.instructions+=10;goto B42ca6a;
case 0x42ca6e:c.instructions+=9;goto B42ca6e;
case 0x42ca70:c.instructions+=8;goto B42ca70;
case 0x42ca71:c.instructions+=7;goto B42ca71;
case 0x42ca75:c.instructions+=6;goto B42ca75;
case 0x42ca77:c.instructions+=5;goto B42ca77;
case 0x42ca78:c.instructions+=4;goto B42ca78;
case 0x42ca79:c.instructions+=3;goto B42ca79;
case 0x42ca7a:c.instructions+=2;goto B42ca7a;
case 0x42ca7c:c.instructions+=1;goto B42ca7c;
case 0x42ca81:goto L42ca81;
case 0x42ca83:c.instructions+=3;goto B42ca83;
case 0x42ca85:c.instructions+=2;goto B42ca85;
case 0x42ca87:c.instructions+=1;goto B42ca87;
case 0x42ca8c:goto L42ca8c;
case 0x42ca8e:c.instructions+=2;goto B42ca8e;
case 0x42ca90:c.instructions+=1;goto B42ca90;
case 0x42ca95:goto L42ca95;
case 0x42ca96:c.instructions+=5;goto B42ca96;
case 0x42ca97:c.instructions+=4;goto B42ca97;
case 0x42ca98:c.instructions+=3;goto B42ca98;
case 0x42ca99:c.instructions+=2;goto B42ca99;
case 0x42ca9c:c.instructions+=1;goto B42ca9c;
case 0x42caa0:goto L42caa0;
case 0x42caa1:c.instructions+=11;goto B42caa1;
case 0x42caa3:c.instructions+=10;goto B42caa3;
case 0x42caa6:c.instructions+=9;goto B42caa6;
case 0x42caac:c.instructions+=8;goto B42caac;
case 0x42cab1:c.instructions+=7;goto B42cab1;
case 0x42cab2:c.instructions+=6;goto B42cab2;
case 0x42cab3:c.instructions+=5;goto B42cab3;
case 0x42cab5:c.instructions+=4;goto B42cab5;
case 0x42cab7:c.instructions+=3;goto B42cab7;
case 0x42cab8:c.instructions+=2;goto B42cab8;
case 0x42caba:c.instructions+=1;goto B42caba;
case 0x42cac0:goto L42cac0;
case 0x42cac5:goto L42cac5;
case 0x42cac7:c.instructions+=6;goto B42cac7;
case 0x42caca:c.instructions+=5;goto B42caca;
case 0x42cacc:c.instructions+=4;goto B42cacc;
case 0x42cace:c.instructions+=3;goto B42cace;
case 0x42cad1:c.instructions+=2;goto B42cad1;
case 0x42cad3:c.instructions+=1;goto B42cad3;
case 0x42cad5:goto L42cad5;
case 0x42cad7:c.instructions+=5;goto B42cad7;
case 0x42cad9:c.instructions+=4;goto B42cad9;
case 0x42cadc:c.instructions+=3;goto B42cadc;
case 0x42cadf:c.instructions+=2;goto B42cadf;
case 0x42cae1:c.instructions+=1;goto B42cae1;
case 0x42cae3:goto L42cae3;
case 0x42cae6:c.instructions+=1;goto B42cae6;
case 0x42caeb:goto L42caeb;
case 0x42caee:c.instructions+=1;goto B42caee;
case 0x42caf3:goto L42caf3;
case 0x42caf6:c.instructions+=3;goto B42caf6;
case 0x42caf9:c.instructions+=2;goto B42caf9;
case 0x42cafa:c.instructions+=1;goto B42cafa;
case 0x42cafc:goto L42cafc;
case 0x42cafe:c.instructions+=2;goto B42cafe;
case 0x42cb01:c.instructions+=1;goto B42cb01;
case 0x42cb04:goto L42cb04;
case 0x42cb06:c.instructions+=1;goto B42cb06;
case 0x42cb0b:goto L42cb0b;
case 0x42cb0d:c.instructions+=1;goto B42cb0d;
case 0x42cb12:goto L42cb12;
case 0x42cb14:c.instructions+=1;goto B42cb14;
case 0x42cb19:goto L42cb19;
case 0x42cb1b:c.instructions+=1;goto B42cb1b;
case 0x42cb20:goto L42cb20;
case 0x42cb22:c.instructions+=6;goto B42cb22;
case 0x42cb29:c.instructions+=5;goto B42cb29;
case 0x42cb30:c.instructions+=4;goto B42cb30;
case 0x42cb37:c.instructions+=3;goto B42cb37;
case 0x42cb3c:c.instructions+=2;goto B42cb3c;
case 0x42cb40:c.instructions+=1;goto B42cb40;
case 0x42cb41:goto L42cb41;
case 0x42cb43:goto L42cb43;
case 0x42cb44:c.instructions+=2;goto B42cb44;
case 0x42cb48:c.instructions+=1;goto B42cb48;
case 0x42cb4d:goto L42cb4d;
case 0x42cb50:c.instructions+=1;goto B42cb50;
case 0x42cb56:goto L42cb56;
case 0x42cb59:c.instructions+=4;goto B42cb59;
case 0x42cb5a:c.instructions+=3;goto B42cb5a;
case 0x42cb5c:c.instructions+=2;goto B42cb5c;
case 0x42cb64:c.instructions+=1;goto B42cb64;
case 0x42cb69:goto L42cb69;
case 0x42cb6b:c.instructions+=10;goto B42cb6b;
case 0x42cb6c:c.instructions+=9;goto B42cb6c;
case 0x42cb70:c.instructions+=8;goto B42cb70;
case 0x42cb71:c.instructions+=7;goto B42cb71;
case 0x42cb74:c.instructions+=6;goto B42cb74;
case 0x42cb78:c.instructions+=5;goto B42cb78;
case 0x42cb79:c.instructions+=4;goto B42cb79;
case 0x42cb7c:c.instructions+=3;goto B42cb7c;
case 0x42cb7d:c.instructions+=2;goto B42cb7d;
case 0x42cb85:c.instructions+=1;goto B42cb85;
case 0x42cb8a:goto L42cb8a;
case 0x42cb8d:c.instructions+=3;goto B42cb8d;
case 0x42cb91:c.instructions+=2;goto B42cb91;
case 0x42cb97:c.instructions+=1;goto B42cb97;
case 0x42cb99:goto L42cb99;
case 0x42cb9c:c.instructions+=4;goto B42cb9c;
case 0x42cba2:c.instructions+=3;goto B42cba2;
case 0x42cba4:c.instructions+=2;goto B42cba4;
case 0x42cba7:c.instructions+=1;goto B42cba7;
case 0x42cba9:goto L42cba9;
case 0x42cbad:c.instructions+=3;goto B42cbad;
case 0x42cbb3:c.instructions+=2;goto B42cbb3;
case 0x42cbb6:c.instructions+=1;goto B42cbb6;
case 0x42cbb8:goto L42cbb8;
case 0x42cbbe:c.instructions+=1;goto B42cbbe;
case 0x42cbc0:goto L42cbc0;
case 0x42cbc4:goto L42cbc4;
case 0x42cbca:c.instructions+=16;goto B42cbca;
case 0x42cbce:c.instructions+=15;goto B42cbce;
case 0x42cbd4:c.instructions+=14;goto B42cbd4;
case 0x42cbda:c.instructions+=13;goto B42cbda;
case 0x42cbdd:c.instructions+=12;goto B42cbdd;
case 0x42cbe3:c.instructions+=11;goto B42cbe3;
case 0x42cbe9:c.instructions+=10;goto B42cbe9;
case 0x42cbef:c.instructions+=9;goto B42cbef;
case 0x42cbf1:c.instructions+=8;goto B42cbf1;
case 0x42cbf3:c.instructions+=7;goto B42cbf3;
case 0x42cbf5:c.instructions+=6;goto B42cbf5;
case 0x42cbfb:c.instructions+=5;goto B42cbfb;
case 0x42cc01:c.instructions+=4;goto B42cc01;
case 0x42cc07:c.instructions+=3;goto B42cc07;
case 0x42cc09:c.instructions+=2;goto B42cc09;
case 0x42cc0c:c.instructions+=1;goto B42cc0c;
case 0x42cc12:goto L42cc12;
case 0x42cc14:c.instructions+=5;goto B42cc14;
case 0x42cc15:c.instructions+=4;goto B42cc15;
case 0x42cc19:c.instructions+=3;goto B42cc19;
case 0x42cc1a:c.instructions+=2;goto B42cc1a;
case 0x42cc1c:c.instructions+=1;goto B42cc1c;
case 0x42cc21:goto L42cc21;
case 0x42cc26:c.instructions+=2;goto B42cc26;
case 0x42cc28:c.instructions+=1;goto B42cc28;
case 0x42cc2e:goto L42cc2e;
case 0x42cc31:c.instructions+=3;goto B42cc31;
case 0x42cc37:c.instructions+=2;goto B42cc37;
case 0x42cc38:c.instructions+=1;goto B42cc38;
case 0x42cc3d:goto L42cc3d;
case 0x42cc43:c.instructions+=6;goto B42cc43;
case 0x42cc49:c.instructions+=5;goto B42cc49;
case 0x42cc4c:c.instructions+=4;goto B42cc4c;
case 0x42cc4e:c.instructions+=3;goto B42cc4e;
case 0x42cc50:c.instructions+=2;goto B42cc50;
case 0x42cc53:c.instructions+=1;goto B42cc53;
case 0x42cc59:goto L42cc59;
case 0x42cc5a:c.instructions+=2;goto B42cc5a;
case 0x42cc5e:c.instructions+=1;goto B42cc5e;
case 0x42cc63:goto L42cc63;
case 0x42cc68:c.instructions+=10;goto B42cc68;
case 0x42cc6c:c.instructions+=9;goto B42cc6c;
case 0x42cc6e:c.instructions+=8;goto B42cc6e;
case 0x42cc6f:c.instructions+=7;goto B42cc6f;
case 0x42cc70:c.instructions+=6;goto B42cc70;
case 0x42cc73:c.instructions+=5;goto B42cc73;
case 0x42cc75:c.instructions+=4;goto B42cc75;
case 0x42cc79:c.instructions+=3;goto B42cc79;
case 0x42cc7a:c.instructions+=2;goto B42cc7a;
case 0x42cc7d:c.instructions+=1;goto B42cc7d;
case 0x42cc82:goto L42cc82;
case 0x42cc85:c.instructions+=1;goto B42cc85;
case 0x42cc8b:goto L42cc8b;
case 0x42cc8f:c.instructions+=4;goto B42cc8f;
case 0x42cc90:c.instructions+=3;goto B42cc90;
case 0x42cc91:c.instructions+=2;goto B42cc91;
case 0x42cc93:c.instructions+=1;goto B42cc93;
case 0x42cc98:goto L42cc98;
case 0x42cc9c:c.instructions+=9;goto B42cc9c;
case 0x42cca2:c.instructions+=8;goto B42cca2;
case 0x42cca6:c.instructions+=7;goto B42cca6;
case 0x42cca7:c.instructions+=6;goto B42cca7;
case 0x42cca9:c.instructions+=5;goto B42cca9;
case 0x42ccaa:c.instructions+=4;goto B42ccaa;
case 0x42ccae:c.instructions+=3;goto B42ccae;
case 0x42ccaf:c.instructions+=2;goto B42ccaf;
case 0x42ccb1:c.instructions+=1;goto B42ccb1;
case 0x42ccb6:goto L42ccb6;
case 0x42ccb8:goto L42ccb8;
case 0x42ccb9:c.instructions+=3;goto B42ccb9;
case 0x42ccbd:c.instructions+=2;goto B42ccbd;
case 0x42ccbe:c.instructions+=1;goto B42ccbe;
case 0x42ccc3:goto L42ccc3;
case 0x42ccc6:c.instructions+=1;goto B42ccc6;
case 0x42ccc8:goto L42ccc8;
case 0x42cccb:c.instructions+=5;goto B42cccb;
case 0x42ccd1:c.instructions+=4;goto B42ccd1;
case 0x42ccd7:c.instructions+=3;goto B42ccd7;
case 0x42ccd9:c.instructions+=2;goto B42ccd9;
case 0x42ccdc:c.instructions+=1;goto B42ccdc;
case 0x42ccde:goto L42ccde;
case 0x42ccdf:c.instructions+=2;goto B42ccdf;
case 0x42cce3:c.instructions+=1;goto B42cce3;
case 0x42cce8:goto L42cce8;
case 0x42ccea:goto L42ccea;
case 0x42ccec:c.instructions+=8;goto B42ccec;
case 0x42ccf3:c.instructions+=7;goto B42ccf3;
case 0x42ccf6:c.instructions+=6;goto B42ccf6;
case 0x42ccf9:c.instructions+=5;goto B42ccf9;
case 0x42ccfa:c.instructions+=4;goto B42ccfa;
case 0x42ccfb:c.instructions+=3;goto B42ccfb;
case 0x42ccfc:c.instructions+=2;goto B42ccfc;
case 0x42ccfe:c.instructions+=1;goto B42ccfe;
case 0x42cd03:goto L42cd03;
case 0x42cd04:c.instructions+=4;goto B42cd04;
case 0x42cd08:c.instructions+=3;goto B42cd08;
case 0x42cd0b:c.instructions+=2;goto B42cd0b;
case 0x42cd0c:c.instructions+=1;goto B42cd0c;
case 0x42cd11:goto L42cd11;
case 0x42cd14:goto L42cd14;
case 0x42cd17:c.instructions+=4;goto B42cd17;
case 0x42cd19:c.instructions+=3;goto B42cd19;
case 0x42cd1d:c.instructions+=2;goto B42cd1d;
case 0x42cd1e:c.instructions+=1;goto B42cd1e;
case 0x42cd21:goto L42cd21;
case 0x42cd24:c.instructions+=2;goto B42cd24;
case 0x42cd29:c.instructions+=1;goto B42cd29;
case 0x42cd2b:goto L42cd2b;
case 0x42cd2f:c.instructions+=3;goto B42cd2f;
case 0x42cd30:c.instructions+=2;goto B42cd30;
case 0x42cd35:c.instructions+=1;goto B42cd35;
case 0x42cd3a:goto L42cd3a;
case 0x42cd3c:c.instructions+=2;goto B42cd3c;
case 0x42cd3e:c.instructions+=1;goto B42cd3e;
case 0x42cd41:goto L42cd41;
case 0x42cd42:c.instructions+=4;goto B42cd42;
case 0x42cd45:c.instructions+=3;goto B42cd45;
case 0x42cd46:c.instructions+=2;goto B42cd46;
case 0x42cd4b:c.instructions+=1;goto B42cd4b;
case 0x42cd50:goto L42cd50;
case 0x42cd51:c.instructions+=5;goto B42cd51;
case 0x42cd52:c.instructions+=4;goto B42cd52;
case 0x42cd53:c.instructions+=3;goto B42cd53;
case 0x42cd55:c.instructions+=2;goto B42cd55;
case 0x42cd56:c.instructions+=1;goto B42cd56;
case 0x42cd60:goto L42cd60;
case 0x42cd65:c.instructions+=7;goto B42cd65;
case 0x42cd68:c.instructions+=6;goto B42cd68;
case 0x42cd6b:c.instructions+=5;goto B42cd6b;
case 0x42cd6c:c.instructions+=4;goto B42cd6c;
case 0x42cd6e:c.instructions+=3;goto B42cd6e;
case 0x42cd70:c.instructions+=2;goto B42cd70;
case 0x42cd72:c.instructions+=1;goto B42cd72;
case 0x42cd74:goto L42cd74;
case 0x42cd75:goto L42cd75;
case 0x42cd77:c.instructions+=3;goto B42cd77;
case 0x42cd7b:c.instructions+=2;goto B42cd7b;
case 0x42cd7d:c.instructions+=1;goto B42cd7d;
case 0x42cd82:goto L42cd82;
case 0x42cd84:c.instructions+=1;goto B42cd84;
case 0x42cd86:goto L42cd86;
case 0x42cd89:c.instructions+=3;goto B42cd89;
case 0x42cd8f:c.instructions+=2;goto B42cd8f;
case 0x42cd91:c.instructions+=1;goto B42cd91;
case 0x42cd93:goto L42cd93;
case 0x42cd97:c.instructions+=1;goto B42cd97;
case 0x42cd99:goto L42cd99;
case 0x42cd9b:c.instructions+=1;goto B42cd9b;
case 0x42cda0:goto L42cda0;
case 0x42cda5:c.instructions+=6;goto B42cda5;
case 0x42cda8:c.instructions+=5;goto B42cda8;
case 0x42cdab:c.instructions+=4;goto B42cdab;
case 0x42cdac:c.instructions+=3;goto B42cdac;
case 0x42cdae:c.instructions+=2;goto B42cdae;
case 0x42cdb0:c.instructions+=1;goto B42cdb0;
case 0x42cdb2:goto L42cdb2;
case 0x42cdb3:goto L42cdb3;
case 0x42cdb4:c.instructions+=1;goto B42cdb4;
case 0x42cdc0:goto L42cdc0;
case 0x42cdc3:c.instructions+=9;goto B42cdc3;
case 0x42cdc4:c.instructions+=8;goto B42cdc4;
case 0x42cdc5:c.instructions+=7;goto B42cdc5;
case 0x42cdc6:c.instructions+=6;goto B42cdc6;
case 0x42cdc8:c.instructions+=5;goto B42cdc8;
case 0x42cdcb:c.instructions+=4;goto B42cdcb;
case 0x42cdcd:c.instructions+=3;goto B42cdcd;
case 0x42cdcf:c.instructions+=2;goto B42cdcf;
case 0x42cdd0:c.instructions+=1;goto B42cdd0;
case 0x42cdd6:goto L42cdd6;
case 0x42cdd9:c.instructions+=3;goto B42cdd9;
case 0x42cddb:c.instructions+=2;goto B42cddb;
case 0x42cddd:c.instructions+=1;goto B42cddd;
case 0x42cddf:goto L42cddf;
case 0x42cde3:c.instructions+=9;goto B42cde3;
case 0x42cde7:c.instructions+=8;goto B42cde7;
case 0x42cdeb:c.instructions+=7;goto B42cdeb;
case 0x42cdef:c.instructions+=6;goto B42cdef;
case 0x42cdf3:c.instructions+=5;goto B42cdf3;
case 0x42cdf9:c.instructions+=4;goto B42cdf9;
case 0x42cdfd:c.instructions+=3;goto B42cdfd;
case 0x42ce01:c.instructions+=2;goto B42ce01;
case 0x42ce07:c.instructions+=1;goto B42ce07;
case 0x42ce09:goto L42ce09;
case 0x42ce0d:c.instructions+=2;goto B42ce0d;
case 0x42ce0e:c.instructions+=1;goto B42ce0e;
case 0x42ce13:goto L42ce13;
case 0x42ce17:goto L42ce17;
case 0x42ce1b:c.instructions+=9;goto B42ce1b;
case 0x42ce1f:c.instructions+=8;goto B42ce1f;
case 0x42ce22:c.instructions+=7;goto B42ce22;
case 0x42ce26:c.instructions+=6;goto B42ce26;
case 0x42ce2c:c.instructions+=5;goto B42ce2c;
case 0x42ce32:c.instructions+=4;goto B42ce32;
case 0x42ce35:c.instructions+=3;goto B42ce35;
case 0x42ce37:c.instructions+=2;goto B42ce37;
case 0x42ce3a:c.instructions+=1;goto B42ce3a;
case 0x42ce3c:goto L42ce3c;
case 0x42ce42:goto L42ce42;
case 0x42ce44:c.instructions+=13;goto B42ce44;
case 0x42ce47:c.instructions+=12;goto B42ce47;
case 0x42ce49:c.instructions+=11;goto B42ce49;
case 0x42ce4b:c.instructions+=10;goto B42ce4b;
case 0x42ce4d:c.instructions+=9;goto B42ce4d;
case 0x42ce4f:c.instructions+=8;goto B42ce4f;
case 0x42ce51:c.instructions+=7;goto B42ce51;
case 0x42ce53:c.instructions+=6;goto B42ce53;
case 0x42ce55:c.instructions+=5;goto B42ce55;
case 0x42ce57:c.instructions+=4;goto B42ce57;
case 0x42ce5d:c.instructions+=3;goto B42ce5d;
case 0x42ce5f:c.instructions+=2;goto B42ce5f;
case 0x42ce62:c.instructions+=1;goto B42ce62;
case 0x42ce64:goto L42ce64;
case 0x42ce66:c.instructions+=18;goto B42ce66;
case 0x42ce67:c.instructions+=17;goto B42ce67;
case 0x42ce6a:c.instructions+=16;goto B42ce6a;
case 0x42ce6e:c.instructions+=15;goto B42ce6e;
case 0x42ce70:c.instructions+=14;goto B42ce70;
case 0x42ce72:c.instructions+=13;goto B42ce72;
case 0x42ce74:c.instructions+=12;goto B42ce74;
case 0x42ce76:c.instructions+=11;goto B42ce76;
case 0x42ce78:c.instructions+=10;goto B42ce78;
case 0x42ce7a:c.instructions+=9;goto B42ce7a;
case 0x42ce7c:c.instructions+=8;goto B42ce7c;
case 0x42ce7e:c.instructions+=7;goto B42ce7e;
case 0x42ce84:c.instructions+=6;goto B42ce84;
case 0x42ce87:c.instructions+=5;goto B42ce87;
case 0x42ce88:c.instructions+=4;goto B42ce88;
case 0x42ce89:c.instructions+=3;goto B42ce89;
case 0x42ce8d:c.instructions+=2;goto B42ce8d;
case 0x42ce8e:c.instructions+=1;goto B42ce8e;
case 0x42ce93:goto L42ce93;
case 0x42ce96:goto L42ce96;
case 0x42ce9c:c.instructions+=2;goto B42ce9c;
case 0x42cea3:c.instructions+=1;goto B42cea3;
case 0x42cea8:goto L42cea8;
case 0x42ceab:c.instructions+=1;goto B42ceab;
case 0x42ceb0:goto L42ceb0;
case 0x42ceb3:c.instructions+=3;goto B42ceb3;
case 0x42ceb6:c.instructions+=2;goto B42ceb6;
case 0x42ceb7:c.instructions+=1;goto B42ceb7;
case 0x42ceb9:goto L42ceb9;
case 0x42cebb:c.instructions+=2;goto B42cebb;
case 0x42cebd:c.instructions+=1;goto B42cebd;
case 0x42cec0:goto L42cec0;
case 0x42cec4:c.instructions+=5;goto B42cec4;
case 0x42cec6:c.instructions+=4;goto B42cec6;
case 0x42cec7:c.instructions+=3;goto B42cec7;
case 0x42cec8:c.instructions+=2;goto B42cec8;
case 0x42ceca:c.instructions+=1;goto B42ceca;
case 0x42cecf:goto L42cecf;
case 0x42ced0:c.instructions+=1;goto B42ced0;
case 0x42ced2:goto L42ced2;
case 0x42ced3:c.instructions+=1;goto B42ced3;
case 0x42ced5:goto L42ced5;
case 0x42ced7:c.instructions+=1;goto B42ced7;
case 0x42cedc:goto L42cedc;
case 0x42cede:goto L42cede;
case 0x42cee0:c.instructions+=1;goto B42cee0;
case 0x42cee5:goto L42cee5;
case 0x42cee8:c.instructions+=5;goto B42cee8;
case 0x42cef2:c.instructions+=4;goto B42cef2;
case 0x42cef5:c.instructions+=3;goto B42cef5;
case 0x42cef8:c.instructions+=2;goto B42cef8;
case 0x42cefb:c.instructions+=1;goto B42cefb;
case 0x42cefd:goto L42cefd;
case 0x42cf00:c.instructions+=1;goto B42cf00;
case 0x42cf06:goto L42cf06;
case 0x42cf08:c.instructions+=1;goto B42cf08;
case 0x42cf0e:goto L42cf0e;
case 0x42cf11:c.instructions+=2;goto B42cf11;
case 0x42cf13:c.instructions+=1;goto B42cf13;
case 0x42cf19:goto L42cf19;
case 0x42cf1d:c.instructions+=18;goto B42cf1d;
case 0x42cf21:c.instructions+=17;goto B42cf21;
case 0x42cf25:c.instructions+=16;goto B42cf25;
case 0x42cf29:c.instructions+=15;goto B42cf29;
case 0x42cf2d:c.instructions+=14;goto B42cf2d;
case 0x42cf33:c.instructions+=13;goto B42cf33;
case 0x42cf37:c.instructions+=12;goto B42cf37;
case 0x42cf3d:c.instructions+=11;goto B42cf3d;
case 0x42cf41:c.instructions+=10;goto B42cf41;
case 0x42cf43:c.instructions+=9;goto B42cf43;
case 0x42cf45:c.instructions+=8;goto B42cf45;
case 0x42cf49:c.instructions+=7;goto B42cf49;
case 0x42cf4b:c.instructions+=6;goto B42cf4b;
case 0x42cf4d:c.instructions+=5;goto B42cf4d;
case 0x42cf53:c.instructions+=4;goto B42cf53;
case 0x42cf55:c.instructions+=3;goto B42cf55;
case 0x42cf57:c.instructions+=2;goto B42cf57;
case 0x42cf5a:c.instructions+=1;goto B42cf5a;
case 0x42cf5c:goto L42cf5c;
case 0x42cf60:c.instructions+=1;goto B42cf60;
case 0x42cf62:goto L42cf62;
case 0x42cf66:goto L42cf66;
case 0x42cf6b:c.instructions+=2;goto B42cf6b;
case 0x42cf6d:c.instructions+=1;goto B42cf6d;
case 0x42cf73:goto L42cf73;
case 0x42cf76:c.instructions+=7;goto B42cf76;
case 0x42cf78:c.instructions+=6;goto B42cf78;
case 0x42cf7a:c.instructions+=5;goto B42cf7a;
case 0x42cf7d:c.instructions+=4;goto B42cf7d;
case 0x42cf7f:c.instructions+=3;goto B42cf7f;
case 0x42cf81:c.instructions+=2;goto B42cf81;
case 0x42cf83:c.instructions+=1;goto B42cf83;
case 0x42cf88:goto L42cf88;
case 0x42cf8b:c.instructions+=5;goto B42cf8b;
case 0x42cf8d:c.instructions+=4;goto B42cf8d;
case 0x42cf8f:c.instructions+=3;goto B42cf8f;
case 0x42cf92:c.instructions+=2;goto B42cf92;
case 0x42cf94:c.instructions+=1;goto B42cf94;
case 0x42cf9a:goto L42cf9a;
case 0x42cf9e:c.instructions+=24;goto B42cf9e;
case 0x42cfa2:c.instructions+=23;goto B42cfa2;
case 0x42cfa6:c.instructions+=22;goto B42cfa6;
case 0x42cfa9:c.instructions+=21;goto B42cfa9;
case 0x42cfad:c.instructions+=20;goto B42cfad;
case 0x42cfb1:c.instructions+=19;goto B42cfb1;
case 0x42cfb5:c.instructions+=18;goto B42cfb5;
case 0x42cfbb:c.instructions+=17;goto B42cfbb;
case 0x42cfbc:c.instructions+=16;goto B42cfbc;
case 0x42cfbe:c.instructions+=15;goto B42cfbe;
case 0x42cfc2:c.instructions+=14;goto B42cfc2;
case 0x42cfc6:c.instructions+=13;goto B42cfc6;
case 0x42cfcc:c.instructions+=12;goto B42cfcc;
case 0x42cfd0:c.instructions+=11;goto B42cfd0;
case 0x42cfd4:c.instructions+=10;goto B42cfd4;
case 0x42cfd8:c.instructions+=9;goto B42cfd8;
case 0x42cfdc:c.instructions+=8;goto B42cfdc;
case 0x42cfe0:c.instructions+=7;goto B42cfe0;
case 0x42cfe4:c.instructions+=6;goto B42cfe4;
case 0x42cfea:c.instructions+=5;goto B42cfea;
case 0x42cfee:c.instructions+=4;goto B42cfee;
case 0x42cff4:c.instructions+=3;goto B42cff4;
case 0x42cff8:c.instructions+=2;goto B42cff8;
case 0x42cffc:c.instructions+=1;goto B42cffc;
default:missing_instruction(c.pc);}
B42c000:L42c000:{c.instructions+=6;NFSU2_TR(0x42c000);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c002:{NFSU2_TR(0x42c002);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c004:{NFSU2_TR(0x42c004);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7b4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42c00a:{NFSU2_TR(0x42c00a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c00b:{NFSU2_TR(0x42c00b);
__builtin_memmove((R+4),(R+24),4);
}
B42c00d:{NFSU2_TR(0x42c00d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c012ull));
TAIL_STATIC(0x571640u,571);
}
B42c012:L42c012:{c.instructions+=7;NFSU2_TR(0x42c012);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c014:{NFSU2_TR(0x42c014);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c016:{NFSU2_TR(0x42c016);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c018:{NFSU2_TR(0x42c018);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7b8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42c01e:{NFSU2_TR(0x42c01e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c01f:{NFSU2_TR(0x42c01f);
__builtin_memmove((R+4),(R+24),4);
}
B42c021:{NFSU2_TR(0x42c021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c026ull));
TAIL_STATIC(0x571640u,571);
}
B42c026:L42c026:{c.instructions+=7;NFSU2_TR(0x42c026);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c028:{NFSU2_TR(0x42c028);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c02a:{NFSU2_TR(0x42c02a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c02c:{NFSU2_TR(0x42c02c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7bcull))));
__builtin_memmove((R+8),(U+0),4);
}
B42c032:{NFSU2_TR(0x42c032);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c033:{NFSU2_TR(0x42c033);
__builtin_memmove((R+4),(R+24),4);
}
B42c035:{NFSU2_TR(0x42c035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c03aull));
TAIL_STATIC(0x571640u,571);
}
B42c03a:L42c03a:{c.instructions+=7;NFSU2_TR(0x42c03a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c03c:{NFSU2_TR(0x42c03c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c03e:{NFSU2_TR(0x42c03e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c040:{NFSU2_TR(0x42c040);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x7c0ull))));
}
B42c046:{NFSU2_TR(0x42c046);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c047:{NFSU2_TR(0x42c047);
__builtin_memmove((R+4),(R+24),4);
}
B42c049:{NFSU2_TR(0x42c049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c04eull));
TAIL_STATIC(0x571640u,571);
}
B42c04e:L42c04e:{c.instructions+=2;NFSU2_TR(0x42c04e);
__builtin_memmove((R+4),(R+24),4);
}
B42c050:{NFSU2_TR(0x42c050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c055ull));
TAIL_STATIC(0x578d90u,578);
}
B42c055:L42c055:{c.instructions+=3;NFSU2_TR(0x42c055);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42c056:{NFSU2_TR(0x42c056);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42c057:{NFSU2_TR(0x42c057);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42c060:L42c060:{c.instructions+=3;NFSU2_TR(0x42c060);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B42c065:{NFSU2_TR(0x42c065);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c067:{NFSU2_TR(0x42c067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c098;}}
}
B42c069:L42c069:{c.instructions+=3;NFSU2_TR(0x42c069);
__builtin_memmove((R+0),gp(0x890108),4);
}
B42c06e:{NFSU2_TR(0x42c06e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c070:{NFSU2_TR(0x42c070);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c098;}}
}
B42c072:L42c072:{c.instructions+=2;NFSU2_TR(0x42c072);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7a0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42c07c:{NFSU2_TR(0x42c07c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c090;}}
}
B42c07e:L42c07e:{c.instructions+=3;NFSU2_TR(0x42c07e);
__builtin_memmove((R+0),gp(0x86b320),4);
}
B42c083:{NFSU2_TR(0x42c083);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c085:{NFSU2_TR(0x42c085);
if(r1(R+518)){{goto L42c090;}}
}
B42c087:L42c087:{c.instructions+=2;NFSU2_TR(0x42c087);
u8 U[8];
__builtin_memmove((U+0),gp(0x86b328),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42c08e:{NFSU2_TR(0x42c08e);
if(r1(R+518)){{goto L42c098;}}
}
B42c090:L42c090:{c.instructions+=2;NFSU2_TR(0x42c090);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c092:{NFSU2_TR(0x42c092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c097ull));
TAIL_STATIC(0x42aa20u,42a);
}
B42c097:L42c097:{c.instructions+=1;NFSU2_TR(0x42c097);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42c098:L42c098:{c.instructions+=4;NFSU2_TR(0x42c098);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c09b:{NFSU2_TR(0x42c09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c09e:{NFSU2_TR(0x42c09e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42c0a2:{NFSU2_TR(0x42c0a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c0ac;}}
}
B42c0a4:L42c0a4:{c.instructions+=2;NFSU2_TR(0x42c0a4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c0a6:{NFSU2_TR(0x42c0a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c0abull));
TAIL_STATIC(0x42aa20u,42a);
}
B42c0ab:L42c0ab:{c.instructions+=1;NFSU2_TR(0x42c0ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42c0ac:L42c0ac:{c.instructions+=2;NFSU2_TR(0x42c0ac);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c0ae:{NFSU2_TR(0x42c0ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c0b3ull));
TAIL_STATIC(0x42aa20u,42a);
}
B42c0b3:L42c0b3:{c.instructions+=1;NFSU2_TR(0x42c0b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42c0c0:L42c0c0:{c.instructions+=11;NFSU2_TR(0x42c0c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B42c0c3:{NFSU2_TR(0x42c0c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c0c4:{NFSU2_TR(0x42c0c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c0c5:{NFSU2_TR(0x42c0c5);
__builtin_memmove((R+24),(R+4),4);
}
B42c0c7:{NFSU2_TR(0x42c0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c0ca:{NFSU2_TR(0x42c0ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c0d0:{NFSU2_TR(0x42c0d0);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B42c0d5:{NFSU2_TR(0x42c0d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c0d7:{NFSU2_TR(0x42c0d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B42c0da:{NFSU2_TR(0x42c0da);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c0dc:{NFSU2_TR(0x42c0dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c0eb;}}
}
B42c0de:L42c0de:{c.instructions+=3;NFSU2_TR(0x42c0de);
__builtin_memmove((R+0),gp(0x890108),4);
}
B42c0e3:{NFSU2_TR(0x42c0e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c0e5:{NFSU2_TR(0x42c0e5);
if(r1(R+518)){{goto L42c20b;}}
}
B42c0eb:L42c0eb:{c.instructions+=5;NFSU2_TR(0x42c0eb);
{u32 ea_=u32(r4(R+24)+u32(1884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42c0f1:{NFSU2_TR(0x42c0f1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42c0f7:{NFSU2_TR(0x42c0f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42c0f9:{NFSU2_TR(0x42c0f9);
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
B42c0fc:{NFSU2_TR(0x42c0fc);
if(r1(R+514)){{goto L42c14f;}}
}
B42c0fe:L42c0fe:{c.instructions+=3;NFSU2_TR(0x42c0fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42c100:{NFSU2_TR(0x42c100);
__builtin_memmove((R+4),(R+24),4);
}
B42c102:{NFSU2_TR(0x42c102);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c105ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42c105:L42c105:{c.instructions+=17;NFSU2_TR(0x42c105);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B42c107:{NFSU2_TR(0x42c107);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c109:{NFSU2_TR(0x42c109);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B42c10c:{NFSU2_TR(0x42c10c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B42c10d:{NFSU2_TR(0x42c10d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B42c10f:{NFSU2_TR(0x42c10f);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B42c115:{NFSU2_TR(0x42c115);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((R+8),(U+0),4);
}
B42c118:{NFSU2_TR(0x42c118);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B42c11b:{NFSU2_TR(0x42c11b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B42c11e:{NFSU2_TR(0x42c11e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c11f:{NFSU2_TR(0x42c11f);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42c122:{NFSU2_TR(0x42c122);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42c126:{NFSU2_TR(0x42c126);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(1356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42c12d:{NFSU2_TR(0x42c12d);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42c133:{NFSU2_TR(0x42c133);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42c137:{NFSU2_TR(0x42c137);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42c13a:{NFSU2_TR(0x42c13a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c13full));
TAIL_STATIC(0x5ea500u,5ea);
}
B42c13f:L42c13f:{c.instructions+=3;NFSU2_TR(0x42c13f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42c143:{NFSU2_TR(0x42c143);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42c149:{NFSU2_TR(0x42c149);
{u32 ea_=u32(r4(R+24)+u32(1884u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42c14f:L42c14f:{c.instructions+=6;NFSU2_TR(0x42c14f);
{u32 ea_=u32(r4(R+24)+u32(1884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42c155:{NFSU2_TR(0x42c155);
__builtin_memmove((R+4),gp(0x890118),4);
}
B42c15b:{NFSU2_TR(0x42c15b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42c161:{NFSU2_TR(0x42c161);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42c163:{NFSU2_TR(0x42c163);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42c166:{NFSU2_TR(0x42c166);
if(r1(R+514)){{goto L42c1b3;}}
}
B42c168:L42c168:{c.instructions+=1;NFSU2_TR(0x42c168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c16dull));
TAIL_STATIC(0x5ef2e0u,5ef);
}
B42c16d:L42c16d:{c.instructions+=6;NFSU2_TR(0x42c16d);
{u32 ea_=u32(r4(R+24)+u32(1884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42c173:{NFSU2_TR(0x42c173);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B42c175:{NFSU2_TR(0x42c175);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B42c177:{NFSU2_TR(0x42c177);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42c179:{NFSU2_TR(0x42c179);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c17c:{NFSU2_TR(0x42c17c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c20b;}}
}
B42c182:L42c182:{c.instructions+=3;NFSU2_TR(0x42c182);
__builtin_memmove((R+4),gp(0x890118),4);
}
B42c188:{NFSU2_TR(0x42c188);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
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
B42c18b:{NFSU2_TR(0x42c18b);
if(r1(R+518)){{goto L42c211;}}
}
B42c191:L42c191:{c.instructions+=7;NFSU2_TR(0x42c191);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c194:{NFSU2_TR(0x42c194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42c196:{NFSU2_TR(0x42c196);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c198:{NFSU2_TR(0x42c198);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c19a:{NFSU2_TR(0x42c19a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c19c:{NFSU2_TR(0x42c19c);
u8 U[4];
w4(U+0,u32(0x42c80000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c1a1:{NFSU2_TR(0x42c1a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c1a4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42c1a4:L42c1a4:{c.instructions+=2;NFSU2_TR(0x42c1a4);
__builtin_memmove((R+4),(R+24),4);
}
B42c1a6:{NFSU2_TR(0x42c1a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c1abull));
TAIL_STATIC(0x4023e0u,402);
}
B42c1ab:L42c1ab:{c.instructions+=4;NFSU2_TR(0x42c1ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42c1ac:{NFSU2_TR(0x42c1ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42c1ad:{NFSU2_TR(0x42c1ad);
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
B42c1b0:{NFSU2_TR(0x42c1b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42c1b3:L42c1b3:{c.instructions+=3;NFSU2_TR(0x42c1b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c1b6:{NFSU2_TR(0x42c1b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c1b8:{NFSU2_TR(0x42c1b8);
if(r1(R+518)){{goto L42c1d9;}}
}
B42c1ba:L42c1ba:{c.instructions+=2;NFSU2_TR(0x42c1ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c1bf:{NFSU2_TR(0x42c1bf);
if(r1(R+518)){{goto L42c1d9;}}
}
B42c1c1:L42c1c1:{c.instructions+=6;NFSU2_TR(0x42c1c1);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B42c1c7:{NFSU2_TR(0x42c1c7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B42c1c9:{NFSU2_TR(0x42c1c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c1cd:{NFSU2_TR(0x42c1cd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42c1d1:{NFSU2_TR(0x42c1d1);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42c1d7:{NFSU2_TR(0x42c1d7);
{goto L42c1df;}
}
B42c1d9:L42c1d9:{c.instructions+=1;NFSU2_TR(0x42c1d9);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42c1df:L42c1df:{c.instructions+=4;NFSU2_TR(0x42c1df);
{u32 ea_=u32(r4(R+24)+u32(1884u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42c1e5:{NFSU2_TR(0x42c1e5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42c1e7:{NFSU2_TR(0x42c1e7);
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
B42c1ea:{NFSU2_TR(0x42c1ea);
if(r1(R+514)){{goto L42c211;}}
}
B42c1ec:L42c1ec:{c.instructions+=7;NFSU2_TR(0x42c1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c1ef:{NFSU2_TR(0x42c1ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42c1f1:{NFSU2_TR(0x42c1f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c1f3:{NFSU2_TR(0x42c1f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c1f5:{NFSU2_TR(0x42c1f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c1f7:{NFSU2_TR(0x42c1f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c1f9:{NFSU2_TR(0x42c1f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c1fcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42c1fc:L42c1fc:{c.instructions+=2;NFSU2_TR(0x42c1fc);
__builtin_memmove((R+4),(R+24),4);
}
B42c1fe:{NFSU2_TR(0x42c1fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c203ull));
TAIL_STATIC(0x4023e0u,402);
}
B42c203:L42c203:{c.instructions+=4;NFSU2_TR(0x42c203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42c204:{NFSU2_TR(0x42c204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42c205:{NFSU2_TR(0x42c205);
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
B42c208:{NFSU2_TR(0x42c208);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42c20b:L42c20b:{c.instructions+=1;NFSU2_TR(0x42c20b);
__builtin_memmove((R+4),gp(0x890118),4);
}
B42c211:L42c211:{c.instructions+=1;NFSU2_TR(0x42c211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c216ull));
TAIL_STATIC(0x5eeef0u,5ee);
}
B42c216:L42c216:{c.instructions+=2;NFSU2_TR(0x42c216);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c218:{NFSU2_TR(0x42c218);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c260;}}
}
B42c21a:L42c21a:{c.instructions+=3;NFSU2_TR(0x42c21a);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B42c21f:{NFSU2_TR(0x42c21f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c221:{NFSU2_TR(0x42c221);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c260;}}
}
B42c223:L42c223:{c.instructions+=3;NFSU2_TR(0x42c223);
__builtin_memmove((R+0),gp(0x890108),4);
}
B42c228:{NFSU2_TR(0x42c228);
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
B42c22a:{NFSU2_TR(0x42c22a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c260;}}
}
B42c22c:L42c22c:{c.instructions+=7;NFSU2_TR(0x42c22c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c22f:{NFSU2_TR(0x42c22f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42c231:{NFSU2_TR(0x42c231);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c233:{NFSU2_TR(0x42c233);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c235:{NFSU2_TR(0x42c235);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c237:{NFSU2_TR(0x42c237);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c239:{NFSU2_TR(0x42c239);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c23cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42c23c:L42c23c:{c.instructions+=2;NFSU2_TR(0x42c23c);
__builtin_memmove((R+4),(R+24),4);
}
B42c23e:{NFSU2_TR(0x42c23e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c243ull));
TAIL_STATIC(0x4023e0u,402);
}
B42c243:L42c243:{c.instructions+=4;NFSU2_TR(0x42c243);
{u32 ea_=u32(u32(7877912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42c249:{NFSU2_TR(0x42c249);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42c24f:{NFSU2_TR(0x42c24f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42c255:{NFSU2_TR(0x42c255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c25aull));
TAIL_STATIC(0x75bed4u,75b);
}
B42c25a:L42c25a:{c.instructions+=1;NFSU2_TR(0x42c25a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x734ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c260:L42c260:{c.instructions+=5;NFSU2_TR(0x42c260);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c263:{NFSU2_TR(0x42c263);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c266:{NFSU2_TR(0x42c266);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c268:{NFSU2_TR(0x42c268);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c269:{NFSU2_TR(0x42c269);
if(r1(R+518)){{goto L42c281;}}
}
B42c26b:L42c26b:{c.instructions+=1;NFSU2_TR(0x42c26b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c270ull));
TAIL_STATIC(0x5ee250u,5ee);
}
B42c270:L42c270:{c.instructions+=2;NFSU2_TR(0x42c270);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c272:{NFSU2_TR(0x42c272);
if(r1(R+518)){{goto L42c281;}}
}
B42c274:L42c274:{c.instructions+=2;NFSU2_TR(0x42c274);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c276:{NFSU2_TR(0x42c276);
if(r1(R+518)){{goto L42c2e3;}}
}
B42c278:L42c278:{c.instructions+=3;NFSU2_TR(0x42c278);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c27b:{NFSU2_TR(0x42c27b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42c27f:{NFSU2_TR(0x42c27f);
{goto L42c2da;}
}
B42c281:L42c281:{c.instructions+=4;NFSU2_TR(0x42c281);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x734ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c287:{NFSU2_TR(0x42c287);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c289:{NFSU2_TR(0x42c289);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x734ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42c28f:{NFSU2_TR(0x42c28f);
if(r1(R+518)){{goto L42c2e3;}}
}
B42c291:L42c291:{c.instructions+=2;NFSU2_TR(0x42c291);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c296:{NFSU2_TR(0x42c296);
if(r1(R+518)){{goto L42c2e3;}}
}
B42c298:L42c298:{c.instructions+=4;NFSU2_TR(0x42c298);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c29c:{NFSU2_TR(0x42c29c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c29d:{NFSU2_TR(0x42c29d);
__builtin_memmove((R+4),(R+28),4);
}
B42c29f:{NFSU2_TR(0x42c29f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c2a4ull));
TAIL_STATIC(0x577310u,577);
}
B42c2a4:L42c2a4:{c.instructions+=2;NFSU2_TR(0x42c2a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c2a6:{NFSU2_TR(0x42c2a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c2cf;}}
}
B42c2a8:L42c2a8:{c.instructions+=3;NFSU2_TR(0x42c2a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c2ab:{NFSU2_TR(0x42c2ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B42c2b2:{NFSU2_TR(0x42c2b2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42c2bc;}}
}
B42c2b4:L42c2b4:{c.instructions+=2;NFSU2_TR(0x42c2b4);
u8 U[4];
w4(U+0,u32(0xfa0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B42c2ba:{NFSU2_TR(0x42c2ba);
{goto L42c2e3;}
}
B42c2bc:L42c2bc:{c.instructions+=2;NFSU2_TR(0x42c2bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c2be:{NFSU2_TR(0x42c2be);
if(r1(R+518)){{goto L42c2e3;}}
}
B42c2c0:L42c2c0:{c.instructions+=2;NFSU2_TR(0x42c2c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c2c1:{NFSU2_TR(0x42c2c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c2c6ull));
TAIL_STATIC(0x5f4400u,5f4);
}
B42c2c6:L42c2c6:{c.instructions+=4;NFSU2_TR(0x42c2c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c2c9:{NFSU2_TR(0x42c2c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42c2cc:{NFSU2_TR(0x42c2cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c2cd:{NFSU2_TR(0x42c2cd);
{goto L42c2de;}
}
B42c2cf:L42c2cf:{c.instructions+=3;NFSU2_TR(0x42c2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c2d2:{NFSU2_TR(0x42c2d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42c2d6:{NFSU2_TR(0x42c2d6);
if(r1(R+518)){{goto L42c2e3;}}
}
B42c2d8:L42c2d8:{c.instructions+=1;NFSU2_TR(0x42c2d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c2da:L42c2da:{c.instructions+=1;NFSU2_TR(0x42c2da);
if(r1(R+518)){{goto L42c2e3;}}
}
B42c2dc:L42c2dc:{c.instructions+=1;NFSU2_TR(0x42c2dc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c2de:L42c2de:{c.instructions+=1;NFSU2_TR(0x42c2de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c2e3ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B42c2e3:L42c2e3:{c.instructions+=2;NFSU2_TR(0x42c2e3);
__builtin_memmove((R+4),gp(0x890118),4);
}
B42c2e9:{NFSU2_TR(0x42c2e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c2eeull));
TAIL_STATIC(0x5eeef0u,5ee);
}
B42c2ee:L42c2ee:{c.instructions+=2;NFSU2_TR(0x42c2ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c2f0:{NFSU2_TR(0x42c2f0);
if(r1(R+518)){{goto L42c654;}}
}
B42c2f6:L42c2f6:{c.instructions+=3;NFSU2_TR(0x42c2f6);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B42c2fb:{NFSU2_TR(0x42c2fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c2fd:{NFSU2_TR(0x42c2fd);
if(r1(R+518)){{goto L42c44d;}}
}
B42c303:L42c303:{c.instructions+=3;NFSU2_TR(0x42c303);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B42c308:{NFSU2_TR(0x42c308);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c30a:{NFSU2_TR(0x42c30a);
if(r1(R+518)){{goto L42c44d;}}
}
B42c310:L42c310:{c.instructions+=2;NFSU2_TR(0x42c310);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42c313:{NFSU2_TR(0x42c313);
if(r1(R+518)){{goto L42c44d;}}
}
B42c319:L42c319:{c.instructions+=4;NFSU2_TR(0x42c319);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c31f:{NFSU2_TR(0x42c31f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c321:{NFSU2_TR(0x42c321);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42c327:{NFSU2_TR(0x42c327);
if(r1(R+518)){{goto L42c36d;}}
}
B42c329:L42c329:{c.instructions+=2;NFSU2_TR(0x42c329);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c32e:{NFSU2_TR(0x42c32e);
if(r1(R+518)){{goto L42c36d;}}
}
B42c330:L42c330:{c.instructions+=4;NFSU2_TR(0x42c330);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c334:{NFSU2_TR(0x42c334);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c335:{NFSU2_TR(0x42c335);
__builtin_memmove((R+4),(R+28),4);
}
B42c337:{NFSU2_TR(0x42c337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c33cull));
TAIL_STATIC(0x577310u,577);
}
B42c33c:L42c33c:{c.instructions+=2;NFSU2_TR(0x42c33c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c33e:{NFSU2_TR(0x42c33e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c36d;}}
}
B42c340:L42c340:{c.instructions+=4;NFSU2_TR(0x42c340);
__builtin_memmove((R+0),gp(0x7e9578),4);
}
B42c345:{NFSU2_TR(0x42c345);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c346:{NFSU2_TR(0x42c346);
__builtin_memmove((R+4),(R+28),4);
}
B42c348:{NFSU2_TR(0x42c348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c34dull));
TAIL_STATIC(0x401840u,401);
}
B42c34d:L42c34d:{c.instructions+=9;NFSU2_TR(0x42c34d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c350:{NFSU2_TR(0x42c350);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c353:{NFSU2_TR(0x42c353);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42c356:{NFSU2_TR(0x42c356);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c357:{NFSU2_TR(0x42c357);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c35d:{NFSU2_TR(0x42c35d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42c35f:{NFSU2_TR(0x42c35f);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42c365:{NFSU2_TR(0x42c365);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42c368:{NFSU2_TR(0x42c368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c36dull));
TAIL_STATIC(0x576970u,576);
}
B42c36d:L42c36d:{c.instructions+=3;NFSU2_TR(0x42c36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c373:{NFSU2_TR(0x42c373);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c375:{NFSU2_TR(0x42c375);
if(r1(R+518)){{goto L42c44d;}}
}
B42c37b:L42c37b:{c.instructions+=2;NFSU2_TR(0x42c37b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42c382:{NFSU2_TR(0x42c382);
if(r1(R+518)){{goto L42c44d;}}
}
B42c388:L42c388:{c.instructions+=3;NFSU2_TR(0x42c388);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c38b:{NFSU2_TR(0x42c38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c38e:{NFSU2_TR(0x42c38e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c393ull));
TAIL_STATIC(0x5ee250u,5ee);
}
B42c393:L42c393:{c.instructions+=2;NFSU2_TR(0x42c393);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c395:{NFSU2_TR(0x42c395);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c44d;}}
}
B42c39b:L42c39b:{c.instructions+=3;NFSU2_TR(0x42c39b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x738ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42c3a1:{NFSU2_TR(0x42c3a1);
__builtin_memmove((R+4),(R+28),4);
}
B42c3a3:{NFSU2_TR(0x42c3a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c3a8ull));
TAIL_STATIC(0x401820u,401);
}
B42c3a8:L42c3a8:{c.instructions+=2;NFSU2_TR(0x42c3a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c3aa:{NFSU2_TR(0x42c3aa);
if(r1(R+518)){{goto L42c44d;}}
}
B42c3b0:L42c3b0:{c.instructions+=4;NFSU2_TR(0x42c3b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c3b4:{NFSU2_TR(0x42c3b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c3b5:{NFSU2_TR(0x42c3b5);
__builtin_memmove((R+4),(R+28),4);
}
B42c3b7:{NFSU2_TR(0x42c3b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c3bcull));
TAIL_STATIC(0x577310u,577);
}
B42c3bc:L42c3bc:{c.instructions+=2;NFSU2_TR(0x42c3bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c3be:{NFSU2_TR(0x42c3be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c44d;}}
}
B42c3c4:L42c3c4:{c.instructions+=4;NFSU2_TR(0x42c3c4);
__builtin_memmove((R+8),gp(0x7834a4),4);
}
B42c3ca:{NFSU2_TR(0x42c3ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c3cb:{NFSU2_TR(0x42c3cb);
__builtin_memmove((R+4),(R+28),4);
}
B42c3cd:{NFSU2_TR(0x42c3cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c3d2ull));
TAIL_STATIC(0x401840u,401);
}
B42c3d2:L42c3d2:{c.instructions+=9;NFSU2_TR(0x42c3d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c3d5:{NFSU2_TR(0x42c3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c3d8:{NFSU2_TR(0x42c3d8);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42c3db:{NFSU2_TR(0x42c3db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c3dc:{NFSU2_TR(0x42c3dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x73cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c3e2:{NFSU2_TR(0x42c3e2);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42c3e4:{NFSU2_TR(0x42c3e4);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42c3ea:{NFSU2_TR(0x42c3ea);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42c3ed:{NFSU2_TR(0x42c3ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c3f2ull));
TAIL_STATIC(0x576970u,576);
}
B42c3f2:L42c3f2:{c.instructions+=5;NFSU2_TR(0x42c3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c3f5:{NFSU2_TR(0x42c3f5);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42c3fb:{NFSU2_TR(0x42c3fb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
}
B42c3fe:{NFSU2_TR(0x42c3fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c3ff:{NFSU2_TR(0x42c3ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c404ull));
TAIL_STATIC(0x5f1160u,5f1);
}
B42c404:L42c404:{c.instructions+=4;NFSU2_TR(0x42c404);
{u32 ea_=u32(u32(7877908u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42c40a:{NFSU2_TR(0x42c40a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42c40c:{NFSU2_TR(0x42c40c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42c40f:{NFSU2_TR(0x42c40f);
if(r1(R+514)){{goto L42c415;}}
}
B42c411:L42c411:{c.instructions+=2;NFSU2_TR(0x42c411);
w1(R+12,u8(0x1ull));
}
B42c413:{NFSU2_TR(0x42c413);
{goto L42c417;}
}
B42c415:L42c415:{c.instructions+=1;NFSU2_TR(0x42c415);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B42c417:L42c417:{c.instructions+=2;NFSU2_TR(0x42c417);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c41a:{NFSU2_TR(0x42c41a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c41full));
TAIL_STATIC(0x5ebfa0u,5eb);
}
B42c41f:L42c41f:{c.instructions+=2;NFSU2_TR(0x42c41f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c421:{NFSU2_TR(0x42c421);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c44d;}}
}
B42c423:L42c423:{c.instructions+=4;NFSU2_TR(0x42c423);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x73cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c429:{NFSU2_TR(0x42c429);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42c42c:{NFSU2_TR(0x42c42c);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+4))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B42c42f:{NFSU2_TR(0x42c42f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c44d;}}
}
B42c431:L42c431:{c.instructions+=5;NFSU2_TR(0x42c431);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42c434:{NFSU2_TR(0x42c434);
{u32 ea_=u32(u32(7877792u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42c43a:{NFSU2_TR(0x42c43a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42c43c:{NFSU2_TR(0x42c43c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42c43f:{NFSU2_TR(0x42c43f);
if(r1(R+514)){{goto L42c44d;}}
}
B42c441:L42c441:{c.instructions+=2;NFSU2_TR(0x42c441);
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
B42c443:{NFSU2_TR(0x42c443);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c44d;}}
}
B42c445:L42c445:{c.instructions+=2;NFSU2_TR(0x42c445);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c448:{NFSU2_TR(0x42c448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c44dull));
TAIL_STATIC(0x5ebf60u,5eb);
}
B42c44d:L42c44d:{c.instructions+=3;NFSU2_TR(0x42c44d);
__builtin_memmove((R+0),gp(0x81cb94),4);
}
B42c452:{NFSU2_TR(0x42c452);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c454:{NFSU2_TR(0x42c454);
if(r1(R+518)){{goto L42c648;}}
}
B42c45a:L42c45a:{c.instructions+=3;NFSU2_TR(0x42c45a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c45d:{NFSU2_TR(0x42c45d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c45f:{NFSU2_TR(0x42c45f);
if(r1(R+518)){{goto L42c648;}}
}
B42c465:L42c465:{c.instructions+=5;NFSU2_TR(0x42c465);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c468:{NFSU2_TR(0x42c468);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B42c46e:{NFSU2_TR(0x42c46e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B42c475:{NFSU2_TR(0x42c475);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c477:{NFSU2_TR(0x42c477);
if(r1(R+518)){{goto L42c483;}}
}
B42c479:L42c479:{c.instructions+=3;NFSU2_TR(0x42c479);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B42c47d:{NFSU2_TR(0x42c47d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c481:{NFSU2_TR(0x42c481);
{goto L42c48b;}
}
B42c483:L42c483:{c.instructions+=1;NFSU2_TR(0x42c483);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c48b:L42c48b:{c.instructions+=2;NFSU2_TR(0x42c48b);
__builtin_memmove((R+4),(R+24),4);
}
B42c48d:{NFSU2_TR(0x42c48d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c492ull));
TAIL_STATIC(0x40f6b0u,40f);
}
B42c492:L42c492:{c.instructions+=5;NFSU2_TR(0x42c492);
__builtin_memmove((R+12),(R+0),4);
}
B42c494:{NFSU2_TR(0x42c494);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42c499:{NFSU2_TR(0x42c499);
w4(R+28,u32(0x7e9580ull));
}
B42c49e:{NFSU2_TR(0x42c49e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c49f:{NFSU2_TR(0x42c49f);
}
B42c4a0:L42c4a0:{c.instructions+=3;NFSU2_TR(0x42c4a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42c4a2:{NFSU2_TR(0x42c4a2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B42c4a4:{NFSU2_TR(0x42c4a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42c4eb;}}
}
B42c4a6:L42c4a6:{c.instructions+=3;NFSU2_TR(0x42c4a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B42c4ad:{NFSU2_TR(0x42c4ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c4af:{NFSU2_TR(0x42c4af);
if(r1(R+518)){{goto L42c4eb;}}
}
B42c4b1:L42c4b1:{c.instructions+=3;NFSU2_TR(0x42c4b1);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42c4b5:{NFSU2_TR(0x42c4b5);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42c4ba:{NFSU2_TR(0x42c4ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c4eb;}}
}
B42c4bc:L42c4bc:{c.instructions+=11;NFSU2_TR(0x42c4bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c4bf:{NFSU2_TR(0x42c4bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c4c2:{NFSU2_TR(0x42c4c2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42c4c4:{NFSU2_TR(0x42c4c4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B42c4c6:{NFSU2_TR(0x42c4c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B42c4c9:{NFSU2_TR(0x42c4c9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B42c4ca:{NFSU2_TR(0x42c4ca);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B42c4cc:{NFSU2_TR(0x42c4cc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B42c4d0:{NFSU2_TR(0x42c4d0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B42c4d1:{NFSU2_TR(0x42c4d1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42c4d3:{NFSU2_TR(0x42c4d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42c4d7;}}
}
B42c4d5:L42c4d5:{c.instructions+=1;NFSU2_TR(0x42c4d5);
__builtin_memmove((R+4),(R+8),4);
}
B42c4d7:L42c4d7:{c.instructions+=2;NFSU2_TR(0x42c4d7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42c4d9:{NFSU2_TR(0x42c4d9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42c4dd;}}
}
B42c4db:L42c4db:{c.instructions+=1;NFSU2_TR(0x42c4db);
__builtin_memmove((R+0),(R+12),4);
}
B42c4dd:L42c4dd:{c.instructions+=2;NFSU2_TR(0x42c4dd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42c4df:{NFSU2_TR(0x42c4df);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42c4e3;}}
}
B42c4e1:L42c4e1:{c.instructions+=1;NFSU2_TR(0x42c4e1);
__builtin_memmove((R+0),(R+4),4);
}
B42c4e3:L42c4e3:{c.instructions+=2;NFSU2_TR(0x42c4e3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42c4e5:{NFSU2_TR(0x42c4e5);
if(r1(R+518)){{goto L42c647;}}
}
B42c4eb:L42c4eb:{c.instructions+=3;NFSU2_TR(0x42c4eb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B42c4ee:{NFSU2_TR(0x42c4ee);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7e95c0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7e95c0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42c4f4:{NFSU2_TR(0x42c4f4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42c4a0u);}goto L42c4a0;}}
}
B42c4f6:L42c4f6:{c.instructions+=3;NFSU2_TR(0x42c4f6);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42c4fa:{NFSU2_TR(0x42c4fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c4fc:{NFSU2_TR(0x42c4fc);
if(r1(R+518)){{goto L42c647;}}
}
B42c502:L42c502:{c.instructions+=3;NFSU2_TR(0x42c502);
__builtin_memmove((R+0),gp(0x7e9580),4);
}
B42c507:{NFSU2_TR(0x42c507);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B42c509:{NFSU2_TR(0x42c509);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42c518;}}
}
B42c50b:L42c50b:{c.instructions+=3;NFSU2_TR(0x42c50b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B42c512:{NFSU2_TR(0x42c512);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c516:{NFSU2_TR(0x42c516);
{goto L42c520;}
}
B42c518:L42c518:{c.instructions+=1;NFSU2_TR(0x42c518);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c520:L42c520:{c.instructions+=14;NFSU2_TR(0x42c520);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c524:{NFSU2_TR(0x42c524);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B42c528:{NFSU2_TR(0x42c528);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42c52b:{NFSU2_TR(0x42c52b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B42c52f:{NFSU2_TR(0x42c52f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B42c532:{NFSU2_TR(0x42c532);
__builtin_memmove((R+0),gp(0x7e9584),4);
}
B42c537:{NFSU2_TR(0x42c537);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42c539:{NFSU2_TR(0x42c539);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff38ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B42c540:{NFSU2_TR(0x42c540);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c542:{NFSU2_TR(0x42c542);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B42c545:{NFSU2_TR(0x42c545);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B42c546:{NFSU2_TR(0x42c546);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B42c548:{NFSU2_TR(0x42c548);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42c54a:{NFSU2_TR(0x42c54a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42c54e;}}
}
B42c54c:L42c54c:{c.instructions+=1;NFSU2_TR(0x42c54c);
__builtin_memmove((R+0),(R+4),4);
}
B42c54e:L42c54e:{c.instructions+=6;NFSU2_TR(0x42c54e);
__builtin_memmove((R+8),gp(0x7e958c),4);
}
B42c554:{NFSU2_TR(0x42c554);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42c556:{NFSU2_TR(0x42c556);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c558:{NFSU2_TR(0x42c558);
__builtin_memmove((R+12),(R+518),1);
}
B42c55b:{NFSU2_TR(0x42c55b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42c55e:{NFSU2_TR(0x42c55e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c580;}}
}
B42c560:L42c560:{c.instructions+=11;NFSU2_TR(0x42c560);
__builtin_memmove((R+8),gp(0x7e9588),4);
}
B42c566:{NFSU2_TR(0x42c566);
w4(R+0,u32(0x64ull));
}
B42c56b:{NFSU2_TR(0x42c56b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B42c56d:{NFSU2_TR(0x42c56d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B42c570:{NFSU2_TR(0x42c570);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42c572:{NFSU2_TR(0x42c572);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c574:{NFSU2_TR(0x42c574);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B42c577:{NFSU2_TR(0x42c577);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B42c578:{NFSU2_TR(0x42c578);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B42c57a:{NFSU2_TR(0x42c57a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42c57c:{NFSU2_TR(0x42c57c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42c580;}}
}
B42c57e:L42c57e:{c.instructions+=1;NFSU2_TR(0x42c57e);
__builtin_memmove((R+0),(R+4),4);
}
B42c580:L42c580:{c.instructions+=6;NFSU2_TR(0x42c580);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c584:{NFSU2_TR(0x42c584);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B42c587:{NFSU2_TR(0x42c587);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B42c58e:{NFSU2_TR(0x42c58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c591:{NFSU2_TR(0x42c591);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B42c594:{NFSU2_TR(0x42c594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c599ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B42c599:L42c599:{c.instructions+=10;NFSU2_TR(0x42c599);
__builtin_memmove((R+20),gp(0x89e7a4),4);
}
B42c59f:{NFSU2_TR(0x42c59f);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B42c5a4:{NFSU2_TR(0x42c5a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B42c5a7:{NFSU2_TR(0x42c5a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c5ab:{NFSU2_TR(0x42c5ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c5ac:{NFSU2_TR(0x42c5ac);
__builtin_memmove((R+4),(R+28),4);
}
B42c5ae:{NFSU2_TR(0x42c5ae);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42c5b2:{NFSU2_TR(0x42c5b2);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42c5b8:{NFSU2_TR(0x42c5b8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42c5bc:{NFSU2_TR(0x42c5bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c5c1ull));
TAIL_STATIC(0x401c40u,401);
}
B42c5c1:L42c5c1:{c.instructions+=4;NFSU2_TR(0x42c5c1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42c5c5:{NFSU2_TR(0x42c5c5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42c5c8:{NFSU2_TR(0x42c5c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c5d0:{NFSU2_TR(0x42c5d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c5e6;}}
}
B42c5d2:L42c5d2:{c.instructions+=3;NFSU2_TR(0x42c5d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c5d3:{NFSU2_TR(0x42c5d3);
__builtin_memmove((R+4),(R+28),4);
}
B42c5d5:{NFSU2_TR(0x42c5d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c5daull));
TAIL_STATIC(0x5e2da0u,5e2);
}
B42c5da:L42c5da:{c.instructions+=2;NFSU2_TR(0x42c5da);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42c5de:{NFSU2_TR(0x42c5de);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c5e6:L42c5e6:{c.instructions+=4;NFSU2_TR(0x42c5e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c5e9:{NFSU2_TR(0x42c5e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c5ec:{NFSU2_TR(0x42c5ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B42c5ef:{NFSU2_TR(0x42c5ef);
w4(R+4,u32(0x10ull));
}
B42c5f4:L42c5f4:{c.instructions+=4;NFSU2_TR(0x42c5f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffcull))));
s4(u32(r4(R+0)),r4(U+0));
}
B42c5f7:{NFSU2_TR(0x42c5f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B42c5fa:{NFSU2_TR(0x42c5fa);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B42c5fb:{NFSU2_TR(0x42c5fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42c5f4u);}goto L42c5f4;}}
}
B42c5fd:L42c5fd:{c.instructions+=14;NFSU2_TR(0x42c5fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c601:{NFSU2_TR(0x42c601);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c605:{NFSU2_TR(0x42c605);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c609:{NFSU2_TR(0x42c609);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c60a:{NFSU2_TR(0x42c60a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c60e:{NFSU2_TR(0x42c60e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c610:{NFSU2_TR(0x42c610);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c612:{NFSU2_TR(0x42c612);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c613:{NFSU2_TR(0x42c613);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c615:{NFSU2_TR(0x42c615);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c616:{NFSU2_TR(0x42c616);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c617:{NFSU2_TR(0x42c617);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c618:{NFSU2_TR(0x42c618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c61b:{NFSU2_TR(0x42c61b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c620ull));
TAIL_STATIC(0x5fbed0u,5fb);
}
B42c620:L42c620:{c.instructions+=4;NFSU2_TR(0x42c620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c623:{NFSU2_TR(0x42c623);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c626:{NFSU2_TR(0x42c626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42c628:{NFSU2_TR(0x42c628);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c62bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42c62b:L42c62b:{c.instructions+=2;NFSU2_TR(0x42c62b);
__builtin_memmove((R+4),(R+0),4);
}
B42c62d:{NFSU2_TR(0x42c62d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c632ull));
TAIL_STATIC(0x411be0u,411);
}
B42c632:L42c632:{c.instructions+=6;NFSU2_TR(0x42c632);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c635:{NFSU2_TR(0x42c635);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c638:{NFSU2_TR(0x42c638);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c63a:{NFSU2_TR(0x42c63a);
__builtin_memmove((R+4),(R+518),1);
}
B42c63d:{NFSU2_TR(0x42c63d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42c640:{NFSU2_TR(0x42c640);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42c647:L42c647:{c.instructions+=1;NFSU2_TR(0x42c647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42c648:L42c648:{c.instructions+=4;NFSU2_TR(0x42c648);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c64c:{NFSU2_TR(0x42c64c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c64d:{NFSU2_TR(0x42c64d);
__builtin_memmove((R+4),(R+24),4);
}
B42c64f:{NFSU2_TR(0x42c64f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c654ull));
TAIL_STATIC(0x42abd0u,42a);
}
B42c654:L42c654:{c.instructions+=5;NFSU2_TR(0x42c654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42c655:{NFSU2_TR(0x42c655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42c656:{NFSU2_TR(0x42c656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42c657:{NFSU2_TR(0x42c657);
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
B42c65a:{NFSU2_TR(0x42c65a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42c660:L42c660:{c.instructions+=2;NFSU2_TR(0x42c660);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c662:{NFSU2_TR(0x42c662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c667ull));
TAIL_STATIC(0x42aa20u,42a);
}
B42c667:L42c667:{c.instructions+=1;NFSU2_TR(0x42c667);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42c670:L42c670:{c.instructions+=15;NFSU2_TR(0x42c670);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c671:{NFSU2_TR(0x42c671);
__builtin_memmove((R+20),(R+16),4);
}
B42c673:{NFSU2_TR(0x42c673);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B42c676:{NFSU2_TR(0x42c676);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c678:{NFSU2_TR(0x42c678);
u8 U[4];
w4(U+0,u32(0x771b44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c67d:{NFSU2_TR(0x42c67d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c683:{NFSU2_TR(0x42c683);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c684:{NFSU2_TR(0x42c684);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c68b:{NFSU2_TR(0x42c68b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B42c68e:{NFSU2_TR(0x42c68e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c68f:{NFSU2_TR(0x42c68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42c692:{NFSU2_TR(0x42c692);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c694:{NFSU2_TR(0x42c694);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c695:{NFSU2_TR(0x42c695);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c696:{NFSU2_TR(0x42c696);
if(r1(R+518)){{goto L42c6ad;}}
}
B42c698:L42c698:{c.instructions+=5;NFSU2_TR(0x42c698);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c69b:{NFSU2_TR(0x42c69b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B42c6a0:{NFSU2_TR(0x42c6a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B42c6a7:{NFSU2_TR(0x42c6a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c6ab:{NFSU2_TR(0x42c6ab);
{goto L42c6b5;}
}
B42c6ad:L42c6ad:{c.instructions+=1;NFSU2_TR(0x42c6ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c6b5:L42c6b5:{c.instructions+=3;NFSU2_TR(0x42c6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42c6b8:{NFSU2_TR(0x42c6b8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42c6bb:{NFSU2_TR(0x42c6bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42c6c7;}}
}
B42c6bd:L42c6bd:{c.instructions+=3;NFSU2_TR(0x42c6bd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42c6c0:{NFSU2_TR(0x42c6c0);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42c6c5:{NFSU2_TR(0x42c6c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42c6cc;}}
}
B42c6c7:L42c6c7:{c.instructions+=1;NFSU2_TR(0x42c6c7);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42c6cc:L42c6cc:{c.instructions+=3;NFSU2_TR(0x42c6cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c6cd:{NFSU2_TR(0x42c6cd);
__builtin_memmove((R+4),(R+12),4);
}
B42c6cf:{NFSU2_TR(0x42c6cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c6d4ull));
TAIL_STATIC(0x5e2da0u,5e2);
}
B42c6d4:L42c6d4:{c.instructions+=4;NFSU2_TR(0x42c6d4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42c6d8:{NFSU2_TR(0x42c6d8);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42c6dc:{NFSU2_TR(0x42c6dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c6de:{NFSU2_TR(0x42c6de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c6e3;}}
}
B42c6e0:L42c6e0:{c.instructions+=1;NFSU2_TR(0x42c6e0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B42c6e3:L42c6e3:{c.instructions+=6;NFSU2_TR(0x42c6e3);
__builtin_memmove((R+0),gp(0x89e7f4),4);
}
B42c6e8:{NFSU2_TR(0x42c6e8);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B42c6eb:{NFSU2_TR(0x42c6eb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42c6ee:{NFSU2_TR(0x42c6ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c6f2:{NFSU2_TR(0x42c6f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c6f6:{NFSU2_TR(0x42c6f6);
if(r1(R+518)){{goto L42c712;}}
}
B42c6f8:L42c6f8:{c.instructions+=2;NFSU2_TR(0x42c6f8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42c6f9:{NFSU2_TR(0x42c6f9);
if(r1(R+518)){{goto L42c708;}}
}
B42c6fb:L42c6fb:{c.instructions+=2;NFSU2_TR(0x42c6fb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42c6fc:{NFSU2_TR(0x42c6fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c71a;}}
}
B42c6fe:L42c6fe:{c.instructions+=2;NFSU2_TR(0x42c6fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c706:{NFSU2_TR(0x42c706);
{goto L42c71a;}
}
B42c708:L42c708:{c.instructions+=2;NFSU2_TR(0x42c708);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c710:{NFSU2_TR(0x42c710);
{goto L42c71a;}
}
B42c712:L42c712:{c.instructions+=1;NFSU2_TR(0x42c712);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c71a:L42c71a:{c.instructions+=2;NFSU2_TR(0x42c71a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c71c:{NFSU2_TR(0x42c71c);
if(r1(R+518)){{goto L42c754;}}
}
B42c71e:L42c71e:{c.instructions+=13;NFSU2_TR(0x42c71e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B42c722:{NFSU2_TR(0x42c722);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B42c726:{NFSU2_TR(0x42c726);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c72a:{NFSU2_TR(0x42c72a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42c72e:{NFSU2_TR(0x42c72e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c732:{NFSU2_TR(0x42c732);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42c738:{NFSU2_TR(0x42c738);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42c73c:{NFSU2_TR(0x42c73c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c740:{NFSU2_TR(0x42c740);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42c744:{NFSU2_TR(0x42c744);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42c74a:{NFSU2_TR(0x42c74a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42c74e:{NFSU2_TR(0x42c74e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c752:{NFSU2_TR(0x42c752);
{goto L42c768;}
}
B42c754:L42c754:{c.instructions+=4;NFSU2_TR(0x42c754);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42c758:{NFSU2_TR(0x42c758);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c759:{NFSU2_TR(0x42c759);
__builtin_memmove((R+4),(R+12),4);
}
B42c75b:{NFSU2_TR(0x42c75b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c760ull));
TAIL_STATIC(0x401aa0u,401);
}
B42c760:L42c760:{c.instructions+=2;NFSU2_TR(0x42c760);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c764:{NFSU2_TR(0x42c764);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c768:L42c768:{c.instructions+=3;NFSU2_TR(0x42c768);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c769:{NFSU2_TR(0x42c769);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c76a:{NFSU2_TR(0x42c76a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c76full));
TAIL_STATIC(0x43e6d0u,43e);
}
B42c76f:L42c76f:{c.instructions+=9;NFSU2_TR(0x42c76f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42c772:{NFSU2_TR(0x42c772);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42c776:{NFSU2_TR(0x42c776);
__builtin_memmove((R+28),(R+0),4);
}
B42c778:{NFSU2_TR(0x42c778);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c77c:{NFSU2_TR(0x42c77c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c77d:{NFSU2_TR(0x42c77d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c77f:{NFSU2_TR(0x42c77f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c780:{NFSU2_TR(0x42c780);
__builtin_memmove((R+4),(R+12),4);
}
B42c782:{NFSU2_TR(0x42c782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c787ull));
TAIL_STATIC(0x5dd360u,5dd);
}
B42c787:L42c787:{c.instructions+=2;NFSU2_TR(0x42c787);
u8 U[4];
w4(U+0,u32(0x9e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c78c:{NFSU2_TR(0x42c78c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c791ull));
TAIL_STATIC(0x575620u,575);
}
B42c791:L42c791:{c.instructions+=5;NFSU2_TR(0x42c791);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42c794:{NFSU2_TR(0x42c794);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c798:{NFSU2_TR(0x42c798);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c79a:{NFSU2_TR(0x42c79a);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c7a2:{NFSU2_TR(0x42c7a2);
if(r1(R+518)){{goto L42c7c3;}}
}
B42c7a4:L42c7a4:{c.instructions+=11;NFSU2_TR(0x42c7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c7a7:{NFSU2_TR(0x42c7a7);
__builtin_memmove((R+4),(R+8),4);
}
B42c7a9:{NFSU2_TR(0x42c7a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c7aa:{NFSU2_TR(0x42c7aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c7ad:{NFSU2_TR(0x42c7ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c7b1:{NFSU2_TR(0x42c7b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c7b2:{NFSU2_TR(0x42c7b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42c7b6:{NFSU2_TR(0x42c7b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c7b7:{NFSU2_TR(0x42c7b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c7b8:{NFSU2_TR(0x42c7b8);
__builtin_memmove((R+4),(R+0),4);
}
B42c7ba:{NFSU2_TR(0x42c7ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c7bfull));
TAIL_STATIC(0x604260u,604);
}
B42c7bf:L42c7bf:{c.instructions+=2;NFSU2_TR(0x42c7bf);
__builtin_memmove((R+28),(R+0),4);
}
B42c7c1:{NFSU2_TR(0x42c7c1);
{goto L42c7c5;}
}
B42c7c3:L42c7c3:{c.instructions+=1;NFSU2_TR(0x42c7c3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42c7c5:L42c7c5:{c.instructions+=4;NFSU2_TR(0x42c7c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c7c7:{NFSU2_TR(0x42c7c7);
__builtin_memmove((R+4),(R+28),4);
}
B42c7c9:{NFSU2_TR(0x42c7c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c7cd:{NFSU2_TR(0x42c7cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c7d2ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B42c7d2:L42c7d2:{c.instructions+=3;NFSU2_TR(0x42c7d2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c7d4:{NFSU2_TR(0x42c7d4);
__builtin_memmove((R+4),(R+28),4);
}
B42c7d6:{NFSU2_TR(0x42c7d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c7dbull));
TAIL_STATIC(0x5eba30u,5eb);
}
B42c7db:L42c7db:{c.instructions+=8;NFSU2_TR(0x42c7db);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42c7df:{NFSU2_TR(0x42c7df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42c7e2:{NFSU2_TR(0x42c7e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c7e6:{NFSU2_TR(0x42c7e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c7e7:{NFSU2_TR(0x42c7e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c7e8:{NFSU2_TR(0x42c7e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c7e9:{NFSU2_TR(0x42c7e9);
__builtin_memmove((R+4),(R+24),4);
}
B42c7eb:{NFSU2_TR(0x42c7eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c7f0ull));
TAIL_STATIC(0x4106c0u,410);
}
B42c7f0:L42c7f0:{c.instructions+=9;NFSU2_TR(0x42c7f0);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B42c7f4:{NFSU2_TR(0x42c7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c7fa:{NFSU2_TR(0x42c7fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42c7fc:{NFSU2_TR(0x42c7fc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B42c800:{NFSU2_TR(0x42c800);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B42c803:{NFSU2_TR(0x42c803);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c805:{NFSU2_TR(0x42c805);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42c808:{NFSU2_TR(0x42c808);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x799ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42c80e:{NFSU2_TR(0x42c80e);
if(r1(R+518)){{goto L42c816;}}
}
B42c810:L42c810:{c.instructions+=1;NFSU2_TR(0x42c810);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B42c816:L42c816:{c.instructions+=4;NFSU2_TR(0x42c816);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c819:{NFSU2_TR(0x42c819);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c81b:{NFSU2_TR(0x42c81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c821:{NFSU2_TR(0x42c821);
if(r1(R+518)){{goto L42c88c;}}
}
B42c823:L42c823:{c.instructions+=3;NFSU2_TR(0x42c823);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B42c829:{NFSU2_TR(0x42c829);
__builtin_memmove((R+4),(R+24),4);
}
B42c82b:{NFSU2_TR(0x42c82b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c830ull));
TAIL_STATIC(0x402070u,402);
}
B42c830:L42c830:{c.instructions+=3;NFSU2_TR(0x42c830);
__builtin_memmove((R+0),gp(0x81cb70),4);
}
B42c835:{NFSU2_TR(0x42c835);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c836:{NFSU2_TR(0x42c836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c83bull));
TAIL_STATIC(0x440e50u,440);
}
B42c83b:L42c83b:{c.instructions+=3;NFSU2_TR(0x42c83b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42c83e:{NFSU2_TR(0x42c83e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c840:{NFSU2_TR(0x42c840);
if(r1(R+518)){{goto L42c850;}}
}
B42c842:L42c842:{c.instructions+=3;NFSU2_TR(0x42c842);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c847:{NFSU2_TR(0x42c847);
__builtin_memmove((R+4),(R+0),4);
}
B42c849:{NFSU2_TR(0x42c849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c84eull));
TAIL_STATIC(0x40cb30u,40c);
}
B42c84e:L42c84e:{c.instructions+=1;NFSU2_TR(0x42c84e);
{goto L42c852;}
}
B42c850:L42c850:{c.instructions+=1;NFSU2_TR(0x42c850);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42c852:L42c852:{c.instructions+=3;NFSU2_TR(0x42c852);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c854:{NFSU2_TR(0x42c854);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c85a:{NFSU2_TR(0x42c85a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c8d0;}}
}
B42c85c:L42c85c:{c.instructions+=2;NFSU2_TR(0x42c85c);
__builtin_memmove((R+4),gp(0x81cb70),4);
}
B42c862:{NFSU2_TR(0x42c862);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c863:L42c863:{c.instructions+=1;NFSU2_TR(0x42c863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c868ull));
TAIL_STATIC(0x440e50u,440);
}
B42c868:L42c868:{c.instructions+=4;NFSU2_TR(0x42c868);
__builtin_memmove((R+12),(R+0),4);
}
B42c86a:{NFSU2_TR(0x42c86a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42c86d:{NFSU2_TR(0x42c86d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c86f:{NFSU2_TR(0x42c86f);
if(r1(R+518)){{goto L42c8c8;}}
}
B42c871:L42c871:{c.instructions+=3;NFSU2_TR(0x42c871);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c876:{NFSU2_TR(0x42c876);
__builtin_memmove((R+4),(R+12),4);
}
B42c878:{NFSU2_TR(0x42c878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c87dull));
TAIL_STATIC(0x40c960u,40c);
}
B42c87d:L42c87d:{c.instructions+=3;NFSU2_TR(0x42c87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c884:{NFSU2_TR(0x42c884);
u8 U[4];
w4(U+0,u32(0x784900ull));
s4(u32(r4(R+12)),r4(U+0));
}
B42c88a:{NFSU2_TR(0x42c88a);
{goto L42c8ca;}
}
B42c88c:L42c88c:{c.instructions+=2;NFSU2_TR(0x42c88c);
__builtin_memmove((R+4),(R+24),4);
}
B42c88e:{NFSU2_TR(0x42c88e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c893ull));
TAIL_STATIC(0x402070u,402);
}
B42c893:L42c893:{c.instructions+=3;NFSU2_TR(0x42c893);
__builtin_memmove((R+8),gp(0x81cb70),4);
}
B42c899:{NFSU2_TR(0x42c899);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c89a:{NFSU2_TR(0x42c89a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c89full));
TAIL_STATIC(0x440e50u,440);
}
B42c89f:L42c89f:{c.instructions+=3;NFSU2_TR(0x42c89f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42c8a2:{NFSU2_TR(0x42c8a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c8a4:{NFSU2_TR(0x42c8a4);
if(r1(R+518)){{goto L42c8b4;}}
}
B42c8a6:L42c8a6:{c.instructions+=3;NFSU2_TR(0x42c8a6);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c8ab:{NFSU2_TR(0x42c8ab);
__builtin_memmove((R+4),(R+0),4);
}
B42c8ad:{NFSU2_TR(0x42c8ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c8b2ull));
TAIL_STATIC(0x40caf0u,40c);
}
B42c8b2:L42c8b2:{c.instructions+=1;NFSU2_TR(0x42c8b2);
{goto L42c8b6;}
}
B42c8b4:L42c8b4:{c.instructions+=1;NFSU2_TR(0x42c8b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42c8b6:L42c8b6:{c.instructions+=3;NFSU2_TR(0x42c8b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42c8b8:{NFSU2_TR(0x42c8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c8be:{NFSU2_TR(0x42c8be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c8d0;}}
}
B42c8c0:L42c8c0:{c.instructions+=3;NFSU2_TR(0x42c8c0);
__builtin_memmove((R+0),gp(0x81cb70),4);
}
B42c8c5:{NFSU2_TR(0x42c8c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c8c6:{NFSU2_TR(0x42c8c6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42c863u);}goto L42c863;}
}
B42c8c8:L42c8c8:{c.instructions+=1;NFSU2_TR(0x42c8c8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42c8ca:L42c8ca:{c.instructions+=1;NFSU2_TR(0x42c8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c8d0:L42c8d0:{c.instructions+=2;NFSU2_TR(0x42c8d0);
__builtin_memmove((R+4),(R+24),4);
}
B42c8d2:{NFSU2_TR(0x42c8d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c8d7ull));
TAIL_STATIC(0x428490u,428);
}
B42c8d7:L42c8d7:{c.instructions+=5;NFSU2_TR(0x42c8d7);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42c8da:{NFSU2_TR(0x42c8da);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42c8e0:{NFSU2_TR(0x42c8e0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42c8e2:{NFSU2_TR(0x42c8e2);
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
B42c8e5:{NFSU2_TR(0x42c8e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c901;}}
}
B42c8e7:L42c8e7:{c.instructions+=7;NFSU2_TR(0x42c8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c8ea:{NFSU2_TR(0x42c8ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c8eb:{NFSU2_TR(0x42c8eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B42c8f1:{NFSU2_TR(0x42c8f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c8f2:{NFSU2_TR(0x42c8f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42c8f6:{NFSU2_TR(0x42c8f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c8f7:{NFSU2_TR(0x42c8f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c8fcull));
TAIL_STATIC(0x43cf90u,43c);
}
B42c8fc:L42c8fc:{c.instructions+=2;NFSU2_TR(0x42c8fc);
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
B42c8ff:{NFSU2_TR(0x42c8ff);
{goto L42c919;}
}
B42c901:L42c901:{c.instructions+=3;NFSU2_TR(0x42c901);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c909:{NFSU2_TR(0x42c909);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c911:{NFSU2_TR(0x42c911);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c919:L42c919:{c.instructions+=4;NFSU2_TR(0x42c919);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42c91d:{NFSU2_TR(0x42c91d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c91e:{NFSU2_TR(0x42c91e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42c921:{NFSU2_TR(0x42c921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c926ull));
TAIL_STATIC(0x592160u,592);
}
B42c926:L42c926:{c.instructions+=3;NFSU2_TR(0x42c926);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c928:{NFSU2_TR(0x42c928);
__builtin_memmove((R+4),(R+28),4);
}
B42c92a:{NFSU2_TR(0x42c92a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c92full));
TAIL_STATIC(0x5ed5c0u,5ed);
}
B42c92f:L42c92f:{c.instructions+=3;NFSU2_TR(0x42c92f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c931:{NFSU2_TR(0x42c931);
__builtin_memmove((R+4),(R+28),4);
}
B42c933:{NFSU2_TR(0x42c933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c938ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B42c938:L42c938:{c.instructions+=9;NFSU2_TR(0x42c938);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c93c:{NFSU2_TR(0x42c93c);
__builtin_memmove((R+0),(R+28),4);
}
B42c93e:{NFSU2_TR(0x42c93e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42c93f:{NFSU2_TR(0x42c93f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42c940:{NFSU2_TR(0x42c940);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c947:{NFSU2_TR(0x42c947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42c948:{NFSU2_TR(0x42c948);
__builtin_memmove((R+16),(R+20),4);
}
B42c94a:{NFSU2_TR(0x42c94a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42c94b:{NFSU2_TR(0x42c94b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42c950:L42c950:{c.instructions+=5;NFSU2_TR(0x42c950);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42c954:{NFSU2_TR(0x42c954);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42c956:{NFSU2_TR(0x42c956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B42c959:{NFSU2_TR(0x42c959);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42c95b:{NFSU2_TR(0x42c95b);
if(r1(R+518)){{goto L42c972;}}
}
B42c95d:L42c95d:{c.instructions+=5;NFSU2_TR(0x42c95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c960:{NFSU2_TR(0x42c960);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B42c965:{NFSU2_TR(0x42c965);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B42c96c:{NFSU2_TR(0x42c96c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B42c970:{NFSU2_TR(0x42c970);
{goto L42c976;}
}
B42c972:L42c972:{c.instructions+=1;NFSU2_TR(0x42c972);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B42c976:L42c976:{c.instructions+=7;NFSU2_TR(0x42c976);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c977:{NFSU2_TR(0x42c977);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c978:{NFSU2_TR(0x42c978);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c979:{NFSU2_TR(0x42c979);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c97a:{NFSU2_TR(0x42c97a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42c97e:{NFSU2_TR(0x42c97e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42c981:{NFSU2_TR(0x42c981);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42c98c;}}
}
B42c983:L42c983:{c.instructions+=2;NFSU2_TR(0x42c983);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42c986:{NFSU2_TR(0x42c986);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42c98c;}}
}
B42c988:L42c988:{c.instructions+=2;NFSU2_TR(0x42c988);
w1(R+12,u8(0x1ull));
}
B42c98a:{NFSU2_TR(0x42c98a);
{goto L42c98e;}
}
B42c98c:L42c98c:{c.instructions+=1;NFSU2_TR(0x42c98c);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B42c98e:L42c98e:{c.instructions+=4;NFSU2_TR(0x42c98e);
__builtin_memmove((R+0),gp(0x89e7f4),4);
}
B42c993:{NFSU2_TR(0x42c993);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42c995:{NFSU2_TR(0x42c995);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c99d:{NFSU2_TR(0x42c99d);
if(r1(R+518)){{goto L42c9b5;}}
}
B42c99f:L42c99f:{c.instructions+=2;NFSU2_TR(0x42c99f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42c9a0:{NFSU2_TR(0x42c9a0);
if(r1(R+518)){{goto L42c9ab;}}
}
B42c9a2:L42c9a2:{c.instructions+=2;NFSU2_TR(0x42c9a2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42c9a3:{NFSU2_TR(0x42c9a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42c9bd;}}
}
B42c9a5:L42c9a5:{c.instructions+=2;NFSU2_TR(0x42c9a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42c9a9:{NFSU2_TR(0x42c9a9);
{goto L42c9bd;}
}
B42c9ab:L42c9ab:{c.instructions+=2;NFSU2_TR(0x42c9ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c9b3:{NFSU2_TR(0x42c9b3);
{goto L42c9bd;}
}
B42c9b5:L42c9b5:{c.instructions+=1;NFSU2_TR(0x42c9b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c9bd:L42c9bd:{c.instructions+=4;NFSU2_TR(0x42c9bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42c9c1:{NFSU2_TR(0x42c9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42c9c4:{NFSU2_TR(0x42c9c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c9c5:{NFSU2_TR(0x42c9c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c9caull));
TAIL_STATIC(0x5e2da0u,5e2);
}
B42c9ca:L42c9ca:{c.instructions+=3;NFSU2_TR(0x42c9ca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42c9ce:{NFSU2_TR(0x42c9ce);
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
B42c9d0:{NFSU2_TR(0x42c9d0);
if(r1(R+518)){{goto L42c9dc;}}
}
B42c9d2:L42c9d2:{c.instructions+=2;NFSU2_TR(0x42c9d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c9da:{NFSU2_TR(0x42c9da);
{goto L42c9e7;}
}
B42c9dc:L42c9dc:{c.instructions+=2;NFSU2_TR(0x42c9dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42c9e4:{NFSU2_TR(0x42c9e4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0xfffffffcull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0xfffffffcull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42c9e7:L42c9e7:{c.instructions+=5;NFSU2_TR(0x42c9e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42c9eb:{NFSU2_TR(0x42c9eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42c9ed:{NFSU2_TR(0x42c9ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c9ee:{NFSU2_TR(0x42c9ee);
__builtin_memmove((R+4),(R+24),4);
}
B42c9f0:{NFSU2_TR(0x42c9f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c9f3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42c9f3:L42c9f3:{c.instructions+=4;NFSU2_TR(0x42c9f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42c9f5:{NFSU2_TR(0x42c9f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42c9f6:{NFSU2_TR(0x42c9f6);
__builtin_memmove((R+4),(R+24),4);
}
B42c9f8:{NFSU2_TR(0x42c9f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42c9fbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42c9fb:L42c9fb:{c.instructions+=10;NFSU2_TR(0x42c9fb);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42c9ff:{NFSU2_TR(0x42c9ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ca03:{NFSU2_TR(0x42ca03);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ca05:{NFSU2_TR(0x42ca05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B42ca08:{NFSU2_TR(0x42ca08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42ca0b:{NFSU2_TR(0x42ca0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ca11:{NFSU2_TR(0x42ca11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ca13:{NFSU2_TR(0x42ca13);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x799ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42ca19:{NFSU2_TR(0x42ca19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ca1f:{NFSU2_TR(0x42ca1f);
if(r1(R+518)){{goto L42ca27;}}
}
B42ca21:L42ca21:{c.instructions+=1;NFSU2_TR(0x42ca21);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B42ca27:L42ca27:{c.instructions+=4;NFSU2_TR(0x42ca27);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ca2b:{NFSU2_TR(0x42ca2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ca2d:{NFSU2_TR(0x42ca2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ca33:{NFSU2_TR(0x42ca33);
if(r1(R+518)){{goto L42ca3b;}}
}
B42ca35:L42ca35:{c.instructions+=1;NFSU2_TR(0x42ca35);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B42ca3b:L42ca3b:{c.instructions+=5;NFSU2_TR(0x42ca3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ca3d:{NFSU2_TR(0x42ca3d);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B42ca43:{NFSU2_TR(0x42ca43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ca49:{NFSU2_TR(0x42ca49);
__builtin_memmove((R+4),(R+24),4);
}
B42ca4b:{NFSU2_TR(0x42ca4b);
if(r1(R+518)){{goto L42ca51;}}
}
B42ca4d:L42ca4d:{c.instructions+=2;NFSU2_TR(0x42ca4d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca4f:{NFSU2_TR(0x42ca4f);
{goto L42ca53;}
}
B42ca51:L42ca51:{c.instructions+=1;NFSU2_TR(0x42ca51);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca53:L42ca53:{c.instructions+=1;NFSU2_TR(0x42ca53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ca58ull));
TAIL_STATIC(0x42aa20u,42a);
}
B42ca58:L42ca58:{c.instructions+=16;NFSU2_TR(0x42ca58);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ca5c:{NFSU2_TR(0x42ca5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ca60:{NFSU2_TR(0x42ca60);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ca64:{NFSU2_TR(0x42ca64);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca65:{NFSU2_TR(0x42ca65);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ca69:{NFSU2_TR(0x42ca69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca6a:{NFSU2_TR(0x42ca6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ca6e:{NFSU2_TR(0x42ca6e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca70:{NFSU2_TR(0x42ca70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca71:{NFSU2_TR(0x42ca71);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ca75:{NFSU2_TR(0x42ca75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca77:{NFSU2_TR(0x42ca77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca78:{NFSU2_TR(0x42ca78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca79:{NFSU2_TR(0x42ca79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca7a:{NFSU2_TR(0x42ca7a);
__builtin_memmove((R+4),(R+20),4);
}
B42ca7c:{NFSU2_TR(0x42ca7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ca81ull));
TAIL_STATIC(0x5fbed0u,5fb);
}
B42ca81:L42ca81:{c.instructions+=4;NFSU2_TR(0x42ca81);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca83:{NFSU2_TR(0x42ca83);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca85:{NFSU2_TR(0x42ca85);
__builtin_memmove((R+4),(R+20),4);
}
B42ca87:{NFSU2_TR(0x42ca87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ca8cull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B42ca8c:L42ca8c:{c.instructions+=3;NFSU2_TR(0x42ca8c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ca8e:{NFSU2_TR(0x42ca8e);
__builtin_memmove((R+4),(R+20),4);
}
B42ca90:{NFSU2_TR(0x42ca90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ca95ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B42ca95:L42ca95:{c.instructions+=6;NFSU2_TR(0x42ca95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ca96:{NFSU2_TR(0x42ca96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ca97:{NFSU2_TR(0x42ca97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42ca98:{NFSU2_TR(0x42ca98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42ca99:{NFSU2_TR(0x42ca99);
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
B42ca9c:{NFSU2_TR(0x42ca9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42caa0:L42caa0:{c.instructions+=12;NFSU2_TR(0x42caa0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42caa1:{NFSU2_TR(0x42caa1);
__builtin_memmove((R+20),(R+16),4);
}
B42caa3:{NFSU2_TR(0x42caa3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B42caa6:{NFSU2_TR(0x42caa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1e4ull))));
}
B42caac:{NFSU2_TR(0x42caac);
__builtin_memmove((R+0),gp(0x82a3a4),4);
}
B42cab1:{NFSU2_TR(0x42cab1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cab2:{NFSU2_TR(0x42cab2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cab3:{NFSU2_TR(0x42cab3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42cab5:{NFSU2_TR(0x42cab5);
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
B42cab7:{NFSU2_TR(0x42cab7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cab8:{NFSU2_TR(0x42cab8);
__builtin_memmove((R+24),(R+4),4);
}
B42caba:{NFSU2_TR(0x42caba);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42cd50;}}
}
B42cac0:L42cac0:{c.instructions+=1;NFSU2_TR(0x42cac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cac5ull));
TAIL_STATIC(0x40a390u,40a);
}
B42cac5:L42cac5:{c.instructions+=7;NFSU2_TR(0x42cac5);
__builtin_memmove((R+28),(R+0),4);
}
B42cac7:{NFSU2_TR(0x42cac7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42caca:{NFSU2_TR(0x42caca);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B42cacc:{NFSU2_TR(0x42cacc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42cace:{NFSU2_TR(0x42cace);
__builtin_memmove((R+4),(R+518),1);
}
B42cad1:{NFSU2_TR(0x42cad1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42cad3:{NFSU2_TR(0x42cad3);
if(r1(R+518)){{goto L42cb04;}}
}
B42cad5:L42cad5:{c.instructions+=6;NFSU2_TR(0x42cad5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42cad7:{NFSU2_TR(0x42cad7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42cad9:{NFSU2_TR(0x42cad9);
__builtin_memmove((R+8),(R+518),1);
}
B42cadc:{NFSU2_TR(0x42cadc);
w4(R+0,u32(r1(R+0)));
}
B42cadf:{NFSU2_TR(0x42cadf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42cae1:{NFSU2_TR(0x42cae1);
if(r1(R+518)){{goto L42cb04;}}
}
B42cae3:L42cae3:{c.instructions+=2;NFSU2_TR(0x42cae3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42cae6:{NFSU2_TR(0x42cae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42caebull));
TAIL_STATIC(0x411be0u,411);
}
B42caeb:L42caeb:{c.instructions+=2;NFSU2_TR(0x42caeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42caee:{NFSU2_TR(0x42caee);
w4(R+4,u32(0x10ull));
}
B42caf3:L42caf3:{c.instructions+=4;NFSU2_TR(0x42caf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffcull))));
s4(u32(r4(R+0)),r4(U+0));
}
B42caf6:{NFSU2_TR(0x42caf6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B42caf9:{NFSU2_TR(0x42caf9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B42cafa:{NFSU2_TR(0x42cafa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42caf3u);}goto L42caf3;}}
}
B42cafc:L42cafc:{c.instructions+=3;NFSU2_TR(0x42cafc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42cafe:{NFSU2_TR(0x42cafe);
__builtin_memmove((R+4),(R+518),1);
}
B42cb01:{NFSU2_TR(0x42cb01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42cb04:L42cb04:{c.instructions+=2;NFSU2_TR(0x42cb04);
__builtin_memmove((R+4),(R+24),4);
}
B42cb06:{NFSU2_TR(0x42cb06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cb0bull));
TAIL_STATIC(0x41d0e0u,41d);
}
B42cb0b:L42cb0b:{c.instructions+=2;NFSU2_TR(0x42cb0b);
__builtin_memmove((R+4),(R+24),4);
}
B42cb0d:{NFSU2_TR(0x42cb0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cb12ull));
TAIL_STATIC(0x418620u,418);
}
B42cb12:L42cb12:{c.instructions+=2;NFSU2_TR(0x42cb12);
__builtin_memmove((R+4),(R+24),4);
}
B42cb14:{NFSU2_TR(0x42cb14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cb19ull));
TAIL_STATIC(0x42a190u,42a);
}
B42cb19:L42cb19:{c.instructions+=2;NFSU2_TR(0x42cb19);
__builtin_memmove((R+4),(R+24),4);
}
B42cb1b:{NFSU2_TR(0x42cb1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cb20ull));
TAIL_STATIC(0x42a360u,42a);
}
B42cb20:L42cb20:{c.instructions+=7;NFSU2_TR(0x42cb20);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42cb22:{NFSU2_TR(0x42cb22);
u8 U[8];
w4(U+0,u32(u32(u32(0x1d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cb29:{NFSU2_TR(0x42cb29);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cb30:{NFSU2_TR(0x42cb30);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cb37:{NFSU2_TR(0x42cb37);
w4(R+4,u32(0x74ull));
}
B42cb3c:{NFSU2_TR(0x42cb3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B42cb40:{NFSU2_TR(0x42cb40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cb41:L42cb41:{c.instructions+=1;NFSU2_TR(0x42cb41);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L42cb43;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42cb41u);}goto L42cb41;}
}
B42cb43:L42cb43:{c.instructions+=3;NFSU2_TR(0x42cb43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cb44:{NFSU2_TR(0x42cb44);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42cb48:{NFSU2_TR(0x42cb48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cb4dull));
TAIL_STATIC(0x41d160u,41d);
}
B42cb4d:L42cb4d:{c.instructions+=2;NFSU2_TR(0x42cb4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42cb50:{NFSU2_TR(0x42cb50);
if(r1(R+518)){{goto L42ccc8;}}
}
B42cb56:L42cb56:{c.instructions+=5;NFSU2_TR(0x42cb56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42cb59:{NFSU2_TR(0x42cb59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cb5a:{NFSU2_TR(0x42cb5a);
__builtin_memmove((R+4),(R+24),4);
}
B42cb5c:{NFSU2_TR(0x42cb5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42cb64:{NFSU2_TR(0x42cb64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cb69ull));
TAIL_STATIC(0x4116a0u,411);
}
B42cb69:L42cb69:{c.instructions+=11;NFSU2_TR(0x42cb69);
__builtin_memmove((R+12),(R+0),4);
}
B42cb6b:{NFSU2_TR(0x42cb6b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cb6c:{NFSU2_TR(0x42cb6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42cb70:{NFSU2_TR(0x42cb70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cb71:{NFSU2_TR(0x42cb71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42cb74:{NFSU2_TR(0x42cb74);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42cb78:{NFSU2_TR(0x42cb78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cb79:{NFSU2_TR(0x42cb79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42cb7c:{NFSU2_TR(0x42cb7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cb7d:{NFSU2_TR(0x42cb7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42cb85:{NFSU2_TR(0x42cb85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cb8aull));
TAIL_STATIC(0x419bc0u,419);
}
B42cb8a:L42cb8a:{c.instructions+=4;NFSU2_TR(0x42cb8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42cb8d:{NFSU2_TR(0x42cb8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cb91:{NFSU2_TR(0x42cb91);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42cb97:{NFSU2_TR(0x42cb97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42cbb8;}}
}
B42cb99:L42cb99:{c.instructions+=5;NFSU2_TR(0x42cb99);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42cb9c:{NFSU2_TR(0x42cb9c);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42cba2:{NFSU2_TR(0x42cba2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42cba4:{NFSU2_TR(0x42cba4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42cba7:{NFSU2_TR(0x42cba7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42cbc0;}}
}
B42cba9:L42cba9:{c.instructions+=4;NFSU2_TR(0x42cba9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42cbad:{NFSU2_TR(0x42cbad);
{u32 ea_=u32(r4(R+24)+u32(984u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42cbb3:{NFSU2_TR(0x42cbb3);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B42cbb6:{NFSU2_TR(0x42cbb6);
{goto L42cbc4;}
}
B42cbb8:L42cbb8:{c.instructions+=2;NFSU2_TR(0x42cbb8);
{u32 ea_=u32(r4(R+24)+u32(988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42cbbe:{NFSU2_TR(0x42cbbe);
{goto L42cbc4;}
}
B42cbc0:L42cbc0:{c.instructions+=1;NFSU2_TR(0x42cbc0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42cbc4:L42cbc4:{c.instructions+=17;NFSU2_TR(0x42cbc4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42cbca:{NFSU2_TR(0x42cbca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42cbce:{NFSU2_TR(0x42cbce);
{u32 ea_=u32(u32(7879740u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42cbd4:{NFSU2_TR(0x42cbd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cbda:{NFSU2_TR(0x42cbda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42cbdd:{NFSU2_TR(0x42cbdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3d8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cbe3:{NFSU2_TR(0x42cbe3);
{u32 ea_=u32(r4(R+24)+u32(988u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42cbe9:{NFSU2_TR(0x42cbe9);
{u32 ea_=u32(u32(7879740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42cbef:{NFSU2_TR(0x42cbef);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B42cbf1:{NFSU2_TR(0x42cbf1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B42cbf3:{NFSU2_TR(0x42cbf3);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B42cbf5:{NFSU2_TR(0x42cbf5);
{u32 ea_=u32(r4(R+24)+u32(988u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42cbfb:{NFSU2_TR(0x42cbfb);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42cc01:{NFSU2_TR(0x42cc01);
{u32 ea_=u32(u32(7879732u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42cc07:{NFSU2_TR(0x42cc07);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42cc09:{NFSU2_TR(0x42cc09);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42cc0c:{NFSU2_TR(0x42cc0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ccb8;}}
}
B42cc12:L42cc12:{c.instructions+=6;NFSU2_TR(0x42cc12);
__builtin_memmove((R+0),(R+8),4);
}
B42cc14:{NFSU2_TR(0x42cc14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cc15:{NFSU2_TR(0x42cc15);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42cc19:{NFSU2_TR(0x42cc19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cc1a:{NFSU2_TR(0x42cc1a);
__builtin_memmove((R+4),(R+24),4);
}
B42cc1c:{NFSU2_TR(0x42cc1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cc21ull));
TAIL_STATIC(0x4221f0u,422);
}
B42cc21:L42cc21:{c.instructions+=3;NFSU2_TR(0x42cc21);
__builtin_memmove((R+0),gp(0x81cbb0),4);
}
B42cc26:{NFSU2_TR(0x42cc26);
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
B42cc28:{NFSU2_TR(0x42cc28);
if(r1(R+518)){{goto L42cd14;}}
}
B42cc2e:L42cc2e:{c.instructions+=4;NFSU2_TR(0x42cc2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42cc31:{NFSU2_TR(0x42cc31);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B42cc37:{NFSU2_TR(0x42cc37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cc38:{NFSU2_TR(0x42cc38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cc3dull));
TAIL_STATIC(0x440f70u,440);
}
B42cc3d:L42cc3d:{c.instructions+=7;NFSU2_TR(0x42cc3d);
{u32 ea_=u32(r4(R+28)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42cc43:{NFSU2_TR(0x42cc43);
{u32 ea_=u32(u32(7879748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42cc49:{NFSU2_TR(0x42cc49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42cc4c:{NFSU2_TR(0x42cc4c);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B42cc4e:{NFSU2_TR(0x42cc4e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42cc50:{NFSU2_TR(0x42cc50);
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
B42cc53:{NFSU2_TR(0x42cc53);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42cd14;}}
}
B42cc59:L42cc59:{c.instructions+=3;NFSU2_TR(0x42cc59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cc5a:{NFSU2_TR(0x42cc5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42cc5e:{NFSU2_TR(0x42cc5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cc63ull));
TAIL_STATIC(0x41d290u,41d);
}
B42cc63:L42cc63:{c.instructions+=11;NFSU2_TR(0x42cc63);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B42cc68:{NFSU2_TR(0x42cc68);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42cc6c:{NFSU2_TR(0x42cc6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cc6e:{NFSU2_TR(0x42cc6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cc6f:{NFSU2_TR(0x42cc6f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cc70:{NFSU2_TR(0x42cc70);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B42cc73:{NFSU2_TR(0x42cc73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cc75:{NFSU2_TR(0x42cc75);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B42cc79:{NFSU2_TR(0x42cc79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cc7a:{NFSU2_TR(0x42cc7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42cc7d:{NFSU2_TR(0x42cc7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cc82ull));
TAIL_STATIC(0x4198c0u,419);
}
B42cc82:L42cc82:{c.instructions+=2;NFSU2_TR(0x42cc82);
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
B42cc85:{NFSU2_TR(0x42cc85);
if(r1(R+518)){{goto L42cd14;}}
}
B42cc8b:L42cc8b:{c.instructions+=5;NFSU2_TR(0x42cc8b);
u8 U[16];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B42cc8f:{NFSU2_TR(0x42cc8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cc90:{NFSU2_TR(0x42cc90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cc91:{NFSU2_TR(0x42cc91);
__builtin_memmove((R+4),(R+0),4);
}
B42cc93:{NFSU2_TR(0x42cc93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cc98ull));
TAIL_STATIC(0x4123c0u,412);
}
B42cc98:L42cc98:{c.instructions+=10;NFSU2_TR(0x42cc98);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42cc9c:{NFSU2_TR(0x42cc9c);
__builtin_memmove((R+4),gp(0x783c40),4);
}
B42cca2:{NFSU2_TR(0x42cca2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42cca6:{NFSU2_TR(0x42cca6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cca7:{NFSU2_TR(0x42cca7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cca9:{NFSU2_TR(0x42cca9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ccaa:{NFSU2_TR(0x42ccaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42ccae:{NFSU2_TR(0x42ccae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ccaf:{NFSU2_TR(0x42ccaf);
__builtin_memmove((R+4),(R+24),4);
}
B42ccb1:{NFSU2_TR(0x42ccb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ccb6ull));
TAIL_STATIC(0x41e860u,41e);
}
B42ccb6:L42ccb6:{c.instructions+=1;NFSU2_TR(0x42ccb6);
{goto L42cd14;}
}
B42ccb8:L42ccb8:{c.instructions+=4;NFSU2_TR(0x42ccb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ccb9:{NFSU2_TR(0x42ccb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42ccbd:{NFSU2_TR(0x42ccbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ccbe:{NFSU2_TR(0x42ccbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ccc3ull));
TAIL_STATIC(0x425910u,425);
}
B42ccc3:L42ccc3:{c.instructions+=2;NFSU2_TR(0x42ccc3);
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
B42ccc6:{NFSU2_TR(0x42ccc6);
{goto L42cd14;}
}
B42ccc8:L42ccc8:{c.instructions+=6;NFSU2_TR(0x42ccc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42cccb:{NFSU2_TR(0x42cccb);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ccd1:{NFSU2_TR(0x42ccd1);
{u32 ea_=u32(u32(7879732u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42ccd7:{NFSU2_TR(0x42ccd7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ccd9:{NFSU2_TR(0x42ccd9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42ccdc:{NFSU2_TR(0x42ccdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ccea;}}
}
B42ccde:L42ccde:{c.instructions+=3;NFSU2_TR(0x42ccde);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ccdf:{NFSU2_TR(0x42ccdf);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42cce3:{NFSU2_TR(0x42cce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cce8ull));
TAIL_STATIC(0x4259c0u,425);
}
B42cce8:L42cce8:{c.instructions+=1;NFSU2_TR(0x42cce8);
{goto L42cd14;}
}
B42ccea:L42ccea:{c.instructions+=9;NFSU2_TR(0x42ccea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42ccec:{NFSU2_TR(0x42ccec);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B42ccf3:{NFSU2_TR(0x42ccf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B42ccf6:{NFSU2_TR(0x42ccf6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B42ccf9:{NFSU2_TR(0x42ccf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ccfa:{NFSU2_TR(0x42ccfa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ccfb:{NFSU2_TR(0x42ccfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ccfc:{NFSU2_TR(0x42ccfc);
__builtin_memmove((R+4),(R+24),4);
}
B42ccfe:{NFSU2_TR(0x42ccfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cd03ull));
TAIL_STATIC(0x404910u,404);
}
B42cd03:L42cd03:{c.instructions+=5;NFSU2_TR(0x42cd03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cd04:{NFSU2_TR(0x42cd04);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42cd08:{NFSU2_TR(0x42cd08);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42cd0b:{NFSU2_TR(0x42cd0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cd0c:{NFSU2_TR(0x42cd0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cd11ull));
TAIL_STATIC(0x420a60u,420);
}
B42cd11:L42cd11:{c.instructions+=1;NFSU2_TR(0x42cd11);
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
B42cd14:L42cd14:{c.instructions+=5;NFSU2_TR(0x42cd14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42cd17:{NFSU2_TR(0x42cd17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42cd19:{NFSU2_TR(0x42cd19);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42cd1d:{NFSU2_TR(0x42cd1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cd1e:{NFSU2_TR(0x42cd1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cd21ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42cd21:L42cd21:{c.instructions+=3;NFSU2_TR(0x42cd21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42cd24:{NFSU2_TR(0x42cd24);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0xffffull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B42cd29:{NFSU2_TR(0x42cd29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42cd50;}}
}
B42cd2b:L42cd2b:{c.instructions+=4;NFSU2_TR(0x42cd2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42cd2f:{NFSU2_TR(0x42cd2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cd30:{NFSU2_TR(0x42cd30);
w4(R+4,u32(0x81e5b8ull));
}
B42cd35:{NFSU2_TR(0x42cd35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cd3aull));
TAIL_STATIC(0x414bf0u,414);
}
B42cd3a:L42cd3a:{c.instructions+=3;NFSU2_TR(0x42cd3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42cd3c:{NFSU2_TR(0x42cd3c);
__builtin_memmove((R+4),(R+24),4);
}
B42cd3e:{NFSU2_TR(0x42cd3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cd41ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42cd41:L42cd41:{c.instructions+=5;NFSU2_TR(0x42cd41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cd42:{NFSU2_TR(0x42cd42);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x68ull))));
}
B42cd45:{NFSU2_TR(0x42cd45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cd46:{NFSU2_TR(0x42cd46);
w4(R+4,u32(0x81e388ull));
}
B42cd4b:{NFSU2_TR(0x42cd4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cd50ull));
TAIL_STATIC(0x414d20u,414);
}
B42cd50:L42cd50:{c.instructions+=6;NFSU2_TR(0x42cd50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42cd51:{NFSU2_TR(0x42cd51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42cd52:{NFSU2_TR(0x42cd52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42cd53:{NFSU2_TR(0x42cd53);
__builtin_memmove((R+16),(R+20),4);
}
B42cd55:{NFSU2_TR(0x42cd55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42cd56:{NFSU2_TR(0x42cd56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42cd60:L42cd60:{c.instructions+=8;NFSU2_TR(0x42cd60);
__builtin_memmove((R+0),gp(0x890080),4);
}
B42cd65:{NFSU2_TR(0x42cd65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42cd68:{NFSU2_TR(0x42cd68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42cd6b:{NFSU2_TR(0x42cd6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cd6c:{NFSU2_TR(0x42cd6c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B42cd6e:{NFSU2_TR(0x42cd6e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42cd70:{NFSU2_TR(0x42cd70);
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
B42cd72:{NFSU2_TR(0x42cd72);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42cdb3;}}
}
B42cd74:L42cd74:{c.instructions+=1;NFSU2_TR(0x42cd74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cd75:L42cd75:{c.instructions+=4;NFSU2_TR(0x42cd75);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B42cd77:{NFSU2_TR(0x42cd77);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B42cd7b:{NFSU2_TR(0x42cd7b);
__builtin_memmove((R+4),(R+24),4);
}
B42cd7d:{NFSU2_TR(0x42cd7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cd82ull));
TAIL_STATIC(0x5ed430u,5ed);
}
B42cd82:L42cd82:{c.instructions+=2;NFSU2_TR(0x42cd82);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42cd84:{NFSU2_TR(0x42cd84);
if(r1(R+518)){{goto L42cda0;}}
}
B42cd86:L42cd86:{c.instructions+=4;NFSU2_TR(0x42cd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42cd89:{NFSU2_TR(0x42cd89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42cd8f:{NFSU2_TR(0x42cd8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42cd91:{NFSU2_TR(0x42cd91);
if(r1(R+518)){{goto L42cd99;}}
}
B42cd93:L42cd93:{c.instructions+=2;NFSU2_TR(0x42cd93);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42cd97:{NFSU2_TR(0x42cd97);
if(r1(R+518)){{goto L42cda0;}}
}
B42cd99:L42cd99:{c.instructions+=2;NFSU2_TR(0x42cd99);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cd9b:{NFSU2_TR(0x42cd9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cda0ull));
TAIL_STATIC(0x42aa20u,42a);
}
B42cda0:L42cda0:{c.instructions+=7;NFSU2_TR(0x42cda0);
__builtin_memmove((R+0),gp(0x890080),4);
}
B42cda5:{NFSU2_TR(0x42cda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42cda8:{NFSU2_TR(0x42cda8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42cdab:{NFSU2_TR(0x42cdab);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B42cdac:{NFSU2_TR(0x42cdac);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B42cdae:{NFSU2_TR(0x42cdae);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B42cdb0:{NFSU2_TR(0x42cdb0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42cd75u);}goto L42cd75;}}
}
B42cdb2:L42cdb2:{c.instructions+=1;NFSU2_TR(0x42cdb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42cdb3:L42cdb3:{c.instructions+=2;NFSU2_TR(0x42cdb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42cdb4:{NFSU2_TR(0x42cdb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42cdc0:L42cdc0:{c.instructions+=10;NFSU2_TR(0x42cdc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B42cdc3:{NFSU2_TR(0x42cdc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cdc4:{NFSU2_TR(0x42cdc4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cdc5:{NFSU2_TR(0x42cdc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cdc6:{NFSU2_TR(0x42cdc6);
__builtin_memmove((R+24),(R+4),4);
}
B42cdc8:{NFSU2_TR(0x42cdc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42cdcb:{NFSU2_TR(0x42cdcb);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B42cdcd:{NFSU2_TR(0x42cdcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42cdcf:{NFSU2_TR(0x42cdcf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cdd0:{NFSU2_TR(0x42cdd0);
if(r1(R+518)){{goto L42ce96;}}
}
B42cdd6:L42cdd6:{c.instructions+=4;NFSU2_TR(0x42cdd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42cdd9:{NFSU2_TR(0x42cdd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42cddb:{NFSU2_TR(0x42cddb);
__builtin_memmove((R+20),(R+4),4);
}
B42cddd:{NFSU2_TR(0x42cddd);
if(r1(R+518)){{goto L42ce09;}}
}
B42cddf:L42cddf:{c.instructions+=10;NFSU2_TR(0x42cddf);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B42cde3:{NFSU2_TR(0x42cde3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cde7:{NFSU2_TR(0x42cde7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B42cdeb:{NFSU2_TR(0x42cdeb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42cdef:{NFSU2_TR(0x42cdef);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cdf3:{NFSU2_TR(0x42cdf3);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42cdf9:{NFSU2_TR(0x42cdf9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42cdfd:{NFSU2_TR(0x42cdfd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42ce01:{NFSU2_TR(0x42ce01);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42ce07:{NFSU2_TR(0x42ce07);
{goto L42ce17;}
}
B42ce09:L42ce09:{c.instructions+=3;NFSU2_TR(0x42ce09);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42ce0d:{NFSU2_TR(0x42ce0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ce0e:{NFSU2_TR(0x42ce0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ce13ull));
TAIL_STATIC(0x401aa0u,401);
}
B42ce13:L42ce13:{c.instructions+=1;NFSU2_TR(0x42ce13);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ce17:L42ce17:{c.instructions+=10;NFSU2_TR(0x42ce17);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ce1b:{NFSU2_TR(0x42ce1b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42ce1f:{NFSU2_TR(0x42ce1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ce22:{NFSU2_TR(0x42ce22);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ce26:{NFSU2_TR(0x42ce26);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ce2c:{NFSU2_TR(0x42ce2c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42ce32:{NFSU2_TR(0x42ce32);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((R+8),(U+0),4);
}
B42ce35:{NFSU2_TR(0x42ce35);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ce37:{NFSU2_TR(0x42ce37);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42ce3a:{NFSU2_TR(0x42ce3a);
if(r1(R+514)){{goto L42ce42;}}
}
B42ce3c:L42ce3c:{c.instructions+=1;NFSU2_TR(0x42ce3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B42ce42:L42ce42:{c.instructions+=14;NFSU2_TR(0x42ce42);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ce44:{NFSU2_TR(0x42ce44);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ce47:{NFSU2_TR(0x42ce47);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B42ce49:{NFSU2_TR(0x42ce49);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B42ce4b:{NFSU2_TR(0x42ce4b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B42ce4d:{NFSU2_TR(0x42ce4d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B42ce4f:{NFSU2_TR(0x42ce4f);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B42ce51:{NFSU2_TR(0x42ce51);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B42ce53:{NFSU2_TR(0x42ce53);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B42ce55:{NFSU2_TR(0x42ce55);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B42ce57:{NFSU2_TR(0x42ce57);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42ce5d:{NFSU2_TR(0x42ce5d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ce5f:{NFSU2_TR(0x42ce5f);
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
B42ce62:{NFSU2_TR(0x42ce62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ce96;}}
}
B42ce64:L42ce64:{c.instructions+=19;NFSU2_TR(0x42ce64);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ce66:{NFSU2_TR(0x42ce66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ce67:{NFSU2_TR(0x42ce67);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ce6a:{NFSU2_TR(0x42ce6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42ce6e:{NFSU2_TR(0x42ce6e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B42ce70:{NFSU2_TR(0x42ce70);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B42ce72:{NFSU2_TR(0x42ce72);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B42ce74:{NFSU2_TR(0x42ce74);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B42ce76:{NFSU2_TR(0x42ce76);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B42ce78:{NFSU2_TR(0x42ce78);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B42ce7a:{NFSU2_TR(0x42ce7a);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B42ce7c:{NFSU2_TR(0x42ce7c);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B42ce7e:{NFSU2_TR(0x42ce7e);
{u32 ea_=u32(u32(7877916u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B42ce84:{NFSU2_TR(0x42ce84);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42ce87:{NFSU2_TR(0x42ce87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ce88:{NFSU2_TR(0x42ce88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ce89:{NFSU2_TR(0x42ce89);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42ce8d:{NFSU2_TR(0x42ce8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ce8e:{NFSU2_TR(0x42ce8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ce93ull));
TAIL_STATIC(0x43d090u,43d);
}
B42ce93:L42ce93:{c.instructions+=1;NFSU2_TR(0x42ce93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B42ce96:L42ce96:{c.instructions+=3;NFSU2_TR(0x42ce96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ce9c:{NFSU2_TR(0x42ce9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42cea3:{NFSU2_TR(0x42cea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cea8ull));
TAIL_STATIC(0x411be0u,411);
}
B42cea8:L42cea8:{c.instructions+=2;NFSU2_TR(0x42cea8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42ceab:{NFSU2_TR(0x42ceab);
w4(R+4,u32(0x10ull));
}
B42ceb0:L42ceb0:{c.instructions+=4;NFSU2_TR(0x42ceb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffcull))));
s4(u32(r4(R+0)),r4(U+0));
}
B42ceb3:{NFSU2_TR(0x42ceb3);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B42ceb6:{NFSU2_TR(0x42ceb6);
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
B42ceb7:{NFSU2_TR(0x42ceb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42ceb0u);}goto L42ceb0;}}
}
B42ceb9:L42ceb9:{c.instructions+=3;NFSU2_TR(0x42ceb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42cebb:{NFSU2_TR(0x42cebb);
__builtin_memmove((R+4),(R+24),4);
}
B42cebd:{NFSU2_TR(0x42cebd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cec0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42cec0:L42cec0:{c.instructions+=6;NFSU2_TR(0x42cec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42cec4:{NFSU2_TR(0x42cec4);
__builtin_memmove((R+28),(R+0),4);
}
B42cec6:{NFSU2_TR(0x42cec6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cec7:{NFSU2_TR(0x42cec7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cec8:{NFSU2_TR(0x42cec8);
__builtin_memmove((R+4),(R+24),4);
}
B42ceca:{NFSU2_TR(0x42ceca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cecfull));
TAIL_STATIC(0x413590u,413);
}
B42cecf:L42cecf:{c.instructions+=2;NFSU2_TR(0x42cecf);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B42ced0:{NFSU2_TR(0x42ced0);
if(r1(R+518)){{goto L42cede;}}
}
B42ced2:L42ced2:{c.instructions+=2;NFSU2_TR(0x42ced2);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B42ced3:{NFSU2_TR(0x42ced3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42cee5;}}
}
B42ced5:L42ced5:{c.instructions+=2;NFSU2_TR(0x42ced5);
__builtin_memmove((R+4),(R+24),4);
}
B42ced7:{NFSU2_TR(0x42ced7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cedcull));
TAIL_STATIC(0x4233e0u,423);
}
B42cedc:L42cedc:{c.instructions+=1;NFSU2_TR(0x42cedc);
{goto L42cee5;}
}
B42cede:L42cede:{c.instructions+=2;NFSU2_TR(0x42cede);
__builtin_memmove((R+4),(R+24),4);
}
B42cee0:{NFSU2_TR(0x42cee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cee5ull));
TAIL_STATIC(0x413860u,413);
}
B42cee5:L42cee5:{c.instructions+=6;NFSU2_TR(0x42cee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42cee8:{NFSU2_TR(0x42cee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x750ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42cef2:{NFSU2_TR(0x42cef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42cef5:{NFSU2_TR(0x42cef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42cef8:{NFSU2_TR(0x42cef8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42cefb:{NFSU2_TR(0x42cefb);
if(r1(R+518)){{goto L42cf06;}}
}
B42cefd:L42cefd:{c.instructions+=2;NFSU2_TR(0x42cefd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42cf00:{NFSU2_TR(0x42cf00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x42d0a7u,42d);}
}
B42cf06:L42cf06:{c.instructions+=2;NFSU2_TR(0x42cf06);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42cf08:{NFSU2_TR(0x42cf08);
if(r1(R+518)){TAIL_STATIC(0x42d013u,42d);}
}
B42cf0e:L42cf0e:{c.instructions+=3;NFSU2_TR(0x42cf0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42cf11:{NFSU2_TR(0x42cf11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42cf13:{NFSU2_TR(0x42cf13);
if(r1(R+518)){TAIL_STATIC(0x42d013u,42d);}
}
B42cf19:L42cf19:{c.instructions+=19;NFSU2_TR(0x42cf19);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B42cf1d:{NFSU2_TR(0x42cf1d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B42cf21:{NFSU2_TR(0x42cf21);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cf25:{NFSU2_TR(0x42cf25);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42cf29:{NFSU2_TR(0x42cf29);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cf2d:{NFSU2_TR(0x42cf2d);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42cf33:{NFSU2_TR(0x42cf33);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42cf37:{NFSU2_TR(0x42cf37);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42cf3d:{NFSU2_TR(0x42cf3d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42cf41:{NFSU2_TR(0x42cf41);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B42cf43:{NFSU2_TR(0x42cf43);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B42cf45:{NFSU2_TR(0x42cf45);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42cf49:{NFSU2_TR(0x42cf49);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B42cf4b:{NFSU2_TR(0x42cf4b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B42cf4d:{NFSU2_TR(0x42cf4d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42cf53:{NFSU2_TR(0x42cf53);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42cf55:{NFSU2_TR(0x42cf55);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42cf57:{NFSU2_TR(0x42cf57);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42cf5a:{NFSU2_TR(0x42cf5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42cf62;}}
}
B42cf5c:L42cf5c:{c.instructions+=2;NFSU2_TR(0x42cf5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42cf60:{NFSU2_TR(0x42cf60);
{goto L42cf66;}
}
B42cf62:L42cf62:{c.instructions+=1;NFSU2_TR(0x42cf62);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42cf66:L42cf66:{c.instructions+=3;NFSU2_TR(0x42cf66);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B42cf6b:{NFSU2_TR(0x42cf6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42cf6d:{NFSU2_TR(0x42cf6d);
if(r1(R+518)){TAIL_STATIC(0x42d0a7u,42d);}
}
B42cf73:L42cf73:{c.instructions+=8;NFSU2_TR(0x42cf73);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42cf76:{NFSU2_TR(0x42cf76);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B42cf78:{NFSU2_TR(0x42cf78);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42cf7a:{NFSU2_TR(0x42cf7a);
__builtin_memmove((R+4),(R+518),1);
}
B42cf7d:{NFSU2_TR(0x42cf7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cf7f:{NFSU2_TR(0x42cf7f);
__builtin_memmove((R+28),(R+4),4);
}
B42cf81:{NFSU2_TR(0x42cf81);
__builtin_memmove((R+4),(R+24),4);
}
B42cf83:{NFSU2_TR(0x42cf83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42cf88ull));
TAIL_STATIC(0x40f750u,40f);
}
B42cf88:L42cf88:{c.instructions+=6;NFSU2_TR(0x42cf88);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42cf8b:{NFSU2_TR(0x42cf8b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42cf8d:{NFSU2_TR(0x42cf8d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42cf8f:{NFSU2_TR(0x42cf8f);
__builtin_memmove((R+8),(R+518),1);
}
B42cf92:{NFSU2_TR(0x42cf92);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42cf94:{NFSU2_TR(0x42cf94);
if(r1(R+518)){TAIL_STATIC(0x42d0a7u,42d);}
}
B42cf9a:L42cf9a:{c.instructions+=25;NFSU2_TR(0x42cf9a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B42cf9e:{NFSU2_TR(0x42cf9e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B42cfa2:{NFSU2_TR(0x42cfa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cfa6:{NFSU2_TR(0x42cfa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42cfa9:{NFSU2_TR(0x42cfa9);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42cfad:{NFSU2_TR(0x42cfad);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cfb1:{NFSU2_TR(0x42cfb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42cfb5:{NFSU2_TR(0x42cfb5);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42cfbb:{NFSU2_TR(0x42cfbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42cfbc:{NFSU2_TR(0x42cfbc);
__builtin_memmove((R+4),(R+20),4);
}
B42cfbe:{NFSU2_TR(0x42cfbe);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42cfc2:{NFSU2_TR(0x42cfc2);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42cfc6:{NFSU2_TR(0x42cfc6);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42cfcc:{NFSU2_TR(0x42cfcc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42cfd0:{NFSU2_TR(0x42cfd0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B42cfd4:{NFSU2_TR(0x42cfd4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B42cfd8:{NFSU2_TR(0x42cfd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cfdc:{NFSU2_TR(0x42cfdc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42cfe0:{NFSU2_TR(0x42cfe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42cfe4:{NFSU2_TR(0x42cfe4);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42cfea:{NFSU2_TR(0x42cfea);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42cfee:{NFSU2_TR(0x42cfee);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42cff4:{NFSU2_TR(0x42cff4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42cff8:{NFSU2_TR(0x42cff8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42cffc:{NFSU2_TR(0x42cffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d001ull));
TAIL_STATIC(0x401aa0u,401);
}
XIT:NFSU2_TR_EXIT(0x42c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
