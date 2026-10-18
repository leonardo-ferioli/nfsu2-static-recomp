#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40b(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_415(u8* __restrict R,Cpu& c);
u32 body_417(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_41d(u8* __restrict R,Cpu& c);
u32 body_428(u8* __restrict R,Cpu& c);
u32 body_42a(u8* __restrict R,Cpu& c);
u32 body_42c(u8* __restrict R,Cpu& c);
u32 body_42d(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x42e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x42e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_42e(u8* __restrict R,Cpu& c);
u32 page_42e(Cpu& c){return body_42e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_42e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x42e003:goto L42e003;
case 0x42e006:c.instructions+=13;goto B42e006;
case 0x42e009:c.instructions+=12;goto B42e009;
case 0x42e00c:c.instructions+=11;goto B42e00c;
case 0x42e00e:c.instructions+=10;goto B42e00e;
case 0x42e010:c.instructions+=9;goto B42e010;
case 0x42e013:c.instructions+=8;goto B42e013;
case 0x42e014:c.instructions+=7;goto B42e014;
case 0x42e015:c.instructions+=6;goto B42e015;
case 0x42e016:c.instructions+=5;goto B42e016;
case 0x42e017:c.instructions+=4;goto B42e017;
case 0x42e01a:c.instructions+=3;goto B42e01a;
case 0x42e01b:c.instructions+=2;goto B42e01b;
case 0x42e01c:c.instructions+=1;goto B42e01c;
case 0x42e021:goto L42e021;
case 0x42e02b:c.instructions+=2;goto B42e02b;
case 0x42e031:c.instructions+=1;goto B42e031;
case 0x42e033:goto L42e033;
case 0x42e035:c.instructions+=2;goto B42e035;
case 0x42e037:c.instructions+=1;goto B42e037;
case 0x42e03c:goto L42e03c;
case 0x42e042:c.instructions+=2;goto B42e042;
case 0x42e044:c.instructions+=1;goto B42e044;
case 0x42e046:goto L42e046;
case 0x42e048:c.instructions+=1;goto B42e048;
case 0x42e04a:goto L42e04a;
case 0x42e04d:c.instructions+=13;goto B42e04d;
case 0x42e050:c.instructions+=12;goto B42e050;
case 0x42e053:c.instructions+=11;goto B42e053;
case 0x42e055:c.instructions+=10;goto B42e055;
case 0x42e057:c.instructions+=9;goto B42e057;
case 0x42e05a:c.instructions+=8;goto B42e05a;
case 0x42e05b:c.instructions+=7;goto B42e05b;
case 0x42e05c:c.instructions+=6;goto B42e05c;
case 0x42e05d:c.instructions+=5;goto B42e05d;
case 0x42e05e:c.instructions+=4;goto B42e05e;
case 0x42e061:c.instructions+=3;goto B42e061;
case 0x42e062:c.instructions+=2;goto B42e062;
case 0x42e063:c.instructions+=1;goto B42e063;
case 0x42e068:goto L42e068;
case 0x42e06e:c.instructions+=1;goto B42e06e;
case 0x42e078:goto L42e078;
case 0x42e07b:c.instructions+=6;goto B42e07b;
case 0x42e080:c.instructions+=5;goto B42e080;
case 0x42e086:c.instructions+=4;goto B42e086;
case 0x42e08c:c.instructions+=3;goto B42e08c;
case 0x42e092:c.instructions+=2;goto B42e092;
case 0x42e098:c.instructions+=1;goto B42e098;
case 0x42e09b:goto L42e09b;
case 0x42e09f:c.instructions+=3;goto B42e09f;
case 0x42e0a0:c.instructions+=2;goto B42e0a0;
case 0x42e0a2:c.instructions+=1;goto B42e0a2;
case 0x42e0a7:goto L42e0a7;
case 0x42e0a8:c.instructions+=4;goto B42e0a8;
case 0x42e0a9:c.instructions+=3;goto B42e0a9;
case 0x42e0aa:c.instructions+=2;goto B42e0aa;
case 0x42e0ad:c.instructions+=1;goto B42e0ad;
case 0x42e0b0:goto L42e0b0;
case 0x42e0b3:c.instructions+=6;goto B42e0b3;
case 0x42e0b8:c.instructions+=5;goto B42e0b8;
case 0x42e0ba:c.instructions+=4;goto B42e0ba;
case 0x42e0bb:c.instructions+=3;goto B42e0bb;
case 0x42e0bd:c.instructions+=2;goto B42e0bd;
case 0x42e0c1:c.instructions+=1;goto B42e0c1;
case 0x42e0c3:goto L42e0c3;
case 0x42e0c5:c.instructions+=3;goto B42e0c5;
case 0x42e0c6:c.instructions+=2;goto B42e0c6;
case 0x42e0c9:c.instructions+=1;goto B42e0c9;
case 0x42e0cc:goto L42e0cc;
case 0x42e0d1:c.instructions+=12;goto B42e0d1;
case 0x42e0d8:c.instructions+=11;goto B42e0d8;
case 0x42e0de:c.instructions+=10;goto B42e0de;
case 0x42e0df:c.instructions+=9;goto B42e0df;
case 0x42e0e6:c.instructions+=8;goto B42e0e6;
case 0x42e0e7:c.instructions+=7;goto B42e0e7;
case 0x42e0ed:c.instructions+=6;goto B42e0ed;
case 0x42e0f1:c.instructions+=5;goto B42e0f1;
case 0x42e0f9:c.instructions+=4;goto B42e0f9;
case 0x42e0ff:c.instructions+=3;goto B42e0ff;
case 0x42e100:c.instructions+=2;goto B42e100;
case 0x42e104:c.instructions+=1;goto B42e104;
case 0x42e110:goto L42e110;
case 0x42e116:c.instructions+=2;goto B42e116;
case 0x42e11b:c.instructions+=1;goto B42e11b;
case 0x42e120:goto L42e120;
case 0x42e126:c.instructions+=3;goto B42e126;
case 0x42e128:c.instructions+=2;goto B42e128;
case 0x42e12b:c.instructions+=1;goto B42e12b;
case 0x42e12d:goto L42e12d;
case 0x42e12f:c.instructions+=1;goto B42e12f;
case 0x42e131:goto L42e131;
case 0x42e133:goto L42e133;
case 0x42e139:c.instructions+=18;goto B42e139;
case 0x42e13f:c.instructions+=17;goto B42e13f;
case 0x42e143:c.instructions+=16;goto B42e143;
case 0x42e145:c.instructions+=15;goto B42e145;
case 0x42e147:c.instructions+=14;goto B42e147;
case 0x42e149:c.instructions+=13;goto B42e149;
case 0x42e14c:c.instructions+=12;goto B42e14c;
case 0x42e14d:c.instructions+=11;goto B42e14d;
case 0x42e14f:c.instructions+=10;goto B42e14f;
case 0x42e151:c.instructions+=9;goto B42e151;
case 0x42e156:c.instructions+=8;goto B42e156;
case 0x42e157:c.instructions+=7;goto B42e157;
case 0x42e159:c.instructions+=6;goto B42e159;
case 0x42e15a:c.instructions+=5;goto B42e15a;
case 0x42e15b:c.instructions+=4;goto B42e15b;
case 0x42e15c:c.instructions+=3;goto B42e15c;
case 0x42e15e:c.instructions+=2;goto B42e15e;
case 0x42e161:c.instructions+=1;goto B42e161;
case 0x42e166:goto L42e166;
case 0x42e168:c.instructions+=2;goto B42e168;
case 0x42e16a:c.instructions+=1;goto B42e16a;
case 0x42e170:goto L42e170;
case 0x42e175:c.instructions+=2;goto B42e175;
case 0x42e179:c.instructions+=1;goto B42e179;
case 0x42e17b:goto L42e17b;
case 0x42e181:c.instructions+=5;goto B42e181;
case 0x42e185:c.instructions+=4;goto B42e185;
case 0x42e18b:c.instructions+=3;goto B42e18b;
case 0x42e18e:c.instructions+=2;goto B42e18e;
case 0x42e192:c.instructions+=1;goto B42e192;
case 0x42e194:goto L42e194;
case 0x42e197:c.instructions+=2;goto B42e197;
case 0x42e199:c.instructions+=1;goto B42e199;
case 0x42e19b:goto L42e19b;
case 0x42e1a2:c.instructions+=4;goto B42e1a2;
case 0x42e1a5:c.instructions+=3;goto B42e1a5;
case 0x42e1a8:c.instructions+=2;goto B42e1a8;
case 0x42e1af:c.instructions+=1;goto B42e1af;
case 0x42e1b1:goto L42e1b1;
case 0x42e1b4:c.instructions+=4;goto B42e1b4;
case 0x42e1b6:c.instructions+=3;goto B42e1b6;
case 0x42e1b9:c.instructions+=2;goto B42e1b9;
case 0x42e1c0:c.instructions+=1;goto B42e1c0;
case 0x42e1c2:goto L42e1c2;
case 0x42e1c4:goto L42e1c4;
case 0x42e1c6:c.instructions+=5;goto B42e1c6;
case 0x42e1c9:c.instructions+=4;goto B42e1c9;
case 0x42e1cb:c.instructions+=3;goto B42e1cb;
case 0x42e1cc:c.instructions+=2;goto B42e1cc;
case 0x42e1cd:c.instructions+=1;goto B42e1cd;
case 0x42e1d2:goto L42e1d2;
case 0x42e1d4:c.instructions+=2;goto B42e1d4;
case 0x42e1d7:c.instructions+=1;goto B42e1d7;
case 0x42e1d9:goto L42e1d9;
case 0x42e1dd:c.instructions+=2;goto B42e1dd;
case 0x42e1de:c.instructions+=1;goto B42e1de;
case 0x42e1e3:goto L42e1e3;
case 0x42e1e9:c.instructions+=7;goto B42e1e9;
case 0x42e1eb:c.instructions+=6;goto B42e1eb;
case 0x42e1f0:c.instructions+=5;goto B42e1f0;
case 0x42e1f7:c.instructions+=4;goto B42e1f7;
case 0x42e1f8:c.instructions+=3;goto B42e1f8;
case 0x42e1fa:c.instructions+=2;goto B42e1fa;
case 0x42e1fe:c.instructions+=1;goto B42e1fe;
case 0x42e203:goto L42e203;
case 0x42e207:c.instructions+=7;goto B42e207;
case 0x42e20b:c.instructions+=6;goto B42e20b;
case 0x42e20c:c.instructions+=5;goto B42e20c;
case 0x42e20e:c.instructions+=4;goto B42e20e;
case 0x42e212:c.instructions+=3;goto B42e212;
case 0x42e213:c.instructions+=2;goto B42e213;
case 0x42e215:c.instructions+=1;goto B42e215;
case 0x42e21a:goto L42e21a;
case 0x42e21e:c.instructions+=6;goto B42e21e;
case 0x42e220:c.instructions+=5;goto B42e220;
case 0x42e221:c.instructions+=4;goto B42e221;
case 0x42e222:c.instructions+=3;goto B42e222;
case 0x42e226:c.instructions+=2;goto B42e226;
case 0x42e227:c.instructions+=1;goto B42e227;
case 0x42e22c:goto L42e22c;
case 0x42e22f:c.instructions+=2;goto B42e22f;
case 0x42e231:c.instructions+=1;goto B42e231;
case 0x42e233:goto L42e233;
case 0x42e237:goto L42e237;
case 0x42e23b:c.instructions+=4;goto B42e23b;
case 0x42e23c:c.instructions+=3;goto B42e23c;
case 0x42e23f:c.instructions+=2;goto B42e23f;
case 0x42e243:c.instructions+=1;goto B42e243;
case 0x42e249:goto L42e249;
case 0x42e24a:c.instructions+=6;goto B42e24a;
case 0x42e24b:c.instructions+=5;goto B42e24b;
case 0x42e24c:c.instructions+=4;goto B42e24c;
case 0x42e24e:c.instructions+=3;goto B42e24e;
case 0x42e24f:c.instructions+=2;goto B42e24f;
case 0x42e252:c.instructions+=1;goto B42e252;
case 0x42e255:goto L42e255;
case 0x42e25a:c.instructions+=14;goto B42e25a;
case 0x42e25f:c.instructions+=13;goto B42e25f;
case 0x42e263:c.instructions+=12;goto B42e263;
case 0x42e266:c.instructions+=11;goto B42e266;
case 0x42e26a:c.instructions+=10;goto B42e26a;
case 0x42e26e:c.instructions+=9;goto B42e26e;
case 0x42e272:c.instructions+=8;goto B42e272;
case 0x42e278:c.instructions+=7;goto B42e278;
case 0x42e27c:c.instructions+=6;goto B42e27c;
case 0x42e282:c.instructions+=5;goto B42e282;
case 0x42e286:c.instructions+=4;goto B42e286;
case 0x42e288:c.instructions+=3;goto B42e288;
case 0x42e28a:c.instructions+=2;goto B42e28a;
case 0x42e28d:c.instructions+=1;goto B42e28d;
case 0x42e28f:goto L42e28f;
case 0x42e293:c.instructions+=3;goto B42e293;
case 0x42e295:c.instructions+=2;goto B42e295;
case 0x42e299:c.instructions+=1;goto B42e299;
case 0x42e29b:goto L42e29b;
case 0x42e29f:goto L42e29f;
case 0x42e2a3:c.instructions+=8;goto B42e2a3;
case 0x42e2a7:c.instructions+=7;goto B42e2a7;
case 0x42e2a8:c.instructions+=6;goto B42e2a8;
case 0x42e2a9:c.instructions+=5;goto B42e2a9;
case 0x42e2ad:c.instructions+=4;goto B42e2ad;
case 0x42e2ae:c.instructions+=3;goto B42e2ae;
case 0x42e2af:c.instructions+=2;goto B42e2af;
case 0x42e2b0:c.instructions+=1;goto B42e2b0;
case 0x42e2b5:goto L42e2b5;
case 0x42e2b6:c.instructions+=5;goto B42e2b6;
case 0x42e2b7:c.instructions+=4;goto B42e2b7;
case 0x42e2b8:c.instructions+=3;goto B42e2b8;
case 0x42e2b9:c.instructions+=2;goto B42e2b9;
case 0x42e2bc:c.instructions+=1;goto B42e2bc;
case 0x42e2c0:goto L42e2c0;
case 0x42e2c1:c.instructions+=13;goto B42e2c1;
case 0x42e2c3:c.instructions+=12;goto B42e2c3;
case 0x42e2c6:c.instructions+=11;goto B42e2c6;
case 0x42e2c9:c.instructions+=10;goto B42e2c9;
case 0x42e2ca:c.instructions+=9;goto B42e2ca;
case 0x42e2cc:c.instructions+=8;goto B42e2cc;
case 0x42e2cf:c.instructions+=7;goto B42e2cf;
case 0x42e2d1:c.instructions+=6;goto B42e2d1;
case 0x42e2d3:c.instructions+=5;goto B42e2d3;
case 0x42e2d4:c.instructions+=4;goto B42e2d4;
case 0x42e2d5:c.instructions+=3;goto B42e2d5;
case 0x42e2d9:c.instructions+=2;goto B42e2d9;
case 0x42e2dd:c.instructions+=1;goto B42e2dd;
case 0x42e2e3:goto L42e2e3;
case 0x42e2e7:c.instructions+=1;goto B42e2e7;
case 0x42e2f0:goto L42e2f0;
case 0x42e2f6:c.instructions+=7;goto B42e2f6;
case 0x42e2fb:c.instructions+=6;goto B42e2fb;
case 0x42e302:c.instructions+=5;goto B42e302;
case 0x42e308:c.instructions+=4;goto B42e308;
case 0x42e30e:c.instructions+=3;goto B42e30e;
case 0x42e313:c.instructions+=2;goto B42e313;
case 0x42e317:c.instructions+=1;goto B42e317;
case 0x42e31c:goto L42e31c;
case 0x42e320:c.instructions+=4;goto B42e320;
case 0x42e325:c.instructions+=3;goto B42e325;
case 0x42e327:c.instructions+=2;goto B42e327;
case 0x42e32a:c.instructions+=1;goto B42e32a;
case 0x42e32c:goto L42e32c;
case 0x42e331:goto L42e331;
case 0x42e335:c.instructions+=5;goto B42e335;
case 0x42e336:c.instructions+=4;goto B42e336;
case 0x42e33a:c.instructions+=3;goto B42e33a;
case 0x42e33b:c.instructions+=2;goto B42e33b;
case 0x42e33d:c.instructions+=1;goto B42e33d;
case 0x42e342:goto L42e342;
case 0x42e346:c.instructions+=2;goto B42e346;
case 0x42e348:c.instructions+=1;goto B42e348;
case 0x42e34e:goto L42e34e;
case 0x42e352:c.instructions+=2;goto B42e352;
case 0x42e354:c.instructions+=1;goto B42e354;
case 0x42e35a:goto L42e35a;
case 0x42e35d:c.instructions+=6;goto B42e35d;
case 0x42e35f:c.instructions+=5;goto B42e35f;
case 0x42e365:c.instructions+=4;goto B42e365;
case 0x42e369:c.instructions+=3;goto B42e369;
case 0x42e36c:c.instructions+=2;goto B42e36c;
case 0x42e36e:c.instructions+=1;goto B42e36e;
case 0x42e374:goto L42e374;
case 0x42e379:c.instructions+=1;goto B42e379;
case 0x42e37f:goto L42e37f;
case 0x42e384:c.instructions+=1;goto B42e384;
case 0x42e38a:goto L42e38a;
case 0x42e38c:c.instructions+=13;goto B42e38c;
case 0x42e38e:c.instructions+=12;goto B42e38e;
case 0x42e394:c.instructions+=11;goto B42e394;
case 0x42e399:c.instructions+=10;goto B42e399;
case 0x42e39b:c.instructions+=9;goto B42e39b;
case 0x42e39d:c.instructions+=8;goto B42e39d;
case 0x42e3a1:c.instructions+=7;goto B42e3a1;
case 0x42e3a4:c.instructions+=6;goto B42e3a4;
case 0x42e3a6:c.instructions+=5;goto B42e3a6;
case 0x42e3a9:c.instructions+=4;goto B42e3a9;
case 0x42e3ab:c.instructions+=3;goto B42e3ab;
case 0x42e3ae:c.instructions+=2;goto B42e3ae;
case 0x42e3b0:c.instructions+=1;goto B42e3b0;
case 0x42e3b6:goto L42e3b6;
case 0x42e3b8:c.instructions+=20;goto B42e3b8;
case 0x42e3bc:c.instructions+=19;goto B42e3bc;
case 0x42e3bf:c.instructions+=18;goto B42e3bf;
case 0x42e3c5:c.instructions+=17;goto B42e3c5;
case 0x42e3c9:c.instructions+=16;goto B42e3c9;
case 0x42e3cd:c.instructions+=15;goto B42e3cd;
case 0x42e3d2:c.instructions+=14;goto B42e3d2;
case 0x42e3d5:c.instructions+=13;goto B42e3d5;
case 0x42e3d9:c.instructions+=12;goto B42e3d9;
case 0x42e3db:c.instructions+=11;goto B42e3db;
case 0x42e3df:c.instructions+=10;goto B42e3df;
case 0x42e3e5:c.instructions+=9;goto B42e3e5;
case 0x42e3e9:c.instructions+=8;goto B42e3e9;
case 0x42e3f0:c.instructions+=7;goto B42e3f0;
case 0x42e3f4:c.instructions+=6;goto B42e3f4;
case 0x42e3f8:c.instructions+=5;goto B42e3f8;
case 0x42e3fc:c.instructions+=4;goto B42e3fc;
case 0x42e3fd:c.instructions+=3;goto B42e3fd;
case 0x42e3fe:c.instructions+=2;goto B42e3fe;
case 0x42e400:c.instructions+=1;goto B42e400;
case 0x42e405:goto L42e405;
case 0x42e407:c.instructions+=1;goto B42e407;
case 0x42e409:goto L42e409;
case 0x42e40e:c.instructions+=2;goto B42e40e;
case 0x42e410:c.instructions+=1;goto B42e410;
case 0x42e412:goto L42e412;
case 0x42e415:c.instructions+=3;goto B42e415;
case 0x42e418:c.instructions+=2;goto B42e418;
case 0x42e41a:c.instructions+=1;goto B42e41a;
case 0x42e41c:goto L42e41c;
case 0x42e420:c.instructions+=4;goto B42e420;
case 0x42e422:c.instructions+=3;goto B42e422;
case 0x42e425:c.instructions+=2;goto B42e425;
case 0x42e429:c.instructions+=1;goto B42e429;
case 0x42e42b:goto L42e42b;
case 0x42e42f:c.instructions+=1;goto B42e42f;
case 0x42e433:goto L42e433;
case 0x42e437:c.instructions+=4;goto B42e437;
case 0x42e438:c.instructions+=3;goto B42e438;
case 0x42e439:c.instructions+=2;goto B42e439;
case 0x42e43b:c.instructions+=1;goto B42e43b;
case 0x42e440:goto L42e440;
case 0x42e443:c.instructions+=1;goto B42e443;
case 0x42e445:goto L42e445;
case 0x42e449:c.instructions+=4;goto B42e449;
case 0x42e44a:c.instructions+=3;goto B42e44a;
case 0x42e44d:c.instructions+=2;goto B42e44d;
case 0x42e451:c.instructions+=1;goto B42e451;
case 0x42e457:goto L42e457;
case 0x42e459:c.instructions+=6;goto B42e459;
case 0x42e45a:c.instructions+=5;goto B42e45a;
case 0x42e45b:c.instructions+=4;goto B42e45b;
case 0x42e45c:c.instructions+=3;goto B42e45c;
case 0x42e45e:c.instructions+=2;goto B42e45e;
case 0x42e45f:c.instructions+=1;goto B42e45f;
case 0x42e462:goto L42e462;
case 0x42e467:c.instructions+=13;goto B42e467;
case 0x42e46a:c.instructions+=12;goto B42e46a;
case 0x42e46d:c.instructions+=11;goto B42e46d;
case 0x42e471:c.instructions+=10;goto B42e471;
case 0x42e473:c.instructions+=9;goto B42e473;
case 0x42e474:c.instructions+=8;goto B42e474;
case 0x42e478:c.instructions+=7;goto B42e478;
case 0x42e47a:c.instructions+=6;goto B42e47a;
case 0x42e480:c.instructions+=5;goto B42e480;
case 0x42e483:c.instructions+=4;goto B42e483;
case 0x42e484:c.instructions+=3;goto B42e484;
case 0x42e485:c.instructions+=2;goto B42e485;
case 0x42e486:c.instructions+=1;goto B42e486;
case 0x42e48b:goto L42e48b;
case 0x42e48c:c.instructions+=5;goto B42e48c;
case 0x42e48d:c.instructions+=4;goto B42e48d;
case 0x42e48e:c.instructions+=3;goto B42e48e;
case 0x42e490:c.instructions+=2;goto B42e490;
case 0x42e491:c.instructions+=1;goto B42e491;
case 0x42e4a0:goto L42e4a0;
case 0x42e4a5:c.instructions+=5;goto B42e4a5;
case 0x42e4a8:c.instructions+=4;goto B42e4a8;
case 0x42e4aa:c.instructions+=3;goto B42e4aa;
case 0x42e4ab:c.instructions+=2;goto B42e4ab;
case 0x42e4ad:c.instructions+=1;goto B42e4ad;
case 0x42e4af:goto L42e4af;
case 0x42e4b1:c.instructions+=3;goto B42e4b1;
case 0x42e4b2:c.instructions+=2;goto B42e4b2;
case 0x42e4b5:c.instructions+=1;goto B42e4b5;
case 0x42e4b8:goto L42e4b8;
case 0x42e4b9:c.instructions+=4;goto B42e4b9;
case 0x42e4ba:c.instructions+=3;goto B42e4ba;
case 0x42e4bb:c.instructions+=2;goto B42e4bb;
case 0x42e4bd:c.instructions+=1;goto B42e4bd;
case 0x42e4c1:goto L42e4c1;
case 0x42e4c6:c.instructions+=17;goto B42e4c6;
case 0x42e4cc:c.instructions+=16;goto B42e4cc;
case 0x42e4d3:c.instructions+=15;goto B42e4d3;
case 0x42e4d7:c.instructions+=14;goto B42e4d7;
case 0x42e4db:c.instructions+=13;goto B42e4db;
case 0x42e4df:c.instructions+=12;goto B42e4df;
case 0x42e4e3:c.instructions+=11;goto B42e4e3;
case 0x42e4e9:c.instructions+=10;goto B42e4e9;
case 0x42e4ed:c.instructions+=9;goto B42e4ed;
case 0x42e4f2:c.instructions+=8;goto B42e4f2;
case 0x42e4f6:c.instructions+=7;goto B42e4f6;
case 0x42e4fa:c.instructions+=6;goto B42e4fa;
case 0x42e4fe:c.instructions+=5;goto B42e4fe;
case 0x42e505:c.instructions+=4;goto B42e505;
case 0x42e50b:c.instructions+=3;goto B42e50b;
case 0x42e511:c.instructions+=2;goto B42e511;
case 0x42e515:c.instructions+=1;goto B42e515;
case 0x42e51a:goto L42e51a;
case 0x42e51e:c.instructions+=3;goto B42e51e;
case 0x42e520:c.instructions+=2;goto B42e520;
case 0x42e523:c.instructions+=1;goto B42e523;
case 0x42e525:goto L42e525;
case 0x42e527:c.instructions+=1;goto B42e527;
case 0x42e529:goto L42e529;
case 0x42e52b:goto L42e52b;
case 0x42e52f:c.instructions+=8;goto B42e52f;
case 0x42e533:c.instructions+=7;goto B42e533;
case 0x42e537:c.instructions+=6;goto B42e537;
case 0x42e538:c.instructions+=5;goto B42e538;
case 0x42e539:c.instructions+=4;goto B42e539;
case 0x42e53b:c.instructions+=3;goto B42e53b;
case 0x42e53d:c.instructions+=2;goto B42e53d;
case 0x42e53f:c.instructions+=1;goto B42e53f;
case 0x42e544:goto L42e544;
case 0x42e546:c.instructions+=2;goto B42e546;
case 0x42e548:c.instructions+=1;goto B42e548;
case 0x42e54a:goto L42e54a;
case 0x42e54f:c.instructions+=2;goto B42e54f;
case 0x42e551:c.instructions+=1;goto B42e551;
case 0x42e553:goto L42e553;
case 0x42e555:c.instructions+=1;goto B42e555;
case 0x42e55a:goto L42e55a;
case 0x42e55d:c.instructions+=3;goto B42e55d;
case 0x42e560:c.instructions+=2;goto B42e560;
case 0x42e562:c.instructions+=1;goto B42e562;
case 0x42e564:goto L42e564;
case 0x42e566:c.instructions+=1;goto B42e566;
case 0x42e569:goto L42e569;
case 0x42e56d:c.instructions+=5;goto B42e56d;
case 0x42e571:c.instructions+=4;goto B42e571;
case 0x42e572:c.instructions+=3;goto B42e572;
case 0x42e573:c.instructions+=2;goto B42e573;
case 0x42e575:c.instructions+=1;goto B42e575;
case 0x42e57a:goto L42e57a;
case 0x42e57c:c.instructions+=2;goto B42e57c;
case 0x42e57f:c.instructions+=1;goto B42e57f;
case 0x42e581:goto L42e581;
case 0x42e583:c.instructions+=5;goto B42e583;
case 0x42e586:c.instructions+=4;goto B42e586;
case 0x42e588:c.instructions+=3;goto B42e588;
case 0x42e589:c.instructions+=2;goto B42e589;
case 0x42e58a:c.instructions+=1;goto B42e58a;
case 0x42e58f:goto L42e58f;
case 0x42e591:c.instructions+=2;goto B42e591;
case 0x42e594:c.instructions+=1;goto B42e594;
case 0x42e596:goto L42e596;
case 0x42e599:c.instructions+=11;goto B42e599;
case 0x42e59d:c.instructions+=10;goto B42e59d;
case 0x42e5a3:c.instructions+=9;goto B42e5a3;
case 0x42e5aa:c.instructions+=8;goto B42e5aa;
case 0x42e5ac:c.instructions+=7;goto B42e5ac;
case 0x42e5ad:c.instructions+=6;goto B42e5ad;
case 0x42e5b1:c.instructions+=5;goto B42e5b1;
case 0x42e5b2:c.instructions+=4;goto B42e5b2;
case 0x42e5b4:c.instructions+=3;goto B42e5b4;
case 0x42e5b8:c.instructions+=2;goto B42e5b8;
case 0x42e5bc:c.instructions+=1;goto B42e5bc;
case 0x42e5c1:goto L42e5c1;
case 0x42e5c3:c.instructions+=1;goto B42e5c3;
case 0x42e5c5:goto L42e5c5;
case 0x42e5c9:goto L42e5c9;
case 0x42e5ca:c.instructions+=3;goto B42e5ca;
case 0x42e5cd:c.instructions+=2;goto B42e5cd;
case 0x42e5d1:c.instructions+=1;goto B42e5d1;
case 0x42e5d7:goto L42e5d7;
case 0x42e5d8:c.instructions+=6;goto B42e5d8;
case 0x42e5d9:c.instructions+=5;goto B42e5d9;
case 0x42e5da:c.instructions+=4;goto B42e5da;
case 0x42e5dc:c.instructions+=3;goto B42e5dc;
case 0x42e5dd:c.instructions+=2;goto B42e5dd;
case 0x42e5e0:c.instructions+=1;goto B42e5e0;
case 0x42e5e3:goto L42e5e3;
case 0x42e5e8:c.instructions+=13;goto B42e5e8;
case 0x42e5ec:c.instructions+=12;goto B42e5ec;
case 0x42e5ef:c.instructions+=11;goto B42e5ef;
case 0x42e5f3:c.instructions+=10;goto B42e5f3;
case 0x42e5f5:c.instructions+=9;goto B42e5f5;
case 0x42e5f6:c.instructions+=8;goto B42e5f6;
case 0x42e5fa:c.instructions+=7;goto B42e5fa;
case 0x42e5fc:c.instructions+=6;goto B42e5fc;
case 0x42e602:c.instructions+=5;goto B42e602;
case 0x42e605:c.instructions+=4;goto B42e605;
case 0x42e606:c.instructions+=3;goto B42e606;
case 0x42e607:c.instructions+=2;goto B42e607;
case 0x42e608:c.instructions+=1;goto B42e608;
case 0x42e60d:goto L42e60d;
case 0x42e60e:c.instructions+=5;goto B42e60e;
case 0x42e60f:c.instructions+=4;goto B42e60f;
case 0x42e610:c.instructions+=3;goto B42e610;
case 0x42e611:c.instructions+=2;goto B42e611;
case 0x42e614:c.instructions+=1;goto B42e614;
case 0x42e620:goto L42e620;
case 0x42e625:c.instructions+=5;goto B42e625;
case 0x42e628:c.instructions+=4;goto B42e628;
case 0x42e62a:c.instructions+=3;goto B42e62a;
case 0x42e62b:c.instructions+=2;goto B42e62b;
case 0x42e62d:c.instructions+=1;goto B42e62d;
case 0x42e62f:goto L42e62f;
case 0x42e631:c.instructions+=3;goto B42e631;
case 0x42e632:c.instructions+=2;goto B42e632;
case 0x42e635:c.instructions+=1;goto B42e635;
case 0x42e638:goto L42e638;
case 0x42e63c:c.instructions+=11;goto B42e63c;
case 0x42e642:c.instructions+=10;goto B42e642;
case 0x42e643:c.instructions+=9;goto B42e643;
case 0x42e644:c.instructions+=8;goto B42e644;
case 0x42e648:c.instructions+=7;goto B42e648;
case 0x42e64e:c.instructions+=6;goto B42e64e;
case 0x42e64f:c.instructions+=5;goto B42e64f;
case 0x42e650:c.instructions+=4;goto B42e650;
case 0x42e653:c.instructions+=3;goto B42e653;
case 0x42e658:c.instructions+=2;goto B42e658;
case 0x42e65d:c.instructions+=1;goto B42e65d;
case 0x42e662:goto L42e662;
case 0x42e664:c.instructions+=8;goto B42e664;
case 0x42e66a:c.instructions+=7;goto B42e66a;
case 0x42e66f:c.instructions+=6;goto B42e66f;
case 0x42e676:c.instructions+=5;goto B42e676;
case 0x42e67c:c.instructions+=4;goto B42e67c;
case 0x42e682:c.instructions+=3;goto B42e682;
case 0x42e687:c.instructions+=2;goto B42e687;
case 0x42e68b:c.instructions+=1;goto B42e68b;
case 0x42e690:goto L42e690;
case 0x42e694:c.instructions+=3;goto B42e694;
case 0x42e696:c.instructions+=2;goto B42e696;
case 0x42e699:c.instructions+=1;goto B42e699;
case 0x42e69b:goto L42e69b;
case 0x42e69d:c.instructions+=1;goto B42e69d;
case 0x42e69f:goto L42e69f;
case 0x42e6a1:goto L42e6a1;
case 0x42e6a7:c.instructions+=11;goto B42e6a7;
case 0x42e6ac:c.instructions+=10;goto B42e6ac;
case 0x42e6b0:c.instructions+=9;goto B42e6b0;
case 0x42e6b4:c.instructions+=8;goto B42e6b4;
case 0x42e6b5:c.instructions+=7;goto B42e6b5;
case 0x42e6b6:c.instructions+=6;goto B42e6b6;
case 0x42e6b7:c.instructions+=5;goto B42e6b7;
case 0x42e6bb:c.instructions+=4;goto B42e6bb;
case 0x42e6be:c.instructions+=3;goto B42e6be;
case 0x42e6bf:c.instructions+=2;goto B42e6bf;
case 0x42e6c1:c.instructions+=1;goto B42e6c1;
case 0x42e6c6:goto L42e6c6;
case 0x42e6c8:c.instructions+=2;goto B42e6c8;
case 0x42e6ca:c.instructions+=1;goto B42e6ca;
case 0x42e6d0:goto L42e6d0;
case 0x42e6d5:c.instructions+=2;goto B42e6d5;
case 0x42e6d7:c.instructions+=1;goto B42e6d7;
case 0x42e6d9:goto L42e6d9;
case 0x42e6db:c.instructions+=1;goto B42e6db;
case 0x42e6e0:goto L42e6e0;
case 0x42e6e3:c.instructions+=3;goto B42e6e3;
case 0x42e6e6:c.instructions+=2;goto B42e6e6;
case 0x42e6e8:c.instructions+=1;goto B42e6e8;
case 0x42e6ea:goto L42e6ea;
case 0x42e6ec:c.instructions+=1;goto B42e6ec;
case 0x42e6ef:goto L42e6ef;
case 0x42e6f3:c.instructions+=6;goto B42e6f3;
case 0x42e6f7:c.instructions+=5;goto B42e6f7;
case 0x42e6f8:c.instructions+=4;goto B42e6f8;
case 0x42e6f9:c.instructions+=3;goto B42e6f9;
case 0x42e6fa:c.instructions+=2;goto B42e6fa;
case 0x42e6fc:c.instructions+=1;goto B42e6fc;
case 0x42e701:goto L42e701;
case 0x42e703:c.instructions+=2;goto B42e703;
case 0x42e706:c.instructions+=1;goto B42e706;
case 0x42e708:goto L42e708;
case 0x42e70a:c.instructions+=5;goto B42e70a;
case 0x42e70d:c.instructions+=4;goto B42e70d;
case 0x42e70e:c.instructions+=3;goto B42e70e;
case 0x42e70f:c.instructions+=2;goto B42e70f;
case 0x42e711:c.instructions+=1;goto B42e711;
case 0x42e716:goto L42e716;
case 0x42e718:c.instructions+=2;goto B42e718;
case 0x42e71b:c.instructions+=1;goto B42e71b;
case 0x42e71d:goto L42e71d;
case 0x42e720:c.instructions+=12;goto B42e720;
case 0x42e724:c.instructions+=11;goto B42e724;
case 0x42e728:c.instructions+=10;goto B42e728;
case 0x42e72e:c.instructions+=9;goto B42e72e;
case 0x42e735:c.instructions+=8;goto B42e735;
case 0x42e736:c.instructions+=7;goto B42e736;
case 0x42e737:c.instructions+=6;goto B42e737;
case 0x42e73b:c.instructions+=5;goto B42e73b;
case 0x42e73c:c.instructions+=4;goto B42e73c;
case 0x42e73e:c.instructions+=3;goto B42e73e;
case 0x42e742:c.instructions+=2;goto B42e742;
case 0x42e746:c.instructions+=1;goto B42e746;
case 0x42e74b:goto L42e74b;
case 0x42e74d:c.instructions+=1;goto B42e74d;
case 0x42e74f:goto L42e74f;
case 0x42e754:c.instructions+=14;goto B42e754;
case 0x42e757:c.instructions+=13;goto B42e757;
case 0x42e75b:c.instructions+=12;goto B42e75b;
case 0x42e75d:c.instructions+=11;goto B42e75d;
case 0x42e75e:c.instructions+=10;goto B42e75e;
case 0x42e762:c.instructions+=9;goto B42e762;
case 0x42e764:c.instructions+=8;goto B42e764;
case 0x42e76a:c.instructions+=7;goto B42e76a;
case 0x42e76d:c.instructions+=6;goto B42e76d;
case 0x42e772:c.instructions+=5;goto B42e772;
case 0x42e773:c.instructions+=4;goto B42e773;
case 0x42e775:c.instructions+=3;goto B42e775;
case 0x42e776:c.instructions+=2;goto B42e776;
case 0x42e777:c.instructions+=1;goto B42e777;
case 0x42e77c:goto L42e77c;
case 0x42e781:goto L42e781;
case 0x42e782:goto L42e782;
case 0x42e786:c.instructions+=5;goto B42e786;
case 0x42e787:c.instructions+=4;goto B42e787;
case 0x42e788:c.instructions+=3;goto B42e788;
case 0x42e789:c.instructions+=2;goto B42e789;
case 0x42e78c:c.instructions+=1;goto B42e78c;
case 0x42e790:goto L42e790;
case 0x42e793:c.instructions+=6;goto B42e793;
case 0x42e798:c.instructions+=5;goto B42e798;
case 0x42e79a:c.instructions+=4;goto B42e79a;
case 0x42e79b:c.instructions+=3;goto B42e79b;
case 0x42e79d:c.instructions+=2;goto B42e79d;
case 0x42e7a1:c.instructions+=1;goto B42e7a1;
case 0x42e7a3:goto L42e7a3;
case 0x42e7a5:c.instructions+=3;goto B42e7a5;
case 0x42e7a6:c.instructions+=2;goto B42e7a6;
case 0x42e7a9:c.instructions+=1;goto B42e7a9;
case 0x42e7ac:goto L42e7ac;
case 0x42e7b0:c.instructions+=6;goto B42e7b0;
case 0x42e7b3:c.instructions+=5;goto B42e7b3;
case 0x42e7b9:c.instructions+=4;goto B42e7b9;
case 0x42e7bb:c.instructions+=3;goto B42e7bb;
case 0x42e7bf:c.instructions+=2;goto B42e7bf;
case 0x42e7c3:c.instructions+=1;goto B42e7c3;
case 0x42e7c5:goto L42e7c5;
case 0x42e7cb:goto L42e7cb;
case 0x42e7d5:c.instructions+=3;goto B42e7d5;
case 0x42e7db:c.instructions+=2;goto B42e7db;
case 0x42e7e0:c.instructions+=1;goto B42e7e0;
case 0x42e7e5:goto L42e7e5;
case 0x42e7eb:c.instructions+=4;goto B42e7eb;
case 0x42e7f0:c.instructions+=3;goto B42e7f0;
case 0x42e7f2:c.instructions+=2;goto B42e7f2;
case 0x42e7f5:c.instructions+=1;goto B42e7f5;
case 0x42e7f7:goto L42e7f7;
case 0x42e7fc:goto L42e7fc;
case 0x42e800:c.instructions+=16;goto B42e800;
case 0x42e806:c.instructions+=15;goto B42e806;
case 0x42e807:c.instructions+=14;goto B42e807;
case 0x42e809:c.instructions+=13;goto B42e809;
case 0x42e80b:c.instructions+=12;goto B42e80b;
case 0x42e80f:c.instructions+=11;goto B42e80f;
case 0x42e815:c.instructions+=10;goto B42e815;
case 0x42e816:c.instructions+=9;goto B42e816;
case 0x42e81a:c.instructions+=8;goto B42e81a;
case 0x42e820:c.instructions+=7;goto B42e820;
case 0x42e822:c.instructions+=6;goto B42e822;
case 0x42e823:c.instructions+=5;goto B42e823;
case 0x42e824:c.instructions+=4;goto B42e824;
case 0x42e827:c.instructions+=3;goto B42e827;
case 0x42e82b:c.instructions+=2;goto B42e82b;
case 0x42e82f:c.instructions+=1;goto B42e82f;
case 0x42e834:goto L42e834;
case 0x42e837:c.instructions+=2;goto B42e837;
case 0x42e839:c.instructions+=1;goto B42e839;
case 0x42e83b:goto L42e83b;
case 0x42e83d:c.instructions+=5;goto B42e83d;
case 0x42e83f:c.instructions+=4;goto B42e83f;
case 0x42e844:c.instructions+=3;goto B42e844;
case 0x42e848:c.instructions+=2;goto B42e848;
case 0x42e84c:c.instructions+=1;goto B42e84c;
case 0x42e84e:goto L42e84e;
case 0x42e852:c.instructions+=6;goto B42e852;
case 0x42e857:c.instructions+=5;goto B42e857;
case 0x42e85d:c.instructions+=4;goto B42e85d;
case 0x42e861:c.instructions+=3;goto B42e861;
case 0x42e867:c.instructions+=2;goto B42e867;
case 0x42e86b:c.instructions+=1;goto B42e86b;
case 0x42e86f:goto L42e86f;
case 0x42e873:c.instructions+=12;goto B42e873;
case 0x42e877:c.instructions+=11;goto B42e877;
case 0x42e87b:c.instructions+=10;goto B42e87b;
case 0x42e87f:c.instructions+=9;goto B42e87f;
case 0x42e881:c.instructions+=8;goto B42e881;
case 0x42e882:c.instructions+=7;goto B42e882;
case 0x42e883:c.instructions+=6;goto B42e883;
case 0x42e884:c.instructions+=5;goto B42e884;
case 0x42e885:c.instructions+=4;goto B42e885;
case 0x42e886:c.instructions+=3;goto B42e886;
case 0x42e887:c.instructions+=2;goto B42e887;
case 0x42e889:c.instructions+=1;goto B42e889;
case 0x42e88e:goto L42e88e;
case 0x42e890:c.instructions+=2;goto B42e890;
case 0x42e892:c.instructions+=1;goto B42e892;
case 0x42e898:goto L42e898;
case 0x42e89e:c.instructions+=6;goto B42e89e;
case 0x42e8a0:c.instructions+=5;goto B42e8a0;
case 0x42e8a1:c.instructions+=4;goto B42e8a1;
case 0x42e8a2:c.instructions+=3;goto B42e8a2;
case 0x42e8a3:c.instructions+=2;goto B42e8a3;
case 0x42e8a5:c.instructions+=1;goto B42e8a5;
case 0x42e8aa:goto L42e8aa;
case 0x42e8ac:c.instructions+=6;goto B42e8ac;
case 0x42e8af:c.instructions+=5;goto B42e8af;
case 0x42e8b0:c.instructions+=4;goto B42e8b0;
case 0x42e8b1:c.instructions+=3;goto B42e8b1;
case 0x42e8b4:c.instructions+=2;goto B42e8b4;
case 0x42e8b9:c.instructions+=1;goto B42e8b9;
case 0x42e8be:goto L42e8be;
case 0x42e8c0:c.instructions+=7;goto B42e8c0;
case 0x42e8c4:c.instructions+=6;goto B42e8c4;
case 0x42e8c8:c.instructions+=5;goto B42e8c8;
case 0x42e8ca:c.instructions+=4;goto B42e8ca;
case 0x42e8cd:c.instructions+=3;goto B42e8cd;
case 0x42e8ce:c.instructions+=2;goto B42e8ce;
case 0x42e8cf:c.instructions+=1;goto B42e8cf;
case 0x42e8d4:goto L42e8d4;
case 0x42e8d6:c.instructions+=2;goto B42e8d6;
case 0x42e8d9:c.instructions+=1;goto B42e8d9;
case 0x42e8df:goto L42e8df;
case 0x42e8e3:c.instructions+=11;goto B42e8e3;
case 0x42e8ea:c.instructions+=10;goto B42e8ea;
case 0x42e8eb:c.instructions+=9;goto B42e8eb;
case 0x42e8ef:c.instructions+=8;goto B42e8ef;
case 0x42e8f5:c.instructions+=7;goto B42e8f5;
case 0x42e8f9:c.instructions+=6;goto B42e8f9;
case 0x42e8fd:c.instructions+=5;goto B42e8fd;
case 0x42e8ff:c.instructions+=4;goto B42e8ff;
case 0x42e901:c.instructions+=3;goto B42e901;
case 0x42e904:c.instructions+=2;goto B42e904;
case 0x42e906:c.instructions+=1;goto B42e906;
case 0x42e90b:goto L42e90b;
case 0x42e90f:c.instructions+=4;goto B42e90f;
case 0x42e913:c.instructions+=3;goto B42e913;
case 0x42e915:c.instructions+=2;goto B42e915;
case 0x42e919:c.instructions+=1;goto B42e919;
case 0x42e91b:goto L42e91b;
case 0x42e91f:c.instructions+=1;goto B42e91f;
case 0x42e921:goto L42e921;
case 0x42e927:goto L42e927;
case 0x42e92d:c.instructions+=14;goto B42e92d;
case 0x42e931:c.instructions+=13;goto B42e931;
case 0x42e938:c.instructions+=12;goto B42e938;
case 0x42e93d:c.instructions+=11;goto B42e93d;
case 0x42e940:c.instructions+=10;goto B42e940;
case 0x42e946:c.instructions+=9;goto B42e946;
case 0x42e94a:c.instructions+=8;goto B42e94a;
case 0x42e94e:c.instructions+=7;goto B42e94e;
case 0x42e952:c.instructions+=6;goto B42e952;
case 0x42e958:c.instructions+=5;goto B42e958;
case 0x42e95c:c.instructions+=4;goto B42e95c;
case 0x42e95e:c.instructions+=3;goto B42e95e;
case 0x42e960:c.instructions+=2;goto B42e960;
case 0x42e963:c.instructions+=1;goto B42e963;
case 0x42e965:goto L42e965;
case 0x42e969:c.instructions+=3;goto B42e969;
case 0x42e96b:c.instructions+=2;goto B42e96b;
case 0x42e96f:c.instructions+=1;goto B42e96f;
case 0x42e971:goto L42e971;
case 0x42e975:goto L42e975;
case 0x42e979:c.instructions+=9;goto B42e979;
case 0x42e97d:c.instructions+=8;goto B42e97d;
case 0x42e981:c.instructions+=7;goto B42e981;
case 0x42e982:c.instructions+=6;goto B42e982;
case 0x42e986:c.instructions+=5;goto B42e986;
case 0x42e987:c.instructions+=4;goto B42e987;
case 0x42e988:c.instructions+=3;goto B42e988;
case 0x42e989:c.instructions+=2;goto B42e989;
case 0x42e98a:c.instructions+=1;goto B42e98a;
case 0x42e98f:goto L42e98f;
case 0x42e991:c.instructions+=1;goto B42e991;
case 0x42e993:goto L42e993;
case 0x42e997:c.instructions+=11;goto B42e997;
case 0x42e99b:c.instructions+=10;goto B42e99b;
case 0x42e99f:c.instructions+=9;goto B42e99f;
case 0x42e9a0:c.instructions+=8;goto B42e9a0;
case 0x42e9a1:c.instructions+=7;goto B42e9a1;
case 0x42e9a2:c.instructions+=6;goto B42e9a2;
case 0x42e9a6:c.instructions+=5;goto B42e9a6;
case 0x42e9a7:c.instructions+=4;goto B42e9a7;
case 0x42e9a8:c.instructions+=3;goto B42e9a8;
case 0x42e9a9:c.instructions+=2;goto B42e9a9;
case 0x42e9aa:c.instructions+=1;goto B42e9aa;
case 0x42e9af:goto L42e9af;
case 0x42e9b0:c.instructions+=6;goto B42e9b0;
case 0x42e9b1:c.instructions+=5;goto B42e9b1;
case 0x42e9b2:c.instructions+=4;goto B42e9b2;
case 0x42e9b4:c.instructions+=3;goto B42e9b4;
case 0x42e9b5:c.instructions+=2;goto B42e9b5;
case 0x42e9b8:c.instructions+=1;goto B42e9b8;
case 0x42e9bb:goto L42e9bb;
case 0x42e9bf:c.instructions+=3;goto B42e9bf;
case 0x42e9c5:c.instructions+=2;goto B42e9c5;
case 0x42e9c7:c.instructions+=1;goto B42e9c7;
case 0x42e9c9:goto L42e9c9;
case 0x42e9cf:goto L42e9cf;
case 0x42e9d3:c.instructions+=3;goto B42e9d3;
case 0x42e9d5:c.instructions+=2;goto B42e9d5;
case 0x42e9db:c.instructions+=1;goto B42e9db;
case 0x42e9dd:goto L42e9dd;
case 0x42e9e3:goto L42e9e3;
case 0x42e9e4:c.instructions+=6;goto B42e9e4;
case 0x42e9e5:c.instructions+=5;goto B42e9e5;
case 0x42e9e6:c.instructions+=4;goto B42e9e6;
case 0x42e9e8:c.instructions+=3;goto B42e9e8;
case 0x42e9e9:c.instructions+=2;goto B42e9e9;
case 0x42e9ec:c.instructions+=1;goto B42e9ec;
case 0x42e9f0:goto L42e9f0;
case 0x42e9f3:c.instructions+=13;goto B42e9f3;
case 0x42e9f8:c.instructions+=12;goto B42e9f8;
case 0x42e9f9:c.instructions+=11;goto B42e9f9;
case 0x42e9fa:c.instructions+=10;goto B42e9fa;
case 0x42e9fb:c.instructions+=9;goto B42e9fb;
case 0x42e9fd:c.instructions+=8;goto B42e9fd;
case 0x42ea03:c.instructions+=7;goto B42ea03;
case 0x42ea0a:c.instructions+=6;goto B42ea0a;
case 0x42ea10:c.instructions+=5;goto B42ea10;
case 0x42ea16:c.instructions+=4;goto B42ea16;
case 0x42ea1b:c.instructions+=3;goto B42ea1b;
case 0x42ea1f:c.instructions+=2;goto B42ea1f;
case 0x42ea23:c.instructions+=1;goto B42ea23;
case 0x42ea28:goto L42ea28;
case 0x42ea2c:c.instructions+=4;goto B42ea2c;
case 0x42ea31:c.instructions+=3;goto B42ea31;
case 0x42ea33:c.instructions+=2;goto B42ea33;
case 0x42ea36:c.instructions+=1;goto B42ea36;
case 0x42ea38:goto L42ea38;
case 0x42ea3d:goto L42ea3d;
case 0x42ea41:c.instructions+=11;goto B42ea41;
case 0x42ea47:c.instructions+=10;goto B42ea47;
case 0x42ea4b:c.instructions+=9;goto B42ea4b;
case 0x42ea51:c.instructions+=8;goto B42ea51;
case 0x42ea53:c.instructions+=7;goto B42ea53;
case 0x42ea57:c.instructions+=6;goto B42ea57;
case 0x42ea58:c.instructions+=5;goto B42ea58;
case 0x42ea5a:c.instructions+=4;goto B42ea5a;
case 0x42ea5b:c.instructions+=3;goto B42ea5b;
case 0x42ea60:c.instructions+=2;goto B42ea60;
case 0x42ea64:c.instructions+=1;goto B42ea64;
case 0x42ea69:goto L42ea69;
case 0x42ea6d:c.instructions+=4;goto B42ea6d;
case 0x42ea70:c.instructions+=3;goto B42ea70;
case 0x42ea72:c.instructions+=2;goto B42ea72;
case 0x42ea76:c.instructions+=1;goto B42ea76;
case 0x42ea7b:goto L42ea7b;
case 0x42ea7d:c.instructions+=3;goto B42ea7d;
case 0x42ea7f:c.instructions+=2;goto B42ea7f;
case 0x42ea83:c.instructions+=1;goto B42ea83;
case 0x42ea88:goto L42ea88;
case 0x42ea8a:c.instructions+=2;goto B42ea8a;
case 0x42ea8e:c.instructions+=1;goto B42ea8e;
case 0x42ea90:goto L42ea90;
case 0x42ea92:c.instructions+=1;goto B42ea92;
case 0x42ea94:goto L42ea94;
case 0x42ea97:c.instructions+=5;goto B42ea97;
case 0x42ea9d:c.instructions+=4;goto B42ea9d;
case 0x42eaa1:c.instructions+=3;goto B42eaa1;
case 0x42eaa4:c.instructions+=2;goto B42eaa4;
case 0x42eaa6:c.instructions+=1;goto B42eaa6;
case 0x42eaa8:goto L42eaa8;
case 0x42eaa9:c.instructions+=5;goto B42eaa9;
case 0x42eaaa:c.instructions+=4;goto B42eaaa;
case 0x42eaac:c.instructions+=3;goto B42eaac;
case 0x42eaad:c.instructions+=2;goto B42eaad;
case 0x42eab0:c.instructions+=1;goto B42eab0;
case 0x42eab3:goto L42eab3;
case 0x42eab6:c.instructions+=3;goto B42eab6;
case 0x42eab8:c.instructions+=2;goto B42eab8;
case 0x42eabd:c.instructions+=1;goto B42eabd;
case 0x42eabf:goto L42eabf;
case 0x42eac5:c.instructions+=1;goto B42eac5;
case 0x42eac7:goto L42eac7;
case 0x42eac9:goto L42eac9;
case 0x42eacf:c.instructions+=4;goto B42eacf;
case 0x42ead5:c.instructions+=3;goto B42ead5;
case 0x42ead7:c.instructions+=2;goto B42ead7;
case 0x42eada:c.instructions+=1;goto B42eada;
case 0x42eadc:goto L42eadc;
case 0x42eae2:c.instructions+=2;goto B42eae2;
case 0x42eae7:c.instructions+=1;goto B42eae7;
case 0x42eaec:goto L42eaec;
case 0x42eaf2:c.instructions+=3;goto B42eaf2;
case 0x42eaf4:c.instructions+=2;goto B42eaf4;
case 0x42eaf7:c.instructions+=1;goto B42eaf7;
case 0x42eaf9:goto L42eaf9;
case 0x42eafb:goto L42eafb;
case 0x42eafd:c.instructions+=1;goto B42eafd;
case 0x42eaff:goto L42eaff;
case 0x42eb04:goto L42eb04;
case 0x42eb09:c.instructions+=2;goto B42eb09;
case 0x42eb0b:c.instructions+=1;goto B42eb0b;
case 0x42eb0d:goto L42eb0d;
case 0x42eb10:c.instructions+=3;goto B42eb10;
case 0x42eb13:c.instructions+=2;goto B42eb13;
case 0x42eb15:c.instructions+=1;goto B42eb15;
case 0x42eb17:goto L42eb17;
case 0x42eb1b:c.instructions+=3;goto B42eb1b;
case 0x42eb1d:c.instructions+=2;goto B42eb1d;
case 0x42eb20:c.instructions+=1;goto B42eb20;
case 0x42eb22:goto L42eb22;
case 0x42eb26:goto L42eb26;
case 0x42eb27:c.instructions+=6;goto B42eb27;
case 0x42eb2b:c.instructions+=5;goto B42eb2b;
case 0x42eb2d:c.instructions+=4;goto B42eb2d;
case 0x42eb31:c.instructions+=3;goto B42eb31;
case 0x42eb32:c.instructions+=2;goto B42eb32;
case 0x42eb34:c.instructions+=1;goto B42eb34;
case 0x42eb39:goto L42eb39;
case 0x42eb3b:c.instructions+=23;goto B42eb3b;
case 0x42eb3e:c.instructions+=22;goto B42eb3e;
case 0x42eb3f:c.instructions+=21;goto B42eb3f;
case 0x42eb40:c.instructions+=20;goto B42eb40;
case 0x42eb42:c.instructions+=19;goto B42eb42;
case 0x42eb44:c.instructions+=18;goto B42eb44;
case 0x42eb4c:c.instructions+=17;goto B42eb4c;
case 0x42eb4f:c.instructions+=16;goto B42eb4f;
case 0x42eb52:c.instructions+=15;goto B42eb52;
case 0x42eb56:c.instructions+=14;goto B42eb56;
case 0x42eb58:c.instructions+=13;goto B42eb58;
case 0x42eb5c:c.instructions+=12;goto B42eb5c;
case 0x42eb5f:c.instructions+=11;goto B42eb5f;
case 0x42eb62:c.instructions+=10;goto B42eb62;
case 0x42eb63:c.instructions+=9;goto B42eb63;
case 0x42eb67:c.instructions+=8;goto B42eb67;
case 0x42eb6d:c.instructions+=7;goto B42eb6d;
case 0x42eb6e:c.instructions+=6;goto B42eb6e;
case 0x42eb6f:c.instructions+=5;goto B42eb6f;
case 0x42eb73:c.instructions+=4;goto B42eb73;
case 0x42eb75:c.instructions+=3;goto B42eb75;
case 0x42eb76:c.instructions+=2;goto B42eb76;
case 0x42eb7a:c.instructions+=1;goto B42eb7a;
case 0x42eb7f:goto L42eb7f;
case 0x42eb81:c.instructions+=4;goto B42eb81;
case 0x42eb84:c.instructions+=3;goto B42eb84;
case 0x42eb86:c.instructions+=2;goto B42eb86;
case 0x42eb89:c.instructions+=1;goto B42eb89;
case 0x42eb8f:goto L42eb8f;
case 0x42eb93:c.instructions+=1;goto B42eb93;
case 0x42eb95:goto L42eb95;
case 0x42eb99:c.instructions+=2;goto B42eb99;
case 0x42eb9d:c.instructions+=1;goto B42eb9d;
case 0x42eba1:goto L42eba1;
case 0x42eba5:c.instructions+=1;goto B42eba5;
case 0x42ebab:goto L42ebab;
case 0x42ebad:c.instructions+=4;goto B42ebad;
case 0x42ebae:c.instructions+=3;goto B42ebae;
case 0x42ebb1:c.instructions+=2;goto B42ebb1;
case 0x42ebb5:c.instructions+=1;goto B42ebb5;
case 0x42ebbb:goto L42ebbb;
case 0x42ebbd:c.instructions+=1;goto B42ebbd;
case 0x42ebc2:goto L42ebc2;
case 0x42ebc4:c.instructions+=1;goto B42ebc4;
case 0x42ebc6:goto L42ebc6;
case 0x42ebcc:c.instructions+=9;goto B42ebcc;
case 0x42ebcf:c.instructions+=8;goto B42ebcf;
case 0x42ebd1:c.instructions+=7;goto B42ebd1;
case 0x42ebd5:c.instructions+=6;goto B42ebd5;
case 0x42ebd6:c.instructions+=5;goto B42ebd6;
case 0x42ebd8:c.instructions+=4;goto B42ebd8;
case 0x42ebd9:c.instructions+=3;goto B42ebd9;
case 0x42ebde:c.instructions+=2;goto B42ebde;
case 0x42ebe2:c.instructions+=1;goto B42ebe2;
case 0x42ebe7:goto L42ebe7;
case 0x42ebe9:goto L42ebe9;
case 0x42ebeb:c.instructions+=1;goto B42ebeb;
case 0x42ebf0:goto L42ebf0;
case 0x42ebf2:c.instructions+=11;goto B42ebf2;
case 0x42ebf4:c.instructions+=10;goto B42ebf4;
case 0x42ebf7:c.instructions+=9;goto B42ebf7;
case 0x42ebfa:c.instructions+=8;goto B42ebfa;
case 0x42ebfc:c.instructions+=7;goto B42ebfc;
case 0x42ebfe:c.instructions+=6;goto B42ebfe;
case 0x42ec00:c.instructions+=5;goto B42ec00;
case 0x42ec02:c.instructions+=4;goto B42ec02;
case 0x42ec04:c.instructions+=3;goto B42ec04;
case 0x42ec06:c.instructions+=2;goto B42ec06;
case 0x42ec08:c.instructions+=1;goto B42ec08;
case 0x42ec0a:goto L42ec0a;
case 0x42ec0e:c.instructions+=4;goto B42ec0e;
case 0x42ec14:c.instructions+=3;goto B42ec14;
case 0x42ec16:c.instructions+=2;goto B42ec16;
case 0x42ec19:c.instructions+=1;goto B42ec19;
case 0x42ec1f:goto L42ec1f;
case 0x42ec23:c.instructions+=10;goto B42ec23;
case 0x42ec27:c.instructions+=9;goto B42ec27;
case 0x42ec29:c.instructions+=8;goto B42ec29;
case 0x42ec2c:c.instructions+=7;goto B42ec2c;
case 0x42ec2e:c.instructions+=6;goto B42ec2e;
case 0x42ec32:c.instructions+=5;goto B42ec32;
case 0x42ec36:c.instructions+=4;goto B42ec36;
case 0x42ec37:c.instructions+=3;goto B42ec37;
case 0x42ec38:c.instructions+=2;goto B42ec38;
case 0x42ec3a:c.instructions+=1;goto B42ec3a;
case 0x42ec3f:goto L42ec3f;
case 0x42ec41:c.instructions+=2;goto B42ec41;
case 0x42ec44:c.instructions+=1;goto B42ec44;
case 0x42ec46:goto L42ec46;
case 0x42ec48:c.instructions+=5;goto B42ec48;
case 0x42ec4b:c.instructions+=4;goto B42ec4b;
case 0x42ec4c:c.instructions+=3;goto B42ec4c;
case 0x42ec50:c.instructions+=2;goto B42ec50;
case 0x42ec51:c.instructions+=1;goto B42ec51;
case 0x42ec56:goto L42ec56;
case 0x42ec58:c.instructions+=2;goto B42ec58;
case 0x42ec5b:c.instructions+=1;goto B42ec5b;
case 0x42ec5d:goto L42ec5d;
case 0x42ec61:c.instructions+=3;goto B42ec61;
case 0x42ec63:c.instructions+=2;goto B42ec63;
case 0x42ec66:c.instructions+=1;goto B42ec66;
case 0x42ec68:goto L42ec68;
case 0x42ec6b:c.instructions+=1;goto B42ec6b;
case 0x42ec6d:goto L42ec6d;
case 0x42ec70:goto L42ec70;
case 0x42ec73:c.instructions+=2;goto B42ec73;
case 0x42ec75:c.instructions+=1;goto B42ec75;
case 0x42ec77:goto L42ec77;
case 0x42ec7b:c.instructions+=7;goto B42ec7b;
case 0x42ec82:c.instructions+=6;goto B42ec82;
case 0x42ec86:c.instructions+=5;goto B42ec86;
case 0x42ec87:c.instructions+=4;goto B42ec87;
case 0x42ec88:c.instructions+=3;goto B42ec88;
case 0x42ec8c:c.instructions+=2;goto B42ec8c;
case 0x42ec8d:c.instructions+=1;goto B42ec8d;
case 0x42ec92:goto L42ec92;
case 0x42ec94:c.instructions+=1;goto B42ec94;
case 0x42ec9a:goto L42ec9a;
case 0x42ec9e:c.instructions+=9;goto B42ec9e;
case 0x42eca1:c.instructions+=8;goto B42eca1;
case 0x42eca5:c.instructions+=7;goto B42eca5;
case 0x42eca9:c.instructions+=6;goto B42eca9;
case 0x42ecaf:c.instructions+=5;goto B42ecaf;
case 0x42ecb6:c.instructions+=4;goto B42ecb6;
case 0x42ecb8:c.instructions+=3;goto B42ecb8;
case 0x42ecba:c.instructions+=2;goto B42ecba;
case 0x42ecbd:c.instructions+=1;goto B42ecbd;
case 0x42ecbf:goto L42ecbf;
case 0x42ecc6:c.instructions+=3;goto B42ecc6;
case 0x42ecc8:c.instructions+=2;goto B42ecc8;
case 0x42eccc:c.instructions+=1;goto B42eccc;
case 0x42ecce:goto L42ecce;
case 0x42ecd2:goto L42ecd2;
case 0x42ecd4:goto L42ecd4;
case 0x42ecd6:c.instructions+=1;goto B42ecd6;
case 0x42ecd8:goto L42ecd8;
case 0x42ecda:c.instructions+=1;goto B42ecda;
case 0x42ecdc:goto L42ecdc;
case 0x42ece0:c.instructions+=1;goto B42ece0;
case 0x42ece2:goto L42ece2;
case 0x42ece6:c.instructions+=13;goto B42ece6;
case 0x42ecea:c.instructions+=12;goto B42ecea;
case 0x42ecec:c.instructions+=11;goto B42ecec;
case 0x42ecf0:c.instructions+=10;goto B42ecf0;
case 0x42ecf4:c.instructions+=9;goto B42ecf4;
case 0x42ecf5:c.instructions+=8;goto B42ecf5;
case 0x42ecf6:c.instructions+=7;goto B42ecf6;
case 0x42ecf7:c.instructions+=6;goto B42ecf7;
case 0x42ecfb:c.instructions+=5;goto B42ecfb;
case 0x42ecfd:c.instructions+=4;goto B42ecfd;
case 0x42ecfe:c.instructions+=3;goto B42ecfe;
case 0x42ed02:c.instructions+=2;goto B42ed02;
case 0x42ed06:c.instructions+=1;goto B42ed06;
case 0x42ed0b:goto L42ed0b;
case 0x42ed0f:c.instructions+=6;goto B42ed0f;
case 0x42ed13:c.instructions+=5;goto B42ed13;
case 0x42ed15:c.instructions+=4;goto B42ed15;
case 0x42ed18:c.instructions+=3;goto B42ed18;
case 0x42ed1a:c.instructions+=2;goto B42ed1a;
case 0x42ed1e:c.instructions+=1;goto B42ed1e;
case 0x42ed20:goto L42ed20;
case 0x42ed23:c.instructions+=1;goto B42ed23;
case 0x42ed29:goto L42ed29;
case 0x42ed2a:c.instructions+=6;goto B42ed2a;
case 0x42ed2b:c.instructions+=5;goto B42ed2b;
case 0x42ed2c:c.instructions+=4;goto B42ed2c;
case 0x42ed2e:c.instructions+=3;goto B42ed2e;
case 0x42ed2f:c.instructions+=2;goto B42ed2f;
case 0x42ed32:c.instructions+=1;goto B42ed32;
case 0x42ed35:goto L42ed35;
case 0x42ed3a:c.instructions+=9;goto B42ed3a;
case 0x42ed3b:c.instructions+=8;goto B42ed3b;
case 0x42ed3c:c.instructions+=7;goto B42ed3c;
case 0x42ed3d:c.instructions+=6;goto B42ed3d;
case 0x42ed3e:c.instructions+=5;goto B42ed3e;
case 0x42ed43:c.instructions+=4;goto B42ed43;
case 0x42ed45:c.instructions+=3;goto B42ed45;
case 0x42ed46:c.instructions+=2;goto B42ed46;
case 0x42ed49:c.instructions+=1;goto B42ed49;
case 0x42ed4c:goto L42ed4c;
case 0x42ed50:c.instructions+=3;goto B42ed50;
case 0x42ed56:c.instructions+=2;goto B42ed56;
case 0x42ed58:c.instructions+=1;goto B42ed58;
case 0x42ed5a:goto L42ed5a;
case 0x42ed5f:c.instructions+=2;goto B42ed5f;
case 0x42ed61:c.instructions+=1;goto B42ed61;
case 0x42ed63:goto L42ed63;
case 0x42ed67:c.instructions+=5;goto B42ed67;
case 0x42ed6b:c.instructions+=4;goto B42ed6b;
case 0x42ed71:c.instructions+=3;goto B42ed71;
case 0x42ed73:c.instructions+=2;goto B42ed73;
case 0x42ed75:c.instructions+=1;goto B42ed75;
case 0x42ed77:goto L42ed77;
case 0x42ed7a:c.instructions+=1;goto B42ed7a;
case 0x42ed7c:goto L42ed7c;
case 0x42ed80:c.instructions+=4;goto B42ed80;
case 0x42ed84:c.instructions+=3;goto B42ed84;
case 0x42ed86:c.instructions+=2;goto B42ed86;
case 0x42ed89:c.instructions+=1;goto B42ed89;
case 0x42ed8b:goto L42ed8b;
case 0x42ed8c:c.instructions+=6;goto B42ed8c;
case 0x42ed8d:c.instructions+=5;goto B42ed8d;
case 0x42ed8e:c.instructions+=4;goto B42ed8e;
case 0x42ed90:c.instructions+=3;goto B42ed90;
case 0x42ed91:c.instructions+=2;goto B42ed91;
case 0x42ed94:c.instructions+=1;goto B42ed94;
case 0x42ed97:goto L42ed97;
case 0x42ed9a:c.instructions+=1;goto B42ed9a;
case 0x42ed9c:goto L42ed9c;
case 0x42eda0:c.instructions+=4;goto B42eda0;
case 0x42eda4:c.instructions+=3;goto B42eda4;
case 0x42eda6:c.instructions+=2;goto B42eda6;
case 0x42eda9:c.instructions+=1;goto B42eda9;
case 0x42edaf:goto L42edaf;
case 0x42edb4:c.instructions+=14;goto B42edb4;
case 0x42edb7:c.instructions+=13;goto B42edb7;
case 0x42edbe:c.instructions+=12;goto B42edbe;
case 0x42edc0:c.instructions+=11;goto B42edc0;
case 0x42edc1:c.instructions+=10;goto B42edc1;
case 0x42edc8:c.instructions+=9;goto B42edc8;
case 0x42edcc:c.instructions+=8;goto B42edcc;
case 0x42edd2:c.instructions+=7;goto B42edd2;
case 0x42edd5:c.instructions+=6;goto B42edd5;
case 0x42edda:c.instructions+=5;goto B42edda;
case 0x42eddb:c.instructions+=4;goto B42eddb;
case 0x42eddd:c.instructions+=3;goto B42eddd;
case 0x42edde:c.instructions+=2;goto B42edde;
case 0x42eddf:c.instructions+=1;goto B42eddf;
case 0x42ede4:goto L42ede4;
case 0x42ede5:c.instructions+=6;goto B42ede5;
case 0x42ede6:c.instructions+=5;goto B42ede6;
case 0x42ede7:c.instructions+=4;goto B42ede7;
case 0x42ede9:c.instructions+=3;goto B42ede9;
case 0x42edea:c.instructions+=2;goto B42edea;
case 0x42eded:c.instructions+=1;goto B42eded;
case 0x42edf0:goto L42edf0;
case 0x42edf3:c.instructions+=5;goto B42edf3;
case 0x42edf4:c.instructions+=4;goto B42edf4;
case 0x42edf6:c.instructions+=3;goto B42edf6;
case 0x42edf8:c.instructions+=2;goto B42edf8;
case 0x42edfb:c.instructions+=1;goto B42edfb;
case 0x42ee01:goto L42ee01;
case 0x42ee02:c.instructions+=1;goto B42ee02;
case 0x42ee09:goto L42ee09;
case 0x42ee0b:c.instructions+=1;goto B42ee0b;
case 0x42ee10:goto L42ee10;
case 0x42ee11:c.instructions+=4;goto B42ee11;
case 0x42ee17:c.instructions+=3;goto B42ee17;
case 0x42ee18:c.instructions+=2;goto B42ee18;
case 0x42ee1b:c.instructions+=1;goto B42ee1b;
case 0x42ee1c:goto L42ee1c;
case 0x42ee1e:c.instructions+=1;goto B42ee1e;
case 0x42ee23:goto L42ee23;
case 0x42ee25:c.instructions+=1;goto B42ee25;
case 0x42ee2b:goto L42ee2b;
case 0x42ee2c:c.instructions+=4;goto B42ee2c;
case 0x42ee32:c.instructions+=3;goto B42ee32;
case 0x42ee33:c.instructions+=2;goto B42ee33;
case 0x42ee36:c.instructions+=1;goto B42ee36;
case 0x42ee37:goto L42ee37;
case 0x42ee3a:c.instructions+=3;goto B42ee3a;
case 0x42ee3b:c.instructions+=2;goto B42ee3b;
case 0x42ee3d:c.instructions+=1;goto B42ee3d;
case 0x42ee42:goto L42ee42;
case 0x42ee44:c.instructions+=1;goto B42ee44;
case 0x42ee4a:goto L42ee4a;
case 0x42ee4d:c.instructions+=4;goto B42ee4d;
case 0x42ee50:c.instructions+=3;goto B42ee50;
case 0x42ee53:c.instructions+=2;goto B42ee53;
case 0x42ee55:c.instructions+=1;goto B42ee55;
case 0x42ee57:goto L42ee57;
case 0x42ee58:c.instructions+=1;goto B42ee58;
case 0x42ee5d:goto L42ee5d;
case 0x42ee5e:c.instructions+=3;goto B42ee5e;
case 0x42ee5f:c.instructions+=2;goto B42ee5f;
case 0x42ee62:c.instructions+=1;goto B42ee62;
case 0x42ee63:goto L42ee63;
case 0x42ee68:goto L42ee68;
case 0x42ee69:c.instructions+=4;goto B42ee69;
case 0x42ee6f:c.instructions+=3;goto B42ee6f;
case 0x42ee70:c.instructions+=2;goto B42ee70;
case 0x42ee73:c.instructions+=1;goto B42ee73;
case 0x42ee74:goto L42ee74;
case 0x42ee79:c.instructions+=3;goto B42ee79;
case 0x42ee7b:c.instructions+=2;goto B42ee7b;
case 0x42ee7d:c.instructions+=1;goto B42ee7d;
case 0x42ee7f:goto L42ee7f;
case 0x42ee84:goto L42ee84;
case 0x42ee86:c.instructions+=1;goto B42ee86;
case 0x42ee8b:goto L42ee8b;
case 0x42ee8d:c.instructions+=1;goto B42ee8d;
case 0x42ee92:goto L42ee92;
case 0x42ee94:c.instructions+=1;goto B42ee94;
case 0x42ee99:goto L42ee99;
case 0x42ee9a:c.instructions+=4;goto B42ee9a;
case 0x42ee9c:c.instructions+=3;goto B42ee9c;
case 0x42ee9d:c.instructions+=2;goto B42ee9d;
case 0x42eea0:c.instructions+=1;goto B42eea0;
case 0x42eea5:goto L42eea5;
case 0x42eea6:c.instructions+=3;goto B42eea6;
case 0x42eea7:c.instructions+=2;goto B42eea7;
case 0x42eeaa:c.instructions+=1;goto B42eeaa;
case 0x42eeaf:goto L42eeaf;
case 0x42eeb6:c.instructions+=1;goto B42eeb6;
case 0x42eebc:goto L42eebc;
case 0x42eec2:c.instructions+=4;goto B42eec2;
case 0x42eec3:c.instructions+=3;goto B42eec3;
case 0x42eec5:c.instructions+=2;goto B42eec5;
case 0x42eec7:c.instructions+=1;goto B42eec7;
case 0x42eecc:goto L42eecc;
case 0x42eece:c.instructions+=4;goto B42eece;
case 0x42eed0:c.instructions+=3;goto B42eed0;
case 0x42eed2:c.instructions+=2;goto B42eed2;
case 0x42eed6:c.instructions+=1;goto B42eed6;
case 0x42eedb:goto L42eedb;
case 0x42eedd:c.instructions+=4;goto B42eedd;
case 0x42eede:c.instructions+=3;goto B42eede;
case 0x42eedf:c.instructions+=2;goto B42eedf;
case 0x42eee1:c.instructions+=1;goto B42eee1;
case 0x42eee6:goto L42eee6;
case 0x42eeec:c.instructions+=4;goto B42eeec;
case 0x42eeef:c.instructions+=3;goto B42eeef;
case 0x42eef4:c.instructions+=2;goto B42eef4;
case 0x42eef6:c.instructions+=1;goto B42eef6;
case 0x42eef8:goto L42eef8;
case 0x42eefa:c.instructions+=2;goto B42eefa;
case 0x42ef02:c.instructions+=1;goto B42ef02;
case 0x42ef04:goto L42ef04;
case 0x42ef08:c.instructions+=2;goto B42ef08;
case 0x42ef0b:c.instructions+=1;goto B42ef0b;
case 0x42ef0d:goto L42ef0d;
case 0x42ef0f:goto L42ef0f;
case 0x42ef11:c.instructions+=2;goto B42ef11;
case 0x42ef13:c.instructions+=1;goto B42ef13;
case 0x42ef18:goto L42ef18;
case 0x42ef1a:c.instructions+=1;goto B42ef1a;
case 0x42ef1c:goto L42ef1c;
case 0x42ef1f:c.instructions+=2;goto B42ef1f;
case 0x42ef22:c.instructions+=1;goto B42ef22;
case 0x42ef24:goto L42ef24;
case 0x42ef27:c.instructions+=1;goto B42ef27;
case 0x42ef29:goto L42ef29;
case 0x42ef2c:c.instructions+=1;goto B42ef2c;
case 0x42ef2e:goto L42ef2e;
case 0x42ef32:c.instructions+=3;goto B42ef32;
case 0x42ef35:c.instructions+=2;goto B42ef35;
case 0x42ef36:c.instructions+=1;goto B42ef36;
case 0x42ef3b:goto L42ef3b;
case 0x42ef3f:c.instructions+=7;goto B42ef3f;
case 0x42ef45:c.instructions+=6;goto B42ef45;
case 0x42ef48:c.instructions+=5;goto B42ef48;
case 0x42ef49:c.instructions+=4;goto B42ef49;
case 0x42ef4c:c.instructions+=3;goto B42ef4c;
case 0x42ef4e:c.instructions+=2;goto B42ef4e;
case 0x42ef52:c.instructions+=1;goto B42ef52;
case 0x42ef54:goto L42ef54;
case 0x42ef55:c.instructions+=5;goto B42ef55;
case 0x42ef56:c.instructions+=4;goto B42ef56;
case 0x42ef58:c.instructions+=3;goto B42ef58;
case 0x42ef59:c.instructions+=2;goto B42ef59;
case 0x42ef5c:c.instructions+=1;goto B42ef5c;
case 0x42ef61:goto L42ef61;
case 0x42ef63:c.instructions+=1;goto B42ef63;
case 0x42ef68:goto L42ef68;
case 0x42ef6a:c.instructions+=1;goto B42ef6a;
case 0x42ef6f:goto L42ef6f;
case 0x42ef71:c.instructions+=1;goto B42ef71;
case 0x42ef73:goto L42ef73;
case 0x42ef78:c.instructions+=1;goto B42ef78;
case 0x42ef7d:goto L42ef7d;
case 0x42ef83:goto L42ef83;
case 0x42ef84:goto L42ef84;
case 0x42ef85:c.instructions+=2;goto B42ef85;
case 0x42ef88:c.instructions+=1;goto B42ef88;
case 0x42efb0:goto L42efb0;
case 0x42efb1:c.instructions+=2;goto B42efb1;
case 0x42efb3:c.instructions+=1;goto B42efb3;
case 0x42efb8:goto L42efb8;
case 0x42efbf:c.instructions+=1;goto B42efbf;
case 0x42efc1:goto L42efc1;
case 0x42efc6:c.instructions+=2;goto B42efc6;
case 0x42efc8:c.instructions+=1;goto B42efc8;
case 0x42efca:goto L42efca;
case 0x42efd0:c.instructions+=2;goto B42efd0;
case 0x42efd1:c.instructions+=1;goto B42efd1;
case 0x42efd2:goto L42efd2;
case 0x42efd8:c.instructions+=2;goto B42efd8;
case 0x42efd9:c.instructions+=1;goto B42efd9;
case 0x42efe0:goto L42efe0;
case 0x42eff0:goto L42eff0;
case 0x42eff3:c.instructions+=7;goto B42eff3;
case 0x42eff4:c.instructions+=6;goto B42eff4;
case 0x42eff5:c.instructions+=5;goto B42eff5;
case 0x42eff6:c.instructions+=4;goto B42eff6;
case 0x42eff7:c.instructions+=3;goto B42eff7;
case 0x42effb:c.instructions+=2;goto B42effb;
case 0x42effd:c.instructions+=1;goto B42effd;
default:missing_instruction(c.pc);}
B42e003:L42e003:{c.instructions+=14;NFSU2_TR(0x42e003);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B42e006:{NFSU2_TR(0x42e006);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e009:{NFSU2_TR(0x42e009);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e00c:{NFSU2_TR(0x42e00c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42e00e:{NFSU2_TR(0x42e00e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e010:{NFSU2_TR(0x42e010);
__builtin_memmove((R+8),(R+518),1);
}
B42e013:{NFSU2_TR(0x42e013);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e014:{NFSU2_TR(0x42e014);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e015:{NFSU2_TR(0x42e015);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e016:{NFSU2_TR(0x42e016);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e017:{NFSU2_TR(0x42e017);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42e01a:{NFSU2_TR(0x42e01a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e01b:{NFSU2_TR(0x42e01b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e01c:{NFSU2_TR(0x42e01c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e021ull));
TAIL_STATIC(0x40f4a0u,40f);
}
B42e021:L42e021:{c.instructions+=3;NFSU2_TR(0x42e021);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42e02b:{NFSU2_TR(0x42e02b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e031:{NFSU2_TR(0x42e031);
{goto L42e078;}
}
B42e033:L42e033:{c.instructions+=3;NFSU2_TR(0x42e033);
u8 U[4];
w4(U+0,u32(0xfffffffcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e035:{NFSU2_TR(0x42e035);
__builtin_memmove((R+4),(R+24),4);
}
B42e037:{NFSU2_TR(0x42e037);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e03cull));
TAIL_STATIC(0x41d720u,41d);
}
B42e03c:L42e03c:{c.instructions+=3;NFSU2_TR(0x42e03c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42e042:{NFSU2_TR(0x42e042);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e044:{NFSU2_TR(0x42e044);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42e09b;}}
}
B42e046:L42e046:{c.instructions+=2;NFSU2_TR(0x42e046);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e048:{NFSU2_TR(0x42e048);
if(r1(R+518)){{goto L42e09b;}}
}
B42e04a:L42e04a:{c.instructions+=14;NFSU2_TR(0x42e04a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B42e04d:{NFSU2_TR(0x42e04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e050:{NFSU2_TR(0x42e050);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e053:{NFSU2_TR(0x42e053);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42e055:{NFSU2_TR(0x42e055);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e057:{NFSU2_TR(0x42e057);
__builtin_memmove((R+8),(R+518),1);
}
B42e05a:{NFSU2_TR(0x42e05a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e05b:{NFSU2_TR(0x42e05b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e05c:{NFSU2_TR(0x42e05c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e05d:{NFSU2_TR(0x42e05d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e05e:{NFSU2_TR(0x42e05e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42e061:{NFSU2_TR(0x42e061);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e062:{NFSU2_TR(0x42e062);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e063:{NFSU2_TR(0x42e063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e068ull));
TAIL_STATIC(0x40f4a0u,40f);
}
B42e068:L42e068:{c.instructions+=2;NFSU2_TR(0x42e068);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e06e:{NFSU2_TR(0x42e06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bcull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42e078:L42e078:{c.instructions+=7;NFSU2_TR(0x42e078);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e07b:{NFSU2_TR(0x42e07b);
w4(R+0,u32(0x1ull));
}
B42e080:{NFSU2_TR(0x42e080);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e086:{NFSU2_TR(0x42e086);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42e08c:{NFSU2_TR(0x42e08c);
{u32 ea_=u32(r4(R+8)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e092:{NFSU2_TR(0x42e092);
{u32 ea_=u32(r4(R+24)+u32(1996u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e098:{NFSU2_TR(0x42e098);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B42e09b:L42e09b:{c.instructions+=4;NFSU2_TR(0x42e09b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e09f:{NFSU2_TR(0x42e09f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e0a0:{NFSU2_TR(0x42e0a0);
__builtin_memmove((R+4),(R+24),4);
}
B42e0a2:{NFSU2_TR(0x42e0a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e0a7ull));
TAIL_STATIC(0x42c0c0u,42c);
}
B42e0a7:L42e0a7:{c.instructions+=5;NFSU2_TR(0x42e0a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42e0a8:{NFSU2_TR(0x42e0a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42e0a9:{NFSU2_TR(0x42e0a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42e0aa:{NFSU2_TR(0x42e0aa);
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
B42e0ad:{NFSU2_TR(0x42e0ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e0b0:L42e0b0:{c.instructions+=7;NFSU2_TR(0x42e0b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B42e0b3:{NFSU2_TR(0x42e0b3);
__builtin_memmove((R+0),gp(0x883dc8),4);
}
B42e0b8:{NFSU2_TR(0x42e0b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e0ba:{NFSU2_TR(0x42e0ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e0bb:{NFSU2_TR(0x42e0bb);
__builtin_memmove((R+28),(R+4),4);
}
B42e0bd:{NFSU2_TR(0x42e0bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e0c1:{NFSU2_TR(0x42e0c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42e0cc;}}
}
B42e0c3:L42e0c3:{c.instructions+=4;NFSU2_TR(0x42e0c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42e0c5:{NFSU2_TR(0x42e0c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42e0c6:{NFSU2_TR(0x42e0c6);
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
B42e0c9:{NFSU2_TR(0x42e0c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e0cc:L42e0cc:{c.instructions+=13;NFSU2_TR(0x42e0cc);
__builtin_memmove((R+0),gp(0x890118),4);
}
B42e0d1:{NFSU2_TR(0x42e0d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B42e0d8:{NFSU2_TR(0x42e0d8);
__builtin_memmove((R+8),gp(0x89e7a8),4);
}
B42e0de:{NFSU2_TR(0x42e0de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e0df:{NFSU2_TR(0x42e0df);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e0e6:{NFSU2_TR(0x42e0e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e0e7:{NFSU2_TR(0x42e0e7);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42e0ed:{NFSU2_TR(0x42e0ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e0f1:{NFSU2_TR(0x42e0f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42e0f9:{NFSU2_TR(0x42e0f9);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42e0ff:{NFSU2_TR(0x42e0ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e100:{NFSU2_TR(0x42e100);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e104:{NFSU2_TR(0x42e104);
{goto L42e110;}
}
B42e110:L42e110:{c.instructions+=3;NFSU2_TR(0x42e110);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42e116:{NFSU2_TR(0x42e116);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e11b:{NFSU2_TR(0x42e11b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e120ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B42e120:L42e120:{c.instructions+=4;NFSU2_TR(0x42e120);
{u32 ea_=u32(u32(7879600u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42e126:{NFSU2_TR(0x42e126);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42e128:{NFSU2_TR(0x42e128);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42e12b:{NFSU2_TR(0x42e12b);
if(r1(R+514)){{goto L42e131;}}
}
B42e12d:L42e12d:{c.instructions+=2;NFSU2_TR(0x42e12d);
w1(R+12,u8(0x1ull));
}
B42e12f:{NFSU2_TR(0x42e12f);
{goto L42e133;}
}
B42e131:L42e131:{c.instructions+=1;NFSU2_TR(0x42e131);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B42e133:L42e133:{c.instructions+=19;NFSU2_TR(0x42e133);
__builtin_memmove((R+4),gp(0x89e7a4),4);
}
B42e139:{NFSU2_TR(0x42e139);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e13f:{NFSU2_TR(0x42e13f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e143:{NFSU2_TR(0x42e143);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B42e145:{NFSU2_TR(0x42e145);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42e147:{NFSU2_TR(0x42e147);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e149:{NFSU2_TR(0x42e149);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B42e14c:{NFSU2_TR(0x42e14c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e14d:{NFSU2_TR(0x42e14d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e14f:{NFSU2_TR(0x42e14f);
__builtin_memmove((R+24),(R+0),4);
}
B42e151:{NFSU2_TR(0x42e151);
__builtin_memmove((R+0),gp(0x88f2b0),4);
}
B42e156:{NFSU2_TR(0x42e156);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e157:{NFSU2_TR(0x42e157);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e159:{NFSU2_TR(0x42e159);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e15a:{NFSU2_TR(0x42e15a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e15b:{NFSU2_TR(0x42e15b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e15c:{NFSU2_TR(0x42e15c);
__builtin_memmove((R+4),(R+28),4);
}
B42e15e:{NFSU2_TR(0x42e15e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e161:{NFSU2_TR(0x42e161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e166ull));
TAIL_STATIC(0x409570u,409);
}
B42e166:L42e166:{c.instructions+=3;NFSU2_TR(0x42e166);
__builtin_memmove((R+20),(R+0),4);
}
B42e168:{NFSU2_TR(0x42e168);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e16a:{NFSU2_TR(0x42e16a);
if(r1(R+518)){{goto L42e237;}}
}
B42e170:L42e170:{c.instructions+=3;NFSU2_TR(0x42e170);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+4),(U+12),2);
}
B42e175:{NFSU2_TR(0x42e175);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B42e179:{NFSU2_TR(0x42e179);
if(r1(R+518)){{goto L42e1c2;}}
}
B42e17b:L42e17b:{c.instructions+=6;NFSU2_TR(0x42e17b);
__builtin_memmove((R+8),gp(0x89e7a8),4);
}
B42e181:{NFSU2_TR(0x42e181);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B42e185:{NFSU2_TR(0x42e185);
__builtin_memmove((R+8),gp(0x89e7a4),4);
}
B42e18b:{NFSU2_TR(0x42e18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B42e18e:{NFSU2_TR(0x42e18e);
u8 U[11];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B42e192:{NFSU2_TR(0x42e192);
if(r1(R+518)){{goto L42e1c2;}}
}
B42e194:L42e194:{c.instructions+=3;NFSU2_TR(0x42e194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42e197:{NFSU2_TR(0x42e197);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B42e199:{NFSU2_TR(0x42e199);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42e1b1;}}
}
B42e19b:L42e19b:{c.instructions+=5;NFSU2_TR(0x42e19b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B42e1a2:{NFSU2_TR(0x42e1a2);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B42e1a5:{NFSU2_TR(0x42e1a5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B42e1a8:{NFSU2_TR(0x42e1a8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B42e1af:{NFSU2_TR(0x42e1af);
{goto L42e1c4;}
}
B42e1b1:L42e1b1:{c.instructions+=5;NFSU2_TR(0x42e1b1);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B42e1b4:{NFSU2_TR(0x42e1b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42e1b6:{NFSU2_TR(0x42e1b6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B42e1b9:{NFSU2_TR(0x42e1b9);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B42e1c0:{NFSU2_TR(0x42e1c0);
{goto L42e1c4;}
}
B42e1c2:L42e1c2:{c.instructions+=1;NFSU2_TR(0x42e1c2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B42e1c4:L42e1c4:{c.instructions+=6;NFSU2_TR(0x42e1c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e1c6:{NFSU2_TR(0x42e1c6);
__builtin_memmove((R+8),(R+518),1);
}
B42e1c9:{NFSU2_TR(0x42e1c9);
__builtin_memmove((R+4),(R+28),4);
}
B42e1cb:{NFSU2_TR(0x42e1cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e1cc:{NFSU2_TR(0x42e1cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e1cd:{NFSU2_TR(0x42e1cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e1d2ull));
TAIL_STATIC(0x410ca0u,410);
}
B42e1d2:L42e1d2:{c.instructions+=3;NFSU2_TR(0x42e1d2);
__builtin_memmove((R+28),(R+0),4);
}
B42e1d4:{NFSU2_TR(0x42e1d4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42e1d7:{NFSU2_TR(0x42e1d7);
if(r1(R+518)){{goto L42e233;}}
}
B42e1d9:L42e1d9:{c.instructions+=3;NFSU2_TR(0x42e1d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e1dd:{NFSU2_TR(0x42e1dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e1de:{NFSU2_TR(0x42e1de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e1e3ull));
TAIL_STATIC(0x410c20u,410);
}
B42e1e3:L42e1e3:{c.instructions+=8;NFSU2_TR(0x42e1e3);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B42e1e9:{NFSU2_TR(0x42e1e9);
__builtin_memmove((R+24),(R+0),4);
}
B42e1eb:{NFSU2_TR(0x42e1eb);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B42e1f0:{NFSU2_TR(0x42e1f0);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e1f7:{NFSU2_TR(0x42e1f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e1f8:{NFSU2_TR(0x42e1f8);
__builtin_memmove((R+4),(R+24),4);
}
B42e1fa:{NFSU2_TR(0x42e1fa);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e1fe:{NFSU2_TR(0x42e1fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e203ull));
TAIL_STATIC(0x5e2da0u,5e2);
}
B42e203:L42e203:{c.instructions+=8;NFSU2_TR(0x42e203);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e207:{NFSU2_TR(0x42e207);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e20b:{NFSU2_TR(0x42e20b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e20c:{NFSU2_TR(0x42e20c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e20e:{NFSU2_TR(0x42e20e);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42e212:{NFSU2_TR(0x42e212);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e213:{NFSU2_TR(0x42e213);
__builtin_memmove((R+4),(R+24),4);
}
B42e215:{NFSU2_TR(0x42e215);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e21aull));
TAIL_STATIC(0x5dd2f0u,5dd);
}
B42e21a:L42e21a:{c.instructions+=7;NFSU2_TR(0x42e21a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e21e:{NFSU2_TR(0x42e21e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e220:{NFSU2_TR(0x42e220);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e221:{NFSU2_TR(0x42e221);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e222:{NFSU2_TR(0x42e222);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42e226:{NFSU2_TR(0x42e226);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e227:{NFSU2_TR(0x42e227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e22cull));
TAIL_STATIC(0x410fc0u,410);
}
B42e22c:L42e22c:{c.instructions+=3;NFSU2_TR(0x42e22c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B42e22f:{NFSU2_TR(0x42e22f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e231:{NFSU2_TR(0x42e231);
if(r1(R+518)){{goto L42e255;}}
}
B42e233:L42e233:{c.instructions+=1;NFSU2_TR(0x42e233);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42e237:L42e237:{c.instructions+=5;NFSU2_TR(0x42e237);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e23b:{NFSU2_TR(0x42e23b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42e23c:{NFSU2_TR(0x42e23c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42e23f:{NFSU2_TR(0x42e23f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e243:{NFSU2_TR(0x42e243);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42e110u);}goto L42e110;}}
}
B42e249:L42e249:{c.instructions+=7;NFSU2_TR(0x42e249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42e24a:{NFSU2_TR(0x42e24a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42e24b:{NFSU2_TR(0x42e24b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42e24c:{NFSU2_TR(0x42e24c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42e24e:{NFSU2_TR(0x42e24e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42e24f:{NFSU2_TR(0x42e24f);
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
B42e252:{NFSU2_TR(0x42e252);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e255:L42e255:{c.instructions+=15;NFSU2_TR(0x42e255);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B42e25a:{NFSU2_TR(0x42e25a);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B42e25f:{NFSU2_TR(0x42e25f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e263:{NFSU2_TR(0x42e263);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B42e266:{NFSU2_TR(0x42e266);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e26a:{NFSU2_TR(0x42e26a);
u8 U[12];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B42e26e:{NFSU2_TR(0x42e26e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42e272:{NFSU2_TR(0x42e272);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42e278:{NFSU2_TR(0x42e278);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e27c:{NFSU2_TR(0x42e27c);
{u32 ea_=u32(u32(7881384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42e282:{NFSU2_TR(0x42e282);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B42e286:{NFSU2_TR(0x42e286);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B42e288:{NFSU2_TR(0x42e288);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42e28a:{NFSU2_TR(0x42e28a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42e28d:{NFSU2_TR(0x42e28d);
if(r1(R+514)){{goto L42e29b;}}
}
B42e28f:L42e28f:{c.instructions+=4;NFSU2_TR(0x42e28f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e293:{NFSU2_TR(0x42e293);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42e295:{NFSU2_TR(0x42e295);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e299:{NFSU2_TR(0x42e299);
{goto L42e29f;}
}
B42e29b:L42e29b:{c.instructions+=1;NFSU2_TR(0x42e29b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e29f:L42e29f:{c.instructions+=9;NFSU2_TR(0x42e29f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e2a3:{NFSU2_TR(0x42e2a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e2a7:{NFSU2_TR(0x42e2a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e2a8:{NFSU2_TR(0x42e2a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e2a9:{NFSU2_TR(0x42e2a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e2ad:{NFSU2_TR(0x42e2ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e2ae:{NFSU2_TR(0x42e2ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e2af:{NFSU2_TR(0x42e2af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e2b0:{NFSU2_TR(0x42e2b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e2b5ull));
TAIL_STATIC(0x42c670u,42c);
}
B42e2b5:L42e2b5:{c.instructions+=6;NFSU2_TR(0x42e2b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42e2b6:{NFSU2_TR(0x42e2b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42e2b7:{NFSU2_TR(0x42e2b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42e2b8:{NFSU2_TR(0x42e2b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42e2b9:{NFSU2_TR(0x42e2b9);
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
B42e2bc:{NFSU2_TR(0x42e2bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e2c0:L42e2c0:{c.instructions+=14;NFSU2_TR(0x42e2c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e2c1:{NFSU2_TR(0x42e2c1);
__builtin_memmove((R+20),(R+16),4);
}
B42e2c3:{NFSU2_TR(0x42e2c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B42e2c6:{NFSU2_TR(0x42e2c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B42e2c9:{NFSU2_TR(0x42e2c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e2ca:{NFSU2_TR(0x42e2ca);
__builtin_memmove((R+12),(R+4),4);
}
B42e2cc:{NFSU2_TR(0x42e2cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e2cf:{NFSU2_TR(0x42e2cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42e2d1:{NFSU2_TR(0x42e2d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42e2d3:{NFSU2_TR(0x42e2d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e2d4:{NFSU2_TR(0x42e2d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e2d5:{NFSU2_TR(0x42e2d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e2d9:{NFSU2_TR(0x42e2d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e2dd:{NFSU2_TR(0x42e2dd);
if(r1(R+518)){{goto L42e457;}}
}
B42e2e3:L42e2e3:{c.instructions+=2;NFSU2_TR(0x42e2e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e2e7:{NFSU2_TR(0x42e2e7);
{goto L42e2f0;}
}
B42e2f0:L42e2f0:{c.instructions+=8;NFSU2_TR(0x42e2f0);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B42e2f6:{NFSU2_TR(0x42e2f6);
__builtin_memmove((R+0),gp(0x89e7a8),4);
}
B42e2fb:{NFSU2_TR(0x42e2fb);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e302:{NFSU2_TR(0x42e302);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42e308:{NFSU2_TR(0x42e308);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B42e30e:{NFSU2_TR(0x42e30e);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e313:{NFSU2_TR(0x42e313);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e317:{NFSU2_TR(0x42e317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e31cull));
TAIL_STATIC(0x5ea500u,5ea);
}
B42e31c:L42e31c:{c.instructions+=5;NFSU2_TR(0x42e31c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42e320:{NFSU2_TR(0x42e320);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42e325:{NFSU2_TR(0x42e325);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42e327:{NFSU2_TR(0x42e327);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42e32a:{NFSU2_TR(0x42e32a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42e331;}}
}
B42e32c:L42e32c:{c.instructions+=1;NFSU2_TR(0x42e32c);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42e331:L42e331:{c.instructions+=6;NFSU2_TR(0x42e331);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e335:{NFSU2_TR(0x42e335);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e336:{NFSU2_TR(0x42e336);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42e33a:{NFSU2_TR(0x42e33a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e33b:{NFSU2_TR(0x42e33b);
__builtin_memmove((R+4),(R+12),4);
}
B42e33d:{NFSU2_TR(0x42e33d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e342ull));
TAIL_STATIC(0x411110u,411);
}
B42e342:L42e342:{c.instructions+=3;NFSU2_TR(0x42e342);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42e346:{NFSU2_TR(0x42e346);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e348:{NFSU2_TR(0x42e348);
if(r1(R+518)){{goto L42e445;}}
}
B42e34e:L42e34e:{c.instructions+=3;NFSU2_TR(0x42e34e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42e352:{NFSU2_TR(0x42e352);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e354:{NFSU2_TR(0x42e354);
if(r1(R+518)){{goto L42e445;}}
}
B42e35a:L42e35a:{c.instructions+=7;NFSU2_TR(0x42e35a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e35d:{NFSU2_TR(0x42e35d);
__builtin_memmove((R+4),(R+0),4);
}
B42e35f:{NFSU2_TR(0x42e35f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B42e365:{NFSU2_TR(0x42e365);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B42e369:{NFSU2_TR(0x42e369);
__builtin_memmove((R+4),(R+518),1);
}
B42e36c:{NFSU2_TR(0x42e36c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e36e:{NFSU2_TR(0x42e36e);
if(r1(R+518)){{goto L42e445;}}
}
B42e374:L42e374:{c.instructions+=2;NFSU2_TR(0x42e374);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e379:{NFSU2_TR(0x42e379);
if(r1(R+518)){{goto L42e445;}}
}
B42e37f:L42e37f:{c.instructions+=2;NFSU2_TR(0x42e37f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e384:{NFSU2_TR(0x42e384);
if(r1(R+518)){{goto L42e445;}}
}
B42e38a:L42e38a:{c.instructions+=14;NFSU2_TR(0x42e38a);
__builtin_memmove((R+4),(R+24),4);
}
B42e38c:{NFSU2_TR(0x42e38c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B42e38e:{NFSU2_TR(0x42e38e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8cull))));
}
B42e394:{NFSU2_TR(0x42e394);
w4(R+0,u32(0x92492493ull));
}
B42e399:{NFSU2_TR(0x42e399);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B42e39b:{NFSU2_TR(0x42e39b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B42e39d:{NFSU2_TR(0x42e39d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B42e3a1:{NFSU2_TR(0x42e3a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B42e3a4:{NFSU2_TR(0x42e3a4);
__builtin_memmove((R+0),(R+8),4);
}
B42e3a6:{NFSU2_TR(0x42e3a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B42e3a9:{NFSU2_TR(0x42e3a9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B42e3ab:{NFSU2_TR(0x42e3ab);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B42e3ae:{NFSU2_TR(0x42e3ae);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42e3b0:{NFSU2_TR(0x42e3b0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42e445;}}
}
B42e3b6:L42e3b6:{c.instructions+=21;NFSU2_TR(0x42e3b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42e3b8:{NFSU2_TR(0x42e3b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e3bc:{NFSU2_TR(0x42e3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e3bf:{NFSU2_TR(0x42e3bf);
__builtin_memmove((R+8),gp(0x89e7a4),4);
}
B42e3c5:{NFSU2_TR(0x42e3c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e3c9:{NFSU2_TR(0x42e3c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B42e3cd:{NFSU2_TR(0x42e3cd);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B42e3d2:{NFSU2_TR(0x42e3d2);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B42e3d5:{NFSU2_TR(0x42e3d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e3d9:{NFSU2_TR(0x42e3d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e3db:{NFSU2_TR(0x42e3db);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42e3df:{NFSU2_TR(0x42e3df);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42e3e5:{NFSU2_TR(0x42e3e5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e3e9:{NFSU2_TR(0x42e3e9);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e3f0:{NFSU2_TR(0x42e3f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42e3f4:{NFSU2_TR(0x42e3f4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e3f8:{NFSU2_TR(0x42e3f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e3fc:{NFSU2_TR(0x42e3fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e3fd:{NFSU2_TR(0x42e3fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e3fe:{NFSU2_TR(0x42e3fe);
__builtin_memmove((R+4),(R+12),4);
}
B42e400:{NFSU2_TR(0x42e400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e405ull));
TAIL_STATIC(0x418110u,418);
}
B42e405:L42e405:{c.instructions+=2;NFSU2_TR(0x42e405);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e407:{NFSU2_TR(0x42e407);
if(r1(R+518)){{goto L42e445;}}
}
B42e409:L42e409:{c.instructions+=3;NFSU2_TR(0x42e409);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B42e40e:{NFSU2_TR(0x42e40e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e410:{NFSU2_TR(0x42e410);
if(r1(R+518)){{goto L42e42b;}}
}
B42e412:L42e412:{c.instructions+=4;NFSU2_TR(0x42e412);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e415:{NFSU2_TR(0x42e415);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B42e418:{NFSU2_TR(0x42e418);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e41a:{NFSU2_TR(0x42e41a);
if(r1(R+518)){{goto L42e42b;}}
}
B42e41c:L42e41c:{c.instructions+=5;NFSU2_TR(0x42e41c);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42e420:{NFSU2_TR(0x42e420);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e422:{NFSU2_TR(0x42e422);
__builtin_memmove((R+4),(R+518),1);
}
B42e425:{NFSU2_TR(0x42e425);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42e429:{NFSU2_TR(0x42e429);
{goto L42e433;}
}
B42e42b:L42e42b:{c.instructions+=2;NFSU2_TR(0x42e42b);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B42e42f:{NFSU2_TR(0x42e42f);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42e433:L42e433:{c.instructions+=5;NFSU2_TR(0x42e433);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e437:{NFSU2_TR(0x42e437);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e438:{NFSU2_TR(0x42e438);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e439:{NFSU2_TR(0x42e439);
__builtin_memmove((R+4),(R+12),4);
}
B42e43b:{NFSU2_TR(0x42e43b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e440ull));
TAIL_STATIC(0x417c30u,417);
}
B42e440:L42e440:{c.instructions+=2;NFSU2_TR(0x42e440);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42e443:{NFSU2_TR(0x42e443);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42e462;}}
}
B42e445:L42e445:{c.instructions+=5;NFSU2_TR(0x42e445);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e449:{NFSU2_TR(0x42e449);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42e44a:{NFSU2_TR(0x42e44a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42e44d:{NFSU2_TR(0x42e44d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e451:{NFSU2_TR(0x42e451);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42e2f0u);}goto L42e2f0;}}
}
B42e457:L42e457:{c.instructions+=7;NFSU2_TR(0x42e457);
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
B42e459:{NFSU2_TR(0x42e459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42e45a:{NFSU2_TR(0x42e45a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42e45b:{NFSU2_TR(0x42e45b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42e45c:{NFSU2_TR(0x42e45c);
__builtin_memmove((R+16),(R+20),4);
}
B42e45e:{NFSU2_TR(0x42e45e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42e45f:{NFSU2_TR(0x42e45f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e462:L42e462:{c.instructions+=14;NFSU2_TR(0x42e462);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B42e467:{NFSU2_TR(0x42e467);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e46a:{NFSU2_TR(0x42e46a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B42e46d:{NFSU2_TR(0x42e46d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e471:{NFSU2_TR(0x42e471);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e473:{NFSU2_TR(0x42e473);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e474:{NFSU2_TR(0x42e474);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42e478:{NFSU2_TR(0x42e478);
__builtin_memmove((R+4),(R+12),4);
}
B42e47a:{NFSU2_TR(0x42e47a);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42e480:{NFSU2_TR(0x42e480);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e483:{NFSU2_TR(0x42e483);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e484:{NFSU2_TR(0x42e484);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e485:{NFSU2_TR(0x42e485);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e486:{NFSU2_TR(0x42e486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e48bull));
TAIL_STATIC(0x42c670u,42c);
}
B42e48b:L42e48b:{c.instructions+=6;NFSU2_TR(0x42e48b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42e48c:{NFSU2_TR(0x42e48c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42e48d:{NFSU2_TR(0x42e48d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42e48e:{NFSU2_TR(0x42e48e);
__builtin_memmove((R+16),(R+20),4);
}
B42e490:{NFSU2_TR(0x42e490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42e491:{NFSU2_TR(0x42e491);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e4a0:L42e4a0:{c.instructions+=6;NFSU2_TR(0x42e4a0);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B42e4a5:{NFSU2_TR(0x42e4a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B42e4a8:{NFSU2_TR(0x42e4a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e4aa:{NFSU2_TR(0x42e4aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e4ab:{NFSU2_TR(0x42e4ab);
__builtin_memmove((R+20),(R+4),4);
}
B42e4ad:{NFSU2_TR(0x42e4ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42e4b8;}}
}
B42e4af:L42e4af:{c.instructions+=4;NFSU2_TR(0x42e4af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42e4b1:{NFSU2_TR(0x42e4b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42e4b2:{NFSU2_TR(0x42e4b2);
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
B42e4b5:{NFSU2_TR(0x42e4b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e4b8:L42e4b8:{c.instructions+=5;NFSU2_TR(0x42e4b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e4b9:{NFSU2_TR(0x42e4b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e4ba:{NFSU2_TR(0x42e4ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e4bb:{NFSU2_TR(0x42e4bb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42e4bd:{NFSU2_TR(0x42e4bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e4c1:L42e4c1:{c.instructions+=18;NFSU2_TR(0x42e4c1);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B42e4c6:{NFSU2_TR(0x42e4c6);
__builtin_memmove((R+4),gp(0x89e7a4),4);
}
B42e4cc:{NFSU2_TR(0x42e4cc);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e4d3:{NFSU2_TR(0x42e4d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e4d7:{NFSU2_TR(0x42e4d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B42e4db:{NFSU2_TR(0x42e4db);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e4df:{NFSU2_TR(0x42e4df);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffceull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B42e4e3:{NFSU2_TR(0x42e4e3);
__builtin_memmove((R+4),gp(0x89e7a8),4);
}
B42e4e9:{NFSU2_TR(0x42e4e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e4ed:{NFSU2_TR(0x42e4ed);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e4f2:{NFSU2_TR(0x42e4f2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42e4f6:{NFSU2_TR(0x42e4f6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42e4fa:{NFSU2_TR(0x42e4fa);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e4fe:{NFSU2_TR(0x42e4fe);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e505:{NFSU2_TR(0x42e505);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42e50b:{NFSU2_TR(0x42e50b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B42e511:{NFSU2_TR(0x42e511);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e515:{NFSU2_TR(0x42e515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e51aull));
TAIL_STATIC(0x5ea500u,5ea);
}
B42e51a:L42e51a:{c.instructions+=4;NFSU2_TR(0x42e51a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42e51e:{NFSU2_TR(0x42e51e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42e520:{NFSU2_TR(0x42e520);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42e523:{NFSU2_TR(0x42e523);
if(r1(R+514)){{goto L42e529;}}
}
B42e525:L42e525:{c.instructions+=2;NFSU2_TR(0x42e525);
w1(R+12,u8(0x1ull));
}
B42e527:{NFSU2_TR(0x42e527);
{goto L42e52b;}
}
B42e529:L42e529:{c.instructions+=1;NFSU2_TR(0x42e529);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B42e52b:L42e52b:{c.instructions+=9;NFSU2_TR(0x42e52b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e52f:{NFSU2_TR(0x42e52f);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42e533:{NFSU2_TR(0x42e533);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e537:{NFSU2_TR(0x42e537);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e538:{NFSU2_TR(0x42e538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e539:{NFSU2_TR(0x42e539);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e53b:{NFSU2_TR(0x42e53b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e53d:{NFSU2_TR(0x42e53d);
__builtin_memmove((R+4),(R+20),4);
}
B42e53f:{NFSU2_TR(0x42e53f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e544ull));
TAIL_STATIC(0x417c60u,417);
}
B42e544:L42e544:{c.instructions+=3;NFSU2_TR(0x42e544);
__builtin_memmove((R+24),(R+0),4);
}
B42e546:{NFSU2_TR(0x42e546);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e548:{NFSU2_TR(0x42e548);
if(r1(R+518)){{goto L42e5c9;}}
}
B42e54a:L42e54a:{c.instructions+=3;NFSU2_TR(0x42e54a);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B42e54f:{NFSU2_TR(0x42e54f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e551:{NFSU2_TR(0x42e551);
if(r1(R+518)){{goto L42e569;}}
}
B42e553:L42e553:{c.instructions+=2;NFSU2_TR(0x42e553);
__builtin_memmove((R+4),(R+24),4);
}
B42e555:{NFSU2_TR(0x42e555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e55aull));
TAIL_STATIC(0x5d8990u,5d8);
}
B42e55a:L42e55a:{c.instructions+=4;NFSU2_TR(0x42e55a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e55d:{NFSU2_TR(0x42e55d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x2ull))));
}
B42e560:{NFSU2_TR(0x42e560);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e562:{NFSU2_TR(0x42e562);
if(r1(R+518)){{goto L42e569;}}
}
B42e564:L42e564:{c.instructions+=2;NFSU2_TR(0x42e564);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e566:{NFSU2_TR(0x42e566);
__builtin_memmove((R+12),(R+518),1);
}
B42e569:L42e569:{c.instructions+=6;NFSU2_TR(0x42e569);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42e56d:{NFSU2_TR(0x42e56d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e571:{NFSU2_TR(0x42e571);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e572:{NFSU2_TR(0x42e572);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e573:{NFSU2_TR(0x42e573);
__builtin_memmove((R+4),(R+20),4);
}
B42e575:{NFSU2_TR(0x42e575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e57aull));
TAIL_STATIC(0x410ca0u,410);
}
B42e57a:L42e57a:{c.instructions+=3;NFSU2_TR(0x42e57a);
__builtin_memmove((R+28),(R+0),4);
}
B42e57c:{NFSU2_TR(0x42e57c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42e57f:{NFSU2_TR(0x42e57f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42e596;}}
}
B42e581:L42e581:{c.instructions+=6;NFSU2_TR(0x42e581);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e583:{NFSU2_TR(0x42e583);
__builtin_memmove((R+0),(R+518),1);
}
B42e586:{NFSU2_TR(0x42e586);
__builtin_memmove((R+4),(R+20),4);
}
B42e588:{NFSU2_TR(0x42e588);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e589:{NFSU2_TR(0x42e589);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e58a:{NFSU2_TR(0x42e58a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e58full));
TAIL_STATIC(0x410ca0u,410);
}
B42e58f:L42e58f:{c.instructions+=3;NFSU2_TR(0x42e58f);
__builtin_memmove((R+28),(R+0),4);
}
B42e591:{NFSU2_TR(0x42e591);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42e594:{NFSU2_TR(0x42e594);
if(r1(R+518)){{goto L42e5c5;}}
}
B42e596:L42e596:{c.instructions+=12;NFSU2_TR(0x42e596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e599:{NFSU2_TR(0x42e599);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e59d:{NFSU2_TR(0x42e59d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B42e5a3:{NFSU2_TR(0x42e5a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B42e5aa:{NFSU2_TR(0x42e5aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e5ac:{NFSU2_TR(0x42e5ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e5ad:{NFSU2_TR(0x42e5ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42e5b1:{NFSU2_TR(0x42e5b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e5b2:{NFSU2_TR(0x42e5b2);
__builtin_memmove((R+4),(R+20),4);
}
B42e5b4:{NFSU2_TR(0x42e5b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e5b8:{NFSU2_TR(0x42e5b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e5bc:{NFSU2_TR(0x42e5bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e5c1ull));
TAIL_STATIC(0x418110u,418);
}
B42e5c1:L42e5c1:{c.instructions+=2;NFSU2_TR(0x42e5c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e5c3:{NFSU2_TR(0x42e5c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42e5e3;}}
}
B42e5c5:L42e5c5:{c.instructions+=1;NFSU2_TR(0x42e5c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42e5c9:L42e5c9:{c.instructions+=4;NFSU2_TR(0x42e5c9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B42e5ca:{NFSU2_TR(0x42e5ca);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42e5cd:{NFSU2_TR(0x42e5cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e5d1:{NFSU2_TR(0x42e5d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42e4c1u);}goto L42e4c1;}}
}
B42e5d7:L42e5d7:{c.instructions+=7;NFSU2_TR(0x42e5d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42e5d8:{NFSU2_TR(0x42e5d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42e5d9:{NFSU2_TR(0x42e5d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42e5da:{NFSU2_TR(0x42e5da);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42e5dc:{NFSU2_TR(0x42e5dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42e5dd:{NFSU2_TR(0x42e5dd);
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
B42e5e0:{NFSU2_TR(0x42e5e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e5e3:L42e5e3:{c.instructions+=14;NFSU2_TR(0x42e5e3);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B42e5e8:{NFSU2_TR(0x42e5e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e5ec:{NFSU2_TR(0x42e5ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B42e5ef:{NFSU2_TR(0x42e5ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e5f3:{NFSU2_TR(0x42e5f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e5f5:{NFSU2_TR(0x42e5f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e5f6:{NFSU2_TR(0x42e5f6);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42e5fa:{NFSU2_TR(0x42e5fa);
__builtin_memmove((R+4),(R+20),4);
}
B42e5fc:{NFSU2_TR(0x42e5fc);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42e602:{NFSU2_TR(0x42e602);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e605:{NFSU2_TR(0x42e605);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e606:{NFSU2_TR(0x42e606);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e607:{NFSU2_TR(0x42e607);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e608:{NFSU2_TR(0x42e608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e60dull));
TAIL_STATIC(0x42c670u,42c);
}
B42e60d:L42e60d:{c.instructions+=6;NFSU2_TR(0x42e60d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42e60e:{NFSU2_TR(0x42e60e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42e60f:{NFSU2_TR(0x42e60f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42e610:{NFSU2_TR(0x42e610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42e611:{NFSU2_TR(0x42e611);
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
B42e614:{NFSU2_TR(0x42e614);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e620:L42e620:{c.instructions+=6;NFSU2_TR(0x42e620);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B42e625:{NFSU2_TR(0x42e625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B42e628:{NFSU2_TR(0x42e628);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e62a:{NFSU2_TR(0x42e62a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e62b:{NFSU2_TR(0x42e62b);
__builtin_memmove((R+20),(R+4),4);
}
B42e62d:{NFSU2_TR(0x42e62d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42e638;}}
}
B42e62f:L42e62f:{c.instructions+=4;NFSU2_TR(0x42e62f);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B42e631:{NFSU2_TR(0x42e631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42e632:{NFSU2_TR(0x42e632);
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
B42e635:{NFSU2_TR(0x42e635);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e638:L42e638:{c.instructions+=12;NFSU2_TR(0x42e638);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e63c:{NFSU2_TR(0x42e63c);
{u32 ea_=u32(r4(R+4)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e642:{NFSU2_TR(0x42e642);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e643:{NFSU2_TR(0x42e643);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e644:{NFSU2_TR(0x42e644);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42e648:{NFSU2_TR(0x42e648);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e64e:{NFSU2_TR(0x42e64e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e64f:{NFSU2_TR(0x42e64f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e650:{NFSU2_TR(0x42e650);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e653:{NFSU2_TR(0x42e653);
w4(R+4,u32(0x88f298ull));
}
B42e658:{NFSU2_TR(0x42e658);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42e65d:{NFSU2_TR(0x42e65d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e662ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B42e662:L42e662:{c.instructions+=9;NFSU2_TR(0x42e662);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42e664:{NFSU2_TR(0x42e664);
__builtin_memmove((R+8),gp(0x89e7a8),4);
}
B42e66a:{NFSU2_TR(0x42e66a);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B42e66f:{NFSU2_TR(0x42e66f);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e676:{NFSU2_TR(0x42e676);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42e67c:{NFSU2_TR(0x42e67c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B42e682:{NFSU2_TR(0x42e682);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e687:{NFSU2_TR(0x42e687);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e68b:{NFSU2_TR(0x42e68b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e690ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B42e690:L42e690:{c.instructions+=4;NFSU2_TR(0x42e690);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42e694:{NFSU2_TR(0x42e694);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42e696:{NFSU2_TR(0x42e696);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42e699:{NFSU2_TR(0x42e699);
if(r1(R+514)){{goto L42e69f;}}
}
B42e69b:L42e69b:{c.instructions+=2;NFSU2_TR(0x42e69b);
w1(R+12,u8(0x1ull));
}
B42e69d:{NFSU2_TR(0x42e69d);
{goto L42e6a1;}
}
B42e69f:L42e69f:{c.instructions+=1;NFSU2_TR(0x42e69f);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B42e6a1:L42e6a1:{c.instructions+=12;NFSU2_TR(0x42e6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e6a7:{NFSU2_TR(0x42e6a7);
__builtin_memmove((R+0),gp(0x7e9720),4);
}
B42e6ac:{NFSU2_TR(0x42e6ac);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42e6b0:{NFSU2_TR(0x42e6b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e6b4:{NFSU2_TR(0x42e6b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e6b5:{NFSU2_TR(0x42e6b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e6b6:{NFSU2_TR(0x42e6b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e6b7:{NFSU2_TR(0x42e6b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e6bb:{NFSU2_TR(0x42e6bb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
}
B42e6be:{NFSU2_TR(0x42e6be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e6bf:{NFSU2_TR(0x42e6bf);
__builtin_memmove((R+4),(R+20),4);
}
B42e6c1:{NFSU2_TR(0x42e6c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e6c6ull));
TAIL_STATIC(0x417c60u,417);
}
B42e6c6:L42e6c6:{c.instructions+=3;NFSU2_TR(0x42e6c6);
__builtin_memmove((R+24),(R+0),4);
}
B42e6c8:{NFSU2_TR(0x42e6c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e6ca:{NFSU2_TR(0x42e6ca);
if(r1(R+518)){{goto L42e782;}}
}
B42e6d0:L42e6d0:{c.instructions+=3;NFSU2_TR(0x42e6d0);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B42e6d5:{NFSU2_TR(0x42e6d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e6d7:{NFSU2_TR(0x42e6d7);
if(r1(R+518)){{goto L42e6ef;}}
}
B42e6d9:L42e6d9:{c.instructions+=2;NFSU2_TR(0x42e6d9);
__builtin_memmove((R+4),(R+24),4);
}
B42e6db:{NFSU2_TR(0x42e6db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e6e0ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B42e6e0:L42e6e0:{c.instructions+=4;NFSU2_TR(0x42e6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e6e3:{NFSU2_TR(0x42e6e3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B42e6e6:{NFSU2_TR(0x42e6e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e6e8:{NFSU2_TR(0x42e6e8);
if(r1(R+518)){{goto L42e6ef;}}
}
B42e6ea:L42e6ea:{c.instructions+=2;NFSU2_TR(0x42e6ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e6ec:{NFSU2_TR(0x42e6ec);
__builtin_memmove((R+12),(R+518),1);
}
B42e6ef:L42e6ef:{c.instructions+=7;NFSU2_TR(0x42e6ef);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42e6f3:{NFSU2_TR(0x42e6f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e6f7:{NFSU2_TR(0x42e6f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e6f8:{NFSU2_TR(0x42e6f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e6f9:{NFSU2_TR(0x42e6f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e6fa:{NFSU2_TR(0x42e6fa);
__builtin_memmove((R+4),(R+20),4);
}
B42e6fc:{NFSU2_TR(0x42e6fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e701ull));
TAIL_STATIC(0x410ca0u,410);
}
B42e701:L42e701:{c.instructions+=3;NFSU2_TR(0x42e701);
__builtin_memmove((R+28),(R+0),4);
}
B42e703:{NFSU2_TR(0x42e703);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42e706:{NFSU2_TR(0x42e706);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42e71d;}}
}
B42e708:L42e708:{c.instructions+=6;NFSU2_TR(0x42e708);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e70a:{NFSU2_TR(0x42e70a);
__builtin_memmove((R+4),(R+518),1);
}
B42e70d:{NFSU2_TR(0x42e70d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e70e:{NFSU2_TR(0x42e70e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e70f:{NFSU2_TR(0x42e70f);
__builtin_memmove((R+4),(R+20),4);
}
B42e711:{NFSU2_TR(0x42e711);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e716ull));
TAIL_STATIC(0x410ca0u,410);
}
B42e716:L42e716:{c.instructions+=3;NFSU2_TR(0x42e716);
__builtin_memmove((R+28),(R+0),4);
}
B42e718:{NFSU2_TR(0x42e718);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42e71b:{NFSU2_TR(0x42e71b);
if(r1(R+518)){{goto L42e781;}}
}
B42e71d:L42e71d:{c.instructions+=13;NFSU2_TR(0x42e71d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e720:{NFSU2_TR(0x42e720);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42e724:{NFSU2_TR(0x42e724);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e728:{NFSU2_TR(0x42e728);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B42e72e:{NFSU2_TR(0x42e72e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B42e735:{NFSU2_TR(0x42e735);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e736:{NFSU2_TR(0x42e736);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e737:{NFSU2_TR(0x42e737);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42e73b:{NFSU2_TR(0x42e73b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e73c:{NFSU2_TR(0x42e73c);
__builtin_memmove((R+4),(R+20),4);
}
B42e73e:{NFSU2_TR(0x42e73e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e742:{NFSU2_TR(0x42e742);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e746:{NFSU2_TR(0x42e746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e74bull));
TAIL_STATIC(0x418110u,418);
}
B42e74b:L42e74b:{c.instructions+=2;NFSU2_TR(0x42e74b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e74d:{NFSU2_TR(0x42e74d);
if(r1(R+518)){{goto L42e781;}}
}
B42e74f:L42e74f:{c.instructions+=15;NFSU2_TR(0x42e74f);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B42e754:{NFSU2_TR(0x42e754);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B42e757:{NFSU2_TR(0x42e757);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e75b:{NFSU2_TR(0x42e75b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e75d:{NFSU2_TR(0x42e75d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e75e:{NFSU2_TR(0x42e75e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42e762:{NFSU2_TR(0x42e762);
__builtin_memmove((R+4),(R+20),4);
}
B42e764:{NFSU2_TR(0x42e764);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42e76a:{NFSU2_TR(0x42e76a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e76d:{NFSU2_TR(0x42e76d);
u8 U[4];
w4(U+0,u32(0x41c4b127ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e772:{NFSU2_TR(0x42e772);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e773:{NFSU2_TR(0x42e773);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e775:{NFSU2_TR(0x42e775);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e776:{NFSU2_TR(0x42e776);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e777:{NFSU2_TR(0x42e777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e77cull));
TAIL_STATIC(0x42c950u,42c);
}
B42e77c:L42e77c:{c.instructions+=1;NFSU2_TR(0x42e77c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42e781:L42e781:{c.instructions+=1;NFSU2_TR(0x42e781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42e782:L42e782:{c.instructions+=6;NFSU2_TR(0x42e782);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42e786:{NFSU2_TR(0x42e786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42e787:{NFSU2_TR(0x42e787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42e788:{NFSU2_TR(0x42e788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42e789:{NFSU2_TR(0x42e789);
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
B42e78c:{NFSU2_TR(0x42e78c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e790:L42e790:{c.instructions+=7;NFSU2_TR(0x42e790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B42e793:{NFSU2_TR(0x42e793);
__builtin_memmove((R+0),gp(0x883dc8),4);
}
B42e798:{NFSU2_TR(0x42e798);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e79a:{NFSU2_TR(0x42e79a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e79b:{NFSU2_TR(0x42e79b);
__builtin_memmove((R+24),(R+4),4);
}
B42e79d:{NFSU2_TR(0x42e79d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e7a1:{NFSU2_TR(0x42e7a1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42e7ac;}}
}
B42e7a3:L42e7a3:{c.instructions+=4;NFSU2_TR(0x42e7a3);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B42e7a5:{NFSU2_TR(0x42e7a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42e7a6:{NFSU2_TR(0x42e7a6);
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
B42e7a9:{NFSU2_TR(0x42e7a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e7ac:L42e7ac:{c.instructions+=7;NFSU2_TR(0x42e7ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e7b0:{NFSU2_TR(0x42e7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e7b3:{NFSU2_TR(0x42e7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e7b9:{NFSU2_TR(0x42e7b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e7bb:{NFSU2_TR(0x42e7bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e7bf:{NFSU2_TR(0x42e7bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e7c3:{NFSU2_TR(0x42e7c3);
if(r1(R+518)){{goto L42e7cb;}}
}
B42e7c5:L42e7c5:{c.instructions+=1;NFSU2_TR(0x42e7c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B42e7cb:L42e7cb:{c.instructions+=4;NFSU2_TR(0x42e7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42e7d5:{NFSU2_TR(0x42e7d5);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42e7db:{NFSU2_TR(0x42e7db);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e7e0:{NFSU2_TR(0x42e7e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e7e5ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B42e7e5:L42e7e5:{c.instructions+=5;NFSU2_TR(0x42e7e5);
{u32 ea_=u32(u32(7879600u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42e7eb:{NFSU2_TR(0x42e7eb);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42e7f0:{NFSU2_TR(0x42e7f0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42e7f2:{NFSU2_TR(0x42e7f2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42e7f5:{NFSU2_TR(0x42e7f5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42e7fc;}}
}
B42e7f7:L42e7f7:{c.instructions+=1;NFSU2_TR(0x42e7f7);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42e7fc:L42e7fc:{c.instructions+=17;NFSU2_TR(0x42e7fc);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42e800:{NFSU2_TR(0x42e800);
__builtin_memmove((R+8),gp(0x89e7a8),4);
}
B42e806:{NFSU2_TR(0x42e806);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e807:{NFSU2_TR(0x42e807);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42e809:{NFSU2_TR(0x42e809);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e80b:{NFSU2_TR(0x42e80b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e80f:{NFSU2_TR(0x42e80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e815:{NFSU2_TR(0x42e815);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e816:{NFSU2_TR(0x42e816);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e81a:{NFSU2_TR(0x42e81a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e820:{NFSU2_TR(0x42e820);
__builtin_memmove((R+20),(R+4),4);
}
B42e822:{NFSU2_TR(0x42e822);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e823:{NFSU2_TR(0x42e823);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e824:{NFSU2_TR(0x42e824);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B42e827:{NFSU2_TR(0x42e827);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e82b:{NFSU2_TR(0x42e82b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e82f:{NFSU2_TR(0x42e82f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e834ull));
TAIL_STATIC(0x4094a0u,409);
}
B42e834:L42e834:{c.instructions+=3;NFSU2_TR(0x42e834);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42e837:{NFSU2_TR(0x42e837);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e839:{NFSU2_TR(0x42e839);
if(r1(R+518)){{goto L42e84e;}}
}
B42e83b:L42e83b:{c.instructions+=6;NFSU2_TR(0x42e83b);
__builtin_memmove((R+0),(R+20),4);
}
B42e83d:{NFSU2_TR(0x42e83d);
__builtin_memmove((R+4),(R+20),4);
}
B42e83f:{NFSU2_TR(0x42e83f);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42e844:{NFSU2_TR(0x42e844);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e848:{NFSU2_TR(0x42e848);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e84c:{NFSU2_TR(0x42e84c);
{goto L42e86f;}
}
B42e84e:L42e84e:{c.instructions+=7;NFSU2_TR(0x42e84e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e852:{NFSU2_TR(0x42e852);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42e857:{NFSU2_TR(0x42e857);
{u32 ea_=u32(u32(7879640u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42e85d:{NFSU2_TR(0x42e85d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e861:{NFSU2_TR(0x42e861);
{u32 ea_=u32(u32(7879640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e867:{NFSU2_TR(0x42e867);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42e86b:{NFSU2_TR(0x42e86b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e86f:L42e86f:{c.instructions+=13;NFSU2_TR(0x42e86f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42e873:{NFSU2_TR(0x42e873);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e877:{NFSU2_TR(0x42e877);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e87b:{NFSU2_TR(0x42e87b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e87f:{NFSU2_TR(0x42e87f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e881:{NFSU2_TR(0x42e881);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e882:{NFSU2_TR(0x42e882);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e883:{NFSU2_TR(0x42e883);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e884:{NFSU2_TR(0x42e884);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e885:{NFSU2_TR(0x42e885);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e886:{NFSU2_TR(0x42e886);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e887:{NFSU2_TR(0x42e887);
__builtin_memmove((R+4),(R+24),4);
}
B42e889:{NFSU2_TR(0x42e889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e88eull));
TAIL_STATIC(0x409570u,409);
}
B42e88e:L42e88e:{c.instructions+=3;NFSU2_TR(0x42e88e);
__builtin_memmove((R+24),(R+0),4);
}
B42e890:{NFSU2_TR(0x42e890);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e892:{NFSU2_TR(0x42e892);
if(r1(R+518)){{goto L42e9bb;}}
}
B42e898:L42e898:{c.instructions+=7;NFSU2_TR(0x42e898);
__builtin_memmove((R+8),gp(0x89e7a8),4);
}
B42e89e:{NFSU2_TR(0x42e89e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e8a0:{NFSU2_TR(0x42e8a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e8a1:{NFSU2_TR(0x42e8a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e8a2:{NFSU2_TR(0x42e8a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e8a3:{NFSU2_TR(0x42e8a3);
__builtin_memmove((R+4),(R+24),4);
}
B42e8a5:{NFSU2_TR(0x42e8a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e8aaull));
TAIL_STATIC(0x4093e0u,409);
}
B42e8aa:L42e8aa:{c.instructions+=7;NFSU2_TR(0x42e8aa);
__builtin_memmove((R+28),(R+0),4);
}
B42e8ac:{NFSU2_TR(0x42e8ac);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e8af:{NFSU2_TR(0x42e8af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e8b0:{NFSU2_TR(0x42e8b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e8b1:{NFSU2_TR(0x42e8b1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e8b4:{NFSU2_TR(0x42e8b4);
w4(R+4,u32(0x88f298ull));
}
B42e8b9:{NFSU2_TR(0x42e8b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e8beull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B42e8be:L42e8be:{c.instructions+=8;NFSU2_TR(0x42e8be);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42e8c0:{NFSU2_TR(0x42e8c0);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42e8c4:{NFSU2_TR(0x42e8c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e8c8:{NFSU2_TR(0x42e8c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e8ca:{NFSU2_TR(0x42e8ca);
__builtin_memmove((R+0),(R+518),1);
}
B42e8cd:{NFSU2_TR(0x42e8cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e8ce:{NFSU2_TR(0x42e8ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e8cf:{NFSU2_TR(0x42e8cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e8d4ull));
TAIL_STATIC(0x410ca0u,410);
}
B42e8d4:L42e8d4:{c.instructions+=3;NFSU2_TR(0x42e8d4);
__builtin_memmove((R+20),(R+0),4);
}
B42e8d6:{NFSU2_TR(0x42e8d6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42e8d9:{NFSU2_TR(0x42e8d9);
if(r1(R+518)){{goto L42e9bb;}}
}
B42e8df:L42e8df:{c.instructions+=12;NFSU2_TR(0x42e8df);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e8e3:{NFSU2_TR(0x42e8e3);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e8ea:{NFSU2_TR(0x42e8ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e8eb:{NFSU2_TR(0x42e8eb);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e8ef:{NFSU2_TR(0x42e8ef);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42e8f5:{NFSU2_TR(0x42e8f5);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e8f9:{NFSU2_TR(0x42e8f9);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e8fd:{NFSU2_TR(0x42e8fd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B42e8ff:{NFSU2_TR(0x42e8ff);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B42e901:{NFSU2_TR(0x42e901);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e904:{NFSU2_TR(0x42e904);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42e906:{NFSU2_TR(0x42e906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e90bull));
TAIL_STATIC(0x5ea500u,5ea);
}
B42e90b:L42e90b:{c.instructions+=5;NFSU2_TR(0x42e90b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42e90f:{NFSU2_TR(0x42e90f);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42e913:{NFSU2_TR(0x42e913);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e915:{NFSU2_TR(0x42e915);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e919:{NFSU2_TR(0x42e919);
if(r1(R+518)){{goto L42e921;}}
}
B42e91b:L42e91b:{c.instructions+=2;NFSU2_TR(0x42e91b);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e91f:{NFSU2_TR(0x42e91f);
{goto L42e927;}
}
B42e921:L42e921:{c.instructions+=1;NFSU2_TR(0x42e921);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e927:L42e927:{c.instructions+=15;NFSU2_TR(0x42e927);
__builtin_memmove((R+4),gp(0x89e7a8),4);
}
B42e92d:{NFSU2_TR(0x42e92d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e931:{NFSU2_TR(0x42e931);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e938:{NFSU2_TR(0x42e938);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B42e93d:{NFSU2_TR(0x42e93d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B42e940:{NFSU2_TR(0x42e940);
{u32 ea_=u32(u32(7881384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42e946:{NFSU2_TR(0x42e946);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e94a:{NFSU2_TR(0x42e94a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e94e:{NFSU2_TR(0x42e94e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42e952:{NFSU2_TR(0x42e952);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42e958:{NFSU2_TR(0x42e958);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42e95c:{NFSU2_TR(0x42e95c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B42e95e:{NFSU2_TR(0x42e95e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42e960:{NFSU2_TR(0x42e960);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42e963:{NFSU2_TR(0x42e963);
if(r1(R+514)){{goto L42e971;}}
}
B42e965:L42e965:{c.instructions+=4;NFSU2_TR(0x42e965);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e969:{NFSU2_TR(0x42e969);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42e96b:{NFSU2_TR(0x42e96b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e96f:{NFSU2_TR(0x42e96f);
{goto L42e975;}
}
B42e971:L42e971:{c.instructions+=1;NFSU2_TR(0x42e971);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42e975:L42e975:{c.instructions+=10;NFSU2_TR(0x42e975);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e979:{NFSU2_TR(0x42e979);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e97d:{NFSU2_TR(0x42e97d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42e981:{NFSU2_TR(0x42e981);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e982:{NFSU2_TR(0x42e982);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e986:{NFSU2_TR(0x42e986);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e987:{NFSU2_TR(0x42e987);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e988:{NFSU2_TR(0x42e988);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e989:{NFSU2_TR(0x42e989);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e98a:{NFSU2_TR(0x42e98a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e98full));
TAIL_STATIC(0x410e30u,410);
}
B42e98f:L42e98f:{c.instructions+=2;NFSU2_TR(0x42e98f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42e991:{NFSU2_TR(0x42e991);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42e9bb;}}
}
B42e993:L42e993:{c.instructions+=12;NFSU2_TR(0x42e993);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e997:{NFSU2_TR(0x42e997);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e99b:{NFSU2_TR(0x42e99b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42e99f:{NFSU2_TR(0x42e99f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e9a0:{NFSU2_TR(0x42e9a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e9a1:{NFSU2_TR(0x42e9a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e9a2:{NFSU2_TR(0x42e9a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e9a6:{NFSU2_TR(0x42e9a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e9a7:{NFSU2_TR(0x42e9a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e9a8:{NFSU2_TR(0x42e9a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e9a9:{NFSU2_TR(0x42e9a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e9aa:{NFSU2_TR(0x42e9aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42e9afull));
TAIL_STATIC(0x42c950u,42c);
}
B42e9af:L42e9af:{c.instructions+=7;NFSU2_TR(0x42e9af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42e9b0:{NFSU2_TR(0x42e9b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42e9b1:{NFSU2_TR(0x42e9b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42e9b2:{NFSU2_TR(0x42e9b2);
w1(R+0,u8(0x1ull));
}
B42e9b4:{NFSU2_TR(0x42e9b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42e9b5:{NFSU2_TR(0x42e9b5);
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
B42e9b8:{NFSU2_TR(0x42e9b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e9bb:L42e9bb:{c.instructions+=4;NFSU2_TR(0x42e9bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42e9bf:{NFSU2_TR(0x42e9bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e9c5:{NFSU2_TR(0x42e9c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e9c7:{NFSU2_TR(0x42e9c7);
if(r1(R+518)){{goto L42e9cf;}}
}
B42e9c9:L42e9c9:{c.instructions+=1;NFSU2_TR(0x42e9c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B42e9cf:L42e9cf:{c.instructions+=4;NFSU2_TR(0x42e9cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42e9d3:{NFSU2_TR(0x42e9d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42e9d5:{NFSU2_TR(0x42e9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42e9db:{NFSU2_TR(0x42e9db);
if(r1(R+518)){{goto L42e9e3;}}
}
B42e9dd:L42e9dd:{c.instructions+=1;NFSU2_TR(0x42e9dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B42e9e3:L42e9e3:{c.instructions+=7;NFSU2_TR(0x42e9e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42e9e4:{NFSU2_TR(0x42e9e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42e9e5:{NFSU2_TR(0x42e9e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42e9e6:{NFSU2_TR(0x42e9e6);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B42e9e8:{NFSU2_TR(0x42e9e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42e9e9:{NFSU2_TR(0x42e9e9);
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
B42e9ec:{NFSU2_TR(0x42e9ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42e9f0:L42e9f0:{c.instructions+=14;NFSU2_TR(0x42e9f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B42e9f3:{NFSU2_TR(0x42e9f3);
__builtin_memmove((R+0),gp(0x89e7a8),4);
}
B42e9f8:{NFSU2_TR(0x42e9f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e9f9:{NFSU2_TR(0x42e9f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e9fa:{NFSU2_TR(0x42e9fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42e9fb:{NFSU2_TR(0x42e9fb);
__builtin_memmove((R+28),(R+4),4);
}
B42e9fd:{NFSU2_TR(0x42e9fd);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B42ea03:{NFSU2_TR(0x42ea03);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ea0a:{NFSU2_TR(0x42ea0a);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42ea10:{NFSU2_TR(0x42ea10);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B42ea16:{NFSU2_TR(0x42ea16);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ea1b:{NFSU2_TR(0x42ea1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ea1f:{NFSU2_TR(0x42ea1f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42ea23:{NFSU2_TR(0x42ea23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ea28ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B42ea28:L42ea28:{c.instructions+=5;NFSU2_TR(0x42ea28);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42ea2c:{NFSU2_TR(0x42ea2c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42ea31:{NFSU2_TR(0x42ea31);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ea33:{NFSU2_TR(0x42ea33);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42ea36:{NFSU2_TR(0x42ea36);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42ea3d;}}
}
B42ea38:L42ea38:{c.instructions+=1;NFSU2_TR(0x42ea38);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42ea3d:L42ea3d:{c.instructions+=12;NFSU2_TR(0x42ea3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42ea41:{NFSU2_TR(0x42ea41);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ea47:{NFSU2_TR(0x42ea47);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42ea4b:{NFSU2_TR(0x42ea4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ea51:{NFSU2_TR(0x42ea51);
__builtin_memmove((R+4),(R+8),4);
}
B42ea53:{NFSU2_TR(0x42ea53);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ea57:{NFSU2_TR(0x42ea57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ea58:{NFSU2_TR(0x42ea58);
__builtin_memmove((R+8),(R+0),4);
}
B42ea5a:{NFSU2_TR(0x42ea5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ea5b:{NFSU2_TR(0x42ea5b);
w4(R+4,u32(0x88f298ull));
}
B42ea60:{NFSU2_TR(0x42ea60);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ea64:{NFSU2_TR(0x42ea64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ea69ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B42ea69:L42ea69:{c.instructions+=5;NFSU2_TR(0x42ea69);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42ea6d:{NFSU2_TR(0x42ea6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ea70:{NFSU2_TR(0x42ea70);
__builtin_memmove((R+4),(R+12),4);
}
B42ea72:{NFSU2_TR(0x42ea72);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ea76:{NFSU2_TR(0x42ea76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ea7bull));
TAIL_STATIC(0x5ec0a0u,5ec);
}
B42ea7b:L42ea7b:{c.instructions+=4;NFSU2_TR(0x42ea7b);
__builtin_memmove((R+24),(R+0),4);
}
B42ea7d:{NFSU2_TR(0x42ea7d);
__builtin_memmove((R+4),(R+12),4);
}
B42ea7f:{NFSU2_TR(0x42ea7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ea83:{NFSU2_TR(0x42ea83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ea88ull));
TAIL_STATIC(0x5ec0b0u,5ec);
}
B42ea88:L42ea88:{c.instructions+=3;NFSU2_TR(0x42ea88);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ea8a:{NFSU2_TR(0x42ea8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ea8e:{NFSU2_TR(0x42ea8e);
if(r1(R+518)){{goto L42eaa8;}}
}
B42ea90:L42ea90:{c.instructions+=2;NFSU2_TR(0x42ea90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ea92:{NFSU2_TR(0x42ea92);
if(r1(R+518)){{goto L42eaa8;}}
}
B42ea94:L42ea94:{c.instructions+=6;NFSU2_TR(0x42ea94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ea97:{NFSU2_TR(0x42ea97);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B42ea9d:{NFSU2_TR(0x42ea9d);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B42eaa1:{NFSU2_TR(0x42eaa1);
__builtin_memmove((R+0),(R+518),1);
}
B42eaa4:{NFSU2_TR(0x42eaa4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42eaa6:{NFSU2_TR(0x42eaa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42eab3;}}
}
B42eaa8:L42eaa8:{c.instructions+=6;NFSU2_TR(0x42eaa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42eaa9:{NFSU2_TR(0x42eaa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42eaaa:{NFSU2_TR(0x42eaaa);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B42eaac:{NFSU2_TR(0x42eaac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42eaad:{NFSU2_TR(0x42eaad);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42eab0:{NFSU2_TR(0x42eab0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42eab3:L42eab3:{c.instructions+=4;NFSU2_TR(0x42eab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42eab6:{NFSU2_TR(0x42eab6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42eab8:{NFSU2_TR(0x42eab8);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42eabd:{NFSU2_TR(0x42eabd);
if(r1(R+518)){{goto L42eac7;}}
}
B42eabf:L42eabf:{c.instructions+=2;NFSU2_TR(0x42eabf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42eac5:{NFSU2_TR(0x42eac5);
{goto L42eac9;}
}
B42eac7:L42eac7:{c.instructions+=1;NFSU2_TR(0x42eac7);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B42eac9:L42eac9:{c.instructions+=5;NFSU2_TR(0x42eac9);
{u32 ea_=u32(r4(R+12)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42eacf:{NFSU2_TR(0x42eacf);
{u32 ea_=u32(u32(7882148u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42ead5:{NFSU2_TR(0x42ead5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ead7:{NFSU2_TR(0x42ead7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42eada:{NFSU2_TR(0x42eada);
if(r1(R+514)){{goto L42eafb;}}
}
B42eadc:L42eadc:{c.instructions+=3;NFSU2_TR(0x42eadc);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42eae2:{NFSU2_TR(0x42eae2);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eae7:{NFSU2_TR(0x42eae7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42eaecull));
TAIL_STATIC(0x5ea500u,5ea);
}
B42eaec:L42eaec:{c.instructions+=4;NFSU2_TR(0x42eaec);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42eaf2:{NFSU2_TR(0x42eaf2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42eaf4:{NFSU2_TR(0x42eaf4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42eaf7:{NFSU2_TR(0x42eaf7);
if(r1(R+514)){{goto L42eb04;}}
}
B42eaf9:L42eaf9:{c.instructions+=1;NFSU2_TR(0x42eaf9);
{goto L42eaff;}
}
B42eafb:L42eafb:{c.instructions+=2;NFSU2_TR(0x42eafb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42eafd:{NFSU2_TR(0x42eafd);
if(r1(R+518)){{goto L42eb04;}}
}
B42eaff:L42eaff:{c.instructions+=1;NFSU2_TR(0x42eaff);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42eb04:L42eb04:{c.instructions+=3;NFSU2_TR(0x42eb04);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B42eb09:{NFSU2_TR(0x42eb09);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42eb0b:{NFSU2_TR(0x42eb0b);
if(r1(R+518)){{goto L42eb22;}}
}
B42eb0d:L42eb0d:{c.instructions+=4;NFSU2_TR(0x42eb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42eb10:{NFSU2_TR(0x42eb10);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B42eb13:{NFSU2_TR(0x42eb13);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42eb15:{NFSU2_TR(0x42eb15);
if(r1(R+518)){{goto L42eb22;}}
}
B42eb17:L42eb17:{c.instructions+=4;NFSU2_TR(0x42eb17);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42eb1b:{NFSU2_TR(0x42eb1b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42eb1d:{NFSU2_TR(0x42eb1d);
__builtin_memmove((R+0),(R+518),1);
}
B42eb20:{NFSU2_TR(0x42eb20);
{goto L42eb26;}
}
B42eb22:L42eb22:{c.instructions+=1;NFSU2_TR(0x42eb22);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42eb26:L42eb26:{c.instructions+=7;NFSU2_TR(0x42eb26);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eb27:{NFSU2_TR(0x42eb27);
u8 U[5];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42eb2b:{NFSU2_TR(0x42eb2b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eb2d:{NFSU2_TR(0x42eb2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42eb31:{NFSU2_TR(0x42eb31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eb32:{NFSU2_TR(0x42eb32);
__builtin_memmove((R+4),(R+28),4);
}
B42eb34:{NFSU2_TR(0x42eb34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42eb39ull));
TAIL_STATIC(0x417d80u,417);
}
B42eb39:L42eb39:{c.instructions+=24;NFSU2_TR(0x42eb39);
__builtin_memmove((R+4),(R+0),4);
}
B42eb3b:{NFSU2_TR(0x42eb3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42eb3e:{NFSU2_TR(0x42eb3e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42eb3f:{NFSU2_TR(0x42eb3f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B42eb40:{NFSU2_TR(0x42eb40);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x42eb40);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x42eb40);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B42eb42:{NFSU2_TR(0x42eb42);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eb44:{NFSU2_TR(0x42eb44);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42eb4c:{NFSU2_TR(0x42eb4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B42eb4f:{NFSU2_TR(0x42eb4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42eb52:{NFSU2_TR(0x42eb52);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B42eb56:{NFSU2_TR(0x42eb56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42eb58:{NFSU2_TR(0x42eb58);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42eb5c:{NFSU2_TR(0x42eb5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42eb5f:{NFSU2_TR(0x42eb5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42eb62:{NFSU2_TR(0x42eb62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eb63:{NFSU2_TR(0x42eb63);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42eb67:{NFSU2_TR(0x42eb67);
__builtin_memmove((R+4),gp(0x7e9720),4);
}
B42eb6d:{NFSU2_TR(0x42eb6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eb6e:{NFSU2_TR(0x42eb6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eb6f:{NFSU2_TR(0x42eb6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42eb73:{NFSU2_TR(0x42eb73);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eb75:{NFSU2_TR(0x42eb75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eb76:{NFSU2_TR(0x42eb76);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42eb7a:{NFSU2_TR(0x42eb7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42eb7full));
TAIL_STATIC(0x415130u,415);
}
B42eb7f:L42eb7f:{c.instructions+=5;NFSU2_TR(0x42eb7f);
__builtin_memmove((R+20),(R+0),4);
}
B42eb81:{NFSU2_TR(0x42eb81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B42eb84:{NFSU2_TR(0x42eb84);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42eb86:{NFSU2_TR(0x42eb86);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42eb89:{NFSU2_TR(0x42eb89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ed29;}}
}
B42eb8f:L42eb8f:{c.instructions+=2;NFSU2_TR(0x42eb8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42eb93:{NFSU2_TR(0x42eb93);
{goto L42eba1;}
}
B42eb95:L42eb95:{c.instructions+=3;NFSU2_TR(0x42eb95);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42eb99:{NFSU2_TR(0x42eb99);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42eb9d:{NFSU2_TR(0x42eb9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42eba1:L42eba1:{c.instructions+=2;NFSU2_TR(0x42eba1);
u8 U[16];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42eba5:{NFSU2_TR(0x42eba5);
if(r1(R+518)){{goto L42ed29;}}
}
B42ebab:L42ebab:{c.instructions+=5;NFSU2_TR(0x42ebab);
__builtin_memmove((R+4),(R+0),4);
}
B42ebad:{NFSU2_TR(0x42ebad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42ebae:{NFSU2_TR(0x42ebae);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42ebb1:{NFSU2_TR(0x42ebb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ebb5:{NFSU2_TR(0x42ebb5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42ed35;}}
}
B42ebbb:L42ebbb:{c.instructions+=2;NFSU2_TR(0x42ebbb);
__builtin_memmove((R+4),(R+24),4);
}
B42ebbd:{NFSU2_TR(0x42ebbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ebc2ull));
TAIL_STATIC(0x5dcc80u,5dc);
}
B42ebc2:L42ebc2:{c.instructions+=2;NFSU2_TR(0x42ebc2);
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
B42ebc4:{NFSU2_TR(0x42ebc4);
if(r1(R+518)){{goto L42ebe9;}}
}
B42ebc6:L42ebc6:{c.instructions+=10;NFSU2_TR(0x42ebc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ebcc:{NFSU2_TR(0x42ebcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ebcf:{NFSU2_TR(0x42ebcf);
__builtin_memmove((R+4),(R+8),4);
}
B42ebd1:{NFSU2_TR(0x42ebd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ebd5:{NFSU2_TR(0x42ebd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ebd6:{NFSU2_TR(0x42ebd6);
__builtin_memmove((R+8),(R+0),4);
}
B42ebd8:{NFSU2_TR(0x42ebd8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ebd9:{NFSU2_TR(0x42ebd9);
w4(R+4,u32(0x88f298ull));
}
B42ebde:{NFSU2_TR(0x42ebde);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ebe2:{NFSU2_TR(0x42ebe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ebe7ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B42ebe7:L42ebe7:{c.instructions+=1;NFSU2_TR(0x42ebe7);
{goto L42ec0a;}
}
B42ebe9:L42ebe9:{c.instructions+=2;NFSU2_TR(0x42ebe9);
__builtin_memmove((R+4),(R+12),4);
}
B42ebeb:{NFSU2_TR(0x42ebeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ebf0ull));
TAIL_STATIC(0x401890u,401);
}
B42ebf0:L42ebf0:{c.instructions+=12;NFSU2_TR(0x42ebf0);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ebf2:{NFSU2_TR(0x42ebf2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42ebf4:{NFSU2_TR(0x42ebf4);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ebf7:{NFSU2_TR(0x42ebf7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42ebfa:{NFSU2_TR(0x42ebfa);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B42ebfc:{NFSU2_TR(0x42ebfc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B42ebfe:{NFSU2_TR(0x42ebfe);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B42ec00:{NFSU2_TR(0x42ec00);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B42ec02:{NFSU2_TR(0x42ec02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B42ec04:{NFSU2_TR(0x42ec04);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B42ec06:{NFSU2_TR(0x42ec06);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B42ec08:{NFSU2_TR(0x42ec08);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42ec0a:L42ec0a:{c.instructions+=5;NFSU2_TR(0x42ec0a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B42ec0e:{NFSU2_TR(0x42ec0e);
{u32 ea_=u32(u32(7879592u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42ec14:{NFSU2_TR(0x42ec14);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ec16:{NFSU2_TR(0x42ec16);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ec19:{NFSU2_TR(0x42ec19);
if(r1(R+518)){{goto L42ed29;}}
}
B42ec1f:L42ec1f:{c.instructions+=11;NFSU2_TR(0x42ec1f);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42ec23:{NFSU2_TR(0x42ec23);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42ec27:{NFSU2_TR(0x42ec27);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ec29:{NFSU2_TR(0x42ec29);
__builtin_memmove((R+12),(R+518),1);
}
B42ec2c:{NFSU2_TR(0x42ec2c);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+0))));
}
B42ec2e:{NFSU2_TR(0x42ec2e);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42ec32:{NFSU2_TR(0x42ec32);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ec36:{NFSU2_TR(0x42ec36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ec37:{NFSU2_TR(0x42ec37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ec38:{NFSU2_TR(0x42ec38);
__builtin_memmove((R+4),(R+28),4);
}
B42ec3a:{NFSU2_TR(0x42ec3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ec3full));
TAIL_STATIC(0x410ca0u,410);
}
B42ec3f:L42ec3f:{c.instructions+=3;NFSU2_TR(0x42ec3f);
__builtin_memmove((R+28),(R+0),4);
}
B42ec41:{NFSU2_TR(0x42ec41);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42ec44:{NFSU2_TR(0x42ec44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ec5d;}}
}
B42ec46:L42ec46:{c.instructions+=6;NFSU2_TR(0x42ec46);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ec48:{NFSU2_TR(0x42ec48);
__builtin_memmove((R+4),(R+518),1);
}
B42ec4b:{NFSU2_TR(0x42ec4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ec4c:{NFSU2_TR(0x42ec4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ec50:{NFSU2_TR(0x42ec50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ec51:{NFSU2_TR(0x42ec51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ec56ull));
TAIL_STATIC(0x410ca0u,410);
}
B42ec56:L42ec56:{c.instructions+=3;NFSU2_TR(0x42ec56);
__builtin_memmove((R+28),(R+0),4);
}
B42ec58:{NFSU2_TR(0x42ec58);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42ec5b:{NFSU2_TR(0x42ec5b);
if(r1(R+518)){{goto L42ec9a;}}
}
B42ec5d:L42ec5d:{c.instructions+=4;NFSU2_TR(0x42ec5d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42ec61:{NFSU2_TR(0x42ec61);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ec63:{NFSU2_TR(0x42ec63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ec66:{NFSU2_TR(0x42ec66);
if(r1(R+518)){{goto L42ec6d;}}
}
B42ec68:L42ec68:{c.instructions+=2;NFSU2_TR(0x42ec68);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B42ec6b:{NFSU2_TR(0x42ec6b);
{goto L42ec70;}
}
B42ec6d:L42ec6d:{c.instructions+=1;NFSU2_TR(0x42ec6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B42ec70:L42ec70:{c.instructions+=3;NFSU2_TR(0x42ec70);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B42ec73:{NFSU2_TR(0x42ec73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ec75:{NFSU2_TR(0x42ec75);
if(r1(R+518)){{goto L42ec9a;}}
}
B42ec77:L42ec77:{c.instructions+=8;NFSU2_TR(0x42ec77);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42ec7b:{NFSU2_TR(0x42ec7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ec82:{NFSU2_TR(0x42ec82);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ec86:{NFSU2_TR(0x42ec86);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ec87:{NFSU2_TR(0x42ec87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ec88:{NFSU2_TR(0x42ec88);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42ec8c:{NFSU2_TR(0x42ec8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ec8d:{NFSU2_TR(0x42ec8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ec92ull));
TAIL_STATIC(0x418110u,418);
}
B42ec92:L42ec92:{c.instructions+=2;NFSU2_TR(0x42ec92);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ec94:{NFSU2_TR(0x42ec94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ed4c;}}
}
B42ec9a:L42ec9a:{c.instructions+=10;NFSU2_TR(0x42ec9a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B42ec9e:{NFSU2_TR(0x42ec9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B42eca1:{NFSU2_TR(0x42eca1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42eca5:{NFSU2_TR(0x42eca5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42eca9:{NFSU2_TR(0x42eca9);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42ecaf:{NFSU2_TR(0x42ecaf);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ecb6:{NFSU2_TR(0x42ecb6);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B42ecb8:{NFSU2_TR(0x42ecb8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ecba:{NFSU2_TR(0x42ecba);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ecbd:{NFSU2_TR(0x42ecbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ecce;}}
}
B42ecbf:L42ecbf:{c.instructions+=4;NFSU2_TR(0x42ecbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ecc6:{NFSU2_TR(0x42ecc6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42ecc8:{NFSU2_TR(0x42ecc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42eccc:{NFSU2_TR(0x42eccc);
{goto L42ecd2;}
}
B42ecce:L42ecce:{c.instructions+=1;NFSU2_TR(0x42ecce);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42ecd2:L42ecd2:{c.instructions+=1;NFSU2_TR(0x42ecd2);
__builtin_memmove((R+28),(R+24),4);
}
B42ecd4:L42ecd4:{c.instructions+=2;NFSU2_TR(0x42ecd4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42ecd6:{NFSU2_TR(0x42ecd6);
if(r1(R+518)){{goto L42ecdc;}}
}
B42ecd8:L42ecd8:{c.instructions+=2;NFSU2_TR(0x42ecd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ecda:{NFSU2_TR(0x42ecda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ed20;}}
}
B42ecdc:L42ecdc:{c.instructions+=2;NFSU2_TR(0x42ecdc);
u8 U[16];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42ece0:{NFSU2_TR(0x42ece0);
if(r1(R+518)){{goto L42ed20;}}
}
B42ece2:L42ece2:{c.instructions+=14;NFSU2_TR(0x42ece2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ece6:{NFSU2_TR(0x42ece6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ecea:{NFSU2_TR(0x42ecea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ecec:{NFSU2_TR(0x42ecec);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ecf0:{NFSU2_TR(0x42ecf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ecf4:{NFSU2_TR(0x42ecf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ecf5:{NFSU2_TR(0x42ecf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ecf6:{NFSU2_TR(0x42ecf6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ecf7:{NFSU2_TR(0x42ecf7);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42ecfb:{NFSU2_TR(0x42ecfb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ecfd:{NFSU2_TR(0x42ecfd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ecfe:{NFSU2_TR(0x42ecfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ed02:{NFSU2_TR(0x42ed02);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ed06:{NFSU2_TR(0x42ed06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ed0bull));
TAIL_STATIC(0x415130u,415);
}
B42ed0b:L42ed0b:{c.instructions+=7;NFSU2_TR(0x42ed0b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ed0f:{NFSU2_TR(0x42ed0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42ed13:{NFSU2_TR(0x42ed13);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B42ed15:{NFSU2_TR(0x42ed15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B42ed18:{NFSU2_TR(0x42ed18);
__builtin_memmove((R+20),(R+0),4);
}
B42ed1a:{NFSU2_TR(0x42ed1a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42ed1e:{NFSU2_TR(0x42ed1e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42ecd4u);}goto L42ecd4;}
}
B42ed20:L42ed20:{c.instructions+=2;NFSU2_TR(0x42ed20);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42ed23:{NFSU2_TR(0x42ed23);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42eb95u);}goto L42eb95;}}
}
B42ed29:L42ed29:{c.instructions+=7;NFSU2_TR(0x42ed29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42ed2a:{NFSU2_TR(0x42ed2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ed2b:{NFSU2_TR(0x42ed2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ed2c:{NFSU2_TR(0x42ed2c);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B42ed2e:{NFSU2_TR(0x42ed2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42ed2f:{NFSU2_TR(0x42ed2f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42ed32:{NFSU2_TR(0x42ed32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ed35:L42ed35:{c.instructions+=10;NFSU2_TR(0x42ed35);
__builtin_memmove((R+0),gp(0x827acc),4);
}
B42ed3a:{NFSU2_TR(0x42ed3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42ed3b:{NFSU2_TR(0x42ed3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ed3c:{NFSU2_TR(0x42ed3c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42ed3d:{NFSU2_TR(0x42ed3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ed3e:{NFSU2_TR(0x42ed3e);
__builtin_memmove(gp(0x827acc),(R+0),4);
}
B42ed43:{NFSU2_TR(0x42ed43);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B42ed45:{NFSU2_TR(0x42ed45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42ed46:{NFSU2_TR(0x42ed46);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42ed49:{NFSU2_TR(0x42ed49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ed4c:L42ed4c:{c.instructions+=4;NFSU2_TR(0x42ed4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ed50:{NFSU2_TR(0x42ed50);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x77cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42ed56:{NFSU2_TR(0x42ed56);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ed58:{NFSU2_TR(0x42ed58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42edaf;}}
}
B42ed5a:L42ed5a:{c.instructions+=3;NFSU2_TR(0x42ed5a);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B42ed5f:{NFSU2_TR(0x42ed5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ed61:{NFSU2_TR(0x42ed61);
if(r1(R+518)){{goto L42edaf;}}
}
B42ed63:L42ed63:{c.instructions+=6;NFSU2_TR(0x42ed63);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ed67:{NFSU2_TR(0x42ed67);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42ed6b:{NFSU2_TR(0x42ed6b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42ed71:{NFSU2_TR(0x42ed71);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ed73:{NFSU2_TR(0x42ed73);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ed75:{NFSU2_TR(0x42ed75);
if(r1(R+518)){{goto L42ed97;}}
}
B42ed77:L42ed77:{c.instructions+=2;NFSU2_TR(0x42ed77);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ed7a:{NFSU2_TR(0x42ed7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42edaf;}}
}
B42ed7c:L42ed7c:{c.instructions+=5;NFSU2_TR(0x42ed7c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ed80:{NFSU2_TR(0x42ed80);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42ed84:{NFSU2_TR(0x42ed84);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ed86:{NFSU2_TR(0x42ed86);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ed89:{NFSU2_TR(0x42ed89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42edaf;}}
}
B42ed8b:L42ed8b:{c.instructions+=7;NFSU2_TR(0x42ed8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42ed8c:{NFSU2_TR(0x42ed8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ed8d:{NFSU2_TR(0x42ed8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ed8e:{NFSU2_TR(0x42ed8e);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B42ed90:{NFSU2_TR(0x42ed90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42ed91:{NFSU2_TR(0x42ed91);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42ed94:{NFSU2_TR(0x42ed94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ed97:L42ed97:{c.instructions+=2;NFSU2_TR(0x42ed97);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42ed9a:{NFSU2_TR(0x42ed9a);
if(r1(R+514)){{goto L42edaf;}}
}
B42ed9c:L42ed9c:{c.instructions+=5;NFSU2_TR(0x42ed9c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42eda0:{NFSU2_TR(0x42eda0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42eda4:{NFSU2_TR(0x42eda4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42eda6:{NFSU2_TR(0x42eda6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42eda9:{NFSU2_TR(0x42eda9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42ed29u);}goto L42ed29;}}
}
B42edaf:L42edaf:{c.instructions+=15;NFSU2_TR(0x42edaf);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B42edb4:{NFSU2_TR(0x42edb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B42edb7:{NFSU2_TR(0x42edb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42edbe:{NFSU2_TR(0x42edbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42edc0:{NFSU2_TR(0x42edc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42edc1:{NFSU2_TR(0x42edc1);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42edc8:{NFSU2_TR(0x42edc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42edcc:{NFSU2_TR(0x42edcc);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42edd2:{NFSU2_TR(0x42edd2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42edd5:{NFSU2_TR(0x42edd5);
u8 U[4];
w4(U+0,u32(0x41c4b127ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42edda:{NFSU2_TR(0x42edda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eddb:{NFSU2_TR(0x42eddb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eddd:{NFSU2_TR(0x42eddd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42edde:{NFSU2_TR(0x42edde);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eddf:{NFSU2_TR(0x42eddf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ede4ull));
TAIL_STATIC(0x42c950u,42c);
}
B42ede4:L42ede4:{c.instructions+=7;NFSU2_TR(0x42ede4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42ede5:{NFSU2_TR(0x42ede5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ede6:{NFSU2_TR(0x42ede6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ede7:{NFSU2_TR(0x42ede7);
w1(R+0,u8(0x1ull));
}
B42ede9:{NFSU2_TR(0x42ede9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42edea:{NFSU2_TR(0x42edea);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42eded:{NFSU2_TR(0x42eded);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42edf0:L42edf0:{c.instructions+=6;NFSU2_TR(0x42edf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B42edf3:{NFSU2_TR(0x42edf3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42edf4:{NFSU2_TR(0x42edf4);
__builtin_memmove((R+28),(R+4),4);
}
B42edf6:{NFSU2_TR(0x42edf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42edf8:{NFSU2_TR(0x42edf8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B42edfb:{NFSU2_TR(0x42edfb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L42ef84;}}
}
B42ee01:L42ee01:{c.instructions+=2;NFSU2_TR(0x42ee01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ee02:{NFSU2_TR(0x42ee02);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x42ef8cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42ee09:L42ee09:{c.instructions+=2;NFSU2_TR(0x42ee09);
__builtin_memmove((R+4),(R+28),4);
}
B42ee0b:{NFSU2_TR(0x42ee0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ee10ull));
TAIL_STATIC(0x412f90u,412);
}
B42ee10:L42ee10:{c.instructions+=5;NFSU2_TR(0x42ee10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ee11:{NFSU2_TR(0x42ee11);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+28)),r4(U+0));
}
B42ee17:{NFSU2_TR(0x42ee17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ee18:{NFSU2_TR(0x42ee18);
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
B42ee1b:{NFSU2_TR(0x42ee1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ee1c:L42ee1c:{c.instructions+=2;NFSU2_TR(0x42ee1c);
__builtin_memmove((R+4),(R+28),4);
}
B42ee1e:{NFSU2_TR(0x42ee1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ee23ull));
TAIL_STATIC(0x41ace0u,41a);
}
B42ee23:L42ee23:{c.instructions+=2;NFSU2_TR(0x42ee23);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ee25:{NFSU2_TR(0x42ee25);
if(r1(R+518)){{goto L42ef83;}}
}
B42ee2b:L42ee2b:{c.instructions+=5;NFSU2_TR(0x42ee2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ee2c:{NFSU2_TR(0x42ee2c);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+28)),r4(U+0));
}
B42ee32:{NFSU2_TR(0x42ee32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ee33:{NFSU2_TR(0x42ee33);
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
B42ee36:{NFSU2_TR(0x42ee36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ee37:L42ee37:{c.instructions+=4;NFSU2_TR(0x42ee37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42ee3a:{NFSU2_TR(0x42ee3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ee3b:{NFSU2_TR(0x42ee3b);
__builtin_memmove((R+4),(R+28),4);
}
B42ee3d:{NFSU2_TR(0x42ee3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ee42ull));
TAIL_STATIC(0x40c3c0u,40c);
}
B42ee42:L42ee42:{c.instructions+=2;NFSU2_TR(0x42ee42);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ee44:{NFSU2_TR(0x42ee44);
if(r1(R+518)){{goto L42ef83;}}
}
B42ee4a:L42ee4a:{c.instructions+=5;NFSU2_TR(0x42ee4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42ee4d:{NFSU2_TR(0x42ee4d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42ee50:{NFSU2_TR(0x42ee50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ee53:{NFSU2_TR(0x42ee53);
__builtin_memmove((R+4),(R+28),4);
}
B42ee55:{NFSU2_TR(0x42ee55);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42ee63;}}
}
B42ee57:L42ee57:{c.instructions+=2;NFSU2_TR(0x42ee57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ee58:{NFSU2_TR(0x42ee58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ee5dull));
TAIL_STATIC(0x40c370u,40c);
}
B42ee5d:L42ee5d:{c.instructions+=4;NFSU2_TR(0x42ee5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ee5e:{NFSU2_TR(0x42ee5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ee5f:{NFSU2_TR(0x42ee5f);
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
B42ee62:{NFSU2_TR(0x42ee62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ee63:L42ee63:{c.instructions+=1;NFSU2_TR(0x42ee63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ee68ull));
TAIL_STATIC(0x40c410u,40c);
}
B42ee68:L42ee68:{c.instructions+=5;NFSU2_TR(0x42ee68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ee69:{NFSU2_TR(0x42ee69);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+28)),r4(U+0));
}
B42ee6f:{NFSU2_TR(0x42ee6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ee70:{NFSU2_TR(0x42ee70);
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
B42ee73:{NFSU2_TR(0x42ee73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ee74:L42ee74:{c.instructions+=4;NFSU2_TR(0x42ee74);
__builtin_memmove((R+0),gp(0x81cb94),4);
}
B42ee79:{NFSU2_TR(0x42ee79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ee7b:{NFSU2_TR(0x42ee7b);
__builtin_memmove((R+4),(R+28),4);
}
B42ee7d:{NFSU2_TR(0x42ee7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42eea5;}}
}
B42ee7f:L42ee7f:{c.instructions+=1;NFSU2_TR(0x42ee7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ee84ull));
TAIL_STATIC(0x40bea0u,40b);
}
B42ee84:L42ee84:{c.instructions+=2;NFSU2_TR(0x42ee84);
__builtin_memmove((R+4),(R+28),4);
}
B42ee86:{NFSU2_TR(0x42ee86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ee8bull));
TAIL_STATIC(0x42a5e0u,42a);
}
B42ee8b:L42ee8b:{c.instructions+=2;NFSU2_TR(0x42ee8b);
__builtin_memmove((R+4),(R+28),4);
}
B42ee8d:{NFSU2_TR(0x42ee8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ee92ull));
TAIL_STATIC(0x413030u,413);
}
B42ee92:L42ee92:{c.instructions+=2;NFSU2_TR(0x42ee92);
__builtin_memmove((R+4),(R+28),4);
}
B42ee94:{NFSU2_TR(0x42ee94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ee99ull));
TAIL_STATIC(0x42a860u,42a);
}
B42ee99:L42ee99:{c.instructions+=5;NFSU2_TR(0x42ee99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ee9a:{NFSU2_TR(0x42ee9a);
__builtin_memmove((R+4),(R+28),4);
}
B42ee9c:{NFSU2_TR(0x42ee9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ee9d:{NFSU2_TR(0x42ee9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42eea0:{NFSU2_TR(0x42eea0);
TAIL_STATIC(0x40bee0u,40b);
}
B42eea5:L42eea5:{c.instructions+=4;NFSU2_TR(0x42eea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42eea6:{NFSU2_TR(0x42eea6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42eea7:{NFSU2_TR(0x42eea7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42eeaa:{NFSU2_TR(0x42eeaa);
TAIL_STATIC(0x42cd60u,42c);
}
B42eeaf:L42eeaf:{c.instructions+=2;NFSU2_TR(0x42eeaf);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42eeb6:{NFSU2_TR(0x42eeb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ef83;}}
}
B42eebc:L42eebc:{c.instructions+=5;NFSU2_TR(0x42eebc);
__builtin_memmove((R+24),gp(0x890118),4);
}
B42eec2:{NFSU2_TR(0x42eec2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eec3:{NFSU2_TR(0x42eec3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eec5:{NFSU2_TR(0x42eec5);
__builtin_memmove((R+4),(R+24),4);
}
B42eec7:{NFSU2_TR(0x42eec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42eeccull));
TAIL_STATIC(0x402030u,402);
}
B42eecc:L42eecc:{c.instructions+=5;NFSU2_TR(0x42eecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B42eece:{NFSU2_TR(0x42eece);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eed0:{NFSU2_TR(0x42eed0);
__builtin_memmove((R+4),(R+24),4);
}
B42eed2:{NFSU2_TR(0x42eed2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42eed6:{NFSU2_TR(0x42eed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42eedbull));
TAIL_STATIC(0x402030u,402);
}
B42eedb:L42eedb:{c.instructions+=5;NFSU2_TR(0x42eedb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42eedd:{NFSU2_TR(0x42eedd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eede:{NFSU2_TR(0x42eede);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eedf:{NFSU2_TR(0x42eedf);
__builtin_memmove((R+4),(R+28),4);
}
B42eee1:{NFSU2_TR(0x42eee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42eee6ull));
TAIL_STATIC(0x42a9e0u,42a);
}
B42eee6:L42eee6:{c.instructions+=5;NFSU2_TR(0x42eee6);
__builtin_memmove((R+4),gp(0x890118),4);
}
B42eeec:{NFSU2_TR(0x42eeec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42eeef:{NFSU2_TR(0x42eeef);
w4(R+24,u32(0x2ull));
}
B42eef4:{NFSU2_TR(0x42eef4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42eef6:{NFSU2_TR(0x42eef6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42ef54;}}
}
B42eef8:L42eef8:{c.instructions+=3;NFSU2_TR(0x42eef8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42eefa:{NFSU2_TR(0x42eefa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xbd4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42ef02:{NFSU2_TR(0x42ef02);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42ef0d;}}
}
B42ef04:L42ef04:{c.instructions+=3;NFSU2_TR(0x42ef04);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ef08:{NFSU2_TR(0x42ef08);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B42ef0b:{NFSU2_TR(0x42ef0b);
{goto L42ef0f;}
}
B42ef0d:L42ef0d:{c.instructions+=1;NFSU2_TR(0x42ef0d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B42ef0f:L42ef0f:{c.instructions+=3;NFSU2_TR(0x42ef0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B42ef11:{NFSU2_TR(0x42ef11);
__builtin_memmove((R+4),(R+12),4);
}
B42ef13:{NFSU2_TR(0x42ef13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ef18ull));
TAIL_STATIC(0x5ed430u,5ed);
}
B42ef18:L42ef18:{c.instructions+=2;NFSU2_TR(0x42ef18);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ef1a:{NFSU2_TR(0x42ef1a);
if(r1(R+518)){{goto L42ef3b;}}
}
B42ef1c:L42ef1c:{c.instructions+=3;NFSU2_TR(0x42ef1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ef1f:{NFSU2_TR(0x42ef1f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42ef22:{NFSU2_TR(0x42ef22);
if(r1(R+518)){{goto L42ef2e;}}
}
B42ef24:L42ef24:{c.instructions+=2;NFSU2_TR(0x42ef24);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42ef27:{NFSU2_TR(0x42ef27);
if(r1(R+518)){{goto L42ef2e;}}
}
B42ef29:L42ef29:{c.instructions+=2;NFSU2_TR(0x42ef29);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42ef2c:{NFSU2_TR(0x42ef2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ef3b;}}
}
B42ef2e:L42ef2e:{c.instructions+=4;NFSU2_TR(0x42ef2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ef32:{NFSU2_TR(0x42ef32);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ef35:{NFSU2_TR(0x42ef35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ef36:{NFSU2_TR(0x42ef36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ef3bull));
TAIL_STATIC(0x4285a0u,428);
}
B42ef3b:L42ef3b:{c.instructions+=8;NFSU2_TR(0x42ef3b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42ef3f:{NFSU2_TR(0x42ef3f);
__builtin_memmove((R+4),gp(0x890118),4);
}
B42ef45:{NFSU2_TR(0x42ef45);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ef48:{NFSU2_TR(0x42ef48);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B42ef49:{NFSU2_TR(0x42ef49);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B42ef4c:{NFSU2_TR(0x42ef4c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42ef4e:{NFSU2_TR(0x42ef4e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ef52:{NFSU2_TR(0x42ef52);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42ef04u);}goto L42ef04;}}
}
B42ef54:L42ef54:{c.instructions+=6;NFSU2_TR(0x42ef54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42ef55:{NFSU2_TR(0x42ef55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ef56:{NFSU2_TR(0x42ef56);
__builtin_memmove((R+4),(R+28),4);
}
B42ef58:{NFSU2_TR(0x42ef58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ef59:{NFSU2_TR(0x42ef59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42ef5c:{NFSU2_TR(0x42ef5c);
TAIL_STATIC(0x40bf60u,40b);
}
B42ef61:L42ef61:{c.instructions+=2;NFSU2_TR(0x42ef61);
__builtin_memmove((R+4),(R+28),4);
}
B42ef63:{NFSU2_TR(0x42ef63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ef68ull));
TAIL_STATIC(0x40bf60u,40b);
}
B42ef68:L42ef68:{c.instructions+=2;NFSU2_TR(0x42ef68);
__builtin_memmove((R+4),(R+28),4);
}
B42ef6a:{NFSU2_TR(0x42ef6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ef6full));
TAIL_STATIC(0x40bfb0u,40b);
}
B42ef6f:L42ef6f:{c.instructions+=2;NFSU2_TR(0x42ef6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ef71:{NFSU2_TR(0x42ef71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ef83;}}
}
B42ef73:L42ef73:{c.instructions+=2;NFSU2_TR(0x42ef73);
w4(R+4,u32(0x85ef70ull));
}
B42ef78:{NFSU2_TR(0x42ef78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ef7dull));
TAIL_STATIC(0x500ca0u,500);
}
B42ef7d:L42ef7d:{c.instructions+=1;NFSU2_TR(0x42ef7d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B42ef83:L42ef83:{c.instructions+=1;NFSU2_TR(0x42ef83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ef84:L42ef84:{c.instructions+=3;NFSU2_TR(0x42ef84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ef85:{NFSU2_TR(0x42ef85);
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
B42ef88:{NFSU2_TR(0x42ef88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42efb0:L42efb0:{c.instructions+=3;NFSU2_TR(0x42efb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42efb1:{NFSU2_TR(0x42efb1);
__builtin_memmove((R+24),(R+4),4);
}
B42efb3:{NFSU2_TR(0x42efb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42efb8ull));
TAIL_STATIC(0x42cd60u,42c);
}
B42efb8:L42efb8:{c.instructions+=2;NFSU2_TR(0x42efb8);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7c0),4);
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
B42efbf:{NFSU2_TR(0x42efbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42efd2;}}
}
B42efc1:L42efc1:{c.instructions+=3;NFSU2_TR(0x42efc1);
__builtin_memmove((R+0),gp(0x89e7c4),4);
}
B42efc6:{NFSU2_TR(0x42efc6);
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
B42efc8:{NFSU2_TR(0x42efc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42efd2;}}
}
B42efca:L42efca:{c.instructions+=3;NFSU2_TR(0x42efca);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42efd0:{NFSU2_TR(0x42efd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42efd1:{NFSU2_TR(0x42efd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42efd2:L42efd2:{c.instructions+=3;NFSU2_TR(0x42efd2);
u8 U[4];
w4(U+0,u32(0x5ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42efd8:{NFSU2_TR(0x42efd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42efd9:{NFSU2_TR(0x42efd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42efe0:L42efe0:{c.instructions+=1;NFSU2_TR(0x42efe0);
TAIL_STATIC(0x42d0f0u,42d);
}
B42eff0:L42eff0:{c.instructions+=8;NFSU2_TR(0x42eff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B42eff3:{NFSU2_TR(0x42eff3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eff4:{NFSU2_TR(0x42eff4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eff5:{NFSU2_TR(0x42eff5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eff6:{NFSU2_TR(0x42eff6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42eff7:{NFSU2_TR(0x42eff7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42effb:{NFSU2_TR(0x42effb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42effd:{NFSU2_TR(0x42effd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x42f000u,42f);
}
XIT:NFSU2_TR_EXIT(0x42e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
