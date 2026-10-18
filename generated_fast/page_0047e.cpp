#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_462(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_474(u8* __restrict R,Cpu& c);
u32 body_475(u8* __restrict R,Cpu& c);
u32 body_476(u8* __restrict R,Cpu& c);
u32 body_47b(u8* __restrict R,Cpu& c);
u32 body_47f(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x47e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x47e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_47e(u8* __restrict R,Cpu& c);
u32 page_47e(Cpu& c){return body_47e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_47e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x47e004:goto L47e004;
case 0x47e005:c.instructions+=2;goto B47e005;
case 0x47e00a:c.instructions+=1;goto B47e00a;
case 0x47e00f:goto L47e00f;
case 0x47e012:c.instructions+=2;goto B47e012;
case 0x47e014:c.instructions+=1;goto B47e014;
case 0x47e016:goto L47e016;
case 0x47e018:c.instructions+=1;goto B47e018;
case 0x47e01d:goto L47e01d;
case 0x47e01f:c.instructions+=1;goto B47e01f;
case 0x47e020:goto L47e020;
case 0x47e022:c.instructions+=11;goto B47e022;
case 0x47e027:c.instructions+=10;goto B47e027;
case 0x47e02d:c.instructions+=9;goto B47e02d;
case 0x47e02e:c.instructions+=8;goto B47e02e;
case 0x47e035:c.instructions+=7;goto B47e035;
case 0x47e036:c.instructions+=6;goto B47e036;
case 0x47e037:c.instructions+=5;goto B47e037;
case 0x47e039:c.instructions+=4;goto B47e039;
case 0x47e03d:c.instructions+=3;goto B47e03d;
case 0x47e043:c.instructions+=2;goto B47e043;
case 0x47e04b:c.instructions+=1;goto B47e04b;
case 0x47e050:goto L47e050;
case 0x47e054:c.instructions+=5;goto B47e054;
case 0x47e05a:c.instructions+=4;goto B47e05a;
case 0x47e05b:c.instructions+=3;goto B47e05b;
case 0x47e062:c.instructions+=2;goto B47e062;
case 0x47e065:c.instructions+=1;goto B47e065;
case 0x47e070:goto L47e070;
case 0x47e075:c.instructions+=2;goto B47e075;
case 0x47e076:c.instructions+=1;goto B47e076;
case 0x47e07b:goto L47e07b;
case 0x47e07e:c.instructions+=2;goto B47e07e;
case 0x47e083:c.instructions+=1;goto B47e083;
case 0x47e085:goto L47e085;
case 0x47e08b:c.instructions+=5;goto B47e08b;
case 0x47e08e:c.instructions+=4;goto B47e08e;
case 0x47e094:c.instructions+=3;goto B47e094;
case 0x47e095:c.instructions+=2;goto B47e095;
case 0x47e09a:c.instructions+=1;goto B47e09a;
case 0x47e09f:goto L47e09f;
case 0x47e0a2:c.instructions+=2;goto B47e0a2;
case 0x47e0a4:c.instructions+=1;goto B47e0a4;
case 0x47e0a6:goto L47e0a6;
case 0x47e0a8:c.instructions+=1;goto B47e0a8;
case 0x47e0ad:goto L47e0ad;
case 0x47e0af:c.instructions+=1;goto B47e0af;
case 0x47e0b0:goto L47e0b0;
case 0x47e0b1:c.instructions+=2;goto B47e0b1;
case 0x47e0b3:c.instructions+=1;goto B47e0b3;
case 0x47e0b8:goto L47e0b8;
case 0x47e0bd:c.instructions+=1;goto B47e0bd;
case 0x47e0bf:goto L47e0bf;
case 0x47e0c0:c.instructions+=1;goto B47e0c0;
case 0x47e0c5:goto L47e0c5;
case 0x47e0c8:goto L47e0c8;
case 0x47e0ca:c.instructions+=2;goto B47e0ca;
case 0x47e0cb:c.instructions+=1;goto B47e0cb;
case 0x47e0d0:goto L47e0d0;
case 0x47e0d1:c.instructions+=9;goto B47e0d1;
case 0x47e0d2:c.instructions+=8;goto B47e0d2;
case 0x47e0d3:c.instructions+=7;goto B47e0d3;
case 0x47e0d4:c.instructions+=6;goto B47e0d4;
case 0x47e0d5:c.instructions+=5;goto B47e0d5;
case 0x47e0d7:c.instructions+=4;goto B47e0d7;
case 0x47e0de:c.instructions+=3;goto B47e0de;
case 0x47e0e4:c.instructions+=2;goto B47e0e4;
case 0x47e0ea:c.instructions+=1;goto B47e0ea;
case 0x47e0f2:goto L47e0f2;
case 0x47e0f4:c.instructions+=2;goto B47e0f4;
case 0x47e0f6:c.instructions+=1;goto B47e0f6;
case 0x47e0f8:goto L47e0f8;
case 0x47e0fb:c.instructions+=2;goto B47e0fb;
case 0x47e0fd:c.instructions+=1;goto B47e0fd;
case 0x47e0ff:goto L47e0ff;
case 0x47e101:c.instructions+=2;goto B47e101;
case 0x47e103:c.instructions+=1;goto B47e103;
case 0x47e105:goto L47e105;
case 0x47e10b:c.instructions+=1;goto B47e10b;
case 0x47e10d:goto L47e10d;
case 0x47e113:c.instructions+=1;goto B47e113;
case 0x47e115:goto L47e115;
case 0x47e118:c.instructions+=4;goto B47e118;
case 0x47e11a:c.instructions+=3;goto B47e11a;
case 0x47e11b:c.instructions+=2;goto B47e11b;
case 0x47e11d:c.instructions+=1;goto B47e11d;
case 0x47e120:goto L47e120;
case 0x47e123:goto L47e123;
case 0x47e126:c.instructions+=5;goto B47e126;
case 0x47e128:c.instructions+=4;goto B47e128;
case 0x47e12b:c.instructions+=3;goto B47e12b;
case 0x47e12c:c.instructions+=2;goto B47e12c;
case 0x47e12e:c.instructions+=1;goto B47e12e;
case 0x47e131:goto L47e131;
case 0x47e134:c.instructions+=5;goto B47e134;
case 0x47e13a:c.instructions+=4;goto B47e13a;
case 0x47e13f:c.instructions+=3;goto B47e13f;
case 0x47e142:c.instructions+=2;goto B47e142;
case 0x47e144:c.instructions+=1;goto B47e144;
case 0x47e146:goto L47e146;
case 0x47e149:c.instructions+=2;goto B47e149;
case 0x47e14b:c.instructions+=1;goto B47e14b;
case 0x47e14d:goto L47e14d;
case 0x47e150:c.instructions+=5;goto B47e150;
case 0x47e156:c.instructions+=4;goto B47e156;
case 0x47e159:c.instructions+=3;goto B47e159;
case 0x47e15b:c.instructions+=2;goto B47e15b;
case 0x47e15e:c.instructions+=1;goto B47e15e;
case 0x47e160:goto L47e160;
case 0x47e166:goto L47e166;
case 0x47e168:c.instructions+=2;goto B47e168;
case 0x47e169:c.instructions+=1;goto B47e169;
case 0x47e16e:goto L47e16e;
case 0x47e171:c.instructions+=2;goto B47e171;
case 0x47e173:c.instructions+=1;goto B47e173;
case 0x47e179:goto L47e179;
case 0x47e17c:c.instructions+=2;goto B47e17c;
case 0x47e17e:c.instructions+=1;goto B47e17e;
case 0x47e180:goto L47e180;
case 0x47e182:c.instructions+=2;goto B47e182;
case 0x47e184:c.instructions+=1;goto B47e184;
case 0x47e186:goto L47e186;
case 0x47e18d:c.instructions+=1;goto B47e18d;
case 0x47e18f:goto L47e18f;
case 0x47e195:c.instructions+=2;goto B47e195;
case 0x47e197:c.instructions+=1;goto B47e197;
case 0x47e199:goto L47e199;
case 0x47e19c:c.instructions+=4;goto B47e19c;
case 0x47e19e:c.instructions+=3;goto B47e19e;
case 0x47e19f:c.instructions+=2;goto B47e19f;
case 0x47e1a1:c.instructions+=1;goto B47e1a1;
case 0x47e1a4:goto L47e1a4;
case 0x47e1a7:goto L47e1a7;
case 0x47e1aa:c.instructions+=5;goto B47e1aa;
case 0x47e1ac:c.instructions+=4;goto B47e1ac;
case 0x47e1af:c.instructions+=3;goto B47e1af;
case 0x47e1b0:c.instructions+=2;goto B47e1b0;
case 0x47e1b2:c.instructions+=1;goto B47e1b2;
case 0x47e1b5:goto L47e1b5;
case 0x47e1b8:c.instructions+=5;goto B47e1b8;
case 0x47e1bb:c.instructions+=4;goto B47e1bb;
case 0x47e1bd:c.instructions+=3;goto B47e1bd;
case 0x47e1be:c.instructions+=2;goto B47e1be;
case 0x47e1c0:c.instructions+=1;goto B47e1c0;
case 0x47e1c3:goto L47e1c3;
case 0x47e1c6:c.instructions+=5;goto B47e1c6;
case 0x47e1cd:c.instructions+=4;goto B47e1cd;
case 0x47e1d2:c.instructions+=3;goto B47e1d2;
case 0x47e1d5:c.instructions+=2;goto B47e1d5;
case 0x47e1d7:c.instructions+=1;goto B47e1d7;
case 0x47e1d9:goto L47e1d9;
case 0x47e1dc:c.instructions+=2;goto B47e1dc;
case 0x47e1de:c.instructions+=1;goto B47e1de;
case 0x47e1e0:goto L47e1e0;
case 0x47e1e3:c.instructions+=5;goto B47e1e3;
case 0x47e1e9:c.instructions+=4;goto B47e1e9;
case 0x47e1ec:c.instructions+=3;goto B47e1ec;
case 0x47e1ee:c.instructions+=2;goto B47e1ee;
case 0x47e1f1:c.instructions+=1;goto B47e1f1;
case 0x47e1f3:goto L47e1f3;
case 0x47e1fa:goto L47e1fa;
case 0x47e1fd:c.instructions+=2;goto B47e1fd;
case 0x47e1fe:c.instructions+=1;goto B47e1fe;
case 0x47e203:goto L47e203;
case 0x47e207:c.instructions+=5;goto B47e207;
case 0x47e20a:c.instructions+=4;goto B47e20a;
case 0x47e20d:c.instructions+=3;goto B47e20d;
case 0x47e20e:c.instructions+=2;goto B47e20e;
case 0x47e212:c.instructions+=1;goto B47e212;
case 0x47e218:goto L47e218;
case 0x47e219:c.instructions+=5;goto B47e219;
case 0x47e21a:c.instructions+=4;goto B47e21a;
case 0x47e21b:c.instructions+=3;goto B47e21b;
case 0x47e21c:c.instructions+=2;goto B47e21c;
case 0x47e21d:c.instructions+=1;goto B47e21d;
case 0x47e220:goto L47e220;
case 0x47e225:c.instructions+=2;goto B47e225;
case 0x47e226:c.instructions+=1;goto B47e226;
case 0x47e22b:goto L47e22b;
case 0x47e22e:c.instructions+=2;goto B47e22e;
case 0x47e233:c.instructions+=1;goto B47e233;
case 0x47e235:goto L47e235;
case 0x47e23b:c.instructions+=5;goto B47e23b;
case 0x47e23e:c.instructions+=4;goto B47e23e;
case 0x47e244:c.instructions+=3;goto B47e244;
case 0x47e245:c.instructions+=2;goto B47e245;
case 0x47e24a:c.instructions+=1;goto B47e24a;
case 0x47e24f:goto L47e24f;
case 0x47e252:c.instructions+=2;goto B47e252;
case 0x47e254:c.instructions+=1;goto B47e254;
case 0x47e256:goto L47e256;
case 0x47e258:c.instructions+=1;goto B47e258;
case 0x47e25d:goto L47e25d;
case 0x47e25f:c.instructions+=1;goto B47e25f;
case 0x47e260:goto L47e260;
case 0x47e265:c.instructions+=2;goto B47e265;
case 0x47e266:c.instructions+=1;goto B47e266;
case 0x47e26b:goto L47e26b;
case 0x47e26e:c.instructions+=2;goto B47e26e;
case 0x47e273:c.instructions+=1;goto B47e273;
case 0x47e275:goto L47e275;
case 0x47e27b:c.instructions+=5;goto B47e27b;
case 0x47e27e:c.instructions+=4;goto B47e27e;
case 0x47e284:c.instructions+=3;goto B47e284;
case 0x47e285:c.instructions+=2;goto B47e285;
case 0x47e28a:c.instructions+=1;goto B47e28a;
case 0x47e28f:goto L47e28f;
case 0x47e292:c.instructions+=2;goto B47e292;
case 0x47e294:c.instructions+=1;goto B47e294;
case 0x47e296:goto L47e296;
case 0x47e298:c.instructions+=1;goto B47e298;
case 0x47e29d:goto L47e29d;
case 0x47e29f:c.instructions+=1;goto B47e29f;
case 0x47e2a0:goto L47e2a0;
case 0x47e2a1:c.instructions+=2;goto B47e2a1;
case 0x47e2a3:c.instructions+=1;goto B47e2a3;
case 0x47e2a8:goto L47e2a8;
case 0x47e2ad:c.instructions+=1;goto B47e2ad;
case 0x47e2af:goto L47e2af;
case 0x47e2b0:c.instructions+=1;goto B47e2b0;
case 0x47e2b5:goto L47e2b5;
case 0x47e2b8:goto L47e2b8;
case 0x47e2ba:c.instructions+=2;goto B47e2ba;
case 0x47e2bb:c.instructions+=1;goto B47e2bb;
case 0x47e2c0:goto L47e2c0;
case 0x47e2c1:c.instructions+=7;goto B47e2c1;
case 0x47e2c2:c.instructions+=6;goto B47e2c2;
case 0x47e2c4:c.instructions+=5;goto B47e2c4;
case 0x47e2ca:c.instructions+=4;goto B47e2ca;
case 0x47e2d1:c.instructions+=3;goto B47e2d1;
case 0x47e2d4:c.instructions+=2;goto B47e2d4;
case 0x47e2d6:c.instructions+=1;goto B47e2d6;
case 0x47e2dc:goto L47e2dc;
case 0x47e2e2:c.instructions+=2;goto B47e2e2;
case 0x47e2e4:c.instructions+=1;goto B47e2e4;
case 0x47e2ea:goto L47e2ea;
case 0x47e2eb:c.instructions+=4;goto B47e2eb;
case 0x47e2ef:c.instructions+=3;goto B47e2ef;
case 0x47e2f0:c.instructions+=2;goto B47e2f0;
case 0x47e2f8:c.instructions+=1;goto B47e2f8;
case 0x47e2fd:goto L47e2fd;
case 0x47e300:c.instructions+=4;goto B47e300;
case 0x47e304:c.instructions+=3;goto B47e304;
case 0x47e307:c.instructions+=2;goto B47e307;
case 0x47e30a:c.instructions+=1;goto B47e30a;
case 0x47e30c:goto L47e30c;
case 0x47e313:c.instructions+=1;goto B47e313;
case 0x47e31a:goto L47e31a;
case 0x47e31c:c.instructions+=3;goto B47e31c;
case 0x47e31e:c.instructions+=2;goto B47e31e;
case 0x47e320:c.instructions+=1;goto B47e320;
case 0x47e323:goto L47e323;
case 0x47e329:c.instructions+=4;goto B47e329;
case 0x47e32b:c.instructions+=3;goto B47e32b;
case 0x47e32d:c.instructions+=2;goto B47e32d;
case 0x47e32f:c.instructions+=1;goto B47e32f;
case 0x47e332:goto L47e332;
case 0x47e338:c.instructions+=5;goto B47e338;
case 0x47e33e:c.instructions+=4;goto B47e33e;
case 0x47e340:c.instructions+=3;goto B47e340;
case 0x47e342:c.instructions+=2;goto B47e342;
case 0x47e344:c.instructions+=1;goto B47e344;
case 0x47e347:goto L47e347;
case 0x47e34d:c.instructions+=4;goto B47e34d;
case 0x47e34f:c.instructions+=3;goto B47e34f;
case 0x47e351:c.instructions+=2;goto B47e351;
case 0x47e353:c.instructions+=1;goto B47e353;
case 0x47e356:goto L47e356;
case 0x47e35c:c.instructions+=1;goto B47e35c;
case 0x47e362:goto L47e362;
case 0x47e364:c.instructions+=3;goto B47e364;
case 0x47e366:c.instructions+=2;goto B47e366;
case 0x47e368:c.instructions+=1;goto B47e368;
case 0x47e36b:goto L47e36b;
case 0x47e371:c.instructions+=4;goto B47e371;
case 0x47e373:c.instructions+=3;goto B47e373;
case 0x47e375:c.instructions+=2;goto B47e375;
case 0x47e377:c.instructions+=1;goto B47e377;
case 0x47e37a:goto L47e37a;
case 0x47e380:c.instructions+=5;goto B47e380;
case 0x47e381:c.instructions+=4;goto B47e381;
case 0x47e387:c.instructions+=3;goto B47e387;
case 0x47e38d:c.instructions+=2;goto B47e38d;
case 0x47e393:c.instructions+=1;goto B47e393;
case 0x47e398:goto L47e398;
case 0x47e399:goto L47e399;
case 0x47e39a:c.instructions+=2;goto B47e39a;
case 0x47e39b:c.instructions+=1;goto B47e39b;
case 0x47e3b0:goto L47e3b0;
case 0x47e3b5:c.instructions+=2;goto B47e3b5;
case 0x47e3b6:c.instructions+=1;goto B47e3b6;
case 0x47e3bb:goto L47e3bb;
case 0x47e3be:c.instructions+=2;goto B47e3be;
case 0x47e3c3:c.instructions+=1;goto B47e3c3;
case 0x47e3c5:goto L47e3c5;
case 0x47e3cb:c.instructions+=5;goto B47e3cb;
case 0x47e3ce:c.instructions+=4;goto B47e3ce;
case 0x47e3d4:c.instructions+=3;goto B47e3d4;
case 0x47e3d5:c.instructions+=2;goto B47e3d5;
case 0x47e3da:c.instructions+=1;goto B47e3da;
case 0x47e3df:goto L47e3df;
case 0x47e3e2:c.instructions+=2;goto B47e3e2;
case 0x47e3e4:c.instructions+=1;goto B47e3e4;
case 0x47e3e6:goto L47e3e6;
case 0x47e3e8:c.instructions+=1;goto B47e3e8;
case 0x47e3ed:goto L47e3ed;
case 0x47e3ef:c.instructions+=1;goto B47e3ef;
case 0x47e3f0:goto L47e3f0;
case 0x47e3f1:c.instructions+=2;goto B47e3f1;
case 0x47e3f3:c.instructions+=1;goto B47e3f3;
case 0x47e3f8:goto L47e3f8;
case 0x47e3fd:c.instructions+=1;goto B47e3fd;
case 0x47e3ff:goto L47e3ff;
case 0x47e400:c.instructions+=1;goto B47e400;
case 0x47e405:goto L47e405;
case 0x47e408:goto L47e408;
case 0x47e40a:c.instructions+=2;goto B47e40a;
case 0x47e40b:c.instructions+=1;goto B47e40b;
case 0x47e410:goto L47e410;
case 0x47e415:c.instructions+=2;goto B47e415;
case 0x47e416:c.instructions+=1;goto B47e416;
case 0x47e41b:goto L47e41b;
case 0x47e41e:c.instructions+=2;goto B47e41e;
case 0x47e423:c.instructions+=1;goto B47e423;
case 0x47e425:goto L47e425;
case 0x47e42b:c.instructions+=5;goto B47e42b;
case 0x47e42e:c.instructions+=4;goto B47e42e;
case 0x47e434:c.instructions+=3;goto B47e434;
case 0x47e435:c.instructions+=2;goto B47e435;
case 0x47e43a:c.instructions+=1;goto B47e43a;
case 0x47e43f:goto L47e43f;
case 0x47e442:c.instructions+=2;goto B47e442;
case 0x47e444:c.instructions+=1;goto B47e444;
case 0x47e446:goto L47e446;
case 0x47e448:c.instructions+=1;goto B47e448;
case 0x47e44d:goto L47e44d;
case 0x47e44f:c.instructions+=1;goto B47e44f;
case 0x47e450:goto L47e450;
case 0x47e455:c.instructions+=2;goto B47e455;
case 0x47e456:c.instructions+=1;goto B47e456;
case 0x47e45b:goto L47e45b;
case 0x47e45e:c.instructions+=2;goto B47e45e;
case 0x47e463:c.instructions+=1;goto B47e463;
case 0x47e465:goto L47e465;
case 0x47e46b:c.instructions+=5;goto B47e46b;
case 0x47e46e:c.instructions+=4;goto B47e46e;
case 0x47e474:c.instructions+=3;goto B47e474;
case 0x47e475:c.instructions+=2;goto B47e475;
case 0x47e47a:c.instructions+=1;goto B47e47a;
case 0x47e47f:goto L47e47f;
case 0x47e482:c.instructions+=2;goto B47e482;
case 0x47e484:c.instructions+=1;goto B47e484;
case 0x47e486:goto L47e486;
case 0x47e488:c.instructions+=1;goto B47e488;
case 0x47e48d:goto L47e48d;
case 0x47e48f:c.instructions+=1;goto B47e48f;
case 0x47e490:goto L47e490;
case 0x47e491:c.instructions+=2;goto B47e491;
case 0x47e493:c.instructions+=1;goto B47e493;
case 0x47e498:goto L47e498;
case 0x47e49d:c.instructions+=1;goto B47e49d;
case 0x47e49f:goto L47e49f;
case 0x47e4a0:c.instructions+=1;goto B47e4a0;
case 0x47e4a5:goto L47e4a5;
case 0x47e4a8:goto L47e4a8;
case 0x47e4aa:c.instructions+=2;goto B47e4aa;
case 0x47e4ab:c.instructions+=1;goto B47e4ab;
case 0x47e4b0:goto L47e4b0;
case 0x47e4b5:c.instructions+=2;goto B47e4b5;
case 0x47e4b6:c.instructions+=1;goto B47e4b6;
case 0x47e4bb:goto L47e4bb;
case 0x47e4be:c.instructions+=2;goto B47e4be;
case 0x47e4c3:c.instructions+=1;goto B47e4c3;
case 0x47e4c5:goto L47e4c5;
case 0x47e4cb:c.instructions+=5;goto B47e4cb;
case 0x47e4ce:c.instructions+=4;goto B47e4ce;
case 0x47e4d4:c.instructions+=3;goto B47e4d4;
case 0x47e4d5:c.instructions+=2;goto B47e4d5;
case 0x47e4da:c.instructions+=1;goto B47e4da;
case 0x47e4df:goto L47e4df;
case 0x47e4e2:c.instructions+=2;goto B47e4e2;
case 0x47e4e4:c.instructions+=1;goto B47e4e4;
case 0x47e4e6:goto L47e4e6;
case 0x47e4e8:c.instructions+=1;goto B47e4e8;
case 0x47e4ed:goto L47e4ed;
case 0x47e4ef:c.instructions+=1;goto B47e4ef;
case 0x47e4f0:goto L47e4f0;
case 0x47e4f5:c.instructions+=2;goto B47e4f5;
case 0x47e4f6:c.instructions+=1;goto B47e4f6;
case 0x47e4fb:goto L47e4fb;
case 0x47e4fe:c.instructions+=2;goto B47e4fe;
case 0x47e503:c.instructions+=1;goto B47e503;
case 0x47e505:goto L47e505;
case 0x47e50b:c.instructions+=5;goto B47e50b;
case 0x47e50e:c.instructions+=4;goto B47e50e;
case 0x47e514:c.instructions+=3;goto B47e514;
case 0x47e515:c.instructions+=2;goto B47e515;
case 0x47e51a:c.instructions+=1;goto B47e51a;
case 0x47e51f:goto L47e51f;
case 0x47e522:c.instructions+=2;goto B47e522;
case 0x47e524:c.instructions+=1;goto B47e524;
case 0x47e526:goto L47e526;
case 0x47e528:c.instructions+=1;goto B47e528;
case 0x47e52d:goto L47e52d;
case 0x47e52f:c.instructions+=1;goto B47e52f;
case 0x47e530:goto L47e530;
case 0x47e531:c.instructions+=2;goto B47e531;
case 0x47e533:c.instructions+=1;goto B47e533;
case 0x47e538:goto L47e538;
case 0x47e53d:c.instructions+=1;goto B47e53d;
case 0x47e53f:goto L47e53f;
case 0x47e540:c.instructions+=1;goto B47e540;
case 0x47e545:goto L47e545;
case 0x47e548:goto L47e548;
case 0x47e54a:c.instructions+=2;goto B47e54a;
case 0x47e54b:c.instructions+=1;goto B47e54b;
case 0x47e550:goto L47e550;
case 0x47e555:c.instructions+=2;goto B47e555;
case 0x47e556:c.instructions+=1;goto B47e556;
case 0x47e55b:goto L47e55b;
case 0x47e55e:c.instructions+=2;goto B47e55e;
case 0x47e563:c.instructions+=1;goto B47e563;
case 0x47e565:goto L47e565;
case 0x47e56b:c.instructions+=5;goto B47e56b;
case 0x47e56e:c.instructions+=4;goto B47e56e;
case 0x47e574:c.instructions+=3;goto B47e574;
case 0x47e575:c.instructions+=2;goto B47e575;
case 0x47e57a:c.instructions+=1;goto B47e57a;
case 0x47e57f:goto L47e57f;
case 0x47e582:c.instructions+=2;goto B47e582;
case 0x47e584:c.instructions+=1;goto B47e584;
case 0x47e586:goto L47e586;
case 0x47e588:c.instructions+=1;goto B47e588;
case 0x47e58d:goto L47e58d;
case 0x47e58f:c.instructions+=1;goto B47e58f;
case 0x47e590:goto L47e590;
case 0x47e591:c.instructions+=2;goto B47e591;
case 0x47e593:c.instructions+=1;goto B47e593;
case 0x47e598:goto L47e598;
case 0x47e59d:c.instructions+=1;goto B47e59d;
case 0x47e59f:goto L47e59f;
case 0x47e5a0:c.instructions+=1;goto B47e5a0;
case 0x47e5a5:goto L47e5a5;
case 0x47e5a8:goto L47e5a8;
case 0x47e5aa:c.instructions+=2;goto B47e5aa;
case 0x47e5ab:c.instructions+=1;goto B47e5ab;
case 0x47e5b0:goto L47e5b0;
case 0x47e5b5:c.instructions+=2;goto B47e5b5;
case 0x47e5b6:c.instructions+=1;goto B47e5b6;
case 0x47e5bb:goto L47e5bb;
case 0x47e5be:c.instructions+=2;goto B47e5be;
case 0x47e5c3:c.instructions+=1;goto B47e5c3;
case 0x47e5c5:goto L47e5c5;
case 0x47e5cb:c.instructions+=5;goto B47e5cb;
case 0x47e5ce:c.instructions+=4;goto B47e5ce;
case 0x47e5d4:c.instructions+=3;goto B47e5d4;
case 0x47e5d5:c.instructions+=2;goto B47e5d5;
case 0x47e5da:c.instructions+=1;goto B47e5da;
case 0x47e5df:goto L47e5df;
case 0x47e5e2:c.instructions+=2;goto B47e5e2;
case 0x47e5e4:c.instructions+=1;goto B47e5e4;
case 0x47e5e6:goto L47e5e6;
case 0x47e5e8:c.instructions+=1;goto B47e5e8;
case 0x47e5ed:goto L47e5ed;
case 0x47e5ef:c.instructions+=1;goto B47e5ef;
case 0x47e5f0:goto L47e5f0;
case 0x47e5f1:c.instructions+=2;goto B47e5f1;
case 0x47e5f3:c.instructions+=1;goto B47e5f3;
case 0x47e5f8:goto L47e5f8;
case 0x47e5fd:c.instructions+=1;goto B47e5fd;
case 0x47e5ff:goto L47e5ff;
case 0x47e600:c.instructions+=1;goto B47e600;
case 0x47e605:goto L47e605;
case 0x47e608:goto L47e608;
case 0x47e60a:c.instructions+=2;goto B47e60a;
case 0x47e60b:c.instructions+=1;goto B47e60b;
case 0x47e610:goto L47e610;
case 0x47e615:c.instructions+=2;goto B47e615;
case 0x47e616:c.instructions+=1;goto B47e616;
case 0x47e61b:goto L47e61b;
case 0x47e61e:c.instructions+=2;goto B47e61e;
case 0x47e623:c.instructions+=1;goto B47e623;
case 0x47e625:goto L47e625;
case 0x47e62b:c.instructions+=5;goto B47e62b;
case 0x47e62e:c.instructions+=4;goto B47e62e;
case 0x47e634:c.instructions+=3;goto B47e634;
case 0x47e635:c.instructions+=2;goto B47e635;
case 0x47e63a:c.instructions+=1;goto B47e63a;
case 0x47e63f:goto L47e63f;
case 0x47e642:c.instructions+=2;goto B47e642;
case 0x47e644:c.instructions+=1;goto B47e644;
case 0x47e646:goto L47e646;
case 0x47e648:c.instructions+=1;goto B47e648;
case 0x47e64d:goto L47e64d;
case 0x47e64f:c.instructions+=1;goto B47e64f;
case 0x47e650:goto L47e650;
case 0x47e652:c.instructions+=12;goto B47e652;
case 0x47e657:c.instructions+=11;goto B47e657;
case 0x47e65d:c.instructions+=10;goto B47e65d;
case 0x47e65e:c.instructions+=9;goto B47e65e;
case 0x47e665:c.instructions+=8;goto B47e665;
case 0x47e666:c.instructions+=7;goto B47e666;
case 0x47e667:c.instructions+=6;goto B47e667;
case 0x47e669:c.instructions+=5;goto B47e669;
case 0x47e66d:c.instructions+=4;goto B47e66d;
case 0x47e673:c.instructions+=3;goto B47e673;
case 0x47e679:c.instructions+=2;goto B47e679;
case 0x47e681:c.instructions+=1;goto B47e681;
case 0x47e686:goto L47e686;
case 0x47e68a:c.instructions+=5;goto B47e68a;
case 0x47e690:c.instructions+=4;goto B47e690;
case 0x47e691:c.instructions+=3;goto B47e691;
case 0x47e698:c.instructions+=2;goto B47e698;
case 0x47e69b:c.instructions+=1;goto B47e69b;
case 0x47e6a0:goto L47e6a0;
case 0x47e6a5:c.instructions+=2;goto B47e6a5;
case 0x47e6a6:c.instructions+=1;goto B47e6a6;
case 0x47e6ab:goto L47e6ab;
case 0x47e6ae:c.instructions+=2;goto B47e6ae;
case 0x47e6b3:c.instructions+=1;goto B47e6b3;
case 0x47e6b5:goto L47e6b5;
case 0x47e6bb:c.instructions+=5;goto B47e6bb;
case 0x47e6be:c.instructions+=4;goto B47e6be;
case 0x47e6c4:c.instructions+=3;goto B47e6c4;
case 0x47e6c5:c.instructions+=2;goto B47e6c5;
case 0x47e6ca:c.instructions+=1;goto B47e6ca;
case 0x47e6cf:goto L47e6cf;
case 0x47e6d2:c.instructions+=2;goto B47e6d2;
case 0x47e6d4:c.instructions+=1;goto B47e6d4;
case 0x47e6d6:goto L47e6d6;
case 0x47e6d8:c.instructions+=1;goto B47e6d8;
case 0x47e6dd:goto L47e6dd;
case 0x47e6df:c.instructions+=1;goto B47e6df;
case 0x47e6e0:goto L47e6e0;
case 0x47e6e1:c.instructions+=5;goto B47e6e1;
case 0x47e6e3:c.instructions+=4;goto B47e6e3;
case 0x47e6e6:c.instructions+=3;goto B47e6e6;
case 0x47e6e9:c.instructions+=2;goto B47e6e9;
case 0x47e6eb:c.instructions+=1;goto B47e6eb;
case 0x47e6f1:goto L47e6f1;
case 0x47e6f5:c.instructions+=3;goto B47e6f5;
case 0x47e6f6:c.instructions+=2;goto B47e6f6;
case 0x47e6fc:c.instructions+=1;goto B47e6fc;
case 0x47e701:goto L47e701;
case 0x47e707:c.instructions+=2;goto B47e707;
case 0x47e709:c.instructions+=1;goto B47e709;
case 0x47e70f:goto L47e70f;
case 0x47e712:c.instructions+=4;goto B47e712;
case 0x47e715:c.instructions+=3;goto B47e715;
case 0x47e71b:c.instructions+=2;goto B47e71b;
case 0x47e71d:c.instructions+=1;goto B47e71d;
case 0x47e723:goto L47e723;
case 0x47e729:c.instructions+=5;goto B47e729;
case 0x47e72f:c.instructions+=4;goto B47e72f;
case 0x47e732:c.instructions+=3;goto B47e732;
case 0x47e734:c.instructions+=2;goto B47e734;
case 0x47e737:c.instructions+=1;goto B47e737;
case 0x47e73d:goto L47e73d;
case 0x47e743:c.instructions+=5;goto B47e743;
case 0x47e749:c.instructions+=4;goto B47e749;
case 0x47e74c:c.instructions+=3;goto B47e74c;
case 0x47e74e:c.instructions+=2;goto B47e74e;
case 0x47e751:c.instructions+=1;goto B47e751;
case 0x47e757:goto L47e757;
case 0x47e75d:c.instructions+=2;goto B47e75d;
case 0x47e75f:c.instructions+=1;goto B47e75f;
case 0x47e765:goto L47e765;
case 0x47e76a:c.instructions+=2;goto B47e76a;
case 0x47e76b:c.instructions+=1;goto B47e76b;
case 0x47e770:goto L47e770;
case 0x47e773:c.instructions+=2;goto B47e773;
case 0x47e775:c.instructions+=1;goto B47e775;
case 0x47e77b:goto L47e77b;
case 0x47e77d:c.instructions+=1;goto B47e77d;
case 0x47e782:goto L47e782;
case 0x47e784:c.instructions+=1;goto B47e784;
case 0x47e78a:goto L47e78a;
case 0x47e78f:c.instructions+=1;goto B47e78f;
case 0x47e794:goto L47e794;
case 0x47e79a:c.instructions+=4;goto B47e79a;
case 0x47e79d:c.instructions+=3;goto B47e79d;
case 0x47e79f:c.instructions+=2;goto B47e79f;
case 0x47e7a2:c.instructions+=1;goto B47e7a2;
case 0x47e7a4:goto L47e7a4;
case 0x47e7aa:c.instructions+=6;goto B47e7aa;
case 0x47e7ad:c.instructions+=5;goto B47e7ad;
case 0x47e7b3:c.instructions+=4;goto B47e7b3;
case 0x47e7b6:c.instructions+=3;goto B47e7b6;
case 0x47e7b8:c.instructions+=2;goto B47e7b8;
case 0x47e7bb:c.instructions+=1;goto B47e7bb;
case 0x47e7bd:goto L47e7bd;
case 0x47e7c0:c.instructions+=2;goto B47e7c0;
case 0x47e7c6:c.instructions+=1;goto B47e7c6;
case 0x47e7cb:goto L47e7cb;
case 0x47e7cc:c.instructions+=2;goto B47e7cc;
case 0x47e7ce:c.instructions+=1;goto B47e7ce;
case 0x47e7d3:goto L47e7d3;
case 0x47e7d9:c.instructions+=6;goto B47e7d9;
case 0x47e7df:c.instructions+=5;goto B47e7df;
case 0x47e7e1:c.instructions+=4;goto B47e7e1;
case 0x47e7e4:c.instructions+=3;goto B47e7e4;
case 0x47e7eb:c.instructions+=2;goto B47e7eb;
case 0x47e7ee:c.instructions+=1;goto B47e7ee;
case 0x47e7f3:goto L47e7f3;
case 0x47e7f9:c.instructions+=5;goto B47e7f9;
case 0x47e7fc:c.instructions+=4;goto B47e7fc;
case 0x47e7fd:c.instructions+=3;goto B47e7fd;
case 0x47e7ff:c.instructions+=2;goto B47e7ff;
case 0x47e805:c.instructions+=1;goto B47e805;
case 0x47e80a:goto L47e80a;
case 0x47e80b:c.instructions+=1;goto B47e80b;
case 0x47e80d:goto L47e80d;
case 0x47e813:c.instructions+=7;goto B47e813;
case 0x47e816:c.instructions+=6;goto B47e816;
case 0x47e81c:c.instructions+=5;goto B47e81c;
case 0x47e81f:c.instructions+=4;goto B47e81f;
case 0x47e821:c.instructions+=3;goto B47e821;
case 0x47e823:c.instructions+=2;goto B47e823;
case 0x47e826:c.instructions+=1;goto B47e826;
case 0x47e828:goto L47e828;
case 0x47e82e:c.instructions+=2;goto B47e82e;
case 0x47e830:c.instructions+=1;goto B47e830;
case 0x47e832:goto L47e832;
case 0x47e838:c.instructions+=2;goto B47e838;
case 0x47e83a:c.instructions+=1;goto B47e83a;
case 0x47e83c:goto L47e83c;
case 0x47e842:c.instructions+=2;goto B47e842;
case 0x47e844:c.instructions+=1;goto B47e844;
case 0x47e846:goto L47e846;
case 0x47e848:c.instructions+=1;goto B47e848;
case 0x47e84d:goto L47e84d;
case 0x47e853:c.instructions+=2;goto B47e853;
case 0x47e855:c.instructions+=1;goto B47e855;
case 0x47e857:goto L47e857;
case 0x47e85d:c.instructions+=2;goto B47e85d;
case 0x47e85f:c.instructions+=1;goto B47e85f;
case 0x47e861:goto L47e861;
case 0x47e863:c.instructions+=1;goto B47e863;
case 0x47e868:goto L47e868;
case 0x47e869:c.instructions+=1;goto B47e869;
case 0x47e870:goto L47e870;
case 0x47e875:c.instructions+=2;goto B47e875;
case 0x47e876:c.instructions+=1;goto B47e876;
case 0x47e87b:goto L47e87b;
case 0x47e87e:c.instructions+=2;goto B47e87e;
case 0x47e883:c.instructions+=1;goto B47e883;
case 0x47e885:goto L47e885;
case 0x47e88b:c.instructions+=5;goto B47e88b;
case 0x47e88e:c.instructions+=4;goto B47e88e;
case 0x47e894:c.instructions+=3;goto B47e894;
case 0x47e895:c.instructions+=2;goto B47e895;
case 0x47e89a:c.instructions+=1;goto B47e89a;
case 0x47e89f:goto L47e89f;
case 0x47e8a2:c.instructions+=2;goto B47e8a2;
case 0x47e8a4:c.instructions+=1;goto B47e8a4;
case 0x47e8a6:goto L47e8a6;
case 0x47e8a8:c.instructions+=1;goto B47e8a8;
case 0x47e8ad:goto L47e8ad;
case 0x47e8af:c.instructions+=1;goto B47e8af;
case 0x47e8b0:goto L47e8b0;
case 0x47e8b1:c.instructions+=2;goto B47e8b1;
case 0x47e8b3:c.instructions+=1;goto B47e8b3;
case 0x47e8b8:goto L47e8b8;
case 0x47e8bd:c.instructions+=1;goto B47e8bd;
case 0x47e8bf:goto L47e8bf;
case 0x47e8c0:c.instructions+=1;goto B47e8c0;
case 0x47e8c5:goto L47e8c5;
case 0x47e8c8:goto L47e8c8;
case 0x47e8ca:c.instructions+=2;goto B47e8ca;
case 0x47e8cb:c.instructions+=1;goto B47e8cb;
case 0x47e8d0:goto L47e8d0;
case 0x47e8d3:c.instructions+=8;goto B47e8d3;
case 0x47e8d4:c.instructions+=7;goto B47e8d4;
case 0x47e8d5:c.instructions+=6;goto B47e8d5;
case 0x47e8d7:c.instructions+=5;goto B47e8d7;
case 0x47e8dd:c.instructions+=4;goto B47e8dd;
case 0x47e8df:c.instructions+=3;goto B47e8df;
case 0x47e8e1:c.instructions+=2;goto B47e8e1;
case 0x47e8e4:c.instructions+=1;goto B47e8e4;
case 0x47e8ea:goto L47e8ea;
case 0x47e8ec:c.instructions+=4;goto B47e8ec;
case 0x47e8ee:c.instructions+=3;goto B47e8ee;
case 0x47e8f2:c.instructions+=2;goto B47e8f2;
case 0x47e8f6:c.instructions+=1;goto B47e8f6;
case 0x47e8f9:goto L47e8f9;
case 0x47e8fb:c.instructions+=4;goto B47e8fb;
case 0x47e8fd:c.instructions+=3;goto B47e8fd;
case 0x47e8ff:c.instructions+=2;goto B47e8ff;
case 0x47e903:c.instructions+=1;goto B47e903;
case 0x47e906:goto L47e906;
case 0x47e90c:c.instructions+=5;goto B47e90c;
case 0x47e910:c.instructions+=4;goto B47e910;
case 0x47e914:c.instructions+=3;goto B47e914;
case 0x47e915:c.instructions+=2;goto B47e915;
case 0x47e91d:c.instructions+=1;goto B47e91d;
case 0x47e922:goto L47e922;
case 0x47e924:c.instructions+=1;goto B47e924;
case 0x47e929:goto L47e929;
case 0x47e92f:c.instructions+=4;goto B47e92f;
case 0x47e935:c.instructions+=3;goto B47e935;
case 0x47e937:c.instructions+=2;goto B47e937;
case 0x47e93a:c.instructions+=1;goto B47e93a;
case 0x47e93c:goto L47e93c;
case 0x47e93e:c.instructions+=1;goto B47e93e;
case 0x47e940:goto L47e940;
case 0x47e942:c.instructions+=2;goto B47e942;
case 0x47e944:c.instructions+=1;goto B47e944;
case 0x47e946:goto L47e946;
case 0x47e94c:c.instructions+=4;goto B47e94c;
case 0x47e94d:c.instructions+=3;goto B47e94d;
case 0x47e94e:c.instructions+=2;goto B47e94e;
case 0x47e951:c.instructions+=1;goto B47e951;
case 0x47e952:goto L47e952;
case 0x47e955:c.instructions+=1;goto B47e955;
case 0x47e957:goto L47e957;
case 0x47e95d:c.instructions+=2;goto B47e95d;
case 0x47e960:c.instructions+=1;goto B47e960;
case 0x47e962:goto L47e962;
case 0x47e964:c.instructions+=1;goto B47e964;
case 0x47e966:goto L47e966;
case 0x47e968:c.instructions+=2;goto B47e968;
case 0x47e96a:c.instructions+=1;goto B47e96a;
case 0x47e96c:goto L47e96c;
case 0x47e972:goto L47e972;
case 0x47e973:c.instructions+=3;goto B47e973;
case 0x47e974:c.instructions+=2;goto B47e974;
case 0x47e977:c.instructions+=1;goto B47e977;
case 0x47e980:goto L47e980;
case 0x47e981:c.instructions+=2;goto B47e981;
case 0x47e983:c.instructions+=1;goto B47e983;
case 0x47e988:goto L47e988;
case 0x47e98e:c.instructions+=3;goto B47e98e;
case 0x47e990:c.instructions+=2;goto B47e990;
case 0x47e991:c.instructions+=1;goto B47e991;
case 0x47e9a0:goto L47e9a0;
case 0x47e9a1:c.instructions+=2;goto B47e9a1;
case 0x47e9a3:c.instructions+=1;goto B47e9a3;
case 0x47e9a8:goto L47e9a8;
case 0x47e9ad:c.instructions+=1;goto B47e9ad;
case 0x47e9af:goto L47e9af;
case 0x47e9b0:c.instructions+=1;goto B47e9b0;
case 0x47e9b5:goto L47e9b5;
case 0x47e9b8:goto L47e9b8;
case 0x47e9ba:c.instructions+=2;goto B47e9ba;
case 0x47e9bb:c.instructions+=1;goto B47e9bb;
case 0x47e9c0:goto L47e9c0;
case 0x47e9c6:c.instructions+=1;goto B47e9c6;
case 0x47e9d0:goto L47e9d0;
case 0x47e9d5:c.instructions+=2;goto B47e9d5;
case 0x47e9d6:c.instructions+=1;goto B47e9d6;
case 0x47e9db:goto L47e9db;
case 0x47e9de:c.instructions+=2;goto B47e9de;
case 0x47e9e3:c.instructions+=1;goto B47e9e3;
case 0x47e9e5:goto L47e9e5;
case 0x47e9eb:c.instructions+=5;goto B47e9eb;
case 0x47e9ee:c.instructions+=4;goto B47e9ee;
case 0x47e9f4:c.instructions+=3;goto B47e9f4;
case 0x47e9f5:c.instructions+=2;goto B47e9f5;
case 0x47e9fa:c.instructions+=1;goto B47e9fa;
case 0x47e9ff:goto L47e9ff;
case 0x47ea02:c.instructions+=2;goto B47ea02;
case 0x47ea04:c.instructions+=1;goto B47ea04;
case 0x47ea06:goto L47ea06;
case 0x47ea08:c.instructions+=1;goto B47ea08;
case 0x47ea0d:goto L47ea0d;
case 0x47ea0f:c.instructions+=1;goto B47ea0f;
case 0x47ea10:goto L47ea10;
case 0x47ea11:c.instructions+=2;goto B47ea11;
case 0x47ea13:c.instructions+=1;goto B47ea13;
case 0x47ea18:goto L47ea18;
case 0x47ea1d:c.instructions+=1;goto B47ea1d;
case 0x47ea1f:goto L47ea1f;
case 0x47ea20:c.instructions+=1;goto B47ea20;
case 0x47ea25:goto L47ea25;
case 0x47ea28:goto L47ea28;
case 0x47ea2a:c.instructions+=2;goto B47ea2a;
case 0x47ea2b:c.instructions+=1;goto B47ea2b;
case 0x47ea30:goto L47ea30;
case 0x47ea31:c.instructions+=7;goto B47ea31;
case 0x47ea32:c.instructions+=6;goto B47ea32;
case 0x47ea33:c.instructions+=5;goto B47ea33;
case 0x47ea35:c.instructions+=4;goto B47ea35;
case 0x47ea3b:c.instructions+=3;goto B47ea3b;
case 0x47ea3d:c.instructions+=2;goto B47ea3d;
case 0x47ea3f:c.instructions+=1;goto B47ea3f;
case 0x47ea41:goto L47ea41;
case 0x47ea43:c.instructions+=2;goto B47ea43;
case 0x47ea45:c.instructions+=1;goto B47ea45;
case 0x47ea47:goto L47ea47;
case 0x47ea4b:c.instructions+=5;goto B47ea4b;
case 0x47ea51:c.instructions+=4;goto B47ea51;
case 0x47ea57:c.instructions+=3;goto B47ea57;
case 0x47ea59:c.instructions+=2;goto B47ea59;
case 0x47ea5c:c.instructions+=1;goto B47ea5c;
case 0x47ea5e:goto L47ea5e;
case 0x47ea62:c.instructions+=5;goto B47ea62;
case 0x47ea68:c.instructions+=4;goto B47ea68;
case 0x47ea6c:c.instructions+=3;goto B47ea6c;
case 0x47ea6e:c.instructions+=2;goto B47ea6e;
case 0x47ea71:c.instructions+=1;goto B47ea71;
case 0x47ea73:goto L47ea73;
case 0x47ea75:c.instructions+=1;goto B47ea75;
case 0x47ea7b:goto L47ea7b;
case 0x47ea7f:c.instructions+=1;goto B47ea7f;
case 0x47ea81:goto L47ea81;
case 0x47ea87:c.instructions+=2;goto B47ea87;
case 0x47ea8d:c.instructions+=1;goto B47ea8d;
case 0x47ea8f:goto L47ea8f;
case 0x47ea90:c.instructions+=2;goto B47ea90;
case 0x47ea93:c.instructions+=1;goto B47ea93;
case 0x47ea94:goto L47ea94;
case 0x47ea9a:c.instructions+=1;goto B47ea9a;
case 0x47ea9f:goto L47ea9f;
case 0x47eaa2:c.instructions+=7;goto B47eaa2;
case 0x47eaa4:c.instructions+=6;goto B47eaa4;
case 0x47eaa6:c.instructions+=5;goto B47eaa6;
case 0x47eaa8:c.instructions+=4;goto B47eaa8;
case 0x47eaab:c.instructions+=3;goto B47eaab;
case 0x47eaac:c.instructions+=2;goto B47eaac;
case 0x47eab2:c.instructions+=1;goto B47eab2;
case 0x47eab4:goto L47eab4;
case 0x47eaba:c.instructions+=1;goto B47eaba;
case 0x47eabc:goto L47eabc;
case 0x47eac2:c.instructions+=2;goto B47eac2;
case 0x47eac8:c.instructions+=1;goto B47eac8;
case 0x47eaca:goto L47eaca;
case 0x47eacb:c.instructions+=2;goto B47eacb;
case 0x47eace:c.instructions+=1;goto B47eace;
case 0x47eacf:goto L47eacf;
case 0x47ead5:c.instructions+=1;goto B47ead5;
case 0x47eada:goto L47eada;
case 0x47eadd:c.instructions+=6;goto B47eadd;
case 0x47eadf:c.instructions+=5;goto B47eadf;
case 0x47eae1:c.instructions+=4;goto B47eae1;
case 0x47eae3:c.instructions+=3;goto B47eae3;
case 0x47eae6:c.instructions+=2;goto B47eae6;
case 0x47eae7:c.instructions+=1;goto B47eae7;
case 0x47eaed:goto L47eaed;
case 0x47eaf3:c.instructions+=4;goto B47eaf3;
case 0x47eaf9:c.instructions+=3;goto B47eaf9;
case 0x47eafa:c.instructions+=2;goto B47eafa;
case 0x47eafd:c.instructions+=1;goto B47eafd;
case 0x47eb02:goto L47eb02;
case 0x47eb08:c.instructions+=3;goto B47eb08;
case 0x47eb0b:c.instructions+=2;goto B47eb0b;
case 0x47eb0c:c.instructions+=1;goto B47eb0c;
case 0x47eb11:goto L47eb11;
case 0x47eb14:c.instructions+=2;goto B47eb14;
case 0x47eb19:c.instructions+=1;goto B47eb19;
case 0x47eb1b:goto L47eb1b;
case 0x47eb20:c.instructions+=5;goto B47eb20;
case 0x47eb23:c.instructions+=4;goto B47eb23;
case 0x47eb28:c.instructions+=3;goto B47eb28;
case 0x47eb29:c.instructions+=2;goto B47eb29;
case 0x47eb2b:c.instructions+=1;goto B47eb2b;
case 0x47eb30:goto L47eb30;
case 0x47eb33:c.instructions+=2;goto B47eb33;
case 0x47eb35:c.instructions+=1;goto B47eb35;
case 0x47eb37:goto L47eb37;
case 0x47eb38:c.instructions+=2;goto B47eb38;
case 0x47eb3a:c.instructions+=1;goto B47eb3a;
case 0x47eb3f:goto L47eb3f;
case 0x47eb41:goto L47eb41;
case 0x47eb43:goto L47eb43;
case 0x47eb46:c.instructions+=7;goto B47eb46;
case 0x47eb4c:c.instructions+=6;goto B47eb4c;
case 0x47eb4d:c.instructions+=5;goto B47eb4d;
case 0x47eb4f:c.instructions+=4;goto B47eb4f;
case 0x47eb52:c.instructions+=3;goto B47eb52;
case 0x47eb55:c.instructions+=2;goto B47eb55;
case 0x47eb58:c.instructions+=1;goto B47eb58;
case 0x47eb5d:goto L47eb5d;
case 0x47eb60:c.instructions+=4;goto B47eb60;
case 0x47eb63:c.instructions+=3;goto B47eb63;
case 0x47eb66:c.instructions+=2;goto B47eb66;
case 0x47eb67:c.instructions+=1;goto B47eb67;
case 0x47eb6c:goto L47eb6c;
case 0x47eb6f:c.instructions+=2;goto B47eb6f;
case 0x47eb71:c.instructions+=1;goto B47eb71;
case 0x47eb77:goto L47eb77;
case 0x47eb7b:c.instructions+=1;goto B47eb7b;
case 0x47eb81:goto L47eb81;
case 0x47eb87:c.instructions+=2;goto B47eb87;
case 0x47eb89:c.instructions+=1;goto B47eb89;
case 0x47eb8b:goto L47eb8b;
case 0x47eb8d:c.instructions+=2;goto B47eb8d;
case 0x47eb8f:c.instructions+=1;goto B47eb8f;
case 0x47eb91:goto L47eb91;
case 0x47eb96:c.instructions+=2;goto B47eb96;
case 0x47eb9c:c.instructions+=1;goto B47eb9c;
case 0x47eba1:goto L47eba1;
case 0x47eba7:c.instructions+=3;goto B47eba7;
case 0x47ebaa:c.instructions+=2;goto B47ebaa;
case 0x47ebb0:c.instructions+=1;goto B47ebb0;
case 0x47ebb2:goto L47ebb2;
case 0x47ebb3:c.instructions+=2;goto B47ebb3;
case 0x47ebb6:c.instructions+=1;goto B47ebb6;
case 0x47ebb7:goto L47ebb7;
case 0x47ebbd:c.instructions+=1;goto B47ebbd;
case 0x47ebc2:goto L47ebc2;
case 0x47ebc8:c.instructions+=11;goto B47ebc8;
case 0x47ebcb:c.instructions+=10;goto B47ebcb;
case 0x47ebcd:c.instructions+=9;goto B47ebcd;
case 0x47ebcf:c.instructions+=8;goto B47ebcf;
case 0x47ebd1:c.instructions+=7;goto B47ebd1;
case 0x47ebd7:c.instructions+=6;goto B47ebd7;
case 0x47ebda:c.instructions+=5;goto B47ebda;
case 0x47ebdb:c.instructions+=4;goto B47ebdb;
case 0x47ebdc:c.instructions+=3;goto B47ebdc;
case 0x47ebdf:c.instructions+=2;goto B47ebdf;
case 0x47ebe5:c.instructions+=1;goto B47ebe5;
case 0x47ebea:goto L47ebea;
case 0x47ebed:c.instructions+=3;goto B47ebed;
case 0x47ebf2:c.instructions+=2;goto B47ebf2;
case 0x47ebf3:c.instructions+=1;goto B47ebf3;
case 0x47ebf8:goto L47ebf8;
case 0x47ebfb:c.instructions+=2;goto B47ebfb;
case 0x47ec00:c.instructions+=1;goto B47ec00;
case 0x47ec02:goto L47ec02;
case 0x47ec08:c.instructions+=5;goto B47ec08;
case 0x47ec0b:c.instructions+=4;goto B47ec0b;
case 0x47ec11:c.instructions+=3;goto B47ec11;
case 0x47ec12:c.instructions+=2;goto B47ec12;
case 0x47ec14:c.instructions+=1;goto B47ec14;
case 0x47ec19:goto L47ec19;
case 0x47ec1c:c.instructions+=2;goto B47ec1c;
case 0x47ec1e:c.instructions+=1;goto B47ec1e;
case 0x47ec20:goto L47ec20;
case 0x47ec21:c.instructions+=2;goto B47ec21;
case 0x47ec23:c.instructions+=1;goto B47ec23;
case 0x47ec28:goto L47ec28;
case 0x47ec2a:goto L47ec2a;
case 0x47ec2c:goto L47ec2c;
case 0x47ec32:c.instructions+=7;goto B47ec32;
case 0x47ec35:c.instructions+=6;goto B47ec35;
case 0x47ec36:c.instructions+=5;goto B47ec36;
case 0x47ec38:c.instructions+=4;goto B47ec38;
case 0x47ec3b:c.instructions+=3;goto B47ec3b;
case 0x47ec3e:c.instructions+=2;goto B47ec3e;
case 0x47ec41:c.instructions+=1;goto B47ec41;
case 0x47ec46:goto L47ec46;
case 0x47ec4d:c.instructions+=4;goto B47ec4d;
case 0x47ec4e:c.instructions+=3;goto B47ec4e;
case 0x47ec4f:c.instructions+=2;goto B47ec4f;
case 0x47ec50:c.instructions+=1;goto B47ec50;
case 0x47ec60:goto L47ec60;
case 0x47ec61:c.instructions+=4;goto B47ec61;
case 0x47ec63:c.instructions+=3;goto B47ec63;
case 0x47ec69:c.instructions+=2;goto B47ec69;
case 0x47ec6b:c.instructions+=1;goto B47ec6b;
case 0x47ec71:goto L47ec71;
case 0x47ec75:c.instructions+=3;goto B47ec75;
case 0x47ec79:c.instructions+=2;goto B47ec79;
case 0x47ec7b:c.instructions+=1;goto B47ec7b;
case 0x47ec7d:goto L47ec7d;
case 0x47ec83:goto L47ec83;
case 0x47ec87:c.instructions+=4;goto B47ec87;
case 0x47ec8d:c.instructions+=3;goto B47ec8d;
case 0x47ec8f:c.instructions+=2;goto B47ec8f;
case 0x47ec92:c.instructions+=1;goto B47ec92;
case 0x47ec98:goto L47ec98;
case 0x47ec9c:c.instructions+=5;goto B47ec9c;
case 0x47eca2:c.instructions+=4;goto B47eca2;
case 0x47eca6:c.instructions+=3;goto B47eca6;
case 0x47eca8:c.instructions+=2;goto B47eca8;
case 0x47ecab:c.instructions+=1;goto B47ecab;
case 0x47ecad:goto L47ecad;
case 0x47ecaf:c.instructions+=1;goto B47ecaf;
case 0x47ecb5:goto L47ecb5;
case 0x47ecb6:c.instructions+=3;goto B47ecb6;
case 0x47ecbc:c.instructions+=2;goto B47ecbc;
case 0x47ecc2:c.instructions+=1;goto B47ecc2;
case 0x47ecc4:goto L47ecc4;
case 0x47ecc5:c.instructions+=2;goto B47ecc5;
case 0x47ecc8:c.instructions+=1;goto B47ecc8;
case 0x47ecc9:goto L47ecc9;
case 0x47eccf:c.instructions+=1;goto B47eccf;
case 0x47ecd4:goto L47ecd4;
case 0x47ecda:c.instructions+=11;goto B47ecda;
case 0x47ecdd:c.instructions+=10;goto B47ecdd;
case 0x47ecdf:c.instructions+=9;goto B47ecdf;
case 0x47ece1:c.instructions+=8;goto B47ece1;
case 0x47ece3:c.instructions+=7;goto B47ece3;
case 0x47ece9:c.instructions+=6;goto B47ece9;
case 0x47ecec:c.instructions+=5;goto B47ecec;
case 0x47eced:c.instructions+=4;goto B47eced;
case 0x47ecee:c.instructions+=3;goto B47ecee;
case 0x47ecf1:c.instructions+=2;goto B47ecf1;
case 0x47ecf7:c.instructions+=1;goto B47ecf7;
case 0x47ecfc:goto L47ecfc;
case 0x47ecff:c.instructions+=3;goto B47ecff;
case 0x47ed04:c.instructions+=2;goto B47ed04;
case 0x47ed05:c.instructions+=1;goto B47ed05;
case 0x47ed0a:goto L47ed0a;
case 0x47ed0d:c.instructions+=2;goto B47ed0d;
case 0x47ed12:c.instructions+=1;goto B47ed12;
case 0x47ed14:goto L47ed14;
case 0x47ed1a:c.instructions+=5;goto B47ed1a;
case 0x47ed1d:c.instructions+=4;goto B47ed1d;
case 0x47ed23:c.instructions+=3;goto B47ed23;
case 0x47ed24:c.instructions+=2;goto B47ed24;
case 0x47ed26:c.instructions+=1;goto B47ed26;
case 0x47ed2b:goto L47ed2b;
case 0x47ed2e:c.instructions+=2;goto B47ed2e;
case 0x47ed30:c.instructions+=1;goto B47ed30;
case 0x47ed32:goto L47ed32;
case 0x47ed33:c.instructions+=2;goto B47ed33;
case 0x47ed35:c.instructions+=1;goto B47ed35;
case 0x47ed3a:goto L47ed3a;
case 0x47ed3c:goto L47ed3c;
case 0x47ed42:c.instructions+=1;goto B47ed42;
case 0x47ed47:goto L47ed47;
case 0x47ed49:goto L47ed49;
case 0x47ed4f:c.instructions+=7;goto B47ed4f;
case 0x47ed52:c.instructions+=6;goto B47ed52;
case 0x47ed53:c.instructions+=5;goto B47ed53;
case 0x47ed55:c.instructions+=4;goto B47ed55;
case 0x47ed5c:c.instructions+=3;goto B47ed5c;
case 0x47ed63:c.instructions+=2;goto B47ed63;
case 0x47ed6a:c.instructions+=1;goto B47ed6a;
case 0x47ed6f:goto L47ed6f;
case 0x47ed76:c.instructions+=1;goto B47ed76;
case 0x47ed77:goto L47ed77;
case 0x47ed78:c.instructions+=1;goto B47ed78;
case 0x47ed80:goto L47ed80;
case 0x47ed81:c.instructions+=12;goto B47ed81;
case 0x47ed83:c.instructions+=11;goto B47ed83;
case 0x47ed86:c.instructions+=10;goto B47ed86;
case 0x47ed89:c.instructions+=9;goto B47ed89;
case 0x47ed8a:c.instructions+=8;goto B47ed8a;
case 0x47ed8b:c.instructions+=7;goto B47ed8b;
case 0x47ed8d:c.instructions+=6;goto B47ed8d;
case 0x47ed90:c.instructions+=5;goto B47ed90;
case 0x47ed93:c.instructions+=4;goto B47ed93;
case 0x47ed95:c.instructions+=3;goto B47ed95;
case 0x47ed97:c.instructions+=2;goto B47ed97;
case 0x47ed98:c.instructions+=1;goto B47ed98;
case 0x47ed9e:goto L47ed9e;
case 0x47eda4:c.instructions+=6;goto B47eda4;
case 0x47eda6:c.instructions+=5;goto B47eda6;
case 0x47edaa:c.instructions+=4;goto B47edaa;
case 0x47edae:c.instructions+=3;goto B47edae;
case 0x47edb2:c.instructions+=2;goto B47edb2;
case 0x47edb6:c.instructions+=1;goto B47edb6;
case 0x47edb8:goto L47edb8;
case 0x47edbe:c.instructions+=1;goto B47edbe;
case 0x47edc0:goto L47edc0;
case 0x47edc5:goto L47edc5;
case 0x47edcb:c.instructions+=1;goto B47edcb;
case 0x47edcd:goto L47edcd;
case 0x47edd3:c.instructions+=1;goto B47edd3;
case 0x47edd5:goto L47edd5;
case 0x47edda:goto L47edda;
case 0x47ede0:c.instructions+=1;goto B47ede0;
case 0x47ede2:goto L47ede2;
case 0x47ede8:c.instructions+=1;goto B47ede8;
case 0x47edea:goto L47edea;
case 0x47edef:goto L47edef;
case 0x47edf5:c.instructions+=1;goto B47edf5;
case 0x47edf7:goto L47edf7;
case 0x47edf9:c.instructions+=1;goto B47edf9;
case 0x47edfb:goto L47edfb;
case 0x47ee00:goto L47ee00;
case 0x47ee03:c.instructions+=2;goto B47ee03;
case 0x47ee07:c.instructions+=1;goto B47ee07;
case 0x47ee09:goto L47ee09;
case 0x47ee0f:c.instructions+=1;goto B47ee0f;
case 0x47ee11:goto L47ee11;
case 0x47ee17:c.instructions+=2;goto B47ee17;
case 0x47ee1d:c.instructions+=1;goto B47ee1d;
case 0x47ee1f:goto L47ee1f;
case 0x47ee25:c.instructions+=4;goto B47ee25;
case 0x47ee26:c.instructions+=3;goto B47ee26;
case 0x47ee28:c.instructions+=2;goto B47ee28;
case 0x47ee2e:c.instructions+=1;goto B47ee2e;
case 0x47ee33:goto L47ee33;
case 0x47ee39:c.instructions+=1;goto B47ee39;
case 0x47ee3b:goto L47ee3b;
case 0x47ee3e:c.instructions+=9;goto B47ee3e;
case 0x47ee41:c.instructions+=8;goto B47ee41;
case 0x47ee47:c.instructions+=7;goto B47ee47;
case 0x47ee4d:c.instructions+=6;goto B47ee4d;
case 0x47ee53:c.instructions+=5;goto B47ee53;
case 0x47ee59:c.instructions+=4;goto B47ee59;
case 0x47ee5f:c.instructions+=3;goto B47ee5f;
case 0x47ee61:c.instructions+=2;goto B47ee61;
case 0x47ee64:c.instructions+=1;goto B47ee64;
case 0x47ee66:goto L47ee66;
case 0x47ee6b:goto L47ee6b;
case 0x47ee71:c.instructions+=3;goto B47ee71;
case 0x47ee73:c.instructions+=2;goto B47ee73;
case 0x47ee76:c.instructions+=1;goto B47ee76;
case 0x47ee78:goto L47ee78;
case 0x47ee7f:goto L47ee7f;
case 0x47ee82:c.instructions+=6;goto B47ee82;
case 0x47ee85:c.instructions+=5;goto B47ee85;
case 0x47ee8b:c.instructions+=4;goto B47ee8b;
case 0x47ee8d:c.instructions+=3;goto B47ee8d;
case 0x47ee8f:c.instructions+=2;goto B47ee8f;
case 0x47ee93:c.instructions+=1;goto B47ee93;
case 0x47ee95:goto L47ee95;
case 0x47ee9b:c.instructions+=1;goto B47ee9b;
case 0x47ee9d:goto L47ee9d;
case 0x47eea3:c.instructions+=4;goto B47eea3;
case 0x47eea9:c.instructions+=3;goto B47eea9;
case 0x47eeab:c.instructions+=2;goto B47eeab;
case 0x47eeae:c.instructions+=1;goto B47eeae;
case 0x47eeb0:goto L47eeb0;
case 0x47eeb6:c.instructions+=1;goto B47eeb6;
case 0x47eeb8:goto L47eeb8;
case 0x47eebe:c.instructions+=1;goto B47eebe;
case 0x47eec0:goto L47eec0;
case 0x47eec6:c.instructions+=1;goto B47eec6;
case 0x47eec8:goto L47eec8;
case 0x47eece:c.instructions+=4;goto B47eece;
case 0x47eed4:c.instructions+=3;goto B47eed4;
case 0x47eed6:c.instructions+=2;goto B47eed6;
case 0x47eed9:c.instructions+=1;goto B47eed9;
case 0x47eedb:goto L47eedb;
case 0x47eee1:c.instructions+=1;goto B47eee1;
case 0x47eee3:goto L47eee3;
case 0x47eee9:c.instructions+=1;goto B47eee9;
case 0x47eeeb:goto L47eeeb;
case 0x47eeed:c.instructions+=1;goto B47eeed;
case 0x47eef1:goto L47eef1;
case 0x47eef7:c.instructions+=1;goto B47eef7;
case 0x47eef9:goto L47eef9;
case 0x47eefd:c.instructions+=1;goto B47eefd;
case 0x47eeff:goto L47eeff;
case 0x47ef05:c.instructions+=1;goto B47ef05;
case 0x47ef07:goto L47ef07;
case 0x47ef0b:c.instructions+=1;goto B47ef0b;
case 0x47ef0d:goto L47ef0d;
case 0x47ef13:c.instructions+=1;goto B47ef13;
case 0x47ef15:goto L47ef15;
case 0x47ef19:c.instructions+=1;goto B47ef19;
case 0x47ef1b:goto L47ef1b;
case 0x47ef21:c.instructions+=1;goto B47ef21;
case 0x47ef23:goto L47ef23;
case 0x47ef27:c.instructions+=1;goto B47ef27;
case 0x47ef29:goto L47ef29;
case 0x47ef2f:c.instructions+=1;goto B47ef2f;
case 0x47ef31:goto L47ef31;
case 0x47ef36:c.instructions+=1;goto B47ef36;
case 0x47ef38:goto L47ef38;
case 0x47ef3a:c.instructions+=1;goto B47ef3a;
case 0x47ef40:goto L47ef40;
case 0x47ef44:c.instructions+=2;goto B47ef44;
case 0x47ef4c:c.instructions+=1;goto B47ef4c;
case 0x47ef4e:goto L47ef4e;
case 0x47ef50:c.instructions+=1;goto B47ef50;
case 0x47ef55:goto L47ef55;
case 0x47ef58:c.instructions+=10;goto B47ef58;
case 0x47ef5b:c.instructions+=9;goto B47ef5b;
case 0x47ef5e:c.instructions+=8;goto B47ef5e;
case 0x47ef61:c.instructions+=7;goto B47ef61;
case 0x47ef64:c.instructions+=6;goto B47ef64;
case 0x47ef67:c.instructions+=5;goto B47ef67;
case 0x47ef6e:c.instructions+=4;goto B47ef6e;
case 0x47ef73:c.instructions+=3;goto B47ef73;
case 0x47ef75:c.instructions+=2;goto B47ef75;
case 0x47ef7b:c.instructions+=1;goto B47ef7b;
case 0x47ef80:goto L47ef80;
case 0x47ef86:c.instructions+=6;goto B47ef86;
case 0x47ef8a:c.instructions+=5;goto B47ef8a;
case 0x47ef8d:c.instructions+=4;goto B47ef8d;
case 0x47ef90:c.instructions+=3;goto B47ef90;
case 0x47ef93:c.instructions+=2;goto B47ef93;
case 0x47ef97:c.instructions+=1;goto B47ef97;
case 0x47ef99:goto L47ef99;
case 0x47ef9d:c.instructions+=6;goto B47ef9d;
case 0x47efa1:c.instructions+=5;goto B47efa1;
case 0x47efa7:c.instructions+=4;goto B47efa7;
case 0x47efa8:c.instructions+=3;goto B47efa8;
case 0x47efa9:c.instructions+=2;goto B47efa9;
case 0x47efac:c.instructions+=1;goto B47efac;
case 0x47efae:goto L47efae;
case 0x47efb2:c.instructions+=2;goto B47efb2;
case 0x47efb3:c.instructions+=1;goto B47efb3;
case 0x47efb8:goto L47efb8;
case 0x47efba:c.instructions+=1;goto B47efba;
case 0x47efbf:goto L47efbf;
case 0x47efc2:c.instructions+=2;goto B47efc2;
case 0x47efc5:c.instructions+=1;goto B47efc5;
case 0x47efca:goto L47efca;
case 0x47efd0:c.instructions+=3;goto B47efd0;
case 0x47efd2:c.instructions+=2;goto B47efd2;
case 0x47efd5:c.instructions+=1;goto B47efd5;
case 0x47efd7:goto L47efd7;
case 0x47efdd:c.instructions+=1;goto B47efdd;
case 0x47efdf:goto L47efdf;
case 0x47efe5:goto L47efe5;
case 0x47efe8:c.instructions+=3;goto B47efe8;
case 0x47efeb:c.instructions+=2;goto B47efeb;
case 0x47eff1:c.instructions+=1;goto B47eff1;
case 0x47eff3:goto L47eff3;
case 0x47eff9:c.instructions+=1;goto B47eff9;
case 0x47effb:goto L47effb;
default:missing_instruction(c.pc);}
B47e004:L47e004:{c.instructions+=3;NFSU2_TR(0x47e004);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e005:{NFSU2_TR(0x47e005);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e00a:{NFSU2_TR(0x47e00a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e00full));
TAIL_STATIC(0x440820u,440);
}
B47e00f:L47e00f:{c.instructions+=3;NFSU2_TR(0x47e00f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e012:{NFSU2_TR(0x47e012);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e014:{NFSU2_TR(0x47e014);
if(r1(R+518)){{goto L47e01d;}}
}
B47e016:L47e016:{c.instructions+=2;NFSU2_TR(0x47e016);
__builtin_memmove((R+4),(R+0),4);
}
B47e018:{NFSU2_TR(0x47e018);
TAIL_STATIC(0x4746d0u,474);
}
B47e01d:L47e01d:{c.instructions+=2;NFSU2_TR(0x47e01d);
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
B47e01f:{NFSU2_TR(0x47e01f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e020:L47e020:{c.instructions+=12;NFSU2_TR(0x47e020);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e022:{NFSU2_TR(0x47e022);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e027:{NFSU2_TR(0x47e027);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e02d:{NFSU2_TR(0x47e02d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e02e:{NFSU2_TR(0x47e02e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e035:{NFSU2_TR(0x47e035);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e036:{NFSU2_TR(0x47e036);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e037:{NFSU2_TR(0x47e037);
__builtin_memmove((R+24),(R+4),4);
}
B47e039:{NFSU2_TR(0x47e039);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e03d:{NFSU2_TR(0x47e03d);
u8 U[4];
w4(U+0,u32(0x78afd0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47e043:{NFSU2_TR(0x47e043);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47e04b:{NFSU2_TR(0x47e04b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e050ull));
TAIL_STATIC(0x474720u,474);
}
B47e050:L47e050:{c.instructions+=6;NFSU2_TR(0x47e050);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47e054:{NFSU2_TR(0x47e054);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47e05a:{NFSU2_TR(0x47e05a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e05b:{NFSU2_TR(0x47e05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e062:{NFSU2_TR(0x47e062);
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
B47e065:{NFSU2_TR(0x47e065);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e070:L47e070:{c.instructions+=3;NFSU2_TR(0x47e070);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e075:{NFSU2_TR(0x47e075);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e076:{NFSU2_TR(0x47e076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e07bull));
TAIL_STATIC(0x43e910u,43e);
}
B47e07b:L47e07b:{c.instructions+=3;NFSU2_TR(0x47e07b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e07e:{NFSU2_TR(0x47e07e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x518ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x518ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e083:{NFSU2_TR(0x47e083);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e0ad;}}
}
B47e085:L47e085:{c.instructions+=6;NFSU2_TR(0x47e085);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e08b:{NFSU2_TR(0x47e08b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e08e:{NFSU2_TR(0x47e08e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e094:{NFSU2_TR(0x47e094);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e095:{NFSU2_TR(0x47e095);
u8 U[4];
w4(U+0,u32(0x118ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e09a:{NFSU2_TR(0x47e09a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e09full));
TAIL_STATIC(0x440820u,440);
}
B47e09f:L47e09f:{c.instructions+=3;NFSU2_TR(0x47e09f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e0a2:{NFSU2_TR(0x47e0a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e0a4:{NFSU2_TR(0x47e0a4);
if(r1(R+518)){{goto L47e0ad;}}
}
B47e0a6:L47e0a6:{c.instructions+=2;NFSU2_TR(0x47e0a6);
__builtin_memmove((R+4),(R+0),4);
}
B47e0a8:{NFSU2_TR(0x47e0a8);
TAIL_STATIC(0x474930u,474);
}
B47e0ad:L47e0ad:{c.instructions+=2;NFSU2_TR(0x47e0ad);
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
B47e0af:{NFSU2_TR(0x47e0af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e0b0:L47e0b0:{c.instructions+=3;NFSU2_TR(0x47e0b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e0b1:{NFSU2_TR(0x47e0b1);
__builtin_memmove((R+24),(R+4),4);
}
B47e0b3:{NFSU2_TR(0x47e0b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e0b8ull));
TAIL_STATIC(0x4749d0u,474);
}
B47e0b8:L47e0b8:{c.instructions+=2;NFSU2_TR(0x47e0b8);
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
B47e0bd:{NFSU2_TR(0x47e0bd);
if(r1(R+518)){{goto L47e0c8;}}
}
B47e0bf:L47e0bf:{c.instructions+=2;NFSU2_TR(0x47e0bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e0c0:{NFSU2_TR(0x47e0c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e0c5ull));
TAIL_STATIC(0x440540u,440);
}
B47e0c5:L47e0c5:{c.instructions+=1;NFSU2_TR(0x47e0c5);
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
B47e0c8:L47e0c8:{c.instructions+=3;NFSU2_TR(0x47e0c8);
__builtin_memmove((R+0),(R+24),4);
}
B47e0ca:{NFSU2_TR(0x47e0ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e0cb:{NFSU2_TR(0x47e0cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e0d0:L47e0d0:{c.instructions+=10;NFSU2_TR(0x47e0d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e0d1:{NFSU2_TR(0x47e0d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e0d2:{NFSU2_TR(0x47e0d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e0d3:{NFSU2_TR(0x47e0d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e0d4:{NFSU2_TR(0x47e0d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e0d5:{NFSU2_TR(0x47e0d5);
__builtin_memmove((R+28),(R+4),4);
}
B47e0d7:{NFSU2_TR(0x47e0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47e0de:{NFSU2_TR(0x47e0de);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47e0e4:{NFSU2_TR(0x47e0e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e0ea:{NFSU2_TR(0x47e0ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47e0f2:L47e0f2:{c.instructions+=3;NFSU2_TR(0x47e0f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47e0f4:{NFSU2_TR(0x47e0f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e0f6:{NFSU2_TR(0x47e0f6);
if(r1(R+518)){{goto L47e16e;}}
}
B47e0f8:L47e0f8:{c.instructions+=3;NFSU2_TR(0x47e0f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47e0fb:{NFSU2_TR(0x47e0fb);
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
B47e0fd:{NFSU2_TR(0x47e0fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47e10d;}}
}
B47e0ff:L47e0ff:{c.instructions+=3;NFSU2_TR(0x47e0ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47e101:{NFSU2_TR(0x47e101);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e103:{NFSU2_TR(0x47e103);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e105ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47e105:L47e105:{c.instructions+=2;NFSU2_TR(0x47e105);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B47e10b:{NFSU2_TR(0x47e10b);
{goto L47e16e;}
}
B47e10d:L47e10d:{c.instructions+=2;NFSU2_TR(0x47e10d);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
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
B47e113:{NFSU2_TR(0x47e113);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47e123;}}
}
B47e115:L47e115:{c.instructions+=5;NFSU2_TR(0x47e115);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e118:{NFSU2_TR(0x47e118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47e11a:{NFSU2_TR(0x47e11a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e11b:{NFSU2_TR(0x47e11b);
__builtin_memmove((R+4),(R+28),4);
}
B47e11d:{NFSU2_TR(0x47e11d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e120ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e120:L47e120:{c.instructions+=1;NFSU2_TR(0x47e120);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e123:L47e123:{c.instructions+=6;NFSU2_TR(0x47e123);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e126:{NFSU2_TR(0x47e126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47e128:{NFSU2_TR(0x47e128);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47e12b:{NFSU2_TR(0x47e12b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e12c:{NFSU2_TR(0x47e12c);
__builtin_memmove((R+4),(R+28),4);
}
B47e12e:{NFSU2_TR(0x47e12e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e131ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e131:L47e131:{c.instructions+=6;NFSU2_TR(0x47e131);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e134:{NFSU2_TR(0x47e134);
u8 U[4];
w4(U+0,u32(0x1000ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47e13a:{NFSU2_TR(0x47e13a);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47e13f:{NFSU2_TR(0x47e13f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47e142:{NFSU2_TR(0x47e142);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47e144:{NFSU2_TR(0x47e144);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47e160;}}
}
B47e146:L47e146:{c.instructions+=3;NFSU2_TR(0x47e146);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47e149:{NFSU2_TR(0x47e149);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47e14b:{NFSU2_TR(0x47e14b);
if(r1(R+518)){{goto L47e166;}}
}
B47e14d:L47e14d:{c.instructions+=6;NFSU2_TR(0x47e14d);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47e150:{NFSU2_TR(0x47e150);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47e156:{NFSU2_TR(0x47e156);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47e159:{NFSU2_TR(0x47e159);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47e15b:{NFSU2_TR(0x47e15b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47e15e:{NFSU2_TR(0x47e15e);
if(r1(R+514)){{goto L47e166;}}
}
B47e160:L47e160:{c.instructions+=1;NFSU2_TR(0x47e160);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47e166:L47e166:{c.instructions+=3;NFSU2_TR(0x47e166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47e168:{NFSU2_TR(0x47e168);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e169:{NFSU2_TR(0x47e169);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e16eull));
TAIL_STATIC(0x47bb30u,47b);
}
B47e16e:L47e16e:{c.instructions+=3;NFSU2_TR(0x47e16e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47e171:{NFSU2_TR(0x47e171);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e173:{NFSU2_TR(0x47e173);
if(r1(R+518)){{goto L47e203;}}
}
B47e179:L47e179:{c.instructions+=3;NFSU2_TR(0x47e179);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47e17c:{NFSU2_TR(0x47e17c);
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
B47e17e:{NFSU2_TR(0x47e17e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47e18f;}}
}
B47e180:L47e180:{c.instructions+=3;NFSU2_TR(0x47e180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47e182:{NFSU2_TR(0x47e182);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e184:{NFSU2_TR(0x47e184);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e186ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47e186:L47e186:{c.instructions+=2;NFSU2_TR(0x47e186);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47e18d:{NFSU2_TR(0x47e18d);
{goto L47e203;}
}
B47e18f:L47e18f:{c.instructions+=3;NFSU2_TR(0x47e18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e195:{NFSU2_TR(0x47e195);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B47e197:{NFSU2_TR(0x47e197);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47e1a7;}}
}
B47e199:L47e199:{c.instructions+=5;NFSU2_TR(0x47e199);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e19c:{NFSU2_TR(0x47e19c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47e19e:{NFSU2_TR(0x47e19e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e19f:{NFSU2_TR(0x47e19f);
__builtin_memmove((R+4),(R+28),4);
}
B47e1a1:{NFSU2_TR(0x47e1a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e1a4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e1a4:L47e1a4:{c.instructions+=1;NFSU2_TR(0x47e1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e1a7:L47e1a7:{c.instructions+=6;NFSU2_TR(0x47e1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e1aa:{NFSU2_TR(0x47e1aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47e1ac:{NFSU2_TR(0x47e1ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47e1af:{NFSU2_TR(0x47e1af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e1b0:{NFSU2_TR(0x47e1b0);
__builtin_memmove((R+4),(R+28),4);
}
B47e1b2:{NFSU2_TR(0x47e1b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e1b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e1b5:L47e1b5:{c.instructions+=6;NFSU2_TR(0x47e1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e1b8:{NFSU2_TR(0x47e1b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47e1bb:{NFSU2_TR(0x47e1bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47e1bd:{NFSU2_TR(0x47e1bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e1be:{NFSU2_TR(0x47e1be);
__builtin_memmove((R+4),(R+28),4);
}
B47e1c0:{NFSU2_TR(0x47e1c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e1c3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e1c3:L47e1c3:{c.instructions+=6;NFSU2_TR(0x47e1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e1c6:{NFSU2_TR(0x47e1c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47e1cd:{NFSU2_TR(0x47e1cd);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47e1d2:{NFSU2_TR(0x47e1d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47e1d5:{NFSU2_TR(0x47e1d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47e1d7:{NFSU2_TR(0x47e1d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47e1f3;}}
}
B47e1d9:L47e1d9:{c.instructions+=3;NFSU2_TR(0x47e1d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47e1dc:{NFSU2_TR(0x47e1dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47e1de:{NFSU2_TR(0x47e1de);
if(r1(R+518)){{goto L47e1fa;}}
}
B47e1e0:L47e1e0:{c.instructions+=6;NFSU2_TR(0x47e1e0);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47e1e3:{NFSU2_TR(0x47e1e3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47e1e9:{NFSU2_TR(0x47e1e9);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47e1ec:{NFSU2_TR(0x47e1ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47e1ee:{NFSU2_TR(0x47e1ee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47e1f1:{NFSU2_TR(0x47e1f1);
if(r1(R+514)){{goto L47e1fa;}}
}
B47e1f3:L47e1f3:{c.instructions+=1;NFSU2_TR(0x47e1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47e1fa:L47e1fa:{c.instructions+=3;NFSU2_TR(0x47e1fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47e1fd:{NFSU2_TR(0x47e1fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e1fe:{NFSU2_TR(0x47e1fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e203ull));
TAIL_STATIC(0x47bb30u,47b);
}
B47e203:L47e203:{c.instructions+=6;NFSU2_TR(0x47e203);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e207:{NFSU2_TR(0x47e207);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B47e20a:{NFSU2_TR(0x47e20a);
w1(R+512,carry<u32>(r4(R+24),u32(0x14ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B47e20d:{NFSU2_TR(0x47e20d);
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
B47e20e:{NFSU2_TR(0x47e20e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e212:{NFSU2_TR(0x47e212);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47e0f2u);}goto L47e0f2;}}
}
B47e218:L47e218:{c.instructions+=6;NFSU2_TR(0x47e218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47e219:{NFSU2_TR(0x47e219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e21a:{NFSU2_TR(0x47e21a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47e21b:{NFSU2_TR(0x47e21b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47e21c:{NFSU2_TR(0x47e21c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47e21d:{NFSU2_TR(0x47e21d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e220:L47e220:{c.instructions+=3;NFSU2_TR(0x47e220);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e225:{NFSU2_TR(0x47e225);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e226:{NFSU2_TR(0x47e226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e22bull));
TAIL_STATIC(0x43e910u,43e);
}
B47e22b:L47e22b:{c.instructions+=3;NFSU2_TR(0x47e22b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e22e:{NFSU2_TR(0x47e22e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4e0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4e0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e233:{NFSU2_TR(0x47e233);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e25d;}}
}
B47e235:L47e235:{c.instructions+=6;NFSU2_TR(0x47e235);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e23b:{NFSU2_TR(0x47e23b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e23e:{NFSU2_TR(0x47e23e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e244:{NFSU2_TR(0x47e244);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e245:{NFSU2_TR(0x47e245);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e24a:{NFSU2_TR(0x47e24a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e24full));
TAIL_STATIC(0x440820u,440);
}
B47e24f:L47e24f:{c.instructions+=3;NFSU2_TR(0x47e24f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e252:{NFSU2_TR(0x47e252);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e254:{NFSU2_TR(0x47e254);
if(r1(R+518)){{goto L47e25d;}}
}
B47e256:L47e256:{c.instructions+=2;NFSU2_TR(0x47e256);
__builtin_memmove((R+4),(R+0),4);
}
B47e258:{NFSU2_TR(0x47e258);
TAIL_STATIC(0x474c60u,474);
}
B47e25d:L47e25d:{c.instructions+=2;NFSU2_TR(0x47e25d);
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
B47e25f:{NFSU2_TR(0x47e25f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e260:L47e260:{c.instructions+=3;NFSU2_TR(0x47e260);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e265:{NFSU2_TR(0x47e265);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e266:{NFSU2_TR(0x47e266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e26bull));
TAIL_STATIC(0x43e910u,43e);
}
B47e26b:L47e26b:{c.instructions+=3;NFSU2_TR(0x47e26b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e26e:{NFSU2_TR(0x47e26e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e273:{NFSU2_TR(0x47e273);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e29d;}}
}
B47e275:L47e275:{c.instructions+=6;NFSU2_TR(0x47e275);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e27b:{NFSU2_TR(0x47e27b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e27e:{NFSU2_TR(0x47e27e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e284:{NFSU2_TR(0x47e284);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e285:{NFSU2_TR(0x47e285);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e28a:{NFSU2_TR(0x47e28a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e28full));
TAIL_STATIC(0x440820u,440);
}
B47e28f:L47e28f:{c.instructions+=3;NFSU2_TR(0x47e28f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e292:{NFSU2_TR(0x47e292);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e294:{NFSU2_TR(0x47e294);
if(r1(R+518)){{goto L47e29d;}}
}
B47e296:L47e296:{c.instructions+=2;NFSU2_TR(0x47e296);
__builtin_memmove((R+4),(R+0),4);
}
B47e298:{NFSU2_TR(0x47e298);
TAIL_STATIC(0x474d10u,474);
}
B47e29d:L47e29d:{c.instructions+=2;NFSU2_TR(0x47e29d);
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
B47e29f:{NFSU2_TR(0x47e29f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e2a0:L47e2a0:{c.instructions+=3;NFSU2_TR(0x47e2a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e2a1:{NFSU2_TR(0x47e2a1);
__builtin_memmove((R+24),(R+4),4);
}
B47e2a3:{NFSU2_TR(0x47e2a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e2a8ull));
TAIL_STATIC(0x474d80u,474);
}
B47e2a8:L47e2a8:{c.instructions+=2;NFSU2_TR(0x47e2a8);
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
B47e2ad:{NFSU2_TR(0x47e2ad);
if(r1(R+518)){{goto L47e2b8;}}
}
B47e2af:L47e2af:{c.instructions+=2;NFSU2_TR(0x47e2af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e2b0:{NFSU2_TR(0x47e2b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e2b5ull));
TAIL_STATIC(0x440540u,440);
}
B47e2b5:L47e2b5:{c.instructions+=1;NFSU2_TR(0x47e2b5);
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
B47e2b8:L47e2b8:{c.instructions+=3;NFSU2_TR(0x47e2b8);
__builtin_memmove((R+0),(R+24),4);
}
B47e2ba:{NFSU2_TR(0x47e2ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e2bb:{NFSU2_TR(0x47e2bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e2c0:L47e2c0:{c.instructions+=8;NFSU2_TR(0x47e2c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e2c1:{NFSU2_TR(0x47e2c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e2c2:{NFSU2_TR(0x47e2c2);
__builtin_memmove((R+24),(R+4),4);
}
B47e2c4:{NFSU2_TR(0x47e2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47e2ca:{NFSU2_TR(0x47e2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47e2d1:{NFSU2_TR(0x47e2d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47e2d4:{NFSU2_TR(0x47e2d4);
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
B47e2d6:{NFSU2_TR(0x47e2d6);
if(r1(R+518)){{goto L47e399;}}
}
B47e2dc:L47e2dc:{c.instructions+=3;NFSU2_TR(0x47e2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e2e2:{NFSU2_TR(0x47e2e2);
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
B47e2e4:{NFSU2_TR(0x47e2e4);
if(r1(R+518)){{goto L47e399;}}
}
B47e2ea:L47e2ea:{c.instructions+=5;NFSU2_TR(0x47e2ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e2eb:{NFSU2_TR(0x47e2eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47e2ef:{NFSU2_TR(0x47e2ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e2f0:{NFSU2_TR(0x47e2f0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47e2f8:{NFSU2_TR(0x47e2f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e2fdull));
TAIL_STATIC(0x45e3d0u,45e);
}
B47e2fd:L47e2fd:{c.instructions+=5;NFSU2_TR(0x47e2fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e300:{NFSU2_TR(0x47e300);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47e304:{NFSU2_TR(0x47e304);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B47e307:{NFSU2_TR(0x47e307);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47e30a:{NFSU2_TR(0x47e30a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47e362;}}
}
B47e30c:L47e30c:{c.instructions+=2;NFSU2_TR(0x47e30c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x47e3a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B47e313:{NFSU2_TR(0x47e313);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x47e39cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e31a:L47e31a:{c.instructions+=4;NFSU2_TR(0x47e31a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47e31c:{NFSU2_TR(0x47e31c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e31e:{NFSU2_TR(0x47e31e);
__builtin_memmove((R+4),(R+24),4);
}
B47e320:{NFSU2_TR(0x47e320);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e323ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e323:L47e323:{c.instructions+=5;NFSU2_TR(0x47e323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e329:{NFSU2_TR(0x47e329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47e32b:{NFSU2_TR(0x47e32b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e32d:{NFSU2_TR(0x47e32d);
__builtin_memmove((R+4),(R+24),4);
}
B47e32f:{NFSU2_TR(0x47e32f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e332ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e332:L47e332:{c.instructions+=6;NFSU2_TR(0x47e332);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e338:{NFSU2_TR(0x47e338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e33e:{NFSU2_TR(0x47e33e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47e340:{NFSU2_TR(0x47e340);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e342:{NFSU2_TR(0x47e342);
__builtin_memmove((R+4),(R+24),4);
}
B47e344:{NFSU2_TR(0x47e344);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e347ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e347:L47e347:{c.instructions+=5;NFSU2_TR(0x47e347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e34d:{NFSU2_TR(0x47e34d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47e34f:{NFSU2_TR(0x47e34f);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e351:{NFSU2_TR(0x47e351);
__builtin_memmove((R+4),(R+24),4);
}
B47e353:{NFSU2_TR(0x47e353);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e356ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e356:L47e356:{c.instructions+=2;NFSU2_TR(0x47e356);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e35c:{NFSU2_TR(0x47e35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e362:L47e362:{c.instructions+=4;NFSU2_TR(0x47e362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47e364:{NFSU2_TR(0x47e364);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e366:{NFSU2_TR(0x47e366);
__builtin_memmove((R+4),(R+24),4);
}
B47e368:{NFSU2_TR(0x47e368);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e36bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e36b:L47e36b:{c.instructions+=5;NFSU2_TR(0x47e36b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e371:{NFSU2_TR(0x47e371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47e373:{NFSU2_TR(0x47e373);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e375:{NFSU2_TR(0x47e375);
__builtin_memmove((R+4),(R+24),4);
}
B47e377:{NFSU2_TR(0x47e377);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e37aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e37a:L47e37a:{c.instructions+=6;NFSU2_TR(0x47e37a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47e380:{NFSU2_TR(0x47e380);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e381:{NFSU2_TR(0x47e381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47e387:{NFSU2_TR(0x47e387);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e38d:{NFSU2_TR(0x47e38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e393:{NFSU2_TR(0x47e393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e398ull));
TAIL_STATIC(0x47bb30u,47b);
}
B47e398:L47e398:{c.instructions+=1;NFSU2_TR(0x47e398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47e399:L47e399:{c.instructions+=3;NFSU2_TR(0x47e399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e39a:{NFSU2_TR(0x47e39a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47e39b:{NFSU2_TR(0x47e39b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e3b0:L47e3b0:{c.instructions+=3;NFSU2_TR(0x47e3b0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e3b5:{NFSU2_TR(0x47e3b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e3b6:{NFSU2_TR(0x47e3b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e3bbull));
TAIL_STATIC(0x43e910u,43e);
}
B47e3bb:L47e3bb:{c.instructions+=3;NFSU2_TR(0x47e3bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e3be:{NFSU2_TR(0x47e3be);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4b0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4b0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e3c3:{NFSU2_TR(0x47e3c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e3ed;}}
}
B47e3c5:L47e3c5:{c.instructions+=6;NFSU2_TR(0x47e3c5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e3cb:{NFSU2_TR(0x47e3cb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e3ce:{NFSU2_TR(0x47e3ce);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e3d4:{NFSU2_TR(0x47e3d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e3d5:{NFSU2_TR(0x47e3d5);
u8 U[4];
w4(U+0,u32(0xb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e3da:{NFSU2_TR(0x47e3da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e3dfull));
TAIL_STATIC(0x440820u,440);
}
B47e3df:L47e3df:{c.instructions+=3;NFSU2_TR(0x47e3df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e3e2:{NFSU2_TR(0x47e3e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e3e4:{NFSU2_TR(0x47e3e4);
if(r1(R+518)){{goto L47e3ed;}}
}
B47e3e6:L47e3e6:{c.instructions+=2;NFSU2_TR(0x47e3e6);
__builtin_memmove((R+4),(R+0),4);
}
B47e3e8:{NFSU2_TR(0x47e3e8);
TAIL_STATIC(0x475050u,475);
}
B47e3ed:L47e3ed:{c.instructions+=2;NFSU2_TR(0x47e3ed);
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
B47e3ef:{NFSU2_TR(0x47e3ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e3f0:L47e3f0:{c.instructions+=3;NFSU2_TR(0x47e3f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e3f1:{NFSU2_TR(0x47e3f1);
__builtin_memmove((R+24),(R+4),4);
}
B47e3f3:{NFSU2_TR(0x47e3f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e3f8ull));
TAIL_STATIC(0x475080u,475);
}
B47e3f8:L47e3f8:{c.instructions+=2;NFSU2_TR(0x47e3f8);
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
B47e3fd:{NFSU2_TR(0x47e3fd);
if(r1(R+518)){{goto L47e408;}}
}
B47e3ff:L47e3ff:{c.instructions+=2;NFSU2_TR(0x47e3ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e400:{NFSU2_TR(0x47e400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e405ull));
TAIL_STATIC(0x440540u,440);
}
B47e405:L47e405:{c.instructions+=1;NFSU2_TR(0x47e405);
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
B47e408:L47e408:{c.instructions+=3;NFSU2_TR(0x47e408);
__builtin_memmove((R+0),(R+24),4);
}
B47e40a:{NFSU2_TR(0x47e40a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e40b:{NFSU2_TR(0x47e40b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e410:L47e410:{c.instructions+=3;NFSU2_TR(0x47e410);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e415:{NFSU2_TR(0x47e415);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e416:{NFSU2_TR(0x47e416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e41bull));
TAIL_STATIC(0x43e910u,43e);
}
B47e41b:L47e41b:{c.instructions+=3;NFSU2_TR(0x47e41b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e41e:{NFSU2_TR(0x47e41e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4b0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4b0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e423:{NFSU2_TR(0x47e423);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e44d;}}
}
B47e425:L47e425:{c.instructions+=6;NFSU2_TR(0x47e425);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e42b:{NFSU2_TR(0x47e42b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e42e:{NFSU2_TR(0x47e42e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e434:{NFSU2_TR(0x47e434);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e435:{NFSU2_TR(0x47e435);
u8 U[4];
w4(U+0,u32(0xb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e43a:{NFSU2_TR(0x47e43a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e43full));
TAIL_STATIC(0x440820u,440);
}
B47e43f:L47e43f:{c.instructions+=3;NFSU2_TR(0x47e43f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e442:{NFSU2_TR(0x47e442);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e444:{NFSU2_TR(0x47e444);
if(r1(R+518)){{goto L47e44d;}}
}
B47e446:L47e446:{c.instructions+=2;NFSU2_TR(0x47e446);
__builtin_memmove((R+4),(R+0),4);
}
B47e448:{NFSU2_TR(0x47e448);
TAIL_STATIC(0x4750d0u,475);
}
B47e44d:L47e44d:{c.instructions+=2;NFSU2_TR(0x47e44d);
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
B47e44f:{NFSU2_TR(0x47e44f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e450:L47e450:{c.instructions+=3;NFSU2_TR(0x47e450);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e455:{NFSU2_TR(0x47e455);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e456:{NFSU2_TR(0x47e456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e45bull));
TAIL_STATIC(0x43e910u,43e);
}
B47e45b:L47e45b:{c.instructions+=3;NFSU2_TR(0x47e45b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e45e:{NFSU2_TR(0x47e45e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4b0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4b0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e463:{NFSU2_TR(0x47e463);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e48d;}}
}
B47e465:L47e465:{c.instructions+=6;NFSU2_TR(0x47e465);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e46b:{NFSU2_TR(0x47e46b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e46e:{NFSU2_TR(0x47e46e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e474:{NFSU2_TR(0x47e474);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e475:{NFSU2_TR(0x47e475);
u8 U[4];
w4(U+0,u32(0xb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e47a:{NFSU2_TR(0x47e47a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e47full));
TAIL_STATIC(0x440820u,440);
}
B47e47f:L47e47f:{c.instructions+=3;NFSU2_TR(0x47e47f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e482:{NFSU2_TR(0x47e482);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e484:{NFSU2_TR(0x47e484);
if(r1(R+518)){{goto L47e48d;}}
}
B47e486:L47e486:{c.instructions+=2;NFSU2_TR(0x47e486);
__builtin_memmove((R+4),(R+0),4);
}
B47e488:{NFSU2_TR(0x47e488);
TAIL_STATIC(0x475120u,475);
}
B47e48d:L47e48d:{c.instructions+=2;NFSU2_TR(0x47e48d);
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
B47e48f:{NFSU2_TR(0x47e48f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e490:L47e490:{c.instructions+=3;NFSU2_TR(0x47e490);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e491:{NFSU2_TR(0x47e491);
__builtin_memmove((R+24),(R+4),4);
}
B47e493:{NFSU2_TR(0x47e493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e498ull));
TAIL_STATIC(0x475150u,475);
}
B47e498:L47e498:{c.instructions+=2;NFSU2_TR(0x47e498);
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
B47e49d:{NFSU2_TR(0x47e49d);
if(r1(R+518)){{goto L47e4a8;}}
}
B47e49f:L47e49f:{c.instructions+=2;NFSU2_TR(0x47e49f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e4a0:{NFSU2_TR(0x47e4a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e4a5ull));
TAIL_STATIC(0x440540u,440);
}
B47e4a5:L47e4a5:{c.instructions+=1;NFSU2_TR(0x47e4a5);
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
B47e4a8:L47e4a8:{c.instructions+=3;NFSU2_TR(0x47e4a8);
__builtin_memmove((R+0),(R+24),4);
}
B47e4aa:{NFSU2_TR(0x47e4aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e4ab:{NFSU2_TR(0x47e4ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e4b0:L47e4b0:{c.instructions+=3;NFSU2_TR(0x47e4b0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e4b5:{NFSU2_TR(0x47e4b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e4b6:{NFSU2_TR(0x47e4b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e4bbull));
TAIL_STATIC(0x43e910u,43e);
}
B47e4bb:L47e4bb:{c.instructions+=3;NFSU2_TR(0x47e4bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e4be:{NFSU2_TR(0x47e4be);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4b0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4b0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e4c3:{NFSU2_TR(0x47e4c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e4ed;}}
}
B47e4c5:L47e4c5:{c.instructions+=6;NFSU2_TR(0x47e4c5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e4cb:{NFSU2_TR(0x47e4cb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e4ce:{NFSU2_TR(0x47e4ce);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e4d4:{NFSU2_TR(0x47e4d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e4d5:{NFSU2_TR(0x47e4d5);
u8 U[4];
w4(U+0,u32(0xb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e4da:{NFSU2_TR(0x47e4da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e4dfull));
TAIL_STATIC(0x440820u,440);
}
B47e4df:L47e4df:{c.instructions+=3;NFSU2_TR(0x47e4df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e4e2:{NFSU2_TR(0x47e4e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e4e4:{NFSU2_TR(0x47e4e4);
if(r1(R+518)){{goto L47e4ed;}}
}
B47e4e6:L47e4e6:{c.instructions+=2;NFSU2_TR(0x47e4e6);
__builtin_memmove((R+4),(R+0),4);
}
B47e4e8:{NFSU2_TR(0x47e4e8);
TAIL_STATIC(0x475210u,475);
}
B47e4ed:L47e4ed:{c.instructions+=2;NFSU2_TR(0x47e4ed);
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
B47e4ef:{NFSU2_TR(0x47e4ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e4f0:L47e4f0:{c.instructions+=3;NFSU2_TR(0x47e4f0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e4f5:{NFSU2_TR(0x47e4f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e4f6:{NFSU2_TR(0x47e4f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e4fbull));
TAIL_STATIC(0x43e910u,43e);
}
B47e4fb:L47e4fb:{c.instructions+=3;NFSU2_TR(0x47e4fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e4fe:{NFSU2_TR(0x47e4fe);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4b4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4b4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e503:{NFSU2_TR(0x47e503);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e52d;}}
}
B47e505:L47e505:{c.instructions+=6;NFSU2_TR(0x47e505);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e50b:{NFSU2_TR(0x47e50b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e50e:{NFSU2_TR(0x47e50e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e514:{NFSU2_TR(0x47e514);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e515:{NFSU2_TR(0x47e515);
u8 U[4];
w4(U+0,u32(0xb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e51a:{NFSU2_TR(0x47e51a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e51full));
TAIL_STATIC(0x440820u,440);
}
B47e51f:L47e51f:{c.instructions+=3;NFSU2_TR(0x47e51f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e522:{NFSU2_TR(0x47e522);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e524:{NFSU2_TR(0x47e524);
if(r1(R+518)){{goto L47e52d;}}
}
B47e526:L47e526:{c.instructions+=2;NFSU2_TR(0x47e526);
__builtin_memmove((R+4),(R+0),4);
}
B47e528:{NFSU2_TR(0x47e528);
TAIL_STATIC(0x475250u,475);
}
B47e52d:L47e52d:{c.instructions+=2;NFSU2_TR(0x47e52d);
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
B47e52f:{NFSU2_TR(0x47e52f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e530:L47e530:{c.instructions+=3;NFSU2_TR(0x47e530);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e531:{NFSU2_TR(0x47e531);
__builtin_memmove((R+24),(R+4),4);
}
B47e533:{NFSU2_TR(0x47e533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e538ull));
TAIL_STATIC(0x4752a0u,475);
}
B47e538:L47e538:{c.instructions+=2;NFSU2_TR(0x47e538);
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
B47e53d:{NFSU2_TR(0x47e53d);
if(r1(R+518)){{goto L47e548;}}
}
B47e53f:L47e53f:{c.instructions+=2;NFSU2_TR(0x47e53f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e540:{NFSU2_TR(0x47e540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e545ull));
TAIL_STATIC(0x440540u,440);
}
B47e545:L47e545:{c.instructions+=1;NFSU2_TR(0x47e545);
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
B47e548:L47e548:{c.instructions+=3;NFSU2_TR(0x47e548);
__builtin_memmove((R+0),(R+24),4);
}
B47e54a:{NFSU2_TR(0x47e54a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e54b:{NFSU2_TR(0x47e54b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e550:L47e550:{c.instructions+=3;NFSU2_TR(0x47e550);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e555:{NFSU2_TR(0x47e555);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e556:{NFSU2_TR(0x47e556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e55bull));
TAIL_STATIC(0x43e910u,43e);
}
B47e55b:L47e55b:{c.instructions+=3;NFSU2_TR(0x47e55b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e55e:{NFSU2_TR(0x47e55e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4b0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4b0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e563:{NFSU2_TR(0x47e563);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e58d;}}
}
B47e565:L47e565:{c.instructions+=6;NFSU2_TR(0x47e565);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e56b:{NFSU2_TR(0x47e56b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e56e:{NFSU2_TR(0x47e56e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e574:{NFSU2_TR(0x47e574);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e575:{NFSU2_TR(0x47e575);
u8 U[4];
w4(U+0,u32(0xb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e57a:{NFSU2_TR(0x47e57a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e57full));
TAIL_STATIC(0x440820u,440);
}
B47e57f:L47e57f:{c.instructions+=3;NFSU2_TR(0x47e57f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e582:{NFSU2_TR(0x47e582);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e584:{NFSU2_TR(0x47e584);
if(r1(R+518)){{goto L47e58d;}}
}
B47e586:L47e586:{c.instructions+=2;NFSU2_TR(0x47e586);
__builtin_memmove((R+4),(R+0),4);
}
B47e588:{NFSU2_TR(0x47e588);
TAIL_STATIC(0x475560u,475);
}
B47e58d:L47e58d:{c.instructions+=2;NFSU2_TR(0x47e58d);
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
B47e58f:{NFSU2_TR(0x47e58f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e590:L47e590:{c.instructions+=3;NFSU2_TR(0x47e590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e591:{NFSU2_TR(0x47e591);
__builtin_memmove((R+24),(R+4),4);
}
B47e593:{NFSU2_TR(0x47e593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e598ull));
TAIL_STATIC(0x475590u,475);
}
B47e598:L47e598:{c.instructions+=2;NFSU2_TR(0x47e598);
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
B47e59d:{NFSU2_TR(0x47e59d);
if(r1(R+518)){{goto L47e5a8;}}
}
B47e59f:L47e59f:{c.instructions+=2;NFSU2_TR(0x47e59f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e5a0:{NFSU2_TR(0x47e5a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e5a5ull));
TAIL_STATIC(0x440540u,440);
}
B47e5a5:L47e5a5:{c.instructions+=1;NFSU2_TR(0x47e5a5);
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
B47e5a8:L47e5a8:{c.instructions+=3;NFSU2_TR(0x47e5a8);
__builtin_memmove((R+0),(R+24),4);
}
B47e5aa:{NFSU2_TR(0x47e5aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e5ab:{NFSU2_TR(0x47e5ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e5b0:L47e5b0:{c.instructions+=3;NFSU2_TR(0x47e5b0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e5b5:{NFSU2_TR(0x47e5b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e5b6:{NFSU2_TR(0x47e5b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e5bbull));
TAIL_STATIC(0x43e910u,43e);
}
B47e5bb:L47e5bb:{c.instructions+=3;NFSU2_TR(0x47e5bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e5be:{NFSU2_TR(0x47e5be);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4c0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4c0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e5c3:{NFSU2_TR(0x47e5c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e5ed;}}
}
B47e5c5:L47e5c5:{c.instructions+=6;NFSU2_TR(0x47e5c5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e5cb:{NFSU2_TR(0x47e5cb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e5ce:{NFSU2_TR(0x47e5ce);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e5d4:{NFSU2_TR(0x47e5d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e5d5:{NFSU2_TR(0x47e5d5);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e5da:{NFSU2_TR(0x47e5da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e5dfull));
TAIL_STATIC(0x440820u,440);
}
B47e5df:L47e5df:{c.instructions+=3;NFSU2_TR(0x47e5df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e5e2:{NFSU2_TR(0x47e5e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e5e4:{NFSU2_TR(0x47e5e4);
if(r1(R+518)){{goto L47e5ed;}}
}
B47e5e6:L47e5e6:{c.instructions+=2;NFSU2_TR(0x47e5e6);
__builtin_memmove((R+4),(R+0),4);
}
B47e5e8:{NFSU2_TR(0x47e5e8);
TAIL_STATIC(0x4756f0u,475);
}
B47e5ed:L47e5ed:{c.instructions+=2;NFSU2_TR(0x47e5ed);
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
B47e5ef:{NFSU2_TR(0x47e5ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e5f0:L47e5f0:{c.instructions+=3;NFSU2_TR(0x47e5f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e5f1:{NFSU2_TR(0x47e5f1);
__builtin_memmove((R+24),(R+4),4);
}
B47e5f3:{NFSU2_TR(0x47e5f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e5f8ull));
TAIL_STATIC(0x475740u,475);
}
B47e5f8:L47e5f8:{c.instructions+=2;NFSU2_TR(0x47e5f8);
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
B47e5fd:{NFSU2_TR(0x47e5fd);
if(r1(R+518)){{goto L47e608;}}
}
B47e5ff:L47e5ff:{c.instructions+=2;NFSU2_TR(0x47e5ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e600:{NFSU2_TR(0x47e600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e605ull));
TAIL_STATIC(0x440540u,440);
}
B47e605:L47e605:{c.instructions+=1;NFSU2_TR(0x47e605);
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
B47e608:L47e608:{c.instructions+=3;NFSU2_TR(0x47e608);
__builtin_memmove((R+0),(R+24),4);
}
B47e60a:{NFSU2_TR(0x47e60a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e60b:{NFSU2_TR(0x47e60b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e610:L47e610:{c.instructions+=3;NFSU2_TR(0x47e610);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e615:{NFSU2_TR(0x47e615);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e616:{NFSU2_TR(0x47e616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e61bull));
TAIL_STATIC(0x43e910u,43e);
}
B47e61b:L47e61b:{c.instructions+=3;NFSU2_TR(0x47e61b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e61e:{NFSU2_TR(0x47e61e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e623:{NFSU2_TR(0x47e623);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e64d;}}
}
B47e625:L47e625:{c.instructions+=6;NFSU2_TR(0x47e625);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e62b:{NFSU2_TR(0x47e62b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e62e:{NFSU2_TR(0x47e62e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e634:{NFSU2_TR(0x47e634);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e635:{NFSU2_TR(0x47e635);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e63a:{NFSU2_TR(0x47e63a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e63full));
TAIL_STATIC(0x440820u,440);
}
B47e63f:L47e63f:{c.instructions+=3;NFSU2_TR(0x47e63f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e642:{NFSU2_TR(0x47e642);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e644:{NFSU2_TR(0x47e644);
if(r1(R+518)){{goto L47e64d;}}
}
B47e646:L47e646:{c.instructions+=2;NFSU2_TR(0x47e646);
__builtin_memmove((R+4),(R+0),4);
}
B47e648:{NFSU2_TR(0x47e648);
TAIL_STATIC(0x475800u,475);
}
B47e64d:L47e64d:{c.instructions+=2;NFSU2_TR(0x47e64d);
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
B47e64f:{NFSU2_TR(0x47e64f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e650:L47e650:{c.instructions+=13;NFSU2_TR(0x47e650);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e652:{NFSU2_TR(0x47e652);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e657:{NFSU2_TR(0x47e657);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e65d:{NFSU2_TR(0x47e65d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e65e:{NFSU2_TR(0x47e65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e665:{NFSU2_TR(0x47e665);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e666:{NFSU2_TR(0x47e666);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e667:{NFSU2_TR(0x47e667);
__builtin_memmove((R+24),(R+4),4);
}
B47e669:{NFSU2_TR(0x47e669);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e66d:{NFSU2_TR(0x47e66d);
u8 U[4];
w4(U+0,u32(0x78a0b4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47e673:{NFSU2_TR(0x47e673);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47e679:{NFSU2_TR(0x47e679);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47e681:{NFSU2_TR(0x47e681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e686ull));
TAIL_STATIC(0x5768e0u,576);
}
B47e686:L47e686:{c.instructions+=6;NFSU2_TR(0x47e686);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47e68a:{NFSU2_TR(0x47e68a);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47e690:{NFSU2_TR(0x47e690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e691:{NFSU2_TR(0x47e691);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e698:{NFSU2_TR(0x47e698);
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
B47e69b:{NFSU2_TR(0x47e69b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e6a0:L47e6a0:{c.instructions+=3;NFSU2_TR(0x47e6a0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e6a5:{NFSU2_TR(0x47e6a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e6a6:{NFSU2_TR(0x47e6a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e6abull));
TAIL_STATIC(0x43e910u,43e);
}
B47e6ab:L47e6ab:{c.instructions+=3;NFSU2_TR(0x47e6ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e6ae:{NFSU2_TR(0x47e6ae);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4f4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4f4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e6b3:{NFSU2_TR(0x47e6b3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e6dd;}}
}
B47e6b5:L47e6b5:{c.instructions+=6;NFSU2_TR(0x47e6b5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e6bb:{NFSU2_TR(0x47e6bb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e6be:{NFSU2_TR(0x47e6be);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e6c4:{NFSU2_TR(0x47e6c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e6c5:{NFSU2_TR(0x47e6c5);
u8 U[4];
w4(U+0,u32(0xf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e6ca:{NFSU2_TR(0x47e6ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e6cfull));
TAIL_STATIC(0x440820u,440);
}
B47e6cf:L47e6cf:{c.instructions+=3;NFSU2_TR(0x47e6cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e6d2:{NFSU2_TR(0x47e6d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e6d4:{NFSU2_TR(0x47e6d4);
if(r1(R+518)){{goto L47e6dd;}}
}
B47e6d6:L47e6d6:{c.instructions+=2;NFSU2_TR(0x47e6d6);
__builtin_memmove((R+4),(R+0),4);
}
B47e6d8:{NFSU2_TR(0x47e6d8);
TAIL_STATIC(0x475820u,475);
}
B47e6dd:L47e6dd:{c.instructions+=2;NFSU2_TR(0x47e6dd);
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
B47e6df:{NFSU2_TR(0x47e6df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e6e0:L47e6e0:{c.instructions+=6;NFSU2_TR(0x47e6e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e6e1:{NFSU2_TR(0x47e6e1);
__builtin_memmove((R+24),(R+4),4);
}
B47e6e3:{NFSU2_TR(0x47e6e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e6e6:{NFSU2_TR(0x47e6e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47e6e9:{NFSU2_TR(0x47e6e9);
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
B47e6eb:{NFSU2_TR(0x47e6eb);
if(r1(R+518)){{goto L47e868;}}
}
B47e6f1:L47e6f1:{c.instructions+=4;NFSU2_TR(0x47e6f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47e6f5:{NFSU2_TR(0x47e6f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e6f6:{NFSU2_TR(0x47e6f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47e6fc:{NFSU2_TR(0x47e6fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e701ull));
TAIL_STATIC(0x46b100u,46b);
}
B47e701:L47e701:{c.instructions+=3;NFSU2_TR(0x47e701);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e707:{NFSU2_TR(0x47e707);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e709:{NFSU2_TR(0x47e709);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47e80d;}}
}
B47e70f:L47e70f:{c.instructions+=5;NFSU2_TR(0x47e70f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47e712:{NFSU2_TR(0x47e712);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47e715:{NFSU2_TR(0x47e715);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47e71b:{NFSU2_TR(0x47e71b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47e71d:{NFSU2_TR(0x47e71d);
if(r1(R+518)){{goto L47e84d;}}
}
B47e723:L47e723:{c.instructions+=6;NFSU2_TR(0x47e723);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47e729:{NFSU2_TR(0x47e729);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47e72f:{NFSU2_TR(0x47e72f);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47e732:{NFSU2_TR(0x47e732);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47e734:{NFSU2_TR(0x47e734);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47e737:{NFSU2_TR(0x47e737);
if(r1(R+514)){{goto L47e84d;}}
}
B47e73d:L47e73d:{c.instructions+=6;NFSU2_TR(0x47e73d);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47e743:{NFSU2_TR(0x47e743);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47e749:{NFSU2_TR(0x47e749);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47e74c:{NFSU2_TR(0x47e74c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47e74e:{NFSU2_TR(0x47e74e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47e751:{NFSU2_TR(0x47e751);
if(r1(R+514)){{goto L47e84d;}}
}
B47e757:L47e757:{c.instructions+=3;NFSU2_TR(0x47e757);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47e75d:{NFSU2_TR(0x47e75d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47e75f:{NFSU2_TR(0x47e75f);
if(r1(R+518)){{goto L47e84d;}}
}
B47e765:L47e765:{c.instructions+=3;NFSU2_TR(0x47e765);
__builtin_memmove((R+0),gp(0x788870),4);
}
B47e76a:{NFSU2_TR(0x47e76a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e76b:{NFSU2_TR(0x47e76b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e770ull));
TAIL_STATIC(0x475690u,475);
}
B47e770:L47e770:{c.instructions+=3;NFSU2_TR(0x47e770);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e773:{NFSU2_TR(0x47e773);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47e775:{NFSU2_TR(0x47e775);
if(r1(R+518)){{goto L47e84d;}}
}
B47e77b:L47e77b:{c.instructions+=2;NFSU2_TR(0x47e77b);
__builtin_memmove((R+4),(R+24),4);
}
B47e77d:{NFSU2_TR(0x47e77d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e782ull));
TAIL_STATIC(0x475b30u,475);
}
B47e782:L47e782:{c.instructions+=2;NFSU2_TR(0x47e782);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47e784:{NFSU2_TR(0x47e784);
if(r1(R+518)){{goto L47e84d;}}
}
B47e78a:L47e78a:{c.instructions+=2;NFSU2_TR(0x47e78a);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e78f:{NFSU2_TR(0x47e78f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e794ull));
TAIL_STATIC(0x43c1f0u,43c);
}
B47e794:L47e794:{c.instructions+=5;NFSU2_TR(0x47e794);
{u32 ea_=u32(u32(7899268u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47e79a:{NFSU2_TR(0x47e79a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e79d:{NFSU2_TR(0x47e79d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47e79f:{NFSU2_TR(0x47e79f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47e7a2:{NFSU2_TR(0x47e7a2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L47e7cb;}}
}
B47e7a4:L47e7a4:{c.instructions+=7;NFSU2_TR(0x47e7a4);
{u32 ea_=u32(u32(7899256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47e7aa:{NFSU2_TR(0x47e7aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47e7ad:{NFSU2_TR(0x47e7ad);
{u32 ea_=u32(u32(8567888u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47e7b3:{NFSU2_TR(0x47e7b3);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47e7b6:{NFSU2_TR(0x47e7b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47e7b8:{NFSU2_TR(0x47e7b8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47e7bb:{NFSU2_TR(0x47e7bb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L47e7cb;}}
}
B47e7bd:L47e7bd:{c.instructions+=3;NFSU2_TR(0x47e7bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47e7c0:{NFSU2_TR(0x47e7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e7c6:{NFSU2_TR(0x47e7c6);
{goto L47e84d;}
}
B47e7cb:L47e7cb:{c.instructions+=3;NFSU2_TR(0x47e7cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e7cc:{NFSU2_TR(0x47e7cc);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e7ce:{NFSU2_TR(0x47e7ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e7d3ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B47e7d3:L47e7d3:{c.instructions+=7;NFSU2_TR(0x47e7d3);
{u32 ea_=u32(u32(7899260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47e7d9:{NFSU2_TR(0x47e7d9);
{u32 ea_=u32(u32(7899264u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47e7df:{NFSU2_TR(0x47e7df);
__builtin_memmove((R+28),(R+0),4);
}
B47e7e1:{NFSU2_TR(0x47e7e1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5ull))));
}
B47e7e4:{NFSU2_TR(0x47e7e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47e7eb:{NFSU2_TR(0x47e7eb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47e7ee:{NFSU2_TR(0x47e7ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e7f3ull));
TAIL_STATIC(0x43c1f0u,43c);
}
B47e7f3:L47e7f3:{c.instructions+=6;NFSU2_TR(0x47e7f3);
{u32 ea_=u32(u32(7899264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47e7f9:{NFSU2_TR(0x47e7f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e7fc:{NFSU2_TR(0x47e7fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e7fd:{NFSU2_TR(0x47e7fd);
__builtin_memmove((R+4),(R+24),4);
}
B47e7ff:{NFSU2_TR(0x47e7ff);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47e805:{NFSU2_TR(0x47e805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e80aull));
TAIL_STATIC(0x4759c0u,475);
}
B47e80a:L47e80a:{c.instructions+=2;NFSU2_TR(0x47e80a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47e80b:{NFSU2_TR(0x47e80b);
{goto L47e84d;}
}
B47e80d:L47e80d:{c.instructions+=8;NFSU2_TR(0x47e80d);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47e813:{NFSU2_TR(0x47e813);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47e816:{NFSU2_TR(0x47e816);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47e81c:{NFSU2_TR(0x47e81c);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47e81f:{NFSU2_TR(0x47e81f);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B47e821:{NFSU2_TR(0x47e821);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47e823:{NFSU2_TR(0x47e823);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47e826:{NFSU2_TR(0x47e826);
if(r1(R+514)){{goto L47e832;}}
}
B47e828:L47e828:{c.instructions+=3;NFSU2_TR(0x47e828);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47e82e:{NFSU2_TR(0x47e82e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47e830:{NFSU2_TR(0x47e830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47e84d;}}
}
B47e832:L47e832:{c.instructions+=3;NFSU2_TR(0x47e832);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47e838:{NFSU2_TR(0x47e838);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47e83a:{NFSU2_TR(0x47e83a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47e84d;}}
}
B47e83c:L47e83c:{c.instructions+=3;NFSU2_TR(0x47e83c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47e842:{NFSU2_TR(0x47e842);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47e844:{NFSU2_TR(0x47e844);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47e857;}}
}
B47e846:L47e846:{c.instructions+=2;NFSU2_TR(0x47e846);
__builtin_memmove((R+4),(R+24),4);
}
B47e848:{NFSU2_TR(0x47e848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e84dull));
TAIL_STATIC(0x462480u,462);
}
B47e84d:L47e84d:{c.instructions+=3;NFSU2_TR(0x47e84d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47e853:{NFSU2_TR(0x47e853);
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
B47e855:{NFSU2_TR(0x47e855);
if(r1(R+518)){{goto L47e868;}}
}
B47e857:L47e857:{c.instructions+=3;NFSU2_TR(0x47e857);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47e85d:{NFSU2_TR(0x47e85d);
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
B47e85f:{NFSU2_TR(0x47e85f);
if(r1(R+518)){{goto L47e868;}}
}
B47e861:L47e861:{c.instructions+=2;NFSU2_TR(0x47e861);
__builtin_memmove((R+4),(R+24),4);
}
B47e863:{NFSU2_TR(0x47e863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e868ull));
TAIL_STATIC(0x4624e0u,462);
}
B47e868:L47e868:{c.instructions+=2;NFSU2_TR(0x47e868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e869:{NFSU2_TR(0x47e869);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e870:L47e870:{c.instructions+=3;NFSU2_TR(0x47e870);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e875:{NFSU2_TR(0x47e875);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e876:{NFSU2_TR(0x47e876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e87bull));
TAIL_STATIC(0x43e910u,43e);
}
B47e87b:L47e87b:{c.instructions+=3;NFSU2_TR(0x47e87b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e87e:{NFSU2_TR(0x47e87e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4bcull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4bcull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e883:{NFSU2_TR(0x47e883);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47e8ad;}}
}
B47e885:L47e885:{c.instructions+=6;NFSU2_TR(0x47e885);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e88b:{NFSU2_TR(0x47e88b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e88e:{NFSU2_TR(0x47e88e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e894:{NFSU2_TR(0x47e894);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e895:{NFSU2_TR(0x47e895);
u8 U[4];
w4(U+0,u32(0xbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e89a:{NFSU2_TR(0x47e89a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e89full));
TAIL_STATIC(0x440820u,440);
}
B47e89f:L47e89f:{c.instructions+=3;NFSU2_TR(0x47e89f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47e8a2:{NFSU2_TR(0x47e8a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47e8a4:{NFSU2_TR(0x47e8a4);
if(r1(R+518)){{goto L47e8ad;}}
}
B47e8a6:L47e8a6:{c.instructions+=2;NFSU2_TR(0x47e8a6);
__builtin_memmove((R+4),(R+0),4);
}
B47e8a8:{NFSU2_TR(0x47e8a8);
TAIL_STATIC(0x475d60u,475);
}
B47e8ad:L47e8ad:{c.instructions+=2;NFSU2_TR(0x47e8ad);
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
B47e8af:{NFSU2_TR(0x47e8af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e8b0:L47e8b0:{c.instructions+=3;NFSU2_TR(0x47e8b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e8b1:{NFSU2_TR(0x47e8b1);
__builtin_memmove((R+24),(R+4),4);
}
B47e8b3:{NFSU2_TR(0x47e8b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e8b8ull));
TAIL_STATIC(0x475db0u,475);
}
B47e8b8:L47e8b8:{c.instructions+=2;NFSU2_TR(0x47e8b8);
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
B47e8bd:{NFSU2_TR(0x47e8bd);
if(r1(R+518)){{goto L47e8c8;}}
}
B47e8bf:L47e8bf:{c.instructions+=2;NFSU2_TR(0x47e8bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e8c0:{NFSU2_TR(0x47e8c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e8c5ull));
TAIL_STATIC(0x440540u,440);
}
B47e8c5:L47e8c5:{c.instructions+=1;NFSU2_TR(0x47e8c5);
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
B47e8c8:L47e8c8:{c.instructions+=3;NFSU2_TR(0x47e8c8);
__builtin_memmove((R+0),(R+24),4);
}
B47e8ca:{NFSU2_TR(0x47e8ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e8cb:{NFSU2_TR(0x47e8cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e8d0:L47e8d0:{c.instructions+=9;NFSU2_TR(0x47e8d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B47e8d3:{NFSU2_TR(0x47e8d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e8d4:{NFSU2_TR(0x47e8d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e8d5:{NFSU2_TR(0x47e8d5);
__builtin_memmove((R+24),(R+4),4);
}
B47e8d7:{NFSU2_TR(0x47e8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47e8dd:{NFSU2_TR(0x47e8dd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47e8df:{NFSU2_TR(0x47e8df);
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
B47e8e1:{NFSU2_TR(0x47e8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e8e4:{NFSU2_TR(0x47e8e4);
if(r1(R+518)){{goto L47e972;}}
}
B47e8ea:L47e8ea:{c.instructions+=5;NFSU2_TR(0x47e8ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47e8ec:{NFSU2_TR(0x47e8ec);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e8ee:{NFSU2_TR(0x47e8ee);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e8f2:{NFSU2_TR(0x47e8f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e8f6:{NFSU2_TR(0x47e8f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e8f9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e8f9:L47e8f9:{c.instructions+=5;NFSU2_TR(0x47e8f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47e8fb:{NFSU2_TR(0x47e8fb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e8fd:{NFSU2_TR(0x47e8fd);
__builtin_memmove((R+4),(R+24),4);
}
B47e8ff:{NFSU2_TR(0x47e8ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e903:{NFSU2_TR(0x47e903);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e906ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47e906:L47e906:{c.instructions+=6;NFSU2_TR(0x47e906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47e90c:{NFSU2_TR(0x47e90c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e910:{NFSU2_TR(0x47e910);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47e914:{NFSU2_TR(0x47e914);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e915:{NFSU2_TR(0x47e915);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47e91d:{NFSU2_TR(0x47e91d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e922ull));
TAIL_STATIC(0x47bb30u,47b);
}
B47e922:L47e922:{c.instructions+=2;NFSU2_TR(0x47e922);
__builtin_memmove((R+4),(R+24),4);
}
B47e924:{NFSU2_TR(0x47e924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e929ull));
TAIL_STATIC(0x462670u,462);
}
B47e929:L47e929:{c.instructions+=5;NFSU2_TR(0x47e929);
{u32 ea_=u32(u32(7899248u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47e92f:{NFSU2_TR(0x47e92f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47e935:{NFSU2_TR(0x47e935);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47e937:{NFSU2_TR(0x47e937);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47e93a:{NFSU2_TR(0x47e93a);
if(r1(R+518)){{goto L47e952;}}
}
B47e93c:L47e93c:{c.instructions+=2;NFSU2_TR(0x47e93c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47e93e:{NFSU2_TR(0x47e93e);
if(r1(R+518)){{goto L47e96c;}}
}
B47e940:L47e940:{c.instructions+=3;NFSU2_TR(0x47e940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47e942:{NFSU2_TR(0x47e942);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e944:{NFSU2_TR(0x47e944);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e946ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47e946:L47e946:{c.instructions+=5;NFSU2_TR(0x47e946);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e94c:{NFSU2_TR(0x47e94c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e94d:{NFSU2_TR(0x47e94d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47e94e:{NFSU2_TR(0x47e94e);
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
B47e951:{NFSU2_TR(0x47e951);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e952:L47e952:{c.instructions+=2;NFSU2_TR(0x47e952);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47e955:{NFSU2_TR(0x47e955);
if(r1(R+518)){{goto L47e962;}}
}
B47e957:L47e957:{c.instructions+=3;NFSU2_TR(0x47e957);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B47e95d:{NFSU2_TR(0x47e95d);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47e960:{NFSU2_TR(0x47e960);
if(r1(R+518)){{goto L47e972;}}
}
B47e962:L47e962:{c.instructions+=2;NFSU2_TR(0x47e962);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47e964:{NFSU2_TR(0x47e964);
if(r1(R+518)){{goto L47e96c;}}
}
B47e966:L47e966:{c.instructions+=3;NFSU2_TR(0x47e966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47e968:{NFSU2_TR(0x47e968);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e96a:{NFSU2_TR(0x47e96a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e96cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47e96c:L47e96c:{c.instructions+=1;NFSU2_TR(0x47e96c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47e972:L47e972:{c.instructions+=4;NFSU2_TR(0x47e972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e973:{NFSU2_TR(0x47e973);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47e974:{NFSU2_TR(0x47e974);
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
B47e977:{NFSU2_TR(0x47e977);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e980:L47e980:{c.instructions+=3;NFSU2_TR(0x47e980);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e981:{NFSU2_TR(0x47e981);
__builtin_memmove((R+24),(R+4),4);
}
B47e983:{NFSU2_TR(0x47e983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e988ull));
TAIL_STATIC(0x475f90u,475);
}
B47e988:L47e988:{c.instructions+=4;NFSU2_TR(0x47e988);
u8 U[4];
w4(U+0,u32(0x78bc30ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47e98e:{NFSU2_TR(0x47e98e);
__builtin_memmove((R+0),(R+24),4);
}
B47e990:{NFSU2_TR(0x47e990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e991:{NFSU2_TR(0x47e991);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e9a0:L47e9a0:{c.instructions+=3;NFSU2_TR(0x47e9a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e9a1:{NFSU2_TR(0x47e9a1);
__builtin_memmove((R+24),(R+4),4);
}
B47e9a3:{NFSU2_TR(0x47e9a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e9a8ull));
{goto L47e9c0;}
}
B47e9a8:L47e9a8:{c.instructions+=2;NFSU2_TR(0x47e9a8);
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
B47e9ad:{NFSU2_TR(0x47e9ad);
if(r1(R+518)){{goto L47e9b8;}}
}
B47e9af:L47e9af:{c.instructions+=2;NFSU2_TR(0x47e9af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e9b0:{NFSU2_TR(0x47e9b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e9b5ull));
TAIL_STATIC(0x440540u,440);
}
B47e9b5:L47e9b5:{c.instructions+=1;NFSU2_TR(0x47e9b5);
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
B47e9b8:L47e9b8:{c.instructions+=3;NFSU2_TR(0x47e9b8);
__builtin_memmove((R+0),(R+24),4);
}
B47e9ba:{NFSU2_TR(0x47e9ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47e9bb:{NFSU2_TR(0x47e9bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47e9c0:L47e9c0:{c.instructions+=2;NFSU2_TR(0x47e9c0);
u8 U[4];
w4(U+0,u32(0x78bc30ull));
s4(u32(r4(R+4)),r4(U+0));
}
B47e9c6:{NFSU2_TR(0x47e9c6);
TAIL_STATIC(0x476000u,476);
}
B47e9d0:L47e9d0:{c.instructions+=3;NFSU2_TR(0x47e9d0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47e9d5:{NFSU2_TR(0x47e9d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e9d6:{NFSU2_TR(0x47e9d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e9dbull));
TAIL_STATIC(0x43e910u,43e);
}
B47e9db:L47e9db:{c.instructions+=3;NFSU2_TR(0x47e9db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47e9de:{NFSU2_TR(0x47e9de);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4e0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4e0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47e9e3:{NFSU2_TR(0x47e9e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47ea0d;}}
}
B47e9e5:L47e9e5:{c.instructions+=6;NFSU2_TR(0x47e9e5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47e9eb:{NFSU2_TR(0x47e9eb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47e9ee:{NFSU2_TR(0x47e9ee);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47e9f4:{NFSU2_TR(0x47e9f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e9f5:{NFSU2_TR(0x47e9f5);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47e9fa:{NFSU2_TR(0x47e9fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47e9ffull));
TAIL_STATIC(0x440820u,440);
}
B47e9ff:L47e9ff:{c.instructions+=3;NFSU2_TR(0x47e9ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47ea02:{NFSU2_TR(0x47ea02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47ea04:{NFSU2_TR(0x47ea04);
if(r1(R+518)){{goto L47ea0d;}}
}
B47ea06:L47ea06:{c.instructions+=2;NFSU2_TR(0x47ea06);
__builtin_memmove((R+4),(R+0),4);
}
B47ea08:{NFSU2_TR(0x47ea08);
TAIL_STATIC(0x475f90u,475);
}
B47ea0d:L47ea0d:{c.instructions+=2;NFSU2_TR(0x47ea0d);
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
B47ea0f:{NFSU2_TR(0x47ea0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47ea10:L47ea10:{c.instructions+=3;NFSU2_TR(0x47ea10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ea11:{NFSU2_TR(0x47ea11);
__builtin_memmove((R+24),(R+4),4);
}
B47ea13:{NFSU2_TR(0x47ea13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ea18ull));
TAIL_STATIC(0x476000u,476);
}
B47ea18:L47ea18:{c.instructions+=2;NFSU2_TR(0x47ea18);
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
B47ea1d:{NFSU2_TR(0x47ea1d);
if(r1(R+518)){{goto L47ea28;}}
}
B47ea1f:L47ea1f:{c.instructions+=2;NFSU2_TR(0x47ea1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ea20:{NFSU2_TR(0x47ea20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ea25ull));
TAIL_STATIC(0x440540u,440);
}
B47ea25:L47ea25:{c.instructions+=1;NFSU2_TR(0x47ea25);
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
B47ea28:L47ea28:{c.instructions+=3;NFSU2_TR(0x47ea28);
__builtin_memmove((R+0),(R+24),4);
}
B47ea2a:{NFSU2_TR(0x47ea2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47ea2b:{NFSU2_TR(0x47ea2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47ea30:L47ea30:{c.instructions+=8;NFSU2_TR(0x47ea30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ea31:{NFSU2_TR(0x47ea31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ea32:{NFSU2_TR(0x47ea32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ea33:{NFSU2_TR(0x47ea33);
__builtin_memmove((R+28),(R+4),4);
}
B47ea35:{NFSU2_TR(0x47ea35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ea3b:{NFSU2_TR(0x47ea3b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47ea3d:{NFSU2_TR(0x47ea3d);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47ea3f:{NFSU2_TR(0x47ea3f);
if(r1(R+518)){{goto L47ea47;}}
}
B47ea41:L47ea41:{c.instructions+=3;NFSU2_TR(0x47ea41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47ea43:{NFSU2_TR(0x47ea43);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ea45:{NFSU2_TR(0x47ea45);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ea47ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47ea47:L47ea47:{c.instructions+=6;NFSU2_TR(0x47ea47);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47ea4b:{NFSU2_TR(0x47ea4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ea51:{NFSU2_TR(0x47ea51);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47ea57:{NFSU2_TR(0x47ea57);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47ea59:{NFSU2_TR(0x47ea59);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47ea5c:{NFSU2_TR(0x47ea5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47eab4;}}
}
B47ea5e:L47ea5e:{c.instructions+=6;NFSU2_TR(0x47ea5e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47ea62:{NFSU2_TR(0x47ea62);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47ea68:{NFSU2_TR(0x47ea68);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47ea6c:{NFSU2_TR(0x47ea6c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47ea6e:{NFSU2_TR(0x47ea6e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47ea71:{NFSU2_TR(0x47ea71);
if(r1(R+514)){{goto L47ea7b;}}
}
B47ea73:L47ea73:{c.instructions+=2;NFSU2_TR(0x47ea73);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47ea75:{NFSU2_TR(0x47ea75);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47ea7b:L47ea7b:{c.instructions+=2;NFSU2_TR(0x47ea7b);
u8 U[7];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ea7f:{NFSU2_TR(0x47ea7f);
if(r1(R+518)){{goto L47eabc;}}
}
B47ea81:L47ea81:{c.instructions+=3;NFSU2_TR(0x47ea81);
__builtin_memmove((R+24),gp(0x82cbf8),4);
}
B47ea87:{NFSU2_TR(0x47ea87);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B47ea8d:{NFSU2_TR(0x47ea8d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L47ea94;}}
}
B47ea8f:L47ea8f:{c.instructions+=3;NFSU2_TR(0x47ea8f);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B47ea90:{NFSU2_TR(0x47ea90);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffcull))));
}
B47ea93:{NFSU2_TR(0x47ea93);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47ea94:L47ea94:{c.instructions+=2;NFSU2_TR(0x47ea94);
{u32 ea_=u32(u32(7882044u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47ea9a:{NFSU2_TR(0x47ea9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ea9full));
TAIL_STATIC(0x75bed4u,75b);
}
B47ea9f:L47ea9f:{c.instructions+=8;NFSU2_TR(0x47ea9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B47eaa2:{NFSU2_TR(0x47eaa2);
__builtin_memmove((R+4),(R+0),4);
}
B47eaa4:{NFSU2_TR(0x47eaa4);
__builtin_memmove((R+0),(R+24),4);
}
B47eaa6:{NFSU2_TR(0x47eaa6);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B47eaa8:{NFSU2_TR(0x47eaa8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
}
B47eaab:{NFSU2_TR(0x47eaab);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47eaac:{NFSU2_TR(0x47eaac);
__builtin_memmove(gp(0x82cbf8),(R+24),4);
}
B47eab2:{NFSU2_TR(0x47eab2);
{goto L47eaed;}
}
B47eab4:L47eab4:{c.instructions+=2;NFSU2_TR(0x47eab4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47eaba:{NFSU2_TR(0x47eaba);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47ea7bu);}goto L47ea7b;}
}
B47eabc:L47eabc:{c.instructions+=3;NFSU2_TR(0x47eabc);
__builtin_memmove((R+24),gp(0x82cbf4),4);
}
B47eac2:{NFSU2_TR(0x47eac2);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B47eac8:{NFSU2_TR(0x47eac8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L47eacf;}}
}
B47eaca:L47eaca:{c.instructions+=3;NFSU2_TR(0x47eaca);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B47eacb:{NFSU2_TR(0x47eacb);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffcull))));
}
B47eace:{NFSU2_TR(0x47eace);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47eacf:L47eacf:{c.instructions+=2;NFSU2_TR(0x47eacf);
{u32 ea_=u32(u32(7909484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47ead5:{NFSU2_TR(0x47ead5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47eadaull));
TAIL_STATIC(0x75bed4u,75b);
}
B47eada:L47eada:{c.instructions+=7;NFSU2_TR(0x47eada);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B47eadd:{NFSU2_TR(0x47eadd);
__builtin_memmove((R+8),(R+0),4);
}
B47eadf:{NFSU2_TR(0x47eadf);
__builtin_memmove((R+0),(R+24),4);
}
B47eae1:{NFSU2_TR(0x47eae1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47eae3:{NFSU2_TR(0x47eae3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
}
B47eae6:{NFSU2_TR(0x47eae6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47eae7:{NFSU2_TR(0x47eae7);
__builtin_memmove(gp(0x82cbf4),(R+24),4);
}
B47eaed:L47eaed:{c.instructions+=5;NFSU2_TR(0x47eaed);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B47eaf3:{NFSU2_TR(0x47eaf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47eaf9:{NFSU2_TR(0x47eaf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47eafa:{NFSU2_TR(0x47eafa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B47eafd:{NFSU2_TR(0x47eafd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47eb02ull));
TAIL_STATIC(0x43be60u,43b);
}
B47eb02:L47eb02:{c.instructions+=4;NFSU2_TR(0x47eb02);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B47eb08:{NFSU2_TR(0x47eb08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47eb0b:{NFSU2_TR(0x47eb0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47eb0c:{NFSU2_TR(0x47eb0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47eb11ull));
TAIL_STATIC(0x43e910u,43e);
}
B47eb11:L47eb11:{c.instructions+=3;NFSU2_TR(0x47eb11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47eb14:{NFSU2_TR(0x47eb14);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x45cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x45cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47eb19:{NFSU2_TR(0x47eb19);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47eb41;}}
}
B47eb1b:L47eb1b:{c.instructions+=6;NFSU2_TR(0x47eb1b);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47eb20:{NFSU2_TR(0x47eb20);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B47eb23:{NFSU2_TR(0x47eb23);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B47eb28:{NFSU2_TR(0x47eb28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47eb29:{NFSU2_TR(0x47eb29);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47eb2b:{NFSU2_TR(0x47eb2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47eb30ull));
TAIL_STATIC(0x440820u,440);
}
B47eb30:L47eb30:{c.instructions+=3;NFSU2_TR(0x47eb30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47eb33:{NFSU2_TR(0x47eb33);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47eb35:{NFSU2_TR(0x47eb35);
if(r1(R+518)){{goto L47eb41;}}
}
B47eb37:L47eb37:{c.instructions+=3;NFSU2_TR(0x47eb37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47eb38:{NFSU2_TR(0x47eb38);
__builtin_memmove((R+4),(R+0),4);
}
B47eb3a:{NFSU2_TR(0x47eb3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47eb3full));
TAIL_STATIC(0x45b1f0u,45b);
}
B47eb3f:L47eb3f:{c.instructions+=1;NFSU2_TR(0x47eb3f);
{goto L47eb43;}
}
B47eb41:L47eb41:{c.instructions+=1;NFSU2_TR(0x47eb41);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47eb43:L47eb43:{c.instructions+=8;NFSU2_TR(0x47eb43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47eb46:{NFSU2_TR(0x47eb46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47eb4c:{NFSU2_TR(0x47eb4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47eb4d:{NFSU2_TR(0x47eb4d);
__builtin_memmove((R+4),(R+0),4);
}
B47eb4f:{NFSU2_TR(0x47eb4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47eb52:{NFSU2_TR(0x47eb52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47eb55:{NFSU2_TR(0x47eb55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47eb58:{NFSU2_TR(0x47eb58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47eb5dull));
TAIL_STATIC(0x46cdd0u,46c);
}
B47eb5d:L47eb5d:{c.instructions+=5;NFSU2_TR(0x47eb5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47eb60:{NFSU2_TR(0x47eb60);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47eb63:{NFSU2_TR(0x47eb63);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B47eb66:{NFSU2_TR(0x47eb66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47eb67:{NFSU2_TR(0x47eb67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47eb6cull));
TAIL_STATIC(0x459ac0u,459);
}
B47eb6c:L47eb6c:{c.instructions+=3;NFSU2_TR(0x47eb6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47eb6f:{NFSU2_TR(0x47eb6f);
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
B47eb71:{NFSU2_TR(0x47eb71);
if(r1(R+518)){{goto L47ec46;}}
}
B47eb77:L47eb77:{c.instructions+=2;NFSU2_TR(0x47eb77);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x6ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B47eb7b:{NFSU2_TR(0x47eb7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ec46;}}
}
B47eb81:L47eb81:{c.instructions+=3;NFSU2_TR(0x47eb81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47eb87:{NFSU2_TR(0x47eb87);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47eb89:{NFSU2_TR(0x47eb89);
if(r1(R+518)){{goto L47eb91;}}
}
B47eb8b:L47eb8b:{c.instructions+=3;NFSU2_TR(0x47eb8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47eb8d:{NFSU2_TR(0x47eb8d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47eb8f:{NFSU2_TR(0x47eb8f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47eb91ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47eb91:L47eb91:{c.instructions+=3;NFSU2_TR(0x47eb91);
u8 U[4];
w4(U+0,u32(0x42fe0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47eb96:{NFSU2_TR(0x47eb96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47eb9c:{NFSU2_TR(0x47eb9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47eba1ull));
TAIL_STATIC(0x43c1f0u,43c);
}
B47eba1:L47eba1:{c.instructions+=4;NFSU2_TR(0x47eba1);
__builtin_memmove((R+24),gp(0x82cbf0),4);
}
B47eba7:{NFSU2_TR(0x47eba7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47ebaa:{NFSU2_TR(0x47ebaa);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B47ebb0:{NFSU2_TR(0x47ebb0);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L47ebb7;}}
}
B47ebb2:L47ebb2:{c.instructions+=3;NFSU2_TR(0x47ebb2);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B47ebb3:{NFSU2_TR(0x47ebb3);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffcull))));
}
B47ebb6:{NFSU2_TR(0x47ebb6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47ebb7:L47ebb7:{c.instructions+=2;NFSU2_TR(0x47ebb7);
{u32 ea_=u32(u32(7909484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47ebbd:{NFSU2_TR(0x47ebbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ebc2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47ebc2:L47ebc2:{c.instructions+=12;NFSU2_TR(0x47ebc2);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B47ebc8:{NFSU2_TR(0x47ebc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B47ebcb:{NFSU2_TR(0x47ebcb);
__builtin_memmove((R+4),(R+0),4);
}
B47ebcd:{NFSU2_TR(0x47ebcd);
__builtin_memmove((R+0),(R+24),4);
}
B47ebcf:{NFSU2_TR(0x47ebcf);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B47ebd1:{NFSU2_TR(0x47ebd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ebd7:{NFSU2_TR(0x47ebd7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
}
B47ebda:{NFSU2_TR(0x47ebda);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47ebdb:{NFSU2_TR(0x47ebdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ebdc:{NFSU2_TR(0x47ebdc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B47ebdf:{NFSU2_TR(0x47ebdf);
__builtin_memmove(gp(0x82cbf0),(R+24),4);
}
B47ebe5:{NFSU2_TR(0x47ebe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ebeaull));
TAIL_STATIC(0x43be60u,43b);
}
B47ebea:L47ebea:{c.instructions+=4;NFSU2_TR(0x47ebea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47ebed:{NFSU2_TR(0x47ebed);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47ebf2:{NFSU2_TR(0x47ebf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ebf3:{NFSU2_TR(0x47ebf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ebf8ull));
TAIL_STATIC(0x43e910u,43e);
}
B47ebf8:L47ebf8:{c.instructions+=3;NFSU2_TR(0x47ebf8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47ebfb:{NFSU2_TR(0x47ebfb);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x45cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x45cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47ec00:{NFSU2_TR(0x47ec00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47ec2a;}}
}
B47ec02:L47ec02:{c.instructions+=6;NFSU2_TR(0x47ec02);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47ec08:{NFSU2_TR(0x47ec08);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47ec0b:{NFSU2_TR(0x47ec0b);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47ec11:{NFSU2_TR(0x47ec11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ec12:{NFSU2_TR(0x47ec12);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ec14:{NFSU2_TR(0x47ec14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ec19ull));
TAIL_STATIC(0x440820u,440);
}
B47ec19:L47ec19:{c.instructions+=3;NFSU2_TR(0x47ec19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47ec1c:{NFSU2_TR(0x47ec1c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47ec1e:{NFSU2_TR(0x47ec1e);
if(r1(R+518)){{goto L47ec2a;}}
}
B47ec20:L47ec20:{c.instructions+=3;NFSU2_TR(0x47ec20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ec21:{NFSU2_TR(0x47ec21);
__builtin_memmove((R+4),(R+0),4);
}
B47ec23:{NFSU2_TR(0x47ec23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ec28ull));
TAIL_STATIC(0x45b1f0u,45b);
}
B47ec28:L47ec28:{c.instructions+=1;NFSU2_TR(0x47ec28);
{goto L47ec2c;}
}
B47ec2a:L47ec2a:{c.instructions+=1;NFSU2_TR(0x47ec2a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47ec2c:L47ec2c:{c.instructions+=8;NFSU2_TR(0x47ec2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ec32:{NFSU2_TR(0x47ec32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B47ec35:{NFSU2_TR(0x47ec35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ec36:{NFSU2_TR(0x47ec36);
__builtin_memmove((R+4),(R+0),4);
}
B47ec38:{NFSU2_TR(0x47ec38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ec3b:{NFSU2_TR(0x47ec3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ec3e:{NFSU2_TR(0x47ec3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ec41:{NFSU2_TR(0x47ec41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ec46ull));
TAIL_STATIC(0x46cdd0u,46c);
}
B47ec46:L47ec46:{c.instructions+=5;NFSU2_TR(0x47ec46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ec4d:{NFSU2_TR(0x47ec4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47ec4e:{NFSU2_TR(0x47ec4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47ec4f:{NFSU2_TR(0x47ec4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47ec50:{NFSU2_TR(0x47ec50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47ec60:L47ec60:{c.instructions+=5;NFSU2_TR(0x47ec60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ec61:{NFSU2_TR(0x47ec61);
__builtin_memmove((R+28),(R+4),4);
}
B47ec63:{NFSU2_TR(0x47ec63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ec69:{NFSU2_TR(0x47ec69);
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
B47ec6b:{NFSU2_TR(0x47ec6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ed77;}}
}
B47ec71:L47ec71:{c.instructions+=4;NFSU2_TR(0x47ec71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ec75:{NFSU2_TR(0x47ec75);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47ec79:{NFSU2_TR(0x47ec79);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47ec7b:{NFSU2_TR(0x47ec7b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47ec83;}}
}
B47ec7d:L47ec7d:{c.instructions+=1;NFSU2_TR(0x47ec7d);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47ec83:L47ec83:{c.instructions+=5;NFSU2_TR(0x47ec83);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47ec87:{NFSU2_TR(0x47ec87);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47ec8d:{NFSU2_TR(0x47ec8d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47ec8f:{NFSU2_TR(0x47ec8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47ec92:{NFSU2_TR(0x47ec92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ed3c;}}
}
B47ec98:L47ec98:{c.instructions+=6;NFSU2_TR(0x47ec98);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47ec9c:{NFSU2_TR(0x47ec9c);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47eca2:{NFSU2_TR(0x47eca2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47eca6:{NFSU2_TR(0x47eca6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47eca8:{NFSU2_TR(0x47eca8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47ecab:{NFSU2_TR(0x47ecab);
if(r1(R+514)){{goto L47ecb5;}}
}
B47ecad:L47ecad:{c.instructions+=2;NFSU2_TR(0x47ecad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47ecaf:{NFSU2_TR(0x47ecaf);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47ecb5:L47ecb5:{c.instructions+=4;NFSU2_TR(0x47ecb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ecb6:{NFSU2_TR(0x47ecb6);
__builtin_memmove((R+24),gp(0x82cbfc),4);
}
B47ecbc:{NFSU2_TR(0x47ecbc);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B47ecc2:{NFSU2_TR(0x47ecc2);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L47ecc9;}}
}
B47ecc4:L47ecc4:{c.instructions+=3;NFSU2_TR(0x47ecc4);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B47ecc5:{NFSU2_TR(0x47ecc5);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffcull))));
}
B47ecc8:{NFSU2_TR(0x47ecc8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47ecc9:L47ecc9:{c.instructions+=2;NFSU2_TR(0x47ecc9);
{u32 ea_=u32(u32(7912564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47eccf:{NFSU2_TR(0x47eccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ecd4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47ecd4:L47ecd4:{c.instructions+=12;NFSU2_TR(0x47ecd4);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B47ecda:{NFSU2_TR(0x47ecda);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B47ecdd:{NFSU2_TR(0x47ecdd);
__builtin_memmove((R+4),(R+0),4);
}
B47ecdf:{NFSU2_TR(0x47ecdf);
__builtin_memmove((R+0),(R+24),4);
}
B47ece1:{NFSU2_TR(0x47ece1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B47ece3:{NFSU2_TR(0x47ece3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ece9:{NFSU2_TR(0x47ece9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
}
B47ecec:{NFSU2_TR(0x47ecec);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47eced:{NFSU2_TR(0x47eced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ecee:{NFSU2_TR(0x47ecee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B47ecf1:{NFSU2_TR(0x47ecf1);
__builtin_memmove(gp(0x82cbfc),(R+24),4);
}
B47ecf7:{NFSU2_TR(0x47ecf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ecfcull));
TAIL_STATIC(0x43be60u,43b);
}
B47ecfc:L47ecfc:{c.instructions+=4;NFSU2_TR(0x47ecfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47ecff:{NFSU2_TR(0x47ecff);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47ed04:{NFSU2_TR(0x47ed04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ed05:{NFSU2_TR(0x47ed05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ed0aull));
TAIL_STATIC(0x43e910u,43e);
}
B47ed0a:L47ed0a:{c.instructions+=3;NFSU2_TR(0x47ed0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47ed0d:{NFSU2_TR(0x47ed0d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x45cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x45cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47ed12:{NFSU2_TR(0x47ed12);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47ed47;}}
}
B47ed14:L47ed14:{c.instructions+=6;NFSU2_TR(0x47ed14);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47ed1a:{NFSU2_TR(0x47ed1a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47ed1d:{NFSU2_TR(0x47ed1d);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47ed23:{NFSU2_TR(0x47ed23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ed24:{NFSU2_TR(0x47ed24);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ed26:{NFSU2_TR(0x47ed26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ed2bull));
TAIL_STATIC(0x440820u,440);
}
B47ed2b:L47ed2b:{c.instructions+=3;NFSU2_TR(0x47ed2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47ed2e:{NFSU2_TR(0x47ed2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47ed30:{NFSU2_TR(0x47ed30);
if(r1(R+518)){{goto L47ed47;}}
}
B47ed32:L47ed32:{c.instructions+=3;NFSU2_TR(0x47ed32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ed33:{NFSU2_TR(0x47ed33);
__builtin_memmove((R+4),(R+0),4);
}
B47ed35:{NFSU2_TR(0x47ed35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ed3aull));
TAIL_STATIC(0x45b1f0u,45b);
}
B47ed3a:L47ed3a:{c.instructions+=1;NFSU2_TR(0x47ed3a);
{goto L47ed49;}
}
B47ed3c:L47ed3c:{c.instructions+=2;NFSU2_TR(0x47ed3c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47ed42:{NFSU2_TR(0x47ed42);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47ecb5u);}goto L47ecb5;}
}
B47ed47:L47ed47:{c.instructions+=1;NFSU2_TR(0x47ed47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47ed49:L47ed49:{c.instructions+=8;NFSU2_TR(0x47ed49);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ed4f:{NFSU2_TR(0x47ed4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B47ed52:{NFSU2_TR(0x47ed52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ed53:{NFSU2_TR(0x47ed53);
__builtin_memmove((R+4),(R+0),4);
}
B47ed55:{NFSU2_TR(0x47ed55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ed5c:{NFSU2_TR(0x47ed5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ed63:{NFSU2_TR(0x47ed63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ed6a:{NFSU2_TR(0x47ed6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ed6full));
TAIL_STATIC(0x46cdd0u,46c);
}
B47ed6f:L47ed6f:{c.instructions+=2;NFSU2_TR(0x47ed6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ed76:{NFSU2_TR(0x47ed76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47ed77:L47ed77:{c.instructions+=2;NFSU2_TR(0x47ed77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47ed78:{NFSU2_TR(0x47ed78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47ed80:L47ed80:{c.instructions+=13;NFSU2_TR(0x47ed80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ed81:{NFSU2_TR(0x47ed81);
__builtin_memmove((R+20),(R+16),4);
}
B47ed83:{NFSU2_TR(0x47ed83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B47ed86:{NFSU2_TR(0x47ed86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B47ed89:{NFSU2_TR(0x47ed89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ed8a:{NFSU2_TR(0x47ed8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ed8b:{NFSU2_TR(0x47ed8b);
__builtin_memmove((R+24),(R+4),4);
}
B47ed8d:{NFSU2_TR(0x47ed8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ed90:{NFSU2_TR(0x47ed90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ed93:{NFSU2_TR(0x47ed93);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47ed95:{NFSU2_TR(0x47ed95);
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
B47ed97:{NFSU2_TR(0x47ed97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ed98:{NFSU2_TR(0x47ed98);
if(r1(R+518)){TAIL_STATIC(0x47f0f7u,47f);}
}
B47ed9e:L47ed9e:{c.instructions+=7;NFSU2_TR(0x47ed9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47eda4:{NFSU2_TR(0x47eda4);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B47eda6:{NFSU2_TR(0x47eda6);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47edaa:{NFSU2_TR(0x47edaa);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47edae:{NFSU2_TR(0x47edae);
u8 U[5];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47edb2:{NFSU2_TR(0x47edb2);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47edb6:{NFSU2_TR(0x47edb6);
if(r1(R+518)){{goto L47edc5;}}
}
B47edb8:L47edb8:{c.instructions+=2;NFSU2_TR(0x47edb8);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x391ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47edbe:{NFSU2_TR(0x47edbe);
if(r1(R+518)){{goto L47edda;}}
}
B47edc0:L47edc0:{c.instructions+=1;NFSU2_TR(0x47edc0);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47edc5:L47edc5:{c.instructions+=2;NFSU2_TR(0x47edc5);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x391ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47edcb:{NFSU2_TR(0x47edcb);
if(r1(R+518)){{goto L47edda;}}
}
B47edcd:L47edcd:{c.instructions+=2;NFSU2_TR(0x47edcd);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x392ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47edd3:{NFSU2_TR(0x47edd3);
if(r1(R+518)){{goto L47edef;}}
}
B47edd5:L47edd5:{c.instructions+=1;NFSU2_TR(0x47edd5);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47edda:L47edda:{c.instructions+=2;NFSU2_TR(0x47edda);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x392ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ede0:{NFSU2_TR(0x47ede0);
if(r1(R+518)){{goto L47edef;}}
}
B47ede2:L47ede2:{c.instructions+=2;NFSU2_TR(0x47ede2);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x393ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ede8:{NFSU2_TR(0x47ede8);
if(r1(R+518)){{goto L47ee00;}}
}
B47edea:L47edea:{c.instructions+=1;NFSU2_TR(0x47edea);
u8 U[5];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47edef:L47edef:{c.instructions+=2;NFSU2_TR(0x47edef);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x393ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47edf5:{NFSU2_TR(0x47edf5);
if(r1(R+518)){{goto L47ee00;}}
}
B47edf7:L47edf7:{c.instructions+=2;NFSU2_TR(0x47edf7);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B47edf9:{NFSU2_TR(0x47edf9);
if(r1(R+518)){{goto L47ee00;}}
}
B47edfb:L47edfb:{c.instructions+=1;NFSU2_TR(0x47edfb);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47ee00:L47ee00:{c.instructions+=3;NFSU2_TR(0x47ee00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ee03:{NFSU2_TR(0x47ee03);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47ee07:{NFSU2_TR(0x47ee07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ee33;}}
}
B47ee09:L47ee09:{c.instructions+=2;NFSU2_TR(0x47ee09);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ee0f:{NFSU2_TR(0x47ee0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ee33;}}
}
B47ee11:L47ee11:{c.instructions+=3;NFSU2_TR(0x47ee11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ee17:{NFSU2_TR(0x47ee17);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ee1d:{NFSU2_TR(0x47ee1d);
if(r1(R+518)){{goto L47ee33;}}
}
B47ee1f:L47ee1f:{c.instructions+=5;NFSU2_TR(0x47ee1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ee25:{NFSU2_TR(0x47ee25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ee26:{NFSU2_TR(0x47ee26);
__builtin_memmove((R+4),(R+24),4);
}
B47ee28:{NFSU2_TR(0x47ee28);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47ee2e:{NFSU2_TR(0x47ee2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ee33ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47ec60u);}goto L47ec60;}
}
B47ee33:L47ee33:{c.instructions+=2;NFSU2_TR(0x47ee33);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ee39:{NFSU2_TR(0x47ee39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ee7f;}}
}
B47ee3b:L47ee3b:{c.instructions+=10;NFSU2_TR(0x47ee3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ee3e:{NFSU2_TR(0x47ee3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ee41:{NFSU2_TR(0x47ee41);
{u32 ea_=u32(r4(R+4)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47ee47:{NFSU2_TR(0x47ee47);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47ee4d:{NFSU2_TR(0x47ee4d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47ee53:{NFSU2_TR(0x47ee53);
{u32 ea_=u32(r4(R+4)+u32(184u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47ee59:{NFSU2_TR(0x47ee59);
{u32 ea_=u32(u32(8312164u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47ee5f:{NFSU2_TR(0x47ee5f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47ee61:{NFSU2_TR(0x47ee61);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47ee64:{NFSU2_TR(0x47ee64);
if(r1(R+514)){{goto L47ee7f;}}
}
B47ee66:L47ee66:{c.instructions+=1;NFSU2_TR(0x47ee66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ee6bull));
TAIL_STATIC(0x5ec1f0u,5ec);
}
B47ee6b:L47ee6b:{c.instructions+=4;NFSU2_TR(0x47ee6b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47ee71:{NFSU2_TR(0x47ee71);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47ee73:{NFSU2_TR(0x47ee73);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47ee76:{NFSU2_TR(0x47ee76);
if(r1(R+514)){{goto L47ee7f;}}
}
B47ee78:L47ee78:{c.instructions+=1;NFSU2_TR(0x47ee78);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47ee7f:L47ee7f:{c.instructions+=7;NFSU2_TR(0x47ee7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ee82:{NFSU2_TR(0x47ee82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ee85:{NFSU2_TR(0x47ee85);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47ee8b:{NFSU2_TR(0x47ee8b);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B47ee8d:{NFSU2_TR(0x47ee8d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B47ee8f:{NFSU2_TR(0x47ee8f);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47ee93:{NFSU2_TR(0x47ee93);
if(r1(R+518)){{goto L47eeb8;}}
}
B47ee95:L47ee95:{c.instructions+=2;NFSU2_TR(0x47ee95);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x391ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ee9b:{NFSU2_TR(0x47ee9b);
if(r1(R+518)){{goto L47eeb8;}}
}
B47ee9d:L47ee9d:{c.instructions+=5;NFSU2_TR(0x47ee9d);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47eea3:{NFSU2_TR(0x47eea3);
{u32 ea_=u32(u32(7899276u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47eea9:{NFSU2_TR(0x47eea9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47eeab:{NFSU2_TR(0x47eeab);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47eeae:{NFSU2_TR(0x47eeae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47eeb8;}}
}
B47eeb0:L47eeb0:{c.instructions+=2;NFSU2_TR(0x47eeb0);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47eeb6:{NFSU2_TR(0x47eeb6);
if(r1(R+518)){{goto L47eee3;}}
}
B47eeb8:L47eeb8:{c.instructions+=2;NFSU2_TR(0x47eeb8);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x392ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47eebe:{NFSU2_TR(0x47eebe);
if(r1(R+518)){{goto L47eef1;}}
}
B47eec0:L47eec0:{c.instructions+=2;NFSU2_TR(0x47eec0);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x393ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47eec6:{NFSU2_TR(0x47eec6);
if(r1(R+518)){{goto L47eef1;}}
}
B47eec8:L47eec8:{c.instructions+=5;NFSU2_TR(0x47eec8);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47eece:{NFSU2_TR(0x47eece);
{u32 ea_=u32(u32(7899276u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47eed4:{NFSU2_TR(0x47eed4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47eed6:{NFSU2_TR(0x47eed6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47eed9:{NFSU2_TR(0x47eed9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47eef1;}}
}
B47eedb:L47eedb:{c.instructions+=2;NFSU2_TR(0x47eedb);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47eee1:{NFSU2_TR(0x47eee1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47eef1;}}
}
B47eee3:L47eee3:{c.instructions+=2;NFSU2_TR(0x47eee3);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47eee9:{NFSU2_TR(0x47eee9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47eef9;}}
}
B47eeeb:L47eeeb:{c.instructions+=2;NFSU2_TR(0x47eeeb);
w1(R+8,u8(0x1ull));
}
B47eeed:{NFSU2_TR(0x47eeed);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47eef1:L47eef1:{c.instructions+=2;NFSU2_TR(0x47eef1);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47eef7:{NFSU2_TR(0x47eef7);
if(r1(R+518)){{goto L47ef38;}}
}
B47eef9:L47eef9:{c.instructions+=2;NFSU2_TR(0x47eef9);
u8 U[7];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47eefd:{NFSU2_TR(0x47eefd);
if(r1(R+518)){{goto L47ef07;}}
}
B47eeff:L47eeff:{c.instructions+=2;NFSU2_TR(0x47eeff);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ef05:{NFSU2_TR(0x47ef05);
if(r1(R+518)){{goto L47ef31;}}
}
B47ef07:L47ef07:{c.instructions+=2;NFSU2_TR(0x47ef07);
u8 U[7];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ef0b:{NFSU2_TR(0x47ef0b);
if(r1(R+518)){{goto L47ef15;}}
}
B47ef0d:L47ef0d:{c.instructions+=2;NFSU2_TR(0x47ef0d);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ef13:{NFSU2_TR(0x47ef13);
if(r1(R+518)){{goto L47ef31;}}
}
B47ef15:L47ef15:{c.instructions+=2;NFSU2_TR(0x47ef15);
u8 U[7];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ef19:{NFSU2_TR(0x47ef19);
if(r1(R+518)){{goto L47ef23;}}
}
B47ef1b:L47ef1b:{c.instructions+=2;NFSU2_TR(0x47ef1b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ef21:{NFSU2_TR(0x47ef21);
if(r1(R+518)){{goto L47ef31;}}
}
B47ef23:L47ef23:{c.instructions+=2;NFSU2_TR(0x47ef23);
u8 U[7];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ef27:{NFSU2_TR(0x47ef27);
if(r1(R+518)){{goto L47ef38;}}
}
B47ef29:L47ef29:{c.instructions+=2;NFSU2_TR(0x47ef29);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ef2f:{NFSU2_TR(0x47ef2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ef38;}}
}
B47ef31:L47ef31:{c.instructions+=2;NFSU2_TR(0x47ef31);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47ef36:{NFSU2_TR(0x47ef36);
{goto L47ef40;}
}
B47ef38:L47ef38:{c.instructions+=2;NFSU2_TR(0x47ef38);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B47ef3a:{NFSU2_TR(0x47ef3a);
if(r1(R+518)){{goto L47efbf;}}
}
B47ef40:L47ef40:{c.instructions+=3;NFSU2_TR(0x47ef40);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47ef44:{NFSU2_TR(0x47ef44);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ef4c:{NFSU2_TR(0x47ef4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47efae;}}
}
B47ef4e:L47ef4e:{c.instructions+=2;NFSU2_TR(0x47ef4e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B47ef50:{NFSU2_TR(0x47ef50);
w4(R+8,u32(0x28ull));
}
B47ef55:L47ef55:{c.instructions+=11;NFSU2_TR(0x47ef55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ef58:{NFSU2_TR(0x47ef58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ef5b:{NFSU2_TR(0x47ef5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ef5e:{NFSU2_TR(0x47ef5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B47ef61:{NFSU2_TR(0x47ef61);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47ef64:{NFSU2_TR(0x47ef64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ef67:{NFSU2_TR(0x47ef67);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(388u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B47ef6e:{NFSU2_TR(0x47ef6e);
w4(R+4,u32(0x7f0b5cull));
}
B47ef73:{NFSU2_TR(0x47ef73);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B47ef75:{NFSU2_TR(0x47ef75);
{u32 ea_=u32(u32(8325996u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47ef7b:{NFSU2_TR(0x47ef7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ef80ull));
TAIL_STATIC(0x4599e0u,459);
}
B47ef80:L47ef80:{c.instructions+=7;NFSU2_TR(0x47ef80);
{u32 ea_=u32(u32(8326000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47ef86:{NFSU2_TR(0x47ef86);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47ef8a:{NFSU2_TR(0x47ef8a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B47ef8d:{NFSU2_TR(0x47ef8d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B47ef90:{NFSU2_TR(0x47ef90);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x38ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47ef93:{NFSU2_TR(0x47ef93);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47ef97:{NFSU2_TR(0x47ef97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47ef55u);}goto L47ef55;}}
}
B47ef99:L47ef99:{c.instructions+=7;NFSU2_TR(0x47ef99);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ef9d:{NFSU2_TR(0x47ef9d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47efa1:{NFSU2_TR(0x47efa1);
{u32 ea_=u32(u32(7912568u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47efa7:{NFSU2_TR(0x47efa7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47efa8:{NFSU2_TR(0x47efa8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47efa9:{NFSU2_TR(0x47efa9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47efac:{NFSU2_TR(0x47efac);
{goto L47efb8;}
}
B47efae:L47efae:{c.instructions+=3;NFSU2_TR(0x47efae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47efb2:{NFSU2_TR(0x47efb2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47efb3:{NFSU2_TR(0x47efb3);
u8 U[4];
w4(U+0,u32(0x42fe0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47efb8:L47efb8:{c.instructions+=2;NFSU2_TR(0x47efb8);
__builtin_memmove((R+4),(R+24),4);
}
B47efba:{NFSU2_TR(0x47efba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47efbfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47ea30u);}goto L47ea30;}
}
B47efbf:L47efbf:{c.instructions+=3;NFSU2_TR(0x47efbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47efc2:{NFSU2_TR(0x47efc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47efc5:{NFSU2_TR(0x47efc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47efcaull));
TAIL_STATIC(0x5ec1f0u,5ec);
}
B47efca:L47efca:{c.instructions+=4;NFSU2_TR(0x47efca);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47efd0:{NFSU2_TR(0x47efd0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47efd2:{NFSU2_TR(0x47efd2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47efd5:{NFSU2_TR(0x47efd5);
if(r1(R+514)){{goto L47efe5;}}
}
B47efd7:L47efd7:{c.instructions+=2;NFSU2_TR(0x47efd7);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47efdd:{NFSU2_TR(0x47efdd);
if(r1(R+518)){{goto L47efe5;}}
}
B47efdf:L47efdf:{c.instructions+=1;NFSU2_TR(0x47efdf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47efe5:L47efe5:{c.instructions+=4;NFSU2_TR(0x47efe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47efe8:{NFSU2_TR(0x47efe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47efeb:{NFSU2_TR(0x47efeb);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47eff1:{NFSU2_TR(0x47eff1);
if(r1(R+518)){TAIL_STATIC(0x47f004u,47f);}
}
B47eff3:L47eff3:{c.instructions+=2;NFSU2_TR(0x47eff3);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x391ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47eff9:{NFSU2_TR(0x47eff9);
if(r1(R+518)){TAIL_STATIC(0x47f004u,47f);}
}
B47effb:L47effb:{c.instructions+=1;NFSU2_TR(0x47effb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
TAIL_STATIC(0x47f002u,47f);
}
XIT:NFSU2_TR_EXIT(0x47e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
