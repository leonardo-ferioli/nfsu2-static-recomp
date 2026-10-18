#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_745(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_74d(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x73e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x73e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_73e(u8* __restrict R,Cpu& c);
u32 page_73e(Cpu& c){return body_73e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_73e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x73e001:goto L73e001;
case 0x73e005:c.instructions+=3;goto B73e005;
case 0x73e006:c.instructions+=2;goto B73e006;
case 0x73e007:c.instructions+=1;goto B73e007;
case 0x73e00c:goto L73e00c;
case 0x73e00f:c.instructions+=7;goto B73e00f;
case 0x73e010:c.instructions+=6;goto B73e010;
case 0x73e014:c.instructions+=5;goto B73e014;
case 0x73e019:c.instructions+=4;goto B73e019;
case 0x73e01c:c.instructions+=3;goto B73e01c;
case 0x73e01d:c.instructions+=2;goto B73e01d;
case 0x73e024:c.instructions+=1;goto B73e024;
case 0x73e029:goto L73e029;
case 0x73e02c:c.instructions+=2;goto B73e02c;
case 0x73e02d:c.instructions+=1;goto B73e02d;
case 0x73e032:goto L73e032;
case 0x73e035:c.instructions+=2;goto B73e035;
case 0x73e038:c.instructions+=1;goto B73e038;
case 0x73e03d:goto L73e03d;
case 0x73e040:c.instructions+=4;goto B73e040;
case 0x73e042:c.instructions+=3;goto B73e042;
case 0x73e044:c.instructions+=2;goto B73e044;
case 0x73e047:c.instructions+=1;goto B73e047;
case 0x73e049:goto L73e049;
case 0x73e050:goto L73e050;
case 0x73e054:c.instructions+=7;goto B73e054;
case 0x73e055:c.instructions+=6;goto B73e055;
case 0x73e05a:c.instructions+=5;goto B73e05a;
case 0x73e061:c.instructions+=4;goto B73e061;
case 0x73e066:c.instructions+=3;goto B73e066;
case 0x73e067:c.instructions+=2;goto B73e067;
case 0x73e06e:c.instructions+=1;goto B73e06e;
case 0x73e073:goto L73e073;
case 0x73e077:c.instructions+=6;goto B73e077;
case 0x73e078:c.instructions+=5;goto B73e078;
case 0x73e07d:c.instructions+=4;goto B73e07d;
case 0x73e084:c.instructions+=3;goto B73e084;
case 0x73e089:c.instructions+=2;goto B73e089;
case 0x73e08a:c.instructions+=1;goto B73e08a;
case 0x73e08f:goto L73e08f;
case 0x73e092:c.instructions+=12;goto B73e092;
case 0x73e095:c.instructions+=11;goto B73e095;
case 0x73e099:c.instructions+=10;goto B73e099;
case 0x73e09a:c.instructions+=9;goto B73e09a;
case 0x73e09e:c.instructions+=8;goto B73e09e;
case 0x73e09f:c.instructions+=7;goto B73e09f;
case 0x73e0a6:c.instructions+=6;goto B73e0a6;
case 0x73e0a7:c.instructions+=5;goto B73e0a7;
case 0x73e0ab:c.instructions+=4;goto B73e0ab;
case 0x73e0b3:c.instructions+=3;goto B73e0b3;
case 0x73e0b7:c.instructions+=2;goto B73e0b7;
case 0x73e0bb:c.instructions+=1;goto B73e0bb;
case 0x73e0be:goto L73e0be;
case 0x73e0c1:c.instructions+=6;goto B73e0c1;
case 0x73e0c2:c.instructions+=5;goto B73e0c2;
case 0x73e0c3:c.instructions+=4;goto B73e0c3;
case 0x73e0c4:c.instructions+=3;goto B73e0c4;
case 0x73e0c5:c.instructions+=2;goto B73e0c5;
case 0x73e0cc:c.instructions+=1;goto B73e0cc;
case 0x73e0d1:goto L73e0d1;
case 0x73e0d7:c.instructions+=1;goto B73e0d7;
case 0x73e0d8:goto L73e0d8;
case 0x73e0db:c.instructions+=1;goto B73e0db;
case 0x73e0e1:goto L73e0e1;
case 0x73e0e4:c.instructions+=1;goto B73e0e4;
case 0x73e0e6:goto L73e0e6;
case 0x73e0e9:c.instructions+=12;goto B73e0e9;
case 0x73e0ec:c.instructions+=11;goto B73e0ec;
case 0x73e0f0:c.instructions+=10;goto B73e0f0;
case 0x73e0f1:c.instructions+=9;goto B73e0f1;
case 0x73e0f5:c.instructions+=8;goto B73e0f5;
case 0x73e0f6:c.instructions+=7;goto B73e0f6;
case 0x73e0fa:c.instructions+=6;goto B73e0fa;
case 0x73e0fb:c.instructions+=5;goto B73e0fb;
case 0x73e0ff:c.instructions+=4;goto B73e0ff;
case 0x73e107:c.instructions+=3;goto B73e107;
case 0x73e10b:c.instructions+=2;goto B73e10b;
case 0x73e10f:c.instructions+=1;goto B73e10f;
case 0x73e112:goto L73e112;
case 0x73e115:c.instructions+=3;goto B73e115;
case 0x73e118:c.instructions+=2;goto B73e118;
case 0x73e11d:c.instructions+=1;goto B73e11d;
case 0x73e123:goto L73e123;
case 0x73e125:c.instructions+=1;goto B73e125;
case 0x73e12a:goto L73e12a;
case 0x73e12d:c.instructions+=6;goto B73e12d;
case 0x73e12e:c.instructions+=5;goto B73e12e;
case 0x73e12f:c.instructions+=4;goto B73e12f;
case 0x73e130:c.instructions+=3;goto B73e130;
case 0x73e131:c.instructions+=2;goto B73e131;
case 0x73e138:c.instructions+=1;goto B73e138;
case 0x73e13d:goto L73e13d;
case 0x73e143:c.instructions+=1;goto B73e143;
case 0x73e144:goto L73e144;
case 0x73e147:c.instructions+=1;goto B73e147;
case 0x73e149:goto L73e149;
case 0x73e14c:c.instructions+=12;goto B73e14c;
case 0x73e14f:c.instructions+=11;goto B73e14f;
case 0x73e153:c.instructions+=10;goto B73e153;
case 0x73e154:c.instructions+=9;goto B73e154;
case 0x73e158:c.instructions+=8;goto B73e158;
case 0x73e159:c.instructions+=7;goto B73e159;
case 0x73e15d:c.instructions+=6;goto B73e15d;
case 0x73e15e:c.instructions+=5;goto B73e15e;
case 0x73e162:c.instructions+=4;goto B73e162;
case 0x73e16a:c.instructions+=3;goto B73e16a;
case 0x73e16e:c.instructions+=2;goto B73e16e;
case 0x73e172:c.instructions+=1;goto B73e172;
case 0x73e175:goto L73e175;
case 0x73e178:c.instructions+=1;goto B73e178;
case 0x73e17d:goto L73e17d;
case 0x73e180:c.instructions+=1;goto B73e180;
case 0x73e182:goto L73e182;
case 0x73e185:c.instructions+=12;goto B73e185;
case 0x73e188:c.instructions+=11;goto B73e188;
case 0x73e18c:c.instructions+=10;goto B73e18c;
case 0x73e18d:c.instructions+=9;goto B73e18d;
case 0x73e191:c.instructions+=8;goto B73e191;
case 0x73e192:c.instructions+=7;goto B73e192;
case 0x73e196:c.instructions+=6;goto B73e196;
case 0x73e197:c.instructions+=5;goto B73e197;
case 0x73e19b:c.instructions+=4;goto B73e19b;
case 0x73e1a3:c.instructions+=3;goto B73e1a3;
case 0x73e1a7:c.instructions+=2;goto B73e1a7;
case 0x73e1ab:c.instructions+=1;goto B73e1ab;
case 0x73e1ae:goto L73e1ae;
case 0x73e1b1:c.instructions+=1;goto B73e1b1;
case 0x73e1b6:goto L73e1b6;
case 0x73e1b9:c.instructions+=1;goto B73e1b9;
case 0x73e1bb:goto L73e1bb;
case 0x73e1be:c.instructions+=12;goto B73e1be;
case 0x73e1c1:c.instructions+=11;goto B73e1c1;
case 0x73e1c5:c.instructions+=10;goto B73e1c5;
case 0x73e1c6:c.instructions+=9;goto B73e1c6;
case 0x73e1ca:c.instructions+=8;goto B73e1ca;
case 0x73e1cb:c.instructions+=7;goto B73e1cb;
case 0x73e1cf:c.instructions+=6;goto B73e1cf;
case 0x73e1d0:c.instructions+=5;goto B73e1d0;
case 0x73e1d4:c.instructions+=4;goto B73e1d4;
case 0x73e1dc:c.instructions+=3;goto B73e1dc;
case 0x73e1e0:c.instructions+=2;goto B73e1e0;
case 0x73e1e4:c.instructions+=1;goto B73e1e4;
case 0x73e1e7:goto L73e1e7;
case 0x73e1ea:c.instructions+=1;goto B73e1ea;
case 0x73e1ec:goto L73e1ec;
case 0x73e1ee:c.instructions+=1;goto B73e1ee;
case 0x73e1f0:goto L73e1f0;
case 0x73e1f3:c.instructions+=1;goto B73e1f3;
case 0x73e1f5:goto L73e1f5;
case 0x73e1f8:c.instructions+=12;goto B73e1f8;
case 0x73e1fb:c.instructions+=11;goto B73e1fb;
case 0x73e1ff:c.instructions+=10;goto B73e1ff;
case 0x73e200:c.instructions+=9;goto B73e200;
case 0x73e204:c.instructions+=8;goto B73e204;
case 0x73e205:c.instructions+=7;goto B73e205;
case 0x73e209:c.instructions+=6;goto B73e209;
case 0x73e20a:c.instructions+=5;goto B73e20a;
case 0x73e20e:c.instructions+=4;goto B73e20e;
case 0x73e216:c.instructions+=3;goto B73e216;
case 0x73e21a:c.instructions+=2;goto B73e21a;
case 0x73e21e:c.instructions+=1;goto B73e21e;
case 0x73e221:goto L73e221;
case 0x73e224:c.instructions+=3;goto B73e224;
case 0x73e227:c.instructions+=2;goto B73e227;
case 0x73e22a:c.instructions+=1;goto B73e22a;
case 0x73e22c:goto L73e22c;
case 0x73e22d:c.instructions+=3;goto B73e22d;
case 0x73e22f:c.instructions+=2;goto B73e22f;
case 0x73e230:c.instructions+=1;goto B73e230;
case 0x73e235:goto L73e235;
case 0x73e238:c.instructions+=1;goto B73e238;
case 0x73e23f:goto L73e23f;
case 0x73e244:goto L73e244;
case 0x73e247:c.instructions+=1;goto B73e247;
case 0x73e249:goto L73e249;
case 0x73e24a:c.instructions+=5;goto B73e24a;
case 0x73e24b:c.instructions+=4;goto B73e24b;
case 0x73e252:c.instructions+=3;goto B73e252;
case 0x73e253:c.instructions+=2;goto B73e253;
case 0x73e254:c.instructions+=1;goto B73e254;
case 0x73e259:goto L73e259;
case 0x73e25f:c.instructions+=1;goto B73e25f;
case 0x73e260:goto L73e260;
case 0x73e264:c.instructions+=5;goto B73e264;
case 0x73e267:c.instructions+=4;goto B73e267;
case 0x73e26c:c.instructions+=3;goto B73e26c;
case 0x73e26f:c.instructions+=2;goto B73e26f;
case 0x73e271:c.instructions+=1;goto B73e271;
case 0x73e273:goto L73e273;
case 0x73e274:c.instructions+=3;goto B73e274;
case 0x73e278:c.instructions+=2;goto B73e278;
case 0x73e27c:c.instructions+=1;goto B73e27c;
case 0x73e27e:goto L73e27e;
case 0x73e281:c.instructions+=14;goto B73e281;
case 0x73e283:c.instructions+=13;goto B73e283;
case 0x73e284:c.instructions+=12;goto B73e284;
case 0x73e287:c.instructions+=11;goto B73e287;
case 0x73e28b:c.instructions+=10;goto B73e28b;
case 0x73e28f:c.instructions+=9;goto B73e28f;
case 0x73e292:c.instructions+=8;goto B73e292;
case 0x73e296:c.instructions+=7;goto B73e296;
case 0x73e297:c.instructions+=6;goto B73e297;
case 0x73e29b:c.instructions+=5;goto B73e29b;
case 0x73e29c:c.instructions+=4;goto B73e29c;
case 0x73e29d:c.instructions+=3;goto B73e29d;
case 0x73e2a1:c.instructions+=2;goto B73e2a1;
case 0x73e2a5:c.instructions+=1;goto B73e2a5;
case 0x73e2a8:goto L73e2a8;
case 0x73e2ab:c.instructions+=2;goto B73e2ab;
case 0x73e2b2:c.instructions+=1;goto B73e2b2;
case 0x73e2b3:goto L73e2b3;
case 0x73e2b4:goto L73e2b4;
case 0x73e2b7:c.instructions+=1;goto B73e2b7;
case 0x73e2c0:goto L73e2c0;
case 0x73e2c1:c.instructions+=6;goto B73e2c1;
case 0x73e2c5:c.instructions+=5;goto B73e2c5;
case 0x73e2c8:c.instructions+=4;goto B73e2c8;
case 0x73e2ca:c.instructions+=3;goto B73e2ca;
case 0x73e2cb:c.instructions+=2;goto B73e2cb;
case 0x73e2cc:c.instructions+=1;goto B73e2cc;
case 0x73e2d1:goto L73e2d1;
case 0x73e2d4:c.instructions+=4;goto B73e2d4;
case 0x73e2d6:c.instructions+=3;goto B73e2d6;
case 0x73e2d7:c.instructions+=2;goto B73e2d7;
case 0x73e2d8:c.instructions+=1;goto B73e2d8;
case 0x73e2dd:goto L73e2dd;
case 0x73e2e0:c.instructions+=4;goto B73e2e0;
case 0x73e2e2:c.instructions+=3;goto B73e2e2;
case 0x73e2e3:c.instructions+=2;goto B73e2e3;
case 0x73e2e4:c.instructions+=1;goto B73e2e4;
case 0x73e2e9:goto L73e2e9;
case 0x73e2ea:c.instructions+=1;goto B73e2ea;
case 0x73e2ef:goto L73e2ef;
case 0x73e2f2:c.instructions+=2;goto B73e2f2;
case 0x73e2f3:c.instructions+=1;goto B73e2f3;
case 0x73e300:goto L73e300;
case 0x73e301:c.instructions+=4;goto B73e301;
case 0x73e305:c.instructions+=3;goto B73e305;
case 0x73e308:c.instructions+=2;goto B73e308;
case 0x73e30a:c.instructions+=1;goto B73e30a;
case 0x73e30c:goto L73e30c;
case 0x73e313:c.instructions+=1;goto B73e313;
case 0x73e318:goto L73e318;
case 0x73e31c:c.instructions+=2;goto B73e31c;
case 0x73e31e:c.instructions+=1;goto B73e31e;
case 0x73e320:goto L73e320;
case 0x73e325:c.instructions+=6;goto B73e325;
case 0x73e326:c.instructions+=5;goto B73e326;
case 0x73e327:c.instructions+=4;goto B73e327;
case 0x73e32a:c.instructions+=3;goto B73e32a;
case 0x73e32b:c.instructions+=2;goto B73e32b;
case 0x73e32d:c.instructions+=1;goto B73e32d;
case 0x73e332:goto L73e332;
case 0x73e335:c.instructions+=1;goto B73e335;
case 0x73e336:goto L73e336;
case 0x73e33d:c.instructions+=1;goto B73e33d;
case 0x73e341:goto L73e341;
case 0x73e342:c.instructions+=1;goto B73e342;
case 0x73e350:goto L73e350;
case 0x73e351:c.instructions+=3;goto B73e351;
case 0x73e355:c.instructions+=2;goto B73e355;
case 0x73e359:c.instructions+=1;goto B73e359;
case 0x73e35b:goto L73e35b;
case 0x73e360:c.instructions+=7;goto B73e360;
case 0x73e361:c.instructions+=6;goto B73e361;
case 0x73e362:c.instructions+=5;goto B73e362;
case 0x73e363:c.instructions+=4;goto B73e363;
case 0x73e366:c.instructions+=3;goto B73e366;
case 0x73e367:c.instructions+=2;goto B73e367;
case 0x73e369:c.instructions+=1;goto B73e369;
case 0x73e36e:goto L73e36e;
case 0x73e371:c.instructions+=4;goto B73e371;
case 0x73e374:c.instructions+=3;goto B73e374;
case 0x73e375:c.instructions+=2;goto B73e375;
case 0x73e378:c.instructions+=1;goto B73e378;
case 0x73e379:goto L73e379;
case 0x73e37a:c.instructions+=1;goto B73e37a;
case 0x73e380:goto L73e380;
case 0x73e381:c.instructions+=3;goto B73e381;
case 0x73e385:c.instructions+=2;goto B73e385;
case 0x73e389:c.instructions+=1;goto B73e389;
case 0x73e38b:goto L73e38b;
case 0x73e38f:c.instructions+=6;goto B73e38f;
case 0x73e390:c.instructions+=5;goto B73e390;
case 0x73e391:c.instructions+=4;goto B73e391;
case 0x73e393:c.instructions+=3;goto B73e393;
case 0x73e396:c.instructions+=2;goto B73e396;
case 0x73e399:c.instructions+=1;goto B73e399;
case 0x73e39b:goto L73e39b;
case 0x73e3a0:c.instructions+=2;goto B73e3a0;
case 0x73e3a1:c.instructions+=1;goto B73e3a1;
case 0x73e3a3:goto L73e3a3;
case 0x73e3a9:c.instructions+=1;goto B73e3a9;
case 0x73e3aa:goto L73e3aa;
case 0x73e3ab:c.instructions+=1;goto B73e3ab;
case 0x73e3b0:goto L73e3b0;
case 0x73e3b3:c.instructions+=4;goto B73e3b3;
case 0x73e3b4:c.instructions+=3;goto B73e3b4;
case 0x73e3b7:c.instructions+=2;goto B73e3b7;
case 0x73e3be:c.instructions+=1;goto B73e3be;
case 0x73e3bf:goto L73e3bf;
case 0x73e3c0:c.instructions+=1;goto B73e3c0;
case 0x73e3d0:goto L73e3d0;
case 0x73e3d3:c.instructions+=7;goto B73e3d3;
case 0x73e3d4:c.instructions+=6;goto B73e3d4;
case 0x73e3d5:c.instructions+=5;goto B73e3d5;
case 0x73e3d9:c.instructions+=4;goto B73e3d9;
case 0x73e3dc:c.instructions+=3;goto B73e3dc;
case 0x73e3de:c.instructions+=2;goto B73e3de;
case 0x73e3e0:c.instructions+=1;goto B73e3e0;
case 0x73e3e2:goto L73e3e2;
case 0x73e3e5:c.instructions+=1;goto B73e3e5;
case 0x73e3e7:goto L73e3e7;
case 0x73e3ea:goto L73e3ea;
case 0x73e3ed:c.instructions+=1;goto B73e3ed;
case 0x73e3ef:goto L73e3ef;
case 0x73e3f4:goto L73e3f4;
case 0x73e3f7:c.instructions+=2;goto B73e3f7;
case 0x73e3f9:c.instructions+=1;goto B73e3f9;
case 0x73e3fb:goto L73e3fb;
case 0x73e3fe:c.instructions+=11;goto B73e3fe;
case 0x73e401:c.instructions+=10;goto B73e401;
case 0x73e402:c.instructions+=9;goto B73e402;
case 0x73e406:c.instructions+=8;goto B73e406;
case 0x73e407:c.instructions+=7;goto B73e407;
case 0x73e408:c.instructions+=6;goto B73e408;
case 0x73e40c:c.instructions+=5;goto B73e40c;
case 0x73e410:c.instructions+=4;goto B73e410;
case 0x73e418:c.instructions+=3;goto B73e418;
case 0x73e41c:c.instructions+=2;goto B73e41c;
case 0x73e420:c.instructions+=1;goto B73e420;
case 0x73e423:goto L73e423;
case 0x73e426:c.instructions+=3;goto B73e426;
case 0x73e429:c.instructions+=2;goto B73e429;
case 0x73e42b:c.instructions+=1;goto B73e42b;
case 0x73e42d:goto L73e42d;
case 0x73e42e:c.instructions+=3;goto B73e42e;
case 0x73e42f:c.instructions+=2;goto B73e42f;
case 0x73e432:c.instructions+=1;goto B73e432;
case 0x73e437:goto L73e437;
case 0x73e43d:c.instructions+=5;goto B73e43d;
case 0x73e43e:c.instructions+=4;goto B73e43e;
case 0x73e441:c.instructions+=3;goto B73e441;
case 0x73e442:c.instructions+=2;goto B73e442;
case 0x73e444:c.instructions+=1;goto B73e444;
case 0x73e449:goto L73e449;
case 0x73e44c:c.instructions+=4;goto B73e44c;
case 0x73e44d:c.instructions+=3;goto B73e44d;
case 0x73e450:c.instructions+=2;goto B73e450;
case 0x73e453:c.instructions+=1;goto B73e453;
case 0x73e454:goto L73e454;
case 0x73e455:c.instructions+=3;goto B73e455;
case 0x73e456:c.instructions+=2;goto B73e456;
case 0x73e459:c.instructions+=1;goto B73e459;
case 0x73e460:goto L73e460;
case 0x73e461:c.instructions+=2;goto B73e461;
case 0x73e466:c.instructions+=1;goto B73e466;
case 0x73e46b:goto L73e46b;
case 0x73e46d:c.instructions+=4;goto B73e46d;
case 0x73e470:c.instructions+=3;goto B73e470;
case 0x73e472:c.instructions+=2;goto B73e472;
case 0x73e474:c.instructions+=1;goto B73e474;
case 0x73e47a:goto L73e47a;
case 0x73e47e:c.instructions+=4;goto B73e47e;
case 0x73e47f:c.instructions+=3;goto B73e47f;
case 0x73e480:c.instructions+=2;goto B73e480;
case 0x73e485:c.instructions+=1;goto B73e485;
case 0x73e487:goto L73e487;
case 0x73e489:goto L73e489;
case 0x73e48d:c.instructions+=13;goto B73e48d;
case 0x73e491:c.instructions+=12;goto B73e491;
case 0x73e495:c.instructions+=11;goto B73e495;
case 0x73e498:c.instructions+=10;goto B73e498;
case 0x73e49c:c.instructions+=9;goto B73e49c;
case 0x73e49e:c.instructions+=8;goto B73e49e;
case 0x73e49f:c.instructions+=7;goto B73e49f;
case 0x73e4a2:c.instructions+=6;goto B73e4a2;
case 0x73e4a3:c.instructions+=5;goto B73e4a3;
case 0x73e4a5:c.instructions+=4;goto B73e4a5;
case 0x73e4a8:c.instructions+=3;goto B73e4a8;
case 0x73e4ab:c.instructions+=2;goto B73e4ab;
case 0x73e4b2:c.instructions+=1;goto B73e4b2;
case 0x73e4b7:goto L73e4b7;
case 0x73e4b8:c.instructions+=5;goto B73e4b8;
case 0x73e4bd:c.instructions+=4;goto B73e4bd;
case 0x73e4bf:c.instructions+=3;goto B73e4bf;
case 0x73e4c0:c.instructions+=2;goto B73e4c0;
case 0x73e4c4:c.instructions+=1;goto B73e4c4;
case 0x73e4c9:goto L73e4c9;
case 0x73e4ca:c.instructions+=5;goto B73e4ca;
case 0x73e4cf:c.instructions+=4;goto B73e4cf;
case 0x73e4d1:c.instructions+=3;goto B73e4d1;
case 0x73e4d2:c.instructions+=2;goto B73e4d2;
case 0x73e4d5:c.instructions+=1;goto B73e4d5;
case 0x73e4da:goto L73e4da;
case 0x73e4db:c.instructions+=5;goto B73e4db;
case 0x73e4e0:c.instructions+=4;goto B73e4e0;
case 0x73e4e2:c.instructions+=3;goto B73e4e2;
case 0x73e4e3:c.instructions+=2;goto B73e4e3;
case 0x73e4e6:c.instructions+=1;goto B73e4e6;
case 0x73e4eb:goto L73e4eb;
case 0x73e4ee:c.instructions+=5;goto B73e4ee;
case 0x73e4ef:c.instructions+=4;goto B73e4ef;
case 0x73e4f2:c.instructions+=3;goto B73e4f2;
case 0x73e4f9:c.instructions+=2;goto B73e4f9;
case 0x73e4fb:c.instructions+=1;goto B73e4fb;
case 0x73e4fc:goto L73e4fc;
case 0x73e4fd:c.instructions+=1;goto B73e4fd;
case 0x73e500:goto L73e500;
case 0x73e504:c.instructions+=2;goto B73e504;
case 0x73e509:c.instructions+=1;goto B73e509;
case 0x73e50b:goto L73e50b;
case 0x73e510:c.instructions+=1;goto B73e510;
case 0x73e511:goto L73e511;
case 0x73e516:c.instructions+=1;goto B73e516;
case 0x73e518:goto L73e518;
case 0x73e51d:c.instructions+=1;goto B73e51d;
case 0x73e51f:goto L73e51f;
case 0x73e524:c.instructions+=1;goto B73e524;
case 0x73e525:goto L73e525;
case 0x73e52a:c.instructions+=1;goto B73e52a;
case 0x73e52c:goto L73e52c;
case 0x73e531:c.instructions+=1;goto B73e531;
case 0x73e532:goto L73e532;
case 0x73e535:c.instructions+=1;goto B73e535;
case 0x73e537:goto L73e537;
case 0x73e538:goto L73e538;
case 0x73e53d:c.instructions+=1;goto B73e53d;
case 0x73e53f:goto L73e53f;
case 0x73e544:c.instructions+=1;goto B73e544;
case 0x73e545:goto L73e545;
case 0x73e54a:c.instructions+=1;goto B73e54a;
case 0x73e54c:goto L73e54c;
case 0x73e551:c.instructions+=1;goto B73e551;
case 0x73e552:goto L73e552;
case 0x73e557:c.instructions+=1;goto B73e557;
case 0x73e559:goto L73e559;
case 0x73e55e:c.instructions+=1;goto B73e55e;
case 0x73e55f:goto L73e55f;
case 0x73e561:c.instructions+=5;goto B73e561;
case 0x73e566:c.instructions+=4;goto B73e566;
case 0x73e569:c.instructions+=3;goto B73e569;
case 0x73e56c:c.instructions+=2;goto B73e56c;
case 0x73e56e:c.instructions+=1;goto B73e56e;
case 0x73e570:goto L73e570;
case 0x73e574:c.instructions+=4;goto B73e574;
case 0x73e577:c.instructions+=3;goto B73e577;
case 0x73e579:c.instructions+=2;goto B73e579;
case 0x73e580:c.instructions+=1;goto B73e580;
case 0x73e582:goto L73e582;
case 0x73e585:c.instructions+=5;goto B73e585;
case 0x73e586:c.instructions+=4;goto B73e586;
case 0x73e588:c.instructions+=3;goto B73e588;
case 0x73e58a:c.instructions+=2;goto B73e58a;
case 0x73e58b:c.instructions+=1;goto B73e58b;
case 0x73e58d:goto L73e58d;
case 0x73e590:goto L73e590;
case 0x73e5a0:goto L73e5a0;
case 0x73e5a1:c.instructions+=4;goto B73e5a1;
case 0x73e5a3:c.instructions+=3;goto B73e5a3;
case 0x73e5a5:c.instructions+=2;goto B73e5a5;
case 0x73e5a7:c.instructions+=1;goto B73e5a7;
case 0x73e5ac:goto L73e5ac;
case 0x73e5ae:c.instructions+=3;goto B73e5ae;
case 0x73e5b0:c.instructions+=2;goto B73e5b0;
case 0x73e5b1:c.instructions+=1;goto B73e5b1;
case 0x73e5b6:goto L73e5b6;
case 0x73e5b9:c.instructions+=3;goto B73e5b9;
case 0x73e5bb:c.instructions+=2;goto B73e5bb;
case 0x73e5bc:c.instructions+=1;goto B73e5bc;
case 0x73e5c0:goto L73e5c0;
case 0x73e5c1:c.instructions+=3;goto B73e5c1;
case 0x73e5c5:c.instructions+=2;goto B73e5c5;
case 0x73e5c7:c.instructions+=1;goto B73e5c7;
case 0x73e5c9:goto L73e5c9;
case 0x73e5cf:c.instructions+=2;goto B73e5cf;
case 0x73e5d1:c.instructions+=1;goto B73e5d1;
case 0x73e5d3:goto L73e5d3;
case 0x73e5d4:c.instructions+=2;goto B73e5d4;
case 0x73e5d5:c.instructions+=1;goto B73e5d5;
case 0x73e5da:goto L73e5da;
case 0x73e5dc:c.instructions+=3;goto B73e5dc;
case 0x73e5df:c.instructions+=2;goto B73e5df;
case 0x73e5e0:c.instructions+=1;goto B73e5e0;
case 0x73e5e2:goto L73e5e2;
case 0x73e5e8:c.instructions+=3;goto B73e5e8;
case 0x73e5e9:c.instructions+=2;goto B73e5e9;
case 0x73e5ea:c.instructions+=1;goto B73e5ea;
case 0x73e5ef:goto L73e5ef;
case 0x73e5f2:c.instructions+=2;goto B73e5f2;
case 0x73e5f4:c.instructions+=1;goto B73e5f4;
case 0x73e5f6:goto L73e5f6;
case 0x73e5f7:c.instructions+=1;goto B73e5f7;
case 0x73e5fa:goto L73e5fa;
case 0x73e5fd:goto L73e5fd;
case 0x73e5fe:c.instructions+=1;goto B73e5fe;
case 0x73e600:goto L73e600;
case 0x73e606:c.instructions+=2;goto B73e606;
case 0x73e607:c.instructions+=1;goto B73e607;
case 0x73e60c:goto L73e60c;
case 0x73e60f:c.instructions+=2;goto B73e60f;
case 0x73e619:c.instructions+=1;goto B73e619;
case 0x73e61a:goto L73e61a;
case 0x73e61b:c.instructions+=1;goto B73e61b;
case 0x73e620:goto L73e620;
case 0x73e621:c.instructions+=3;goto B73e621;
case 0x73e623:c.instructions+=2;goto B73e623;
case 0x73e625:c.instructions+=1;goto B73e625;
case 0x73e627:goto L73e627;
case 0x73e62d:c.instructions+=2;goto B73e62d;
case 0x73e62f:c.instructions+=1;goto B73e62f;
case 0x73e631:goto L73e631;
case 0x73e632:c.instructions+=1;goto B73e632;
case 0x73e637:goto L73e637;
case 0x73e63a:c.instructions+=1;goto B73e63a;
case 0x73e640:goto L73e640;
case 0x73e641:c.instructions+=2;goto B73e641;
case 0x73e643:c.instructions+=1;goto B73e643;
case 0x73e645:goto L73e645;
case 0x73e647:c.instructions+=5;goto B73e647;
case 0x73e64b:c.instructions+=4;goto B73e64b;
case 0x73e64d:c.instructions+=3;goto B73e64d;
case 0x73e64e:c.instructions+=2;goto B73e64e;
case 0x73e64f:c.instructions+=1;goto B73e64f;
case 0x73e654:goto L73e654;
case 0x73e658:c.instructions+=5;goto B73e658;
case 0x73e65b:c.instructions+=4;goto B73e65b;
case 0x73e661:c.instructions+=3;goto B73e661;
case 0x73e664:c.instructions+=2;goto B73e664;
case 0x73e666:c.instructions+=1;goto B73e666;
case 0x73e668:goto L73e668;
case 0x73e669:c.instructions+=2;goto B73e669;
case 0x73e66a:c.instructions+=1;goto B73e66a;
case 0x73e66f:goto L73e66f;
case 0x73e672:goto L73e672;
case 0x73e673:goto L73e673;
case 0x73e674:c.instructions+=1;goto B73e674;
case 0x73e680:goto L73e680;
case 0x73e684:c.instructions+=5;goto B73e684;
case 0x73e686:c.instructions+=4;goto B73e686;
case 0x73e68b:c.instructions+=3;goto B73e68b;
case 0x73e68c:c.instructions+=2;goto B73e68c;
case 0x73e690:c.instructions+=1;goto B73e690;
case 0x73e696:goto L73e696;
case 0x73e698:goto L73e698;
case 0x73e69d:c.instructions+=1;goto B73e69d;
case 0x73e69f:goto L73e69f;
case 0x73e6a1:goto L73e6a1;
case 0x73e6a6:c.instructions+=1;goto B73e6a6;
case 0x73e6a8:goto L73e6a8;
case 0x73e6ad:c.instructions+=1;goto B73e6ad;
case 0x73e6af:goto L73e6af;
case 0x73e6b6:c.instructions+=1;goto B73e6b6;
case 0x73e6b8:goto L73e6b8;
case 0x73e6bf:goto L73e6bf;
case 0x73e6c5:c.instructions+=5;goto B73e6c5;
case 0x73e6c7:c.instructions+=4;goto B73e6c7;
case 0x73e6c9:c.instructions+=3;goto B73e6c9;
case 0x73e6cc:c.instructions+=2;goto B73e6cc;
case 0x73e6ce:c.instructions+=1;goto B73e6ce;
case 0x73e6d0:goto L73e6d0;
case 0x73e6d3:c.instructions+=2;goto B73e6d3;
case 0x73e6d6:c.instructions+=1;goto B73e6d6;
case 0x73e6d8:goto L73e6d8;
case 0x73e6dd:goto L73e6dd;
case 0x73e6e0:goto L73e6e0;
case 0x73e6e2:c.instructions+=1;goto B73e6e2;
case 0x73e6e4:goto L73e6e4;
case 0x73e6e7:c.instructions+=2;goto B73e6e7;
case 0x73e6e9:c.instructions+=1;goto B73e6e9;
case 0x73e6eb:goto L73e6eb;
case 0x73e6ee:c.instructions+=6;goto B73e6ee;
case 0x73e6ef:c.instructions+=5;goto B73e6ef;
case 0x73e6f2:c.instructions+=4;goto B73e6f2;
case 0x73e6f4:c.instructions+=3;goto B73e6f4;
case 0x73e6f5:c.instructions+=2;goto B73e6f5;
case 0x73e6f6:c.instructions+=1;goto B73e6f6;
case 0x73e6fb:goto L73e6fb;
case 0x73e6fe:c.instructions+=3;goto B73e6fe;
case 0x73e6ff:c.instructions+=2;goto B73e6ff;
case 0x73e700:c.instructions+=1;goto B73e700;
case 0x73e702:goto L73e702;
case 0x73e705:c.instructions+=1;goto B73e705;
case 0x73e70c:goto L73e70c;
case 0x73e70d:c.instructions+=1;goto B73e70d;
case 0x73e70e:goto L73e70e;
case 0x73e713:c.instructions+=1;goto B73e713;
case 0x73e715:goto L73e715;
case 0x73e71c:c.instructions+=1;goto B73e71c;
case 0x73e71e:goto L73e71e;
case 0x73e725:c.instructions+=1;goto B73e725;
case 0x73e727:goto L73e727;
case 0x73e72c:c.instructions+=1;goto B73e72c;
case 0x73e72e:goto L73e72e;
case 0x73e733:c.instructions+=1;goto B73e733;
case 0x73e739:goto L73e739;
case 0x73e73e:c.instructions+=1;goto B73e73e;
case 0x73e740:goto L73e740;
case 0x73e750:goto L73e750;
case 0x73e751:c.instructions+=3;goto B73e751;
case 0x73e755:c.instructions+=2;goto B73e755;
case 0x73e757:c.instructions+=1;goto B73e757;
case 0x73e759:goto L73e759;
case 0x73e75b:c.instructions+=2;goto B73e75b;
case 0x73e75c:c.instructions+=1;goto B73e75c;
case 0x73e75d:goto L73e75d;
case 0x73e763:c.instructions+=2;goto B73e763;
case 0x73e765:c.instructions+=1;goto B73e765;
case 0x73e767:goto L73e767;
case 0x73e768:c.instructions+=5;goto B73e768;
case 0x73e76c:c.instructions+=4;goto B73e76c;
case 0x73e76d:c.instructions+=3;goto B73e76d;
case 0x73e76e:c.instructions+=2;goto B73e76e;
case 0x73e770:c.instructions+=1;goto B73e770;
case 0x73e773:goto L73e773;
case 0x73e775:c.instructions+=11;goto B73e775;
case 0x73e777:c.instructions+=10;goto B73e777;
case 0x73e779:c.instructions+=9;goto B73e779;
case 0x73e77b:c.instructions+=8;goto B73e77b;
case 0x73e77e:c.instructions+=7;goto B73e77e;
case 0x73e781:c.instructions+=6;goto B73e781;
case 0x73e784:c.instructions+=5;goto B73e784;
case 0x73e785:c.instructions+=4;goto B73e785;
case 0x73e787:c.instructions+=3;goto B73e787;
case 0x73e789:c.instructions+=2;goto B73e789;
case 0x73e78c:c.instructions+=1;goto B73e78c;
case 0x73e791:goto L73e791;
case 0x73e793:c.instructions+=3;goto B73e793;
case 0x73e795:c.instructions+=2;goto B73e795;
case 0x73e796:c.instructions+=1;goto B73e796;
case 0x73e79b:goto L73e79b;
case 0x73e79e:c.instructions+=8;goto B73e79e;
case 0x73e7a1:c.instructions+=7;goto B73e7a1;
case 0x73e7a4:c.instructions+=6;goto B73e7a4;
case 0x73e7a6:c.instructions+=5;goto B73e7a6;
case 0x73e7a7:c.instructions+=4;goto B73e7a7;
case 0x73e7ad:c.instructions+=3;goto B73e7ad;
case 0x73e7af:c.instructions+=2;goto B73e7af;
case 0x73e7b0:c.instructions+=1;goto B73e7b0;
case 0x73e7b1:goto L73e7b1;
case 0x73e7b2:c.instructions+=1;goto B73e7b2;
case 0x73e7c0:goto L73e7c0;
case 0x73e7c1:c.instructions+=7;goto B73e7c1;
case 0x73e7c5:c.instructions+=6;goto B73e7c5;
case 0x73e7c8:c.instructions+=5;goto B73e7c8;
case 0x73e7c9:c.instructions+=4;goto B73e7c9;
case 0x73e7d0:c.instructions+=3;goto B73e7d0;
case 0x73e7d1:c.instructions+=2;goto B73e7d1;
case 0x73e7d2:c.instructions+=1;goto B73e7d2;
case 0x73e7d7:goto L73e7d7;
case 0x73e7d9:c.instructions+=3;goto B73e7d9;
case 0x73e7dc:c.instructions+=2;goto B73e7dc;
case 0x73e7de:c.instructions+=1;goto B73e7de;
case 0x73e7e0:goto L73e7e0;
case 0x73e7e7:c.instructions+=3;goto B73e7e7;
case 0x73e7ee:c.instructions+=2;goto B73e7ee;
case 0x73e7f0:c.instructions+=1;goto B73e7f0;
case 0x73e7f2:goto L73e7f2;
case 0x73e7f8:c.instructions+=1;goto B73e7f8;
case 0x73e7fa:goto L73e7fa;
case 0x73e7ff:c.instructions+=1;goto B73e7ff;
case 0x73e801:goto L73e801;
case 0x73e806:c.instructions+=2;goto B73e806;
case 0x73e80d:c.instructions+=1;goto B73e80d;
case 0x73e817:goto L73e817;
case 0x73e81d:c.instructions+=8;goto B73e81d;
case 0x73e820:c.instructions+=7;goto B73e820;
case 0x73e821:c.instructions+=6;goto B73e821;
case 0x73e822:c.instructions+=5;goto B73e822;
case 0x73e827:c.instructions+=4;goto B73e827;
case 0x73e82e:c.instructions+=3;goto B73e82e;
case 0x73e82f:c.instructions+=2;goto B73e82f;
case 0x73e830:c.instructions+=1;goto B73e830;
case 0x73e835:goto L73e835;
case 0x73e838:c.instructions+=2;goto B73e838;
case 0x73e83a:c.instructions+=1;goto B73e83a;
case 0x73e83c:goto L73e83c;
case 0x73e83e:c.instructions+=2;goto B73e83e;
case 0x73e845:c.instructions+=1;goto B73e845;
case 0x73e847:goto L73e847;
case 0x73e84a:c.instructions+=4;goto B73e84a;
case 0x73e851:c.instructions+=3;goto B73e851;
case 0x73e852:c.instructions+=2;goto B73e852;
case 0x73e853:c.instructions+=1;goto B73e853;
case 0x73e858:goto L73e858;
case 0x73e85b:c.instructions+=1;goto B73e85b;
case 0x73e85d:goto L73e85d;
case 0x73e85e:c.instructions+=2;goto B73e85e;
case 0x73e85f:c.instructions+=1;goto B73e85f;
case 0x73e864:goto L73e864;
case 0x73e867:c.instructions+=3;goto B73e867;
case 0x73e868:c.instructions+=2;goto B73e868;
case 0x73e869:c.instructions+=1;goto B73e869;
case 0x73e86a:goto L73e86a;
case 0x73e86d:goto L73e86d;
case 0x73e86e:c.instructions+=3;goto B73e86e;
case 0x73e870:c.instructions+=2;goto B73e870;
case 0x73e871:c.instructions+=1;goto B73e871;
case 0x73e880:goto L73e880;
case 0x73e881:c.instructions+=7;goto B73e881;
case 0x73e882:c.instructions+=6;goto B73e882;
case 0x73e886:c.instructions+=5;goto B73e886;
case 0x73e887:c.instructions+=4;goto B73e887;
case 0x73e88a:c.instructions+=3;goto B73e88a;
case 0x73e88c:c.instructions+=2;goto B73e88c;
case 0x73e890:c.instructions+=1;goto B73e890;
case 0x73e892:goto L73e892;
case 0x73e895:c.instructions+=2;goto B73e895;
case 0x73e897:c.instructions+=1;goto B73e897;
case 0x73e899:goto L73e899;
case 0x73e89a:c.instructions+=4;goto B73e89a;
case 0x73e89b:c.instructions+=3;goto B73e89b;
case 0x73e89c:c.instructions+=2;goto B73e89c;
case 0x73e89e:c.instructions+=1;goto B73e89e;
case 0x73e8a3:goto L73e8a3;
case 0x73e8a5:c.instructions+=3;goto B73e8a5;
case 0x73e8a8:c.instructions+=2;goto B73e8a8;
case 0x73e8aa:c.instructions+=1;goto B73e8aa;
case 0x73e8ac:goto L73e8ac;
case 0x73e8b0:goto L73e8b0;
case 0x73e8b3:c.instructions+=3;goto B73e8b3;
case 0x73e8b4:c.instructions+=2;goto B73e8b4;
case 0x73e8b5:c.instructions+=1;goto B73e8b5;
case 0x73e8ba:goto L73e8ba;
case 0x73e8bd:c.instructions+=2;goto B73e8bd;
case 0x73e8bf:c.instructions+=1;goto B73e8bf;
case 0x73e8c1:goto L73e8c1;
case 0x73e8c5:c.instructions+=2;goto B73e8c5;
case 0x73e8c7:c.instructions+=1;goto B73e8c7;
case 0x73e8c9:goto L73e8c9;
case 0x73e8cd:c.instructions+=1;goto B73e8cd;
case 0x73e8cf:goto L73e8cf;
case 0x73e8d2:c.instructions+=2;goto B73e8d2;
case 0x73e8d4:c.instructions+=1;goto B73e8d4;
case 0x73e8d6:goto L73e8d6;
case 0x73e8d8:c.instructions+=1;goto B73e8d8;
case 0x73e8dc:goto L73e8dc;
case 0x73e8dd:c.instructions+=2;goto B73e8dd;
case 0x73e8df:c.instructions+=1;goto B73e8df;
case 0x73e8e1:goto L73e8e1;
case 0x73e8e4:c.instructions+=1;goto B73e8e4;
case 0x73e8e6:goto L73e8e6;
case 0x73e8ea:c.instructions+=9;goto B73e8ea;
case 0x73e8eb:c.instructions+=8;goto B73e8eb;
case 0x73e8ed:c.instructions+=7;goto B73e8ed;
case 0x73e8ee:c.instructions+=6;goto B73e8ee;
case 0x73e8ef:c.instructions+=5;goto B73e8ef;
case 0x73e8f1:c.instructions+=4;goto B73e8f1;
case 0x73e8f5:c.instructions+=3;goto B73e8f5;
case 0x73e8f6:c.instructions+=2;goto B73e8f6;
case 0x73e8f7:c.instructions+=1;goto B73e8f7;
case 0x73e8f8:goto L73e8f8;
case 0x73e8fc:c.instructions+=10;goto B73e8fc;
case 0x73e8fe:c.instructions+=9;goto B73e8fe;
case 0x73e902:c.instructions+=8;goto B73e902;
case 0x73e903:c.instructions+=7;goto B73e903;
case 0x73e904:c.instructions+=6;goto B73e904;
case 0x73e905:c.instructions+=5;goto B73e905;
case 0x73e907:c.instructions+=4;goto B73e907;
case 0x73e90b:c.instructions+=3;goto B73e90b;
case 0x73e90c:c.instructions+=2;goto B73e90c;
case 0x73e90d:c.instructions+=1;goto B73e90d;
case 0x73e90e:goto L73e90e;
case 0x73e910:c.instructions+=4;goto B73e910;
case 0x73e911:c.instructions+=3;goto B73e911;
case 0x73e912:c.instructions+=2;goto B73e912;
case 0x73e913:c.instructions+=1;goto B73e913;
case 0x73e920:goto L73e920;
case 0x73e924:c.instructions+=4;goto B73e924;
case 0x73e927:c.instructions+=3;goto B73e927;
case 0x73e928:c.instructions+=2;goto B73e928;
case 0x73e92c:c.instructions+=1;goto B73e92c;
case 0x73e92e:goto L73e92e;
case 0x73e934:goto L73e934;
case 0x73e938:c.instructions+=2;goto B73e938;
case 0x73e93b:c.instructions+=1;goto B73e93b;
case 0x73e93d:goto L73e93d;
case 0x73e943:goto L73e943;
case 0x73e947:c.instructions+=2;goto B73e947;
case 0x73e94a:c.instructions+=1;goto B73e94a;
case 0x73e94c:goto L73e94c;
case 0x73e952:goto L73e952;
case 0x73e956:c.instructions+=2;goto B73e956;
case 0x73e959:c.instructions+=1;goto B73e959;
case 0x73e95b:goto L73e95b;
case 0x73e961:goto L73e961;
case 0x73e965:c.instructions+=2;goto B73e965;
case 0x73e968:c.instructions+=1;goto B73e968;
case 0x73e96a:goto L73e96a;
case 0x73e970:goto L73e970;
case 0x73e974:c.instructions+=2;goto B73e974;
case 0x73e977:c.instructions+=1;goto B73e977;
case 0x73e979:goto L73e979;
case 0x73e97e:c.instructions+=1;goto B73e97e;
case 0x73e980:goto L73e980;
case 0x73e986:goto L73e986;
case 0x73e98b:c.instructions+=1;goto B73e98b;
case 0x73e98d:goto L73e98d;
case 0x73e990:c.instructions+=2;goto B73e990;
case 0x73e991:c.instructions+=1;goto B73e991;
case 0x73e996:goto L73e996;
case 0x73e999:goto L73e999;
case 0x73e99e:c.instructions+=1;goto B73e99e;
case 0x73e9a0:goto L73e9a0;
case 0x73e9aa:goto L73e9aa;
case 0x73e9ab:c.instructions+=1;goto B73e9ab;
case 0x73e9b0:goto L73e9b0;
case 0x73e9b4:c.instructions+=2;goto B73e9b4;
case 0x73e9b6:c.instructions+=1;goto B73e9b6;
case 0x73e9b8:goto L73e9b8;
case 0x73e9bd:c.instructions+=1;goto B73e9bd;
case 0x73e9be:goto L73e9be;
case 0x73e9c2:c.instructions+=10;goto B73e9c2;
case 0x73e9c6:c.instructions+=9;goto B73e9c6;
case 0x73e9c8:c.instructions+=8;goto B73e9c8;
case 0x73e9ca:c.instructions+=7;goto B73e9ca;
case 0x73e9cb:c.instructions+=6;goto B73e9cb;
case 0x73e9cf:c.instructions+=5;goto B73e9cf;
case 0x73e9d0:c.instructions+=4;goto B73e9d0;
case 0x73e9d3:c.instructions+=3;goto B73e9d3;
case 0x73e9d4:c.instructions+=2;goto B73e9d4;
case 0x73e9d5:c.instructions+=1;goto B73e9d5;
case 0x73e9da:goto L73e9da;
case 0x73e9dd:c.instructions+=1;goto B73e9dd;
case 0x73e9e0:goto L73e9e0;
case 0x73e9e4:c.instructions+=2;goto B73e9e4;
case 0x73e9e6:c.instructions+=1;goto B73e9e6;
case 0x73e9e8:goto L73e9e8;
case 0x73e9ed:c.instructions+=1;goto B73e9ed;
case 0x73e9ee:goto L73e9ee;
case 0x73e9f2:c.instructions+=5;goto B73e9f2;
case 0x73e9f6:c.instructions+=4;goto B73e9f6;
case 0x73e9f9:c.instructions+=3;goto B73e9f9;
case 0x73e9fc:c.instructions+=2;goto B73e9fc;
case 0x73e9fe:c.instructions+=1;goto B73e9fe;
case 0x73ea00:goto L73ea00;
case 0x73ea01:c.instructions+=4;goto B73ea01;
case 0x73ea05:c.instructions+=3;goto B73ea05;
case 0x73ea08:c.instructions+=2;goto B73ea08;
case 0x73ea0a:c.instructions+=1;goto B73ea0a;
case 0x73ea0c:goto L73ea0c;
case 0x73ea0f:c.instructions+=5;goto B73ea0f;
case 0x73ea10:c.instructions+=4;goto B73ea10;
case 0x73ea12:c.instructions+=3;goto B73ea12;
case 0x73ea14:c.instructions+=2;goto B73ea14;
case 0x73ea15:c.instructions+=1;goto B73ea15;
case 0x73ea17:goto L73ea17;
case 0x73ea1a:c.instructions+=1;goto B73ea1a;
case 0x73ea21:goto L73ea21;
case 0x73ea28:c.instructions+=2;goto B73ea28;
case 0x73ea29:c.instructions+=1;goto B73ea29;
case 0x73ea30:goto L73ea30;
case 0x73ea34:c.instructions+=3;goto B73ea34;
case 0x73ea37:c.instructions+=2;goto B73ea37;
case 0x73ea3b:c.instructions+=1;goto B73ea3b;
case 0x73ea40:goto L73ea40;
case 0x73ea44:c.instructions+=4;goto B73ea44;
case 0x73ea47:c.instructions+=3;goto B73ea47;
case 0x73ea49:c.instructions+=2;goto B73ea49;
case 0x73ea4d:c.instructions+=1;goto B73ea4d;
case 0x73ea4f:goto L73ea4f;
case 0x73ea51:c.instructions+=1;goto B73ea51;
case 0x73ea53:goto L73ea53;
case 0x73ea58:c.instructions+=1;goto B73ea58;
case 0x73ea59:goto L73ea59;
case 0x73ea5c:c.instructions+=4;goto B73ea5c;
case 0x73ea60:c.instructions+=3;goto B73ea60;
case 0x73ea63:c.instructions+=2;goto B73ea63;
case 0x73ea65:c.instructions+=1;goto B73ea65;
case 0x73ea70:goto L73ea70;
case 0x73ea74:c.instructions+=4;goto B73ea74;
case 0x73ea77:c.instructions+=3;goto B73ea77;
case 0x73ea79:c.instructions+=2;goto B73ea79;
case 0x73ea7d:c.instructions+=1;goto B73ea7d;
case 0x73ea7f:goto L73ea7f;
case 0x73ea81:c.instructions+=1;goto B73ea81;
case 0x73ea83:goto L73ea83;
case 0x73ea88:c.instructions+=1;goto B73ea88;
case 0x73ea89:goto L73ea89;
case 0x73ea8c:c.instructions+=4;goto B73ea8c;
case 0x73ea90:c.instructions+=3;goto B73ea90;
case 0x73ea93:c.instructions+=2;goto B73ea93;
case 0x73ea95:c.instructions+=1;goto B73ea95;
case 0x73eaa0:goto L73eaa0;
case 0x73eaa4:c.instructions+=4;goto B73eaa4;
case 0x73eaa7:c.instructions+=3;goto B73eaa7;
case 0x73eaa9:c.instructions+=2;goto B73eaa9;
case 0x73eaad:c.instructions+=1;goto B73eaad;
case 0x73eaaf:goto L73eaaf;
case 0x73eab1:c.instructions+=1;goto B73eab1;
case 0x73eab3:goto L73eab3;
case 0x73eab8:c.instructions+=1;goto B73eab8;
case 0x73eab9:goto L73eab9;
case 0x73eabc:c.instructions+=4;goto B73eabc;
case 0x73eac0:c.instructions+=3;goto B73eac0;
case 0x73eac3:c.instructions+=2;goto B73eac3;
case 0x73eac5:c.instructions+=1;goto B73eac5;
case 0x73ead0:goto L73ead0;
case 0x73ead4:c.instructions+=2;goto B73ead4;
case 0x73ead6:c.instructions+=1;goto B73ead6;
case 0x73eae0:goto L73eae0;
case 0x73eae4:c.instructions+=5;goto B73eae4;
case 0x73eae6:c.instructions+=4;goto B73eae6;
case 0x73eaec:c.instructions+=3;goto B73eaec;
case 0x73eaef:c.instructions+=2;goto B73eaef;
case 0x73eaf2:c.instructions+=1;goto B73eaf2;
case 0x73eb00:goto L73eb00;
case 0x73eb04:c.instructions+=5;goto B73eb04;
case 0x73eb06:c.instructions+=4;goto B73eb06;
case 0x73eb0c:c.instructions+=3;goto B73eb0c;
case 0x73eb0f:c.instructions+=2;goto B73eb0f;
case 0x73eb12:c.instructions+=1;goto B73eb12;
case 0x73eb20:goto L73eb20;
case 0x73eb24:c.instructions+=5;goto B73eb24;
case 0x73eb26:c.instructions+=4;goto B73eb26;
case 0x73eb2c:c.instructions+=3;goto B73eb2c;
case 0x73eb2f:c.instructions+=2;goto B73eb2f;
case 0x73eb32:c.instructions+=1;goto B73eb32;
case 0x73eb40:goto L73eb40;
case 0x73eb44:c.instructions+=3;goto B73eb44;
case 0x73eb46:c.instructions+=2;goto B73eb46;
case 0x73eb4b:c.instructions+=1;goto B73eb4b;
case 0x73eb50:goto L73eb50;
case 0x73eb54:c.instructions+=3;goto B73eb54;
case 0x73eb56:c.instructions+=2;goto B73eb56;
case 0x73eb58:c.instructions+=1;goto B73eb58;
case 0x73eb5a:goto L73eb5a;
case 0x73eb5e:c.instructions+=2;goto B73eb5e;
case 0x73eb62:c.instructions+=1;goto B73eb62;
case 0x73eb64:goto L73eb64;
case 0x73eb69:goto L73eb69;
case 0x73eb70:goto L73eb70;
case 0x73eb74:c.instructions+=2;goto B73eb74;
case 0x73eb76:c.instructions+=1;goto B73eb76;
case 0x73eb78:goto L73eb78;
case 0x73eb7a:c.instructions+=4;goto B73eb7a;
case 0x73eb80:c.instructions+=3;goto B73eb80;
case 0x73eb83:c.instructions+=2;goto B73eb83;
case 0x73eb86:c.instructions+=1;goto B73eb86;
case 0x73eb87:goto L73eb87;
case 0x73eb89:c.instructions+=1;goto B73eb89;
case 0x73eb90:goto L73eb90;
case 0x73eb94:c.instructions+=4;goto B73eb94;
case 0x73eb96:c.instructions+=3;goto B73eb96;
case 0x73eb9b:c.instructions+=2;goto B73eb9b;
case 0x73eb9e:c.instructions+=1;goto B73eb9e;
case 0x73eba0:goto L73eba0;
case 0x73eba4:c.instructions+=2;goto B73eba4;
case 0x73eba6:c.instructions+=1;goto B73eba6;
case 0x73eba8:goto L73eba8;
case 0x73ebaa:c.instructions+=2;goto B73ebaa;
case 0x73ebb1:c.instructions+=1;goto B73ebb1;
case 0x73ebb2:goto L73ebb2;
case 0x73ebb4:c.instructions+=1;goto B73ebb4;
case 0x73ebc0:goto L73ebc0;
case 0x73ebc4:c.instructions+=6;goto B73ebc4;
case 0x73ebc6:c.instructions+=5;goto B73ebc6;
case 0x73ebcc:c.instructions+=4;goto B73ebcc;
case 0x73ebce:c.instructions+=3;goto B73ebce;
case 0x73ebd1:c.instructions+=2;goto B73ebd1;
case 0x73ebd4:c.instructions+=1;goto B73ebd4;
case 0x73ebe0:goto L73ebe0;
case 0x73ebe4:c.instructions+=6;goto B73ebe4;
case 0x73ebe6:c.instructions+=5;goto B73ebe6;
case 0x73ebec:c.instructions+=4;goto B73ebec;
case 0x73ebee:c.instructions+=3;goto B73ebee;
case 0x73ebf1:c.instructions+=2;goto B73ebf1;
case 0x73ebf4:c.instructions+=1;goto B73ebf4;
case 0x73ec00:goto L73ec00;
case 0x73ec04:c.instructions+=5;goto B73ec04;
case 0x73ec06:c.instructions+=4;goto B73ec06;
case 0x73ec0c:c.instructions+=3;goto B73ec0c;
case 0x73ec0f:c.instructions+=2;goto B73ec0f;
case 0x73ec12:c.instructions+=1;goto B73ec12;
case 0x73ec20:goto L73ec20;
case 0x73ec24:c.instructions+=2;goto B73ec24;
case 0x73ec26:c.instructions+=1;goto B73ec26;
case 0x73ec28:goto L73ec28;
case 0x73ec2b:c.instructions+=2;goto B73ec2b;
case 0x73ec2d:c.instructions+=1;goto B73ec2d;
case 0x73ec2f:goto L73ec2f;
case 0x73ec35:c.instructions+=2;goto B73ec35;
case 0x73ec37:c.instructions+=1;goto B73ec37;
case 0x73ec39:goto L73ec39;
case 0x73ec3a:c.instructions+=8;goto B73ec3a;
case 0x73ec3c:c.instructions+=7;goto B73ec3c;
case 0x73ec40:c.instructions+=6;goto B73ec40;
case 0x73ec42:c.instructions+=5;goto B73ec42;
case 0x73ec45:c.instructions+=4;goto B73ec45;
case 0x73ec46:c.instructions+=3;goto B73ec46;
case 0x73ec48:c.instructions+=2;goto B73ec48;
case 0x73ec49:c.instructions+=1;goto B73ec49;
case 0x73ec4e:goto L73ec4e;
case 0x73ec51:c.instructions+=1;goto B73ec51;
case 0x73ec52:goto L73ec52;
case 0x73ec54:c.instructions+=6;goto B73ec54;
case 0x73ec58:c.instructions+=5;goto B73ec58;
case 0x73ec5a:c.instructions+=4;goto B73ec5a;
case 0x73ec5d:c.instructions+=3;goto B73ec5d;
case 0x73ec5e:c.instructions+=2;goto B73ec5e;
case 0x73ec5f:c.instructions+=1;goto B73ec5f;
case 0x73ec64:goto L73ec64;
case 0x73ec67:c.instructions+=1;goto B73ec67;
case 0x73ec70:goto L73ec70;
case 0x73ec74:c.instructions+=8;goto B73ec74;
case 0x73ec76:c.instructions+=7;goto B73ec76;
case 0x73ec7a:c.instructions+=6;goto B73ec7a;
case 0x73ec7e:c.instructions+=5;goto B73ec7e;
case 0x73ec84:c.instructions+=4;goto B73ec84;
case 0x73ec85:c.instructions+=3;goto B73ec85;
case 0x73ec86:c.instructions+=2;goto B73ec86;
case 0x73ec87:c.instructions+=1;goto B73ec87;
case 0x73ec8c:goto L73ec8c;
case 0x73ec8f:c.instructions+=1;goto B73ec8f;
case 0x73ec90:goto L73ec90;
case 0x73ec94:c.instructions+=5;goto B73ec94;
case 0x73ec96:c.instructions+=4;goto B73ec96;
case 0x73ec9c:c.instructions+=3;goto B73ec9c;
case 0x73ec9f:c.instructions+=2;goto B73ec9f;
case 0x73eca2:c.instructions+=1;goto B73eca2;
case 0x73ecb0:goto L73ecb0;
case 0x73ecb4:c.instructions+=5;goto B73ecb4;
case 0x73ecb6:c.instructions+=4;goto B73ecb6;
case 0x73ecbc:c.instructions+=3;goto B73ecbc;
case 0x73ecbf:c.instructions+=2;goto B73ecbf;
case 0x73ecc2:c.instructions+=1;goto B73ecc2;
case 0x73ecd0:goto L73ecd0;
case 0x73ecd4:c.instructions+=3;goto B73ecd4;
case 0x73ecd6:c.instructions+=2;goto B73ecd6;
case 0x73ecdc:c.instructions+=1;goto B73ecdc;
case 0x73ece0:goto L73ece0;
case 0x73ece4:c.instructions+=3;goto B73ece4;
case 0x73ece6:c.instructions+=2;goto B73ece6;
case 0x73eced:c.instructions+=1;goto B73eced;
case 0x73ecef:goto L73ecef;
case 0x73ecf5:c.instructions+=2;goto B73ecf5;
case 0x73ecf8:c.instructions+=1;goto B73ecf8;
case 0x73ecfa:goto L73ecfa;
case 0x73ecff:c.instructions+=1;goto B73ecff;
case 0x73ed00:goto L73ed00;
case 0x73ed02:c.instructions+=1;goto B73ed02;
case 0x73ed10:goto L73ed10;
case 0x73ed11:c.instructions+=7;goto B73ed11;
case 0x73ed12:c.instructions+=6;goto B73ed12;
case 0x73ed16:c.instructions+=5;goto B73ed16;
case 0x73ed17:c.instructions+=4;goto B73ed17;
case 0x73ed1b:c.instructions+=3;goto B73ed1b;
case 0x73ed1e:c.instructions+=2;goto B73ed1e;
case 0x73ed1f:c.instructions+=1;goto B73ed1f;
case 0x73ed24:goto L73ed24;
case 0x73ed26:c.instructions+=3;goto B73ed26;
case 0x73ed29:c.instructions+=2;goto B73ed29;
case 0x73ed2b:c.instructions+=1;goto B73ed2b;
case 0x73ed2d:goto L73ed2d;
case 0x73ed30:goto L73ed30;
case 0x73ed33:c.instructions+=3;goto B73ed33;
case 0x73ed34:c.instructions+=2;goto B73ed34;
case 0x73ed35:c.instructions+=1;goto B73ed35;
case 0x73ed3a:goto L73ed3a;
case 0x73ed3d:c.instructions+=2;goto B73ed3d;
case 0x73ed3f:c.instructions+=1;goto B73ed3f;
case 0x73ed41:goto L73ed41;
case 0x73ed45:c.instructions+=1;goto B73ed45;
case 0x73ed47:goto L73ed47;
case 0x73ed48:c.instructions+=2;goto B73ed48;
case 0x73ed4a:c.instructions+=1;goto B73ed4a;
case 0x73ed4c:goto L73ed4c;
case 0x73ed4e:goto L73ed4e;
case 0x73ed4f:c.instructions+=3;goto B73ed4f;
case 0x73ed50:c.instructions+=2;goto B73ed50;
case 0x73ed51:c.instructions+=1;goto B73ed51;
case 0x73ed52:goto L73ed52;
case 0x73ed56:c.instructions+=2;goto B73ed56;
case 0x73ed58:c.instructions+=1;goto B73ed58;
case 0x73ed5a:goto L73ed5a;
case 0x73ed5d:c.instructions+=6;goto B73ed5d;
case 0x73ed5e:c.instructions+=5;goto B73ed5e;
case 0x73ed61:c.instructions+=4;goto B73ed61;
case 0x73ed62:c.instructions+=3;goto B73ed62;
case 0x73ed65:c.instructions+=2;goto B73ed65;
case 0x73ed66:c.instructions+=1;goto B73ed66;
case 0x73ed70:goto L73ed70;
case 0x73ed71:c.instructions+=9;goto B73ed71;
case 0x73ed72:c.instructions+=8;goto B73ed72;
case 0x73ed73:c.instructions+=7;goto B73ed73;
case 0x73ed74:c.instructions+=6;goto B73ed74;
case 0x73ed78:c.instructions+=5;goto B73ed78;
case 0x73ed7b:c.instructions+=4;goto B73ed7b;
case 0x73ed7c:c.instructions+=3;goto B73ed7c;
case 0x73ed7e:c.instructions+=2;goto B73ed7e;
case 0x73ed80:c.instructions+=1;goto B73ed80;
case 0x73ed85:goto L73ed85;
case 0x73ed87:c.instructions+=3;goto B73ed87;
case 0x73ed8a:c.instructions+=2;goto B73ed8a;
case 0x73ed8c:c.instructions+=1;goto B73ed8c;
case 0x73ed8e:goto L73ed8e;
case 0x73ed90:goto L73ed90;
case 0x73ed93:c.instructions+=3;goto B73ed93;
case 0x73ed94:c.instructions+=2;goto B73ed94;
case 0x73ed95:c.instructions+=1;goto B73ed95;
case 0x73ed9a:goto L73ed9a;
case 0x73ed9d:c.instructions+=2;goto B73ed9d;
case 0x73ed9f:c.instructions+=1;goto B73ed9f;
case 0x73eda1:goto L73eda1;
case 0x73eda5:c.instructions+=1;goto B73eda5;
case 0x73eda7:goto L73eda7;
case 0x73eda8:goto L73eda8;
case 0x73eda9:c.instructions+=2;goto B73eda9;
case 0x73edab:c.instructions+=1;goto B73edab;
case 0x73edad:goto L73edad;
case 0x73edae:c.instructions+=5;goto B73edae;
case 0x73edaf:c.instructions+=4;goto B73edaf;
case 0x73edb0:c.instructions+=3;goto B73edb0;
case 0x73edb2:c.instructions+=2;goto B73edb2;
case 0x73edb3:c.instructions+=1;goto B73edb3;
case 0x73edc0:goto L73edc0;
case 0x73edc4:c.instructions+=3;goto B73edc4;
case 0x73edc7:c.instructions+=2;goto B73edc7;
case 0x73edcb:c.instructions+=1;goto B73edcb;
case 0x73edd0:goto L73edd0;
case 0x73edd1:c.instructions+=7;goto B73edd1;
case 0x73edd5:c.instructions+=6;goto B73edd5;
case 0x73edd8:c.instructions+=5;goto B73edd8;
case 0x73edd9:c.instructions+=4;goto B73edd9;
case 0x73eddd:c.instructions+=3;goto B73eddd;
case 0x73edde:c.instructions+=2;goto B73edde;
case 0x73eddf:c.instructions+=1;goto B73eddf;
case 0x73ede4:goto L73ede4;
case 0x73ede7:c.instructions+=2;goto B73ede7;
case 0x73ede9:c.instructions+=1;goto B73ede9;
case 0x73edeb:goto L73edeb;
case 0x73edee:c.instructions+=2;goto B73edee;
case 0x73edf0:c.instructions+=1;goto B73edf0;
case 0x73edf2:goto L73edf2;
case 0x73edf5:goto L73edf5;
case 0x73edf7:c.instructions+=3;goto B73edf7;
case 0x73edfa:c.instructions+=2;goto B73edfa;
case 0x73edfd:c.instructions+=1;goto B73edfd;
case 0x73edff:goto L73edff;
case 0x73ee00:c.instructions+=2;goto B73ee00;
case 0x73ee01:c.instructions+=1;goto B73ee01;
case 0x73ee06:goto L73ee06;
case 0x73ee08:c.instructions+=3;goto B73ee08;
case 0x73ee0b:c.instructions+=2;goto B73ee0b;
case 0x73ee0d:c.instructions+=1;goto B73ee0d;
case 0x73ee0f:goto L73ee0f;
case 0x73ee12:c.instructions+=2;goto B73ee12;
case 0x73ee13:c.instructions+=1;goto B73ee13;
case 0x73ee16:goto L73ee16;
case 0x73ee17:c.instructions+=1;goto B73ee17;
case 0x73ee1a:goto L73ee1a;
case 0x73ee1d:goto L73ee1d;
case 0x73ee1e:c.instructions+=2;goto B73ee1e;
case 0x73ee1f:c.instructions+=1;goto B73ee1f;
case 0x73ee20:goto L73ee20;
case 0x73ee21:c.instructions+=3;goto B73ee21;
case 0x73ee25:c.instructions+=2;goto B73ee25;
case 0x73ee27:c.instructions+=1;goto B73ee27;
case 0x73ee29:goto L73ee29;
case 0x73ee2c:c.instructions+=2;goto B73ee2c;
case 0x73ee2e:c.instructions+=1;goto B73ee2e;
case 0x73ee30:goto L73ee30;
case 0x73ee31:c.instructions+=2;goto B73ee31;
case 0x73ee32:c.instructions+=1;goto B73ee32;
case 0x73ee37:goto L73ee37;
case 0x73ee39:c.instructions+=3;goto B73ee39;
case 0x73ee3c:c.instructions+=2;goto B73ee3c;
case 0x73ee3d:c.instructions+=1;goto B73ee3d;
case 0x73ee3f:goto L73ee3f;
case 0x73ee40:c.instructions+=1;goto B73ee40;
case 0x73ee41:goto L73ee41;
case 0x73ee44:c.instructions+=3;goto B73ee44;
case 0x73ee45:c.instructions+=2;goto B73ee45;
case 0x73ee46:c.instructions+=1;goto B73ee46;
case 0x73ee4b:goto L73ee4b;
case 0x73ee4e:c.instructions+=2;goto B73ee4e;
case 0x73ee50:c.instructions+=1;goto B73ee50;
case 0x73ee52:goto L73ee52;
case 0x73ee56:c.instructions+=2;goto B73ee56;
case 0x73ee58:c.instructions+=1;goto B73ee58;
case 0x73ee5a:goto L73ee5a;
case 0x73ee5e:c.instructions+=1;goto B73ee5e;
case 0x73ee60:goto L73ee60;
case 0x73ee62:c.instructions+=3;goto B73ee62;
case 0x73ee65:c.instructions+=2;goto B73ee65;
case 0x73ee68:c.instructions+=1;goto B73ee68;
case 0x73ee6a:goto L73ee6a;
case 0x73ee6b:c.instructions+=2;goto B73ee6b;
case 0x73ee6c:c.instructions+=1;goto B73ee6c;
case 0x73ee71:goto L73ee71;
case 0x73ee73:c.instructions+=3;goto B73ee73;
case 0x73ee76:c.instructions+=2;goto B73ee76;
case 0x73ee78:c.instructions+=1;goto B73ee78;
case 0x73ee7a:goto L73ee7a;
case 0x73ee7d:c.instructions+=2;goto B73ee7d;
case 0x73ee7e:c.instructions+=1;goto B73ee7e;
case 0x73ee81:goto L73ee81;
case 0x73ee82:c.instructions+=1;goto B73ee82;
case 0x73ee85:goto L73ee85;
case 0x73ee88:goto L73ee88;
case 0x73ee8b:c.instructions+=1;goto B73ee8b;
case 0x73ee8e:goto L73ee8e;
case 0x73ee8f:c.instructions+=1;goto B73ee8f;
case 0x73ee91:goto L73ee91;
case 0x73ee92:c.instructions+=1;goto B73ee92;
case 0x73ee93:goto L73ee93;
case 0x73ee94:goto L73ee94;
case 0x73ee95:c.instructions+=1;goto B73ee95;
case 0x73eea0:goto L73eea0;
case 0x73eea1:c.instructions+=6;goto B73eea1;
case 0x73eea5:c.instructions+=5;goto B73eea5;
case 0x73eea8:c.instructions+=4;goto B73eea8;
case 0x73eea9:c.instructions+=3;goto B73eea9;
case 0x73eeaa:c.instructions+=2;goto B73eeaa;
case 0x73eeac:c.instructions+=1;goto B73eeac;
case 0x73eeb1:goto L73eeb1;
case 0x73eeb4:c.instructions+=2;goto B73eeb4;
case 0x73eeb6:c.instructions+=1;goto B73eeb6;
case 0x73eeb8:goto L73eeb8;
case 0x73eebc:c.instructions+=4;goto B73eebc;
case 0x73eebf:c.instructions+=3;goto B73eebf;
case 0x73eec0:c.instructions+=2;goto B73eec0;
case 0x73eec1:c.instructions+=1;goto B73eec1;
case 0x73eec6:goto L73eec6;
case 0x73eec9:c.instructions+=2;goto B73eec9;
case 0x73eecb:c.instructions+=1;goto B73eecb;
case 0x73eecd:goto L73eecd;
case 0x73eed3:c.instructions+=2;goto B73eed3;
case 0x73eed5:c.instructions+=1;goto B73eed5;
case 0x73eed7:goto L73eed7;
case 0x73eed9:goto L73eed9;
case 0x73eeda:c.instructions+=2;goto B73eeda;
case 0x73eedb:c.instructions+=1;goto B73eedb;
case 0x73eee0:goto L73eee0;
case 0x73eee1:c.instructions+=6;goto B73eee1;
case 0x73eee5:c.instructions+=5;goto B73eee5;
case 0x73eee8:c.instructions+=4;goto B73eee8;
case 0x73eee9:c.instructions+=3;goto B73eee9;
case 0x73eeea:c.instructions+=2;goto B73eeea;
case 0x73eeec:c.instructions+=1;goto B73eeec;
case 0x73eef1:goto L73eef1;
case 0x73eef4:c.instructions+=2;goto B73eef4;
case 0x73eef6:c.instructions+=1;goto B73eef6;
case 0x73eef8:goto L73eef8;
case 0x73eefc:c.instructions+=4;goto B73eefc;
case 0x73eeff:c.instructions+=3;goto B73eeff;
case 0x73ef00:c.instructions+=2;goto B73ef00;
case 0x73ef01:c.instructions+=1;goto B73ef01;
case 0x73ef06:goto L73ef06;
case 0x73ef09:c.instructions+=2;goto B73ef09;
case 0x73ef0a:c.instructions+=1;goto B73ef0a;
case 0x73ef0f:goto L73ef0f;
case 0x73ef12:c.instructions+=2;goto B73ef12;
case 0x73ef14:c.instructions+=1;goto B73ef14;
case 0x73ef16:goto L73ef16;
case 0x73ef1c:c.instructions+=2;goto B73ef1c;
case 0x73ef1e:c.instructions+=1;goto B73ef1e;
case 0x73ef20:goto L73ef20;
case 0x73ef22:goto L73ef22;
case 0x73ef23:c.instructions+=2;goto B73ef23;
case 0x73ef24:c.instructions+=1;goto B73ef24;
case 0x73ef30:goto L73ef30;
case 0x73ef31:c.instructions+=6;goto B73ef31;
case 0x73ef35:c.instructions+=5;goto B73ef35;
case 0x73ef38:c.instructions+=4;goto B73ef38;
case 0x73ef39:c.instructions+=3;goto B73ef39;
case 0x73ef3a:c.instructions+=2;goto B73ef3a;
case 0x73ef3c:c.instructions+=1;goto B73ef3c;
case 0x73ef41:goto L73ef41;
case 0x73ef44:c.instructions+=2;goto B73ef44;
case 0x73ef46:c.instructions+=1;goto B73ef46;
case 0x73ef48:goto L73ef48;
case 0x73ef4b:c.instructions+=2;goto B73ef4b;
case 0x73ef4c:c.instructions+=1;goto B73ef4c;
case 0x73ef51:goto L73ef51;
case 0x73ef54:c.instructions+=4;goto B73ef54;
case 0x73ef55:c.instructions+=3;goto B73ef55;
case 0x73ef56:c.instructions+=2;goto B73ef56;
case 0x73ef5a:c.instructions+=1;goto B73ef5a;
case 0x73ef5f:goto L73ef5f;
case 0x73ef61:c.instructions+=3;goto B73ef61;
case 0x73ef62:c.instructions+=2;goto B73ef62;
case 0x73ef63:c.instructions+=1;goto B73ef63;
case 0x73ef70:goto L73ef70;
case 0x73ef71:c.instructions+=3;goto B73ef71;
case 0x73ef75:c.instructions+=2;goto B73ef75;
case 0x73ef79:c.instructions+=1;goto B73ef79;
case 0x73ef7b:goto L73ef7b;
case 0x73ef80:c.instructions+=2;goto B73ef80;
case 0x73ef81:c.instructions+=1;goto B73ef81;
case 0x73ef82:goto L73ef82;
case 0x73ef85:c.instructions+=2;goto B73ef85;
case 0x73ef86:c.instructions+=1;goto B73ef86;
case 0x73ef8b:goto L73ef8b;
case 0x73ef8e:c.instructions+=2;goto B73ef8e;
case 0x73ef90:c.instructions+=1;goto B73ef90;
case 0x73ef92:goto L73ef92;
case 0x73ef96:c.instructions+=4;goto B73ef96;
case 0x73ef99:c.instructions+=3;goto B73ef99;
case 0x73ef9a:c.instructions+=2;goto B73ef9a;
case 0x73ef9b:c.instructions+=1;goto B73ef9b;
case 0x73efa0:goto L73efa0;
case 0x73efa3:c.instructions+=2;goto B73efa3;
case 0x73efa5:c.instructions+=1;goto B73efa5;
case 0x73efa7:goto L73efa7;
case 0x73efad:c.instructions+=2;goto B73efad;
case 0x73efaf:c.instructions+=1;goto B73efaf;
case 0x73efb1:goto L73efb1;
case 0x73efb5:c.instructions+=11;goto B73efb5;
case 0x73efb7:c.instructions+=10;goto B73efb7;
case 0x73efbb:c.instructions+=9;goto B73efbb;
case 0x73efbc:c.instructions+=8;goto B73efbc;
case 0x73efbe:c.instructions+=7;goto B73efbe;
case 0x73efc0:c.instructions+=6;goto B73efc0;
case 0x73efc2:c.instructions+=5;goto B73efc2;
case 0x73efc6:c.instructions+=4;goto B73efc6;
case 0x73efc9:c.instructions+=3;goto B73efc9;
case 0x73efcb:c.instructions+=2;goto B73efcb;
case 0x73efcc:c.instructions+=1;goto B73efcc;
case 0x73efce:goto L73efce;
case 0x73efd1:c.instructions+=3;goto B73efd1;
case 0x73efd3:c.instructions+=2;goto B73efd3;
case 0x73efda:c.instructions+=1;goto B73efda;
case 0x73efdc:goto L73efdc;
case 0x73efdf:c.instructions+=5;goto B73efdf;
case 0x73efe0:c.instructions+=4;goto B73efe0;
case 0x73efe2:c.instructions+=3;goto B73efe2;
case 0x73efe4:c.instructions+=2;goto B73efe4;
case 0x73efe5:c.instructions+=1;goto B73efe5;
case 0x73efe7:goto L73efe7;
case 0x73efea:goto L73efea;
case 0x73efec:c.instructions+=2;goto B73efec;
case 0x73efed:c.instructions+=1;goto B73efed;
case 0x73eff0:goto L73eff0;
case 0x73eff1:c.instructions+=4;goto B73eff1;
case 0x73eff5:c.instructions+=3;goto B73eff5;
case 0x73eff8:c.instructions+=2;goto B73eff8;
case 0x73eff9:c.instructions+=1;goto B73eff9;
case 0x73effe:goto L73effe;
default:missing_instruction(c.pc);}
B73e001:L73e001:{c.instructions+=4;NFSU2_TR(0x73e001);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73e005:{NFSU2_TR(0x73e005);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e006:{NFSU2_TR(0x73e006);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e007:{NFSU2_TR(0x73e007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e00cull));
TAIL_STATIC(0x75c840u,75c);
}
B73e00c:L73e00c:{c.instructions+=8;NFSU2_TR(0x73e00c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73e00f:{NFSU2_TR(0x73e00f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e010:{NFSU2_TR(0x73e010);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73e014:{NFSU2_TR(0x73e014);
u8 U[4];
w4(U+0,u32(0x7a15f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e019:{NFSU2_TR(0x73e019);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73e01c:{NFSU2_TR(0x73e01c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e01d:{NFSU2_TR(0x73e01d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e024:{NFSU2_TR(0x73e024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e029ull));
TAIL_STATIC(0x7414a0u,741);
}
B73e029:L73e029:{c.instructions+=3;NFSU2_TR(0x73e029);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73e02c:{NFSU2_TR(0x73e02c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e02d:{NFSU2_TR(0x73e02d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e032ull));
TAIL_STATIC(0x7420b0u,742);
}
B73e032:L73e032:{c.instructions+=3;NFSU2_TR(0x73e032);
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
B73e035:{NFSU2_TR(0x73e035);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e038:{NFSU2_TR(0x73e038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e03dull));
TAIL_STATIC(0x74b730u,74b);
}
B73e03d:L73e03d:{c.instructions+=5;NFSU2_TR(0x73e03d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e040:{NFSU2_TR(0x73e040);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B73e042:{NFSU2_TR(0x73e042);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e044:{NFSU2_TR(0x73e044);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e047:{NFSU2_TR(0x73e047);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e050;}}
}
B73e049:L73e049:{c.instructions+=1;NFSU2_TR(0x73e049);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e050:L73e050:{c.instructions+=8;NFSU2_TR(0x73e050);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73e054:{NFSU2_TR(0x73e054);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e055:{NFSU2_TR(0x73e055);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e05a:{NFSU2_TR(0x73e05a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2bcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73e061:{NFSU2_TR(0x73e061);
u8 U[4];
w4(U+0,u32(0x280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e066:{NFSU2_TR(0x73e066);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e067:{NFSU2_TR(0x73e067);
u8 U[5];
w4(U+0,u32(u32(u32(0x2c4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73e06e:{NFSU2_TR(0x73e06e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e073ull));
TAIL_STATIC(0x741a50u,741);
}
B73e073:L73e073:{c.instructions+=7;NFSU2_TR(0x73e073);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73e077:{NFSU2_TR(0x73e077);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e078:{NFSU2_TR(0x73e078);
u8 U[4];
w4(U+0,u32(0x7a15e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e07d:{NFSU2_TR(0x73e07d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ccull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73e084:{NFSU2_TR(0x73e084);
u8 U[4];
w4(U+0,u32(0x280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e089:{NFSU2_TR(0x73e089);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e08a:{NFSU2_TR(0x73e08a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e08full));
TAIL_STATIC(0x741e80u,741);
}
B73e08f:L73e08f:{c.instructions+=13;NFSU2_TR(0x73e08f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e092:{NFSU2_TR(0x73e092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e095:{NFSU2_TR(0x73e095);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e099:{NFSU2_TR(0x73e099);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e09a:{NFSU2_TR(0x73e09a);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73e09e:{NFSU2_TR(0x73e09e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e09f:{NFSU2_TR(0x73e09f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2dcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73e0a6:{NFSU2_TR(0x73e0a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e0a7:{NFSU2_TR(0x73e0a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e0ab:{NFSU2_TR(0x73e0ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x6368616cull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e0b3:{NFSU2_TR(0x73e0b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e0b7:{NFSU2_TR(0x73e0b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e0bb:{NFSU2_TR(0x73e0bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e0beull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73e0be:L73e0be:{c.instructions+=7;NFSU2_TR(0x73e0be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B73e0c1:{NFSU2_TR(0x73e0c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e0c2:{NFSU2_TR(0x73e0c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e0c3:{NFSU2_TR(0x73e0c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73e0c4:{NFSU2_TR(0x73e0c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73e0c5:{NFSU2_TR(0x73e0c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x524ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e0cc:{NFSU2_TR(0x73e0cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e0d1ull));
TAIL_STATIC(0x76115eu,761);
}
B73e0d1:L73e0d1:{c.instructions+=2;NFSU2_TR(0x73e0d1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x528ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x528ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x528ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e0d7:{NFSU2_TR(0x73e0d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e0d8:L73e0d8:{c.instructions+=2;NFSU2_TR(0x73e0d8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e0db:{NFSU2_TR(0x73e0db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e1ec;}}
}
B73e0e1:L73e0e1:{c.instructions+=2;NFSU2_TR(0x73e0e1);
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
B73e0e4:{NFSU2_TR(0x73e0e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e144;}}
}
B73e0e6:L73e0e6:{c.instructions+=13;NFSU2_TR(0x73e0e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e0e9:{NFSU2_TR(0x73e0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e0ec:{NFSU2_TR(0x73e0ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e0f0:{NFSU2_TR(0x73e0f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e0f1:{NFSU2_TR(0x73e0f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73e0f5:{NFSU2_TR(0x73e0f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e0f6:{NFSU2_TR(0x73e0f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73e0fa:{NFSU2_TR(0x73e0fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e0fb:{NFSU2_TR(0x73e0fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e0ff:{NFSU2_TR(0x73e0ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x61637074ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e107:{NFSU2_TR(0x73e107);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e10b:{NFSU2_TR(0x73e10b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e10f:{NFSU2_TR(0x73e10f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e112ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73e112:L73e112:{c.instructions+=4;NFSU2_TR(0x73e112);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e115:{NFSU2_TR(0x73e115);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73e118:{NFSU2_TR(0x73e118);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x67616d65ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e11d:{NFSU2_TR(0x73e11d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e244;}}
}
B73e123:L73e123:{c.instructions+=2;NFSU2_TR(0x73e123);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e125:{NFSU2_TR(0x73e125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e12aull));
TAIL_STATIC(0x73dda0u,73d);
}
B73e12a:L73e12a:{c.instructions+=7;NFSU2_TR(0x73e12a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73e12d:{NFSU2_TR(0x73e12d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e12e:{NFSU2_TR(0x73e12e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e12f:{NFSU2_TR(0x73e12f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73e130:{NFSU2_TR(0x73e130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73e131:{NFSU2_TR(0x73e131);
u8 U[8];
w4(U+0,u32(u32(u32(0x524ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e138:{NFSU2_TR(0x73e138);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e13dull));
TAIL_STATIC(0x76115eu,761);
}
B73e13d:L73e13d:{c.instructions+=2;NFSU2_TR(0x73e13d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x528ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x528ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x528ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e143:{NFSU2_TR(0x73e143);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e144:L73e144:{c.instructions+=2;NFSU2_TR(0x73e144);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B73e147:{NFSU2_TR(0x73e147);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e17d;}}
}
B73e149:L73e149:{c.instructions+=13;NFSU2_TR(0x73e149);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e14c:{NFSU2_TR(0x73e14c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e14f:{NFSU2_TR(0x73e14f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e153:{NFSU2_TR(0x73e153);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e154:{NFSU2_TR(0x73e154);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73e158:{NFSU2_TR(0x73e158);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e159:{NFSU2_TR(0x73e159);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73e15d:{NFSU2_TR(0x73e15d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e15e:{NFSU2_TR(0x73e15e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e162:{NFSU2_TR(0x73e162);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x626c636bull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e16a:{NFSU2_TR(0x73e16a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e16e:{NFSU2_TR(0x73e16e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e172:{NFSU2_TR(0x73e172);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e175ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73e175:L73e175:{c.instructions+=2;NFSU2_TR(0x73e175);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73e178:{NFSU2_TR(0x73e178);
{goto L73e244;}
}
B73e17d:L73e17d:{c.instructions+=2;NFSU2_TR(0x73e17d);
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
B73e180:{NFSU2_TR(0x73e180);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e1b6;}}
}
B73e182:L73e182:{c.instructions+=13;NFSU2_TR(0x73e182);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e185:{NFSU2_TR(0x73e185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e188:{NFSU2_TR(0x73e188);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e18c:{NFSU2_TR(0x73e18c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e18d:{NFSU2_TR(0x73e18d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73e191:{NFSU2_TR(0x73e191);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e192:{NFSU2_TR(0x73e192);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73e196:{NFSU2_TR(0x73e196);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e197:{NFSU2_TR(0x73e197);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e19b:{NFSU2_TR(0x73e19b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x62757379ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e1a3:{NFSU2_TR(0x73e1a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e1a7:{NFSU2_TR(0x73e1a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e1ab:{NFSU2_TR(0x73e1ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e1aeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73e1ae:L73e1ae:{c.instructions+=2;NFSU2_TR(0x73e1ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73e1b1:{NFSU2_TR(0x73e1b1);
{goto L73e244;}
}
B73e1b6:L73e1b6:{c.instructions+=2;NFSU2_TR(0x73e1b6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B73e1b9:{NFSU2_TR(0x73e1b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e1ec;}}
}
B73e1bb:L73e1bb:{c.instructions+=13;NFSU2_TR(0x73e1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e1be:{NFSU2_TR(0x73e1be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e1c1:{NFSU2_TR(0x73e1c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e1c5:{NFSU2_TR(0x73e1c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e1c6:{NFSU2_TR(0x73e1c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73e1ca:{NFSU2_TR(0x73e1ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e1cb:{NFSU2_TR(0x73e1cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73e1cf:{NFSU2_TR(0x73e1cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e1d0:{NFSU2_TR(0x73e1d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e1d4:{NFSU2_TR(0x73e1d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x6465636cull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e1dc:{NFSU2_TR(0x73e1dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e1e0:{NFSU2_TR(0x73e1e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e1e4:{NFSU2_TR(0x73e1e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e1e7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73e1e7:L73e1e7:{c.instructions+=2;NFSU2_TR(0x73e1e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73e1ea:{NFSU2_TR(0x73e1ea);
{goto L73e244;}
}
B73e1ec:L73e1ec:{c.instructions+=2;NFSU2_TR(0x73e1ec);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e1ee:{NFSU2_TR(0x73e1ee);
if(r1(R+518)){{goto L73e249;}}
}
B73e1f0:L73e1f0:{c.instructions+=2;NFSU2_TR(0x73e1f0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e1f3:{NFSU2_TR(0x73e1f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e249;}}
}
B73e1f5:L73e1f5:{c.instructions+=13;NFSU2_TR(0x73e1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e1f8:{NFSU2_TR(0x73e1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e1fb:{NFSU2_TR(0x73e1fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e1ff:{NFSU2_TR(0x73e1ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e200:{NFSU2_TR(0x73e200);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73e204:{NFSU2_TR(0x73e204);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e205:{NFSU2_TR(0x73e205);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73e209:{NFSU2_TR(0x73e209);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e20a:{NFSU2_TR(0x73e20a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e20e:{NFSU2_TR(0x73e20e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x636e636cull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e216:{NFSU2_TR(0x73e216);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e21a:{NFSU2_TR(0x73e21a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e21e:{NFSU2_TR(0x73e21e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e221ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73e221:L73e221:{c.instructions+=4;NFSU2_TR(0x73e221);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e224:{NFSU2_TR(0x73e224);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73e227:{NFSU2_TR(0x73e227);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e22a:{NFSU2_TR(0x73e22a);
if(r1(R+518)){{goto L73e23f;}}
}
B73e22c:L73e22c:{c.instructions+=4;NFSU2_TR(0x73e22c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e22d:{NFSU2_TR(0x73e22d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73e22f:{NFSU2_TR(0x73e22f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e230:{NFSU2_TR(0x73e230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e235ull));
TAIL_STATIC(0x7451f0u,745);
}
B73e235:L73e235:{c.instructions+=2;NFSU2_TR(0x73e235);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73e238:{NFSU2_TR(0x73e238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e23f:L73e23f:{c.instructions+=1;NFSU2_TR(0x73e23f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e244ull));
TAIL_STATIC(0x73de50u,73d);
}
B73e244:L73e244:{c.instructions+=2;NFSU2_TR(0x73e244);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e247:{NFSU2_TR(0x73e247);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+28)),r1(U+0));
}
B73e249:L73e249:{c.instructions+=6;NFSU2_TR(0x73e249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e24a:{NFSU2_TR(0x73e24a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e24b:{NFSU2_TR(0x73e24b);
u8 U[8];
w4(U+0,u32(u32(u32(0x52cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e252:{NFSU2_TR(0x73e252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73e253:{NFSU2_TR(0x73e253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73e254:{NFSU2_TR(0x73e254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e259ull));
TAIL_STATIC(0x76115eu,761);
}
B73e259:L73e259:{c.instructions+=2;NFSU2_TR(0x73e259);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x528ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x528ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x528ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e25f:{NFSU2_TR(0x73e25f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e260:L73e260:{c.instructions+=6;NFSU2_TR(0x73e260);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e264:{NFSU2_TR(0x73e264);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e267:{NFSU2_TR(0x73e267);
w4(R+8,u32(0x706c6179ull));
}
B73e26c:{NFSU2_TR(0x73e26c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B73e26f:{NFSU2_TR(0x73e26f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e271:{NFSU2_TR(0x73e271);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e2b4;}}
}
B73e273:L73e273:{c.instructions+=4;NFSU2_TR(0x73e273);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e274:{NFSU2_TR(0x73e274);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73e278:{NFSU2_TR(0x73e278);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73e27c:{NFSU2_TR(0x73e27c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e2b3;}}
}
B73e27e:L73e27e:{c.instructions+=15;NFSU2_TR(0x73e27e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e281:{NFSU2_TR(0x73e281);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e283:{NFSU2_TR(0x73e283);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e284:{NFSU2_TR(0x73e284);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73e287:{NFSU2_TR(0x73e287);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e28b:{NFSU2_TR(0x73e28b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e28f:{NFSU2_TR(0x73e28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e292:{NFSU2_TR(0x73e292);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e296:{NFSU2_TR(0x73e296);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e297:{NFSU2_TR(0x73e297);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73e29b:{NFSU2_TR(0x73e29b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e29c:{NFSU2_TR(0x73e29c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e29d:{NFSU2_TR(0x73e29d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e2a1:{NFSU2_TR(0x73e2a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e2a5:{NFSU2_TR(0x73e2a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e2a8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73e2a8:L73e2a8:{c.instructions+=3;NFSU2_TR(0x73e2a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73e2ab:{NFSU2_TR(0x73e2ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e2b2:{NFSU2_TR(0x73e2b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e2b3:L73e2b3:{c.instructions+=1;NFSU2_TR(0x73e2b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e2b4:L73e2b4:{c.instructions+=2;NFSU2_TR(0x73e2b4);
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
B73e2b7:{NFSU2_TR(0x73e2b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e2c0:L73e2c0:{c.instructions+=7;NFSU2_TR(0x73e2c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e2c1:{NFSU2_TR(0x73e2c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73e2c5:{NFSU2_TR(0x73e2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e2c8:{NFSU2_TR(0x73e2c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73e2ca:{NFSU2_TR(0x73e2ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e2cb:{NFSU2_TR(0x73e2cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e2cc:{NFSU2_TR(0x73e2cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e2d1ull));
TAIL_STATIC(0x744470u,744);
}
B73e2d1:L73e2d1:{c.instructions+=5;NFSU2_TR(0x73e2d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e2d4:{NFSU2_TR(0x73e2d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73e2d6:{NFSU2_TR(0x73e2d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e2d7:{NFSU2_TR(0x73e2d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e2d8:{NFSU2_TR(0x73e2d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e2ddull));
TAIL_STATIC(0x744470u,744);
}
B73e2dd:L73e2dd:{c.instructions+=5;NFSU2_TR(0x73e2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e2e0:{NFSU2_TR(0x73e2e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73e2e2:{NFSU2_TR(0x73e2e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e2e3:{NFSU2_TR(0x73e2e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e2e4:{NFSU2_TR(0x73e2e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e2e9ull));
TAIL_STATIC(0x744470u,744);
}
B73e2e9:L73e2e9:{c.instructions+=2;NFSU2_TR(0x73e2e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e2ea:{NFSU2_TR(0x73e2ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e2efull));
TAIL_STATIC(0x598ec0u,598);
}
B73e2ef:L73e2ef:{c.instructions+=3;NFSU2_TR(0x73e2ef);
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
B73e2f2:{NFSU2_TR(0x73e2f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e2f3:{NFSU2_TR(0x73e2f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e300:L73e300:{c.instructions+=5;NFSU2_TR(0x73e300);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e301:{NFSU2_TR(0x73e301);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73e305:{NFSU2_TR(0x73e305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e308:{NFSU2_TR(0x73e308);
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
B73e30a:{NFSU2_TR(0x73e30a);
if(r1(R+518)){{goto L73e341;}}
}
B73e30c:L73e30c:{c.instructions+=2;NFSU2_TR(0x73e30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e313:{NFSU2_TR(0x73e313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e318ull));
TAIL_STATIC(0x73de50u,73d);
}
B73e318:L73e318:{c.instructions+=3;NFSU2_TR(0x73e318);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e31c:{NFSU2_TR(0x73e31c);
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
B73e31e:{NFSU2_TR(0x73e31e);
if(r1(R+518)){{goto L73e336;}}
}
B73e320:L73e320:{c.instructions+=7;NFSU2_TR(0x73e320);
__builtin_memmove((R+0),gp(0x819b58),4);
}
B73e325:{NFSU2_TR(0x73e325);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e326:{NFSU2_TR(0x73e326);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e327:{NFSU2_TR(0x73e327);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B73e32a:{NFSU2_TR(0x73e32a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e32b:{NFSU2_TR(0x73e32b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73e32d:{NFSU2_TR(0x73e32d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e332ull));
TAIL_STATIC(0x73dbb0u,73d);
}
B73e332:L73e332:{c.instructions+=2;NFSU2_TR(0x73e332);
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
B73e335:{NFSU2_TR(0x73e335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e336:L73e336:{c.instructions+=2;NFSU2_TR(0x73e336);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e33d:{NFSU2_TR(0x73e33d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73e341:L73e341:{c.instructions+=2;NFSU2_TR(0x73e341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e342:{NFSU2_TR(0x73e342);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e350:L73e350:{c.instructions+=4;NFSU2_TR(0x73e350);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e351:{NFSU2_TR(0x73e351);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73e355:{NFSU2_TR(0x73e355);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B73e359:{NFSU2_TR(0x73e359);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e379;}}
}
B73e35b:L73e35b:{c.instructions+=8;NFSU2_TR(0x73e35b);
__builtin_memmove((R+0),gp(0x819b50),4);
}
B73e360:{NFSU2_TR(0x73e360);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e361:{NFSU2_TR(0x73e361);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e362:{NFSU2_TR(0x73e362);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e363:{NFSU2_TR(0x73e363);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+12),(U+0),4);
}
B73e366:{NFSU2_TR(0x73e366);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e367:{NFSU2_TR(0x73e367);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73e369:{NFSU2_TR(0x73e369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e36eull));
TAIL_STATIC(0x73dbb0u,73d);
}
B73e36e:L73e36e:{c.instructions+=5;NFSU2_TR(0x73e36e);
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
B73e371:{NFSU2_TR(0x73e371);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e374:{NFSU2_TR(0x73e374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e375:{NFSU2_TR(0x73e375);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+12)),r1(U+0));
}
B73e378:{NFSU2_TR(0x73e378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73e379:L73e379:{c.instructions+=2;NFSU2_TR(0x73e379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e37a:{NFSU2_TR(0x73e37a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e380:L73e380:{c.instructions+=4;NFSU2_TR(0x73e380);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e381:{NFSU2_TR(0x73e381);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73e385:{NFSU2_TR(0x73e385);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B73e389:{NFSU2_TR(0x73e389);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e3bf;}}
}
B73e38b:L73e38b:{c.instructions+=7;NFSU2_TR(0x73e38b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e38f:{NFSU2_TR(0x73e38f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e390:{NFSU2_TR(0x73e390);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e391:{NFSU2_TR(0x73e391);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73e393:{NFSU2_TR(0x73e393);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e396:{NFSU2_TR(0x73e396);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+12),(U+0),4);
}
B73e399:{NFSU2_TR(0x73e399);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e3a3;}}
}
B73e39b:L73e39b:{c.instructions+=3;NFSU2_TR(0x73e39b);
__builtin_memmove((R+0),gp(0x819b5c),4);
}
B73e3a0:{NFSU2_TR(0x73e3a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e3a1:{NFSU2_TR(0x73e3a1);
{goto L73e3aa;}
}
B73e3a3:L73e3a3:{c.instructions+=2;NFSU2_TR(0x73e3a3);
__builtin_memmove((R+4),gp(0x819b4c),4);
}
B73e3a9:{NFSU2_TR(0x73e3a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e3aa:L73e3aa:{c.instructions+=2;NFSU2_TR(0x73e3aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e3ab:{NFSU2_TR(0x73e3ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e3b0ull));
TAIL_STATIC(0x73dbb0u,73d);
}
B73e3b0:L73e3b0:{c.instructions+=5;NFSU2_TR(0x73e3b0);
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
B73e3b3:{NFSU2_TR(0x73e3b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e3b4:{NFSU2_TR(0x73e3b4);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+12)),r1(U+0));
}
B73e3b7:{NFSU2_TR(0x73e3b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e3be:{NFSU2_TR(0x73e3be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73e3bf:L73e3bf:{c.instructions+=2;NFSU2_TR(0x73e3bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e3c0:{NFSU2_TR(0x73e3c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e3d0:L73e3d0:{c.instructions+=8;NFSU2_TR(0x73e3d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B73e3d3:{NFSU2_TR(0x73e3d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e3d4:{NFSU2_TR(0x73e3d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e3d5:{NFSU2_TR(0x73e3d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73e3d9:{NFSU2_TR(0x73e3d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e3dc:{NFSU2_TR(0x73e3dc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B73e3de:{NFSU2_TR(0x73e3de);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e3e0:{NFSU2_TR(0x73e3e0);
if(r1(R+518)){{goto L73e3e7;}}
}
B73e3e2:L73e3e2:{c.instructions+=2;NFSU2_TR(0x73e3e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e3e5:{NFSU2_TR(0x73e3e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e3ea;}}
}
B73e3e7:L73e3e7:{c.instructions+=1;NFSU2_TR(0x73e3e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e3ea:L73e3ea:{c.instructions+=2;NFSU2_TR(0x73e3ea);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B73e3ed:{NFSU2_TR(0x73e3ed);
if(r1(R+518)){{goto L73e454;}}
}
B73e3ef:L73e3ef:{c.instructions+=1;NFSU2_TR(0x73e3ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e3f4ull));
TAIL_STATIC(0x74b730u,74b);
}
B73e3f4:L73e3f4:{c.instructions+=3;NFSU2_TR(0x73e3f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e3f7:{NFSU2_TR(0x73e3f7);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e3f9:{NFSU2_TR(0x73e3f9);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L73e454;}}
}
B73e3fb:L73e3fb:{c.instructions+=12;NFSU2_TR(0x73e3fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e3fe:{NFSU2_TR(0x73e3fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e401:{NFSU2_TR(0x73e401);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e402:{NFSU2_TR(0x73e402);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73e406:{NFSU2_TR(0x73e406);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e407:{NFSU2_TR(0x73e407);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e408:{NFSU2_TR(0x73e408);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e40c:{NFSU2_TR(0x73e40c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e410:{NFSU2_TR(0x73e410);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x74696d65ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e418:{NFSU2_TR(0x73e418);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e41c:{NFSU2_TR(0x73e41c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e420:{NFSU2_TR(0x73e420);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e423ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73e423:L73e423:{c.instructions+=4;NFSU2_TR(0x73e423);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e426:{NFSU2_TR(0x73e426);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73e429:{NFSU2_TR(0x73e429);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e42b:{NFSU2_TR(0x73e42b);
if(r1(R+518)){{goto L73e454;}}
}
B73e42d:L73e42d:{c.instructions+=4;NFSU2_TR(0x73e42d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e42e:{NFSU2_TR(0x73e42e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e42f:{NFSU2_TR(0x73e42f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e432:{NFSU2_TR(0x73e432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e437ull));
TAIL_STATIC(0x73de50u,73d);
}
B73e437:L73e437:{c.instructions+=6;NFSU2_TR(0x73e437);
__builtin_memmove((R+8),gp(0x819b58),4);
}
B73e43d:{NFSU2_TR(0x73e43d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e43e:{NFSU2_TR(0x73e43e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+20),(U+0),4);
}
B73e441:{NFSU2_TR(0x73e441);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e442:{NFSU2_TR(0x73e442);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73e444:{NFSU2_TR(0x73e444);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e449ull));
TAIL_STATIC(0x73dbb0u,73d);
}
B73e449:L73e449:{c.instructions+=5;NFSU2_TR(0x73e449);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73e44c:{NFSU2_TR(0x73e44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e44d:{NFSU2_TR(0x73e44d);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+20)),r1(U+0));
}
B73e450:{NFSU2_TR(0x73e450);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e453:{NFSU2_TR(0x73e453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73e454:L73e454:{c.instructions+=4;NFSU2_TR(0x73e454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e455:{NFSU2_TR(0x73e455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73e456:{NFSU2_TR(0x73e456);
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
B73e459:{NFSU2_TR(0x73e459);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e460:L73e460:{c.instructions+=3;NFSU2_TR(0x73e460);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e461:{NFSU2_TR(0x73e461);
u8 U[4];
w4(U+0,u32(0xccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e466:{NFSU2_TR(0x73e466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e46bull));
TAIL_STATIC(0x5832f0u,583);
}
B73e46b:L73e46b:{c.instructions+=5;NFSU2_TR(0x73e46b);
__builtin_memmove((R+24),(R+0),4);
}
B73e46d:{NFSU2_TR(0x73e46d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73e470:{NFSU2_TR(0x73e470);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73e472:{NFSU2_TR(0x73e472);
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
B73e474:{NFSU2_TR(0x73e474);
if(r1(R+518)){{goto L73e4fc;}}
}
B73e47a:L73e47a:{c.instructions+=5;NFSU2_TR(0x73e47a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e47e:{NFSU2_TR(0x73e47e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e47f:{NFSU2_TR(0x73e47f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e480:{NFSU2_TR(0x73e480);
w4(R+4,u32(0x33ull));
}
B73e485:{NFSU2_TR(0x73e485);
__builtin_memmove((R+28),(R+24),4);
}
B73e487:L73e487:{c.instructions+=1;NFSU2_TR(0x73e487);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L73e489;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e487u);}goto L73e487;}
}
B73e489:L73e489:{c.instructions+=14;NFSU2_TR(0x73e489);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e48d:{NFSU2_TR(0x73e48d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e491:{NFSU2_TR(0x73e491);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73e495:{NFSU2_TR(0x73e495);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e498:{NFSU2_TR(0x73e498);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e49c:{NFSU2_TR(0x73e49c);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e49e:{NFSU2_TR(0x73e49e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e49f:{NFSU2_TR(0x73e49f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+20),(U+0),4);
}
B73e4a2:{NFSU2_TR(0x73e4a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4a3:{NFSU2_TR(0x73e4a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B73e4a5:{NFSU2_TR(0x73e4a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e4a8:{NFSU2_TR(0x73e4a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e4ab:{NFSU2_TR(0x73e4ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e4b2:{NFSU2_TR(0x73e4b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e4b7ull));
TAIL_STATIC(0x75c840u,75c);
}
B73e4b7:L73e4b7:{c.instructions+=6;NFSU2_TR(0x73e4b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4b8:{NFSU2_TR(0x73e4b8);
u8 U[4];
w4(U+0,u32(0x73dec0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4bd:{NFSU2_TR(0x73e4bd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4bf:{NFSU2_TR(0x73e4bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4c0:{NFSU2_TR(0x73e4c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73e4c4:{NFSU2_TR(0x73e4c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e4c9ull));
TAIL_STATIC(0x744410u,744);
}
B73e4c9:L73e4c9:{c.instructions+=6;NFSU2_TR(0x73e4c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4ca:{NFSU2_TR(0x73e4ca);
u8 U[4];
w4(U+0,u32(0x73e260ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4cf:{NFSU2_TR(0x73e4cf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4d1:{NFSU2_TR(0x73e4d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4d2:{NFSU2_TR(0x73e4d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e4d5:{NFSU2_TR(0x73e4d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e4daull));
TAIL_STATIC(0x744410u,744);
}
B73e4da:L73e4da:{c.instructions+=6;NFSU2_TR(0x73e4da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4db:{NFSU2_TR(0x73e4db);
u8 U[4];
w4(U+0,u32(0x73e3d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4e0:{NFSU2_TR(0x73e4e0);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4e2:{NFSU2_TR(0x73e4e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e4e3:{NFSU2_TR(0x73e4e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e4e6:{NFSU2_TR(0x73e4e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e4ebull));
TAIL_STATIC(0x744410u,744);
}
B73e4eb:L73e4eb:{c.instructions+=6;NFSU2_TR(0x73e4eb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e4ee:{NFSU2_TR(0x73e4ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e4ef:{NFSU2_TR(0x73e4ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e4f2:{NFSU2_TR(0x73e4f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e4f9:{NFSU2_TR(0x73e4f9);
__builtin_memmove((R+0),(R+24),4);
}
B73e4fb:{NFSU2_TR(0x73e4fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73e4fc:L73e4fc:{c.instructions+=2;NFSU2_TR(0x73e4fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e4fd:{NFSU2_TR(0x73e4fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e500:L73e500:{c.instructions+=3;NFSU2_TR(0x73e500);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e504:{NFSU2_TR(0x73e504);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x73656e64ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x73656e64ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x73656e64ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e509:{NFSU2_TR(0x73e509);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e511;}}
}
B73e50b:L73e50b:{c.instructions+=2;NFSU2_TR(0x73e50b);
w4(R+0,u32(0x7ull));
}
B73e510:{NFSU2_TR(0x73e510);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e511:L73e511:{c.instructions+=2;NFSU2_TR(0x73e511);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x62726463ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x62726463ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x62726463ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e516:{NFSU2_TR(0x73e516);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e50bu);}goto L73e50b;}}
}
B73e518:L73e518:{c.instructions+=2;NFSU2_TR(0x73e518);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x61646475ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x61646475ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x61646475ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e51d:{NFSU2_TR(0x73e51d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e525;}}
}
B73e51f:L73e51f:{c.instructions+=2;NFSU2_TR(0x73e51f);
w4(R+0,u32(0x2ull));
}
B73e524:{NFSU2_TR(0x73e524);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e525:L73e525:{c.instructions+=2;NFSU2_TR(0x73e525);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x64656c75ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x64656c75ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x64656c75ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e52a:{NFSU2_TR(0x73e52a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e532;}}
}
B73e52c:L73e52c:{c.instructions+=2;NFSU2_TR(0x73e52c);
w4(R+0,u32(0x3ull));
}
B73e531:{NFSU2_TR(0x73e531);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e532:L73e532:{c.instructions+=2;NFSU2_TR(0x73e532);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B73e535:{NFSU2_TR(0x73e535);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e538;}}
}
B73e537:L73e537:{c.instructions+=1;NFSU2_TR(0x73e537);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e538:L73e538:{c.instructions+=2;NFSU2_TR(0x73e538);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x75736572ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x75736572ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x75736572ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e53d:{NFSU2_TR(0x73e53d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e545;}}
}
B73e53f:L73e53f:{c.instructions+=2;NFSU2_TR(0x73e53f);
w4(R+0,u32(0x6ull));
}
B73e544:{NFSU2_TR(0x73e544);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e545:L73e545:{c.instructions+=2;NFSU2_TR(0x73e545);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x65707374ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x65707374ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x65707374ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e54a:{NFSU2_TR(0x73e54a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e552;}}
}
B73e54c:L73e54c:{c.instructions+=2;NFSU2_TR(0x73e54c);
w4(R+0,u32(0x8ull));
}
B73e551:{NFSU2_TR(0x73e551);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e552:L73e552:{c.instructions+=2;NFSU2_TR(0x73e552);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x696e7674ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x696e7674ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x696e7674ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e557:{NFSU2_TR(0x73e557);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e55f;}}
}
B73e559:L73e559:{c.instructions+=2;NFSU2_TR(0x73e559);
w4(R+0,u32(0x9ull));
}
B73e55e:{NFSU2_TR(0x73e55e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e55f:L73e55f:{c.instructions+=6;NFSU2_TR(0x73e55f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73e561:{NFSU2_TR(0x73e561);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x67696e76ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e566:{NFSU2_TR(0x73e566);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B73e569:{NFSU2_TR(0x73e569);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x9ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x9ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e56c:{NFSU2_TR(0x73e56c);
__builtin_memmove((R+0),(R+4),4);
}
B73e56e:{NFSU2_TR(0x73e56e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e570:L73e570:{c.instructions+=5;NFSU2_TR(0x73e570);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e574:{NFSU2_TR(0x73e574);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e577:{NFSU2_TR(0x73e577);
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
B73e579:{NFSU2_TR(0x73e579);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e580:{NFSU2_TR(0x73e580);
if(r1(R+518)){{goto L73e590;}}
}
B73e582:L73e582:{c.instructions+=6;NFSU2_TR(0x73e582);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e585:{NFSU2_TR(0x73e585);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e586:{NFSU2_TR(0x73e586);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e588:{NFSU2_TR(0x73e588);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e58a:{NFSU2_TR(0x73e58a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e58b:{NFSU2_TR(0x73e58b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e58dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73e58d:L73e58d:{c.instructions+=1;NFSU2_TR(0x73e58d);
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
B73e590:L73e590:{c.instructions+=1;NFSU2_TR(0x73e590);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e5a0:L73e5a0:{c.instructions+=5;NFSU2_TR(0x73e5a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e5a1:{NFSU2_TR(0x73e5a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e5a3:{NFSU2_TR(0x73e5a3);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e5a5:{NFSU2_TR(0x73e5a5);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e5a7:{NFSU2_TR(0x73e5a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e5acull));
TAIL_STATIC(0x73d6d0u,73d);
}
B73e5ac:L73e5ac:{c.instructions+=4;NFSU2_TR(0x73e5ac);
__builtin_memmove((R+24),(R+0),4);
}
B73e5ae:{NFSU2_TR(0x73e5ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e5b0:{NFSU2_TR(0x73e5b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e5b1:{NFSU2_TR(0x73e5b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e5b6ull));
TAIL_STATIC(0x73d990u,73d);
}
B73e5b6:L73e5b6:{c.instructions+=4;NFSU2_TR(0x73e5b6);
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
B73e5b9:{NFSU2_TR(0x73e5b9);
__builtin_memmove((R+0),(R+24),4);
}
B73e5bb:{NFSU2_TR(0x73e5bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e5bc:{NFSU2_TR(0x73e5bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e5c0:L73e5c0:{c.instructions+=4;NFSU2_TR(0x73e5c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e5c1:{NFSU2_TR(0x73e5c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73e5c5:{NFSU2_TR(0x73e5c5);
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
B73e5c7:{NFSU2_TR(0x73e5c7);
if(r1(R+518)){{goto L73e61a;}}
}
B73e5c9:L73e5c9:{c.instructions+=3;NFSU2_TR(0x73e5c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e5cf:{NFSU2_TR(0x73e5cf);
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
B73e5d1:{NFSU2_TR(0x73e5d1);
if(r1(R+518)){{goto L73e61a;}}
}
B73e5d3:L73e5d3:{c.instructions+=3;NFSU2_TR(0x73e5d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e5d4:{NFSU2_TR(0x73e5d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e5d5:{NFSU2_TR(0x73e5d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e5daull));
TAIL_STATIC(0x73d8c0u,73d);
}
B73e5da:L73e5da:{c.instructions+=4;NFSU2_TR(0x73e5da);
__builtin_memmove((R+28),(R+0),4);
}
B73e5dc:{NFSU2_TR(0x73e5dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73e5df:{NFSU2_TR(0x73e5df);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B73e5e0:{NFSU2_TR(0x73e5e0);
if(r1(R+519)){{goto L73e600;}}
}
B73e5e2:L73e5e2:{c.instructions+=4;NFSU2_TR(0x73e5e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e5e8:{NFSU2_TR(0x73e5e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e5e9:{NFSU2_TR(0x73e5e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e5ea:{NFSU2_TR(0x73e5ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e5efull));
TAIL_STATIC(0x73d820u,73d);
}
B73e5ef:L73e5ef:{c.instructions+=3;NFSU2_TR(0x73e5ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73e5f2:{NFSU2_TR(0x73e5f2);
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
B73e5f4:{NFSU2_TR(0x73e5f4);
if(r1(R+518)){{goto L73e5fd;}}
}
B73e5f6:L73e5f6:{c.instructions+=2;NFSU2_TR(0x73e5f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e5f7:{NFSU2_TR(0x73e5f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e5faull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73e5fa:L73e5fa:{c.instructions+=1;NFSU2_TR(0x73e5fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73e5fd:L73e5fd:{c.instructions+=2;NFSU2_TR(0x73e5fd);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B73e5fe:{NFSU2_TR(0x73e5fe);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e5e2u);}goto L73e5e2;}}
}
B73e600:L73e600:{c.instructions+=3;NFSU2_TR(0x73e600);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e606:{NFSU2_TR(0x73e606);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e607:{NFSU2_TR(0x73e607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e60cull));
TAIL_STATIC(0x73d710u,73d);
}
B73e60c:L73e60c:{c.instructions+=3;NFSU2_TR(0x73e60c);
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
B73e60f:{NFSU2_TR(0x73e60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e619:{NFSU2_TR(0x73e619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e61a:L73e61a:{c.instructions+=2;NFSU2_TR(0x73e61a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e61b:{NFSU2_TR(0x73e61b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e620:L73e620:{c.instructions+=4;NFSU2_TR(0x73e620);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e621:{NFSU2_TR(0x73e621);
__builtin_memmove((R+28),(R+0),4);
}
B73e623:{NFSU2_TR(0x73e623);
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
B73e625:{NFSU2_TR(0x73e625);
if(r1(R+518)){{goto L73e673;}}
}
B73e627:L73e627:{c.instructions+=3;NFSU2_TR(0x73e627);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e62d:{NFSU2_TR(0x73e62d);
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
B73e62f:{NFSU2_TR(0x73e62f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e640;}}
}
B73e631:L73e631:{c.instructions+=2;NFSU2_TR(0x73e631);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e632:{NFSU2_TR(0x73e632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e637ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e5a0u);}goto L73e5a0;}
}
B73e637:L73e637:{c.instructions+=2;NFSU2_TR(0x73e637);
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
B73e63a:{NFSU2_TR(0x73e63a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e640:L73e640:{c.instructions+=3;NFSU2_TR(0x73e640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e641:{NFSU2_TR(0x73e641);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e643:{NFSU2_TR(0x73e643);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e645ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B73e645:L73e645:{c.instructions+=6;NFSU2_TR(0x73e645);
__builtin_memmove((R+24),(R+0),4);
}
B73e647:{NFSU2_TR(0x73e647);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e64b:{NFSU2_TR(0x73e64b);
u8 U[4];
w4(U+0,u32(0x21ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e64d:{NFSU2_TR(0x73e64d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e64e:{NFSU2_TR(0x73e64e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e64f:{NFSU2_TR(0x73e64f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e654ull));
TAIL_STATIC(0x75c840u,75c);
}
B73e654:L73e654:{c.instructions+=6;NFSU2_TR(0x73e654);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e658:{NFSU2_TR(0x73e658);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e65b:{NFSU2_TR(0x73e65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73e661:{NFSU2_TR(0x73e661);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73e664:{NFSU2_TR(0x73e664);
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
B73e666:{NFSU2_TR(0x73e666);
if(r1(R+518)){{goto L73e672;}}
}
B73e668:L73e668:{c.instructions+=3;NFSU2_TR(0x73e668);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e669:{NFSU2_TR(0x73e669);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e66a:{NFSU2_TR(0x73e66a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e66full));
TAIL_STATIC(0x73d750u,73d);
}
B73e66f:L73e66f:{c.instructions+=1;NFSU2_TR(0x73e66f);
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
B73e672:L73e672:{c.instructions+=1;NFSU2_TR(0x73e672);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e673:L73e673:{c.instructions+=2;NFSU2_TR(0x73e673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e674:{NFSU2_TR(0x73e674);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e680:L73e680:{c.instructions+=6;NFSU2_TR(0x73e680);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e684:{NFSU2_TR(0x73e684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73e686:{NFSU2_TR(0x73e686);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x67696e76ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x67696e76ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e68b:{NFSU2_TR(0x73e68b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e68c:{NFSU2_TR(0x73e68c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73e690:{NFSU2_TR(0x73e690);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73e727;}}
}
B73e696:L73e696:{c.instructions+=1;NFSU2_TR(0x73e696);
if(r1(R+518)){{goto L73e715;}}
}
B73e698:L73e698:{c.instructions+=2;NFSU2_TR(0x73e698);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x64656c75ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x64656c75ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e69d:{NFSU2_TR(0x73e69d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73e70e;}}
}
B73e69f:L73e69f:{c.instructions+=1;NFSU2_TR(0x73e69f);
if(r1(R+518)){{goto L73e715;}}
}
B73e6a1:L73e6a1:{c.instructions+=2;NFSU2_TR(0x73e6a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61646475ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e6a6:{NFSU2_TR(0x73e6a6);
if(r1(R+518)){{goto L73e715;}}
}
B73e6a8:L73e6a8:{c.instructions+=2;NFSU2_TR(0x73e6a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x62726463ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e6ad:{NFSU2_TR(0x73e6ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e6e0;}}
}
B73e6af:L73e6af:{c.instructions+=2;NFSU2_TR(0x73e6af);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x66756c6cull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73e6b6:{NFSU2_TR(0x73e6b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e6bf;}}
}
B73e6b8:L73e6b8:{c.instructions+=1;NFSU2_TR(0x73e6b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0xfffffffbull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e6bf:L73e6bf:{c.instructions+=6;NFSU2_TR(0x73e6bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e6c5:{NFSU2_TR(0x73e6c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73e6c7:{NFSU2_TR(0x73e6c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e6c9:{NFSU2_TR(0x73e6c9);
__builtin_memmove((R+0),(R+518),1);
}
B73e6cc:{NFSU2_TR(0x73e6cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e6ce:{NFSU2_TR(0x73e6ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e6e0;}}
}
B73e6d0:L73e6d0:{c.instructions+=3;NFSU2_TR(0x73e6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e6d3:{NFSU2_TR(0x73e6d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e6d6:{NFSU2_TR(0x73e6d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e6dd;}}
}
B73e6d8:L73e6d8:{c.instructions+=1;NFSU2_TR(0x73e6d8);
w4(R+0,u32(0xfffffc19ull));
}
B73e6dd:L73e6dd:{c.instructions+=1;NFSU2_TR(0x73e6dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e6e0:L73e6e0:{c.instructions+=2;NFSU2_TR(0x73e6e0);
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
B73e6e2:{NFSU2_TR(0x73e6e2);
if(r1(R+518)){{goto L73e70c;}}
}
B73e6e4:L73e6e4:{c.instructions+=3;NFSU2_TR(0x73e6e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e6e7:{NFSU2_TR(0x73e6e7);
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
B73e6e9:{NFSU2_TR(0x73e6e9);
if(r1(R+518)){{goto L73e70c;}}
}
B73e6eb:L73e6eb:{c.instructions+=7;NFSU2_TR(0x73e6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e6ee:{NFSU2_TR(0x73e6ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e6ef:{NFSU2_TR(0x73e6ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e6f2:{NFSU2_TR(0x73e6f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73e6f4:{NFSU2_TR(0x73e6f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e6f5:{NFSU2_TR(0x73e6f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e6f6:{NFSU2_TR(0x73e6f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e6fbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e500u);}goto L73e500;}
}
B73e6fb:L73e6fb:{c.instructions+=4;NFSU2_TR(0x73e6fb);
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
B73e6fe:{NFSU2_TR(0x73e6fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e6ff:{NFSU2_TR(0x73e6ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e700:{NFSU2_TR(0x73e700);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e702ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73e702:L73e702:{c.instructions+=2;NFSU2_TR(0x73e702);
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
B73e705:{NFSU2_TR(0x73e705);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e70c:L73e70c:{c.instructions+=2;NFSU2_TR(0x73e70c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e70d:{NFSU2_TR(0x73e70d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e70e:L73e70e:{c.instructions+=2;NFSU2_TR(0x73e70e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x65707374ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e713:{NFSU2_TR(0x73e713);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e6e0u);}goto L73e6e0;}}
}
B73e715:L73e715:{c.instructions+=2;NFSU2_TR(0x73e715);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x66756c6cull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73e71c:{NFSU2_TR(0x73e71c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e6d0u);}goto L73e6d0;}}
}
B73e71e:L73e71e:{c.instructions+=2;NFSU2_TR(0x73e71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0xfffffffbull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e725:{NFSU2_TR(0x73e725);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e6d0u);}goto L73e6d0;}
}
B73e727:L73e727:{c.instructions+=2;NFSU2_TR(0x73e727);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x696e7674ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e72c:{NFSU2_TR(0x73e72c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e715u);}goto L73e715;}}
}
B73e72e:L73e72e:{c.instructions+=2;NFSU2_TR(0x73e72e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73656e64ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e733:{NFSU2_TR(0x73e733);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e6afu);}goto L73e6af;}}
}
B73e739:L73e739:{c.instructions+=2;NFSU2_TR(0x73e739);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x75736572ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e73e:{NFSU2_TR(0x73e73e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e715u);}goto L73e715;}}
}
B73e740:L73e740:{c.instructions+=1;NFSU2_TR(0x73e740);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e6e0u);}goto L73e6e0;}
}
B73e750:L73e750:{c.instructions+=4;NFSU2_TR(0x73e750);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e751:{NFSU2_TR(0x73e751);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73e755:{NFSU2_TR(0x73e755);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e757:{NFSU2_TR(0x73e757);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e75d;}}
}
B73e759:L73e759:{c.instructions+=3;NFSU2_TR(0x73e759);
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
B73e75b:{NFSU2_TR(0x73e75b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73e75c:{NFSU2_TR(0x73e75c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e75d:L73e75d:{c.instructions+=3;NFSU2_TR(0x73e75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e763:{NFSU2_TR(0x73e763);
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
B73e765:{NFSU2_TR(0x73e765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e7b1;}}
}
B73e767:L73e767:{c.instructions+=6;NFSU2_TR(0x73e767);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e768:{NFSU2_TR(0x73e768);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73e76c:{NFSU2_TR(0x73e76c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e76d:{NFSU2_TR(0x73e76d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e76e:{NFSU2_TR(0x73e76e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e770:{NFSU2_TR(0x73e770);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e773ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B73e773:L73e773:{c.instructions+=12;NFSU2_TR(0x73e773);
__builtin_memmove((R+24),(R+0),4);
}
B73e775:{NFSU2_TR(0x73e775);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73e777:{NFSU2_TR(0x73e777);
__builtin_memmove((R+4),(R+24),4);
}
B73e779:{NFSU2_TR(0x73e779);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B73e77b:{NFSU2_TR(0x73e77b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e77e:{NFSU2_TR(0x73e77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e781:{NFSU2_TR(0x73e781);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e784:{NFSU2_TR(0x73e784);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e785:{NFSU2_TR(0x73e785);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e787:{NFSU2_TR(0x73e787);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e789:{NFSU2_TR(0x73e789);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e78c:{NFSU2_TR(0x73e78c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e791ull));
TAIL_STATIC(0x73d6d0u,73d);
}
B73e791:L73e791:{c.instructions+=4;NFSU2_TR(0x73e791);
__builtin_memmove((R+28),(R+0),4);
}
B73e793:{NFSU2_TR(0x73e793);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e795:{NFSU2_TR(0x73e795);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e796:{NFSU2_TR(0x73e796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e79bull));
TAIL_STATIC(0x73d990u,73d);
}
B73e79b:L73e79b:{c.instructions+=9;NFSU2_TR(0x73e79b);
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
B73e79e:{NFSU2_TR(0x73e79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e7a1:{NFSU2_TR(0x73e7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e7a4:{NFSU2_TR(0x73e7a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B73e7a6:{NFSU2_TR(0x73e7a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e7a7:{NFSU2_TR(0x73e7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e7ad:{NFSU2_TR(0x73e7ad);
__builtin_memmove((R+0),(R+24),4);
}
B73e7af:{NFSU2_TR(0x73e7af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e7b0:{NFSU2_TR(0x73e7b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73e7b1:L73e7b1:{c.instructions+=2;NFSU2_TR(0x73e7b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73e7b2:{NFSU2_TR(0x73e7b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e7c0:L73e7c0:{c.instructions+=8;NFSU2_TR(0x73e7c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e7c1:{NFSU2_TR(0x73e7c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73e7c5:{NFSU2_TR(0x73e7c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e7c8:{NFSU2_TR(0x73e7c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e7c9:{NFSU2_TR(0x73e7c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73e7d0:{NFSU2_TR(0x73e7d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e7d1:{NFSU2_TR(0x73e7d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e7d2:{NFSU2_TR(0x73e7d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e7d7ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B73e7d7:L73e7d7:{c.instructions+=4;NFSU2_TR(0x73e7d7);
__builtin_memmove((R+28),(R+0),4);
}
B73e7d9:{NFSU2_TR(0x73e7d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73e7dc:{NFSU2_TR(0x73e7dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e7de:{NFSU2_TR(0x73e7de);
if(r1(R+518)){{goto L73e817;}}
}
B73e7e0:L73e7e0:{c.instructions+=4;NFSU2_TR(0x73e7e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e7e7:{NFSU2_TR(0x73e7e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e7ee:{NFSU2_TR(0x73e7ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e7f0:{NFSU2_TR(0x73e7f0);
if(r1(R+518)){{goto L73e85d;}}
}
B73e7f2:L73e7f2:{c.instructions+=2;NFSU2_TR(0x73e7f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e7f8:{NFSU2_TR(0x73e7f8);
if(r1(R+518)){{goto L73e817;}}
}
B73e7fa:L73e7fa:{c.instructions+=2;NFSU2_TR(0x73e7fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x204ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e7ff:{NFSU2_TR(0x73e7ff);
if(r1(R+518)){{goto L73e817;}}
}
B73e801:L73e801:{c.instructions+=3;NFSU2_TR(0x73e801);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffefffffull))));
}
B73e806:{NFSU2_TR(0x73e806);
u8 U[8];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e80d:{NFSU2_TR(0x73e80d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xffefffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73e817:L73e817:{c.instructions+=9;NFSU2_TR(0x73e817);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e81d:{NFSU2_TR(0x73e81d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e820:{NFSU2_TR(0x73e820);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e821:{NFSU2_TR(0x73e821);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e822:{NFSU2_TR(0x73e822);
u8 U[4];
w4(U+0,u32(0x73e680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e827:{NFSU2_TR(0x73e827);
u8 U[4];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73e82e:{NFSU2_TR(0x73e82e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e82f:{NFSU2_TR(0x73e82f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e830:{NFSU2_TR(0x73e830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e835ull));
TAIL_STATIC(0x74d420u,74d);
}
B73e835:L73e835:{c.instructions+=3;NFSU2_TR(0x73e835);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B73e838:{NFSU2_TR(0x73e838);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e83a:{NFSU2_TR(0x73e83a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e86a;}}
}
B73e83c:L73e83c:{c.instructions+=3;NFSU2_TR(0x73e83c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e83e:{NFSU2_TR(0x73e83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e845:{NFSU2_TR(0x73e845);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e86d;}}
}
B73e847:L73e847:{c.instructions+=5;NFSU2_TR(0x73e847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e84a:{NFSU2_TR(0x73e84a);
u8 U[4];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73e851:{NFSU2_TR(0x73e851);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e852:{NFSU2_TR(0x73e852);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e853:{NFSU2_TR(0x73e853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e858ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B73e858:L73e858:{c.instructions+=2;NFSU2_TR(0x73e858);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73e85b:{NFSU2_TR(0x73e85b);
__builtin_memmove((R+28),(R+0),4);
}
B73e85d:L73e85d:{c.instructions+=3;NFSU2_TR(0x73e85d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e85e:{NFSU2_TR(0x73e85e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e85f:{NFSU2_TR(0x73e85f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e864ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e750u);}goto L73e750;}
}
B73e864:L73e864:{c.instructions+=4;NFSU2_TR(0x73e864);
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
B73e867:{NFSU2_TR(0x73e867);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e868:{NFSU2_TR(0x73e868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e869:{NFSU2_TR(0x73e869);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e86a:L73e86a:{c.instructions+=1;NFSU2_TR(0x73e86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e86d:L73e86d:{c.instructions+=4;NFSU2_TR(0x73e86d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e86e:{NFSU2_TR(0x73e86e);
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
B73e870:{NFSU2_TR(0x73e870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e871:{NFSU2_TR(0x73e871);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e880:L73e880:{c.instructions+=8;NFSU2_TR(0x73e880);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e881:{NFSU2_TR(0x73e881);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e882:{NFSU2_TR(0x73e882);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73e886:{NFSU2_TR(0x73e886);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e887:{NFSU2_TR(0x73e887);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B73e88a:{NFSU2_TR(0x73e88a);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73e88c:{NFSU2_TR(0x73e88c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e890:{NFSU2_TR(0x73e890);
if(r1(R+518)){{goto L73e90e;}}
}
B73e892:L73e892:{c.instructions+=3;NFSU2_TR(0x73e892);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e895:{NFSU2_TR(0x73e895);
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
B73e897:{NFSU2_TR(0x73e897);
if(r1(R+518)){{goto L73e90e;}}
}
B73e899:L73e899:{c.instructions+=5;NFSU2_TR(0x73e899);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e89a:{NFSU2_TR(0x73e89a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e89b:{NFSU2_TR(0x73e89b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e89c:{NFSU2_TR(0x73e89c);
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
B73e89e:{NFSU2_TR(0x73e89e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e8a3ull));
TAIL_STATIC(0x73d8c0u,73d);
}
B73e8a3:L73e8a3:{c.instructions+=4;NFSU2_TR(0x73e8a3);
__builtin_memmove((R+12),(R+0),4);
}
B73e8a5:{NFSU2_TR(0x73e8a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73e8a8:{NFSU2_TR(0x73e8a8);
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
B73e8aa:{NFSU2_TR(0x73e8aa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73e8f8;}}
}
B73e8ac:L73e8ac:{c.instructions+=1;NFSU2_TR(0x73e8ac);
__builtin_memmove((R+16),(R+16),4);
}
B73e8b0:L73e8b0:{c.instructions+=4;NFSU2_TR(0x73e8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e8b3:{NFSU2_TR(0x73e8b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e8b4:{NFSU2_TR(0x73e8b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e8b5:{NFSU2_TR(0x73e8b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e8baull));
TAIL_STATIC(0x73d8e0u,73d);
}
B73e8ba:L73e8ba:{c.instructions+=3;NFSU2_TR(0x73e8ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73e8bd:{NFSU2_TR(0x73e8bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e8bf:{NFSU2_TR(0x73e8bf);
if(r1(R+518)){{goto L73e8dc;}}
}
B73e8c1:L73e8c1:{c.instructions+=3;NFSU2_TR(0x73e8c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e8c5:{NFSU2_TR(0x73e8c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e8c7:{NFSU2_TR(0x73e8c7);
if(r1(R+518)){{goto L73e8cf;}}
}
B73e8c9:L73e8c9:{c.instructions+=2;NFSU2_TR(0x73e8c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B73e8cd:{NFSU2_TR(0x73e8cd);
if(r1(R+518)){{goto L73e8dc;}}
}
B73e8cf:L73e8cf:{c.instructions+=3;NFSU2_TR(0x73e8cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e8d2:{NFSU2_TR(0x73e8d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B73e8d4:{NFSU2_TR(0x73e8d4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73e8dc;}}
}
B73e8d6:L73e8d6:{c.instructions+=2;NFSU2_TR(0x73e8d6);
__builtin_memmove((R+28),(R+0),4);
}
B73e8d8:{NFSU2_TR(0x73e8d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e8dc:L73e8dc:{c.instructions+=3;NFSU2_TR(0x73e8dc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B73e8dd:{NFSU2_TR(0x73e8dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73e8df:{NFSU2_TR(0x73e8df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73e8b0u);}goto L73e8b0;}}
}
B73e8e1:L73e8e1:{c.instructions+=2;NFSU2_TR(0x73e8e1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B73e8e4:{NFSU2_TR(0x73e8e4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73e8f8;}}
}
B73e8e6:L73e8e6:{c.instructions+=10;NFSU2_TR(0x73e8e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e8ea:{NFSU2_TR(0x73e8ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e8eb:{NFSU2_TR(0x73e8eb);
__builtin_memmove((R+0),(R+28),4);
}
B73e8ed:{NFSU2_TR(0x73e8ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73e8ee:{NFSU2_TR(0x73e8ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e8ef:{NFSU2_TR(0x73e8ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B73e8f1:{NFSU2_TR(0x73e8f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e8f5:{NFSU2_TR(0x73e8f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73e8f6:{NFSU2_TR(0x73e8f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73e8f7:{NFSU2_TR(0x73e8f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e8f8:L73e8f8:{c.instructions+=11;NFSU2_TR(0x73e8f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e8fc:{NFSU2_TR(0x73e8fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73e8fe:{NFSU2_TR(0x73e8fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e902:{NFSU2_TR(0x73e902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e903:{NFSU2_TR(0x73e903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73e904:{NFSU2_TR(0x73e904);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e905:{NFSU2_TR(0x73e905);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B73e907:{NFSU2_TR(0x73e907);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e90b:{NFSU2_TR(0x73e90b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73e90c:{NFSU2_TR(0x73e90c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73e90d:{NFSU2_TR(0x73e90d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e90e:L73e90e:{c.instructions+=5;NFSU2_TR(0x73e90e);
__builtin_memmove((R+0),(R+28),4);
}
B73e910:{NFSU2_TR(0x73e910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73e911:{NFSU2_TR(0x73e911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73e912:{NFSU2_TR(0x73e912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73e913:{NFSU2_TR(0x73e913);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e920:L73e920:{c.instructions+=5;NFSU2_TR(0x73e920);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e924:{NFSU2_TR(0x73e924);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e927:{NFSU2_TR(0x73e927);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e928:{NFSU2_TR(0x73e928);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73e92c:{NFSU2_TR(0x73e92c);
if(r1(R+518)){{goto L73e934;}}
}
B73e92e:L73e92e:{c.instructions+=1;NFSU2_TR(0x73e92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e934:L73e934:{c.instructions+=3;NFSU2_TR(0x73e934);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e938:{NFSU2_TR(0x73e938);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e93b:{NFSU2_TR(0x73e93b);
if(r1(R+518)){{goto L73e943;}}
}
B73e93d:L73e93d:{c.instructions+=1;NFSU2_TR(0x73e93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e943:L73e943:{c.instructions+=3;NFSU2_TR(0x73e943);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e947:{NFSU2_TR(0x73e947);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e94a:{NFSU2_TR(0x73e94a);
if(r1(R+518)){{goto L73e952;}}
}
B73e94c:L73e94c:{c.instructions+=1;NFSU2_TR(0x73e94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e952:L73e952:{c.instructions+=3;NFSU2_TR(0x73e952);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e956:{NFSU2_TR(0x73e956);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e959:{NFSU2_TR(0x73e959);
if(r1(R+518)){{goto L73e961;}}
}
B73e95b:L73e95b:{c.instructions+=1;NFSU2_TR(0x73e95b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e961:L73e961:{c.instructions+=3;NFSU2_TR(0x73e961);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e965:{NFSU2_TR(0x73e965);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e968:{NFSU2_TR(0x73e968);
if(r1(R+518)){{goto L73e970;}}
}
B73e96a:L73e96a:{c.instructions+=1;NFSU2_TR(0x73e96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e970:L73e970:{c.instructions+=3;NFSU2_TR(0x73e970);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e974:{NFSU2_TR(0x73e974);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73e977:{NFSU2_TR(0x73e977);
if(r1(R+518)){{goto L73e986;}}
}
B73e979:L73e979:{c.instructions+=2;NFSU2_TR(0x73e979);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73e97e:{NFSU2_TR(0x73e97e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73e986;}}
}
B73e980:L73e980:{c.instructions+=1;NFSU2_TR(0x73e980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e986:L73e986:{c.instructions+=2;NFSU2_TR(0x73e986);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
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
B73e98b:{NFSU2_TR(0x73e98b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e999;}}
}
B73e98d:L73e98d:{c.instructions+=3;NFSU2_TR(0x73e98d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e990:{NFSU2_TR(0x73e990);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e991:{NFSU2_TR(0x73e991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e996ull));
TAIL_STATIC(0x74db10u,74d);
}
B73e996:L73e996:{c.instructions+=1;NFSU2_TR(0x73e996);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73e999:L73e999:{c.instructions+=2;NFSU2_TR(0x73e999);
u8 U[22];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
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
B73e99e:{NFSU2_TR(0x73e99e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e9aa;}}
}
B73e9a0:L73e9a0:{c.instructions+=1;NFSU2_TR(0x73e9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73e9aa:L73e9aa:{c.instructions+=2;NFSU2_TR(0x73e9aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73e9ab:{NFSU2_TR(0x73e9ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e9b0:L73e9b0:{c.instructions+=3;NFSU2_TR(0x73e9b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e9b4:{NFSU2_TR(0x73e9b4);
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
B73e9b6:{NFSU2_TR(0x73e9b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e9be;}}
}
B73e9b8:L73e9b8:{c.instructions+=2;NFSU2_TR(0x73e9b8);
w4(R+0,u32(0xfffffff8ull));
}
B73e9bd:{NFSU2_TR(0x73e9bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e9be:L73e9be:{c.instructions+=11;NFSU2_TR(0x73e9be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e9c2:{NFSU2_TR(0x73e9c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e9c6:{NFSU2_TR(0x73e9c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e9c8:{NFSU2_TR(0x73e9c8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e9ca:{NFSU2_TR(0x73e9ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e9cb:{NFSU2_TR(0x73e9cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e9cf:{NFSU2_TR(0x73e9cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e9d0:{NFSU2_TR(0x73e9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e9d3:{NFSU2_TR(0x73e9d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e9d4:{NFSU2_TR(0x73e9d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73e9d5:{NFSU2_TR(0x73e9d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73e9daull));
TAIL_STATIC(0x74d030u,74d);
}
B73e9da:L73e9da:{c.instructions+=2;NFSU2_TR(0x73e9da);
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
B73e9dd:{NFSU2_TR(0x73e9dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e9e0:L73e9e0:{c.instructions+=3;NFSU2_TR(0x73e9e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73e9e4:{NFSU2_TR(0x73e9e4);
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
B73e9e6:{NFSU2_TR(0x73e9e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73e9ee;}}
}
B73e9e8:L73e9e8:{c.instructions+=2;NFSU2_TR(0x73e9e8);
w4(R+0,u32(0xfffffffdull));
}
B73e9ed:{NFSU2_TR(0x73e9ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73e9ee:L73e9ee:{c.instructions+=6;NFSU2_TR(0x73e9ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73e9f2:{NFSU2_TR(0x73e9f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73e9f6:{NFSU2_TR(0x73e9f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e9f9:{NFSU2_TR(0x73e9f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73e9fc:{NFSU2_TR(0x73e9fc);
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
B73e9fe:{NFSU2_TR(0x73e9fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ea00:L73ea00:{c.instructions+=5;NFSU2_TR(0x73ea00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ea01:{NFSU2_TR(0x73ea01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73ea05:{NFSU2_TR(0x73ea05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ea08:{NFSU2_TR(0x73ea08);
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
B73ea0a:{NFSU2_TR(0x73ea0a);
if(r1(R+518)){{goto L73ea21;}}
}
B73ea0c:L73ea0c:{c.instructions+=6;NFSU2_TR(0x73ea0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ea0f:{NFSU2_TR(0x73ea0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ea10:{NFSU2_TR(0x73ea10);
u8 U[4];
w4(U+0,u32(0xffffff94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ea12:{NFSU2_TR(0x73ea12);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ea14:{NFSU2_TR(0x73ea14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ea15:{NFSU2_TR(0x73ea15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ea17ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73ea17:L73ea17:{c.instructions+=2;NFSU2_TR(0x73ea17);
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
B73ea1a:{NFSU2_TR(0x73ea1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73ea21:L73ea21:{c.instructions+=3;NFSU2_TR(0x73ea21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffff94ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73ea28:{NFSU2_TR(0x73ea28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ea29:{NFSU2_TR(0x73ea29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ea30:L73ea30:{c.instructions+=4;NFSU2_TR(0x73ea30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ea34:{NFSU2_TR(0x73ea34);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73ea37:{NFSU2_TR(0x73ea37);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ea3b:{NFSU2_TR(0x73ea3b);
TAIL_STATIC(0x74da40u,74d);
}
B73ea40:L73ea40:{c.instructions+=5;NFSU2_TR(0x73ea40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ea44:{NFSU2_TR(0x73ea44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ea47:{NFSU2_TR(0x73ea47);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ea49:{NFSU2_TR(0x73ea49);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ea4d:{NFSU2_TR(0x73ea4d);
if(r1(R+518)){{goto L73ea59;}}
}
B73ea4f:L73ea4f:{c.instructions+=2;NFSU2_TR(0x73ea4f);
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
B73ea51:{NFSU2_TR(0x73ea51);
if(r1(R+518)){{goto L73ea59;}}
}
B73ea53:L73ea53:{c.instructions+=2;NFSU2_TR(0x73ea53);
w4(R+0,u32(0xfffffffbull));
}
B73ea58:{NFSU2_TR(0x73ea58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ea59:L73ea59:{c.instructions+=5;NFSU2_TR(0x73ea59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ea5c:{NFSU2_TR(0x73ea5c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ea60:{NFSU2_TR(0x73ea60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ea63:{NFSU2_TR(0x73ea63);
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
B73ea65:{NFSU2_TR(0x73ea65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ea70:L73ea70:{c.instructions+=5;NFSU2_TR(0x73ea70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ea74:{NFSU2_TR(0x73ea74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ea77:{NFSU2_TR(0x73ea77);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ea79:{NFSU2_TR(0x73ea79);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ea7d:{NFSU2_TR(0x73ea7d);
if(r1(R+518)){{goto L73ea89;}}
}
B73ea7f:L73ea7f:{c.instructions+=2;NFSU2_TR(0x73ea7f);
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
B73ea81:{NFSU2_TR(0x73ea81);
if(r1(R+518)){{goto L73ea89;}}
}
B73ea83:L73ea83:{c.instructions+=2;NFSU2_TR(0x73ea83);
w4(R+0,u32(0xfffffffbull));
}
B73ea88:{NFSU2_TR(0x73ea88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ea89:L73ea89:{c.instructions+=5;NFSU2_TR(0x73ea89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ea8c:{NFSU2_TR(0x73ea8c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ea90:{NFSU2_TR(0x73ea90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ea93:{NFSU2_TR(0x73ea93);
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
B73ea95:{NFSU2_TR(0x73ea95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eaa0:L73eaa0:{c.instructions+=5;NFSU2_TR(0x73eaa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eaa4:{NFSU2_TR(0x73eaa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73eaa7:{NFSU2_TR(0x73eaa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73eaa9:{NFSU2_TR(0x73eaa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73eaad:{NFSU2_TR(0x73eaad);
if(r1(R+518)){{goto L73eab9;}}
}
B73eaaf:L73eaaf:{c.instructions+=2;NFSU2_TR(0x73eaaf);
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
B73eab1:{NFSU2_TR(0x73eab1);
if(r1(R+518)){{goto L73eab9;}}
}
B73eab3:L73eab3:{c.instructions+=2;NFSU2_TR(0x73eab3);
w4(R+0,u32(0xfffffffbull));
}
B73eab8:{NFSU2_TR(0x73eab8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eab9:L73eab9:{c.instructions+=5;NFSU2_TR(0x73eab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73eabc:{NFSU2_TR(0x73eabc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73eac0:{NFSU2_TR(0x73eac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73eac3:{NFSU2_TR(0x73eac3);
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
B73eac5:{NFSU2_TR(0x73eac5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ead0:L73ead0:{c.instructions+=3;NFSU2_TR(0x73ead0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ead4:{NFSU2_TR(0x73ead4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73ead6:{NFSU2_TR(0x73ead6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eae0:L73eae0:{c.instructions+=6;NFSU2_TR(0x73eae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eae4:{NFSU2_TR(0x73eae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73eae6:{NFSU2_TR(0x73eae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eaec:{NFSU2_TR(0x73eaec);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73eaef:{NFSU2_TR(0x73eaef);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73eaf2:{NFSU2_TR(0x73eaf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eb00:L73eb00:{c.instructions+=6;NFSU2_TR(0x73eb00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eb04:{NFSU2_TR(0x73eb04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73eb06:{NFSU2_TR(0x73eb06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eb0c:{NFSU2_TR(0x73eb0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73eb0f:{NFSU2_TR(0x73eb0f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73eb12:{NFSU2_TR(0x73eb12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eb20:L73eb20:{c.instructions+=6;NFSU2_TR(0x73eb20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eb24:{NFSU2_TR(0x73eb24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73eb26:{NFSU2_TR(0x73eb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eb2c:{NFSU2_TR(0x73eb2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73eb2f:{NFSU2_TR(0x73eb2f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73eb32:{NFSU2_TR(0x73eb32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eb40:L73eb40:{c.instructions+=4;NFSU2_TR(0x73eb40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eb44:{NFSU2_TR(0x73eb44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73eb46:{NFSU2_TR(0x73eb46);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x85ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x85ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x85ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73eb4b:{NFSU2_TR(0x73eb4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eb50:L73eb50:{c.instructions+=4;NFSU2_TR(0x73eb50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73eb54:{NFSU2_TR(0x73eb54);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73eb56:{NFSU2_TR(0x73eb56);
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
B73eb58:{NFSU2_TR(0x73eb58);
if(r1(R+518)){{goto L73eb69;}}
}
B73eb5a:L73eb5a:{c.instructions+=3;NFSU2_TR(0x73eb5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B73eb5e:{NFSU2_TR(0x73eb5e);
u8 U[18];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B73eb62:{NFSU2_TR(0x73eb62);
if(r1(R+518)){{goto L73eb69;}}
}
B73eb64:L73eb64:{c.instructions+=1;NFSU2_TR(0x73eb64);
w4(R+0,u32(0x1ull));
}
B73eb69:L73eb69:{c.instructions+=1;NFSU2_TR(0x73eb69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eb70:L73eb70:{c.instructions+=3;NFSU2_TR(0x73eb70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eb74:{NFSU2_TR(0x73eb74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73eb76:{NFSU2_TR(0x73eb76);
if(r1(R+518)){{goto L73eb87;}}
}
B73eb78:L73eb78:{c.instructions+=5;NFSU2_TR(0x73eb78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73eb7a:{NFSU2_TR(0x73eb7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eb80:{NFSU2_TR(0x73eb80);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73eb83:{NFSU2_TR(0x73eb83);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73eb86:{NFSU2_TR(0x73eb86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eb87:L73eb87:{c.instructions+=2;NFSU2_TR(0x73eb87);
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
B73eb89:{NFSU2_TR(0x73eb89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eb90:L73eb90:{c.instructions+=5;NFSU2_TR(0x73eb90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73eb94:{NFSU2_TR(0x73eb94);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73eb96:{NFSU2_TR(0x73eb96);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x1ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x1ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x1ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B73eb9b:{NFSU2_TR(0x73eb9b);
__builtin_memmove((R+0),(R+518),1);
}
B73eb9e:{NFSU2_TR(0x73eb9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eba0:L73eba0:{c.instructions+=3;NFSU2_TR(0x73eba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eba4:{NFSU2_TR(0x73eba4);
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
B73eba6:{NFSU2_TR(0x73eba6);
if(r1(R+518)){{goto L73ebb2;}}
}
B73eba8:L73eba8:{c.instructions+=3;NFSU2_TR(0x73eba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73ebaa:{NFSU2_TR(0x73ebaa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B73ebb1:{NFSU2_TR(0x73ebb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ebb2:L73ebb2:{c.instructions+=2;NFSU2_TR(0x73ebb2);
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
B73ebb4:{NFSU2_TR(0x73ebb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ebc0:L73ebc0:{c.instructions+=7;NFSU2_TR(0x73ebc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ebc4:{NFSU2_TR(0x73ebc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73ebc6:{NFSU2_TR(0x73ebc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B73ebcc:{NFSU2_TR(0x73ebcc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73ebce:{NFSU2_TR(0x73ebce);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x5ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x5ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73ebd1:{NFSU2_TR(0x73ebd1);
__builtin_memmove((R+0),(R+518),1);
}
B73ebd4:{NFSU2_TR(0x73ebd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ebe0:L73ebe0:{c.instructions+=7;NFSU2_TR(0x73ebe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ebe4:{NFSU2_TR(0x73ebe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73ebe6:{NFSU2_TR(0x73ebe6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B73ebec:{NFSU2_TR(0x73ebec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73ebee:{NFSU2_TR(0x73ebee);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73ebf1:{NFSU2_TR(0x73ebf1);
__builtin_memmove((R+0),(R+518),1);
}
B73ebf4:{NFSU2_TR(0x73ebf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ec00:L73ec00:{c.instructions+=6;NFSU2_TR(0x73ec00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ec04:{NFSU2_TR(0x73ec04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73ec06:{NFSU2_TR(0x73ec06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ec0c:{NFSU2_TR(0x73ec0c);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73ec0f:{NFSU2_TR(0x73ec0f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ec12:{NFSU2_TR(0x73ec12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ec20:L73ec20:{c.instructions+=3;NFSU2_TR(0x73ec20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ec24:{NFSU2_TR(0x73ec24);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ec26:{NFSU2_TR(0x73ec26);
if(r1(R+518)){{goto L73ec52;}}
}
B73ec28:L73ec28:{c.instructions+=3;NFSU2_TR(0x73ec28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ec2b:{NFSU2_TR(0x73ec2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ec2d:{NFSU2_TR(0x73ec2d);
if(r1(R+518)){{goto L73ec52;}}
}
B73ec2f:L73ec2f:{c.instructions+=3;NFSU2_TR(0x73ec2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ec35:{NFSU2_TR(0x73ec35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ec37:{NFSU2_TR(0x73ec37);
if(r1(R+518)){{goto L73ec52;}}
}
B73ec39:L73ec39:{c.instructions+=9;NFSU2_TR(0x73ec39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ec3a:{NFSU2_TR(0x73ec3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73ec3c:{NFSU2_TR(0x73ec3c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ec40:{NFSU2_TR(0x73ec40);
u8 U[4];
w4(U+0,u32(0x2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ec42:{NFSU2_TR(0x73ec42);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x35ull))));
}
B73ec45:{NFSU2_TR(0x73ec45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ec46:{NFSU2_TR(0x73ec46);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ec48:{NFSU2_TR(0x73ec48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ec49:{NFSU2_TR(0x73ec49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ec4eull));
TAIL_STATIC(0x7434f0u,743);
}
B73ec4e:L73ec4e:{c.instructions+=2;NFSU2_TR(0x73ec4e);
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
B73ec51:{NFSU2_TR(0x73ec51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ec52:L73ec52:{c.instructions+=7;NFSU2_TR(0x73ec52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73ec54:{NFSU2_TR(0x73ec54);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ec58:{NFSU2_TR(0x73ec58);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ec5a:{NFSU2_TR(0x73ec5a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x35ull))));
}
B73ec5d:{NFSU2_TR(0x73ec5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ec5e:{NFSU2_TR(0x73ec5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ec5f:{NFSU2_TR(0x73ec5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ec64ull));
TAIL_STATIC(0x75c840u,75c);
}
B73ec64:L73ec64:{c.instructions+=2;NFSU2_TR(0x73ec64);
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
B73ec67:{NFSU2_TR(0x73ec67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ec70:L73ec70:{c.instructions+=9;NFSU2_TR(0x73ec70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ec74:{NFSU2_TR(0x73ec74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73ec76:{NFSU2_TR(0x73ec76);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73ec7a:{NFSU2_TR(0x73ec7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ec7e:{NFSU2_TR(0x73ec7e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xaeull))));
}
B73ec84:{NFSU2_TR(0x73ec84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ec85:{NFSU2_TR(0x73ec85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ec86:{NFSU2_TR(0x73ec86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ec87:{NFSU2_TR(0x73ec87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ec8cull));
TAIL_STATIC(0x741650u,741);
}
B73ec8c:L73ec8c:{c.instructions+=2;NFSU2_TR(0x73ec8c);
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
B73ec8f:{NFSU2_TR(0x73ec8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ec90:L73ec90:{c.instructions+=6;NFSU2_TR(0x73ec90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ec94:{NFSU2_TR(0x73ec94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73ec96:{NFSU2_TR(0x73ec96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ec9c:{NFSU2_TR(0x73ec9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73ec9f:{NFSU2_TR(0x73ec9f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73eca2:{NFSU2_TR(0x73eca2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ecb0:L73ecb0:{c.instructions+=6;NFSU2_TR(0x73ecb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ecb4:{NFSU2_TR(0x73ecb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73ecb6:{NFSU2_TR(0x73ecb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ecbc:{NFSU2_TR(0x73ecbc);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73ecbf:{NFSU2_TR(0x73ecbf);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ecc2:{NFSU2_TR(0x73ecc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ecd0:L73ecd0:{c.instructions+=4;NFSU2_TR(0x73ecd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ecd4:{NFSU2_TR(0x73ecd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73ecd6:{NFSU2_TR(0x73ecd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ecdc:{NFSU2_TR(0x73ecdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ece0:L73ece0:{c.instructions+=4;NFSU2_TR(0x73ece0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ece4:{NFSU2_TR(0x73ece4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73ece6:{NFSU2_TR(0x73ece6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73eced:{NFSU2_TR(0x73eced);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73ed00;}}
}
B73ecef:L73ecef:{c.instructions+=3;NFSU2_TR(0x73ecef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ecf5:{NFSU2_TR(0x73ecf5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+5))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73ecf8:{NFSU2_TR(0x73ecf8);
if(r1(R+518)){{goto L73ed00;}}
}
B73ecfa:L73ecfa:{c.instructions+=2;NFSU2_TR(0x73ecfa);
w4(R+0,u32(0x1ull));
}
B73ecff:{NFSU2_TR(0x73ecff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ed00:L73ed00:{c.instructions+=2;NFSU2_TR(0x73ed00);
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
B73ed02:{NFSU2_TR(0x73ed02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ed10:L73ed10:{c.instructions+=8;NFSU2_TR(0x73ed10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed11:{NFSU2_TR(0x73ed11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed12:{NFSU2_TR(0x73ed12);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73ed16:{NFSU2_TR(0x73ed16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed17:{NFSU2_TR(0x73ed17);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73ed1b:{NFSU2_TR(0x73ed1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ed1e:{NFSU2_TR(0x73ed1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed1f:{NFSU2_TR(0x73ed1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ed24ull));
TAIL_STATIC(0x73d8c0u,73d);
}
B73ed24:L73ed24:{c.instructions+=4;NFSU2_TR(0x73ed24);
__builtin_memmove((R+20),(R+0),4);
}
B73ed26:{NFSU2_TR(0x73ed26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73ed29:{NFSU2_TR(0x73ed29);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73ed2b:{NFSU2_TR(0x73ed2b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73ed4c;}}
}
B73ed2d:L73ed2d:{c.instructions+=1;NFSU2_TR(0x73ed2d);
__builtin_memmove((R+4),(R+4),4);
}
B73ed30:L73ed30:{c.instructions+=4;NFSU2_TR(0x73ed30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ed33:{NFSU2_TR(0x73ed33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed34:{NFSU2_TR(0x73ed34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed35:{NFSU2_TR(0x73ed35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ed3aull));
TAIL_STATIC(0x73d8e0u,73d);
}
B73ed3a:L73ed3a:{c.instructions+=3;NFSU2_TR(0x73ed3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73ed3d:{NFSU2_TR(0x73ed3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ed3f:{NFSU2_TR(0x73ed3f);
if(r1(R+518)){{goto L73ed47;}}
}
B73ed41:L73ed41:{c.instructions+=2;NFSU2_TR(0x73ed41);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B73ed45:{NFSU2_TR(0x73ed45);
if(r1(R+518)){{goto L73ed52;}}
}
B73ed47:L73ed47:{c.instructions+=3;NFSU2_TR(0x73ed47);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B73ed48:{NFSU2_TR(0x73ed48);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73ed4a:{NFSU2_TR(0x73ed4a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ed30u);}goto L73ed30;}}
}
B73ed4c:L73ed4c:{c.instructions+=1;NFSU2_TR(0x73ed4c);
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
B73ed4e:L73ed4e:{c.instructions+=4;NFSU2_TR(0x73ed4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73ed4f:{NFSU2_TR(0x73ed4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ed50:{NFSU2_TR(0x73ed50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73ed51:{NFSU2_TR(0x73ed51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ed52:L73ed52:{c.instructions+=3;NFSU2_TR(0x73ed52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ed56:{NFSU2_TR(0x73ed56);
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
B73ed58:{NFSU2_TR(0x73ed58);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ed4eu);}goto L73ed4e;}}
}
B73ed5a:L73ed5a:{c.instructions+=7;NFSU2_TR(0x73ed5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ed5d:{NFSU2_TR(0x73ed5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73ed5e:{NFSU2_TR(0x73ed5e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ed61:{NFSU2_TR(0x73ed61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ed62:{NFSU2_TR(0x73ed62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ed65:{NFSU2_TR(0x73ed65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73ed66:{NFSU2_TR(0x73ed66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ed70:L73ed70:{c.instructions+=10;NFSU2_TR(0x73ed70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed71:{NFSU2_TR(0x73ed71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed72:{NFSU2_TR(0x73ed72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed73:{NFSU2_TR(0x73ed73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed74:{NFSU2_TR(0x73ed74);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73ed78:{NFSU2_TR(0x73ed78);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ed7b:{NFSU2_TR(0x73ed7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed7c:{NFSU2_TR(0x73ed7c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B73ed7e:{NFSU2_TR(0x73ed7e);
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
B73ed80:{NFSU2_TR(0x73ed80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ed85ull));
TAIL_STATIC(0x73d8c0u,73d);
}
B73ed85:L73ed85:{c.instructions+=4;NFSU2_TR(0x73ed85);
__builtin_memmove((R+20),(R+0),4);
}
B73ed87:{NFSU2_TR(0x73ed87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73ed8a:{NFSU2_TR(0x73ed8a);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ed8c:{NFSU2_TR(0x73ed8c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73edad;}}
}
B73ed8e:L73ed8e:{c.instructions+=1;NFSU2_TR(0x73ed8e);
__builtin_memmove((R+28),(R+28),4);
}
B73ed90:L73ed90:{c.instructions+=4;NFSU2_TR(0x73ed90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ed93:{NFSU2_TR(0x73ed93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed94:{NFSU2_TR(0x73ed94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ed95:{NFSU2_TR(0x73ed95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ed9aull));
TAIL_STATIC(0x73d8e0u,73d);
}
B73ed9a:L73ed9a:{c.instructions+=3;NFSU2_TR(0x73ed9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73ed9d:{NFSU2_TR(0x73ed9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ed9f:{NFSU2_TR(0x73ed9f);
if(r1(R+518)){{goto L73eda8;}}
}
B73eda1:L73eda1:{c.instructions+=2;NFSU2_TR(0x73eda1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B73eda5:{NFSU2_TR(0x73eda5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73eda8;}}
}
B73eda7:L73eda7:{c.instructions+=1;NFSU2_TR(0x73eda7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B73eda8:L73eda8:{c.instructions+=3;NFSU2_TR(0x73eda8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B73eda9:{NFSU2_TR(0x73eda9);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B73edab:{NFSU2_TR(0x73edab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ed90u);}goto L73ed90;}}
}
B73edad:L73edad:{c.instructions+=6;NFSU2_TR(0x73edad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73edae:{NFSU2_TR(0x73edae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73edaf:{NFSU2_TR(0x73edaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73edb0:{NFSU2_TR(0x73edb0);
__builtin_memmove((R+0),(R+12),4);
}
B73edb2:{NFSU2_TR(0x73edb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73edb3:{NFSU2_TR(0x73edb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73edc0:L73edc0:{c.instructions+=4;NFSU2_TR(0x73edc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73edc4:{NFSU2_TR(0x73edc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73edc7:{NFSU2_TR(0x73edc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73edcb:{NFSU2_TR(0x73edcb);
TAIL_STATIC(0x73d8c0u,73d);
}
B73edd0:L73edd0:{c.instructions+=8;NFSU2_TR(0x73edd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73edd1:{NFSU2_TR(0x73edd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73edd5:{NFSU2_TR(0x73edd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73edd8:{NFSU2_TR(0x73edd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73edd9:{NFSU2_TR(0x73edd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73eddd:{NFSU2_TR(0x73eddd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73edde:{NFSU2_TR(0x73edde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73eddf:{NFSU2_TR(0x73eddf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ede4ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B73ede4:L73ede4:{c.instructions+=3;NFSU2_TR(0x73ede4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73ede7:{NFSU2_TR(0x73ede7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ede9:{NFSU2_TR(0x73ede9);
if(r1(R+518)){{goto L73edf5;}}
}
B73edeb:L73edeb:{c.instructions+=3;NFSU2_TR(0x73edeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73edee:{NFSU2_TR(0x73edee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73edf0:{NFSU2_TR(0x73edf0);
if(r1(R+518)){{goto L73edf5;}}
}
B73edf2:L73edf2:{c.instructions+=1;NFSU2_TR(0x73edf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73edf5:L73edf5:{c.instructions+=4;NFSU2_TR(0x73edf5);
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
B73edf7:{NFSU2_TR(0x73edf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73edfa:{NFSU2_TR(0x73edfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73edfd:{NFSU2_TR(0x73edfd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73ee1d;}}
}
B73edff:L73edff:{c.instructions+=3;NFSU2_TR(0x73edff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee00:{NFSU2_TR(0x73ee00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee01:{NFSU2_TR(0x73ee01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ee06ull));
TAIL_STATIC(0x73d820u,73d);
}
B73ee06:L73ee06:{c.instructions+=4;NFSU2_TR(0x73ee06);
__builtin_memmove((R+28),(R+0),4);
}
B73ee08:{NFSU2_TR(0x73ee08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73ee0b:{NFSU2_TR(0x73ee0b);
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
B73ee0d:{NFSU2_TR(0x73ee0d);
if(r1(R+518)){{goto L73ee1d;}}
}
B73ee0f:L73ee0f:{c.instructions+=3;NFSU2_TR(0x73ee0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ee12:{NFSU2_TR(0x73ee12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee13:{NFSU2_TR(0x73ee13);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ee16ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73ee16:L73ee16:{c.instructions+=2;NFSU2_TR(0x73ee16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee17:{NFSU2_TR(0x73ee17);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ee1aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73ee1a:L73ee1a:{c.instructions+=1;NFSU2_TR(0x73ee1a);
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
B73ee1d:L73ee1d:{c.instructions+=3;NFSU2_TR(0x73ee1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73ee1e:{NFSU2_TR(0x73ee1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ee1f:{NFSU2_TR(0x73ee1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ee20:L73ee20:{c.instructions+=4;NFSU2_TR(0x73ee20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee21:{NFSU2_TR(0x73ee21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73ee25:{NFSU2_TR(0x73ee25);
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
B73ee27:{NFSU2_TR(0x73ee27);
if(r1(R+518)){{goto L73ee94;}}
}
B73ee29:L73ee29:{c.instructions+=3;NFSU2_TR(0x73ee29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ee2c:{NFSU2_TR(0x73ee2c);
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
B73ee2e:{NFSU2_TR(0x73ee2e);
if(r1(R+518)){{goto L73ee94;}}
}
B73ee30:L73ee30:{c.instructions+=3;NFSU2_TR(0x73ee30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee31:{NFSU2_TR(0x73ee31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee32:{NFSU2_TR(0x73ee32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ee37ull));
TAIL_STATIC(0x73d8c0u,73d);
}
B73ee37:L73ee37:{c.instructions+=4;NFSU2_TR(0x73ee37);
__builtin_memmove((R+24),(R+0),4);
}
B73ee39:{NFSU2_TR(0x73ee39);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73ee3c:{NFSU2_TR(0x73ee3c);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ee3d:{NFSU2_TR(0x73ee3d);
if(r1(R+519)){{goto L73ee93;}}
}
B73ee3f:L73ee3f:{c.instructions+=2;NFSU2_TR(0x73ee3f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee40:{NFSU2_TR(0x73ee40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee41:L73ee41:{c.instructions+=4;NFSU2_TR(0x73ee41);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ee44:{NFSU2_TR(0x73ee44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee45:{NFSU2_TR(0x73ee45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee46:{NFSU2_TR(0x73ee46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ee4bull));
TAIL_STATIC(0x73d8e0u,73d);
}
B73ee4b:L73ee4b:{c.instructions+=3;NFSU2_TR(0x73ee4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73ee4e:{NFSU2_TR(0x73ee4e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ee50:{NFSU2_TR(0x73ee50);
if(r1(R+518)){{goto L73ee8e;}}
}
B73ee52:L73ee52:{c.instructions+=3;NFSU2_TR(0x73ee52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ee56:{NFSU2_TR(0x73ee56);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ee58:{NFSU2_TR(0x73ee58);
if(r1(R+518)){{goto L73ee60;}}
}
B73ee5a:L73ee5a:{c.instructions+=2;NFSU2_TR(0x73ee5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B73ee5e:{NFSU2_TR(0x73ee5e);
if(r1(R+518)){{goto L73ee8e;}}
}
B73ee60:L73ee60:{c.instructions+=4;NFSU2_TR(0x73ee60);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73ee62:{NFSU2_TR(0x73ee62);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ee65:{NFSU2_TR(0x73ee65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73ee68:{NFSU2_TR(0x73ee68);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73ee88;}}
}
B73ee6a:L73ee6a:{c.instructions+=3;NFSU2_TR(0x73ee6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee6b:{NFSU2_TR(0x73ee6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee6c:{NFSU2_TR(0x73ee6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ee71ull));
TAIL_STATIC(0x73d820u,73d);
}
B73ee71:L73ee71:{c.instructions+=4;NFSU2_TR(0x73ee71);
__builtin_memmove((R+20),(R+0),4);
}
B73ee73:{NFSU2_TR(0x73ee73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73ee76:{NFSU2_TR(0x73ee76);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ee78:{NFSU2_TR(0x73ee78);
if(r1(R+518)){{goto L73ee88;}}
}
B73ee7a:L73ee7a:{c.instructions+=3;NFSU2_TR(0x73ee7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ee7d:{NFSU2_TR(0x73ee7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee7e:{NFSU2_TR(0x73ee7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ee81ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73ee81:L73ee81:{c.instructions+=2;NFSU2_TR(0x73ee81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ee82:{NFSU2_TR(0x73ee82);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ee85ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73ee85:L73ee85:{c.instructions+=1;NFSU2_TR(0x73ee85);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73ee88:L73ee88:{c.instructions+=2;NFSU2_TR(0x73ee88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ee8b:{NFSU2_TR(0x73ee8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73ee8e:L73ee8e:{c.instructions+=2;NFSU2_TR(0x73ee8e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ee8f:{NFSU2_TR(0x73ee8f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ee41u);}goto L73ee41;}}
}
B73ee91:L73ee91:{c.instructions+=2;NFSU2_TR(0x73ee91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73ee92:{NFSU2_TR(0x73ee92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73ee93:L73ee93:{c.instructions+=1;NFSU2_TR(0x73ee93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ee94:L73ee94:{c.instructions+=2;NFSU2_TR(0x73ee94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73ee95:{NFSU2_TR(0x73ee95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eea0:L73eea0:{c.instructions+=7;NFSU2_TR(0x73eea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73eea1:{NFSU2_TR(0x73eea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73eea5:{NFSU2_TR(0x73eea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eea8:{NFSU2_TR(0x73eea8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73eea9:{NFSU2_TR(0x73eea9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73eeaa:{NFSU2_TR(0x73eeaa);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73eeac:{NFSU2_TR(0x73eeac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73eeb1ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73eeb1:L73eeb1:{c.instructions+=3;NFSU2_TR(0x73eeb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73eeb4:{NFSU2_TR(0x73eeb4);
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
B73eeb6:{NFSU2_TR(0x73eeb6);
if(r1(R+518)){{goto L73eed7;}}
}
B73eeb8:L73eeb8:{c.instructions+=5;NFSU2_TR(0x73eeb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73eebc:{NFSU2_TR(0x73eebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73eebf:{NFSU2_TR(0x73eebf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73eec0:{NFSU2_TR(0x73eec0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73eec1:{NFSU2_TR(0x73eec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73eec6ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B73eec6:L73eec6:{c.instructions+=3;NFSU2_TR(0x73eec6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73eec9:{NFSU2_TR(0x73eec9);
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
B73eecb:{NFSU2_TR(0x73eecb);
if(r1(R+518)){{goto L73eed7;}}
}
B73eecd:L73eecd:{c.instructions+=3;NFSU2_TR(0x73eecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eed3:{NFSU2_TR(0x73eed3);
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
B73eed5:{NFSU2_TR(0x73eed5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73eed9;}}
}
B73eed7:L73eed7:{c.instructions+=1;NFSU2_TR(0x73eed7);
__builtin_memmove((R+0),(R+28),4);
}
B73eed9:L73eed9:{c.instructions+=3;NFSU2_TR(0x73eed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73eeda:{NFSU2_TR(0x73eeda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73eedb:{NFSU2_TR(0x73eedb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eee0:L73eee0:{c.instructions+=7;NFSU2_TR(0x73eee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73eee1:{NFSU2_TR(0x73eee1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73eee5:{NFSU2_TR(0x73eee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eee8:{NFSU2_TR(0x73eee8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73eee9:{NFSU2_TR(0x73eee9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73eeea:{NFSU2_TR(0x73eeea);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73eeec:{NFSU2_TR(0x73eeec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73eef1ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73eef1:L73eef1:{c.instructions+=3;NFSU2_TR(0x73eef1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73eef4:{NFSU2_TR(0x73eef4);
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
B73eef6:{NFSU2_TR(0x73eef6);
if(r1(R+518)){{goto L73ef20;}}
}
B73eef8:L73eef8:{c.instructions+=5;NFSU2_TR(0x73eef8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73eefc:{NFSU2_TR(0x73eefc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73eeff:{NFSU2_TR(0x73eeff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ef00:{NFSU2_TR(0x73ef00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ef01:{NFSU2_TR(0x73ef01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ef06ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73ef06:L73ef06:{c.instructions+=3;NFSU2_TR(0x73ef06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73ef09:{NFSU2_TR(0x73ef09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ef0a:{NFSU2_TR(0x73ef0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ef0full));
TAIL_STATIC(0x73d8e0u,73d);
}
B73ef0f:L73ef0f:{c.instructions+=3;NFSU2_TR(0x73ef0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73ef12:{NFSU2_TR(0x73ef12);
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
B73ef14:{NFSU2_TR(0x73ef14);
if(r1(R+518)){{goto L73ef20;}}
}
B73ef16:L73ef16:{c.instructions+=3;NFSU2_TR(0x73ef16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ef1c:{NFSU2_TR(0x73ef1c);
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
B73ef1e:{NFSU2_TR(0x73ef1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73ef22;}}
}
B73ef20:L73ef20:{c.instructions+=1;NFSU2_TR(0x73ef20);
__builtin_memmove((R+0),(R+28),4);
}
B73ef22:L73ef22:{c.instructions+=3;NFSU2_TR(0x73ef22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73ef23:{NFSU2_TR(0x73ef23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ef24:{NFSU2_TR(0x73ef24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ef30:L73ef30:{c.instructions+=7;NFSU2_TR(0x73ef30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ef31:{NFSU2_TR(0x73ef31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73ef35:{NFSU2_TR(0x73ef35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ef38:{NFSU2_TR(0x73ef38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ef39:{NFSU2_TR(0x73ef39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ef3a:{NFSU2_TR(0x73ef3a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ef3c:{NFSU2_TR(0x73ef3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ef41ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73ef41:L73ef41:{c.instructions+=3;NFSU2_TR(0x73ef41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73ef44:{NFSU2_TR(0x73ef44);
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
B73ef46:{NFSU2_TR(0x73ef46);
if(r1(R+518)){{goto L73ef5f;}}
}
B73ef48:L73ef48:{c.instructions+=3;NFSU2_TR(0x73ef48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ef4b:{NFSU2_TR(0x73ef4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ef4c:{NFSU2_TR(0x73ef4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ef51ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73ef51:L73ef51:{c.instructions+=5;NFSU2_TR(0x73ef51);
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
B73ef54:{NFSU2_TR(0x73ef54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73ef55:{NFSU2_TR(0x73ef55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ef56:{NFSU2_TR(0x73ef56);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ef5a:{NFSU2_TR(0x73ef5a);
TAIL_STATIC(0x73d8c0u,73d);
}
B73ef5f:L73ef5f:{c.instructions+=4;NFSU2_TR(0x73ef5f);
__builtin_memmove((R+0),(R+28),4);
}
B73ef61:{NFSU2_TR(0x73ef61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73ef62:{NFSU2_TR(0x73ef62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ef63:{NFSU2_TR(0x73ef63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ef70:L73ef70:{c.instructions+=4;NFSU2_TR(0x73ef70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ef71:{NFSU2_TR(0x73ef71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73ef75:{NFSU2_TR(0x73ef75);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B73ef79:{NFSU2_TR(0x73ef79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73ef82;}}
}
B73ef7b:L73ef7b:{c.instructions+=3;NFSU2_TR(0x73ef7b);
w4(R+0,u32(0xffffff92ull));
}
B73ef80:{NFSU2_TR(0x73ef80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ef81:{NFSU2_TR(0x73ef81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ef82:L73ef82:{c.instructions+=3;NFSU2_TR(0x73ef82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ef85:{NFSU2_TR(0x73ef85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ef86:{NFSU2_TR(0x73ef86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ef8bull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73ef8b:L73ef8b:{c.instructions+=3;NFSU2_TR(0x73ef8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73ef8e:{NFSU2_TR(0x73ef8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ef90:{NFSU2_TR(0x73ef90);
if(r1(R+518)){{goto L73efea;}}
}
B73ef92:L73ef92:{c.instructions+=5;NFSU2_TR(0x73ef92);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ef96:{NFSU2_TR(0x73ef96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73ef99:{NFSU2_TR(0x73ef99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ef9a:{NFSU2_TR(0x73ef9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ef9b:{NFSU2_TR(0x73ef9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73efa0ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B73efa0:L73efa0:{c.instructions+=3;NFSU2_TR(0x73efa0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73efa3:{NFSU2_TR(0x73efa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73efa5:{NFSU2_TR(0x73efa5);
if(r1(R+518)){{goto L73efea;}}
}
B73efa7:L73efa7:{c.instructions+=3;NFSU2_TR(0x73efa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73efad:{NFSU2_TR(0x73efad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73efaf:{NFSU2_TR(0x73efaf);
if(r1(R+518)){{goto L73efea;}}
}
B73efb1:L73efb1:{c.instructions+=12;NFSU2_TR(0x73efb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73efb5:{NFSU2_TR(0x73efb5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73efb7:{NFSU2_TR(0x73efb7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B73efbb:{NFSU2_TR(0x73efbb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73efbc:{NFSU2_TR(0x73efbc);
__builtin_memmove((R+28),(R+8),4);
}
B73efbe:{NFSU2_TR(0x73efbe);
w4(R+28,u32(~u32(r4(R+28))));
}
B73efc0:{NFSU2_TR(0x73efc0);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B73efc2:{NFSU2_TR(0x73efc2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73efc6:{NFSU2_TR(0x73efc6);
w4(R+0,u32(r2(R+4)));
}
B73efc9:{NFSU2_TR(0x73efc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73efcb:{NFSU2_TR(0x73efcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73efcc:{NFSU2_TR(0x73efcc);
if(r1(R+518)){{goto L73efea;}}
}
B73efce:L73efce:{c.instructions+=4;NFSU2_TR(0x73efce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73efd1:{NFSU2_TR(0x73efd1);
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
B73efd3:{NFSU2_TR(0x73efd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73efda:{NFSU2_TR(0x73efda);
if(r1(R+518)){{goto L73efea;}}
}
B73efdc:L73efdc:{c.instructions+=6;NFSU2_TR(0x73efdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73efdf:{NFSU2_TR(0x73efdf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73efe0:{NFSU2_TR(0x73efe0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73efe2:{NFSU2_TR(0x73efe2);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73efe4:{NFSU2_TR(0x73efe4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73efe5:{NFSU2_TR(0x73efe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73efe7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73efe7:L73efe7:{c.instructions+=1;NFSU2_TR(0x73efe7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73efea:L73efea:{c.instructions+=3;NFSU2_TR(0x73efea);
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
B73efec:{NFSU2_TR(0x73efec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73efed:{NFSU2_TR(0x73efed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73eff0:L73eff0:{c.instructions+=5;NFSU2_TR(0x73eff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73eff1:{NFSU2_TR(0x73eff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73eff5:{NFSU2_TR(0x73eff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73eff8:{NFSU2_TR(0x73eff8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73eff9:{NFSU2_TR(0x73eff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73effeull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73effe:L73effe:{c.instructions+=1;NFSU2_TR(0x73effe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
TAIL_STATIC(0x73f001u,73f);
}
XIT:NFSU2_TR_EXIT(0x73e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
