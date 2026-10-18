#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_72d(u8* __restrict R,Cpu& c);
u32 body_72f(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x72e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x72e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_72e(u8* __restrict R,Cpu& c);
u32 page_72e(Cpu& c){return body_72e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_72e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x72e005:goto L72e005;
case 0x72e007:c.instructions+=23;goto B72e007;
case 0x72e00a:c.instructions+=22;goto B72e00a;
case 0x72e010:c.instructions+=21;goto B72e010;
case 0x72e013:c.instructions+=20;goto B72e013;
case 0x72e016:c.instructions+=19;goto B72e016;
case 0x72e018:c.instructions+=18;goto B72e018;
case 0x72e01b:c.instructions+=17;goto B72e01b;
case 0x72e01d:c.instructions+=16;goto B72e01d;
case 0x72e023:c.instructions+=15;goto B72e023;
case 0x72e029:c.instructions+=14;goto B72e029;
case 0x72e02b:c.instructions+=13;goto B72e02b;
case 0x72e02d:c.instructions+=12;goto B72e02d;
case 0x72e02f:c.instructions+=11;goto B72e02f;
case 0x72e032:c.instructions+=10;goto B72e032;
case 0x72e038:c.instructions+=9;goto B72e038;
case 0x72e03a:c.instructions+=8;goto B72e03a;
case 0x72e040:c.instructions+=7;goto B72e040;
case 0x72e046:c.instructions+=6;goto B72e046;
case 0x72e049:c.instructions+=5;goto B72e049;
case 0x72e04c:c.instructions+=4;goto B72e04c;
case 0x72e04e:c.instructions+=3;goto B72e04e;
case 0x72e050:c.instructions+=2;goto B72e050;
case 0x72e053:c.instructions+=1;goto B72e053;
case 0x72e055:goto L72e055;
case 0x72e057:c.instructions+=2;goto B72e057;
case 0x72e058:c.instructions+=1;goto B72e058;
case 0x72e059:goto L72e059;
case 0x72e05a:c.instructions+=4;goto B72e05a;
case 0x72e05c:c.instructions+=3;goto B72e05c;
case 0x72e05f:c.instructions+=2;goto B72e05f;
case 0x72e061:c.instructions+=1;goto B72e061;
case 0x72e063:goto L72e063;
case 0x72e065:goto L72e065;
case 0x72e068:c.instructions+=5;goto B72e068;
case 0x72e06b:c.instructions+=4;goto B72e06b;
case 0x72e06e:c.instructions+=3;goto B72e06e;
case 0x72e070:c.instructions+=2;goto B72e070;
case 0x72e077:c.instructions+=1;goto B72e077;
case 0x72e079:goto L72e079;
case 0x72e07b:c.instructions+=1;goto B72e07b;
case 0x72e07d:goto L72e07d;
case 0x72e080:c.instructions+=6;goto B72e080;
case 0x72e081:c.instructions+=5;goto B72e081;
case 0x72e083:c.instructions+=4;goto B72e083;
case 0x72e086:c.instructions+=3;goto B72e086;
case 0x72e088:c.instructions+=2;goto B72e088;
case 0x72e08f:c.instructions+=1;goto B72e08f;
case 0x72e091:goto L72e091;
case 0x72e094:c.instructions+=11;goto B72e094;
case 0x72e096:c.instructions+=10;goto B72e096;
case 0x72e099:c.instructions+=9;goto B72e099;
case 0x72e09c:c.instructions+=8;goto B72e09c;
case 0x72e09d:c.instructions+=7;goto B72e09d;
case 0x72e0a0:c.instructions+=6;goto B72e0a0;
case 0x72e0a3:c.instructions+=5;goto B72e0a3;
case 0x72e0a5:c.instructions+=4;goto B72e0a5;
case 0x72e0a7:c.instructions+=3;goto B72e0a7;
case 0x72e0ae:c.instructions+=2;goto B72e0ae;
case 0x72e0af:c.instructions+=1;goto B72e0af;
case 0x72e0b6:goto L72e0b6;
case 0x72e0b7:c.instructions+=1;goto B72e0b7;
case 0x72e0ba:goto L72e0ba;
case 0x72e0bb:c.instructions+=3;goto B72e0bb;
case 0x72e0bd:c.instructions+=2;goto B72e0bd;
case 0x72e0c2:c.instructions+=1;goto B72e0c2;
case 0x72e0c7:goto L72e0c7;
case 0x72e0c8:c.instructions+=8;goto B72e0c8;
case 0x72e0c9:c.instructions+=7;goto B72e0c9;
case 0x72e0cb:c.instructions+=6;goto B72e0cb;
case 0x72e0ce:c.instructions+=5;goto B72e0ce;
case 0x72e0d0:c.instructions+=4;goto B72e0d0;
case 0x72e0d1:c.instructions+=3;goto B72e0d1;
case 0x72e0d3:c.instructions+=2;goto B72e0d3;
case 0x72e0d5:c.instructions+=1;goto B72e0d5;
case 0x72e0d7:goto L72e0d7;
case 0x72e0da:c.instructions+=1;goto B72e0da;
case 0x72e0dc:goto L72e0dc;
case 0x72e0de:c.instructions+=1;goto B72e0de;
case 0x72e0e0:goto L72e0e0;
case 0x72e0e2:goto L72e0e2;
case 0x72e0e4:c.instructions+=1;goto B72e0e4;
case 0x72e0e6:goto L72e0e6;
case 0x72e0ea:c.instructions+=2;goto B72e0ea;
case 0x72e0ed:c.instructions+=1;goto B72e0ed;
case 0x72e0ef:goto L72e0ef;
case 0x72e0f3:goto L72e0f3;
case 0x72e0f5:c.instructions+=1;goto B72e0f5;
case 0x72e0fb:goto L72e0fb;
case 0x72e0fe:c.instructions+=12;goto B72e0fe;
case 0x72e101:c.instructions+=11;goto B72e101;
case 0x72e105:c.instructions+=10;goto B72e105;
case 0x72e107:c.instructions+=9;goto B72e107;
case 0x72e10a:c.instructions+=8;goto B72e10a;
case 0x72e10b:c.instructions+=7;goto B72e10b;
case 0x72e10d:c.instructions+=6;goto B72e10d;
case 0x72e113:c.instructions+=5;goto B72e113;
case 0x72e115:c.instructions+=4;goto B72e115;
case 0x72e119:c.instructions+=3;goto B72e119;
case 0x72e11c:c.instructions+=2;goto B72e11c;
case 0x72e121:c.instructions+=1;goto B72e121;
case 0x72e122:goto L72e122;
case 0x72e124:goto L72e124;
case 0x72e12a:goto L72e12a;
case 0x72e12e:c.instructions+=1;goto B72e12e;
case 0x72e134:goto L72e134;
case 0x72e138:c.instructions+=3;goto B72e138;
case 0x72e13b:c.instructions+=2;goto B72e13b;
case 0x72e13f:c.instructions+=1;goto B72e13f;
case 0x72e145:goto L72e145;
case 0x72e148:c.instructions+=11;goto B72e148;
case 0x72e14c:c.instructions+=10;goto B72e14c;
case 0x72e14f:c.instructions+=9;goto B72e14f;
case 0x72e156:c.instructions+=8;goto B72e156;
case 0x72e159:c.instructions+=7;goto B72e159;
case 0x72e160:c.instructions+=6;goto B72e160;
case 0x72e167:c.instructions+=5;goto B72e167;
case 0x72e16a:c.instructions+=4;goto B72e16a;
case 0x72e16d:c.instructions+=3;goto B72e16d;
case 0x72e170:c.instructions+=2;goto B72e170;
case 0x72e173:c.instructions+=1;goto B72e173;
case 0x72e17a:goto L72e17a;
case 0x72e17d:c.instructions+=6;goto B72e17d;
case 0x72e17f:c.instructions+=5;goto B72e17f;
case 0x72e180:c.instructions+=4;goto B72e180;
case 0x72e182:c.instructions+=3;goto B72e182;
case 0x72e183:c.instructions+=2;goto B72e183;
case 0x72e184:c.instructions+=1;goto B72e184;
case 0x72e187:goto L72e187;
case 0x72e18a:c.instructions+=10;goto B72e18a;
case 0x72e18d:c.instructions+=9;goto B72e18d;
case 0x72e190:c.instructions+=8;goto B72e190;
case 0x72e197:c.instructions+=7;goto B72e197;
case 0x72e19e:c.instructions+=6;goto B72e19e;
case 0x72e1a0:c.instructions+=5;goto B72e1a0;
case 0x72e1a3:c.instructions+=4;goto B72e1a3;
case 0x72e1a5:c.instructions+=3;goto B72e1a5;
case 0x72e1a8:c.instructions+=2;goto B72e1a8;
case 0x72e1ac:c.instructions+=1;goto B72e1ac;
case 0x72e1ae:goto L72e1ae;
case 0x72e1b1:c.instructions+=1;goto B72e1b1;
case 0x72e1b8:goto L72e1b8;
case 0x72e1be:c.instructions+=5;goto B72e1be;
case 0x72e1c0:c.instructions+=4;goto B72e1c0;
case 0x72e1c2:c.instructions+=3;goto B72e1c2;
case 0x72e1c4:c.instructions+=2;goto B72e1c4;
case 0x72e1c7:c.instructions+=1;goto B72e1c7;
case 0x72e1c9:goto L72e1c9;
case 0x72e1cb:c.instructions+=3;goto B72e1cb;
case 0x72e1cc:c.instructions+=2;goto B72e1cc;
case 0x72e1ce:c.instructions+=1;goto B72e1ce;
case 0x72e1d0:goto L72e1d0;
case 0x72e1d1:c.instructions+=3;goto B72e1d1;
case 0x72e1d4:c.instructions+=2;goto B72e1d4;
case 0x72e1d6:c.instructions+=1;goto B72e1d6;
case 0x72e1d8:goto L72e1d8;
case 0x72e1d9:c.instructions+=2;goto B72e1d9;
case 0x72e1dc:c.instructions+=1;goto B72e1dc;
case 0x72e1de:goto L72e1de;
case 0x72e1e1:c.instructions+=3;goto B72e1e1;
case 0x72e1e4:c.instructions+=2;goto B72e1e4;
case 0x72e1e7:c.instructions+=1;goto B72e1e7;
case 0x72e1e9:goto L72e1e9;
case 0x72e1ec:goto L72e1ec;
case 0x72e1ef:c.instructions+=1;goto B72e1ef;
case 0x72e1f5:goto L72e1f5;
case 0x72e1f9:c.instructions+=4;goto B72e1f9;
case 0x72e1fc:c.instructions+=3;goto B72e1fc;
case 0x72e1ff:c.instructions+=2;goto B72e1ff;
case 0x72e206:c.instructions+=1;goto B72e206;
case 0x72e209:goto L72e209;
case 0x72e20c:c.instructions+=9;goto B72e20c;
case 0x72e210:c.instructions+=8;goto B72e210;
case 0x72e213:c.instructions+=7;goto B72e213;
case 0x72e215:c.instructions+=6;goto B72e215;
case 0x72e217:c.instructions+=5;goto B72e217;
case 0x72e21b:c.instructions+=4;goto B72e21b;
case 0x72e21e:c.instructions+=3;goto B72e21e;
case 0x72e220:c.instructions+=2;goto B72e220;
case 0x72e222:c.instructions+=1;goto B72e222;
case 0x72e224:goto L72e224;
case 0x72e227:c.instructions+=6;goto B72e227;
case 0x72e22a:c.instructions+=5;goto B72e22a;
case 0x72e22c:c.instructions+=4;goto B72e22c;
case 0x72e234:c.instructions+=3;goto B72e234;
case 0x72e23b:c.instructions+=2;goto B72e23b;
case 0x72e23e:c.instructions+=1;goto B72e23e;
case 0x72e241:goto L72e241;
case 0x72e243:goto L72e243;
case 0x72e247:c.instructions+=1;goto B72e247;
case 0x72e249:goto L72e249;
case 0x72e24d:c.instructions+=1;goto B72e24d;
case 0x72e24f:goto L72e24f;
case 0x72e255:c.instructions+=6;goto B72e255;
case 0x72e256:c.instructions+=5;goto B72e256;
case 0x72e257:c.instructions+=4;goto B72e257;
case 0x72e25a:c.instructions+=3;goto B72e25a;
case 0x72e25c:c.instructions+=2;goto B72e25c;
case 0x72e25f:c.instructions+=1;goto B72e25f;
case 0x72e264:goto L72e264;
case 0x72e266:goto L72e266;
case 0x72e269:c.instructions+=2;goto B72e269;
case 0x72e270:c.instructions+=1;goto B72e270;
case 0x72e277:goto L72e277;
case 0x72e278:c.instructions+=2;goto B72e278;
case 0x72e27b:c.instructions+=1;goto B72e27b;
case 0x72e27d:goto L72e27d;
case 0x72e280:c.instructions+=3;goto B72e280;
case 0x72e283:c.instructions+=2;goto B72e283;
case 0x72e287:c.instructions+=1;goto B72e287;
case 0x72e289:goto L72e289;
case 0x72e28c:c.instructions+=14;goto B72e28c;
case 0x72e28f:c.instructions+=13;goto B72e28f;
case 0x72e292:c.instructions+=12;goto B72e292;
case 0x72e294:c.instructions+=11;goto B72e294;
case 0x72e296:c.instructions+=10;goto B72e296;
case 0x72e29a:c.instructions+=9;goto B72e29a;
case 0x72e29d:c.instructions+=8;goto B72e29d;
case 0x72e29f:c.instructions+=7;goto B72e29f;
case 0x72e2a1:c.instructions+=6;goto B72e2a1;
case 0x72e2a3:c.instructions+=5;goto B72e2a3;
case 0x72e2a7:c.instructions+=4;goto B72e2a7;
case 0x72e2aa:c.instructions+=3;goto B72e2aa;
case 0x72e2ac:c.instructions+=2;goto B72e2ac;
case 0x72e2ae:c.instructions+=1;goto B72e2ae;
case 0x72e2b0:goto L72e2b0;
case 0x72e2b2:c.instructions+=3;goto B72e2b2;
case 0x72e2b5:c.instructions+=2;goto B72e2b5;
case 0x72e2b8:c.instructions+=1;goto B72e2b8;
case 0x72e2bb:goto L72e2bb;
case 0x72e2bd:c.instructions+=3;goto B72e2bd;
case 0x72e2c4:c.instructions+=2;goto B72e2c4;
case 0x72e2cb:c.instructions+=1;goto B72e2cb;
case 0x72e2cd:goto L72e2cd;
case 0x72e2d4:c.instructions+=4;goto B72e2d4;
case 0x72e2db:c.instructions+=3;goto B72e2db;
case 0x72e2e2:c.instructions+=2;goto B72e2e2;
case 0x72e2e9:c.instructions+=1;goto B72e2e9;
case 0x72e2eb:goto L72e2eb;
case 0x72e2f2:c.instructions+=1;goto B72e2f2;
case 0x72e2f9:goto L72e2f9;
case 0x72e2fc:c.instructions+=2;goto B72e2fc;
case 0x72e2fd:c.instructions+=1;goto B72e2fd;
case 0x72e2ff:goto L72e2ff;
case 0x72e303:c.instructions+=4;goto B72e303;
case 0x72e307:c.instructions+=3;goto B72e307;
case 0x72e30a:c.instructions+=2;goto B72e30a;
case 0x72e30d:c.instructions+=1;goto B72e30d;
case 0x72e313:goto L72e313;
case 0x72e317:c.instructions+=1;goto B72e317;
case 0x72e31d:goto L72e31d;
case 0x72e321:c.instructions+=5;goto B72e321;
case 0x72e323:c.instructions+=4;goto B72e323;
case 0x72e324:c.instructions+=3;goto B72e324;
case 0x72e326:c.instructions+=2;goto B72e326;
case 0x72e327:c.instructions+=1;goto B72e327;
case 0x72e32c:goto L72e32c;
case 0x72e332:c.instructions+=7;goto B72e332;
case 0x72e335:c.instructions+=6;goto B72e335;
case 0x72e338:c.instructions+=5;goto B72e338;
case 0x72e33b:c.instructions+=4;goto B72e33b;
case 0x72e33d:c.instructions+=3;goto B72e33d;
case 0x72e33f:c.instructions+=2;goto B72e33f;
case 0x72e342:c.instructions+=1;goto B72e342;
case 0x72e344:goto L72e344;
case 0x72e345:c.instructions+=1;goto B72e345;
case 0x72e347:goto L72e347;
case 0x72e349:c.instructions+=3;goto B72e349;
case 0x72e34a:c.instructions+=2;goto B72e34a;
case 0x72e34d:c.instructions+=1;goto B72e34d;
case 0x72e34e:goto L72e34e;
case 0x72e354:c.instructions+=1;goto B72e354;
case 0x72e356:goto L72e356;
case 0x72e359:goto L72e359;
case 0x72e35d:c.instructions+=6;goto B72e35d;
case 0x72e35f:c.instructions+=5;goto B72e35f;
case 0x72e362:c.instructions+=4;goto B72e362;
case 0x72e36a:c.instructions+=3;goto B72e36a;
case 0x72e36c:c.instructions+=2;goto B72e36c;
case 0x72e36e:c.instructions+=1;goto B72e36e;
case 0x72e370:goto L72e370;
case 0x72e373:c.instructions+=1;goto B72e373;
case 0x72e379:goto L72e379;
case 0x72e37a:c.instructions+=5;goto B72e37a;
case 0x72e37b:c.instructions+=4;goto B72e37b;
case 0x72e37c:c.instructions+=3;goto B72e37c;
case 0x72e37f:c.instructions+=2;goto B72e37f;
case 0x72e381:c.instructions+=1;goto B72e381;
case 0x72e383:goto L72e383;
case 0x72e385:c.instructions+=5;goto B72e385;
case 0x72e388:c.instructions+=4;goto B72e388;
case 0x72e390:c.instructions+=3;goto B72e390;
case 0x72e393:c.instructions+=2;goto B72e393;
case 0x72e396:c.instructions+=1;goto B72e396;
case 0x72e39c:goto L72e39c;
case 0x72e3a0:c.instructions+=5;goto B72e3a0;
case 0x72e3a3:c.instructions+=4;goto B72e3a3;
case 0x72e3a5:c.instructions+=3;goto B72e3a5;
case 0x72e3ac:c.instructions+=2;goto B72e3ac;
case 0x72e3af:c.instructions+=1;goto B72e3af;
case 0x72e3b1:goto L72e3b1;
case 0x72e3b4:c.instructions+=2;goto B72e3b4;
case 0x72e3b7:c.instructions+=1;goto B72e3b7;
case 0x72e3b9:goto L72e3b9;
case 0x72e3bc:goto L72e3bc;
case 0x72e3c0:c.instructions+=4;goto B72e3c0;
case 0x72e3c3:c.instructions+=3;goto B72e3c3;
case 0x72e3c5:c.instructions+=2;goto B72e3c5;
case 0x72e3c7:c.instructions+=1;goto B72e3c7;
case 0x72e3c9:goto L72e3c9;
case 0x72e3cc:c.instructions+=5;goto B72e3cc;
case 0x72e3d4:c.instructions+=4;goto B72e3d4;
case 0x72e3d7:c.instructions+=3;goto B72e3d7;
case 0x72e3de:c.instructions+=2;goto B72e3de;
case 0x72e3e0:c.instructions+=1;goto B72e3e0;
case 0x72e3e3:goto L72e3e3;
case 0x72e3e5:goto L72e3e5;
case 0x72e3e8:c.instructions+=1;goto B72e3e8;
case 0x72e3ea:goto L72e3ea;
case 0x72e3ee:c.instructions+=1;goto B72e3ee;
case 0x72e3f0:goto L72e3f0;
case 0x72e3f6:c.instructions+=6;goto B72e3f6;
case 0x72e3f7:c.instructions+=5;goto B72e3f7;
case 0x72e3fa:c.instructions+=4;goto B72e3fa;
case 0x72e3fc:c.instructions+=3;goto B72e3fc;
case 0x72e3ff:c.instructions+=2;goto B72e3ff;
case 0x72e400:c.instructions+=1;goto B72e400;
case 0x72e405:goto L72e405;
case 0x72e407:goto L72e407;
case 0x72e40e:c.instructions+=2;goto B72e40e;
case 0x72e411:c.instructions+=1;goto B72e411;
case 0x72e418:goto L72e418;
case 0x72e41b:c.instructions+=2;goto B72e41b;
case 0x72e41e:c.instructions+=1;goto B72e41e;
case 0x72e420:goto L72e420;
case 0x72e423:c.instructions+=3;goto B72e423;
case 0x72e427:c.instructions+=2;goto B72e427;
case 0x72e42b:c.instructions+=1;goto B72e42b;
case 0x72e42d:goto L72e42d;
case 0x72e432:goto L72e432;
case 0x72e435:c.instructions+=13;goto B72e435;
case 0x72e439:c.instructions+=12;goto B72e439;
case 0x72e43c:c.instructions+=11;goto B72e43c;
case 0x72e443:c.instructions+=10;goto B72e443;
case 0x72e446:c.instructions+=9;goto B72e446;
case 0x72e44d:c.instructions+=8;goto B72e44d;
case 0x72e454:c.instructions+=7;goto B72e454;
case 0x72e456:c.instructions+=6;goto B72e456;
case 0x72e459:c.instructions+=5;goto B72e459;
case 0x72e45c:c.instructions+=4;goto B72e45c;
case 0x72e45f:c.instructions+=3;goto B72e45f;
case 0x72e462:c.instructions+=2;goto B72e462;
case 0x72e465:c.instructions+=1;goto B72e465;
case 0x72e46c:goto L72e46c;
case 0x72e46f:c.instructions+=5;goto B72e46f;
case 0x72e472:c.instructions+=4;goto B72e472;
case 0x72e474:c.instructions+=3;goto B72e474;
case 0x72e475:c.instructions+=2;goto B72e475;
case 0x72e476:c.instructions+=1;goto B72e476;
case 0x72e479:goto L72e479;
case 0x72e47c:c.instructions+=10;goto B72e47c;
case 0x72e47f:c.instructions+=9;goto B72e47f;
case 0x72e482:c.instructions+=8;goto B72e482;
case 0x72e489:c.instructions+=7;goto B72e489;
case 0x72e490:c.instructions+=6;goto B72e490;
case 0x72e492:c.instructions+=5;goto B72e492;
case 0x72e495:c.instructions+=4;goto B72e495;
case 0x72e497:c.instructions+=3;goto B72e497;
case 0x72e49a:c.instructions+=2;goto B72e49a;
case 0x72e49e:c.instructions+=1;goto B72e49e;
case 0x72e4a0:goto L72e4a0;
case 0x72e4a3:c.instructions+=1;goto B72e4a3;
case 0x72e4aa:goto L72e4aa;
case 0x72e4b0:c.instructions+=5;goto B72e4b0;
case 0x72e4b2:c.instructions+=4;goto B72e4b2;
case 0x72e4b4:c.instructions+=3;goto B72e4b4;
case 0x72e4b6:c.instructions+=2;goto B72e4b6;
case 0x72e4b9:c.instructions+=1;goto B72e4b9;
case 0x72e4bb:goto L72e4bb;
case 0x72e4bd:c.instructions+=3;goto B72e4bd;
case 0x72e4be:c.instructions+=2;goto B72e4be;
case 0x72e4c0:c.instructions+=1;goto B72e4c0;
case 0x72e4c2:goto L72e4c2;
case 0x72e4c3:c.instructions+=3;goto B72e4c3;
case 0x72e4c6:c.instructions+=2;goto B72e4c6;
case 0x72e4c8:c.instructions+=1;goto B72e4c8;
case 0x72e4ca:goto L72e4ca;
case 0x72e4cb:c.instructions+=1;goto B72e4cb;
case 0x72e4cd:goto L72e4cd;
case 0x72e4d0:c.instructions+=3;goto B72e4d0;
case 0x72e4d3:c.instructions+=2;goto B72e4d3;
case 0x72e4d6:c.instructions+=1;goto B72e4d6;
case 0x72e4dc:goto L72e4dc;
case 0x72e4e0:c.instructions+=4;goto B72e4e0;
case 0x72e4e3:c.instructions+=3;goto B72e4e3;
case 0x72e4e6:c.instructions+=2;goto B72e4e6;
case 0x72e4ed:c.instructions+=1;goto B72e4ed;
case 0x72e4f0:goto L72e4f0;
case 0x72e4f3:c.instructions+=9;goto B72e4f3;
case 0x72e4f7:c.instructions+=8;goto B72e4f7;
case 0x72e4fa:c.instructions+=7;goto B72e4fa;
case 0x72e4fd:c.instructions+=6;goto B72e4fd;
case 0x72e4ff:c.instructions+=5;goto B72e4ff;
case 0x72e502:c.instructions+=4;goto B72e502;
case 0x72e505:c.instructions+=3;goto B72e505;
case 0x72e507:c.instructions+=2;goto B72e507;
case 0x72e509:c.instructions+=1;goto B72e509;
case 0x72e50b:goto L72e50b;
case 0x72e50e:c.instructions+=6;goto B72e50e;
case 0x72e511:c.instructions+=5;goto B72e511;
case 0x72e513:c.instructions+=4;goto B72e513;
case 0x72e51b:c.instructions+=3;goto B72e51b;
case 0x72e522:c.instructions+=2;goto B72e522;
case 0x72e525:c.instructions+=1;goto B72e525;
case 0x72e528:goto L72e528;
case 0x72e52a:goto L72e52a;
case 0x72e52e:c.instructions+=1;goto B72e52e;
case 0x72e530:goto L72e530;
case 0x72e534:c.instructions+=1;goto B72e534;
case 0x72e536:goto L72e536;
case 0x72e53c:c.instructions+=6;goto B72e53c;
case 0x72e53d:c.instructions+=5;goto B72e53d;
case 0x72e53e:c.instructions+=4;goto B72e53e;
case 0x72e541:c.instructions+=3;goto B72e541;
case 0x72e543:c.instructions+=2;goto B72e543;
case 0x72e546:c.instructions+=1;goto B72e546;
case 0x72e54b:goto L72e54b;
case 0x72e54d:goto L72e54d;
case 0x72e550:c.instructions+=2;goto B72e550;
case 0x72e557:c.instructions+=1;goto B72e557;
case 0x72e55e:goto L72e55e;
case 0x72e55f:c.instructions+=2;goto B72e55f;
case 0x72e562:c.instructions+=1;goto B72e562;
case 0x72e564:goto L72e564;
case 0x72e567:c.instructions+=3;goto B72e567;
case 0x72e56a:c.instructions+=2;goto B72e56a;
case 0x72e56e:c.instructions+=1;goto B72e56e;
case 0x72e570:goto L72e570;
case 0x72e573:c.instructions+=11;goto B72e573;
case 0x72e576:c.instructions+=10;goto B72e576;
case 0x72e579:c.instructions+=9;goto B72e579;
case 0x72e57c:c.instructions+=8;goto B72e57c;
case 0x72e57e:c.instructions+=7;goto B72e57e;
case 0x72e581:c.instructions+=6;goto B72e581;
case 0x72e584:c.instructions+=5;goto B72e584;
case 0x72e587:c.instructions+=4;goto B72e587;
case 0x72e58a:c.instructions+=3;goto B72e58a;
case 0x72e58c:c.instructions+=2;goto B72e58c;
case 0x72e58e:c.instructions+=1;goto B72e58e;
case 0x72e590:goto L72e590;
case 0x72e593:c.instructions+=2;goto B72e593;
case 0x72e596:c.instructions+=1;goto B72e596;
case 0x72e599:goto L72e599;
case 0x72e59b:c.instructions+=3;goto B72e59b;
case 0x72e5a2:c.instructions+=2;goto B72e5a2;
case 0x72e5a9:c.instructions+=1;goto B72e5a9;
case 0x72e5ab:goto L72e5ab;
case 0x72e5b2:c.instructions+=4;goto B72e5b2;
case 0x72e5b9:c.instructions+=3;goto B72e5b9;
case 0x72e5c0:c.instructions+=2;goto B72e5c0;
case 0x72e5c7:c.instructions+=1;goto B72e5c7;
case 0x72e5c9:goto L72e5c9;
case 0x72e5d0:c.instructions+=1;goto B72e5d0;
case 0x72e5d7:goto L72e5d7;
case 0x72e5da:c.instructions+=2;goto B72e5da;
case 0x72e5db:c.instructions+=1;goto B72e5db;
case 0x72e5dd:goto L72e5dd;
case 0x72e5e1:c.instructions+=4;goto B72e5e1;
case 0x72e5e5:c.instructions+=3;goto B72e5e5;
case 0x72e5e8:c.instructions+=2;goto B72e5e8;
case 0x72e5eb:c.instructions+=1;goto B72e5eb;
case 0x72e5f1:goto L72e5f1;
case 0x72e5f6:goto L72e5f6;
case 0x72e5f8:c.instructions+=5;goto B72e5f8;
case 0x72e5f9:c.instructions+=4;goto B72e5f9;
case 0x72e5fb:c.instructions+=3;goto B72e5fb;
case 0x72e5fc:c.instructions+=2;goto B72e5fc;
case 0x72e5ff:c.instructions+=1;goto B72e5ff;
case 0x72e604:goto L72e604;
case 0x72e60a:c.instructions+=7;goto B72e60a;
case 0x72e60d:c.instructions+=6;goto B72e60d;
case 0x72e610:c.instructions+=5;goto B72e610;
case 0x72e613:c.instructions+=4;goto B72e613;
case 0x72e615:c.instructions+=3;goto B72e615;
case 0x72e617:c.instructions+=2;goto B72e617;
case 0x72e61a:c.instructions+=1;goto B72e61a;
case 0x72e620:goto L72e620;
case 0x72e621:c.instructions+=1;goto B72e621;
case 0x72e623:goto L72e623;
case 0x72e625:c.instructions+=3;goto B72e625;
case 0x72e626:c.instructions+=2;goto B72e626;
case 0x72e629:c.instructions+=1;goto B72e629;
case 0x72e62a:goto L72e62a;
case 0x72e630:c.instructions+=1;goto B72e630;
case 0x72e632:goto L72e632;
case 0x72e635:goto L72e635;
case 0x72e639:c.instructions+=6;goto B72e639;
case 0x72e63b:c.instructions+=5;goto B72e63b;
case 0x72e63e:c.instructions+=4;goto B72e63e;
case 0x72e646:c.instructions+=3;goto B72e646;
case 0x72e648:c.instructions+=2;goto B72e648;
case 0x72e64a:c.instructions+=1;goto B72e64a;
case 0x72e64c:goto L72e64c;
case 0x72e64f:c.instructions+=1;goto B72e64f;
case 0x72e655:goto L72e655;
case 0x72e656:c.instructions+=5;goto B72e656;
case 0x72e657:c.instructions+=4;goto B72e657;
case 0x72e658:c.instructions+=3;goto B72e658;
case 0x72e65b:c.instructions+=2;goto B72e65b;
case 0x72e65d:c.instructions+=1;goto B72e65d;
case 0x72e65f:goto L72e65f;
case 0x72e661:c.instructions+=5;goto B72e661;
case 0x72e664:c.instructions+=4;goto B72e664;
case 0x72e66c:c.instructions+=3;goto B72e66c;
case 0x72e66f:c.instructions+=2;goto B72e66f;
case 0x72e672:c.instructions+=1;goto B72e672;
case 0x72e678:goto L72e678;
case 0x72e67c:c.instructions+=4;goto B72e67c;
case 0x72e67f:c.instructions+=3;goto B72e67f;
case 0x72e681:c.instructions+=2;goto B72e681;
case 0x72e688:c.instructions+=1;goto B72e688;
case 0x72e68b:goto L72e68b;
case 0x72e68e:c.instructions+=5;goto B72e68e;
case 0x72e692:c.instructions+=4;goto B72e692;
case 0x72e695:c.instructions+=3;goto B72e695;
case 0x72e697:c.instructions+=2;goto B72e697;
case 0x72e699:c.instructions+=1;goto B72e699;
case 0x72e69b:goto L72e69b;
case 0x72e69e:c.instructions+=5;goto B72e69e;
case 0x72e6a6:c.instructions+=4;goto B72e6a6;
case 0x72e6a9:c.instructions+=3;goto B72e6a9;
case 0x72e6b0:c.instructions+=2;goto B72e6b0;
case 0x72e6b2:c.instructions+=1;goto B72e6b2;
case 0x72e6b5:goto L72e6b5;
case 0x72e6b7:goto L72e6b7;
case 0x72e6ba:c.instructions+=1;goto B72e6ba;
case 0x72e6bc:goto L72e6bc;
case 0x72e6c0:c.instructions+=1;goto B72e6c0;
case 0x72e6c2:goto L72e6c2;
case 0x72e6c8:c.instructions+=6;goto B72e6c8;
case 0x72e6c9:c.instructions+=5;goto B72e6c9;
case 0x72e6cc:c.instructions+=4;goto B72e6cc;
case 0x72e6ce:c.instructions+=3;goto B72e6ce;
case 0x72e6d1:c.instructions+=2;goto B72e6d1;
case 0x72e6d2:c.instructions+=1;goto B72e6d2;
case 0x72e6d7:goto L72e6d7;
case 0x72e6d9:goto L72e6d9;
case 0x72e6dc:c.instructions+=2;goto B72e6dc;
case 0x72e6df:c.instructions+=1;goto B72e6df;
case 0x72e6e4:goto L72e6e4;
case 0x72e6eb:c.instructions+=2;goto B72e6eb;
case 0x72e6ee:c.instructions+=1;goto B72e6ee;
case 0x72e6f5:goto L72e6f5;
case 0x72e6f8:c.instructions+=2;goto B72e6f8;
case 0x72e6fb:c.instructions+=1;goto B72e6fb;
case 0x72e6fd:goto L72e6fd;
case 0x72e700:c.instructions+=3;goto B72e700;
case 0x72e704:c.instructions+=2;goto B72e704;
case 0x72e708:c.instructions+=1;goto B72e708;
case 0x72e70a:goto L72e70a;
case 0x72e70e:c.instructions+=7;goto B72e70e;
case 0x72e711:c.instructions+=6;goto B72e711;
case 0x72e718:c.instructions+=5;goto B72e718;
case 0x72e71f:c.instructions+=4;goto B72e71f;
case 0x72e724:c.instructions+=3;goto B72e724;
case 0x72e726:c.instructions+=2;goto B72e726;
case 0x72e728:c.instructions+=1;goto B72e728;
case 0x72e72a:goto L72e72a;
case 0x72e72d:c.instructions+=1;goto B72e72d;
case 0x72e730:goto L72e730;
case 0x72e736:c.instructions+=1;goto B72e736;
case 0x72e738:goto L72e738;
case 0x72e73a:c.instructions+=5;goto B72e73a;
case 0x72e73d:c.instructions+=4;goto B72e73d;
case 0x72e741:c.instructions+=3;goto B72e741;
case 0x72e748:c.instructions+=2;goto B72e748;
case 0x72e74f:c.instructions+=1;goto B72e74f;
case 0x72e751:goto L72e751;
case 0x72e758:c.instructions+=4;goto B72e758;
case 0x72e75f:c.instructions+=3;goto B72e75f;
case 0x72e766:c.instructions+=2;goto B72e766;
case 0x72e76d:c.instructions+=1;goto B72e76d;
case 0x72e76f:goto L72e76f;
case 0x72e776:c.instructions+=1;goto B72e776;
case 0x72e77d:goto L72e77d;
case 0x72e780:c.instructions+=3;goto B72e780;
case 0x72e781:c.instructions+=2;goto B72e781;
case 0x72e783:c.instructions+=1;goto B72e783;
case 0x72e785:goto L72e785;
case 0x72e78b:c.instructions+=3;goto B72e78b;
case 0x72e78e:c.instructions+=2;goto B72e78e;
case 0x72e790:c.instructions+=1;goto B72e790;
case 0x72e793:goto L72e793;
case 0x72e795:goto L72e795;
case 0x72e798:c.instructions+=3;goto B72e798;
case 0x72e79b:c.instructions+=2;goto B72e79b;
case 0x72e7a3:c.instructions+=1;goto B72e7a3;
case 0x72e7a5:goto L72e7a5;
case 0x72e7a9:c.instructions+=1;goto B72e7a9;
case 0x72e7ab:goto L72e7ab;
case 0x72e7ae:c.instructions+=11;goto B72e7ae;
case 0x72e7b1:c.instructions+=10;goto B72e7b1;
case 0x72e7b3:c.instructions+=9;goto B72e7b3;
case 0x72e7b6:c.instructions+=8;goto B72e7b6;
case 0x72e7bd:c.instructions+=7;goto B72e7bd;
case 0x72e7bf:c.instructions+=6;goto B72e7bf;
case 0x72e7c1:c.instructions+=5;goto B72e7c1;
case 0x72e7c3:c.instructions+=4;goto B72e7c3;
case 0x72e7c5:c.instructions+=3;goto B72e7c5;
case 0x72e7c7:c.instructions+=2;goto B72e7c7;
case 0x72e7c9:c.instructions+=1;goto B72e7c9;
case 0x72e7cb:goto L72e7cb;
case 0x72e7cf:c.instructions+=3;goto B72e7cf;
case 0x72e7d2:c.instructions+=2;goto B72e7d2;
case 0x72e7d5:c.instructions+=1;goto B72e7d5;
case 0x72e7d7:goto L72e7d7;
case 0x72e7de:c.instructions+=7;goto B72e7de;
case 0x72e7e0:c.instructions+=6;goto B72e7e0;
case 0x72e7e7:c.instructions+=5;goto B72e7e7;
case 0x72e7ea:c.instructions+=4;goto B72e7ea;
case 0x72e7ec:c.instructions+=3;goto B72e7ec;
case 0x72e7ee:c.instructions+=2;goto B72e7ee;
case 0x72e7f5:c.instructions+=1;goto B72e7f5;
case 0x72e7f7:goto L72e7f7;
case 0x72e7fe:c.instructions+=8;goto B72e7fe;
case 0x72e800:c.instructions+=7;goto B72e800;
case 0x72e803:c.instructions+=6;goto B72e803;
case 0x72e809:c.instructions+=5;goto B72e809;
case 0x72e80c:c.instructions+=4;goto B72e80c;
case 0x72e80e:c.instructions+=3;goto B72e80e;
case 0x72e815:c.instructions+=2;goto B72e815;
case 0x72e818:c.instructions+=1;goto B72e818;
case 0x72e81a:goto L72e81a;
case 0x72e81c:goto L72e81c;
case 0x72e81f:c.instructions+=3;goto B72e81f;
case 0x72e820:c.instructions+=2;goto B72e820;
case 0x72e823:c.instructions+=1;goto B72e823;
case 0x72e829:goto L72e829;
case 0x72e82c:c.instructions+=2;goto B72e82c;
case 0x72e832:c.instructions+=1;goto B72e832;
case 0x72e838:goto L72e838;
case 0x72e83a:c.instructions+=2;goto B72e83a;
case 0x72e83b:c.instructions+=1;goto B72e83b;
case 0x72e83d:goto L72e83d;
case 0x72e841:c.instructions+=1;goto B72e841;
case 0x72e843:goto L72e843;
case 0x72e846:c.instructions+=1;goto B72e846;
case 0x72e84b:goto L72e84b;
case 0x72e84c:c.instructions+=3;goto B72e84c;
case 0x72e84d:c.instructions+=2;goto B72e84d;
case 0x72e84e:c.instructions+=1;goto B72e84e;
case 0x72e851:goto L72e851;
case 0x72e852:c.instructions+=9;goto B72e852;
case 0x72e854:c.instructions+=8;goto B72e854;
case 0x72e857:c.instructions+=7;goto B72e857;
case 0x72e85a:c.instructions+=6;goto B72e85a;
case 0x72e85d:c.instructions+=5;goto B72e85d;
case 0x72e860:c.instructions+=4;goto B72e860;
case 0x72e863:c.instructions+=3;goto B72e863;
case 0x72e867:c.instructions+=2;goto B72e867;
case 0x72e86b:c.instructions+=1;goto B72e86b;
case 0x72e871:goto L72e871;
case 0x72e875:c.instructions+=1;goto B72e875;
case 0x72e87b:goto L72e87b;
case 0x72e87f:c.instructions+=5;goto B72e87f;
case 0x72e880:c.instructions+=4;goto B72e880;
case 0x72e881:c.instructions+=3;goto B72e881;
case 0x72e882:c.instructions+=2;goto B72e882;
case 0x72e884:c.instructions+=1;goto B72e884;
case 0x72e88a:goto L72e88a;
case 0x72e88d:c.instructions+=4;goto B72e88d;
case 0x72e890:c.instructions+=3;goto B72e890;
case 0x72e892:c.instructions+=2;goto B72e892;
case 0x72e894:c.instructions+=1;goto B72e894;
case 0x72e895:goto L72e895;
case 0x72e898:c.instructions+=4;goto B72e898;
case 0x72e89a:c.instructions+=3;goto B72e89a;
case 0x72e89d:c.instructions+=2;goto B72e89d;
case 0x72e89e:c.instructions+=1;goto B72e89e;
case 0x72e8a0:goto L72e8a0;
case 0x72e8a4:c.instructions+=5;goto B72e8a4;
case 0x72e8a7:c.instructions+=4;goto B72e8a7;
case 0x72e8ae:c.instructions+=3;goto B72e8ae;
case 0x72e8b5:c.instructions+=2;goto B72e8b5;
case 0x72e8bc:c.instructions+=1;goto B72e8bc;
case 0x72e8be:goto L72e8be;
case 0x72e8c0:c.instructions+=2;goto B72e8c0;
case 0x72e8c3:c.instructions+=1;goto B72e8c3;
case 0x72e8c5:goto L72e8c5;
case 0x72e8c8:c.instructions+=8;goto B72e8c8;
case 0x72e8cb:c.instructions+=7;goto B72e8cb;
case 0x72e8ce:c.instructions+=6;goto B72e8ce;
case 0x72e8d1:c.instructions+=5;goto B72e8d1;
case 0x72e8d5:c.instructions+=4;goto B72e8d5;
case 0x72e8d8:c.instructions+=3;goto B72e8d8;
case 0x72e8db:c.instructions+=2;goto B72e8db;
case 0x72e8de:c.instructions+=1;goto B72e8de;
case 0x72e8e1:goto L72e8e1;
case 0x72e8e4:c.instructions+=12;goto B72e8e4;
case 0x72e8e6:c.instructions+=11;goto B72e8e6;
case 0x72e8ea:c.instructions+=10;goto B72e8ea;
case 0x72e8ed:c.instructions+=9;goto B72e8ed;
case 0x72e8ef:c.instructions+=8;goto B72e8ef;
case 0x72e8f1:c.instructions+=7;goto B72e8f1;
case 0x72e8f3:c.instructions+=6;goto B72e8f3;
case 0x72e8f6:c.instructions+=5;goto B72e8f6;
case 0x72e8f9:c.instructions+=4;goto B72e8f9;
case 0x72e8fc:c.instructions+=3;goto B72e8fc;
case 0x72e8ff:c.instructions+=2;goto B72e8ff;
case 0x72e902:c.instructions+=1;goto B72e902;
case 0x72e904:goto L72e904;
case 0x72e908:c.instructions+=9;goto B72e908;
case 0x72e90b:c.instructions+=8;goto B72e90b;
case 0x72e90e:c.instructions+=7;goto B72e90e;
case 0x72e911:c.instructions+=6;goto B72e911;
case 0x72e913:c.instructions+=5;goto B72e913;
case 0x72e91a:c.instructions+=4;goto B72e91a;
case 0x72e921:c.instructions+=3;goto B72e921;
case 0x72e923:c.instructions+=2;goto B72e923;
case 0x72e927:c.instructions+=1;goto B72e927;
case 0x72e929:goto L72e929;
case 0x72e92e:goto L72e92e;
case 0x72e932:c.instructions+=13;goto B72e932;
case 0x72e935:c.instructions+=12;goto B72e935;
case 0x72e938:c.instructions+=11;goto B72e938;
case 0x72e93c:c.instructions+=10;goto B72e93c;
case 0x72e93f:c.instructions+=9;goto B72e93f;
case 0x72e946:c.instructions+=8;goto B72e946;
case 0x72e949:c.instructions+=7;goto B72e949;
case 0x72e94c:c.instructions+=6;goto B72e94c;
case 0x72e94d:c.instructions+=5;goto B72e94d;
case 0x72e950:c.instructions+=4;goto B72e950;
case 0x72e953:c.instructions+=3;goto B72e953;
case 0x72e956:c.instructions+=2;goto B72e956;
case 0x72e95d:c.instructions+=1;goto B72e95d;
case 0x72e960:goto L72e960;
case 0x72e963:c.instructions+=28;goto B72e963;
case 0x72e966:c.instructions+=27;goto B72e966;
case 0x72e969:c.instructions+=26;goto B72e969;
case 0x72e96c:c.instructions+=25;goto B72e96c;
case 0x72e96e:c.instructions+=24;goto B72e96e;
case 0x72e970:c.instructions+=23;goto B72e970;
case 0x72e973:c.instructions+=22;goto B72e973;
case 0x72e976:c.instructions+=21;goto B72e976;
case 0x72e979:c.instructions+=20;goto B72e979;
case 0x72e97c:c.instructions+=19;goto B72e97c;
case 0x72e97f:c.instructions+=18;goto B72e97f;
case 0x72e982:c.instructions+=17;goto B72e982;
case 0x72e985:c.instructions+=16;goto B72e985;
case 0x72e988:c.instructions+=15;goto B72e988;
case 0x72e98b:c.instructions+=14;goto B72e98b;
case 0x72e98e:c.instructions+=13;goto B72e98e;
case 0x72e991:c.instructions+=12;goto B72e991;
case 0x72e994:c.instructions+=11;goto B72e994;
case 0x72e997:c.instructions+=10;goto B72e997;
case 0x72e99a:c.instructions+=9;goto B72e99a;
case 0x72e99d:c.instructions+=8;goto B72e99d;
case 0x72e9a0:c.instructions+=7;goto B72e9a0;
case 0x72e9a3:c.instructions+=6;goto B72e9a3;
case 0x72e9a6:c.instructions+=5;goto B72e9a6;
case 0x72e9a9:c.instructions+=4;goto B72e9a9;
case 0x72e9ac:c.instructions+=3;goto B72e9ac;
case 0x72e9af:c.instructions+=2;goto B72e9af;
case 0x72e9b2:c.instructions+=1;goto B72e9b2;
case 0x72e9b4:goto L72e9b4;
case 0x72e9b7:c.instructions+=7;goto B72e9b7;
case 0x72e9ba:c.instructions+=6;goto B72e9ba;
case 0x72e9be:c.instructions+=5;goto B72e9be;
case 0x72e9c0:c.instructions+=4;goto B72e9c0;
case 0x72e9c3:c.instructions+=3;goto B72e9c3;
case 0x72e9c6:c.instructions+=2;goto B72e9c6;
case 0x72e9c9:c.instructions+=1;goto B72e9c9;
case 0x72e9cf:goto L72e9cf;
case 0x72e9d1:c.instructions+=20;goto B72e9d1;
case 0x72e9d4:c.instructions+=19;goto B72e9d4;
case 0x72e9d7:c.instructions+=18;goto B72e9d7;
case 0x72e9da:c.instructions+=17;goto B72e9da;
case 0x72e9dd:c.instructions+=16;goto B72e9dd;
case 0x72e9e0:c.instructions+=15;goto B72e9e0;
case 0x72e9e2:c.instructions+=14;goto B72e9e2;
case 0x72e9e5:c.instructions+=13;goto B72e9e5;
case 0x72e9e8:c.instructions+=12;goto B72e9e8;
case 0x72e9eb:c.instructions+=11;goto B72e9eb;
case 0x72e9ee:c.instructions+=10;goto B72e9ee;
case 0x72e9f0:c.instructions+=9;goto B72e9f0;
case 0x72e9f3:c.instructions+=8;goto B72e9f3;
case 0x72e9fa:c.instructions+=7;goto B72e9fa;
case 0x72e9fd:c.instructions+=6;goto B72e9fd;
case 0x72e9fe:c.instructions+=5;goto B72e9fe;
case 0x72ea00:c.instructions+=4;goto B72ea00;
case 0x72ea01:c.instructions+=3;goto B72ea01;
case 0x72ea04:c.instructions+=2;goto B72ea04;
case 0x72ea08:c.instructions+=1;goto B72ea08;
case 0x72ea0b:goto L72ea0b;
case 0x72ea0e:c.instructions+=22;goto B72ea0e;
case 0x72ea11:c.instructions+=21;goto B72ea11;
case 0x72ea14:c.instructions+=20;goto B72ea14;
case 0x72ea18:c.instructions+=19;goto B72ea18;
case 0x72ea1b:c.instructions+=18;goto B72ea1b;
case 0x72ea1e:c.instructions+=17;goto B72ea1e;
case 0x72ea20:c.instructions+=16;goto B72ea20;
case 0x72ea23:c.instructions+=15;goto B72ea23;
case 0x72ea25:c.instructions+=14;goto B72ea25;
case 0x72ea27:c.instructions+=13;goto B72ea27;
case 0x72ea2a:c.instructions+=12;goto B72ea2a;
case 0x72ea2d:c.instructions+=11;goto B72ea2d;
case 0x72ea30:c.instructions+=10;goto B72ea30;
case 0x72ea33:c.instructions+=9;goto B72ea33;
case 0x72ea36:c.instructions+=8;goto B72ea36;
case 0x72ea39:c.instructions+=7;goto B72ea39;
case 0x72ea3a:c.instructions+=6;goto B72ea3a;
case 0x72ea3d:c.instructions+=5;goto B72ea3d;
case 0x72ea40:c.instructions+=4;goto B72ea40;
case 0x72ea43:c.instructions+=3;goto B72ea43;
case 0x72ea44:c.instructions+=2;goto B72ea44;
case 0x72ea47:c.instructions+=1;goto B72ea47;
case 0x72ea49:goto L72ea49;
case 0x72ea4c:c.instructions+=1;goto B72ea4c;
case 0x72ea4f:goto L72ea4f;
case 0x72ea52:c.instructions+=3;goto B72ea52;
case 0x72ea55:c.instructions+=2;goto B72ea55;
case 0x72ea59:c.instructions+=1;goto B72ea59;
case 0x72ea5f:goto L72ea5f;
case 0x72ea60:c.instructions+=2;goto B72ea60;
case 0x72ea61:c.instructions+=1;goto B72ea61;
case 0x72ea62:goto L72ea62;
case 0x72ea63:c.instructions+=1;goto B72ea63;
case 0x72ea66:goto L72ea66;
case 0x72ea6a:c.instructions+=7;goto B72ea6a;
case 0x72ea6e:c.instructions+=6;goto B72ea6e;
case 0x72ea71:c.instructions+=5;goto B72ea71;
case 0x72ea74:c.instructions+=4;goto B72ea74;
case 0x72ea78:c.instructions+=3;goto B72ea78;
case 0x72ea7b:c.instructions+=2;goto B72ea7b;
case 0x72ea7d:c.instructions+=1;goto B72ea7d;
case 0x72ea7f:goto L72ea7f;
case 0x72ea83:c.instructions+=1;goto B72ea83;
case 0x72ea85:goto L72ea85;
case 0x72ea89:c.instructions+=1;goto B72ea89;
case 0x72ea8f:goto L72ea8f;
case 0x72ea91:c.instructions+=1;goto B72ea91;
case 0x72ea93:goto L72ea93;
case 0x72ea97:c.instructions+=1;goto B72ea97;
case 0x72ea99:goto L72ea99;
case 0x72ea9d:c.instructions+=1;goto B72ea9d;
case 0x72ea9f:goto L72ea9f;
case 0x72eaa3:c.instructions+=2;goto B72eaa3;
case 0x72eaa6:c.instructions+=1;goto B72eaa6;
case 0x72eaa8:goto L72eaa8;
case 0x72eaac:c.instructions+=1;goto B72eaac;
case 0x72eab2:goto L72eab2;
case 0x72eab4:c.instructions+=1;goto B72eab4;
case 0x72eaba:goto L72eaba;
case 0x72eabb:c.instructions+=14;goto B72eabb;
case 0x72eac1:c.instructions+=13;goto B72eac1;
case 0x72eac3:c.instructions+=12;goto B72eac3;
case 0x72eac9:c.instructions+=11;goto B72eac9;
case 0x72eacb:c.instructions+=10;goto B72eacb;
case 0x72ead1:c.instructions+=9;goto B72ead1;
case 0x72ead4:c.instructions+=8;goto B72ead4;
case 0x72eada:c.instructions+=7;goto B72eada;
case 0x72eadb:c.instructions+=6;goto B72eadb;
case 0x72eae1:c.instructions+=5;goto B72eae1;
case 0x72eae3:c.instructions+=4;goto B72eae3;
case 0x72eae4:c.instructions+=3;goto B72eae4;
case 0x72eae6:c.instructions+=2;goto B72eae6;
case 0x72eae7:c.instructions+=1;goto B72eae7;
case 0x72eae8:goto L72eae8;
case 0x72eaeb:c.instructions+=114;goto B72eaeb;
case 0x72eaee:c.instructions+=113;goto B72eaee;
case 0x72eaf0:c.instructions+=112;goto B72eaf0;
case 0x72eaf2:c.instructions+=111;goto B72eaf2;
case 0x72eaf8:c.instructions+=110;goto B72eaf8;
case 0x72eafa:c.instructions+=109;goto B72eafa;
case 0x72eafd:c.instructions+=108;goto B72eafd;
case 0x72eaff:c.instructions+=107;goto B72eaff;
case 0x72eb01:c.instructions+=106;goto B72eb01;
case 0x72eb03:c.instructions+=105;goto B72eb03;
case 0x72eb09:c.instructions+=104;goto B72eb09;
case 0x72eb0b:c.instructions+=103;goto B72eb0b;
case 0x72eb0d:c.instructions+=102;goto B72eb0d;
case 0x72eb0f:c.instructions+=101;goto B72eb0f;
case 0x72eb12:c.instructions+=100;goto B72eb12;
case 0x72eb15:c.instructions+=99;goto B72eb15;
case 0x72eb17:c.instructions+=98;goto B72eb17;
case 0x72eb1a:c.instructions+=97;goto B72eb1a;
case 0x72eb20:c.instructions+=96;goto B72eb20;
case 0x72eb22:c.instructions+=95;goto B72eb22;
case 0x72eb25:c.instructions+=94;goto B72eb25;
case 0x72eb28:c.instructions+=93;goto B72eb28;
case 0x72eb2a:c.instructions+=92;goto B72eb2a;
case 0x72eb2c:c.instructions+=91;goto B72eb2c;
case 0x72eb32:c.instructions+=90;goto B72eb32;
case 0x72eb34:c.instructions+=89;goto B72eb34;
case 0x72eb37:c.instructions+=88;goto B72eb37;
case 0x72eb39:c.instructions+=87;goto B72eb39;
case 0x72eb3c:c.instructions+=86;goto B72eb3c;
case 0x72eb3f:c.instructions+=85;goto B72eb3f;
case 0x72eb41:c.instructions+=84;goto B72eb41;
case 0x72eb44:c.instructions+=83;goto B72eb44;
case 0x72eb4a:c.instructions+=82;goto B72eb4a;
case 0x72eb4c:c.instructions+=81;goto B72eb4c;
case 0x72eb4f:c.instructions+=80;goto B72eb4f;
case 0x72eb52:c.instructions+=79;goto B72eb52;
case 0x72eb54:c.instructions+=78;goto B72eb54;
case 0x72eb56:c.instructions+=77;goto B72eb56;
case 0x72eb5c:c.instructions+=76;goto B72eb5c;
case 0x72eb5e:c.instructions+=75;goto B72eb5e;
case 0x72eb61:c.instructions+=74;goto B72eb61;
case 0x72eb63:c.instructions+=73;goto B72eb63;
case 0x72eb66:c.instructions+=72;goto B72eb66;
case 0x72eb69:c.instructions+=71;goto B72eb69;
case 0x72eb6b:c.instructions+=70;goto B72eb6b;
case 0x72eb6e:c.instructions+=69;goto B72eb6e;
case 0x72eb74:c.instructions+=68;goto B72eb74;
case 0x72eb76:c.instructions+=67;goto B72eb76;
case 0x72eb79:c.instructions+=66;goto B72eb79;
case 0x72eb7c:c.instructions+=65;goto B72eb7c;
case 0x72eb7e:c.instructions+=64;goto B72eb7e;
case 0x72eb80:c.instructions+=63;goto B72eb80;
case 0x72eb86:c.instructions+=62;goto B72eb86;
case 0x72eb88:c.instructions+=61;goto B72eb88;
case 0x72eb8b:c.instructions+=60;goto B72eb8b;
case 0x72eb8d:c.instructions+=59;goto B72eb8d;
case 0x72eb90:c.instructions+=58;goto B72eb90;
case 0x72eb93:c.instructions+=57;goto B72eb93;
case 0x72eb95:c.instructions+=56;goto B72eb95;
case 0x72eb98:c.instructions+=55;goto B72eb98;
case 0x72eb9e:c.instructions+=54;goto B72eb9e;
case 0x72eba0:c.instructions+=53;goto B72eba0;
case 0x72eba3:c.instructions+=52;goto B72eba3;
case 0x72eba6:c.instructions+=51;goto B72eba6;
case 0x72eba8:c.instructions+=50;goto B72eba8;
case 0x72ebaa:c.instructions+=49;goto B72ebaa;
case 0x72ebb0:c.instructions+=48;goto B72ebb0;
case 0x72ebb2:c.instructions+=47;goto B72ebb2;
case 0x72ebb5:c.instructions+=46;goto B72ebb5;
case 0x72ebb7:c.instructions+=45;goto B72ebb7;
case 0x72ebba:c.instructions+=44;goto B72ebba;
case 0x72ebbd:c.instructions+=43;goto B72ebbd;
case 0x72ebc3:c.instructions+=42;goto B72ebc3;
case 0x72ebc6:c.instructions+=41;goto B72ebc6;
case 0x72ebcc:c.instructions+=40;goto B72ebcc;
case 0x72ebce:c.instructions+=39;goto B72ebce;
case 0x72ebd1:c.instructions+=38;goto B72ebd1;
case 0x72ebd4:c.instructions+=37;goto B72ebd4;
case 0x72ebda:c.instructions+=36;goto B72ebda;
case 0x72ebdc:c.instructions+=35;goto B72ebdc;
case 0x72ebe2:c.instructions+=34;goto B72ebe2;
case 0x72ebe4:c.instructions+=33;goto B72ebe4;
case 0x72ebe7:c.instructions+=32;goto B72ebe7;
case 0x72ebe8:c.instructions+=31;goto B72ebe8;
case 0x72ebeb:c.instructions+=30;goto B72ebeb;
case 0x72ebed:c.instructions+=29;goto B72ebed;
case 0x72ebf0:c.instructions+=28;goto B72ebf0;
case 0x72ebf3:c.instructions+=27;goto B72ebf3;
case 0x72ebf9:c.instructions+=26;goto B72ebf9;
case 0x72ebfc:c.instructions+=25;goto B72ebfc;
case 0x72ec02:c.instructions+=24;goto B72ec02;
case 0x72ec04:c.instructions+=23;goto B72ec04;
case 0x72ec07:c.instructions+=22;goto B72ec07;
case 0x72ec0a:c.instructions+=21;goto B72ec0a;
case 0x72ec10:c.instructions+=20;goto B72ec10;
case 0x72ec12:c.instructions+=19;goto B72ec12;
case 0x72ec18:c.instructions+=18;goto B72ec18;
case 0x72ec1a:c.instructions+=17;goto B72ec1a;
case 0x72ec1d:c.instructions+=16;goto B72ec1d;
case 0x72ec1f:c.instructions+=15;goto B72ec1f;
case 0x72ec22:c.instructions+=14;goto B72ec22;
case 0x72ec25:c.instructions+=13;goto B72ec25;
case 0x72ec2b:c.instructions+=12;goto B72ec2b;
case 0x72ec2e:c.instructions+=11;goto B72ec2e;
case 0x72ec34:c.instructions+=10;goto B72ec34;
case 0x72ec36:c.instructions+=9;goto B72ec36;
case 0x72ec39:c.instructions+=8;goto B72ec39;
case 0x72ec3c:c.instructions+=7;goto B72ec3c;
case 0x72ec42:c.instructions+=6;goto B72ec42;
case 0x72ec44:c.instructions+=5;goto B72ec44;
case 0x72ec4a:c.instructions+=4;goto B72ec4a;
case 0x72ec4c:c.instructions+=3;goto B72ec4c;
case 0x72ec4f:c.instructions+=2;goto B72ec4f;
case 0x72ec51:c.instructions+=1;goto B72ec51;
case 0x72ec57:goto L72ec57;
case 0x72ec59:c.instructions+=4;goto B72ec59;
case 0x72ec5b:c.instructions+=3;goto B72ec5b;
case 0x72ec5d:c.instructions+=2;goto B72ec5d;
case 0x72ec5f:c.instructions+=1;goto B72ec5f;
case 0x72ec61:goto L72ec61;
case 0x72ec64:goto L72ec64;
case 0x72ec65:c.instructions+=6;goto B72ec65;
case 0x72ec67:c.instructions+=5;goto B72ec67;
case 0x72ec68:c.instructions+=4;goto B72ec68;
case 0x72ec6b:c.instructions+=3;goto B72ec6b;
case 0x72ec6e:c.instructions+=2;goto B72ec6e;
case 0x72ec70:c.instructions+=1;goto B72ec70;
case 0x72ec76:goto L72ec76;
case 0x72ec79:c.instructions+=6;goto B72ec79;
case 0x72ec7b:c.instructions+=5;goto B72ec7b;
case 0x72ec7e:c.instructions+=4;goto B72ec7e;
case 0x72ec7f:c.instructions+=3;goto B72ec7f;
case 0x72ec82:c.instructions+=2;goto B72ec82;
case 0x72ec88:c.instructions+=1;goto B72ec88;
case 0x72ec89:goto L72ec89;
case 0x72ec8c:c.instructions+=99;goto B72ec8c;
case 0x72ec8f:c.instructions+=98;goto B72ec8f;
case 0x72ec91:c.instructions+=97;goto B72ec91;
case 0x72ec94:c.instructions+=96;goto B72ec94;
case 0x72ec9a:c.instructions+=95;goto B72ec9a;
case 0x72ec9c:c.instructions+=94;goto B72ec9c;
case 0x72ec9f:c.instructions+=93;goto B72ec9f;
case 0x72eca2:c.instructions+=92;goto B72eca2;
case 0x72eca5:c.instructions+=91;goto B72eca5;
case 0x72eca7:c.instructions+=90;goto B72eca7;
case 0x72ecaa:c.instructions+=89;goto B72ecaa;
case 0x72ecb0:c.instructions+=88;goto B72ecb0;
case 0x72ecb2:c.instructions+=87;goto B72ecb2;
case 0x72ecb5:c.instructions+=86;goto B72ecb5;
case 0x72ecbb:c.instructions+=85;goto B72ecbb;
case 0x72ecc1:c.instructions+=84;goto B72ecc1;
case 0x72ecc7:c.instructions+=83;goto B72ecc7;
case 0x72eccd:c.instructions+=82;goto B72eccd;
case 0x72ecd0:c.instructions+=81;goto B72ecd0;
case 0x72ecd2:c.instructions+=80;goto B72ecd2;
case 0x72ecd8:c.instructions+=79;goto B72ecd8;
case 0x72ecde:c.instructions+=78;goto B72ecde;
case 0x72ece4:c.instructions+=77;goto B72ece4;
case 0x72ecea:c.instructions+=76;goto B72ecea;
case 0x72eced:c.instructions+=75;goto B72eced;
case 0x72ecf3:c.instructions+=74;goto B72ecf3;
case 0x72ecf5:c.instructions+=73;goto B72ecf5;
case 0x72ecfb:c.instructions+=72;goto B72ecfb;
case 0x72ed01:c.instructions+=71;goto B72ed01;
case 0x72ed07:c.instructions+=70;goto B72ed07;
case 0x72ed0a:c.instructions+=69;goto B72ed0a;
case 0x72ed0c:c.instructions+=68;goto B72ed0c;
case 0x72ed12:c.instructions+=67;goto B72ed12;
case 0x72ed18:c.instructions+=66;goto B72ed18;
case 0x72ed1e:c.instructions+=65;goto B72ed1e;
case 0x72ed24:c.instructions+=64;goto B72ed24;
case 0x72ed27:c.instructions+=63;goto B72ed27;
case 0x72ed2d:c.instructions+=62;goto B72ed2d;
case 0x72ed2f:c.instructions+=61;goto B72ed2f;
case 0x72ed35:c.instructions+=60;goto B72ed35;
case 0x72ed3b:c.instructions+=59;goto B72ed3b;
case 0x72ed41:c.instructions+=58;goto B72ed41;
case 0x72ed44:c.instructions+=57;goto B72ed44;
case 0x72ed46:c.instructions+=56;goto B72ed46;
case 0x72ed4c:c.instructions+=55;goto B72ed4c;
case 0x72ed52:c.instructions+=54;goto B72ed52;
case 0x72ed58:c.instructions+=53;goto B72ed58;
case 0x72ed5e:c.instructions+=52;goto B72ed5e;
case 0x72ed61:c.instructions+=51;goto B72ed61;
case 0x72ed67:c.instructions+=50;goto B72ed67;
case 0x72ed69:c.instructions+=49;goto B72ed69;
case 0x72ed6f:c.instructions+=48;goto B72ed6f;
case 0x72ed75:c.instructions+=47;goto B72ed75;
case 0x72ed7b:c.instructions+=46;goto B72ed7b;
case 0x72ed7e:c.instructions+=45;goto B72ed7e;
case 0x72ed80:c.instructions+=44;goto B72ed80;
case 0x72ed86:c.instructions+=43;goto B72ed86;
case 0x72ed8c:c.instructions+=42;goto B72ed8c;
case 0x72ed92:c.instructions+=41;goto B72ed92;
case 0x72ed98:c.instructions+=40;goto B72ed98;
case 0x72ed9b:c.instructions+=39;goto B72ed9b;
case 0x72eda1:c.instructions+=38;goto B72eda1;
case 0x72eda3:c.instructions+=37;goto B72eda3;
case 0x72eda9:c.instructions+=36;goto B72eda9;
case 0x72edaf:c.instructions+=35;goto B72edaf;
case 0x72edb5:c.instructions+=34;goto B72edb5;
case 0x72edb8:c.instructions+=33;goto B72edb8;
case 0x72edba:c.instructions+=32;goto B72edba;
case 0x72edc0:c.instructions+=31;goto B72edc0;
case 0x72edc6:c.instructions+=30;goto B72edc6;
case 0x72edcc:c.instructions+=29;goto B72edcc;
case 0x72edd2:c.instructions+=28;goto B72edd2;
case 0x72edd5:c.instructions+=27;goto B72edd5;
case 0x72eddb:c.instructions+=26;goto B72eddb;
case 0x72eddd:c.instructions+=25;goto B72eddd;
case 0x72ede3:c.instructions+=24;goto B72ede3;
case 0x72ede9:c.instructions+=23;goto B72ede9;
case 0x72edef:c.instructions+=22;goto B72edef;
case 0x72edf1:c.instructions+=21;goto B72edf1;
case 0x72edf7:c.instructions+=20;goto B72edf7;
case 0x72edfd:c.instructions+=19;goto B72edfd;
case 0x72ee00:c.instructions+=18;goto B72ee00;
case 0x72ee02:c.instructions+=17;goto B72ee02;
case 0x72ee08:c.instructions+=16;goto B72ee08;
case 0x72ee0e:c.instructions+=15;goto B72ee0e;
case 0x72ee14:c.instructions+=14;goto B72ee14;
case 0x72ee1a:c.instructions+=13;goto B72ee1a;
case 0x72ee1d:c.instructions+=12;goto B72ee1d;
case 0x72ee1f:c.instructions+=11;goto B72ee1f;
case 0x72ee25:c.instructions+=10;goto B72ee25;
case 0x72ee2b:c.instructions+=9;goto B72ee2b;
case 0x72ee31:c.instructions+=8;goto B72ee31;
case 0x72ee34:c.instructions+=7;goto B72ee34;
case 0x72ee3a:c.instructions+=6;goto B72ee3a;
case 0x72ee40:c.instructions+=5;goto B72ee40;
case 0x72ee43:c.instructions+=4;goto B72ee43;
case 0x72ee45:c.instructions+=3;goto B72ee45;
case 0x72ee48:c.instructions+=2;goto B72ee48;
case 0x72ee49:c.instructions+=1;goto B72ee49;
case 0x72ee4f:goto L72ee4f;
case 0x72ee50:c.instructions+=2;goto B72ee50;
case 0x72ee51:c.instructions+=1;goto B72ee51;
case 0x72ee52:goto L72ee52;
case 0x72ee53:c.instructions+=5;goto B72ee53;
case 0x72ee55:c.instructions+=4;goto B72ee55;
case 0x72ee58:c.instructions+=3;goto B72ee58;
case 0x72ee5a:c.instructions+=2;goto B72ee5a;
case 0x72ee5d:c.instructions+=1;goto B72ee5d;
case 0x72ee5e:goto L72ee5e;
case 0x72ee60:c.instructions+=10;goto B72ee60;
case 0x72ee63:c.instructions+=9;goto B72ee63;
case 0x72ee65:c.instructions+=8;goto B72ee65;
case 0x72ee67:c.instructions+=7;goto B72ee67;
case 0x72ee69:c.instructions+=6;goto B72ee69;
case 0x72ee6c:c.instructions+=5;goto B72ee6c;
case 0x72ee6d:c.instructions+=4;goto B72ee6d;
case 0x72ee70:c.instructions+=3;goto B72ee70;
case 0x72ee72:c.instructions+=2;goto B72ee72;
case 0x72ee75:c.instructions+=1;goto B72ee75;
case 0x72ee77:goto L72ee77;
case 0x72ee7a:c.instructions+=121;goto B72ee7a;
case 0x72ee80:c.instructions+=120;goto B72ee80;
case 0x72ee86:c.instructions+=119;goto B72ee86;
case 0x72ee87:c.instructions+=118;goto B72ee87;
case 0x72ee88:c.instructions+=117;goto B72ee88;
case 0x72ee8a:c.instructions+=116;goto B72ee8a;
case 0x72ee8c:c.instructions+=115;goto B72ee8c;
case 0x72ee92:c.instructions+=114;goto B72ee92;
case 0x72ee93:c.instructions+=113;goto B72ee93;
case 0x72ee96:c.instructions+=112;goto B72ee96;
case 0x72ee99:c.instructions+=111;goto B72ee99;
case 0x72ee9c:c.instructions+=110;goto B72ee9c;
case 0x72ee9f:c.instructions+=109;goto B72ee9f;
case 0x72eea1:c.instructions+=108;goto B72eea1;
case 0x72eea4:c.instructions+=107;goto B72eea4;
case 0x72eea6:c.instructions+=106;goto B72eea6;
case 0x72eea9:c.instructions+=105;goto B72eea9;
case 0x72eeab:c.instructions+=104;goto B72eeab;
case 0x72eeae:c.instructions+=103;goto B72eeae;
case 0x72eeb1:c.instructions+=102;goto B72eeb1;
case 0x72eeb4:c.instructions+=101;goto B72eeb4;
case 0x72eeb7:c.instructions+=100;goto B72eeb7;
case 0x72eebd:c.instructions+=99;goto B72eebd;
case 0x72eebf:c.instructions+=98;goto B72eebf;
case 0x72eec1:c.instructions+=97;goto B72eec1;
case 0x72eec4:c.instructions+=96;goto B72eec4;
case 0x72eec7:c.instructions+=95;goto B72eec7;
case 0x72eec9:c.instructions+=94;goto B72eec9;
case 0x72eecc:c.instructions+=93;goto B72eecc;
case 0x72eece:c.instructions+=92;goto B72eece;
case 0x72eed0:c.instructions+=91;goto B72eed0;
case 0x72eed2:c.instructions+=90;goto B72eed2;
case 0x72eed5:c.instructions+=89;goto B72eed5;
case 0x72eed7:c.instructions+=88;goto B72eed7;
case 0x72eeda:c.instructions+=87;goto B72eeda;
case 0x72eedc:c.instructions+=86;goto B72eedc;
case 0x72eee2:c.instructions+=85;goto B72eee2;
case 0x72eee8:c.instructions+=84;goto B72eee8;
case 0x72eeeb:c.instructions+=83;goto B72eeeb;
case 0x72eeee:c.instructions+=82;goto B72eeee;
case 0x72eef0:c.instructions+=81;goto B72eef0;
case 0x72eef2:c.instructions+=80;goto B72eef2;
case 0x72eef5:c.instructions+=79;goto B72eef5;
case 0x72eef7:c.instructions+=78;goto B72eef7;
case 0x72eefa:c.instructions+=77;goto B72eefa;
case 0x72eefc:c.instructions+=76;goto B72eefc;
case 0x72eefe:c.instructions+=75;goto B72eefe;
case 0x72ef01:c.instructions+=74;goto B72ef01;
case 0x72ef04:c.instructions+=73;goto B72ef04;
case 0x72ef06:c.instructions+=72;goto B72ef06;
case 0x72ef08:c.instructions+=71;goto B72ef08;
case 0x72ef0b:c.instructions+=70;goto B72ef0b;
case 0x72ef0e:c.instructions+=69;goto B72ef0e;
case 0x72ef11:c.instructions+=68;goto B72ef11;
case 0x72ef13:c.instructions+=67;goto B72ef13;
case 0x72ef16:c.instructions+=66;goto B72ef16;
case 0x72ef19:c.instructions+=65;goto B72ef19;
case 0x72ef1c:c.instructions+=64;goto B72ef1c;
case 0x72ef1f:c.instructions+=63;goto B72ef1f;
case 0x72ef22:c.instructions+=62;goto B72ef22;
case 0x72ef28:c.instructions+=61;goto B72ef28;
case 0x72ef2b:c.instructions+=60;goto B72ef2b;
case 0x72ef31:c.instructions+=59;goto B72ef31;
case 0x72ef34:c.instructions+=58;goto B72ef34;
case 0x72ef3a:c.instructions+=57;goto B72ef3a;
case 0x72ef3d:c.instructions+=56;goto B72ef3d;
case 0x72ef3f:c.instructions+=55;goto B72ef3f;
case 0x72ef42:c.instructions+=54;goto B72ef42;
case 0x72ef45:c.instructions+=53;goto B72ef45;
case 0x72ef47:c.instructions+=52;goto B72ef47;
case 0x72ef4a:c.instructions+=51;goto B72ef4a;
case 0x72ef4c:c.instructions+=50;goto B72ef4c;
case 0x72ef4f:c.instructions+=49;goto B72ef4f;
case 0x72ef51:c.instructions+=48;goto B72ef51;
case 0x72ef54:c.instructions+=47;goto B72ef54;
case 0x72ef57:c.instructions+=46;goto B72ef57;
case 0x72ef59:c.instructions+=45;goto B72ef59;
case 0x72ef5c:c.instructions+=44;goto B72ef5c;
case 0x72ef5e:c.instructions+=43;goto B72ef5e;
case 0x72ef61:c.instructions+=42;goto B72ef61;
case 0x72ef63:c.instructions+=41;goto B72ef63;
case 0x72ef66:c.instructions+=40;goto B72ef66;
case 0x72ef69:c.instructions+=39;goto B72ef69;
case 0x72ef6b:c.instructions+=38;goto B72ef6b;
case 0x72ef6e:c.instructions+=37;goto B72ef6e;
case 0x72ef74:c.instructions+=36;goto B72ef74;
case 0x72ef77:c.instructions+=35;goto B72ef77;
case 0x72ef79:c.instructions+=34;goto B72ef79;
case 0x72ef7c:c.instructions+=33;goto B72ef7c;
case 0x72ef82:c.instructions+=32;goto B72ef82;
case 0x72ef85:c.instructions+=31;goto B72ef85;
case 0x72ef88:c.instructions+=30;goto B72ef88;
case 0x72ef8e:c.instructions+=29;goto B72ef8e;
case 0x72ef91:c.instructions+=28;goto B72ef91;
case 0x72ef97:c.instructions+=27;goto B72ef97;
case 0x72ef9a:c.instructions+=26;goto B72ef9a;
case 0x72efa0:c.instructions+=25;goto B72efa0;
case 0x72efa3:c.instructions+=24;goto B72efa3;
case 0x72efa9:c.instructions+=23;goto B72efa9;
case 0x72efac:c.instructions+=22;goto B72efac;
case 0x72efb2:c.instructions+=21;goto B72efb2;
case 0x72efb5:c.instructions+=20;goto B72efb5;
case 0x72efb8:c.instructions+=19;goto B72efb8;
case 0x72efbe:c.instructions+=18;goto B72efbe;
case 0x72efc1:c.instructions+=17;goto B72efc1;
case 0x72efc4:c.instructions+=16;goto B72efc4;
case 0x72efca:c.instructions+=15;goto B72efca;
case 0x72efcd:c.instructions+=14;goto B72efcd;
case 0x72efd0:c.instructions+=13;goto B72efd0;
case 0x72efd6:c.instructions+=12;goto B72efd6;
case 0x72efd9:c.instructions+=11;goto B72efd9;
case 0x72efdc:c.instructions+=10;goto B72efdc;
case 0x72efe2:c.instructions+=9;goto B72efe2;
case 0x72efe5:c.instructions+=8;goto B72efe5;
case 0x72efe8:c.instructions+=7;goto B72efe8;
case 0x72efee:c.instructions+=6;goto B72efee;
case 0x72eff1:c.instructions+=5;goto B72eff1;
case 0x72eff3:c.instructions+=4;goto B72eff3;
case 0x72eff6:c.instructions+=3;goto B72eff6;
case 0x72eff8:c.instructions+=2;goto B72eff8;
case 0x72effe:c.instructions+=1;goto B72effe;
default:missing_instruction(c.pc);}
B72e005:L72e005:{c.instructions+=24;NFSU2_TR(0x72e005);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72e007:{NFSU2_TR(0x72e007);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e00a:{NFSU2_TR(0x72e00a);
{u32 ea_=u32(r4(R+0)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e010:{NFSU2_TR(0x72e010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72e013:{NFSU2_TR(0x72e013);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72e016:{NFSU2_TR(0x72e016);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72e018:{NFSU2_TR(0x72e018);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e01b:{NFSU2_TR(0x72e01b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72e01d:{NFSU2_TR(0x72e01d);
{u32 ea_=u32(r4(R+0)+u32(2300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e023:{NFSU2_TR(0x72e023);
{u32 ea_=u32(r4(R+0)+u32(2304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e029:{NFSU2_TR(0x72e029);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72e02b:{NFSU2_TR(0x72e02b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72e02d:{NFSU2_TR(0x72e02d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e02f:{NFSU2_TR(0x72e02f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B72e032:{NFSU2_TR(0x72e032);
{u32 ea_=u32(r4(R+0)+u32(2292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e038:{NFSU2_TR(0x72e038);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72e03a:{NFSU2_TR(0x72e03a);
{u32 ea_=u32(r4(R+0)+u32(2296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e040:{NFSU2_TR(0x72e040);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e046:{NFSU2_TR(0x72e046);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72e049:{NFSU2_TR(0x72e049);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B72e04c:{NFSU2_TR(0x72e04c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B72e04e:{NFSU2_TR(0x72e04e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72e050:{NFSU2_TR(0x72e050);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e053:{NFSU2_TR(0x72e053);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x72dfe7u,72d);}
}
B72e055:L72e055:{c.instructions+=3;NFSU2_TR(0x72e055);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72e057:{NFSU2_TR(0x72e057);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72e058:{NFSU2_TR(0x72e058);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72e059:L72e059:{c.instructions+=5;NFSU2_TR(0x72e059);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e05a:{NFSU2_TR(0x72e05a);
__builtin_memmove((R+20),(R+16),4);
}
B72e05c:{NFSU2_TR(0x72e05c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e05f:{NFSU2_TR(0x72e05f);
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
B72e061:{NFSU2_TR(0x72e061);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72e079;}}
}
B72e063:L72e063:{c.instructions+=1;NFSU2_TR(0x72e063);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B72e065:L72e065:{c.instructions+=6;NFSU2_TR(0x72e065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e068:{NFSU2_TR(0x72e068);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72e06b:{NFSU2_TR(0x72e06b);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e06e:{NFSU2_TR(0x72e06e);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B72e070:{NFSU2_TR(0x72e070);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(2304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e077:{NFSU2_TR(0x72e077);
{goto L72e0b6;}
}
B72e079:L72e079:{c.instructions+=2;NFSU2_TR(0x72e079);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72e07b:{NFSU2_TR(0x72e07b);
if(r1(R+518)){{goto L72e091;}}
}
B72e07d:L72e07d:{c.instructions+=7;NFSU2_TR(0x72e07d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72e080:{NFSU2_TR(0x72e080);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72e081:{NFSU2_TR(0x72e081);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B72e083:{NFSU2_TR(0x72e083);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72e086:{NFSU2_TR(0x72e086);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72e088:{NFSU2_TR(0x72e088);
{u32 ea_=u32((r4(R+0)*4u)+u32(8188400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e08f:{NFSU2_TR(0x72e08f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e065u);}goto L72e065;}
}
B72e091:L72e091:{c.instructions+=12;NFSU2_TR(0x72e091);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72e094:{NFSU2_TR(0x72e094);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B72e096:{NFSU2_TR(0x72e096);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72e099:{NFSU2_TR(0x72e099);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e09c:{NFSU2_TR(0x72e09c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e09d:{NFSU2_TR(0x72e09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e0a0:{NFSU2_TR(0x72e0a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B72e0a3:{NFSU2_TR(0x72e0a3);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B72e0a5:{NFSU2_TR(0x72e0a5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72e0a7:{NFSU2_TR(0x72e0a7);
{u32 ea_=u32((r4(R+0)*4u)+u32(8188400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e0ae:{NFSU2_TR(0x72e0ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72e0af:{NFSU2_TR(0x72e0af);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(2304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e0b6:L72e0b6:{c.instructions+=2;NFSU2_TR(0x72e0b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72e0b7:{NFSU2_TR(0x72e0b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72e0ba:L72e0ba:{c.instructions+=4;NFSU2_TR(0x72e0ba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e0bb:{NFSU2_TR(0x72e0bb);
__builtin_memmove((R+20),(R+16),4);
}
B72e0bd:{NFSU2_TR(0x72e0bd);
w4(R+0,u32(0x2434ull));
}
B72e0c2:{NFSU2_TR(0x72e0c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72e0c7ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B72e0c7:L72e0c7:{c.instructions+=9;NFSU2_TR(0x72e0c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e0c8:{NFSU2_TR(0x72e0c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e0c9:{NFSU2_TR(0x72e0c9);
__builtin_memmove((R+24),(R+4),4);
}
B72e0cb:{NFSU2_TR(0x72e0cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x43ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72e0ce:{NFSU2_TR(0x72e0ce);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72e0d0:{NFSU2_TR(0x72e0d0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72e0d1:{NFSU2_TR(0x72e0d1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72e0d3:{NFSU2_TR(0x72e0d3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72e0d5:{NFSU2_TR(0x72e0d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72e0e0;}}
}
B72e0d7:L72e0d7:{c.instructions+=2;NFSU2_TR(0x72e0d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B72e0da:{NFSU2_TR(0x72e0da);
if(r1(R+518)){{goto L72e0e0;}}
}
B72e0dc:L72e0dc:{c.instructions+=2;NFSU2_TR(0x72e0dc);
__builtin_memmove((R+8),(R+4),1);
}
B72e0de:{NFSU2_TR(0x72e0de);
{goto L72e0e2;}
}
B72e0e0:L72e0e0:{c.instructions+=1;NFSU2_TR(0x72e0e0);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B72e0e2:L72e0e2:{c.instructions+=2;NFSU2_TR(0x72e0e2);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72e0e4:{NFSU2_TR(0x72e0e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72e0ef;}}
}
B72e0e6:L72e0e6:{c.instructions+=3;NFSU2_TR(0x72e0e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B72e0ea:{NFSU2_TR(0x72e0ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72e0ed:{NFSU2_TR(0x72e0ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72e0f3;}}
}
B72e0ef:L72e0ef:{c.instructions+=1;NFSU2_TR(0x72e0ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff7ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72e0f3:L72e0f3:{c.instructions+=2;NFSU2_TR(0x72e0f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72e0f5:{NFSU2_TR(0x72e0f5);
if(r1(R+518)){{goto L72e83d;}}
}
B72e0fb:L72e0fb:{c.instructions+=13;NFSU2_TR(0x72e0fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e0fe:{NFSU2_TR(0x72e0fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e101:{NFSU2_TR(0x72e101);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B72e105:{NFSU2_TR(0x72e105);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72e107:{NFSU2_TR(0x72e107);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72e10a:{NFSU2_TR(0x72e10a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e10b:{NFSU2_TR(0x72e10b);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e10d:{NFSU2_TR(0x72e10d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6ccull))));
__builtin_memmove((R+28),(U+0),4);
}
B72e113:{NFSU2_TR(0x72e113);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B72e115:{NFSU2_TR(0x72e115);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72e119:{NFSU2_TR(0x72e119);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e11c:{NFSU2_TR(0x72e11c);
w4(R+4,u32(0x240ull));
}
B72e121:{NFSU2_TR(0x72e121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72e122:L72e122:{c.instructions+=1;NFSU2_TR(0x72e122);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L72e124;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e122u);}goto L72e122;}
}
B72e124:L72e124:{c.instructions+=1;NFSU2_TR(0x72e124);
if(r1(R+518)){{goto L72e5f6;}}
}
B72e12a:L72e12a:{c.instructions+=2;NFSU2_TR(0x72e12a);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72e12e:{NFSU2_TR(0x72e12e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72e5f6;}}
}
B72e134:L72e134:{c.instructions+=4;NFSU2_TR(0x72e134);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e138:{NFSU2_TR(0x72e138);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e13b:{NFSU2_TR(0x72e13b);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72e13f:{NFSU2_TR(0x72e13f);
if(r1(R+518)){{goto L72e432;}}
}
B72e145:L72e145:{c.instructions+=12;NFSU2_TR(0x72e145);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e148:{NFSU2_TR(0x72e148);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e14c:{NFSU2_TR(0x72e14c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e14f:{NFSU2_TR(0x72e14f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cf080ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72e156:{NFSU2_TR(0x72e156);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e159:{NFSU2_TR(0x72e159);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cf081ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72e160:{NFSU2_TR(0x72e160);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cf082ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e167:{NFSU2_TR(0x72e167);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e16a:{NFSU2_TR(0x72e16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e16d:{NFSU2_TR(0x72e16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e170:{NFSU2_TR(0x72e170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e173:{NFSU2_TR(0x72e173);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72e17a:L72e17a:{c.instructions+=7;NFSU2_TR(0x72e17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e17d:{NFSU2_TR(0x72e17d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e17f:{NFSU2_TR(0x72e17f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72e180:{NFSU2_TR(0x72e180);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e182:{NFSU2_TR(0x72e182);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72e183:{NFSU2_TR(0x72e183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72e184:{NFSU2_TR(0x72e184);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e187:L72e187:{c.instructions+=11;NFSU2_TR(0x72e187);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e18a:{NFSU2_TR(0x72e18a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72e18d:{NFSU2_TR(0x72e18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72e190:{NFSU2_TR(0x72e190);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cf076ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e197:{NFSU2_TR(0x72e197);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cf077ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72e19e:{NFSU2_TR(0x72e19e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72e1a0:{NFSU2_TR(0x72e1a0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B72e1a3:{NFSU2_TR(0x72e1a3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e1a5:{NFSU2_TR(0x72e1a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e1a8:{NFSU2_TR(0x72e1a8);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72e1ac:{NFSU2_TR(0x72e1ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72e1d8;}}
}
B72e1ae:L72e1ae:{c.instructions+=2;NFSU2_TR(0x72e1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72e1b1:{NFSU2_TR(0x72e1b1);
u8 U[12];
w4(U+0,u32(u32(u32(0x900ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72e1b8:L72e1b8:{c.instructions+=6;NFSU2_TR(0x72e1b8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e1be:{NFSU2_TR(0x72e1be);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e1c0:{NFSU2_TR(0x72e1c0);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B72e1c2:{NFSU2_TR(0x72e1c2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72e1c4:{NFSU2_TR(0x72e1c4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72e1c7:{NFSU2_TR(0x72e1c7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L72e1d0;}}
}
B72e1c9:L72e1c9:{c.instructions+=4;NFSU2_TR(0x72e1c9);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e1cb:{NFSU2_TR(0x72e1cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72e1cc:{NFSU2_TR(0x72e1cc);
__builtin_memmove((R+12),(R+8),4);
}
B72e1ce:{NFSU2_TR(0x72e1ce);
__builtin_memmove((R+8),(R+4),4);
}
B72e1d0:L72e1d0:{c.instructions+=4;NFSU2_TR(0x72e1d0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B72e1d1:{NFSU2_TR(0x72e1d1);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B72e1d4:{NFSU2_TR(0x72e1d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e1d6:{NFSU2_TR(0x72e1d6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e1b8u);}goto L72e1b8;}}
}
B72e1d8:L72e1d8:{c.instructions+=3;NFSU2_TR(0x72e1d8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B72e1d9:{NFSU2_TR(0x72e1d9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72e1dc:{NFSU2_TR(0x72e1dc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e187u);}goto L72e187;}}
}
B72e1de:L72e1de:{c.instructions+=4;NFSU2_TR(0x72e1de);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72e1e1:{NFSU2_TR(0x72e1e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72e1e4:{NFSU2_TR(0x72e1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e1e7:{NFSU2_TR(0x72e1e7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72e1ec;}}
}
B72e1e9:L72e1e9:{c.instructions+=1;NFSU2_TR(0x72e1e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e1ec:L72e1ec:{c.instructions+=2;NFSU2_TR(0x72e1ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72e1ef:{NFSU2_TR(0x72e1ef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72e289;}}
}
B72e1f5:L72e1f5:{c.instructions+=5;NFSU2_TR(0x72e1f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e1f9:{NFSU2_TR(0x72e1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72e1fc:{NFSU2_TR(0x72e1fc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e1ff:{NFSU2_TR(0x72e1ff);
u8 U[12];
w4(U+0,u32(u32(u32(0x7cf077ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72e206:{NFSU2_TR(0x72e206);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e209:L72e209:{c.instructions+=10;NFSU2_TR(0x72e209);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72e20c:{NFSU2_TR(0x72e20c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e210:{NFSU2_TR(0x72e210);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B72e213:{NFSU2_TR(0x72e213);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72e215:{NFSU2_TR(0x72e215);
__builtin_memmove((R+12),(R+4),4);
}
B72e217:{NFSU2_TR(0x72e217);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B72e21b:{NFSU2_TR(0x72e21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e21e:{NFSU2_TR(0x72e21e);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B72e220:{NFSU2_TR(0x72e220);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e222:{NFSU2_TR(0x72e222);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72e27d;}}
}
B72e224:L72e224:{c.instructions+=7;NFSU2_TR(0x72e224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e227:{NFSU2_TR(0x72e227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72e22a:{NFSU2_TR(0x72e22a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B72e22c:{NFSU2_TR(0x72e22c);
u8 U[14];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B72e234:{NFSU2_TR(0x72e234);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff6ccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72e23b:{NFSU2_TR(0x72e23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e23e:{NFSU2_TR(0x72e23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e241:L72e241:{c.instructions+=1;NFSU2_TR(0x72e241);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L72e243;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e241u);}goto L72e241;}
}
B72e243:L72e243:{c.instructions+=2;NFSU2_TR(0x72e243);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72e247:{NFSU2_TR(0x72e247);
if(r1(R+518)){{goto L72e277;}}
}
B72e249:L72e249:{c.instructions+=2;NFSU2_TR(0x72e249);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72e24d:{NFSU2_TR(0x72e24d);
if(r1(R+518)){{goto L72e266;}}
}
B72e24f:L72e24f:{c.instructions+=7;NFSU2_TR(0x72e24f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffdbccull))));
__builtin_memmove((R+0),(U+0),4);
}
B72e255:{NFSU2_TR(0x72e255);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e256:{NFSU2_TR(0x72e256);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e257:{NFSU2_TR(0x72e257);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72e25a:{NFSU2_TR(0x72e25a);
__builtin_memmove((R+4),(R+24),4);
}
B72e25c:{NFSU2_TR(0x72e25c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72e25f:{NFSU2_TR(0x72e25f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72e264ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e059u);}goto L72e059;}
}
B72e264:L72e264:{c.instructions+=1;NFSU2_TR(0x72e264);
{goto L72e277;}
}
B72e266:L72e266:{c.instructions+=3;NFSU2_TR(0x72e266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e269:{NFSU2_TR(0x72e269);
{u32 ea_=u32((r4(R+0)*4u)+u32(8188336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e270:{NFSU2_TR(0x72e270);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4294962636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e277:L72e277:{c.instructions+=3;NFSU2_TR(0x72e277);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B72e278:{NFSU2_TR(0x72e278);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72e27b:{NFSU2_TR(0x72e27b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e243u);}goto L72e243;}}
}
B72e27d:L72e27d:{c.instructions+=4;NFSU2_TR(0x72e27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e280:{NFSU2_TR(0x72e280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e283:{NFSU2_TR(0x72e283);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xcull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72e287:{NFSU2_TR(0x72e287);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e209u);}goto L72e209;}}
}
B72e289:L72e289:{c.instructions+=15;NFSU2_TR(0x72e289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72e28c:{NFSU2_TR(0x72e28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72e28f:{NFSU2_TR(0x72e28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72e292:{NFSU2_TR(0x72e292);
__builtin_memmove((R+0),(R+28),4);
}
B72e294:{NFSU2_TR(0x72e294);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B72e296:{NFSU2_TR(0x72e296);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B72e29a:{NFSU2_TR(0x72e29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72e29d:{NFSU2_TR(0x72e29d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B72e29f:{NFSU2_TR(0x72e29f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B72e2a1:{NFSU2_TR(0x72e2a1);
__builtin_memmove((R+4),(R+8),4);
}
B72e2a3:{NFSU2_TR(0x72e2a3);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B72e2a7:{NFSU2_TR(0x72e2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B72e2aa:{NFSU2_TR(0x72e2aa);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B72e2ac:{NFSU2_TR(0x72e2ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e2ae:{NFSU2_TR(0x72e2ae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72e2ff;}}
}
B72e2b0:L72e2b0:{c.instructions+=4;NFSU2_TR(0x72e2b0);
__builtin_memmove((R+28),(R+0),4);
}
B72e2b2:{NFSU2_TR(0x72e2b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72e2b5:{NFSU2_TR(0x72e2b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B72e2b8:{NFSU2_TR(0x72e2b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72e2bb:L72e2bb:{c.instructions+=4;NFSU2_TR(0x72e2bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72e2bd:{NFSU2_TR(0x72e2bd);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffff6ccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B72e2c4:{NFSU2_TR(0x72e2c4);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffff6ccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72e2cb:{NFSU2_TR(0x72e2cb);
if(r1(R+518)){{goto L72e2eb;}}
}
B72e2cd:L72e2cd:{c.instructions+=5;NFSU2_TR(0x72e2cd);
{u32 ea_=u32(r4(R+28)+r4(R+20)+u32(4294958028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e2d4:{NFSU2_TR(0x72e2d4);
{u32 ea_=u32(r4(R+4)+r4(R+20)+u32(4294958028u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e2db:{NFSU2_TR(0x72e2db);
{u32 ea_=u32(r4(R+28)+r4(R+20)+u32(4294960332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e2e2:{NFSU2_TR(0x72e2e2);
{u32 ea_=u32(r4(R+4)+r4(R+20)+u32(4294960332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e2e9:{NFSU2_TR(0x72e2e9);
{goto L72e2f9;}
}
B72e2eb:L72e2eb:{c.instructions+=2;NFSU2_TR(0x72e2eb);
{u32 ea_=u32(r4(R+28)+r4(R+20)+u32(4294962636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e2f2:{NFSU2_TR(0x72e2f2);
{u32 ea_=u32(r4(R+4)+r4(R+20)+u32(4294962636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e2f9:L72e2f9:{c.instructions+=3;NFSU2_TR(0x72e2f9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72e2fc:{NFSU2_TR(0x72e2fc);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B72e2fd:{NFSU2_TR(0x72e2fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e2bbu);}goto L72e2bb;}}
}
B72e2ff:L72e2ff:{c.instructions+=5;NFSU2_TR(0x72e2ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e303:{NFSU2_TR(0x72e303);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3eull))));
}
B72e307:{NFSU2_TR(0x72e307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e30a:{NFSU2_TR(0x72e30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e30d:{NFSU2_TR(0x72e30d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e17au);}goto L72e17a;}}
}
B72e313:L72e313:{c.instructions+=2;NFSU2_TR(0x72e313);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72e317:{NFSU2_TR(0x72e317);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72e785;}}
}
B72e31d:L72e31d:{c.instructions+=6;NFSU2_TR(0x72e31d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e321:{NFSU2_TR(0x72e321);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e323:{NFSU2_TR(0x72e323);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72e324:{NFSU2_TR(0x72e324);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e326:{NFSU2_TR(0x72e326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72e327:{NFSU2_TR(0x72e327);
w4(R+28,u32(0x264ull));
}
B72e32c:L72e32c:{c.instructions+=8;NFSU2_TR(0x72e32c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e332:{NFSU2_TR(0x72e332);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72e335:{NFSU2_TR(0x72e335);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e338:{NFSU2_TR(0x72e338);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e33b:{NFSU2_TR(0x72e33b);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B72e33d:{NFSU2_TR(0x72e33d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72e33f:{NFSU2_TR(0x72e33f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72e342:{NFSU2_TR(0x72e342);
if(r1(R+514)){{goto L72e3b1;}}
}
B72e344:L72e344:{c.instructions+=2;NFSU2_TR(0x72e344);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B72e345:{NFSU2_TR(0x72e345);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L72e34e;}}
}
B72e347:L72e347:{c.instructions+=4;NFSU2_TR(0x72e347);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e349:{NFSU2_TR(0x72e349);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B72e34a:{NFSU2_TR(0x72e34a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x12ull))));
}
B72e34d:{NFSU2_TR(0x72e34d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72e34e:L72e34e:{c.instructions+=2;NFSU2_TR(0x72e34e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x240ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x240ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72e354:{NFSU2_TR(0x72e354);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e32cu);}goto L72e32c;}}
}
B72e356:L72e356:{c.instructions+=1;NFSU2_TR(0x72e356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72e359:L72e359:{c.instructions+=7;NFSU2_TR(0x72e359);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72e35d:{NFSU2_TR(0x72e35d);
__builtin_memmove((R+0),(R+4),4);
}
B72e35f:{NFSU2_TR(0x72e35f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1eull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e362:{NFSU2_TR(0x72e362);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7cf048ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(s32(s16(r2(U+8)))));
}
B72e36a:{NFSU2_TR(0x72e36a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72e36c:{NFSU2_TR(0x72e36c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72e36e:{NFSU2_TR(0x72e36e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72e383;}}
}
B72e370:L72e370:{c.instructions+=2;NFSU2_TR(0x72e370);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B72e373:{NFSU2_TR(0x72e373);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7cf048ull))));
}
B72e379:L72e379:{c.instructions+=6;NFSU2_TR(0x72e379);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72e37a:{NFSU2_TR(0x72e37a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72e37b:{NFSU2_TR(0x72e37b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72e37c:{NFSU2_TR(0x72e37c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B72e37f:{NFSU2_TR(0x72e37f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72e381:{NFSU2_TR(0x72e381);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e379u);}goto L72e379;}}
}
B72e383:L72e383:{c.instructions+=6;NFSU2_TR(0x72e383);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B72e385:{NFSU2_TR(0x72e385);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72e388:{NFSU2_TR(0x72e388);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7cf048ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B72e390:{NFSU2_TR(0x72e390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e393:{NFSU2_TR(0x72e393);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e396:{NFSU2_TR(0x72e396);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72e785;}}
}
B72e39c:L72e39c:{c.instructions+=6;NFSU2_TR(0x72e39c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e3a0:{NFSU2_TR(0x72e3a0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1eull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e3a3:{NFSU2_TR(0x72e3a3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B72e3a5:{NFSU2_TR(0x72e3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7cf048ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e3ac:{NFSU2_TR(0x72e3ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e3af:{NFSU2_TR(0x72e3af);
{goto L72e3bc;}
}
B72e3b1:L72e3b1:{c.instructions+=3;NFSU2_TR(0x72e3b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e3b4:{NFSU2_TR(0x72e3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B72e3b7:{NFSU2_TR(0x72e3b7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e359u);}goto L72e359;}
}
B72e3b9:L72e3b9:{c.instructions+=1;NFSU2_TR(0x72e3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e3bc:L72e3bc:{c.instructions+=5;NFSU2_TR(0x72e3bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B72e3c0:{NFSU2_TR(0x72e3c0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B72e3c3:{NFSU2_TR(0x72e3c3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72e3c5:{NFSU2_TR(0x72e3c5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e3c7:{NFSU2_TR(0x72e3c7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72e420;}}
}
B72e3c9:L72e3c9:{c.instructions+=6;NFSU2_TR(0x72e3c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e3cc:{NFSU2_TR(0x72e3cc);
u8 U[14];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+12,u32(s32(s16(r2(U+12)))));
}
B72e3d4:{NFSU2_TR(0x72e3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72e3d7:{NFSU2_TR(0x72e3d7);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff6ccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72e3de:{NFSU2_TR(0x72e3de);
__builtin_memmove((R+0),(R+12),4);
}
B72e3e0:{NFSU2_TR(0x72e3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e3e3:L72e3e3:{c.instructions+=1;NFSU2_TR(0x72e3e3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L72e3e5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e3e3u);}goto L72e3e3;}
}
B72e3e5:L72e3e5:{c.instructions+=2;NFSU2_TR(0x72e3e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72e3e8:{NFSU2_TR(0x72e3e8);
if(r1(R+518)){{goto L72e418;}}
}
B72e3ea:L72e3ea:{c.instructions+=2;NFSU2_TR(0x72e3ea);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72e3ee:{NFSU2_TR(0x72e3ee);
if(r1(R+518)){{goto L72e407;}}
}
B72e3f0:L72e3f0:{c.instructions+=7;NFSU2_TR(0x72e3f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffdbccull))));
__builtin_memmove((R+0),(U+0),4);
}
B72e3f6:{NFSU2_TR(0x72e3f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e3f7:{NFSU2_TR(0x72e3f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72e3fa:{NFSU2_TR(0x72e3fa);
__builtin_memmove((R+4),(R+24),4);
}
B72e3fc:{NFSU2_TR(0x72e3fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72e3ff:{NFSU2_TR(0x72e3ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e400:{NFSU2_TR(0x72e400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72e405ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e059u);}goto L72e059;}
}
B72e405:L72e405:{c.instructions+=1;NFSU2_TR(0x72e405);
{goto L72e418;}
}
B72e407:L72e407:{c.instructions+=3;NFSU2_TR(0x72e407);
{u32 ea_=u32((r4(R+12)*4u)+u32(8188336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e40e:{NFSU2_TR(0x72e40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e411:{NFSU2_TR(0x72e411);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(4294962636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e418:L72e418:{c.instructions+=3;NFSU2_TR(0x72e418);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e41b:{NFSU2_TR(0x72e41b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72e41e:{NFSU2_TR(0x72e41e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e3e5u);}goto L72e3e5;}}
}
B72e420:L72e420:{c.instructions+=4;NFSU2_TR(0x72e420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e423:{NFSU2_TR(0x72e423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e427:{NFSU2_TR(0x72e427);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x8ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72e42b:{NFSU2_TR(0x72e42b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e3b9u);}goto L72e3b9;}}
}
B72e42d:L72e42d:{c.instructions+=1;NFSU2_TR(0x72e42d);
{goto L72e785;}
}
B72e432:L72e432:{c.instructions+=14;NFSU2_TR(0x72e432);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e435:{NFSU2_TR(0x72e435);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e439:{NFSU2_TR(0x72e439);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e43c:{NFSU2_TR(0x72e43c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cf080ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72e443:{NFSU2_TR(0x72e443);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e446:{NFSU2_TR(0x72e446);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cf081ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72e44d:{NFSU2_TR(0x72e44d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cf082ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e454:{NFSU2_TR(0x72e454);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B72e456:{NFSU2_TR(0x72e456);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e459:{NFSU2_TR(0x72e459);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e45c:{NFSU2_TR(0x72e45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e45f:{NFSU2_TR(0x72e45f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e462:{NFSU2_TR(0x72e462);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e465:{NFSU2_TR(0x72e465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72e46c:L72e46c:{c.instructions+=6;NFSU2_TR(0x72e46c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e46f:{NFSU2_TR(0x72e46f);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B72e472:{NFSU2_TR(0x72e472);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e474:{NFSU2_TR(0x72e474);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72e475:{NFSU2_TR(0x72e475);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72e476:{NFSU2_TR(0x72e476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e479:L72e479:{c.instructions+=11;NFSU2_TR(0x72e479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e47c:{NFSU2_TR(0x72e47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72e47f:{NFSU2_TR(0x72e47f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72e482:{NFSU2_TR(0x72e482);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cf076ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e489:{NFSU2_TR(0x72e489);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cf077ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72e490:{NFSU2_TR(0x72e490);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72e492:{NFSU2_TR(0x72e492);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B72e495:{NFSU2_TR(0x72e495);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e497:{NFSU2_TR(0x72e497);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e49a:{NFSU2_TR(0x72e49a);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72e49e:{NFSU2_TR(0x72e49e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72e4ca;}}
}
B72e4a0:L72e4a0:{c.instructions+=2;NFSU2_TR(0x72e4a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72e4a3:{NFSU2_TR(0x72e4a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x900ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72e4aa:L72e4aa:{c.instructions+=6;NFSU2_TR(0x72e4aa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e4b0:{NFSU2_TR(0x72e4b0);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e4b2:{NFSU2_TR(0x72e4b2);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B72e4b4:{NFSU2_TR(0x72e4b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72e4b6:{NFSU2_TR(0x72e4b6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72e4b9:{NFSU2_TR(0x72e4b9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L72e4c2;}}
}
B72e4bb:L72e4bb:{c.instructions+=4;NFSU2_TR(0x72e4bb);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e4bd:{NFSU2_TR(0x72e4bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72e4be:{NFSU2_TR(0x72e4be);
__builtin_memmove((R+12),(R+8),4);
}
B72e4c0:{NFSU2_TR(0x72e4c0);
__builtin_memmove((R+8),(R+4),4);
}
B72e4c2:L72e4c2:{c.instructions+=4;NFSU2_TR(0x72e4c2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B72e4c3:{NFSU2_TR(0x72e4c3);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B72e4c6:{NFSU2_TR(0x72e4c6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e4c8:{NFSU2_TR(0x72e4c8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e4aau);}goto L72e4aa;}}
}
B72e4ca:L72e4ca:{c.instructions+=2;NFSU2_TR(0x72e4ca);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B72e4cb:{NFSU2_TR(0x72e4cb);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e479u);}goto L72e479;}}
}
B72e4cd:L72e4cd:{c.instructions+=4;NFSU2_TR(0x72e4cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72e4d0:{NFSU2_TR(0x72e4d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72e4d3:{NFSU2_TR(0x72e4d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e4d6:{NFSU2_TR(0x72e4d6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72e570;}}
}
B72e4dc:L72e4dc:{c.instructions+=5;NFSU2_TR(0x72e4dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e4e0:{NFSU2_TR(0x72e4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72e4e3:{NFSU2_TR(0x72e4e3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e4e6:{NFSU2_TR(0x72e4e6);
u8 U[12];
w4(U+0,u32(u32(u32(0x7cf077ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72e4ed:{NFSU2_TR(0x72e4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e4f0:L72e4f0:{c.instructions+=10;NFSU2_TR(0x72e4f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72e4f3:{NFSU2_TR(0x72e4f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e4f7:{NFSU2_TR(0x72e4f7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B72e4fa:{NFSU2_TR(0x72e4fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72e4fd:{NFSU2_TR(0x72e4fd);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72e4ff:{NFSU2_TR(0x72e4ff);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B72e502:{NFSU2_TR(0x72e502);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e505:{NFSU2_TR(0x72e505);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B72e507:{NFSU2_TR(0x72e507);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e509:{NFSU2_TR(0x72e509);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72e564;}}
}
B72e50b:L72e50b:{c.instructions+=7;NFSU2_TR(0x72e50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e50e:{NFSU2_TR(0x72e50e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72e511:{NFSU2_TR(0x72e511);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B72e513:{NFSU2_TR(0x72e513);
u8 U[14];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B72e51b:{NFSU2_TR(0x72e51b);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff6ccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72e522:{NFSU2_TR(0x72e522);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e525:{NFSU2_TR(0x72e525);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e528:L72e528:{c.instructions+=1;NFSU2_TR(0x72e528);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L72e52a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e528u);}goto L72e528;}
}
B72e52a:L72e52a:{c.instructions+=2;NFSU2_TR(0x72e52a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72e52e:{NFSU2_TR(0x72e52e);
if(r1(R+518)){{goto L72e55e;}}
}
B72e530:L72e530:{c.instructions+=2;NFSU2_TR(0x72e530);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72e534:{NFSU2_TR(0x72e534);
if(r1(R+518)){{goto L72e54d;}}
}
B72e536:L72e536:{c.instructions+=7;NFSU2_TR(0x72e536);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffdbccull))));
__builtin_memmove((R+0),(U+0),4);
}
B72e53c:{NFSU2_TR(0x72e53c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e53d:{NFSU2_TR(0x72e53d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e53e:{NFSU2_TR(0x72e53e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72e541:{NFSU2_TR(0x72e541);
__builtin_memmove((R+4),(R+24),4);
}
B72e543:{NFSU2_TR(0x72e543);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72e546:{NFSU2_TR(0x72e546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72e54bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e059u);}goto L72e059;}
}
B72e54b:L72e54b:{c.instructions+=1;NFSU2_TR(0x72e54b);
{goto L72e55e;}
}
B72e54d:L72e54d:{c.instructions+=3;NFSU2_TR(0x72e54d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e550:{NFSU2_TR(0x72e550);
{u32 ea_=u32((r4(R+0)*4u)+u32(8188336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e557:{NFSU2_TR(0x72e557);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4294962636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e55e:L72e55e:{c.instructions+=3;NFSU2_TR(0x72e55e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B72e55f:{NFSU2_TR(0x72e55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72e562:{NFSU2_TR(0x72e562);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e52au);}goto L72e52a;}}
}
B72e564:L72e564:{c.instructions+=4;NFSU2_TR(0x72e564);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e567:{NFSU2_TR(0x72e567);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e56a:{NFSU2_TR(0x72e56a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xcull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72e56e:{NFSU2_TR(0x72e56e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e4f0u);}goto L72e4f0;}}
}
B72e570:L72e570:{c.instructions+=12;NFSU2_TR(0x72e570);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72e573:{NFSU2_TR(0x72e573);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e576:{NFSU2_TR(0x72e576);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72e579:{NFSU2_TR(0x72e579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72e57c:{NFSU2_TR(0x72e57c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B72e57e:{NFSU2_TR(0x72e57e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e581:{NFSU2_TR(0x72e581);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B72e584:{NFSU2_TR(0x72e584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B72e587:{NFSU2_TR(0x72e587);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72e58a:{NFSU2_TR(0x72e58a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B72e58c:{NFSU2_TR(0x72e58c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e58e:{NFSU2_TR(0x72e58e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72e5dd;}}
}
B72e590:L72e590:{c.instructions+=3;NFSU2_TR(0x72e590);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B72e593:{NFSU2_TR(0x72e593);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72e596:{NFSU2_TR(0x72e596);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72e599:L72e599:{c.instructions+=4;NFSU2_TR(0x72e599);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72e59b:{NFSU2_TR(0x72e59b);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffff6ccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B72e5a2:{NFSU2_TR(0x72e5a2);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffff6ccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72e5a9:{NFSU2_TR(0x72e5a9);
if(r1(R+518)){{goto L72e5c9;}}
}
B72e5ab:L72e5ab:{c.instructions+=5;NFSU2_TR(0x72e5ab);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294958028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e5b2:{NFSU2_TR(0x72e5b2);
{u32 ea_=u32(r4(R+4)+r4(R+20)+u32(4294958028u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e5b9:{NFSU2_TR(0x72e5b9);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294960332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e5c0:{NFSU2_TR(0x72e5c0);
{u32 ea_=u32(r4(R+4)+r4(R+20)+u32(4294960332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e5c7:{NFSU2_TR(0x72e5c7);
{goto L72e5d7;}
}
B72e5c9:L72e5c9:{c.instructions+=2;NFSU2_TR(0x72e5c9);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294962636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e5d0:{NFSU2_TR(0x72e5d0);
{u32 ea_=u32(r4(R+4)+r4(R+20)+u32(4294962636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e5d7:L72e5d7:{c.instructions+=3;NFSU2_TR(0x72e5d7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72e5da:{NFSU2_TR(0x72e5da);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B72e5db:{NFSU2_TR(0x72e5db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e599u);}goto L72e599;}}
}
B72e5dd:L72e5dd:{c.instructions+=5;NFSU2_TR(0x72e5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e5e1:{NFSU2_TR(0x72e5e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3eull))));
}
B72e5e5:{NFSU2_TR(0x72e5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e5e8:{NFSU2_TR(0x72e5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e5eb:{NFSU2_TR(0x72e5eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e46cu);}goto L72e46c;}}
}
B72e5f1:L72e5f1:{c.instructions+=1;NFSU2_TR(0x72e5f1);
{goto L72e785;}
}
B72e5f6:L72e5f6:{c.instructions+=6;NFSU2_TR(0x72e5f6);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e5f8:{NFSU2_TR(0x72e5f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72e5f9:{NFSU2_TR(0x72e5f9);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e5fb:{NFSU2_TR(0x72e5fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72e5fc:{NFSU2_TR(0x72e5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e5ff:{NFSU2_TR(0x72e5ff);
w4(R+28,u32(0x46eull));
}
B72e604:L72e604:{c.instructions+=8;NFSU2_TR(0x72e604);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e60a:{NFSU2_TR(0x72e60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72e60d:{NFSU2_TR(0x72e60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e610:{NFSU2_TR(0x72e610);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e613:{NFSU2_TR(0x72e613);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B72e615:{NFSU2_TR(0x72e615);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72e617:{NFSU2_TR(0x72e617);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72e61a:{NFSU2_TR(0x72e61a);
if(r1(R+514)){{goto L72e6d9;}}
}
B72e620:L72e620:{c.instructions+=2;NFSU2_TR(0x72e620);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B72e621:{NFSU2_TR(0x72e621);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L72e62a;}}
}
B72e623:L72e623:{c.instructions+=4;NFSU2_TR(0x72e623);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e625:{NFSU2_TR(0x72e625);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B72e626:{NFSU2_TR(0x72e626);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x12ull))));
}
B72e629:{NFSU2_TR(0x72e629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72e62a:L72e62a:{c.instructions+=2;NFSU2_TR(0x72e62a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x240ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x240ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72e630:{NFSU2_TR(0x72e630);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e604u);}goto L72e604;}}
}
B72e632:L72e632:{c.instructions+=1;NFSU2_TR(0x72e632);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72e635:L72e635:{c.instructions+=7;NFSU2_TR(0x72e635);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72e639:{NFSU2_TR(0x72e639);
__builtin_memmove((R+0),(R+4),4);
}
B72e63b:{NFSU2_TR(0x72e63b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1eull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e63e:{NFSU2_TR(0x72e63e);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7cf048ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(s32(s16(r2(U+8)))));
}
B72e646:{NFSU2_TR(0x72e646);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72e648:{NFSU2_TR(0x72e648);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72e64a:{NFSU2_TR(0x72e64a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72e65f;}}
}
B72e64c:L72e64c:{c.instructions+=2;NFSU2_TR(0x72e64c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B72e64f:{NFSU2_TR(0x72e64f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7cf048ull))));
}
B72e655:L72e655:{c.instructions+=6;NFSU2_TR(0x72e655);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72e656:{NFSU2_TR(0x72e656);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72e657:{NFSU2_TR(0x72e657);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72e658:{NFSU2_TR(0x72e658);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B72e65b:{NFSU2_TR(0x72e65b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72e65d:{NFSU2_TR(0x72e65d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e655u);}goto L72e655;}}
}
B72e65f:L72e65f:{c.instructions+=6;NFSU2_TR(0x72e65f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B72e661:{NFSU2_TR(0x72e661);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72e664:{NFSU2_TR(0x72e664);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7cf048ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B72e66c:{NFSU2_TR(0x72e66c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e66f:{NFSU2_TR(0x72e66f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e672:{NFSU2_TR(0x72e672);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72e70a;}}
}
B72e678:L72e678:{c.instructions+=5;NFSU2_TR(0x72e678);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e67c:{NFSU2_TR(0x72e67c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1eull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e67f:{NFSU2_TR(0x72e67f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B72e681:{NFSU2_TR(0x72e681);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7cf048ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e688:{NFSU2_TR(0x72e688);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e68b:L72e68b:{c.instructions+=6;NFSU2_TR(0x72e68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e68e:{NFSU2_TR(0x72e68e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B72e692:{NFSU2_TR(0x72e692);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B72e695:{NFSU2_TR(0x72e695);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72e697:{NFSU2_TR(0x72e697);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e699:{NFSU2_TR(0x72e699);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72e6fd;}}
}
B72e69b:L72e69b:{c.instructions+=6;NFSU2_TR(0x72e69b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e69e:{NFSU2_TR(0x72e69e);
u8 U[14];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+12,u32(s32(s16(r2(U+12)))));
}
B72e6a6:{NFSU2_TR(0x72e6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72e6a9:{NFSU2_TR(0x72e6a9);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff6ccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72e6b0:{NFSU2_TR(0x72e6b0);
__builtin_memmove((R+0),(R+12),4);
}
B72e6b2:{NFSU2_TR(0x72e6b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e6b5:L72e6b5:{c.instructions+=1;NFSU2_TR(0x72e6b5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L72e6b7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e6b5u);}goto L72e6b5;}
}
B72e6b7:L72e6b7:{c.instructions+=2;NFSU2_TR(0x72e6b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72e6ba:{NFSU2_TR(0x72e6ba);
if(r1(R+518)){{goto L72e6f5;}}
}
B72e6bc:L72e6bc:{c.instructions+=2;NFSU2_TR(0x72e6bc);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72e6c0:{NFSU2_TR(0x72e6c0);
if(r1(R+518)){{goto L72e6e4;}}
}
B72e6c2:L72e6c2:{c.instructions+=7;NFSU2_TR(0x72e6c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffdbccull))));
__builtin_memmove((R+0),(U+0),4);
}
B72e6c8:{NFSU2_TR(0x72e6c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e6c9:{NFSU2_TR(0x72e6c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72e6cc:{NFSU2_TR(0x72e6cc);
__builtin_memmove((R+4),(R+24),4);
}
B72e6ce:{NFSU2_TR(0x72e6ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72e6d1:{NFSU2_TR(0x72e6d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e6d2:{NFSU2_TR(0x72e6d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72e6d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e059u);}goto L72e059;}
}
B72e6d7:L72e6d7:{c.instructions+=1;NFSU2_TR(0x72e6d7);
{goto L72e6f5;}
}
B72e6d9:L72e6d9:{c.instructions+=3;NFSU2_TR(0x72e6d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e6dc:{NFSU2_TR(0x72e6dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B72e6df:{NFSU2_TR(0x72e6df);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e635u);}goto L72e635;}
}
B72e6e4:L72e6e4:{c.instructions+=3;NFSU2_TR(0x72e6e4);
{u32 ea_=u32((r4(R+12)*4u)+u32(8188336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e6eb:{NFSU2_TR(0x72e6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e6ee:{NFSU2_TR(0x72e6ee);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(4294962636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e6f5:L72e6f5:{c.instructions+=3;NFSU2_TR(0x72e6f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e6f8:{NFSU2_TR(0x72e6f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72e6fb:{NFSU2_TR(0x72e6fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e6b7u);}goto L72e6b7;}}
}
B72e6fd:L72e6fd:{c.instructions+=4;NFSU2_TR(0x72e6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e700:{NFSU2_TR(0x72e700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e704:{NFSU2_TR(0x72e704);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x15ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72e708:{NFSU2_TR(0x72e708);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e68bu);}goto L72e68b;}}
}
B72e70a:L72e70a:{c.instructions+=8;NFSU2_TR(0x72e70a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e70e:{NFSU2_TR(0x72e70e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e711:{NFSU2_TR(0x72e711);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cf070ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B72e718:{NFSU2_TR(0x72e718);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cf072ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B72e71f:{NFSU2_TR(0x72e71f);
w4(R+8,u32(0x240ull));
}
B72e724:{NFSU2_TR(0x72e724);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B72e726:{NFSU2_TR(0x72e726);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e728:{NFSU2_TR(0x72e728);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72e785;}}
}
B72e72a:L72e72a:{c.instructions+=2;NFSU2_TR(0x72e72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72e72d:{NFSU2_TR(0x72e72d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72e730:L72e730:{c.instructions+=2;NFSU2_TR(0x72e730);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x900ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x900ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72e736:{NFSU2_TR(0x72e736);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72e785;}}
}
B72e738:L72e738:{c.instructions+=6;NFSU2_TR(0x72e738);
__builtin_memmove((R+0),(R+28),4);
}
B72e73a:{NFSU2_TR(0x72e73a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72e73d:{NFSU2_TR(0x72e73d);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72e741:{NFSU2_TR(0x72e741);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffff6ccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B72e748:{NFSU2_TR(0x72e748);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffff6ccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72e74f:{NFSU2_TR(0x72e74f);
if(r1(R+518)){{goto L72e76f;}}
}
B72e751:L72e751:{c.instructions+=5;NFSU2_TR(0x72e751);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294958028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e758:{NFSU2_TR(0x72e758);
{u32 ea_=u32(r4(R+4)+r4(R+20)+u32(4294958028u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e75f:{NFSU2_TR(0x72e75f);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294960332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e766:{NFSU2_TR(0x72e766);
{u32 ea_=u32(r4(R+4)+r4(R+20)+u32(4294960332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e76d:{NFSU2_TR(0x72e76d);
{goto L72e77d;}
}
B72e76f:L72e76f:{c.instructions+=2;NFSU2_TR(0x72e76f);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294962636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e776:{NFSU2_TR(0x72e776);
{u32 ea_=u32(r4(R+4)+r4(R+20)+u32(4294962636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e77d:L72e77d:{c.instructions+=4;NFSU2_TR(0x72e77d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72e780:{NFSU2_TR(0x72e780);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B72e781:{NFSU2_TR(0x72e781);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e783:{NFSU2_TR(0x72e783);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e730u);}goto L72e730;}}
}
B72e785:L72e785:{c.instructions+=4;NFSU2_TR(0x72e785);
{u32 ea_=u32(u32(8189320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e78b:{NFSU2_TR(0x72e78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72e78e:{NFSU2_TR(0x72e78e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72e790:{NFSU2_TR(0x72e790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e793:L72e793:{c.instructions+=1;NFSU2_TR(0x72e793);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72e795:L72e795:{c.instructions+=4;NFSU2_TR(0x72e795);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72e798:{NFSU2_TR(0x72e798);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B72e79b:{NFSU2_TR(0x72e79b);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffff6ccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B72e7a3:{NFSU2_TR(0x72e7a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72e7cb;}}
}
B72e7a5:L72e7a5:{c.instructions+=2;NFSU2_TR(0x72e7a5);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72e7a9:{NFSU2_TR(0x72e7a9);
if(r1(R+518)){{goto L72e81c;}}
}
B72e7ab:L72e7ab:{c.instructions+=12;NFSU2_TR(0x72e7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72e7ae:{NFSU2_TR(0x72e7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72e7b1:{NFSU2_TR(0x72e7b1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e7b3:{NFSU2_TR(0x72e7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B72e7b6:{NFSU2_TR(0x72e7b6);
u8 U[12];
w4(U+0,u32(u32(u32(0x900ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B72e7bd:{NFSU2_TR(0x72e7bd);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72e7bf:{NFSU2_TR(0x72e7bf);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72e7c1:{NFSU2_TR(0x72e7c1);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e7c3:{NFSU2_TR(0x72e7c3);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72e7c5:{NFSU2_TR(0x72e7c5);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72e7c7:{NFSU2_TR(0x72e7c7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e7c9:{NFSU2_TR(0x72e7c9);
{goto L72e81a;}
}
B72e7cb:L72e7cb:{c.instructions+=4;NFSU2_TR(0x72e7cb);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72e7cf:{NFSU2_TR(0x72e7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B72e7d2:{NFSU2_TR(0x72e7d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B72e7d5:{NFSU2_TR(0x72e7d5);
if(r1(R+518)){{goto L72e7f7;}}
}
B72e7d7:L72e7d7:{c.instructions+=8;NFSU2_TR(0x72e7d7);
{u32 ea_=u32(r4(R+8)+r4(R+20)+u32(4294960332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e7de:{NFSU2_TR(0x72e7de);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72e7e0:{NFSU2_TR(0x72e7e0);
{u32 ea_=u32(r4(R+8)+r4(R+20)+u32(4294958028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e7e7:{NFSU2_TR(0x72e7e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72e7ea:{NFSU2_TR(0x72e7ea);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72e7ec:{NFSU2_TR(0x72e7ec);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e7ee:{NFSU2_TR(0x72e7ee);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+28)+u32(2304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e7f5:{NFSU2_TR(0x72e7f5);
{goto L72e81c;}
}
B72e7f7:L72e7f7:{c.instructions+=9;NFSU2_TR(0x72e7f7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffedccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B72e7fe:{NFSU2_TR(0x72e7fe);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e800:{NFSU2_TR(0x72e800);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e803:{NFSU2_TR(0x72e803);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72e809:{NFSU2_TR(0x72e809);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72e80c:{NFSU2_TR(0x72e80c);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B72e80e:{NFSU2_TR(0x72e80e);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+28)+u32(2304u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72e815:{NFSU2_TR(0x72e815);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72e818:{NFSU2_TR(0x72e818);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72e81a:L72e81a:{c.instructions+=1;NFSU2_TR(0x72e81a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e81c:L72e81c:{c.instructions+=4;NFSU2_TR(0x72e81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e81f:{NFSU2_TR(0x72e81f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72e820:{NFSU2_TR(0x72e820);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x12ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72e823:{NFSU2_TR(0x72e823);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e795u);}goto L72e795;}}
}
B72e829:L72e829:{c.instructions+=3;NFSU2_TR(0x72e829);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x12ull))));
}
B72e82c:{NFSU2_TR(0x72e82c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x240ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x240ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x240ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72e832:{NFSU2_TR(0x72e832);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e793u);}goto L72e793;}}
}
B72e838:L72e838:{c.instructions+=3;NFSU2_TR(0x72e838);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72e83a:{NFSU2_TR(0x72e83a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72e83b:{NFSU2_TR(0x72e83b);
{goto L72e84b;}
}
B72e83d:L72e83d:{c.instructions+=2;NFSU2_TR(0x72e83d);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72e841:{NFSU2_TR(0x72e841);
if(r1(R+518)){{goto L72e84b;}}
}
B72e843:L72e843:{c.instructions+=2;NFSU2_TR(0x72e843);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e846:{NFSU2_TR(0x72e846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72e84bull));
TAIL_STATIC(0x72dfd0u,72d);
}
B72e84b:L72e84b:{c.instructions+=4;NFSU2_TR(0x72e84b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72e84c:{NFSU2_TR(0x72e84c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72e84d:{NFSU2_TR(0x72e84d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72e84e:{NFSU2_TR(0x72e84e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72e851:L72e851:{c.instructions+=10;NFSU2_TR(0x72e851);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e852:{NFSU2_TR(0x72e852);
__builtin_memmove((R+20),(R+16),4);
}
B72e854:{NFSU2_TR(0x72e854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B72e857:{NFSU2_TR(0x72e857);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e85a:{NFSU2_TR(0x72e85a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72e85d:{NFSU2_TR(0x72e85d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e860:{NFSU2_TR(0x72e860);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e863:{NFSU2_TR(0x72e863);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72e867:{NFSU2_TR(0x72e867);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72e86b:{NFSU2_TR(0x72e86b);
if(r1(R+518)){{goto L72ea62;}}
}
B72e871:L72e871:{c.instructions+=2;NFSU2_TR(0x72e871);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B72e875:{NFSU2_TR(0x72e875);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72ea62;}}
}
B72e87b:L72e87b:{c.instructions+=6;NFSU2_TR(0x72e87b);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72e87f:{NFSU2_TR(0x72e87f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e880:{NFSU2_TR(0x72e880);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e881:{NFSU2_TR(0x72e881);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e882:{NFSU2_TR(0x72e882);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72e884:{NFSU2_TR(0x72e884);
if(r1(R+518)){{goto L72e92e;}}
}
B72e88a:L72e88a:{c.instructions+=5;NFSU2_TR(0x72e88a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72e88d:{NFSU2_TR(0x72e88d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e890:{NFSU2_TR(0x72e890);
__builtin_memmove((R+8),(R+28),4);
}
B72e892:{NFSU2_TR(0x72e892);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B72e894:{NFSU2_TR(0x72e894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72e895:L72e895:{c.instructions+=5;NFSU2_TR(0x72e895);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e898:{NFSU2_TR(0x72e898);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e89a:{NFSU2_TR(0x72e89a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B72e89d:{NFSU2_TR(0x72e89d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B72e89e:{NFSU2_TR(0x72e89e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e895u);}goto L72e895;}}
}
B72e8a0:L72e8a0:{c.instructions+=6;NFSU2_TR(0x72e8a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e8a4:{NFSU2_TR(0x72e8a4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e8a7:{NFSU2_TR(0x72e8a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cf079ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B72e8ae:{NFSU2_TR(0x72e8ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cf07aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e8b5:{NFSU2_TR(0x72e8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72e8bc:{NFSU2_TR(0x72e8bc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B72e8be:L72e8be:{c.instructions+=3;NFSU2_TR(0x72e8be);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e8c0:{NFSU2_TR(0x72e8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72e8c3:{NFSU2_TR(0x72e8c3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72e904;}}
}
B72e8c5:L72e8c5:{c.instructions+=9;NFSU2_TR(0x72e8c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B72e8c8:{NFSU2_TR(0x72e8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e8cb:{NFSU2_TR(0x72e8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e8ce:{NFSU2_TR(0x72e8ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B72e8d1:{NFSU2_TR(0x72e8d1);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B72e8d5:{NFSU2_TR(0x72e8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72e8d8:{NFSU2_TR(0x72e8d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B72e8db:{NFSU2_TR(0x72e8db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72e8de:{NFSU2_TR(0x72e8de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e8e1:L72e8e1:{c.instructions+=13;NFSU2_TR(0x72e8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e8e4:{NFSU2_TR(0x72e8e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72e8e6:{NFSU2_TR(0x72e8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e8ea:{NFSU2_TR(0x72e8ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e8ed:{NFSU2_TR(0x72e8ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72e8ef:{NFSU2_TR(0x72e8ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B72e8f1:{NFSU2_TR(0x72e8f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72e8f3:{NFSU2_TR(0x72e8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e8f6:{NFSU2_TR(0x72e8f6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B72e8f9:{NFSU2_TR(0x72e8f9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B72e8fc:{NFSU2_TR(0x72e8fc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B72e8ff:{NFSU2_TR(0x72e8ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72e902:{NFSU2_TR(0x72e902);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e8e1u);}goto L72e8e1;}}
}
B72e904:L72e904:{c.instructions+=10;NFSU2_TR(0x72e904);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e908:{NFSU2_TR(0x72e908);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e90b:{NFSU2_TR(0x72e90b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72e90e:{NFSU2_TR(0x72e90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72e911:{NFSU2_TR(0x72e911);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B72e913:{NFSU2_TR(0x72e913);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cf076ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B72e91a:{NFSU2_TR(0x72e91a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cf077ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e921:{NFSU2_TR(0x72e921);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B72e923:{NFSU2_TR(0x72e923);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xdull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72e927:{NFSU2_TR(0x72e927);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e8beu);}goto L72e8be;}}
}
B72e929:L72e929:{c.instructions+=1;NFSU2_TR(0x72e929);
{goto L72ea5f;}
}
B72e92e:L72e92e:{c.instructions+=14;NFSU2_TR(0x72e92e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72e932:{NFSU2_TR(0x72e932);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72e935:{NFSU2_TR(0x72e935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72e938:{NFSU2_TR(0x72e938);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e93c:{NFSU2_TR(0x72e93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e93f:{NFSU2_TR(0x72e93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7cf58cull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e946:{NFSU2_TR(0x72e946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e949:{NFSU2_TR(0x72e949);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e94c:{NFSU2_TR(0x72e94c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72e94d:{NFSU2_TR(0x72e94d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e950:{NFSU2_TR(0x72e950);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72e953:{NFSU2_TR(0x72e953);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72e956:{NFSU2_TR(0x72e956);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72e95d:{NFSU2_TR(0x72e95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e960:L72e960:{c.instructions+=29;NFSU2_TR(0x72e960);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e963:{NFSU2_TR(0x72e963);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e966:{NFSU2_TR(0x72e966);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e969:{NFSU2_TR(0x72e969);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e96c:{NFSU2_TR(0x72e96c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B72e96e:{NFSU2_TR(0x72e96e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72e970:{NFSU2_TR(0x72e970);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e973:{NFSU2_TR(0x72e973);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e976:{NFSU2_TR(0x72e976);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e979:{NFSU2_TR(0x72e979);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e97c:{NFSU2_TR(0x72e97c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e97f:{NFSU2_TR(0x72e97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e982:{NFSU2_TR(0x72e982);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e985:{NFSU2_TR(0x72e985);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e988:{NFSU2_TR(0x72e988);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e98b:{NFSU2_TR(0x72e98b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e98e:{NFSU2_TR(0x72e98e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72e991:{NFSU2_TR(0x72e991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e994:{NFSU2_TR(0x72e994);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72e997:{NFSU2_TR(0x72e997);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e99a:{NFSU2_TR(0x72e99a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e99d:{NFSU2_TR(0x72e99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e9a0:{NFSU2_TR(0x72e9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e9a3:{NFSU2_TR(0x72e9a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72e9a6:{NFSU2_TR(0x72e9a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e9a9:{NFSU2_TR(0x72e9a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B72e9ac:{NFSU2_TR(0x72e9ac);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B72e9af:{NFSU2_TR(0x72e9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72e9b2:{NFSU2_TR(0x72e9b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e960u);}goto L72e960;}}
}
B72e9b4:L72e9b4:{c.instructions+=8;NFSU2_TR(0x72e9b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e9b7:{NFSU2_TR(0x72e9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72e9ba:{NFSU2_TR(0x72e9ba);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B72e9be:{NFSU2_TR(0x72e9be);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72e9c0:{NFSU2_TR(0x72e9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B72e9c3:{NFSU2_TR(0x72e9c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e9c6:{NFSU2_TR(0x72e9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e9c9:{NFSU2_TR(0x72e9c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72ea4f;}}
}
B72e9cf:L72e9cf:{c.instructions+=21;NFSU2_TR(0x72e9cf);
__builtin_memmove((R+4),(R+0),4);
}
B72e9d1:{NFSU2_TR(0x72e9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72e9d4:{NFSU2_TR(0x72e9d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72e9d7:{NFSU2_TR(0x72e9d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B72e9da:{NFSU2_TR(0x72e9da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e9dd:{NFSU2_TR(0x72e9dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e9e0:{NFSU2_TR(0x72e9e0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B72e9e2:{NFSU2_TR(0x72e9e2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72e9e5:{NFSU2_TR(0x72e9e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72e9e8:{NFSU2_TR(0x72e9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72e9eb:{NFSU2_TR(0x72e9eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72e9ee:{NFSU2_TR(0x72e9ee);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B72e9f0:{NFSU2_TR(0x72e9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72e9f3:{NFSU2_TR(0x72e9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72e9fa:{NFSU2_TR(0x72e9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B72e9fd:{NFSU2_TR(0x72e9fd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B72e9fe:{NFSU2_TR(0x72e9fe);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B72ea00:{NFSU2_TR(0x72ea00);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72ea01:{NFSU2_TR(0x72ea01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B72ea04:{NFSU2_TR(0x72ea04);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B72ea08:{NFSU2_TR(0x72ea08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B72ea0b:L72ea0b:{c.instructions+=23;NFSU2_TR(0x72ea0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ea0e:{NFSU2_TR(0x72ea0e);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ea11:{NFSU2_TR(0x72ea11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ea14:{NFSU2_TR(0x72ea14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72ea18:{NFSU2_TR(0x72ea18);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ea1b:{NFSU2_TR(0x72ea1b);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ea1e:{NFSU2_TR(0x72ea1e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ea20:{NFSU2_TR(0x72ea20);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ea23:{NFSU2_TR(0x72ea23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B72ea25:{NFSU2_TR(0x72ea25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B72ea27:{NFSU2_TR(0x72ea27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ea2a:{NFSU2_TR(0x72ea2a);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ea2d:{NFSU2_TR(0x72ea2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ea30:{NFSU2_TR(0x72ea30);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ea33:{NFSU2_TR(0x72ea33);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B72ea36:{NFSU2_TR(0x72ea36);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ea39:{NFSU2_TR(0x72ea39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72ea3a:{NFSU2_TR(0x72ea3a);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ea3d:{NFSU2_TR(0x72ea3d);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ea40:{NFSU2_TR(0x72ea40);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B72ea43:{NFSU2_TR(0x72ea43);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B72ea44:{NFSU2_TR(0x72ea44);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ea47:{NFSU2_TR(0x72ea47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ea0bu);}goto L72ea0b;}}
}
B72ea49:L72ea49:{c.instructions+=2;NFSU2_TR(0x72ea49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72ea4c:{NFSU2_TR(0x72ea4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ea4f:L72ea4f:{c.instructions+=4;NFSU2_TR(0x72ea4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B72ea52:{NFSU2_TR(0x72ea52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72ea55:{NFSU2_TR(0x72ea55);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xaull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72ea59:{NFSU2_TR(0x72ea59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72e9b4u);}goto L72e9b4;}}
}
B72ea5f:L72ea5f:{c.instructions+=3;NFSU2_TR(0x72ea5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72ea60:{NFSU2_TR(0x72ea60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72ea61:{NFSU2_TR(0x72ea61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72ea62:L72ea62:{c.instructions+=2;NFSU2_TR(0x72ea62);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72ea63:{NFSU2_TR(0x72ea63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ea66:L72ea66:{c.instructions+=8;NFSU2_TR(0x72ea66);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ea6a:{NFSU2_TR(0x72ea6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72ea6e:{NFSU2_TR(0x72ea6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72ea71:{NFSU2_TR(0x72ea71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72ea74:{NFSU2_TR(0x72ea74);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72ea78:{NFSU2_TR(0x72ea78);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B72ea7b:{NFSU2_TR(0x72ea7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72ea7d:{NFSU2_TR(0x72ea7d);
if(r1(R+518)){{goto L72eaa8;}}
}
B72ea7f:L72ea7f:{c.instructions+=2;NFSU2_TR(0x72ea7f);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72ea83:{NFSU2_TR(0x72ea83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72ea8f;}}
}
B72ea85:L72ea85:{c.instructions+=2;NFSU2_TR(0x72ea85);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72ea89:{NFSU2_TR(0x72ea89);
if(r1(R+518)){{goto L72ec61;}}
}
B72ea8f:L72ea8f:{c.instructions+=2;NFSU2_TR(0x72ea8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72ea91:{NFSU2_TR(0x72ea91);
if(r1(R+518)){{goto L72eaa8;}}
}
B72ea93:L72ea93:{c.instructions+=2;NFSU2_TR(0x72ea93);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72ea97:{NFSU2_TR(0x72ea97);
if(r1(R+518)){{goto L72eaa8;}}
}
B72ea99:L72ea99:{c.instructions+=2;NFSU2_TR(0x72ea99);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72ea9d:{NFSU2_TR(0x72ea9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72eaa8;}}
}
B72ea9f:L72ea9f:{c.instructions+=3;NFSU2_TR(0x72ea9f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72eaa3:{NFSU2_TR(0x72eaa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72eaa6:{NFSU2_TR(0x72eaa6);
{goto L72eab2;}
}
B72eaa8:L72eaa8:{c.instructions+=2;NFSU2_TR(0x72eaa8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72eaac:{NFSU2_TR(0x72eaac);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72eab2:L72eab2:{c.instructions+=2;NFSU2_TR(0x72eab2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B72eab4:{NFSU2_TR(0x72eab4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72ec61;}}
}
B72eaba:L72eaba:{c.instructions+=15;NFSU2_TR(0x72eaba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72eabb:{NFSU2_TR(0x72eabb);
{u32 ea_=u32(u32(8189476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eac1:{NFSU2_TR(0x72eac1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B72eac3:{NFSU2_TR(0x72eac3);
{u32 ea_=u32(u32(8189472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eac9:{NFSU2_TR(0x72eac9);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72eacb:{NFSU2_TR(0x72eacb);
{u32 ea_=u32(u32(8189468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ead1:{NFSU2_TR(0x72ead1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ead4:{NFSU2_TR(0x72ead4);
{u32 ea_=u32(u32(8189464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eada:{NFSU2_TR(0x72eada);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B72eadb:{NFSU2_TR(0x72eadb);
{u32 ea_=u32(u32(8189460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eae1:{NFSU2_TR(0x72eae1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72eae3:{NFSU2_TR(0x72eae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72eae4:{NFSU2_TR(0x72eae4);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72eae4);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72eae4);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B72eae6:{NFSU2_TR(0x72eae6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72eae7:{NFSU2_TR(0x72eae7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72eae8:L72eae8:{c.instructions+=115;NFSU2_TR(0x72eae8);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eaeb:{NFSU2_TR(0x72eaeb);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eaee:{NFSU2_TR(0x72eaee);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B72eaf0:{NFSU2_TR(0x72eaf0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eaf2:{NFSU2_TR(0x72eaf2);
{u32 ea_=u32(u32(8189456u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72eaf8:{NFSU2_TR(0x72eaf8);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72eafa:{NFSU2_TR(0x72eafa);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eafd:{NFSU2_TR(0x72eafd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eaff:{NFSU2_TR(0x72eaff);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B72eb01:{NFSU2_TR(0x72eb01);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72eb03:{NFSU2_TR(0x72eb03);
{u32 ea_=u32(u32(8189452u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72eb09:{NFSU2_TR(0x72eb09);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72eb0b:{NFSU2_TR(0x72eb0b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eb0d:{NFSU2_TR(0x72eb0d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72eb0f:{NFSU2_TR(0x72eb0f);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb12:{NFSU2_TR(0x72eb12);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb15:{NFSU2_TR(0x72eb15);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B72eb17:{NFSU2_TR(0x72eb17);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb1a:{NFSU2_TR(0x72eb1a);
{u32 ea_=u32(u32(8189448u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72eb20:{NFSU2_TR(0x72eb20);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72eb22:{NFSU2_TR(0x72eb22);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eb25:{NFSU2_TR(0x72eb25);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb28:{NFSU2_TR(0x72eb28);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B72eb2a:{NFSU2_TR(0x72eb2a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72eb2c:{NFSU2_TR(0x72eb2c);
{u32 ea_=u32(u32(8189444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72eb32:{NFSU2_TR(0x72eb32);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72eb34:{NFSU2_TR(0x72eb34);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eb37:{NFSU2_TR(0x72eb37);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72eb39:{NFSU2_TR(0x72eb39);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb3c:{NFSU2_TR(0x72eb3c);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb3f:{NFSU2_TR(0x72eb3f);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B72eb41:{NFSU2_TR(0x72eb41);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb44:{NFSU2_TR(0x72eb44);
{u32 ea_=u32(u32(8189440u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72eb4a:{NFSU2_TR(0x72eb4a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72eb4c:{NFSU2_TR(0x72eb4c);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eb4f:{NFSU2_TR(0x72eb4f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb52:{NFSU2_TR(0x72eb52);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B72eb54:{NFSU2_TR(0x72eb54);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72eb56:{NFSU2_TR(0x72eb56);
{u32 ea_=u32(u32(8189436u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72eb5c:{NFSU2_TR(0x72eb5c);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72eb5e:{NFSU2_TR(0x72eb5e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eb61:{NFSU2_TR(0x72eb61);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72eb63:{NFSU2_TR(0x72eb63);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb66:{NFSU2_TR(0x72eb66);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb69:{NFSU2_TR(0x72eb69);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72eb6b:{NFSU2_TR(0x72eb6b);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb6e:{NFSU2_TR(0x72eb6e);
{u32 ea_=u32(u32(8189432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72eb74:{NFSU2_TR(0x72eb74);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72eb76:{NFSU2_TR(0x72eb76);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eb79:{NFSU2_TR(0x72eb79);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb7c:{NFSU2_TR(0x72eb7c);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72eb7e:{NFSU2_TR(0x72eb7e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72eb80:{NFSU2_TR(0x72eb80);
{u32 ea_=u32(u32(8189428u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72eb86:{NFSU2_TR(0x72eb86);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72eb88:{NFSU2_TR(0x72eb88);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eb8b:{NFSU2_TR(0x72eb8b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72eb8d:{NFSU2_TR(0x72eb8d);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb90:{NFSU2_TR(0x72eb90);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb93:{NFSU2_TR(0x72eb93);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72eb95:{NFSU2_TR(0x72eb95);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eb98:{NFSU2_TR(0x72eb98);
{u32 ea_=u32(u32(8189424u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72eb9e:{NFSU2_TR(0x72eb9e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72eba0:{NFSU2_TR(0x72eba0);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eba3:{NFSU2_TR(0x72eba3);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eba6:{NFSU2_TR(0x72eba6);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72eba8:{NFSU2_TR(0x72eba8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ebaa:{NFSU2_TR(0x72ebaa);
{u32 ea_=u32(u32(8189420u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ebb0:{NFSU2_TR(0x72ebb0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72ebb2:{NFSU2_TR(0x72ebb2);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ebb5:{NFSU2_TR(0x72ebb5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ebb7:{NFSU2_TR(0x72ebb7);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ebba:{NFSU2_TR(0x72ebba);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ebbd:{NFSU2_TR(0x72ebbd);
{u32 ea_=u32(u32(8189416u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ebc3:{NFSU2_TR(0x72ebc3);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ebc6:{NFSU2_TR(0x72ebc6);
{u32 ea_=u32(u32(8189412u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ebcc:{NFSU2_TR(0x72ebcc);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72ebce:{NFSU2_TR(0x72ebce);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ebd1:{NFSU2_TR(0x72ebd1);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ebd4:{NFSU2_TR(0x72ebd4);
{u32 ea_=u32(u32(8189416u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ebda:{NFSU2_TR(0x72ebda);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ebdc:{NFSU2_TR(0x72ebdc);
{u32 ea_=u32(u32(8189408u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ebe2:{NFSU2_TR(0x72ebe2);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72ebe4:{NFSU2_TR(0x72ebe4);
w1(R+512,carry<u32>(r4(R+4),u32(0x48ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x48ull))));
}
B72ebe7:{NFSU2_TR(0x72ebe7);
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
B72ebe8:{NFSU2_TR(0x72ebe8);
{u32 ea_=u32(r4(R+4)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ebeb:{NFSU2_TR(0x72ebeb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ebed:{NFSU2_TR(0x72ebed);
{u32 ea_=u32(r4(R+4)+u32(4294967196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ebf0:{NFSU2_TR(0x72ebf0);
{u32 ea_=u32(r4(R+4)+u32(4294967196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ebf3:{NFSU2_TR(0x72ebf3);
{u32 ea_=u32(u32(8189404u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ebf9:{NFSU2_TR(0x72ebf9);
{u32 ea_=u32(r4(R+4)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ebfc:{NFSU2_TR(0x72ebfc);
{u32 ea_=u32(u32(8189400u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ec02:{NFSU2_TR(0x72ec02);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72ec04:{NFSU2_TR(0x72ec04);
{u32 ea_=u32(r4(R+4)+u32(4294967196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ec07:{NFSU2_TR(0x72ec07);
{u32 ea_=u32(r4(R+4)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ec0a:{NFSU2_TR(0x72ec0a);
{u32 ea_=u32(u32(8189404u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ec10:{NFSU2_TR(0x72ec10);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ec12:{NFSU2_TR(0x72ec12);
{u32 ea_=u32(u32(8189396u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ec18:{NFSU2_TR(0x72ec18);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72ec1a:{NFSU2_TR(0x72ec1a);
{u32 ea_=u32(r4(R+4)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ec1d:{NFSU2_TR(0x72ec1d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ec1f:{NFSU2_TR(0x72ec1f);
{u32 ea_=u32(r4(R+4)+u32(4294967192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ec22:{NFSU2_TR(0x72ec22);
{u32 ea_=u32(r4(R+4)+u32(4294967192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ec25:{NFSU2_TR(0x72ec25);
{u32 ea_=u32(u32(8189392u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ec2b:{NFSU2_TR(0x72ec2b);
{u32 ea_=u32(r4(R+4)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ec2e:{NFSU2_TR(0x72ec2e);
{u32 ea_=u32(u32(8189388u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ec34:{NFSU2_TR(0x72ec34);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72ec36:{NFSU2_TR(0x72ec36);
{u32 ea_=u32(r4(R+4)+u32(4294967192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ec39:{NFSU2_TR(0x72ec39);
{u32 ea_=u32(r4(R+4)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ec3c:{NFSU2_TR(0x72ec3c);
{u32 ea_=u32(u32(8189392u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ec42:{NFSU2_TR(0x72ec42);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ec44:{NFSU2_TR(0x72ec44);
{u32 ea_=u32(u32(8189384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ec4a:{NFSU2_TR(0x72ec4a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72ec4c:{NFSU2_TR(0x72ec4c);
{u32 ea_=u32(r4(R+4)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ec4f:{NFSU2_TR(0x72ec4f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ec51:{NFSU2_TR(0x72ec51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72eae8u);}goto L72eae8;}}
}
B72ec57:L72ec57:{c.instructions+=5;NFSU2_TR(0x72ec57);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ec59:{NFSU2_TR(0x72ec59);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ec5b:{NFSU2_TR(0x72ec5b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ec5d:{NFSU2_TR(0x72ec5d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ec5f:{NFSU2_TR(0x72ec5f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ec61:L72ec61:{c.instructions+=1;NFSU2_TR(0x72ec61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ec64:L72ec64:{c.instructions+=7;NFSU2_TR(0x72ec64);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ec65:{NFSU2_TR(0x72ec65);
__builtin_memmove((R+20),(R+16),4);
}
B72ec67:{NFSU2_TR(0x72ec67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ec68:{NFSU2_TR(0x72ec68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ec6b:{NFSU2_TR(0x72ec6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72ec6e:{NFSU2_TR(0x72ec6e);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B72ec70:{NFSU2_TR(0x72ec70);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72ee4f;}}
}
B72ec76:L72ec76:{c.instructions+=7;NFSU2_TR(0x72ec76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ec79:{NFSU2_TR(0x72ec79);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B72ec7b:{NFSU2_TR(0x72ec7b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B72ec7e:{NFSU2_TR(0x72ec7e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B72ec7f:{NFSU2_TR(0x72ec7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72ec82:{NFSU2_TR(0x72ec82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ec88:{NFSU2_TR(0x72ec88);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72ec89:L72ec89:{c.instructions+=100;NFSU2_TR(0x72ec89);
{u32 ea_=u32(r4(R+4)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ec8c:{NFSU2_TR(0x72ec8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ec8f:{NFSU2_TR(0x72ec8f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ec91:{NFSU2_TR(0x72ec91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ec94:{NFSU2_TR(0x72ec94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ec9a:{NFSU2_TR(0x72ec9a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ec9c:{NFSU2_TR(0x72ec9c);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ec9f:{NFSU2_TR(0x72ec9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72eca2:{NFSU2_TR(0x72eca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72eca5:{NFSU2_TR(0x72eca5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eca7:{NFSU2_TR(0x72eca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ecaa:{NFSU2_TR(0x72ecaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ecb0:{NFSU2_TR(0x72ecb0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ecb2:{NFSU2_TR(0x72ecb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ecb5:{NFSU2_TR(0x72ecb5);
{u32 ea_=u32(r4(R+4)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ecbb:{NFSU2_TR(0x72ecbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ecc1:{NFSU2_TR(0x72ecc1);
{u32 ea_=u32(r4(R+4)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ecc7:{NFSU2_TR(0x72ecc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72eccd:{NFSU2_TR(0x72eccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ecd0:{NFSU2_TR(0x72ecd0);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ecd2:{NFSU2_TR(0x72ecd2);
{u32 ea_=u32(r4(R+0)+u32(284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ecd8:{NFSU2_TR(0x72ecd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ecde:{NFSU2_TR(0x72ecde);
{u32 ea_=u32(r4(R+0)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ece4:{NFSU2_TR(0x72ece4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x288ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ecea:{NFSU2_TR(0x72ecea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72eced:{NFSU2_TR(0x72eced);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ecf3:{NFSU2_TR(0x72ecf3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ecf5:{NFSU2_TR(0x72ecf5);
{u32 ea_=u32(r4(R+4)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ecfb:{NFSU2_TR(0x72ecfb);
{u32 ea_=u32(r4(R+4)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ed01:{NFSU2_TR(0x72ed01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ed07:{NFSU2_TR(0x72ed07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ed0a:{NFSU2_TR(0x72ed0a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ed0c:{NFSU2_TR(0x72ed0c);
{u32 ea_=u32(r4(R+0)+u32(572u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ed12:{NFSU2_TR(0x72ed12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x244ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ed18:{NFSU2_TR(0x72ed18);
{u32 ea_=u32(r4(R+0)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ed1e:{NFSU2_TR(0x72ed1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ed24:{NFSU2_TR(0x72ed24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ed27:{NFSU2_TR(0x72ed27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ed2d:{NFSU2_TR(0x72ed2d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ed2f:{NFSU2_TR(0x72ed2f);
{u32 ea_=u32(r4(R+4)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ed35:{NFSU2_TR(0x72ed35);
{u32 ea_=u32(r4(R+4)+u32(864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ed3b:{NFSU2_TR(0x72ed3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x358ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ed41:{NFSU2_TR(0x72ed41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ed44:{NFSU2_TR(0x72ed44);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ed46:{NFSU2_TR(0x72ed46);
{u32 ea_=u32(r4(R+0)+u32(860u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ed4c:{NFSU2_TR(0x72ed4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x364ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ed52:{NFSU2_TR(0x72ed52);
{u32 ea_=u32(r4(R+0)+u32(864u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ed58:{NFSU2_TR(0x72ed58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ed5e:{NFSU2_TR(0x72ed5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ed61:{NFSU2_TR(0x72ed61);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ed67:{NFSU2_TR(0x72ed67);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ed69:{NFSU2_TR(0x72ed69);
{u32 ea_=u32(r4(R+4)+u32(1080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ed6f:{NFSU2_TR(0x72ed6f);
{u32 ea_=u32(r4(R+4)+u32(1152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ed75:{NFSU2_TR(0x72ed75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x478ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ed7b:{NFSU2_TR(0x72ed7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ed7e:{NFSU2_TR(0x72ed7e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ed80:{NFSU2_TR(0x72ed80);
{u32 ea_=u32(r4(R+0)+u32(1148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ed86:{NFSU2_TR(0x72ed86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x484ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ed8c:{NFSU2_TR(0x72ed8c);
{u32 ea_=u32(r4(R+0)+u32(1152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ed92:{NFSU2_TR(0x72ed92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ed98:{NFSU2_TR(0x72ed98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ed9b:{NFSU2_TR(0x72ed9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x510ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72eda1:{NFSU2_TR(0x72eda1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72eda3:{NFSU2_TR(0x72eda3);
{u32 ea_=u32(r4(R+4)+u32(1368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eda9:{NFSU2_TR(0x72eda9);
{u32 ea_=u32(r4(R+4)+u32(1440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72edaf:{NFSU2_TR(0x72edaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x598ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72edb5:{NFSU2_TR(0x72edb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72edb8:{NFSU2_TR(0x72edb8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72edba:{NFSU2_TR(0x72edba);
{u32 ea_=u32(r4(R+0)+u32(1436u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72edc0:{NFSU2_TR(0x72edc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5a4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72edc6:{NFSU2_TR(0x72edc6);
{u32 ea_=u32(r4(R+0)+u32(1440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72edcc:{NFSU2_TR(0x72edcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x708ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72edd2:{NFSU2_TR(0x72edd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72edd5:{NFSU2_TR(0x72edd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x630ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72eddb:{NFSU2_TR(0x72eddb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72eddd:{NFSU2_TR(0x72eddd);
{u32 ea_=u32(r4(R+4)+u32(1656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ede3:{NFSU2_TR(0x72ede3);
{u32 ea_=u32(r4(R+4)+u32(1728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ede9:{NFSU2_TR(0x72ede9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6b8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72edef:{NFSU2_TR(0x72edef);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72edf1:{NFSU2_TR(0x72edf1);
{u32 ea_=u32(r4(R+0)+u32(1724u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72edf7:{NFSU2_TR(0x72edf7);
{u32 ea_=u32(r4(R+0)+u32(1728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72edfd:{NFSU2_TR(0x72edfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ee00:{NFSU2_TR(0x72ee00);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ee02:{NFSU2_TR(0x72ee02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6c4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ee08:{NFSU2_TR(0x72ee08);
{u32 ea_=u32(r4(R+4)+u32(1944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ee0e:{NFSU2_TR(0x72ee0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x828ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ee14:{NFSU2_TR(0x72ee14);
{u32 ea_=u32(r4(R+4)+u32(2016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ee1a:{NFSU2_TR(0x72ee1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ee1d:{NFSU2_TR(0x72ee1d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ee1f:{NFSU2_TR(0x72ee1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x750ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ee25:{NFSU2_TR(0x72ee25);
{u32 ea_=u32(r4(R+0)+u32(2012u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ee2b:{NFSU2_TR(0x72ee2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ee31:{NFSU2_TR(0x72ee31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ee34:{NFSU2_TR(0x72ee34);
{u32 ea_=u32(r4(R+0)+u32(2016u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ee3a:{NFSU2_TR(0x72ee3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7e4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ee40:{NFSU2_TR(0x72ee40);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B72ee43:{NFSU2_TR(0x72ee43);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ee45:{NFSU2_TR(0x72ee45);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72ee48:{NFSU2_TR(0x72ee48);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72ee49:{NFSU2_TR(0x72ee49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ec89u);}goto L72ec89;}}
}
B72ee4f:L72ee4f:{c.instructions+=3;NFSU2_TR(0x72ee4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72ee50:{NFSU2_TR(0x72ee50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72ee51:{NFSU2_TR(0x72ee51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ee52:L72ee52:{c.instructions+=6;NFSU2_TR(0x72ee52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ee53:{NFSU2_TR(0x72ee53);
__builtin_memmove((R+20),(R+16),4);
}
B72ee55:{NFSU2_TR(0x72ee55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B72ee58:{NFSU2_TR(0x72ee58);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ee5a:{NFSU2_TR(0x72ee5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ee5d:{NFSU2_TR(0x72ee5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72ee5e:L72ee5e:{c.instructions+=11;NFSU2_TR(0x72ee5e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72ee60:{NFSU2_TR(0x72ee60);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ee63:{NFSU2_TR(0x72ee63);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72ee65:{NFSU2_TR(0x72ee65);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ee67:{NFSU2_TR(0x72ee67);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72ee69:{NFSU2_TR(0x72ee69);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B72ee6c:{NFSU2_TR(0x72ee6c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B72ee6d:{NFSU2_TR(0x72ee6d);
{u32 ea_=u32(r4(R+4)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ee70:{NFSU2_TR(0x72ee70);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72ee72:{NFSU2_TR(0x72ee72);
{u32 ea_=u32(r4(R+4)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ee75:{NFSU2_TR(0x72ee75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ee5eu);}goto L72ee5e;}}
}
B72ee77:L72ee77:{c.instructions+=122;NFSU2_TR(0x72ee77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72ee7a:{NFSU2_TR(0x72ee7a);
{u32 ea_=u32(u32(8189548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ee80:{NFSU2_TR(0x72ee80);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ee86:{NFSU2_TR(0x72ee86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ee87:{NFSU2_TR(0x72ee87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ee88:{NFSU2_TR(0x72ee88);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ee8a:{NFSU2_TR(0x72ee8a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B72ee8c:{NFSU2_TR(0x72ee8c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
}
B72ee92:{NFSU2_TR(0x72ee92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72ee93:{NFSU2_TR(0x72ee93);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ee96:{NFSU2_TR(0x72ee96);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72ee99:{NFSU2_TR(0x72ee99);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ee9c:{NFSU2_TR(0x72ee9c);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ee9f:{NFSU2_TR(0x72ee9f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72eea1:{NFSU2_TR(0x72eea1);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eea4:{NFSU2_TR(0x72eea4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eea6:{NFSU2_TR(0x72eea6);
{u32 ea_=u32(r4(R+4)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72eea9:{NFSU2_TR(0x72eea9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eeab:{NFSU2_TR(0x72eeab);
{u32 ea_=u32(r4(R+4)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eeae:{NFSU2_TR(0x72eeae);
{u32 ea_=u32(r4(R+4)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72eeb1:{NFSU2_TR(0x72eeb1);
{u32 ea_=u32(r4(R+4)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eeb4:{NFSU2_TR(0x72eeb4);
{u32 ea_=u32(r4(R+4)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eeb7:{NFSU2_TR(0x72eeb7);
{u32 ea_=u32(r4(R+4)+u32(4294967152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72eebd:{NFSU2_TR(0x72eebd);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72eebf:{NFSU2_TR(0x72eebf);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72eec1:{NFSU2_TR(0x72eec1);
{u32 ea_=u32(r4(R+4)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eec4:{NFSU2_TR(0x72eec4);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eec7:{NFSU2_TR(0x72eec7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72eec9:{NFSU2_TR(0x72eec9);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eecc:{NFSU2_TR(0x72eecc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72eece:{NFSU2_TR(0x72eece);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72eed0:{NFSU2_TR(0x72eed0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72eed2:{NFSU2_TR(0x72eed2);
{u32 ea_=u32(r4(R+4)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eed5:{NFSU2_TR(0x72eed5);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B72eed7:{NFSU2_TR(0x72eed7);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eeda:{NFSU2_TR(0x72eeda);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B72eedc:{NFSU2_TR(0x72eedc);
{u32 ea_=u32(r4(R+4)+u32(4294967152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72eee2:{NFSU2_TR(0x72eee2);
{u32 ea_=u32(r4(R+4)+u32(4294967152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72eee8:{NFSU2_TR(0x72eee8);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72eeeb:{NFSU2_TR(0x72eeeb);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eeee:{NFSU2_TR(0x72eeee);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72eef0:{NFSU2_TR(0x72eef0);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B72eef2:{NFSU2_TR(0x72eef2);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eef5:{NFSU2_TR(0x72eef5);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72eef7:{NFSU2_TR(0x72eef7);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eefa:{NFSU2_TR(0x72eefa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72eefc:{NFSU2_TR(0x72eefc);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B72eefe:{NFSU2_TR(0x72eefe);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ef01:{NFSU2_TR(0x72ef01);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ef04:{NFSU2_TR(0x72ef04);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72ef06:{NFSU2_TR(0x72ef06);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B72ef08:{NFSU2_TR(0x72ef08);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ef0b:{NFSU2_TR(0x72ef0b);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72ef0e:{NFSU2_TR(0x72ef0e);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ef11:{NFSU2_TR(0x72ef11);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ef13:{NFSU2_TR(0x72ef13);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ef16:{NFSU2_TR(0x72ef16);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72ef19:{NFSU2_TR(0x72ef19);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ef1c:{NFSU2_TR(0x72ef1c);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ef1f:{NFSU2_TR(0x72ef1f);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72ef22:{NFSU2_TR(0x72ef22);
{u32 ea_=u32(u32(8189544u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ef28:{NFSU2_TR(0x72ef28);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ef2b:{NFSU2_TR(0x72ef2b);
{u32 ea_=u32(u32(8189320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ef31:{NFSU2_TR(0x72ef31);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ef34:{NFSU2_TR(0x72ef34);
{u32 ea_=u32(u32(8189540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ef3a:{NFSU2_TR(0x72ef3a);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ef3d:{NFSU2_TR(0x72ef3d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ef3f:{NFSU2_TR(0x72ef3f);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72ef42:{NFSU2_TR(0x72ef42);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ef45:{NFSU2_TR(0x72ef45);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72ef47:{NFSU2_TR(0x72ef47);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ef4a:{NFSU2_TR(0x72ef4a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ef4c:{NFSU2_TR(0x72ef4c);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ef4f:{NFSU2_TR(0x72ef4f);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ef51:{NFSU2_TR(0x72ef51);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72ef54:{NFSU2_TR(0x72ef54);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ef57:{NFSU2_TR(0x72ef57);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72ef59:{NFSU2_TR(0x72ef59);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ef5c:{NFSU2_TR(0x72ef5c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ef5e:{NFSU2_TR(0x72ef5e);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ef61:{NFSU2_TR(0x72ef61);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72ef63:{NFSU2_TR(0x72ef63);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72ef66:{NFSU2_TR(0x72ef66);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ef69:{NFSU2_TR(0x72ef69);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B72ef6b:{NFSU2_TR(0x72ef6b);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ef6e:{NFSU2_TR(0x72ef6e);
{u32 ea_=u32(u32(8189536u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ef74:{NFSU2_TR(0x72ef74);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ef77:{NFSU2_TR(0x72ef77);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72ef79:{NFSU2_TR(0x72ef79);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ef7c:{NFSU2_TR(0x72ef7c);
{u32 ea_=u32(u32(8189532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ef82:{NFSU2_TR(0x72ef82);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ef85:{NFSU2_TR(0x72ef85);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ef88:{NFSU2_TR(0x72ef88);
{u32 ea_=u32(u32(8189528u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ef8e:{NFSU2_TR(0x72ef8e);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ef91:{NFSU2_TR(0x72ef91);
{u32 ea_=u32(u32(8189524u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ef97:{NFSU2_TR(0x72ef97);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ef9a:{NFSU2_TR(0x72ef9a);
{u32 ea_=u32(u32(8189520u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72efa0:{NFSU2_TR(0x72efa0);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72efa3:{NFSU2_TR(0x72efa3);
{u32 ea_=u32(u32(8189516u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72efa9:{NFSU2_TR(0x72efa9);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72efac:{NFSU2_TR(0x72efac);
{u32 ea_=u32(u32(8189512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72efb2:{NFSU2_TR(0x72efb2);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72efb5:{NFSU2_TR(0x72efb5);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72efb8:{NFSU2_TR(0x72efb8);
{u32 ea_=u32(u32(8189508u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72efbe:{NFSU2_TR(0x72efbe);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72efc1:{NFSU2_TR(0x72efc1);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72efc4:{NFSU2_TR(0x72efc4);
{u32 ea_=u32(u32(8189504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72efca:{NFSU2_TR(0x72efca);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72efcd:{NFSU2_TR(0x72efcd);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72efd0:{NFSU2_TR(0x72efd0);
{u32 ea_=u32(u32(8189500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72efd6:{NFSU2_TR(0x72efd6);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72efd9:{NFSU2_TR(0x72efd9);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72efdc:{NFSU2_TR(0x72efdc);
{u32 ea_=u32(u32(8189496u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72efe2:{NFSU2_TR(0x72efe2);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72efe5:{NFSU2_TR(0x72efe5);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72efe8:{NFSU2_TR(0x72efe8);
{u32 ea_=u32(u32(8189492u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72efee:{NFSU2_TR(0x72efee);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eff1:{NFSU2_TR(0x72eff1);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B72eff3:{NFSU2_TR(0x72eff3);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72eff6:{NFSU2_TR(0x72eff6);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72eff8:{NFSU2_TR(0x72eff8);
{u32 ea_=u32(u32(8189488u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72effe:{NFSU2_TR(0x72effe);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x72f001u,72f);
}
XIT:NFSU2_TR_EXIT(0x72e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
