#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49f(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4b8(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4ef(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_545(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_55f(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x55e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x55e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_55e(u8* __restrict R,Cpu& c);
u32 page_55e(Cpu& c){return body_55e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_55e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x55e007:goto L55e007;
case 0x55e008:c.instructions+=1;goto B55e008;
case 0x55e00b:goto L55e00b;
case 0x55e00d:c.instructions+=1;goto B55e00d;
case 0x55e012:goto L55e012;
case 0x55e017:c.instructions+=5;goto B55e017;
case 0x55e01a:c.instructions+=4;goto B55e01a;
case 0x55e020:c.instructions+=3;goto B55e020;
case 0x55e023:c.instructions+=2;goto B55e023;
case 0x55e025:c.instructions+=1;goto B55e025;
case 0x55e027:goto L55e027;
case 0x55e028:goto L55e028;
case 0x55e02b:c.instructions+=3;goto B55e02b;
case 0x55e02e:c.instructions+=2;goto B55e02e;
case 0x55e02f:c.instructions+=1;goto B55e02f;
case 0x55e034:goto L55e034;
case 0x55e037:c.instructions+=2;goto B55e037;
case 0x55e039:c.instructions+=1;goto B55e039;
case 0x55e03b:goto L55e03b;
case 0x55e041:c.instructions+=2;goto B55e041;
case 0x55e043:c.instructions+=1;goto B55e043;
case 0x55e045:goto L55e045;
case 0x55e048:c.instructions+=2;goto B55e048;
case 0x55e049:c.instructions+=1;goto B55e049;
case 0x55e04e:goto L55e04e;
case 0x55e050:c.instructions+=2;goto B55e050;
case 0x55e052:c.instructions+=1;goto B55e052;
case 0x55e054:goto L55e054;
case 0x55e055:goto L55e055;
case 0x55e057:c.instructions+=4;goto B55e057;
case 0x55e05c:c.instructions+=3;goto B55e05c;
case 0x55e061:c.instructions+=2;goto B55e061;
case 0x55e066:c.instructions+=1;goto B55e066;
case 0x55e06b:goto L55e06b;
case 0x55e06e:c.instructions+=2;goto B55e06e;
case 0x55e06f:c.instructions+=1;goto B55e06f;
case 0x55e072:goto L55e072;
case 0x55e077:c.instructions+=3;goto B55e077;
case 0x55e079:c.instructions+=2;goto B55e079;
case 0x55e080:c.instructions+=1;goto B55e080;
case 0x55e082:goto L55e082;
case 0x55e089:goto L55e089;
case 0x55e08b:c.instructions+=2;goto B55e08b;
case 0x55e08d:c.instructions+=1;goto B55e08d;
case 0x55e08f:goto L55e08f;
case 0x55e094:goto L55e094;
case 0x55e095:c.instructions+=1;goto B55e095;
case 0x55e098:goto L55e098;
case 0x55e09d:goto L55e09d;
case 0x55e09e:c.instructions+=1;goto B55e09e;
case 0x55e0a1:goto L55e0a1;
case 0x55e0a6:c.instructions+=1;goto B55e0a6;
case 0x55e0a8:goto L55e0a8;
case 0x55e0ad:c.instructions+=2;goto B55e0ad;
case 0x55e0af:c.instructions+=1;goto B55e0af;
case 0x55e0b1:goto L55e0b1;
case 0x55e0b4:c.instructions+=2;goto B55e0b4;
case 0x55e0b7:c.instructions+=1;goto B55e0b7;
case 0x55e0b9:goto L55e0b9;
case 0x55e0bc:c.instructions+=2;goto B55e0bc;
case 0x55e0be:c.instructions+=1;goto B55e0be;
case 0x55e0c0:goto L55e0c0;
case 0x55e0c3:c.instructions+=3;goto B55e0c3;
case 0x55e0c8:c.instructions+=2;goto B55e0c8;
case 0x55e0c9:c.instructions+=1;goto B55e0c9;
case 0x55e0ce:goto L55e0ce;
case 0x55e0d1:c.instructions+=5;goto B55e0d1;
case 0x55e0d3:c.instructions+=4;goto B55e0d3;
case 0x55e0d8:c.instructions+=3;goto B55e0d8;
case 0x55e0dd:c.instructions+=2;goto B55e0dd;
case 0x55e0de:c.instructions+=1;goto B55e0de;
case 0x55e0e3:goto L55e0e3;
case 0x55e0e6:c.instructions+=4;goto B55e0e6;
case 0x55e0eb:c.instructions+=3;goto B55e0eb;
case 0x55e0f0:c.instructions+=2;goto B55e0f0;
case 0x55e0f1:c.instructions+=1;goto B55e0f1;
case 0x55e0f6:goto L55e0f6;
case 0x55e0f9:c.instructions+=2;goto B55e0f9;
case 0x55e0fa:c.instructions+=1;goto B55e0fa;
case 0x55e0fd:goto L55e0fd;
case 0x55e100:c.instructions+=5;goto B55e100;
case 0x55e102:c.instructions+=4;goto B55e102;
case 0x55e107:c.instructions+=3;goto B55e107;
case 0x55e10c:c.instructions+=2;goto B55e10c;
case 0x55e10d:c.instructions+=1;goto B55e10d;
case 0x55e112:goto L55e112;
case 0x55e115:goto L55e115;
case 0x55e116:c.instructions+=1;goto B55e116;
case 0x55e120:goto L55e120;
case 0x55e128:c.instructions+=1;goto B55e128;
case 0x55e12a:goto L55e12a;
case 0x55e12e:c.instructions+=3;goto B55e12e;
case 0x55e12f:c.instructions+=2;goto B55e12f;
case 0x55e134:c.instructions+=1;goto B55e134;
case 0x55e139:goto L55e139;
case 0x55e13b:c.instructions+=1;goto B55e13b;
case 0x55e13d:goto L55e13d;
case 0x55e140:c.instructions+=2;goto B55e140;
case 0x55e142:c.instructions+=1;goto B55e142;
case 0x55e144:goto L55e144;
case 0x55e147:c.instructions+=2;goto B55e147;
case 0x55e149:c.instructions+=1;goto B55e149;
case 0x55e14b:goto L55e14b;
case 0x55e14c:c.instructions+=5;goto B55e14c;
case 0x55e14e:c.instructions+=4;goto B55e14e;
case 0x55e150:c.instructions+=3;goto B55e150;
case 0x55e155:c.instructions+=2;goto B55e155;
case 0x55e157:c.instructions+=1;goto B55e157;
case 0x55e15c:goto L55e15c;
case 0x55e160:goto L55e160;
case 0x55e164:c.instructions+=4;goto B55e164;
case 0x55e169:c.instructions+=3;goto B55e169;
case 0x55e16a:c.instructions+=2;goto B55e16a;
case 0x55e16c:c.instructions+=1;goto B55e16c;
case 0x55e172:goto L55e172;
case 0x55e178:goto L55e178;
case 0x55e17d:c.instructions+=1;goto B55e17d;
case 0x55e183:goto L55e183;
case 0x55e185:goto L55e185;
case 0x55e18a:c.instructions+=1;goto B55e18a;
case 0x55e18c:goto L55e18c;
case 0x55e191:c.instructions+=1;goto B55e191;
case 0x55e197:goto L55e197;
case 0x55e19a:c.instructions+=5;goto B55e19a;
case 0x55e19e:c.instructions+=4;goto B55e19e;
case 0x55e1a0:c.instructions+=3;goto B55e1a0;
case 0x55e1a5:c.instructions+=2;goto B55e1a5;
case 0x55e1a6:c.instructions+=1;goto B55e1a6;
case 0x55e1ab:goto L55e1ab;
case 0x55e1ae:c.instructions+=2;goto B55e1ae;
case 0x55e1af:c.instructions+=1;goto B55e1af;
case 0x55e1b2:goto L55e1b2;
case 0x55e1b5:c.instructions+=2;goto B55e1b5;
case 0x55e1b7:c.instructions+=1;goto B55e1b7;
case 0x55e1bd:goto L55e1bd;
case 0x55e1c0:c.instructions+=2;goto B55e1c0;
case 0x55e1c2:c.instructions+=1;goto B55e1c2;
case 0x55e1c8:goto L55e1c8;
case 0x55e1ca:c.instructions+=4;goto B55e1ca;
case 0x55e1cf:c.instructions+=3;goto B55e1cf;
case 0x55e1d4:c.instructions+=2;goto B55e1d4;
case 0x55e1d5:c.instructions+=1;goto B55e1d5;
case 0x55e1da:goto L55e1da;
case 0x55e1de:c.instructions+=8;goto B55e1de;
case 0x55e1e1:c.instructions+=7;goto B55e1e1;
case 0x55e1e4:c.instructions+=6;goto B55e1e4;
case 0x55e1e7:c.instructions+=5;goto B55e1e7;
case 0x55e1e8:c.instructions+=4;goto B55e1e8;
case 0x55e1e9:c.instructions+=3;goto B55e1e9;
case 0x55e1ea:c.instructions+=2;goto B55e1ea;
case 0x55e1ed:c.instructions+=1;goto B55e1ed;
case 0x55e1f2:goto L55e1f2;
case 0x55e1f5:c.instructions+=4;goto B55e1f5;
case 0x55e1f8:c.instructions+=3;goto B55e1f8;
case 0x55e1f9:c.instructions+=2;goto B55e1f9;
case 0x55e1fe:c.instructions+=1;goto B55e1fe;
case 0x55e203:goto L55e203;
case 0x55e206:c.instructions+=1;goto B55e206;
case 0x55e208:goto L55e208;
case 0x55e20d:c.instructions+=1;goto B55e20d;
case 0x55e213:goto L55e213;
case 0x55e215:c.instructions+=2;goto B55e215;
case 0x55e217:c.instructions+=1;goto B55e217;
case 0x55e21c:goto L55e21c;
case 0x55e21d:c.instructions+=1;goto B55e21d;
case 0x55e220:goto L55e220;
case 0x55e223:c.instructions+=2;goto B55e223;
case 0x55e225:c.instructions+=1;goto B55e225;
case 0x55e227:goto L55e227;
case 0x55e22a:c.instructions+=2;goto B55e22a;
case 0x55e22c:c.instructions+=1;goto B55e22c;
case 0x55e22e:goto L55e22e;
case 0x55e230:c.instructions+=4;goto B55e230;
case 0x55e235:c.instructions+=3;goto B55e235;
case 0x55e23a:c.instructions+=2;goto B55e23a;
case 0x55e23b:c.instructions+=1;goto B55e23b;
case 0x55e240:goto L55e240;
case 0x55e243:c.instructions+=4;goto B55e243;
case 0x55e246:c.instructions+=3;goto B55e246;
case 0x55e247:c.instructions+=2;goto B55e247;
case 0x55e24c:c.instructions+=1;goto B55e24c;
case 0x55e251:goto L55e251;
case 0x55e254:goto L55e254;
case 0x55e25a:c.instructions+=2;goto B55e25a;
case 0x55e25c:c.instructions+=1;goto B55e25c;
case 0x55e262:goto L55e262;
case 0x55e265:c.instructions+=2;goto B55e265;
case 0x55e266:c.instructions+=1;goto B55e266;
case 0x55e26b:goto L55e26b;
case 0x55e26c:c.instructions+=1;goto B55e26c;
case 0x55e26f:goto L55e26f;
case 0x55e274:c.instructions+=1;goto B55e274;
case 0x55e276:goto L55e276;
case 0x55e278:goto L55e278;
case 0x55e27d:c.instructions+=1;goto B55e27d;
case 0x55e27f:goto L55e27f;
case 0x55e284:c.instructions+=1;goto B55e284;
case 0x55e286:goto L55e286;
case 0x55e289:c.instructions+=5;goto B55e289;
case 0x55e28d:c.instructions+=4;goto B55e28d;
case 0x55e28f:c.instructions+=3;goto B55e28f;
case 0x55e294:c.instructions+=2;goto B55e294;
case 0x55e295:c.instructions+=1;goto B55e295;
case 0x55e29a:goto L55e29a;
case 0x55e29d:c.instructions+=4;goto B55e29d;
case 0x55e2a0:c.instructions+=3;goto B55e2a0;
case 0x55e2a1:c.instructions+=2;goto B55e2a1;
case 0x55e2a4:c.instructions+=1;goto B55e2a4;
case 0x55e2a6:goto L55e2a6;
case 0x55e2ad:goto L55e2ad;
case 0x55e2b0:c.instructions+=5;goto B55e2b0;
case 0x55e2b4:c.instructions+=4;goto B55e2b4;
case 0x55e2b6:c.instructions+=3;goto B55e2b6;
case 0x55e2bb:c.instructions+=2;goto B55e2bb;
case 0x55e2bc:c.instructions+=1;goto B55e2bc;
case 0x55e2c1:goto L55e2c1;
case 0x55e2c4:c.instructions+=2;goto B55e2c4;
case 0x55e2c5:c.instructions+=1;goto B55e2c5;
case 0x55e2c8:goto L55e2c8;
case 0x55e2ca:c.instructions+=2;goto B55e2ca;
case 0x55e2cc:c.instructions+=1;goto B55e2cc;
case 0x55e2d1:goto L55e2d1;
case 0x55e2d2:c.instructions+=1;goto B55e2d2;
case 0x55e2d5:goto L55e2d5;
case 0x55e2d7:c.instructions+=1;goto B55e2d7;
case 0x55e2dc:goto L55e2dc;
case 0x55e2dd:c.instructions+=1;goto B55e2dd;
case 0x55e2e0:goto L55e2e0;
case 0x55e2e5:c.instructions+=1;goto B55e2e5;
case 0x55e2e7:goto L55e2e7;
case 0x55e2e9:c.instructions+=2;goto B55e2e9;
case 0x55e2eb:c.instructions+=1;goto B55e2eb;
case 0x55e2f0:goto L55e2f0;
case 0x55e2f1:c.instructions+=1;goto B55e2f1;
case 0x55e300:goto L55e300;
case 0x55e301:c.instructions+=5;goto B55e301;
case 0x55e303:c.instructions+=4;goto B55e303;
case 0x55e306:c.instructions+=3;goto B55e306;
case 0x55e309:c.instructions+=2;goto B55e309;
case 0x55e30b:c.instructions+=1;goto B55e30b;
case 0x55e30d:goto L55e30d;
case 0x55e313:c.instructions+=4;goto B55e313;
case 0x55e314:c.instructions+=3;goto B55e314;
case 0x55e317:c.instructions+=2;goto B55e317;
case 0x55e319:c.instructions+=1;goto B55e319;
case 0x55e31e:goto L55e31e;
case 0x55e31f:c.instructions+=1;goto B55e31f;
case 0x55e324:goto L55e324;
case 0x55e327:c.instructions+=6;goto B55e327;
case 0x55e32a:c.instructions+=5;goto B55e32a;
case 0x55e32d:c.instructions+=4;goto B55e32d;
case 0x55e32e:c.instructions+=3;goto B55e32e;
case 0x55e32f:c.instructions+=2;goto B55e32f;
case 0x55e334:c.instructions+=1;goto B55e334;
case 0x55e339:goto L55e339;
case 0x55e33a:goto L55e33a;
case 0x55e33b:c.instructions+=1;goto B55e33b;
case 0x55e340:goto L55e340;
case 0x55e341:c.instructions+=5;goto B55e341;
case 0x55e343:c.instructions+=4;goto B55e343;
case 0x55e346:c.instructions+=3;goto B55e346;
case 0x55e349:c.instructions+=2;goto B55e349;
case 0x55e34b:c.instructions+=1;goto B55e34b;
case 0x55e34d:goto L55e34d;
case 0x55e353:c.instructions+=4;goto B55e353;
case 0x55e354:c.instructions+=3;goto B55e354;
case 0x55e357:c.instructions+=2;goto B55e357;
case 0x55e359:c.instructions+=1;goto B55e359;
case 0x55e35e:goto L55e35e;
case 0x55e35f:c.instructions+=1;goto B55e35f;
case 0x55e364:goto L55e364;
case 0x55e367:c.instructions+=6;goto B55e367;
case 0x55e36a:c.instructions+=5;goto B55e36a;
case 0x55e36d:c.instructions+=4;goto B55e36d;
case 0x55e36e:c.instructions+=3;goto B55e36e;
case 0x55e36f:c.instructions+=2;goto B55e36f;
case 0x55e374:c.instructions+=1;goto B55e374;
case 0x55e379:goto L55e379;
case 0x55e37a:goto L55e37a;
case 0x55e37b:c.instructions+=1;goto B55e37b;
case 0x55e380:goto L55e380;
case 0x55e381:c.instructions+=6;goto B55e381;
case 0x55e383:c.instructions+=5;goto B55e383;
case 0x55e386:c.instructions+=4;goto B55e386;
case 0x55e38b:c.instructions+=3;goto B55e38b;
case 0x55e38c:c.instructions+=2;goto B55e38c;
case 0x55e38e:c.instructions+=1;goto B55e38e;
case 0x55e394:goto L55e394;
case 0x55e396:goto L55e396;
case 0x55e39b:c.instructions+=1;goto B55e39b;
case 0x55e39d:goto L55e39d;
case 0x55e3a2:c.instructions+=1;goto B55e3a2;
case 0x55e3a8:goto L55e3a8;
case 0x55e3ad:c.instructions+=1;goto B55e3ad;
case 0x55e3b2:goto L55e3b2;
case 0x55e3b7:c.instructions+=1;goto B55e3b7;
case 0x55e3bc:goto L55e3bc;
case 0x55e3c6:c.instructions+=2;goto B55e3c6;
case 0x55e3c8:c.instructions+=1;goto B55e3c8;
case 0x55e3ca:goto L55e3ca;
case 0x55e3cd:c.instructions+=3;goto B55e3cd;
case 0x55e3d2:c.instructions+=2;goto B55e3d2;
case 0x55e3d3:c.instructions+=1;goto B55e3d3;
case 0x55e3d8:goto L55e3d8;
case 0x55e3db:c.instructions+=3;goto B55e3db;
case 0x55e3dc:c.instructions+=2;goto B55e3dc;
case 0x55e3dd:c.instructions+=1;goto B55e3dd;
case 0x55e3e0:goto L55e3e0;
case 0x55e3e3:c.instructions+=3;goto B55e3e3;
case 0x55e3e8:c.instructions+=2;goto B55e3e8;
case 0x55e3e9:c.instructions+=1;goto B55e3e9;
case 0x55e3ee:goto L55e3ee;
case 0x55e3f1:c.instructions+=3;goto B55e3f1;
case 0x55e3f2:c.instructions+=2;goto B55e3f2;
case 0x55e3f3:c.instructions+=1;goto B55e3f3;
case 0x55e3f6:goto L55e3f6;
case 0x55e3f8:c.instructions+=1;goto B55e3f8;
case 0x55e3fd:goto L55e3fd;
case 0x55e3fe:c.instructions+=2;goto B55e3fe;
case 0x55e3ff:c.instructions+=1;goto B55e3ff;
case 0x55e402:goto L55e402;
case 0x55e405:c.instructions+=3;goto B55e405;
case 0x55e408:c.instructions+=2;goto B55e408;
case 0x55e40d:c.instructions+=1;goto B55e40d;
case 0x55e40f:goto L55e40f;
case 0x55e410:c.instructions+=1;goto B55e410;
case 0x55e412:goto L55e412;
case 0x55e415:c.instructions+=1;goto B55e415;
case 0x55e41b:goto L55e41b;
case 0x55e421:c.instructions+=4;goto B55e421;
case 0x55e424:c.instructions+=3;goto B55e424;
case 0x55e427:c.instructions+=2;goto B55e427;
case 0x55e429:c.instructions+=1;goto B55e429;
case 0x55e42b:goto L55e42b;
case 0x55e42e:goto L55e42e;
case 0x55e430:c.instructions+=2;goto B55e430;
case 0x55e436:c.instructions+=1;goto B55e436;
case 0x55e43b:goto L55e43b;
case 0x55e43d:c.instructions+=1;goto B55e43d;
case 0x55e442:goto L55e442;
case 0x55e443:c.instructions+=2;goto B55e443;
case 0x55e444:c.instructions+=1;goto B55e444;
case 0x55e447:goto L55e447;
case 0x55e44a:c.instructions+=4;goto B55e44a;
case 0x55e44d:c.instructions+=3;goto B55e44d;
case 0x55e450:c.instructions+=2;goto B55e450;
case 0x55e452:c.instructions+=1;goto B55e452;
case 0x55e454:goto L55e454;
case 0x55e457:goto L55e457;
case 0x55e459:c.instructions+=2;goto B55e459;
case 0x55e45c:c.instructions+=1;goto B55e45c;
case 0x55e461:goto L55e461;
case 0x55e463:c.instructions+=1;goto B55e463;
case 0x55e468:goto L55e468;
case 0x55e469:c.instructions+=2;goto B55e469;
case 0x55e46a:c.instructions+=1;goto B55e46a;
case 0x55e46d:goto L55e46d;
case 0x55e470:c.instructions+=4;goto B55e470;
case 0x55e473:c.instructions+=3;goto B55e473;
case 0x55e476:c.instructions+=2;goto B55e476;
case 0x55e478:c.instructions+=1;goto B55e478;
case 0x55e47e:goto L55e47e;
case 0x55e481:c.instructions+=1;goto B55e481;
case 0x55e483:goto L55e483;
case 0x55e488:c.instructions+=1;goto B55e488;
case 0x55e48e:goto L55e48e;
case 0x55e491:c.instructions+=3;goto B55e491;
case 0x55e494:c.instructions+=2;goto B55e494;
case 0x55e499:c.instructions+=1;goto B55e499;
case 0x55e49b:goto L55e49b;
case 0x55e49c:c.instructions+=1;goto B55e49c;
case 0x55e49e:goto L55e49e;
case 0x55e4a1:c.instructions+=1;goto B55e4a1;
case 0x55e4a3:goto L55e4a3;
case 0x55e4a9:c.instructions+=4;goto B55e4a9;
case 0x55e4ab:c.instructions+=3;goto B55e4ab;
case 0x55e4ae:c.instructions+=2;goto B55e4ae;
case 0x55e4b0:c.instructions+=1;goto B55e4b0;
case 0x55e4b2:goto L55e4b2;
case 0x55e4b4:goto L55e4b4;
case 0x55e4b6:c.instructions+=2;goto B55e4b6;
case 0x55e4bc:c.instructions+=1;goto B55e4bc;
case 0x55e4c1:goto L55e4c1;
case 0x55e4c3:c.instructions+=1;goto B55e4c3;
case 0x55e4c8:goto L55e4c8;
case 0x55e4c9:c.instructions+=2;goto B55e4c9;
case 0x55e4ca:c.instructions+=1;goto B55e4ca;
case 0x55e4cd:goto L55e4cd;
case 0x55e4d0:c.instructions+=4;goto B55e4d0;
case 0x55e4d2:c.instructions+=3;goto B55e4d2;
case 0x55e4d5:c.instructions+=2;goto B55e4d5;
case 0x55e4d7:c.instructions+=1;goto B55e4d7;
case 0x55e4d9:goto L55e4d9;
case 0x55e4db:goto L55e4db;
case 0x55e4dd:c.instructions+=2;goto B55e4dd;
case 0x55e4e0:c.instructions+=1;goto B55e4e0;
case 0x55e4e5:goto L55e4e5;
case 0x55e4e7:c.instructions+=1;goto B55e4e7;
case 0x55e4ec:goto L55e4ec;
case 0x55e4ed:c.instructions+=2;goto B55e4ed;
case 0x55e4ee:c.instructions+=1;goto B55e4ee;
case 0x55e4f1:goto L55e4f1;
case 0x55e4f4:c.instructions+=4;goto B55e4f4;
case 0x55e4f6:c.instructions+=3;goto B55e4f6;
case 0x55e4f9:c.instructions+=2;goto B55e4f9;
case 0x55e4fb:c.instructions+=1;goto B55e4fb;
case 0x55e4fd:goto L55e4fd;
case 0x55e4ff:goto L55e4ff;
case 0x55e501:c.instructions+=2;goto B55e501;
case 0x55e504:c.instructions+=1;goto B55e504;
case 0x55e509:goto L55e509;
case 0x55e50b:c.instructions+=1;goto B55e50b;
case 0x55e510:goto L55e510;
case 0x55e511:c.instructions+=2;goto B55e511;
case 0x55e512:c.instructions+=1;goto B55e512;
case 0x55e520:goto L55e520;
case 0x55e521:c.instructions+=7;goto B55e521;
case 0x55e523:c.instructions+=6;goto B55e523;
case 0x55e524:c.instructions+=5;goto B55e524;
case 0x55e525:c.instructions+=4;goto B55e525;
case 0x55e528:c.instructions+=3;goto B55e528;
case 0x55e52e:c.instructions+=2;goto B55e52e;
case 0x55e530:c.instructions+=1;goto B55e530;
case 0x55e532:goto L55e532;
case 0x55e538:c.instructions+=1;goto B55e538;
case 0x55e53a:goto L55e53a;
case 0x55e53d:c.instructions+=1;goto B55e53d;
case 0x55e543:goto L55e543;
case 0x55e549:c.instructions+=1;goto B55e549;
case 0x55e54b:goto L55e54b;
case 0x55e54e:c.instructions+=4;goto B55e54e;
case 0x55e553:c.instructions+=3;goto B55e553;
case 0x55e558:c.instructions+=2;goto B55e558;
case 0x55e559:c.instructions+=1;goto B55e559;
case 0x55e55e:goto L55e55e;
case 0x55e561:c.instructions+=2;goto B55e561;
case 0x55e563:c.instructions+=1;goto B55e563;
case 0x55e569:goto L55e569;
case 0x55e56c:c.instructions+=9;goto B55e56c;
case 0x55e56f:c.instructions+=8;goto B55e56f;
case 0x55e570:c.instructions+=7;goto B55e570;
case 0x55e573:c.instructions+=6;goto B55e573;
case 0x55e574:c.instructions+=5;goto B55e574;
case 0x55e575:c.instructions+=4;goto B55e575;
case 0x55e576:c.instructions+=3;goto B55e576;
case 0x55e577:c.instructions+=2;goto B55e577;
case 0x55e579:c.instructions+=1;goto B55e579;
case 0x55e57e:goto L55e57e;
case 0x55e584:c.instructions+=1;goto B55e584;
case 0x55e58a:goto L55e58a;
case 0x55e58c:goto L55e58c;
case 0x55e592:c.instructions+=1;goto B55e592;
case 0x55e594:goto L55e594;
case 0x55e59a:c.instructions+=1;goto B55e59a;
case 0x55e5a0:goto L55e5a0;
case 0x55e5a5:c.instructions+=1;goto B55e5a5;
case 0x55e5aa:goto L55e5aa;
case 0x55e5ac:c.instructions+=1;goto B55e5ac;
case 0x55e5ae:goto L55e5ae;
case 0x55e5b1:goto L55e5b1;
case 0x55e5b3:c.instructions+=7;goto B55e5b3;
case 0x55e5b5:c.instructions+=6;goto B55e5b5;
case 0x55e5b7:c.instructions+=5;goto B55e5b7;
case 0x55e5b9:c.instructions+=4;goto B55e5b9;
case 0x55e5be:c.instructions+=3;goto B55e5be;
case 0x55e5bf:c.instructions+=2;goto B55e5bf;
case 0x55e5c0:c.instructions+=1;goto B55e5c0;
case 0x55e5c5:goto L55e5c5;
case 0x55e5c8:c.instructions+=1;goto B55e5c8;
case 0x55e5cd:goto L55e5cd;
case 0x55e5d2:c.instructions+=3;goto B55e5d2;
case 0x55e5d4:c.instructions+=2;goto B55e5d4;
case 0x55e5d7:c.instructions+=1;goto B55e5d7;
case 0x55e5d9:goto L55e5d9;
case 0x55e5da:c.instructions+=2;goto B55e5da;
case 0x55e5df:c.instructions+=1;goto B55e5df;
case 0x55e5e4:goto L55e5e4;
case 0x55e5e7:c.instructions+=1;goto B55e5e7;
case 0x55e5ec:goto L55e5ec;
case 0x55e5ee:c.instructions+=1;goto B55e5ee;
case 0x55e5f3:goto L55e5f3;
case 0x55e5f8:goto L55e5f8;
case 0x55e5fb:c.instructions+=2;goto B55e5fb;
case 0x55e5fc:c.instructions+=1;goto B55e5fc;
case 0x55e601:goto L55e601;
case 0x55e602:c.instructions+=1;goto B55e602;
case 0x55e607:goto L55e607;
case 0x55e60a:c.instructions+=2;goto B55e60a;
case 0x55e60c:c.instructions+=1;goto B55e60c;
case 0x55e60e:goto L55e60e;
case 0x55e615:goto L55e615;
case 0x55e61a:c.instructions+=1;goto B55e61a;
case 0x55e61f:goto L55e61f;
case 0x55e626:c.instructions+=2;goto B55e626;
case 0x55e62c:c.instructions+=1;goto B55e62c;
case 0x55e62e:goto L55e62e;
case 0x55e634:goto L55e634;
case 0x55e63a:c.instructions+=2;goto B55e63a;
case 0x55e63c:c.instructions+=1;goto B55e63c;
case 0x55e63e:goto L55e63e;
case 0x55e640:c.instructions+=1;goto B55e640;
case 0x55e642:goto L55e642;
case 0x55e644:c.instructions+=1;goto B55e644;
case 0x55e646:goto L55e646;
case 0x55e64b:c.instructions+=1;goto B55e64b;
case 0x55e64d:goto L55e64d;
case 0x55e64f:c.instructions+=1;goto B55e64f;
case 0x55e651:goto L55e651;
case 0x55e656:c.instructions+=1;goto B55e656;
case 0x55e658:goto L55e658;
case 0x55e65a:c.instructions+=4;goto B55e65a;
case 0x55e65c:c.instructions+=3;goto B55e65c;
case 0x55e65e:c.instructions+=2;goto B55e65e;
case 0x55e661:c.instructions+=1;goto B55e661;
case 0x55e662:goto L55e662;
case 0x55e664:c.instructions+=4;goto B55e664;
case 0x55e665:c.instructions+=3;goto B55e665;
case 0x55e667:c.instructions+=2;goto B55e667;
case 0x55e66c:c.instructions+=1;goto B55e66c;
case 0x55e671:goto L55e671;
case 0x55e674:c.instructions+=1;goto B55e674;
case 0x55e679:goto L55e679;
case 0x55e67f:c.instructions+=1;goto B55e67f;
case 0x55e685:goto L55e685;
case 0x55e68b:c.instructions+=1;goto B55e68b;
case 0x55e68d:goto L55e68d;
case 0x55e693:c.instructions+=1;goto B55e693;
case 0x55e699:goto L55e699;
case 0x55e69f:c.instructions+=2;goto B55e69f;
case 0x55e6a4:c.instructions+=1;goto B55e6a4;
case 0x55e6a6:goto L55e6a6;
case 0x55e6ab:c.instructions+=1;goto B55e6ab;
case 0x55e6b1:goto L55e6b1;
case 0x55e6b4:c.instructions+=3;goto B55e6b4;
case 0x55e6b6:c.instructions+=2;goto B55e6b6;
case 0x55e6b7:c.instructions+=1;goto B55e6b7;
case 0x55e6bc:goto L55e6bc;
case 0x55e6bf:c.instructions+=1;goto B55e6bf;
case 0x55e6c4:goto L55e6c4;
case 0x55e6c6:c.instructions+=1;goto B55e6c6;
case 0x55e6cb:goto L55e6cb;
case 0x55e6cd:goto L55e6cd;
case 0x55e6d2:goto L55e6d2;
case 0x55e6d4:c.instructions+=1;goto B55e6d4;
case 0x55e6d9:goto L55e6d9;
case 0x55e6db:goto L55e6db;
case 0x55e6de:c.instructions+=4;goto B55e6de;
case 0x55e6e3:c.instructions+=3;goto B55e6e3;
case 0x55e6e8:c.instructions+=2;goto B55e6e8;
case 0x55e6e9:c.instructions+=1;goto B55e6e9;
case 0x55e6ee:goto L55e6ee;
case 0x55e6f1:c.instructions+=2;goto B55e6f1;
case 0x55e6f3:c.instructions+=1;goto B55e6f3;
case 0x55e6f5:goto L55e6f5;
case 0x55e6f8:c.instructions+=5;goto B55e6f8;
case 0x55e6fa:c.instructions+=4;goto B55e6fa;
case 0x55e6ff:c.instructions+=3;goto B55e6ff;
case 0x55e704:c.instructions+=2;goto B55e704;
case 0x55e705:c.instructions+=1;goto B55e705;
case 0x55e70a:goto L55e70a;
case 0x55e70d:c.instructions+=1;goto B55e70d;
case 0x55e70f:goto L55e70f;
case 0x55e714:c.instructions+=1;goto B55e714;
case 0x55e719:goto L55e719;
case 0x55e71b:c.instructions+=1;goto B55e71b;
case 0x55e71d:goto L55e71d;
case 0x55e722:c.instructions+=1;goto B55e722;
case 0x55e727:goto L55e727;
case 0x55e72a:c.instructions+=7;goto B55e72a;
case 0x55e72b:c.instructions+=6;goto B55e72b;
case 0x55e730:c.instructions+=5;goto B55e730;
case 0x55e735:c.instructions+=4;goto B55e735;
case 0x55e73a:c.instructions+=3;goto B55e73a;
case 0x55e73f:c.instructions+=2;goto B55e73f;
case 0x55e740:c.instructions+=1;goto B55e740;
case 0x55e745:goto L55e745;
case 0x55e748:goto L55e748;
case 0x55e752:c.instructions+=1;goto B55e752;
case 0x55e754:goto L55e754;
case 0x55e757:c.instructions+=9;goto B55e757;
case 0x55e75a:c.instructions+=8;goto B55e75a;
case 0x55e75c:c.instructions+=7;goto B55e75c;
case 0x55e75d:c.instructions+=6;goto B55e75d;
case 0x55e75e:c.instructions+=5;goto B55e75e;
case 0x55e75f:c.instructions+=4;goto B55e75f;
case 0x55e765:c.instructions+=3;goto B55e765;
case 0x55e766:c.instructions+=2;goto B55e766;
case 0x55e768:c.instructions+=1;goto B55e768;
case 0x55e76d:goto L55e76d;
case 0x55e770:c.instructions+=1;goto B55e770;
case 0x55e772:goto L55e772;
case 0x55e774:c.instructions+=4;goto B55e774;
case 0x55e779:c.instructions+=3;goto B55e779;
case 0x55e77e:c.instructions+=2;goto B55e77e;
case 0x55e780:c.instructions+=1;goto B55e780;
case 0x55e785:goto L55e785;
case 0x55e786:goto L55e786;
case 0x55e787:c.instructions+=3;goto B55e787;
case 0x55e788:c.instructions+=2;goto B55e788;
case 0x55e789:c.instructions+=1;goto B55e789;
case 0x55e790:goto L55e790;
case 0x55e798:c.instructions+=1;goto B55e798;
case 0x55e79a:goto L55e79a;
case 0x55e7a1:c.instructions+=2;goto B55e7a1;
case 0x55e7a6:c.instructions+=1;goto B55e7a6;
case 0x55e7a8:goto L55e7a8;
case 0x55e7ad:goto L55e7ad;
case 0x55e7ae:c.instructions+=11;goto B55e7ae;
case 0x55e7b2:c.instructions+=10;goto B55e7b2;
case 0x55e7b3:c.instructions+=9;goto B55e7b3;
case 0x55e7b5:c.instructions+=8;goto B55e7b5;
case 0x55e7ba:c.instructions+=7;goto B55e7ba;
case 0x55e7bf:c.instructions+=6;goto B55e7bf;
case 0x55e7c4:c.instructions+=5;goto B55e7c4;
case 0x55e7c9:c.instructions+=4;goto B55e7c9;
case 0x55e7ce:c.instructions+=3;goto B55e7ce;
case 0x55e7d3:c.instructions+=2;goto B55e7d3;
case 0x55e7d4:c.instructions+=1;goto B55e7d4;
case 0x55e7d9:goto L55e7d9;
case 0x55e7dc:c.instructions+=4;goto B55e7dc;
case 0x55e7dd:c.instructions+=3;goto B55e7dd;
case 0x55e7e2:c.instructions+=2;goto B55e7e2;
case 0x55e7ec:c.instructions+=1;goto B55e7ec;
case 0x55e7f1:goto L55e7f1;
case 0x55e7f3:c.instructions+=2;goto B55e7f3;
case 0x55e7f4:c.instructions+=1;goto B55e7f4;
case 0x55e7f6:goto L55e7f6;
case 0x55e7f9:c.instructions+=2;goto B55e7f9;
case 0x55e7fb:c.instructions+=1;goto B55e7fb;
case 0x55e7fd:goto L55e7fd;
case 0x55e800:c.instructions+=2;goto B55e800;
case 0x55e802:c.instructions+=1;goto B55e802;
case 0x55e804:goto L55e804;
case 0x55e805:c.instructions+=5;goto B55e805;
case 0x55e807:c.instructions+=4;goto B55e807;
case 0x55e809:c.instructions+=3;goto B55e809;
case 0x55e80e:c.instructions+=2;goto B55e80e;
case 0x55e810:c.instructions+=1;goto B55e810;
case 0x55e815:goto L55e815;
case 0x55e820:goto L55e820;
case 0x55e821:c.instructions+=16;goto B55e821;
case 0x55e823:c.instructions+=15;goto B55e823;
case 0x55e826:c.instructions+=14;goto B55e826;
case 0x55e828:c.instructions+=13;goto B55e828;
case 0x55e82d:c.instructions+=12;goto B55e82d;
case 0x55e833:c.instructions+=11;goto B55e833;
case 0x55e834:c.instructions+=10;goto B55e834;
case 0x55e83b:c.instructions+=9;goto B55e83b;
case 0x55e841:c.instructions+=8;goto B55e841;
case 0x55e844:c.instructions+=7;goto B55e844;
case 0x55e845:c.instructions+=6;goto B55e845;
case 0x55e846:c.instructions+=5;goto B55e846;
case 0x55e847:c.instructions+=4;goto B55e847;
case 0x55e849:c.instructions+=3;goto B55e849;
case 0x55e84a:c.instructions+=2;goto B55e84a;
case 0x55e84e:c.instructions+=1;goto B55e84e;
case 0x55e853:goto L55e853;
case 0x55e856:c.instructions+=11;goto B55e856;
case 0x55e85b:c.instructions+=10;goto B55e85b;
case 0x55e860:c.instructions+=9;goto B55e860;
case 0x55e862:c.instructions+=8;goto B55e862;
case 0x55e867:c.instructions+=7;goto B55e867;
case 0x55e86c:c.instructions+=6;goto B55e86c;
case 0x55e86e:c.instructions+=5;goto B55e86e;
case 0x55e86f:c.instructions+=4;goto B55e86f;
case 0x55e872:c.instructions+=3;goto B55e872;
case 0x55e879:c.instructions+=2;goto B55e879;
case 0x55e87f:c.instructions+=1;goto B55e87f;
case 0x55e884:goto L55e884;
case 0x55e887:c.instructions+=9;goto B55e887;
case 0x55e88c:c.instructions+=8;goto B55e88c;
case 0x55e891:c.instructions+=7;goto B55e891;
case 0x55e893:c.instructions+=6;goto B55e893;
case 0x55e898:c.instructions+=5;goto B55e898;
case 0x55e89d:c.instructions+=4;goto B55e89d;
case 0x55e89e:c.instructions+=3;goto B55e89e;
case 0x55e8a4:c.instructions+=2;goto B55e8a4;
case 0x55e8ac:c.instructions+=1;goto B55e8ac;
case 0x55e8b1:goto L55e8b1;
case 0x55e8b4:c.instructions+=8;goto B55e8b4;
case 0x55e8b5:c.instructions+=7;goto B55e8b5;
case 0x55e8b6:c.instructions+=6;goto B55e8b6;
case 0x55e8b7:c.instructions+=5;goto B55e8b7;
case 0x55e8bc:c.instructions+=4;goto B55e8bc;
case 0x55e8bd:c.instructions+=3;goto B55e8bd;
case 0x55e8c3:c.instructions+=2;goto B55e8c3;
case 0x55e8cb:c.instructions+=1;goto B55e8cb;
case 0x55e8d0:goto L55e8d0;
case 0x55e8d3:c.instructions+=7;goto B55e8d3;
case 0x55e8d4:c.instructions+=6;goto B55e8d4;
case 0x55e8d5:c.instructions+=5;goto B55e8d5;
case 0x55e8d7:c.instructions+=4;goto B55e8d7;
case 0x55e8dc:c.instructions+=3;goto B55e8dc;
case 0x55e8dd:c.instructions+=2;goto B55e8dd;
case 0x55e8e3:c.instructions+=1;goto B55e8e3;
case 0x55e8e8:goto L55e8e8;
case 0x55e8ee:c.instructions+=19;goto B55e8ee;
case 0x55e8f4:c.instructions+=18;goto B55e8f4;
case 0x55e8fa:c.instructions+=17;goto B55e8fa;
case 0x55e900:c.instructions+=16;goto B55e900;
case 0x55e907:c.instructions+=15;goto B55e907;
case 0x55e90e:c.instructions+=14;goto B55e90e;
case 0x55e914:c.instructions+=13;goto B55e914;
case 0x55e91a:c.instructions+=12;goto B55e91a;
case 0x55e920:c.instructions+=11;goto B55e920;
case 0x55e926:c.instructions+=10;goto B55e926;
case 0x55e92c:c.instructions+=9;goto B55e92c;
case 0x55e932:c.instructions+=8;goto B55e932;
case 0x55e938:c.instructions+=7;goto B55e938;
case 0x55e93e:c.instructions+=6;goto B55e93e;
case 0x55e944:c.instructions+=5;goto B55e944;
case 0x55e94a:c.instructions+=4;goto B55e94a;
case 0x55e950:c.instructions+=3;goto B55e950;
case 0x55e955:c.instructions+=2;goto B55e955;
case 0x55e95b:c.instructions+=1;goto B55e95b;
case 0x55e960:goto L55e960;
case 0x55e963:c.instructions+=2;goto B55e963;
case 0x55e965:c.instructions+=1;goto B55e965;
case 0x55e96b:goto L55e96b;
case 0x55e972:c.instructions+=1;goto B55e972;
case 0x55e974:goto L55e974;
case 0x55e978:c.instructions+=1;goto B55e978;
case 0x55e97d:goto L55e97d;
case 0x55e983:c.instructions+=4;goto B55e983;
case 0x55e984:c.instructions+=3;goto B55e984;
case 0x55e989:c.instructions+=2;goto B55e989;
case 0x55e991:c.instructions+=1;goto B55e991;
case 0x55e996:goto L55e996;
case 0x55e998:c.instructions+=2;goto B55e998;
case 0x55e99a:c.instructions+=1;goto B55e99a;
case 0x55e99c:goto L55e99c;
case 0x55e99e:c.instructions+=2;goto B55e99e;
case 0x55e9a0:c.instructions+=1;goto B55e9a0;
case 0x55e9a3:goto L55e9a3;
case 0x55e9a5:c.instructions+=6;goto B55e9a5;
case 0x55e9a6:c.instructions+=5;goto B55e9a6;
case 0x55e9aa:c.instructions+=4;goto B55e9aa;
case 0x55e9ab:c.instructions+=3;goto B55e9ab;
case 0x55e9ac:c.instructions+=2;goto B55e9ac;
case 0x55e9ae:c.instructions+=1;goto B55e9ae;
case 0x55e9b1:goto L55e9b1;
case 0x55e9b2:c.instructions+=4;goto B55e9b2;
case 0x55e9b6:c.instructions+=3;goto B55e9b6;
case 0x55e9b8:c.instructions+=2;goto B55e9b8;
case 0x55e9b9:c.instructions+=1;goto B55e9b9;
case 0x55e9be:goto L55e9be;
case 0x55e9c1:c.instructions+=1;goto B55e9c1;
case 0x55e9c6:goto L55e9c6;
case 0x55e9cd:c.instructions+=1;goto B55e9cd;
case 0x55e9cf:goto L55e9cf;
case 0x55e9d4:c.instructions+=1;goto B55e9d4;
case 0x55e9d9:goto L55e9d9;
case 0x55e9e0:c.instructions+=2;goto B55e9e0;
case 0x55e9e8:c.instructions+=1;goto B55e9e8;
case 0x55e9ed:goto L55e9ed;
case 0x55e9f0:c.instructions+=4;goto B55e9f0;
case 0x55e9f5:c.instructions+=3;goto B55e9f5;
case 0x55e9f6:c.instructions+=2;goto B55e9f6;
case 0x55e9fc:c.instructions+=1;goto B55e9fc;
case 0x55ea01:goto L55ea01;
case 0x55ea04:c.instructions+=3;goto B55ea04;
case 0x55ea09:c.instructions+=2;goto B55ea09;
case 0x55ea0a:c.instructions+=1;goto B55ea0a;
case 0x55ea0f:goto L55ea0f;
case 0x55ea12:c.instructions+=3;goto B55ea12;
case 0x55ea17:c.instructions+=2;goto B55ea17;
case 0x55ea18:c.instructions+=1;goto B55ea18;
case 0x55ea1d:goto L55ea1d;
case 0x55ea20:c.instructions+=3;goto B55ea20;
case 0x55ea25:c.instructions+=2;goto B55ea25;
case 0x55ea26:c.instructions+=1;goto B55ea26;
case 0x55ea2b:goto L55ea2b;
case 0x55ea2e:c.instructions+=3;goto B55ea2e;
case 0x55ea33:c.instructions+=2;goto B55ea33;
case 0x55ea34:c.instructions+=1;goto B55ea34;
case 0x55ea39:goto L55ea39;
case 0x55ea3c:c.instructions+=10;goto B55ea3c;
case 0x55ea3e:c.instructions+=9;goto B55ea3e;
case 0x55ea44:c.instructions+=8;goto B55ea44;
case 0x55ea48:c.instructions+=7;goto B55ea48;
case 0x55ea52:c.instructions+=6;goto B55ea52;
case 0x55ea59:c.instructions+=5;goto B55ea59;
case 0x55ea5f:c.instructions+=4;goto B55ea5f;
case 0x55ea69:c.instructions+=3;goto B55ea69;
case 0x55ea73:c.instructions+=2;goto B55ea73;
case 0x55ea7a:c.instructions+=1;goto B55ea7a;
case 0x55ea7f:goto L55ea7f;
case 0x55ea85:c.instructions+=2;goto B55ea85;
case 0x55ea86:c.instructions+=1;goto B55ea86;
case 0x55ea8b:goto L55ea8b;
case 0x55ea8e:c.instructions+=2;goto B55ea8e;
case 0x55ea90:c.instructions+=1;goto B55ea90;
case 0x55ea92:goto L55ea92;
case 0x55ea95:c.instructions+=3;goto B55ea95;
case 0x55ea98:c.instructions+=2;goto B55ea98;
case 0x55ea9b:c.instructions+=1;goto B55ea9b;
case 0x55ea9e:goto L55ea9e;
case 0x55eaa3:c.instructions+=1;goto B55eaa3;
case 0x55eaa8:goto L55eaa8;
case 0x55eaab:c.instructions+=2;goto B55eaab;
case 0x55eaad:c.instructions+=1;goto B55eaad;
case 0x55eaaf:goto L55eaaf;
case 0x55eab5:c.instructions+=3;goto B55eab5;
case 0x55eab7:c.instructions+=2;goto B55eab7;
case 0x55eaba:c.instructions+=1;goto B55eaba;
case 0x55eabc:goto L55eabc;
case 0x55eabe:c.instructions+=3;goto B55eabe;
case 0x55eabf:c.instructions+=2;goto B55eabf;
case 0x55eac4:c.instructions+=1;goto B55eac4;
case 0x55eac6:goto L55eac6;
case 0x55eac7:c.instructions+=3;goto B55eac7;
case 0x55eacc:c.instructions+=2;goto B55eacc;
case 0x55eace:c.instructions+=1;goto B55eace;
case 0x55ead0:goto L55ead0;
case 0x55ead1:c.instructions+=2;goto B55ead1;
case 0x55ead6:c.instructions+=1;goto B55ead6;
case 0x55ead7:goto L55ead7;
case 0x55eadc:goto L55eadc;
case 0x55eae1:c.instructions+=4;goto B55eae1;
case 0x55eae3:c.instructions+=3;goto B55eae3;
case 0x55eae5:c.instructions+=2;goto B55eae5;
case 0x55eae9:c.instructions+=1;goto B55eae9;
case 0x55eaee:goto L55eaee;
case 0x55eaf1:c.instructions+=5;goto B55eaf1;
case 0x55eaf4:c.instructions+=4;goto B55eaf4;
case 0x55eafa:c.instructions+=3;goto B55eafa;
case 0x55eafb:c.instructions+=2;goto B55eafb;
case 0x55eafc:c.instructions+=1;goto B55eafc;
case 0x55eb01:goto L55eb01;
case 0x55eb08:c.instructions+=8;goto B55eb08;
case 0x55eb09:c.instructions+=7;goto B55eb09;
case 0x55eb0b:c.instructions+=6;goto B55eb0b;
case 0x55eb0c:c.instructions+=5;goto B55eb0c;
case 0x55eb13:c.instructions+=4;goto B55eb13;
case 0x55eb14:c.instructions+=3;goto B55eb14;
case 0x55eb16:c.instructions+=2;goto B55eb16;
case 0x55eb17:c.instructions+=1;goto B55eb17;
case 0x55eb20:goto L55eb20;
case 0x55eb21:c.instructions+=2;goto B55eb21;
case 0x55eb23:c.instructions+=1;goto B55eb23;
case 0x55eb28:goto L55eb28;
case 0x55eb2d:c.instructions+=1;goto B55eb2d;
case 0x55eb2f:goto L55eb2f;
case 0x55eb30:c.instructions+=1;goto B55eb30;
case 0x55eb35:goto L55eb35;
case 0x55eb38:goto L55eb38;
case 0x55eb3a:c.instructions+=2;goto B55eb3a;
case 0x55eb3b:c.instructions+=1;goto B55eb3b;
case 0x55eb40:goto L55eb40;
case 0x55eb42:c.instructions+=12;goto B55eb42;
case 0x55eb47:c.instructions+=11;goto B55eb47;
case 0x55eb4d:c.instructions+=10;goto B55eb4d;
case 0x55eb4e:c.instructions+=9;goto B55eb4e;
case 0x55eb55:c.instructions+=8;goto B55eb55;
case 0x55eb56:c.instructions+=7;goto B55eb56;
case 0x55eb57:c.instructions+=6;goto B55eb57;
case 0x55eb59:c.instructions+=5;goto B55eb59;
case 0x55eb5d:c.instructions+=4;goto B55eb5d;
case 0x55eb63:c.instructions+=3;goto B55eb63;
case 0x55eb69:c.instructions+=2;goto B55eb69;
case 0x55eb71:c.instructions+=1;goto B55eb71;
case 0x55eb76:goto L55eb76;
case 0x55eb79:c.instructions+=2;goto B55eb79;
case 0x55eb7e:c.instructions+=1;goto B55eb7e;
case 0x55eb83:goto L55eb83;
case 0x55eb87:c.instructions+=5;goto B55eb87;
case 0x55eb8d:c.instructions+=4;goto B55eb8d;
case 0x55eb8e:c.instructions+=3;goto B55eb8e;
case 0x55eb95:c.instructions+=2;goto B55eb95;
case 0x55eb98:c.instructions+=1;goto B55eb98;
case 0x55eba0:goto L55eba0;
case 0x55eba1:c.instructions+=8;goto B55eba1;
case 0x55eba3:c.instructions+=7;goto B55eba3;
case 0x55eba4:c.instructions+=6;goto B55eba4;
case 0x55eba5:c.instructions+=5;goto B55eba5;
case 0x55eba7:c.instructions+=4;goto B55eba7;
case 0x55ebaa:c.instructions+=3;goto B55ebaa;
case 0x55ebad:c.instructions+=2;goto B55ebad;
case 0x55ebaf:c.instructions+=1;goto B55ebaf;
case 0x55ebb5:goto L55ebb5;
case 0x55ebbb:c.instructions+=3;goto B55ebbb;
case 0x55ebc1:c.instructions+=2;goto B55ebc1;
case 0x55ebc3:c.instructions+=1;goto B55ebc3;
case 0x55ebc9:goto L55ebc9;
case 0x55ebcf:c.instructions+=2;goto B55ebcf;
case 0x55ebd1:c.instructions+=1;goto B55ebd1;
case 0x55ebd7:goto L55ebd7;
case 0x55ebdd:c.instructions+=6;goto B55ebdd;
case 0x55ebde:c.instructions+=5;goto B55ebde;
case 0x55ebdf:c.instructions+=4;goto B55ebdf;
case 0x55ebe2:c.instructions+=3;goto B55ebe2;
case 0x55ebe5:c.instructions+=2;goto B55ebe5;
case 0x55ebe8:c.instructions+=1;goto B55ebe8;
case 0x55ebea:goto L55ebea;
case 0x55ebf0:c.instructions+=2;goto B55ebf0;
case 0x55ebf2:c.instructions+=1;goto B55ebf2;
case 0x55ebf7:goto L55ebf7;
case 0x55ebf9:c.instructions+=1;goto B55ebf9;
case 0x55ebfb:goto L55ebfb;
case 0x55ebfe:c.instructions+=5;goto B55ebfe;
case 0x55ec01:c.instructions+=4;goto B55ec01;
case 0x55ec02:c.instructions+=3;goto B55ec02;
case 0x55ec04:c.instructions+=2;goto B55ec04;
case 0x55ec05:c.instructions+=1;goto B55ec05;
case 0x55ec0a:goto L55ec0a;
case 0x55ec0d:goto L55ec0d;
case 0x55ec0f:c.instructions+=1;goto B55ec0f;
case 0x55ec14:goto L55ec14;
case 0x55ec16:goto L55ec16;
case 0x55ec19:c.instructions+=1;goto B55ec19;
case 0x55ec1b:goto L55ec1b;
case 0x55ec21:c.instructions+=2;goto B55ec21;
case 0x55ec23:c.instructions+=1;goto B55ec23;
case 0x55ec28:goto L55ec28;
case 0x55ec2a:c.instructions+=1;goto B55ec2a;
case 0x55ec2c:goto L55ec2c;
case 0x55ec2f:c.instructions+=5;goto B55ec2f;
case 0x55ec32:c.instructions+=4;goto B55ec32;
case 0x55ec33:c.instructions+=3;goto B55ec33;
case 0x55ec35:c.instructions+=2;goto B55ec35;
case 0x55ec36:c.instructions+=1;goto B55ec36;
case 0x55ec3b:goto L55ec3b;
case 0x55ec3e:goto L55ec3e;
case 0x55ec40:c.instructions+=1;goto B55ec40;
case 0x55ec45:goto L55ec45;
case 0x55ec48:c.instructions+=2;goto B55ec48;
case 0x55ec4e:c.instructions+=1;goto B55ec4e;
case 0x55ec54:goto L55ec54;
case 0x55ec57:c.instructions+=1;goto B55ec57;
case 0x55ec59:goto L55ec59;
case 0x55ec5f:c.instructions+=2;goto B55ec5f;
case 0x55ec61:c.instructions+=1;goto B55ec61;
case 0x55ec66:goto L55ec66;
case 0x55ec68:c.instructions+=1;goto B55ec68;
case 0x55ec6d:goto L55ec6d;
case 0x55ec6f:goto L55ec6f;
case 0x55ec72:c.instructions+=1;goto B55ec72;
case 0x55ec74:goto L55ec74;
case 0x55ec7a:c.instructions+=2;goto B55ec7a;
case 0x55ec7c:c.instructions+=1;goto B55ec7c;
case 0x55ec81:goto L55ec81;
case 0x55ec83:c.instructions+=1;goto B55ec83;
case 0x55ec88:goto L55ec88;
case 0x55ec8e:c.instructions+=4;goto B55ec8e;
case 0x55ec91:c.instructions+=3;goto B55ec91;
case 0x55ec97:c.instructions+=2;goto B55ec97;
case 0x55ec99:c.instructions+=1;goto B55ec99;
case 0x55ec9b:goto L55ec9b;
case 0x55ec9d:c.instructions+=1;goto B55ec9d;
case 0x55ec9f:goto L55ec9f;
case 0x55eca5:goto L55eca5;
case 0x55eca8:c.instructions+=4;goto B55eca8;
case 0x55ecab:c.instructions+=3;goto B55ecab;
case 0x55ecb1:c.instructions+=2;goto B55ecb1;
case 0x55ecb3:c.instructions+=1;goto B55ecb3;
case 0x55ecb5:goto L55ecb5;
case 0x55ecb7:c.instructions+=1;goto B55ecb7;
case 0x55ecbc:goto L55ecbc;
case 0x55ecbf:c.instructions+=2;goto B55ecbf;
case 0x55ecc1:c.instructions+=1;goto B55ecc1;
case 0x55ecc7:goto L55ecc7;
case 0x55eccc:c.instructions+=2;goto B55eccc;
case 0x55ecd1:c.instructions+=1;goto B55ecd1;
case 0x55ecd6:goto L55ecd6;
case 0x55ecd7:c.instructions+=3;goto B55ecd7;
case 0x55ecd9:c.instructions+=2;goto B55ecd9;
case 0x55ecde:c.instructions+=1;goto B55ecde;
case 0x55ece3:goto L55ece3;
case 0x55ece4:c.instructions+=3;goto B55ece4;
case 0x55ece6:c.instructions+=2;goto B55ece6;
case 0x55eceb:c.instructions+=1;goto B55eceb;
case 0x55ecf0:goto L55ecf0;
case 0x55ecf2:c.instructions+=3;goto B55ecf2;
case 0x55ecf4:c.instructions+=2;goto B55ecf4;
case 0x55ecf9:c.instructions+=1;goto B55ecf9;
case 0x55ecfe:goto L55ecfe;
case 0x55ed01:c.instructions+=4;goto B55ed01;
case 0x55ed06:c.instructions+=3;goto B55ed06;
case 0x55ed0b:c.instructions+=2;goto B55ed0b;
case 0x55ed10:c.instructions+=1;goto B55ed10;
case 0x55ed15:goto L55ed15;
case 0x55ed17:goto L55ed17;
case 0x55ed1d:c.instructions+=2;goto B55ed1d;
case 0x55ed1f:c.instructions+=1;goto B55ed1f;
case 0x55ed21:goto L55ed21;
case 0x55ed23:c.instructions+=1;goto B55ed23;
case 0x55ed28:goto L55ed28;
case 0x55ed2b:c.instructions+=2;goto B55ed2b;
case 0x55ed2d:c.instructions+=1;goto B55ed2d;
case 0x55ed2f:goto L55ed2f;
case 0x55ed30:c.instructions+=4;goto B55ed30;
case 0x55ed35:c.instructions+=3;goto B55ed35;
case 0x55ed36:c.instructions+=2;goto B55ed36;
case 0x55ed3b:c.instructions+=1;goto B55ed3b;
case 0x55ed40:goto L55ed40;
case 0x55ed42:goto L55ed42;
case 0x55ed45:c.instructions+=4;goto B55ed45;
case 0x55ed46:c.instructions+=3;goto B55ed46;
case 0x55ed47:c.instructions+=2;goto B55ed47;
case 0x55ed4c:c.instructions+=1;goto B55ed4c;
case 0x55ed51:goto L55ed51;
case 0x55ed53:c.instructions+=1;goto B55ed53;
case 0x55ed58:goto L55ed58;
case 0x55ed5e:c.instructions+=2;goto B55ed5e;
case 0x55ed60:c.instructions+=1;goto B55ed60;
case 0x55ed65:goto L55ed65;
case 0x55ed67:c.instructions+=1;goto B55ed67;
case 0x55ed69:goto L55ed69;
case 0x55ed6f:c.instructions+=2;goto B55ed6f;
case 0x55ed70:c.instructions+=1;goto B55ed70;
case 0x55ed75:goto L55ed75;
case 0x55ed78:c.instructions+=6;goto B55ed78;
case 0x55ed79:c.instructions+=5;goto B55ed79;
case 0x55ed7a:c.instructions+=4;goto B55ed7a;
case 0x55ed7b:c.instructions+=3;goto B55ed7b;
case 0x55ed7d:c.instructions+=2;goto B55ed7d;
case 0x55ed7e:c.instructions+=1;goto B55ed7e;
case 0x55ed81:goto L55ed81;
case 0x55ed83:c.instructions+=1;goto B55ed83;
case 0x55ed88:goto L55ed88;
case 0x55ed8a:c.instructions+=1;goto B55ed8a;
case 0x55ed8c:goto L55ed8c;
case 0x55ed92:c.instructions+=2;goto B55ed92;
case 0x55ed93:c.instructions+=1;goto B55ed93;
case 0x55ed98:goto L55ed98;
case 0x55ed9b:c.instructions+=6;goto B55ed9b;
case 0x55ed9c:c.instructions+=5;goto B55ed9c;
case 0x55ed9d:c.instructions+=4;goto B55ed9d;
case 0x55ed9e:c.instructions+=3;goto B55ed9e;
case 0x55eda0:c.instructions+=2;goto B55eda0;
case 0x55eda1:c.instructions+=1;goto B55eda1;
case 0x55eda4:goto L55eda4;
case 0x55edaa:c.instructions+=2;goto B55edaa;
case 0x55edab:c.instructions+=1;goto B55edab;
case 0x55edb0:goto L55edb0;
case 0x55edb6:c.instructions+=2;goto B55edb6;
case 0x55edb7:c.instructions+=1;goto B55edb7;
case 0x55edbc:goto L55edbc;
case 0x55edbf:goto L55edbf;
case 0x55edc0:c.instructions+=1;goto B55edc0;
case 0x55edc1:goto L55edc1;
case 0x55edc2:c.instructions+=3;goto B55edc2;
case 0x55edc4:c.instructions+=2;goto B55edc4;
case 0x55edc5:c.instructions+=1;goto B55edc5;
case 0x55edd0:goto L55edd0;
case 0x55edd1:c.instructions+=5;goto B55edd1;
case 0x55edd2:c.instructions+=4;goto B55edd2;
case 0x55edd4:c.instructions+=3;goto B55edd4;
case 0x55edda:c.instructions+=2;goto B55edda;
case 0x55eddc:c.instructions+=1;goto B55eddc;
case 0x55ede1:goto L55ede1;
case 0x55ede4:c.instructions+=2;goto B55ede4;
case 0x55ede6:c.instructions+=1;goto B55ede6;
case 0x55edec:goto L55edec;
case 0x55edef:c.instructions+=2;goto B55edef;
case 0x55edf1:c.instructions+=1;goto B55edf1;
case 0x55edf7:goto L55edf7;
case 0x55edfd:c.instructions+=10;goto B55edfd;
case 0x55ee00:c.instructions+=9;goto B55ee00;
case 0x55ee02:c.instructions+=8;goto B55ee02;
case 0x55ee03:c.instructions+=7;goto B55ee03;
case 0x55ee08:c.instructions+=6;goto B55ee08;
case 0x55ee09:c.instructions+=5;goto B55ee09;
case 0x55ee0b:c.instructions+=4;goto B55ee0b;
case 0x55ee10:c.instructions+=3;goto B55ee10;
case 0x55ee15:c.instructions+=2;goto B55ee15;
case 0x55ee18:c.instructions+=1;goto B55ee18;
case 0x55ee1d:goto L55ee1d;
case 0x55ee20:c.instructions+=3;goto B55ee20;
case 0x55ee25:c.instructions+=2;goto B55ee25;
case 0x55ee26:c.instructions+=1;goto B55ee26;
case 0x55ee2b:goto L55ee2b;
case 0x55ee2e:c.instructions+=3;goto B55ee2e;
case 0x55ee33:c.instructions+=2;goto B55ee33;
case 0x55ee34:c.instructions+=1;goto B55ee34;
case 0x55ee39:goto L55ee39;
case 0x55ee3c:c.instructions+=7;goto B55ee3c;
case 0x55ee3e:c.instructions+=6;goto B55ee3e;
case 0x55ee43:c.instructions+=5;goto B55ee43;
case 0x55ee48:c.instructions+=4;goto B55ee48;
case 0x55ee49:c.instructions+=3;goto B55ee49;
case 0x55ee50:c.instructions+=2;goto B55ee50;
case 0x55ee57:c.instructions+=1;goto B55ee57;
case 0x55ee5c:goto L55ee5c;
case 0x55ee5f:c.instructions+=4;goto B55ee5f;
case 0x55ee62:c.instructions+=3;goto B55ee62;
case 0x55ee63:c.instructions+=2;goto B55ee63;
case 0x55ee65:c.instructions+=1;goto B55ee65;
case 0x55ee6a:goto L55ee6a;
case 0x55ee70:c.instructions+=2;goto B55ee70;
case 0x55ee72:c.instructions+=1;goto B55ee72;
case 0x55ee74:goto L55ee74;
case 0x55ee7a:c.instructions+=3;goto B55ee7a;
case 0x55ee80:c.instructions+=2;goto B55ee80;
case 0x55ee82:c.instructions+=1;goto B55ee82;
case 0x55ee84:goto L55ee84;
case 0x55ee86:c.instructions+=2;goto B55ee86;
case 0x55ee8c:c.instructions+=1;goto B55ee8c;
case 0x55ee91:goto L55ee91;
case 0x55ee97:c.instructions+=2;goto B55ee97;
case 0x55ee99:c.instructions+=1;goto B55ee99;
case 0x55ee9b:goto L55ee9b;
case 0x55ee9e:c.instructions+=5;goto B55ee9e;
case 0x55eea4:c.instructions+=4;goto B55eea4;
case 0x55eea5:c.instructions+=3;goto B55eea5;
case 0x55eea6:c.instructions+=2;goto B55eea6;
case 0x55eeab:c.instructions+=1;goto B55eeab;
case 0x55eeb0:goto L55eeb0;
case 0x55eeb3:c.instructions+=4;goto B55eeb3;
case 0x55eeb8:c.instructions+=3;goto B55eeb8;
case 0x55eeb9:c.instructions+=2;goto B55eeb9;
case 0x55eeba:c.instructions+=1;goto B55eeba;
case 0x55eebc:goto L55eebc;
case 0x55eebf:c.instructions+=5;goto B55eebf;
case 0x55eec2:c.instructions+=4;goto B55eec2;
case 0x55eec3:c.instructions+=3;goto B55eec3;
case 0x55eec4:c.instructions+=2;goto B55eec4;
case 0x55eec9:c.instructions+=1;goto B55eec9;
case 0x55eece:goto L55eece;
case 0x55eed1:c.instructions+=3;goto B55eed1;
case 0x55eed4:c.instructions+=2;goto B55eed4;
case 0x55eed5:c.instructions+=1;goto B55eed5;
case 0x55eed6:goto L55eed6;
case 0x55eed8:c.instructions+=1;goto B55eed8;
case 0x55eedd:goto L55eedd;
case 0x55eedf:c.instructions+=1;goto B55eedf;
case 0x55eee4:goto L55eee4;
case 0x55eeea:c.instructions+=4;goto B55eeea;
case 0x55eeec:c.instructions+=3;goto B55eeec;
case 0x55eef2:c.instructions+=2;goto B55eef2;
case 0x55eef3:c.instructions+=1;goto B55eef3;
case 0x55eef5:goto L55eef5;
case 0x55eef8:c.instructions+=1;goto B55eef8;
case 0x55eefa:goto L55eefa;
case 0x55eefc:goto L55eefc;
case 0x55eeff:c.instructions+=1;goto B55eeff;
case 0x55ef01:goto L55ef01;
case 0x55ef07:c.instructions+=2;goto B55ef07;
case 0x55ef08:c.instructions+=1;goto B55ef08;
case 0x55ef0d:goto L55ef0d;
case 0x55ef10:c.instructions+=1;goto B55ef10;
case 0x55ef12:goto L55ef12;
case 0x55ef17:goto L55ef17;
case 0x55ef19:c.instructions+=1;goto B55ef19;
case 0x55ef1b:goto L55ef1b;
case 0x55ef21:c.instructions+=2;goto B55ef21;
case 0x55ef22:c.instructions+=1;goto B55ef22;
case 0x55ef27:goto L55ef27;
case 0x55ef2a:c.instructions+=1;goto B55ef2a;
case 0x55ef2c:goto L55ef2c;
case 0x55ef32:c.instructions+=2;goto B55ef32;
case 0x55ef33:c.instructions+=1;goto B55ef33;
case 0x55ef38:goto L55ef38;
case 0x55ef3e:c.instructions+=2;goto B55ef3e;
case 0x55ef3f:c.instructions+=1;goto B55ef3f;
case 0x55ef44:goto L55ef44;
case 0x55ef47:goto L55ef47;
case 0x55ef4e:c.instructions+=2;goto B55ef4e;
case 0x55ef53:c.instructions+=1;goto B55ef53;
case 0x55ef55:goto L55ef55;
case 0x55ef5b:c.instructions+=2;goto B55ef5b;
case 0x55ef5d:c.instructions+=1;goto B55ef5d;
case 0x55ef5f:goto L55ef5f;
case 0x55ef64:goto L55ef64;
case 0x55ef6a:c.instructions+=4;goto B55ef6a;
case 0x55ef6f:c.instructions+=3;goto B55ef6f;
case 0x55ef74:c.instructions+=2;goto B55ef74;
case 0x55ef75:c.instructions+=1;goto B55ef75;
case 0x55ef7a:goto L55ef7a;
case 0x55ef7b:c.instructions+=2;goto B55ef7b;
case 0x55ef7c:c.instructions+=1;goto B55ef7c;
case 0x55ef80:goto L55ef80;
case 0x55ef81:c.instructions+=6;goto B55ef81;
case 0x55ef83:c.instructions+=5;goto B55ef83;
case 0x55ef84:c.instructions+=4;goto B55ef84;
case 0x55ef86:c.instructions+=3;goto B55ef86;
case 0x55ef8c:c.instructions+=2;goto B55ef8c;
case 0x55ef8e:c.instructions+=1;goto B55ef8e;
case 0x55ef93:goto L55ef93;
case 0x55ef96:c.instructions+=4;goto B55ef96;
case 0x55ef9b:c.instructions+=3;goto B55ef9b;
case 0x55ef9c:c.instructions+=2;goto B55ef9c;
case 0x55efa3:c.instructions+=1;goto B55efa3;
case 0x55efa8:goto L55efa8;
case 0x55efab:c.instructions+=3;goto B55efab;
case 0x55efb0:c.instructions+=2;goto B55efb0;
case 0x55efb1:c.instructions+=1;goto B55efb1;
case 0x55efb6:goto L55efb6;
case 0x55efb9:c.instructions+=3;goto B55efb9;
case 0x55efbe:c.instructions+=2;goto B55efbe;
case 0x55efbf:c.instructions+=1;goto B55efbf;
case 0x55efc4:goto L55efc4;
case 0x55efc7:c.instructions+=4;goto B55efc7;
case 0x55efcd:c.instructions+=3;goto B55efcd;
case 0x55efd4:c.instructions+=2;goto B55efd4;
case 0x55efdb:c.instructions+=1;goto B55efdb;
case 0x55efe0:goto L55efe0;
case 0x55efe6:c.instructions+=2;goto B55efe6;
case 0x55efe8:c.instructions+=1;goto B55efe8;
case 0x55efea:goto L55efea;
case 0x55efef:c.instructions+=1;goto B55efef;
case 0x55eff4:goto L55eff4;
case 0x55eff6:goto L55eff6;
case 0x55effb:c.instructions+=1;goto B55effb;
default:missing_instruction(c.pc);}
B55e007:L55e007:{c.instructions+=2;NFSU2_TR(0x55e007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e008:{NFSU2_TR(0x55e008);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e00b:L55e00b:{c.instructions+=2;NFSU2_TR(0x55e00b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e00d:{NFSU2_TR(0x55e00d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e012ull));
TAIL_STATIC(0x4a0140u,4a0);
}
B55e012:L55e012:{c.instructions+=6;NFSU2_TR(0x55e012);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B55e017:{NFSU2_TR(0x55e017);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e01a:{NFSU2_TR(0x55e01a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55e020:{NFSU2_TR(0x55e020);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55e023:{NFSU2_TR(0x55e023);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e025:{NFSU2_TR(0x55e025);
if(r1(R+518)){{goto L55e055;}}
}
B55e027:L55e027:{c.instructions+=1;NFSU2_TR(0x55e027);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e028:L55e028:{c.instructions+=4;NFSU2_TR(0x55e028);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e02b:{NFSU2_TR(0x55e02b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55e02e:{NFSU2_TR(0x55e02e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e02f:{NFSU2_TR(0x55e02f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e034ull));
TAIL_STATIC(0x49ffa0u,49f);
}
B55e034:L55e034:{c.instructions+=3;NFSU2_TR(0x55e034);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55e037:{NFSU2_TR(0x55e037);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55e039:{NFSU2_TR(0x55e039);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e04e;}}
}
B55e03b:L55e03b:{c.instructions+=3;NFSU2_TR(0x55e03b);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55e041:{NFSU2_TR(0x55e041);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e043:{NFSU2_TR(0x55e043);
if(r1(R+518)){{goto L55e04e;}}
}
B55e045:L55e045:{c.instructions+=3;NFSU2_TR(0x55e045);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e048:{NFSU2_TR(0x55e048);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e049:{NFSU2_TR(0x55e049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e04eull));
TAIL_STATIC(0x5376f0u,537);
}
B55e04e:L55e04e:{c.instructions+=3;NFSU2_TR(0x55e04e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e050:{NFSU2_TR(0x55e050);
__builtin_memmove((R+24),(R+28),4);
}
B55e052:{NFSU2_TR(0x55e052);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55e028u);}goto L55e028;}}
}
B55e054:L55e054:{c.instructions+=1;NFSU2_TR(0x55e054);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55e055:L55e055:{c.instructions+=5;NFSU2_TR(0x55e055);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e057:{NFSU2_TR(0x55e057);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e05c:{NFSU2_TR(0x55e05c);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e061:{NFSU2_TR(0x55e061);
u8 U[4];
w4(U+0,u32(0x78f530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e066:{NFSU2_TR(0x55e066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e06bull));
TAIL_STATIC(0x555f10u,555);
}
B55e06b:L55e06b:{c.instructions+=3;NFSU2_TR(0x55e06b);
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
B55e06e:{NFSU2_TR(0x55e06e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e06f:{NFSU2_TR(0x55e06f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e072:L55e072:{c.instructions+=4;NFSU2_TR(0x55e072);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B55e077:{NFSU2_TR(0x55e077);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55e079:{NFSU2_TR(0x55e079);
w4(R+0,u32(m1(0x8763f2)));
}
B55e080:{NFSU2_TR(0x55e080);
if(r1(R+518)){{goto L55e089;}}
}
B55e082:L55e082:{c.instructions+=1;NFSU2_TR(0x55e082);
w4(R+0,u32(m1(0x8763f5)));
}
B55e089:L55e089:{c.instructions+=3;NFSU2_TR(0x55e089);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e08b:{NFSU2_TR(0x55e08b);
__builtin_memmove((R+4),(R+24),4);
}
B55e08d:{NFSU2_TR(0x55e08d);
if(r1(R+518)){{goto L55e098;}}
}
B55e08f:L55e08f:{c.instructions+=1;NFSU2_TR(0x55e08f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e094ull));
TAIL_STATIC(0x55de00u,55d);
}
B55e094:L55e094:{c.instructions+=2;NFSU2_TR(0x55e094);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e095:{NFSU2_TR(0x55e095);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e098:L55e098:{c.instructions+=1;NFSU2_TR(0x55e098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e09dull));
TAIL_STATIC(0x52d4f0u,52d);
}
B55e09d:L55e09d:{c.instructions+=2;NFSU2_TR(0x55e09d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e09e:{NFSU2_TR(0x55e09e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e0a1:L55e0a1:{c.instructions+=2;NFSU2_TR(0x55e0a1);
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
B55e0a6:{NFSU2_TR(0x55e0a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e115;}}
}
B55e0a8:L55e0a8:{c.instructions+=3;NFSU2_TR(0x55e0a8);
__builtin_memmove((R+0),gp(0x838528),1);
}
B55e0ad:{NFSU2_TR(0x55e0ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55e0af:{NFSU2_TR(0x55e0af);
if(r1(R+518)){{goto L55e0fd;}}
}
B55e0b1:L55e0b1:{c.instructions+=3;NFSU2_TR(0x55e0b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e0b4:{NFSU2_TR(0x55e0b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55e0b7:{NFSU2_TR(0x55e0b7);
if(r1(R+518)){{goto L55e0fd;}}
}
B55e0b9:L55e0b9:{c.instructions+=3;NFSU2_TR(0x55e0b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55e0bc:{NFSU2_TR(0x55e0bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55e0be:{NFSU2_TR(0x55e0be);
if(r1(R+518)){{goto L55e0fd;}}
}
B55e0c0:L55e0c0:{c.instructions+=4;NFSU2_TR(0x55e0c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e0c3:{NFSU2_TR(0x55e0c3);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e0c8:{NFSU2_TR(0x55e0c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e0c9:{NFSU2_TR(0x55e0c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e0ceull));
TAIL_STATIC(0x495520u,495);
}
B55e0ce:L55e0ce:{c.instructions+=6;NFSU2_TR(0x55e0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e0d1:{NFSU2_TR(0x55e0d1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e0d3:{NFSU2_TR(0x55e0d3);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e0d8:{NFSU2_TR(0x55e0d8);
u8 U[4];
w4(U+0,u32(0x79c82cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e0dd:{NFSU2_TR(0x55e0dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e0de:{NFSU2_TR(0x55e0de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e0e3ull));
TAIL_STATIC(0x5426c0u,542);
}
B55e0e3:L55e0e3:{c.instructions+=5;NFSU2_TR(0x55e0e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e0e6:{NFSU2_TR(0x55e0e6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e0eb:{NFSU2_TR(0x55e0eb);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e0f0:{NFSU2_TR(0x55e0f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e0f1:{NFSU2_TR(0x55e0f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e0f6ull));
TAIL_STATIC(0x537b80u,537);
}
B55e0f6:L55e0f6:{c.instructions+=3;NFSU2_TR(0x55e0f6);
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
B55e0f9:{NFSU2_TR(0x55e0f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e0fa:{NFSU2_TR(0x55e0fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e0fd:L55e0fd:{c.instructions+=6;NFSU2_TR(0x55e0fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e100:{NFSU2_TR(0x55e100);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e102:{NFSU2_TR(0x55e102);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e107:{NFSU2_TR(0x55e107);
u8 U[4];
w4(U+0,u32(0x79c82cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e10c:{NFSU2_TR(0x55e10c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e10d:{NFSU2_TR(0x55e10d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e112ull));
TAIL_STATIC(0x5426c0u,542);
}
B55e112:L55e112:{c.instructions+=1;NFSU2_TR(0x55e112);
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
B55e115:L55e115:{c.instructions+=2;NFSU2_TR(0x55e115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e116:{NFSU2_TR(0x55e116);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e120:L55e120:{c.instructions+=2;NFSU2_TR(0x55e120);
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
B55e128:{NFSU2_TR(0x55e128);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e15c;}}
}
B55e12a:L55e12a:{c.instructions+=4;NFSU2_TR(0x55e12a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e12e:{NFSU2_TR(0x55e12e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e12f:{NFSU2_TR(0x55e12f);
w4(R+4,u32(0x8637b0ull));
}
B55e134:{NFSU2_TR(0x55e134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e139ull));
TAIL_STATIC(0x51bb70u,51b);
}
B55e139:L55e139:{c.instructions+=2;NFSU2_TR(0x55e139);
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
B55e13b:{NFSU2_TR(0x55e13b);
if(r1(R+518)){{goto L55e15c;}}
}
B55e13d:L55e13d:{c.instructions+=3;NFSU2_TR(0x55e13d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e140:{NFSU2_TR(0x55e140);
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
B55e142:{NFSU2_TR(0x55e142);
if(r1(R+518)){{goto L55e15c;}}
}
B55e144:L55e144:{c.instructions+=3;NFSU2_TR(0x55e144);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e147:{NFSU2_TR(0x55e147);
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
B55e149:{NFSU2_TR(0x55e149);
if(r1(R+518)){{goto L55e15c;}}
}
B55e14b:L55e14b:{c.instructions+=6;NFSU2_TR(0x55e14b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e14c:{NFSU2_TR(0x55e14c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e14e:{NFSU2_TR(0x55e14e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e150:{NFSU2_TR(0x55e150);
u8 U[4];
w4(U+0,u32(0x81017864ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e155:{NFSU2_TR(0x55e155);
__builtin_memmove((R+4),(R+0),4);
}
B55e157:{NFSU2_TR(0x55e157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e15cull));
TAIL_STATIC(0x55b5c0u,55b);
}
B55e15c:L55e15c:{c.instructions+=1;NFSU2_TR(0x55e15c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e160:L55e160:{c.instructions+=5;NFSU2_TR(0x55e160);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e164:{NFSU2_TR(0x55e164);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e169:{NFSU2_TR(0x55e169);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e16a:{NFSU2_TR(0x55e16a);
__builtin_memmove((R+24),(R+4),4);
}
B55e16c:{NFSU2_TR(0x55e16c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55e26f;}}
}
B55e172:L55e172:{c.instructions+=1;NFSU2_TR(0x55e172);
if(r1(R+518)){{goto L55e220;}}
}
B55e178:L55e178:{c.instructions+=2;NFSU2_TR(0x55e178);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e17d:{NFSU2_TR(0x55e17d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55e208;}}
}
B55e183:L55e183:{c.instructions+=1;NFSU2_TR(0x55e183);
if(r1(R+518)){{goto L55e1b2;}}
}
B55e185:L55e185:{c.instructions+=2;NFSU2_TR(0x55e185);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e18a:{NFSU2_TR(0x55e18a);
if(r1(R+518)){{goto L55e1b2;}}
}
B55e18c:L55e18c:{c.instructions+=2;NFSU2_TR(0x55e18c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35f8620bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55e191:{NFSU2_TR(0x55e191);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e2f0;}}
}
B55e197:L55e197:{c.instructions+=6;NFSU2_TR(0x55e197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e19a:{NFSU2_TR(0x55e19a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B55e19e:{NFSU2_TR(0x55e19e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e1a0:{NFSU2_TR(0x55e1a0);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e1a5:{NFSU2_TR(0x55e1a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e1a6:{NFSU2_TR(0x55e1a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e1abull));
TAIL_STATIC(0x51cf70u,51c);
}
B55e1ab:L55e1ab:{c.instructions+=3;NFSU2_TR(0x55e1ab);
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
B55e1ae:{NFSU2_TR(0x55e1ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e1af:{NFSU2_TR(0x55e1af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e1b2:L55e1b2:{c.instructions+=3;NFSU2_TR(0x55e1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e1b5:{NFSU2_TR(0x55e1b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e1b7:{NFSU2_TR(0x55e1b7);
if(r1(R+518)){{goto L55e254;}}
}
B55e1bd:L55e1bd:{c.instructions+=3;NFSU2_TR(0x55e1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e1c0:{NFSU2_TR(0x55e1c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e1c2:{NFSU2_TR(0x55e1c2);
if(r1(R+518)){{goto L55e254;}}
}
B55e1c8:L55e1c8:{c.instructions+=5;NFSU2_TR(0x55e1c8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e1ca:{NFSU2_TR(0x55e1ca);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e1cf:{NFSU2_TR(0x55e1cf);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e1d4:{NFSU2_TR(0x55e1d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e1d5:{NFSU2_TR(0x55e1d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e1daull));
TAIL_STATIC(0x537c00u,537);
}
B55e1da:L55e1da:{c.instructions+=9;NFSU2_TR(0x55e1da);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B55e1de:{NFSU2_TR(0x55e1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e1e1:{NFSU2_TR(0x55e1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e1e4:{NFSU2_TR(0x55e1e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55e1e7:{NFSU2_TR(0x55e1e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e1e8:{NFSU2_TR(0x55e1e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e1e9:{NFSU2_TR(0x55e1e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e1ea:{NFSU2_TR(0x55e1ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e1ed:{NFSU2_TR(0x55e1ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e1f2ull));
TAIL_STATIC(0x4957f0u,495);
}
B55e1f2:L55e1f2:{c.instructions+=5;NFSU2_TR(0x55e1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e1f5:{NFSU2_TR(0x55e1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e1f8:{NFSU2_TR(0x55e1f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e1f9:{NFSU2_TR(0x55e1f9);
u8 U[4];
w4(U+0,u32(0xda52af6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e1fe:{NFSU2_TR(0x55e1fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e203ull));
TAIL_STATIC(0x55dda0u,55d);
}
B55e203:L55e203:{c.instructions+=2;NFSU2_TR(0x55e203);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55e206:{NFSU2_TR(0x55e206);
{goto L55e254;}
}
B55e208:L55e208:{c.instructions+=2;NFSU2_TR(0x55e208);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55e20d:{NFSU2_TR(0x55e20d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e2f0;}}
}
B55e213:L55e213:{c.instructions+=3;NFSU2_TR(0x55e213);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e215:{NFSU2_TR(0x55e215);
__builtin_memmove((R+4),(R+24),4);
}
B55e217:{NFSU2_TR(0x55e217);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e21cull));
TAIL_STATIC(0x538e70u,538);
}
B55e21c:L55e21c:{c.instructions+=2;NFSU2_TR(0x55e21c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e21d:{NFSU2_TR(0x55e21d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e220:L55e220:{c.instructions+=3;NFSU2_TR(0x55e220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e223:{NFSU2_TR(0x55e223);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e225:{NFSU2_TR(0x55e225);
if(r1(R+518)){{goto L55e254;}}
}
B55e227:L55e227:{c.instructions+=3;NFSU2_TR(0x55e227);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e22a:{NFSU2_TR(0x55e22a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e22c:{NFSU2_TR(0x55e22c);
if(r1(R+518)){{goto L55e254;}}
}
B55e22e:L55e22e:{c.instructions+=5;NFSU2_TR(0x55e22e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e230:{NFSU2_TR(0x55e230);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e235:{NFSU2_TR(0x55e235);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e23a:{NFSU2_TR(0x55e23a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e23b:{NFSU2_TR(0x55e23b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e240ull));
TAIL_STATIC(0x537c00u,537);
}
B55e240:L55e240:{c.instructions+=5;NFSU2_TR(0x55e240);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e243:{NFSU2_TR(0x55e243);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e246:{NFSU2_TR(0x55e246);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e247:{NFSU2_TR(0x55e247);
u8 U[4];
w4(U+0,u32(0xaadd0187ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e24c:{NFSU2_TR(0x55e24c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e251ull));
TAIL_STATIC(0x55dda0u,55d);
}
B55e251:L55e251:{c.instructions+=1;NFSU2_TR(0x55e251);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B55e254:L55e254:{c.instructions+=3;NFSU2_TR(0x55e254);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55e25a:{NFSU2_TR(0x55e25a);
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
B55e25c:{NFSU2_TR(0x55e25c);
if(r1(R+518)){{goto L55e2f0;}}
}
B55e262:L55e262:{c.instructions+=3;NFSU2_TR(0x55e262);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e265:{NFSU2_TR(0x55e265);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e266:{NFSU2_TR(0x55e266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e26bull));
TAIL_STATIC(0x5376f0u,537);
}
B55e26b:L55e26b:{c.instructions+=2;NFSU2_TR(0x55e26b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e26c:{NFSU2_TR(0x55e26c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e26f:L55e26f:{c.instructions+=2;NFSU2_TR(0x55e26f);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e274:{NFSU2_TR(0x55e274);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55e2e0;}}
}
B55e276:L55e276:{c.instructions+=1;NFSU2_TR(0x55e276);
if(r1(R+518)){{goto L55e2d5;}}
}
B55e278:L55e278:{c.instructions+=2;NFSU2_TR(0x55e278);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e27d:{NFSU2_TR(0x55e27d);
if(r1(R+518)){{goto L55e2c8;}}
}
B55e27f:L55e27f:{c.instructions+=2;NFSU2_TR(0x55e27f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55e284:{NFSU2_TR(0x55e284);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e2f0;}}
}
B55e286:L55e286:{c.instructions+=6;NFSU2_TR(0x55e286);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e289:{NFSU2_TR(0x55e289);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B55e28d:{NFSU2_TR(0x55e28d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e28f:{NFSU2_TR(0x55e28f);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e294:{NFSU2_TR(0x55e294);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e295:{NFSU2_TR(0x55e295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e29aull));
TAIL_STATIC(0x51cf70u,51c);
}
B55e29a:L55e29a:{c.instructions+=5;NFSU2_TR(0x55e29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e29d:{NFSU2_TR(0x55e29d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55e2a0:{NFSU2_TR(0x55e2a0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B55e2a1:{NFSU2_TR(0x55e2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e2a4:{NFSU2_TR(0x55e2a4);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L55e2ad;}}
}
B55e2a6:L55e2a6:{c.instructions+=1;NFSU2_TR(0x55e2a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55e2ad:L55e2ad:{c.instructions+=6;NFSU2_TR(0x55e2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e2b0:{NFSU2_TR(0x55e2b0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B55e2b4:{NFSU2_TR(0x55e2b4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e2b6:{NFSU2_TR(0x55e2b6);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e2bb:{NFSU2_TR(0x55e2bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e2bc:{NFSU2_TR(0x55e2bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e2c1ull));
TAIL_STATIC(0x51cf70u,51c);
}
B55e2c1:L55e2c1:{c.instructions+=3;NFSU2_TR(0x55e2c1);
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
B55e2c4:{NFSU2_TR(0x55e2c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e2c5:{NFSU2_TR(0x55e2c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e2c8:L55e2c8:{c.instructions+=3;NFSU2_TR(0x55e2c8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e2ca:{NFSU2_TR(0x55e2ca);
__builtin_memmove((R+4),(R+24),4);
}
B55e2cc:{NFSU2_TR(0x55e2cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e2d1ull));
TAIL_STATIC(0x538e70u,538);
}
B55e2d1:L55e2d1:{c.instructions+=2;NFSU2_TR(0x55e2d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e2d2:{NFSU2_TR(0x55e2d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e2d5:L55e2d5:{c.instructions+=2;NFSU2_TR(0x55e2d5);
__builtin_memmove((R+4),(R+24),4);
}
B55e2d7:{NFSU2_TR(0x55e2d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e2dcull));
TAIL_STATIC(0x544160u,544);
}
B55e2dc:L55e2dc:{c.instructions+=2;NFSU2_TR(0x55e2dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e2dd:{NFSU2_TR(0x55e2dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e2e0:L55e2e0:{c.instructions+=2;NFSU2_TR(0x55e2e0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55e2e5:{NFSU2_TR(0x55e2e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e2f0;}}
}
B55e2e7:L55e2e7:{c.instructions+=3;NFSU2_TR(0x55e2e7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e2e9:{NFSU2_TR(0x55e2e9);
__builtin_memmove((R+4),(R+24),4);
}
B55e2eb:{NFSU2_TR(0x55e2eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e2f0ull));
TAIL_STATIC(0x51fdd0u,51f);
}
B55e2f0:L55e2f0:{c.instructions+=2;NFSU2_TR(0x55e2f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e2f1:{NFSU2_TR(0x55e2f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e300:L55e300:{c.instructions+=6;NFSU2_TR(0x55e300);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e301:{NFSU2_TR(0x55e301);
__builtin_memmove((R+24),(R+4),4);
}
B55e303:{NFSU2_TR(0x55e303);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e306:{NFSU2_TR(0x55e306);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B55e309:{NFSU2_TR(0x55e309);
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
B55e30b:{NFSU2_TR(0x55e30b);
if(r1(R+518)){{goto L55e33a;}}
}
B55e30d:L55e30d:{c.instructions+=5;NFSU2_TR(0x55e30d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e313:{NFSU2_TR(0x55e313);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e314:{NFSU2_TR(0x55e314);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55e317:{NFSU2_TR(0x55e317);
__builtin_memmove((R+4),(R+28),4);
}
B55e319:{NFSU2_TR(0x55e319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e31eull));
TAIL_STATIC(0x610010u,610);
}
B55e31e:L55e31e:{c.instructions+=2;NFSU2_TR(0x55e31e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e31f:{NFSU2_TR(0x55e31f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e324ull));
TAIL_STATIC(0x610130u,610);
}
B55e324:L55e324:{c.instructions+=7;NFSU2_TR(0x55e324);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e327:{NFSU2_TR(0x55e327);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e32a:{NFSU2_TR(0x55e32a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55e32d:{NFSU2_TR(0x55e32d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e32e:{NFSU2_TR(0x55e32e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e32f:{NFSU2_TR(0x55e32f);
w4(R+4,u32(0x838980ull));
}
B55e334:{NFSU2_TR(0x55e334);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e339ull));
TAIL_STATIC(0x55c170u,55c);
}
B55e339:L55e339:{c.instructions+=1;NFSU2_TR(0x55e339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55e33a:L55e33a:{c.instructions+=2;NFSU2_TR(0x55e33a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e33b:{NFSU2_TR(0x55e33b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e340:L55e340:{c.instructions+=6;NFSU2_TR(0x55e340);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e341:{NFSU2_TR(0x55e341);
__builtin_memmove((R+24),(R+4),4);
}
B55e343:{NFSU2_TR(0x55e343);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e346:{NFSU2_TR(0x55e346);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B55e349:{NFSU2_TR(0x55e349);
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
B55e34b:{NFSU2_TR(0x55e34b);
if(r1(R+518)){{goto L55e37a;}}
}
B55e34d:L55e34d:{c.instructions+=5;NFSU2_TR(0x55e34d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e353:{NFSU2_TR(0x55e353);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e354:{NFSU2_TR(0x55e354);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55e357:{NFSU2_TR(0x55e357);
__builtin_memmove((R+4),(R+28),4);
}
B55e359:{NFSU2_TR(0x55e359);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e35eull));
TAIL_STATIC(0x610010u,610);
}
B55e35e:L55e35e:{c.instructions+=2;NFSU2_TR(0x55e35e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e35f:{NFSU2_TR(0x55e35f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e364ull));
TAIL_STATIC(0x610130u,610);
}
B55e364:L55e364:{c.instructions+=7;NFSU2_TR(0x55e364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e367:{NFSU2_TR(0x55e367);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e36a:{NFSU2_TR(0x55e36a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55e36d:{NFSU2_TR(0x55e36d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e36e:{NFSU2_TR(0x55e36e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e36f:{NFSU2_TR(0x55e36f);
w4(R+4,u32(0x838980ull));
}
B55e374:{NFSU2_TR(0x55e374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e379ull));
TAIL_STATIC(0x55c230u,55c);
}
B55e379:L55e379:{c.instructions+=1;NFSU2_TR(0x55e379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55e37a:L55e37a:{c.instructions+=2;NFSU2_TR(0x55e37a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e37b:{NFSU2_TR(0x55e37b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e380:L55e380:{c.instructions+=7;NFSU2_TR(0x55e380);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e381:{NFSU2_TR(0x55e381);
__builtin_memmove((R+20),(R+16),4);
}
B55e383:{NFSU2_TR(0x55e383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e386:{NFSU2_TR(0x55e386);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e38b:{NFSU2_TR(0x55e38b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e38c:{NFSU2_TR(0x55e38c);
__builtin_memmove((R+24),(R+4),4);
}
B55e38e:{NFSU2_TR(0x55e38e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55e483;}}
}
B55e394:L55e394:{c.instructions+=1;NFSU2_TR(0x55e394);
if(r1(R+518)){{goto L55e402;}}
}
B55e396:L55e396:{c.instructions+=2;NFSU2_TR(0x55e396);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e39b:{NFSU2_TR(0x55e39b);
if(r1(R+518)){{goto L55e3f6;}}
}
B55e39d:L55e39d:{c.instructions+=2;NFSU2_TR(0x55e39d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55e3a2:{NFSU2_TR(0x55e3a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e510;}}
}
B55e3a8:L55e3a8:{c.instructions+=2;NFSU2_TR(0x55e3a8);
w4(R+4,u32(0x838980ull));
}
B55e3ad:{NFSU2_TR(0x55e3ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e3b2ull));
TAIL_STATIC(0x54fd40u,54f);
}
B55e3b2:L55e3b2:{c.instructions+=2;NFSU2_TR(0x55e3b2);
w4(R+4,u32(0x83a9d0ull));
}
B55e3b7:{NFSU2_TR(0x55e3b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e3bcull));
TAIL_STATIC(0x5032c0u,503);
}
B55e3bc:L55e3bc:{c.instructions+=3;NFSU2_TR(0x55e3bc);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e3c6:{NFSU2_TR(0x55e3c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e3c8:{NFSU2_TR(0x55e3c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e3e0;}}
}
B55e3ca:L55e3ca:{c.instructions+=4;NFSU2_TR(0x55e3ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e3cd:{NFSU2_TR(0x55e3cd);
u8 U[4];
w4(U+0,u32(0x794df0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e3d2:{NFSU2_TR(0x55e3d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e3d3:{NFSU2_TR(0x55e3d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e3d8ull));
TAIL_STATIC(0x537980u,537);
}
B55e3d8:L55e3d8:{c.instructions+=4;NFSU2_TR(0x55e3d8);
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
B55e3db:{NFSU2_TR(0x55e3db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e3dc:{NFSU2_TR(0x55e3dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55e3dd:{NFSU2_TR(0x55e3dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e3e0:L55e3e0:{c.instructions+=4;NFSU2_TR(0x55e3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e3e3:{NFSU2_TR(0x55e3e3);
u8 U[4];
w4(U+0,u32(0x78f354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e3e8:{NFSU2_TR(0x55e3e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e3e9:{NFSU2_TR(0x55e3e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e3eeull));
TAIL_STATIC(0x537980u,537);
}
B55e3ee:L55e3ee:{c.instructions+=4;NFSU2_TR(0x55e3ee);
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
B55e3f1:{NFSU2_TR(0x55e3f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e3f2:{NFSU2_TR(0x55e3f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55e3f3:{NFSU2_TR(0x55e3f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e3f6:L55e3f6:{c.instructions+=2;NFSU2_TR(0x55e3f6);
__builtin_memmove((R+4),(R+24),4);
}
B55e3f8:{NFSU2_TR(0x55e3f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e3fdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55e340u);}goto L55e340;}
}
B55e3fd:L55e3fd:{c.instructions+=3;NFSU2_TR(0x55e3fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e3fe:{NFSU2_TR(0x55e3fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55e3ff:{NFSU2_TR(0x55e3ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e402:L55e402:{c.instructions+=4;NFSU2_TR(0x55e402);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e405:{NFSU2_TR(0x55e405);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e408:{NFSU2_TR(0x55e408);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x36db742ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B55e40d:{NFSU2_TR(0x55e40d);
if(r1(R+518)){{goto L55e46d;}}
}
B55e40f:L55e40f:{c.instructions+=2;NFSU2_TR(0x55e40f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B55e410:{NFSU2_TR(0x55e410);
if(r1(R+518)){{goto L55e447;}}
}
B55e412:L55e412:{c.instructions+=2;NFSU2_TR(0x55e412);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B55e415:{NFSU2_TR(0x55e415);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e509;}}
}
B55e41b:L55e41b:{c.instructions+=5;NFSU2_TR(0x55e41b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e421:{NFSU2_TR(0x55e421);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e424:{NFSU2_TR(0x55e424);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55e427:{NFSU2_TR(0x55e427);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e429:{NFSU2_TR(0x55e429);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e42e;}}
}
B55e42b:L55e42b:{c.instructions+=1;NFSU2_TR(0x55e42b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e42e:L55e42e:{c.instructions+=3;NFSU2_TR(0x55e42e);
__builtin_memmove((R+4),(R+24),4);
}
B55e430:{NFSU2_TR(0x55e430);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e436:{NFSU2_TR(0x55e436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e43bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55e300u);}goto L55e300;}
}
B55e43b:L55e43b:{c.instructions+=2;NFSU2_TR(0x55e43b);
__builtin_memmove((R+4),(R+24),4);
}
B55e43d:{NFSU2_TR(0x55e43d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e442ull));
TAIL_STATIC(0x53a0b0u,53a);
}
B55e442:L55e442:{c.instructions+=3;NFSU2_TR(0x55e442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e443:{NFSU2_TR(0x55e443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55e444:{NFSU2_TR(0x55e444);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e447:L55e447:{c.instructions+=5;NFSU2_TR(0x55e447);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e44a:{NFSU2_TR(0x55e44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e44d:{NFSU2_TR(0x55e44d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55e450:{NFSU2_TR(0x55e450);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e452:{NFSU2_TR(0x55e452);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e457;}}
}
B55e454:L55e454:{c.instructions+=1;NFSU2_TR(0x55e454);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e457:L55e457:{c.instructions+=3;NFSU2_TR(0x55e457);
__builtin_memmove((R+4),(R+24),4);
}
B55e459:{NFSU2_TR(0x55e459);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e45c:{NFSU2_TR(0x55e45c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e461ull));
TAIL_STATIC(0x539ff0u,539);
}
B55e461:L55e461:{c.instructions+=2;NFSU2_TR(0x55e461);
__builtin_memmove((R+4),(R+24),4);
}
B55e463:{NFSU2_TR(0x55e463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e468ull));
TAIL_STATIC(0x53a0b0u,53a);
}
B55e468:L55e468:{c.instructions+=3;NFSU2_TR(0x55e468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e469:{NFSU2_TR(0x55e469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55e46a:{NFSU2_TR(0x55e46a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e46d:L55e46d:{c.instructions+=5;NFSU2_TR(0x55e46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e470:{NFSU2_TR(0x55e470);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e473:{NFSU2_TR(0x55e473);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55e476:{NFSU2_TR(0x55e476);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e478:{NFSU2_TR(0x55e478);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e4ff;}}
}
B55e47e:L55e47e:{c.instructions+=2;NFSU2_TR(0x55e47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e481:{NFSU2_TR(0x55e481);
{goto L55e4ff;}
}
B55e483:L55e483:{c.instructions+=2;NFSU2_TR(0x55e483);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55e488:{NFSU2_TR(0x55e488);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e510;}}
}
B55e48e:L55e48e:{c.instructions+=4;NFSU2_TR(0x55e48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e491:{NFSU2_TR(0x55e491);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e494:{NFSU2_TR(0x55e494);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x36db742ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B55e499:{NFSU2_TR(0x55e499);
if(r1(R+518)){{goto L55e4f1;}}
}
B55e49b:L55e49b:{c.instructions+=2;NFSU2_TR(0x55e49b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B55e49c:{NFSU2_TR(0x55e49c);
if(r1(R+518)){{goto L55e4cd;}}
}
B55e49e:L55e49e:{c.instructions+=2;NFSU2_TR(0x55e49e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B55e4a1:{NFSU2_TR(0x55e4a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e509;}}
}
B55e4a3:L55e4a3:{c.instructions+=5;NFSU2_TR(0x55e4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e4a9:{NFSU2_TR(0x55e4a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55e4ab:{NFSU2_TR(0x55e4ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55e4ae:{NFSU2_TR(0x55e4ae);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e4b0:{NFSU2_TR(0x55e4b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e4b4;}}
}
B55e4b2:L55e4b2:{c.instructions+=1;NFSU2_TR(0x55e4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55e4b4:L55e4b4:{c.instructions+=3;NFSU2_TR(0x55e4b4);
__builtin_memmove((R+4),(R+24),4);
}
B55e4b6:{NFSU2_TR(0x55e4b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e4bc:{NFSU2_TR(0x55e4bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e4c1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55e300u);}goto L55e300;}
}
B55e4c1:L55e4c1:{c.instructions+=2;NFSU2_TR(0x55e4c1);
__builtin_memmove((R+4),(R+24),4);
}
B55e4c3:{NFSU2_TR(0x55e4c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e4c8ull));
TAIL_STATIC(0x53a0b0u,53a);
}
B55e4c8:L55e4c8:{c.instructions+=3;NFSU2_TR(0x55e4c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e4c9:{NFSU2_TR(0x55e4c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55e4ca:{NFSU2_TR(0x55e4ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e4cd:L55e4cd:{c.instructions+=5;NFSU2_TR(0x55e4cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e4d0:{NFSU2_TR(0x55e4d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55e4d2:{NFSU2_TR(0x55e4d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55e4d5:{NFSU2_TR(0x55e4d5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e4d7:{NFSU2_TR(0x55e4d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e4db;}}
}
B55e4d9:L55e4d9:{c.instructions+=1;NFSU2_TR(0x55e4d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55e4db:L55e4db:{c.instructions+=3;NFSU2_TR(0x55e4db);
__builtin_memmove((R+4),(R+24),4);
}
B55e4dd:{NFSU2_TR(0x55e4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e4e0:{NFSU2_TR(0x55e4e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e4e5ull));
TAIL_STATIC(0x539ff0u,539);
}
B55e4e5:L55e4e5:{c.instructions+=2;NFSU2_TR(0x55e4e5);
__builtin_memmove((R+4),(R+24),4);
}
B55e4e7:{NFSU2_TR(0x55e4e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e4ecull));
TAIL_STATIC(0x53a0b0u,53a);
}
B55e4ec:L55e4ec:{c.instructions+=3;NFSU2_TR(0x55e4ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e4ed:{NFSU2_TR(0x55e4ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55e4ee:{NFSU2_TR(0x55e4ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e4f1:L55e4f1:{c.instructions+=5;NFSU2_TR(0x55e4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e4f4:{NFSU2_TR(0x55e4f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55e4f6:{NFSU2_TR(0x55e4f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55e4f9:{NFSU2_TR(0x55e4f9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e4fb:{NFSU2_TR(0x55e4fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e4ff;}}
}
B55e4fd:L55e4fd:{c.instructions+=1;NFSU2_TR(0x55e4fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55e4ff:L55e4ff:{c.instructions+=3;NFSU2_TR(0x55e4ff);
__builtin_memmove((R+4),(R+24),4);
}
B55e501:{NFSU2_TR(0x55e501);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e504:{NFSU2_TR(0x55e504);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e509ull));
TAIL_STATIC(0x539ff0u,539);
}
B55e509:L55e509:{c.instructions+=2;NFSU2_TR(0x55e509);
__builtin_memmove((R+4),(R+24),4);
}
B55e50b:{NFSU2_TR(0x55e50b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e510ull));
TAIL_STATIC(0x53a0b0u,53a);
}
B55e510:L55e510:{c.instructions+=3;NFSU2_TR(0x55e510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e511:{NFSU2_TR(0x55e511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55e512:{NFSU2_TR(0x55e512);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e520:L55e520:{c.instructions+=8;NFSU2_TR(0x55e520);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e521:{NFSU2_TR(0x55e521);
__builtin_memmove((R+20),(R+16),4);
}
B55e523:{NFSU2_TR(0x55e523);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e524:{NFSU2_TR(0x55e524);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e525:{NFSU2_TR(0x55e525);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55e528:{NFSU2_TR(0x55e528);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e52e:{NFSU2_TR(0x55e52e);
__builtin_memmove((R+24),(R+4),4);
}
B55e530:{NFSU2_TR(0x55e530);
if(r1(R+518)){{goto L55e53a;}}
}
B55e532:L55e532:{c.instructions+=2;NFSU2_TR(0x55e532);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e538:{NFSU2_TR(0x55e538);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e543;}}
}
B55e53a:L55e53a:{c.instructions+=2;NFSU2_TR(0x55e53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e53d:{NFSU2_TR(0x55e53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e543:L55e543:{c.instructions+=2;NFSU2_TR(0x55e543);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e549:{NFSU2_TR(0x55e549);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e569;}}
}
B55e54b:L55e54b:{c.instructions+=5;NFSU2_TR(0x55e54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e54e:{NFSU2_TR(0x55e54e);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e553:{NFSU2_TR(0x55e553);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e558:{NFSU2_TR(0x55e558);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e559:{NFSU2_TR(0x55e559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e55eull));
TAIL_STATIC(0x537d40u,537);
}
B55e55e:L55e55e:{c.instructions+=3;NFSU2_TR(0x55e55e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55e561:{NFSU2_TR(0x55e561);
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
B55e563:{NFSU2_TR(0x55e563);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e786;}}
}
B55e569:L55e569:{c.instructions+=10;NFSU2_TR(0x55e569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e56c:{NFSU2_TR(0x55e56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e56f:{NFSU2_TR(0x55e56f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e570:{NFSU2_TR(0x55e570);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55e573:{NFSU2_TR(0x55e573);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e574:{NFSU2_TR(0x55e574);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e575:{NFSU2_TR(0x55e575);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e576:{NFSU2_TR(0x55e576);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e577:{NFSU2_TR(0x55e577);
__builtin_memmove((R+4),(R+24),4);
}
B55e579:{NFSU2_TR(0x55e579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e57eull));
TAIL_STATIC(0x543d40u,543);
}
B55e57e:L55e57e:{c.instructions+=2;NFSU2_TR(0x55e57e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x461a18eeull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x461a18eeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e584:{NFSU2_TR(0x55e584);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55e679;}}
}
B55e58a:L55e58a:{c.instructions+=1;NFSU2_TR(0x55e58a);
if(r1(R+518)){{goto L55e5f8;}}
}
B55e58c:L55e58c:{c.instructions+=2;NFSU2_TR(0x55e58c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e592:{NFSU2_TR(0x55e592);
if(r1(R+518)){{goto L55e5ec;}}
}
B55e594:L55e594:{c.instructions+=2;NFSU2_TR(0x55e594);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e59a:{NFSU2_TR(0x55e59a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e748;}}
}
B55e5a0:L55e5a0:{c.instructions+=2;NFSU2_TR(0x55e5a0);
w4(R+4,u32(0x83a9d0ull));
}
B55e5a5:{NFSU2_TR(0x55e5a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e5aaull));
TAIL_STATIC(0x52a4c0u,52a);
}
B55e5aa:L55e5aa:{c.instructions+=2;NFSU2_TR(0x55e5aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55e5ac:{NFSU2_TR(0x55e5ac);
if(r1(R+518)){{goto L55e5cd;}}
}
B55e5ae:L55e5ae:{c.instructions+=1;NFSU2_TR(0x55e5ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e5b1:L55e5b1:{c.instructions+=8;NFSU2_TR(0x55e5b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e5b3:{NFSU2_TR(0x55e5b3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e5b5:{NFSU2_TR(0x55e5b5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e5b7:{NFSU2_TR(0x55e5b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e5b9:{NFSU2_TR(0x55e5b9);
u8 U[4];
w4(U+0,u32(0x1141ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e5be:{NFSU2_TR(0x55e5be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e5bf:{NFSU2_TR(0x55e5bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e5c0:{NFSU2_TR(0x55e5c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e5c5ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B55e5c5:L55e5c5:{c.instructions+=2;NFSU2_TR(0x55e5c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B55e5c8:{NFSU2_TR(0x55e5c8);
{goto L55e748;}
}
B55e5cd:L55e5cd:{c.instructions+=4;NFSU2_TR(0x55e5cd);
__builtin_memmove((R+0),gp(0x83aa00),1);
}
B55e5d2:{NFSU2_TR(0x55e5d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55e5d4:{NFSU2_TR(0x55e5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e5d7:{NFSU2_TR(0x55e5d7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55e5b1u);}goto L55e5b1;}}
}
B55e5d9:L55e5d9:{c.instructions+=3;NFSU2_TR(0x55e5d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e5da:{NFSU2_TR(0x55e5da);
u8 U[4];
w4(U+0,u32(0x461a18eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e5df:{NFSU2_TR(0x55e5df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e5e4ull));
TAIL_STATIC(0x55dda0u,55d);
}
B55e5e4:L55e5e4:{c.instructions+=2;NFSU2_TR(0x55e5e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55e5e7:{NFSU2_TR(0x55e5e7);
{goto L55e748;}
}
B55e5ec:L55e5ec:{c.instructions+=2;NFSU2_TR(0x55e5ec);
__builtin_memmove((R+4),(R+24),4);
}
B55e5ee:{NFSU2_TR(0x55e5ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e5f3ull));
TAIL_STATIC(0x538ca0u,538);
}
B55e5f3:L55e5f3:{c.instructions+=1;NFSU2_TR(0x55e5f3);
{goto L55e748;}
}
B55e5f8:L55e5f8:{c.instructions+=3;NFSU2_TR(0x55e5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e5fb:{NFSU2_TR(0x55e5fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e5fc:{NFSU2_TR(0x55e5fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e601ull));
TAIL_STATIC(0x505450u,505);
}
B55e601:L55e601:{c.instructions+=2;NFSU2_TR(0x55e601);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e602:{NFSU2_TR(0x55e602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e607ull));
TAIL_STATIC(0x50b840u,50b);
}
B55e607:L55e607:{c.instructions+=3;NFSU2_TR(0x55e607);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55e60a:{NFSU2_TR(0x55e60a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e60c:{NFSU2_TR(0x55e60c);
if(r1(R+518)){{goto L55e615;}}
}
B55e60e:L55e60e:{c.instructions+=1;NFSU2_TR(0x55e60e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55e615:L55e615:{c.instructions+=2;NFSU2_TR(0x55e615);
w4(R+4,u32(0x838980ull));
}
B55e61a:{NFSU2_TR(0x55e61a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e61full));
TAIL_STATIC(0x54fd40u,54f);
}
B55e61f:L55e61f:{c.instructions+=3;NFSU2_TR(0x55e61f);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e626:{NFSU2_TR(0x55e626);
__builtin_memmove((R+4),gp(0x863480),4);
}
B55e62c:{NFSU2_TR(0x55e62c);
if(r1(R+518)){{goto L55e634;}}
}
B55e62e:L55e62e:{c.instructions+=1;NFSU2_TR(0x55e62e);
__builtin_memmove((R+4),gp(0x83aab8),4);
}
B55e634:L55e634:{c.instructions+=3;NFSU2_TR(0x55e634);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e63a:{NFSU2_TR(0x55e63a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55e63c:{NFSU2_TR(0x55e63c);
if(r1(R+518)){{goto L55e642;}}
}
B55e63e:L55e63e:{c.instructions+=2;NFSU2_TR(0x55e63e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55e640:{NFSU2_TR(0x55e640);
{goto L55e662;}
}
B55e642:L55e642:{c.instructions+=2;NFSU2_TR(0x55e642);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55e644:{NFSU2_TR(0x55e644);
if(r1(R+518)){{goto L55e64d;}}
}
B55e646:L55e646:{c.instructions+=2;NFSU2_TR(0x55e646);
w4(R+0,u32(0x1ull));
}
B55e64b:{NFSU2_TR(0x55e64b);
{goto L55e662;}
}
B55e64d:L55e64d:{c.instructions+=2;NFSU2_TR(0x55e64d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55e64f:{NFSU2_TR(0x55e64f);
if(r1(R+518)){{goto L55e658;}}
}
B55e651:L55e651:{c.instructions+=2;NFSU2_TR(0x55e651);
w4(R+0,u32(0x2ull));
}
B55e656:{NFSU2_TR(0x55e656);
{goto L55e662;}
}
B55e658:L55e658:{c.instructions+=5;NFSU2_TR(0x55e658);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
}
B55e65a:{NFSU2_TR(0x55e65a);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B55e65c:{NFSU2_TR(0x55e65c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B55e65e:{NFSU2_TR(0x55e65e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B55e661:{NFSU2_TR(0x55e661);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B55e662:L55e662:{c.instructions+=5;NFSU2_TR(0x55e662);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e664:{NFSU2_TR(0x55e664);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e665:{NFSU2_TR(0x55e665);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e667:{NFSU2_TR(0x55e667);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B55e66c:{NFSU2_TR(0x55e66c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e671ull));
TAIL_STATIC(0x5309e0u,530);
}
B55e671:L55e671:{c.instructions+=2;NFSU2_TR(0x55e671);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55e674:{NFSU2_TR(0x55e674);
{goto L55e748;}
}
B55e679:L55e679:{c.instructions+=2;NFSU2_TR(0x55e679);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8867412dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e67f:{NFSU2_TR(0x55e67f);
if(r1(R+518)){{goto L55e70f;}}
}
B55e685:L55e685:{c.instructions+=2;NFSU2_TR(0x55e685);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e68b:{NFSU2_TR(0x55e68b);
if(r1(R+518)){{goto L55e6db;}}
}
B55e68d:L55e68d:{c.instructions+=2;NFSU2_TR(0x55e68d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e693:{NFSU2_TR(0x55e693);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e748;}}
}
B55e699:L55e699:{c.instructions+=3;NFSU2_TR(0x55e699);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e69f:{NFSU2_TR(0x55e69f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e6a4:{NFSU2_TR(0x55e6a4);
if(r1(R+518)){{goto L55e6cd;}}
}
B55e6a6:L55e6a6:{c.instructions+=2;NFSU2_TR(0x55e6a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e6ab:{NFSU2_TR(0x55e6ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e748;}}
}
B55e6b1:L55e6b1:{c.instructions+=4;NFSU2_TR(0x55e6b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e6b4:{NFSU2_TR(0x55e6b4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e6b6:{NFSU2_TR(0x55e6b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e6b7:{NFSU2_TR(0x55e6b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e6bcull));
TAIL_STATIC(0x50b8c0u,50b);
}
B55e6bc:L55e6bc:{c.instructions+=2;NFSU2_TR(0x55e6bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55e6bf:{NFSU2_TR(0x55e6bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e6c4ull));
TAIL_STATIC(0x54f980u,54f);
}
B55e6c4:L55e6c4:{c.instructions+=2;NFSU2_TR(0x55e6c4);
__builtin_memmove((R+4),(R+0),4);
}
B55e6c6:{NFSU2_TR(0x55e6c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e6cbull));
TAIL_STATIC(0x55bdf0u,55b);
}
B55e6cb:L55e6cb:{c.instructions+=1;NFSU2_TR(0x55e6cb);
{goto L55e748;}
}
B55e6cd:L55e6cd:{c.instructions+=1;NFSU2_TR(0x55e6cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e6d2ull));
TAIL_STATIC(0x54f980u,54f);
}
B55e6d2:L55e6d2:{c.instructions+=2;NFSU2_TR(0x55e6d2);
__builtin_memmove((R+4),(R+0),4);
}
B55e6d4:{NFSU2_TR(0x55e6d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e6d9ull));
TAIL_STATIC(0x55bd60u,55b);
}
B55e6d9:L55e6d9:{c.instructions+=1;NFSU2_TR(0x55e6d9);
{goto L55e748;}
}
B55e6db:L55e6db:{c.instructions+=5;NFSU2_TR(0x55e6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e6de:{NFSU2_TR(0x55e6de);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e6e3:{NFSU2_TR(0x55e6e3);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e6e8:{NFSU2_TR(0x55e6e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e6e9:{NFSU2_TR(0x55e6e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e6eeull));
TAIL_STATIC(0x537d40u,537);
}
B55e6ee:L55e6ee:{c.instructions+=3;NFSU2_TR(0x55e6ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55e6f1:{NFSU2_TR(0x55e6f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55e6f3:{NFSU2_TR(0x55e6f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e748;}}
}
B55e6f5:L55e6f5:{c.instructions+=6;NFSU2_TR(0x55e6f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e6f8:{NFSU2_TR(0x55e6f8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e6fa:{NFSU2_TR(0x55e6fa);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e6ff:{NFSU2_TR(0x55e6ff);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e704:{NFSU2_TR(0x55e704);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e705:{NFSU2_TR(0x55e705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e70aull));
TAIL_STATIC(0x537c60u,537);
}
B55e70a:L55e70a:{c.instructions+=2;NFSU2_TR(0x55e70a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55e70d:{NFSU2_TR(0x55e70d);
{goto L55e748;}
}
B55e70f:L55e70f:{c.instructions+=2;NFSU2_TR(0x55e70f);
w4(R+8,u32(0x60d24d65ull));
}
B55e714:{NFSU2_TR(0x55e714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e719ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55e719:L55e719:{c.instructions+=2;NFSU2_TR(0x55e719);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55e71b:{NFSU2_TR(0x55e71b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e727;}}
}
B55e71d:L55e71d:{c.instructions+=2;NFSU2_TR(0x55e71d);
w4(R+8,u32(0xc01a6f63ull));
}
B55e722:{NFSU2_TR(0x55e722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e727ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B55e727:L55e727:{c.instructions+=8;NFSU2_TR(0x55e727);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e72a:{NFSU2_TR(0x55e72a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e72b:{NFSU2_TR(0x55e72b);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e730:{NFSU2_TR(0x55e730);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e735:{NFSU2_TR(0x55e735);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e73a:{NFSU2_TR(0x55e73a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e73f:{NFSU2_TR(0x55e73f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e740:{NFSU2_TR(0x55e740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e745ull));
TAIL_STATIC(0x558540u,558);
}
B55e745:L55e745:{c.instructions+=1;NFSU2_TR(0x55e745);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B55e748:L55e748:{c.instructions+=2;NFSU2_TR(0x55e748);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
w1(R+512,u8((r4(U+6))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x100ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55e752:{NFSU2_TR(0x55e752);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e785;}}
}
B55e754:L55e754:{c.instructions+=10;NFSU2_TR(0x55e754);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55e757:{NFSU2_TR(0x55e757);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e75a:{NFSU2_TR(0x55e75a);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e75c:{NFSU2_TR(0x55e75c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e75d:{NFSU2_TR(0x55e75d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e75e:{NFSU2_TR(0x55e75e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e75f:{NFSU2_TR(0x55e75f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x154ull))));
}
B55e765:{NFSU2_TR(0x55e765);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e766:{NFSU2_TR(0x55e766);
__builtin_memmove((R+4),(R+24),4);
}
B55e768:{NFSU2_TR(0x55e768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e76dull));
TAIL_STATIC(0x4efe40u,4ef);
}
B55e76d:L55e76d:{c.instructions+=2;NFSU2_TR(0x55e76d);
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
B55e770:{NFSU2_TR(0x55e770);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e785;}}
}
B55e772:L55e772:{c.instructions+=5;NFSU2_TR(0x55e772);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e774:{NFSU2_TR(0x55e774);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e779:{NFSU2_TR(0x55e779);
u8 U[4];
w4(U+0,u32(0x5a6f817full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e77e:{NFSU2_TR(0x55e77e);
__builtin_memmove((R+4),(R+24),4);
}
B55e780:{NFSU2_TR(0x55e780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e785ull));
TAIL_STATIC(0x4b8fa0u,4b8);
}
B55e785:L55e785:{c.instructions+=1;NFSU2_TR(0x55e785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55e786:L55e786:{c.instructions+=4;NFSU2_TR(0x55e786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55e787:{NFSU2_TR(0x55e787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e788:{NFSU2_TR(0x55e788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55e789:{NFSU2_TR(0x55e789);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e790:L55e790:{c.instructions+=2;NFSU2_TR(0x55e790);
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
B55e798:{NFSU2_TR(0x55e798);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e815;}}
}
B55e79a:L55e79a:{c.instructions+=3;NFSU2_TR(0x55e79a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e7a1:{NFSU2_TR(0x55e7a1);
w4(R+0,u32(0x54b649f1ull));
}
B55e7a6:{NFSU2_TR(0x55e7a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e7ad;}}
}
B55e7a8:L55e7a8:{c.instructions+=1;NFSU2_TR(0x55e7a8);
w4(R+0,u32(0x843f5d58ull));
}
B55e7ad:L55e7ad:{c.instructions+=12;NFSU2_TR(0x55e7ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e7ae:{NFSU2_TR(0x55e7ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55e7b2:{NFSU2_TR(0x55e7b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e7b3:{NFSU2_TR(0x55e7b3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e7b5:{NFSU2_TR(0x55e7b5);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e7ba:{NFSU2_TR(0x55e7ba);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e7bf:{NFSU2_TR(0x55e7bf);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e7c4:{NFSU2_TR(0x55e7c4);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e7c9:{NFSU2_TR(0x55e7c9);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e7ce:{NFSU2_TR(0x55e7ce);
u8 U[4];
w4(U+0,u32(0x78f2f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e7d3:{NFSU2_TR(0x55e7d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e7d4:{NFSU2_TR(0x55e7d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e7d9ull));
TAIL_STATIC(0x558790u,558);
}
B55e7d9:L55e7d9:{c.instructions+=5;NFSU2_TR(0x55e7d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B55e7dc:{NFSU2_TR(0x55e7dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e7dd:{NFSU2_TR(0x55e7dd);
w4(R+4,u32(0x8637b0ull));
}
B55e7e2:{NFSU2_TR(0x55e7e2);
s4(0x838970,u32(0x1fab5998ull));
}
B55e7ec:{NFSU2_TR(0x55e7ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e7f1ull));
TAIL_STATIC(0x51bb70u,51b);
}
B55e7f1:L55e7f1:{c.instructions+=3;NFSU2_TR(0x55e7f1);
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
B55e7f3:{NFSU2_TR(0x55e7f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55e7f4:{NFSU2_TR(0x55e7f4);
if(r1(R+518)){{goto L55e815;}}
}
B55e7f6:L55e7f6:{c.instructions+=3;NFSU2_TR(0x55e7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55e7f9:{NFSU2_TR(0x55e7f9);
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
B55e7fb:{NFSU2_TR(0x55e7fb);
if(r1(R+518)){{goto L55e815;}}
}
B55e7fd:L55e7fd:{c.instructions+=3;NFSU2_TR(0x55e7fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e800:{NFSU2_TR(0x55e800);
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
B55e802:{NFSU2_TR(0x55e802);
if(r1(R+518)){{goto L55e815;}}
}
B55e804:L55e804:{c.instructions+=6;NFSU2_TR(0x55e804);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e805:{NFSU2_TR(0x55e805);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e807:{NFSU2_TR(0x55e807);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e809:{NFSU2_TR(0x55e809);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e80e:{NFSU2_TR(0x55e80e);
__builtin_memmove((R+4),(R+0),4);
}
B55e810:{NFSU2_TR(0x55e810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e815ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B55e815:L55e815:{c.instructions+=1;NFSU2_TR(0x55e815);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55e820:L55e820:{c.instructions+=17;NFSU2_TR(0x55e820);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e821:{NFSU2_TR(0x55e821);
__builtin_memmove((R+20),(R+16),4);
}
B55e823:{NFSU2_TR(0x55e823);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B55e826:{NFSU2_TR(0x55e826);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e828:{NFSU2_TR(0x55e828);
u8 U[4];
w4(U+0,u32(0x778475ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e82d:{NFSU2_TR(0x55e82d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e833:{NFSU2_TR(0x55e833);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e834:{NFSU2_TR(0x55e834);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e83b:{NFSU2_TR(0x55e83b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8f8ull))));
}
B55e841:{NFSU2_TR(0x55e841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e844:{NFSU2_TR(0x55e844);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e845:{NFSU2_TR(0x55e845);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e846:{NFSU2_TR(0x55e846);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e847:{NFSU2_TR(0x55e847);
__builtin_memmove((R+24),(R+4),4);
}
B55e849:{NFSU2_TR(0x55e849);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e84a:{NFSU2_TR(0x55e84a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e84e:{NFSU2_TR(0x55e84e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e853ull));
TAIL_STATIC(0x551de0u,551);
}
B55e853:L55e853:{c.instructions+=12;NFSU2_TR(0x55e853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e856:{NFSU2_TR(0x55e856);
u8 U[4];
w4(U+0,u32(0x79c558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e85b:{NFSU2_TR(0x55e85b);
u8 U[4];
w4(U+0,u32(0x79c968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e860:{NFSU2_TR(0x55e860);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e862:{NFSU2_TR(0x55e862);
u8 U[4];
w4(U+0,u32(0x79d778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e867:{NFSU2_TR(0x55e867);
u8 U[4];
w4(U+0,u32(0x79d768ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e86c:{NFSU2_TR(0x55e86c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55e86e:{NFSU2_TR(0x55e86e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e86f:{NFSU2_TR(0x55e86f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55e872:{NFSU2_TR(0x55e872);
u8 U[8];
w4(U+0,u32(u32(u32(0x924ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e879:{NFSU2_TR(0x55e879);
u8 U[4];
w4(U+0,u32(0x79d758ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55e87f:{NFSU2_TR(0x55e87f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e884ull));
TAIL_STATIC(0x5435d0u,543);
}
B55e884:L55e884:{c.instructions+=10;NFSU2_TR(0x55e884);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e887:{NFSU2_TR(0x55e887);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e88c:{NFSU2_TR(0x55e88c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e891:{NFSU2_TR(0x55e891);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e893:{NFSU2_TR(0x55e893);
u8 U[4];
w4(U+0,u32(0x79caf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e898:{NFSU2_TR(0x55e898);
u8 U[4];
w4(U+0,u32(0x797f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e89d:{NFSU2_TR(0x55e89d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e89e:{NFSU2_TR(0x55e89e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55e8a4:{NFSU2_TR(0x55e8a4);
u8 U[5];
w4(U+0,u32(u32(u32(0x924ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55e8ac:{NFSU2_TR(0x55e8ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e8b1ull));
TAIL_STATIC(0x5435d0u,543);
}
B55e8b1:L55e8b1:{c.instructions+=9;NFSU2_TR(0x55e8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e8b4:{NFSU2_TR(0x55e8b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e8b5:{NFSU2_TR(0x55e8b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e8b6:{NFSU2_TR(0x55e8b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e8b7:{NFSU2_TR(0x55e8b7);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e8bc:{NFSU2_TR(0x55e8bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e8bd:{NFSU2_TR(0x55e8bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55e8c3:{NFSU2_TR(0x55e8c3);
u8 U[5];
w4(U+0,u32(u32(u32(0x920ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55e8cb:{NFSU2_TR(0x55e8cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e8d0ull));
TAIL_STATIC(0x542ac0u,542);
}
B55e8d0:L55e8d0:{c.instructions+=8;NFSU2_TR(0x55e8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e8d3:{NFSU2_TR(0x55e8d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e8d4:{NFSU2_TR(0x55e8d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e8d5:{NFSU2_TR(0x55e8d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e8d7:{NFSU2_TR(0x55e8d7);
u8 U[4];
w4(U+0,u32(0x78f814ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e8dc:{NFSU2_TR(0x55e8dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e8dd:{NFSU2_TR(0x55e8dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55e8e3:{NFSU2_TR(0x55e8e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e8e8ull));
TAIL_STATIC(0x542ac0u,542);
}
B55e8e8:L55e8e8:{c.instructions+=20;NFSU2_TR(0x55e8e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e8ee:{NFSU2_TR(0x55e8ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e8f4:{NFSU2_TR(0x55e8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e8fa:{NFSU2_TR(0x55e8fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55e900:{NFSU2_TR(0x55e900);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55e907:{NFSU2_TR(0x55e907);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55e90e:{NFSU2_TR(0x55e90e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55e914:{NFSU2_TR(0x55e914);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55e91a:{NFSU2_TR(0x55e91a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55e920:{NFSU2_TR(0x55e920);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55e926:{NFSU2_TR(0x55e926);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55e92c:{NFSU2_TR(0x55e92c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55e932:{NFSU2_TR(0x55e932);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55e938:{NFSU2_TR(0x55e938);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1daull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55e93e:{NFSU2_TR(0x55e93e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55e944:{NFSU2_TR(0x55e944);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55e94a:{NFSU2_TR(0x55e94a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e950:{NFSU2_TR(0x55e950);
u8 U[4];
w4(U+0,u32(0x79d740ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e955:{NFSU2_TR(0x55e955);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B55e95b:{NFSU2_TR(0x55e95b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e960ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55e960:L55e960:{c.instructions+=3;NFSU2_TR(0x55e960);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55e963:{NFSU2_TR(0x55e963);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55e965:{NFSU2_TR(0x55e965);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e9ed;}}
}
B55e96b:L55e96b:{c.instructions+=2;NFSU2_TR(0x55e96b);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55e972:{NFSU2_TR(0x55e972);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e9ed;}}
}
B55e974:L55e974:{c.instructions+=2;NFSU2_TR(0x55e974);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55e978:{NFSU2_TR(0x55e978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e97dull));
TAIL_STATIC(0x40c910u,40c);
}
B55e97d:L55e97d:{c.instructions+=5;NFSU2_TR(0x55e97d);
__builtin_memmove((R+4),gp(0x863480),4);
}
B55e983:{NFSU2_TR(0x55e983);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e984:{NFSU2_TR(0x55e984);
w4(R+4,u32(0x83ad90ull));
}
B55e989:{NFSU2_TR(0x55e989);
u8 U[5];
w4(U+0,u32(u32(u32(0x910ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55e991:{NFSU2_TR(0x55e991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e996ull));
TAIL_STATIC(0x503510u,503);
}
B55e996:L55e996:{c.instructions+=3;NFSU2_TR(0x55e996);
__builtin_memmove((R+28),(R+0),4);
}
B55e998:{NFSU2_TR(0x55e998);
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
B55e99a:{NFSU2_TR(0x55e99a);
if(r1(R+518)){{goto L55e9b1;}}
}
B55e99c:L55e99c:{c.instructions+=3;NFSU2_TR(0x55e99c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55e99e:{NFSU2_TR(0x55e99e);
__builtin_memmove((R+4),(R+28),4);
}
B55e9a0:{NFSU2_TR(0x55e9a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e9a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55e9a3:L55e9a3:{c.instructions+=7;NFSU2_TR(0x55e9a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55e9a5:{NFSU2_TR(0x55e9a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e9a6:{NFSU2_TR(0x55e9a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55e9aa:{NFSU2_TR(0x55e9aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e9ab:{NFSU2_TR(0x55e9ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e9ac:{NFSU2_TR(0x55e9ac);
__builtin_memmove((R+4),(R+28),4);
}
B55e9ae:{NFSU2_TR(0x55e9ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e9b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55e9b1:L55e9b1:{c.instructions+=5;NFSU2_TR(0x55e9b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e9b2:{NFSU2_TR(0x55e9b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B55e9b6:{NFSU2_TR(0x55e9b6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e9b8:{NFSU2_TR(0x55e9b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e9b9:{NFSU2_TR(0x55e9b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e9beull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55e9be:L55e9be:{c.instructions+=2;NFSU2_TR(0x55e9be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55e9c1:{NFSU2_TR(0x55e9c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e9c6ull));
TAIL_STATIC(0x4a78b0u,4a7);
}
B55e9c6:L55e9c6:{c.instructions+=2;NFSU2_TR(0x55e9c6);
u8 U[14];
__builtin_memmove((U+6),gp(0x838990),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55e9cd:{NFSU2_TR(0x55e9cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55e9d9;}}
}
B55e9cf:L55e9cf:{c.instructions+=2;NFSU2_TR(0x55e9cf);
w4(R+4,u32(0x838980ull));
}
B55e9d4:{NFSU2_TR(0x55e9d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e9d9ull));
TAIL_STATIC(0x55c460u,55c);
}
B55e9d9:L55e9d9:{c.instructions+=3;NFSU2_TR(0x55e9d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55e9e0:{NFSU2_TR(0x55e9e0);
u8 U[5];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55e9e8:{NFSU2_TR(0x55e9e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55e9edull));
TAIL_STATIC(0x4022c0u,402);
}
B55e9ed:L55e9ed:{c.instructions+=5;NFSU2_TR(0x55e9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55e9f0:{NFSU2_TR(0x55e9f0);
u8 U[4];
w4(U+0,u32(0x640f0f22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e9f5:{NFSU2_TR(0x55e9f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55e9f6:{NFSU2_TR(0x55e9f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55e9fc:{NFSU2_TR(0x55e9fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ea01ull));
TAIL_STATIC(0x495520u,495);
}
B55ea01:L55ea01:{c.instructions+=4;NFSU2_TR(0x55ea01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ea04:{NFSU2_TR(0x55ea04);
u8 U[4];
w4(U+0,u32(0x640f0f23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ea09:{NFSU2_TR(0x55ea09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ea0a:{NFSU2_TR(0x55ea0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ea0full));
TAIL_STATIC(0x495520u,495);
}
B55ea0f:L55ea0f:{c.instructions+=4;NFSU2_TR(0x55ea0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ea12:{NFSU2_TR(0x55ea12);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ea17:{NFSU2_TR(0x55ea17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ea18:{NFSU2_TR(0x55ea18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ea1dull));
TAIL_STATIC(0x4954e0u,495);
}
B55ea1d:L55ea1d:{c.instructions+=4;NFSU2_TR(0x55ea1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ea20:{NFSU2_TR(0x55ea20);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ea25:{NFSU2_TR(0x55ea25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ea26:{NFSU2_TR(0x55ea26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ea2bull));
TAIL_STATIC(0x4954e0u,495);
}
B55ea2b:L55ea2b:{c.instructions+=4;NFSU2_TR(0x55ea2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ea2e:{NFSU2_TR(0x55ea2e);
u8 U[4];
w4(U+0,u32(0x797f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ea33:{NFSU2_TR(0x55ea33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ea34:{NFSU2_TR(0x55ea34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ea39ull));
TAIL_STATIC(0x4953e0u,495);
}
B55ea39:L55ea39:{c.instructions+=11;NFSU2_TR(0x55ea39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B55ea3c:{NFSU2_TR(0x55ea3c);
__builtin_memmove((R+4),(R+24),4);
}
B55ea3e:{NFSU2_TR(0x55ea3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ea44:{NFSU2_TR(0x55ea44);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55ea48:{NFSU2_TR(0x55ea48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
w4(U+4,u32(0x42200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55ea52:{NFSU2_TR(0x55ea52);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55ea59:{NFSU2_TR(0x55ea59);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55ea5f:{NFSU2_TR(0x55ea5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
w4(U+4,u32(0x43480000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55ea69:{NFSU2_TR(0x55ea69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w4(U+4,u32(0x41a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55ea73:{NFSU2_TR(0x55ea73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x7a4c4ab2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55ea7a:{NFSU2_TR(0x55ea7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ea7full));
TAIL_STATIC(0x54fae0u,54f);
}
B55ea7f:L55ea7f:{c.instructions+=3;NFSU2_TR(0x55ea7f);
__builtin_memmove((R+4),gp(0x7fa1b8),4);
}
B55ea85:{NFSU2_TR(0x55ea85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ea86:{NFSU2_TR(0x55ea86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ea8bull));
TAIL_STATIC(0x52cef0u,52c);
}
B55ea8b:L55ea8b:{c.instructions+=3;NFSU2_TR(0x55ea8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55ea8e:{NFSU2_TR(0x55ea8e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ea90:{NFSU2_TR(0x55ea90);
if(r1(R+518)){{goto L55ea9e;}}
}
B55ea92:L55ea92:{c.instructions+=4;NFSU2_TR(0x55ea92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ea95:{NFSU2_TR(0x55ea95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ea98:{NFSU2_TR(0x55ea98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ea9b:{NFSU2_TR(0x55ea9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ea9e:L55ea9e:{c.instructions+=2;NFSU2_TR(0x55ea9e);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eaa3:{NFSU2_TR(0x55eaa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eaa8ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55eaa8:L55eaa8:{c.instructions+=3;NFSU2_TR(0x55eaa8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55eaab:{NFSU2_TR(0x55eaab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55eaad:{NFSU2_TR(0x55eaad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55eadc;}}
}
B55eaaf:L55eaaf:{c.instructions+=4;NFSU2_TR(0x55eaaf);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55eab5:{NFSU2_TR(0x55eab5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55eab7:{NFSU2_TR(0x55eab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55eaba:{NFSU2_TR(0x55eaba);
if(r1(R+518)){{goto L55eadc;}}
}
B55eabc:L55eabc:{c.instructions+=4;NFSU2_TR(0x55eabc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55eabe:{NFSU2_TR(0x55eabe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eabf:{NFSU2_TR(0x55eabf);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eac4:{NFSU2_TR(0x55eac4);
if(r1(R+518)){{goto L55ead0;}}
}
B55eac6:L55eac6:{c.instructions+=4;NFSU2_TR(0x55eac6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eac7:{NFSU2_TR(0x55eac7);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eacc:{NFSU2_TR(0x55eacc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eace:{NFSU2_TR(0x55eace);
{goto L55ead7;}
}
B55ead0:L55ead0:{c.instructions+=3;NFSU2_TR(0x55ead0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ead1:{NFSU2_TR(0x55ead1);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ead6:{NFSU2_TR(0x55ead6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ead7:L55ead7:{c.instructions+=1;NFSU2_TR(0x55ead7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eadcull));
TAIL_STATIC(0x555d00u,555);
}
B55eadc:L55eadc:{c.instructions+=5;NFSU2_TR(0x55eadc);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B55eae1:{NFSU2_TR(0x55eae1);
__builtin_memmove((R+4),(R+0),4);
}
B55eae3:{NFSU2_TR(0x55eae3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eae5:{NFSU2_TR(0x55eae5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55eae9:{NFSU2_TR(0x55eae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eaeeull));
TAIL_STATIC(0x542990u,542);
}
B55eaee:L55eaee:{c.instructions+=6;NFSU2_TR(0x55eaee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55eaf1:{NFSU2_TR(0x55eaf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55eaf4:{NFSU2_TR(0x55eaf4);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55eafa:{NFSU2_TR(0x55eafa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eafb:{NFSU2_TR(0x55eafb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eafc:{NFSU2_TR(0x55eafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eb01ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55eb01:L55eb01:{c.instructions+=9;NFSU2_TR(0x55eb01);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55eb08:{NFSU2_TR(0x55eb08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55eb09:{NFSU2_TR(0x55eb09);
__builtin_memmove((R+0),(R+24),4);
}
B55eb0b:{NFSU2_TR(0x55eb0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55eb0c:{NFSU2_TR(0x55eb0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55eb13:{NFSU2_TR(0x55eb13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55eb14:{NFSU2_TR(0x55eb14);
__builtin_memmove((R+16),(R+20),4);
}
B55eb16:{NFSU2_TR(0x55eb16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55eb17:{NFSU2_TR(0x55eb17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55eb20:L55eb20:{c.instructions+=3;NFSU2_TR(0x55eb20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eb21:{NFSU2_TR(0x55eb21);
__builtin_memmove((R+24),(R+4),4);
}
B55eb23:{NFSU2_TR(0x55eb23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eb28ull));
{goto L55eb40;}
}
B55eb28:L55eb28:{c.instructions+=2;NFSU2_TR(0x55eb28);
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
B55eb2d:{NFSU2_TR(0x55eb2d);
if(r1(R+518)){{goto L55eb38;}}
}
B55eb2f:L55eb2f:{c.instructions+=2;NFSU2_TR(0x55eb2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eb30:{NFSU2_TR(0x55eb30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eb35ull));
TAIL_STATIC(0x575630u,575);
}
B55eb35:L55eb35:{c.instructions+=1;NFSU2_TR(0x55eb35);
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
B55eb38:L55eb38:{c.instructions+=3;NFSU2_TR(0x55eb38);
__builtin_memmove((R+0),(R+24),4);
}
B55eb3a:{NFSU2_TR(0x55eb3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55eb3b:{NFSU2_TR(0x55eb3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55eb40:L55eb40:{c.instructions+=13;NFSU2_TR(0x55eb40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eb42:{NFSU2_TR(0x55eb42);
u8 U[4];
w4(U+0,u32(0x778493ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eb47:{NFSU2_TR(0x55eb47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55eb4d:{NFSU2_TR(0x55eb4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eb4e:{NFSU2_TR(0x55eb4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55eb55:{NFSU2_TR(0x55eb55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eb56:{NFSU2_TR(0x55eb56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eb57:{NFSU2_TR(0x55eb57);
__builtin_memmove((R+24),(R+4),4);
}
B55eb59:{NFSU2_TR(0x55eb59);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55eb5d:{NFSU2_TR(0x55eb5d);
u8 U[4];
w4(U+0,u32(0x79d758ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55eb63:{NFSU2_TR(0x55eb63);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55eb69:{NFSU2_TR(0x55eb69);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55eb71:{NFSU2_TR(0x55eb71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eb76ull));
TAIL_STATIC(0x52ea90u,52e);
}
B55eb76:L55eb76:{c.instructions+=3;NFSU2_TR(0x55eb76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55eb79:{NFSU2_TR(0x55eb79);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55eb7e:{NFSU2_TR(0x55eb7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eb83ull));
TAIL_STATIC(0x52ea90u,52e);
}
B55eb83:L55eb83:{c.instructions+=6;NFSU2_TR(0x55eb83);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55eb87:{NFSU2_TR(0x55eb87);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55eb8d:{NFSU2_TR(0x55eb8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55eb8e:{NFSU2_TR(0x55eb8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55eb95:{NFSU2_TR(0x55eb95);
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
B55eb98:{NFSU2_TR(0x55eb98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55eba0:L55eba0:{c.instructions+=9;NFSU2_TR(0x55eba0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eba1:{NFSU2_TR(0x55eba1);
__builtin_memmove((R+20),(R+16),4);
}
B55eba3:{NFSU2_TR(0x55eba3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eba4:{NFSU2_TR(0x55eba4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eba5:{NFSU2_TR(0x55eba5);
__builtin_memmove((R+24),(R+4),4);
}
B55eba7:{NFSU2_TR(0x55eba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ebaa:{NFSU2_TR(0x55ebaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55ebad:{NFSU2_TR(0x55ebad);
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
B55ebaf:{NFSU2_TR(0x55ebaf);
if(r1(R+518)){{goto L55edc1;}}
}
B55ebb5:L55ebb5:{c.instructions+=4;NFSU2_TR(0x55ebb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ebbb:{NFSU2_TR(0x55ebbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55ebc1:{NFSU2_TR(0x55ebc1);
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
B55ebc3:{NFSU2_TR(0x55ebc3);
if(r1(R+518)){{goto L55edc1;}}
}
B55ebc9:L55ebc9:{c.instructions+=3;NFSU2_TR(0x55ebc9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55ebcf:{NFSU2_TR(0x55ebcf);
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
B55ebd1:{NFSU2_TR(0x55ebd1);
if(r1(R+518)){{goto L55edc1;}}
}
B55ebd7:L55ebd7:{c.instructions+=7;NFSU2_TR(0x55ebd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ebdd:{NFSU2_TR(0x55ebdd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ebde:{NFSU2_TR(0x55ebde);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ebdf:{NFSU2_TR(0x55ebdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55ebe2:{NFSU2_TR(0x55ebe2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ebe5:{NFSU2_TR(0x55ebe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ebe8:{NFSU2_TR(0x55ebe8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ec16;}}
}
B55ebea:L55ebea:{c.instructions+=3;NFSU2_TR(0x55ebea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55ebf0:{NFSU2_TR(0x55ebf0);
__builtin_memmove((R+4),(R+12),4);
}
B55ebf2:{NFSU2_TR(0x55ebf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ebf7ull));
TAIL_STATIC(0x4aeb90u,4ae);
}
B55ebf7:L55ebf7:{c.instructions+=2;NFSU2_TR(0x55ebf7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55ebf9:{NFSU2_TR(0x55ebf9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ec0d;}}
}
B55ebfb:L55ebfb:{c.instructions+=6;NFSU2_TR(0x55ebfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ebfe:{NFSU2_TR(0x55ebfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ec01:{NFSU2_TR(0x55ec01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ec02:{NFSU2_TR(0x55ec02);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ec04:{NFSU2_TR(0x55ec04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ec05:{NFSU2_TR(0x55ec05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ec0aull));
TAIL_STATIC(0x50d150u,50d);
}
B55ec0a:L55ec0a:{c.instructions+=1;NFSU2_TR(0x55ec0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55ec0d:L55ec0d:{c.instructions+=2;NFSU2_TR(0x55ec0d);
__builtin_memmove((R+4),(R+12),4);
}
B55ec0f:{NFSU2_TR(0x55ec0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ec14ull));
TAIL_STATIC(0x495900u,495);
}
B55ec14:L55ec14:{c.instructions+=1;NFSU2_TR(0x55ec14);
{goto L55ec45;}
}
B55ec16:L55ec16:{c.instructions+=2;NFSU2_TR(0x55ec16);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ec19:{NFSU2_TR(0x55ec19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ec45;}}
}
B55ec1b:L55ec1b:{c.instructions+=3;NFSU2_TR(0x55ec1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55ec21:{NFSU2_TR(0x55ec21);
__builtin_memmove((R+4),(R+12),4);
}
B55ec23:{NFSU2_TR(0x55ec23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ec28ull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B55ec28:L55ec28:{c.instructions+=2;NFSU2_TR(0x55ec28);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55ec2a:{NFSU2_TR(0x55ec2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ec3e;}}
}
B55ec2c:L55ec2c:{c.instructions+=6;NFSU2_TR(0x55ec2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ec2f:{NFSU2_TR(0x55ec2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ec32:{NFSU2_TR(0x55ec32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ec33:{NFSU2_TR(0x55ec33);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ec35:{NFSU2_TR(0x55ec35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ec36:{NFSU2_TR(0x55ec36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ec3bull));
TAIL_STATIC(0x50d150u,50d);
}
B55ec3b:L55ec3b:{c.instructions+=1;NFSU2_TR(0x55ec3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55ec3e:L55ec3e:{c.instructions+=2;NFSU2_TR(0x55ec3e);
__builtin_memmove((R+4),(R+12),4);
}
B55ec40:{NFSU2_TR(0x55ec40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ec45ull));
TAIL_STATIC(0x4958f0u,495);
}
B55ec45:L55ec45:{c.instructions+=3;NFSU2_TR(0x55ec45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ec48:{NFSU2_TR(0x55ec48);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B55ec4e:{NFSU2_TR(0x55ec4e);
if(r1(R+518)){{goto L55edbf;}}
}
B55ec54:L55ec54:{c.instructions+=2;NFSU2_TR(0x55ec54);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ec57:{NFSU2_TR(0x55ec57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ec6f;}}
}
B55ec59:L55ec59:{c.instructions+=3;NFSU2_TR(0x55ec59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+28),(U+0),4);
}
B55ec5f:{NFSU2_TR(0x55ec5f);
__builtin_memmove((R+4),(R+28),4);
}
B55ec61:{NFSU2_TR(0x55ec61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ec66ull));
TAIL_STATIC(0x527610u,527);
}
B55ec66:L55ec66:{c.instructions+=2;NFSU2_TR(0x55ec66);
__builtin_memmove((R+4),(R+28),4);
}
B55ec68:{NFSU2_TR(0x55ec68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ec6dull));
TAIL_STATIC(0x495850u,495);
}
B55ec6d:L55ec6d:{c.instructions+=1;NFSU2_TR(0x55ec6d);
{goto L55ec88;}
}
B55ec6f:L55ec6f:{c.instructions+=2;NFSU2_TR(0x55ec6f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ec72:{NFSU2_TR(0x55ec72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ec88;}}
}
B55ec74:L55ec74:{c.instructions+=3;NFSU2_TR(0x55ec74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+28),(U+0),4);
}
B55ec7a:{NFSU2_TR(0x55ec7a);
__builtin_memmove((R+4),(R+28),4);
}
B55ec7c:{NFSU2_TR(0x55ec7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ec81ull));
TAIL_STATIC(0x527660u,527);
}
B55ec81:L55ec81:{c.instructions+=2;NFSU2_TR(0x55ec81);
__builtin_memmove((R+4),(R+28),4);
}
B55ec83:{NFSU2_TR(0x55ec83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ec88ull));
TAIL_STATIC(0x495810u,495);
}
B55ec88:L55ec88:{c.instructions+=5;NFSU2_TR(0x55ec88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ec8e:{NFSU2_TR(0x55ec8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ec91:{NFSU2_TR(0x55ec91);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55ec97:{NFSU2_TR(0x55ec97);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ec99:{NFSU2_TR(0x55ec99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ec9f;}}
}
B55ec9b:L55ec9b:{c.instructions+=2;NFSU2_TR(0x55ec9b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55ec9d:{NFSU2_TR(0x55ec9d);
{goto L55eca5;}
}
B55ec9f:L55ec9f:{c.instructions+=1;NFSU2_TR(0x55ec9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55eca5:L55eca5:{c.instructions+=5;NFSU2_TR(0x55eca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55eca8:{NFSU2_TR(0x55eca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ecab:{NFSU2_TR(0x55ecab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B55ecb1:{NFSU2_TR(0x55ecb1);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55ecb3:{NFSU2_TR(0x55ecb3);
if(r1(R+518)){{goto L55ed17;}}
}
B55ecb5:L55ecb5:{c.instructions+=2;NFSU2_TR(0x55ecb5);
__builtin_memmove((R+4),(R+24),4);
}
B55ecb7:{NFSU2_TR(0x55ecb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ecbcull));
TAIL_STATIC(0x50e510u,50e);
}
B55ecbc:L55ecbc:{c.instructions+=3;NFSU2_TR(0x55ecbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55ecbf:{NFSU2_TR(0x55ecbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55ecc1:{NFSU2_TR(0x55ecc1);
if(r1(R+518)){{goto L55ed51;}}
}
B55ecc7:L55ecc7:{c.instructions+=3;NFSU2_TR(0x55ecc7);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eccc:{NFSU2_TR(0x55eccc);
w4(R+4,u32(0x8389d0ull));
}
B55ecd1:{NFSU2_TR(0x55ecd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ecd6ull));
TAIL_STATIC(0x413440u,413);
}
B55ecd6:L55ecd6:{c.instructions+=4;NFSU2_TR(0x55ecd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ecd7:{NFSU2_TR(0x55ecd7);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ecd9:{NFSU2_TR(0x55ecd9);
w4(R+4,u32(0x8389d0ull));
}
B55ecde:{NFSU2_TR(0x55ecde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ece3ull));
TAIL_STATIC(0x631d20u,631);
}
B55ece3:L55ece3:{c.instructions+=4;NFSU2_TR(0x55ece3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ece4:{NFSU2_TR(0x55ece4);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ece6:{NFSU2_TR(0x55ece6);
w4(R+4,u32(0x8389d0ull));
}
B55eceb:{NFSU2_TR(0x55eceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ecf0ull));
TAIL_STATIC(0x631d20u,631);
}
B55ecf0:L55ecf0:{c.instructions+=4;NFSU2_TR(0x55ecf0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ecf2:{NFSU2_TR(0x55ecf2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ecf4:{NFSU2_TR(0x55ecf4);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ecf9:{NFSU2_TR(0x55ecf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ecfeull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55ecfe:L55ecfe:{c.instructions+=5;NFSU2_TR(0x55ecfe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55ed01:{NFSU2_TR(0x55ed01);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ed06:{NFSU2_TR(0x55ed06);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ed0b:{NFSU2_TR(0x55ed0b);
w4(R+4,u32(0x8637d0ull));
}
B55ed10:{NFSU2_TR(0x55ed10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ed15ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55ed15:L55ed15:{c.instructions+=1;NFSU2_TR(0x55ed15);
{goto L55ed51;}
}
B55ed17:L55ed17:{c.instructions+=3;NFSU2_TR(0x55ed17);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B55ed1d:{NFSU2_TR(0x55ed1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55ed1f:{NFSU2_TR(0x55ed1f);
if(r1(R+518)){{goto L55ed42;}}
}
B55ed21:L55ed21:{c.instructions+=2;NFSU2_TR(0x55ed21);
__builtin_memmove((R+4),(R+24),4);
}
B55ed23:{NFSU2_TR(0x55ed23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ed28ull));
TAIL_STATIC(0x50e510u,50e);
}
B55ed28:L55ed28:{c.instructions+=3;NFSU2_TR(0x55ed28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ed2b:{NFSU2_TR(0x55ed2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55ed2d:{NFSU2_TR(0x55ed2d);
if(r1(R+518)){{goto L55ed51;}}
}
B55ed2f:L55ed2f:{c.instructions+=5;NFSU2_TR(0x55ed2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ed30:{NFSU2_TR(0x55ed30);
__builtin_memmove((R+0),gp(0x8389a8),4);
}
B55ed35:{NFSU2_TR(0x55ed35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ed36:{NFSU2_TR(0x55ed36);
w4(R+4,u32(0x838980ull));
}
B55ed3b:{NFSU2_TR(0x55ed3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ed40ull));
TAIL_STATIC(0x55c370u,55c);
}
B55ed40:L55ed40:{c.instructions+=1;NFSU2_TR(0x55ed40);
{goto L55ed51;}
}
B55ed42:L55ed42:{c.instructions+=5;NFSU2_TR(0x55ed42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ed45:{NFSU2_TR(0x55ed45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ed46:{NFSU2_TR(0x55ed46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ed47:{NFSU2_TR(0x55ed47);
w4(R+4,u32(0x838980ull));
}
B55ed4c:{NFSU2_TR(0x55ed4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ed51ull));
TAIL_STATIC(0x55c170u,55c);
}
B55ed51:L55ed51:{c.instructions+=2;NFSU2_TR(0x55ed51);
__builtin_memmove((R+4),(R+24),4);
}
B55ed53:{NFSU2_TR(0x55ed53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ed58ull));
TAIL_STATIC(0x545510u,545);
}
B55ed58:L55ed58:{c.instructions+=3;NFSU2_TR(0x55ed58);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55ed5e:{NFSU2_TR(0x55ed5e);
__builtin_memmove((R+4),(R+28),4);
}
B55ed60:{NFSU2_TR(0x55ed60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ed65ull));
TAIL_STATIC(0x4aeb90u,4ae);
}
B55ed65:L55ed65:{c.instructions+=2;NFSU2_TR(0x55ed65);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55ed67:{NFSU2_TR(0x55ed67);
if(r1(R+518)){{goto L55ed81;}}
}
B55ed69:L55ed69:{c.instructions+=3;NFSU2_TR(0x55ed69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ed6f:{NFSU2_TR(0x55ed6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ed70:{NFSU2_TR(0x55ed70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ed75ull));
TAIL_STATIC(0x50ca00u,50c);
}
B55ed75:L55ed75:{c.instructions+=7;NFSU2_TR(0x55ed75);
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
B55ed78:{NFSU2_TR(0x55ed78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55ed79:{NFSU2_TR(0x55ed79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55ed7a:{NFSU2_TR(0x55ed7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ed7b:{NFSU2_TR(0x55ed7b);
__builtin_memmove((R+16),(R+20),4);
}
B55ed7d:{NFSU2_TR(0x55ed7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55ed7e:{NFSU2_TR(0x55ed7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55ed81:L55ed81:{c.instructions+=2;NFSU2_TR(0x55ed81);
__builtin_memmove((R+4),(R+28),4);
}
B55ed83:{NFSU2_TR(0x55ed83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ed88ull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B55ed88:L55ed88:{c.instructions+=2;NFSU2_TR(0x55ed88);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55ed8a:{NFSU2_TR(0x55ed8a);
if(r1(R+518)){{goto L55eda4;}}
}
B55ed8c:L55ed8c:{c.instructions+=3;NFSU2_TR(0x55ed8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ed92:{NFSU2_TR(0x55ed92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ed93:{NFSU2_TR(0x55ed93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ed98ull));
TAIL_STATIC(0x50ca00u,50c);
}
B55ed98:L55ed98:{c.instructions+=7;NFSU2_TR(0x55ed98);
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
B55ed9b:{NFSU2_TR(0x55ed9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55ed9c:{NFSU2_TR(0x55ed9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55ed9d:{NFSU2_TR(0x55ed9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ed9e:{NFSU2_TR(0x55ed9e);
__builtin_memmove((R+16),(R+20),4);
}
B55eda0:{NFSU2_TR(0x55eda0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55eda1:{NFSU2_TR(0x55eda1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55eda4:L55eda4:{c.instructions+=3;NFSU2_TR(0x55eda4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55edaa:{NFSU2_TR(0x55edaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55edab:{NFSU2_TR(0x55edab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55edb0ull));
TAIL_STATIC(0x50ca50u,50c);
}
B55edb0:L55edb0:{c.instructions+=3;NFSU2_TR(0x55edb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55edb6:{NFSU2_TR(0x55edb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55edb7:{NFSU2_TR(0x55edb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55edbcull));
TAIL_STATIC(0x50ca50u,50c);
}
B55edbc:L55edbc:{c.instructions+=1;NFSU2_TR(0x55edbc);
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
B55edbf:L55edbf:{c.instructions+=2;NFSU2_TR(0x55edbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55edc0:{NFSU2_TR(0x55edc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55edc1:L55edc1:{c.instructions+=4;NFSU2_TR(0x55edc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55edc2:{NFSU2_TR(0x55edc2);
__builtin_memmove((R+16),(R+20),4);
}
B55edc4:{NFSU2_TR(0x55edc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55edc5:{NFSU2_TR(0x55edc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55edd0:L55edd0:{c.instructions+=6;NFSU2_TR(0x55edd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55edd1:{NFSU2_TR(0x55edd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55edd2:{NFSU2_TR(0x55edd2);
__builtin_memmove((R+24),(R+4),4);
}
B55edd4:{NFSU2_TR(0x55edd4);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B55edda:{NFSU2_TR(0x55edda);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eddc:{NFSU2_TR(0x55eddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ede1ull));
TAIL_STATIC(0x458520u,458);
}
B55ede1:L55ede1:{c.instructions+=3;NFSU2_TR(0x55ede1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55ede4:{NFSU2_TR(0x55ede4);
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
B55ede6:{NFSU2_TR(0x55ede6);
if(r1(R+518)){{goto L55ef7a;}}
}
B55edec:L55edec:{c.instructions+=3;NFSU2_TR(0x55edec);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55edef:{NFSU2_TR(0x55edef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55edf1:{NFSU2_TR(0x55edf1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ef47;}}
}
B55edf7:L55edf7:{c.instructions+=11;NFSU2_TR(0x55edf7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55edfd:{NFSU2_TR(0x55edfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ee00:{NFSU2_TR(0x55ee00);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B55ee02:{NFSU2_TR(0x55ee02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee03:{NFSU2_TR(0x55ee03);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee08:{NFSU2_TR(0x55ee08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee09:{NFSU2_TR(0x55ee09);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B55ee0b:{NFSU2_TR(0x55ee0b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xce41165eull))));
}
B55ee10:{NFSU2_TR(0x55ee10);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x43a05263ull))));
}
B55ee15:{NFSU2_TR(0x55ee15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ee18:{NFSU2_TR(0x55ee18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ee1dull));
TAIL_STATIC(0x4954e0u,495);
}
B55ee1d:L55ee1d:{c.instructions+=4;NFSU2_TR(0x55ee1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ee20:{NFSU2_TR(0x55ee20);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee25:{NFSU2_TR(0x55ee25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee26:{NFSU2_TR(0x55ee26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ee2bull));
TAIL_STATIC(0x495520u,495);
}
B55ee2b:L55ee2b:{c.instructions+=4;NFSU2_TR(0x55ee2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ee2e:{NFSU2_TR(0x55ee2e);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee33:{NFSU2_TR(0x55ee33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee34:{NFSU2_TR(0x55ee34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ee39ull));
TAIL_STATIC(0x495520u,495);
}
B55ee39:L55ee39:{c.instructions+=8;NFSU2_TR(0x55ee39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ee3c:{NFSU2_TR(0x55ee3c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee3e:{NFSU2_TR(0x55ee3e);
u8 U[4];
w4(U+0,u32(0x79d788ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee43:{NFSU2_TR(0x55ee43);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee48:{NFSU2_TR(0x55ee48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee49:{NFSU2_TR(0x55ee49);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55ee50:{NFSU2_TR(0x55ee50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55ee57:{NFSU2_TR(0x55ee57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ee5cull));
TAIL_STATIC(0x537c00u,537);
}
B55ee5c:L55ee5c:{c.instructions+=5;NFSU2_TR(0x55ee5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ee5f:{NFSU2_TR(0x55ee5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B55ee62:{NFSU2_TR(0x55ee62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee63:{NFSU2_TR(0x55ee63);
__builtin_memmove((R+4),(R+24),4);
}
B55ee65:{NFSU2_TR(0x55ee65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ee6aull));
TAIL_STATIC(0x53a4b0u,53a);
}
B55ee6a:L55ee6a:{c.instructions+=3;NFSU2_TR(0x55ee6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55ee70:{NFSU2_TR(0x55ee70);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55ee72:{NFSU2_TR(0x55ee72);
if(r1(R+518)){{goto L55eedd;}}
}
B55ee74:L55ee74:{c.instructions+=4;NFSU2_TR(0x55ee74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ee7a:{NFSU2_TR(0x55ee7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55ee80:{NFSU2_TR(0x55ee80);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ee82:{NFSU2_TR(0x55ee82);
if(r1(R+518)){{goto L55eedd;}}
}
B55ee84:L55ee84:{c.instructions+=3;NFSU2_TR(0x55ee84);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ee86:{NFSU2_TR(0x55ee86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55ee8c:{NFSU2_TR(0x55ee8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ee91ull));
TAIL_STATIC(0x52eb90u,52e);
}
B55ee91:L55ee91:{c.instructions+=3;NFSU2_TR(0x55ee91);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55ee97:{NFSU2_TR(0x55ee97);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55ee99:{NFSU2_TR(0x55ee99);
if(r1(R+518)){{goto L55eebc;}}
}
B55ee9b:L55ee9b:{c.instructions+=6;NFSU2_TR(0x55ee9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ee9e:{NFSU2_TR(0x55ee9e);
__builtin_memmove((R+4),gp(0x8389a8),4);
}
B55eea4:{NFSU2_TR(0x55eea4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eea5:{NFSU2_TR(0x55eea5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eea6:{NFSU2_TR(0x55eea6);
w4(R+4,u32(0x838980ull));
}
B55eeab:{NFSU2_TR(0x55eeab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eeb0ull));
TAIL_STATIC(0x55c370u,55c);
}
B55eeb0:L55eeb0:{c.instructions+=5;NFSU2_TR(0x55eeb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55eeb3:{NFSU2_TR(0x55eeb3);
__builtin_memmove((R+0),gp(0x8389a8),4);
}
B55eeb8:{NFSU2_TR(0x55eeb8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eeb9:{NFSU2_TR(0x55eeb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eeba:{NFSU2_TR(0x55eeba);
{goto L55eed6;}
}
B55eebc:L55eebc:{c.instructions+=6;NFSU2_TR(0x55eebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55eebf:{NFSU2_TR(0x55eebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55eec2:{NFSU2_TR(0x55eec2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eec3:{NFSU2_TR(0x55eec3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eec4:{NFSU2_TR(0x55eec4);
w4(R+4,u32(0x838980ull));
}
B55eec9:{NFSU2_TR(0x55eec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eeceull));
TAIL_STATIC(0x55c170u,55c);
}
B55eece:L55eece:{c.instructions+=4;NFSU2_TR(0x55eece);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55eed1:{NFSU2_TR(0x55eed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55eed4:{NFSU2_TR(0x55eed4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eed5:{NFSU2_TR(0x55eed5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55eed6:L55eed6:{c.instructions+=2;NFSU2_TR(0x55eed6);
__builtin_memmove((R+4),(R+24),4);
}
B55eed8:{NFSU2_TR(0x55eed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eeddull));
TAIL_STATIC(0x50e580u,50e);
}
B55eedd:L55eedd:{c.instructions+=2;NFSU2_TR(0x55eedd);
__builtin_memmove((R+4),(R+24),4);
}
B55eedf:{NFSU2_TR(0x55eedf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eee4ull));
TAIL_STATIC(0x545510u,545);
}
B55eee4:L55eee4:{c.instructions+=5;NFSU2_TR(0x55eee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55eeea:{NFSU2_TR(0x55eeea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55eeec:{NFSU2_TR(0x55eeec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55eef2:{NFSU2_TR(0x55eef2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55eef3:{NFSU2_TR(0x55eef3);
if(r1(R+518)){{goto L55eefa;}}
}
B55eef5:L55eef5:{c.instructions+=2;NFSU2_TR(0x55eef5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55eef8:{NFSU2_TR(0x55eef8);
{goto L55eefc;}
}
B55eefa:L55eefa:{c.instructions+=1;NFSU2_TR(0x55eefa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55eefc:L55eefc:{c.instructions+=2;NFSU2_TR(0x55eefc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55eeff:{NFSU2_TR(0x55eeff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ef12;}}
}
B55ef01:L55ef01:{c.instructions+=3;NFSU2_TR(0x55ef01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ef07:{NFSU2_TR(0x55ef07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ef08:{NFSU2_TR(0x55ef08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ef0dull));
TAIL_STATIC(0x50ca00u,50c);
}
B55ef0d:L55ef0d:{c.instructions+=2;NFSU2_TR(0x55ef0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55ef10:{NFSU2_TR(0x55ef10);
{goto L55ef47;}
}
B55ef12:L55ef12:{c.instructions+=1;NFSU2_TR(0x55ef12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ef17ull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B55ef17:L55ef17:{c.instructions+=2;NFSU2_TR(0x55ef17);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55ef19:{NFSU2_TR(0x55ef19);
if(r1(R+518)){{goto L55ef2c;}}
}
B55ef1b:L55ef1b:{c.instructions+=3;NFSU2_TR(0x55ef1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ef21:{NFSU2_TR(0x55ef21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ef22:{NFSU2_TR(0x55ef22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ef27ull));
TAIL_STATIC(0x50ca00u,50c);
}
B55ef27:L55ef27:{c.instructions+=2;NFSU2_TR(0x55ef27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55ef2a:{NFSU2_TR(0x55ef2a);
{goto L55ef47;}
}
B55ef2c:L55ef2c:{c.instructions+=3;NFSU2_TR(0x55ef2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ef32:{NFSU2_TR(0x55ef32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ef33:{NFSU2_TR(0x55ef33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ef38ull));
TAIL_STATIC(0x50ca50u,50c);
}
B55ef38:L55ef38:{c.instructions+=3;NFSU2_TR(0x55ef38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ef3e:{NFSU2_TR(0x55ef3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ef3f:{NFSU2_TR(0x55ef3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ef44ull));
TAIL_STATIC(0x50ca50u,50c);
}
B55ef44:L55ef44:{c.instructions+=1;NFSU2_TR(0x55ef44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55ef47:L55ef47:{c.instructions+=3;NFSU2_TR(0x55ef47);
u8 U[8];
__builtin_memmove((U+0),gp(0x838990),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ef4e:{NFSU2_TR(0x55ef4e);
w4(R+0,u32(0x8ull));
}
B55ef53:{NFSU2_TR(0x55ef53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ef64;}}
}
B55ef55:L55ef55:{c.instructions+=3;NFSU2_TR(0x55ef55);
__builtin_memmove((R+4),gp(0x83899c),4);
}
B55ef5b:{NFSU2_TR(0x55ef5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55ef5d:{NFSU2_TR(0x55ef5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ef64;}}
}
B55ef5f:L55ef5f:{c.instructions+=1;NFSU2_TR(0x55ef5f);
w4(R+0,u32(0x10ull));
}
B55ef64:L55ef64:{c.instructions+=5;NFSU2_TR(0x55ef64);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55ef6a:{NFSU2_TR(0x55ef6a);
u8 U[4];
w4(U+0,u32(0x790634ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ef6f:{NFSU2_TR(0x55ef6f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x401ull))));
}
B55ef74:{NFSU2_TR(0x55ef74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ef75:{NFSU2_TR(0x55ef75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ef7aull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55ef7a:L55ef7a:{c.instructions+=3;NFSU2_TR(0x55ef7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ef7b:{NFSU2_TR(0x55ef7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55ef7c:{NFSU2_TR(0x55ef7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55ef80:L55ef80:{c.instructions+=7;NFSU2_TR(0x55ef80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ef81:{NFSU2_TR(0x55ef81);
__builtin_memmove((R+20),(R+16),4);
}
B55ef83:{NFSU2_TR(0x55ef83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ef84:{NFSU2_TR(0x55ef84);
__builtin_memmove((R+24),(R+4),4);
}
B55ef86:{NFSU2_TR(0x55ef86);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B55ef8c:{NFSU2_TR(0x55ef8c);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ef8e:{NFSU2_TR(0x55ef8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ef93ull));
TAIL_STATIC(0x458520u,458);
}
B55ef93:L55ef93:{c.instructions+=5;NFSU2_TR(0x55ef93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ef96:{NFSU2_TR(0x55ef96);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ef9b:{NFSU2_TR(0x55ef9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ef9c:{NFSU2_TR(0x55ef9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x6109e4b5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55efa3:{NFSU2_TR(0x55efa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55efa8ull));
TAIL_STATIC(0x495520u,495);
}
B55efa8:L55efa8:{c.instructions+=4;NFSU2_TR(0x55efa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55efab:{NFSU2_TR(0x55efab);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55efb0:{NFSU2_TR(0x55efb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55efb1:{NFSU2_TR(0x55efb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55efb6ull));
TAIL_STATIC(0x4954e0u,495);
}
B55efb6:L55efb6:{c.instructions+=4;NFSU2_TR(0x55efb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55efb9:{NFSU2_TR(0x55efb9);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55efbe:{NFSU2_TR(0x55efbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55efbf:{NFSU2_TR(0x55efbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55efc4ull));
TAIL_STATIC(0x4954e0u,495);
}
B55efc4:L55efc4:{c.instructions+=5;NFSU2_TR(0x55efc4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B55efc7:{NFSU2_TR(0x55efc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55efcd:{NFSU2_TR(0x55efcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55efd4:{NFSU2_TR(0x55efd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55efdb:{NFSU2_TR(0x55efdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55efe0ull));
TAIL_STATIC(0x5385c0u,538);
}
B55efe0:L55efe0:{c.instructions+=3;NFSU2_TR(0x55efe0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55efe6:{NFSU2_TR(0x55efe6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55efe8:{NFSU2_TR(0x55efe8);
if(r1(R+518)){{goto L55eff6;}}
}
B55efea:L55efea:{c.instructions+=2;NFSU2_TR(0x55efea);
w4(R+4,u32(0x838980ull));
}
B55efef:{NFSU2_TR(0x55efef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55eff4ull));
TAIL_STATIC(0x55c460u,55c);
}
B55eff4:L55eff4:{c.instructions+=1;NFSU2_TR(0x55eff4);
TAIL_STATIC(0x55f016u,55f);
}
B55eff6:L55eff6:{c.instructions+=2;NFSU2_TR(0x55eff6);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55effb:{NFSU2_TR(0x55effb);
w4(R+4,u32(0x8389d0ull));
TAIL_STATIC(0x55f000u,55f);
}
XIT:NFSU2_TR_EXIT(0x55e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
