#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_49f(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x49e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x49e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_49e(u8* __restrict R,Cpu& c);
u32 page_49e(Cpu& c){return body_49e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_49e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x49e000:goto L49e000;
case 0x49e002:c.instructions+=12;goto B49e002;
case 0x49e007:c.instructions+=11;goto B49e007;
case 0x49e00d:c.instructions+=10;goto B49e00d;
case 0x49e00e:c.instructions+=9;goto B49e00e;
case 0x49e015:c.instructions+=8;goto B49e015;
case 0x49e016:c.instructions+=7;goto B49e016;
case 0x49e017:c.instructions+=6;goto B49e017;
case 0x49e019:c.instructions+=5;goto B49e019;
case 0x49e01d:c.instructions+=4;goto B49e01d;
case 0x49e023:c.instructions+=3;goto B49e023;
case 0x49e026:c.instructions+=2;goto B49e026;
case 0x49e02e:c.instructions+=1;goto B49e02e;
case 0x49e033:goto L49e033;
case 0x49e035:c.instructions+=2;goto B49e035;
case 0x49e03d:c.instructions+=1;goto B49e03d;
case 0x49e042:goto L49e042;
case 0x49e046:c.instructions+=4;goto B49e046;
case 0x49e047:c.instructions+=3;goto B49e047;
case 0x49e04e:c.instructions+=2;goto B49e04e;
case 0x49e051:c.instructions+=1;goto B49e051;
case 0x49e060:goto L49e060;
case 0x49e061:c.instructions+=5;goto B49e061;
case 0x49e065:c.instructions+=4;goto B49e065;
case 0x49e06b:c.instructions+=3;goto B49e06b;
case 0x49e06c:c.instructions+=2;goto B49e06c;
case 0x49e06d:c.instructions+=1;goto B49e06d;
case 0x49e072:goto L49e072;
case 0x49e076:c.instructions+=5;goto B49e076;
case 0x49e080:c.instructions+=4;goto B49e080;
case 0x49e083:c.instructions+=3;goto B49e083;
case 0x49e086:c.instructions+=2;goto B49e086;
case 0x49e088:c.instructions+=1;goto B49e088;
case 0x49e08e:goto L49e08e;
case 0x49e093:c.instructions+=2;goto B49e093;
case 0x49e098:c.instructions+=1;goto B49e098;
case 0x49e09d:goto L49e09d;
case 0x49e0a0:c.instructions+=2;goto B49e0a0;
case 0x49e0a5:c.instructions+=1;goto B49e0a5;
case 0x49e0a7:goto L49e0a7;
case 0x49e0ac:c.instructions+=1;goto B49e0ac;
case 0x49e0ae:goto L49e0ae;
case 0x49e0b3:c.instructions+=1;goto B49e0b3;
case 0x49e0b5:goto L49e0b5;
case 0x49e0ba:c.instructions+=1;goto B49e0ba;
case 0x49e0bc:goto L49e0bc;
case 0x49e0c1:c.instructions+=1;goto B49e0c1;
case 0x49e0c3:goto L49e0c3;
case 0x49e0c8:c.instructions+=1;goto B49e0c8;
case 0x49e0ca:goto L49e0ca;
case 0x49e0cf:c.instructions+=1;goto B49e0cf;
case 0x49e0d1:goto L49e0d1;
case 0x49e0d6:c.instructions+=1;goto B49e0d6;
case 0x49e0d8:goto L49e0d8;
case 0x49e0db:c.instructions+=4;goto B49e0db;
case 0x49e0dd:c.instructions+=3;goto B49e0dd;
case 0x49e0df:c.instructions+=2;goto B49e0df;
case 0x49e0e4:c.instructions+=1;goto B49e0e4;
case 0x49e0e9:goto L49e0e9;
case 0x49e0ec:c.instructions+=7;goto B49e0ec;
case 0x49e0ed:c.instructions+=6;goto B49e0ed;
case 0x49e0ef:c.instructions+=5;goto B49e0ef;
case 0x49e0f1:c.instructions+=4;goto B49e0f1;
case 0x49e0f6:c.instructions+=3;goto B49e0f6;
case 0x49e0fb:c.instructions+=2;goto B49e0fb;
case 0x49e0fc:c.instructions+=1;goto B49e0fc;
case 0x49e101:goto L49e101;
case 0x49e104:c.instructions+=1;goto B49e104;
case 0x49e106:goto L49e106;
case 0x49e10b:goto L49e10b;
case 0x49e10e:c.instructions+=1;goto B49e10e;
case 0x49e113:goto L49e113;
case 0x49e114:c.instructions+=6;goto B49e114;
case 0x49e116:c.instructions+=5;goto B49e116;
case 0x49e118:c.instructions+=4;goto B49e118;
case 0x49e11d:c.instructions+=3;goto B49e11d;
case 0x49e122:c.instructions+=2;goto B49e122;
case 0x49e123:c.instructions+=1;goto B49e123;
case 0x49e128:goto L49e128;
case 0x49e12b:goto L49e12b;
case 0x49e12e:c.instructions+=5;goto B49e12e;
case 0x49e12f:c.instructions+=4;goto B49e12f;
case 0x49e130:c.instructions+=3;goto B49e130;
case 0x49e134:c.instructions+=2;goto B49e134;
case 0x49e13c:c.instructions+=1;goto B49e13c;
case 0x49e150:goto L49e150;
case 0x49e151:c.instructions+=4;goto B49e151;
case 0x49e155:c.instructions+=3;goto B49e155;
case 0x49e15b:c.instructions+=2;goto B49e15b;
case 0x49e15c:c.instructions+=1;goto B49e15c;
case 0x49e161:goto L49e161;
case 0x49e165:c.instructions+=5;goto B49e165;
case 0x49e16f:c.instructions+=4;goto B49e16f;
case 0x49e172:c.instructions+=3;goto B49e172;
case 0x49e175:c.instructions+=2;goto B49e175;
case 0x49e177:c.instructions+=1;goto B49e177;
case 0x49e179:goto L49e179;
case 0x49e17a:c.instructions+=3;goto B49e17a;
case 0x49e17d:c.instructions+=2;goto B49e17d;
case 0x49e182:c.instructions+=1;goto B49e182;
case 0x49e187:goto L49e187;
case 0x49e188:c.instructions+=6;goto B49e188;
case 0x49e18a:c.instructions+=5;goto B49e18a;
case 0x49e18c:c.instructions+=4;goto B49e18c;
case 0x49e191:c.instructions+=3;goto B49e191;
case 0x49e196:c.instructions+=2;goto B49e196;
case 0x49e197:c.instructions+=1;goto B49e197;
case 0x49e19c:goto L49e19c;
case 0x49e19f:c.instructions+=1;goto B49e19f;
case 0x49e1a0:goto L49e1a0;
case 0x49e1a3:c.instructions+=4;goto B49e1a3;
case 0x49e1a4:c.instructions+=3;goto B49e1a4;
case 0x49e1a8:c.instructions+=2;goto B49e1a8;
case 0x49e1b0:c.instructions+=1;goto B49e1b0;
case 0x49e1c0:goto L49e1c0;
case 0x49e1c1:c.instructions+=7;goto B49e1c1;
case 0x49e1c2:c.instructions+=6;goto B49e1c2;
case 0x49e1c3:c.instructions+=5;goto B49e1c3;
case 0x49e1c7:c.instructions+=4;goto B49e1c7;
case 0x49e1c8:c.instructions+=3;goto B49e1c8;
case 0x49e1cd:c.instructions+=2;goto B49e1cd;
case 0x49e1d2:c.instructions+=1;goto B49e1d2;
case 0x49e1d7:goto L49e1d7;
case 0x49e1da:c.instructions+=2;goto B49e1da;
case 0x49e1dd:c.instructions+=1;goto B49e1dd;
case 0x49e1e3:goto L49e1e3;
case 0x49e1e4:c.instructions+=1;goto B49e1e4;
case 0x49e1e9:goto L49e1e9;
case 0x49e1ec:c.instructions+=2;goto B49e1ec;
case 0x49e1ef:c.instructions+=1;goto B49e1ef;
case 0x49e1f1:goto L49e1f1;
case 0x49e1f2:c.instructions+=2;goto B49e1f2;
case 0x49e1f4:c.instructions+=1;goto B49e1f4;
case 0x49e1f9:goto L49e1f9;
case 0x49e1fc:c.instructions+=2;goto B49e1fc;
case 0x49e1fe:c.instructions+=1;goto B49e1fe;
case 0x49e200:goto L49e200;
case 0x49e203:c.instructions+=2;goto B49e203;
case 0x49e205:c.instructions+=1;goto B49e205;
case 0x49e207:goto L49e207;
case 0x49e20c:c.instructions+=1;goto B49e20c;
case 0x49e20e:goto L49e20e;
case 0x49e210:c.instructions+=3;goto B49e210;
case 0x49e212:c.instructions+=2;goto B49e212;
case 0x49e216:c.instructions+=1;goto B49e216;
case 0x49e218:goto L49e218;
case 0x49e219:c.instructions+=1;goto B49e219;
case 0x49e21e:goto L49e21e;
case 0x49e221:c.instructions+=4;goto B49e221;
case 0x49e224:c.instructions+=3;goto B49e224;
case 0x49e225:c.instructions+=2;goto B49e225;
case 0x49e227:c.instructions+=1;goto B49e227;
case 0x49e229:goto L49e229;
case 0x49e22b:c.instructions+=1;goto B49e22b;
case 0x49e22d:goto L49e22d;
case 0x49e22f:c.instructions+=3;goto B49e22f;
case 0x49e231:c.instructions+=2;goto B49e231;
case 0x49e235:c.instructions+=1;goto B49e235;
case 0x49e237:goto L49e237;
case 0x49e238:c.instructions+=1;goto B49e238;
case 0x49e23d:goto L49e23d;
case 0x49e240:c.instructions+=3;goto B49e240;
case 0x49e243:c.instructions+=2;goto B49e243;
case 0x49e244:c.instructions+=1;goto B49e244;
case 0x49e246:goto L49e246;
case 0x49e248:goto L49e248;
case 0x49e249:c.instructions+=2;goto B49e249;
case 0x49e24a:c.instructions+=1;goto B49e24a;
case 0x49e24f:goto L49e24f;
case 0x49e252:c.instructions+=2;goto B49e252;
case 0x49e254:c.instructions+=1;goto B49e254;
case 0x49e256:goto L49e256;
case 0x49e25a:c.instructions+=3;goto B49e25a;
case 0x49e25e:c.instructions+=2;goto B49e25e;
case 0x49e260:c.instructions+=1;goto B49e260;
case 0x49e262:goto L49e262;
case 0x49e263:c.instructions+=4;goto B49e263;
case 0x49e265:c.instructions+=3;goto B49e265;
case 0x49e266:c.instructions+=2;goto B49e266;
case 0x49e267:c.instructions+=1;goto B49e267;
case 0x49e268:goto L49e268;
case 0x49e26c:c.instructions+=1;goto B49e26c;
case 0x49e270:goto L49e270;
case 0x49e273:c.instructions+=4;goto B49e273;
case 0x49e276:c.instructions+=3;goto B49e276;
case 0x49e277:c.instructions+=2;goto B49e277;
case 0x49e279:c.instructions+=1;goto B49e279;
case 0x49e27b:goto L49e27b;
case 0x49e27d:c.instructions+=1;goto B49e27d;
case 0x49e27f:goto L49e27f;
case 0x49e282:c.instructions+=1;goto B49e282;
case 0x49e284:goto L49e284;
case 0x49e285:c.instructions+=4;goto B49e285;
case 0x49e287:c.instructions+=3;goto B49e287;
case 0x49e288:c.instructions+=2;goto B49e288;
case 0x49e289:c.instructions+=1;goto B49e289;
case 0x49e290:goto L49e290;
case 0x49e297:c.instructions+=4;goto B49e297;
case 0x49e298:c.instructions+=3;goto B49e298;
case 0x49e299:c.instructions+=2;goto B49e299;
case 0x49e29b:c.instructions+=1;goto B49e29b;
case 0x49e29d:goto L49e29d;
case 0x49e2a0:c.instructions+=4;goto B49e2a0;
case 0x49e2a5:c.instructions+=3;goto B49e2a5;
case 0x49e2aa:c.instructions+=2;goto B49e2aa;
case 0x49e2ab:c.instructions+=1;goto B49e2ab;
case 0x49e2b0:goto L49e2b0;
case 0x49e2b3:c.instructions+=4;goto B49e2b3;
case 0x49e2b4:c.instructions+=3;goto B49e2b4;
case 0x49e2b6:c.instructions+=2;goto B49e2b6;
case 0x49e2b7:c.instructions+=1;goto B49e2b7;
case 0x49e2ba:goto L49e2ba;
case 0x49e2bb:c.instructions+=3;goto B49e2bb;
case 0x49e2bf:c.instructions+=2;goto B49e2bf;
case 0x49e2c0:c.instructions+=1;goto B49e2c0;
case 0x49e2c5:goto L49e2c5;
case 0x49e2c8:c.instructions+=2;goto B49e2c8;
case 0x49e2cb:c.instructions+=1;goto B49e2cb;
case 0x49e2d1:goto L49e2d1;
case 0x49e2d2:c.instructions+=1;goto B49e2d2;
case 0x49e2d7:goto L49e2d7;
case 0x49e2da:c.instructions+=2;goto B49e2da;
case 0x49e2dd:c.instructions+=1;goto B49e2dd;
case 0x49e2e3:goto L49e2e3;
case 0x49e2e5:c.instructions+=3;goto B49e2e5;
case 0x49e2e7:c.instructions+=2;goto B49e2e7;
case 0x49e2e8:c.instructions+=1;goto B49e2e8;
case 0x49e2ed:goto L49e2ed;
case 0x49e2f0:c.instructions+=2;goto B49e2f0;
case 0x49e2f2:c.instructions+=1;goto B49e2f2;
case 0x49e2f4:goto L49e2f4;
case 0x49e2f7:c.instructions+=4;goto B49e2f7;
case 0x49e2fc:c.instructions+=3;goto B49e2fc;
case 0x49e301:c.instructions+=2;goto B49e301;
case 0x49e302:c.instructions+=1;goto B49e302;
case 0x49e307:goto L49e307;
case 0x49e30a:c.instructions+=5;goto B49e30a;
case 0x49e30b:c.instructions+=4;goto B49e30b;
case 0x49e30c:c.instructions+=3;goto B49e30c;
case 0x49e30e:c.instructions+=2;goto B49e30e;
case 0x49e30f:c.instructions+=1;goto B49e30f;
case 0x49e312:goto L49e312;
case 0x49e315:c.instructions+=2;goto B49e315;
case 0x49e316:c.instructions+=1;goto B49e316;
case 0x49e31b:goto L49e31b;
case 0x49e31e:c.instructions+=2;goto B49e31e;
case 0x49e321:c.instructions+=1;goto B49e321;
case 0x49e323:goto L49e323;
case 0x49e324:c.instructions+=1;goto B49e324;
case 0x49e329:goto L49e329;
case 0x49e32c:c.instructions+=2;goto B49e32c;
case 0x49e32f:c.instructions+=1;goto B49e32f;
case 0x49e331:goto L49e331;
case 0x49e337:c.instructions+=2;goto B49e337;
case 0x49e338:c.instructions+=1;goto B49e338;
case 0x49e33d:goto L49e33d;
case 0x49e340:c.instructions+=2;goto B49e340;
case 0x49e342:c.instructions+=1;goto B49e342;
case 0x49e344:goto L49e344;
case 0x49e347:c.instructions+=4;goto B49e347;
case 0x49e34c:c.instructions+=3;goto B49e34c;
case 0x49e351:c.instructions+=2;goto B49e351;
case 0x49e352:c.instructions+=1;goto B49e352;
case 0x49e357:goto L49e357;
case 0x49e35a:c.instructions+=5;goto B49e35a;
case 0x49e35b:c.instructions+=4;goto B49e35b;
case 0x49e35c:c.instructions+=3;goto B49e35c;
case 0x49e35e:c.instructions+=2;goto B49e35e;
case 0x49e35f:c.instructions+=1;goto B49e35f;
case 0x49e362:goto L49e362;
case 0x49e363:c.instructions+=4;goto B49e363;
case 0x49e364:c.instructions+=3;goto B49e364;
case 0x49e366:c.instructions+=2;goto B49e366;
case 0x49e367:c.instructions+=1;goto B49e367;
case 0x49e36a:goto L49e36a;
case 0x49e36d:c.instructions+=6;goto B49e36d;
case 0x49e36f:c.instructions+=5;goto B49e36f;
case 0x49e371:c.instructions+=4;goto B49e371;
case 0x49e376:c.instructions+=3;goto B49e376;
case 0x49e37b:c.instructions+=2;goto B49e37b;
case 0x49e37c:c.instructions+=1;goto B49e37c;
case 0x49e381:goto L49e381;
case 0x49e384:c.instructions+=5;goto B49e384;
case 0x49e385:c.instructions+=4;goto B49e385;
case 0x49e386:c.instructions+=3;goto B49e386;
case 0x49e388:c.instructions+=2;goto B49e388;
case 0x49e389:c.instructions+=1;goto B49e389;
case 0x49e38c:goto L49e38c;
case 0x49e38f:c.instructions+=6;goto B49e38f;
case 0x49e391:c.instructions+=5;goto B49e391;
case 0x49e393:c.instructions+=4;goto B49e393;
case 0x49e398:c.instructions+=3;goto B49e398;
case 0x49e39d:c.instructions+=2;goto B49e39d;
case 0x49e39e:c.instructions+=1;goto B49e39e;
case 0x49e3a3:goto L49e3a3;
case 0x49e3a6:c.instructions+=5;goto B49e3a6;
case 0x49e3a7:c.instructions+=4;goto B49e3a7;
case 0x49e3a8:c.instructions+=3;goto B49e3a8;
case 0x49e3aa:c.instructions+=2;goto B49e3aa;
case 0x49e3ab:c.instructions+=1;goto B49e3ab;
case 0x49e3b0:goto L49e3b0;
case 0x49e3b1:c.instructions+=9;goto B49e3b1;
case 0x49e3b7:c.instructions+=8;goto B49e3b7;
case 0x49e3ba:c.instructions+=7;goto B49e3ba;
case 0x49e3bb:c.instructions+=6;goto B49e3bb;
case 0x49e3be:c.instructions+=5;goto B49e3be;
case 0x49e3c0:c.instructions+=4;goto B49e3c0;
case 0x49e3c1:c.instructions+=3;goto B49e3c1;
case 0x49e3c4:c.instructions+=2;goto B49e3c4;
case 0x49e3c5:c.instructions+=1;goto B49e3c5;
case 0x49e3ca:goto L49e3ca;
case 0x49e3cd:c.instructions+=2;goto B49e3cd;
case 0x49e3cf:c.instructions+=1;goto B49e3cf;
case 0x49e3d1:goto L49e3d1;
case 0x49e3d7:c.instructions+=2;goto B49e3d7;
case 0x49e3da:c.instructions+=1;goto B49e3da;
case 0x49e3dc:goto L49e3dc;
case 0x49e3df:c.instructions+=1;goto B49e3df;
case 0x49e3e1:goto L49e3e1;
case 0x49e3e7:c.instructions+=2;goto B49e3e7;
case 0x49e3ea:c.instructions+=1;goto B49e3ea;
case 0x49e3ec:goto L49e3ec;
case 0x49e3ef:c.instructions+=1;goto B49e3ef;
case 0x49e3f1:goto L49e3f1;
case 0x49e3f4:c.instructions+=2;goto B49e3f4;
case 0x49e3f9:c.instructions+=1;goto B49e3f9;
case 0x49e3fe:goto L49e3fe;
case 0x49e3ff:c.instructions+=6;goto B49e3ff;
case 0x49e401:c.instructions+=5;goto B49e401;
case 0x49e403:c.instructions+=4;goto B49e403;
case 0x49e408:c.instructions+=3;goto B49e408;
case 0x49e40d:c.instructions+=2;goto B49e40d;
case 0x49e40e:c.instructions+=1;goto B49e40e;
case 0x49e413:goto L49e413;
case 0x49e416:c.instructions+=3;goto B49e416;
case 0x49e417:c.instructions+=2;goto B49e417;
case 0x49e418:c.instructions+=1;goto B49e418;
case 0x49e419:goto L49e419;
case 0x49e41c:c.instructions+=2;goto B49e41c;
case 0x49e421:c.instructions+=1;goto B49e421;
case 0x49e426:goto L49e426;
case 0x49e427:c.instructions+=6;goto B49e427;
case 0x49e429:c.instructions+=5;goto B49e429;
case 0x49e42b:c.instructions+=4;goto B49e42b;
case 0x49e430:c.instructions+=3;goto B49e430;
case 0x49e435:c.instructions+=2;goto B49e435;
case 0x49e436:c.instructions+=1;goto B49e436;
case 0x49e43b:goto L49e43b;
case 0x49e43e:c.instructions+=3;goto B49e43e;
case 0x49e43f:c.instructions+=2;goto B49e43f;
case 0x49e440:c.instructions+=1;goto B49e440;
case 0x49e441:goto L49e441;
case 0x49e444:c.instructions+=10;goto B49e444;
case 0x49e449:c.instructions+=9;goto B49e449;
case 0x49e44b:c.instructions+=8;goto B49e44b;
case 0x49e450:c.instructions+=7;goto B49e450;
case 0x49e455:c.instructions+=6;goto B49e455;
case 0x49e45a:c.instructions+=5;goto B49e45a;
case 0x49e45f:c.instructions+=4;goto B49e45f;
case 0x49e464:c.instructions+=3;goto B49e464;
case 0x49e469:c.instructions+=2;goto B49e469;
case 0x49e46a:c.instructions+=1;goto B49e46a;
case 0x49e46f:goto L49e46f;
case 0x49e472:c.instructions+=3;goto B49e472;
case 0x49e473:c.instructions+=2;goto B49e473;
case 0x49e474:c.instructions+=1;goto B49e474;
case 0x49e480:goto L49e480;
case 0x49e481:c.instructions+=4;goto B49e481;
case 0x49e485:c.instructions+=3;goto B49e485;
case 0x49e48b:c.instructions+=2;goto B49e48b;
case 0x49e48c:c.instructions+=1;goto B49e48c;
case 0x49e491:goto L49e491;
case 0x49e495:c.instructions+=5;goto B49e495;
case 0x49e49f:c.instructions+=4;goto B49e49f;
case 0x49e4a2:c.instructions+=3;goto B49e4a2;
case 0x49e4a5:c.instructions+=2;goto B49e4a5;
case 0x49e4a7:c.instructions+=1;goto B49e4a7;
case 0x49e4a9:goto L49e4a9;
case 0x49e4ac:c.instructions+=4;goto B49e4ac;
case 0x49e4ad:c.instructions+=3;goto B49e4ad;
case 0x49e4b1:c.instructions+=2;goto B49e4b1;
case 0x49e4b9:c.instructions+=1;goto B49e4b9;
case 0x49e4be:goto L49e4be;
case 0x49e4c3:c.instructions+=1;goto B49e4c3;
case 0x49e4c5:goto L49e4c5;
case 0x49e4ca:c.instructions+=1;goto B49e4ca;
case 0x49e4cf:goto L49e4cf;
case 0x49e4d4:c.instructions+=1;goto B49e4d4;
case 0x49e4d6:goto L49e4d6;
case 0x49e4db:c.instructions+=1;goto B49e4db;
case 0x49e4e0:goto L49e4e0;
case 0x49e4e5:c.instructions+=1;goto B49e4e5;
case 0x49e4e7:goto L49e4e7;
case 0x49e4ec:c.instructions+=1;goto B49e4ec;
case 0x49e4f1:goto L49e4f1;
case 0x49e4f6:c.instructions+=1;goto B49e4f6;
case 0x49e4f8:goto L49e4f8;
case 0x49e4fb:c.instructions+=3;goto B49e4fb;
case 0x49e500:c.instructions+=2;goto B49e500;
case 0x49e501:c.instructions+=1;goto B49e501;
case 0x49e506:goto L49e506;
case 0x49e509:c.instructions+=2;goto B49e509;
case 0x49e50b:c.instructions+=1;goto B49e50b;
case 0x49e511:goto L49e511;
case 0x49e518:c.instructions+=2;goto B49e518;
case 0x49e519:c.instructions+=1;goto B49e519;
case 0x49e51a:goto L49e51a;
case 0x49e51f:c.instructions+=1;goto B49e51f;
case 0x49e521:goto L49e521;
case 0x49e523:c.instructions+=2;goto B49e523;
case 0x49e525:c.instructions+=1;goto B49e525;
case 0x49e52a:goto L49e52a;
case 0x49e52d:c.instructions+=1;goto B49e52d;
case 0x49e532:goto L49e532;
case 0x49e535:c.instructions+=7;goto B49e535;
case 0x49e536:c.instructions+=6;goto B49e536;
case 0x49e53b:c.instructions+=5;goto B49e53b;
case 0x49e540:c.instructions+=4;goto B49e540;
case 0x49e545:c.instructions+=3;goto B49e545;
case 0x49e54a:c.instructions+=2;goto B49e54a;
case 0x49e54b:c.instructions+=1;goto B49e54b;
case 0x49e550:goto L49e550;
case 0x49e553:c.instructions+=2;goto B49e553;
case 0x49e554:c.instructions+=1;goto B49e554;
case 0x49e555:goto L49e555;
case 0x49e55a:c.instructions+=1;goto B49e55a;
case 0x49e55c:goto L49e55c;
case 0x49e55e:c.instructions+=3;goto B49e55e;
case 0x49e560:c.instructions+=2;goto B49e560;
case 0x49e565:c.instructions+=1;goto B49e565;
case 0x49e567:goto L49e567;
case 0x49e56c:c.instructions+=1;goto B49e56c;
case 0x49e56e:goto L49e56e;
case 0x49e571:c.instructions+=3;goto B49e571;
case 0x49e573:c.instructions+=2;goto B49e573;
case 0x49e578:c.instructions+=1;goto B49e578;
case 0x49e57d:goto L49e57d;
case 0x49e580:c.instructions+=1;goto B49e580;
case 0x49e585:goto L49e585;
case 0x49e58a:c.instructions+=1;goto B49e58a;
case 0x49e58c:goto L49e58c;
case 0x49e591:c.instructions+=1;goto B49e591;
case 0x49e596:goto L49e596;
case 0x49e59b:c.instructions+=1;goto B49e59b;
case 0x49e59d:goto L49e59d;
case 0x49e5a0:c.instructions+=2;goto B49e5a0;
case 0x49e5a5:c.instructions+=1;goto B49e5a5;
case 0x49e5aa:goto L49e5aa;
case 0x49e5ab:c.instructions+=5;goto B49e5ab;
case 0x49e5b0:c.instructions+=4;goto B49e5b0;
case 0x49e5b5:c.instructions+=3;goto B49e5b5;
case 0x49e5ba:c.instructions+=2;goto B49e5ba;
case 0x49e5bb:c.instructions+=1;goto B49e5bb;
case 0x49e5c0:goto L49e5c0;
case 0x49e5c3:c.instructions+=2;goto B49e5c3;
case 0x49e5c4:c.instructions+=1;goto B49e5c4;
case 0x49e5c5:goto L49e5c5;
case 0x49e5ca:c.instructions+=1;goto B49e5ca;
case 0x49e5cc:goto L49e5cc;
case 0x49e5cf:c.instructions+=7;goto B49e5cf;
case 0x49e5d4:c.instructions+=6;goto B49e5d4;
case 0x49e5d9:c.instructions+=5;goto B49e5d9;
case 0x49e5de:c.instructions+=4;goto B49e5de;
case 0x49e5e3:c.instructions+=3;goto B49e5e3;
case 0x49e5e8:c.instructions+=2;goto B49e5e8;
case 0x49e5e9:c.instructions+=1;goto B49e5e9;
case 0x49e5ee:goto L49e5ee;
case 0x49e5f1:c.instructions+=2;goto B49e5f1;
case 0x49e5f2:c.instructions+=1;goto B49e5f2;
case 0x49e5f3:goto L49e5f3;
case 0x49e5f8:c.instructions+=1;goto B49e5f8;
case 0x49e5fa:goto L49e5fa;
case 0x49e5fd:c.instructions+=7;goto B49e5fd;
case 0x49e602:c.instructions+=6;goto B49e602;
case 0x49e607:c.instructions+=5;goto B49e607;
case 0x49e60c:c.instructions+=4;goto B49e60c;
case 0x49e611:c.instructions+=3;goto B49e611;
case 0x49e616:c.instructions+=2;goto B49e616;
case 0x49e617:c.instructions+=1;goto B49e617;
case 0x49e61c:goto L49e61c;
case 0x49e61f:c.instructions+=2;goto B49e61f;
case 0x49e620:c.instructions+=1;goto B49e620;
case 0x49e621:goto L49e621;
case 0x49e626:goto L49e626;
case 0x49e629:c.instructions+=1;goto B49e629;
case 0x49e62e:goto L49e62e;
case 0x49e62f:c.instructions+=6;goto B49e62f;
case 0x49e634:c.instructions+=5;goto B49e634;
case 0x49e639:c.instructions+=4;goto B49e639;
case 0x49e63e:c.instructions+=3;goto B49e63e;
case 0x49e643:c.instructions+=2;goto B49e643;
case 0x49e644:c.instructions+=1;goto B49e644;
case 0x49e649:goto L49e649;
case 0x49e64c:goto L49e64c;
case 0x49e64d:c.instructions+=1;goto B49e64d;
case 0x49e650:goto L49e650;
case 0x49e654:c.instructions+=13;goto B49e654;
case 0x49e655:c.instructions+=12;goto B49e655;
case 0x49e659:c.instructions+=11;goto B49e659;
case 0x49e65a:c.instructions+=10;goto B49e65a;
case 0x49e65b:c.instructions+=9;goto B49e65b;
case 0x49e65f:c.instructions+=8;goto B49e65f;
case 0x49e661:c.instructions+=7;goto B49e661;
case 0x49e665:c.instructions+=6;goto B49e665;
case 0x49e666:c.instructions+=5;goto B49e666;
case 0x49e667:c.instructions+=4;goto B49e667;
case 0x49e668:c.instructions+=3;goto B49e668;
case 0x49e669:c.instructions+=2;goto B49e669;
case 0x49e66b:c.instructions+=1;goto B49e66b;
case 0x49e670:goto L49e670;
case 0x49e676:c.instructions+=1;goto B49e676;
case 0x49e678:goto L49e678;
case 0x49e67e:c.instructions+=1;goto B49e67e;
case 0x49e680:goto L49e680;
case 0x49e686:c.instructions+=1;goto B49e686;
case 0x49e68c:goto L49e68c;
case 0x49e692:c.instructions+=3;goto B49e692;
case 0x49e693:c.instructions+=2;goto B49e693;
case 0x49e695:c.instructions+=1;goto B49e695;
case 0x49e69a:goto L49e69a;
case 0x49e69d:c.instructions+=6;goto B49e69d;
case 0x49e69f:c.instructions+=5;goto B49e69f;
case 0x49e6a0:c.instructions+=4;goto B49e6a0;
case 0x49e6a5:c.instructions+=3;goto B49e6a5;
case 0x49e6aa:c.instructions+=2;goto B49e6aa;
case 0x49e6ab:c.instructions+=1;goto B49e6ab;
case 0x49e6b0:goto L49e6b0;
case 0x49e6b6:c.instructions+=4;goto B49e6b6;
case 0x49e6b9:c.instructions+=3;goto B49e6b9;
case 0x49e6ba:c.instructions+=2;goto B49e6ba;
case 0x49e6bc:c.instructions+=1;goto B49e6bc;
case 0x49e6c1:goto L49e6c1;
case 0x49e6c3:c.instructions+=2;goto B49e6c3;
case 0x49e6c5:c.instructions+=1;goto B49e6c5;
case 0x49e6c8:goto L49e6c8;
case 0x49e6c9:c.instructions+=3;goto B49e6c9;
case 0x49e6ca:c.instructions+=2;goto B49e6ca;
case 0x49e6cb:c.instructions+=1;goto B49e6cb;
case 0x49e6ce:goto L49e6ce;
case 0x49e6d4:c.instructions+=4;goto B49e6d4;
case 0x49e6d6:c.instructions+=3;goto B49e6d6;
case 0x49e6db:c.instructions+=2;goto B49e6db;
case 0x49e6e1:c.instructions+=1;goto B49e6e1;
case 0x49e6e8:goto L49e6e8;
case 0x49e6ea:goto L49e6ea;
case 0x49e6ec:goto L49e6ec;
case 0x49e6f3:c.instructions+=1;goto B49e6f3;
case 0x49e6f5:goto L49e6f5;
case 0x49e6fb:c.instructions+=3;goto B49e6fb;
case 0x49e701:c.instructions+=2;goto B49e701;
case 0x49e702:c.instructions+=1;goto B49e702;
case 0x49e707:goto L49e707;
case 0x49e70a:c.instructions+=2;goto B49e70a;
case 0x49e70c:c.instructions+=1;goto B49e70c;
case 0x49e70e:goto L49e70e;
case 0x49e711:c.instructions+=4;goto B49e711;
case 0x49e716:c.instructions+=3;goto B49e716;
case 0x49e71b:c.instructions+=2;goto B49e71b;
case 0x49e71c:c.instructions+=1;goto B49e71c;
case 0x49e721:goto L49e721;
case 0x49e724:c.instructions+=4;goto B49e724;
case 0x49e725:c.instructions+=3;goto B49e725;
case 0x49e726:c.instructions+=2;goto B49e726;
case 0x49e727:c.instructions+=1;goto B49e727;
case 0x49e72a:goto L49e72a;
case 0x49e72c:c.instructions+=2;goto B49e72c;
case 0x49e731:c.instructions+=1;goto B49e731;
case 0x49e736:goto L49e736;
case 0x49e739:c.instructions+=4;goto B49e739;
case 0x49e73b:c.instructions+=3;goto B49e73b;
case 0x49e740:c.instructions+=2;goto B49e740;
case 0x49e741:c.instructions+=1;goto B49e741;
case 0x49e746:goto L49e746;
case 0x49e749:goto L49e749;
case 0x49e74a:c.instructions+=3;goto B49e74a;
case 0x49e74b:c.instructions+=2;goto B49e74b;
case 0x49e74c:c.instructions+=1;goto B49e74c;
case 0x49e750:goto L49e750;
case 0x49e751:c.instructions+=2;goto B49e751;
case 0x49e753:c.instructions+=1;goto B49e753;
case 0x49e758:goto L49e758;
case 0x49e75d:c.instructions+=1;goto B49e75d;
case 0x49e75f:goto L49e75f;
case 0x49e760:c.instructions+=1;goto B49e760;
case 0x49e765:goto L49e765;
case 0x49e768:goto L49e768;
case 0x49e76a:c.instructions+=2;goto B49e76a;
case 0x49e76b:c.instructions+=1;goto B49e76b;
case 0x49e770:goto L49e770;
case 0x49e776:c.instructions+=1;goto B49e776;
case 0x49e780:goto L49e780;
case 0x49e782:c.instructions+=8;goto B49e782;
case 0x49e787:c.instructions+=7;goto B49e787;
case 0x49e78d:c.instructions+=6;goto B49e78d;
case 0x49e78e:c.instructions+=5;goto B49e78e;
case 0x49e795:c.instructions+=4;goto B49e795;
case 0x49e796:c.instructions+=3;goto B49e796;
case 0x49e797:c.instructions+=2;goto B49e797;
case 0x49e799:c.instructions+=1;goto B49e799;
case 0x49e79e:goto L49e79e;
case 0x49e7a0:c.instructions+=6;goto B49e7a0;
case 0x49e7a3:c.instructions+=5;goto B49e7a3;
case 0x49e7a7:c.instructions+=4;goto B49e7a7;
case 0x49e7a9:c.instructions+=3;goto B49e7a9;
case 0x49e7ab:c.instructions+=2;goto B49e7ab;
case 0x49e7af:c.instructions+=1;goto B49e7af;
case 0x49e7b1:goto L49e7b1;
case 0x49e7b5:c.instructions+=3;goto B49e7b5;
case 0x49e7b6:c.instructions+=2;goto B49e7b6;
case 0x49e7b8:c.instructions+=1;goto B49e7b8;
case 0x49e7bd:goto L49e7bd;
case 0x49e7c3:c.instructions+=1;goto B49e7c3;
case 0x49e7c5:goto L49e7c5;
case 0x49e7c9:c.instructions+=4;goto B49e7c9;
case 0x49e7ca:c.instructions+=3;goto B49e7ca;
case 0x49e7d1:c.instructions+=2;goto B49e7d1;
case 0x49e7d4:c.instructions+=1;goto B49e7d4;
case 0x49e7e0:goto L49e7e0;
case 0x49e7e1:c.instructions+=2;goto B49e7e1;
case 0x49e7e3:c.instructions+=1;goto B49e7e3;
case 0x49e7e8:goto L49e7e8;
case 0x49e7ed:c.instructions+=1;goto B49e7ed;
case 0x49e7ef:goto L49e7ef;
case 0x49e7f0:c.instructions+=1;goto B49e7f0;
case 0x49e7f5:goto L49e7f5;
case 0x49e7f8:goto L49e7f8;
case 0x49e7fa:c.instructions+=2;goto B49e7fa;
case 0x49e7fb:c.instructions+=1;goto B49e7fb;
case 0x49e800:goto L49e800;
case 0x49e806:c.instructions+=1;goto B49e806;
case 0x49e810:goto L49e810;
case 0x49e814:c.instructions+=2;goto B49e814;
case 0x49e817:c.instructions+=1;goto B49e817;
case 0x49e819:goto L49e819;
case 0x49e81c:c.instructions+=1;goto B49e81c;
case 0x49e81e:goto L49e81e;
case 0x49e823:c.instructions+=1;goto B49e823;
case 0x49e825:goto L49e825;
case 0x49e82a:goto L49e82a;
case 0x49e830:c.instructions+=2;goto B49e830;
case 0x49e832:c.instructions+=1;goto B49e832;
case 0x49e834:goto L49e834;
case 0x49e839:goto L49e839;
case 0x49e83e:goto L49e83e;
case 0x49e841:c.instructions+=2;goto B49e841;
case 0x49e843:c.instructions+=1;goto B49e843;
case 0x49e845:goto L49e845;
case 0x49e84a:c.instructions+=1;goto B49e84a;
case 0x49e84f:goto L49e84f;
case 0x49e852:goto L49e852;
case 0x49e853:c.instructions+=7;goto B49e853;
case 0x49e857:c.instructions+=6;goto B49e857;
case 0x49e859:c.instructions+=5;goto B49e859;
case 0x49e85b:c.instructions+=4;goto B49e85b;
case 0x49e860:c.instructions+=3;goto B49e860;
case 0x49e865:c.instructions+=2;goto B49e865;
case 0x49e866:c.instructions+=1;goto B49e866;
case 0x49e86b:goto L49e86b;
case 0x49e86e:goto L49e86e;
case 0x49e870:goto L49e870;
case 0x49e871:c.instructions+=10;goto B49e871;
case 0x49e873:c.instructions+=9;goto B49e873;
case 0x49e876:c.instructions+=8;goto B49e876;
case 0x49e87c:c.instructions+=7;goto B49e87c;
case 0x49e87d:c.instructions+=6;goto B49e87d;
case 0x49e880:c.instructions+=5;goto B49e880;
case 0x49e881:c.instructions+=4;goto B49e881;
case 0x49e883:c.instructions+=3;goto B49e883;
case 0x49e885:c.instructions+=2;goto B49e885;
case 0x49e88a:c.instructions+=1;goto B49e88a;
case 0x49e88e:goto L49e88e;
case 0x49e890:goto L49e890;
case 0x49e896:goto L49e896;
case 0x49e897:c.instructions+=2;goto B49e897;
case 0x49e89b:c.instructions+=1;goto B49e89b;
case 0x49e8a0:goto L49e8a0;
case 0x49e8a1:c.instructions+=3;goto B49e8a1;
case 0x49e8a5:c.instructions+=2;goto B49e8a5;
case 0x49e8a6:c.instructions+=1;goto B49e8a6;
case 0x49e8ab:goto L49e8ab;
case 0x49e8ac:c.instructions+=1;goto B49e8ac;
case 0x49e8b1:goto L49e8b1;
case 0x49e8b2:c.instructions+=2;goto B49e8b2;
case 0x49e8b6:c.instructions+=1;goto B49e8b6;
case 0x49e8bb:goto L49e8bb;
case 0x49e8bc:c.instructions+=2;goto B49e8bc;
case 0x49e8c0:c.instructions+=1;goto B49e8c0;
case 0x49e8c5:goto L49e8c5;
case 0x49e8c6:c.instructions+=2;goto B49e8c6;
case 0x49e8ca:c.instructions+=1;goto B49e8ca;
case 0x49e8cf:goto L49e8cf;
case 0x49e8d0:c.instructions+=2;goto B49e8d0;
case 0x49e8d4:c.instructions+=1;goto B49e8d4;
case 0x49e8d9:goto L49e8d9;
case 0x49e8da:c.instructions+=2;goto B49e8da;
case 0x49e8de:c.instructions+=1;goto B49e8de;
case 0x49e8e3:goto L49e8e3;
case 0x49e8e4:c.instructions+=2;goto B49e8e4;
case 0x49e8e8:c.instructions+=1;goto B49e8e8;
case 0x49e8ed:goto L49e8ed;
case 0x49e8ee:c.instructions+=2;goto B49e8ee;
case 0x49e8f2:c.instructions+=1;goto B49e8f2;
case 0x49e8f7:goto L49e8f7;
case 0x49e8fb:c.instructions+=4;goto B49e8fb;
case 0x49e8fe:c.instructions+=3;goto B49e8fe;
case 0x49e900:c.instructions+=2;goto B49e900;
case 0x49e904:c.instructions+=1;goto B49e904;
case 0x49e906:goto L49e906;
case 0x49e90a:c.instructions+=2;goto B49e90a;
case 0x49e90c:c.instructions+=1;goto B49e90c;
case 0x49e90e:goto L49e90e;
case 0x49e910:c.instructions+=1;goto B49e910;
case 0x49e912:goto L49e912;
case 0x49e91a:c.instructions+=1;goto B49e91a;
case 0x49e922:goto L49e922;
case 0x49e923:c.instructions+=1;goto B49e923;
case 0x49e928:goto L49e928;
case 0x49e929:c.instructions+=2;goto B49e929;
case 0x49e92d:c.instructions+=1;goto B49e92d;
case 0x49e932:goto L49e932;
case 0x49e933:c.instructions+=2;goto B49e933;
case 0x49e937:c.instructions+=1;goto B49e937;
case 0x49e93c:goto L49e93c;
case 0x49e93d:c.instructions+=2;goto B49e93d;
case 0x49e941:c.instructions+=1;goto B49e941;
case 0x49e946:goto L49e946;
case 0x49e947:c.instructions+=2;goto B49e947;
case 0x49e94b:c.instructions+=1;goto B49e94b;
case 0x49e950:goto L49e950;
case 0x49e951:c.instructions+=2;goto B49e951;
case 0x49e955:c.instructions+=1;goto B49e955;
case 0x49e95a:goto L49e95a;
case 0x49e95b:c.instructions+=2;goto B49e95b;
case 0x49e95f:c.instructions+=1;goto B49e95f;
case 0x49e964:goto L49e964;
case 0x49e965:c.instructions+=2;goto B49e965;
case 0x49e969:c.instructions+=1;goto B49e969;
case 0x49e96e:goto L49e96e;
case 0x49e975:c.instructions+=4;goto B49e975;
case 0x49e976:c.instructions+=3;goto B49e976;
case 0x49e977:c.instructions+=2;goto B49e977;
case 0x49e97b:c.instructions+=1;goto B49e97b;
case 0x49e980:goto L49e980;
case 0x49e985:c.instructions+=4;goto B49e985;
case 0x49e98c:c.instructions+=3;goto B49e98c;
case 0x49e98d:c.instructions+=2;goto B49e98d;
case 0x49e98e:c.instructions+=1;goto B49e98e;
case 0x49e993:goto L49e993;
case 0x49e994:c.instructions+=1;goto B49e994;
case 0x49e999:goto L49e999;
case 0x49e99a:c.instructions+=2;goto B49e99a;
case 0x49e9a1:c.instructions+=1;goto B49e9a1;
case 0x49e9a6:goto L49e9a6;
case 0x49e9a9:c.instructions+=3;goto B49e9a9;
case 0x49e9ad:c.instructions+=2;goto B49e9ad;
case 0x49e9af:c.instructions+=1;goto B49e9af;
case 0x49e9b0:goto L49e9b0;
case 0x49e9b1:c.instructions+=1;goto B49e9b1;
case 0x49e9b6:goto L49e9b6;
case 0x49e9b8:c.instructions+=1;goto B49e9b8;
case 0x49e9bd:goto L49e9bd;
case 0x49e9bf:c.instructions+=2;goto B49e9bf;
case 0x49e9c1:c.instructions+=1;goto B49e9c1;
case 0x49e9c3:goto L49e9c3;
case 0x49e9c7:c.instructions+=4;goto B49e9c7;
case 0x49e9c8:c.instructions+=3;goto B49e9c8;
case 0x49e9cb:c.instructions+=2;goto B49e9cb;
case 0x49e9cc:c.instructions+=1;goto B49e9cc;
case 0x49e9d1:goto L49e9d1;
case 0x49e9d4:c.instructions+=2;goto B49e9d4;
case 0x49e9d6:c.instructions+=1;goto B49e9d6;
case 0x49e9d8:goto L49e9d8;
case 0x49e9d9:c.instructions+=2;goto B49e9d9;
case 0x49e9dc:c.instructions+=1;goto B49e9dc;
case 0x49e9de:goto L49e9de;
case 0x49e9e0:goto L49e9e0;
case 0x49e9e8:c.instructions+=2;goto B49e9e8;
case 0x49e9eb:c.instructions+=1;goto B49e9eb;
case 0x49e9ef:goto L49e9ef;
case 0x49e9f3:c.instructions+=2;goto B49e9f3;
case 0x49e9f4:c.instructions+=1;goto B49e9f4;
case 0x49e9f9:goto L49e9f9;
case 0x49e9fb:c.instructions+=1;goto B49e9fb;
case 0x49ea00:goto L49ea00;
case 0x49ea02:c.instructions+=1;goto B49ea02;
case 0x49ea04:goto L49ea04;
case 0x49ea0c:goto L49ea0c;
case 0x49ea0f:c.instructions+=3;goto B49ea0f;
case 0x49ea14:c.instructions+=2;goto B49ea14;
case 0x49ea18:c.instructions+=1;goto B49ea18;
case 0x49ea1a:goto L49ea1a;
case 0x49ea1c:goto L49ea1c;
case 0x49ea1d:c.instructions+=4;goto B49ea1d;
case 0x49ea1e:c.instructions+=3;goto B49ea1e;
case 0x49ea20:c.instructions+=2;goto B49ea20;
case 0x49ea21:c.instructions+=1;goto B49ea21;
case 0x49ea30:goto L49ea30;
case 0x49ea34:c.instructions+=5;goto B49ea34;
case 0x49ea3a:c.instructions+=4;goto B49ea3a;
case 0x49ea3b:c.instructions+=3;goto B49ea3b;
case 0x49ea3c:c.instructions+=2;goto B49ea3c;
case 0x49ea3d:c.instructions+=1;goto B49ea3d;
case 0x49ea42:goto L49ea42;
case 0x49ea44:c.instructions+=1;goto B49ea44;
case 0x49ea49:goto L49ea49;
case 0x49ea4a:c.instructions+=3;goto B49ea4a;
case 0x49ea4e:c.instructions+=2;goto B49ea4e;
case 0x49ea4f:c.instructions+=1;goto B49ea4f;
case 0x49ea54:goto L49ea54;
case 0x49ea56:c.instructions+=4;goto B49ea56;
case 0x49ea5d:c.instructions+=3;goto B49ea5d;
case 0x49ea60:c.instructions+=2;goto B49ea60;
case 0x49ea65:c.instructions+=1;goto B49ea65;
case 0x49ea67:goto L49ea67;
case 0x49ea69:goto L49ea69;
case 0x49ea6a:c.instructions+=3;goto B49ea6a;
case 0x49ea6b:c.instructions+=2;goto B49ea6b;
case 0x49ea71:c.instructions+=1;goto B49ea71;
case 0x49ea80:goto L49ea80;
case 0x49ea81:c.instructions+=5;goto B49ea81;
case 0x49ea83:c.instructions+=4;goto B49ea83;
case 0x49ea84:c.instructions+=3;goto B49ea84;
case 0x49ea87:c.instructions+=2;goto B49ea87;
case 0x49ea89:c.instructions+=1;goto B49ea89;
case 0x49ea8e:goto L49ea8e;
case 0x49ea90:c.instructions+=1;goto B49ea90;
case 0x49ea92:goto L49ea92;
case 0x49ea97:c.instructions+=2;goto B49ea97;
case 0x49ea99:c.instructions+=1;goto B49ea99;
case 0x49ea9e:goto L49ea9e;
case 0x49ea9f:c.instructions+=1;goto B49ea9f;
case 0x49eaa4:goto L49eaa4;
case 0x49eaa7:c.instructions+=2;goto B49eaa7;
case 0x49eaa9:c.instructions+=1;goto B49eaa9;
case 0x49eaab:goto L49eaab;
case 0x49eab2:c.instructions+=1;goto B49eab2;
case 0x49eab4:goto L49eab4;
case 0x49eab9:c.instructions+=1;goto B49eab9;
case 0x49eabb:goto L49eabb;
case 0x49eac5:c.instructions+=1;goto B49eac5;
case 0x49eac7:goto L49eac7;
case 0x49eaca:c.instructions+=3;goto B49eaca;
case 0x49eacb:c.instructions+=2;goto B49eacb;
case 0x49ead0:c.instructions+=1;goto B49ead0;
case 0x49ead5:goto L49ead5;
case 0x49ead8:c.instructions+=3;goto B49ead8;
case 0x49ead9:c.instructions+=2;goto B49ead9;
case 0x49eada:c.instructions+=1;goto B49eada;
case 0x49eadb:goto L49eadb;
case 0x49eae0:goto L49eae0;
case 0x49eae3:c.instructions+=1;goto B49eae3;
case 0x49eae8:goto L49eae8;
case 0x49eae9:c.instructions+=9;goto B49eae9;
case 0x49eaeb:c.instructions+=8;goto B49eaeb;
case 0x49eaed:c.instructions+=7;goto B49eaed;
case 0x49eaf2:c.instructions+=6;goto B49eaf2;
case 0x49eaf4:c.instructions+=5;goto B49eaf4;
case 0x49eaf9:c.instructions+=4;goto B49eaf9;
case 0x49eafe:c.instructions+=3;goto B49eafe;
case 0x49eb03:c.instructions+=2;goto B49eb03;
case 0x49eb04:c.instructions+=1;goto B49eb04;
case 0x49eb09:goto L49eb09;
case 0x49eb0c:goto L49eb0c;
case 0x49eb0d:c.instructions+=2;goto B49eb0d;
case 0x49eb0e:c.instructions+=1;goto B49eb0e;
case 0x49eb10:goto L49eb10;
case 0x49eb11:c.instructions+=5;goto B49eb11;
case 0x49eb15:c.instructions+=4;goto B49eb15;
case 0x49eb1b:c.instructions+=3;goto B49eb1b;
case 0x49eb1c:c.instructions+=2;goto B49eb1c;
case 0x49eb1d:c.instructions+=1;goto B49eb1d;
case 0x49eb22:goto L49eb22;
case 0x49eb26:c.instructions+=6;goto B49eb26;
case 0x49eb28:c.instructions+=5;goto B49eb28;
case 0x49eb2e:c.instructions+=4;goto B49eb2e;
case 0x49eb31:c.instructions+=3;goto B49eb31;
case 0x49eb34:c.instructions+=2;goto B49eb34;
case 0x49eb36:c.instructions+=1;goto B49eb36;
case 0x49eb38:goto L49eb38;
case 0x49eb3e:c.instructions+=2;goto B49eb3e;
case 0x49eb3f:c.instructions+=1;goto B49eb3f;
case 0x49eb44:goto L49eb44;
case 0x49eb4a:c.instructions+=5;goto B49eb4a;
case 0x49eb4d:c.instructions+=4;goto B49eb4d;
case 0x49eb4e:c.instructions+=3;goto B49eb4e;
case 0x49eb4f:c.instructions+=2;goto B49eb4f;
case 0x49eb50:c.instructions+=1;goto B49eb50;
case 0x49eb55:goto L49eb55;
case 0x49eb58:c.instructions+=3;goto B49eb58;
case 0x49eb5a:c.instructions+=2;goto B49eb5a;
case 0x49eb5f:c.instructions+=1;goto B49eb5f;
case 0x49eb64:goto L49eb64;
case 0x49eb65:c.instructions+=2;goto B49eb65;
case 0x49eb66:c.instructions+=1;goto B49eb66;
case 0x49eb67:goto L49eb67;
case 0x49eb6c:c.instructions+=1;goto B49eb6c;
case 0x49eb6e:goto L49eb6e;
case 0x49eb73:goto L49eb73;
case 0x49eb76:c.instructions+=1;goto B49eb76;
case 0x49eb7b:goto L49eb7b;
case 0x49eb7c:c.instructions+=6;goto B49eb7c;
case 0x49eb81:c.instructions+=5;goto B49eb81;
case 0x49eb86:c.instructions+=4;goto B49eb86;
case 0x49eb8b:c.instructions+=3;goto B49eb8b;
case 0x49eb90:c.instructions+=2;goto B49eb90;
case 0x49eb91:c.instructions+=1;goto B49eb91;
case 0x49eb96:goto L49eb96;
case 0x49eb9c:c.instructions+=6;goto B49eb9c;
case 0x49eb9f:c.instructions+=5;goto B49eb9f;
case 0x49eba0:c.instructions+=4;goto B49eba0;
case 0x49eba2:c.instructions+=3;goto B49eba2;
case 0x49eba7:c.instructions+=2;goto B49eba7;
case 0x49ebad:c.instructions+=1;goto B49ebad;
case 0x49ebb2:goto L49ebb2;
case 0x49ebb3:c.instructions+=2;goto B49ebb3;
case 0x49ebb4:c.instructions+=1;goto B49ebb4;
case 0x49ebb5:goto L49ebb5;
case 0x49ebba:c.instructions+=1;goto B49ebba;
case 0x49ebbc:goto L49ebbc;
case 0x49ebc1:c.instructions+=1;goto B49ebc1;
case 0x49ebc3:goto L49ebc3;
case 0x49ebc8:c.instructions+=1;goto B49ebc8;
case 0x49ebca:goto L49ebca;
case 0x49ebd0:c.instructions+=2;goto B49ebd0;
case 0x49ebd5:c.instructions+=1;goto B49ebd5;
case 0x49ebd7:goto L49ebd7;
case 0x49ebdc:c.instructions+=1;goto B49ebdc;
case 0x49ebde:goto L49ebde;
case 0x49ebe3:c.instructions+=1;goto B49ebe3;
case 0x49ebe5:goto L49ebe5;
case 0x49ebea:c.instructions+=1;goto B49ebea;
case 0x49ebec:goto L49ebec;
case 0x49ebef:c.instructions+=2;goto B49ebef;
case 0x49ebf4:c.instructions+=1;goto B49ebf4;
case 0x49ebf9:goto L49ebf9;
case 0x49ebfa:c.instructions+=5;goto B49ebfa;
case 0x49ebfc:c.instructions+=4;goto B49ebfc;
case 0x49ec01:c.instructions+=3;goto B49ec01;
case 0x49ec06:c.instructions+=2;goto B49ec06;
case 0x49ec07:c.instructions+=1;goto B49ec07;
case 0x49ec0c:goto L49ec0c;
case 0x49ec0f:c.instructions+=3;goto B49ec0f;
case 0x49ec11:c.instructions+=2;goto B49ec11;
case 0x49ec16:c.instructions+=1;goto B49ec16;
case 0x49ec1b:goto L49ec1b;
case 0x49ec1c:c.instructions+=2;goto B49ec1c;
case 0x49ec1d:c.instructions+=1;goto B49ec1d;
case 0x49ec1e:goto L49ec1e;
case 0x49ec23:goto L49ec23;
case 0x49ec26:c.instructions+=1;goto B49ec26;
case 0x49ec2b:goto L49ec2b;
case 0x49ec2c:c.instructions+=6;goto B49ec2c;
case 0x49ec2e:c.instructions+=5;goto B49ec2e;
case 0x49ec30:c.instructions+=4;goto B49ec30;
case 0x49ec35:c.instructions+=3;goto B49ec35;
case 0x49ec3a:c.instructions+=2;goto B49ec3a;
case 0x49ec3b:c.instructions+=1;goto B49ec3b;
case 0x49ec40:goto L49ec40;
case 0x49ec43:c.instructions+=3;goto B49ec43;
case 0x49ec45:c.instructions+=2;goto B49ec45;
case 0x49ec4a:c.instructions+=1;goto B49ec4a;
case 0x49ec4f:goto L49ec4f;
case 0x49ec50:c.instructions+=2;goto B49ec50;
case 0x49ec51:c.instructions+=1;goto B49ec51;
case 0x49ec60:goto L49ec60;
case 0x49ec61:c.instructions+=4;goto B49ec61;
case 0x49ec65:c.instructions+=3;goto B49ec65;
case 0x49ec6b:c.instructions+=2;goto B49ec6b;
case 0x49ec6d:c.instructions+=1;goto B49ec6d;
case 0x49ec6f:goto L49ec6f;
case 0x49ec70:c.instructions+=1;goto B49ec70;
case 0x49ec75:goto L49ec75;
case 0x49ec78:c.instructions+=1;goto B49ec78;
case 0x49ec82:goto L49ec82;
case 0x49ec86:c.instructions+=3;goto B49ec86;
case 0x49ec89:c.instructions+=2;goto B49ec89;
case 0x49ec8b:c.instructions+=1;goto B49ec8b;
case 0x49ec8d:goto L49ec8d;
case 0x49ec93:c.instructions+=2;goto B49ec93;
case 0x49ec95:c.instructions+=1;goto B49ec95;
case 0x49ec97:goto L49ec97;
case 0x49ec99:c.instructions+=1;goto B49ec99;
case 0x49ec9e:goto L49ec9e;
case 0x49eca1:c.instructions+=3;goto B49eca1;
case 0x49eca4:c.instructions+=2;goto B49eca4;
case 0x49eca6:c.instructions+=1;goto B49eca6;
case 0x49eca8:goto L49eca8;
case 0x49eca9:c.instructions+=1;goto B49eca9;
case 0x49ecae:goto L49ecae;
case 0x49ecb1:c.instructions+=2;goto B49ecb1;
case 0x49ecb3:c.instructions+=1;goto B49ecb3;
case 0x49ecb5:goto L49ecb5;
case 0x49ecb7:c.instructions+=4;goto B49ecb7;
case 0x49ecbc:c.instructions+=3;goto B49ecbc;
case 0x49ecc6:c.instructions+=2;goto B49ecc6;
case 0x49eccd:c.instructions+=1;goto B49eccd;
case 0x49ecd2:goto L49ecd2;
case 0x49ecd3:c.instructions+=1;goto B49ecd3;
case 0x49ecd4:goto L49ecd4;
case 0x49ecd6:c.instructions+=3;goto B49ecd6;
case 0x49ecdb:c.instructions+=2;goto B49ecdb;
case 0x49ece2:c.instructions+=1;goto B49ece2;
case 0x49ece7:goto L49ece7;
case 0x49ece8:c.instructions+=1;goto B49ece8;
case 0x49ece9:goto L49ece9;
case 0x49ecea:c.instructions+=4;goto B49ecea;
case 0x49eced:c.instructions+=3;goto B49eced;
case 0x49ecf2:c.instructions+=2;goto B49ecf2;
case 0x49ecf9:c.instructions+=1;goto B49ecf9;
case 0x49ecfe:goto L49ecfe;
case 0x49ecff:c.instructions+=6;goto B49ecff;
case 0x49ed01:c.instructions+=5;goto B49ed01;
case 0x49ed03:c.instructions+=4;goto B49ed03;
case 0x49ed08:c.instructions+=3;goto B49ed08;
case 0x49ed0d:c.instructions+=2;goto B49ed0d;
case 0x49ed0e:c.instructions+=1;goto B49ed0e;
case 0x49ed13:goto L49ed13;
case 0x49ed16:c.instructions+=5;goto B49ed16;
case 0x49ed17:c.instructions+=4;goto B49ed17;
case 0x49ed19:c.instructions+=3;goto B49ed19;
case 0x49ed1e:c.instructions+=2;goto B49ed1e;
case 0x49ed24:c.instructions+=1;goto B49ed24;
case 0x49ed29:goto L49ed29;
case 0x49ed2a:c.instructions+=1;goto B49ed2a;
case 0x49ed30:goto L49ed30;
case 0x49ed31:c.instructions+=5;goto B49ed31;
case 0x49ed33:c.instructions+=4;goto B49ed33;
case 0x49ed39:c.instructions+=3;goto B49ed39;
case 0x49ed3c:c.instructions+=2;goto B49ed3c;
case 0x49ed42:c.instructions+=1;goto B49ed42;
case 0x49ed44:goto L49ed44;
case 0x49ed4b:goto L49ed4b;
case 0x49ed51:c.instructions+=2;goto B49ed51;
case 0x49ed57:c.instructions+=1;goto B49ed57;
case 0x49ed59:goto L49ed59;
case 0x49ed5f:c.instructions+=1;goto B49ed5f;
case 0x49ed61:goto L49ed61;
case 0x49ed67:c.instructions+=2;goto B49ed67;
case 0x49ed6d:c.instructions+=1;goto B49ed6d;
case 0x49ed6f:goto L49ed6f;
case 0x49ed75:goto L49ed75;
case 0x49ed7b:goto L49ed7b;
case 0x49ed81:c.instructions+=1;goto B49ed81;
case 0x49ed83:goto L49ed83;
case 0x49ed85:c.instructions+=1;goto B49ed85;
case 0x49ed87:goto L49ed87;
case 0x49ed89:c.instructions+=3;goto B49ed89;
case 0x49ed8e:c.instructions+=2;goto B49ed8e;
case 0x49ed8f:c.instructions+=1;goto B49ed8f;
case 0x49ed94:goto L49ed94;
case 0x49ed97:goto L49ed97;
case 0x49ed9d:c.instructions+=4;goto B49ed9d;
case 0x49ed9f:c.instructions+=3;goto B49ed9f;
case 0x49eda4:c.instructions+=2;goto B49eda4;
case 0x49eda5:c.instructions+=1;goto B49eda5;
case 0x49edaa:goto L49edaa;
case 0x49edb0:c.instructions+=4;goto B49edb0;
case 0x49edb3:c.instructions+=3;goto B49edb3;
case 0x49edb4:c.instructions+=2;goto B49edb4;
case 0x49edb5:c.instructions+=1;goto B49edb5;
case 0x49edba:goto L49edba;
case 0x49edbd:goto L49edbd;
case 0x49edbe:c.instructions+=1;goto B49edbe;
case 0x49edd0:goto L49edd0;
case 0x49edd7:c.instructions+=1;goto B49edd7;
case 0x49edd9:goto L49edd9;
case 0x49edde:c.instructions+=2;goto B49edde;
case 0x49ede8:c.instructions+=1;goto B49ede8;
case 0x49edee:goto L49edee;
case 0x49ee00:goto L49ee00;
case 0x49ee01:c.instructions+=4;goto B49ee01;
case 0x49ee03:c.instructions+=3;goto B49ee03;
case 0x49ee09:c.instructions+=2;goto B49ee09;
case 0x49ee0a:c.instructions+=1;goto B49ee0a;
case 0x49ee0f:goto L49ee0f;
case 0x49ee12:c.instructions+=2;goto B49ee12;
case 0x49ee14:c.instructions+=1;goto B49ee14;
case 0x49ee16:goto L49ee16;
case 0x49ee19:c.instructions+=6;goto B49ee19;
case 0x49ee1b:c.instructions+=5;goto B49ee1b;
case 0x49ee1d:c.instructions+=4;goto B49ee1d;
case 0x49ee22:c.instructions+=3;goto B49ee22;
case 0x49ee27:c.instructions+=2;goto B49ee27;
case 0x49ee28:c.instructions+=1;goto B49ee28;
case 0x49ee2d:goto L49ee2d;
case 0x49ee30:c.instructions+=3;goto B49ee30;
case 0x49ee32:c.instructions+=2;goto B49ee32;
case 0x49ee33:c.instructions+=1;goto B49ee33;
case 0x49ee36:goto L49ee36;
case 0x49ee38:c.instructions+=2;goto B49ee38;
case 0x49ee39:c.instructions+=1;goto B49ee39;
case 0x49ee40:goto L49ee40;
case 0x49ee41:c.instructions+=11;goto B49ee41;
case 0x49ee43:c.instructions+=10;goto B49ee43;
case 0x49ee46:c.instructions+=9;goto B49ee46;
case 0x49ee4c:c.instructions+=8;goto B49ee4c;
case 0x49ee4d:c.instructions+=7;goto B49ee4d;
case 0x49ee50:c.instructions+=6;goto B49ee50;
case 0x49ee52:c.instructions+=5;goto B49ee52;
case 0x49ee53:c.instructions+=4;goto B49ee53;
case 0x49ee54:c.instructions+=3;goto B49ee54;
case 0x49ee58:c.instructions+=2;goto B49ee58;
case 0x49ee5d:c.instructions+=1;goto B49ee5d;
case 0x49ee5f:goto L49ee5f;
case 0x49ee64:c.instructions+=1;goto B49ee64;
case 0x49ee69:goto L49ee69;
case 0x49ee6a:c.instructions+=1;goto B49ee6a;
case 0x49ee6f:goto L49ee6f;
case 0x49ee71:c.instructions+=1;goto B49ee71;
case 0x49ee76:goto L49ee76;
case 0x49ee77:c.instructions+=3;goto B49ee77;
case 0x49ee7e:c.instructions+=2;goto B49ee7e;
case 0x49ee7f:c.instructions+=1;goto B49ee7f;
case 0x49ee84:goto L49ee84;
case 0x49ee86:c.instructions+=2;goto B49ee86;
case 0x49ee8b:c.instructions+=1;goto B49ee8b;
case 0x49ee8f:goto L49ee8f;
case 0x49ee91:goto L49ee91;
case 0x49ee95:c.instructions+=3;goto B49ee95;
case 0x49ee98:c.instructions+=2;goto B49ee98;
case 0x49ee9a:c.instructions+=1;goto B49ee9a;
case 0x49ee9c:goto L49ee9c;
case 0x49eea0:c.instructions+=6;goto B49eea0;
case 0x49eea3:c.instructions+=5;goto B49eea3;
case 0x49eea4:c.instructions+=4;goto B49eea4;
case 0x49eea9:c.instructions+=3;goto B49eea9;
case 0x49eeae:c.instructions+=2;goto B49eeae;
case 0x49eeaf:c.instructions+=1;goto B49eeaf;
case 0x49eeb4:goto L49eeb4;
case 0x49eeb7:c.instructions+=6;goto B49eeb7;
case 0x49eeb8:c.instructions+=5;goto B49eeb8;
case 0x49eeb9:c.instructions+=4;goto B49eeb9;
case 0x49eeba:c.instructions+=3;goto B49eeba;
case 0x49eebc:c.instructions+=2;goto B49eebc;
case 0x49eebd:c.instructions+=1;goto B49eebd;
case 0x49eec0:goto L49eec0;
case 0x49eec5:c.instructions+=1;goto B49eec5;
case 0x49eec7:goto L49eec7;
case 0x49eece:c.instructions+=3;goto B49eece;
case 0x49eecf:c.instructions+=2;goto B49eecf;
case 0x49eed0:c.instructions+=1;goto B49eed0;
case 0x49eed5:goto L49eed5;
case 0x49eed8:c.instructions+=2;goto B49eed8;
case 0x49eeda:c.instructions+=1;goto B49eeda;
case 0x49eedc:goto L49eedc;
case 0x49eedd:c.instructions+=2;goto B49eedd;
case 0x49eee0:c.instructions+=1;goto B49eee0;
case 0x49eee2:goto L49eee2;
case 0x49eee6:c.instructions+=1;goto B49eee6;
case 0x49eee8:goto L49eee8;
case 0x49eeec:c.instructions+=2;goto B49eeec;
case 0x49eeee:c.instructions+=1;goto B49eeee;
case 0x49eef0:goto L49eef0;
case 0x49eef5:c.instructions+=3;goto B49eef5;
case 0x49eef7:c.instructions+=2;goto B49eef7;
case 0x49eefa:c.instructions+=1;goto B49eefa;
case 0x49ef00:goto L49ef00;
case 0x49ef02:goto L49ef02;
case 0x49ef09:c.instructions+=3;goto B49ef09;
case 0x49ef0f:c.instructions+=2;goto B49ef0f;
case 0x49ef11:c.instructions+=1;goto B49ef11;
case 0x49ef13:goto L49ef13;
case 0x49ef15:c.instructions+=1;goto B49ef15;
case 0x49ef17:goto L49ef17;
case 0x49ef1e:c.instructions+=5;goto B49ef1e;
case 0x49ef1f:c.instructions+=4;goto B49ef1f;
case 0x49ef20:c.instructions+=3;goto B49ef20;
case 0x49ef21:c.instructions+=2;goto B49ef21;
case 0x49ef27:c.instructions+=1;goto B49ef27;
case 0x49ef2c:goto L49ef2c;
case 0x49ef31:c.instructions+=5;goto B49ef31;
case 0x49ef37:c.instructions+=4;goto B49ef37;
case 0x49ef3a:c.instructions+=3;goto B49ef3a;
case 0x49ef3c:c.instructions+=2;goto B49ef3c;
case 0x49ef3f:c.instructions+=1;goto B49ef3f;
case 0x49ef45:goto L49ef45;
case 0x49ef46:c.instructions+=5;goto B49ef46;
case 0x49ef47:c.instructions+=4;goto B49ef47;
case 0x49ef48:c.instructions+=3;goto B49ef48;
case 0x49ef4a:c.instructions+=2;goto B49ef4a;
case 0x49ef4b:c.instructions+=1;goto B49ef4b;
case 0x49ef50:goto L49ef50;
case 0x49ef54:c.instructions+=5;goto B49ef54;
case 0x49ef55:c.instructions+=4;goto B49ef55;
case 0x49ef57:c.instructions+=3;goto B49ef57;
case 0x49ef5d:c.instructions+=2;goto B49ef5d;
case 0x49ef5f:c.instructions+=1;goto B49ef5f;
case 0x49ef61:goto L49ef61;
case 0x49ef63:c.instructions+=9;goto B49ef63;
case 0x49ef69:c.instructions+=8;goto B49ef69;
case 0x49ef6f:c.instructions+=7;goto B49ef6f;
case 0x49ef72:c.instructions+=6;goto B49ef72;
case 0x49ef77:c.instructions+=5;goto B49ef77;
case 0x49ef78:c.instructions+=4;goto B49ef78;
case 0x49ef7f:c.instructions+=3;goto B49ef7f;
case 0x49ef84:c.instructions+=2;goto B49ef84;
case 0x49ef8a:c.instructions+=1;goto B49ef8a;
case 0x49ef8f:goto L49ef8f;
case 0x49ef92:c.instructions+=3;goto B49ef92;
case 0x49ef95:c.instructions+=2;goto B49ef95;
case 0x49ef97:c.instructions+=1;goto B49ef97;
case 0x49ef99:goto L49ef99;
case 0x49ef9c:c.instructions+=3;goto B49ef9c;
case 0x49efa1:c.instructions+=2;goto B49efa1;
case 0x49efa2:c.instructions+=1;goto B49efa2;
case 0x49efa7:goto L49efa7;
case 0x49efae:c.instructions+=5;goto B49efae;
case 0x49efb5:c.instructions+=4;goto B49efb5;
case 0x49efb8:c.instructions+=3;goto B49efb8;
case 0x49efba:c.instructions+=2;goto B49efba;
case 0x49efbb:c.instructions+=1;goto B49efbb;
case 0x49efc0:goto L49efc0;
case 0x49efc3:c.instructions+=5;goto B49efc3;
case 0x49efc5:c.instructions+=4;goto B49efc5;
case 0x49efca:c.instructions+=3;goto B49efca;
case 0x49efcb:c.instructions+=2;goto B49efcb;
case 0x49efd0:c.instructions+=1;goto B49efd0;
case 0x49efd5:goto L49efd5;
case 0x49efd8:goto L49efd8;
case 0x49efd9:c.instructions+=1;goto B49efd9;
case 0x49efe0:goto L49efe0;
case 0x49efe4:c.instructions+=4;goto B49efe4;
case 0x49efe6:c.instructions+=3;goto B49efe6;
case 0x49efe7:c.instructions+=2;goto B49efe7;
case 0x49efe9:c.instructions+=1;goto B49efe9;
case 0x49efef:goto L49efef;
case 0x49eff2:c.instructions+=6;goto B49eff2;
case 0x49eff3:c.instructions+=5;goto B49eff3;
case 0x49eff4:c.instructions+=4;goto B49eff4;
case 0x49eff5:c.instructions+=3;goto B49eff5;
case 0x49eff7:c.instructions+=2;goto B49eff7;
case 0x49effc:c.instructions+=1;goto B49effc;
default:missing_instruction(c.pc);}
B49e000:L49e000:{c.instructions+=13;NFSU2_TR(0x49e000);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e002:{NFSU2_TR(0x49e002);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e007:{NFSU2_TR(0x49e007);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e00d:{NFSU2_TR(0x49e00d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e00e:{NFSU2_TR(0x49e00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e015:{NFSU2_TR(0x49e015);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e016:{NFSU2_TR(0x49e016);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e017:{NFSU2_TR(0x49e017);
__builtin_memmove((R+24),(R+4),4);
}
B49e019:{NFSU2_TR(0x49e019);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e01d:{NFSU2_TR(0x49e01d);
u8 U[4];
w4(U+0,u32(0x78fd6cull));
s4(u32(r4(R+24)),r4(U+0));
}
B49e023:{NFSU2_TR(0x49e023);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B49e026:{NFSU2_TR(0x49e026);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49e02e:{NFSU2_TR(0x49e02e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e033ull));
TAIL_STATIC(0x5864f0u,586);
}
B49e033:L49e033:{c.instructions+=3;NFSU2_TR(0x49e033);
__builtin_memmove((R+4),(R+24),4);
}
B49e035:{NFSU2_TR(0x49e035);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B49e03d:{NFSU2_TR(0x49e03d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e042ull));
TAIL_STATIC(0x510d40u,510);
}
B49e042:L49e042:{c.instructions+=5;NFSU2_TR(0x49e042);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49e046:{NFSU2_TR(0x49e046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e047:{NFSU2_TR(0x49e047);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e04e:{NFSU2_TR(0x49e04e);
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
B49e051:{NFSU2_TR(0x49e051);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e060:L49e060:{c.instructions+=6;NFSU2_TR(0x49e060);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e061:{NFSU2_TR(0x49e061);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49e065:{NFSU2_TR(0x49e065);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e06b:{NFSU2_TR(0x49e06b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e06c:{NFSU2_TR(0x49e06c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e06d:{NFSU2_TR(0x49e06d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e072ull));
TAIL_STATIC(0x540a60u,540);
}
B49e072:L49e072:{c.instructions+=6;NFSU2_TR(0x49e072);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49e076:{NFSU2_TR(0x49e076);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49e080:{NFSU2_TR(0x49e080);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e083:{NFSU2_TR(0x49e083);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e086:{NFSU2_TR(0x49e086);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e088:{NFSU2_TR(0x49e088);
if(r1(R+518)){{goto L49e12b;}}
}
B49e08e:L49e08e:{c.instructions+=3;NFSU2_TR(0x49e08e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e093:{NFSU2_TR(0x49e093);
w4(R+4,u32(0x850080ull));
}
B49e098:{NFSU2_TR(0x49e098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e09dull));
TAIL_STATIC(0x503260u,503);
}
B49e09d:L49e09d:{c.instructions+=3;NFSU2_TR(0x49e09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e0a0:{NFSU2_TR(0x49e0a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6475706cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e0a5:{NFSU2_TR(0x49e0a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e0ae;}}
}
B49e0a7:L49e0a7:{c.instructions+=2;NFSU2_TR(0x49e0a7);
u8 U[4];
w4(U+0,u32(0x5498e449ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e0ac:{NFSU2_TR(0x49e0ac);
{goto L49e10b;}
}
B49e0ae:L49e0ae:{c.instructions+=2;NFSU2_TR(0x49e0ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x66696c74ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e0b3:{NFSU2_TR(0x49e0b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e0bc;}}
}
B49e0b5:L49e0b5:{c.instructions+=2;NFSU2_TR(0x49e0b5);
u8 U[4];
w4(U+0,u32(0x346ca432ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e0ba:{NFSU2_TR(0x49e0ba);
{goto L49e10b;}
}
B49e0bc:L49e0bc:{c.instructions+=2;NFSU2_TR(0x49e0bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x69706572ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e0c1:{NFSU2_TR(0x49e0c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e0ca;}}
}
B49e0c3:L49e0c3:{c.instructions+=2;NFSU2_TR(0x49e0c3);
u8 U[4];
w4(U+0,u32(0xe16c24e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e0c8:{NFSU2_TR(0x49e0c8);
{goto L49e10b;}
}
B49e0ca:L49e0ca:{c.instructions+=2;NFSU2_TR(0x49e0ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6d617870ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e0cf:{NFSU2_TR(0x49e0cf);
if(r1(R+518)){{goto L49e106;}}
}
B49e0d1:L49e0d1:{c.instructions+=2;NFSU2_TR(0x49e0d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x696e616dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e0d6:{NFSU2_TR(0x49e0d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e106;}}
}
B49e0d8:L49e0d8:{c.instructions+=5;NFSU2_TR(0x49e0d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49e0db:{NFSU2_TR(0x49e0db);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e0dd:{NFSU2_TR(0x49e0dd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e0df:{NFSU2_TR(0x49e0df);
u8 U[4];
w4(U+0,u32(0x4904cddeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e0e4:{NFSU2_TR(0x49e0e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e0e9ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49e0e9:L49e0e9:{c.instructions+=8;NFSU2_TR(0x49e0e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e0ec:{NFSU2_TR(0x49e0ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e0ed:{NFSU2_TR(0x49e0ed);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e0ef:{NFSU2_TR(0x49e0ef);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e0f1:{NFSU2_TR(0x49e0f1);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e0f6:{NFSU2_TR(0x49e0f6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e0fb:{NFSU2_TR(0x49e0fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e0fc:{NFSU2_TR(0x49e0fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e101ull));
TAIL_STATIC(0x558540u,558);
}
B49e101:L49e101:{c.instructions+=2;NFSU2_TR(0x49e101);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B49e104:{NFSU2_TR(0x49e104);
{goto L49e12b;}
}
B49e106:L49e106:{c.instructions+=1;NFSU2_TR(0x49e106);
u8 U[4];
w4(U+0,u32(0x39b57034ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e10b:L49e10b:{c.instructions+=2;NFSU2_TR(0x49e10b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49e10e:{NFSU2_TR(0x49e10e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e113ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49e113:L49e113:{c.instructions+=7;NFSU2_TR(0x49e113);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e114:{NFSU2_TR(0x49e114);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e116:{NFSU2_TR(0x49e116);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e118:{NFSU2_TR(0x49e118);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e11d:{NFSU2_TR(0x49e11d);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e122:{NFSU2_TR(0x49e122);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e123:{NFSU2_TR(0x49e123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e128ull));
TAIL_STATIC(0x558540u,558);
}
B49e128:L49e128:{c.instructions+=1;NFSU2_TR(0x49e128);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B49e12b:L49e12b:{c.instructions+=6;NFSU2_TR(0x49e12b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49e12e:{NFSU2_TR(0x49e12e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e12f:{NFSU2_TR(0x49e12f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e130:{NFSU2_TR(0x49e130);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e134:{NFSU2_TR(0x49e134);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0xaf0bbd92ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49e13c:{NFSU2_TR(0x49e13c);
TAIL_STATIC(0x55dda0u,55d);
}
B49e150:L49e150:{c.instructions+=5;NFSU2_TR(0x49e150);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e151:{NFSU2_TR(0x49e151);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49e155:{NFSU2_TR(0x49e155);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e15b:{NFSU2_TR(0x49e15b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e15c:{NFSU2_TR(0x49e15c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e161ull));
TAIL_STATIC(0x540a60u,540);
}
B49e161:L49e161:{c.instructions+=6;NFSU2_TR(0x49e161);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49e165:{NFSU2_TR(0x49e165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49e16f:{NFSU2_TR(0x49e16f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e172:{NFSU2_TR(0x49e172);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e175:{NFSU2_TR(0x49e175);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e177:{NFSU2_TR(0x49e177);
if(r1(R+518)){{goto L49e1a0;}}
}
B49e179:L49e179:{c.instructions+=4;NFSU2_TR(0x49e179);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e17a:{NFSU2_TR(0x49e17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49e17d:{NFSU2_TR(0x49e17d);
u8 U[4];
w4(U+0,u32(0x6a4ec4abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e182:{NFSU2_TR(0x49e182);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e187ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49e187:L49e187:{c.instructions+=7;NFSU2_TR(0x49e187);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e188:{NFSU2_TR(0x49e188);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e18a:{NFSU2_TR(0x49e18a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e18c:{NFSU2_TR(0x49e18c);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e191:{NFSU2_TR(0x49e191);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e196:{NFSU2_TR(0x49e196);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e197:{NFSU2_TR(0x49e197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e19cull));
TAIL_STATIC(0x558540u,558);
}
B49e19c:L49e19c:{c.instructions+=2;NFSU2_TR(0x49e19c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B49e19f:{NFSU2_TR(0x49e19f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e1a0:L49e1a0:{c.instructions+=5;NFSU2_TR(0x49e1a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49e1a3:{NFSU2_TR(0x49e1a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e1a4:{NFSU2_TR(0x49e1a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e1a8:{NFSU2_TR(0x49e1a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0xaf0bbd92ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49e1b0:{NFSU2_TR(0x49e1b0);
TAIL_STATIC(0x55dda0u,55d);
}
B49e1c0:L49e1c0:{c.instructions+=8;NFSU2_TR(0x49e1c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e1c1:{NFSU2_TR(0x49e1c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e1c2:{NFSU2_TR(0x49e1c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e1c3:{NFSU2_TR(0x49e1c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49e1c7:{NFSU2_TR(0x49e1c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e1c8:{NFSU2_TR(0x49e1c8);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B49e1cd:{NFSU2_TR(0x49e1cd);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B49e1d2:{NFSU2_TR(0x49e1d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e1d7ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B49e1d7:L49e1d7:{c.instructions+=3;NFSU2_TR(0x49e1d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e1da:{NFSU2_TR(0x49e1da);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49e1dd:{NFSU2_TR(0x49e1dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L49e262;}}
}
B49e1e3:L49e1e3:{c.instructions+=2;NFSU2_TR(0x49e1e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e1e4:{NFSU2_TR(0x49e1e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e1e9ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B49e1e9:L49e1e9:{c.instructions+=3;NFSU2_TR(0x49e1e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e1ec:{NFSU2_TR(0x49e1ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x32ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e1ef:{NFSU2_TR(0x49e1ef);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L49e262;}}
}
B49e1f1:L49e1f1:{c.instructions+=3;NFSU2_TR(0x49e1f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e1f2:{NFSU2_TR(0x49e1f2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B49e1f4:{NFSU2_TR(0x49e1f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e1f9ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B49e1f9:L49e1f9:{c.instructions+=3;NFSU2_TR(0x49e1f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e1fc:{NFSU2_TR(0x49e1fc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e1fe:{NFSU2_TR(0x49e1fe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49e268;}}
}
B49e200:L49e200:{c.instructions+=3;NFSU2_TR(0x49e200);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B49e203:{NFSU2_TR(0x49e203);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49e205:{NFSU2_TR(0x49e205);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e229;}}
}
B49e207:L49e207:{c.instructions+=2;NFSU2_TR(0x49e207);
u8 U[7];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B49e20c:{NFSU2_TR(0x49e20c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e262;}}
}
B49e20e:L49e20e:{c.instructions+=4;NFSU2_TR(0x49e20e);
__builtin_memmove((R+0),(R+12),1);
}
B49e210:{NFSU2_TR(0x49e210);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49e212:{NFSU2_TR(0x49e212);
u8 U[5];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49e216:{NFSU2_TR(0x49e216);
if(r1(R+518)){{goto L49e262;}}
}
B49e218:L49e218:{c.instructions+=2;NFSU2_TR(0x49e218);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e219:{NFSU2_TR(0x49e219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e21eull));
TAIL_STATIC(0x43dbb0u,43d);
}
B49e21e:L49e21e:{c.instructions+=5;NFSU2_TR(0x49e21e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e221:{NFSU2_TR(0x49e221);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B49e224:{NFSU2_TR(0x49e224);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B49e225:{NFSU2_TR(0x49e225);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e227:{NFSU2_TR(0x49e227);
{goto L49e246;}
}
B49e229:L49e229:{c.instructions+=2;NFSU2_TR(0x49e229);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49e22b:{NFSU2_TR(0x49e22b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e248;}}
}
B49e22d:L49e22d:{c.instructions+=4;NFSU2_TR(0x49e22d);
__builtin_memmove((R+0),(R+12),1);
}
B49e22f:{NFSU2_TR(0x49e22f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49e231:{NFSU2_TR(0x49e231);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49e235:{NFSU2_TR(0x49e235);
if(r1(R+518)){{goto L49e262;}}
}
B49e237:L49e237:{c.instructions+=2;NFSU2_TR(0x49e237);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e238:{NFSU2_TR(0x49e238);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e23dull));
TAIL_STATIC(0x43dbb0u,43d);
}
B49e23d:L49e23d:{c.instructions+=4;NFSU2_TR(0x49e23d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e240:{NFSU2_TR(0x49e240);
w4(R+8,u32(s32(s8(r1(R+12)))));
}
B49e243:{NFSU2_TR(0x49e243);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B49e244:{NFSU2_TR(0x49e244);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e246:L49e246:{c.instructions+=1;NFSU2_TR(0x49e246);
if(r1(R+518)){{goto L49e262;}}
}
B49e248:L49e248:{c.instructions+=3;NFSU2_TR(0x49e248);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e249:{NFSU2_TR(0x49e249);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B49e24a:{NFSU2_TR(0x49e24a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e24full));
TAIL_STATIC(0x43dbb0u,43d);
}
B49e24f:L49e24f:{c.instructions+=3;NFSU2_TR(0x49e24f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e252:{NFSU2_TR(0x49e252);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49e254:{NFSU2_TR(0x49e254);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49e200u);}goto L49e200;}}
}
B49e256:L49e256:{c.instructions+=4;NFSU2_TR(0x49e256);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49e25a:{NFSU2_TR(0x49e25a);
u8 U[5];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49e25e:{NFSU2_TR(0x49e25e);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(R+523,sborrow<u8>(r1(R+4),r1(U+0)));
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B49e260:{NFSU2_TR(0x49e260);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L49e270;}}
}
B49e262:L49e262:{c.instructions+=5;NFSU2_TR(0x49e262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e263:{NFSU2_TR(0x49e263);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49e265:{NFSU2_TR(0x49e265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49e266:{NFSU2_TR(0x49e266);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49e267:{NFSU2_TR(0x49e267);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e268:L49e268:{c.instructions+=2;NFSU2_TR(0x49e268);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49e26c:{NFSU2_TR(0x49e26c);
u8 U[5];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49e270:L49e270:{c.instructions+=5;NFSU2_TR(0x49e270);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B49e273:{NFSU2_TR(0x49e273);
w4(R+24,u32(s32(s8(r1(R+4)))));
}
B49e276:{NFSU2_TR(0x49e276);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B49e277:{NFSU2_TR(0x49e277);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e279:{NFSU2_TR(0x49e279);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49e262u);}goto L49e262;}}
}
B49e27b:L49e27b:{c.instructions+=2;NFSU2_TR(0x49e27b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49e27d:{NFSU2_TR(0x49e27d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49e262u);}goto L49e262;}}
}
B49e27f:L49e27f:{c.instructions+=2;NFSU2_TR(0x49e27f);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0xffull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49e282:{NFSU2_TR(0x49e282);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49e262u);}goto L49e262;}}
}
B49e284:L49e284:{c.instructions+=5;NFSU2_TR(0x49e284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e285:{NFSU2_TR(0x49e285);
w1(R+0,u8(0x1ull));
}
B49e287:{NFSU2_TR(0x49e287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49e288:{NFSU2_TR(0x49e288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49e289:{NFSU2_TR(0x49e289);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e290:L49e290:{c.instructions+=5;NFSU2_TR(0x49e290);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e297:{NFSU2_TR(0x49e297);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e298:{NFSU2_TR(0x49e298);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e299:{NFSU2_TR(0x49e299);
__builtin_memmove((R+12),(R+4),4);
}
B49e29b:{NFSU2_TR(0x49e29b);
if(r1(R+518)){{goto L49e2ba;}}
}
B49e29d:L49e29d:{c.instructions+=5;NFSU2_TR(0x49e29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e2a0:{NFSU2_TR(0x49e2a0);
u8 U[4];
w4(U+0,u32(0x91c92a94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e2a5:{NFSU2_TR(0x49e2a5);
u8 U[4];
w4(U+0,u32(0x78fd7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e2aa:{NFSU2_TR(0x49e2aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e2ab:{NFSU2_TR(0x49e2ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e2b0ull));
TAIL_STATIC(0x558430u,558);
}
B49e2b0:L49e2b0:{c.instructions+=5;NFSU2_TR(0x49e2b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49e2b3:{NFSU2_TR(0x49e2b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e2b4:{NFSU2_TR(0x49e2b4);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49e2b6:{NFSU2_TR(0x49e2b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49e2b7:{NFSU2_TR(0x49e2b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e2ba:L49e2ba:{c.instructions+=4;NFSU2_TR(0x49e2ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e2bb:{NFSU2_TR(0x49e2bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49e2bf:{NFSU2_TR(0x49e2bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e2c0:{NFSU2_TR(0x49e2c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e2c5ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B49e2c5:L49e2c5:{c.instructions+=3;NFSU2_TR(0x49e2c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e2c8:{NFSU2_TR(0x49e2c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49e2cb:{NFSU2_TR(0x49e2cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L49e38c;}}
}
B49e2d1:L49e2d1:{c.instructions+=2;NFSU2_TR(0x49e2d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e2d2:{NFSU2_TR(0x49e2d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e2d7ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B49e2d7:L49e2d7:{c.instructions+=3;NFSU2_TR(0x49e2d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e2da:{NFSU2_TR(0x49e2da);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e2dd:{NFSU2_TR(0x49e2dd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L49e38c;}}
}
B49e2e3:L49e2e3:{c.instructions+=4;NFSU2_TR(0x49e2e3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B49e2e5:{NFSU2_TR(0x49e2e5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B49e2e7:{NFSU2_TR(0x49e2e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e2e8:{NFSU2_TR(0x49e2e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e2edull));
TAIL_STATIC(0x50d3a0u,50d);
}
B49e2ed:L49e2ed:{c.instructions+=3;NFSU2_TR(0x49e2ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e2f0:{NFSU2_TR(0x49e2f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49e2f2:{NFSU2_TR(0x49e2f2);
if(r1(R+518)){{goto L49e312;}}
}
B49e2f4:L49e2f4:{c.instructions+=5;NFSU2_TR(0x49e2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49e2f7:{NFSU2_TR(0x49e2f7);
u8 U[4];
w4(U+0,u32(0x536c452dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e2fc:{NFSU2_TR(0x49e2fc);
u8 U[4];
w4(U+0,u32(0x78fd7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e301:{NFSU2_TR(0x49e301);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e302:{NFSU2_TR(0x49e302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e307ull));
TAIL_STATIC(0x558430u,558);
}
B49e307:L49e307:{c.instructions+=6;NFSU2_TR(0x49e307);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49e30a:{NFSU2_TR(0x49e30a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e30b:{NFSU2_TR(0x49e30b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e30c:{NFSU2_TR(0x49e30c);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49e30e:{NFSU2_TR(0x49e30e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49e30f:{NFSU2_TR(0x49e30f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e312:L49e312:{c.instructions+=3;NFSU2_TR(0x49e312);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e315:{NFSU2_TR(0x49e315);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e316:{NFSU2_TR(0x49e316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e31bull));
TAIL_STATIC(0x43dbb0u,43d);
}
B49e31b:L49e31b:{c.instructions+=3;NFSU2_TR(0x49e31b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e31e:{NFSU2_TR(0x49e31e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49e321:{NFSU2_TR(0x49e321);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L49e36a;}}
}
B49e323:L49e323:{c.instructions+=2;NFSU2_TR(0x49e323);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e324:{NFSU2_TR(0x49e324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e329ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B49e329:L49e329:{c.instructions+=3;NFSU2_TR(0x49e329);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e32c:{NFSU2_TR(0x49e32c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e32f:{NFSU2_TR(0x49e32f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L49e36a;}}
}
B49e331:L49e331:{c.instructions+=3;NFSU2_TR(0x49e331);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x80ull))));
}
B49e337:{NFSU2_TR(0x49e337);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e338:{NFSU2_TR(0x49e338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e33dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49e1c0u);}goto L49e1c0;}
}
B49e33d:L49e33d:{c.instructions+=3;NFSU2_TR(0x49e33d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e340:{NFSU2_TR(0x49e340);
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
B49e342:{NFSU2_TR(0x49e342);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e362;}}
}
B49e344:L49e344:{c.instructions+=5;NFSU2_TR(0x49e344);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e347:{NFSU2_TR(0x49e347);
u8 U[4];
w4(U+0,u32(0x7e77208cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e34c:{NFSU2_TR(0x49e34c);
u8 U[4];
w4(U+0,u32(0x78fd7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e351:{NFSU2_TR(0x49e351);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e352:{NFSU2_TR(0x49e352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e357ull));
TAIL_STATIC(0x558430u,558);
}
B49e357:L49e357:{c.instructions+=6;NFSU2_TR(0x49e357);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49e35a:{NFSU2_TR(0x49e35a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e35b:{NFSU2_TR(0x49e35b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e35c:{NFSU2_TR(0x49e35c);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49e35e:{NFSU2_TR(0x49e35e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49e35f:{NFSU2_TR(0x49e35f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e362:L49e362:{c.instructions+=5;NFSU2_TR(0x49e362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e363:{NFSU2_TR(0x49e363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e364:{NFSU2_TR(0x49e364);
w1(R+0,u8(0x1ull));
}
B49e366:{NFSU2_TR(0x49e366);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49e367:{NFSU2_TR(0x49e367);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e36a:L49e36a:{c.instructions+=7;NFSU2_TR(0x49e36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49e36d:{NFSU2_TR(0x49e36d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e36f:{NFSU2_TR(0x49e36f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e371:{NFSU2_TR(0x49e371);
u8 U[4];
w4(U+0,u32(0xd29a1a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e376:{NFSU2_TR(0x49e376);
u8 U[4];
w4(U+0,u32(0x78fd7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e37b:{NFSU2_TR(0x49e37b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e37c:{NFSU2_TR(0x49e37c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e381ull));
TAIL_STATIC(0x558430u,558);
}
B49e381:L49e381:{c.instructions+=6;NFSU2_TR(0x49e381);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B49e384:{NFSU2_TR(0x49e384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e385:{NFSU2_TR(0x49e385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e386:{NFSU2_TR(0x49e386);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49e388:{NFSU2_TR(0x49e388);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49e389:{NFSU2_TR(0x49e389);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e38c:L49e38c:{c.instructions+=7;NFSU2_TR(0x49e38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49e38f:{NFSU2_TR(0x49e38f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e391:{NFSU2_TR(0x49e391);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e393:{NFSU2_TR(0x49e393);
u8 U[4];
w4(U+0,u32(0x4da10f66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e398:{NFSU2_TR(0x49e398);
u8 U[4];
w4(U+0,u32(0x78fd7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e39d:{NFSU2_TR(0x49e39d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e39e:{NFSU2_TR(0x49e39e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e3a3ull));
TAIL_STATIC(0x558430u,558);
}
B49e3a3:L49e3a3:{c.instructions+=6;NFSU2_TR(0x49e3a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B49e3a6:{NFSU2_TR(0x49e3a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e3a7:{NFSU2_TR(0x49e3a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e3a8:{NFSU2_TR(0x49e3a8);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49e3aa:{NFSU2_TR(0x49e3aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49e3ab:{NFSU2_TR(0x49e3ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e3b0:L49e3b0:{c.instructions+=10;NFSU2_TR(0x49e3b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e3b1:{NFSU2_TR(0x49e3b1);
__builtin_memmove((R+24),gp(0x836370),4);
}
B49e3b7:{NFSU2_TR(0x49e3b7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B49e3ba:{NFSU2_TR(0x49e3ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e3bb:{NFSU2_TR(0x49e3bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B49e3be:{NFSU2_TR(0x49e3be);
__builtin_memmove((R+28),(R+4),4);
}
B49e3c0:{NFSU2_TR(0x49e3c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e3c1:{NFSU2_TR(0x49e3c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49e3c4:{NFSU2_TR(0x49e3c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e3c5:{NFSU2_TR(0x49e3c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e3caull));
TAIL_STATIC(0x43dc30u,43d);
}
B49e3ca:L49e3ca:{c.instructions+=3;NFSU2_TR(0x49e3ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49e3cd:{NFSU2_TR(0x49e3cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e3cf:{NFSU2_TR(0x49e3cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e419;}}
}
B49e3d1:L49e3d1:{c.instructions+=3;NFSU2_TR(0x49e3d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e3d7:{NFSU2_TR(0x49e3d7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49e3da:{NFSU2_TR(0x49e3da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L49e3f1;}}
}
B49e3dc:L49e3dc:{c.instructions+=2;NFSU2_TR(0x49e3dc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e3df:{NFSU2_TR(0x49e3df);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L49e3f1;}}
}
B49e3e1:L49e3e1:{c.instructions+=3;NFSU2_TR(0x49e3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49e3e7:{NFSU2_TR(0x49e3e7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49e3ea:{NFSU2_TR(0x49e3ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L49e3f1;}}
}
B49e3ec:L49e3ec:{c.instructions+=2;NFSU2_TR(0x49e3ec);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e3ef:{NFSU2_TR(0x49e3ef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49e441;}}
}
B49e3f1:L49e3f1:{c.instructions+=3;NFSU2_TR(0x49e3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49e3f4:{NFSU2_TR(0x49e3f4);
u8 U[4];
w4(U+0,u32(0xa8da51cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e3f9:{NFSU2_TR(0x49e3f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e3feull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49e3fe:L49e3fe:{c.instructions+=7;NFSU2_TR(0x49e3fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e3ff:{NFSU2_TR(0x49e3ff);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e401:{NFSU2_TR(0x49e401);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e403:{NFSU2_TR(0x49e403);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e408:{NFSU2_TR(0x49e408);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e40d:{NFSU2_TR(0x49e40d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e40e:{NFSU2_TR(0x49e40e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e413ull));
TAIL_STATIC(0x558540u,558);
}
B49e413:L49e413:{c.instructions+=4;NFSU2_TR(0x49e413);
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
B49e416:{NFSU2_TR(0x49e416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e417:{NFSU2_TR(0x49e417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e418:{NFSU2_TR(0x49e418);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e419:L49e419:{c.instructions+=3;NFSU2_TR(0x49e419);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49e41c:{NFSU2_TR(0x49e41c);
u8 U[4];
w4(U+0,u32(0xff99d845ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e421:{NFSU2_TR(0x49e421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e426ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49e426:L49e426:{c.instructions+=7;NFSU2_TR(0x49e426);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e427:{NFSU2_TR(0x49e427);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e429:{NFSU2_TR(0x49e429);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e42b:{NFSU2_TR(0x49e42b);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e430:{NFSU2_TR(0x49e430);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e435:{NFSU2_TR(0x49e435);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e436:{NFSU2_TR(0x49e436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e43bull));
TAIL_STATIC(0x558540u,558);
}
B49e43b:L49e43b:{c.instructions+=4;NFSU2_TR(0x49e43b);
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
B49e43e:{NFSU2_TR(0x49e43e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e43f:{NFSU2_TR(0x49e43f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e440:{NFSU2_TR(0x49e440);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e441:L49e441:{c.instructions+=11;NFSU2_TR(0x49e441);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49e444:{NFSU2_TR(0x49e444);
u8 U[4];
w4(U+0,u32(0x7e630facull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e449:{NFSU2_TR(0x49e449);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e44b:{NFSU2_TR(0x49e44b);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e450:{NFSU2_TR(0x49e450);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e455:{NFSU2_TR(0x49e455);
u8 U[4];
w4(U+0,u32(0xa365b3d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e45a:{NFSU2_TR(0x49e45a);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e45f:{NFSU2_TR(0x49e45f);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e464:{NFSU2_TR(0x49e464);
u8 U[4];
w4(U+0,u32(0x78f2f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e469:{NFSU2_TR(0x49e469);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e46a:{NFSU2_TR(0x49e46a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e46full));
TAIL_STATIC(0x558790u,558);
}
B49e46f:L49e46f:{c.instructions+=4;NFSU2_TR(0x49e46f);
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
B49e472:{NFSU2_TR(0x49e472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e473:{NFSU2_TR(0x49e473);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e474:{NFSU2_TR(0x49e474);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e480:L49e480:{c.instructions+=5;NFSU2_TR(0x49e480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e481:{NFSU2_TR(0x49e481);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49e485:{NFSU2_TR(0x49e485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e48b:{NFSU2_TR(0x49e48b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e48c:{NFSU2_TR(0x49e48c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e491ull));
TAIL_STATIC(0x540a60u,540);
}
B49e491:L49e491:{c.instructions+=6;NFSU2_TR(0x49e491);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49e495:{NFSU2_TR(0x49e495);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49e49f:{NFSU2_TR(0x49e49f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e4a2:{NFSU2_TR(0x49e4a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e4a5:{NFSU2_TR(0x49e4a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e4a7:{NFSU2_TR(0x49e4a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e4be;}}
}
B49e4a9:L49e4a9:{c.instructions+=5;NFSU2_TR(0x49e4a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49e4ac:{NFSU2_TR(0x49e4ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e4ad:{NFSU2_TR(0x49e4ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e4b1:{NFSU2_TR(0x49e4b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0xb34a760full));
s4(u32(r4(U+0)),r4(U+4));
}
B49e4b9:{NFSU2_TR(0x49e4b9);
TAIL_STATIC(0x51ce60u,51c);
}
B49e4be:L49e4be:{c.instructions+=2;NFSU2_TR(0x49e4be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6475706cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e4c3:{NFSU2_TR(0x49e4c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e4cf;}}
}
B49e4c5:L49e4c5:{c.instructions+=2;NFSU2_TR(0x49e4c5);
u8 U[4];
w4(U+0,u32(0x67f1d911ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e4ca:{NFSU2_TR(0x49e4ca);
{goto L49e626;}
}
B49e4cf:L49e4cf:{c.instructions+=2;NFSU2_TR(0x49e4cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x64626572ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e4d4:{NFSU2_TR(0x49e4d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e4e0;}}
}
B49e4d6:L49e4d6:{c.instructions+=2;NFSU2_TR(0x49e4d6);
u8 U[4];
w4(U+0,u32(0x91c92a94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e4db:{NFSU2_TR(0x49e4db);
{goto L49e626;}
}
B49e4e0:L49e4e0:{c.instructions+=2;NFSU2_TR(0x49e4e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6d61696cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e4e5:{NFSU2_TR(0x49e4e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e4f1;}}
}
B49e4e7:L49e4e7:{c.instructions+=2;NFSU2_TR(0x49e4e7);
u8 U[4];
w4(U+0,u32(0x7e77208cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e4ec:{NFSU2_TR(0x49e4ec);
{goto L49e626;}
}
B49e4f1:L49e4f1:{c.instructions+=2;NFSU2_TR(0x49e4f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x706d616cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e4f6:{NFSU2_TR(0x49e4f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e51a;}}
}
B49e4f8:L49e4f8:{c.instructions+=4;NFSU2_TR(0x49e4f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e4fb:{NFSU2_TR(0x49e4fb);
u8 U[4];
w4(U+0,u32(0x78fe04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e500:{NFSU2_TR(0x49e500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e501:{NFSU2_TR(0x49e501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e506ull));
TAIL_STATIC(0x43dc30u,43d);
}
B49e506:L49e506:{c.instructions+=3;NFSU2_TR(0x49e506);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49e509:{NFSU2_TR(0x49e509);
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
B49e50b:{NFSU2_TR(0x49e50b);
if(r1(R+518)){{goto L49e64c;}}
}
B49e511:L49e511:{c.instructions+=3;NFSU2_TR(0x49e511);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49e518:{NFSU2_TR(0x49e518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e519:{NFSU2_TR(0x49e519);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e51a:L49e51a:{c.instructions+=2;NFSU2_TR(0x49e51a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x69706173ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e51f:{NFSU2_TR(0x49e51f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e555;}}
}
B49e521:L49e521:{c.instructions+=3;NFSU2_TR(0x49e521);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e523:{NFSU2_TR(0x49e523);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e525:{NFSU2_TR(0x49e525);
u8 U[4];
w4(U+0,u32(0xd29a1a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e52a:L49e52a:{c.instructions+=2;NFSU2_TR(0x49e52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49e52d:{NFSU2_TR(0x49e52d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e532ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49e532:L49e532:{c.instructions+=8;NFSU2_TR(0x49e532);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e535:{NFSU2_TR(0x49e535);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e536:{NFSU2_TR(0x49e536);
u8 U[4];
w4(U+0,u32(0x3098bf25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e53b:{NFSU2_TR(0x49e53b);
u8 U[4];
w4(U+0,u32(0x3098bf25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e540:{NFSU2_TR(0x49e540);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e545:{NFSU2_TR(0x49e545);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e54a:{NFSU2_TR(0x49e54a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e54b:{NFSU2_TR(0x49e54b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e550ull));
TAIL_STATIC(0x558540u,558);
}
B49e550:L49e550:{c.instructions+=3;NFSU2_TR(0x49e550);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49e553:{NFSU2_TR(0x49e553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e554:{NFSU2_TR(0x49e554);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e555:L49e555:{c.instructions+=2;NFSU2_TR(0x49e555);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x696e616dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e55a:{NFSU2_TR(0x49e55a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e567;}}
}
B49e55c:L49e55c:{c.instructions+=4;NFSU2_TR(0x49e55c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e55e:{NFSU2_TR(0x49e55e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e560:{NFSU2_TR(0x49e560);
u8 U[4];
w4(U+0,u32(0x4da10f66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e565:{NFSU2_TR(0x49e565);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49e52au);}goto L49e52a;}
}
B49e567:L49e567:{c.instructions+=2;NFSU2_TR(0x49e567);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x656c656eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e56c:{NFSU2_TR(0x49e56c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e585;}}
}
B49e56e:L49e56e:{c.instructions+=4;NFSU2_TR(0x49e56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49e571:{NFSU2_TR(0x49e571);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e573:{NFSU2_TR(0x49e573);
u8 U[4];
w4(U+0,u32(0x6864bfedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e578:{NFSU2_TR(0x49e578);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e57dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49e57d:L49e57d:{c.instructions+=2;NFSU2_TR(0x49e57d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e580:{NFSU2_TR(0x49e580);
{goto L49e62e;}
}
B49e585:L49e585:{c.instructions+=2;NFSU2_TR(0x49e585);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x66696c74ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e58a:{NFSU2_TR(0x49e58a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e596;}}
}
B49e58c:L49e58c:{c.instructions+=2;NFSU2_TR(0x49e58c);
u8 U[4];
w4(U+0,u32(0xfe641264ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e591:{NFSU2_TR(0x49e591);
{goto L49e626;}
}
B49e596:L49e596:{c.instructions+=2;NFSU2_TR(0x49e596);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x746f6f79ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e59b:{NFSU2_TR(0x49e59b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e5c5;}}
}
B49e59d:L49e59d:{c.instructions+=3;NFSU2_TR(0x49e59d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49e5a0:{NFSU2_TR(0x49e5a0);
u8 U[4];
w4(U+0,u32(0x87983521ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e5a5:{NFSU2_TR(0x49e5a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e5aaull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49e5aa:L49e5aa:{c.instructions+=6;NFSU2_TR(0x49e5aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e5ab:{NFSU2_TR(0x49e5ab);
u8 U[4];
w4(U+0,u32(0x3098bf25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e5b0:{NFSU2_TR(0x49e5b0);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e5b5:{NFSU2_TR(0x49e5b5);
u8 U[4];
w4(U+0,u32(0x78fdecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e5ba:{NFSU2_TR(0x49e5ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e5bb:{NFSU2_TR(0x49e5bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e5c0ull));
TAIL_STATIC(0x5585e0u,558);
}
B49e5c0:L49e5c0:{c.instructions+=3;NFSU2_TR(0x49e5c0);
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
B49e5c3:{NFSU2_TR(0x49e5c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e5c4:{NFSU2_TR(0x49e5c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e5c5:L49e5c5:{c.instructions+=2;NFSU2_TR(0x49e5c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x697a6970ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e5ca:{NFSU2_TR(0x49e5ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e5f3;}}
}
B49e5cc:L49e5cc:{c.instructions+=8;NFSU2_TR(0x49e5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e5cf:{NFSU2_TR(0x49e5cf);
u8 U[4];
w4(U+0,u32(0x78fdc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e5d4:{NFSU2_TR(0x49e5d4);
u8 U[4];
w4(U+0,u32(0x3098bf25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e5d9:{NFSU2_TR(0x49e5d9);
u8 U[4];
w4(U+0,u32(0x3098bf25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e5de:{NFSU2_TR(0x49e5de);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e5e3:{NFSU2_TR(0x49e5e3);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e5e8:{NFSU2_TR(0x49e5e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e5e9:{NFSU2_TR(0x49e5e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e5eeull));
TAIL_STATIC(0x558540u,558);
}
B49e5ee:L49e5ee:{c.instructions+=3;NFSU2_TR(0x49e5ee);
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
B49e5f1:{NFSU2_TR(0x49e5f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e5f2:{NFSU2_TR(0x49e5f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e5f3:L49e5f3:{c.instructions+=2;NFSU2_TR(0x49e5f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x696d7374ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e5f8:{NFSU2_TR(0x49e5f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e621;}}
}
B49e5fa:L49e5fa:{c.instructions+=8;NFSU2_TR(0x49e5fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49e5fd:{NFSU2_TR(0x49e5fd);
u8 U[4];
w4(U+0,u32(0x78fd90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e602:{NFSU2_TR(0x49e602);
u8 U[4];
w4(U+0,u32(0x3098bf25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e607:{NFSU2_TR(0x49e607);
u8 U[4];
w4(U+0,u32(0x3098bf25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e60c:{NFSU2_TR(0x49e60c);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e611:{NFSU2_TR(0x49e611);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e616:{NFSU2_TR(0x49e616);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e617:{NFSU2_TR(0x49e617);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e61cull));
TAIL_STATIC(0x558540u,558);
}
B49e61c:L49e61c:{c.instructions+=3;NFSU2_TR(0x49e61c);
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
B49e61f:{NFSU2_TR(0x49e61f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e620:{NFSU2_TR(0x49e620);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e621:L49e621:{c.instructions+=1;NFSU2_TR(0x49e621);
u8 U[4];
w4(U+0,u32(0x2eb94b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e626:L49e626:{c.instructions+=2;NFSU2_TR(0x49e626);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49e629:{NFSU2_TR(0x49e629);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e62eull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49e62e:L49e62e:{c.instructions+=7;NFSU2_TR(0x49e62e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e62f:{NFSU2_TR(0x49e62f);
u8 U[4];
w4(U+0,u32(0x3098bf25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e634:{NFSU2_TR(0x49e634);
u8 U[4];
w4(U+0,u32(0x3098bf25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e639:{NFSU2_TR(0x49e639);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e63e:{NFSU2_TR(0x49e63e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e643:{NFSU2_TR(0x49e643);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e644:{NFSU2_TR(0x49e644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e649ull));
TAIL_STATIC(0x558540u,558);
}
B49e649:L49e649:{c.instructions+=1;NFSU2_TR(0x49e649);
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
B49e64c:L49e64c:{c.instructions+=2;NFSU2_TR(0x49e64c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e64d:{NFSU2_TR(0x49e64d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e650:L49e650:{c.instructions+=14;NFSU2_TR(0x49e650);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e654:{NFSU2_TR(0x49e654);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e655:{NFSU2_TR(0x49e655);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49e659:{NFSU2_TR(0x49e659);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e65a:{NFSU2_TR(0x49e65a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e65b:{NFSU2_TR(0x49e65b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49e65f:{NFSU2_TR(0x49e65f);
__builtin_memmove((R+24),(R+4),4);
}
B49e661:{NFSU2_TR(0x49e661);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49e665:{NFSU2_TR(0x49e665);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e666:{NFSU2_TR(0x49e666);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e667:{NFSU2_TR(0x49e667);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e668:{NFSU2_TR(0x49e668);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e669:{NFSU2_TR(0x49e669);
__builtin_memmove((R+4),(R+24),4);
}
B49e66b:{NFSU2_TR(0x49e66b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e670ull));
TAIL_STATIC(0x556020u,556);
}
B49e670:L49e670:{c.instructions+=2;NFSU2_TR(0x49e670);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e676:{NFSU2_TR(0x49e676);
if(r1(R+518)){{goto L49e6ec;}}
}
B49e678:L49e678:{c.instructions+=2;NFSU2_TR(0x49e678);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e67e:{NFSU2_TR(0x49e67e);
if(r1(R+518)){{goto L49e6ce;}}
}
B49e680:L49e680:{c.instructions+=2;NFSU2_TR(0x49e680);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xda5b8712ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xda5b8712ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xda5b8712ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49e686:{NFSU2_TR(0x49e686);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e749;}}
}
B49e68c:L49e68c:{c.instructions+=4;NFSU2_TR(0x49e68c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49e692:{NFSU2_TR(0x49e692);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e693:{NFSU2_TR(0x49e693);
__builtin_memmove((R+4),(R+24),4);
}
B49e695:{NFSU2_TR(0x49e695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e69aull));
TAIL_STATIC(0x51fe70u,51f);
}
B49e69a:L49e69a:{c.instructions+=7;NFSU2_TR(0x49e69a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B49e69d:{NFSU2_TR(0x49e69d);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e69f:{NFSU2_TR(0x49e69f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e6a0:{NFSU2_TR(0x49e6a0);
__builtin_memmove((R+0),gp(0x836370),4);
}
B49e6a5:{NFSU2_TR(0x49e6a5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
}
B49e6aa:{NFSU2_TR(0x49e6aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e6ab:{NFSU2_TR(0x49e6ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e6b0ull));
TAIL_STATIC(0x43dc00u,43d);
}
B49e6b0:L49e6b0:{c.instructions+=5;NFSU2_TR(0x49e6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49e6b6:{NFSU2_TR(0x49e6b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49e6b9:{NFSU2_TR(0x49e6b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e6ba:{NFSU2_TR(0x49e6ba);
__builtin_memmove((R+4),(R+24),4);
}
B49e6bc:{NFSU2_TR(0x49e6bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e6c1ull));
TAIL_STATIC(0x51fe70u,51f);
}
B49e6c1:L49e6c1:{c.instructions+=3;NFSU2_TR(0x49e6c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49e6c3:{NFSU2_TR(0x49e6c3);
__builtin_memmove((R+4),(R+0),4);
}
B49e6c5:{NFSU2_TR(0x49e6c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e6c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49e6c8:L49e6c8:{c.instructions+=4;NFSU2_TR(0x49e6c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e6c9:{NFSU2_TR(0x49e6c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e6ca:{NFSU2_TR(0x49e6ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49e6cb:{NFSU2_TR(0x49e6cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e6ce:L49e6ce:{c.instructions+=5;NFSU2_TR(0x49e6ce);
__builtin_memmove((R+28),gp(0x836370),4);
}
B49e6d4:{NFSU2_TR(0x49e6d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49e6d6:{NFSU2_TR(0x49e6d6);
w4(R+4,u32(0x10ull));
}
B49e6db:{NFSU2_TR(0x49e6db);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
}
B49e6e1:{NFSU2_TR(0x49e6e1);
s1(0x836375,u8(0x1ull));
}
B49e6e8:L49e6e8:{c.instructions+=1;NFSU2_TR(0x49e6e8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L49e6ea;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49e6e8u);}goto L49e6e8;}
}
B49e6ea:L49e6ea:{c.instructions+=1;NFSU2_TR(0x49e6ea);
{goto L49e736;}
}
B49e6ec:L49e6ec:{c.instructions+=2;NFSU2_TR(0x49e6ec);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xd79b07a0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xd79b07a0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xd79b07a0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B49e6f3:{NFSU2_TR(0x49e6f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e749;}}
}
B49e6f5:L49e6f5:{c.instructions+=4;NFSU2_TR(0x49e6f5);
__builtin_memmove((R+4),gp(0x836370),4);
}
B49e6fb:{NFSU2_TR(0x49e6fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
}
B49e701:{NFSU2_TR(0x49e701);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e702:{NFSU2_TR(0x49e702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e707ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49e1c0u);}goto L49e1c0;}
}
B49e707:L49e707:{c.instructions+=3;NFSU2_TR(0x49e707);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e70a:{NFSU2_TR(0x49e70a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49e70c:{NFSU2_TR(0x49e70c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e72a;}}
}
B49e70e:L49e70e:{c.instructions+=5;NFSU2_TR(0x49e70e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49e711:{NFSU2_TR(0x49e711);
u8 U[4];
w4(U+0,u32(0x7e77208cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e716:{NFSU2_TR(0x49e716);
u8 U[4];
w4(U+0,u32(0x78fd7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e71b:{NFSU2_TR(0x49e71b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e71c:{NFSU2_TR(0x49e71c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e721ull));
TAIL_STATIC(0x558430u,558);
}
B49e721:L49e721:{c.instructions+=5;NFSU2_TR(0x49e721);
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
B49e724:{NFSU2_TR(0x49e724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e725:{NFSU2_TR(0x49e725);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e726:{NFSU2_TR(0x49e726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49e727:{NFSU2_TR(0x49e727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e72a:L49e72a:{c.instructions+=3;NFSU2_TR(0x49e72a);
w1(R+0,u8(0x1ull));
}
B49e72c:{NFSU2_TR(0x49e72c);
__builtin_memmove(gp(0x836376),(R+0),1);
}
B49e731:{NFSU2_TR(0x49e731);
__builtin_memmove(gp(0x836374),(R+0),1);
}
B49e736:L49e736:{c.instructions+=5;NFSU2_TR(0x49e736);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e739:{NFSU2_TR(0x49e739);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e73b:{NFSU2_TR(0x49e73b);
u8 U[4];
w4(U+0,u32(0x78f268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e740:{NFSU2_TR(0x49e740);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e741:{NFSU2_TR(0x49e741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e746ull));
TAIL_STATIC(0x537980u,537);
}
B49e746:L49e746:{c.instructions+=1;NFSU2_TR(0x49e746);
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
B49e749:L49e749:{c.instructions+=4;NFSU2_TR(0x49e749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49e74a:{NFSU2_TR(0x49e74a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e74b:{NFSU2_TR(0x49e74b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49e74c:{NFSU2_TR(0x49e74c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e750:L49e750:{c.instructions+=3;NFSU2_TR(0x49e750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e751:{NFSU2_TR(0x49e751);
__builtin_memmove((R+24),(R+4),4);
}
B49e753:{NFSU2_TR(0x49e753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e758ull));
{goto L49e770;}
}
B49e758:L49e758:{c.instructions+=2;NFSU2_TR(0x49e758);
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
B49e75d:{NFSU2_TR(0x49e75d);
if(r1(R+518)){{goto L49e768;}}
}
B49e75f:L49e75f:{c.instructions+=2;NFSU2_TR(0x49e75f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e760:{NFSU2_TR(0x49e760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e765ull));
TAIL_STATIC(0x575630u,575);
}
B49e765:L49e765:{c.instructions+=1;NFSU2_TR(0x49e765);
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
B49e768:L49e768:{c.instructions+=3;NFSU2_TR(0x49e768);
__builtin_memmove((R+0),(R+24),4);
}
B49e76a:{NFSU2_TR(0x49e76a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e76b:{NFSU2_TR(0x49e76b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e770:L49e770:{c.instructions+=2;NFSU2_TR(0x49e770);
u8 U[4];
w4(U+0,u32(0x78fe18ull));
s4(u32(r4(R+4)),r4(U+0));
}
B49e776:{NFSU2_TR(0x49e776);
TAIL_STATIC(0x510d40u,510);
}
B49e780:L49e780:{c.instructions+=9;NFSU2_TR(0x49e780);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e782:{NFSU2_TR(0x49e782);
u8 U[4];
w4(U+0,u32(0x7729d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e787:{NFSU2_TR(0x49e787);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e78d:{NFSU2_TR(0x49e78d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e78e:{NFSU2_TR(0x49e78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e795:{NFSU2_TR(0x49e795);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e796:{NFSU2_TR(0x49e796);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e797:{NFSU2_TR(0x49e797);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e799:{NFSU2_TR(0x49e799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e79eull));
TAIL_STATIC(0x575620u,575);
}
B49e79e:L49e79e:{c.instructions+=7;NFSU2_TR(0x49e79e);
__builtin_memmove((R+24),(R+0),4);
}
B49e7a0:{NFSU2_TR(0x49e7a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e7a3:{NFSU2_TR(0x49e7a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e7a7:{NFSU2_TR(0x49e7a7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49e7a9:{NFSU2_TR(0x49e7a9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e7ab:{NFSU2_TR(0x49e7ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e7af:{NFSU2_TR(0x49e7af);
if(r1(R+518)){{goto L49e7c5;}}
}
B49e7b1:L49e7b1:{c.instructions+=4;NFSU2_TR(0x49e7b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e7b5:{NFSU2_TR(0x49e7b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e7b6:{NFSU2_TR(0x49e7b6);
__builtin_memmove((R+4),(R+24),4);
}
B49e7b8:{NFSU2_TR(0x49e7b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e7bdull));
TAIL_STATIC(0x551de0u,551);
}
B49e7bd:L49e7bd:{c.instructions+=2;NFSU2_TR(0x49e7bd);
u8 U[4];
w4(U+0,u32(0x78fe18ull));
s4(u32(r4(R+24)),r4(U+0));
}
B49e7c3:{NFSU2_TR(0x49e7c3);
__builtin_memmove((R+0),(R+24),4);
}
B49e7c5:L49e7c5:{c.instructions+=5;NFSU2_TR(0x49e7c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49e7c9:{NFSU2_TR(0x49e7c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e7ca:{NFSU2_TR(0x49e7ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e7d1:{NFSU2_TR(0x49e7d1);
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
B49e7d4:{NFSU2_TR(0x49e7d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e7e0:L49e7e0:{c.instructions+=3;NFSU2_TR(0x49e7e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e7e1:{NFSU2_TR(0x49e7e1);
__builtin_memmove((R+24),(R+4),4);
}
B49e7e3:{NFSU2_TR(0x49e7e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e7e8ull));
{goto L49e800;}
}
B49e7e8:L49e7e8:{c.instructions+=2;NFSU2_TR(0x49e7e8);
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
B49e7ed:{NFSU2_TR(0x49e7ed);
if(r1(R+518)){{goto L49e7f8;}}
}
B49e7ef:L49e7ef:{c.instructions+=2;NFSU2_TR(0x49e7ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e7f0:{NFSU2_TR(0x49e7f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e7f5ull));
TAIL_STATIC(0x575630u,575);
}
B49e7f5:L49e7f5:{c.instructions+=1;NFSU2_TR(0x49e7f5);
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
B49e7f8:L49e7f8:{c.instructions+=3;NFSU2_TR(0x49e7f8);
__builtin_memmove((R+0),(R+24),4);
}
B49e7fa:{NFSU2_TR(0x49e7fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49e7fb:{NFSU2_TR(0x49e7fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e800:L49e800:{c.instructions+=2;NFSU2_TR(0x49e800);
u8 U[4];
w4(U+0,u32(0x78fe38ull));
s4(u32(r4(R+4)),r4(U+0));
}
B49e806:{NFSU2_TR(0x49e806);
TAIL_STATIC(0x510d40u,510);
}
B49e810:L49e810:{c.instructions+=3;NFSU2_TR(0x49e810);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e814:{NFSU2_TR(0x49e814);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffff94ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e817:{NFSU2_TR(0x49e817);
if(r1(R+518)){{goto L49e825;}}
}
B49e819:L49e819:{c.instructions+=2;NFSU2_TR(0x49e819);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49e81c:{NFSU2_TR(0x49e81c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e845;}}
}
B49e81e:L49e81e:{c.instructions+=2;NFSU2_TR(0x49e81e);
u8 U[4];
w4(U+0,u32(0x9a58e01cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e823:{NFSU2_TR(0x49e823);
{goto L49e839;}
}
B49e825:L49e825:{c.instructions+=1;NFSU2_TR(0x49e825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e82aull));
TAIL_STATIC(0x582b60u,582);
}
B49e82a:L49e82a:{c.instructions+=3;NFSU2_TR(0x49e82a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49e830:{NFSU2_TR(0x49e830);
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
B49e832:{NFSU2_TR(0x49e832);
if(r1(R+518)){{goto L49e86e;}}
}
B49e834:L49e834:{c.instructions+=1;NFSU2_TR(0x49e834);
u8 U[4];
w4(U+0,u32(0x501cdf6full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e839:L49e839:{c.instructions+=1;NFSU2_TR(0x49e839);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e83eull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49e83e:L49e83e:{c.instructions+=3;NFSU2_TR(0x49e83e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e841:{NFSU2_TR(0x49e841);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e843:{NFSU2_TR(0x49e843);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e852;}}
}
B49e845:L49e845:{c.instructions+=2;NFSU2_TR(0x49e845);
u8 U[4];
w4(U+0,u32(0x906b132aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e84a:{NFSU2_TR(0x49e84a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e84full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49e84f:L49e84f:{c.instructions+=1;NFSU2_TR(0x49e84f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49e852:L49e852:{c.instructions+=8;NFSU2_TR(0x49e852);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e853:{NFSU2_TR(0x49e853);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49e857:{NFSU2_TR(0x49e857);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e859:{NFSU2_TR(0x49e859);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e85b:{NFSU2_TR(0x49e85b);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e860:{NFSU2_TR(0x49e860);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e865:{NFSU2_TR(0x49e865);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e866:{NFSU2_TR(0x49e866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e86bull));
TAIL_STATIC(0x558540u,558);
}
B49e86b:L49e86b:{c.instructions+=1;NFSU2_TR(0x49e86b);
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
B49e86e:L49e86e:{c.instructions+=1;NFSU2_TR(0x49e86e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49e870:L49e870:{c.instructions+=11;NFSU2_TR(0x49e870);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e871:{NFSU2_TR(0x49e871);
__builtin_memmove((R+20),(R+16),4);
}
B49e873:{NFSU2_TR(0x49e873);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B49e876:{NFSU2_TR(0x49e876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x280ull))));
}
B49e87c:{NFSU2_TR(0x49e87c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e87d:{NFSU2_TR(0x49e87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49e880:{NFSU2_TR(0x49e880);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e881:{NFSU2_TR(0x49e881);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49e883:{NFSU2_TR(0x49e883);
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
B49e885:{NFSU2_TR(0x49e885);
w4(R+4,u32(0x9full));
}
B49e88a:{NFSU2_TR(0x49e88a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B49e88e:L49e88e:{c.instructions+=1;NFSU2_TR(0x49e88e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L49e890;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49e88eu);}goto L49e88e;}
}
B49e890:L49e890:{c.instructions+=1;NFSU2_TR(0x49e890);
if(r1(R+518)){{goto L49ea0c;}}
}
B49e896:L49e896:{c.instructions+=3;NFSU2_TR(0x49e896);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e897:{NFSU2_TR(0x49e897);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e89b:{NFSU2_TR(0x49e89b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e8a0ull));
TAIL_STATIC(0x73ead0u,73e);
}
B49e8a0:L49e8a0:{c.instructions+=4;NFSU2_TR(0x49e8a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e8a1:{NFSU2_TR(0x49e8a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49e8a5:{NFSU2_TR(0x49e8a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e8a6:{NFSU2_TR(0x49e8a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e8abull));
TAIL_STATIC(0x43dbd0u,43d);
}
B49e8ab:L49e8ab:{c.instructions+=2;NFSU2_TR(0x49e8ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e8ac:{NFSU2_TR(0x49e8ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e8b1ull));
TAIL_STATIC(0x73f1f0u,73f);
}
B49e8b1:L49e8b1:{c.instructions+=3;NFSU2_TR(0x49e8b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e8b2:{NFSU2_TR(0x49e8b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e8b6:{NFSU2_TR(0x49e8b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e8bbull));
TAIL_STATIC(0x73ecd0u,73e);
}
B49e8bb:L49e8bb:{c.instructions+=3;NFSU2_TR(0x49e8bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e8bc:{NFSU2_TR(0x49e8bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e8c0:{NFSU2_TR(0x49e8c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e8c5ull));
TAIL_STATIC(0x73ece0u,73e);
}
B49e8c5:L49e8c5:{c.instructions+=3;NFSU2_TR(0x49e8c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e8c6:{NFSU2_TR(0x49e8c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e8ca:{NFSU2_TR(0x49e8ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e8cfull));
TAIL_STATIC(0x73f940u,73f);
}
B49e8cf:L49e8cf:{c.instructions+=3;NFSU2_TR(0x49e8cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e8d0:{NFSU2_TR(0x49e8d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e8d4:{NFSU2_TR(0x49e8d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e8d9ull));
TAIL_STATIC(0x73eae0u,73e);
}
B49e8d9:L49e8d9:{c.instructions+=3;NFSU2_TR(0x49e8d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e8da:{NFSU2_TR(0x49e8da);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e8de:{NFSU2_TR(0x49e8de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e8e3ull));
TAIL_STATIC(0x73eb70u,73e);
}
B49e8e3:L49e8e3:{c.instructions+=3;NFSU2_TR(0x49e8e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e8e4:{NFSU2_TR(0x49e8e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e8e8:{NFSU2_TR(0x49e8e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e8edull));
TAIL_STATIC(0x73eb00u,73e);
}
B49e8ed:L49e8ed:{c.instructions+=3;NFSU2_TR(0x49e8ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e8ee:{NFSU2_TR(0x49e8ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e8f2:{NFSU2_TR(0x49e8f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e8f7ull));
TAIL_STATIC(0x73eb20u,73e);
}
B49e8f7:L49e8f7:{c.instructions+=5;NFSU2_TR(0x49e8f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49e8fb:{NFSU2_TR(0x49e8fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B49e8fe:{NFSU2_TR(0x49e8fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e900:{NFSU2_TR(0x49e900);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e904:{NFSU2_TR(0x49e904);
if(r1(R+518)){{goto L49e922;}}
}
B49e906:L49e906:{c.instructions+=3;NFSU2_TR(0x49e906);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49e90a:{NFSU2_TR(0x49e90a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e90c:{NFSU2_TR(0x49e90c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49e912;}}
}
B49e90e:L49e90e:{c.instructions+=2;NFSU2_TR(0x49e90e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e910:{NFSU2_TR(0x49e910);
if(r1(R+518)){{goto L49e922;}}
}
B49e912:L49e912:{c.instructions+=2;NFSU2_TR(0x49e912);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49e91a:{NFSU2_TR(0x49e91a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49e922:L49e922:{c.instructions+=2;NFSU2_TR(0x49e922);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e923:{NFSU2_TR(0x49e923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e928ull));
TAIL_STATIC(0x73eb40u,73e);
}
B49e928:L49e928:{c.instructions+=3;NFSU2_TR(0x49e928);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e929:{NFSU2_TR(0x49e929);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e92d:{NFSU2_TR(0x49e92d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e932ull));
TAIL_STATIC(0x73eb90u,73e);
}
B49e932:L49e932:{c.instructions+=3;NFSU2_TR(0x49e932);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e933:{NFSU2_TR(0x49e933);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e937:{NFSU2_TR(0x49e937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e93cull));
TAIL_STATIC(0x73eba0u,73e);
}
B49e93c:L49e93c:{c.instructions+=3;NFSU2_TR(0x49e93c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e93d:{NFSU2_TR(0x49e93d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e941:{NFSU2_TR(0x49e941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e946ull));
TAIL_STATIC(0x73ebc0u,73e);
}
B49e946:L49e946:{c.instructions+=3;NFSU2_TR(0x49e946);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e947:{NFSU2_TR(0x49e947);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e94b:{NFSU2_TR(0x49e94b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e950ull));
TAIL_STATIC(0x73ebe0u,73e);
}
B49e950:L49e950:{c.instructions+=3;NFSU2_TR(0x49e950);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e951:{NFSU2_TR(0x49e951);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e955:{NFSU2_TR(0x49e955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e95aull));
TAIL_STATIC(0x73ec00u,73e);
}
B49e95a:L49e95a:{c.instructions+=3;NFSU2_TR(0x49e95a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e95b:{NFSU2_TR(0x49e95b);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e95f:{NFSU2_TR(0x49e95f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e964ull));
TAIL_STATIC(0x73ecb0u,73e);
}
B49e964:L49e964:{c.instructions+=3;NFSU2_TR(0x49e964);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e965:{NFSU2_TR(0x49e965);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e969:{NFSU2_TR(0x49e969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e96eull));
TAIL_STATIC(0x73ec90u,73e);
}
B49e96e:L49e96e:{c.instructions+=5;NFSU2_TR(0x49e96e);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49e975:{NFSU2_TR(0x49e975);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e976:{NFSU2_TR(0x49e976);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e977:{NFSU2_TR(0x49e977);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e97b:{NFSU2_TR(0x49e97b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e980ull));
TAIL_STATIC(0x73ec20u,73e);
}
B49e980:L49e980:{c.instructions+=5;NFSU2_TR(0x49e980);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e985:{NFSU2_TR(0x49e985);
u8 U[4];
w4(U+0,u32(u32(u32(0x1b0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B49e98c:{NFSU2_TR(0x49e98c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e98d:{NFSU2_TR(0x49e98d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e98e:{NFSU2_TR(0x49e98e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e993ull));
TAIL_STATIC(0x73ec70u,73e);
}
B49e993:L49e993:{c.instructions+=2;NFSU2_TR(0x49e993);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e994:{NFSU2_TR(0x49e994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e999ull));
TAIL_STATIC(0x73ed70u,73e);
}
B49e999:L49e999:{c.instructions+=3;NFSU2_TR(0x49e999);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e99a:{NFSU2_TR(0x49e99a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e9a1:{NFSU2_TR(0x49e9a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e9a6ull));
TAIL_STATIC(0x73edc0u,73e);
}
B49e9a6:L49e9a6:{c.instructions+=4;NFSU2_TR(0x49e9a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B49e9a9:{NFSU2_TR(0x49e9a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e9ad:{NFSU2_TR(0x49e9ad);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B49e9af:{NFSU2_TR(0x49e9af);
}
B49e9b0:L49e9b0:{c.instructions+=2;NFSU2_TR(0x49e9b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e9b1:{NFSU2_TR(0x49e9b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e9b6ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B49e9b6:L49e9b6:{c.instructions+=2;NFSU2_TR(0x49e9b6);
__builtin_memmove((R+4),(R+0),4);
}
B49e9b8:{NFSU2_TR(0x49e9b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e9bdull));
TAIL_STATIC(0x5847f0u,584);
}
B49e9bd:L49e9bd:{c.instructions+=3;NFSU2_TR(0x49e9bd);
__builtin_memmove((R+24),(R+0),4);
}
B49e9bf:{NFSU2_TR(0x49e9bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e9c1:{NFSU2_TR(0x49e9c1);
if(r1(R+518)){{goto L49e9d8;}}
}
B49e9c3:L49e9c3:{c.instructions+=5;NFSU2_TR(0x49e9c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49e9c7:{NFSU2_TR(0x49e9c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e9c8:{NFSU2_TR(0x49e9c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B49e9cb:{NFSU2_TR(0x49e9cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e9cc:{NFSU2_TR(0x49e9cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e9d1ull));
TAIL_STATIC(0x43dc30u,43d);
}
B49e9d1:L49e9d1:{c.instructions+=3;NFSU2_TR(0x49e9d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49e9d4:{NFSU2_TR(0x49e9d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49e9d6:{NFSU2_TR(0x49e9d6);
if(r1(R+518)){{goto L49e9e0;}}
}
B49e9d8:L49e9d8:{c.instructions+=3;NFSU2_TR(0x49e9d8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49e9d9:{NFSU2_TR(0x49e9d9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49e9dc:{NFSU2_TR(0x49e9dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49e9b0u);}goto L49e9b0;}}
}
B49e9de:L49e9de:{c.instructions+=1;NFSU2_TR(0x49e9de);
{goto L49e9ef;}
}
B49e9e0:L49e9e0:{c.instructions+=3;NFSU2_TR(0x49e9e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49e9e8:{NFSU2_TR(0x49e9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49e9eb:{NFSU2_TR(0x49e9eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49e9ef:L49e9ef:{c.instructions+=3;NFSU2_TR(0x49e9ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49e9f3:{NFSU2_TR(0x49e9f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49e9f4:{NFSU2_TR(0x49e9f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49e9f9ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B49e9f9:L49e9f9:{c.instructions+=2;NFSU2_TR(0x49e9f9);
__builtin_memmove((R+4),(R+0),4);
}
B49e9fb:{NFSU2_TR(0x49e9fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ea00ull));
TAIL_STATIC(0x584820u,584);
}
B49ea00:L49ea00:{c.instructions+=2;NFSU2_TR(0x49ea00);
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
B49ea02:{NFSU2_TR(0x49ea02);
if(r1(R+518)){{goto L49ea0c;}}
}
B49ea04:L49ea04:{c.instructions+=1;NFSU2_TR(0x49ea04);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49ea0c:L49ea0c:{c.instructions+=4;NFSU2_TR(0x49ea0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ea0f:{NFSU2_TR(0x49ea0f);
w4(R+4,u32(0x9full));
}
B49ea14:{NFSU2_TR(0x49ea14);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B49ea18:{NFSU2_TR(0x49ea18);
__builtin_memmove((R+28),(R+0),4);
}
B49ea1a:L49ea1a:{c.instructions+=1;NFSU2_TR(0x49ea1a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L49ea1c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49ea1au);}goto L49ea1a;}
}
B49ea1c:L49ea1c:{c.instructions+=5;NFSU2_TR(0x49ea1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ea1d:{NFSU2_TR(0x49ea1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ea1e:{NFSU2_TR(0x49ea1e);
__builtin_memmove((R+16),(R+20),4);
}
B49ea20:{NFSU2_TR(0x49ea20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49ea21:{NFSU2_TR(0x49ea21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ea30:L49ea30:{c.instructions+=6;NFSU2_TR(0x49ea30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ea34:{NFSU2_TR(0x49ea34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x27cull))));
}
B49ea3a:{NFSU2_TR(0x49ea3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ea3b:{NFSU2_TR(0x49ea3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ea3c:{NFSU2_TR(0x49ea3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ea3d:{NFSU2_TR(0x49ea3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ea42ull));
TAIL_STATIC(0x582b60u,582);
}
B49ea42:L49ea42:{c.instructions+=2;NFSU2_TR(0x49ea42);
__builtin_memmove((R+4),(R+0),4);
}
B49ea44:{NFSU2_TR(0x49ea44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ea49ull));
TAIL_STATIC(0x582bb0u,582);
}
B49ea49:L49ea49:{c.instructions+=4;NFSU2_TR(0x49ea49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ea4a:{NFSU2_TR(0x49ea4a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49ea4e:{NFSU2_TR(0x49ea4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ea4f:{NFSU2_TR(0x49ea4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ea54ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49e870u);}goto L49e870;}
}
B49ea54:L49ea54:{c.instructions+=5;NFSU2_TR(0x49ea54);
__builtin_memmove((R+24),(R+0),4);
}
B49ea56:{NFSU2_TR(0x49ea56);
u8 U[8];
w4(U+0,u32(u32(u32(0x290ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ea5d:{NFSU2_TR(0x49ea5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49ea60:{NFSU2_TR(0x49ea60);
w4(R+4,u32(0x9full));
}
B49ea65:{NFSU2_TR(0x49ea65);
__builtin_memmove((R+28),(R+0),4);
}
B49ea67:L49ea67:{c.instructions+=1;NFSU2_TR(0x49ea67);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L49ea69;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49ea67u);}goto L49ea67;}
}
B49ea69:L49ea69:{c.instructions+=4;NFSU2_TR(0x49ea69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ea6a:{NFSU2_TR(0x49ea6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ea6b:{NFSU2_TR(0x49ea6b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49ea71:{NFSU2_TR(0x49ea71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ea80:L49ea80:{c.instructions+=6;NFSU2_TR(0x49ea80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ea81:{NFSU2_TR(0x49ea81);
__builtin_memmove((R+24),(R+4),4);
}
B49ea83:{NFSU2_TR(0x49ea83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ea84:{NFSU2_TR(0x49ea84);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ea87:{NFSU2_TR(0x49ea87);
__builtin_memmove((R+4),(R+28),4);
}
B49ea89:{NFSU2_TR(0x49ea89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ea8eull));
TAIL_STATIC(0x51f530u,51f);
}
B49ea8e:L49ea8e:{c.instructions+=2;NFSU2_TR(0x49ea8e);
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
B49ea90:{NFSU2_TR(0x49ea90);
if(r1(R+518)){{goto L49eb0c;}}
}
B49ea92:L49ea92:{c.instructions+=3;NFSU2_TR(0x49ea92);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ea97:{NFSU2_TR(0x49ea97);
__builtin_memmove((R+4),(R+28),4);
}
B49ea99:{NFSU2_TR(0x49ea99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ea9eull));
TAIL_STATIC(0x51f530u,51f);
}
B49ea9e:L49ea9e:{c.instructions+=2;NFSU2_TR(0x49ea9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ea9f:{NFSU2_TR(0x49ea9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49eaa4ull));
TAIL_STATIC(0x43dc30u,43d);
}
B49eaa4:L49eaa4:{c.instructions+=3;NFSU2_TR(0x49eaa4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49eaa7:{NFSU2_TR(0x49eaa7);
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
B49eaa9:{NFSU2_TR(0x49eaa9);
if(r1(R+518)){{goto L49eb0c;}}
}
B49eaab:L49eaab:{c.instructions+=2;NFSU2_TR(0x49eaab);
u8 U[2];
__builtin_memmove((U+0),gp(0x850098),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B49eab2:{NFSU2_TR(0x49eab2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49eabb;}}
}
B49eab4:L49eab4:{c.instructions+=2;NFSU2_TR(0x49eab4);
u8 U[4];
w4(U+0,u32(0xa53035ddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eab9:{NFSU2_TR(0x49eab9);
{goto L49eae0;}
}
B49eabb:L49eabb:{c.instructions+=2;NFSU2_TR(0x49eabb);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49eac5:{NFSU2_TR(0x49eac5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49eadb;}}
}
B49eac7:L49eac7:{c.instructions+=4;NFSU2_TR(0x49eac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49eaca:{NFSU2_TR(0x49eaca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eacb:{NFSU2_TR(0x49eacb);
u8 U[4];
w4(U+0,u32(0x59337816ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ead0:{NFSU2_TR(0x49ead0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ead5ull));
TAIL_STATIC(0x55dda0u,55d);
}
B49ead5:L49ead5:{c.instructions+=4;NFSU2_TR(0x49ead5);
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
B49ead8:{NFSU2_TR(0x49ead8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ead9:{NFSU2_TR(0x49ead9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49eada:{NFSU2_TR(0x49eada);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49eadb:L49eadb:{c.instructions+=1;NFSU2_TR(0x49eadb);
u8 U[4];
w4(U+0,u32(0xd157c200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eae0:L49eae0:{c.instructions+=2;NFSU2_TR(0x49eae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49eae3:{NFSU2_TR(0x49eae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49eae8ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49eae8:L49eae8:{c.instructions+=10;NFSU2_TR(0x49eae8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eae9:{NFSU2_TR(0x49eae9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eaeb:{NFSU2_TR(0x49eaeb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eaed:{NFSU2_TR(0x49eaed);
u8 U[4];
w4(U+0,u32(0x59337816ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eaf2:{NFSU2_TR(0x49eaf2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eaf4:{NFSU2_TR(0x49eaf4);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eaf9:{NFSU2_TR(0x49eaf9);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eafe:{NFSU2_TR(0x49eafe);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb03:{NFSU2_TR(0x49eb03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb04:{NFSU2_TR(0x49eb04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49eb09ull));
TAIL_STATIC(0x558750u,558);
}
B49eb09:L49eb09:{c.instructions+=1;NFSU2_TR(0x49eb09);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49eb0c:L49eb0c:{c.instructions+=3;NFSU2_TR(0x49eb0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49eb0d:{NFSU2_TR(0x49eb0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49eb0e:{NFSU2_TR(0x49eb0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49eb10:L49eb10:{c.instructions+=6;NFSU2_TR(0x49eb10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb11:{NFSU2_TR(0x49eb11);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49eb15:{NFSU2_TR(0x49eb15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49eb1b:{NFSU2_TR(0x49eb1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb1c:{NFSU2_TR(0x49eb1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb1d:{NFSU2_TR(0x49eb1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49eb22ull));
TAIL_STATIC(0x540a60u,540);
}
B49eb22:L49eb22:{c.instructions+=7;NFSU2_TR(0x49eb22);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49eb26:{NFSU2_TR(0x49eb26);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B49eb28:{NFSU2_TR(0x49eb28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49eb2e:{NFSU2_TR(0x49eb2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49eb31:{NFSU2_TR(0x49eb31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49eb34:{NFSU2_TR(0x49eb34);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49eb36:{NFSU2_TR(0x49eb36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49eb67;}}
}
B49eb38:L49eb38:{c.instructions+=3;NFSU2_TR(0x49eb38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49eb3e:{NFSU2_TR(0x49eb3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb3f:{NFSU2_TR(0x49eb3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49eb44ull));
TAIL_STATIC(0x58ad20u,58a);
}
B49eb44:L49eb44:{c.instructions+=6;NFSU2_TR(0x49eb44);
__builtin_memmove((R+8),gp(0x7f44b4),4);
}
B49eb4a:{NFSU2_TR(0x49eb4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49eb4d:{NFSU2_TR(0x49eb4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb4e:{NFSU2_TR(0x49eb4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb4f:{NFSU2_TR(0x49eb4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb50:{NFSU2_TR(0x49eb50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49eb55ull));
TAIL_STATIC(0x537980u,537);
}
B49eb55:L49eb55:{c.instructions+=4;NFSU2_TR(0x49eb55);
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
B49eb58:{NFSU2_TR(0x49eb58);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb5a:{NFSU2_TR(0x49eb5a);
w4(R+4,u32(0x850080ull));
}
B49eb5f:{NFSU2_TR(0x49eb5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49eb64ull));
TAIL_STATIC(0x5031b0u,503);
}
B49eb64:L49eb64:{c.instructions+=3;NFSU2_TR(0x49eb64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49eb65:{NFSU2_TR(0x49eb65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49eb66:{NFSU2_TR(0x49eb66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49eb67:L49eb67:{c.instructions+=2;NFSU2_TR(0x49eb67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7567616dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49eb6c:{NFSU2_TR(0x49eb6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ebb5;}}
}
B49eb6e:L49eb6e:{c.instructions+=1;NFSU2_TR(0x49eb6e);
u8 U[4];
w4(U+0,u32(0x331f4f58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb73:L49eb73:{c.instructions+=2;NFSU2_TR(0x49eb73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49eb76:{NFSU2_TR(0x49eb76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49eb7bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49eb7b:L49eb7b:{c.instructions+=7;NFSU2_TR(0x49eb7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb7c:{NFSU2_TR(0x49eb7c);
u8 U[4];
w4(U+0,u32(0x23f1bfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb81:{NFSU2_TR(0x49eb81);
u8 U[4];
w4(U+0,u32(0x23f1bfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb86:{NFSU2_TR(0x49eb86);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb8b:{NFSU2_TR(0x49eb8b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb90:{NFSU2_TR(0x49eb90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eb91:{NFSU2_TR(0x49eb91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49eb96ull));
TAIL_STATIC(0x558540u,558);
}
B49eb96:L49eb96:{c.instructions+=7;NFSU2_TR(0x49eb96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49eb9c:{NFSU2_TR(0x49eb9c);
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B49eb9f:{NFSU2_TR(0x49eb9f);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49eba0:{NFSU2_TR(0x49eba0);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eba2:{NFSU2_TR(0x49eba2);
w4(R+4,u32(0x850080ull));
}
B49eba7:{NFSU2_TR(0x49eba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ebad:{NFSU2_TR(0x49ebad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ebb2ull));
TAIL_STATIC(0x5031b0u,503);
}
B49ebb2:L49ebb2:{c.instructions+=3;NFSU2_TR(0x49ebb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ebb3:{NFSU2_TR(0x49ebb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ebb4:{NFSU2_TR(0x49ebb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ebb5:L49ebb5:{c.instructions+=2;NFSU2_TR(0x49ebb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x66756c6cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ebba:{NFSU2_TR(0x49ebba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ebc3;}}
}
B49ebbc:L49ebbc:{c.instructions+=2;NFSU2_TR(0x49ebbc);
u8 U[4];
w4(U+0,u32(0xd155595aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ebc1:{NFSU2_TR(0x49ebc1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49eb73u);}goto L49eb73;}
}
B49ebc3:L49ebc3:{c.instructions+=2;NFSU2_TR(0x49ebc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70617373ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ebc8:{NFSU2_TR(0x49ebc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ebd7;}}
}
B49ebca:L49ebca:{c.instructions+=3;NFSU2_TR(0x49ebca);
__builtin_memmove(gp(0x836388),(R+28),4);
}
B49ebd0:{NFSU2_TR(0x49ebd0);
u8 U[4];
w4(U+0,u32(0xb5eaa702ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ebd5:{NFSU2_TR(0x49ebd5);
{goto L49ec23;}
}
B49ebd7:L49ebd7:{c.instructions+=2;NFSU2_TR(0x49ebd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61737461ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ebdc:{NFSU2_TR(0x49ebdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ebe5;}}
}
B49ebde:L49ebde:{c.instructions+=2;NFSU2_TR(0x49ebde);
u8 U[4];
w4(U+0,u32(0x1c098ddfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ebe3:{NFSU2_TR(0x49ebe3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49eb73u);}goto L49eb73;}
}
B49ebe5:L49ebe5:{c.instructions+=2;NFSU2_TR(0x49ebe5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x696e7670ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ebea:{NFSU2_TR(0x49ebea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ec1e;}}
}
B49ebec:L49ebec:{c.instructions+=3;NFSU2_TR(0x49ebec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49ebef:{NFSU2_TR(0x49ebef);
u8 U[4];
w4(U+0,u32(0x4ad41e75ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ebf4:{NFSU2_TR(0x49ebf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ebf9ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49ebf9:L49ebf9:{c.instructions+=6;NFSU2_TR(0x49ebf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ebfa:{NFSU2_TR(0x49ebfa);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ebfc:{NFSU2_TR(0x49ebfc);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec01:{NFSU2_TR(0x49ec01);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec06:{NFSU2_TR(0x49ec06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec07:{NFSU2_TR(0x49ec07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ec0cull));
TAIL_STATIC(0x5585e0u,558);
}
B49ec0c:L49ec0c:{c.instructions+=4;NFSU2_TR(0x49ec0c);
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
B49ec0f:{NFSU2_TR(0x49ec0f);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec11:{NFSU2_TR(0x49ec11);
w4(R+4,u32(0x850080ull));
}
B49ec16:{NFSU2_TR(0x49ec16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ec1bull));
TAIL_STATIC(0x5031b0u,503);
}
B49ec1b:L49ec1b:{c.instructions+=3;NFSU2_TR(0x49ec1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ec1c:{NFSU2_TR(0x49ec1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ec1d:{NFSU2_TR(0x49ec1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ec1e:L49ec1e:{c.instructions+=1;NFSU2_TR(0x49ec1e);
u8 U[4];
w4(U+0,u32(0x7aa591ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec23:L49ec23:{c.instructions+=2;NFSU2_TR(0x49ec23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49ec26:{NFSU2_TR(0x49ec26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ec2bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49ec2b:L49ec2b:{c.instructions+=7;NFSU2_TR(0x49ec2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec2c:{NFSU2_TR(0x49ec2c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec2e:{NFSU2_TR(0x49ec2e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec30:{NFSU2_TR(0x49ec30);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec35:{NFSU2_TR(0x49ec35);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec3a:{NFSU2_TR(0x49ec3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec3b:{NFSU2_TR(0x49ec3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ec40ull));
TAIL_STATIC(0x558540u,558);
}
B49ec40:L49ec40:{c.instructions+=4;NFSU2_TR(0x49ec40);
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
B49ec43:{NFSU2_TR(0x49ec43);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec45:{NFSU2_TR(0x49ec45);
w4(R+4,u32(0x850080ull));
}
B49ec4a:{NFSU2_TR(0x49ec4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ec4full));
TAIL_STATIC(0x5031b0u,503);
}
B49ec4f:L49ec4f:{c.instructions+=3;NFSU2_TR(0x49ec4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ec50:{NFSU2_TR(0x49ec50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ec51:{NFSU2_TR(0x49ec51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ec60:L49ec60:{c.instructions+=5;NFSU2_TR(0x49ec60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec61:{NFSU2_TR(0x49ec61);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49ec65:{NFSU2_TR(0x49ec65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ec6b:{NFSU2_TR(0x49ec6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ec6d:{NFSU2_TR(0x49ec6d);
if(r1(R+518)){{goto L49ec82;}}
}
B49ec6f:L49ec6f:{c.instructions+=2;NFSU2_TR(0x49ec6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec70:{NFSU2_TR(0x49ec70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ec75ull));
TAIL_STATIC(0x540a60u,540);
}
B49ec75:L49ec75:{c.instructions+=2;NFSU2_TR(0x49ec75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49ec78:{NFSU2_TR(0x49ec78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49ec82:L49ec82:{c.instructions+=4;NFSU2_TR(0x49ec82);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ec86:{NFSU2_TR(0x49ec86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ec89:{NFSU2_TR(0x49ec89);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ec8b:{NFSU2_TR(0x49ec8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ece9;}}
}
B49ec8d:L49ec8d:{c.instructions+=3;NFSU2_TR(0x49ec8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ec93:{NFSU2_TR(0x49ec93);
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
B49ec95:{NFSU2_TR(0x49ec95);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49ecd4;}}
}
B49ec97:L49ec97:{c.instructions+=2;NFSU2_TR(0x49ec97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ec99:{NFSU2_TR(0x49ec99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ec9eull));
TAIL_STATIC(0x58f740u,58f);
}
B49ec9e:L49ec9e:{c.instructions+=4;NFSU2_TR(0x49ec9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49eca1:{NFSU2_TR(0x49eca1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49eca4:{NFSU2_TR(0x49eca4);
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
B49eca6:{NFSU2_TR(0x49eca6);
if(r1(R+518)){{goto L49ecb5;}}
}
B49eca8:L49eca8:{c.instructions+=2;NFSU2_TR(0x49eca8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eca9:{NFSU2_TR(0x49eca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ecaeull));
TAIL_STATIC(0x73d8d0u,73d);
}
B49ecae:L49ecae:{c.instructions+=3;NFSU2_TR(0x49ecae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49ecb1:{NFSU2_TR(0x49ecb1);
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
B49ecb3:{NFSU2_TR(0x49ecb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ecd4;}}
}
B49ecb5:L49ecb5:{c.instructions+=5;NFSU2_TR(0x49ecb5);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ecb7:{NFSU2_TR(0x49ecb7);
w4(R+4,u32(0x850080ull));
}
B49ecbc:{NFSU2_TR(0x49ecbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49ecc6:{NFSU2_TR(0x49ecc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49eccd:{NFSU2_TR(0x49eccd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ecd2ull));
TAIL_STATIC(0x5031b0u,503);
}
B49ecd2:L49ecd2:{c.instructions+=2;NFSU2_TR(0x49ecd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ecd3:{NFSU2_TR(0x49ecd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ecd4:L49ecd4:{c.instructions+=4;NFSU2_TR(0x49ecd4);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ecd6:{NFSU2_TR(0x49ecd6);
w4(R+4,u32(0x850080ull));
}
B49ecdb:{NFSU2_TR(0x49ecdb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49ece2:{NFSU2_TR(0x49ece2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ece7ull));
TAIL_STATIC(0x5031b0u,503);
}
B49ece7:L49ece7:{c.instructions+=2;NFSU2_TR(0x49ece7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ece8:{NFSU2_TR(0x49ece8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ece9:L49ece9:{c.instructions+=5;NFSU2_TR(0x49ece9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ecea:{NFSU2_TR(0x49ecea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49eced:{NFSU2_TR(0x49eced);
u8 U[4];
w4(U+0,u32(0xef94affdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ecf2:{NFSU2_TR(0x49ecf2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49ecf9:{NFSU2_TR(0x49ecf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ecfeull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49ecfe:L49ecfe:{c.instructions+=7;NFSU2_TR(0x49ecfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ecff:{NFSU2_TR(0x49ecff);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ed01:{NFSU2_TR(0x49ed01);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ed03:{NFSU2_TR(0x49ed03);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ed08:{NFSU2_TR(0x49ed08);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ed0d:{NFSU2_TR(0x49ed0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ed0e:{NFSU2_TR(0x49ed0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ed13ull));
TAIL_STATIC(0x558540u,558);
}
B49ed13:L49ed13:{c.instructions+=6;NFSU2_TR(0x49ed13);
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
B49ed16:{NFSU2_TR(0x49ed16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ed17:{NFSU2_TR(0x49ed17);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ed19:{NFSU2_TR(0x49ed19);
w4(R+4,u32(0x850080ull));
}
B49ed1e:{NFSU2_TR(0x49ed1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ed24:{NFSU2_TR(0x49ed24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ed29ull));
TAIL_STATIC(0x5031b0u,503);
}
B49ed29:L49ed29:{c.instructions+=2;NFSU2_TR(0x49ed29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ed2a:{NFSU2_TR(0x49ed2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ed30:L49ed30:{c.instructions+=6;NFSU2_TR(0x49ed30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ed31:{NFSU2_TR(0x49ed31);
__builtin_memmove((R+24),(R+4),4);
}
B49ed33:{NFSU2_TR(0x49ed33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ed39:{NFSU2_TR(0x49ed39);
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
B49ed3c:{NFSU2_TR(0x49ed3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ed42:{NFSU2_TR(0x49ed42);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L49ed7b;}}
}
B49ed44:L49ed44:{c.instructions+=1;NFSU2_TR(0x49ed44);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x49edc0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ed4b:L49ed4b:{c.instructions+=3;NFSU2_TR(0x49ed4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ed51:{NFSU2_TR(0x49ed51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ed57:{NFSU2_TR(0x49ed57);
{goto L49ed7b;}
}
B49ed59:L49ed59:{c.instructions+=2;NFSU2_TR(0x49ed59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49ed5f:{NFSU2_TR(0x49ed5f);
{goto L49ed75;}
}
B49ed61:L49ed61:{c.instructions+=3;NFSU2_TR(0x49ed61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ed67:{NFSU2_TR(0x49ed67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ed6d:{NFSU2_TR(0x49ed6d);
{goto L49ed7b;}
}
B49ed6f:L49ed6f:{c.instructions+=1;NFSU2_TR(0x49ed6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49ed75:L49ed75:{c.instructions+=1;NFSU2_TR(0x49ed75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ed7b:L49ed7b:{c.instructions+=2;NFSU2_TR(0x49ed7b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B49ed81:{NFSU2_TR(0x49ed81);
if(r1(R+518)){{goto L49edbd;}}
}
B49ed83:L49ed83:{c.instructions+=2;NFSU2_TR(0x49ed83);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ed85:{NFSU2_TR(0x49ed85);
if(r1(R+518)){{goto L49ed97;}}
}
B49ed87:L49ed87:{c.instructions+=4;NFSU2_TR(0x49ed87);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ed89:{NFSU2_TR(0x49ed89);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ed8e:{NFSU2_TR(0x49ed8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ed8f:{NFSU2_TR(0x49ed8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ed94ull));
TAIL_STATIC(0x51cf70u,51c);
}
B49ed94:L49ed94:{c.instructions+=1;NFSU2_TR(0x49ed94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49ed97:L49ed97:{c.instructions+=5;NFSU2_TR(0x49ed97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ed9d:{NFSU2_TR(0x49ed9d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ed9f:{NFSU2_TR(0x49ed9f);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eda4:{NFSU2_TR(0x49eda4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eda5:{NFSU2_TR(0x49eda5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49edaaull));
TAIL_STATIC(0x51cf70u,51c);
}
B49edaa:L49edaa:{c.instructions+=5;NFSU2_TR(0x49edaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49edb0:{NFSU2_TR(0x49edb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49edb3:{NFSU2_TR(0x49edb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49edb4:{NFSU2_TR(0x49edb4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49edb5:{NFSU2_TR(0x49edb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49edbaull));
TAIL_STATIC(0x52cec0u,52c);
}
B49edba:L49edba:{c.instructions+=1;NFSU2_TR(0x49edba);
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
B49edbd:L49edbd:{c.instructions+=2;NFSU2_TR(0x49edbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49edbe:{NFSU2_TR(0x49edbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49edd0:L49edd0:{c.instructions+=2;NFSU2_TR(0x49edd0);
u8 U[2];
__builtin_memmove((U+0),gp(0x850098),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B49edd7:{NFSU2_TR(0x49edd7);
if(r1(R+518)){{goto L49edee;}}
}
B49edd9:L49edd9:{c.instructions+=3;NFSU2_TR(0x49edd9);
__builtin_memmove((R+0),gp(0x8500ca),1);
}
B49edde:{NFSU2_TR(0x49edde);
s4(0x836388,u32(0x0ull));
}
B49ede8:{NFSU2_TR(0x49ede8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49edee:L49edee:{c.instructions+=1;NFSU2_TR(0x49edee);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49ea80u);}goto L49ea80;}
}
B49ee00:L49ee00:{c.instructions+=5;NFSU2_TR(0x49ee00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee01:{NFSU2_TR(0x49ee01);
__builtin_memmove((R+24),(R+4),4);
}
B49ee03:{NFSU2_TR(0x49ee03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x155ull))));
__builtin_memmove((R+0),(U+0),4);
}
B49ee09:{NFSU2_TR(0x49ee09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee0a:{NFSU2_TR(0x49ee0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ee0full));
TAIL_STATIC(0x43dbb0u,43d);
}
B49ee0f:L49ee0f:{c.instructions+=3;NFSU2_TR(0x49ee0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49ee12:{NFSU2_TR(0x49ee12);
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
B49ee14:{NFSU2_TR(0x49ee14);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L49ee36;}}
}
B49ee16:L49ee16:{c.instructions+=7;NFSU2_TR(0x49ee16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ee19:{NFSU2_TR(0x49ee19);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee1b:{NFSU2_TR(0x49ee1b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee1d:{NFSU2_TR(0x49ee1d);
u8 U[4];
w4(U+0,u32(0xd29a1a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee22:{NFSU2_TR(0x49ee22);
u8 U[4];
w4(U+0,u32(0x78fd7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee27:{NFSU2_TR(0x49ee27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee28:{NFSU2_TR(0x49ee28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ee2dull));
TAIL_STATIC(0x558430u,558);
}
B49ee2d:L49ee2d:{c.instructions+=4;NFSU2_TR(0x49ee2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B49ee30:{NFSU2_TR(0x49ee30);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49ee32:{NFSU2_TR(0x49ee32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ee33:{NFSU2_TR(0x49ee33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ee36:L49ee36:{c.instructions+=3;NFSU2_TR(0x49ee36);
w1(R+0,u8(0x1ull));
}
B49ee38:{NFSU2_TR(0x49ee38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ee39:{NFSU2_TR(0x49ee39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ee40:L49ee40:{c.instructions+=12;NFSU2_TR(0x49ee40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee41:{NFSU2_TR(0x49ee41);
__builtin_memmove((R+20),(R+16),4);
}
B49ee43:{NFSU2_TR(0x49ee43);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B49ee46:{NFSU2_TR(0x49ee46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50cull))));
}
B49ee4c:{NFSU2_TR(0x49ee4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee4d:{NFSU2_TR(0x49ee4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49ee50:{NFSU2_TR(0x49ee50);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ee52:{NFSU2_TR(0x49ee52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee53:{NFSU2_TR(0x49ee53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee54:{NFSU2_TR(0x49ee54);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ee58:{NFSU2_TR(0x49ee58);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49ee5d:{NFSU2_TR(0x49ee5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ee69;}}
}
B49ee5f:L49ee5f:{c.instructions+=2;NFSU2_TR(0x49ee5f);
w4(R+12,u32(0x836014ull));
}
B49ee64:{NFSU2_TR(0x49ee64);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49ee69:L49ee69:{c.instructions+=2;NFSU2_TR(0x49ee69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee6a:{NFSU2_TR(0x49ee6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ee6full));
TAIL_STATIC(0x582b60u,582);
}
B49ee6f:L49ee6f:{c.instructions+=2;NFSU2_TR(0x49ee6f);
__builtin_memmove((R+4),(R+0),4);
}
B49ee71:{NFSU2_TR(0x49ee71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ee76ull));
TAIL_STATIC(0x582bb0u,582);
}
B49ee76:L49ee76:{c.instructions+=4;NFSU2_TR(0x49ee76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee77:{NFSU2_TR(0x49ee77);
u8 U[4];
w4(U+0,u32(u32(u32(0x2a0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49ee7e:{NFSU2_TR(0x49ee7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ee7f:{NFSU2_TR(0x49ee7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ee84ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49e870u);}goto L49e870;}
}
B49ee84:L49ee84:{c.instructions+=3;NFSU2_TR(0x49ee84);
__builtin_memmove((R+24),(R+0),4);
}
B49ee86:{NFSU2_TR(0x49ee86);
w4(R+4,u32(0x9full));
}
B49ee8b:{NFSU2_TR(0x49ee8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B49ee8f:L49ee8f:{c.instructions+=1;NFSU2_TR(0x49ee8f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L49ee91;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49ee8fu);}goto L49ee8f;}
}
B49ee91:L49ee91:{c.instructions+=4;NFSU2_TR(0x49ee91);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ee95:{NFSU2_TR(0x49ee95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49ee98:{NFSU2_TR(0x49ee98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ee9a:{NFSU2_TR(0x49ee9a);
if(r1(R+518)){{goto L49eec0;}}
}
B49ee9c:L49ee9c:{c.instructions+=7;NFSU2_TR(0x49ee9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49eea0:{NFSU2_TR(0x49eea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49eea3:{NFSU2_TR(0x49eea3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eea4:{NFSU2_TR(0x49eea4);
u8 U[4];
w4(U+0,u32(0xa424c082ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eea9:{NFSU2_TR(0x49eea9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eeae:{NFSU2_TR(0x49eeae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eeaf:{NFSU2_TR(0x49eeaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49eeb4ull));
TAIL_STATIC(0x558330u,558);
}
B49eeb4:L49eeb4:{c.instructions+=7;NFSU2_TR(0x49eeb4);
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
B49eeb7:{NFSU2_TR(0x49eeb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49eeb8:{NFSU2_TR(0x49eeb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49eeb9:{NFSU2_TR(0x49eeb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49eeba:{NFSU2_TR(0x49eeba);
__builtin_memmove((R+16),(R+20),4);
}
B49eebc:{NFSU2_TR(0x49eebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49eebd:{NFSU2_TR(0x49eebd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49eec0:L49eec0:{c.instructions+=2;NFSU2_TR(0x49eec0);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49eec5:{NFSU2_TR(0x49eec5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B49eec7:L49eec7:{c.instructions+=4;NFSU2_TR(0x49eec7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8358f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B49eece:{NFSU2_TR(0x49eece);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eecf:{NFSU2_TR(0x49eecf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eed0:{NFSU2_TR(0x49eed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49eed5ull));
TAIL_STATIC(0x43dc30u,43d);
}
B49eed5:L49eed5:{c.instructions+=3;NFSU2_TR(0x49eed5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49eed8:{NFSU2_TR(0x49eed8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49eeda:{NFSU2_TR(0x49eeda);
if(r1(R+518)){{goto L49eee8;}}
}
B49eedc:L49eedc:{c.instructions+=3;NFSU2_TR(0x49eedc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B49eedd:{NFSU2_TR(0x49eedd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49eee0:{NFSU2_TR(0x49eee0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49eec7u);}goto L49eec7;}}
}
B49eee2:L49eee2:{c.instructions+=2;NFSU2_TR(0x49eee2);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49eee6:{NFSU2_TR(0x49eee6);
{goto L49ef02;}
}
B49eee8:L49eee8:{c.instructions+=3;NFSU2_TR(0x49eee8);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49eeec:{NFSU2_TR(0x49eeec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49eeee:{NFSU2_TR(0x49eeee);
if(r1(R+518)){{goto L49ef00;}}
}
B49eef0:L49eef0:{c.instructions+=4;NFSU2_TR(0x49eef0);
__builtin_memmove((R+0),gp(0x835ff4),4);
}
B49eef5:{NFSU2_TR(0x49eef5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49eef7:{NFSU2_TR(0x49eef7);
__builtin_memmove((R+4),(R+518),1);
}
B49eefa:{NFSU2_TR(0x49eefa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83590cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49ef00:L49ef00:{c.instructions+=1;NFSU2_TR(0x49ef00);
w1(R+0,u8(0x1ull));
}
B49ef02:L49ef02:{c.instructions+=4;NFSU2_TR(0x49ef02);
w4(R+8,u32(m1(0x850080)));
}
B49ef09:{NFSU2_TR(0x49ef09);
__builtin_memmove((R+4),gp(0x8358f0),4);
}
B49ef0f:{NFSU2_TR(0x49ef0f);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B49ef11:{NFSU2_TR(0x49ef11);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L49ef45;}}
}
B49ef13:L49ef13:{c.instructions+=2;NFSU2_TR(0x49ef13);
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
B49ef15:{NFSU2_TR(0x49ef15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ef45;}}
}
B49ef17:L49ef17:{c.instructions+=6;NFSU2_TR(0x49ef17);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8358f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B49ef1e:{NFSU2_TR(0x49ef1e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B49ef1f:{NFSU2_TR(0x49ef1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ef20:{NFSU2_TR(0x49ef20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ef21:{NFSU2_TR(0x49ef21);
__builtin_memmove(gp(0x8358f0),(R+4),4);
}
B49ef27:{NFSU2_TR(0x49ef27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ef2cull));
TAIL_STATIC(0x43dbd0u,43d);
}
B49ef2c:L49ef2c:{c.instructions+=6;NFSU2_TR(0x49ef2c);
__builtin_memmove((R+0),gp(0x835ff4),4);
}
B49ef31:{NFSU2_TR(0x49ef31);
__builtin_memmove((R+4),gp(0x8358f0),4);
}
B49ef37:{NFSU2_TR(0x49ef37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49ef3a:{NFSU2_TR(0x49ef3a);
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
B49ef3c:{NFSU2_TR(0x49ef3c);
__builtin_memmove((R+0),(R+518),1);
}
B49ef3f:{NFSU2_TR(0x49ef3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83590bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49ef45:L49ef45:{c.instructions+=6;NFSU2_TR(0x49ef45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ef46:{NFSU2_TR(0x49ef46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ef47:{NFSU2_TR(0x49ef47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49ef48:{NFSU2_TR(0x49ef48);
__builtin_memmove((R+16),(R+20),4);
}
B49ef4a:{NFSU2_TR(0x49ef4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49ef4b:{NFSU2_TR(0x49ef4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ef50:L49ef50:{c.instructions+=6;NFSU2_TR(0x49ef50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ef54:{NFSU2_TR(0x49ef54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ef55:{NFSU2_TR(0x49ef55);
__builtin_memmove((R+24),(R+4),4);
}
B49ef57:{NFSU2_TR(0x49ef57);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x92cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49ef5d:{NFSU2_TR(0x49ef5d);
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
B49ef5f:{NFSU2_TR(0x49ef5f);
if(r1(R+518)){{goto L49efd8;}}
}
B49ef61:L49ef61:{c.instructions+=10;NFSU2_TR(0x49ef61);
w1(R+4,u8(0x1ull));
}
B49ef63:{NFSU2_TR(0x49ef63);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1199ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49ef69:{NFSU2_TR(0x49ef69);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49ef6f:{NFSU2_TR(0x49ef6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49ef72:{NFSU2_TR(0x49ef72);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
}
B49ef77:{NFSU2_TR(0x49ef77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ef78:{NFSU2_TR(0x49ef78);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49ef7f:{NFSU2_TR(0x49ef7f);
u8 U[4];
w4(U+0,u32(0x7f4500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ef84:{NFSU2_TR(0x49ef84);
__builtin_memmove(gp(0x8363c0),(R+4),4);
}
B49ef8a:{NFSU2_TR(0x49ef8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ef8full));
TAIL_STATIC(0x43dbd0u,43d);
}
B49ef8f:L49ef8f:{c.instructions+=4;NFSU2_TR(0x49ef8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ef92:{NFSU2_TR(0x49ef92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49ef95:{NFSU2_TR(0x49ef95);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ef97:{NFSU2_TR(0x49ef97);
if(r1(R+518)){{goto L49efa7;}}
}
B49ef99:L49ef99:{c.instructions+=4;NFSU2_TR(0x49ef99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49ef9c:{NFSU2_TR(0x49ef9c);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49efa1:{NFSU2_TR(0x49efa1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49efa2:{NFSU2_TR(0x49efa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49efa7ull));
TAIL_STATIC(0x51ee80u,51e);
}
B49efa7:L49efa7:{c.instructions+=6;NFSU2_TR(0x49efa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xfb226531ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49efae:{NFSU2_TR(0x49efae);
s1(0x838528,u8(0x0ull));
}
B49efb5:{NFSU2_TR(0x49efb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49efb8:{NFSU2_TR(0x49efb8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49efba:{NFSU2_TR(0x49efba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49efbb:{NFSU2_TR(0x49efbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49efc0ull));
TAIL_STATIC(0x537950u,537);
}
B49efc0:L49efc0:{c.instructions+=6;NFSU2_TR(0x49efc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49efc3:{NFSU2_TR(0x49efc3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49efc5:{NFSU2_TR(0x49efc5);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49efca:{NFSU2_TR(0x49efca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49efcb:{NFSU2_TR(0x49efcb);
u8 U[4];
w4(U+0,u32(0x78fe90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49efd0:{NFSU2_TR(0x49efd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49efd5ull));
TAIL_STATIC(0x555eb0u,555);
}
B49efd5:L49efd5:{c.instructions+=1;NFSU2_TR(0x49efd5);
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
B49efd8:L49efd8:{c.instructions+=2;NFSU2_TR(0x49efd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49efd9:{NFSU2_TR(0x49efd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49efe0:L49efe0:{c.instructions+=5;NFSU2_TR(0x49efe0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49efe4:{NFSU2_TR(0x49efe4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49efe6:{NFSU2_TR(0x49efe6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49efe7:{NFSU2_TR(0x49efe7);
__builtin_memmove((R+24),(R+4),4);
}
B49efe9:{NFSU2_TR(0x49efe9);
if(r1(R+518)){TAIL_STATIC(0x49f0dcu,49f);}
}
B49efef:L49efef:{c.instructions+=7;NFSU2_TR(0x49efef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49eff2:{NFSU2_TR(0x49eff2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eff3:{NFSU2_TR(0x49eff3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eff4:{NFSU2_TR(0x49eff4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eff5:{NFSU2_TR(0x49eff5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49eff7:{NFSU2_TR(0x49eff7);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49effc:{NFSU2_TR(0x49effc);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x49f001u,49f);
}
XIT:NFSU2_TR_EXIT(0x49e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
