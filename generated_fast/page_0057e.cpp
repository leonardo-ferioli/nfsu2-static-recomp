#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_452(u8* __restrict R,Cpu& c);
u32 body_485(u8* __restrict R,Cpu& c);
u32 body_486(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48c(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_573(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57f(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x57e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x57e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_57e(u8* __restrict R,Cpu& c);
u32 page_57e(Cpu& c){return body_57e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_57e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x57e005:goto L57e005;
case 0x57e00a:c.instructions+=5;goto B57e00a;
case 0x57e010:c.instructions+=4;goto B57e010;
case 0x57e012:c.instructions+=3;goto B57e012;
case 0x57e014:c.instructions+=2;goto B57e014;
case 0x57e015:c.instructions+=1;goto B57e015;
case 0x57e01a:goto L57e01a;
case 0x57e01f:c.instructions+=2;goto B57e01f;
case 0x57e021:c.instructions+=1;goto B57e021;
case 0x57e027:goto L57e027;
case 0x57e02d:c.instructions+=5;goto B57e02d;
case 0x57e02f:c.instructions+=4;goto B57e02f;
case 0x57e031:c.instructions+=3;goto B57e031;
case 0x57e032:c.instructions+=2;goto B57e032;
case 0x57e038:c.instructions+=1;goto B57e038;
case 0x57e03d:goto L57e03d;
case 0x57e042:c.instructions+=2;goto B57e042;
case 0x57e044:c.instructions+=1;goto B57e044;
case 0x57e04a:goto L57e04a;
case 0x57e050:c.instructions+=5;goto B57e050;
case 0x57e056:c.instructions+=4;goto B57e056;
case 0x57e058:c.instructions+=3;goto B57e058;
case 0x57e05a:c.instructions+=2;goto B57e05a;
case 0x57e05b:c.instructions+=1;goto B57e05b;
case 0x57e060:goto L57e060;
case 0x57e065:c.instructions+=2;goto B57e065;
case 0x57e067:c.instructions+=1;goto B57e067;
case 0x57e06d:goto L57e06d;
case 0x57e072:c.instructions+=5;goto B57e072;
case 0x57e078:c.instructions+=4;goto B57e078;
case 0x57e07a:c.instructions+=3;goto B57e07a;
case 0x57e07c:c.instructions+=2;goto B57e07c;
case 0x57e07d:c.instructions+=1;goto B57e07d;
case 0x57e082:goto L57e082;
case 0x57e087:c.instructions+=2;goto B57e087;
case 0x57e089:c.instructions+=1;goto B57e089;
case 0x57e08b:goto L57e08b;
case 0x57e091:c.instructions+=5;goto B57e091;
case 0x57e093:c.instructions+=4;goto B57e093;
case 0x57e095:c.instructions+=3;goto B57e095;
case 0x57e096:c.instructions+=2;goto B57e096;
case 0x57e09c:c.instructions+=1;goto B57e09c;
case 0x57e0a1:goto L57e0a1;
case 0x57e0a6:c.instructions+=2;goto B57e0a6;
case 0x57e0a8:c.instructions+=1;goto B57e0a8;
case 0x57e0aa:goto L57e0aa;
case 0x57e0b0:c.instructions+=5;goto B57e0b0;
case 0x57e0b6:c.instructions+=4;goto B57e0b6;
case 0x57e0b8:c.instructions+=3;goto B57e0b8;
case 0x57e0ba:c.instructions+=2;goto B57e0ba;
case 0x57e0bb:c.instructions+=1;goto B57e0bb;
case 0x57e0c0:goto L57e0c0;
case 0x57e0c5:c.instructions+=2;goto B57e0c5;
case 0x57e0c7:c.instructions+=1;goto B57e0c7;
case 0x57e0c9:goto L57e0c9;
case 0x57e0ce:c.instructions+=5;goto B57e0ce;
case 0x57e0d4:c.instructions+=4;goto B57e0d4;
case 0x57e0d6:c.instructions+=3;goto B57e0d6;
case 0x57e0d8:c.instructions+=2;goto B57e0d8;
case 0x57e0d9:c.instructions+=1;goto B57e0d9;
case 0x57e0de:goto L57e0de;
case 0x57e0e3:c.instructions+=2;goto B57e0e3;
case 0x57e0e5:c.instructions+=1;goto B57e0e5;
case 0x57e0e7:goto L57e0e7;
case 0x57e0ed:c.instructions+=4;goto B57e0ed;
case 0x57e0ef:c.instructions+=3;goto B57e0ef;
case 0x57e0f1:c.instructions+=2;goto B57e0f1;
case 0x57e0f6:c.instructions+=1;goto B57e0f6;
case 0x57e0fb:goto L57e0fb;
case 0x57e100:goto L57e100;
case 0x57e104:c.instructions+=4;goto B57e104;
case 0x57e106:c.instructions+=3;goto B57e106;
case 0x57e107:c.instructions+=2;goto B57e107;
case 0x57e109:c.instructions+=1;goto B57e109;
case 0x57e10f:goto L57e10f;
case 0x57e112:c.instructions+=2;goto B57e112;
case 0x57e114:c.instructions+=1;goto B57e114;
case 0x57e116:goto L57e116;
case 0x57e119:c.instructions+=2;goto B57e119;
case 0x57e11b:c.instructions+=1;goto B57e11b;
case 0x57e11d:goto L57e11d;
case 0x57e123:c.instructions+=2;goto B57e123;
case 0x57e128:c.instructions+=1;goto B57e128;
case 0x57e12d:goto L57e12d;
case 0x57e133:c.instructions+=2;goto B57e133;
case 0x57e138:c.instructions+=1;goto B57e138;
case 0x57e13d:goto L57e13d;
case 0x57e143:c.instructions+=2;goto B57e143;
case 0x57e148:c.instructions+=1;goto B57e148;
case 0x57e14d:goto L57e14d;
case 0x57e150:goto L57e150;
case 0x57e153:c.instructions+=2;goto B57e153;
case 0x57e155:c.instructions+=1;goto B57e155;
case 0x57e157:goto L57e157;
case 0x57e15a:c.instructions+=2;goto B57e15a;
case 0x57e15c:c.instructions+=1;goto B57e15c;
case 0x57e15e:goto L57e15e;
case 0x57e161:c.instructions+=4;goto B57e161;
case 0x57e167:c.instructions+=3;goto B57e167;
case 0x57e16d:c.instructions+=2;goto B57e16d;
case 0x57e16f:c.instructions+=1;goto B57e16f;
case 0x57e171:goto L57e171;
case 0x57e177:c.instructions+=6;goto B57e177;
case 0x57e178:c.instructions+=5;goto B57e178;
case 0x57e17b:c.instructions+=4;goto B57e17b;
case 0x57e17c:c.instructions+=3;goto B57e17c;
case 0x57e17f:c.instructions+=2;goto B57e17f;
case 0x57e180:c.instructions+=1;goto B57e180;
case 0x57e185:goto L57e185;
case 0x57e18b:c.instructions+=2;goto B57e18b;
case 0x57e190:c.instructions+=1;goto B57e190;
case 0x57e195:goto L57e195;
case 0x57e197:c.instructions+=2;goto B57e197;
case 0x57e19a:c.instructions+=1;goto B57e19a;
case 0x57e19c:goto L57e19c;
case 0x57e19f:c.instructions+=1;goto B57e19f;
case 0x57e1a2:goto L57e1a2;
case 0x57e1a8:c.instructions+=2;goto B57e1a8;
case 0x57e1ad:c.instructions+=1;goto B57e1ad;
case 0x57e1b2:goto L57e1b2;
case 0x57e1b3:c.instructions+=1;goto B57e1b3;
case 0x57e1b4:goto L57e1b4;
case 0x57e1b7:c.instructions+=2;goto B57e1b7;
case 0x57e1b9:c.instructions+=1;goto B57e1b9;
case 0x57e1bb:goto L57e1bb;
case 0x57e1c1:c.instructions+=3;goto B57e1c1;
case 0x57e1c7:c.instructions+=2;goto B57e1c7;
case 0x57e1ca:c.instructions+=1;goto B57e1ca;
case 0x57e1cd:goto L57e1cd;
case 0x57e1d0:c.instructions+=2;goto B57e1d0;
case 0x57e1d2:c.instructions+=1;goto B57e1d2;
case 0x57e1d4:goto L57e1d4;
case 0x57e1d6:c.instructions+=1;goto B57e1d6;
case 0x57e1db:goto L57e1db;
case 0x57e1e2:c.instructions+=1;goto B57e1e2;
case 0x57e1e7:goto L57e1e7;
case 0x57e1ea:c.instructions+=2;goto B57e1ea;
case 0x57e1ec:c.instructions+=1;goto B57e1ec;
case 0x57e1ee:goto L57e1ee;
case 0x57e1f0:c.instructions+=1;goto B57e1f0;
case 0x57e1f5:goto L57e1f5;
case 0x57e1fc:c.instructions+=1;goto B57e1fc;
case 0x57e201:goto L57e201;
case 0x57e202:c.instructions+=1;goto B57e202;
case 0x57e210:goto L57e210;
case 0x57e214:c.instructions+=8;goto B57e214;
case 0x57e215:c.instructions+=7;goto B57e215;
case 0x57e216:c.instructions+=6;goto B57e216;
case 0x57e218:c.instructions+=5;goto B57e218;
case 0x57e21b:c.instructions+=4;goto B57e21b;
case 0x57e21d:c.instructions+=3;goto B57e21d;
case 0x57e223:c.instructions+=2;goto B57e223;
case 0x57e225:c.instructions+=1;goto B57e225;
case 0x57e227:goto L57e227;
case 0x57e22c:c.instructions+=1;goto B57e22c;
case 0x57e22e:goto L57e22e;
case 0x57e230:c.instructions+=1;goto B57e230;
case 0x57e232:goto L57e232;
case 0x57e233:c.instructions+=5;goto B57e233;
case 0x57e235:c.instructions+=4;goto B57e235;
case 0x57e238:c.instructions+=3;goto B57e238;
case 0x57e23a:c.instructions+=2;goto B57e23a;
case 0x57e23b:c.instructions+=1;goto B57e23b;
case 0x57e240:goto L57e240;
case 0x57e242:c.instructions+=4;goto B57e242;
case 0x57e244:c.instructions+=3;goto B57e244;
case 0x57e247:c.instructions+=2;goto B57e247;
case 0x57e249:c.instructions+=1;goto B57e249;
case 0x57e24b:goto L57e24b;
case 0x57e24e:goto L57e24e;
case 0x57e24f:c.instructions+=4;goto B57e24f;
case 0x57e255:c.instructions+=3;goto B57e255;
case 0x57e256:c.instructions+=2;goto B57e256;
case 0x57e257:c.instructions+=1;goto B57e257;
case 0x57e25c:goto L57e25c;
case 0x57e25f:c.instructions+=2;goto B57e25f;
case 0x57e261:c.instructions+=1;goto B57e261;
case 0x57e263:goto L57e263;
case 0x57e266:c.instructions+=2;goto B57e266;
case 0x57e268:c.instructions+=1;goto B57e268;
case 0x57e26a:goto L57e26a;
case 0x57e271:c.instructions+=8;goto B57e271;
case 0x57e273:c.instructions+=7;goto B57e273;
case 0x57e276:c.instructions+=6;goto B57e276;
case 0x57e278:c.instructions+=5;goto B57e278;
case 0x57e279:c.instructions+=4;goto B57e279;
case 0x57e27c:c.instructions+=3;goto B57e27c;
case 0x57e27d:c.instructions+=2;goto B57e27d;
case 0x57e27e:c.instructions+=1;goto B57e27e;
case 0x57e281:goto L57e281;
case 0x57e283:c.instructions+=2;goto B57e283;
case 0x57e285:c.instructions+=1;goto B57e285;
case 0x57e28a:goto L57e28a;
case 0x57e28c:c.instructions+=4;goto B57e28c;
case 0x57e28f:c.instructions+=3;goto B57e28f;
case 0x57e291:c.instructions+=2;goto B57e291;
case 0x57e294:c.instructions+=1;goto B57e294;
case 0x57e295:goto L57e295;
case 0x57e296:c.instructions+=2;goto B57e296;
case 0x57e297:c.instructions+=1;goto B57e297;
case 0x57e2a0:goto L57e2a0;
case 0x57e2a3:c.instructions+=6;goto B57e2a3;
case 0x57e2a4:c.instructions+=5;goto B57e2a4;
case 0x57e2a5:c.instructions+=4;goto B57e2a5;
case 0x57e2a6:c.instructions+=3;goto B57e2a6;
case 0x57e2a7:c.instructions+=2;goto B57e2a7;
case 0x57e2a9:c.instructions+=1;goto B57e2a9;
case 0x57e2b0:goto L57e2b0;
case 0x57e2b3:c.instructions+=5;goto B57e2b3;
case 0x57e2b5:c.instructions+=4;goto B57e2b5;
case 0x57e2b7:c.instructions+=3;goto B57e2b7;
case 0x57e2b9:c.instructions+=2;goto B57e2b9;
case 0x57e2bf:c.instructions+=1;goto B57e2bf;
case 0x57e2c1:goto L57e2c1;
case 0x57e2c4:c.instructions+=1;goto B57e2c4;
case 0x57e2c6:goto L57e2c6;
case 0x57e2c7:c.instructions+=2;goto B57e2c7;
case 0x57e2c9:c.instructions+=1;goto B57e2c9;
case 0x57e2ce:goto L57e2ce;
case 0x57e2d0:c.instructions+=14;goto B57e2d0;
case 0x57e2d3:c.instructions+=13;goto B57e2d3;
case 0x57e2d5:c.instructions+=12;goto B57e2d5;
case 0x57e2d7:c.instructions+=11;goto B57e2d7;
case 0x57e2df:c.instructions+=10;goto B57e2df;
case 0x57e2e6:c.instructions+=9;goto B57e2e6;
case 0x57e2e8:c.instructions+=8;goto B57e2e8;
case 0x57e2eb:c.instructions+=7;goto B57e2eb;
case 0x57e2ee:c.instructions+=6;goto B57e2ee;
case 0x57e2f0:c.instructions+=5;goto B57e2f0;
case 0x57e2f1:c.instructions+=4;goto B57e2f1;
case 0x57e2f3:c.instructions+=3;goto B57e2f3;
case 0x57e2f5:c.instructions+=2;goto B57e2f5;
case 0x57e2f9:c.instructions+=1;goto B57e2f9;
case 0x57e2fb:goto L57e2fb;
case 0x57e2ff:c.instructions+=1;goto B57e2ff;
case 0x57e301:goto L57e301;
case 0x57e304:c.instructions+=5;goto B57e304;
case 0x57e307:c.instructions+=4;goto B57e307;
case 0x57e309:c.instructions+=3;goto B57e309;
case 0x57e30a:c.instructions+=2;goto B57e30a;
case 0x57e30b:c.instructions+=1;goto B57e30b;
case 0x57e30d:goto L57e30d;
case 0x57e311:goto L57e311;
case 0x57e315:c.instructions+=5;goto B57e315;
case 0x57e318:c.instructions+=4;goto B57e318;
case 0x57e31a:c.instructions+=3;goto B57e31a;
case 0x57e321:c.instructions+=2;goto B57e321;
case 0x57e323:c.instructions+=1;goto B57e323;
case 0x57e325:goto L57e325;
case 0x57e328:c.instructions+=1;goto B57e328;
case 0x57e32a:goto L57e32a;
case 0x57e330:goto L57e330;
case 0x57e333:c.instructions+=5;goto B57e333;
case 0x57e335:c.instructions+=4;goto B57e335;
case 0x57e337:c.instructions+=3;goto B57e337;
case 0x57e339:c.instructions+=2;goto B57e339;
case 0x57e33f:c.instructions+=1;goto B57e33f;
case 0x57e341:goto L57e341;
case 0x57e344:c.instructions+=1;goto B57e344;
case 0x57e346:goto L57e346;
case 0x57e347:c.instructions+=2;goto B57e347;
case 0x57e349:c.instructions+=1;goto B57e349;
case 0x57e34e:goto L57e34e;
case 0x57e351:c.instructions+=12;goto B57e351;
case 0x57e353:c.instructions+=11;goto B57e353;
case 0x57e355:c.instructions+=10;goto B57e355;
case 0x57e35c:c.instructions+=9;goto B57e35c;
case 0x57e35f:c.instructions+=8;goto B57e35f;
case 0x57e361:c.instructions+=7;goto B57e361;
case 0x57e364:c.instructions+=6;goto B57e364;
case 0x57e367:c.instructions+=5;goto B57e367;
case 0x57e36b:c.instructions+=4;goto B57e36b;
case 0x57e36e:c.instructions+=3;goto B57e36e;
case 0x57e375:c.instructions+=2;goto B57e375;
case 0x57e377:c.instructions+=1;goto B57e377;
case 0x57e379:goto L57e379;
case 0x57e37b:c.instructions+=4;goto B57e37b;
case 0x57e37e:c.instructions+=3;goto B57e37e;
case 0x57e380:c.instructions+=2;goto B57e380;
case 0x57e382:c.instructions+=1;goto B57e382;
case 0x57e384:goto L57e384;
case 0x57e388:c.instructions+=1;goto B57e388;
case 0x57e38a:goto L57e38a;
case 0x57e38c:c.instructions+=1;goto B57e38c;
case 0x57e391:goto L57e391;
case 0x57e394:c.instructions+=1;goto B57e394;
case 0x57e396:goto L57e396;
case 0x57e397:c.instructions+=6;goto B57e397;
case 0x57e398:c.instructions+=5;goto B57e398;
case 0x57e39a:c.instructions+=4;goto B57e39a;
case 0x57e39b:c.instructions+=3;goto B57e39b;
case 0x57e39c:c.instructions+=2;goto B57e39c;
case 0x57e39f:c.instructions+=1;goto B57e39f;
case 0x57e3b0:goto L57e3b0;
case 0x57e3b5:c.instructions+=2;goto B57e3b5;
case 0x57e3b7:c.instructions+=1;goto B57e3b7;
case 0x57e3b9:goto L57e3b9;
case 0x57e3bb:c.instructions+=1;goto B57e3bb;
case 0x57e3bc:goto L57e3bc;
case 0x57e3c0:c.instructions+=6;goto B57e3c0;
case 0x57e3c4:c.instructions+=5;goto B57e3c4;
case 0x57e3c5:c.instructions+=4;goto B57e3c5;
case 0x57e3c6:c.instructions+=3;goto B57e3c6;
case 0x57e3c7:c.instructions+=2;goto B57e3c7;
case 0x57e3cd:c.instructions+=1;goto B57e3cd;
case 0x57e3d2:goto L57e3d2;
case 0x57e3d8:c.instructions+=5;goto B57e3d8;
case 0x57e3db:c.instructions+=4;goto B57e3db;
case 0x57e3dd:c.instructions+=3;goto B57e3dd;
case 0x57e3df:c.instructions+=2;goto B57e3df;
case 0x57e3e0:c.instructions+=1;goto B57e3e0;
case 0x57e3e2:goto L57e3e2;
case 0x57e3e8:c.instructions+=2;goto B57e3e8;
case 0x57e3ea:c.instructions+=1;goto B57e3ea;
case 0x57e3ec:goto L57e3ec;
case 0x57e3f6:c.instructions+=1;goto B57e3f6;
case 0x57e400:goto L57e400;
case 0x57e410:goto L57e410;
case 0x57e411:c.instructions+=5;goto B57e411;
case 0x57e412:c.instructions+=4;goto B57e412;
case 0x57e416:c.instructions+=3;goto B57e416;
case 0x57e418:c.instructions+=2;goto B57e418;
case 0x57e41a:c.instructions+=1;goto B57e41a;
case 0x57e41c:goto L57e41c;
case 0x57e41d:c.instructions+=3;goto B57e41d;
case 0x57e421:c.instructions+=2;goto B57e421;
case 0x57e422:c.instructions+=1;goto B57e422;
case 0x57e426:goto L57e426;
case 0x57e42b:c.instructions+=2;goto B57e42b;
case 0x57e42d:c.instructions+=1;goto B57e42d;
case 0x57e42f:goto L57e42f;
case 0x57e431:c.instructions+=1;goto B57e431;
case 0x57e433:goto L57e433;
case 0x57e439:c.instructions+=3;goto B57e439;
case 0x57e43a:c.instructions+=2;goto B57e43a;
case 0x57e43c:c.instructions+=1;goto B57e43c;
case 0x57e441:goto L57e441;
case 0x57e447:c.instructions+=3;goto B57e447;
case 0x57e449:c.instructions+=2;goto B57e449;
case 0x57e44c:c.instructions+=1;goto B57e44c;
case 0x57e44e:goto L57e44e;
case 0x57e454:c.instructions+=3;goto B57e454;
case 0x57e456:c.instructions+=2;goto B57e456;
case 0x57e458:c.instructions+=1;goto B57e458;
case 0x57e45a:goto L57e45a;
case 0x57e460:c.instructions+=1;goto B57e460;
case 0x57e466:goto L57e466;
case 0x57e469:c.instructions+=3;goto B57e469;
case 0x57e46a:c.instructions+=2;goto B57e46a;
case 0x57e46c:c.instructions+=1;goto B57e46c;
case 0x57e46e:goto L57e46e;
case 0x57e46f:c.instructions+=1;goto B57e46f;
case 0x57e470:goto L57e470;
case 0x57e471:c.instructions+=2;goto B57e471;
case 0x57e472:c.instructions+=1;goto B57e472;
case 0x57e480:goto L57e480;
case 0x57e485:c.instructions+=7;goto B57e485;
case 0x57e487:c.instructions+=6;goto B57e487;
case 0x57e488:c.instructions+=5;goto B57e488;
case 0x57e48c:c.instructions+=4;goto B57e48c;
case 0x57e48d:c.instructions+=3;goto B57e48d;
case 0x57e48e:c.instructions+=2;goto B57e48e;
case 0x57e492:c.instructions+=1;goto B57e492;
case 0x57e494:goto L57e494;
case 0x57e495:c.instructions+=2;goto B57e495;
case 0x57e496:c.instructions+=1;goto B57e496;
case 0x57e49b:goto L57e49b;
case 0x57e49e:c.instructions+=2;goto B57e49e;
case 0x57e4a0:c.instructions+=1;goto B57e4a0;
case 0x57e4a2:goto L57e4a2;
case 0x57e4a6:goto L57e4a6;
case 0x57e4ab:c.instructions+=2;goto B57e4ab;
case 0x57e4ad:c.instructions+=1;goto B57e4ad;
case 0x57e4af:goto L57e4af;
case 0x57e4b5:c.instructions+=4;goto B57e4b5;
case 0x57e4b6:c.instructions+=3;goto B57e4b6;
case 0x57e4b7:c.instructions+=2;goto B57e4b7;
case 0x57e4b8:c.instructions+=1;goto B57e4b8;
case 0x57e4bd:goto L57e4bd;
case 0x57e4be:c.instructions+=4;goto B57e4be;
case 0x57e4c0:c.instructions+=3;goto B57e4c0;
case 0x57e4c1:c.instructions+=2;goto B57e4c1;
case 0x57e4c2:c.instructions+=1;goto B57e4c2;
case 0x57e4d0:goto L57e4d0;
case 0x57e4d5:c.instructions+=8;goto B57e4d5;
case 0x57e4d7:c.instructions+=7;goto B57e4d7;
case 0x57e4d8:c.instructions+=6;goto B57e4d8;
case 0x57e4dc:c.instructions+=5;goto B57e4dc;
case 0x57e4dd:c.instructions+=4;goto B57e4dd;
case 0x57e4e1:c.instructions+=3;goto B57e4e1;
case 0x57e4e2:c.instructions+=2;goto B57e4e2;
case 0x57e4e3:c.instructions+=1;goto B57e4e3;
case 0x57e4e5:goto L57e4e5;
case 0x57e4e6:c.instructions+=2;goto B57e4e6;
case 0x57e4e8:c.instructions+=1;goto B57e4e8;
case 0x57e4ed:goto L57e4ed;
case 0x57e4ef:c.instructions+=4;goto B57e4ef;
case 0x57e4f2:c.instructions+=3;goto B57e4f2;
case 0x57e4f4:c.instructions+=2;goto B57e4f4;
case 0x57e4f6:c.instructions+=1;goto B57e4f6;
case 0x57e4f8:goto L57e4f8;
case 0x57e500:goto L57e500;
case 0x57e505:c.instructions+=2;goto B57e505;
case 0x57e507:c.instructions+=1;goto B57e507;
case 0x57e509:goto L57e509;
case 0x57e50b:c.instructions+=1;goto B57e50b;
case 0x57e50d:goto L57e50d;
case 0x57e513:c.instructions+=3;goto B57e513;
case 0x57e514:c.instructions+=2;goto B57e514;
case 0x57e516:c.instructions+=1;goto B57e516;
case 0x57e51b:goto L57e51b;
case 0x57e521:c.instructions+=3;goto B57e521;
case 0x57e523:c.instructions+=2;goto B57e523;
case 0x57e526:c.instructions+=1;goto B57e526;
case 0x57e528:goto L57e528;
case 0x57e52e:c.instructions+=3;goto B57e52e;
case 0x57e530:c.instructions+=2;goto B57e530;
case 0x57e532:c.instructions+=1;goto B57e532;
case 0x57e534:goto L57e534;
case 0x57e53a:c.instructions+=1;goto B57e53a;
case 0x57e540:goto L57e540;
case 0x57e543:c.instructions+=3;goto B57e543;
case 0x57e544:c.instructions+=2;goto B57e544;
case 0x57e546:c.instructions+=1;goto B57e546;
case 0x57e548:goto L57e548;
case 0x57e54c:goto L57e54c;
case 0x57e551:c.instructions+=2;goto B57e551;
case 0x57e553:c.instructions+=1;goto B57e553;
case 0x57e555:goto L57e555;
case 0x57e556:c.instructions+=1;goto B57e556;
case 0x57e55b:goto L57e55b;
case 0x57e55d:c.instructions+=4;goto B57e55d;
case 0x57e562:c.instructions+=3;goto B57e562;
case 0x57e565:c.instructions+=2;goto B57e565;
case 0x57e567:c.instructions+=1;goto B57e567;
case 0x57e569:goto L57e569;
case 0x57e56f:c.instructions+=4;goto B57e56f;
case 0x57e570:c.instructions+=3;goto B57e570;
case 0x57e572:c.instructions+=2;goto B57e572;
case 0x57e573:c.instructions+=1;goto B57e573;
case 0x57e578:goto L57e578;
case 0x57e57a:c.instructions+=2;goto B57e57a;
case 0x57e57c:c.instructions+=1;goto B57e57c;
case 0x57e57e:goto L57e57e;
case 0x57e580:goto L57e580;
case 0x57e585:c.instructions+=2;goto B57e585;
case 0x57e587:c.instructions+=1;goto B57e587;
case 0x57e589:goto L57e589;
case 0x57e58d:c.instructions+=5;goto B57e58d;
case 0x57e593:c.instructions+=4;goto B57e593;
case 0x57e594:c.instructions+=3;goto B57e594;
case 0x57e596:c.instructions+=2;goto B57e596;
case 0x57e597:c.instructions+=1;goto B57e597;
case 0x57e59c:goto L57e59c;
case 0x57e59d:c.instructions+=2;goto B57e59d;
case 0x57e59f:c.instructions+=1;goto B57e59f;
case 0x57e5a1:goto L57e5a1;
case 0x57e5a2:c.instructions+=4;goto B57e5a2;
case 0x57e5a3:c.instructions+=3;goto B57e5a3;
case 0x57e5a4:c.instructions+=2;goto B57e5a4;
case 0x57e5a5:c.instructions+=1;goto B57e5a5;
case 0x57e5b0:goto L57e5b0;
case 0x57e5b5:c.instructions+=8;goto B57e5b5;
case 0x57e5b7:c.instructions+=7;goto B57e5b7;
case 0x57e5b8:c.instructions+=6;goto B57e5b8;
case 0x57e5bc:c.instructions+=5;goto B57e5bc;
case 0x57e5bd:c.instructions+=4;goto B57e5bd;
case 0x57e5c1:c.instructions+=3;goto B57e5c1;
case 0x57e5c2:c.instructions+=2;goto B57e5c2;
case 0x57e5c3:c.instructions+=1;goto B57e5c3;
case 0x57e5c5:goto L57e5c5;
case 0x57e5c6:c.instructions+=2;goto B57e5c6;
case 0x57e5c8:c.instructions+=1;goto B57e5c8;
case 0x57e5cd:goto L57e5cd;
case 0x57e5cf:c.instructions+=4;goto B57e5cf;
case 0x57e5d2:c.instructions+=3;goto B57e5d2;
case 0x57e5d4:c.instructions+=2;goto B57e5d4;
case 0x57e5d6:c.instructions+=1;goto B57e5d6;
case 0x57e5d8:goto L57e5d8;
case 0x57e5e0:goto L57e5e0;
case 0x57e5e5:c.instructions+=2;goto B57e5e5;
case 0x57e5e7:c.instructions+=1;goto B57e5e7;
case 0x57e5e9:goto L57e5e9;
case 0x57e5eb:c.instructions+=1;goto B57e5eb;
case 0x57e5ed:goto L57e5ed;
case 0x57e5f3:c.instructions+=3;goto B57e5f3;
case 0x57e5f4:c.instructions+=2;goto B57e5f4;
case 0x57e5f6:c.instructions+=1;goto B57e5f6;
case 0x57e5fb:goto L57e5fb;
case 0x57e601:c.instructions+=3;goto B57e601;
case 0x57e603:c.instructions+=2;goto B57e603;
case 0x57e606:c.instructions+=1;goto B57e606;
case 0x57e608:goto L57e608;
case 0x57e60e:c.instructions+=3;goto B57e60e;
case 0x57e610:c.instructions+=2;goto B57e610;
case 0x57e612:c.instructions+=1;goto B57e612;
case 0x57e614:goto L57e614;
case 0x57e61a:c.instructions+=1;goto B57e61a;
case 0x57e620:goto L57e620;
case 0x57e625:c.instructions+=3;goto B57e625;
case 0x57e626:c.instructions+=2;goto B57e626;
case 0x57e628:c.instructions+=1;goto B57e628;
case 0x57e62a:goto L57e62a;
case 0x57e631:goto L57e631;
case 0x57e636:c.instructions+=2;goto B57e636;
case 0x57e638:c.instructions+=1;goto B57e638;
case 0x57e63a:goto L57e63a;
case 0x57e63b:c.instructions+=1;goto B57e63b;
case 0x57e640:goto L57e640;
case 0x57e642:c.instructions+=4;goto B57e642;
case 0x57e647:c.instructions+=3;goto B57e647;
case 0x57e64a:c.instructions+=2;goto B57e64a;
case 0x57e64c:c.instructions+=1;goto B57e64c;
case 0x57e64e:goto L57e64e;
case 0x57e654:c.instructions+=4;goto B57e654;
case 0x57e655:c.instructions+=3;goto B57e655;
case 0x57e657:c.instructions+=2;goto B57e657;
case 0x57e658:c.instructions+=1;goto B57e658;
case 0x57e65d:goto L57e65d;
case 0x57e65f:c.instructions+=2;goto B57e65f;
case 0x57e661:c.instructions+=1;goto B57e661;
case 0x57e663:goto L57e663;
case 0x57e668:c.instructions+=2;goto B57e668;
case 0x57e66a:c.instructions+=1;goto B57e66a;
case 0x57e66c:goto L57e66c;
case 0x57e671:c.instructions+=5;goto B57e671;
case 0x57e677:c.instructions+=4;goto B57e677;
case 0x57e678:c.instructions+=3;goto B57e678;
case 0x57e67a:c.instructions+=2;goto B57e67a;
case 0x57e67b:c.instructions+=1;goto B57e67b;
case 0x57e680:goto L57e680;
case 0x57e681:c.instructions+=2;goto B57e681;
case 0x57e683:c.instructions+=1;goto B57e683;
case 0x57e685:goto L57e685;
case 0x57e686:c.instructions+=4;goto B57e686;
case 0x57e687:c.instructions+=3;goto B57e687;
case 0x57e688:c.instructions+=2;goto B57e688;
case 0x57e689:c.instructions+=1;goto B57e689;
case 0x57e690:goto L57e690;
case 0x57e695:c.instructions+=9;goto B57e695;
case 0x57e69b:c.instructions+=8;goto B57e69b;
case 0x57e69c:c.instructions+=7;goto B57e69c;
case 0x57e69d:c.instructions+=6;goto B57e69d;
case 0x57e69e:c.instructions+=5;goto B57e69e;
case 0x57e6a0:c.instructions+=4;goto B57e6a0;
case 0x57e6a3:c.instructions+=3;goto B57e6a3;
case 0x57e6a8:c.instructions+=2;goto B57e6a8;
case 0x57e6a9:c.instructions+=1;goto B57e6a9;
case 0x57e6ae:goto L57e6ae;
case 0x57e6b0:c.instructions+=8;goto B57e6b0;
case 0x57e6b4:c.instructions+=7;goto B57e6b4;
case 0x57e6b6:c.instructions+=6;goto B57e6b6;
case 0x57e6b8:c.instructions+=5;goto B57e6b8;
case 0x57e6b9:c.instructions+=4;goto B57e6b9;
case 0x57e6bf:c.instructions+=3;goto B57e6bf;
case 0x57e6c1:c.instructions+=2;goto B57e6c1;
case 0x57e6c3:c.instructions+=1;goto B57e6c3;
case 0x57e6c8:goto L57e6c8;
case 0x57e6cb:c.instructions+=2;goto B57e6cb;
case 0x57e6cd:c.instructions+=1;goto B57e6cd;
case 0x57e6cf:goto L57e6cf;
case 0x57e6d0:goto L57e6d0;
case 0x57e6d6:c.instructions+=1;goto B57e6d6;
case 0x57e6d8:goto L57e6d8;
case 0x57e6dd:c.instructions+=1;goto B57e6dd;
case 0x57e6e4:goto L57e6e4;
case 0x57e6e8:c.instructions+=1;goto B57e6e8;
case 0x57e6ea:goto L57e6ea;
case 0x57e6eb:c.instructions+=1;goto B57e6eb;
case 0x57e6ed:goto L57e6ed;
case 0x57e6ef:goto L57e6ef;
case 0x57e6f1:c.instructions+=4;goto B57e6f1;
case 0x57e6f5:c.instructions+=3;goto B57e6f5;
case 0x57e6f7:c.instructions+=2;goto B57e6f7;
case 0x57e6f8:c.instructions+=1;goto B57e6f8;
case 0x57e6fd:goto L57e6fd;
case 0x57e700:c.instructions+=2;goto B57e700;
case 0x57e702:c.instructions+=1;goto B57e702;
case 0x57e704:goto L57e704;
case 0x57e705:c.instructions+=1;goto B57e705;
case 0x57e70a:goto L57e70a;
case 0x57e70d:c.instructions+=7;goto B57e70d;
case 0x57e70e:c.instructions+=6;goto B57e70e;
case 0x57e70f:c.instructions+=5;goto B57e70f;
case 0x57e715:c.instructions+=4;goto B57e715;
case 0x57e71b:c.instructions+=3;goto B57e71b;
case 0x57e71c:c.instructions+=2;goto B57e71c;
case 0x57e722:c.instructions+=1;goto B57e722;
case 0x57e730:goto L57e730;
case 0x57e731:c.instructions+=2;goto B57e731;
case 0x57e733:c.instructions+=1;goto B57e733;
case 0x57e738:goto L57e738;
case 0x57e73e:c.instructions+=4;goto B57e73e;
case 0x57e741:c.instructions+=3;goto B57e741;
case 0x57e743:c.instructions+=2;goto B57e743;
case 0x57e746:c.instructions+=1;goto B57e746;
case 0x57e748:goto L57e748;
case 0x57e74f:c.instructions+=2;goto B57e74f;
case 0x57e750:c.instructions+=1;goto B57e750;
case 0x57e751:goto L57e751;
case 0x57e752:c.instructions+=5;goto B57e752;
case 0x57e754:c.instructions+=4;goto B57e754;
case 0x57e757:c.instructions+=3;goto B57e757;
case 0x57e759:c.instructions+=2;goto B57e759;
case 0x57e75a:c.instructions+=1;goto B57e75a;
case 0x57e75f:goto L57e75f;
case 0x57e761:c.instructions+=3;goto B57e761;
case 0x57e764:c.instructions+=2;goto B57e764;
case 0x57e766:c.instructions+=1;goto B57e766;
case 0x57e768:goto L57e768;
case 0x57e769:c.instructions+=3;goto B57e769;
case 0x57e770:c.instructions+=2;goto B57e770;
case 0x57e771:c.instructions+=1;goto B57e771;
case 0x57e772:goto L57e772;
case 0x57e775:c.instructions+=7;goto B57e775;
case 0x57e776:c.instructions+=6;goto B57e776;
case 0x57e779:c.instructions+=5;goto B57e779;
case 0x57e77a:c.instructions+=4;goto B57e77a;
case 0x57e77d:c.instructions+=3;goto B57e77d;
case 0x57e77f:c.instructions+=2;goto B57e77f;
case 0x57e781:c.instructions+=1;goto B57e781;
case 0x57e783:goto L57e783;
case 0x57e785:goto L57e785;
case 0x57e788:c.instructions+=10;goto B57e788;
case 0x57e78b:c.instructions+=9;goto B57e78b;
case 0x57e78d:c.instructions+=8;goto B57e78d;
case 0x57e78f:c.instructions+=7;goto B57e78f;
case 0x57e792:c.instructions+=6;goto B57e792;
case 0x57e793:c.instructions+=5;goto B57e793;
case 0x57e795:c.instructions+=4;goto B57e795;
case 0x57e798:c.instructions+=3;goto B57e798;
case 0x57e79b:c.instructions+=2;goto B57e79b;
case 0x57e79d:c.instructions+=1;goto B57e79d;
case 0x57e79f:goto L57e79f;
case 0x57e7a6:c.instructions+=1;goto B57e7a6;
case 0x57e7a8:goto L57e7a8;
case 0x57e7af:c.instructions+=4;goto B57e7af;
case 0x57e7b2:c.instructions+=3;goto B57e7b2;
case 0x57e7b5:c.instructions+=2;goto B57e7b5;
case 0x57e7b7:c.instructions+=1;goto B57e7b7;
case 0x57e7b9:goto L57e7b9;
case 0x57e7bc:c.instructions+=8;goto B57e7bc;
case 0x57e7bf:c.instructions+=7;goto B57e7bf;
case 0x57e7c0:c.instructions+=6;goto B57e7c0;
case 0x57e7c5:c.instructions+=5;goto B57e7c5;
case 0x57e7c6:c.instructions+=4;goto B57e7c6;
case 0x57e7c8:c.instructions+=3;goto B57e7c8;
case 0x57e7c9:c.instructions+=2;goto B57e7c9;
case 0x57e7cb:c.instructions+=1;goto B57e7cb;
case 0x57e7d0:goto L57e7d0;
case 0x57e7d3:goto L57e7d3;
case 0x57e7d6:c.instructions+=4;goto B57e7d6;
case 0x57e7d8:c.instructions+=3;goto B57e7d8;
case 0x57e7d9:c.instructions+=2;goto B57e7d9;
case 0x57e7da:c.instructions+=1;goto B57e7da;
case 0x57e7dc:goto L57e7dc;
case 0x57e7e3:c.instructions+=3;goto B57e7e3;
case 0x57e7e4:c.instructions+=2;goto B57e7e4;
case 0x57e7e5:c.instructions+=1;goto B57e7e5;
case 0x57e7e6:goto L57e7e6;
case 0x57e7e8:c.instructions+=2;goto B57e7e8;
case 0x57e7ea:c.instructions+=1;goto B57e7ea;
case 0x57e7ef:goto L57e7ef;
case 0x57e7f0:c.instructions+=2;goto B57e7f0;
case 0x57e7f1:c.instructions+=1;goto B57e7f1;
case 0x57e800:goto L57e800;
case 0x57e805:c.instructions+=7;goto B57e805;
case 0x57e806:c.instructions+=6;goto B57e806;
case 0x57e807:c.instructions+=5;goto B57e807;
case 0x57e809:c.instructions+=4;goto B57e809;
case 0x57e80b:c.instructions+=3;goto B57e80b;
case 0x57e80c:c.instructions+=2;goto B57e80c;
case 0x57e80d:c.instructions+=1;goto B57e80d;
case 0x57e80f:goto L57e80f;
case 0x57e814:goto L57e814;
case 0x57e819:goto L57e819;
case 0x57e81f:c.instructions+=1;goto B57e81f;
case 0x57e825:goto L57e825;
case 0x57e82b:c.instructions+=4;goto B57e82b;
case 0x57e831:c.instructions+=3;goto B57e831;
case 0x57e834:c.instructions+=2;goto B57e834;
case 0x57e839:c.instructions+=1;goto B57e839;
case 0x57e83b:goto L57e83b;
case 0x57e841:c.instructions+=1;goto B57e841;
case 0x57e843:goto L57e843;
case 0x57e845:c.instructions+=2;goto B57e845;
case 0x57e847:c.instructions+=1;goto B57e847;
case 0x57e84c:goto L57e84c;
case 0x57e84e:c.instructions+=3;goto B57e84e;
case 0x57e851:c.instructions+=2;goto B57e851;
case 0x57e853:c.instructions+=1;goto B57e853;
case 0x57e855:goto L57e855;
case 0x57e858:c.instructions+=1;goto B57e858;
case 0x57e85a:goto L57e85a;
case 0x57e860:goto L57e860;
case 0x57e866:c.instructions+=1;goto B57e866;
case 0x57e868:goto L57e868;
case 0x57e86d:goto L57e86d;
case 0x57e872:goto L57e872;
case 0x57e875:c.instructions+=1;goto B57e875;
case 0x57e877:goto L57e877;
case 0x57e879:goto L57e879;
case 0x57e87f:c.instructions+=1;goto B57e87f;
case 0x57e881:goto L57e881;
case 0x57e887:c.instructions+=4;goto B57e887;
case 0x57e889:c.instructions+=3;goto B57e889;
case 0x57e88b:c.instructions+=2;goto B57e88b;
case 0x57e88c:c.instructions+=1;goto B57e88c;
case 0x57e891:goto L57e891;
case 0x57e894:c.instructions+=1;goto B57e894;
case 0x57e896:goto L57e896;
case 0x57e898:c.instructions+=6;goto B57e898;
case 0x57e89b:c.instructions+=5;goto B57e89b;
case 0x57e89d:c.instructions+=4;goto B57e89d;
case 0x57e8a0:c.instructions+=3;goto B57e8a0;
case 0x57e8a6:c.instructions+=2;goto B57e8a6;
case 0x57e8a9:c.instructions+=1;goto B57e8a9;
case 0x57e8ab:goto L57e8ab;
case 0x57e8ae:c.instructions+=2;goto B57e8ae;
case 0x57e8b1:c.instructions+=1;goto B57e8b1;
case 0x57e8b3:goto L57e8b3;
case 0x57e8b4:c.instructions+=2;goto B57e8b4;
case 0x57e8b6:c.instructions+=1;goto B57e8b6;
case 0x57e8bb:goto L57e8bb;
case 0x57e8c1:c.instructions+=3;goto B57e8c1;
case 0x57e8c2:c.instructions+=2;goto B57e8c2;
case 0x57e8c3:c.instructions+=1;goto B57e8c3;
case 0x57e8c5:goto L57e8c5;
case 0x57e8c8:c.instructions+=6;goto B57e8c8;
case 0x57e8cd:c.instructions+=5;goto B57e8cd;
case 0x57e8cf:c.instructions+=4;goto B57e8cf;
case 0x57e8d5:c.instructions+=3;goto B57e8d5;
case 0x57e8d8:c.instructions+=2;goto B57e8d8;
case 0x57e8de:c.instructions+=1;goto B57e8de;
case 0x57e8e0:goto L57e8e0;
case 0x57e8e3:c.instructions+=1;goto B57e8e3;
case 0x57e8e5:goto L57e8e5;
case 0x57e8e7:c.instructions+=9;goto B57e8e7;
case 0x57e8ea:c.instructions+=8;goto B57e8ea;
case 0x57e8ec:c.instructions+=7;goto B57e8ec;
case 0x57e8ef:c.instructions+=6;goto B57e8ef;
case 0x57e8f4:c.instructions+=5;goto B57e8f4;
case 0x57e8f5:c.instructions+=4;goto B57e8f5;
case 0x57e8f6:c.instructions+=3;goto B57e8f6;
case 0x57e8f8:c.instructions+=2;goto B57e8f8;
case 0x57e8fd:c.instructions+=1;goto B57e8fd;
case 0x57e902:goto L57e902;
case 0x57e907:c.instructions+=2;goto B57e907;
case 0x57e908:c.instructions+=1;goto B57e908;
case 0x57e909:goto L57e909;
case 0x57e90e:goto L57e90e;
case 0x57e911:goto L57e911;
case 0x57e918:c.instructions+=1;goto B57e918;
case 0x57e91e:goto L57e91e;
case 0x57e920:goto L57e920;
case 0x57e92a:c.instructions+=1;goto B57e92a;
case 0x57e930:goto L57e930;
case 0x57e935:c.instructions+=2;goto B57e935;
case 0x57e93a:c.instructions+=1;goto B57e93a;
case 0x57e93f:goto L57e93f;
case 0x57e945:c.instructions+=1;goto B57e945;
case 0x57e947:goto L57e947;
case 0x57e94d:c.instructions+=4;goto B57e94d;
case 0x57e950:c.instructions+=3;goto B57e950;
case 0x57e955:c.instructions+=2;goto B57e955;
case 0x57e956:c.instructions+=1;goto B57e956;
case 0x57e95b:goto L57e95b;
case 0x57e95e:c.instructions+=2;goto B57e95e;
case 0x57e960:c.instructions+=1;goto B57e960;
case 0x57e966:goto L57e966;
case 0x57e96c:c.instructions+=1;goto B57e96c;
case 0x57e972:goto L57e972;
case 0x57e978:c.instructions+=2;goto B57e978;
case 0x57e979:c.instructions+=1;goto B57e979;
case 0x57e97e:goto L57e97e;
case 0x57e981:c.instructions+=2;goto B57e981;
case 0x57e983:c.instructions+=1;goto B57e983;
case 0x57e985:goto L57e985;
case 0x57e987:c.instructions+=6;goto B57e987;
case 0x57e98a:c.instructions+=5;goto B57e98a;
case 0x57e98d:c.instructions+=4;goto B57e98d;
case 0x57e990:c.instructions+=3;goto B57e990;
case 0x57e993:c.instructions+=2;goto B57e993;
case 0x57e995:c.instructions+=1;goto B57e995;
case 0x57e997:goto L57e997;
case 0x57e999:goto L57e999;
case 0x57e99f:c.instructions+=2;goto B57e99f;
case 0x57e9a4:c.instructions+=1;goto B57e9a4;
case 0x57e9a9:goto L57e9a9;
case 0x57e9ab:c.instructions+=2;goto B57e9ab;
case 0x57e9ad:c.instructions+=1;goto B57e9ad;
case 0x57e9af:goto L57e9af;
case 0x57e9b0:goto L57e9b0;
case 0x57e9b1:c.instructions+=2;goto B57e9b1;
case 0x57e9b3:c.instructions+=1;goto B57e9b3;
case 0x57e9b8:goto L57e9b8;
case 0x57e9ba:c.instructions+=1;goto B57e9ba;
case 0x57e9bc:goto L57e9bc;
case 0x57e9be:c.instructions+=2;goto B57e9be;
case 0x57e9c0:c.instructions+=1;goto B57e9c0;
case 0x57e9c2:goto L57e9c2;
case 0x57e9c6:c.instructions+=1;goto B57e9c6;
case 0x57e9c8:goto L57e9c8;
case 0x57e9ca:c.instructions+=2;goto B57e9ca;
case 0x57e9cc:c.instructions+=1;goto B57e9cc;
case 0x57e9ce:goto L57e9ce;
case 0x57e9cf:c.instructions+=1;goto B57e9cf;
case 0x57e9d4:goto L57e9d4;
case 0x57e9d7:goto L57e9d7;
case 0x57e9dc:c.instructions+=3;goto B57e9dc;
case 0x57e9dd:c.instructions+=2;goto B57e9dd;
case 0x57e9de:c.instructions+=1;goto B57e9de;
case 0x57e9e3:goto L57e9e3;
case 0x57e9e6:c.instructions+=1;goto B57e9e6;
case 0x57e9eb:goto L57e9eb;
case 0x57e9ee:c.instructions+=4;goto B57e9ee;
case 0x57e9f1:c.instructions+=3;goto B57e9f1;
case 0x57e9f6:c.instructions+=2;goto B57e9f6;
case 0x57e9f7:c.instructions+=1;goto B57e9f7;
case 0x57e9fc:goto L57e9fc;
case 0x57e9ff:c.instructions+=11;goto B57e9ff;
case 0x57ea02:c.instructions+=10;goto B57ea02;
case 0x57ea03:c.instructions+=9;goto B57ea03;
case 0x57ea08:c.instructions+=8;goto B57ea08;
case 0x57ea0b:c.instructions+=7;goto B57ea0b;
case 0x57ea0c:c.instructions+=6;goto B57ea0c;
case 0x57ea0d:c.instructions+=5;goto B57ea0d;
case 0x57ea10:c.instructions+=4;goto B57ea10;
case 0x57ea11:c.instructions+=3;goto B57ea11;
case 0x57ea12:c.instructions+=2;goto B57ea12;
case 0x57ea14:c.instructions+=1;goto B57ea14;
case 0x57ea19:goto L57ea19;
case 0x57ea1a:c.instructions+=1;goto B57ea1a;
case 0x57ea1f:goto L57ea1f;
case 0x57ea21:c.instructions+=13;goto B57ea21;
case 0x57ea24:c.instructions+=12;goto B57ea24;
case 0x57ea26:c.instructions+=11;goto B57ea26;
case 0x57ea29:c.instructions+=10;goto B57ea29;
case 0x57ea2f:c.instructions+=9;goto B57ea2f;
case 0x57ea34:c.instructions+=8;goto B57ea34;
case 0x57ea37:c.instructions+=7;goto B57ea37;
case 0x57ea3e:c.instructions+=6;goto B57ea3e;
case 0x57ea40:c.instructions+=5;goto B57ea40;
case 0x57ea43:c.instructions+=4;goto B57ea43;
case 0x57ea46:c.instructions+=3;goto B57ea46;
case 0x57ea48:c.instructions+=2;goto B57ea48;
case 0x57ea4a:c.instructions+=1;goto B57ea4a;
case 0x57ea4c:goto L57ea4c;
case 0x57ea50:goto L57ea50;
case 0x57ea53:c.instructions+=9;goto B57ea53;
case 0x57ea55:c.instructions+=8;goto B57ea55;
case 0x57ea58:c.instructions+=7;goto B57ea58;
case 0x57ea5a:c.instructions+=6;goto B57ea5a;
case 0x57ea5d:c.instructions+=5;goto B57ea5d;
case 0x57ea60:c.instructions+=4;goto B57ea60;
case 0x57ea61:c.instructions+=3;goto B57ea61;
case 0x57ea64:c.instructions+=2;goto B57ea64;
case 0x57ea66:c.instructions+=1;goto B57ea66;
case 0x57ea68:goto L57ea68;
case 0x57ea6e:c.instructions+=9;goto B57ea6e;
case 0x57ea70:c.instructions+=8;goto B57ea70;
case 0x57ea73:c.instructions+=7;goto B57ea73;
case 0x57ea76:c.instructions+=6;goto B57ea76;
case 0x57ea78:c.instructions+=5;goto B57ea78;
case 0x57ea7b:c.instructions+=4;goto B57ea7b;
case 0x57ea7e:c.instructions+=3;goto B57ea7e;
case 0x57ea7f:c.instructions+=2;goto B57ea7f;
case 0x57ea84:c.instructions+=1;goto B57ea84;
case 0x57ea89:goto L57ea89;
case 0x57ea8c:c.instructions+=2;goto B57ea8c;
case 0x57ea8e:c.instructions+=1;goto B57ea8e;
case 0x57ea93:goto L57ea93;
case 0x57ea98:c.instructions+=9;goto B57ea98;
case 0x57ea9a:c.instructions+=8;goto B57ea9a;
case 0x57eaa0:c.instructions+=7;goto B57eaa0;
case 0x57eaa2:c.instructions+=6;goto B57eaa2;
case 0x57eaa8:c.instructions+=5;goto B57eaa8;
case 0x57eaad:c.instructions+=4;goto B57eaad;
case 0x57eaae:c.instructions+=3;goto B57eaae;
case 0x57eab1:c.instructions+=2;goto B57eab1;
case 0x57eab6:c.instructions+=1;goto B57eab6;
case 0x57eabc:goto L57eabc;
case 0x57eabd:c.instructions+=4;goto B57eabd;
case 0x57eabe:c.instructions+=3;goto B57eabe;
case 0x57eabf:c.instructions+=2;goto B57eabf;
case 0x57eac0:c.instructions+=1;goto B57eac0;
case 0x57ead0:goto L57ead0;
case 0x57ead5:c.instructions+=8;goto B57ead5;
case 0x57eadb:c.instructions+=7;goto B57eadb;
case 0x57eade:c.instructions+=6;goto B57eade;
case 0x57eadf:c.instructions+=5;goto B57eadf;
case 0x57eae0:c.instructions+=4;goto B57eae0;
case 0x57eae2:c.instructions+=3;goto B57eae2;
case 0x57eae5:c.instructions+=2;goto B57eae5;
case 0x57eae7:c.instructions+=1;goto B57eae7;
case 0x57eae9:goto L57eae9;
case 0x57eaeb:c.instructions+=2;goto B57eaeb;
case 0x57eaed:c.instructions+=1;goto B57eaed;
case 0x57eaf2:goto L57eaf2;
case 0x57eaf4:c.instructions+=4;goto B57eaf4;
case 0x57eaf6:c.instructions+=3;goto B57eaf6;
case 0x57eaf8:c.instructions+=2;goto B57eaf8;
case 0x57eafc:c.instructions+=1;goto B57eafc;
case 0x57eb01:goto L57eb01;
case 0x57eb04:c.instructions+=1;goto B57eb04;
case 0x57eb09:goto L57eb09;
case 0x57eb0a:c.instructions+=14;goto B57eb0a;
case 0x57eb10:c.instructions+=13;goto B57eb10;
case 0x57eb15:c.instructions+=12;goto B57eb15;
case 0x57eb19:c.instructions+=11;goto B57eb19;
case 0x57eb1b:c.instructions+=10;goto B57eb1b;
case 0x57eb1f:c.instructions+=9;goto B57eb1f;
case 0x57eb25:c.instructions+=8;goto B57eb25;
case 0x57eb27:c.instructions+=7;goto B57eb27;
case 0x57eb29:c.instructions+=6;goto B57eb29;
case 0x57eb2d:c.instructions+=5;goto B57eb2d;
case 0x57eb30:c.instructions+=4;goto B57eb30;
case 0x57eb36:c.instructions+=3;goto B57eb36;
case 0x57eb39:c.instructions+=2;goto B57eb39;
case 0x57eb3b:c.instructions+=1;goto B57eb3b;
case 0x57eb3d:goto L57eb3d;
case 0x57eb41:c.instructions+=4;goto B57eb41;
case 0x57eb47:c.instructions+=3;goto B57eb47;
case 0x57eb49:c.instructions+=2;goto B57eb49;
case 0x57eb4c:c.instructions+=1;goto B57eb4c;
case 0x57eb4e:goto L57eb4e;
case 0x57eb4f:c.instructions+=1;goto B57eb4f;
case 0x57eb54:goto L57eb54;
case 0x57eb58:c.instructions+=3;goto B57eb58;
case 0x57eb5e:c.instructions+=2;goto B57eb5e;
case 0x57eb60:c.instructions+=1;goto B57eb60;
case 0x57eb64:goto L57eb64;
case 0x57eb69:goto L57eb69;
case 0x57eb6a:c.instructions+=2;goto B57eb6a;
case 0x57eb6b:c.instructions+=1;goto B57eb6b;
case 0x57eb70:goto L57eb70;
case 0x57eb74:c.instructions+=4;goto B57eb74;
case 0x57eb77:c.instructions+=3;goto B57eb77;
case 0x57eb79:c.instructions+=2;goto B57eb79;
case 0x57eb7c:c.instructions+=1;goto B57eb7c;
case 0x57eb7e:goto L57eb7e;
case 0x57eb82:c.instructions+=3;goto B57eb82;
case 0x57eb83:c.instructions+=2;goto B57eb83;
case 0x57eb87:c.instructions+=1;goto B57eb87;
case 0x57eb8b:goto L57eb8b;
case 0x57eb8f:c.instructions+=11;goto B57eb8f;
case 0x57eb95:c.instructions+=10;goto B57eb95;
case 0x57eb9b:c.instructions+=9;goto B57eb9b;
case 0x57eb9f:c.instructions+=8;goto B57eb9f;
case 0x57eba5:c.instructions+=7;goto B57eba5;
case 0x57ebab:c.instructions+=6;goto B57ebab;
case 0x57ebae:c.instructions+=5;goto B57ebae;
case 0x57ebb3:c.instructions+=4;goto B57ebb3;
case 0x57ebb5:c.instructions+=3;goto B57ebb5;
case 0x57ebb8:c.instructions+=2;goto B57ebb8;
case 0x57ebbb:c.instructions+=1;goto B57ebbb;
case 0x57ebbd:goto L57ebbd;
case 0x57ebc3:c.instructions+=5;goto B57ebc3;
case 0x57ebc7:c.instructions+=4;goto B57ebc7;
case 0x57ebcd:c.instructions+=3;goto B57ebcd;
case 0x57ebcf:c.instructions+=2;goto B57ebcf;
case 0x57ebd2:c.instructions+=1;goto B57ebd2;
case 0x57ebd4:goto L57ebd4;
case 0x57ebd6:c.instructions+=2;goto B57ebd6;
case 0x57ebdc:c.instructions+=1;goto B57ebdc;
case 0x57ebde:goto L57ebde;
case 0x57ebe4:c.instructions+=5;goto B57ebe4;
case 0x57ebe8:c.instructions+=4;goto B57ebe8;
case 0x57ebee:c.instructions+=3;goto B57ebee;
case 0x57ebf0:c.instructions+=2;goto B57ebf0;
case 0x57ebf3:c.instructions+=1;goto B57ebf3;
case 0x57ebf5:goto L57ebf5;
case 0x57ebf7:c.instructions+=1;goto B57ebf7;
case 0x57ebfd:goto L57ebfd;
case 0x57ec01:c.instructions+=4;goto B57ec01;
case 0x57ec03:c.instructions+=3;goto B57ec03;
case 0x57ec05:c.instructions+=2;goto B57ec05;
case 0x57ec08:c.instructions+=1;goto B57ec08;
case 0x57ec0a:goto L57ec0a;
case 0x57ec0c:c.instructions+=1;goto B57ec0c;
case 0x57ec10:goto L57ec10;
case 0x57ec16:c.instructions+=3;goto B57ec16;
case 0x57ec18:c.instructions+=2;goto B57ec18;
case 0x57ec1e:c.instructions+=1;goto B57ec1e;
case 0x57ec23:goto L57ec23;
case 0x57ec25:c.instructions+=5;goto B57ec25;
case 0x57ec29:c.instructions+=4;goto B57ec29;
case 0x57ec2d:c.instructions+=3;goto B57ec2d;
case 0x57ec33:c.instructions+=2;goto B57ec33;
case 0x57ec39:c.instructions+=1;goto B57ec39;
case 0x57ec3e:goto L57ec3e;
case 0x57ec42:c.instructions+=8;goto B57ec42;
case 0x57ec46:c.instructions+=7;goto B57ec46;
case 0x57ec4b:c.instructions+=6;goto B57ec4b;
case 0x57ec4d:c.instructions+=5;goto B57ec4d;
case 0x57ec53:c.instructions+=4;goto B57ec53;
case 0x57ec55:c.instructions+=3;goto B57ec55;
case 0x57ec5b:c.instructions+=2;goto B57ec5b;
case 0x57ec5d:c.instructions+=1;goto B57ec5d;
case 0x57ec5f:goto L57ec5f;
case 0x57ec65:c.instructions+=4;goto B57ec65;
case 0x57ec67:c.instructions+=3;goto B57ec67;
case 0x57ec69:c.instructions+=2;goto B57ec69;
case 0x57ec6a:c.instructions+=1;goto B57ec6a;
case 0x57ec6f:goto L57ec6f;
case 0x57ec74:c.instructions+=2;goto B57ec74;
case 0x57ec76:c.instructions+=1;goto B57ec76;
case 0x57ec78:goto L57ec78;
case 0x57ec7e:c.instructions+=4;goto B57ec7e;
case 0x57ec80:c.instructions+=3;goto B57ec80;
case 0x57ec82:c.instructions+=2;goto B57ec82;
case 0x57ec83:c.instructions+=1;goto B57ec83;
case 0x57ec88:goto L57ec88;
case 0x57ec8c:c.instructions+=7;goto B57ec8c;
case 0x57ec8d:c.instructions+=6;goto B57ec8d;
case 0x57ec93:c.instructions+=5;goto B57ec93;
case 0x57ec94:c.instructions+=4;goto B57ec94;
case 0x57ec9a:c.instructions+=3;goto B57ec9a;
case 0x57eca0:c.instructions+=2;goto B57eca0;
case 0x57eca3:c.instructions+=1;goto B57eca3;
case 0x57ecb0:goto L57ecb0;
case 0x57ecb5:c.instructions+=3;goto B57ecb5;
case 0x57ecb7:c.instructions+=2;goto B57ecb7;
case 0x57ecb8:c.instructions+=1;goto B57ecb8;
case 0x57ecba:goto L57ecba;
case 0x57ecbc:c.instructions+=2;goto B57ecbc;
case 0x57ecbe:c.instructions+=1;goto B57ecbe;
case 0x57ecc3:goto L57ecc3;
case 0x57ecc6:c.instructions+=4;goto B57ecc6;
case 0x57ecc8:c.instructions+=3;goto B57ecc8;
case 0x57eccd:c.instructions+=2;goto B57eccd;
case 0x57ecce:c.instructions+=1;goto B57ecce;
case 0x57ecd3:goto L57ecd3;
case 0x57ecd6:c.instructions+=2;goto B57ecd6;
case 0x57ecd7:c.instructions+=1;goto B57ecd7;
case 0x57ecd8:goto L57ecd8;
case 0x57ecdd:goto L57ecdd;
case 0x57ecdf:c.instructions+=4;goto B57ecdf;
case 0x57ece4:c.instructions+=3;goto B57ece4;
case 0x57ecea:c.instructions+=2;goto B57ecea;
case 0x57ecec:c.instructions+=1;goto B57ecec;
case 0x57ecee:goto L57ecee;
case 0x57ecf4:c.instructions+=4;goto B57ecf4;
case 0x57ecf6:c.instructions+=3;goto B57ecf6;
case 0x57ecf8:c.instructions+=2;goto B57ecf8;
case 0x57ecf9:c.instructions+=1;goto B57ecf9;
case 0x57ecfe:goto L57ecfe;
case 0x57ed03:c.instructions+=2;goto B57ed03;
case 0x57ed04:c.instructions+=1;goto B57ed04;
case 0x57ed09:goto L57ed09;
case 0x57ed0c:c.instructions+=2;goto B57ed0c;
case 0x57ed0d:c.instructions+=1;goto B57ed0d;
case 0x57ed10:goto L57ed10;
case 0x57ed11:c.instructions+=6;goto B57ed11;
case 0x57ed15:c.instructions+=5;goto B57ed15;
case 0x57ed16:c.instructions+=4;goto B57ed16;
case 0x57ed1a:c.instructions+=3;goto B57ed1a;
case 0x57ed1b:c.instructions+=2;goto B57ed1b;
case 0x57ed1c:c.instructions+=1;goto B57ed1c;
case 0x57ed21:goto L57ed21;
case 0x57ed24:c.instructions+=1;goto B57ed24;
case 0x57ed29:goto L57ed29;
case 0x57ed2a:c.instructions+=3;goto B57ed2a;
case 0x57ed2b:c.instructions+=2;goto B57ed2b;
case 0x57ed30:c.instructions+=1;goto B57ed30;
case 0x57ed35:goto L57ed35;
case 0x57ed3a:c.instructions+=1;goto B57ed3a;
case 0x57ed3f:goto L57ed3f;
case 0x57ed42:c.instructions+=1;goto B57ed42;
case 0x57ed47:goto L57ed47;
case 0x57ed4c:goto L57ed4c;
case 0x57ed51:goto L57ed51;
case 0x57ed56:goto L57ed56;
case 0x57ed5b:goto L57ed5b;
case 0x57ed5c:c.instructions+=3;goto B57ed5c;
case 0x57ed5d:c.instructions+=2;goto B57ed5d;
case 0x57ed62:c.instructions+=1;goto B57ed62;
case 0x57ed67:goto L57ed67;
case 0x57ed6c:goto L57ed6c;
case 0x57ed71:goto L57ed71;
case 0x57ed76:goto L57ed76;
case 0x57ed7b:goto L57ed7b;
case 0x57ed80:goto L57ed80;
case 0x57ed85:goto L57ed85;
case 0x57ed8a:goto L57ed8a;
case 0x57ed8f:goto L57ed8f;
case 0x57ed94:goto L57ed94;
case 0x57ed99:goto L57ed99;
case 0x57ed9e:goto L57ed9e;
case 0x57eda3:goto L57eda3;
case 0x57eda8:goto L57eda8;
case 0x57edad:goto L57edad;
case 0x57edb2:goto L57edb2;
case 0x57edb7:goto L57edb7;
case 0x57edbc:goto L57edbc;
case 0x57edc1:goto L57edc1;
case 0x57edc6:goto L57edc6;
case 0x57edcb:goto L57edcb;
case 0x57edd0:goto L57edd0;
case 0x57edd5:goto L57edd5;
case 0x57edda:goto L57edda;
case 0x57eddf:goto L57eddf;
case 0x57ede0:c.instructions+=4;goto B57ede0;
case 0x57ede7:c.instructions+=3;goto B57ede7;
case 0x57edf1:c.instructions+=2;goto B57edf1;
case 0x57edf2:c.instructions+=1;goto B57edf2;
case 0x57ee00:goto L57ee00;
case 0x57ee06:c.instructions+=8;goto B57ee06;
case 0x57ee09:c.instructions+=7;goto B57ee09;
case 0x57ee0a:c.instructions+=6;goto B57ee0a;
case 0x57ee0b:c.instructions+=5;goto B57ee0b;
case 0x57ee0c:c.instructions+=4;goto B57ee0c;
case 0x57ee0e:c.instructions+=3;goto B57ee0e;
case 0x57ee10:c.instructions+=2;goto B57ee10;
case 0x57ee11:c.instructions+=1;goto B57ee11;
case 0x57ee13:goto L57ee13;
case 0x57ee18:goto L57ee18;
case 0x57ee1a:goto L57ee1a;
case 0x57ee1f:goto L57ee1f;
case 0x57ee25:c.instructions+=10;goto B57ee25;
case 0x57ee2b:c.instructions+=9;goto B57ee2b;
case 0x57ee2f:c.instructions+=8;goto B57ee2f;
case 0x57ee31:c.instructions+=7;goto B57ee31;
case 0x57ee33:c.instructions+=6;goto B57ee33;
case 0x57ee38:c.instructions+=5;goto B57ee38;
case 0x57ee3a:c.instructions+=4;goto B57ee3a;
case 0x57ee3c:c.instructions+=3;goto B57ee3c;
case 0x57ee3e:c.instructions+=2;goto B57ee3e;
case 0x57ee46:c.instructions+=1;goto B57ee46;
case 0x57ee48:goto L57ee48;
case 0x57ee4a:c.instructions+=2;goto B57ee4a;
case 0x57ee4c:c.instructions+=1;goto B57ee4c;
case 0x57ee51:goto L57ee51;
case 0x57ee54:c.instructions+=2;goto B57ee54;
case 0x57ee57:c.instructions+=1;goto B57ee57;
case 0x57ee59:goto L57ee59;
case 0x57ee61:c.instructions+=1;goto B57ee61;
case 0x57ee63:goto L57ee63;
case 0x57ee68:c.instructions+=2;goto B57ee68;
case 0x57ee6a:c.instructions+=1;goto B57ee6a;
case 0x57ee70:goto L57ee70;
case 0x57ee76:c.instructions+=5;goto B57ee76;
case 0x57ee78:c.instructions+=4;goto B57ee78;
case 0x57ee7b:c.instructions+=3;goto B57ee7b;
case 0x57ee7d:c.instructions+=2;goto B57ee7d;
case 0x57ee7e:c.instructions+=1;goto B57ee7e;
case 0x57ee83:goto L57ee83;
case 0x57ee88:c.instructions+=3;goto B57ee88;
case 0x57ee8a:c.instructions+=2;goto B57ee8a;
case 0x57ee8c:c.instructions+=1;goto B57ee8c;
case 0x57ee8e:goto L57ee8e;
case 0x57ee90:c.instructions+=2;goto B57ee90;
case 0x57ee92:c.instructions+=1;goto B57ee92;
case 0x57ee97:goto L57ee97;
case 0x57ee99:c.instructions+=2;goto B57ee99;
case 0x57ee9b:c.instructions+=1;goto B57ee9b;
case 0x57eea0:goto L57eea0;
case 0x57eea2:c.instructions+=2;goto B57eea2;
case 0x57eea4:c.instructions+=1;goto B57eea4;
case 0x57eea9:goto L57eea9;
case 0x57eeab:c.instructions+=2;goto B57eeab;
case 0x57eead:c.instructions+=1;goto B57eead;
case 0x57eeb2:goto L57eeb2;
case 0x57eeb5:c.instructions+=1;goto B57eeb5;
case 0x57eeb7:goto L57eeb7;
case 0x57eebd:c.instructions+=1;goto B57eebd;
case 0x57eebf:goto L57eebf;
case 0x57eec1:c.instructions+=5;goto B57eec1;
case 0x57eec4:c.instructions+=4;goto B57eec4;
case 0x57eec6:c.instructions+=3;goto B57eec6;
case 0x57eec7:c.instructions+=2;goto B57eec7;
case 0x57eecd:c.instructions+=1;goto B57eecd;
case 0x57eed2:goto L57eed2;
case 0x57eed8:c.instructions+=1;goto B57eed8;
case 0x57eeda:goto L57eeda;
case 0x57eee0:c.instructions+=5;goto B57eee0;
case 0x57eee2:c.instructions+=4;goto B57eee2;
case 0x57eee5:c.instructions+=3;goto B57eee5;
case 0x57eee7:c.instructions+=2;goto B57eee7;
case 0x57eee8:c.instructions+=1;goto B57eee8;
case 0x57eeed:goto L57eeed;
case 0x57eef3:c.instructions+=1;goto B57eef3;
case 0x57eef5:goto L57eef5;
case 0x57eefb:c.instructions+=5;goto B57eefb;
case 0x57eefd:c.instructions+=4;goto B57eefd;
case 0x57ef00:c.instructions+=3;goto B57ef00;
case 0x57ef02:c.instructions+=2;goto B57ef02;
case 0x57ef03:c.instructions+=1;goto B57ef03;
case 0x57ef08:goto L57ef08;
case 0x57ef0e:c.instructions+=1;goto B57ef0e;
case 0x57ef10:goto L57ef10;
case 0x57ef15:c.instructions+=5;goto B57ef15;
case 0x57ef17:c.instructions+=4;goto B57ef17;
case 0x57ef19:c.instructions+=3;goto B57ef19;
case 0x57ef1a:c.instructions+=2;goto B57ef1a;
case 0x57ef20:c.instructions+=1;goto B57ef20;
case 0x57ef25:goto L57ef25;
case 0x57ef29:c.instructions+=1;goto B57ef29;
case 0x57ef2b:goto L57ef2b;
case 0x57ef31:c.instructions+=1;goto B57ef31;
case 0x57ef33:goto L57ef33;
case 0x57ef39:c.instructions+=1;goto B57ef39;
case 0x57ef3f:goto L57ef3f;
case 0x57ef40:c.instructions+=5;goto B57ef40;
case 0x57ef41:c.instructions+=4;goto B57ef41;
case 0x57ef42:c.instructions+=3;goto B57ef42;
case 0x57ef43:c.instructions+=2;goto B57ef43;
case 0x57ef46:c.instructions+=1;goto B57ef46;
case 0x57ef4b:goto L57ef4b;
case 0x57ef4c:c.instructions+=5;goto B57ef4c;
case 0x57ef4d:c.instructions+=4;goto B57ef4d;
case 0x57ef4e:c.instructions+=3;goto B57ef4e;
case 0x57ef4f:c.instructions+=2;goto B57ef4f;
case 0x57ef52:c.instructions+=1;goto B57ef52;
case 0x57ef60:goto L57ef60;
case 0x57ef65:c.instructions+=2;goto B57ef65;
case 0x57ef67:c.instructions+=1;goto B57ef67;
case 0x57ef69:goto L57ef69;
case 0x57ef6f:c.instructions+=4;goto B57ef6f;
case 0x57ef70:c.instructions+=3;goto B57ef70;
case 0x57ef7a:c.instructions+=2;goto B57ef7a;
case 0x57ef84:c.instructions+=1;goto B57ef84;
case 0x57ef86:goto L57ef86;
case 0x57ef89:goto L57ef89;
case 0x57ef8a:c.instructions+=1;goto B57ef8a;
case 0x57ef8f:goto L57ef8f;
case 0x57ef94:c.instructions+=2;goto B57ef94;
case 0x57ef96:c.instructions+=1;goto B57ef96;
case 0x57ef98:goto L57ef98;
case 0x57ef9e:c.instructions+=2;goto B57ef9e;
case 0x57efa3:c.instructions+=1;goto B57efa3;
case 0x57efa8:goto L57efa8;
case 0x57efaa:c.instructions+=1;goto B57efaa;
case 0x57efac:goto L57efac;
case 0x57efb0:goto L57efb0;
case 0x57efb6:c.instructions+=2;goto B57efb6;
case 0x57efb8:c.instructions+=1;goto B57efb8;
case 0x57efba:goto L57efba;
case 0x57efbc:c.instructions+=2;goto B57efbc;
case 0x57efbe:c.instructions+=1;goto B57efbe;
case 0x57efc0:goto L57efc0;
case 0x57efc2:c.instructions+=2;goto B57efc2;
case 0x57efc3:c.instructions+=1;goto B57efc3;
case 0x57efc4:goto L57efc4;
case 0x57efc6:c.instructions+=1;goto B57efc6;
case 0x57efcb:goto L57efcb;
case 0x57efd1:c.instructions+=2;goto B57efd1;
case 0x57efd3:c.instructions+=1;goto B57efd3;
case 0x57efd5:goto L57efd5;
case 0x57efdb:c.instructions+=3;goto B57efdb;
case 0x57efe1:c.instructions+=2;goto B57efe1;
case 0x57efe3:c.instructions+=1;goto B57efe3;
case 0x57efe5:goto L57efe5;
case 0x57efeb:c.instructions+=2;goto B57efeb;
case 0x57efec:c.instructions+=1;goto B57efec;
case 0x57efee:goto L57efee;
case 0x57eff1:goto L57eff1;
case 0x57eff6:c.instructions+=2;goto B57eff6;
case 0x57eff7:c.instructions+=1;goto B57eff7;
default:missing_instruction(c.pc);}
B57e005:L57e005:{c.instructions+=6;NFSU2_TR(0x57e005);
__builtin_memmove((R+0),gp(0x864ff4),4);
}
B57e00a:{NFSU2_TR(0x57e00a);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e010:{NFSU2_TR(0x57e010);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e012:{NFSU2_TR(0x57e012);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e014:{NFSU2_TR(0x57e014);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e015:{NFSU2_TR(0x57e015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e01aull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e01a:L57e01a:{c.instructions+=3;NFSU2_TR(0x57e01a);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e01f:{NFSU2_TR(0x57e01f);
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
B57e021:{NFSU2_TR(0x57e021);
if(r1(R+518)){{goto L57e0fb;}}
}
B57e027:L57e027:{c.instructions+=6;NFSU2_TR(0x57e027);
__builtin_memmove((R+4),gp(0x7faa5c),4);
}
B57e02d:{NFSU2_TR(0x57e02d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e02f:{NFSU2_TR(0x57e02f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e031:{NFSU2_TR(0x57e031);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e032:{NFSU2_TR(0x57e032);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e038:{NFSU2_TR(0x57e038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e03dull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e03d:L57e03d:{c.instructions+=3;NFSU2_TR(0x57e03d);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e042:{NFSU2_TR(0x57e042);
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
B57e044:{NFSU2_TR(0x57e044);
if(r1(R+518)){{goto L57e0fb;}}
}
B57e04a:L57e04a:{c.instructions+=6;NFSU2_TR(0x57e04a);
__builtin_memmove((R+8),gp(0x865050),4);
}
B57e050:{NFSU2_TR(0x57e050);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e056:{NFSU2_TR(0x57e056);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e058:{NFSU2_TR(0x57e058);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e05a:{NFSU2_TR(0x57e05a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e05b:{NFSU2_TR(0x57e05b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e060ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e060:L57e060:{c.instructions+=3;NFSU2_TR(0x57e060);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e065:{NFSU2_TR(0x57e065);
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
B57e067:{NFSU2_TR(0x57e067);
if(r1(R+518)){{goto L57e0fb;}}
}
B57e06d:L57e06d:{c.instructions+=6;NFSU2_TR(0x57e06d);
__builtin_memmove((R+0),gp(0x865098),4);
}
B57e072:{NFSU2_TR(0x57e072);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e078:{NFSU2_TR(0x57e078);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e07a:{NFSU2_TR(0x57e07a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e07c:{NFSU2_TR(0x57e07c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e07d:{NFSU2_TR(0x57e07d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e082ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e082:L57e082:{c.instructions+=3;NFSU2_TR(0x57e082);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e087:{NFSU2_TR(0x57e087);
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
B57e089:{NFSU2_TR(0x57e089);
if(r1(R+518)){{goto L57e0fb;}}
}
B57e08b:L57e08b:{c.instructions+=6;NFSU2_TR(0x57e08b);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B57e091:{NFSU2_TR(0x57e091);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e093:{NFSU2_TR(0x57e093);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e095:{NFSU2_TR(0x57e095);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e096:{NFSU2_TR(0x57e096);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e09c:{NFSU2_TR(0x57e09c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e0a1ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e0a1:L57e0a1:{c.instructions+=3;NFSU2_TR(0x57e0a1);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e0a6:{NFSU2_TR(0x57e0a6);
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
B57e0a8:{NFSU2_TR(0x57e0a8);
if(r1(R+518)){{goto L57e0fb;}}
}
B57e0aa:L57e0aa:{c.instructions+=6;NFSU2_TR(0x57e0aa);
__builtin_memmove((R+8),gp(0x7faab0),4);
}
B57e0b0:{NFSU2_TR(0x57e0b0);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e0b6:{NFSU2_TR(0x57e0b6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e0b8:{NFSU2_TR(0x57e0b8);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e0ba:{NFSU2_TR(0x57e0ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e0bb:{NFSU2_TR(0x57e0bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e0c0ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e0c0:L57e0c0:{c.instructions+=3;NFSU2_TR(0x57e0c0);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e0c5:{NFSU2_TR(0x57e0c5);
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
B57e0c7:{NFSU2_TR(0x57e0c7);
if(r1(R+518)){{goto L57e0fb;}}
}
B57e0c9:L57e0c9:{c.instructions+=6;NFSU2_TR(0x57e0c9);
__builtin_memmove((R+0),gp(0x8650a8),4);
}
B57e0ce:{NFSU2_TR(0x57e0ce);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e0d4:{NFSU2_TR(0x57e0d4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e0d6:{NFSU2_TR(0x57e0d6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e0d8:{NFSU2_TR(0x57e0d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e0d9:{NFSU2_TR(0x57e0d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e0deull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e0de:L57e0de:{c.instructions+=3;NFSU2_TR(0x57e0de);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e0e3:{NFSU2_TR(0x57e0e3);
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
B57e0e5:{NFSU2_TR(0x57e0e5);
if(r1(R+518)){{goto L57e0fb;}}
}
B57e0e7:L57e0e7:{c.instructions+=5;NFSU2_TR(0x57e0e7);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e0ed:{NFSU2_TR(0x57e0ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e0ef:{NFSU2_TR(0x57e0ef);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e0f1:{NFSU2_TR(0x57e0f1);
u8 U[4];
w4(U+0,u32(0x12341111ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e0f6:{NFSU2_TR(0x57e0f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e0fbull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e0fb:L57e0fb:{c.instructions+=1;NFSU2_TR(0x57e0fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e100:L57e100:{c.instructions+=5;NFSU2_TR(0x57e100);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57e104:{NFSU2_TR(0x57e104);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57e106:{NFSU2_TR(0x57e106);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e107:{NFSU2_TR(0x57e107);
__builtin_memmove((R+24),(R+4),4);
}
B57e109:{NFSU2_TR(0x57e109);
if(r1(R+518)){{goto L57e1b4;}}
}
B57e10f:L57e10f:{c.instructions+=3;NFSU2_TR(0x57e10f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57e112:{NFSU2_TR(0x57e112);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57e114:{NFSU2_TR(0x57e114);
if(r1(R+518)){{goto L57e150;}}
}
B57e116:L57e116:{c.instructions+=3;NFSU2_TR(0x57e116);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e119:{NFSU2_TR(0x57e119);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e11b:{NFSU2_TR(0x57e11b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e150;}}
}
B57e11d:L57e11d:{c.instructions+=3;NFSU2_TR(0x57e11d);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B57e123:{NFSU2_TR(0x57e123);
u8 U[4];
w4(U+0,u32(0x7a08c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e128:{NFSU2_TR(0x57e128);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e12dull));
TAIL_STATIC(0x57ad30u,57a);
}
B57e12d:L57e12d:{c.instructions+=3;NFSU2_TR(0x57e12d);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B57e133:{NFSU2_TR(0x57e133);
u8 U[4];
w4(U+0,u32(0x7a08c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e138:{NFSU2_TR(0x57e138);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e13dull));
TAIL_STATIC(0x57c080u,57c);
}
B57e13d:L57e13d:{c.instructions+=3;NFSU2_TR(0x57e13d);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B57e143:{NFSU2_TR(0x57e143);
u8 U[4];
w4(U+0,u32(0x7a0844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e148:{NFSU2_TR(0x57e148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e14dull));
TAIL_STATIC(0x57c080u,57c);
}
B57e14d:L57e14d:{c.instructions+=1;NFSU2_TR(0x57e14d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e150:L57e150:{c.instructions+=3;NFSU2_TR(0x57e150);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57e153:{NFSU2_TR(0x57e153);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57e155:{NFSU2_TR(0x57e155);
if(r1(R+518)){{goto L57e1b4;}}
}
B57e157:L57e157:{c.instructions+=3;NFSU2_TR(0x57e157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e15a:{NFSU2_TR(0x57e15a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e15c:{NFSU2_TR(0x57e15c);
if(r1(R+518)){{goto L57e1b4;}}
}
B57e15e:L57e15e:{c.instructions+=5;NFSU2_TR(0x57e15e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57e161:{NFSU2_TR(0x57e161);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B57e167:{NFSU2_TR(0x57e167);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ee0ull))));
}
B57e16d:{NFSU2_TR(0x57e16d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57e16f:{NFSU2_TR(0x57e16f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57e1b4;}}
}
B57e171:L57e171:{c.instructions+=7;NFSU2_TR(0x57e171);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B57e177:{NFSU2_TR(0x57e177);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e178:{NFSU2_TR(0x57e178);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57e17b:{NFSU2_TR(0x57e17b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e17c:{NFSU2_TR(0x57e17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57e17f:{NFSU2_TR(0x57e17f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e180:{NFSU2_TR(0x57e180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e185ull));
TAIL_STATIC(0x579050u,579);
}
B57e185:L57e185:{c.instructions+=3;NFSU2_TR(0x57e185);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B57e18b:{NFSU2_TR(0x57e18b);
u8 U[4];
w4(U+0,u32(0x7a0844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e190:{NFSU2_TR(0x57e190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e195ull));
TAIL_STATIC(0x57c080u,57c);
}
B57e195:L57e195:{c.instructions+=3;NFSU2_TR(0x57e195);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e197:{NFSU2_TR(0x57e197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e19a:{NFSU2_TR(0x57e19a);
if(r1(R+518)){{goto L57e1a2;}}
}
B57e19c:L57e19c:{c.instructions+=2;NFSU2_TR(0x57e19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e19f:{NFSU2_TR(0x57e19f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e1a2:L57e1a2:{c.instructions+=3;NFSU2_TR(0x57e1a2);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B57e1a8:{NFSU2_TR(0x57e1a8);
u8 U[4];
w4(U+0,u32(0x7a0844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e1ad:{NFSU2_TR(0x57e1ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e1b2ull));
TAIL_STATIC(0x57ac40u,57a);
}
B57e1b2:L57e1b2:{c.instructions+=2;NFSU2_TR(0x57e1b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e1b3:{NFSU2_TR(0x57e1b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57e1b4:L57e1b4:{c.instructions+=3;NFSU2_TR(0x57e1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e1b7:{NFSU2_TR(0x57e1b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e1b9:{NFSU2_TR(0x57e1b9);
if(r1(R+518)){{goto L57e1cd;}}
}
B57e1bb:L57e1bb:{c.instructions+=4;NFSU2_TR(0x57e1bb);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B57e1c1:{NFSU2_TR(0x57e1c1);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B57e1c7:{NFSU2_TR(0x57e1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e1ca:{NFSU2_TR(0x57e1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e1cd:L57e1cd:{c.instructions+=3;NFSU2_TR(0x57e1cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e1d0:{NFSU2_TR(0x57e1d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e1d2:{NFSU2_TR(0x57e1d2);
if(r1(R+518)){{goto L57e1e7;}}
}
B57e1d4:L57e1d4:{c.instructions+=2;NFSU2_TR(0x57e1d4);
__builtin_memmove((R+4),(R+24),4);
}
B57e1d6:{NFSU2_TR(0x57e1d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e1dbull));
TAIL_STATIC(0x57d3f0u,57d);
}
B57e1db:L57e1db:{c.instructions+=2;NFSU2_TR(0x57e1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57e1e2:{NFSU2_TR(0x57e1e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e1e7ull));
TAIL_STATIC(0x4022c0u,402);
}
B57e1e7:L57e1e7:{c.instructions+=3;NFSU2_TR(0x57e1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e1ea:{NFSU2_TR(0x57e1ea);
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
B57e1ec:{NFSU2_TR(0x57e1ec);
if(r1(R+518)){{goto L57e201;}}
}
B57e1ee:L57e1ee:{c.instructions+=2;NFSU2_TR(0x57e1ee);
__builtin_memmove((R+4),(R+24),4);
}
B57e1f0:{NFSU2_TR(0x57e1f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e1f5ull));
TAIL_STATIC(0x57afe0u,57a);
}
B57e1f5:L57e1f5:{c.instructions+=2;NFSU2_TR(0x57e1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57e1fc:{NFSU2_TR(0x57e1fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e201ull));
TAIL_STATIC(0x4022c0u,402);
}
B57e201:L57e201:{c.instructions+=2;NFSU2_TR(0x57e201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e202:{NFSU2_TR(0x57e202);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e210:L57e210:{c.instructions+=9;NFSU2_TR(0x57e210);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e214:{NFSU2_TR(0x57e214);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e215:{NFSU2_TR(0x57e215);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e216:{NFSU2_TR(0x57e216);
__builtin_memmove((R+24),(R+4),4);
}
B57e218:{NFSU2_TR(0x57e218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57e21b:{NFSU2_TR(0x57e21b);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B57e21d:{NFSU2_TR(0x57e21d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e223:{NFSU2_TR(0x57e223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57e225:{NFSU2_TR(0x57e225);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e22e;}}
}
B57e227:L57e227:{c.instructions+=2;NFSU2_TR(0x57e227);
w4(R+12,u32(0x4000ull));
}
B57e22c:{NFSU2_TR(0x57e22c);
{goto L57e232;}
}
B57e22e:L57e22e:{c.instructions+=2;NFSU2_TR(0x57e22e);
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
B57e230:{NFSU2_TR(0x57e230);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e295;}}
}
B57e232:L57e232:{c.instructions+=6;NFSU2_TR(0x57e232);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e233:{NFSU2_TR(0x57e233);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e235:{NFSU2_TR(0x57e235);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57e238:{NFSU2_TR(0x57e238);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e23a:{NFSU2_TR(0x57e23a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e23b:{NFSU2_TR(0x57e23b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e240ull));
TAIL_STATIC(0x57ca10u,57c);
}
B57e240:L57e240:{c.instructions+=5;NFSU2_TR(0x57e240);
__builtin_memmove((R+28),(R+0),4);
}
B57e242:{NFSU2_TR(0x57e242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57e244:{NFSU2_TR(0x57e244);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57e247:{NFSU2_TR(0x57e247);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e249:{NFSU2_TR(0x57e249);
if(r1(R+518)){{goto L57e24e;}}
}
B57e24b:L57e24b:{c.instructions+=1;NFSU2_TR(0x57e24b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e24e:L57e24e:{c.instructions+=5;NFSU2_TR(0x57e24e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e24f:{NFSU2_TR(0x57e24f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57e255:{NFSU2_TR(0x57e255);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e256:{NFSU2_TR(0x57e256);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e257:{NFSU2_TR(0x57e257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e25cull));
TAIL_STATIC(0x57d9b0u,57d);
}
B57e25c:L57e25c:{c.instructions+=3;NFSU2_TR(0x57e25c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57e25f:{NFSU2_TR(0x57e25f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e261:{NFSU2_TR(0x57e261);
if(r1(R+518)){{goto L57e28a;}}
}
B57e263:L57e263:{c.instructions+=3;NFSU2_TR(0x57e263);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e266:{NFSU2_TR(0x57e266);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e268:{NFSU2_TR(0x57e268);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e281;}}
}
B57e26a:L57e26a:{c.instructions+=9;NFSU2_TR(0x57e26a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57e271:{NFSU2_TR(0x57e271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57e273:{NFSU2_TR(0x57e273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e276:{NFSU2_TR(0x57e276);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57e278:{NFSU2_TR(0x57e278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e279:{NFSU2_TR(0x57e279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e27c:{NFSU2_TR(0x57e27c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e27d:{NFSU2_TR(0x57e27d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57e27e:{NFSU2_TR(0x57e27e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e281:L57e281:{c.instructions+=3;NFSU2_TR(0x57e281);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e283:{NFSU2_TR(0x57e283);
__builtin_memmove((R+4),(R+28),4);
}
B57e285:{NFSU2_TR(0x57e285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e28aull));
TAIL_STATIC(0x579b90u,579);
}
B57e28a:L57e28a:{c.instructions+=5;NFSU2_TR(0x57e28a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57e28c:{NFSU2_TR(0x57e28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e28f:{NFSU2_TR(0x57e28f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57e291:{NFSU2_TR(0x57e291);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e294:{NFSU2_TR(0x57e294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e295:L57e295:{c.instructions+=3;NFSU2_TR(0x57e295);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e296:{NFSU2_TR(0x57e296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57e297:{NFSU2_TR(0x57e297);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e2a0:L57e2a0:{c.instructions+=7;NFSU2_TR(0x57e2a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B57e2a3:{NFSU2_TR(0x57e2a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e2a4:{NFSU2_TR(0x57e2a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e2a5:{NFSU2_TR(0x57e2a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e2a6:{NFSU2_TR(0x57e2a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e2a7:{NFSU2_TR(0x57e2a7);
__builtin_memmove((R+24),(R+4),4);
}
B57e2a9:{NFSU2_TR(0x57e2a9);
__builtin_memmove((R+16),(R+16),4);
}
B57e2b0:L57e2b0:{c.instructions+=6;NFSU2_TR(0x57e2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e2b3:{NFSU2_TR(0x57e2b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57e2b5:{NFSU2_TR(0x57e2b5);
__builtin_memmove((R+8),(R+0),4);
}
B57e2b7:{NFSU2_TR(0x57e2b7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B57e2b9:{NFSU2_TR(0x57e2b9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57e2bf:{NFSU2_TR(0x57e2bf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57e2ce;}}
}
B57e2c1:L57e2c1:{c.instructions+=2;NFSU2_TR(0x57e2c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57e2c4:{NFSU2_TR(0x57e2c4);
if(r1(R+518)){{goto L57e2ce;}}
}
B57e2c6:L57e2c6:{c.instructions+=3;NFSU2_TR(0x57e2c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e2c7:{NFSU2_TR(0x57e2c7);
__builtin_memmove((R+4),(R+24),4);
}
B57e2c9:{NFSU2_TR(0x57e2c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e2ceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e210u);}goto L57e210;}
}
B57e2ce:L57e2ce:{c.instructions+=15;NFSU2_TR(0x57e2ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B57e2d0:{NFSU2_TR(0x57e2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57e2d3:{NFSU2_TR(0x57e2d3);
__builtin_memmove((R+0),(R+28),4);
}
B57e2d5:{NFSU2_TR(0x57e2d5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B57e2d7:{NFSU2_TR(0x57e2d7);
u8 U[13];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B57e2df:{NFSU2_TR(0x57e2df);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B57e2e6:{NFSU2_TR(0x57e2e6);
__builtin_memmove((R+0),(R+4),4);
}
B57e2e8:{NFSU2_TR(0x57e2e8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B57e2eb:{NFSU2_TR(0x57e2eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B57e2ee:{NFSU2_TR(0x57e2ee);
__builtin_memmove((R+12),(R+4),4);
}
B57e2f0:{NFSU2_TR(0x57e2f0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B57e2f1:{NFSU2_TR(0x57e2f1);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57e2f3:{NFSU2_TR(0x57e2f3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e2f5:{NFSU2_TR(0x57e2f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e2f9:{NFSU2_TR(0x57e2f9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e311;}}
}
B57e2fb:L57e2fb:{c.instructions+=2;NFSU2_TR(0x57e2fb);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B57e2ff:{NFSU2_TR(0x57e2ff);
__builtin_memmove((R+8),(R+0),4);
}
B57e301:L57e301:{c.instructions+=6;NFSU2_TR(0x57e301);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B57e304:{NFSU2_TR(0x57e304);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B57e307:{NFSU2_TR(0x57e307);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+12))));
}
B57e309:{NFSU2_TR(0x57e309);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B57e30a:{NFSU2_TR(0x57e30a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B57e30b:{NFSU2_TR(0x57e30b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e301u);}goto L57e301;}}
}
B57e30d:L57e30d:{c.instructions+=1;NFSU2_TR(0x57e30d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57e311:L57e311:{c.instructions+=6;NFSU2_TR(0x57e311);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B57e315:{NFSU2_TR(0x57e315);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B57e318:{NFSU2_TR(0x57e318);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57e31a:{NFSU2_TR(0x57e31a);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fb441ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B57e321:{NFSU2_TR(0x57e321);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57e323:{NFSU2_TR(0x57e323);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e2b0u);}goto L57e2b0;}}
}
B57e325:L57e325:{c.instructions+=2;NFSU2_TR(0x57e325);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B57e328:{NFSU2_TR(0x57e328);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57e384;}}
}
B57e32a:L57e32a:{c.instructions+=1;NFSU2_TR(0x57e32a);
__builtin_memmove((R+12),(R+12),4);
}
B57e330:L57e330:{c.instructions+=6;NFSU2_TR(0x57e330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e333:{NFSU2_TR(0x57e333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57e335:{NFSU2_TR(0x57e335);
__builtin_memmove((R+8),(R+0),4);
}
B57e337:{NFSU2_TR(0x57e337);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B57e339:{NFSU2_TR(0x57e339);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57e33f:{NFSU2_TR(0x57e33f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57e34e;}}
}
B57e341:L57e341:{c.instructions+=2;NFSU2_TR(0x57e341);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57e344:{NFSU2_TR(0x57e344);
if(r1(R+518)){{goto L57e34e;}}
}
B57e346:L57e346:{c.instructions+=3;NFSU2_TR(0x57e346);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e347:{NFSU2_TR(0x57e347);
__builtin_memmove((R+4),(R+24),4);
}
B57e349:{NFSU2_TR(0x57e349);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e34eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e210u);}goto L57e210;}
}
B57e34e:L57e34e:{c.instructions+=13;NFSU2_TR(0x57e34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57e351:{NFSU2_TR(0x57e351);
__builtin_memmove((R+0),(R+28),4);
}
B57e353:{NFSU2_TR(0x57e353);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B57e355:{NFSU2_TR(0x57e355);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B57e35c:{NFSU2_TR(0x57e35c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B57e35f:{NFSU2_TR(0x57e35f);
__builtin_memmove((R+4),(R+0),4);
}
B57e361:{NFSU2_TR(0x57e361);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B57e364:{NFSU2_TR(0x57e364);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B57e367:{NFSU2_TR(0x57e367);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B57e36b:{NFSU2_TR(0x57e36b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B57e36e:{NFSU2_TR(0x57e36e);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fb441ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B57e375:{NFSU2_TR(0x57e375);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57e377:{NFSU2_TR(0x57e377);
if(r1(R+518)){{goto L57e384;}}
}
B57e379:L57e379:{c.instructions+=5;NFSU2_TR(0x57e379);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57e37b:{NFSU2_TR(0x57e37b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e37e:{NFSU2_TR(0x57e37e);
__builtin_memmove((R+8),(R+28),4);
}
B57e380:{NFSU2_TR(0x57e380);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57e382:{NFSU2_TR(0x57e382);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e330u);}goto L57e330;}}
}
B57e384:L57e384:{c.instructions+=2;NFSU2_TR(0x57e384);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57e388:{NFSU2_TR(0x57e388);
if(r1(R+518)){{goto L57e396;}}
}
B57e38a:L57e38a:{c.instructions+=2;NFSU2_TR(0x57e38a);
__builtin_memmove((R+4),(R+24),4);
}
B57e38c:{NFSU2_TR(0x57e38c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e391ull));
TAIL_STATIC(0x579700u,579);
}
B57e391:L57e391:{c.instructions+=2;NFSU2_TR(0x57e391);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e394:{NFSU2_TR(0x57e394);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57e396:L57e396:{c.instructions+=7;NFSU2_TR(0x57e396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e397:{NFSU2_TR(0x57e397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e398:{NFSU2_TR(0x57e398);
__builtin_memmove((R+0),(R+20),4);
}
B57e39a:{NFSU2_TR(0x57e39a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57e39b:{NFSU2_TR(0x57e39b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57e39c:{NFSU2_TR(0x57e39c);
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
B57e39f:{NFSU2_TR(0x57e39f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e3b0:L57e3b0:{c.instructions+=3;NFSU2_TR(0x57e3b0);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B57e3b5:{NFSU2_TR(0x57e3b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e3b7:{NFSU2_TR(0x57e3b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e3bc;}}
}
B57e3b9:L57e3b9:{c.instructions+=2;NFSU2_TR(0x57e3b9);
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
B57e3bb:{NFSU2_TR(0x57e3bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e3bc:L57e3bc:{c.instructions+=7;NFSU2_TR(0x57e3bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e3c0:{NFSU2_TR(0x57e3c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57e3c4:{NFSU2_TR(0x57e3c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e3c5:{NFSU2_TR(0x57e3c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e3c6:{NFSU2_TR(0x57e3c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e3c7:{NFSU2_TR(0x57e3c7);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B57e3cd:{NFSU2_TR(0x57e3cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e3d2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e2a0u);}goto L57e2a0;}
}
B57e3d2:L57e3d2:{c.instructions+=6;NFSU2_TR(0x57e3d2);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B57e3d8:{NFSU2_TR(0x57e3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57e3db:{NFSU2_TR(0x57e3db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57e3dd:{NFSU2_TR(0x57e3dd);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57e3df:{NFSU2_TR(0x57e3df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e3e0:{NFSU2_TR(0x57e3e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57e400;}}
}
B57e3e2:L57e3e2:{c.instructions+=3;NFSU2_TR(0x57e3e2);
__builtin_memmove((R+4),gp(0x8650d0),4);
}
B57e3e8:{NFSU2_TR(0x57e3e8);
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
B57e3ea:{NFSU2_TR(0x57e3ea);
if(r1(R+518)){{goto L57e400;}}
}
B57e3ec:L57e3ec:{c.instructions+=2;NFSU2_TR(0x57e3ec);
s4(0x8650d8,u32(0x0ull));
}
B57e3f6:{NFSU2_TR(0x57e3f6);
s4(0x8650d0,u32(0x0ull));
}
B57e400:L57e400:{c.instructions+=1;NFSU2_TR(0x57e400);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e410:L57e410:{c.instructions+=6;NFSU2_TR(0x57e410);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e411:{NFSU2_TR(0x57e411);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e412:{NFSU2_TR(0x57e412);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57e416:{NFSU2_TR(0x57e416);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57e418:{NFSU2_TR(0x57e418);
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
B57e41a:{NFSU2_TR(0x57e41a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e470;}}
}
B57e41c:L57e41c:{c.instructions+=4;NFSU2_TR(0x57e41c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e41d:{NFSU2_TR(0x57e41d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57e421:{NFSU2_TR(0x57e421);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e422:{NFSU2_TR(0x57e422);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57e426:L57e426:{c.instructions+=3;NFSU2_TR(0x57e426);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B57e42b:{NFSU2_TR(0x57e42b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e42d:{NFSU2_TR(0x57e42d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e433;}}
}
B57e42f:L57e42f:{c.instructions+=2;NFSU2_TR(0x57e42f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57e431:{NFSU2_TR(0x57e431);
{goto L57e466;}
}
B57e433:L57e433:{c.instructions+=4;NFSU2_TR(0x57e433);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B57e439:{NFSU2_TR(0x57e439);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e43a:{NFSU2_TR(0x57e43a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e43c:{NFSU2_TR(0x57e43c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e441ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e2a0u);}goto L57e2a0;}
}
B57e441:L57e441:{c.instructions+=4;NFSU2_TR(0x57e441);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B57e447:{NFSU2_TR(0x57e447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57e449:{NFSU2_TR(0x57e449);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B57e44c:{NFSU2_TR(0x57e44c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57e466;}}
}
B57e44e:L57e44e:{c.instructions+=4;NFSU2_TR(0x57e44e);
__builtin_memmove((R+8),gp(0x8650d0),4);
}
B57e454:{NFSU2_TR(0x57e454);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57e456:{NFSU2_TR(0x57e456);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e458:{NFSU2_TR(0x57e458);
if(r1(R+518)){{goto L57e466;}}
}
B57e45a:L57e45a:{c.instructions+=2;NFSU2_TR(0x57e45a);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B57e460:{NFSU2_TR(0x57e460);
__builtin_memmove(gp(0x8650d0),(R+4),4);
}
B57e466:L57e466:{c.instructions+=4;NFSU2_TR(0x57e466);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B57e469:{NFSU2_TR(0x57e469);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57e46a:{NFSU2_TR(0x57e46a);
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
B57e46c:{NFSU2_TR(0x57e46c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e426u);}goto L57e426;}}
}
B57e46e:L57e46e:{c.instructions+=2;NFSU2_TR(0x57e46e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57e46f:{NFSU2_TR(0x57e46f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57e470:L57e470:{c.instructions+=3;NFSU2_TR(0x57e470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e471:{NFSU2_TR(0x57e471);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e472:{NFSU2_TR(0x57e472);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e480:L57e480:{c.instructions+=8;NFSU2_TR(0x57e480);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B57e485:{NFSU2_TR(0x57e485);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e487:{NFSU2_TR(0x57e487);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e488:{NFSU2_TR(0x57e488);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57e48c:{NFSU2_TR(0x57e48c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e48d:{NFSU2_TR(0x57e48d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e48e:{NFSU2_TR(0x57e48e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57e492:{NFSU2_TR(0x57e492);
if(r1(R+518)){{goto L57e4a2;}}
}
B57e494:L57e494:{c.instructions+=3;NFSU2_TR(0x57e494);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e495:{NFSU2_TR(0x57e495);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e496:{NFSU2_TR(0x57e496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e49bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e3b0u);}goto L57e3b0;}
}
B57e49b:L57e49b:{c.instructions+=3;NFSU2_TR(0x57e49b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57e49e:{NFSU2_TR(0x57e49e);
__builtin_memmove((R+24),(R+0),4);
}
B57e4a0:{NFSU2_TR(0x57e4a0);
{goto L57e4a6;}
}
B57e4a2:L57e4a2:{c.instructions+=1;NFSU2_TR(0x57e4a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57e4a6:L57e4a6:{c.instructions+=3;NFSU2_TR(0x57e4a6);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e4ab:{NFSU2_TR(0x57e4ab);
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
B57e4ad:{NFSU2_TR(0x57e4ad);
if(r1(R+518)){{goto L57e4bd;}}
}
B57e4af:L57e4af:{c.instructions+=5;NFSU2_TR(0x57e4af);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e4b5:{NFSU2_TR(0x57e4b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e4b6:{NFSU2_TR(0x57e4b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e4b7:{NFSU2_TR(0x57e4b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e4b8:{NFSU2_TR(0x57e4b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e4bdull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e4bd:L57e4bd:{c.instructions+=5;NFSU2_TR(0x57e4bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e4be:{NFSU2_TR(0x57e4be);
__builtin_memmove((R+0),(R+24),4);
}
B57e4c0:{NFSU2_TR(0x57e4c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e4c1:{NFSU2_TR(0x57e4c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57e4c2:{NFSU2_TR(0x57e4c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e4d0:L57e4d0:{c.instructions+=9;NFSU2_TR(0x57e4d0);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B57e4d5:{NFSU2_TR(0x57e4d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e4d7:{NFSU2_TR(0x57e4d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e4d8:{NFSU2_TR(0x57e4d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57e4dc:{NFSU2_TR(0x57e4dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e4dd:{NFSU2_TR(0x57e4dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57e4e1:{NFSU2_TR(0x57e4e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e4e2:{NFSU2_TR(0x57e4e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e4e3:{NFSU2_TR(0x57e4e3);
if(r1(R+518)){{goto L57e54c;}}
}
B57e4e5:L57e4e5:{c.instructions+=3;NFSU2_TR(0x57e4e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e4e6:{NFSU2_TR(0x57e4e6);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e4e8:{NFSU2_TR(0x57e4e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e4edull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e3b0u);}goto L57e3b0;}
}
B57e4ed:L57e4ed:{c.instructions+=5;NFSU2_TR(0x57e4ed);
__builtin_memmove((R+28),(R+0),4);
}
B57e4ef:{NFSU2_TR(0x57e4ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57e4f2:{NFSU2_TR(0x57e4f2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57e4f4:{NFSU2_TR(0x57e4f4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e4f6:{NFSU2_TR(0x57e4f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e548;}}
}
B57e4f8:L57e4f8:{c.instructions+=1;NFSU2_TR(0x57e4f8);
{goto L57e500;}
}
B57e500:L57e500:{c.instructions+=3;NFSU2_TR(0x57e500);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B57e505:{NFSU2_TR(0x57e505);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e507:{NFSU2_TR(0x57e507);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e50d;}}
}
B57e509:L57e509:{c.instructions+=2;NFSU2_TR(0x57e509);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57e50b:{NFSU2_TR(0x57e50b);
{goto L57e540;}
}
B57e50d:L57e50d:{c.instructions+=4;NFSU2_TR(0x57e50d);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B57e513:{NFSU2_TR(0x57e513);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e514:{NFSU2_TR(0x57e514);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e516:{NFSU2_TR(0x57e516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e51bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e2a0u);}goto L57e2a0;}
}
B57e51b:L57e51b:{c.instructions+=4;NFSU2_TR(0x57e51b);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B57e521:{NFSU2_TR(0x57e521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57e523:{NFSU2_TR(0x57e523);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B57e526:{NFSU2_TR(0x57e526);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57e540;}}
}
B57e528:L57e528:{c.instructions+=4;NFSU2_TR(0x57e528);
__builtin_memmove((R+8),gp(0x8650d0),4);
}
B57e52e:{NFSU2_TR(0x57e52e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57e530:{NFSU2_TR(0x57e530);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e532:{NFSU2_TR(0x57e532);
if(r1(R+518)){{goto L57e540;}}
}
B57e534:L57e534:{c.instructions+=2;NFSU2_TR(0x57e534);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B57e53a:{NFSU2_TR(0x57e53a);
__builtin_memmove(gp(0x8650d0),(R+4),4);
}
B57e540:L57e540:{c.instructions+=4;NFSU2_TR(0x57e540);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B57e543:{NFSU2_TR(0x57e543);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57e544:{NFSU2_TR(0x57e544);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57e546:{NFSU2_TR(0x57e546);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e500u);}goto L57e500;}}
}
B57e548:L57e548:{c.instructions+=1;NFSU2_TR(0x57e548);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B57e54c:L57e54c:{c.instructions+=3;NFSU2_TR(0x57e54c);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e551:{NFSU2_TR(0x57e551);
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
B57e553:{NFSU2_TR(0x57e553);
if(r1(R+518)){{goto L57e5a1;}}
}
B57e555:L57e555:{c.instructions+=2;NFSU2_TR(0x57e555);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e556:{NFSU2_TR(0x57e556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e55bull));
TAIL_STATIC(0x43dbb0u,43d);
}
B57e55b:L57e55b:{c.instructions+=5;NFSU2_TR(0x57e55b);
__builtin_memmove((R+28),(R+0),4);
}
B57e55d:{NFSU2_TR(0x57e55d);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e562:{NFSU2_TR(0x57e562);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57e565:{NFSU2_TR(0x57e565);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e567:{NFSU2_TR(0x57e567);
if(r1(R+518)){{goto L57e578;}}
}
B57e569:L57e569:{c.instructions+=5;NFSU2_TR(0x57e569);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e56f:{NFSU2_TR(0x57e56f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e570:{NFSU2_TR(0x57e570);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e572:{NFSU2_TR(0x57e572);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e573:{NFSU2_TR(0x57e573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e578ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e578:L57e578:{c.instructions+=3;NFSU2_TR(0x57e578);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57e57a:{NFSU2_TR(0x57e57a);
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
B57e57c:{NFSU2_TR(0x57e57c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e5a1;}}
}
B57e57e:L57e57e:{c.instructions+=1;NFSU2_TR(0x57e57e);
__builtin_memmove((R+28),(R+28),4);
}
B57e580:L57e580:{c.instructions+=3;NFSU2_TR(0x57e580);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e585:{NFSU2_TR(0x57e585);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e587:{NFSU2_TR(0x57e587);
if(r1(R+518)){{goto L57e59c;}}
}
B57e589:L57e589:{c.instructions+=6;NFSU2_TR(0x57e589);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(s32(s8(r1(U+8)))));
}
B57e58d:{NFSU2_TR(0x57e58d);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e593:{NFSU2_TR(0x57e593);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e594:{NFSU2_TR(0x57e594);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e596:{NFSU2_TR(0x57e596);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e597:{NFSU2_TR(0x57e597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e59cull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e59c:L57e59c:{c.instructions+=3;NFSU2_TR(0x57e59c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57e59d:{NFSU2_TR(0x57e59d);
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
B57e59f:{NFSU2_TR(0x57e59f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e580u);}goto L57e580;}}
}
B57e5a1:L57e5a1:{c.instructions+=5;NFSU2_TR(0x57e5a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e5a2:{NFSU2_TR(0x57e5a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e5a3:{NFSU2_TR(0x57e5a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57e5a4:{NFSU2_TR(0x57e5a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57e5a5:{NFSU2_TR(0x57e5a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e5b0:L57e5b0:{c.instructions+=9;NFSU2_TR(0x57e5b0);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B57e5b5:{NFSU2_TR(0x57e5b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e5b7:{NFSU2_TR(0x57e5b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e5b8:{NFSU2_TR(0x57e5b8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57e5bc:{NFSU2_TR(0x57e5bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e5bd:{NFSU2_TR(0x57e5bd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57e5c1:{NFSU2_TR(0x57e5c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e5c2:{NFSU2_TR(0x57e5c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e5c3:{NFSU2_TR(0x57e5c3);
if(r1(R+518)){{goto L57e631;}}
}
B57e5c5:L57e5c5:{c.instructions+=3;NFSU2_TR(0x57e5c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e5c6:{NFSU2_TR(0x57e5c6);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e5c8:{NFSU2_TR(0x57e5c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e5cdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e3b0u);}goto L57e3b0;}
}
B57e5cd:L57e5cd:{c.instructions+=5;NFSU2_TR(0x57e5cd);
__builtin_memmove((R+28),(R+0),4);
}
B57e5cf:{NFSU2_TR(0x57e5cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57e5d2:{NFSU2_TR(0x57e5d2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57e5d4:{NFSU2_TR(0x57e5d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e5d6:{NFSU2_TR(0x57e5d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e62a;}}
}
B57e5d8:L57e5d8:{c.instructions+=1;NFSU2_TR(0x57e5d8);
{goto L57e5e0;}
}
B57e5e0:L57e5e0:{c.instructions+=3;NFSU2_TR(0x57e5e0);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B57e5e5:{NFSU2_TR(0x57e5e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e5e7:{NFSU2_TR(0x57e5e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e5ed;}}
}
B57e5e9:L57e5e9:{c.instructions+=2;NFSU2_TR(0x57e5e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57e5eb:{NFSU2_TR(0x57e5eb);
{goto L57e620;}
}
B57e5ed:L57e5ed:{c.instructions+=4;NFSU2_TR(0x57e5ed);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B57e5f3:{NFSU2_TR(0x57e5f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e5f4:{NFSU2_TR(0x57e5f4);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e5f6:{NFSU2_TR(0x57e5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e5fbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e2a0u);}goto L57e2a0;}
}
B57e5fb:L57e5fb:{c.instructions+=4;NFSU2_TR(0x57e5fb);
__builtin_memmove((R+4),gp(0x8650d8),4);
}
B57e601:{NFSU2_TR(0x57e601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57e603:{NFSU2_TR(0x57e603);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B57e606:{NFSU2_TR(0x57e606);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57e620;}}
}
B57e608:L57e608:{c.instructions+=4;NFSU2_TR(0x57e608);
__builtin_memmove((R+8),gp(0x8650d0),4);
}
B57e60e:{NFSU2_TR(0x57e60e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57e610:{NFSU2_TR(0x57e610);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e612:{NFSU2_TR(0x57e612);
if(r1(R+518)){{goto L57e620;}}
}
B57e614:L57e614:{c.instructions+=2;NFSU2_TR(0x57e614);
__builtin_memmove(gp(0x8650d8),(R+4),4);
}
B57e61a:{NFSU2_TR(0x57e61a);
__builtin_memmove(gp(0x8650d0),(R+4),4);
}
B57e620:L57e620:{c.instructions+=4;NFSU2_TR(0x57e620);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B57e625:{NFSU2_TR(0x57e625);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57e626:{NFSU2_TR(0x57e626);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57e628:{NFSU2_TR(0x57e628);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e5e0u);}goto L57e5e0;}}
}
B57e62a:L57e62a:{c.instructions+=1;NFSU2_TR(0x57e62a);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
w2(U+8,u16(0x0ull));
s2(u32(r4(U+4)),r2(U+8));
}
B57e631:L57e631:{c.instructions+=3;NFSU2_TR(0x57e631);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e636:{NFSU2_TR(0x57e636);
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
B57e638:{NFSU2_TR(0x57e638);
if(r1(R+518)){{goto L57e685;}}
}
B57e63a:L57e63a:{c.instructions+=2;NFSU2_TR(0x57e63a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e63b:{NFSU2_TR(0x57e63b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e640ull));
TAIL_STATIC(0x43dfe0u,43d);
}
B57e640:L57e640:{c.instructions+=5;NFSU2_TR(0x57e640);
__builtin_memmove((R+28),(R+0),4);
}
B57e642:{NFSU2_TR(0x57e642);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e647:{NFSU2_TR(0x57e647);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57e64a:{NFSU2_TR(0x57e64a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e64c:{NFSU2_TR(0x57e64c);
if(r1(R+518)){{goto L57e65d;}}
}
B57e64e:L57e64e:{c.instructions+=5;NFSU2_TR(0x57e64e);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e654:{NFSU2_TR(0x57e654);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e655:{NFSU2_TR(0x57e655);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e657:{NFSU2_TR(0x57e657);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e658:{NFSU2_TR(0x57e658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e65dull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e65d:L57e65d:{c.instructions+=3;NFSU2_TR(0x57e65d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57e65f:{NFSU2_TR(0x57e65f);
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
B57e661:{NFSU2_TR(0x57e661);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e685;}}
}
B57e663:L57e663:{c.instructions+=3;NFSU2_TR(0x57e663);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57e668:{NFSU2_TR(0x57e668);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e66a:{NFSU2_TR(0x57e66a);
if(r1(R+518)){{goto L57e680;}}
}
B57e66c:L57e66c:{c.instructions+=6;NFSU2_TR(0x57e66c);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B57e671:{NFSU2_TR(0x57e671);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e677:{NFSU2_TR(0x57e677);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e678:{NFSU2_TR(0x57e678);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e67a:{NFSU2_TR(0x57e67a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e67b:{NFSU2_TR(0x57e67b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e680ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e680:L57e680:{c.instructions+=3;NFSU2_TR(0x57e680);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57e681:{NFSU2_TR(0x57e681);
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
B57e683:{NFSU2_TR(0x57e683);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e663u);}goto L57e663;}}
}
B57e685:L57e685:{c.instructions+=5;NFSU2_TR(0x57e685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e686:{NFSU2_TR(0x57e686);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e687:{NFSU2_TR(0x57e687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57e688:{NFSU2_TR(0x57e688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57e689:{NFSU2_TR(0x57e689);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e690:L57e690:{c.instructions+=10;NFSU2_TR(0x57e690);
__builtin_memmove((R+0),gp(0x8650d8),4);
}
B57e695:{NFSU2_TR(0x57e695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B57e69b:{NFSU2_TR(0x57e69b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e69c:{NFSU2_TR(0x57e69c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e69d:{NFSU2_TR(0x57e69d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e69e:{NFSU2_TR(0x57e69e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e6a0:{NFSU2_TR(0x57e6a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B57e6a3:{NFSU2_TR(0x57e6a3);
u8 U[4];
w4(U+0,u32(0x8650e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e6a8:{NFSU2_TR(0x57e6a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e6a9:{NFSU2_TR(0x57e6a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e6aeull));
TAIL_STATIC(0x57da10u,57d);
}
B57e6ae:L57e6ae:{c.instructions+=9;NFSU2_TR(0x57e6ae);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e6b0:{NFSU2_TR(0x57e6b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57e6b4:{NFSU2_TR(0x57e6b4);
__builtin_memmove((R+28),(R+0),4);
}
B57e6b6:{NFSU2_TR(0x57e6b6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e6b8:{NFSU2_TR(0x57e6b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e6b9:{NFSU2_TR(0x57e6b9);
__builtin_memmove(gp(0x8650e8),(R+28),4);
}
B57e6bf:{NFSU2_TR(0x57e6bf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57e6c1:{NFSU2_TR(0x57e6c1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57e6c3:{NFSU2_TR(0x57e6c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e6c8ull));
TAIL_STATIC(0x573090u,573);
}
B57e6c8:L57e6c8:{c.instructions+=3;NFSU2_TR(0x57e6c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B57e6cb:{NFSU2_TR(0x57e6cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e6cd:{NFSU2_TR(0x57e6cd);
if(r1(R+518)){{goto L57e704;}}
}
B57e6cf:L57e6cf:{c.instructions+=1;NFSU2_TR(0x57e6cf);
}
B57e6d0:L57e6d0:{c.instructions+=2;NFSU2_TR(0x57e6d0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1feull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e6d6:{NFSU2_TR(0x57e6d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e6e4;}}
}
B57e6d8:L57e6d8:{c.instructions+=2;NFSU2_TR(0x57e6d8);
w4(R+24,u32(0x1ffull));
}
B57e6dd:{NFSU2_TR(0x57e6dd);
u8 U[5];
w4(U+0,u32(u32(u32(0x20bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57e6e4:L57e6e4:{c.instructions+=2;NFSU2_TR(0x57e6e4);
u8 U[15];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(r1(R+12))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B57e6e8:{NFSU2_TR(0x57e6e8);
if(r1(R+518)){{goto L57e6ed;}}
}
B57e6ea:L57e6ea:{c.instructions+=2;NFSU2_TR(0x57e6ea);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57e6eb:{NFSU2_TR(0x57e6eb);
{goto L57e6ef;}
}
B57e6ed:L57e6ed:{c.instructions+=1;NFSU2_TR(0x57e6ed);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57e6ef:L57e6ef:{c.instructions+=5;NFSU2_TR(0x57e6ef);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e6f1:{NFSU2_TR(0x57e6f1);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B57e6f5:{NFSU2_TR(0x57e6f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e6f7:{NFSU2_TR(0x57e6f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e6f8:{NFSU2_TR(0x57e6f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e6fdull));
TAIL_STATIC(0x573090u,573);
}
B57e6fd:L57e6fd:{c.instructions+=3;NFSU2_TR(0x57e6fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57e700:{NFSU2_TR(0x57e700);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57e702:{NFSU2_TR(0x57e702);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e6d0u);}goto L57e6d0;}}
}
B57e704:L57e704:{c.instructions+=2;NFSU2_TR(0x57e704);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e705:{NFSU2_TR(0x57e705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e70aull));
TAIL_STATIC(0x440540u,440);
}
B57e70a:L57e70a:{c.instructions+=8;NFSU2_TR(0x57e70a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57e70d:{NFSU2_TR(0x57e70d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e70e:{NFSU2_TR(0x57e70e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e70f:{NFSU2_TR(0x57e70f);
__builtin_memmove(gp(0x8650e8),(R+12),4);
}
B57e715:{NFSU2_TR(0x57e715);
__builtin_memmove(gp(0x8650e0),(R+12),4);
}
B57e71b:{NFSU2_TR(0x57e71b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57e71c:{NFSU2_TR(0x57e71c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x200ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x200ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57e722:{NFSU2_TR(0x57e722);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e730:L57e730:{c.instructions+=3;NFSU2_TR(0x57e730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e731:{NFSU2_TR(0x57e731);
__builtin_memmove((R+24),(R+4),4);
}
B57e733:{NFSU2_TR(0x57e733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e738ull));
TAIL_STATIC(0x57a1a0u,57a);
}
B57e738:L57e738:{c.instructions+=5;NFSU2_TR(0x57e738);
{u32 ea_=u32(u32(8802540u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57e73e:{NFSU2_TR(0x57e73e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e741:{NFSU2_TR(0x57e741);
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
B57e743:{NFSU2_TR(0x57e743);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57e746:{NFSU2_TR(0x57e746);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e751;}}
}
B57e748:L57e748:{c.instructions+=3;NFSU2_TR(0x57e748);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57e74f:{NFSU2_TR(0x57e74f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e750:{NFSU2_TR(0x57e750);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e751:L57e751:{c.instructions+=6;NFSU2_TR(0x57e751);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e752:{NFSU2_TR(0x57e752);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e754:{NFSU2_TR(0x57e754);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B57e757:{NFSU2_TR(0x57e757);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e759:{NFSU2_TR(0x57e759);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e75a:{NFSU2_TR(0x57e75a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e75full));
TAIL_STATIC(0x57ca10u,57c);
}
B57e75f:L57e75f:{c.instructions+=4;NFSU2_TR(0x57e75f);
__builtin_memmove((R+28),(R+0),4);
}
B57e761:{NFSU2_TR(0x57e761);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57e764:{NFSU2_TR(0x57e764);
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
B57e766:{NFSU2_TR(0x57e766);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e772;}}
}
B57e768:L57e768:{c.instructions+=4;NFSU2_TR(0x57e768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e769:{NFSU2_TR(0x57e769);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57e770:{NFSU2_TR(0x57e770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e771:{NFSU2_TR(0x57e771);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e772:L57e772:{c.instructions+=8;NFSU2_TR(0x57e772);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e775:{NFSU2_TR(0x57e775);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e776:{NFSU2_TR(0x57e776);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57e779:{NFSU2_TR(0x57e779);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e77a:{NFSU2_TR(0x57e77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57e77d:{NFSU2_TR(0x57e77d);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+20))));
}
B57e77f:{NFSU2_TR(0x57e77f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e781:{NFSU2_TR(0x57e781);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e785;}}
}
B57e783:L57e783:{c.instructions+=1;NFSU2_TR(0x57e783);
__builtin_memmove((R+12),(R+0),4);
}
B57e785:L57e785:{c.instructions+=11;NFSU2_TR(0x57e785);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e788:{NFSU2_TR(0x57e788);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57e78b:{NFSU2_TR(0x57e78b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57e78d:{NFSU2_TR(0x57e78d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57e78f:{NFSU2_TR(0x57e78f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B57e792:{NFSU2_TR(0x57e792);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B57e793:{NFSU2_TR(0x57e793);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B57e795:{NFSU2_TR(0x57e795);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B57e798:{NFSU2_TR(0x57e798);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B57e79b:{NFSU2_TR(0x57e79b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e79d:{NFSU2_TR(0x57e79d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e7a8;}}
}
B57e79f:L57e79f:{c.instructions+=2;NFSU2_TR(0x57e79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57e7a6:{NFSU2_TR(0x57e7a6);
{goto L57e7d3;}
}
B57e7a8:L57e7a8:{c.instructions+=5;NFSU2_TR(0x57e7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57e7af:{NFSU2_TR(0x57e7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e7b2:{NFSU2_TR(0x57e7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e7b5:{NFSU2_TR(0x57e7b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57e7b7:{NFSU2_TR(0x57e7b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57e7d0;}}
}
B57e7b9:L57e7b9:{c.instructions+=9;NFSU2_TR(0x57e7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e7bc:{NFSU2_TR(0x57e7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57e7bf:{NFSU2_TR(0x57e7bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e7c0:{NFSU2_TR(0x57e7c0);
u8 U[4];
w4(U+0,u32(0x5735e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e7c5:{NFSU2_TR(0x57e7c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e7c6:{NFSU2_TR(0x57e7c6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B57e7c8:{NFSU2_TR(0x57e7c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e7c9:{NFSU2_TR(0x57e7c9);
__builtin_memmove((R+4),(R+28),4);
}
B57e7cb:{NFSU2_TR(0x57e7cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e7d0ull));
TAIL_STATIC(0x57c7a0u,57c);
}
B57e7d0:L57e7d0:{c.instructions+=1;NFSU2_TR(0x57e7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B57e7d3:L57e7d3:{c.instructions+=5;NFSU2_TR(0x57e7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57e7d6:{NFSU2_TR(0x57e7d6);
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
B57e7d8:{NFSU2_TR(0x57e7d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57e7d9:{NFSU2_TR(0x57e7d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57e7da:{NFSU2_TR(0x57e7da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e7e6;}}
}
B57e7dc:L57e7dc:{c.instructions+=4;NFSU2_TR(0x57e7dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57e7e3:{NFSU2_TR(0x57e7e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e7e4:{NFSU2_TR(0x57e7e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e7e5:{NFSU2_TR(0x57e7e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e7e6:L57e7e6:{c.instructions+=3;NFSU2_TR(0x57e7e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e7e8:{NFSU2_TR(0x57e7e8);
__builtin_memmove((R+4),(R+28),4);
}
B57e7ea:{NFSU2_TR(0x57e7ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e7efull));
TAIL_STATIC(0x579b90u,579);
}
B57e7ef:L57e7ef:{c.instructions+=3;NFSU2_TR(0x57e7ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57e7f0:{NFSU2_TR(0x57e7f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57e7f1:{NFSU2_TR(0x57e7f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57e800:L57e800:{c.instructions+=8;NFSU2_TR(0x57e800);
__builtin_memmove((R+0),gp(0x865110),4);
}
B57e805:{NFSU2_TR(0x57e805);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e806:{NFSU2_TR(0x57e806);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e807:{NFSU2_TR(0x57e807);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57e809:{NFSU2_TR(0x57e809);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e80b:{NFSU2_TR(0x57e80b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e80c:{NFSU2_TR(0x57e80c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e80d:{NFSU2_TR(0x57e80d);
if(r1(R+518)){{goto L57e819;}}
}
B57e80f:L57e80f:{c.instructions+=1;NFSU2_TR(0x57e80f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e814ull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B57e814:L57e814:{c.instructions+=1;NFSU2_TR(0x57e814);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e819ull));
TAIL_STATIC(0x57c920u,57c);
}
B57e819:L57e819:{c.instructions+=2;NFSU2_TR(0x57e819);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650f4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e81f:{NFSU2_TR(0x57e81f);
if(r1(R+518)){{goto L57e911;}}
}
B57e825:L57e825:{c.instructions+=5;NFSU2_TR(0x57e825);
u8 U[2];
__builtin_memmove((U+0),gp(0x7fb534),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B57e82b:{NFSU2_TR(0x57e82b);
__builtin_memmove((R+24),gp(0x865550),4);
}
B57e831:{NFSU2_TR(0x57e831);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57e834:{NFSU2_TR(0x57e834);
w4(R+20,u32(0x1ull));
}
B57e839:{NFSU2_TR(0x57e839);
if(r1(R+518)){{goto L57e891;}}
}
B57e83b:L57e83b:{c.instructions+=2;NFSU2_TR(0x57e83b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e841:{NFSU2_TR(0x57e841);
if(r1(R+518)){{goto L57e879;}}
}
B57e843:L57e843:{c.instructions+=3;NFSU2_TR(0x57e843);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e845:{NFSU2_TR(0x57e845);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e847:{NFSU2_TR(0x57e847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e84cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e3b0u);}goto L57e3b0;}
}
B57e84c:L57e84c:{c.instructions+=4;NFSU2_TR(0x57e84c);
__builtin_memmove((R+28),(R+0),4);
}
B57e84e:{NFSU2_TR(0x57e84e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57e851:{NFSU2_TR(0x57e851);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e853:{NFSU2_TR(0x57e853);
if(r1(R+518)){{goto L57e891;}}
}
B57e855:L57e855:{c.instructions+=2;NFSU2_TR(0x57e855);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57e858:{NFSU2_TR(0x57e858);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e891;}}
}
B57e85a:L57e85a:{c.instructions+=1;NFSU2_TR(0x57e85a);
__builtin_memmove((R+12),(R+12),4);
}
B57e860:L57e860:{c.instructions+=2;NFSU2_TR(0x57e860);
u8 U[8];
__builtin_memmove((U+0),gp(0x865110),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e866:{NFSU2_TR(0x57e866);
if(r1(R+518)){{goto L57e872;}}
}
B57e868:L57e868:{c.instructions+=1;NFSU2_TR(0x57e868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e86dull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B57e86d:L57e86d:{c.instructions+=1;NFSU2_TR(0x57e86d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e872ull));
TAIL_STATIC(0x57c920u,57c);
}
B57e872:L57e872:{c.instructions+=2;NFSU2_TR(0x57e872);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57e875:{NFSU2_TR(0x57e875);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e860u);}goto L57e860;}}
}
B57e877:L57e877:{c.instructions+=1;NFSU2_TR(0x57e877);
{goto L57e891;}
}
B57e879:L57e879:{c.instructions+=2;NFSU2_TR(0x57e879);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e87f:{NFSU2_TR(0x57e87f);
if(r1(R+518)){{goto L57e891;}}
}
B57e881:L57e881:{c.instructions+=5;NFSU2_TR(0x57e881);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57e887:{NFSU2_TR(0x57e887);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e889:{NFSU2_TR(0x57e889);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e88b:{NFSU2_TR(0x57e88b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e88c:{NFSU2_TR(0x57e88c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e891ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57e891:L57e891:{c.instructions+=2;NFSU2_TR(0x57e891);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e894:{NFSU2_TR(0x57e894);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e8e0;}}
}
B57e896:L57e896:{c.instructions+=7;NFSU2_TR(0x57e896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57e898:{NFSU2_TR(0x57e898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57e89b:{NFSU2_TR(0x57e89b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57e89d:{NFSU2_TR(0x57e89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e8a0:{NFSU2_TR(0x57e8a0);
s4(0x8650f4,u32(u32(m4(0x8650f4))-u32(u32(0x1ull))));
}
B57e8a6:{NFSU2_TR(0x57e8a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57e8a9:{NFSU2_TR(0x57e8a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e902;}}
}
B57e8ab:L57e8ab:{c.instructions+=3;NFSU2_TR(0x57e8ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57e8ae:{NFSU2_TR(0x57e8ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57e8b1:{NFSU2_TR(0x57e8b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e8c5;}}
}
B57e8b3:L57e8b3:{c.instructions+=3;NFSU2_TR(0x57e8b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e8b4:{NFSU2_TR(0x57e8b4);
__builtin_memmove((R+4),(R+24),4);
}
B57e8b6:{NFSU2_TR(0x57e8b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e8bbull));
TAIL_STATIC(0x57b3d0u,57b);
}
B57e8bb:L57e8bb:{c.instructions+=4;NFSU2_TR(0x57e8bb);
__builtin_memmove((R+8),gp(0x8650f0),4);
}
B57e8c1:{NFSU2_TR(0x57e8c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e8c2:{NFSU2_TR(0x57e8c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e8c3:{NFSU2_TR(0x57e8c3);
{goto L57e909;}
}
B57e8c5:L57e8c5:{c.instructions+=7;NFSU2_TR(0x57e8c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e8c8:{NFSU2_TR(0x57e8c8);
__builtin_memmove((R+0),gp(0x865224),4);
}
B57e8cd:{NFSU2_TR(0x57e8cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57e8cf:{NFSU2_TR(0x57e8cf);
__builtin_memmove(gp(0x865224),(R+24),4);
}
B57e8d5:{NFSU2_TR(0x57e8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e8d8:{NFSU2_TR(0x57e8d8);
u8 U[4];
w4(U+0,u32(0x865220ull));
s4(u32(r4(R+24)),r4(U+0));
}
B57e8de:{NFSU2_TR(0x57e8de);
{goto L57e911;}
}
B57e8e0:L57e8e0:{c.instructions+=2;NFSU2_TR(0x57e8e0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e8e3:{NFSU2_TR(0x57e8e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57e911;}}
}
B57e8e5:L57e8e5:{c.instructions+=10;NFSU2_TR(0x57e8e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57e8e7:{NFSU2_TR(0x57e8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57e8ea:{NFSU2_TR(0x57e8ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57e8ec:{NFSU2_TR(0x57e8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e8ef:{NFSU2_TR(0x57e8ef);
__builtin_memmove((R+0),gp(0x8650f4),4);
}
B57e8f4:{NFSU2_TR(0x57e8f4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B57e8f5:{NFSU2_TR(0x57e8f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e8f6:{NFSU2_TR(0x57e8f6);
__builtin_memmove((R+4),(R+24),4);
}
B57e8f8:{NFSU2_TR(0x57e8f8);
__builtin_memmove(gp(0x8650f4),(R+0),4);
}
B57e8fd:{NFSU2_TR(0x57e8fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e902ull));
TAIL_STATIC(0x57b3d0u,57b);
}
B57e902:L57e902:{c.instructions+=3;NFSU2_TR(0x57e902);
__builtin_memmove((R+0),gp(0x8650f0),4);
}
B57e907:{NFSU2_TR(0x57e907);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e908:{NFSU2_TR(0x57e908);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e909:L57e909:{c.instructions+=1;NFSU2_TR(0x57e909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e90eull));
TAIL_STATIC(0x43f920u,43f);
}
B57e90e:L57e90e:{c.instructions+=1;NFSU2_TR(0x57e90e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57e911:L57e911:{c.instructions+=2;NFSU2_TR(0x57e911);
u8 U[14];
__builtin_memmove((U+6),gp(0x8650f4),4);
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
B57e918:{NFSU2_TR(0x57e918);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57eabc;}}
}
B57e91e:L57e91e:{c.instructions+=1;NFSU2_TR(0x57e91e);
__builtin_memmove((R+28),(R+28),4);
}
B57e920:L57e920:{c.instructions+=2;NFSU2_TR(0x57e920);
u8 U[14];
__builtin_memmove((U+6),gp(0x865220),4);
w1(R+512,u8((r4(U+6))<(u32(0x865220ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x865220ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x865220ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57e92a:{NFSU2_TR(0x57e92a);
if(r1(R+518)){{goto L57eabc;}}
}
B57e930:L57e930:{c.instructions+=3;NFSU2_TR(0x57e930);
u8 U[4];
w4(U+0,u32(0x5735c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e935:{NFSU2_TR(0x57e935);
w4(R+4,u32(0x865220ull));
}
B57e93a:{NFSU2_TR(0x57e93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e93full));
TAIL_STATIC(0x43e650u,43e);
}
B57e93f:L57e93f:{c.instructions+=2;NFSU2_TR(0x57e93f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650f4),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e945:{NFSU2_TR(0x57e945);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57e966;}}
}
B57e947:L57e947:{c.instructions+=5;NFSU2_TR(0x57e947);
__builtin_memmove((R+4),gp(0x865220),4);
}
B57e94d:{NFSU2_TR(0x57e94d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B57e950:{NFSU2_TR(0x57e950);
u8 U[4];
w4(U+0,u32(0x864df8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e955:{NFSU2_TR(0x57e955);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e956:{NFSU2_TR(0x57e956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e95bull));
TAIL_STATIC(0x43dc30u,43d);
}
B57e95b:L57e95b:{c.instructions+=3;NFSU2_TR(0x57e95b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57e95e:{NFSU2_TR(0x57e95e);
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
B57e960:{NFSU2_TR(0x57e960);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57eabc;}}
}
B57e966:L57e966:{c.instructions+=2;NFSU2_TR(0x57e966);
u8 U[8];
__builtin_memmove((U+0),gp(0x7fb53c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e96c:{NFSU2_TR(0x57e96c);
if(r1(R+518)){{goto L57ea68;}}
}
B57e972:L57e972:{c.instructions+=3;NFSU2_TR(0x57e972);
__builtin_memmove((R+8),gp(0x8650f0),4);
}
B57e978:{NFSU2_TR(0x57e978);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e979:{NFSU2_TR(0x57e979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e97eull));
TAIL_STATIC(0x440e50u,440);
}
B57e97e:L57e97e:{c.instructions+=3;NFSU2_TR(0x57e97e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57e981:{NFSU2_TR(0x57e981);
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
B57e983:{NFSU2_TR(0x57e983);
if(r1(R+518)){{goto L57e997;}}
}
B57e985:L57e985:{c.instructions+=7;NFSU2_TR(0x57e985);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57e987:{NFSU2_TR(0x57e987);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e98a:{NFSU2_TR(0x57e98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e98d:{NFSU2_TR(0x57e98d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e990:{NFSU2_TR(0x57e990);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57e993:{NFSU2_TR(0x57e993);
__builtin_memmove((R+24),(R+0),4);
}
B57e995:{NFSU2_TR(0x57e995);
{goto L57e999;}
}
B57e997:L57e997:{c.instructions+=1;NFSU2_TR(0x57e997);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57e999:L57e999:{c.instructions+=3;NFSU2_TR(0x57e999);
__builtin_memmove((R+28),gp(0x865220),4);
}
B57e99f:{NFSU2_TR(0x57e99f);
w4(R+4,u32(0x865220ull));
}
B57e9a4:{NFSU2_TR(0x57e9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e9a9ull));
TAIL_STATIC(0x502fd0u,502);
}
B57e9a9:L57e9a9:{c.instructions+=3;NFSU2_TR(0x57e9a9);
__builtin_memmove((R+20),(R+0),4);
}
B57e9ab:{NFSU2_TR(0x57e9ab);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e9ad:{NFSU2_TR(0x57e9ad);
if(r1(R+518)){{goto L57e9c2;}}
}
B57e9af:L57e9af:{c.instructions+=1;NFSU2_TR(0x57e9af);
}
B57e9b0:L57e9b0:{c.instructions+=3;NFSU2_TR(0x57e9b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e9b1:{NFSU2_TR(0x57e9b1);
__builtin_memmove((R+4),(R+24),4);
}
B57e9b3:{NFSU2_TR(0x57e9b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e9b8ull));
TAIL_STATIC(0x5735f0u,573);
}
B57e9b8:L57e9b8:{c.instructions+=2;NFSU2_TR(0x57e9b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57e9ba:{NFSU2_TR(0x57e9ba);
if(r1(R+518)){{goto L57e9c2;}}
}
B57e9bc:L57e9bc:{c.instructions+=3;NFSU2_TR(0x57e9bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B57e9be:{NFSU2_TR(0x57e9be);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e9c0:{NFSU2_TR(0x57e9c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e9b0u);}goto L57e9b0;}}
}
B57e9c2:L57e9c2:{c.instructions+=2;NFSU2_TR(0x57e9c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B57e9c6:{NFSU2_TR(0x57e9c6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57e9eb;}}
}
B57e9c8:L57e9c8:{c.instructions+=3;NFSU2_TR(0x57e9c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57e9ca:{NFSU2_TR(0x57e9ca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57e9cc:{NFSU2_TR(0x57e9cc);
if(r1(R+518)){{goto L57e9d7;}}
}
B57e9ce:L57e9ce:{c.instructions+=2;NFSU2_TR(0x57e9ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e9cf:{NFSU2_TR(0x57e9cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e9d4ull));
TAIL_STATIC(0x440540u,440);
}
B57e9d4:L57e9d4:{c.instructions+=1;NFSU2_TR(0x57e9d4);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57e9d7:L57e9d7:{c.instructions+=4;NFSU2_TR(0x57e9d7);
__builtin_memmove((R+0),gp(0x8650f0),4);
}
B57e9dc:{NFSU2_TR(0x57e9dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e9dd:{NFSU2_TR(0x57e9dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e9de:{NFSU2_TR(0x57e9de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e9e3ull));
TAIL_STATIC(0x43f920u,43f);
}
B57e9e3:L57e9e3:{c.instructions+=2;NFSU2_TR(0x57e9e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57e9e6:{NFSU2_TR(0x57e9e6);
{goto L57ea68;}
}
B57e9eb:L57e9eb:{c.instructions+=5;NFSU2_TR(0x57e9eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57e9ee:{NFSU2_TR(0x57e9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B57e9f1:{NFSU2_TR(0x57e9f1);
u8 U[4];
w4(U+0,u32(0x1008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e9f6:{NFSU2_TR(0x57e9f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57e9f7:{NFSU2_TR(0x57e9f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57e9fcull));
TAIL_STATIC(0x440820u,440);
}
B57e9fc:L57e9fc:{c.instructions+=12;NFSU2_TR(0x57e9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57e9ff:{NFSU2_TR(0x57e9ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57ea02:{NFSU2_TR(0x57ea02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ea03:{NFSU2_TR(0x57ea03);
u8 U[4];
w4(U+0,u32(0x57d8c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ea08:{NFSU2_TR(0x57ea08);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57ea0b:{NFSU2_TR(0x57ea0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ea0c:{NFSU2_TR(0x57ea0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ea0d:{NFSU2_TR(0x57ea0d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B57ea10:{NFSU2_TR(0x57ea10);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ea11:{NFSU2_TR(0x57ea11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ea12:{NFSU2_TR(0x57ea12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57ea14:{NFSU2_TR(0x57ea14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ea19ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B57ea19:L57ea19:{c.instructions+=2;NFSU2_TR(0x57ea19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ea1a:{NFSU2_TR(0x57ea1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ea1full));
TAIL_STATIC(0x5797b0u,579);
}
B57ea1f:L57ea1f:{c.instructions+=14;NFSU2_TR(0x57ea1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57ea21:{NFSU2_TR(0x57ea21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57ea24:{NFSU2_TR(0x57ea24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57ea26:{NFSU2_TR(0x57ea26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ea29:{NFSU2_TR(0x57ea29);
__builtin_memmove((R+4),gp(0x865220),4);
}
B57ea2f:{NFSU2_TR(0x57ea2f);
__builtin_memmove(gp(0x865220),(R+0),4);
}
B57ea34:{NFSU2_TR(0x57ea34);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ea37:{NFSU2_TR(0x57ea37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x865220ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57ea3e:{NFSU2_TR(0x57ea3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57ea40:{NFSU2_TR(0x57ea40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ea43:{NFSU2_TR(0x57ea43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B57ea46:{NFSU2_TR(0x57ea46);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B57ea48:{NFSU2_TR(0x57ea48);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57ea4a:{NFSU2_TR(0x57ea4a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57ea68;}}
}
B57ea4c:L57ea4c:{c.instructions+=1;NFSU2_TR(0x57ea4c);
__builtin_memmove((R+16),(R+16),4);
}
B57ea50:L57ea50:{c.instructions+=10;NFSU2_TR(0x57ea50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57ea53:{NFSU2_TR(0x57ea53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57ea55:{NFSU2_TR(0x57ea55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ea58:{NFSU2_TR(0x57ea58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57ea5a:{NFSU2_TR(0x57ea5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ea5d:{NFSU2_TR(0x57ea5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ea60:{NFSU2_TR(0x57ea60);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B57ea61:{NFSU2_TR(0x57ea61);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B57ea64:{NFSU2_TR(0x57ea64);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57ea66:{NFSU2_TR(0x57ea66);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ea50u);}goto L57ea50;}}
}
B57ea68:L57ea68:{c.instructions+=10;NFSU2_TR(0x57ea68);
__builtin_memmove((R+24),gp(0x865220),4);
}
B57ea6e:{NFSU2_TR(0x57ea6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57ea70:{NFSU2_TR(0x57ea70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57ea73:{NFSU2_TR(0x57ea73);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57ea76:{NFSU2_TR(0x57ea76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57ea78:{NFSU2_TR(0x57ea78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ea7b:{NFSU2_TR(0x57ea7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B57ea7e:{NFSU2_TR(0x57ea7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ea7f:{NFSU2_TR(0x57ea7f);
u8 U[4];
w4(U+0,u32(0x864df8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ea84:{NFSU2_TR(0x57ea84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ea89ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B57ea89:L57ea89:{c.instructions+=3;NFSU2_TR(0x57ea89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57ea8c:{NFSU2_TR(0x57ea8c);
__builtin_memmove((R+4),(R+24),4);
}
B57ea8e:{NFSU2_TR(0x57ea8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ea93ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e730u);}goto L57e730;}
}
B57ea93:L57ea93:{c.instructions+=10;NFSU2_TR(0x57ea93);
__builtin_memmove((R+0),gp(0x865554),4);
}
B57ea98:{NFSU2_TR(0x57ea98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57ea9a:{NFSU2_TR(0x57ea9a);
__builtin_memmove(gp(0x865554),(R+24),4);
}
B57eaa0:{NFSU2_TR(0x57eaa0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B57eaa2:{NFSU2_TR(0x57eaa2);
u8 U[4];
w4(U+0,u32(0x865550ull));
s4(u32(r4(R+24)),r4(U+0));
}
B57eaa8:{NFSU2_TR(0x57eaa8);
__builtin_memmove((R+0),gp(0x8650f4),4);
}
B57eaad:{NFSU2_TR(0x57eaad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57eaae:{NFSU2_TR(0x57eaae);
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
B57eab1:{NFSU2_TR(0x57eab1);
__builtin_memmove(gp(0x8650f4),(R+0),4);
}
B57eab6:{NFSU2_TR(0x57eab6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e920u);}goto L57e920;}}
}
B57eabc:L57eabc:{c.instructions+=5;NFSU2_TR(0x57eabc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57eabd:{NFSU2_TR(0x57eabd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57eabe:{NFSU2_TR(0x57eabe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57eabf:{NFSU2_TR(0x57eabf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57eac0:{NFSU2_TR(0x57eac0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ead0:L57ead0:{c.instructions+=9;NFSU2_TR(0x57ead0);
__builtin_memmove((R+0),gp(0x86514c),4);
}
B57ead5:{NFSU2_TR(0x57ead5);
__builtin_memmove((R+4),gp(0x8650d0),4);
}
B57eadb:{NFSU2_TR(0x57eadb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B57eade:{NFSU2_TR(0x57eade);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eadf:{NFSU2_TR(0x57eadf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eae0:{NFSU2_TR(0x57eae0);
__builtin_memmove((R+28),(R+0),4);
}
B57eae2:{NFSU2_TR(0x57eae2);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B57eae5:{NFSU2_TR(0x57eae5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57eae7:{NFSU2_TR(0x57eae7);
if(r1(R+518)){{goto L57eb09;}}
}
B57eae9:L57eae9:{c.instructions+=3;NFSU2_TR(0x57eae9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eaeb:{NFSU2_TR(0x57eaeb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eaed:{NFSU2_TR(0x57eaed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eaf2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e3b0u);}goto L57e3b0;}
}
B57eaf2:L57eaf2:{c.instructions+=5;NFSU2_TR(0x57eaf2);
__builtin_memmove((R+24),(R+0),4);
}
B57eaf4:{NFSU2_TR(0x57eaf4);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eaf6:{NFSU2_TR(0x57eaf6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eaf8:{NFSU2_TR(0x57eaf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57eafc:{NFSU2_TR(0x57eafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eb01ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e3b0u);}goto L57e3b0;}
}
B57eb01:L57eb01:{c.instructions+=2;NFSU2_TR(0x57eb01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57eb04:{NFSU2_TR(0x57eb04);
{goto L57ec88;}
}
B57eb09:L57eb09:{c.instructions+=15;NFSU2_TR(0x57eb09);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B57eb0a:{NFSU2_TR(0x57eb0a);
{u32 ea_=u32(u32(8803672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57eb10:{NFSU2_TR(0x57eb10);
w4(R+4,u32(0x64ull));
}
B57eb15:{NFSU2_TR(0x57eb15);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57eb19:{NFSU2_TR(0x57eb19);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x57eb19);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x57eb19);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B57eb1b:{NFSU2_TR(0x57eb1b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B57eb1f:{NFSU2_TR(0x57eb1f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57eb25:{NFSU2_TR(0x57eb25);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57eb27:{NFSU2_TR(0x57eb27);
__builtin_memmove((R+24),(R+8),4);
}
B57eb29:{NFSU2_TR(0x57eb29);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57eb2d:{NFSU2_TR(0x57eb2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B57eb30:{NFSU2_TR(0x57eb30);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8647a8ull))));
}
B57eb36:{NFSU2_TR(0x57eb36);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57eb39:{NFSU2_TR(0x57eb39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57eb3b:{NFSU2_TR(0x57eb3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57eb8b;}}
}
B57eb3d:L57eb3d:{c.instructions+=5;NFSU2_TR(0x57eb3d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57eb41:{NFSU2_TR(0x57eb41);
{u32 ea_=u32(u32(8803672u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57eb47:{NFSU2_TR(0x57eb47);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57eb49:{NFSU2_TR(0x57eb49);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57eb4c:{NFSU2_TR(0x57eb4c);
if(r1(R+514)){{goto L57eb8b;}}
}
B57eb4e:L57eb4e:{c.instructions+=2;NFSU2_TR(0x57eb4e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eb4f:{NFSU2_TR(0x57eb4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eb54ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B57eb54:L57eb54:{c.instructions+=4;NFSU2_TR(0x57eb54);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57eb58:{NFSU2_TR(0x57eb58);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57eb5e:{NFSU2_TR(0x57eb5e);
__builtin_memmove((R+12),(R+0),4);
}
B57eb60:{NFSU2_TR(0x57eb60);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57eb64:L57eb64:{c.instructions+=1;NFSU2_TR(0x57eb64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eb69ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B57eb69:L57eb69:{c.instructions+=3;NFSU2_TR(0x57eb69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eb6a:{NFSU2_TR(0x57eb6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eb6b:{NFSU2_TR(0x57eb6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eb70ull));
TAIL_STATIC(0x43be20u,43b);
}
B57eb70:L57eb70:{c.instructions+=5;NFSU2_TR(0x57eb70);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57eb74:{NFSU2_TR(0x57eb74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57eb77:{NFSU2_TR(0x57eb77);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57eb79:{NFSU2_TR(0x57eb79);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57eb7c:{NFSU2_TR(0x57eb7c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57eb64u);}goto L57eb64;}}
}
B57eb7e:L57eb7e:{c.instructions+=4;NFSU2_TR(0x57eb7e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57eb82:{NFSU2_TR(0x57eb82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57eb83:{NFSU2_TR(0x57eb83);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57eb87:{NFSU2_TR(0x57eb87);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57eb8b:L57eb8b:{c.instructions+=12;NFSU2_TR(0x57eb8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57eb8f:{NFSU2_TR(0x57eb8f);
{u32 ea_=u32(u32(8802632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57eb95:{NFSU2_TR(0x57eb95);
__builtin_memmove((R+4),gp(0x7fb70c),4);
}
B57eb9b:{NFSU2_TR(0x57eb9b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57eb9f:{NFSU2_TR(0x57eb9f);
__builtin_memmove((R+8),gp(0x865198),4);
}
B57eba5:{NFSU2_TR(0x57eba5);
{u32 ea_=u32(u32(8369940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57ebab:{NFSU2_TR(0x57ebab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ebae:{NFSU2_TR(0x57ebae);
__builtin_memmove((R+0),gp(0x7fb700),4);
}
B57ebb3:{NFSU2_TR(0x57ebb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ebb5:{NFSU2_TR(0x57ebb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ebb8:{NFSU2_TR(0x57ebb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ebbb:{NFSU2_TR(0x57ebbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57ebde;}}
}
B57ebbd:L57ebbd:{c.instructions+=6;NFSU2_TR(0x57ebbd);
{u32 ea_=u32(u32(7885248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57ebc3:{NFSU2_TR(0x57ebc3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57ebc7:{NFSU2_TR(0x57ebc7);
{u32 ea_=u32(u32(7885248u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B57ebcd:{NFSU2_TR(0x57ebcd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57ebcf:{NFSU2_TR(0x57ebcf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57ebd2:{NFSU2_TR(0x57ebd2);
if(r1(R+518)){{goto L57ebfd;}}
}
B57ebd4:L57ebd4:{c.instructions+=3;NFSU2_TR(0x57ebd4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57ebd6:{NFSU2_TR(0x57ebd6);
{u32 ea_=u32(u32(7885248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57ebdc:{NFSU2_TR(0x57ebdc);
{goto L57ebfd;}
}
B57ebde:L57ebde:{c.instructions+=6;NFSU2_TR(0x57ebde);
{u32 ea_=u32(u32(7894460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57ebe4:{NFSU2_TR(0x57ebe4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57ebe8:{NFSU2_TR(0x57ebe8);
{u32 ea_=u32(u32(8803672u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B57ebee:{NFSU2_TR(0x57ebee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57ebf0:{NFSU2_TR(0x57ebf0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57ebf3:{NFSU2_TR(0x57ebf3);
if(r1(R+518)){{goto L57ebfd;}}
}
B57ebf5:L57ebf5:{c.instructions+=2;NFSU2_TR(0x57ebf5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57ebf7:{NFSU2_TR(0x57ebf7);
{u32 ea_=u32(u32(8803672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57ebfd:L57ebfd:{c.instructions+=5;NFSU2_TR(0x57ebfd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57ec01:{NFSU2_TR(0x57ec01);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B57ec03:{NFSU2_TR(0x57ec03);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57ec05:{NFSU2_TR(0x57ec05);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57ec08:{NFSU2_TR(0x57ec08);
if(r1(R+514)){{goto L57ec10;}}
}
B57ec0a:L57ec0a:{c.instructions+=2;NFSU2_TR(0x57ec0a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57ec0c:{NFSU2_TR(0x57ec0c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57ec10:L57ec10:{c.instructions+=4;NFSU2_TR(0x57ec10);
{u32 ea_=u32(u32(7996956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57ec16:{NFSU2_TR(0x57ec16);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B57ec18:{NFSU2_TR(0x57ec18);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57ec1e:{NFSU2_TR(0x57ec1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ec23ull));
TAIL_STATIC(0x75bed4u,75b);
}
B57ec23:L57ec23:{c.instructions+=6;NFSU2_TR(0x57ec23);
__builtin_memmove((R+24),(R+0),4);
}
B57ec25:{NFSU2_TR(0x57ec25);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ec29:{NFSU2_TR(0x57ec29);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57ec2d:{NFSU2_TR(0x57ec2d);
{u32 ea_=u32(u32(7998120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57ec33:{NFSU2_TR(0x57ec33);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57ec39:{NFSU2_TR(0x57ec39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ec3eull));
TAIL_STATIC(0x75bed4u,75b);
}
B57ec3e:L57ec3e:{c.instructions+=9;NFSU2_TR(0x57ec3e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ec42:{NFSU2_TR(0x57ec42);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57ec46:{NFSU2_TR(0x57ec46);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57ec4b:{NFSU2_TR(0x57ec4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ec4d:{NFSU2_TR(0x57ec4d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57ec53:{NFSU2_TR(0x57ec53);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B57ec55:{NFSU2_TR(0x57ec55);
{u32 ea_=u32(u32(8802632u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57ec5b:{NFSU2_TR(0x57ec5b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57ec5d:{NFSU2_TR(0x57ec5d);
if(r1(R+518)){{goto L57ec88;}}
}
B57ec5f:L57ec5f:{c.instructions+=5;NFSU2_TR(0x57ec5f);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57ec65:{NFSU2_TR(0x57ec65);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ec67:{NFSU2_TR(0x57ec67);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ec69:{NFSU2_TR(0x57ec69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ec6a:{NFSU2_TR(0x57ec6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ec6full));
TAIL_STATIC(0x57d5b0u,57d);
}
B57ec6f:L57ec6f:{c.instructions+=3;NFSU2_TR(0x57ec6f);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57ec74:{NFSU2_TR(0x57ec74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ec76:{NFSU2_TR(0x57ec76);
if(r1(R+518)){{goto L57ec88;}}
}
B57ec78:L57ec78:{c.instructions+=5;NFSU2_TR(0x57ec78);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57ec7e:{NFSU2_TR(0x57ec7e);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ec80:{NFSU2_TR(0x57ec80);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ec82:{NFSU2_TR(0x57ec82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ec83:{NFSU2_TR(0x57ec83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ec88ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57ec88:L57ec88:{c.instructions+=8;NFSU2_TR(0x57ec88);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57ec8c:{NFSU2_TR(0x57ec8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57ec8d:{NFSU2_TR(0x57ec8d);
__builtin_memmove(gp(0x865140),(R+24),4);
}
B57ec93:{NFSU2_TR(0x57ec93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57ec94:{NFSU2_TR(0x57ec94);
{u32 ea_=u32(u32(7996952u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57ec9a:{NFSU2_TR(0x57ec9a);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57eca0:{NFSU2_TR(0x57eca0);
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
B57eca3:{NFSU2_TR(0x57eca3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ecb0:L57ecb0:{c.instructions+=4;NFSU2_TR(0x57ecb0);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B57ecb5:{NFSU2_TR(0x57ecb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ecb7:{NFSU2_TR(0x57ecb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ecb8:{NFSU2_TR(0x57ecb8);
if(r1(R+518)){{goto L57ecd8;}}
}
B57ecba:L57ecba:{c.instructions+=3;NFSU2_TR(0x57ecba);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ecbc:{NFSU2_TR(0x57ecbc);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ecbe:{NFSU2_TR(0x57ecbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ecc3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e3b0u);}goto L57e3b0;}
}
B57ecc3:L57ecc3:{c.instructions+=5;NFSU2_TR(0x57ecc3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57ecc6:{NFSU2_TR(0x57ecc6);
__builtin_memmove((R+24),(R+0),4);
}
B57ecc8:{NFSU2_TR(0x57ecc8);
u8 U[4];
w4(U+0,u32(0x7ea624ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eccd:{NFSU2_TR(0x57eccd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ecce:{NFSU2_TR(0x57ecce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ecd3ull));
TAIL_STATIC(0x43e6b0u,43e);
}
B57ecd3:L57ecd3:{c.instructions+=3;NFSU2_TR(0x57ecd3);
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
B57ecd6:{NFSU2_TR(0x57ecd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57ecd7:{NFSU2_TR(0x57ecd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ecd8:L57ecd8:{c.instructions+=1;NFSU2_TR(0x57ecd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ecddull));
TAIL_STATIC(0x43bdf0u,43b);
}
B57ecdd:L57ecdd:{c.instructions+=5;NFSU2_TR(0x57ecdd);
__builtin_memmove((R+24),(R+0),4);
}
B57ecdf:{NFSU2_TR(0x57ecdf);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57ece4:{NFSU2_TR(0x57ece4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x12345678ull))));
}
B57ecea:{NFSU2_TR(0x57ecea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ecec:{NFSU2_TR(0x57ecec);
if(r1(R+518)){{goto L57ecfe;}}
}
B57ecee:L57ecee:{c.instructions+=5;NFSU2_TR(0x57ecee);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57ecf4:{NFSU2_TR(0x57ecf4);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ecf6:{NFSU2_TR(0x57ecf6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ecf8:{NFSU2_TR(0x57ecf8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ecf9:{NFSU2_TR(0x57ecf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ecfeull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57ecfe:L57ecfe:{c.instructions+=3;NFSU2_TR(0x57ecfe);
u8 U[4];
w4(U+0,u32(0x7ea624ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ed03:{NFSU2_TR(0x57ed03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ed04:{NFSU2_TR(0x57ed04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed09ull));
TAIL_STATIC(0x43e6b0u,43e);
}
B57ed09:L57ed09:{c.instructions+=3;NFSU2_TR(0x57ed09);
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
B57ed0c:{NFSU2_TR(0x57ed0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57ed0d:{NFSU2_TR(0x57ed0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ed10:L57ed10:{c.instructions+=7;NFSU2_TR(0x57ed10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ed11:{NFSU2_TR(0x57ed11);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57ed15:{NFSU2_TR(0x57ed15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ed16:{NFSU2_TR(0x57ed16);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57ed1a:{NFSU2_TR(0x57ed1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ed1b:{NFSU2_TR(0x57ed1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ed1c:{NFSU2_TR(0x57ed1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed21ull));
TAIL_STATIC(0x5b7690u,5b7);
}
B57ed21:L57ed21:{c.instructions+=2;NFSU2_TR(0x57ed21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57ed24:{NFSU2_TR(0x57ed24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed29ull));
TAIL_STATIC(0x57cd70u,57c);
}
B57ed29:L57ed29:{c.instructions+=4;NFSU2_TR(0x57ed29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ed2a:{NFSU2_TR(0x57ed2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ed2b:{NFSU2_TR(0x57ed2b);
w4(R+4,u32(0x8709f8ull));
}
B57ed30:{NFSU2_TR(0x57ed30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed35ull));
TAIL_STATIC(0x5b7ea0u,5b7);
}
B57ed35:L57ed35:{c.instructions+=2;NFSU2_TR(0x57ed35);
u8 U[4];
w4(U+0,u32(0x1400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ed3a:{NFSU2_TR(0x57ed3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed3full));
TAIL_STATIC(0x440e60u,440);
}
B57ed3f:L57ed3f:{c.instructions+=2;NFSU2_TR(0x57ed3f);
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
B57ed42:{NFSU2_TR(0x57ed42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed47ull));
TAIL_STATIC(0x4022c0u,402);
}
B57ed47:L57ed47:{c.instructions+=1;NFSU2_TR(0x57ed47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed4cull));
TAIL_STATIC(0x580d90u,580);
}
B57ed4c:L57ed4c:{c.instructions+=1;NFSU2_TR(0x57ed4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed51ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ecb0u);}goto L57ecb0;}
}
B57ed51:L57ed51:{c.instructions+=1;NFSU2_TR(0x57ed51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed56ull));
TAIL_STATIC(0x5736d0u,573);
}
B57ed56:L57ed56:{c.instructions+=1;NFSU2_TR(0x57ed56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed5bull));
TAIL_STATIC(0x5d7af0u,5d7);
}
B57ed5b:L57ed5b:{c.instructions+=4;NFSU2_TR(0x57ed5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ed5c:{NFSU2_TR(0x57ed5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ed5d:{NFSU2_TR(0x57ed5d);
w4(R+4,u32(0x89cf48ull));
}
B57ed62:{NFSU2_TR(0x57ed62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed67ull));
TAIL_STATIC(0x5efe30u,5ef);
}
B57ed67:L57ed67:{c.instructions+=1;NFSU2_TR(0x57ed67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed6cull));
TAIL_STATIC(0x5ba7f0u,5ba);
}
B57ed6c:L57ed6c:{c.instructions+=1;NFSU2_TR(0x57ed6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed71ull));
TAIL_STATIC(0x48cd60u,48c);
}
B57ed71:L57ed71:{c.instructions+=1;NFSU2_TR(0x57ed71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed76ull));
TAIL_STATIC(0x4022c0u,402);
}
B57ed76:L57ed76:{c.instructions+=1;NFSU2_TR(0x57ed76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed7bull));
TAIL_STATIC(0x4886e0u,488);
}
B57ed7b:L57ed7b:{c.instructions+=1;NFSU2_TR(0x57ed7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed80ull));
TAIL_STATIC(0x570f80u,570);
}
B57ed80:L57ed80:{c.instructions+=1;NFSU2_TR(0x57ed80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed85ull));
TAIL_STATIC(0x579550u,579);
}
B57ed85:L57ed85:{c.instructions+=1;NFSU2_TR(0x57ed85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed8aull));
TAIL_STATIC(0x4859b0u,485);
}
B57ed8a:L57ed8a:{c.instructions+=1;NFSU2_TR(0x57ed8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed8full));
TAIL_STATIC(0x537830u,537);
}
B57ed8f:L57ed8f:{c.instructions+=1;NFSU2_TR(0x57ed8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed94ull));
TAIL_STATIC(0x57fb00u,57f);
}
B57ed94:L57ed94:{c.instructions+=1;NFSU2_TR(0x57ed94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed99ull));
TAIL_STATIC(0x4ff680u,4ff);
}
B57ed99:L57ed99:{c.instructions+=1;NFSU2_TR(0x57ed99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ed9eull));
TAIL_STATIC(0x57fb40u,57f);
}
B57ed9e:L57ed9e:{c.instructions+=1;NFSU2_TR(0x57ed9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eda3ull));
TAIL_STATIC(0x486910u,486);
}
B57eda3:L57eda3:{c.instructions+=1;NFSU2_TR(0x57eda3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eda8ull));
TAIL_STATIC(0x4022c0u,402);
}
B57eda8:L57eda8:{c.instructions+=1;NFSU2_TR(0x57eda8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57edadull));
TAIL_STATIC(0x60c680u,60c);
}
B57edad:L57edad:{c.instructions+=1;NFSU2_TR(0x57edad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57edb2ull));
TAIL_STATIC(0x60c820u,60c);
}
B57edb2:L57edb2:{c.instructions+=1;NFSU2_TR(0x57edb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57edb7ull));
TAIL_STATIC(0x534840u,534);
}
B57edb7:L57edb7:{c.instructions+=1;NFSU2_TR(0x57edb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57edbcull));
TAIL_STATIC(0x61c700u,61c);
}
B57edbc:L57edbc:{c.instructions+=1;NFSU2_TR(0x57edbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57edc1ull));
TAIL_STATIC(0x57b870u,57b);
}
B57edc1:L57edc1:{c.instructions+=1;NFSU2_TR(0x57edc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57edc6ull));
TAIL_STATIC(0x60bc70u,60b);
}
B57edc6:L57edc6:{c.instructions+=1;NFSU2_TR(0x57edc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57edcbull));
TAIL_STATIC(0x4313b0u,431);
}
B57edcb:L57edcb:{c.instructions+=1;NFSU2_TR(0x57edcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57edd0ull));
TAIL_STATIC(0x431380u,431);
}
B57edd0:L57edd0:{c.instructions+=1;NFSU2_TR(0x57edd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57edd5ull));
TAIL_STATIC(0x431580u,431);
}
B57edd5:L57edd5:{c.instructions+=1;NFSU2_TR(0x57edd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eddaull));
TAIL_STATIC(0x4314e0u,431);
}
B57edda:L57edda:{c.instructions+=1;NFSU2_TR(0x57edda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eddfull));
TAIL_STATIC(0x452ec0u,452);
}
B57eddf:L57eddf:{c.instructions+=5;NFSU2_TR(0x57eddf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57ede0:{NFSU2_TR(0x57ede0);
s1(0x86534c,u8(0x1ull));
}
B57ede7:{NFSU2_TR(0x57ede7);
s4(0x865354,u32(0x0ull));
}
B57edf1:{NFSU2_TR(0x57edf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57edf2:{NFSU2_TR(0x57edf2);
TAIL_STATIC(0x57fd50u,57f);
}
B57ee00:L57ee00:{c.instructions+=9;NFSU2_TR(0x57ee00);
__builtin_memmove((R+4),gp(0x890080),4);
}
B57ee06:{NFSU2_TR(0x57ee06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B57ee09:{NFSU2_TR(0x57ee09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee0a:{NFSU2_TR(0x57ee0a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee0b:{NFSU2_TR(0x57ee0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee0c:{NFSU2_TR(0x57ee0c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57ee0e:{NFSU2_TR(0x57ee0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ee10:{NFSU2_TR(0x57ee10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee11:{NFSU2_TR(0x57ee11);
if(r1(R+518)){{goto L57ee1a;}}
}
B57ee13:L57ee13:{c.instructions+=1;NFSU2_TR(0x57ee13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ee18ull));
TAIL_STATIC(0x5f0f70u,5f0);
}
B57ee18:L57ee18:{c.instructions+=1;NFSU2_TR(0x57ee18);
__builtin_memmove((R+12),(R+0),4);
}
B57ee1a:L57ee1a:{c.instructions+=1;NFSU2_TR(0x57ee1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ee1full));
TAIL_STATIC(0x51bb20u,51b);
}
B57ee1f:L57ee1f:{c.instructions+=11;NFSU2_TR(0x57ee1f);
__builtin_memmove((R+24),gp(0x86514c),4);
}
B57ee25:{NFSU2_TR(0x57ee25);
__builtin_memmove((R+20),gp(0x7ea624),4);
}
B57ee2b:{NFSU2_TR(0x57ee2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ee2f:{NFSU2_TR(0x57ee2f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B57ee31:{NFSU2_TR(0x57ee31);
__builtin_memmove((R+28),(R+0),4);
}
B57ee33:{NFSU2_TR(0x57ee33);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B57ee38:{NFSU2_TR(0x57ee38);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B57ee3a:{NFSU2_TR(0x57ee3a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B57ee3c:{NFSU2_TR(0x57ee3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ee3e:{NFSU2_TR(0x57ee3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57ee46:{NFSU2_TR(0x57ee46);
if(r1(R+518)){{goto L57ee63;}}
}
B57ee48:L57ee48:{c.instructions+=3;NFSU2_TR(0x57ee48);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee4a:{NFSU2_TR(0x57ee4a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee4c:{NFSU2_TR(0x57ee4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ee51ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e3b0u);}goto L57e3b0;}
}
B57ee51:L57ee51:{c.instructions+=3;NFSU2_TR(0x57ee51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57ee54:{NFSU2_TR(0x57ee54);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B57ee57:{NFSU2_TR(0x57ee57);
if(r1(R+518)){{goto L57ee83;}}
}
B57ee59:L57ee59:{c.instructions+=2;NFSU2_TR(0x57ee59);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57ee61:{NFSU2_TR(0x57ee61);
{goto L57ee83;}
}
B57ee63:L57ee63:{c.instructions+=3;NFSU2_TR(0x57ee63);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57ee68:{NFSU2_TR(0x57ee68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ee6a:{NFSU2_TR(0x57ee6a);
if(r1(R+518)){{goto L57ef4b;}}
}
B57ee70:L57ee70:{c.instructions+=6;NFSU2_TR(0x57ee70);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57ee76:{NFSU2_TR(0x57ee76);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee78:{NFSU2_TR(0x57ee78);
w4(R+0,u32(r2(R+24)));
}
B57ee7b:{NFSU2_TR(0x57ee7b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee7d:{NFSU2_TR(0x57ee7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee7e:{NFSU2_TR(0x57ee7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ee83ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57ee83:L57ee83:{c.instructions+=4;NFSU2_TR(0x57ee83);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B57ee88:{NFSU2_TR(0x57ee88);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57ee8a:{NFSU2_TR(0x57ee8a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57ee8c:{NFSU2_TR(0x57ee8c);
if(r1(R+518)){{goto L57eeb7;}}
}
B57ee8e:L57ee8e:{c.instructions+=3;NFSU2_TR(0x57ee8e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee90:{NFSU2_TR(0x57ee90);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee92:{NFSU2_TR(0x57ee92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ee97ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e3b0u);}goto L57e3b0;}
}
B57ee97:L57ee97:{c.instructions+=3;NFSU2_TR(0x57ee97);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee99:{NFSU2_TR(0x57ee99);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ee9b:{NFSU2_TR(0x57ee9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eea0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e3b0u);}goto L57e3b0;}
}
B57eea0:L57eea0:{c.instructions+=3;NFSU2_TR(0x57eea0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eea2:{NFSU2_TR(0x57eea2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eea4:{NFSU2_TR(0x57eea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eea9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e3b0u);}goto L57e3b0;}
}
B57eea9:L57eea9:{c.instructions+=3;NFSU2_TR(0x57eea9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eeab:{NFSU2_TR(0x57eeab);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eead:{NFSU2_TR(0x57eead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eeb2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e3b0u);}goto L57e3b0;}
}
B57eeb2:L57eeb2:{c.instructions+=2;NFSU2_TR(0x57eeb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B57eeb5:{NFSU2_TR(0x57eeb5);
{goto L57ef25;}
}
B57eeb7:L57eeb7:{c.instructions+=2;NFSU2_TR(0x57eeb7);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57eebd:{NFSU2_TR(0x57eebd);
if(r1(R+518)){{goto L57ef25;}}
}
B57eebf:L57eebf:{c.instructions+=6;NFSU2_TR(0x57eebf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eec1:{NFSU2_TR(0x57eec1);
w4(R+4,u32(r2(R+12)));
}
B57eec4:{NFSU2_TR(0x57eec4);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eec6:{NFSU2_TR(0x57eec6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eec7:{NFSU2_TR(0x57eec7);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57eecd:{NFSU2_TR(0x57eecd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eed2ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57eed2:L57eed2:{c.instructions+=2;NFSU2_TR(0x57eed2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57eed8:{NFSU2_TR(0x57eed8);
if(r1(R+518)){{goto L57ef25;}}
}
B57eeda:L57eeda:{c.instructions+=6;NFSU2_TR(0x57eeda);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57eee0:{NFSU2_TR(0x57eee0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eee2:{NFSU2_TR(0x57eee2);
w4(R+8,u32(r2(R+28)));
}
B57eee5:{NFSU2_TR(0x57eee5);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eee7:{NFSU2_TR(0x57eee7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eee8:{NFSU2_TR(0x57eee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57eeedull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57eeed:L57eeed:{c.instructions+=2;NFSU2_TR(0x57eeed);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57eef3:{NFSU2_TR(0x57eef3);
if(r1(R+518)){{goto L57ef25;}}
}
B57eef5:L57eef5:{c.instructions+=6;NFSU2_TR(0x57eef5);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57eefb:{NFSU2_TR(0x57eefb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57eefd:{NFSU2_TR(0x57eefd);
w4(R+0,u32(r2(R+20)));
}
B57ef00:{NFSU2_TR(0x57ef00);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ef02:{NFSU2_TR(0x57ef02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ef03:{NFSU2_TR(0x57ef03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ef08ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57ef08:L57ef08:{c.instructions+=2;NFSU2_TR(0x57ef08);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57ef0e:{NFSU2_TR(0x57ef0e);
if(r1(R+518)){{goto L57ef25;}}
}
B57ef10:L57ef10:{c.instructions+=6;NFSU2_TR(0x57ef10);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B57ef15:{NFSU2_TR(0x57ef15);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ef17:{NFSU2_TR(0x57ef17);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ef19:{NFSU2_TR(0x57ef19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ef1a:{NFSU2_TR(0x57ef1a);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57ef20:{NFSU2_TR(0x57ef20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ef25ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B57ef25:L57ef25:{c.instructions+=2;NFSU2_TR(0x57ef25);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57ef29:{NFSU2_TR(0x57ef29);
if(r1(R+518)){{goto L57ef4b;}}
}
B57ef2b:L57ef2b:{c.instructions+=2;NFSU2_TR(0x57ef2b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57ef31:{NFSU2_TR(0x57ef31);
if(r1(R+518)){{goto L57ef3f;}}
}
B57ef33:L57ef33:{c.instructions+=2;NFSU2_TR(0x57ef33);
__builtin_memmove(gp(0x8650d8),(R+24),4);
}
B57ef39:{NFSU2_TR(0x57ef39);
__builtin_memmove(gp(0x8650d0),(R+24),4);
}
B57ef3f:L57ef3f:{c.instructions+=6;NFSU2_TR(0x57ef3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57ef40:{NFSU2_TR(0x57ef40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57ef41:{NFSU2_TR(0x57ef41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57ef42:{NFSU2_TR(0x57ef42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57ef43:{NFSU2_TR(0x57ef43);
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
B57ef46:{NFSU2_TR(0x57ef46);
TAIL_STATIC(0x43bd50u,43b);
}
B57ef4b:L57ef4b:{c.instructions+=6;NFSU2_TR(0x57ef4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57ef4c:{NFSU2_TR(0x57ef4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57ef4d:{NFSU2_TR(0x57ef4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57ef4e:{NFSU2_TR(0x57ef4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57ef4f:{NFSU2_TR(0x57ef4f);
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
B57ef52:{NFSU2_TR(0x57ef52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ef60:L57ef60:{c.instructions+=3;NFSU2_TR(0x57ef60);
__builtin_memmove((R+0),gp(0x864f58),4);
}
B57ef65:{NFSU2_TR(0x57ef65);
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
B57ef67:{NFSU2_TR(0x57ef67);
if(r1(R+518)){{goto L57ef89;}}
}
B57ef69:L57ef69:{c.instructions+=5;NFSU2_TR(0x57ef69);
__builtin_memmove((R+4),gp(0x864f5c),4);
}
B57ef6f:{NFSU2_TR(0x57ef6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ef70:{NFSU2_TR(0x57ef70);
s4(0x864f58,u32(0x0ull));
}
B57ef7a:{NFSU2_TR(0x57ef7a);
s4(0x864f5c,u32(0x0ull));
}
B57ef84:{NFSU2_TR(0x57ef84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ef86ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B57ef86:L57ef86:{c.instructions+=1;NFSU2_TR(0x57ef86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57ef89:L57ef89:{c.instructions+=2;NFSU2_TR(0x57ef89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ef8a:{NFSU2_TR(0x57ef8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ef8full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57e800u);}goto L57e800;}
}
B57ef8f:L57ef8f:{c.instructions+=3;NFSU2_TR(0x57ef8f);
__builtin_memmove((R+0),gp(0x864f54),4);
}
B57ef94:{NFSU2_TR(0x57ef94);
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
B57ef96:{NFSU2_TR(0x57ef96);
if(r1(R+518)){{goto L57efc0;}}
}
B57ef98:L57ef98:{c.instructions+=3;NFSU2_TR(0x57ef98);
__builtin_memmove((R+24),gp(0x8651a4),4);
}
B57ef9e:{NFSU2_TR(0x57ef9e);
w4(R+4,u32(0x8651a4ull));
}
B57efa3:{NFSU2_TR(0x57efa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57efa8ull));
TAIL_STATIC(0x502fd0u,502);
}
B57efa8:L57efa8:{c.instructions+=2;NFSU2_TR(0x57efa8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57efaa:{NFSU2_TR(0x57efaa);
if(r1(R+518)){{goto L57efc0;}}
}
B57efac:L57efac:{c.instructions+=1;NFSU2_TR(0x57efac);
__builtin_memmove((R+16),(R+16),4);
}
B57efb0:L57efb0:{c.instructions+=3;NFSU2_TR(0x57efb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57efb6:{NFSU2_TR(0x57efb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57efb8:{NFSU2_TR(0x57efb8);
if(r1(R+518)){{goto L57efc4;}}
}
B57efba:L57efba:{c.instructions+=3;NFSU2_TR(0x57efba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57efbc:{NFSU2_TR(0x57efbc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57efbe:{NFSU2_TR(0x57efbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57efb0u);}goto L57efb0;}}
}
B57efc0:L57efc0:{c.instructions+=3;NFSU2_TR(0x57efc0);
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
B57efc2:{NFSU2_TR(0x57efc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57efc3:{NFSU2_TR(0x57efc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57efc4:L57efc4:{c.instructions+=2;NFSU2_TR(0x57efc4);
__builtin_memmove((R+4),(R+24),4);
}
B57efc6:{NFSU2_TR(0x57efc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57efcbull));
TAIL_STATIC(0x577de0u,577);
}
B57efcb:L57efcb:{c.instructions+=3;NFSU2_TR(0x57efcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57efd1:{NFSU2_TR(0x57efd1);
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
B57efd3:{NFSU2_TR(0x57efd3);
if(r1(R+518)){{goto L57eff1;}}
}
B57efd5:L57efd5:{c.instructions+=4;NFSU2_TR(0x57efd5);
s4(0x864f54,u32(u32(m4(0x864f54))-u32(u32(0x1ull))));
}
B57efdb:{NFSU2_TR(0x57efdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57efe1:{NFSU2_TR(0x57efe1);
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
B57efe3:{NFSU2_TR(0x57efe3);
if(r1(R+518)){{goto L57eff1;}}
}
B57efe5:L57efe5:{c.instructions+=3;NFSU2_TR(0x57efe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57efeb:{NFSU2_TR(0x57efeb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57efec:{NFSU2_TR(0x57efec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57efeeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B57efee:L57efee:{c.instructions+=1;NFSU2_TR(0x57efee);
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
B57eff1:L57eff1:{c.instructions+=3;NFSU2_TR(0x57eff1);
__builtin_memmove((R+0),gp(0x864f54),4);
}
B57eff6:{NFSU2_TR(0x57eff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57eff7:{NFSU2_TR(0x57eff7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x57e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
