#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_4f9(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_535(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x53e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x53e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_53e(u8* __restrict R,Cpu& c);
u32 page_53e(Cpu& c){return body_53e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_53e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x53e003:goto L53e003;
case 0x53e007:c.instructions+=2;goto B53e007;
case 0x53e00a:c.instructions+=1;goto B53e00a;
case 0x53e00c:goto L53e00c;
case 0x53e013:goto L53e013;
case 0x53e018:c.instructions+=1;goto B53e018;
case 0x53e01a:goto L53e01a;
case 0x53e01f:c.instructions+=1;goto B53e01f;
case 0x53e021:goto L53e021;
case 0x53e026:c.instructions+=1;goto B53e026;
case 0x53e028:goto L53e028;
case 0x53e02d:c.instructions+=1;goto B53e02d;
case 0x53e02f:goto L53e02f;
case 0x53e031:goto L53e031;
case 0x53e036:goto L53e036;
case 0x53e038:c.instructions+=1;goto B53e038;
case 0x53e03a:goto L53e03a;
case 0x53e03f:c.instructions+=1;goto B53e03f;
case 0x53e044:goto L53e044;
case 0x53e046:c.instructions+=4;goto B53e046;
case 0x53e047:c.instructions+=3;goto B53e047;
case 0x53e04b:c.instructions+=2;goto B53e04b;
case 0x53e04c:c.instructions+=1;goto B53e04c;
case 0x53e051:goto L53e051;
case 0x53e055:c.instructions+=5;goto B53e055;
case 0x53e056:c.instructions+=4;goto B53e056;
case 0x53e05b:c.instructions+=3;goto B53e05b;
case 0x53e05e:c.instructions+=2;goto B53e05e;
case 0x53e05f:c.instructions+=1;goto B53e05f;
case 0x53e064:goto L53e064;
case 0x53e068:c.instructions+=5;goto B53e068;
case 0x53e06b:c.instructions+=4;goto B53e06b;
case 0x53e06e:c.instructions+=3;goto B53e06e;
case 0x53e071:c.instructions+=2;goto B53e071;
case 0x53e073:c.instructions+=1;goto B53e073;
case 0x53e076:goto L53e076;
case 0x53e07c:c.instructions+=2;goto B53e07c;
case 0x53e07e:c.instructions+=1;goto B53e07e;
case 0x53e080:goto L53e080;
case 0x53e082:c.instructions+=1;goto B53e082;
case 0x53e087:goto L53e087;
case 0x53e08d:c.instructions+=1;goto B53e08d;
case 0x53e092:goto L53e092;
case 0x53e093:c.instructions+=3;goto B53e093;
case 0x53e094:c.instructions+=2;goto B53e094;
case 0x53e097:c.instructions+=1;goto B53e097;
case 0x53e0b0:goto L53e0b0;
case 0x53e0b1:c.instructions+=8;goto B53e0b1;
case 0x53e0b3:c.instructions+=7;goto B53e0b3;
case 0x53e0b9:c.instructions+=6;goto B53e0b9;
case 0x53e0bc:c.instructions+=5;goto B53e0bc;
case 0x53e0bd:c.instructions+=4;goto B53e0bd;
case 0x53e0c0:c.instructions+=3;goto B53e0c0;
case 0x53e0c1:c.instructions+=2;goto B53e0c1;
case 0x53e0c3:c.instructions+=1;goto B53e0c3;
case 0x53e0c9:goto L53e0c9;
case 0x53e0ca:c.instructions+=1;goto B53e0ca;
case 0x53e0d1:goto L53e0d1;
case 0x53e0d4:c.instructions+=2;goto B53e0d4;
case 0x53e0d7:c.instructions+=1;goto B53e0d7;
case 0x53e0dd:goto L53e0dd;
case 0x53e0e0:c.instructions+=4;goto B53e0e0;
case 0x53e0e5:c.instructions+=3;goto B53e0e5;
case 0x53e0e6:c.instructions+=2;goto B53e0e6;
case 0x53e0e8:c.instructions+=1;goto B53e0e8;
case 0x53e0ea:goto L53e0ea;
case 0x53e0eb:c.instructions+=1;goto B53e0eb;
case 0x53e0ed:goto L53e0ed;
case 0x53e0ee:c.instructions+=1;goto B53e0ee;
case 0x53e0f0:goto L53e0f0;
case 0x53e0f7:c.instructions+=4;goto B53e0f7;
case 0x53e0fc:c.instructions+=3;goto B53e0fc;
case 0x53e101:c.instructions+=2;goto B53e101;
case 0x53e107:c.instructions+=1;goto B53e107;
case 0x53e10c:goto L53e10c;
case 0x53e111:goto L53e111;
case 0x53e113:goto L53e113;
case 0x53e118:c.instructions+=2;goto B53e118;
case 0x53e11f:c.instructions+=1;goto B53e11f;
case 0x53e121:goto L53e121;
case 0x53e123:c.instructions+=1;goto B53e123;
case 0x53e126:goto L53e126;
case 0x53e12b:c.instructions+=5;goto B53e12b;
case 0x53e12d:c.instructions+=4;goto B53e12d;
case 0x53e130:c.instructions+=3;goto B53e130;
case 0x53e137:c.instructions+=2;goto B53e137;
case 0x53e138:c.instructions+=1;goto B53e138;
case 0x53e13e:goto L53e13e;
case 0x53e144:c.instructions+=2;goto B53e144;
case 0x53e146:c.instructions+=1;goto B53e146;
case 0x53e14c:goto L53e14c;
case 0x53e14f:c.instructions+=2;goto B53e14f;
case 0x53e151:c.instructions+=1;goto B53e151;
case 0x53e157:goto L53e157;
case 0x53e158:c.instructions+=2;goto B53e158;
case 0x53e15b:c.instructions+=1;goto B53e15b;
case 0x53e161:goto L53e161;
case 0x53e162:c.instructions+=4;goto B53e162;
case 0x53e163:c.instructions+=3;goto B53e163;
case 0x53e165:c.instructions+=2;goto B53e165;
case 0x53e166:c.instructions+=1;goto B53e166;
case 0x53e169:goto L53e169;
case 0x53e16e:c.instructions+=7;goto B53e16e;
case 0x53e174:c.instructions+=6;goto B53e174;
case 0x53e17a:c.instructions+=5;goto B53e17a;
case 0x53e17f:c.instructions+=4;goto B53e17f;
case 0x53e181:c.instructions+=3;goto B53e181;
case 0x53e18b:c.instructions+=2;goto B53e18b;
case 0x53e195:c.instructions+=1;goto B53e195;
case 0x53e197:goto L53e197;
case 0x53e19d:c.instructions+=2;goto B53e19d;
case 0x53e19f:c.instructions+=1;goto B53e19f;
case 0x53e1a1:goto L53e1a1;
case 0x53e1a4:c.instructions+=2;goto B53e1a4;
case 0x53e1a6:c.instructions+=1;goto B53e1a6;
case 0x53e1a8:goto L53e1a8;
case 0x53e1a9:c.instructions+=2;goto B53e1a9;
case 0x53e1af:c.instructions+=1;goto B53e1af;
case 0x53e1b5:goto L53e1b5;
case 0x53e1ba:c.instructions+=2;goto B53e1ba;
case 0x53e1c1:c.instructions+=1;goto B53e1c1;
case 0x53e1c6:goto L53e1c6;
case 0x53e1cb:goto L53e1cb;
case 0x53e1cc:c.instructions+=4;goto B53e1cc;
case 0x53e1cd:c.instructions+=3;goto B53e1cd;
case 0x53e1cf:c.instructions+=2;goto B53e1cf;
case 0x53e1d0:c.instructions+=1;goto B53e1d0;
case 0x53e1d3:goto L53e1d3;
case 0x53e1d8:c.instructions+=7;goto B53e1d8;
case 0x53e1da:c.instructions+=6;goto B53e1da;
case 0x53e1df:c.instructions+=5;goto B53e1df;
case 0x53e1e6:c.instructions+=4;goto B53e1e6;
case 0x53e1ed:c.instructions+=3;goto B53e1ed;
case 0x53e1f0:c.instructions+=2;goto B53e1f0;
case 0x53e1f3:c.instructions+=1;goto B53e1f3;
case 0x53e1f9:goto L53e1f9;
case 0x53e1ff:c.instructions+=2;goto B53e1ff;
case 0x53e201:c.instructions+=1;goto B53e201;
case 0x53e207:goto L53e207;
case 0x53e20a:c.instructions+=2;goto B53e20a;
case 0x53e20c:c.instructions+=1;goto B53e20c;
case 0x53e212:goto L53e212;
case 0x53e213:c.instructions+=2;goto B53e213;
case 0x53e216:c.instructions+=1;goto B53e216;
case 0x53e21c:goto L53e21c;
case 0x53e21d:c.instructions+=4;goto B53e21d;
case 0x53e21e:c.instructions+=3;goto B53e21e;
case 0x53e220:c.instructions+=2;goto B53e220;
case 0x53e221:c.instructions+=1;goto B53e221;
case 0x53e224:goto L53e224;
case 0x53e229:c.instructions+=5;goto B53e229;
case 0x53e22b:c.instructions+=4;goto B53e22b;
case 0x53e235:c.instructions+=3;goto B53e235;
case 0x53e23f:c.instructions+=2;goto B53e23f;
case 0x53e249:c.instructions+=1;goto B53e249;
case 0x53e24b:goto L53e24b;
case 0x53e251:c.instructions+=2;goto B53e251;
case 0x53e253:c.instructions+=1;goto B53e253;
case 0x53e255:goto L53e255;
case 0x53e258:c.instructions+=2;goto B53e258;
case 0x53e25a:c.instructions+=1;goto B53e25a;
case 0x53e25c:goto L53e25c;
case 0x53e25d:c.instructions+=2;goto B53e25d;
case 0x53e263:c.instructions+=1;goto B53e263;
case 0x53e269:goto L53e269;
case 0x53e26e:c.instructions+=2;goto B53e26e;
case 0x53e273:c.instructions+=1;goto B53e273;
case 0x53e278:goto L53e278;
case 0x53e279:c.instructions+=4;goto B53e279;
case 0x53e27a:c.instructions+=3;goto B53e27a;
case 0x53e27c:c.instructions+=2;goto B53e27c;
case 0x53e27d:c.instructions+=1;goto B53e27d;
case 0x53e280:goto L53e280;
case 0x53e283:c.instructions+=2;goto B53e283;
case 0x53e285:c.instructions+=1;goto B53e285;
case 0x53e28b:goto L53e28b;
case 0x53e290:c.instructions+=6;goto B53e290;
case 0x53e292:c.instructions+=5;goto B53e292;
case 0x53e297:c.instructions+=4;goto B53e297;
case 0x53e2a1:c.instructions+=3;goto B53e2a1;
case 0x53e2a7:c.instructions+=2;goto B53e2a7;
case 0x53e2b1:c.instructions+=1;goto B53e2b1;
case 0x53e2b3:goto L53e2b3;
case 0x53e2b9:c.instructions+=2;goto B53e2b9;
case 0x53e2bb:c.instructions+=1;goto B53e2bb;
case 0x53e2bd:goto L53e2bd;
case 0x53e2c0:c.instructions+=2;goto B53e2c0;
case 0x53e2c2:c.instructions+=1;goto B53e2c2;
case 0x53e2c4:goto L53e2c4;
case 0x53e2c5:c.instructions+=2;goto B53e2c5;
case 0x53e2cb:c.instructions+=1;goto B53e2cb;
case 0x53e2d1:goto L53e2d1;
case 0x53e2d4:c.instructions+=5;goto B53e2d4;
case 0x53e2d5:c.instructions+=4;goto B53e2d5;
case 0x53e2d6:c.instructions+=3;goto B53e2d6;
case 0x53e2d8:c.instructions+=2;goto B53e2d8;
case 0x53e2d9:c.instructions+=1;goto B53e2d9;
case 0x53e2dc:goto L53e2dc;
case 0x53e2e1:c.instructions+=5;goto B53e2e1;
case 0x53e2e3:c.instructions+=4;goto B53e2e3;
case 0x53e2ea:c.instructions+=3;goto B53e2ea;
case 0x53e2f1:c.instructions+=2;goto B53e2f1;
case 0x53e2f8:c.instructions+=1;goto B53e2f8;
case 0x53e2fa:goto L53e2fa;
case 0x53e300:c.instructions+=2;goto B53e300;
case 0x53e302:c.instructions+=1;goto B53e302;
case 0x53e304:goto L53e304;
case 0x53e307:c.instructions+=2;goto B53e307;
case 0x53e309:c.instructions+=1;goto B53e309;
case 0x53e30b:goto L53e30b;
case 0x53e30c:c.instructions+=2;goto B53e30c;
case 0x53e30f:c.instructions+=1;goto B53e30f;
case 0x53e315:goto L53e315;
case 0x53e31a:c.instructions+=2;goto B53e31a;
case 0x53e31f:c.instructions+=1;goto B53e31f;
case 0x53e324:goto L53e324;
case 0x53e325:c.instructions+=4;goto B53e325;
case 0x53e326:c.instructions+=3;goto B53e326;
case 0x53e328:c.instructions+=2;goto B53e328;
case 0x53e329:c.instructions+=1;goto B53e329;
case 0x53e32c:goto L53e32c;
case 0x53e331:c.instructions+=5;goto B53e331;
case 0x53e333:c.instructions+=4;goto B53e333;
case 0x53e33a:c.instructions+=3;goto B53e33a;
case 0x53e341:c.instructions+=2;goto B53e341;
case 0x53e348:c.instructions+=1;goto B53e348;
case 0x53e34e:goto L53e34e;
case 0x53e354:c.instructions+=2;goto B53e354;
case 0x53e356:c.instructions+=1;goto B53e356;
case 0x53e35c:goto L53e35c;
case 0x53e35f:c.instructions+=2;goto B53e35f;
case 0x53e361:c.instructions+=1;goto B53e361;
case 0x53e367:goto L53e367;
case 0x53e368:c.instructions+=2;goto B53e368;
case 0x53e36b:c.instructions+=1;goto B53e36b;
case 0x53e371:goto L53e371;
case 0x53e372:c.instructions+=4;goto B53e372;
case 0x53e373:c.instructions+=3;goto B53e373;
case 0x53e375:c.instructions+=2;goto B53e375;
case 0x53e376:c.instructions+=1;goto B53e376;
case 0x53e379:goto L53e379;
case 0x53e37e:c.instructions+=5;goto B53e37e;
case 0x53e380:c.instructions+=4;goto B53e380;
case 0x53e38a:c.instructions+=3;goto B53e38a;
case 0x53e394:c.instructions+=2;goto B53e394;
case 0x53e39e:c.instructions+=1;goto B53e39e;
case 0x53e3a4:goto L53e3a4;
case 0x53e3aa:c.instructions+=2;goto B53e3aa;
case 0x53e3ac:c.instructions+=1;goto B53e3ac;
case 0x53e3b2:goto L53e3b2;
case 0x53e3b5:c.instructions+=2;goto B53e3b5;
case 0x53e3b7:c.instructions+=1;goto B53e3b7;
case 0x53e3bd:goto L53e3bd;
case 0x53e3be:c.instructions+=2;goto B53e3be;
case 0x53e3c4:c.instructions+=1;goto B53e3c4;
case 0x53e3ca:goto L53e3ca;
case 0x53e3cb:c.instructions+=4;goto B53e3cb;
case 0x53e3cc:c.instructions+=3;goto B53e3cc;
case 0x53e3ce:c.instructions+=2;goto B53e3ce;
case 0x53e3cf:c.instructions+=1;goto B53e3cf;
case 0x53e3d2:goto L53e3d2;
case 0x53e3d7:c.instructions+=5;goto B53e3d7;
case 0x53e3d9:c.instructions+=4;goto B53e3d9;
case 0x53e3e0:c.instructions+=3;goto B53e3e0;
case 0x53e3e7:c.instructions+=2;goto B53e3e7;
case 0x53e3ee:c.instructions+=1;goto B53e3ee;
case 0x53e3f4:goto L53e3f4;
case 0x53e3fa:c.instructions+=2;goto B53e3fa;
case 0x53e3fc:c.instructions+=1;goto B53e3fc;
case 0x53e402:goto L53e402;
case 0x53e405:c.instructions+=2;goto B53e405;
case 0x53e407:c.instructions+=1;goto B53e407;
case 0x53e40d:goto L53e40d;
case 0x53e40e:c.instructions+=2;goto B53e40e;
case 0x53e411:c.instructions+=1;goto B53e411;
case 0x53e417:goto L53e417;
case 0x53e418:c.instructions+=4;goto B53e418;
case 0x53e419:c.instructions+=3;goto B53e419;
case 0x53e41b:c.instructions+=2;goto B53e41b;
case 0x53e41c:c.instructions+=1;goto B53e41c;
case 0x53e41f:goto L53e41f;
case 0x53e424:c.instructions+=5;goto B53e424;
case 0x53e426:c.instructions+=4;goto B53e426;
case 0x53e42d:c.instructions+=3;goto B53e42d;
case 0x53e434:c.instructions+=2;goto B53e434;
case 0x53e43b:c.instructions+=1;goto B53e43b;
case 0x53e441:goto L53e441;
case 0x53e447:c.instructions+=2;goto B53e447;
case 0x53e449:c.instructions+=1;goto B53e449;
case 0x53e44f:goto L53e44f;
case 0x53e452:c.instructions+=2;goto B53e452;
case 0x53e454:c.instructions+=1;goto B53e454;
case 0x53e45a:goto L53e45a;
case 0x53e45b:c.instructions+=2;goto B53e45b;
case 0x53e45e:c.instructions+=1;goto B53e45e;
case 0x53e464:goto L53e464;
case 0x53e465:c.instructions+=4;goto B53e465;
case 0x53e466:c.instructions+=3;goto B53e466;
case 0x53e468:c.instructions+=2;goto B53e468;
case 0x53e469:c.instructions+=1;goto B53e469;
case 0x53e46c:goto L53e46c;
case 0x53e471:c.instructions+=5;goto B53e471;
case 0x53e473:c.instructions+=4;goto B53e473;
case 0x53e47a:c.instructions+=3;goto B53e47a;
case 0x53e481:c.instructions+=2;goto B53e481;
case 0x53e488:c.instructions+=1;goto B53e488;
case 0x53e48e:goto L53e48e;
case 0x53e494:c.instructions+=2;goto B53e494;
case 0x53e496:c.instructions+=1;goto B53e496;
case 0x53e49c:goto L53e49c;
case 0x53e49f:c.instructions+=2;goto B53e49f;
case 0x53e4a1:c.instructions+=1;goto B53e4a1;
case 0x53e4a7:goto L53e4a7;
case 0x53e4a8:c.instructions+=2;goto B53e4a8;
case 0x53e4ab:c.instructions+=1;goto B53e4ab;
case 0x53e4b1:goto L53e4b1;
case 0x53e4b2:c.instructions+=4;goto B53e4b2;
case 0x53e4b3:c.instructions+=3;goto B53e4b3;
case 0x53e4b5:c.instructions+=2;goto B53e4b5;
case 0x53e4b6:c.instructions+=1;goto B53e4b6;
case 0x53e4b9:goto L53e4b9;
case 0x53e4bf:c.instructions+=2;goto B53e4bf;
case 0x53e4c1:c.instructions+=1;goto B53e4c1;
case 0x53e4c3:goto L53e4c3;
case 0x53e4c5:c.instructions+=1;goto B53e4c5;
case 0x53e4c7:goto L53e4c7;
case 0x53e4cc:c.instructions+=12;goto B53e4cc;
case 0x53e4cf:c.instructions+=11;goto B53e4cf;
case 0x53e4d6:c.instructions+=10;goto B53e4d6;
case 0x53e4dd:c.instructions+=9;goto B53e4dd;
case 0x53e4e0:c.instructions+=8;goto B53e4e0;
case 0x53e4e3:c.instructions+=7;goto B53e4e3;
case 0x53e4e7:c.instructions+=6;goto B53e4e7;
case 0x53e4ec:c.instructions+=5;goto B53e4ec;
case 0x53e4ee:c.instructions+=4;goto B53e4ee;
case 0x53e4f5:c.instructions+=3;goto B53e4f5;
case 0x53e4f8:c.instructions+=2;goto B53e4f8;
case 0x53e4ff:c.instructions+=1;goto B53e4ff;
case 0x53e501:goto L53e501;
case 0x53e507:c.instructions+=2;goto B53e507;
case 0x53e509:c.instructions+=1;goto B53e509;
case 0x53e50b:goto L53e50b;
case 0x53e50e:c.instructions+=2;goto B53e50e;
case 0x53e510:c.instructions+=1;goto B53e510;
case 0x53e512:goto L53e512;
case 0x53e513:c.instructions+=2;goto B53e513;
case 0x53e516:c.instructions+=1;goto B53e516;
case 0x53e51c:goto L53e51c;
case 0x53e51d:c.instructions+=5;goto B53e51d;
case 0x53e524:c.instructions+=4;goto B53e524;
case 0x53e525:c.instructions+=3;goto B53e525;
case 0x53e527:c.instructions+=2;goto B53e527;
case 0x53e528:c.instructions+=1;goto B53e528;
case 0x53e52b:goto L53e52b;
case 0x53e52e:c.instructions+=2;goto B53e52e;
case 0x53e535:c.instructions+=1;goto B53e535;
case 0x53e53a:goto L53e53a;
case 0x53e53d:c.instructions+=4;goto B53e53d;
case 0x53e542:c.instructions+=3;goto B53e542;
case 0x53e544:c.instructions+=2;goto B53e544;
case 0x53e54b:c.instructions+=1;goto B53e54b;
case 0x53e54d:goto L53e54d;
case 0x53e553:c.instructions+=2;goto B53e553;
case 0x53e555:c.instructions+=1;goto B53e555;
case 0x53e557:goto L53e557;
case 0x53e55a:c.instructions+=2;goto B53e55a;
case 0x53e55c:c.instructions+=1;goto B53e55c;
case 0x53e55e:goto L53e55e;
case 0x53e55f:c.instructions+=2;goto B53e55f;
case 0x53e562:c.instructions+=1;goto B53e562;
case 0x53e568:goto L53e568;
case 0x53e569:c.instructions+=5;goto B53e569;
case 0x53e56d:c.instructions+=4;goto B53e56d;
case 0x53e56e:c.instructions+=3;goto B53e56e;
case 0x53e570:c.instructions+=2;goto B53e570;
case 0x53e571:c.instructions+=1;goto B53e571;
case 0x53e574:goto L53e574;
case 0x53e577:c.instructions+=2;goto B53e577;
case 0x53e57e:c.instructions+=1;goto B53e57e;
case 0x53e583:goto L53e583;
case 0x53e586:c.instructions+=4;goto B53e586;
case 0x53e58b:c.instructions+=3;goto B53e58b;
case 0x53e58d:c.instructions+=2;goto B53e58d;
case 0x53e594:c.instructions+=1;goto B53e594;
case 0x53e596:goto L53e596;
case 0x53e59c:c.instructions+=2;goto B53e59c;
case 0x53e59e:c.instructions+=1;goto B53e59e;
case 0x53e5a0:goto L53e5a0;
case 0x53e5a3:c.instructions+=2;goto B53e5a3;
case 0x53e5a5:c.instructions+=1;goto B53e5a5;
case 0x53e5a7:goto L53e5a7;
case 0x53e5a8:c.instructions+=2;goto B53e5a8;
case 0x53e5ab:c.instructions+=1;goto B53e5ab;
case 0x53e5b1:goto L53e5b1;
case 0x53e5b2:c.instructions+=4;goto B53e5b2;
case 0x53e5b3:c.instructions+=3;goto B53e5b3;
case 0x53e5b5:c.instructions+=2;goto B53e5b5;
case 0x53e5b6:c.instructions+=1;goto B53e5b6;
case 0x53e5b9:goto L53e5b9;
case 0x53e5bd:c.instructions+=7;goto B53e5bd;
case 0x53e5c4:c.instructions+=6;goto B53e5c4;
case 0x53e5c7:c.instructions+=5;goto B53e5c7;
case 0x53e5cc:c.instructions+=4;goto B53e5cc;
case 0x53e5ce:c.instructions+=3;goto B53e5ce;
case 0x53e5d8:c.instructions+=2;goto B53e5d8;
case 0x53e5df:c.instructions+=1;goto B53e5df;
case 0x53e5e1:goto L53e5e1;
case 0x53e5e7:c.instructions+=2;goto B53e5e7;
case 0x53e5e9:c.instructions+=1;goto B53e5e9;
case 0x53e5eb:goto L53e5eb;
case 0x53e5ee:c.instructions+=2;goto B53e5ee;
case 0x53e5f0:c.instructions+=1;goto B53e5f0;
case 0x53e5f2:goto L53e5f2;
case 0x53e5f3:c.instructions+=2;goto B53e5f3;
case 0x53e5f9:c.instructions+=1;goto B53e5f9;
case 0x53e5ff:goto L53e5ff;
case 0x53e600:goto L53e600;
case 0x53e601:c.instructions+=3;goto B53e601;
case 0x53e603:c.instructions+=2;goto B53e603;
case 0x53e604:c.instructions+=1;goto B53e604;
case 0x53e650:goto L53e650;
case 0x53e652:c.instructions+=11;goto B53e652;
case 0x53e657:c.instructions+=10;goto B53e657;
case 0x53e65d:c.instructions+=9;goto B53e65d;
case 0x53e65e:c.instructions+=8;goto B53e65e;
case 0x53e665:c.instructions+=7;goto B53e665;
case 0x53e666:c.instructions+=6;goto B53e666;
case 0x53e667:c.instructions+=5;goto B53e667;
case 0x53e668:c.instructions+=4;goto B53e668;
case 0x53e66a:c.instructions+=3;goto B53e66a;
case 0x53e66d:c.instructions+=2;goto B53e66d;
case 0x53e66f:c.instructions+=1;goto B53e66f;
case 0x53e671:goto L53e671;
case 0x53e677:c.instructions+=2;goto B53e677;
case 0x53e679:c.instructions+=1;goto B53e679;
case 0x53e67b:goto L53e67b;
case 0x53e67e:c.instructions+=2;goto B53e67e;
case 0x53e680:c.instructions+=1;goto B53e680;
case 0x53e682:goto L53e682;
case 0x53e687:c.instructions+=1;goto B53e687;
case 0x53e68c:goto L53e68c;
case 0x53e68f:c.instructions+=4;goto B53e68f;
case 0x53e693:c.instructions+=3;goto B53e693;
case 0x53e695:c.instructions+=2;goto B53e695;
case 0x53e69d:c.instructions+=1;goto B53e69d;
case 0x53e69f:goto L53e69f;
case 0x53e6a1:c.instructions+=1;goto B53e6a1;
case 0x53e6a6:goto L53e6a6;
case 0x53e6a8:goto L53e6a8;
case 0x53e6aa:goto L53e6aa;
case 0x53e6ac:c.instructions+=2;goto B53e6ac;
case 0x53e6ae:c.instructions+=1;goto B53e6ae;
case 0x53e6b0:goto L53e6b0;
case 0x53e6b3:c.instructions+=3;goto B53e6b3;
case 0x53e6b5:c.instructions+=2;goto B53e6b5;
case 0x53e6b8:c.instructions+=1;goto B53e6b8;
case 0x53e6ba:goto L53e6ba;
case 0x53e6bd:goto L53e6bd;
case 0x53e6c4:c.instructions+=4;goto B53e6c4;
case 0x53e6c7:c.instructions+=3;goto B53e6c7;
case 0x53e6c9:c.instructions+=2;goto B53e6c9;
case 0x53e6cc:c.instructions+=1;goto B53e6cc;
case 0x53e6ce:goto L53e6ce;
case 0x53e6d1:goto L53e6d1;
case 0x53e6d4:goto L53e6d4;
case 0x53e6da:c.instructions+=3;goto B53e6da;
case 0x53e6dc:c.instructions+=2;goto B53e6dc;
case 0x53e6e2:c.instructions+=1;goto B53e6e2;
case 0x53e6e4:goto L53e6e4;
case 0x53e6e5:c.instructions+=1;goto B53e6e5;
case 0x53e6ea:goto L53e6ea;
case 0x53e6f0:c.instructions+=9;goto B53e6f0;
case 0x53e6f4:c.instructions+=8;goto B53e6f4;
case 0x53e6f5:c.instructions+=7;goto B53e6f5;
case 0x53e6fb:c.instructions+=6;goto B53e6fb;
case 0x53e6fd:c.instructions+=5;goto B53e6fd;
case 0x53e6fe:c.instructions+=4;goto B53e6fe;
case 0x53e6ff:c.instructions+=3;goto B53e6ff;
case 0x53e706:c.instructions+=2;goto B53e706;
case 0x53e709:c.instructions+=1;goto B53e709;
case 0x53e710:goto L53e710;
case 0x53e712:c.instructions+=24;goto B53e712;
case 0x53e717:c.instructions+=23;goto B53e717;
case 0x53e71d:c.instructions+=22;goto B53e71d;
case 0x53e71e:c.instructions+=21;goto B53e71e;
case 0x53e725:c.instructions+=20;goto B53e725;
case 0x53e726:c.instructions+=19;goto B53e726;
case 0x53e727:c.instructions+=18;goto B53e727;
case 0x53e728:c.instructions+=17;goto B53e728;
case 0x53e729:c.instructions+=16;goto B53e729;
case 0x53e72b:c.instructions+=15;goto B53e72b;
case 0x53e730:c.instructions+=14;goto B53e730;
case 0x53e731:c.instructions+=13;goto B53e731;
case 0x53e735:c.instructions+=12;goto B53e735;
case 0x53e738:c.instructions+=11;goto B53e738;
case 0x53e73b:c.instructions+=10;goto B53e73b;
case 0x53e740:c.instructions+=9;goto B53e740;
case 0x53e745:c.instructions+=8;goto B53e745;
case 0x53e747:c.instructions+=7;goto B53e747;
case 0x53e749:c.instructions+=6;goto B53e749;
case 0x53e74c:c.instructions+=5;goto B53e74c;
case 0x53e74e:c.instructions+=4;goto B53e74e;
case 0x53e74f:c.instructions+=3;goto B53e74f;
case 0x53e753:c.instructions+=2;goto B53e753;
case 0x53e759:c.instructions+=1;goto B53e759;
case 0x53e75e:goto L53e75e;
case 0x53e768:c.instructions+=7;goto B53e768;
case 0x53e76e:c.instructions+=6;goto B53e76e;
case 0x53e774:c.instructions+=5;goto B53e774;
case 0x53e77a:c.instructions+=4;goto B53e77a;
case 0x53e780:c.instructions+=3;goto B53e780;
case 0x53e783:c.instructions+=2;goto B53e783;
case 0x53e788:c.instructions+=1;goto B53e788;
case 0x53e790:goto L53e790;
case 0x53e796:c.instructions+=3;goto B53e796;
case 0x53e799:c.instructions+=2;goto B53e799;
case 0x53e79b:c.instructions+=1;goto B53e79b;
case 0x53e79d:goto L53e79d;
case 0x53e79f:c.instructions+=1;goto B53e79f;
case 0x53e7a1:goto L53e7a1;
case 0x53e7a4:c.instructions+=3;goto B53e7a4;
case 0x53e7a6:c.instructions+=2;goto B53e7a6;
case 0x53e7a9:c.instructions+=1;goto B53e7a9;
case 0x53e7ab:goto L53e7ab;
case 0x53e7ae:c.instructions+=1;goto B53e7ae;
case 0x53e7b1:goto L53e7b1;
case 0x53e7b4:c.instructions+=3;goto B53e7b4;
case 0x53e7b6:c.instructions+=2;goto B53e7b6;
case 0x53e7b9:c.instructions+=1;goto B53e7b9;
case 0x53e7bb:goto L53e7bb;
case 0x53e7c1:c.instructions+=3;goto B53e7c1;
case 0x53e7c3:c.instructions+=2;goto B53e7c3;
case 0x53e7c6:c.instructions+=1;goto B53e7c6;
case 0x53e7c8:goto L53e7c8;
case 0x53e7cb:c.instructions+=1;goto B53e7cb;
case 0x53e7ce:goto L53e7ce;
case 0x53e7d1:c.instructions+=2;goto B53e7d1;
case 0x53e7d3:c.instructions+=1;goto B53e7d3;
case 0x53e7d9:goto L53e7d9;
case 0x53e7df:c.instructions+=1;goto B53e7df;
case 0x53e7e1:goto L53e7e1;
case 0x53e7e7:goto L53e7e7;
case 0x53e7ed:goto L53e7ed;
case 0x53e7f3:c.instructions+=3;goto B53e7f3;
case 0x53e7f6:c.instructions+=2;goto B53e7f6;
case 0x53e7f8:c.instructions+=1;goto B53e7f8;
case 0x53e7fa:goto L53e7fa;
case 0x53e7fc:c.instructions+=1;goto B53e7fc;
case 0x53e7fe:goto L53e7fe;
case 0x53e801:c.instructions+=3;goto B53e801;
case 0x53e803:c.instructions+=2;goto B53e803;
case 0x53e806:c.instructions+=1;goto B53e806;
case 0x53e808:goto L53e808;
case 0x53e80b:goto L53e80b;
case 0x53e80e:c.instructions+=2;goto B53e80e;
case 0x53e811:c.instructions+=1;goto B53e811;
case 0x53e813:goto L53e813;
case 0x53e819:c.instructions+=3;goto B53e819;
case 0x53e81b:c.instructions+=2;goto B53e81b;
case 0x53e81e:c.instructions+=1;goto B53e81e;
case 0x53e820:goto L53e820;
case 0x53e823:goto L53e823;
case 0x53e826:c.instructions+=1;goto B53e826;
case 0x53e82c:goto L53e82c;
case 0x53e832:c.instructions+=1;goto B53e832;
case 0x53e834:goto L53e834;
case 0x53e83a:goto L53e83a;
case 0x53e840:goto L53e840;
case 0x53e846:c.instructions+=3;goto B53e846;
case 0x53e849:c.instructions+=2;goto B53e849;
case 0x53e84b:c.instructions+=1;goto B53e84b;
case 0x53e84d:goto L53e84d;
case 0x53e84f:c.instructions+=1;goto B53e84f;
case 0x53e851:goto L53e851;
case 0x53e854:c.instructions+=3;goto B53e854;
case 0x53e856:c.instructions+=2;goto B53e856;
case 0x53e859:c.instructions+=1;goto B53e859;
case 0x53e85b:goto L53e85b;
case 0x53e85e:goto L53e85e;
case 0x53e861:c.instructions+=2;goto B53e861;
case 0x53e864:c.instructions+=1;goto B53e864;
case 0x53e866:goto L53e866;
case 0x53e86c:c.instructions+=3;goto B53e86c;
case 0x53e86e:c.instructions+=2;goto B53e86e;
case 0x53e871:c.instructions+=1;goto B53e871;
case 0x53e873:goto L53e873;
case 0x53e876:goto L53e876;
case 0x53e879:c.instructions+=1;goto B53e879;
case 0x53e87f:goto L53e87f;
case 0x53e885:c.instructions+=1;goto B53e885;
case 0x53e887:goto L53e887;
case 0x53e88d:goto L53e88d;
case 0x53e893:goto L53e893;
case 0x53e899:c.instructions+=3;goto B53e899;
case 0x53e89c:c.instructions+=2;goto B53e89c;
case 0x53e89e:c.instructions+=1;goto B53e89e;
case 0x53e8a0:goto L53e8a0;
case 0x53e8a2:c.instructions+=1;goto B53e8a2;
case 0x53e8a4:goto L53e8a4;
case 0x53e8a7:c.instructions+=3;goto B53e8a7;
case 0x53e8a9:c.instructions+=2;goto B53e8a9;
case 0x53e8ac:c.instructions+=1;goto B53e8ac;
case 0x53e8ae:goto L53e8ae;
case 0x53e8b1:goto L53e8b1;
case 0x53e8b4:c.instructions+=2;goto B53e8b4;
case 0x53e8b7:c.instructions+=1;goto B53e8b7;
case 0x53e8b9:goto L53e8b9;
case 0x53e8bf:c.instructions+=3;goto B53e8bf;
case 0x53e8c1:c.instructions+=2;goto B53e8c1;
case 0x53e8c4:c.instructions+=1;goto B53e8c4;
case 0x53e8c6:goto L53e8c6;
case 0x53e8c9:goto L53e8c9;
case 0x53e8cc:c.instructions+=1;goto B53e8cc;
case 0x53e8d2:goto L53e8d2;
case 0x53e8d8:c.instructions+=1;goto B53e8d8;
case 0x53e8da:goto L53e8da;
case 0x53e8e0:goto L53e8e0;
case 0x53e8e6:goto L53e8e6;
case 0x53e8e9:c.instructions+=2;goto B53e8e9;
case 0x53e8ea:c.instructions+=1;goto B53e8ea;
case 0x53e8f0:goto L53e8f0;
case 0x53e8f4:c.instructions+=8;goto B53e8f4;
case 0x53e8f5:c.instructions+=7;goto B53e8f5;
case 0x53e8f7:c.instructions+=6;goto B53e8f7;
case 0x53e8f8:c.instructions+=5;goto B53e8f8;
case 0x53e8f9:c.instructions+=4;goto B53e8f9;
case 0x53e8fa:c.instructions+=3;goto B53e8fa;
case 0x53e901:c.instructions+=2;goto B53e901;
case 0x53e904:c.instructions+=1;goto B53e904;
case 0x53e910:goto L53e910;
case 0x53e912:c.instructions+=24;goto B53e912;
case 0x53e917:c.instructions+=23;goto B53e917;
case 0x53e91d:c.instructions+=22;goto B53e91d;
case 0x53e91e:c.instructions+=21;goto B53e91e;
case 0x53e925:c.instructions+=20;goto B53e925;
case 0x53e926:c.instructions+=19;goto B53e926;
case 0x53e927:c.instructions+=18;goto B53e927;
case 0x53e928:c.instructions+=17;goto B53e928;
case 0x53e929:c.instructions+=16;goto B53e929;
case 0x53e92b:c.instructions+=15;goto B53e92b;
case 0x53e930:c.instructions+=14;goto B53e930;
case 0x53e931:c.instructions+=13;goto B53e931;
case 0x53e935:c.instructions+=12;goto B53e935;
case 0x53e938:c.instructions+=11;goto B53e938;
case 0x53e93b:c.instructions+=10;goto B53e93b;
case 0x53e940:c.instructions+=9;goto B53e940;
case 0x53e945:c.instructions+=8;goto B53e945;
case 0x53e947:c.instructions+=7;goto B53e947;
case 0x53e949:c.instructions+=6;goto B53e949;
case 0x53e94c:c.instructions+=5;goto B53e94c;
case 0x53e94e:c.instructions+=4;goto B53e94e;
case 0x53e94f:c.instructions+=3;goto B53e94f;
case 0x53e953:c.instructions+=2;goto B53e953;
case 0x53e959:c.instructions+=1;goto B53e959;
case 0x53e95e:goto L53e95e;
case 0x53e968:c.instructions+=7;goto B53e968;
case 0x53e96e:c.instructions+=6;goto B53e96e;
case 0x53e974:c.instructions+=5;goto B53e974;
case 0x53e97a:c.instructions+=4;goto B53e97a;
case 0x53e980:c.instructions+=3;goto B53e980;
case 0x53e983:c.instructions+=2;goto B53e983;
case 0x53e988:c.instructions+=1;goto B53e988;
case 0x53e990:goto L53e990;
case 0x53e996:c.instructions+=3;goto B53e996;
case 0x53e999:c.instructions+=2;goto B53e999;
case 0x53e99b:c.instructions+=1;goto B53e99b;
case 0x53e99d:goto L53e99d;
case 0x53e99f:c.instructions+=1;goto B53e99f;
case 0x53e9a1:goto L53e9a1;
case 0x53e9a4:c.instructions+=3;goto B53e9a4;
case 0x53e9a6:c.instructions+=2;goto B53e9a6;
case 0x53e9a9:c.instructions+=1;goto B53e9a9;
case 0x53e9ab:goto L53e9ab;
case 0x53e9ae:c.instructions+=1;goto B53e9ae;
case 0x53e9b1:goto L53e9b1;
case 0x53e9b4:c.instructions+=3;goto B53e9b4;
case 0x53e9b6:c.instructions+=2;goto B53e9b6;
case 0x53e9b9:c.instructions+=1;goto B53e9b9;
case 0x53e9bb:goto L53e9bb;
case 0x53e9c1:c.instructions+=3;goto B53e9c1;
case 0x53e9c3:c.instructions+=2;goto B53e9c3;
case 0x53e9c6:c.instructions+=1;goto B53e9c6;
case 0x53e9c8:goto L53e9c8;
case 0x53e9cb:c.instructions+=1;goto B53e9cb;
case 0x53e9ce:goto L53e9ce;
case 0x53e9d1:c.instructions+=2;goto B53e9d1;
case 0x53e9d3:c.instructions+=1;goto B53e9d3;
case 0x53e9d9:goto L53e9d9;
case 0x53e9df:c.instructions+=1;goto B53e9df;
case 0x53e9e1:goto L53e9e1;
case 0x53e9e7:goto L53e9e7;
case 0x53e9ed:goto L53e9ed;
case 0x53e9f3:c.instructions+=3;goto B53e9f3;
case 0x53e9f6:c.instructions+=2;goto B53e9f6;
case 0x53e9f8:c.instructions+=1;goto B53e9f8;
case 0x53e9fa:goto L53e9fa;
case 0x53e9fc:c.instructions+=1;goto B53e9fc;
case 0x53e9fe:goto L53e9fe;
case 0x53ea01:c.instructions+=3;goto B53ea01;
case 0x53ea03:c.instructions+=2;goto B53ea03;
case 0x53ea06:c.instructions+=1;goto B53ea06;
case 0x53ea08:goto L53ea08;
case 0x53ea0b:goto L53ea0b;
case 0x53ea0e:c.instructions+=2;goto B53ea0e;
case 0x53ea11:c.instructions+=1;goto B53ea11;
case 0x53ea13:goto L53ea13;
case 0x53ea19:c.instructions+=3;goto B53ea19;
case 0x53ea1b:c.instructions+=2;goto B53ea1b;
case 0x53ea1e:c.instructions+=1;goto B53ea1e;
case 0x53ea20:goto L53ea20;
case 0x53ea23:goto L53ea23;
case 0x53ea26:c.instructions+=1;goto B53ea26;
case 0x53ea2c:goto L53ea2c;
case 0x53ea32:c.instructions+=1;goto B53ea32;
case 0x53ea34:goto L53ea34;
case 0x53ea3a:goto L53ea3a;
case 0x53ea40:goto L53ea40;
case 0x53ea46:c.instructions+=3;goto B53ea46;
case 0x53ea49:c.instructions+=2;goto B53ea49;
case 0x53ea4b:c.instructions+=1;goto B53ea4b;
case 0x53ea4d:goto L53ea4d;
case 0x53ea4f:c.instructions+=1;goto B53ea4f;
case 0x53ea51:goto L53ea51;
case 0x53ea54:c.instructions+=3;goto B53ea54;
case 0x53ea56:c.instructions+=2;goto B53ea56;
case 0x53ea59:c.instructions+=1;goto B53ea59;
case 0x53ea5b:goto L53ea5b;
case 0x53ea5e:goto L53ea5e;
case 0x53ea61:c.instructions+=2;goto B53ea61;
case 0x53ea64:c.instructions+=1;goto B53ea64;
case 0x53ea66:goto L53ea66;
case 0x53ea6c:c.instructions+=3;goto B53ea6c;
case 0x53ea6e:c.instructions+=2;goto B53ea6e;
case 0x53ea71:c.instructions+=1;goto B53ea71;
case 0x53ea73:goto L53ea73;
case 0x53ea76:goto L53ea76;
case 0x53ea79:c.instructions+=1;goto B53ea79;
case 0x53ea7f:goto L53ea7f;
case 0x53ea85:c.instructions+=1;goto B53ea85;
case 0x53ea87:goto L53ea87;
case 0x53ea8d:goto L53ea8d;
case 0x53ea93:goto L53ea93;
case 0x53ea99:c.instructions+=3;goto B53ea99;
case 0x53ea9f:c.instructions+=2;goto B53ea9f;
case 0x53eaa1:c.instructions+=1;goto B53eaa1;
case 0x53eaa3:goto L53eaa3;
case 0x53eaa5:c.instructions+=1;goto B53eaa5;
case 0x53eaa7:goto L53eaa7;
case 0x53eaaa:c.instructions+=3;goto B53eaaa;
case 0x53eaac:c.instructions+=2;goto B53eaac;
case 0x53eab2:c.instructions+=1;goto B53eab2;
case 0x53eab4:goto L53eab4;
case 0x53eab7:goto L53eab7;
case 0x53eabd:c.instructions+=2;goto B53eabd;
case 0x53eac0:c.instructions+=1;goto B53eac0;
case 0x53eac2:goto L53eac2;
case 0x53eac8:c.instructions+=3;goto B53eac8;
case 0x53eaca:c.instructions+=2;goto B53eaca;
case 0x53ead0:c.instructions+=1;goto B53ead0;
case 0x53ead2:goto L53ead2;
case 0x53ead5:goto L53ead5;
case 0x53eadb:c.instructions+=1;goto B53eadb;
case 0x53eae1:goto L53eae1;
case 0x53eae7:c.instructions+=1;goto B53eae7;
case 0x53eae9:goto L53eae9;
case 0x53eaef:goto L53eaef;
case 0x53eaf5:goto L53eaf5;
case 0x53eafa:c.instructions+=2;goto B53eafa;
case 0x53eafb:c.instructions+=1;goto B53eafb;
case 0x53eb01:goto L53eb01;
case 0x53eb05:c.instructions+=8;goto B53eb05;
case 0x53eb06:c.instructions+=7;goto B53eb06;
case 0x53eb08:c.instructions+=6;goto B53eb08;
case 0x53eb09:c.instructions+=5;goto B53eb09;
case 0x53eb0a:c.instructions+=4;goto B53eb0a;
case 0x53eb0b:c.instructions+=3;goto B53eb0b;
case 0x53eb12:c.instructions+=2;goto B53eb12;
case 0x53eb15:c.instructions+=1;goto B53eb15;
case 0x53eb20:goto L53eb20;
case 0x53eb21:c.instructions+=2;goto B53eb21;
case 0x53eb23:c.instructions+=1;goto B53eb23;
case 0x53eb28:goto L53eb28;
case 0x53eb2d:c.instructions+=1;goto B53eb2d;
case 0x53eb2f:goto L53eb2f;
case 0x53eb30:c.instructions+=1;goto B53eb30;
case 0x53eb35:goto L53eb35;
case 0x53eb38:goto L53eb38;
case 0x53eb3a:c.instructions+=2;goto B53eb3a;
case 0x53eb3b:c.instructions+=1;goto B53eb3b;
case 0x53eb40:goto L53eb40;
case 0x53eb42:c.instructions+=13;goto B53eb42;
case 0x53eb47:c.instructions+=12;goto B53eb47;
case 0x53eb4d:c.instructions+=11;goto B53eb4d;
case 0x53eb4e:c.instructions+=10;goto B53eb4e;
case 0x53eb55:c.instructions+=9;goto B53eb55;
case 0x53eb56:c.instructions+=8;goto B53eb56;
case 0x53eb57:c.instructions+=7;goto B53eb57;
case 0x53eb59:c.instructions+=6;goto B53eb59;
case 0x53eb5d:c.instructions+=5;goto B53eb5d;
case 0x53eb63:c.instructions+=4;goto B53eb63;
case 0x53eb69:c.instructions+=3;goto B53eb69;
case 0x53eb6b:c.instructions+=2;goto B53eb6b;
case 0x53eb73:c.instructions+=1;goto B53eb73;
case 0x53eb75:goto L53eb75;
case 0x53eb7a:c.instructions+=2;goto B53eb7a;
case 0x53eb7b:c.instructions+=1;goto B53eb7b;
case 0x53eb80:goto L53eb80;
case 0x53eb86:c.instructions+=2;goto B53eb86;
case 0x53eb88:c.instructions+=1;goto B53eb88;
case 0x53eb8a:goto L53eb8a;
case 0x53eb8d:c.instructions+=3;goto B53eb8d;
case 0x53eb93:c.instructions+=2;goto B53eb93;
case 0x53eb99:c.instructions+=1;goto B53eb99;
case 0x53eb9b:goto L53eb9b;
case 0x53eb9e:c.instructions+=1;goto B53eb9e;
case 0x53eba4:goto L53eba4;
case 0x53eba7:c.instructions+=2;goto B53eba7;
case 0x53eba9:c.instructions+=1;goto B53eba9;
case 0x53ebab:goto L53ebab;
case 0x53ebae:c.instructions+=1;goto B53ebae;
case 0x53ebb1:goto L53ebb1;
case 0x53ebb4:c.instructions+=2;goto B53ebb4;
case 0x53ebb6:c.instructions+=1;goto B53ebb6;
case 0x53ebb8:goto L53ebb8;
case 0x53ebbb:c.instructions+=1;goto B53ebbb;
case 0x53ebbe:goto L53ebbe;
case 0x53ebc1:c.instructions+=2;goto B53ebc1;
case 0x53ebc4:c.instructions+=1;goto B53ebc4;
case 0x53ebca:goto L53ebca;
case 0x53ebd0:c.instructions+=2;goto B53ebd0;
case 0x53ebd2:c.instructions+=1;goto B53ebd2;
case 0x53ebd4:goto L53ebd4;
case 0x53ebd5:goto L53ebd5;
case 0x53ebdb:c.instructions+=2;goto B53ebdb;
case 0x53ebe1:c.instructions+=1;goto B53ebe1;
case 0x53ebe6:goto L53ebe6;
case 0x53ebeb:c.instructions+=6;goto B53ebeb;
case 0x53ebed:c.instructions+=5;goto B53ebed;
case 0x53ebef:c.instructions+=4;goto B53ebef;
case 0x53ebf2:c.instructions+=3;goto B53ebf2;
case 0x53ebf3:c.instructions+=2;goto B53ebf3;
case 0x53ebf8:c.instructions+=1;goto B53ebf8;
case 0x53ebfd:goto L53ebfd;
case 0x53ec01:c.instructions+=5;goto B53ec01;
case 0x53ec07:c.instructions+=4;goto B53ec07;
case 0x53ec08:c.instructions+=3;goto B53ec08;
case 0x53ec0f:c.instructions+=2;goto B53ec0f;
case 0x53ec12:c.instructions+=1;goto B53ec12;
case 0x53ec20:goto L53ec20;
case 0x53ec21:c.instructions+=2;goto B53ec21;
case 0x53ec23:c.instructions+=1;goto B53ec23;
case 0x53ec28:goto L53ec28;
case 0x53ec2d:c.instructions+=1;goto B53ec2d;
case 0x53ec2f:goto L53ec2f;
case 0x53ec30:c.instructions+=1;goto B53ec30;
case 0x53ec35:goto L53ec35;
case 0x53ec38:goto L53ec38;
case 0x53ec3a:c.instructions+=2;goto B53ec3a;
case 0x53ec3b:c.instructions+=1;goto B53ec3b;
case 0x53ec40:goto L53ec40;
case 0x53ec42:c.instructions+=13;goto B53ec42;
case 0x53ec47:c.instructions+=12;goto B53ec47;
case 0x53ec4d:c.instructions+=11;goto B53ec4d;
case 0x53ec4e:c.instructions+=10;goto B53ec4e;
case 0x53ec55:c.instructions+=9;goto B53ec55;
case 0x53ec56:c.instructions+=8;goto B53ec56;
case 0x53ec57:c.instructions+=7;goto B53ec57;
case 0x53ec59:c.instructions+=6;goto B53ec59;
case 0x53ec5d:c.instructions+=5;goto B53ec5d;
case 0x53ec63:c.instructions+=4;goto B53ec63;
case 0x53ec69:c.instructions+=3;goto B53ec69;
case 0x53ec6b:c.instructions+=2;goto B53ec6b;
case 0x53ec73:c.instructions+=1;goto B53ec73;
case 0x53ec75:goto L53ec75;
case 0x53ec7a:c.instructions+=2;goto B53ec7a;
case 0x53ec7b:c.instructions+=1;goto B53ec7b;
case 0x53ec80:goto L53ec80;
case 0x53ec86:c.instructions+=2;goto B53ec86;
case 0x53ec88:c.instructions+=1;goto B53ec88;
case 0x53ec8a:goto L53ec8a;
case 0x53ec8d:c.instructions+=3;goto B53ec8d;
case 0x53ec93:c.instructions+=2;goto B53ec93;
case 0x53ec99:c.instructions+=1;goto B53ec99;
case 0x53ec9b:goto L53ec9b;
case 0x53ec9e:c.instructions+=1;goto B53ec9e;
case 0x53eca4:goto L53eca4;
case 0x53eca7:c.instructions+=2;goto B53eca7;
case 0x53eca9:c.instructions+=1;goto B53eca9;
case 0x53ecab:goto L53ecab;
case 0x53ecae:c.instructions+=1;goto B53ecae;
case 0x53ecb1:goto L53ecb1;
case 0x53ecb4:c.instructions+=2;goto B53ecb4;
case 0x53ecb6:c.instructions+=1;goto B53ecb6;
case 0x53ecb8:goto L53ecb8;
case 0x53ecbb:c.instructions+=1;goto B53ecbb;
case 0x53ecbe:goto L53ecbe;
case 0x53ecc1:c.instructions+=2;goto B53ecc1;
case 0x53ecc4:c.instructions+=1;goto B53ecc4;
case 0x53ecca:goto L53ecca;
case 0x53ecd0:c.instructions+=2;goto B53ecd0;
case 0x53ecd2:c.instructions+=1;goto B53ecd2;
case 0x53ecd4:goto L53ecd4;
case 0x53ecd5:goto L53ecd5;
case 0x53ecdb:c.instructions+=2;goto B53ecdb;
case 0x53ece1:c.instructions+=1;goto B53ece1;
case 0x53ece6:goto L53ece6;
case 0x53eceb:c.instructions+=6;goto B53eceb;
case 0x53eced:c.instructions+=5;goto B53eced;
case 0x53ecef:c.instructions+=4;goto B53ecef;
case 0x53ecf2:c.instructions+=3;goto B53ecf2;
case 0x53ecf3:c.instructions+=2;goto B53ecf3;
case 0x53ecf8:c.instructions+=1;goto B53ecf8;
case 0x53ecfd:goto L53ecfd;
case 0x53ed01:c.instructions+=5;goto B53ed01;
case 0x53ed07:c.instructions+=4;goto B53ed07;
case 0x53ed08:c.instructions+=3;goto B53ed08;
case 0x53ed0f:c.instructions+=2;goto B53ed0f;
case 0x53ed12:c.instructions+=1;goto B53ed12;
case 0x53ed20:goto L53ed20;
case 0x53ed22:c.instructions+=16;goto B53ed22;
case 0x53ed27:c.instructions+=15;goto B53ed27;
case 0x53ed2d:c.instructions+=14;goto B53ed2d;
case 0x53ed2e:c.instructions+=13;goto B53ed2e;
case 0x53ed35:c.instructions+=12;goto B53ed35;
case 0x53ed36:c.instructions+=11;goto B53ed36;
case 0x53ed37:c.instructions+=10;goto B53ed37;
case 0x53ed38:c.instructions+=9;goto B53ed38;
case 0x53ed3d:c.instructions+=8;goto B53ed3d;
case 0x53ed42:c.instructions+=7;goto B53ed42;
case 0x53ed44:c.instructions+=6;goto B53ed44;
case 0x53ed46:c.instructions+=5;goto B53ed46;
case 0x53ed4b:c.instructions+=4;goto B53ed4b;
case 0x53ed4e:c.instructions+=3;goto B53ed4e;
case 0x53ed4f:c.instructions+=2;goto B53ed4f;
case 0x53ed53:c.instructions+=1;goto B53ed53;
case 0x53ed58:goto L53ed58;
case 0x53ed5e:c.instructions+=8;goto B53ed5e;
case 0x53ed60:c.instructions+=7;goto B53ed60;
case 0x53ed64:c.instructions+=6;goto B53ed64;
case 0x53ed68:c.instructions+=5;goto B53ed68;
case 0x53ed6b:c.instructions+=4;goto B53ed6b;
case 0x53ed71:c.instructions+=3;goto B53ed71;
case 0x53ed74:c.instructions+=2;goto B53ed74;
case 0x53ed77:c.instructions+=1;goto B53ed77;
case 0x53ed7c:goto L53ed7c;
case 0x53ed82:c.instructions+=7;goto B53ed82;
case 0x53ed8c:c.instructions+=6;goto B53ed8c;
case 0x53ed96:c.instructions+=5;goto B53ed96;
case 0x53ed9c:c.instructions+=4;goto B53ed9c;
case 0x53eda6:c.instructions+=3;goto B53eda6;
case 0x53edac:c.instructions+=2;goto B53edac;
case 0x53edb2:c.instructions+=1;goto B53edb2;
case 0x53edb7:goto L53edb7;
case 0x53edbc:c.instructions+=14;goto B53edbc;
case 0x53edc2:c.instructions+=13;goto B53edc2;
case 0x53edc8:c.instructions+=12;goto B53edc8;
case 0x53edce:c.instructions+=11;goto B53edce;
case 0x53edd4:c.instructions+=10;goto B53edd4;
case 0x53edda:c.instructions+=9;goto B53edda;
case 0x53ede0:c.instructions+=8;goto B53ede0;
case 0x53ede6:c.instructions+=7;goto B53ede6;
case 0x53edec:c.instructions+=6;goto B53edec;
case 0x53edf2:c.instructions+=5;goto B53edf2;
case 0x53edf8:c.instructions+=4;goto B53edf8;
case 0x53edfe:c.instructions+=3;goto B53edfe;
case 0x53ee08:c.instructions+=2;goto B53ee08;
case 0x53ee0e:c.instructions+=1;goto B53ee0e;
case 0x53ee13:goto L53ee13;
case 0x53ee17:c.instructions+=7;goto B53ee17;
case 0x53ee1d:c.instructions+=6;goto B53ee1d;
case 0x53ee1f:c.instructions+=5;goto B53ee1f;
case 0x53ee20:c.instructions+=4;goto B53ee20;
case 0x53ee21:c.instructions+=3;goto B53ee21;
case 0x53ee28:c.instructions+=2;goto B53ee28;
case 0x53ee2b:c.instructions+=1;goto B53ee2b;
case 0x53ee30:goto L53ee30;
case 0x53ee31:c.instructions+=2;goto B53ee31;
case 0x53ee33:c.instructions+=1;goto B53ee33;
case 0x53ee38:goto L53ee38;
case 0x53ee3d:c.instructions+=1;goto B53ee3d;
case 0x53ee3f:goto L53ee3f;
case 0x53ee41:c.instructions+=3;goto B53ee41;
case 0x53ee43:c.instructions+=2;goto B53ee43;
case 0x53ee45:c.instructions+=1;goto B53ee45;
case 0x53ee47:goto L53ee47;
case 0x53ee48:c.instructions+=2;goto B53ee48;
case 0x53ee4d:c.instructions+=1;goto B53ee4d;
case 0x53ee52:goto L53ee52;
case 0x53ee54:c.instructions+=2;goto B53ee54;
case 0x53ee55:c.instructions+=1;goto B53ee55;
case 0x53ee60:goto L53ee60;
case 0x53ee61:c.instructions+=2;goto B53ee61;
case 0x53ee63:c.instructions+=1;goto B53ee63;
case 0x53ee68:goto L53ee68;
case 0x53ee6d:c.instructions+=1;goto B53ee6d;
case 0x53ee6f:goto L53ee6f;
case 0x53ee71:c.instructions+=3;goto B53ee71;
case 0x53ee73:c.instructions+=2;goto B53ee73;
case 0x53ee75:c.instructions+=1;goto B53ee75;
case 0x53ee77:goto L53ee77;
case 0x53ee78:c.instructions+=2;goto B53ee78;
case 0x53ee7d:c.instructions+=1;goto B53ee7d;
case 0x53ee82:goto L53ee82;
case 0x53ee84:c.instructions+=2;goto B53ee84;
case 0x53ee85:c.instructions+=1;goto B53ee85;
case 0x53ee90:goto L53ee90;
case 0x53ee91:c.instructions+=10;goto B53ee91;
case 0x53ee93:c.instructions+=9;goto B53ee93;
case 0x53ee96:c.instructions+=8;goto B53ee96;
case 0x53ee98:c.instructions+=7;goto B53ee98;
case 0x53ee9d:c.instructions+=6;goto B53ee9d;
case 0x53eea3:c.instructions+=5;goto B53eea3;
case 0x53eea4:c.instructions+=4;goto B53eea4;
case 0x53eeab:c.instructions+=3;goto B53eeab;
case 0x53eeac:c.instructions+=2;goto B53eeac;
case 0x53eeb1:c.instructions+=1;goto B53eeb1;
case 0x53eeb6:goto L53eeb6;
case 0x53eebb:c.instructions+=5;goto B53eebb;
case 0x53eebd:c.instructions+=4;goto B53eebd;
case 0x53eebe:c.instructions+=3;goto B53eebe;
case 0x53eebf:c.instructions+=2;goto B53eebf;
case 0x53eec0:c.instructions+=1;goto B53eec0;
case 0x53eec6:goto L53eec6;
case 0x53eec9:c.instructions+=2;goto B53eec9;
case 0x53eecb:c.instructions+=1;goto B53eecb;
case 0x53eed1:goto L53eed1;
case 0x53eed5:c.instructions+=3;goto B53eed5;
case 0x53eed7:c.instructions+=2;goto B53eed7;
case 0x53eed8:c.instructions+=1;goto B53eed8;
case 0x53eedd:goto L53eedd;
case 0x53eee0:c.instructions+=4;goto B53eee0;
case 0x53eee2:c.instructions+=3;goto B53eee2;
case 0x53eee7:c.instructions+=2;goto B53eee7;
case 0x53eee9:c.instructions+=1;goto B53eee9;
case 0x53eeee:goto L53eeee;
case 0x53eef1:c.instructions+=3;goto B53eef1;
case 0x53eef5:c.instructions+=2;goto B53eef5;
case 0x53eef9:c.instructions+=1;goto B53eef9;
case 0x53eefe:goto L53eefe;
case 0x53ef00:c.instructions+=2;goto B53ef00;
case 0x53ef0b:c.instructions+=1;goto B53ef0b;
case 0x53ef11:goto L53ef11;
case 0x53ef14:c.instructions+=3;goto B53ef14;
case 0x53ef19:c.instructions+=2;goto B53ef19;
case 0x53ef1d:c.instructions+=1;goto B53ef1d;
case 0x53ef21:goto L53ef21;
case 0x53ef25:c.instructions+=10;goto B53ef25;
case 0x53ef2a:c.instructions+=9;goto B53ef2a;
case 0x53ef2c:c.instructions+=8;goto B53ef2c;
case 0x53ef2d:c.instructions+=7;goto B53ef2d;
case 0x53ef2f:c.instructions+=6;goto B53ef2f;
case 0x53ef32:c.instructions+=5;goto B53ef32;
case 0x53ef33:c.instructions+=4;goto B53ef33;
case 0x53ef37:c.instructions+=3;goto B53ef37;
case 0x53ef38:c.instructions+=2;goto B53ef38;
case 0x53ef39:c.instructions+=1;goto B53ef39;
case 0x53ef3e:goto L53ef3e;
case 0x53ef41:c.instructions+=2;goto B53ef41;
case 0x53ef43:c.instructions+=1;goto B53ef43;
case 0x53ef45:goto L53ef45;
case 0x53ef49:c.instructions+=3;goto B53ef49;
case 0x53ef4d:c.instructions+=2;goto B53ef4d;
case 0x53ef4f:c.instructions+=1;goto B53ef4f;
case 0x53ef51:goto L53ef51;
case 0x53ef53:goto L53ef53;
case 0x53ef59:c.instructions+=3;goto B53ef59;
case 0x53ef5a:c.instructions+=2;goto B53ef5a;
case 0x53ef5b:c.instructions+=1;goto B53ef5b;
case 0x53ef60:goto L53ef60;
case 0x53ef62:c.instructions+=10;goto B53ef62;
case 0x53ef65:c.instructions+=9;goto B53ef65;
case 0x53ef67:c.instructions+=8;goto B53ef67;
case 0x53ef68:c.instructions+=7;goto B53ef68;
case 0x53ef69:c.instructions+=6;goto B53ef69;
case 0x53ef6d:c.instructions+=5;goto B53ef6d;
case 0x53ef6e:c.instructions+=4;goto B53ef6e;
case 0x53ef70:c.instructions+=3;goto B53ef70;
case 0x53ef71:c.instructions+=2;goto B53ef71;
case 0x53ef78:c.instructions+=1;goto B53ef78;
case 0x53ef7d:goto L53ef7d;
case 0x53ef84:c.instructions+=4;goto B53ef84;
case 0x53ef85:c.instructions+=3;goto B53ef85;
case 0x53ef8a:c.instructions+=2;goto B53ef8a;
case 0x53ef92:c.instructions+=1;goto B53ef92;
case 0x53ef97:goto L53ef97;
case 0x53ef9e:c.instructions+=2;goto B53ef9e;
case 0x53efa6:c.instructions+=1;goto B53efa6;
case 0x53efab:goto L53efab;
case 0x53efaf:c.instructions+=5;goto B53efaf;
case 0x53efb0:c.instructions+=4;goto B53efb0;
case 0x53efb3:c.instructions+=3;goto B53efb3;
case 0x53efb4:c.instructions+=2;goto B53efb4;
case 0x53efb8:c.instructions+=1;goto B53efb8;
case 0x53efbe:goto L53efbe;
case 0x53efc0:c.instructions+=1;goto B53efc0;
case 0x53efc5:goto L53efc5;
case 0x53efc8:c.instructions+=3;goto B53efc8;
case 0x53efcf:c.instructions+=2;goto B53efcf;
case 0x53efda:c.instructions+=1;goto B53efda;
case 0x53efdf:goto L53efdf;
case 0x53efe6:c.instructions+=7;goto B53efe6;
case 0x53efe7:c.instructions+=6;goto B53efe7;
case 0x53efe8:c.instructions+=5;goto B53efe8;
case 0x53efef:c.instructions+=4;goto B53efef;
case 0x53eff0:c.instructions+=3;goto B53eff0;
case 0x53eff2:c.instructions+=2;goto B53eff2;
case 0x53eff3:c.instructions+=1;goto B53eff3;
default:missing_instruction(c.pc);}
B53e003:L53e003:{c.instructions+=3;NFSU2_TR(0x53e003);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B53e007:{NFSU2_TR(0x53e007);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B53e00a:{NFSU2_TR(0x53e00a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53e02f;}}
}
B53e00c:L53e00c:{c.instructions+=1;NFSU2_TR(0x53e00c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x53e09cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53e013:L53e013:{c.instructions+=2;NFSU2_TR(0x53e013);
w4(R+8,u32(0x9cce9f86ull));
}
B53e018:{NFSU2_TR(0x53e018);
{goto L53e031;}
}
B53e01a:L53e01a:{c.instructions+=2;NFSU2_TR(0x53e01a);
w4(R+8,u32(0x5278c50bull));
}
B53e01f:{NFSU2_TR(0x53e01f);
{goto L53e031;}
}
B53e021:L53e021:{c.instructions+=2;NFSU2_TR(0x53e021);
w4(R+8,u32(0x5c1b351cull));
}
B53e026:{NFSU2_TR(0x53e026);
{goto L53e031;}
}
B53e028:L53e028:{c.instructions+=2;NFSU2_TR(0x53e028);
w4(R+8,u32(0x9cce64c4ull));
}
B53e02d:{NFSU2_TR(0x53e02d);
{goto L53e031;}
}
B53e02f:L53e02f:{c.instructions+=1;NFSU2_TR(0x53e02f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B53e031:L53e031:{c.instructions+=1;NFSU2_TR(0x53e031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e036ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53e036:L53e036:{c.instructions+=2;NFSU2_TR(0x53e036);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e038:{NFSU2_TR(0x53e038);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53e044;}}
}
B53e03a:L53e03a:{c.instructions+=2;NFSU2_TR(0x53e03a);
w4(R+8,u32(0xc01a6f63ull));
}
B53e03f:{NFSU2_TR(0x53e03f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e044ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53e044:L53e044:{c.instructions+=5;NFSU2_TR(0x53e044);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e046:{NFSU2_TR(0x53e046);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e047:{NFSU2_TR(0x53e047);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53e04b:{NFSU2_TR(0x53e04b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e04c:{NFSU2_TR(0x53e04c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e051ull));
TAIL_STATIC(0x43dc00u,43d);
}
B53e051:L53e051:{c.instructions+=6;NFSU2_TR(0x53e051);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53e055:{NFSU2_TR(0x53e055);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e056:{NFSU2_TR(0x53e056);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e05b:{NFSU2_TR(0x53e05b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B53e05e:{NFSU2_TR(0x53e05e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e05f:{NFSU2_TR(0x53e05f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e064ull));
TAIL_STATIC(0x50c960u,50c);
}
B53e064:L53e064:{c.instructions+=6;NFSU2_TR(0x53e064);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53e068:{NFSU2_TR(0x53e068);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53e06b:{NFSU2_TR(0x53e06b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4cull))));
}
B53e06e:{NFSU2_TR(0x53e06e);
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
B53e071:{NFSU2_TR(0x53e071);
__builtin_memmove((R+4),(R+24),4);
}
B53e073:{NFSU2_TR(0x53e073);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e076ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53e076:L53e076:{c.instructions+=3;NFSU2_TR(0x53e076);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53e07c:{NFSU2_TR(0x53e07c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53e07e:{NFSU2_TR(0x53e07e);
if(r1(R+518)){{goto L53e087;}}
}
B53e080:L53e080:{c.instructions+=2;NFSU2_TR(0x53e080);
__builtin_memmove((R+4),(R+24),4);
}
B53e082:{NFSU2_TR(0x53e082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e087ull));
TAIL_STATIC(0x538490u,538);
}
B53e087:L53e087:{c.instructions+=2;NFSU2_TR(0x53e087);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B53e08d:{NFSU2_TR(0x53e08d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e092ull));
TAIL_STATIC(0x479220u,479);
}
B53e092:L53e092:{c.instructions+=4;NFSU2_TR(0x53e092);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53e093:{NFSU2_TR(0x53e093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e094:{NFSU2_TR(0x53e094);
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
B53e097:{NFSU2_TR(0x53e097);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e0b0:L53e0b0:{c.instructions+=9;NFSU2_TR(0x53e0b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e0b1:{NFSU2_TR(0x53e0b1);
__builtin_memmove((R+20),(R+16),4);
}
B53e0b3:{NFSU2_TR(0x53e0b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb8ull))));
}
B53e0b9:{NFSU2_TR(0x53e0b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e0bc:{NFSU2_TR(0x53e0bc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B53e0bd:{NFSU2_TR(0x53e0bd);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53e0c0:{NFSU2_TR(0x53e0c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e0c1:{NFSU2_TR(0x53e0c1);
__builtin_memmove((R+28),(R+4),4);
}
B53e0c3:{NFSU2_TR(0x53e0c3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53e600;}}
}
B53e0c9:L53e0c9:{c.instructions+=2;NFSU2_TR(0x53e0c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e0ca:{NFSU2_TR(0x53e0ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x53e608ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53e0d1:L53e0d1:{c.instructions+=3;NFSU2_TR(0x53e0d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e0d4:{NFSU2_TR(0x53e0d4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B53e0d7:{NFSU2_TR(0x53e0d7);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e0dd:L53e0dd:{c.instructions+=5;NFSU2_TR(0x53e0dd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B53e0e0:{NFSU2_TR(0x53e0e0);
w4(R+12,u32(0x1ull));
}
B53e0e5:{NFSU2_TR(0x53e0e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e0e6:{NFSU2_TR(0x53e0e6);
__builtin_memmove((R+24),(R+12),4);
}
B53e0e8:{NFSU2_TR(0x53e0e8);
if(r1(R+518)){{goto L53e121;}}
}
B53e0ea:L53e0ea:{c.instructions+=2;NFSU2_TR(0x53e0ea);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B53e0eb:{NFSU2_TR(0x53e0eb);
if(r1(R+518)){{goto L53e113;}}
}
B53e0ed:L53e0ed:{c.instructions+=2;NFSU2_TR(0x53e0ed);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B53e0ee:{NFSU2_TR(0x53e0ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53e126;}}
}
B53e0f0:L53e0f0:{c.instructions+=5;NFSU2_TR(0x53e0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e0f7:{NFSU2_TR(0x53e0f7);
w4(R+4,u32(0x85ad40ull));
}
B53e0fc:{NFSU2_TR(0x53e0fc);
w4(R+24,u32(0x8ull));
}
B53e101:{NFSU2_TR(0x53e101);
__builtin_memmove(gp(0x86347e),(R+12),1);
}
B53e107:{NFSU2_TR(0x53e107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e10cull));
TAIL_STATIC(0x533310u,533);
}
B53e10c:L53e10c:{c.instructions+=1;NFSU2_TR(0x53e10c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e111ull));
TAIL_STATIC(0x4f92a0u,4f9);
}
B53e111:L53e111:{c.instructions+=1;NFSU2_TR(0x53e111);
{goto L53e126;}
}
B53e113:L53e113:{c.instructions+=3;NFSU2_TR(0x53e113);
w4(R+24,u32(0x4ull));
}
B53e118:{NFSU2_TR(0x53e118);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e11f:{NFSU2_TR(0x53e11f);
{goto L53e126;}
}
B53e121:L53e121:{c.instructions+=2;NFSU2_TR(0x53e121);
__builtin_memmove((R+24),(R+12),4);
}
B53e123:{NFSU2_TR(0x53e123);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e126:L53e126:{c.instructions+=6;NFSU2_TR(0x53e126);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e12b:{NFSU2_TR(0x53e12b);
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
B53e12d:{NFSU2_TR(0x53e12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e130:{NFSU2_TR(0x53e130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x79acfcull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e137:{NFSU2_TR(0x53e137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53e138:{NFSU2_TR(0x53e138);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e13e:L53e13e:{c.instructions+=3;NFSU2_TR(0x53e13e);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e144:{NFSU2_TR(0x53e144);
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
B53e146:{NFSU2_TR(0x53e146);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e14c:L53e14c:{c.instructions+=3;NFSU2_TR(0x53e14c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e14f:{NFSU2_TR(0x53e14f);
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
B53e151:{NFSU2_TR(0x53e151);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e157:L53e157:{c.instructions+=3;NFSU2_TR(0x53e157);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e158:{NFSU2_TR(0x53e158);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e15b:{NFSU2_TR(0x53e15b);
u8 U[4];
__builtin_memmove((U+0),gp(0x79acfc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e161ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e161:L53e161:{c.instructions+=5;NFSU2_TR(0x53e161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e162:{NFSU2_TR(0x53e162);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e163:{NFSU2_TR(0x53e163);
__builtin_memmove((R+16),(R+20),4);
}
B53e165:{NFSU2_TR(0x53e165);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e166:{NFSU2_TR(0x53e166);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e169:L53e169:{c.instructions+=8;NFSU2_TR(0x53e169);
w4(R+0,u32(0x8ull));
}
B53e16e:{NFSU2_TR(0x53e16e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e174:{NFSU2_TR(0x53e174);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e17a:{NFSU2_TR(0x53e17a);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e17f:{NFSU2_TR(0x53e17f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e181:{NFSU2_TR(0x53e181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
w4(U+4,u32(0x79ad08ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e18b:{NFSU2_TR(0x53e18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
w4(U+4,u32(0x400000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e195:{NFSU2_TR(0x53e195);
if(r1(R+518)){{goto L53e1b5;}}
}
B53e197:L53e197:{c.instructions+=3;NFSU2_TR(0x53e197);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e19d:{NFSU2_TR(0x53e19d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e19f:{NFSU2_TR(0x53e19f);
if(r1(R+518)){{goto L53e1b5;}}
}
B53e1a1:L53e1a1:{c.instructions+=3;NFSU2_TR(0x53e1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e1a4:{NFSU2_TR(0x53e1a4);
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
B53e1a6:{NFSU2_TR(0x53e1a6);
if(r1(R+518)){{goto L53e1b5;}}
}
B53e1a8:L53e1a8:{c.instructions+=3;NFSU2_TR(0x53e1a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e1a9:{NFSU2_TR(0x53e1a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e1af:{NFSU2_TR(0x53e1af);
u8 U[4];
__builtin_memmove((U+0),gp(0x79ad08),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e1b5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e1b5:L53e1b5:{c.instructions+=3;NFSU2_TR(0x53e1b5);
w4(R+4,u32(0x85ad40ull));
}
B53e1ba:{NFSU2_TR(0x53e1ba);
s1(0x86347f,u8(0x1ull));
}
B53e1c1:{NFSU2_TR(0x53e1c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e1c6ull));
TAIL_STATIC(0x533310u,533);
}
B53e1c6:L53e1c6:{c.instructions+=1;NFSU2_TR(0x53e1c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e1cbull));
TAIL_STATIC(0x4f92a0u,4f9);
}
B53e1cb:L53e1cb:{c.instructions+=5;NFSU2_TR(0x53e1cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e1cc:{NFSU2_TR(0x53e1cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e1cd:{NFSU2_TR(0x53e1cd);
__builtin_memmove((R+16),(R+20),4);
}
B53e1cf:{NFSU2_TR(0x53e1cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e1d0:{NFSU2_TR(0x53e1d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e1d3:L53e1d3:{c.instructions+=8;NFSU2_TR(0x53e1d3);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e1d8:{NFSU2_TR(0x53e1d8);
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
B53e1da:{NFSU2_TR(0x53e1da);
w4(R+12,u32(0x1ull));
}
B53e1df:{NFSU2_TR(0x53e1df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x79ad08ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e1e6:{NFSU2_TR(0x53e1e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x8000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e1ed:{NFSU2_TR(0x53e1ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e1f0:{NFSU2_TR(0x53e1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e1f3:{NFSU2_TR(0x53e1f3);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e1f9:L53e1f9:{c.instructions+=3;NFSU2_TR(0x53e1f9);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e1ff:{NFSU2_TR(0x53e1ff);
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
B53e201:{NFSU2_TR(0x53e201);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e207:L53e207:{c.instructions+=3;NFSU2_TR(0x53e207);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e20a:{NFSU2_TR(0x53e20a);
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
B53e20c:{NFSU2_TR(0x53e20c);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e212:L53e212:{c.instructions+=3;NFSU2_TR(0x53e212);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e213:{NFSU2_TR(0x53e213);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e216:{NFSU2_TR(0x53e216);
u8 U[4];
__builtin_memmove((U+0),gp(0x79ad08),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e21cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e21c:L53e21c:{c.instructions+=5;NFSU2_TR(0x53e21c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e21d:{NFSU2_TR(0x53e21d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e21e:{NFSU2_TR(0x53e21e);
__builtin_memmove((R+16),(R+20),4);
}
B53e220:{NFSU2_TR(0x53e220);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e221:{NFSU2_TR(0x53e221);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e224:L53e224:{c.instructions+=6;NFSU2_TR(0x53e224);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e229:{NFSU2_TR(0x53e229);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e22b:{NFSU2_TR(0x53e22b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e235:{NFSU2_TR(0x53e235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e23f:{NFSU2_TR(0x53e23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e249:{NFSU2_TR(0x53e249);
if(r1(R+518)){{goto L53e269;}}
}
B53e24b:L53e24b:{c.instructions+=3;NFSU2_TR(0x53e24b);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e251:{NFSU2_TR(0x53e251);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e253:{NFSU2_TR(0x53e253);
if(r1(R+518)){{goto L53e269;}}
}
B53e255:L53e255:{c.instructions+=3;NFSU2_TR(0x53e255);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e258:{NFSU2_TR(0x53e258);
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
B53e25a:{NFSU2_TR(0x53e25a);
if(r1(R+518)){{goto L53e269;}}
}
B53e25c:L53e25c:{c.instructions+=3;NFSU2_TR(0x53e25c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e25d:{NFSU2_TR(0x53e25d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e263:{NFSU2_TR(0x53e263);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e269ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e269:L53e269:{c.instructions+=3;NFSU2_TR(0x53e269);
u8 U[4];
w4(U+0,u32(0x51b30cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e26e:{NFSU2_TR(0x53e26e);
w4(R+4,u32(0x860a60ull));
}
B53e273:{NFSU2_TR(0x53e273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e278ull));
TAIL_STATIC(0x533890u,533);
}
B53e278:L53e278:{c.instructions+=5;NFSU2_TR(0x53e278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e279:{NFSU2_TR(0x53e279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e27a:{NFSU2_TR(0x53e27a);
__builtin_memmove((R+16),(R+20),4);
}
B53e27c:{NFSU2_TR(0x53e27c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e27d:{NFSU2_TR(0x53e27d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e280:L53e280:{c.instructions+=3;NFSU2_TR(0x53e280);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53e283:{NFSU2_TR(0x53e283);
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
B53e285:{NFSU2_TR(0x53e285);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53e5ff;}}
}
B53e28b:L53e28b:{c.instructions+=7;NFSU2_TR(0x53e28b);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e290:{NFSU2_TR(0x53e290);
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
B53e292:{NFSU2_TR(0x53e292);
w4(R+12,u32(0x1ull));
}
B53e297:{NFSU2_TR(0x53e297);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e2a1:{NFSU2_TR(0x53e2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e2a7:{NFSU2_TR(0x53e2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e2b1:{NFSU2_TR(0x53e2b1);
if(r1(R+518)){{goto L53e2d1;}}
}
B53e2b3:L53e2b3:{c.instructions+=3;NFSU2_TR(0x53e2b3);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e2b9:{NFSU2_TR(0x53e2b9);
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
B53e2bb:{NFSU2_TR(0x53e2bb);
if(r1(R+518)){{goto L53e2d1;}}
}
B53e2bd:L53e2bd:{c.instructions+=3;NFSU2_TR(0x53e2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e2c0:{NFSU2_TR(0x53e2c0);
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
B53e2c2:{NFSU2_TR(0x53e2c2);
if(r1(R+518)){{goto L53e2d1;}}
}
B53e2c4:L53e2c4:{c.instructions+=3;NFSU2_TR(0x53e2c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e2c5:{NFSU2_TR(0x53e2c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e2cb:{NFSU2_TR(0x53e2cb);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e2d1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e2d1:L53e2d1:{c.instructions+=6;NFSU2_TR(0x53e2d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53e2d4:{NFSU2_TR(0x53e2d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e2d5:{NFSU2_TR(0x53e2d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e2d6:{NFSU2_TR(0x53e2d6);
__builtin_memmove((R+16),(R+20),4);
}
B53e2d8:{NFSU2_TR(0x53e2d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e2d9:{NFSU2_TR(0x53e2d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e2dc:L53e2dc:{c.instructions+=6;NFSU2_TR(0x53e2dc);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e2e1:{NFSU2_TR(0x53e2e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e2e3:{NFSU2_TR(0x53e2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e2ea:{NFSU2_TR(0x53e2ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
w4(U+4,u32(0x1000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e2f1:{NFSU2_TR(0x53e2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e2f8:{NFSU2_TR(0x53e2f8);
if(r1(R+518)){{goto L53e315;}}
}
B53e2fa:L53e2fa:{c.instructions+=3;NFSU2_TR(0x53e2fa);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e300:{NFSU2_TR(0x53e300);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e302:{NFSU2_TR(0x53e302);
if(r1(R+518)){{goto L53e315;}}
}
B53e304:L53e304:{c.instructions+=3;NFSU2_TR(0x53e304);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e307:{NFSU2_TR(0x53e307);
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
B53e309:{NFSU2_TR(0x53e309);
if(r1(R+518)){{goto L53e315;}}
}
B53e30b:L53e30b:{c.instructions+=3;NFSU2_TR(0x53e30b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e30c:{NFSU2_TR(0x53e30c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e30f:{NFSU2_TR(0x53e30f);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e315ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e315:L53e315:{c.instructions+=3;NFSU2_TR(0x53e315);
u8 U[4];
w4(U+0,u32(0x83914c51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e31a:{NFSU2_TR(0x53e31a);
w4(R+4,u32(0x860a60ull));
}
B53e31f:{NFSU2_TR(0x53e31f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e324ull));
TAIL_STATIC(0x533890u,533);
}
B53e324:L53e324:{c.instructions+=5;NFSU2_TR(0x53e324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e325:{NFSU2_TR(0x53e325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e326:{NFSU2_TR(0x53e326);
__builtin_memmove((R+16),(R+20),4);
}
B53e328:{NFSU2_TR(0x53e328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e329:{NFSU2_TR(0x53e329);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e32c:L53e32c:{c.instructions+=6;NFSU2_TR(0x53e32c);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e331:{NFSU2_TR(0x53e331);
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
B53e333:{NFSU2_TR(0x53e333);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e33a:{NFSU2_TR(0x53e33a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e341:{NFSU2_TR(0x53e341);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e348:{NFSU2_TR(0x53e348);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e34e:L53e34e:{c.instructions+=3;NFSU2_TR(0x53e34e);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e354:{NFSU2_TR(0x53e354);
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
B53e356:{NFSU2_TR(0x53e356);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e35c:L53e35c:{c.instructions+=3;NFSU2_TR(0x53e35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e35f:{NFSU2_TR(0x53e35f);
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
B53e361:{NFSU2_TR(0x53e361);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e367:L53e367:{c.instructions+=3;NFSU2_TR(0x53e367);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e368:{NFSU2_TR(0x53e368);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e36b:{NFSU2_TR(0x53e36b);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e371ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e371:L53e371:{c.instructions+=5;NFSU2_TR(0x53e371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e372:{NFSU2_TR(0x53e372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e373:{NFSU2_TR(0x53e373);
__builtin_memmove((R+16),(R+20),4);
}
B53e375:{NFSU2_TR(0x53e375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e376:{NFSU2_TR(0x53e376);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e379:L53e379:{c.instructions+=6;NFSU2_TR(0x53e379);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e37e:{NFSU2_TR(0x53e37e);
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
B53e380:{NFSU2_TR(0x53e380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e38a:{NFSU2_TR(0x53e38a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e394:{NFSU2_TR(0x53e394);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e39e:{NFSU2_TR(0x53e39e);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e3a4:L53e3a4:{c.instructions+=3;NFSU2_TR(0x53e3a4);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e3aa:{NFSU2_TR(0x53e3aa);
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
B53e3ac:{NFSU2_TR(0x53e3ac);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e3b2:L53e3b2:{c.instructions+=3;NFSU2_TR(0x53e3b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e3b5:{NFSU2_TR(0x53e3b5);
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
B53e3b7:{NFSU2_TR(0x53e3b7);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e3bd:L53e3bd:{c.instructions+=3;NFSU2_TR(0x53e3bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e3be:{NFSU2_TR(0x53e3be);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e3c4:{NFSU2_TR(0x53e3c4);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e3caull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e3ca:L53e3ca:{c.instructions+=5;NFSU2_TR(0x53e3ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e3cb:{NFSU2_TR(0x53e3cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e3cc:{NFSU2_TR(0x53e3cc);
__builtin_memmove((R+16),(R+20),4);
}
B53e3ce:{NFSU2_TR(0x53e3ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e3cf:{NFSU2_TR(0x53e3cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e3d2:L53e3d2:{c.instructions+=6;NFSU2_TR(0x53e3d2);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e3d7:{NFSU2_TR(0x53e3d7);
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
B53e3d9:{NFSU2_TR(0x53e3d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e3e0:{NFSU2_TR(0x53e3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e3e7:{NFSU2_TR(0x53e3e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e3ee:{NFSU2_TR(0x53e3ee);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e3f4:L53e3f4:{c.instructions+=3;NFSU2_TR(0x53e3f4);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e3fa:{NFSU2_TR(0x53e3fa);
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
B53e3fc:{NFSU2_TR(0x53e3fc);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e402:L53e402:{c.instructions+=3;NFSU2_TR(0x53e402);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e405:{NFSU2_TR(0x53e405);
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
B53e407:{NFSU2_TR(0x53e407);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e40d:L53e40d:{c.instructions+=3;NFSU2_TR(0x53e40d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e40e:{NFSU2_TR(0x53e40e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e411:{NFSU2_TR(0x53e411);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e417ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e417:L53e417:{c.instructions+=5;NFSU2_TR(0x53e417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e418:{NFSU2_TR(0x53e418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e419:{NFSU2_TR(0x53e419);
__builtin_memmove((R+16),(R+20),4);
}
B53e41b:{NFSU2_TR(0x53e41b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e41c:{NFSU2_TR(0x53e41c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e41f:L53e41f:{c.instructions+=6;NFSU2_TR(0x53e41f);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e424:{NFSU2_TR(0x53e424);
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
B53e426:{NFSU2_TR(0x53e426);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e42d:{NFSU2_TR(0x53e42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e434:{NFSU2_TR(0x53e434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e43b:{NFSU2_TR(0x53e43b);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e441:L53e441:{c.instructions+=3;NFSU2_TR(0x53e441);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e447:{NFSU2_TR(0x53e447);
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
B53e449:{NFSU2_TR(0x53e449);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e44f:L53e44f:{c.instructions+=3;NFSU2_TR(0x53e44f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e452:{NFSU2_TR(0x53e452);
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
B53e454:{NFSU2_TR(0x53e454);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e45a:L53e45a:{c.instructions+=3;NFSU2_TR(0x53e45a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e45b:{NFSU2_TR(0x53e45b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e45e:{NFSU2_TR(0x53e45e);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e464ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e464:L53e464:{c.instructions+=5;NFSU2_TR(0x53e464);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e465:{NFSU2_TR(0x53e465);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e466:{NFSU2_TR(0x53e466);
__builtin_memmove((R+16),(R+20),4);
}
B53e468:{NFSU2_TR(0x53e468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e469:{NFSU2_TR(0x53e469);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e46c:L53e46c:{c.instructions+=6;NFSU2_TR(0x53e46c);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e471:{NFSU2_TR(0x53e471);
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
B53e473:{NFSU2_TR(0x53e473);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e47a:{NFSU2_TR(0x53e47a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x20000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e481:{NFSU2_TR(0x53e481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e488:{NFSU2_TR(0x53e488);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e48e:L53e48e:{c.instructions+=3;NFSU2_TR(0x53e48e);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e494:{NFSU2_TR(0x53e494);
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
B53e496:{NFSU2_TR(0x53e496);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e49c:L53e49c:{c.instructions+=3;NFSU2_TR(0x53e49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e49f:{NFSU2_TR(0x53e49f);
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
B53e4a1:{NFSU2_TR(0x53e4a1);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e4a7:L53e4a7:{c.instructions+=3;NFSU2_TR(0x53e4a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e4a8:{NFSU2_TR(0x53e4a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e4ab:{NFSU2_TR(0x53e4ab);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e4b1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e4b1:L53e4b1:{c.instructions+=5;NFSU2_TR(0x53e4b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e4b2:{NFSU2_TR(0x53e4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e4b3:{NFSU2_TR(0x53e4b3);
__builtin_memmove((R+16),(R+20),4);
}
B53e4b5:{NFSU2_TR(0x53e4b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e4b6:{NFSU2_TR(0x53e4b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e4b9:L53e4b9:{c.instructions+=3;NFSU2_TR(0x53e4b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53e4bf:{NFSU2_TR(0x53e4bf);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B53e4c1:{NFSU2_TR(0x53e4c1);
if(r1(R+512)){{goto L53e51c;}}
}
B53e4c3:L53e4c3:{c.instructions+=2;NFSU2_TR(0x53e4c3);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B53e4c5:{NFSU2_TR(0x53e4c5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53e51c;}}
}
B53e4c7:L53e4c7:{c.instructions+=13;NFSU2_TR(0x53e4c7);
w4(R+4,u32(0x4ull));
}
B53e4cc:{NFSU2_TR(0x53e4cc);
w4(R+0,u32(r1(R+0)));
}
B53e4cf:{NFSU2_TR(0x53e4cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e4d6:{NFSU2_TR(0x53e4d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e4dd:{NFSU2_TR(0x53e4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e4e0:{NFSU2_TR(0x53e4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e4e3:{NFSU2_TR(0x53e4e3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B53e4e7:{NFSU2_TR(0x53e4e7);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e4ec:{NFSU2_TR(0x53e4ec);
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
B53e4ee:{NFSU2_TR(0x53e4ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x79ad0cull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e4f5:{NFSU2_TR(0x53e4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e4f8:{NFSU2_TR(0x53e4f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e4ff:{NFSU2_TR(0x53e4ff);
if(r1(R+518)){{goto L53e51c;}}
}
B53e501:L53e501:{c.instructions+=3;NFSU2_TR(0x53e501);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e507:{NFSU2_TR(0x53e507);
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
B53e509:{NFSU2_TR(0x53e509);
if(r1(R+518)){{goto L53e51c;}}
}
B53e50b:L53e50b:{c.instructions+=3;NFSU2_TR(0x53e50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e50e:{NFSU2_TR(0x53e50e);
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
B53e510:{NFSU2_TR(0x53e510);
if(r1(R+518)){{goto L53e51c;}}
}
B53e512:L53e512:{c.instructions+=3;NFSU2_TR(0x53e512);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e513:{NFSU2_TR(0x53e513);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e516:{NFSU2_TR(0x53e516);
u8 U[4];
__builtin_memmove((U+0),gp(0x79ad0c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e51cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e51c:L53e51c:{c.instructions+=6;NFSU2_TR(0x53e51c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e51d:{NFSU2_TR(0x53e51d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53e524:{NFSU2_TR(0x53e524);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e525:{NFSU2_TR(0x53e525);
__builtin_memmove((R+16),(R+20),4);
}
B53e527:{NFSU2_TR(0x53e527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e528:{NFSU2_TR(0x53e528);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e52b:L53e52b:{c.instructions+=3;NFSU2_TR(0x53e52b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53e52e:{NFSU2_TR(0x53e52e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
w4(U+4,u32(0x79ad14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e535:{NFSU2_TR(0x53e535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e53aull));
TAIL_STATIC(0x511260u,511);
}
B53e53a:L53e53a:{c.instructions+=5;NFSU2_TR(0x53e53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e53d:{NFSU2_TR(0x53e53d);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e542:{NFSU2_TR(0x53e542);
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
B53e544:{NFSU2_TR(0x53e544);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e54b:{NFSU2_TR(0x53e54b);
if(r1(R+518)){{goto L53e568;}}
}
B53e54d:L53e54d:{c.instructions+=3;NFSU2_TR(0x53e54d);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e553:{NFSU2_TR(0x53e553);
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
B53e555:{NFSU2_TR(0x53e555);
if(r1(R+518)){{goto L53e568;}}
}
B53e557:L53e557:{c.instructions+=3;NFSU2_TR(0x53e557);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e55a:{NFSU2_TR(0x53e55a);
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
B53e55c:{NFSU2_TR(0x53e55c);
if(r1(R+518)){{goto L53e568;}}
}
B53e55e:L53e55e:{c.instructions+=3;NFSU2_TR(0x53e55e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e55f:{NFSU2_TR(0x53e55f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e562:{NFSU2_TR(0x53e562);
u8 U[4];
__builtin_memmove((U+0),gp(0x79ad14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e568ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e568:L53e568:{c.instructions+=6;NFSU2_TR(0x53e568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e569:{NFSU2_TR(0x53e569);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53e56d:{NFSU2_TR(0x53e56d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e56e:{NFSU2_TR(0x53e56e);
__builtin_memmove((R+16),(R+20),4);
}
B53e570:{NFSU2_TR(0x53e570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e571:{NFSU2_TR(0x53e571);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e574:L53e574:{c.instructions+=3;NFSU2_TR(0x53e574);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53e577:{NFSU2_TR(0x53e577);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
w4(U+4,u32(0x79ad10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e57e:{NFSU2_TR(0x53e57e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e583ull));
TAIL_STATIC(0x511240u,511);
}
B53e583:L53e583:{c.instructions+=5;NFSU2_TR(0x53e583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e586:{NFSU2_TR(0x53e586);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e58b:{NFSU2_TR(0x53e58b);
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
B53e58d:{NFSU2_TR(0x53e58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e594:{NFSU2_TR(0x53e594);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e596:L53e596:{c.instructions+=3;NFSU2_TR(0x53e596);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e59c:{NFSU2_TR(0x53e59c);
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
B53e59e:{NFSU2_TR(0x53e59e);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e5a0:L53e5a0:{c.instructions+=3;NFSU2_TR(0x53e5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e5a3:{NFSU2_TR(0x53e5a3);
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
B53e5a5:{NFSU2_TR(0x53e5a5);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e5a7:L53e5a7:{c.instructions+=3;NFSU2_TR(0x53e5a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e5a8:{NFSU2_TR(0x53e5a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e5ab:{NFSU2_TR(0x53e5ab);
u8 U[4];
__builtin_memmove((U+0),gp(0x79ad10),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e5b1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e5b1:L53e5b1:{c.instructions+=5;NFSU2_TR(0x53e5b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e5b2:{NFSU2_TR(0x53e5b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e5b3:{NFSU2_TR(0x53e5b3);
__builtin_memmove((R+16),(R+20),4);
}
B53e5b5:{NFSU2_TR(0x53e5b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e5b6:{NFSU2_TR(0x53e5b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e5b9:L53e5b9:{c.instructions+=8;NFSU2_TR(0x53e5b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B53e5bd:{NFSU2_TR(0x53e5bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa4dcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B53e5c4:{NFSU2_TR(0x53e5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e5c7:{NFSU2_TR(0x53e5c7);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B53e5cc:{NFSU2_TR(0x53e5cc);
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
B53e5ce:{NFSU2_TR(0x53e5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
w4(U+4,u32(0x79ad14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e5d8:{NFSU2_TR(0x53e5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e5df:{NFSU2_TR(0x53e5df);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e5e1:L53e5e1:{c.instructions+=3;NFSU2_TR(0x53e5e1);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B53e5e7:{NFSU2_TR(0x53e5e7);
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
B53e5e9:{NFSU2_TR(0x53e5e9);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e5eb:L53e5eb:{c.instructions+=3;NFSU2_TR(0x53e5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e5ee:{NFSU2_TR(0x53e5ee);
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
B53e5f0:{NFSU2_TR(0x53e5f0);
if(r1(R+518)){{goto L53e5ff;}}
}
B53e5f2:L53e5f2:{c.instructions+=3;NFSU2_TR(0x53e5f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e5f3:{NFSU2_TR(0x53e5f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e5f9:{NFSU2_TR(0x53e5f9);
u8 U[4];
__builtin_memmove((U+0),gp(0x79ad14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e5ffull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B53e5ff:L53e5ff:{c.instructions+=1;NFSU2_TR(0x53e5ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e600:L53e600:{c.instructions+=4;NFSU2_TR(0x53e600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e601:{NFSU2_TR(0x53e601);
__builtin_memmove((R+16),(R+20),4);
}
B53e603:{NFSU2_TR(0x53e603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e604:{NFSU2_TR(0x53e604);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e650:L53e650:{c.instructions+=12;NFSU2_TR(0x53e650);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e652:{NFSU2_TR(0x53e652);
u8 U[4];
w4(U+0,u32(0x77806bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e657:{NFSU2_TR(0x53e657);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e65d:{NFSU2_TR(0x53e65d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e65e:{NFSU2_TR(0x53e65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e665:{NFSU2_TR(0x53e665);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e666:{NFSU2_TR(0x53e666);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e667:{NFSU2_TR(0x53e667);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e668:{NFSU2_TR(0x53e668);
__builtin_memmove((R+28),(R+4),4);
}
B53e66a:{NFSU2_TR(0x53e66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53e66d:{NFSU2_TR(0x53e66d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e66f:{NFSU2_TR(0x53e66f);
if(r1(R+518)){{goto L53e682;}}
}
B53e671:L53e671:{c.instructions+=3;NFSU2_TR(0x53e671);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e677:{NFSU2_TR(0x53e677);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e679:{NFSU2_TR(0x53e679);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53e6d4;}}
}
B53e67b:L53e67b:{c.instructions+=3;NFSU2_TR(0x53e67b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53e67e:{NFSU2_TR(0x53e67e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e680:{NFSU2_TR(0x53e680);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53e671u);}goto L53e671;}}
}
B53e682:L53e682:{c.instructions+=2;NFSU2_TR(0x53e682);
u8 U[4];
w4(U+0,u32(0x2020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e687:{NFSU2_TR(0x53e687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e68cull));
TAIL_STATIC(0x575620u,575);
}
B53e68c:L53e68c:{c.instructions+=5;NFSU2_TR(0x53e68c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53e68f:{NFSU2_TR(0x53e68f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e693:{NFSU2_TR(0x53e693);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e695:{NFSU2_TR(0x53e695);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e69d:{NFSU2_TR(0x53e69d);
if(r1(R+518)){{goto L53e6a8;}}
}
B53e69f:L53e69f:{c.instructions+=2;NFSU2_TR(0x53e69f);
__builtin_memmove((R+4),(R+0),4);
}
B53e6a1:{NFSU2_TR(0x53e6a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e6a6ull));
TAIL_STATIC(0x5319c0u,531);
}
B53e6a6:L53e6a6:{c.instructions+=1;NFSU2_TR(0x53e6a6);
{goto L53e6aa;}
}
B53e6a8:L53e6a8:{c.instructions+=1;NFSU2_TR(0x53e6a8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53e6aa:L53e6aa:{c.instructions+=3;NFSU2_TR(0x53e6aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e6ac:{NFSU2_TR(0x53e6ac);
__builtin_memmove((R+24),(R+0),4);
}
B53e6ae:{NFSU2_TR(0x53e6ae);
if(r1(R+518)){{goto L53e6d4;}}
}
B53e6b0:L53e6b0:{c.instructions+=4;NFSU2_TR(0x53e6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53e6b3:{NFSU2_TR(0x53e6b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e6b5:{NFSU2_TR(0x53e6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e6b8:{NFSU2_TR(0x53e6b8);
if(r1(R+518)){{goto L53e6bd;}}
}
B53e6ba:L53e6ba:{c.instructions+=1;NFSU2_TR(0x53e6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e6bd:L53e6bd:{c.instructions+=5;NFSU2_TR(0x53e6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e6c4:{NFSU2_TR(0x53e6c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53e6c7:{NFSU2_TR(0x53e6c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e6c9:{NFSU2_TR(0x53e6c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e6cc:{NFSU2_TR(0x53e6cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53e6d1;}}
}
B53e6ce:L53e6ce:{c.instructions+=1;NFSU2_TR(0x53e6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e6d1:L53e6d1:{c.instructions+=1;NFSU2_TR(0x53e6d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53e6d4:L53e6d4:{c.instructions+=4;NFSU2_TR(0x53e6d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2014ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53e6da:{NFSU2_TR(0x53e6da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e6dc:{NFSU2_TR(0x53e6dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e6e2:{NFSU2_TR(0x53e6e2);
if(r1(R+518)){{goto L53e6ea;}}
}
B53e6e4:L53e6e4:{c.instructions+=2;NFSU2_TR(0x53e6e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e6e5:{NFSU2_TR(0x53e6e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e6eaull));
TAIL_STATIC(0x505400u,505);
}
B53e6ea:L53e6ea:{c.instructions+=10;NFSU2_TR(0x53e6ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x201cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e6f0:{NFSU2_TR(0x53e6f0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53e6f4:{NFSU2_TR(0x53e6f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B53e6f5:{NFSU2_TR(0x53e6f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x201cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e6fb:{NFSU2_TR(0x53e6fb);
__builtin_memmove((R+0),(R+28),4);
}
B53e6fd:{NFSU2_TR(0x53e6fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e6fe:{NFSU2_TR(0x53e6fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53e6ff:{NFSU2_TR(0x53e6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e706:{NFSU2_TR(0x53e706);
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
B53e709:{NFSU2_TR(0x53e709);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e710:L53e710:{c.instructions+=25;NFSU2_TR(0x53e710);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e712:{NFSU2_TR(0x53e712);
u8 U[4];
w4(U+0,u32(0x776f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e717:{NFSU2_TR(0x53e717);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e71d:{NFSU2_TR(0x53e71d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e71e:{NFSU2_TR(0x53e71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e725:{NFSU2_TR(0x53e725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e726:{NFSU2_TR(0x53e726);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e727:{NFSU2_TR(0x53e727);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e728:{NFSU2_TR(0x53e728);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e729:{NFSU2_TR(0x53e729);
__builtin_memmove((R+24),(R+4),4);
}
B53e72b:{NFSU2_TR(0x53e72b);
w4(R+0,u32(0xabadcafeull));
}
B53e730:{NFSU2_TR(0x53e730);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e731:{NFSU2_TR(0x53e731);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e735:{NFSU2_TR(0x53e735);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e738:{NFSU2_TR(0x53e738);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e73b:{NFSU2_TR(0x53e73b);
u8 U[4];
w4(U+0,u32(0x534b10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e740:{NFSU2_TR(0x53e740);
u8 U[4];
w4(U+0,u32(0x4fe920ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e745:{NFSU2_TR(0x53e745);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e747:{NFSU2_TR(0x53e747);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e749:{NFSU2_TR(0x53e749);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B53e74c:{NFSU2_TR(0x53e74c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53e74e:{NFSU2_TR(0x53e74e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e74f:{NFSU2_TR(0x53e74f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e753:{NFSU2_TR(0x53e753);
u8 U[4];
w4(U+0,u32(0x79bf50ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53e759:{NFSU2_TR(0x53e759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e75eull));
TAIL_STATIC(0x75c461u,75c);
}
B53e75e:L53e75e:{c.instructions+=8;NFSU2_TR(0x53e75e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60cull))));
w4(U+4,u32(0x79a9ecull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e768:{NFSU2_TR(0x53e768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x614ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e76e:{NFSU2_TR(0x53e76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e774:{NFSU2_TR(0x53e774);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x610ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e77a:{NFSU2_TR(0x53e77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e780:{NFSU2_TR(0x53e780);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53e783:{NFSU2_TR(0x53e783);
w4(R+20,u32(0x10ull));
}
B53e788:{NFSU2_TR(0x53e788);
{goto L53e790;}
}
B53e790:L53e790:{c.instructions+=4;NFSU2_TR(0x53e790);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53e796:{NFSU2_TR(0x53e796);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e799:{NFSU2_TR(0x53e799);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e79b:{NFSU2_TR(0x53e79b);
if(r1(R+518)){{goto L53e7ed;}}
}
B53e79d:L53e79d:{c.instructions+=2;NFSU2_TR(0x53e79d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e79f:{NFSU2_TR(0x53e79f);
if(r1(R+518)){{goto L53e7bb;}}
}
B53e7a1:L53e7a1:{c.instructions+=4;NFSU2_TR(0x53e7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53e7a4:{NFSU2_TR(0x53e7a4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e7a6:{NFSU2_TR(0x53e7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e7a9:{NFSU2_TR(0x53e7a9);
if(r1(R+518)){{goto L53e7b1;}}
}
B53e7ab:L53e7ab:{c.instructions+=2;NFSU2_TR(0x53e7ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e7ae:{NFSU2_TR(0x53e7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e7b1:L53e7b1:{c.instructions+=4;NFSU2_TR(0x53e7b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e7b4:{NFSU2_TR(0x53e7b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53e7b6:{NFSU2_TR(0x53e7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e7b9:{NFSU2_TR(0x53e7b9);
{goto L53e7d9;}
}
B53e7bb:L53e7bb:{c.instructions+=4;NFSU2_TR(0x53e7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x614ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53e7c1:{NFSU2_TR(0x53e7c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e7c3:{NFSU2_TR(0x53e7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e7c6:{NFSU2_TR(0x53e7c6);
if(r1(R+518)){{goto L53e7ce;}}
}
B53e7c8:L53e7c8:{c.instructions+=2;NFSU2_TR(0x53e7c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e7cb:{NFSU2_TR(0x53e7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e7ce:L53e7ce:{c.instructions+=3;NFSU2_TR(0x53e7ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e7d1:{NFSU2_TR(0x53e7d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53e7d3:{NFSU2_TR(0x53e7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x614ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e7d9:L53e7d9:{c.instructions+=2;NFSU2_TR(0x53e7d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53e7df:{NFSU2_TR(0x53e7df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53e7e7;}}
}
B53e7e1:L53e7e1:{c.instructions+=1;NFSU2_TR(0x53e7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e7e7:L53e7e7:{c.instructions+=1;NFSU2_TR(0x53e7e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53e7ed:L53e7ed:{c.instructions+=4;NFSU2_TR(0x53e7ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53e7f3:{NFSU2_TR(0x53e7f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e7f6:{NFSU2_TR(0x53e7f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e7f8:{NFSU2_TR(0x53e7f8);
if(r1(R+518)){{goto L53e840;}}
}
B53e7fa:L53e7fa:{c.instructions+=2;NFSU2_TR(0x53e7fa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e7fc:{NFSU2_TR(0x53e7fc);
if(r1(R+518)){{goto L53e813;}}
}
B53e7fe:L53e7fe:{c.instructions+=4;NFSU2_TR(0x53e7fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53e801:{NFSU2_TR(0x53e801);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e803:{NFSU2_TR(0x53e803);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e806:{NFSU2_TR(0x53e806);
if(r1(R+518)){{goto L53e80b;}}
}
B53e808:L53e808:{c.instructions+=1;NFSU2_TR(0x53e808);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e80b:L53e80b:{c.instructions+=3;NFSU2_TR(0x53e80b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e80e:{NFSU2_TR(0x53e80e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e811:{NFSU2_TR(0x53e811);
{goto L53e82c;}
}
B53e813:L53e813:{c.instructions+=4;NFSU2_TR(0x53e813);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x614ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53e819:{NFSU2_TR(0x53e819);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e81b:{NFSU2_TR(0x53e81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e81e:{NFSU2_TR(0x53e81e);
if(r1(R+518)){{goto L53e823;}}
}
B53e820:L53e820:{c.instructions+=1;NFSU2_TR(0x53e820);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e823:L53e823:{c.instructions+=2;NFSU2_TR(0x53e823);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e826:{NFSU2_TR(0x53e826);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x614ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e82c:L53e82c:{c.instructions+=2;NFSU2_TR(0x53e82c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53e832:{NFSU2_TR(0x53e832);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53e83a;}}
}
B53e834:L53e834:{c.instructions+=1;NFSU2_TR(0x53e834);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e83a:L53e83a:{c.instructions+=1;NFSU2_TR(0x53e83a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53e840:L53e840:{c.instructions+=4;NFSU2_TR(0x53e840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53e846:{NFSU2_TR(0x53e846);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e849:{NFSU2_TR(0x53e849);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e84b:{NFSU2_TR(0x53e84b);
if(r1(R+518)){{goto L53e893;}}
}
B53e84d:L53e84d:{c.instructions+=2;NFSU2_TR(0x53e84d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e84f:{NFSU2_TR(0x53e84f);
if(r1(R+518)){{goto L53e866;}}
}
B53e851:L53e851:{c.instructions+=4;NFSU2_TR(0x53e851);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53e854:{NFSU2_TR(0x53e854);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e856:{NFSU2_TR(0x53e856);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e859:{NFSU2_TR(0x53e859);
if(r1(R+518)){{goto L53e85e;}}
}
B53e85b:L53e85b:{c.instructions+=1;NFSU2_TR(0x53e85b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e85e:L53e85e:{c.instructions+=3;NFSU2_TR(0x53e85e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e861:{NFSU2_TR(0x53e861);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e864:{NFSU2_TR(0x53e864);
{goto L53e87f;}
}
B53e866:L53e866:{c.instructions+=4;NFSU2_TR(0x53e866);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x614ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53e86c:{NFSU2_TR(0x53e86c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e86e:{NFSU2_TR(0x53e86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e871:{NFSU2_TR(0x53e871);
if(r1(R+518)){{goto L53e876;}}
}
B53e873:L53e873:{c.instructions+=1;NFSU2_TR(0x53e873);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e876:L53e876:{c.instructions+=2;NFSU2_TR(0x53e876);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e879:{NFSU2_TR(0x53e879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x614ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e87f:L53e87f:{c.instructions+=2;NFSU2_TR(0x53e87f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53e885:{NFSU2_TR(0x53e885);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53e88d;}}
}
B53e887:L53e887:{c.instructions+=1;NFSU2_TR(0x53e887);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e88d:L53e88d:{c.instructions+=1;NFSU2_TR(0x53e88d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53e893:L53e893:{c.instructions+=4;NFSU2_TR(0x53e893);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53e899:{NFSU2_TR(0x53e899);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e89c:{NFSU2_TR(0x53e89c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e89e:{NFSU2_TR(0x53e89e);
if(r1(R+518)){{goto L53e8e6;}}
}
B53e8a0:L53e8a0:{c.instructions+=2;NFSU2_TR(0x53e8a0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e8a2:{NFSU2_TR(0x53e8a2);
if(r1(R+518)){{goto L53e8b9;}}
}
B53e8a4:L53e8a4:{c.instructions+=4;NFSU2_TR(0x53e8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53e8a7:{NFSU2_TR(0x53e8a7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e8a9:{NFSU2_TR(0x53e8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e8ac:{NFSU2_TR(0x53e8ac);
if(r1(R+518)){{goto L53e8b1;}}
}
B53e8ae:L53e8ae:{c.instructions+=1;NFSU2_TR(0x53e8ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e8b1:L53e8b1:{c.instructions+=3;NFSU2_TR(0x53e8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e8b4:{NFSU2_TR(0x53e8b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e8b7:{NFSU2_TR(0x53e8b7);
{goto L53e8d2;}
}
B53e8b9:L53e8b9:{c.instructions+=4;NFSU2_TR(0x53e8b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x614ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53e8bf:{NFSU2_TR(0x53e8bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e8c1:{NFSU2_TR(0x53e8c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e8c4:{NFSU2_TR(0x53e8c4);
if(r1(R+518)){{goto L53e8c9;}}
}
B53e8c6:L53e8c6:{c.instructions+=1;NFSU2_TR(0x53e8c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e8c9:L53e8c9:{c.instructions+=2;NFSU2_TR(0x53e8c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e8cc:{NFSU2_TR(0x53e8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x614ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e8d2:L53e8d2:{c.instructions+=2;NFSU2_TR(0x53e8d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53e8d8:{NFSU2_TR(0x53e8d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53e8e0;}}
}
B53e8da:L53e8da:{c.instructions+=1;NFSU2_TR(0x53e8da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e8e0:L53e8e0:{c.instructions+=1;NFSU2_TR(0x53e8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53e8e6:L53e8e6:{c.instructions+=3;NFSU2_TR(0x53e8e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B53e8e9:{NFSU2_TR(0x53e8e9);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B53e8ea:{NFSU2_TR(0x53e8ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53e790u);}goto L53e790;}}
}
B53e8f0:L53e8f0:{c.instructions+=9;NFSU2_TR(0x53e8f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53e8f4:{NFSU2_TR(0x53e8f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e8f5:{NFSU2_TR(0x53e8f5);
__builtin_memmove((R+0),(R+24),4);
}
B53e8f7:{NFSU2_TR(0x53e8f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53e8f8:{NFSU2_TR(0x53e8f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53e8f9:{NFSU2_TR(0x53e8f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53e8fa:{NFSU2_TR(0x53e8fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e901:{NFSU2_TR(0x53e901);
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
B53e904:{NFSU2_TR(0x53e904);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53e910:L53e910:{c.instructions+=25;NFSU2_TR(0x53e910);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e912:{NFSU2_TR(0x53e912);
u8 U[4];
w4(U+0,u32(0x776f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e917:{NFSU2_TR(0x53e917);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53e91d:{NFSU2_TR(0x53e91d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e91e:{NFSU2_TR(0x53e91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e925:{NFSU2_TR(0x53e925);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e926:{NFSU2_TR(0x53e926);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e927:{NFSU2_TR(0x53e927);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e928:{NFSU2_TR(0x53e928);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e929:{NFSU2_TR(0x53e929);
__builtin_memmove((R+24),(R+4),4);
}
B53e92b:{NFSU2_TR(0x53e92b);
w4(R+0,u32(0xabadcafeull));
}
B53e930:{NFSU2_TR(0x53e930);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e931:{NFSU2_TR(0x53e931);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e935:{NFSU2_TR(0x53e935);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e938:{NFSU2_TR(0x53e938);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e93b:{NFSU2_TR(0x53e93b);
u8 U[4];
w4(U+0,u32(0x535170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e940:{NFSU2_TR(0x53e940);
u8 U[4];
w4(U+0,u32(0x511d70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e945:{NFSU2_TR(0x53e945);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e947:{NFSU2_TR(0x53e947);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e949:{NFSU2_TR(0x53e949);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B53e94c:{NFSU2_TR(0x53e94c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53e94e:{NFSU2_TR(0x53e94e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53e94f:{NFSU2_TR(0x53e94f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e953:{NFSU2_TR(0x53e953);
u8 U[4];
w4(U+0,u32(0x79bf54ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53e959:{NFSU2_TR(0x53e959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53e95eull));
TAIL_STATIC(0x75c461u,75c);
}
B53e95e:L53e95e:{c.instructions+=8;NFSU2_TR(0x53e95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68cull))));
w4(U+4,u32(0x79a9ecull));
s4(u32(r4(U+0)),r4(U+4));
}
B53e968:{NFSU2_TR(0x53e968);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e96e:{NFSU2_TR(0x53e96e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e974:{NFSU2_TR(0x53e974);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e97a:{NFSU2_TR(0x53e97a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e980:{NFSU2_TR(0x53e980);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53e983:{NFSU2_TR(0x53e983);
w4(R+20,u32(0x8ull));
}
B53e988:{NFSU2_TR(0x53e988);
{goto L53e990;}
}
B53e990:L53e990:{c.instructions+=4;NFSU2_TR(0x53e990);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53e996:{NFSU2_TR(0x53e996);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e999:{NFSU2_TR(0x53e999);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53e99b:{NFSU2_TR(0x53e99b);
if(r1(R+518)){{goto L53e9ed;}}
}
B53e99d:L53e99d:{c.instructions+=2;NFSU2_TR(0x53e99d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e99f:{NFSU2_TR(0x53e99f);
if(r1(R+518)){{goto L53e9bb;}}
}
B53e9a1:L53e9a1:{c.instructions+=4;NFSU2_TR(0x53e9a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53e9a4:{NFSU2_TR(0x53e9a4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e9a6:{NFSU2_TR(0x53e9a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e9a9:{NFSU2_TR(0x53e9a9);
if(r1(R+518)){{goto L53e9b1;}}
}
B53e9ab:L53e9ab:{c.instructions+=2;NFSU2_TR(0x53e9ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e9ae:{NFSU2_TR(0x53e9ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e9b1:L53e9b1:{c.instructions+=4;NFSU2_TR(0x53e9b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e9b4:{NFSU2_TR(0x53e9b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53e9b6:{NFSU2_TR(0x53e9b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e9b9:{NFSU2_TR(0x53e9b9);
{goto L53e9d9;}
}
B53e9bb:L53e9bb:{c.instructions+=4;NFSU2_TR(0x53e9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53e9c1:{NFSU2_TR(0x53e9c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e9c3:{NFSU2_TR(0x53e9c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e9c6:{NFSU2_TR(0x53e9c6);
if(r1(R+518)){{goto L53e9ce;}}
}
B53e9c8:L53e9c8:{c.instructions+=2;NFSU2_TR(0x53e9c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53e9cb:{NFSU2_TR(0x53e9cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e9ce:L53e9ce:{c.instructions+=3;NFSU2_TR(0x53e9ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e9d1:{NFSU2_TR(0x53e9d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53e9d3:{NFSU2_TR(0x53e9d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e9d9:L53e9d9:{c.instructions+=2;NFSU2_TR(0x53e9d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53e9df:{NFSU2_TR(0x53e9df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53e9e7;}}
}
B53e9e1:L53e9e1:{c.instructions+=1;NFSU2_TR(0x53e9e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53e9e7:L53e9e7:{c.instructions+=1;NFSU2_TR(0x53e9e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53e9ed:L53e9ed:{c.instructions+=4;NFSU2_TR(0x53e9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53e9f3:{NFSU2_TR(0x53e9f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53e9f6:{NFSU2_TR(0x53e9f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e9f8:{NFSU2_TR(0x53e9f8);
if(r1(R+518)){{goto L53ea40;}}
}
B53e9fa:L53e9fa:{c.instructions+=2;NFSU2_TR(0x53e9fa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53e9fc:{NFSU2_TR(0x53e9fc);
if(r1(R+518)){{goto L53ea13;}}
}
B53e9fe:L53e9fe:{c.instructions+=4;NFSU2_TR(0x53e9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53ea01:{NFSU2_TR(0x53ea01);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ea03:{NFSU2_TR(0x53ea03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea06:{NFSU2_TR(0x53ea06);
if(r1(R+518)){{goto L53ea0b;}}
}
B53ea08:L53ea08:{c.instructions+=1;NFSU2_TR(0x53ea08);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea0b:L53ea0b:{c.instructions+=3;NFSU2_TR(0x53ea0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea0e:{NFSU2_TR(0x53ea0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea11:{NFSU2_TR(0x53ea11);
{goto L53ea2c;}
}
B53ea13:L53ea13:{c.instructions+=4;NFSU2_TR(0x53ea13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53ea19:{NFSU2_TR(0x53ea19);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ea1b:{NFSU2_TR(0x53ea1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea1e:{NFSU2_TR(0x53ea1e);
if(r1(R+518)){{goto L53ea23;}}
}
B53ea20:L53ea20:{c.instructions+=1;NFSU2_TR(0x53ea20);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea23:L53ea23:{c.instructions+=2;NFSU2_TR(0x53ea23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea26:{NFSU2_TR(0x53ea26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea2c:L53ea2c:{c.instructions+=2;NFSU2_TR(0x53ea2c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53ea32:{NFSU2_TR(0x53ea32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53ea3a;}}
}
B53ea34:L53ea34:{c.instructions+=1;NFSU2_TR(0x53ea34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea3a:L53ea3a:{c.instructions+=1;NFSU2_TR(0x53ea3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53ea40:L53ea40:{c.instructions+=4;NFSU2_TR(0x53ea40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ea46:{NFSU2_TR(0x53ea46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53ea49:{NFSU2_TR(0x53ea49);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ea4b:{NFSU2_TR(0x53ea4b);
if(r1(R+518)){{goto L53ea93;}}
}
B53ea4d:L53ea4d:{c.instructions+=2;NFSU2_TR(0x53ea4d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ea4f:{NFSU2_TR(0x53ea4f);
if(r1(R+518)){{goto L53ea66;}}
}
B53ea51:L53ea51:{c.instructions+=4;NFSU2_TR(0x53ea51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53ea54:{NFSU2_TR(0x53ea54);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ea56:{NFSU2_TR(0x53ea56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea59:{NFSU2_TR(0x53ea59);
if(r1(R+518)){{goto L53ea5e;}}
}
B53ea5b:L53ea5b:{c.instructions+=1;NFSU2_TR(0x53ea5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea5e:L53ea5e:{c.instructions+=3;NFSU2_TR(0x53ea5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea61:{NFSU2_TR(0x53ea61);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea64:{NFSU2_TR(0x53ea64);
{goto L53ea7f;}
}
B53ea66:L53ea66:{c.instructions+=4;NFSU2_TR(0x53ea66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53ea6c:{NFSU2_TR(0x53ea6c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ea6e:{NFSU2_TR(0x53ea6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea71:{NFSU2_TR(0x53ea71);
if(r1(R+518)){{goto L53ea76;}}
}
B53ea73:L53ea73:{c.instructions+=1;NFSU2_TR(0x53ea73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea76:L53ea76:{c.instructions+=2;NFSU2_TR(0x53ea76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea79:{NFSU2_TR(0x53ea79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea7f:L53ea7f:{c.instructions+=2;NFSU2_TR(0x53ea7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53ea85:{NFSU2_TR(0x53ea85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53ea8d;}}
}
B53ea87:L53ea87:{c.instructions+=1;NFSU2_TR(0x53ea87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ea8d:L53ea8d:{c.instructions+=1;NFSU2_TR(0x53ea8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53ea93:L53ea93:{c.instructions+=4;NFSU2_TR(0x53ea93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ea99:{NFSU2_TR(0x53ea99);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53ea9f:{NFSU2_TR(0x53ea9f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53eaa1:{NFSU2_TR(0x53eaa1);
if(r1(R+518)){{goto L53eaf5;}}
}
B53eaa3:L53eaa3:{c.instructions+=2;NFSU2_TR(0x53eaa3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53eaa5:{NFSU2_TR(0x53eaa5);
if(r1(R+518)){{goto L53eac2;}}
}
B53eaa7:L53eaa7:{c.instructions+=4;NFSU2_TR(0x53eaa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53eaaa:{NFSU2_TR(0x53eaaa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53eaac:{NFSU2_TR(0x53eaac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eab2:{NFSU2_TR(0x53eab2);
if(r1(R+518)){{goto L53eab7;}}
}
B53eab4:L53eab4:{c.instructions+=1;NFSU2_TR(0x53eab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eab7:L53eab7:{c.instructions+=3;NFSU2_TR(0x53eab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eabd:{NFSU2_TR(0x53eabd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eac0:{NFSU2_TR(0x53eac0);
{goto L53eae1;}
}
B53eac2:L53eac2:{c.instructions+=4;NFSU2_TR(0x53eac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53eac8:{NFSU2_TR(0x53eac8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53eaca:{NFSU2_TR(0x53eaca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ead0:{NFSU2_TR(0x53ead0);
if(r1(R+518)){{goto L53ead5;}}
}
B53ead2:L53ead2:{c.instructions+=1;NFSU2_TR(0x53ead2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ead5:L53ead5:{c.instructions+=2;NFSU2_TR(0x53ead5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eadb:{NFSU2_TR(0x53eadb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eae1:L53eae1:{c.instructions+=2;NFSU2_TR(0x53eae1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53eae7:{NFSU2_TR(0x53eae7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53eaef;}}
}
B53eae9:L53eae9:{c.instructions+=1;NFSU2_TR(0x53eae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eaef:L53eaef:{c.instructions+=1;NFSU2_TR(0x53eaef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53eaf5:L53eaf5:{c.instructions+=3;NFSU2_TR(0x53eaf5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
}
B53eafa:{NFSU2_TR(0x53eafa);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B53eafb:{NFSU2_TR(0x53eafb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53e990u);}goto L53e990;}}
}
B53eb01:L53eb01:{c.instructions+=9;NFSU2_TR(0x53eb01);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53eb05:{NFSU2_TR(0x53eb05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53eb06:{NFSU2_TR(0x53eb06);
__builtin_memmove((R+0),(R+24),4);
}
B53eb08:{NFSU2_TR(0x53eb08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53eb09:{NFSU2_TR(0x53eb09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53eb0a:{NFSU2_TR(0x53eb0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53eb0b:{NFSU2_TR(0x53eb0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eb12:{NFSU2_TR(0x53eb12);
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
B53eb15:{NFSU2_TR(0x53eb15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53eb20:L53eb20:{c.instructions+=3;NFSU2_TR(0x53eb20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eb21:{NFSU2_TR(0x53eb21);
__builtin_memmove((R+24),(R+4),4);
}
B53eb23:{NFSU2_TR(0x53eb23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53eb28ull));
{goto L53eb40;}
}
B53eb28:L53eb28:{c.instructions+=2;NFSU2_TR(0x53eb28);
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
B53eb2d:{NFSU2_TR(0x53eb2d);
if(r1(R+518)){{goto L53eb38;}}
}
B53eb2f:L53eb2f:{c.instructions+=2;NFSU2_TR(0x53eb2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eb30:{NFSU2_TR(0x53eb30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53eb35ull));
TAIL_STATIC(0x575630u,575);
}
B53eb35:L53eb35:{c.instructions+=1;NFSU2_TR(0x53eb35);
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
B53eb38:L53eb38:{c.instructions+=3;NFSU2_TR(0x53eb38);
__builtin_memmove((R+0),(R+24),4);
}
B53eb3a:{NFSU2_TR(0x53eb3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53eb3b:{NFSU2_TR(0x53eb3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53eb40:L53eb40:{c.instructions+=14;NFSU2_TR(0x53eb40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eb42:{NFSU2_TR(0x53eb42);
u8 U[4];
w4(U+0,u32(0x7778ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eb47:{NFSU2_TR(0x53eb47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53eb4d:{NFSU2_TR(0x53eb4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eb4e:{NFSU2_TR(0x53eb4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eb55:{NFSU2_TR(0x53eb55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eb56:{NFSU2_TR(0x53eb56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eb57:{NFSU2_TR(0x53eb57);
__builtin_memmove((R+24),(R+4),4);
}
B53eb59:{NFSU2_TR(0x53eb59);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eb5d:{NFSU2_TR(0x53eb5d);
u8 U[4];
w4(U+0,u32(0x79bf50ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53eb63:{NFSU2_TR(0x53eb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53eb69:{NFSU2_TR(0x53eb69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53eb6b:{NFSU2_TR(0x53eb6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53eb73:{NFSU2_TR(0x53eb73);
if(r1(R+518)){{goto L53ebd5;}}
}
B53eb75:L53eb75:{c.instructions+=3;NFSU2_TR(0x53eb75);
w4(R+8,u32(0xabadcafeull));
}
B53eb7a:{NFSU2_TR(0x53eb7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eb7b:{NFSU2_TR(0x53eb7b);
{goto L53eb80;}
}
B53eb80:L53eb80:{c.instructions+=3;NFSU2_TR(0x53eb80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x614ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53eb86:{NFSU2_TR(0x53eb86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53eb88:{NFSU2_TR(0x53eb88);
if(r1(R+518)){{goto L53ebca;}}
}
B53eb8a:L53eb8a:{c.instructions+=4;NFSU2_TR(0x53eb8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53eb8d:{NFSU2_TR(0x53eb8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x614ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eb93:{NFSU2_TR(0x53eb93);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53eb99:{NFSU2_TR(0x53eb99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53eba4;}}
}
B53eb9b:L53eb9b:{c.instructions+=2;NFSU2_TR(0x53eb9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53eb9e:{NFSU2_TR(0x53eb9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eba4:L53eba4:{c.instructions+=3;NFSU2_TR(0x53eba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53eba7:{NFSU2_TR(0x53eba7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53eba9:{NFSU2_TR(0x53eba9);
if(r1(R+518)){{goto L53ebb1;}}
}
B53ebab:L53ebab:{c.instructions+=2;NFSU2_TR(0x53ebab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ebae:{NFSU2_TR(0x53ebae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ebb1:L53ebb1:{c.instructions+=3;NFSU2_TR(0x53ebb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ebb4:{NFSU2_TR(0x53ebb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ebb6:{NFSU2_TR(0x53ebb6);
if(r1(R+518)){{goto L53ebbe;}}
}
B53ebb8:L53ebb8:{c.instructions+=2;NFSU2_TR(0x53ebb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ebbb:{NFSU2_TR(0x53ebbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ebbe:L53ebbe:{c.instructions+=3;NFSU2_TR(0x53ebbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ebc1:{NFSU2_TR(0x53ebc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ebc4:{NFSU2_TR(0x53ebc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53ebca:L53ebca:{c.instructions+=3;NFSU2_TR(0x53ebca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ebd0:{NFSU2_TR(0x53ebd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ebd2:{NFSU2_TR(0x53ebd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53eb80u);}goto L53eb80;}}
}
B53ebd4:L53ebd4:{c.instructions+=1;NFSU2_TR(0x53ebd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53ebd5:L53ebd5:{c.instructions+=3;NFSU2_TR(0x53ebd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53ebdb:{NFSU2_TR(0x53ebdb);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B53ebe1:{NFSU2_TR(0x53ebe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ebe6ull));
TAIL_STATIC(0x511670u,511);
}
B53ebe6:L53ebe6:{c.instructions+=7;NFSU2_TR(0x53ebe6);
u8 U[4];
w4(U+0,u32(0x534b10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ebeb:{NFSU2_TR(0x53ebeb);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ebed:{NFSU2_TR(0x53ebed);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ebef:{NFSU2_TR(0x53ebef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B53ebf2:{NFSU2_TR(0x53ebf2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ebf3:{NFSU2_TR(0x53ebf3);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53ebf8:{NFSU2_TR(0x53ebf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ebfdull));
TAIL_STATIC(0x75c401u,75c);
}
B53ebfd:L53ebfd:{c.instructions+=6;NFSU2_TR(0x53ebfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ec01:{NFSU2_TR(0x53ec01);
u8 U[4];
w4(U+0,u32(0x79a9e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53ec07:{NFSU2_TR(0x53ec07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ec08:{NFSU2_TR(0x53ec08);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ec0f:{NFSU2_TR(0x53ec0f);
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
B53ec12:{NFSU2_TR(0x53ec12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53ec20:L53ec20:{c.instructions+=3;NFSU2_TR(0x53ec20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ec21:{NFSU2_TR(0x53ec21);
__builtin_memmove((R+24),(R+4),4);
}
B53ec23:{NFSU2_TR(0x53ec23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ec28ull));
{goto L53ec40;}
}
B53ec28:L53ec28:{c.instructions+=2;NFSU2_TR(0x53ec28);
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
B53ec2d:{NFSU2_TR(0x53ec2d);
if(r1(R+518)){{goto L53ec38;}}
}
B53ec2f:L53ec2f:{c.instructions+=2;NFSU2_TR(0x53ec2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ec30:{NFSU2_TR(0x53ec30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ec35ull));
TAIL_STATIC(0x575630u,575);
}
B53ec35:L53ec35:{c.instructions+=1;NFSU2_TR(0x53ec35);
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
B53ec38:L53ec38:{c.instructions+=3;NFSU2_TR(0x53ec38);
__builtin_memmove((R+0),(R+24),4);
}
B53ec3a:{NFSU2_TR(0x53ec3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ec3b:{NFSU2_TR(0x53ec3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53ec40:L53ec40:{c.instructions+=14;NFSU2_TR(0x53ec40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ec42:{NFSU2_TR(0x53ec42);
u8 U[4];
w4(U+0,u32(0x7778feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ec47:{NFSU2_TR(0x53ec47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ec4d:{NFSU2_TR(0x53ec4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ec4e:{NFSU2_TR(0x53ec4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ec55:{NFSU2_TR(0x53ec55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ec56:{NFSU2_TR(0x53ec56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ec57:{NFSU2_TR(0x53ec57);
__builtin_memmove((R+24),(R+4),4);
}
B53ec59:{NFSU2_TR(0x53ec59);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ec5d:{NFSU2_TR(0x53ec5d);
u8 U[4];
w4(U+0,u32(0x79bf54ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53ec63:{NFSU2_TR(0x53ec63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ec69:{NFSU2_TR(0x53ec69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ec6b:{NFSU2_TR(0x53ec6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ec73:{NFSU2_TR(0x53ec73);
if(r1(R+518)){{goto L53ecd5;}}
}
B53ec75:L53ec75:{c.instructions+=3;NFSU2_TR(0x53ec75);
w4(R+8,u32(0xabadcafeull));
}
B53ec7a:{NFSU2_TR(0x53ec7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ec7b:{NFSU2_TR(0x53ec7b);
{goto L53ec80;}
}
B53ec80:L53ec80:{c.instructions+=3;NFSU2_TR(0x53ec80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ec86:{NFSU2_TR(0x53ec86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ec88:{NFSU2_TR(0x53ec88);
if(r1(R+518)){{goto L53ecca;}}
}
B53ec8a:L53ec8a:{c.instructions+=4;NFSU2_TR(0x53ec8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ec8d:{NFSU2_TR(0x53ec8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ec93:{NFSU2_TR(0x53ec93);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53ec99:{NFSU2_TR(0x53ec99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53eca4;}}
}
B53ec9b:L53ec9b:{c.instructions+=2;NFSU2_TR(0x53ec9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ec9e:{NFSU2_TR(0x53ec9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eca4:L53eca4:{c.instructions+=3;NFSU2_TR(0x53eca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53eca7:{NFSU2_TR(0x53eca7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53eca9:{NFSU2_TR(0x53eca9);
if(r1(R+518)){{goto L53ecb1;}}
}
B53ecab:L53ecab:{c.instructions+=2;NFSU2_TR(0x53ecab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ecae:{NFSU2_TR(0x53ecae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ecb1:L53ecb1:{c.instructions+=3;NFSU2_TR(0x53ecb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ecb4:{NFSU2_TR(0x53ecb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ecb6:{NFSU2_TR(0x53ecb6);
if(r1(R+518)){{goto L53ecbe;}}
}
B53ecb8:L53ecb8:{c.instructions+=2;NFSU2_TR(0x53ecb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ecbb:{NFSU2_TR(0x53ecbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ecbe:L53ecbe:{c.instructions+=3;NFSU2_TR(0x53ecbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ecc1:{NFSU2_TR(0x53ecc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ecc4:{NFSU2_TR(0x53ecc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53ecca:L53ecca:{c.instructions+=3;NFSU2_TR(0x53ecca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ecd0:{NFSU2_TR(0x53ecd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ecd2:{NFSU2_TR(0x53ecd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53ec80u);}goto L53ec80;}}
}
B53ecd4:L53ecd4:{c.instructions+=1;NFSU2_TR(0x53ecd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53ecd5:L53ecd5:{c.instructions+=3;NFSU2_TR(0x53ecd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53ecdb:{NFSU2_TR(0x53ecdb);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B53ece1:{NFSU2_TR(0x53ece1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ece6ull));
TAIL_STATIC(0x511670u,511);
}
B53ece6:L53ece6:{c.instructions+=7;NFSU2_TR(0x53ece6);
u8 U[4];
w4(U+0,u32(0x535170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eceb:{NFSU2_TR(0x53eceb);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eced:{NFSU2_TR(0x53eced);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ecef:{NFSU2_TR(0x53ecef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B53ecf2:{NFSU2_TR(0x53ecf2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ecf3:{NFSU2_TR(0x53ecf3);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53ecf8:{NFSU2_TR(0x53ecf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ecfdull));
TAIL_STATIC(0x75c401u,75c);
}
B53ecfd:L53ecfd:{c.instructions+=6;NFSU2_TR(0x53ecfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ed01:{NFSU2_TR(0x53ed01);
u8 U[4];
w4(U+0,u32(0x79a9e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53ed07:{NFSU2_TR(0x53ed07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ed08:{NFSU2_TR(0x53ed08);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ed0f:{NFSU2_TR(0x53ed0f);
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
B53ed12:{NFSU2_TR(0x53ed12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53ed20:L53ed20:{c.instructions+=17;NFSU2_TR(0x53ed20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ed22:{NFSU2_TR(0x53ed22);
u8 U[4];
w4(U+0,u32(0x777929ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ed27:{NFSU2_TR(0x53ed27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ed2d:{NFSU2_TR(0x53ed2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ed2e:{NFSU2_TR(0x53ed2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ed35:{NFSU2_TR(0x53ed35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ed36:{NFSU2_TR(0x53ed36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ed37:{NFSU2_TR(0x53ed37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ed38:{NFSU2_TR(0x53ed38);
u8 U[4];
w4(U+0,u32(0x525ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ed3d:{NFSU2_TR(0x53ed3d);
u8 U[4];
w4(U+0,u32(0x5344a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ed42:{NFSU2_TR(0x53ed42);
__builtin_memmove((R+24),(R+4),4);
}
B53ed44:{NFSU2_TR(0x53ed44);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ed46:{NFSU2_TR(0x53ed46);
u8 U[4];
w4(U+0,u32(0xab4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ed4b:{NFSU2_TR(0x53ed4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53ed4e:{NFSU2_TR(0x53ed4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ed4f:{NFSU2_TR(0x53ed4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ed53:{NFSU2_TR(0x53ed53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ed58ull));
TAIL_STATIC(0x75c461u,75c);
}
B53ed58:L53ed58:{c.instructions+=9;NFSU2_TR(0x53ed58);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x156b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53ed5e:{NFSU2_TR(0x53ed5e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53ed60:{NFSU2_TR(0x53ed60);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ed64:{NFSU2_TR(0x53ed64);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B53ed68:{NFSU2_TR(0x53ed68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ed6b:{NFSU2_TR(0x53ed6b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3aull))));
w2(U+4,u16(0x3ull));
s2(u32(r4(U+0)),r2(U+4));
}
B53ed71:{NFSU2_TR(0x53ed71);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ed74:{NFSU2_TR(0x53ed74);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x41ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ed77:{NFSU2_TR(0x53ed77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ed7cull));
TAIL_STATIC(0x5030e0u,503);
}
B53ed7c:L53ed7c:{c.instructions+=8;NFSU2_TR(0x53ed7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1599cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53ed82:{NFSU2_TR(0x53ed82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15780ull))));
w4(U+4,u32(0xae83b9dbull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ed8c:{NFSU2_TR(0x53ed8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15784ull))));
w4(U+4,u32(0x6a97b51full));
s4(u32(r4(U+0)),r4(U+4));
}
B53ed96:{NFSU2_TR(0x53ed96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15788ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ed9c:{NFSU2_TR(0x53ed9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1578cull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53eda6:{NFSU2_TR(0x53eda6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15790ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53edac:{NFSU2_TR(0x53edac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15794ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53edb2:{NFSU2_TR(0x53edb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53edb7ull));
TAIL_STATIC(0x5117c0u,511);
}
B53edb7:L53edb7:{c.instructions+=15;NFSU2_TR(0x53edb7);
w4(R+0,u32(0x1ull));
}
B53edbc:{NFSU2_TR(0x53edbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1677cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53edc2:{NFSU2_TR(0x53edc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16690ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53edc8:{NFSU2_TR(0x53edc8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166a1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53edce:{NFSU2_TR(0x53edce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166c3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53edd4:{NFSU2_TR(0x53edd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166b2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53edda:{NFSU2_TR(0x53edda);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166f6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ede0:{NFSU2_TR(0x53ede0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1675cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ede6:{NFSU2_TR(0x53ede6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1675dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53edec:{NFSU2_TR(0x53edec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1676cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53edf2:{NFSU2_TR(0x53edf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16760ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53edf8:{NFSU2_TR(0x53edf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16764ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53edfe:{NFSU2_TR(0x53edfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16768ull))));
w4(U+4,u32(0x7d3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ee08:{NFSU2_TR(0x53ee08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16770ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ee0e:{NFSU2_TR(0x53ee0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ee13ull));
TAIL_STATIC(0x531d20u,531);
}
B53ee13:L53ee13:{c.instructions+=8;NFSU2_TR(0x53ee13);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ee17:{NFSU2_TR(0x53ee17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ee1d:{NFSU2_TR(0x53ee1d);
__builtin_memmove((R+0),(R+24),4);
}
B53ee1f:{NFSU2_TR(0x53ee1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ee20:{NFSU2_TR(0x53ee20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53ee21:{NFSU2_TR(0x53ee21);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ee28:{NFSU2_TR(0x53ee28);
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
B53ee2b:{NFSU2_TR(0x53ee2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53ee30:L53ee30:{c.instructions+=3;NFSU2_TR(0x53ee30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ee31:{NFSU2_TR(0x53ee31);
__builtin_memmove((R+24),(R+4),4);
}
B53ee33:{NFSU2_TR(0x53ee33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ee38ull));
TAIL_STATIC(0x535170u,535);
}
B53ee38:L53ee38:{c.instructions+=2;NFSU2_TR(0x53ee38);
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
B53ee3d:{NFSU2_TR(0x53ee3d);
if(r1(R+518)){{goto L53ee52;}}
}
B53ee3f:L53ee3f:{c.instructions+=4;NFSU2_TR(0x53ee3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53ee41:{NFSU2_TR(0x53ee41);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ee43:{NFSU2_TR(0x53ee43);
__builtin_memmove((R+4),(R+24),4);
}
B53ee45:{NFSU2_TR(0x53ee45);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ee47ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B53ee47:L53ee47:{c.instructions+=3;NFSU2_TR(0x53ee47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ee48:{NFSU2_TR(0x53ee48);
w4(R+4,u32(0x839c30ull));
}
B53ee4d:{NFSU2_TR(0x53ee4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ee52ull));
TAIL_STATIC(0x525b90u,525);
}
B53ee52:L53ee52:{c.instructions+=3;NFSU2_TR(0x53ee52);
__builtin_memmove((R+0),(R+24),4);
}
B53ee54:{NFSU2_TR(0x53ee54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ee55:{NFSU2_TR(0x53ee55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53ee60:L53ee60:{c.instructions+=3;NFSU2_TR(0x53ee60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ee61:{NFSU2_TR(0x53ee61);
__builtin_memmove((R+24),(R+4),4);
}
B53ee63:{NFSU2_TR(0x53ee63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ee68ull));
TAIL_STATIC(0x534b10u,534);
}
B53ee68:L53ee68:{c.instructions+=2;NFSU2_TR(0x53ee68);
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
B53ee6d:{NFSU2_TR(0x53ee6d);
if(r1(R+518)){{goto L53ee82;}}
}
B53ee6f:L53ee6f:{c.instructions+=4;NFSU2_TR(0x53ee6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53ee71:{NFSU2_TR(0x53ee71);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ee73:{NFSU2_TR(0x53ee73);
__builtin_memmove((R+4),(R+24),4);
}
B53ee75:{NFSU2_TR(0x53ee75);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ee77ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B53ee77:L53ee77:{c.instructions+=3;NFSU2_TR(0x53ee77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ee78:{NFSU2_TR(0x53ee78);
w4(R+4,u32(0x8637a0ull));
}
B53ee7d:{NFSU2_TR(0x53ee7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ee82ull));
TAIL_STATIC(0x525b30u,525);
}
B53ee82:L53ee82:{c.instructions+=3;NFSU2_TR(0x53ee82);
__builtin_memmove((R+0),(R+24),4);
}
B53ee84:{NFSU2_TR(0x53ee84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ee85:{NFSU2_TR(0x53ee85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53ee90:L53ee90:{c.instructions+=11;NFSU2_TR(0x53ee90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ee91:{NFSU2_TR(0x53ee91);
__builtin_memmove((R+20),(R+16),4);
}
B53ee93:{NFSU2_TR(0x53ee93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B53ee96:{NFSU2_TR(0x53ee96);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ee98:{NFSU2_TR(0x53ee98);
u8 U[4];
w4(U+0,u32(0x777596ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ee9d:{NFSU2_TR(0x53ee9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53eea3:{NFSU2_TR(0x53eea3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eea4:{NFSU2_TR(0x53eea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eeab:{NFSU2_TR(0x53eeab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eeac:{NFSU2_TR(0x53eeac);
w4(R+0,u32(0x1264ull));
}
B53eeb1:{NFSU2_TR(0x53eeb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53eeb6ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B53eeb6:L53eeb6:{c.instructions+=6;NFSU2_TR(0x53eeb6);
__builtin_memmove((R+0),gp(0x89e7e4),1);
}
B53eebb:{NFSU2_TR(0x53eebb);
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
B53eebd:{NFSU2_TR(0x53eebd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eebe:{NFSU2_TR(0x53eebe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eebf:{NFSU2_TR(0x53eebf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eec0:{NFSU2_TR(0x53eec0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53efdf;}}
}
B53eec6:L53eec6:{c.instructions+=3;NFSU2_TR(0x53eec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53eec9:{NFSU2_TR(0x53eec9);
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
B53eecb:{NFSU2_TR(0x53eecb);
if(r1(R+518)){{goto L53efdf;}}
}
B53eed1:L53eed1:{c.instructions+=4;NFSU2_TR(0x53eed1);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53eed5:{NFSU2_TR(0x53eed5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eed7:{NFSU2_TR(0x53eed7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eed8:{NFSU2_TR(0x53eed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53eeddull));
TAIL_STATIC(0x4fe970u,4fe);
}
B53eedd:L53eedd:{c.instructions+=5;NFSU2_TR(0x53eedd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53eee0:{NFSU2_TR(0x53eee0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53eee2:{NFSU2_TR(0x53eee2);
w4(R+4,u32(0x89e7a0ull));
}
B53eee7:{NFSU2_TR(0x53eee7);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B53eee9:{NFSU2_TR(0x53eee9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53eeeeull));
TAIL_STATIC(0x5ed900u,5ed);
}
B53eeee:L53eeee:{c.instructions+=4;NFSU2_TR(0x53eeee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B53eef1:{NFSU2_TR(0x53eef1);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53eef5:{NFSU2_TR(0x53eef5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53eef9:{NFSU2_TR(0x53eef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53eefeull));
TAIL_STATIC(0x40c910u,40c);
}
B53eefe:L53eefe:{c.instructions+=3;NFSU2_TR(0x53eefe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ef00:{NFSU2_TR(0x53ef00);
u8 U[8];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ef0b:{NFSU2_TR(0x53ef0b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53efbe;}}
}
B53ef11:L53ef11:{c.instructions+=4;NFSU2_TR(0x53ef11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ef14:{NFSU2_TR(0x53ef14);
w4(R+24,u32(0x64ull));
}
B53ef19:{NFSU2_TR(0x53ef19);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B53ef1d:{NFSU2_TR(0x53ef1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ef21:L53ef21:{c.instructions+=11;NFSU2_TR(0x53ef21);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53ef25:{NFSU2_TR(0x53ef25);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef2a:{NFSU2_TR(0x53ef2a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef2c:{NFSU2_TR(0x53ef2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef2d:{NFSU2_TR(0x53ef2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef2f:{NFSU2_TR(0x53ef2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff9eull))));
__builtin_memmove((R+0),(U+0),4);
}
B53ef32:{NFSU2_TR(0x53ef32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef33:{NFSU2_TR(0x53ef33);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53ef37:{NFSU2_TR(0x53ef37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef38:{NFSU2_TR(0x53ef38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef39:{NFSU2_TR(0x53ef39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ef3eull));
TAIL_STATIC(0x4feaf0u,4fe);
}
B53ef3e:L53ef3e:{c.instructions+=3;NFSU2_TR(0x53ef3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B53ef41:{NFSU2_TR(0x53ef41);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53ef43:{NFSU2_TR(0x53ef43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53ef51;}}
}
B53ef45:L53ef45:{c.instructions+=4;NFSU2_TR(0x53ef45);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ef49:{NFSU2_TR(0x53ef49);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53ef4d:{NFSU2_TR(0x53ef4d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B53ef4f:{NFSU2_TR(0x53ef4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53ef53;}}
}
B53ef51:L53ef51:{c.instructions+=1;NFSU2_TR(0x53ef51);
w1(R+12,u8(0x1ull));
}
B53ef53:L53ef53:{c.instructions+=4;NFSU2_TR(0x53ef53);
__builtin_memmove((R+4),gp(0x89e7f4),4);
}
B53ef59:{NFSU2_TR(0x53ef59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef5a:{NFSU2_TR(0x53ef5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef5b:{NFSU2_TR(0x53ef5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ef60ull));
TAIL_STATIC(0x4fed00u,4fe);
}
B53ef60:L53ef60:{c.instructions+=11;NFSU2_TR(0x53ef60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53ef62:{NFSU2_TR(0x53ef62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53ef65:{NFSU2_TR(0x53ef65);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef67:{NFSU2_TR(0x53ef67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef68:{NFSU2_TR(0x53ef68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef69:{NFSU2_TR(0x53ef69);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53ef6d:{NFSU2_TR(0x53ef6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef6e:{NFSU2_TR(0x53ef6e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef70:{NFSU2_TR(0x53ef70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef71:{NFSU2_TR(0x53ef71);
u8 U[4];
w4(U+0,u32(u32(u32(0x948ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53ef78:{NFSU2_TR(0x53ef78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ef7dull));
TAIL_STATIC(0x6373e0u,637);
}
B53ef7d:L53ef7d:{c.instructions+=5;NFSU2_TR(0x53ef7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x930ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53ef84:{NFSU2_TR(0x53ef84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ef85:{NFSU2_TR(0x53ef85);
w4(R+4,u32(0x89e7a0ull));
}
B53ef8a:{NFSU2_TR(0x53ef8a);
u8 U[5];
w4(U+0,u32(u32(u32(0x1280ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53ef92:{NFSU2_TR(0x53ef92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ef97ull));
TAIL_STATIC(0x601600u,601);
}
B53ef97:L53ef97:{c.instructions+=3;NFSU2_TR(0x53ef97);
u8 U[4];
w4(U+0,u32(u32(u32(0xcc4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53ef9e:{NFSU2_TR(0x53ef9e);
u8 U[5];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53efa6:{NFSU2_TR(0x53efa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53efabull));
TAIL_STATIC(0x4022c0u,402);
}
B53efab:L53efab:{c.instructions+=6;NFSU2_TR(0x53efab);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53efaf:{NFSU2_TR(0x53efaf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B53efb0:{NFSU2_TR(0x53efb0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B53efb3:{NFSU2_TR(0x53efb3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B53efb4:{NFSU2_TR(0x53efb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53efb8:{NFSU2_TR(0x53efb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53ef21u);}goto L53ef21;}}
}
B53efbe:L53efbe:{c.instructions+=2;NFSU2_TR(0x53efbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53efc0:{NFSU2_TR(0x53efc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53efc5ull));
TAIL_STATIC(0x532010u,532);
}
B53efc5:L53efc5:{c.instructions+=4;NFSU2_TR(0x53efc5);
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
B53efc8:{NFSU2_TR(0x53efc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x3c4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53efcf:{NFSU2_TR(0x53efcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53efda:{NFSU2_TR(0x53efda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53efdfull));
TAIL_STATIC(0x4022c0u,402);
}
B53efdf:L53efdf:{c.instructions+=8;NFSU2_TR(0x53efdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1274ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53efe6:{NFSU2_TR(0x53efe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53efe7:{NFSU2_TR(0x53efe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53efe8:{NFSU2_TR(0x53efe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53efef:{NFSU2_TR(0x53efef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53eff0:{NFSU2_TR(0x53eff0);
__builtin_memmove((R+16),(R+20),4);
}
B53eff2:{NFSU2_TR(0x53eff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53eff3:{NFSU2_TR(0x53eff3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x53e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
