#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_74c(u8* __restrict R,Cpu& c);
u32 body_74d(u8* __restrict R,Cpu& c);
u32 body_74f(u8* __restrict R,Cpu& c);
u32 body_754(u8* __restrict R,Cpu& c);
u32 body_756(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x74e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x74e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_74e(u8* __restrict R,Cpu& c);
u32 page_74e(Cpu& c){return body_74e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_74e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x74e020:goto L74e020;
case 0x74e023:c.instructions+=7;goto B74e023;
case 0x74e024:c.instructions+=6;goto B74e024;
case 0x74e028:c.instructions+=5;goto B74e028;
case 0x74e02b:c.instructions+=4;goto B74e02b;
case 0x74e02c:c.instructions+=3;goto B74e02c;
case 0x74e02e:c.instructions+=2;goto B74e02e;
case 0x74e030:c.instructions+=1;goto B74e030;
case 0x74e032:goto L74e032;
case 0x74e033:c.instructions+=1;goto B74e033;
case 0x74e036:goto L74e036;
case 0x74e039:c.instructions+=1;goto B74e039;
case 0x74e03c:goto L74e03c;
case 0x74e03f:c.instructions+=6;goto B74e03f;
case 0x74e041:c.instructions+=5;goto B74e041;
case 0x74e046:c.instructions+=4;goto B74e046;
case 0x74e047:c.instructions+=3;goto B74e047;
case 0x74e04c:c.instructions+=2;goto B74e04c;
case 0x74e04d:c.instructions+=1;goto B74e04d;
case 0x74e052:goto L74e052;
case 0x74e055:c.instructions+=2;goto B74e055;
case 0x74e056:c.instructions+=1;goto B74e056;
case 0x74e05b:goto L74e05b;
case 0x74e05e:c.instructions+=3;goto B74e05e;
case 0x74e061:c.instructions+=2;goto B74e061;
case 0x74e064:c.instructions+=1;goto B74e064;
case 0x74e066:goto L74e066;
case 0x74e06c:c.instructions+=4;goto B74e06c;
case 0x74e06e:c.instructions+=3;goto B74e06e;
case 0x74e073:c.instructions+=2;goto B74e073;
case 0x74e076:c.instructions+=1;goto B74e076;
case 0x74e078:goto L74e078;
case 0x74e07e:c.instructions+=9;goto B74e07e;
case 0x74e082:c.instructions+=8;goto B74e082;
case 0x74e083:c.instructions+=7;goto B74e083;
case 0x74e087:c.instructions+=6;goto B74e087;
case 0x74e088:c.instructions+=5;goto B74e088;
case 0x74e089:c.instructions+=4;goto B74e089;
case 0x74e091:c.instructions+=3;goto B74e091;
case 0x74e095:c.instructions+=2;goto B74e095;
case 0x74e099:c.instructions+=1;goto B74e099;
case 0x74e09b:goto L74e09b;
case 0x74e09e:goto L74e09e;
case 0x74e0a1:c.instructions+=1;goto B74e0a1;
case 0x74e0a3:goto L74e0a3;
case 0x74e0a9:c.instructions+=3;goto B74e0a9;
case 0x74e0ab:c.instructions+=2;goto B74e0ab;
case 0x74e0ae:c.instructions+=1;goto B74e0ae;
case 0x74e0b0:goto L74e0b0;
case 0x74e0b6:c.instructions+=9;goto B74e0b6;
case 0x74e0b7:c.instructions+=8;goto B74e0b7;
case 0x74e0bb:c.instructions+=7;goto B74e0bb;
case 0x74e0bc:c.instructions+=6;goto B74e0bc;
case 0x74e0bd:c.instructions+=5;goto B74e0bd;
case 0x74e0c5:c.instructions+=4;goto B74e0c5;
case 0x74e0c9:c.instructions+=3;goto B74e0c9;
case 0x74e0cd:c.instructions+=2;goto B74e0cd;
case 0x74e0d1:c.instructions+=1;goto B74e0d1;
case 0x74e0d3:goto L74e0d3;
case 0x74e0d6:goto L74e0d6;
case 0x74e0d7:c.instructions+=1;goto B74e0d7;
case 0x74e0dc:goto L74e0dc;
case 0x74e0e2:c.instructions+=3;goto B74e0e2;
case 0x74e0e5:c.instructions+=2;goto B74e0e5;
case 0x74e0e7:c.instructions+=1;goto B74e0e7;
case 0x74e0e9:goto L74e0e9;
case 0x74e0ef:goto L74e0ef;
case 0x74e0f0:c.instructions+=4;goto B74e0f0;
case 0x74e0f2:c.instructions+=3;goto B74e0f2;
case 0x74e0f3:c.instructions+=2;goto B74e0f3;
case 0x74e0f6:c.instructions+=1;goto B74e0f6;
case 0x74e100:goto L74e100;
case 0x74e103:c.instructions+=14;goto B74e103;
case 0x74e108:c.instructions+=13;goto B74e108;
case 0x74e109:c.instructions+=12;goto B74e109;
case 0x74e10a:c.instructions+=11;goto B74e10a;
case 0x74e111:c.instructions+=10;goto B74e111;
case 0x74e112:c.instructions+=9;goto B74e112;
case 0x74e117:c.instructions+=8;goto B74e117;
case 0x74e11b:c.instructions+=7;goto B74e11b;
case 0x74e11d:c.instructions+=6;goto B74e11d;
case 0x74e121:c.instructions+=5;goto B74e121;
case 0x74e122:c.instructions+=4;goto B74e122;
case 0x74e127:c.instructions+=3;goto B74e127;
case 0x74e128:c.instructions+=2;goto B74e128;
case 0x74e12d:c.instructions+=1;goto B74e12d;
case 0x74e132:goto L74e132;
case 0x74e135:c.instructions+=2;goto B74e135;
case 0x74e136:c.instructions+=1;goto B74e136;
case 0x74e13b:goto L74e13b;
case 0x74e13f:c.instructions+=4;goto B74e13f;
case 0x74e142:c.instructions+=3;goto B74e142;
case 0x74e144:c.instructions+=2;goto B74e144;
case 0x74e146:c.instructions+=1;goto B74e146;
case 0x74e148:goto L74e148;
case 0x74e14a:c.instructions+=1;goto B74e14a;
case 0x74e14c:goto L74e14c;
case 0x74e14e:c.instructions+=1;goto B74e14e;
case 0x74e150:goto L74e150;
case 0x74e152:c.instructions+=1;goto B74e152;
case 0x74e158:goto L74e158;
case 0x74e15d:c.instructions+=5;goto B74e15d;
case 0x74e15f:c.instructions+=4;goto B74e15f;
case 0x74e163:c.instructions+=3;goto B74e163;
case 0x74e164:c.instructions+=2;goto B74e164;
case 0x74e169:c.instructions+=1;goto B74e169;
case 0x74e16b:goto L74e16b;
case 0x74e170:c.instructions+=4;goto B74e170;
case 0x74e172:c.instructions+=3;goto B74e172;
case 0x74e176:c.instructions+=2;goto B74e176;
case 0x74e177:c.instructions+=1;goto B74e177;
case 0x74e17c:goto L74e17c;
case 0x74e17d:c.instructions+=1;goto B74e17d;
case 0x74e182:goto L74e182;
case 0x74e185:c.instructions+=2;goto B74e185;
case 0x74e186:c.instructions+=1;goto B74e186;
case 0x74e18b:goto L74e18b;
case 0x74e18e:c.instructions+=4;goto B74e18e;
case 0x74e192:c.instructions+=3;goto B74e192;
case 0x74e194:c.instructions+=2;goto B74e194;
case 0x74e195:c.instructions+=1;goto B74e195;
case 0x74e19a:goto L74e19a;
case 0x74e19d:c.instructions+=2;goto B74e19d;
case 0x74e19f:c.instructions+=1;goto B74e19f;
case 0x74e1a1:goto L74e1a1;
case 0x74e1a4:goto L74e1a4;
case 0x74e1a8:c.instructions+=3;goto B74e1a8;
case 0x74e1aa:c.instructions+=2;goto B74e1aa;
case 0x74e1ab:c.instructions+=1;goto B74e1ab;
case 0x74e1b0:goto L74e1b0;
case 0x74e1b3:c.instructions+=2;goto B74e1b3;
case 0x74e1b5:c.instructions+=1;goto B74e1b5;
case 0x74e1b7:goto L74e1b7;
case 0x74e1ba:goto L74e1ba;
case 0x74e1be:c.instructions+=3;goto B74e1be;
case 0x74e1c0:c.instructions+=2;goto B74e1c0;
case 0x74e1c1:c.instructions+=1;goto B74e1c1;
case 0x74e1c6:goto L74e1c6;
case 0x74e1c9:c.instructions+=2;goto B74e1c9;
case 0x74e1cb:c.instructions+=1;goto B74e1cb;
case 0x74e1cd:goto L74e1cd;
case 0x74e1d0:goto L74e1d0;
case 0x74e1d4:c.instructions+=3;goto B74e1d4;
case 0x74e1da:c.instructions+=2;goto B74e1da;
case 0x74e1dc:c.instructions+=1;goto B74e1dc;
case 0x74e1de:goto L74e1de;
case 0x74e1e2:c.instructions+=3;goto B74e1e2;
case 0x74e1e3:c.instructions+=2;goto B74e1e3;
case 0x74e1e4:c.instructions+=1;goto B74e1e4;
case 0x74e1e9:goto L74e1e9;
case 0x74e1ec:c.instructions+=2;goto B74e1ec;
case 0x74e1ee:c.instructions+=1;goto B74e1ee;
case 0x74e1f0:goto L74e1f0;
case 0x74e1f6:c.instructions+=3;goto B74e1f6;
case 0x74e1f7:c.instructions+=2;goto B74e1f7;
case 0x74e1f8:c.instructions+=1;goto B74e1f8;
case 0x74e1fd:goto L74e1fd;
case 0x74e200:c.instructions+=2;goto B74e200;
case 0x74e202:c.instructions+=1;goto B74e202;
case 0x74e204:goto L74e204;
case 0x74e205:c.instructions+=5;goto B74e205;
case 0x74e206:c.instructions+=4;goto B74e206;
case 0x74e20b:c.instructions+=3;goto B74e20b;
case 0x74e20c:c.instructions+=2;goto B74e20c;
case 0x74e210:c.instructions+=1;goto B74e210;
case 0x74e215:goto L74e215;
case 0x74e218:c.instructions+=1;goto B74e218;
case 0x74e219:goto L74e219;
case 0x74e21c:c.instructions+=1;goto B74e21c;
case 0x74e21e:goto L74e21e;
case 0x74e223:c.instructions+=1;goto B74e223;
case 0x74e225:goto L74e225;
case 0x74e228:c.instructions+=1;goto B74e228;
case 0x74e22a:goto L74e22a;
case 0x74e22f:c.instructions+=1;goto B74e22f;
case 0x74e231:goto L74e231;
case 0x74e234:c.instructions+=1;goto B74e234;
case 0x74e236:goto L74e236;
case 0x74e23c:c.instructions+=3;goto B74e23c;
case 0x74e241:c.instructions+=2;goto B74e241;
case 0x74e247:c.instructions+=1;goto B74e247;
case 0x74e249:goto L74e249;
case 0x74e24c:c.instructions+=1;goto B74e24c;
case 0x74e24e:goto L74e24e;
case 0x74e254:c.instructions+=3;goto B74e254;
case 0x74e259:c.instructions+=2;goto B74e259;
case 0x74e25f:c.instructions+=1;goto B74e25f;
case 0x74e261:goto L74e261;
case 0x74e264:c.instructions+=1;goto B74e264;
case 0x74e266:goto L74e266;
case 0x74e26b:goto L74e26b;
case 0x74e271:c.instructions+=1;goto B74e271;
case 0x74e273:goto L74e273;
case 0x74e279:goto L74e279;
case 0x74e27f:c.instructions+=2;goto B74e27f;
case 0x74e281:c.instructions+=1;goto B74e281;
case 0x74e283:goto L74e283;
case 0x74e289:c.instructions+=6;goto B74e289;
case 0x74e28a:c.instructions+=5;goto B74e28a;
case 0x74e28b:c.instructions+=4;goto B74e28b;
case 0x74e290:c.instructions+=3;goto B74e290;
case 0x74e291:c.instructions+=2;goto B74e291;
case 0x74e292:c.instructions+=1;goto B74e292;
case 0x74e294:goto L74e294;
case 0x74e297:goto L74e297;
case 0x74e29b:c.instructions+=5;goto B74e29b;
case 0x74e29c:c.instructions+=4;goto B74e29c;
case 0x74e29d:c.instructions+=3;goto B74e29d;
case 0x74e29f:c.instructions+=2;goto B74e29f;
case 0x74e2a0:c.instructions+=1;goto B74e2a0;
case 0x74e2a5:goto L74e2a5;
case 0x74e2a8:c.instructions+=1;goto B74e2a8;
case 0x74e2b0:goto L74e2b0;
case 0x74e2b1:c.instructions+=12;goto B74e2b1;
case 0x74e2b3:c.instructions+=11;goto B74e2b3;
case 0x74e2b6:c.instructions+=10;goto B74e2b6;
case 0x74e2bc:c.instructions+=9;goto B74e2bc;
case 0x74e2c1:c.instructions+=8;goto B74e2c1;
case 0x74e2c2:c.instructions+=7;goto B74e2c2;
case 0x74e2c3:c.instructions+=6;goto B74e2c3;
case 0x74e2c4:c.instructions+=5;goto B74e2c4;
case 0x74e2cb:c.instructions+=4;goto B74e2cb;
case 0x74e2cd:c.instructions+=3;goto B74e2cd;
case 0x74e2d2:c.instructions+=2;goto B74e2d2;
case 0x74e2d7:c.instructions+=1;goto B74e2d7;
case 0x74e2db:goto L74e2db;
case 0x74e2dd:goto L74e2dd;
case 0x74e2e0:c.instructions+=7;goto B74e2e0;
case 0x74e2e5:c.instructions+=6;goto B74e2e5;
case 0x74e2ec:c.instructions+=5;goto B74e2ec;
case 0x74e2ed:c.instructions+=4;goto B74e2ed;
case 0x74e2f2:c.instructions+=3;goto B74e2f2;
case 0x74e2f3:c.instructions+=2;goto B74e2f3;
case 0x74e2f5:c.instructions+=1;goto B74e2f5;
case 0x74e2fa:goto L74e2fa;
case 0x74e2fd:c.instructions+=2;goto B74e2fd;
case 0x74e2fe:c.instructions+=1;goto B74e2fe;
case 0x74e303:goto L74e303;
case 0x74e30a:c.instructions+=3;goto B74e30a;
case 0x74e30c:c.instructions+=2;goto B74e30c;
case 0x74e30d:c.instructions+=1;goto B74e30d;
case 0x74e312:goto L74e312;
case 0x74e315:c.instructions+=2;goto B74e315;
case 0x74e317:c.instructions+=1;goto B74e317;
case 0x74e319:goto L74e319;
case 0x74e31c:goto L74e31c;
case 0x74e323:c.instructions+=3;goto B74e323;
case 0x74e325:c.instructions+=2;goto B74e325;
case 0x74e326:c.instructions+=1;goto B74e326;
case 0x74e32b:goto L74e32b;
case 0x74e32e:c.instructions+=2;goto B74e32e;
case 0x74e330:c.instructions+=1;goto B74e330;
case 0x74e332:goto L74e332;
case 0x74e335:goto L74e335;
case 0x74e33c:c.instructions+=3;goto B74e33c;
case 0x74e33e:c.instructions+=2;goto B74e33e;
case 0x74e33f:c.instructions+=1;goto B74e33f;
case 0x74e344:goto L74e344;
case 0x74e347:c.instructions+=2;goto B74e347;
case 0x74e349:c.instructions+=1;goto B74e349;
case 0x74e34b:goto L74e34b;
case 0x74e34e:goto L74e34e;
case 0x74e350:goto L74e350;
case 0x74e357:c.instructions+=4;goto B74e357;
case 0x74e35b:c.instructions+=3;goto B74e35b;
case 0x74e35c:c.instructions+=2;goto B74e35c;
case 0x74e35e:c.instructions+=1;goto B74e35e;
case 0x74e360:goto L74e360;
case 0x74e365:c.instructions+=6;goto B74e365;
case 0x74e36a:c.instructions+=5;goto B74e36a;
case 0x74e371:c.instructions+=4;goto B74e371;
case 0x74e372:c.instructions+=3;goto B74e372;
case 0x74e377:c.instructions+=2;goto B74e377;
case 0x74e378:c.instructions+=1;goto B74e378;
case 0x74e37d:goto L74e37d;
case 0x74e380:c.instructions+=2;goto B74e380;
case 0x74e381:c.instructions+=1;goto B74e381;
case 0x74e386:goto L74e386;
case 0x74e38d:c.instructions+=3;goto B74e38d;
case 0x74e390:c.instructions+=2;goto B74e390;
case 0x74e393:c.instructions+=1;goto B74e393;
case 0x74e395:goto L74e395;
case 0x74e398:c.instructions+=5;goto B74e398;
case 0x74e39d:c.instructions+=4;goto B74e39d;
case 0x74e3a1:c.instructions+=3;goto B74e3a1;
case 0x74e3a2:c.instructions+=2;goto B74e3a2;
case 0x74e3a3:c.instructions+=1;goto B74e3a3;
case 0x74e3a8:goto L74e3a8;
case 0x74e3ab:c.instructions+=3;goto B74e3ab;
case 0x74e3ad:c.instructions+=2;goto B74e3ad;
case 0x74e3b4:c.instructions+=1;goto B74e3b4;
case 0x74e3b9:goto L74e3b9;
case 0x74e3ba:c.instructions+=5;goto B74e3ba;
case 0x74e3bb:c.instructions+=4;goto B74e3bb;
case 0x74e3bc:c.instructions+=3;goto B74e3bc;
case 0x74e3be:c.instructions+=2;goto B74e3be;
case 0x74e3bf:c.instructions+=1;goto B74e3bf;
case 0x74e3c0:goto L74e3c0;
case 0x74e3c2:c.instructions+=3;goto B74e3c2;
case 0x74e3c7:c.instructions+=2;goto B74e3c7;
case 0x74e3c8:c.instructions+=1;goto B74e3c8;
case 0x74e3cd:goto L74e3cd;
case 0x74e3d0:c.instructions+=2;goto B74e3d0;
case 0x74e3d1:c.instructions+=1;goto B74e3d1;
case 0x74e3d6:goto L74e3d6;
case 0x74e3dd:c.instructions+=11;goto B74e3dd;
case 0x74e3e0:c.instructions+=10;goto B74e3e0;
case 0x74e3e2:c.instructions+=9;goto B74e3e2;
case 0x74e3e8:c.instructions+=8;goto B74e3e8;
case 0x74e3eb:c.instructions+=7;goto B74e3eb;
case 0x74e3f0:c.instructions+=6;goto B74e3f0;
case 0x74e3f2:c.instructions+=5;goto B74e3f2;
case 0x74e3f4:c.instructions+=4;goto B74e3f4;
case 0x74e3f7:c.instructions+=3;goto B74e3f7;
case 0x74e3fa:c.instructions+=2;goto B74e3fa;
case 0x74e401:c.instructions+=1;goto B74e401;
case 0x74e403:goto L74e403;
case 0x74e406:c.instructions+=1;goto B74e406;
case 0x74e408:goto L74e408;
case 0x74e40e:c.instructions+=2;goto B74e40e;
case 0x74e410:c.instructions+=1;goto B74e410;
case 0x74e412:goto L74e412;
case 0x74e416:c.instructions+=3;goto B74e416;
case 0x74e417:c.instructions+=2;goto B74e417;
case 0x74e418:c.instructions+=1;goto B74e418;
case 0x74e41d:goto L74e41d;
case 0x74e420:c.instructions+=2;goto B74e420;
case 0x74e422:c.instructions+=1;goto B74e422;
case 0x74e424:goto L74e424;
case 0x74e425:c.instructions+=3;goto B74e425;
case 0x74e42b:c.instructions+=2;goto B74e42b;
case 0x74e42c:c.instructions+=1;goto B74e42c;
case 0x74e431:goto L74e431;
case 0x74e434:c.instructions+=2;goto B74e434;
case 0x74e436:c.instructions+=1;goto B74e436;
case 0x74e438:goto L74e438;
case 0x74e43e:c.instructions+=3;goto B74e43e;
case 0x74e444:c.instructions+=2;goto B74e444;
case 0x74e44b:c.instructions+=1;goto B74e44b;
case 0x74e44d:goto L74e44d;
case 0x74e453:c.instructions+=1;goto B74e453;
case 0x74e455:goto L74e455;
case 0x74e45b:c.instructions+=1;goto B74e45b;
case 0x74e45d:goto L74e45d;
case 0x74e463:c.instructions+=1;goto B74e463;
case 0x74e465:goto L74e465;
case 0x74e468:c.instructions+=2;goto B74e468;
case 0x74e46f:c.instructions+=1;goto B74e46f;
case 0x74e479:goto L74e479;
case 0x74e47d:c.instructions+=3;goto B74e47d;
case 0x74e47e:c.instructions+=2;goto B74e47e;
case 0x74e47f:c.instructions+=1;goto B74e47f;
case 0x74e484:goto L74e484;
case 0x74e487:c.instructions+=3;goto B74e487;
case 0x74e489:c.instructions+=2;goto B74e489;
case 0x74e48e:c.instructions+=1;goto B74e48e;
case 0x74e490:goto L74e490;
case 0x74e492:goto L74e492;
case 0x74e499:c.instructions+=1;goto B74e499;
case 0x74e49e:goto L74e49e;
case 0x74e49f:c.instructions+=5;goto B74e49f;
case 0x74e4a0:c.instructions+=4;goto B74e4a0;
case 0x74e4a1:c.instructions+=3;goto B74e4a1;
case 0x74e4a3:c.instructions+=2;goto B74e4a3;
case 0x74e4a4:c.instructions+=1;goto B74e4a4;
case 0x74e4b0:goto L74e4b0;
case 0x74e4b1:c.instructions+=4;goto B74e4b1;
case 0x74e4b5:c.instructions+=3;goto B74e4b5;
case 0x74e4b8:c.instructions+=2;goto B74e4b8;
case 0x74e4ba:c.instructions+=1;goto B74e4ba;
case 0x74e4bc:goto L74e4bc;
case 0x74e4bd:c.instructions+=1;goto B74e4bd;
case 0x74e4c0:goto L74e4c0;
case 0x74e4c3:c.instructions+=1;goto B74e4c3;
case 0x74e4ca:goto L74e4ca;
case 0x74e4cb:c.instructions+=1;goto B74e4cb;
case 0x74e4d0:goto L74e4d0;
case 0x74e4d1:c.instructions+=1;goto B74e4d1;
case 0x74e4d6:goto L74e4d6;
case 0x74e4d7:c.instructions+=1;goto B74e4d7;
case 0x74e4dc:goto L74e4dc;
case 0x74e4df:c.instructions+=2;goto B74e4df;
case 0x74e4e0:c.instructions+=1;goto B74e4e0;
case 0x74e4e5:goto L74e4e5;
case 0x74e4e6:c.instructions+=1;goto B74e4e6;
case 0x74e4e9:goto L74e4e9;
case 0x74e4ec:c.instructions+=2;goto B74e4ec;
case 0x74e4ed:c.instructions+=1;goto B74e4ed;
case 0x74e4f0:goto L74e4f0;
case 0x74e4f6:c.instructions+=9;goto B74e4f6;
case 0x74e4fb:c.instructions+=8;goto B74e4fb;
case 0x74e4fc:c.instructions+=7;goto B74e4fc;
case 0x74e4fd:c.instructions+=6;goto B74e4fd;
case 0x74e504:c.instructions+=5;goto B74e504;
case 0x74e505:c.instructions+=4;goto B74e505;
case 0x74e506:c.instructions+=3;goto B74e506;
case 0x74e507:c.instructions+=2;goto B74e507;
case 0x74e50e:c.instructions+=1;goto B74e50e;
case 0x74e513:goto L74e513;
case 0x74e51a:c.instructions+=13;goto B74e51a;
case 0x74e521:c.instructions+=12;goto B74e521;
case 0x74e528:c.instructions+=11;goto B74e528;
case 0x74e52e:c.instructions+=10;goto B74e52e;
case 0x74e535:c.instructions+=9;goto B74e535;
case 0x74e53a:c.instructions+=8;goto B74e53a;
case 0x74e53d:c.instructions+=7;goto B74e53d;
case 0x74e543:c.instructions+=6;goto B74e543;
case 0x74e54a:c.instructions+=5;goto B74e54a;
case 0x74e54b:c.instructions+=4;goto B74e54b;
case 0x74e54e:c.instructions+=3;goto B74e54e;
case 0x74e54f:c.instructions+=2;goto B74e54f;
case 0x74e555:c.instructions+=1;goto B74e555;
case 0x74e55a:goto L74e55a;
case 0x74e561:c.instructions+=5;goto B74e561;
case 0x74e566:c.instructions+=4;goto B74e566;
case 0x74e56c:c.instructions+=3;goto B74e56c;
case 0x74e56d:c.instructions+=2;goto B74e56d;
case 0x74e56e:c.instructions+=1;goto B74e56e;
case 0x74e573:goto L74e573;
case 0x74e57a:c.instructions+=5;goto B74e57a;
case 0x74e57f:c.instructions+=4;goto B74e57f;
case 0x74e585:c.instructions+=3;goto B74e585;
case 0x74e586:c.instructions+=2;goto B74e586;
case 0x74e587:c.instructions+=1;goto B74e587;
case 0x74e58c:goto L74e58c;
case 0x74e592:c.instructions+=3;goto B74e592;
case 0x74e595:c.instructions+=2;goto B74e595;
case 0x74e597:c.instructions+=1;goto B74e597;
case 0x74e599:goto L74e599;
case 0x74e59a:c.instructions+=1;goto B74e59a;
case 0x74e59f:goto L74e59f;
case 0x74e5a2:c.instructions+=2;goto B74e5a2;
case 0x74e5a5:c.instructions+=1;goto B74e5a5;
case 0x74e5ab:goto L74e5ab;
case 0x74e5b1:c.instructions+=7;goto B74e5b1;
case 0x74e5b2:c.instructions+=6;goto B74e5b2;
case 0x74e5b7:c.instructions+=5;goto B74e5b7;
case 0x74e5bd:c.instructions+=4;goto B74e5bd;
case 0x74e5c2:c.instructions+=3;goto B74e5c2;
case 0x74e5c3:c.instructions+=2;goto B74e5c3;
case 0x74e5c6:c.instructions+=1;goto B74e5c6;
case 0x74e5cb:goto L74e5cb;
case 0x74e5d1:c.instructions+=5;goto B74e5d1;
case 0x74e5d2:c.instructions+=4;goto B74e5d2;
case 0x74e5d7:c.instructions+=3;goto B74e5d7;
case 0x74e5dc:c.instructions+=2;goto B74e5dc;
case 0x74e5dd:c.instructions+=1;goto B74e5dd;
case 0x74e5e2:goto L74e5e2;
case 0x74e5e8:c.instructions+=5;goto B74e5e8;
case 0x74e5e9:c.instructions+=4;goto B74e5e9;
case 0x74e5ee:c.instructions+=3;goto B74e5ee;
case 0x74e5f3:c.instructions+=2;goto B74e5f3;
case 0x74e5f4:c.instructions+=1;goto B74e5f4;
case 0x74e5f9:goto L74e5f9;
case 0x74e5fb:c.instructions+=2;goto B74e5fb;
case 0x74e5fc:c.instructions+=1;goto B74e5fc;
case 0x74e601:goto L74e601;
case 0x74e604:c.instructions+=2;goto B74e604;
case 0x74e606:c.instructions+=1;goto B74e606;
case 0x74e608:goto L74e608;
case 0x74e609:c.instructions+=4;goto B74e609;
case 0x74e60e:c.instructions+=3;goto B74e60e;
case 0x74e613:c.instructions+=2;goto B74e613;
case 0x74e614:c.instructions+=1;goto B74e614;
case 0x74e619:goto L74e619;
case 0x74e61a:c.instructions+=4;goto B74e61a;
case 0x74e61f:c.instructions+=3;goto B74e61f;
case 0x74e624:c.instructions+=2;goto B74e624;
case 0x74e625:c.instructions+=1;goto B74e625;
case 0x74e62a:goto L74e62a;
case 0x74e62d:c.instructions+=1;goto B74e62d;
case 0x74e632:goto L74e632;
case 0x74e637:c.instructions+=4;goto B74e637;
case 0x74e63b:c.instructions+=3;goto B74e63b;
case 0x74e63c:c.instructions+=2;goto B74e63c;
case 0x74e63d:c.instructions+=1;goto B74e63d;
case 0x74e642:goto L74e642;
case 0x74e646:c.instructions+=4;goto B74e646;
case 0x74e648:c.instructions+=3;goto B74e648;
case 0x74e649:c.instructions+=2;goto B74e649;
case 0x74e651:c.instructions+=1;goto B74e651;
case 0x74e656:goto L74e656;
case 0x74e658:c.instructions+=3;goto B74e658;
case 0x74e65b:c.instructions+=2;goto B74e65b;
case 0x74e65d:c.instructions+=1;goto B74e65d;
case 0x74e663:goto L74e663;
case 0x74e667:c.instructions+=8;goto B74e667;
case 0x74e668:c.instructions+=7;goto B74e668;
case 0x74e66b:c.instructions+=6;goto B74e66b;
case 0x74e672:c.instructions+=5;goto B74e672;
case 0x74e677:c.instructions+=4;goto B74e677;
case 0x74e678:c.instructions+=3;goto B74e678;
case 0x74e679:c.instructions+=2;goto B74e679;
case 0x74e67d:c.instructions+=1;goto B74e67d;
case 0x74e682:goto L74e682;
case 0x74e689:c.instructions+=3;goto B74e689;
case 0x74e68c:c.instructions+=2;goto B74e68c;
case 0x74e68f:c.instructions+=1;goto B74e68f;
case 0x74e690:goto L74e690;
case 0x74e692:c.instructions+=3;goto B74e692;
case 0x74e693:c.instructions+=2;goto B74e693;
case 0x74e695:c.instructions+=1;goto B74e695;
case 0x74e697:goto L74e697;
case 0x74e699:c.instructions+=3;goto B74e699;
case 0x74e69b:c.instructions+=2;goto B74e69b;
case 0x74e69e:c.instructions+=1;goto B74e69e;
case 0x74e6a0:goto L74e6a0;
case 0x74e6a2:c.instructions+=3;goto B74e6a2;
case 0x74e6a3:c.instructions+=2;goto B74e6a3;
case 0x74e6a5:c.instructions+=1;goto B74e6a5;
case 0x74e6a7:goto L74e6a7;
case 0x74e6a9:c.instructions+=3;goto B74e6a9;
case 0x74e6ab:c.instructions+=2;goto B74e6ab;
case 0x74e6b1:c.instructions+=1;goto B74e6b1;
case 0x74e6b3:goto L74e6b3;
case 0x74e6ba:c.instructions+=2;goto B74e6ba;
case 0x74e6bc:c.instructions+=1;goto B74e6bc;
case 0x74e6c0:goto L74e6c0;
case 0x74e6c2:c.instructions+=3;goto B74e6c2;
case 0x74e6c3:c.instructions+=2;goto B74e6c3;
case 0x74e6c5:c.instructions+=1;goto B74e6c5;
case 0x74e6c7:goto L74e6c7;
case 0x74e6ce:c.instructions+=2;goto B74e6ce;
case 0x74e6d0:c.instructions+=1;goto B74e6d0;
case 0x74e6d1:goto L74e6d1;
case 0x74e6d4:c.instructions+=3;goto B74e6d4;
case 0x74e6d5:c.instructions+=2;goto B74e6d5;
case 0x74e6d7:c.instructions+=1;goto B74e6d7;
case 0x74e6d9:goto L74e6d9;
case 0x74e6db:c.instructions+=2;goto B74e6db;
case 0x74e6de:c.instructions+=1;goto B74e6de;
case 0x74e6e0:goto L74e6e0;
case 0x74e6e2:goto L74e6e2;
case 0x74e6e4:c.instructions+=1;goto B74e6e4;
case 0x74e6e7:goto L74e6e7;
case 0x74e6e9:goto L74e6e9;
case 0x74e6ed:goto L74e6ed;
case 0x74e6f4:c.instructions+=5;goto B74e6f4;
case 0x74e6f5:c.instructions+=4;goto B74e6f5;
case 0x74e6fa:c.instructions+=3;goto B74e6fa;
case 0x74e6ff:c.instructions+=2;goto B74e6ff;
case 0x74e700:c.instructions+=1;goto B74e700;
case 0x74e705:goto L74e705;
case 0x74e707:c.instructions+=3;goto B74e707;
case 0x74e70a:c.instructions+=2;goto B74e70a;
case 0x74e70c:c.instructions+=1;goto B74e70c;
case 0x74e70e:goto L74e70e;
case 0x74e70f:c.instructions+=3;goto B74e70f;
case 0x74e710:c.instructions+=2;goto B74e710;
case 0x74e715:c.instructions+=1;goto B74e715;
case 0x74e717:goto L74e717;
case 0x74e718:c.instructions+=1;goto B74e718;
case 0x74e71d:goto L74e71d;
case 0x74e722:c.instructions+=2;goto B74e722;
case 0x74e723:c.instructions+=1;goto B74e723;
case 0x74e728:goto L74e728;
case 0x74e72f:c.instructions+=1;goto B74e72f;
case 0x74e732:goto L74e732;
case 0x74e733:c.instructions+=4;goto B74e733;
case 0x74e739:c.instructions+=3;goto B74e739;
case 0x74e73b:c.instructions+=2;goto B74e73b;
case 0x74e73c:c.instructions+=1;goto B74e73c;
case 0x74e741:goto L74e741;
case 0x74e743:c.instructions+=3;goto B74e743;
case 0x74e746:c.instructions+=2;goto B74e746;
case 0x74e748:c.instructions+=1;goto B74e748;
case 0x74e74a:goto L74e74a;
case 0x74e750:c.instructions+=2;goto B74e750;
case 0x74e752:c.instructions+=1;goto B74e752;
case 0x74e754:goto L74e754;
case 0x74e756:c.instructions+=4;goto B74e756;
case 0x74e759:c.instructions+=3;goto B74e759;
case 0x74e75a:c.instructions+=2;goto B74e75a;
case 0x74e75c:c.instructions+=1;goto B74e75c;
case 0x74e75e:goto L74e75e;
case 0x74e760:c.instructions+=2;goto B74e760;
case 0x74e761:c.instructions+=1;goto B74e761;
case 0x74e766:goto L74e766;
case 0x74e768:c.instructions+=3;goto B74e768;
case 0x74e76b:c.instructions+=2;goto B74e76b;
case 0x74e76d:c.instructions+=1;goto B74e76d;
case 0x74e76f:goto L74e76f;
case 0x74e771:goto L74e771;
case 0x74e778:c.instructions+=2;goto B74e778;
case 0x74e77b:c.instructions+=1;goto B74e77b;
case 0x74e77d:goto L74e77d;
case 0x74e77e:goto L74e77e;
case 0x74e785:c.instructions+=5;goto B74e785;
case 0x74e787:c.instructions+=4;goto B74e787;
case 0x74e78d:c.instructions+=3;goto B74e78d;
case 0x74e78e:c.instructions+=2;goto B74e78e;
case 0x74e78f:c.instructions+=1;goto B74e78f;
case 0x74e794:goto L74e794;
case 0x74e797:c.instructions+=5;goto B74e797;
case 0x74e79a:c.instructions+=4;goto B74e79a;
case 0x74e79f:c.instructions+=3;goto B74e79f;
case 0x74e7a2:c.instructions+=2;goto B74e7a2;
case 0x74e7a4:c.instructions+=1;goto B74e7a4;
case 0x74e7a6:goto L74e7a6;
case 0x74e7ac:c.instructions+=3;goto B74e7ac;
case 0x74e7ae:c.instructions+=2;goto B74e7ae;
case 0x74e7b1:c.instructions+=1;goto B74e7b1;
case 0x74e7b3:goto L74e7b3;
case 0x74e7b9:c.instructions+=9;goto B74e7b9;
case 0x74e7bd:c.instructions+=8;goto B74e7bd;
case 0x74e7be:c.instructions+=7;goto B74e7be;
case 0x74e7c2:c.instructions+=6;goto B74e7c2;
case 0x74e7c3:c.instructions+=5;goto B74e7c3;
case 0x74e7c4:c.instructions+=4;goto B74e7c4;
case 0x74e7cc:c.instructions+=3;goto B74e7cc;
case 0x74e7d0:c.instructions+=2;goto B74e7d0;
case 0x74e7d4:c.instructions+=1;goto B74e7d4;
case 0x74e7d6:goto L74e7d6;
case 0x74e7d9:goto L74e7d9;
case 0x74e7db:c.instructions+=1;goto B74e7db;
case 0x74e7dd:goto L74e7dd;
case 0x74e7e0:c.instructions+=2;goto B74e7e0;
case 0x74e7e1:c.instructions+=1;goto B74e7e1;
case 0x74e7e6:goto L74e7e6;
case 0x74e7e9:c.instructions+=3;goto B74e7e9;
case 0x74e7eb:c.instructions+=2;goto B74e7eb;
case 0x74e7ee:c.instructions+=1;goto B74e7ee;
case 0x74e7f0:goto L74e7f0;
case 0x74e7f3:goto L74e7f3;
case 0x74e7fa:c.instructions+=7;goto B74e7fa;
case 0x74e7fb:c.instructions+=6;goto B74e7fb;
case 0x74e7fc:c.instructions+=5;goto B74e7fc;
case 0x74e806:c.instructions+=4;goto B74e806;
case 0x74e807:c.instructions+=3;goto B74e807;
case 0x74e809:c.instructions+=2;goto B74e809;
case 0x74e80a:c.instructions+=1;goto B74e80a;
case 0x74e80f:goto L74e80f;
case 0x74e815:c.instructions+=1;goto B74e815;
case 0x74e820:goto L74e820;
case 0x74e821:c.instructions+=4;goto B74e821;
case 0x74e825:c.instructions+=3;goto B74e825;
case 0x74e82b:c.instructions+=2;goto B74e82b;
case 0x74e82d:c.instructions+=1;goto B74e82d;
case 0x74e82f:goto L74e82f;
case 0x74e831:c.instructions+=2;goto B74e831;
case 0x74e832:c.instructions+=1;goto B74e832;
case 0x74e833:goto L74e833;
case 0x74e839:c.instructions+=14;goto B74e839;
case 0x74e83b:c.instructions+=13;goto B74e83b;
case 0x74e841:c.instructions+=12;goto B74e841;
case 0x74e842:c.instructions+=11;goto B74e842;
case 0x74e847:c.instructions+=10;goto B74e847;
case 0x74e849:c.instructions+=9;goto B74e849;
case 0x74e84e:c.instructions+=8;goto B74e84e;
case 0x74e850:c.instructions+=7;goto B74e850;
case 0x74e854:c.instructions+=6;goto B74e854;
case 0x74e85a:c.instructions+=5;goto B74e85a;
case 0x74e860:c.instructions+=4;goto B74e860;
case 0x74e862:c.instructions+=3;goto B74e862;
case 0x74e865:c.instructions+=2;goto B74e865;
case 0x74e867:c.instructions+=1;goto B74e867;
case 0x74e869:goto L74e869;
case 0x74e86f:c.instructions+=19;goto B74e86f;
case 0x74e875:c.instructions+=18;goto B74e875;
case 0x74e876:c.instructions+=17;goto B74e876;
case 0x74e877:c.instructions+=16;goto B74e877;
case 0x74e87a:c.instructions+=15;goto B74e87a;
case 0x74e880:c.instructions+=14;goto B74e880;
case 0x74e881:c.instructions+=13;goto B74e881;
case 0x74e887:c.instructions+=12;goto B74e887;
case 0x74e888:c.instructions+=11;goto B74e888;
case 0x74e88e:c.instructions+=10;goto B74e88e;
case 0x74e88f:c.instructions+=9;goto B74e88f;
case 0x74e891:c.instructions+=8;goto B74e891;
case 0x74e893:c.instructions+=7;goto B74e893;
case 0x74e895:c.instructions+=6;goto B74e895;
case 0x74e896:c.instructions+=5;goto B74e896;
case 0x74e897:c.instructions+=4;goto B74e897;
case 0x74e89a:c.instructions+=3;goto B74e89a;
case 0x74e89b:c.instructions+=2;goto B74e89b;
case 0x74e89c:c.instructions+=1;goto B74e89c;
case 0x74e8a1:goto L74e8a1;
case 0x74e8a4:c.instructions+=3;goto B74e8a4;
case 0x74e8a5:c.instructions+=2;goto B74e8a5;
case 0x74e8a6:c.instructions+=1;goto B74e8a6;
case 0x74e8a7:goto L74e8a7;
case 0x74e8aa:c.instructions+=2;goto B74e8aa;
case 0x74e8ab:c.instructions+=1;goto B74e8ab;
case 0x74e8b0:goto L74e8b0;
case 0x74e8b6:c.instructions+=7;goto B74e8b6;
case 0x74e8b9:c.instructions+=6;goto B74e8b9;
case 0x74e8bb:c.instructions+=5;goto B74e8bb;
case 0x74e8be:c.instructions+=4;goto B74e8be;
case 0x74e8c3:c.instructions+=3;goto B74e8c3;
case 0x74e8c6:c.instructions+=2;goto B74e8c6;
case 0x74e8c8:c.instructions+=1;goto B74e8c8;
case 0x74e8ca:goto L74e8ca;
case 0x74e8cd:goto L74e8cd;
case 0x74e8ce:c.instructions+=3;goto B74e8ce;
case 0x74e8d0:c.instructions+=2;goto B74e8d0;
case 0x74e8d1:c.instructions+=1;goto B74e8d1;
case 0x74e8e0:goto L74e8e0;
case 0x74e8e6:c.instructions+=12;goto B74e8e6;
case 0x74e8eb:c.instructions+=11;goto B74e8eb;
case 0x74e8ec:c.instructions+=10;goto B74e8ec;
case 0x74e8ed:c.instructions+=9;goto B74e8ed;
case 0x74e8ee:c.instructions+=8;goto B74e8ee;
case 0x74e8ef:c.instructions+=7;goto B74e8ef;
case 0x74e8f6:c.instructions+=6;goto B74e8f6;
case 0x74e8f9:c.instructions+=5;goto B74e8f9;
case 0x74e900:c.instructions+=4;goto B74e900;
case 0x74e906:c.instructions+=3;goto B74e906;
case 0x74e907:c.instructions+=2;goto B74e907;
case 0x74e90b:c.instructions+=1;goto B74e90b;
case 0x74e910:goto L74e910;
case 0x74e913:c.instructions+=4;goto B74e913;
case 0x74e915:c.instructions+=3;goto B74e915;
case 0x74e916:c.instructions+=2;goto B74e916;
case 0x74e91a:c.instructions+=1;goto B74e91a;
case 0x74e91f:goto L74e91f;
case 0x74e921:c.instructions+=11;goto B74e921;
case 0x74e925:c.instructions+=10;goto B74e925;
case 0x74e929:c.instructions+=9;goto B74e929;
case 0x74e92d:c.instructions+=8;goto B74e92d;
case 0x74e931:c.instructions+=7;goto B74e931;
case 0x74e935:c.instructions+=6;goto B74e935;
case 0x74e939:c.instructions+=5;goto B74e939;
case 0x74e93f:c.instructions+=4;goto B74e93f;
case 0x74e941:c.instructions+=3;goto B74e941;
case 0x74e944:c.instructions+=2;goto B74e944;
case 0x74e946:c.instructions+=1;goto B74e946;
case 0x74e94c:goto L74e94c;
case 0x74e94f:c.instructions+=2;goto B74e94f;
case 0x74e951:c.instructions+=1;goto B74e951;
case 0x74e957:goto L74e957;
case 0x74e958:c.instructions+=1;goto B74e958;
case 0x74e95b:goto L74e95b;
case 0x74e95d:c.instructions+=3;goto B74e95d;
case 0x74e960:c.instructions+=2;goto B74e960;
case 0x74e962:c.instructions+=1;goto B74e962;
case 0x74e968:goto L74e968;
case 0x74e96a:goto L74e96a;
case 0x74e96d:c.instructions+=4;goto B74e96d;
case 0x74e96f:c.instructions+=3;goto B74e96f;
case 0x74e972:c.instructions+=2;goto B74e972;
case 0x74e975:c.instructions+=1;goto B74e975;
case 0x74e977:goto L74e977;
case 0x74e979:goto L74e979;
case 0x74e97c:c.instructions+=8;goto B74e97c;
case 0x74e97f:c.instructions+=7;goto B74e97f;
case 0x74e982:c.instructions+=6;goto B74e982;
case 0x74e983:c.instructions+=5;goto B74e983;
case 0x74e986:c.instructions+=4;goto B74e986;
case 0x74e987:c.instructions+=3;goto B74e987;
case 0x74e988:c.instructions+=2;goto B74e988;
case 0x74e989:c.instructions+=1;goto B74e989;
case 0x74e98e:goto L74e98e;
case 0x74e991:c.instructions+=2;goto B74e991;
case 0x74e993:c.instructions+=1;goto B74e993;
case 0x74e995:goto L74e995;
case 0x74e998:c.instructions+=3;goto B74e998;
case 0x74e99a:c.instructions+=2;goto B74e99a;
case 0x74e99b:c.instructions+=1;goto B74e99b;
case 0x74e9a0:goto L74e9a0;
case 0x74e9a3:goto L74e9a3;
case 0x74e9a6:c.instructions+=7;goto B74e9a6;
case 0x74e9a8:c.instructions+=6;goto B74e9a8;
case 0x74e9ae:c.instructions+=5;goto B74e9ae;
case 0x74e9af:c.instructions+=4;goto B74e9af;
case 0x74e9b1:c.instructions+=3;goto B74e9b1;
case 0x74e9b6:c.instructions+=2;goto B74e9b6;
case 0x74e9b7:c.instructions+=1;goto B74e9b7;
case 0x74e9bc:goto L74e9bc;
case 0x74e9c0:c.instructions+=2;goto B74e9c0;
case 0x74e9c3:c.instructions+=1;goto B74e9c3;
case 0x74e9c5:goto L74e9c5;
case 0x74e9c7:c.instructions+=1;goto B74e9c7;
case 0x74e9c9:goto L74e9c9;
case 0x74e9ce:c.instructions+=2;goto B74e9ce;
case 0x74e9d0:c.instructions+=1;goto B74e9d0;
case 0x74e9d5:goto L74e9d5;
case 0x74e9db:c.instructions+=1;goto B74e9db;
case 0x74e9dd:goto L74e9dd;
case 0x74e9e3:goto L74e9e3;
case 0x74e9e6:c.instructions+=2;goto B74e9e6;
case 0x74e9e7:c.instructions+=1;goto B74e9e7;
case 0x74e9ea:goto L74e9ea;
case 0x74e9ed:c.instructions+=1;goto B74e9ed;
case 0x74e9f0:goto L74e9f0;
case 0x74e9f3:c.instructions+=2;goto B74e9f3;
case 0x74e9f5:c.instructions+=1;goto B74e9f5;
case 0x74e9f7:goto L74e9f7;
case 0x74e9f9:c.instructions+=1;goto B74e9f9;
case 0x74e9fb:goto L74e9fb;
case 0x74e9fe:c.instructions+=2;goto B74e9fe;
case 0x74ea01:c.instructions+=1;goto B74ea01;
case 0x74ea03:goto L74ea03;
case 0x74ea05:c.instructions+=2;goto B74ea05;
case 0x74ea06:c.instructions+=1;goto B74ea06;
case 0x74ea0b:goto L74ea0b;
case 0x74ea0e:c.instructions+=1;goto B74ea0e;
case 0x74ea10:goto L74ea10;
case 0x74ea15:c.instructions+=2;goto B74ea15;
case 0x74ea17:c.instructions+=1;goto B74ea17;
case 0x74ea19:goto L74ea19;
case 0x74ea1f:c.instructions+=3;goto B74ea1f;
case 0x74ea21:c.instructions+=2;goto B74ea21;
case 0x74ea24:c.instructions+=1;goto B74ea24;
case 0x74ea26:goto L74ea26;
case 0x74ea2c:c.instructions+=9;goto B74ea2c;
case 0x74ea30:c.instructions+=8;goto B74ea30;
case 0x74ea31:c.instructions+=7;goto B74ea31;
case 0x74ea35:c.instructions+=6;goto B74ea35;
case 0x74ea36:c.instructions+=5;goto B74ea36;
case 0x74ea37:c.instructions+=4;goto B74ea37;
case 0x74ea3f:c.instructions+=3;goto B74ea3f;
case 0x74ea43:c.instructions+=2;goto B74ea43;
case 0x74ea47:c.instructions+=1;goto B74ea47;
case 0x74ea49:goto L74ea49;
case 0x74ea4c:goto L74ea4c;
case 0x74ea52:c.instructions+=1;goto B74ea52;
case 0x74ea54:goto L74ea54;
case 0x74ea5a:goto L74ea5a;
case 0x74ea5d:c.instructions+=3;goto B74ea5d;
case 0x74ea62:c.instructions+=2;goto B74ea62;
case 0x74ea64:c.instructions+=1;goto B74ea64;
case 0x74ea66:goto L74ea66;
case 0x74ea6c:c.instructions+=2;goto B74ea6c;
case 0x74ea6e:c.instructions+=1;goto B74ea6e;
case 0x74ea70:goto L74ea70;
case 0x74ea72:c.instructions+=1;goto B74ea72;
case 0x74ea74:goto L74ea74;
case 0x74ea76:c.instructions+=1;goto B74ea76;
case 0x74ea7b:goto L74ea7b;
case 0x74ea7f:c.instructions+=1;goto B74ea7f;
case 0x74ea81:goto L74ea81;
case 0x74ea84:c.instructions+=1;goto B74ea84;
case 0x74ea86:goto L74ea86;
case 0x74ea8c:c.instructions+=1;goto B74ea8c;
case 0x74ea8e:goto L74ea8e;
case 0x74ea94:c.instructions+=2;goto B74ea94;
case 0x74ea96:c.instructions+=1;goto B74ea96;
case 0x74ea98:goto L74ea98;
case 0x74ea9a:c.instructions+=1;goto B74ea9a;
case 0x74ea9c:goto L74ea9c;
case 0x74eaa2:c.instructions+=3;goto B74eaa2;
case 0x74eaa5:c.instructions+=2;goto B74eaa5;
case 0x74eaa6:c.instructions+=1;goto B74eaa6;
case 0x74eaab:goto L74eaab;
case 0x74eaae:c.instructions+=3;goto B74eaae;
case 0x74eab3:c.instructions+=2;goto B74eab3;
case 0x74eab5:c.instructions+=1;goto B74eab5;
case 0x74eaba:goto L74eaba;
case 0x74eabd:c.instructions+=2;goto B74eabd;
case 0x74eac0:c.instructions+=1;goto B74eac0;
case 0x74eac2:goto L74eac2;
case 0x74eac5:c.instructions+=1;goto B74eac5;
case 0x74eac7:goto L74eac7;
case 0x74eacd:c.instructions+=2;goto B74eacd;
case 0x74ead2:c.instructions+=1;goto B74ead2;
case 0x74ead7:goto L74ead7;
case 0x74ead9:c.instructions+=2;goto B74ead9;
case 0x74eadb:c.instructions+=1;goto B74eadb;
case 0x74eadd:goto L74eadd;
case 0x74eae0:c.instructions+=8;goto B74eae0;
case 0x74eae3:c.instructions+=7;goto B74eae3;
case 0x74eae7:c.instructions+=6;goto B74eae7;
case 0x74eae8:c.instructions+=5;goto B74eae8;
case 0x74eaec:c.instructions+=4;goto B74eaec;
case 0x74eaed:c.instructions+=3;goto B74eaed;
case 0x74eaee:c.instructions+=2;goto B74eaee;
case 0x74eaf2:c.instructions+=1;goto B74eaf2;
case 0x74eaf4:goto L74eaf4;
case 0x74eaf7:c.instructions+=1;goto B74eaf7;
case 0x74eafd:goto L74eafd;
case 0x74eb00:c.instructions+=2;goto B74eb00;
case 0x74eb01:c.instructions+=1;goto B74eb01;
case 0x74eb03:goto L74eb03;
case 0x74eb07:c.instructions+=2;goto B74eb07;
case 0x74eb0c:c.instructions+=1;goto B74eb0c;
case 0x74eb0e:goto L74eb0e;
case 0x74eb0f:c.instructions+=2;goto B74eb0f;
case 0x74eb10:c.instructions+=1;goto B74eb10;
case 0x74eb15:goto L74eb15;
case 0x74eb18:c.instructions+=1;goto B74eb18;
case 0x74eb1a:goto L74eb1a;
case 0x74eb1f:goto L74eb1f;
case 0x74eb23:c.instructions+=9;goto B74eb23;
case 0x74eb24:c.instructions+=8;goto B74eb24;
case 0x74eb27:c.instructions+=7;goto B74eb27;
case 0x74eb2b:c.instructions+=6;goto B74eb2b;
case 0x74eb2c:c.instructions+=5;goto B74eb2c;
case 0x74eb30:c.instructions+=4;goto B74eb30;
case 0x74eb31:c.instructions+=3;goto B74eb31;
case 0x74eb32:c.instructions+=2;goto B74eb32;
case 0x74eb34:c.instructions+=1;goto B74eb34;
case 0x74eb39:goto L74eb39;
case 0x74eb3c:c.instructions+=2;goto B74eb3c;
case 0x74eb3e:c.instructions+=1;goto B74eb3e;
case 0x74eb44:goto L74eb44;
case 0x74eb48:c.instructions+=4;goto B74eb48;
case 0x74eb4c:c.instructions+=3;goto B74eb4c;
case 0x74eb50:c.instructions+=2;goto B74eb50;
case 0x74eb55:c.instructions+=1;goto B74eb55;
case 0x74eb57:goto L74eb57;
case 0x74eb5d:c.instructions+=1;goto B74eb5d;
case 0x74eb63:goto L74eb63;
case 0x74eb64:c.instructions+=2;goto B74eb64;
case 0x74eb68:c.instructions+=1;goto B74eb68;
case 0x74eb6d:goto L74eb6d;
case 0x74eb71:c.instructions+=2;goto B74eb71;
case 0x74eb74:c.instructions+=1;goto B74eb74;
case 0x74eb76:goto L74eb76;
case 0x74eb7b:c.instructions+=1;goto B74eb7b;
case 0x74eb7d:goto L74eb7d;
case 0x74eb83:c.instructions+=2;goto B74eb83;
case 0x74eb85:c.instructions+=1;goto B74eb85;
case 0x74eb8b:goto L74eb8b;
case 0x74eb91:c.instructions+=6;goto B74eb91;
case 0x74eb92:c.instructions+=5;goto B74eb92;
case 0x74eb96:c.instructions+=4;goto B74eb96;
case 0x74eb97:c.instructions+=3;goto B74eb97;
case 0x74eb98:c.instructions+=2;goto B74eb98;
case 0x74eba0:c.instructions+=1;goto B74eba0;
case 0x74eba2:goto L74eba2;
case 0x74eba6:c.instructions+=2;goto B74eba6;
case 0x74eba9:c.instructions+=1;goto B74eba9;
case 0x74ebaf:goto L74ebaf;
case 0x74ebb4:c.instructions+=1;goto B74ebb4;
case 0x74ebb6:goto L74ebb6;
case 0x74ebbc:c.instructions+=2;goto B74ebbc;
case 0x74ebbe:c.instructions+=1;goto B74ebbe;
case 0x74ebc4:goto L74ebc4;
case 0x74ebca:c.instructions+=6;goto B74ebca;
case 0x74ebcb:c.instructions+=5;goto B74ebcb;
case 0x74ebcf:c.instructions+=4;goto B74ebcf;
case 0x74ebd0:c.instructions+=3;goto B74ebd0;
case 0x74ebd1:c.instructions+=2;goto B74ebd1;
case 0x74ebd9:c.instructions+=1;goto B74ebd9;
case 0x74ebdb:goto L74ebdb;
case 0x74ebdf:c.instructions+=2;goto B74ebdf;
case 0x74ebe2:c.instructions+=1;goto B74ebe2;
case 0x74ebe8:goto L74ebe8;
case 0x74ebeb:c.instructions+=1;goto B74ebeb;
case 0x74ebed:goto L74ebed;
case 0x74ebf2:c.instructions+=1;goto B74ebf2;
case 0x74ebf4:goto L74ebf4;
case 0x74ebf9:c.instructions+=2;goto B74ebf9;
case 0x74ebfb:c.instructions+=1;goto B74ebfb;
case 0x74ec00:goto L74ec00;
case 0x74ec04:goto L74ec04;
case 0x74ec09:c.instructions+=1;goto B74ec09;
case 0x74ec0b:goto L74ec0b;
case 0x74ec0f:c.instructions+=8;goto B74ec0f;
case 0x74ec13:c.instructions+=7;goto B74ec13;
case 0x74ec16:c.instructions+=6;goto B74ec16;
case 0x74ec18:c.instructions+=5;goto B74ec18;
case 0x74ec19:c.instructions+=4;goto B74ec19;
case 0x74ec1a:c.instructions+=3;goto B74ec1a;
case 0x74ec1f:c.instructions+=2;goto B74ec1f;
case 0x74ec20:c.instructions+=1;goto B74ec20;
case 0x74ec25:goto L74ec25;
case 0x74ec29:c.instructions+=1;goto B74ec29;
case 0x74ec2c:goto L74ec2c;
case 0x74ec2f:c.instructions+=1;goto B74ec2f;
case 0x74ec31:goto L74ec31;
case 0x74ec39:c.instructions+=1;goto B74ec39;
case 0x74ec3f:goto L74ec3f;
case 0x74ec42:c.instructions+=3;goto B74ec42;
case 0x74ec47:c.instructions+=2;goto B74ec47;
case 0x74ec49:c.instructions+=1;goto B74ec49;
case 0x74ec4e:goto L74ec4e;
case 0x74ec51:c.instructions+=1;goto B74ec51;
case 0x74ec53:goto L74ec53;
case 0x74ec54:c.instructions+=2;goto B74ec54;
case 0x74ec55:c.instructions+=1;goto B74ec55;
case 0x74ec5a:goto L74ec5a;
case 0x74ec5d:goto L74ec5d;
case 0x74ec61:goto L74ec61;
case 0x74ec66:c.instructions+=1;goto B74ec66;
case 0x74ec6c:goto L74ec6c;
case 0x74ec70:c.instructions+=2;goto B74ec70;
case 0x74ec73:c.instructions+=1;goto B74ec73;
case 0x74ec75:goto L74ec75;
case 0x74ec7b:c.instructions+=6;goto B74ec7b;
case 0x74ec7c:c.instructions+=5;goto B74ec7c;
case 0x74ec80:c.instructions+=4;goto B74ec80;
case 0x74ec81:c.instructions+=3;goto B74ec81;
case 0x74ec82:c.instructions+=2;goto B74ec82;
case 0x74ec8a:c.instructions+=1;goto B74ec8a;
case 0x74ec90:goto L74ec90;
case 0x74ec94:c.instructions+=3;goto B74ec94;
case 0x74ec97:c.instructions+=2;goto B74ec97;
case 0x74ec9c:c.instructions+=1;goto B74ec9c;
case 0x74ec9e:goto L74ec9e;
case 0x74eca3:c.instructions+=1;goto B74eca3;
case 0x74eca5:goto L74eca5;
case 0x74eca6:c.instructions+=1;goto B74eca6;
case 0x74ecab:goto L74ecab;
case 0x74ecac:c.instructions+=2;goto B74ecac;
case 0x74ecad:c.instructions+=1;goto B74ecad;
case 0x74ecb2:goto L74ecb2;
case 0x74ecb5:c.instructions+=1;goto B74ecb5;
case 0x74ecb7:goto L74ecb7;
case 0x74ecbb:c.instructions+=7;goto B74ecbb;
case 0x74ecc0:c.instructions+=6;goto B74ecc0;
case 0x74ecc2:c.instructions+=5;goto B74ecc2;
case 0x74ecc8:c.instructions+=4;goto B74ecc8;
case 0x74ecc9:c.instructions+=3;goto B74ecc9;
case 0x74ecce:c.instructions+=2;goto B74ecce;
case 0x74eccf:c.instructions+=1;goto B74eccf;
case 0x74ecd4:goto L74ecd4;
case 0x74ecd7:c.instructions+=2;goto B74ecd7;
case 0x74ecd8:c.instructions+=1;goto B74ecd8;
case 0x74ecdd:goto L74ecdd;
case 0x74ece3:c.instructions+=6;goto B74ece3;
case 0x74ece4:c.instructions+=5;goto B74ece4;
case 0x74ece8:c.instructions+=4;goto B74ece8;
case 0x74ece9:c.instructions+=3;goto B74ece9;
case 0x74ecea:c.instructions+=2;goto B74ecea;
case 0x74ecf2:c.instructions+=1;goto B74ecf2;
case 0x74ecf8:goto L74ecf8;
case 0x74ecfb:goto L74ecfb;
case 0x74ecff:goto L74ecff;
case 0x74ed04:c.instructions+=1;goto B74ed04;
case 0x74ed06:goto L74ed06;
case 0x74ed0a:c.instructions+=7;goto B74ed0a;
case 0x74ed0f:c.instructions+=6;goto B74ed0f;
case 0x74ed11:c.instructions+=5;goto B74ed11;
case 0x74ed15:c.instructions+=4;goto B74ed15;
case 0x74ed16:c.instructions+=3;goto B74ed16;
case 0x74ed1b:c.instructions+=2;goto B74ed1b;
case 0x74ed1c:c.instructions+=1;goto B74ed1c;
case 0x74ed21:goto L74ed21;
case 0x74ed24:c.instructions+=2;goto B74ed24;
case 0x74ed25:c.instructions+=1;goto B74ed25;
case 0x74ed2a:goto L74ed2a;
case 0x74ed2e:c.instructions+=3;goto B74ed2e;
case 0x74ed33:c.instructions+=2;goto B74ed33;
case 0x74ed34:c.instructions+=1;goto B74ed34;
case 0x74ed39:goto L74ed39;
case 0x74ed3c:c.instructions+=2;goto B74ed3c;
case 0x74ed3e:c.instructions+=1;goto B74ed3e;
case 0x74ed40:goto L74ed40;
case 0x74ed45:c.instructions+=2;goto B74ed45;
case 0x74ed47:c.instructions+=1;goto B74ed47;
case 0x74ed4c:goto L74ed4c;
case 0x74ed52:c.instructions+=2;goto B74ed52;
case 0x74ed54:c.instructions+=1;goto B74ed54;
case 0x74ed56:goto L74ed56;
case 0x74ed5c:c.instructions+=6;goto B74ed5c;
case 0x74ed5d:c.instructions+=5;goto B74ed5d;
case 0x74ed61:c.instructions+=4;goto B74ed61;
case 0x74ed62:c.instructions+=3;goto B74ed62;
case 0x74ed63:c.instructions+=2;goto B74ed63;
case 0x74ed6b:c.instructions+=1;goto B74ed6b;
case 0x74ed6d:goto L74ed6d;
case 0x74ed70:goto L74ed70;
case 0x74ed74:goto L74ed74;
case 0x74ed79:c.instructions+=1;goto B74ed79;
case 0x74ed7b:goto L74ed7b;
case 0x74ed7f:c.instructions+=4;goto B74ed7f;
case 0x74ed80:c.instructions+=3;goto B74ed80;
case 0x74ed85:c.instructions+=2;goto B74ed85;
case 0x74ed86:c.instructions+=1;goto B74ed86;
case 0x74ed8b:goto L74ed8b;
case 0x74ed8e:c.instructions+=2;goto B74ed8e;
case 0x74ed8f:c.instructions+=1;goto B74ed8f;
case 0x74ed94:goto L74ed94;
case 0x74ed97:c.instructions+=2;goto B74ed97;
case 0x74ed9a:c.instructions+=1;goto B74ed9a;
case 0x74ed9c:goto L74ed9c;
case 0x74eda0:c.instructions+=4;goto B74eda0;
case 0x74eda1:c.instructions+=3;goto B74eda1;
case 0x74eda6:c.instructions+=2;goto B74eda6;
case 0x74eda7:c.instructions+=1;goto B74eda7;
case 0x74edac:goto L74edac;
case 0x74edaf:c.instructions+=2;goto B74edaf;
case 0x74edb0:c.instructions+=1;goto B74edb0;
case 0x74edb5:goto L74edb5;
case 0x74edb8:c.instructions+=3;goto B74edb8;
case 0x74edba:c.instructions+=2;goto B74edba;
case 0x74edc0:c.instructions+=1;goto B74edc0;
case 0x74edc2:goto L74edc2;
case 0x74edc8:goto L74edc8;
case 0x74edcc:goto L74edcc;
case 0x74edd1:c.instructions+=1;goto B74edd1;
case 0x74edd3:goto L74edd3;
case 0x74edd9:c.instructions+=1;goto B74edd9;
case 0x74eddf:goto L74eddf;
case 0x74ede3:c.instructions+=14;goto B74ede3;
case 0x74ede6:c.instructions+=13;goto B74ede6;
case 0x74ede8:c.instructions+=12;goto B74ede8;
case 0x74edea:c.instructions+=11;goto B74edea;
case 0x74edee:c.instructions+=10;goto B74edee;
case 0x74edf1:c.instructions+=9;goto B74edf1;
case 0x74edf5:c.instructions+=8;goto B74edf5;
case 0x74edf8:c.instructions+=7;goto B74edf8;
case 0x74edfc:c.instructions+=6;goto B74edfc;
case 0x74edff:c.instructions+=5;goto B74edff;
case 0x74ee03:c.instructions+=4;goto B74ee03;
case 0x74ee06:c.instructions+=3;goto B74ee06;
case 0x74ee07:c.instructions+=2;goto B74ee07;
case 0x74ee0a:c.instructions+=1;goto B74ee0a;
case 0x74ee0f:goto L74ee0f;
case 0x74ee12:c.instructions+=2;goto B74ee12;
case 0x74ee15:c.instructions+=1;goto B74ee15;
case 0x74ee17:goto L74ee17;
case 0x74ee1d:c.instructions+=1;goto B74ee1d;
case 0x74ee1f:goto L74ee1f;
case 0x74ee25:goto L74ee25;
case 0x74ee29:goto L74ee29;
case 0x74ee2e:c.instructions+=1;goto B74ee2e;
case 0x74ee30:goto L74ee30;
case 0x74ee36:c.instructions+=1;goto B74ee36;
case 0x74ee3c:goto L74ee3c;
case 0x74ee40:c.instructions+=14;goto B74ee40;
case 0x74ee43:c.instructions+=13;goto B74ee43;
case 0x74ee45:c.instructions+=12;goto B74ee45;
case 0x74ee47:c.instructions+=11;goto B74ee47;
case 0x74ee4b:c.instructions+=10;goto B74ee4b;
case 0x74ee4e:c.instructions+=9;goto B74ee4e;
case 0x74ee52:c.instructions+=8;goto B74ee52;
case 0x74ee55:c.instructions+=7;goto B74ee55;
case 0x74ee59:c.instructions+=6;goto B74ee59;
case 0x74ee5c:c.instructions+=5;goto B74ee5c;
case 0x74ee60:c.instructions+=4;goto B74ee60;
case 0x74ee63:c.instructions+=3;goto B74ee63;
case 0x74ee64:c.instructions+=2;goto B74ee64;
case 0x74ee67:c.instructions+=1;goto B74ee67;
case 0x74ee6c:goto L74ee6c;
case 0x74ee6f:c.instructions+=2;goto B74ee6f;
case 0x74ee71:c.instructions+=1;goto B74ee71;
case 0x74ee73:goto L74ee73;
case 0x74ee79:c.instructions+=3;goto B74ee79;
case 0x74ee7a:c.instructions+=2;goto B74ee7a;
case 0x74ee7b:c.instructions+=1;goto B74ee7b;
case 0x74ee80:goto L74ee80;
case 0x74ee83:goto L74ee83;
case 0x74ee87:goto L74ee87;
case 0x74ee8c:c.instructions+=1;goto B74ee8c;
case 0x74ee8e:goto L74ee8e;
case 0x74ee94:c.instructions+=1;goto B74ee94;
case 0x74ee9a:goto L74ee9a;
case 0x74ee9e:c.instructions+=14;goto B74ee9e;
case 0x74eea1:c.instructions+=13;goto B74eea1;
case 0x74eea3:c.instructions+=12;goto B74eea3;
case 0x74eea5:c.instructions+=11;goto B74eea5;
case 0x74eea9:c.instructions+=10;goto B74eea9;
case 0x74eeac:c.instructions+=9;goto B74eeac;
case 0x74eeb0:c.instructions+=8;goto B74eeb0;
case 0x74eeb3:c.instructions+=7;goto B74eeb3;
case 0x74eeb7:c.instructions+=6;goto B74eeb7;
case 0x74eeba:c.instructions+=5;goto B74eeba;
case 0x74eebe:c.instructions+=4;goto B74eebe;
case 0x74eec1:c.instructions+=3;goto B74eec1;
case 0x74eec2:c.instructions+=2;goto B74eec2;
case 0x74eec5:c.instructions+=1;goto B74eec5;
case 0x74eeca:goto L74eeca;
case 0x74eece:c.instructions+=1;goto B74eece;
case 0x74eed1:goto L74eed1;
case 0x74eed6:c.instructions+=1;goto B74eed6;
case 0x74eed8:goto L74eed8;
case 0x74eedd:c.instructions+=1;goto B74eedd;
case 0x74eee3:goto L74eee3;
case 0x74eee9:c.instructions+=1;goto B74eee9;
case 0x74eeef:goto L74eeef;
case 0x74eef3:c.instructions+=6;goto B74eef3;
case 0x74eef5:c.instructions+=5;goto B74eef5;
case 0x74eef6:c.instructions+=4;goto B74eef6;
case 0x74eefb:c.instructions+=3;goto B74eefb;
case 0x74eefc:c.instructions+=2;goto B74eefc;
case 0x74ef04:c.instructions+=1;goto B74ef04;
case 0x74ef09:goto L74ef09;
case 0x74ef0c:c.instructions+=2;goto B74ef0c;
case 0x74ef0d:c.instructions+=1;goto B74ef0d;
case 0x74ef12:goto L74ef12;
case 0x74ef18:c.instructions+=5;goto B74ef18;
case 0x74ef19:c.instructions+=4;goto B74ef19;
case 0x74ef1a:c.instructions+=3;goto B74ef1a;
case 0x74ef1c:c.instructions+=2;goto B74ef1c;
case 0x74ef22:c.instructions+=1;goto B74ef22;
case 0x74ef27:goto L74ef27;
case 0x74ef29:c.instructions+=3;goto B74ef29;
case 0x74ef2c:c.instructions+=2;goto B74ef2c;
case 0x74ef2e:c.instructions+=1;goto B74ef2e;
case 0x74ef34:goto L74ef34;
case 0x74ef3e:c.instructions+=1;goto B74ef3e;
case 0x74ef40:goto L74ef40;
case 0x74ef46:c.instructions+=1;goto B74ef46;
case 0x74ef48:goto L74ef48;
case 0x74ef4e:c.instructions+=4;goto B74ef4e;
case 0x74ef4f:c.instructions+=3;goto B74ef4f;
case 0x74ef50:c.instructions+=2;goto B74ef50;
case 0x74ef51:c.instructions+=1;goto B74ef51;
case 0x74ef56:goto L74ef56;
case 0x74ef58:c.instructions+=3;goto B74ef58;
case 0x74ef5b:c.instructions+=2;goto B74ef5b;
case 0x74ef5d:c.instructions+=1;goto B74ef5d;
case 0x74ef5f:goto L74ef5f;
case 0x74ef64:goto L74ef64;
case 0x74ef68:c.instructions+=2;goto B74ef68;
case 0x74ef6a:c.instructions+=1;goto B74ef6a;
case 0x74ef70:goto L74ef70;
case 0x74ef75:c.instructions+=2;goto B74ef75;
case 0x74ef7a:c.instructions+=1;goto B74ef7a;
case 0x74ef7c:goto L74ef7c;
case 0x74ef84:c.instructions+=1;goto B74ef84;
case 0x74ef86:goto L74ef86;
case 0x74ef88:c.instructions+=6;goto B74ef88;
case 0x74ef8d:c.instructions+=5;goto B74ef8d;
case 0x74ef90:c.instructions+=4;goto B74ef90;
case 0x74ef91:c.instructions+=3;goto B74ef91;
case 0x74ef94:c.instructions+=2;goto B74ef94;
case 0x74ef97:c.instructions+=1;goto B74ef97;
case 0x74ef9b:goto L74ef9b;
case 0x74efa3:c.instructions+=1;goto B74efa3;
case 0x74efa5:goto L74efa5;
case 0x74efab:c.instructions+=2;goto B74efab;
case 0x74efad:c.instructions+=1;goto B74efad;
case 0x74efaf:goto L74efaf;
case 0x74efb4:c.instructions+=1;goto B74efb4;
case 0x74efb6:goto L74efb6;
case 0x74efbb:c.instructions+=1;goto B74efbb;
case 0x74efbd:goto L74efbd;
case 0x74efc2:c.instructions+=1;goto B74efc2;
case 0x74efc4:goto L74efc4;
case 0x74efc6:c.instructions+=2;goto B74efc6;
case 0x74efcb:c.instructions+=1;goto B74efcb;
case 0x74efd1:goto L74efd1;
case 0x74efd9:c.instructions+=1;goto B74efd9;
case 0x74efdb:goto L74efdb;
case 0x74efe1:c.instructions+=2;goto B74efe1;
case 0x74efe6:c.instructions+=1;goto B74efe6;
case 0x74efe8:goto L74efe8;
case 0x74efed:c.instructions+=1;goto B74efed;
case 0x74efef:goto L74efef;
case 0x74eff4:c.instructions+=1;goto B74eff4;
case 0x74eff6:goto L74eff6;
case 0x74eff8:c.instructions+=2;goto B74eff8;
case 0x74effd:c.instructions+=1;goto B74effd;
default:missing_instruction(c.pc);}
B74e020:L74e020:{c.instructions+=8;NFSU2_TR(0x74e020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74e023:{NFSU2_TR(0x74e023);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e024:{NFSU2_TR(0x74e024);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74e028:{NFSU2_TR(0x74e028);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e02b:{NFSU2_TR(0x74e02b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e02c:{NFSU2_TR(0x74e02c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B74e02e:{NFSU2_TR(0x74e02e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B74e030:{NFSU2_TR(0x74e030);
if(r1(R+518)){{goto L74e03c;}}
}
B74e032:L74e032:{c.instructions+=2;NFSU2_TR(0x74e032);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e033:{NFSU2_TR(0x74e033);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e036ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74e036:L74e036:{c.instructions+=2;NFSU2_TR(0x74e036);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74e039:{NFSU2_TR(0x74e039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e03c:L74e03c:{c.instructions+=7;NFSU2_TR(0x74e03c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e03f:{NFSU2_TR(0x74e03f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e041:{NFSU2_TR(0x74e041);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e046:{NFSU2_TR(0x74e046);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e047:{NFSU2_TR(0x74e047);
u8 U[4];
w4(U+0,u32(0x44495343ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e04c:{NFSU2_TR(0x74e04c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e04d:{NFSU2_TR(0x74e04d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e052ull));
TAIL_STATIC(0x7549f0u,754);
}
B74e052:L74e052:{c.instructions+=3;NFSU2_TR(0x74e052);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e055:{NFSU2_TR(0x74e055);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e056:{NFSU2_TR(0x74e056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e05bull));
TAIL_STATIC(0x7543d0u,754);
}
B74e05b:L74e05b:{c.instructions+=4;NFSU2_TR(0x74e05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e05e:{NFSU2_TR(0x74e05e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74e061:{NFSU2_TR(0x74e061);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74e064:{NFSU2_TR(0x74e064);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e09e;}}
}
B74e066:L74e066:{c.instructions+=5;NFSU2_TR(0x74e066);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e06c:{NFSU2_TR(0x74e06c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B74e06e:{NFSU2_TR(0x74e06e);
w4(R+4,u32(0x6ull));
}
B74e073:{NFSU2_TR(0x74e073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e076:{NFSU2_TR(0x74e076);
if(r1(R+518)){{goto L74e09e;}}
}
B74e078:L74e078:{c.instructions+=10;NFSU2_TR(0x74e078);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74e07e:{NFSU2_TR(0x74e07e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e082:{NFSU2_TR(0x74e082);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e083:{NFSU2_TR(0x74e083);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74e087:{NFSU2_TR(0x74e087);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e088:{NFSU2_TR(0x74e088);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e089:{NFSU2_TR(0x74e089);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x636f6e6eull));
s4(u32(r4(U+0)),r4(U+4));
}
B74e091:{NFSU2_TR(0x74e091);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e095:{NFSU2_TR(0x74e095);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e099:{NFSU2_TR(0x74e099);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e09bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74e09b:L74e09b:{c.instructions+=1;NFSU2_TR(0x74e09b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74e09e:L74e09e:{c.instructions+=2;NFSU2_TR(0x74e09e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74e0a1:{NFSU2_TR(0x74e0a1);
if(r1(R+518)){{goto L74e0d6;}}
}
B74e0a3:L74e0a3:{c.instructions+=4;NFSU2_TR(0x74e0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e0a9:{NFSU2_TR(0x74e0a9);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B74e0ab:{NFSU2_TR(0x74e0ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e0ae:{NFSU2_TR(0x74e0ae);
if(r1(R+518)){{goto L74e0d6;}}
}
B74e0b0:L74e0b0:{c.instructions+=10;NFSU2_TR(0x74e0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74e0b6:{NFSU2_TR(0x74e0b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e0b7:{NFSU2_TR(0x74e0b7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74e0bb:{NFSU2_TR(0x74e0bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e0bc:{NFSU2_TR(0x74e0bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e0bd:{NFSU2_TR(0x74e0bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x636f6e6eull));
s4(u32(r4(U+0)),r4(U+4));
}
B74e0c5:{NFSU2_TR(0x74e0c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e0c9:{NFSU2_TR(0x74e0c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e0cd:{NFSU2_TR(0x74e0cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e0d1:{NFSU2_TR(0x74e0d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e0d3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74e0d3:L74e0d3:{c.instructions+=1;NFSU2_TR(0x74e0d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74e0d6:L74e0d6:{c.instructions+=2;NFSU2_TR(0x74e0d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e0d7:{NFSU2_TR(0x74e0d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e0dcull));
TAIL_STATIC(0x74d0c0u,74d);
}
B74e0dc:L74e0dc:{c.instructions+=4;NFSU2_TR(0x74e0dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e0e2:{NFSU2_TR(0x74e0e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74e0e5:{NFSU2_TR(0x74e0e5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74e0e7:{NFSU2_TR(0x74e0e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e0ef;}}
}
B74e0e9:L74e0e9:{c.instructions+=1;NFSU2_TR(0x74e0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e0ef:L74e0ef:{c.instructions+=5;NFSU2_TR(0x74e0ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74e0f0:{NFSU2_TR(0x74e0f0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74e0f2:{NFSU2_TR(0x74e0f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74e0f3:{NFSU2_TR(0x74e0f3);
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
B74e0f6:{NFSU2_TR(0x74e0f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74e100:L74e100:{c.instructions+=15;NFSU2_TR(0x74e100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x68ull))));
}
B74e103:{NFSU2_TR(0x74e103);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74e108:{NFSU2_TR(0x74e108);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e109:{NFSU2_TR(0x74e109);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e10a:{NFSU2_TR(0x74e10a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74e111:{NFSU2_TR(0x74e111);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e112:{NFSU2_TR(0x74e112);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e117:{NFSU2_TR(0x74e117);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e11b:{NFSU2_TR(0x74e11b);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e11d:{NFSU2_TR(0x74e11d);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74e121:{NFSU2_TR(0x74e121);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e122:{NFSU2_TR(0x74e122);
u8 U[4];
w4(U+0,u32(0x7a15f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e127:{NFSU2_TR(0x74e127);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e128:{NFSU2_TR(0x74e128);
w4(R+28,u32(0x9ull));
}
B74e12d:{NFSU2_TR(0x74e12d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e132ull));
TAIL_STATIC(0x7414a0u,741);
}
B74e132:L74e132:{c.instructions+=3;NFSU2_TR(0x74e132);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e135:{NFSU2_TR(0x74e135);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e136:{NFSU2_TR(0x74e136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e13bull));
TAIL_STATIC(0x742360u,742);
}
B74e13b:L74e13b:{c.instructions+=5;NFSU2_TR(0x74e13b);
u8 U[5];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74e13f:{NFSU2_TR(0x74e13f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74e142:{NFSU2_TR(0x74e142);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x49ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e144:{NFSU2_TR(0x74e144);
__builtin_memmove((R+12),(R+0),1);
}
B74e146:{NFSU2_TR(0x74e146);
if(r1(R+518)){{goto L74e16b;}}
}
B74e148:L74e148:{c.instructions+=2;NFSU2_TR(0x74e148);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x52ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e14a:{NFSU2_TR(0x74e14a);
if(r1(R+518)){{goto L74e16b;}}
}
B74e14c:L74e14c:{c.instructions+=2;NFSU2_TR(0x74e14c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e14e:{NFSU2_TR(0x74e14e);
if(r1(R+518)){{goto L74e158;}}
}
B74e150:L74e150:{c.instructions+=2;NFSU2_TR(0x74e150);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x44ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e152:{NFSU2_TR(0x74e152);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e204;}}
}
B74e158:L74e158:{c.instructions+=6;NFSU2_TR(0x74e158);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e15d:{NFSU2_TR(0x74e15d);
u8 U[4];
w4(U+0,u32(0x41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e15f:{NFSU2_TR(0x74e15f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74e163:{NFSU2_TR(0x74e163);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e164:{NFSU2_TR(0x74e164);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e169:{NFSU2_TR(0x74e169);
{goto L74e17c;}
}
B74e16b:L74e16b:{c.instructions+=5;NFSU2_TR(0x74e16b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e170:{NFSU2_TR(0x74e170);
u8 U[4];
w4(U+0,u32(0x41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e172:{NFSU2_TR(0x74e172);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74e176:{NFSU2_TR(0x74e176);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e177:{NFSU2_TR(0x74e177);
u8 U[4];
w4(U+0,u32(0x7d2058ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e17c:L74e17c:{c.instructions+=2;NFSU2_TR(0x74e17c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e17d:{NFSU2_TR(0x74e17d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e182ull));
TAIL_STATIC(0x7414a0u,741);
}
B74e182:L74e182:{c.instructions+=3;NFSU2_TR(0x74e182);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e185:{NFSU2_TR(0x74e185);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e186:{NFSU2_TR(0x74e186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e18bull));
TAIL_STATIC(0x742360u,742);
}
B74e18b:L74e18b:{c.instructions+=5;NFSU2_TR(0x74e18b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74e18e:{NFSU2_TR(0x74e18e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74e192:{NFSU2_TR(0x74e192);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e194:{NFSU2_TR(0x74e194);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e195:{NFSU2_TR(0x74e195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e19aull));
TAIL_STATIC(0x75cf10u,75c);
}
B74e19a:L74e19a:{c.instructions+=3;NFSU2_TR(0x74e19a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e19d:{NFSU2_TR(0x74e19d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e19f:{NFSU2_TR(0x74e19f);
if(r1(R+518)){{goto L74e1a4;}}
}
B74e1a1:L74e1a1:{c.instructions+=1;NFSU2_TR(0x74e1a1);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74e1a4:L74e1a4:{c.instructions+=4;NFSU2_TR(0x74e1a4);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74e1a8:{NFSU2_TR(0x74e1a8);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e1aa:{NFSU2_TR(0x74e1aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e1ab:{NFSU2_TR(0x74e1ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e1b0ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74e1b0:L74e1b0:{c.instructions+=3;NFSU2_TR(0x74e1b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e1b3:{NFSU2_TR(0x74e1b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e1b5:{NFSU2_TR(0x74e1b5);
if(r1(R+518)){{goto L74e1ba;}}
}
B74e1b7:L74e1b7:{c.instructions+=1;NFSU2_TR(0x74e1b7);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74e1ba:L74e1ba:{c.instructions+=4;NFSU2_TR(0x74e1ba);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74e1be:{NFSU2_TR(0x74e1be);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e1c0:{NFSU2_TR(0x74e1c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e1c1:{NFSU2_TR(0x74e1c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e1c6ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74e1c6:L74e1c6:{c.instructions+=3;NFSU2_TR(0x74e1c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e1c9:{NFSU2_TR(0x74e1c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e1cb:{NFSU2_TR(0x74e1cb);
if(r1(R+518)){{goto L74e1d0;}}
}
B74e1cd:L74e1cd:{c.instructions+=1;NFSU2_TR(0x74e1cd);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74e1d0:L74e1d0:{c.instructions+=4;NFSU2_TR(0x74e1d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74e1d4:{NFSU2_TR(0x74e1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e1da:{NFSU2_TR(0x74e1da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e1dc:{NFSU2_TR(0x74e1dc);
if(r1(R+518)){{goto L74e204;}}
}
B74e1de:L74e1de:{c.instructions+=4;NFSU2_TR(0x74e1de);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74e1e2:{NFSU2_TR(0x74e1e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e1e3:{NFSU2_TR(0x74e1e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e1e4:{NFSU2_TR(0x74e1e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e1e9ull));
TAIL_STATIC(0x754f70u,754);
}
B74e1e9:L74e1e9:{c.instructions+=3;NFSU2_TR(0x74e1e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e1ec:{NFSU2_TR(0x74e1ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e1ee:{NFSU2_TR(0x74e1ee);
if(r1(R+518)){{goto L74e204;}}
}
B74e1f0:L74e1f0:{c.instructions+=4;NFSU2_TR(0x74e1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74e1f6:{NFSU2_TR(0x74e1f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e1f7:{NFSU2_TR(0x74e1f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e1f8:{NFSU2_TR(0x74e1f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e1fdull));
TAIL_STATIC(0x73d810u,73d);
}
B74e1fd:L74e1fd:{c.instructions+=3;NFSU2_TR(0x74e1fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e200:{NFSU2_TR(0x74e200);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e202:{NFSU2_TR(0x74e202);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e219;}}
}
B74e204:L74e204:{c.instructions+=6;NFSU2_TR(0x74e204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74e205:{NFSU2_TR(0x74e205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74e206:{NFSU2_TR(0x74e206);
w4(R+0,u32(0xfffffffeull));
}
B74e20b:{NFSU2_TR(0x74e20b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74e20c:{NFSU2_TR(0x74e20c);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e210:{NFSU2_TR(0x74e210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e215ull));
TAIL_STATIC(0x76115eu,761);
}
B74e215:L74e215:{c.instructions+=2;NFSU2_TR(0x74e215);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x68ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x68ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74e218:{NFSU2_TR(0x74e218);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74e219:L74e219:{c.instructions+=2;NFSU2_TR(0x74e219);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x49ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74e21c:{NFSU2_TR(0x74e21c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e225;}}
}
B74e21e:L74e21e:{c.instructions+=2;NFSU2_TR(0x74e21e);
w4(R+28,u32(0x400000ull));
}
B74e223:{NFSU2_TR(0x74e223);
{goto L74e26b;}
}
B74e225:L74e225:{c.instructions+=2;NFSU2_TR(0x74e225);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74e228:{NFSU2_TR(0x74e228);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e231;}}
}
B74e22a:L74e22a:{c.instructions+=2;NFSU2_TR(0x74e22a);
w4(R+28,u32(0x8ull));
}
B74e22f:{NFSU2_TR(0x74e22f);
{goto L74e26b;}
}
B74e231:L74e231:{c.instructions+=2;NFSU2_TR(0x74e231);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x44ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74e234:{NFSU2_TR(0x74e234);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e249;}}
}
B74e236:L74e236:{c.instructions+=4;NFSU2_TR(0x74e236);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e23c:{NFSU2_TR(0x74e23c);
w4(R+28,u32(0x400ull));
}
B74e241:{NFSU2_TR(0x74e241);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffdffffull))));
}
B74e247:{NFSU2_TR(0x74e247);
{goto L74e273;}
}
B74e249:L74e249:{c.instructions+=2;NFSU2_TR(0x74e249);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x52ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74e24c:{NFSU2_TR(0x74e24c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e261;}}
}
B74e24e:L74e24e:{c.instructions+=4;NFSU2_TR(0x74e24e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e254:{NFSU2_TR(0x74e254);
w4(R+28,u32(0x800ull));
}
B74e259:{NFSU2_TR(0x74e259);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfbbd73f7ull))));
}
B74e25f:{NFSU2_TR(0x74e25f);
{goto L74e273;}
}
B74e261:L74e261:{c.instructions+=2;NFSU2_TR(0x74e261);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x47ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74e264:{NFSU2_TR(0x74e264);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e279;}}
}
B74e266:L74e266:{c.instructions+=1;NFSU2_TR(0x74e266);
w4(R+28,u32(0x8000ull));
}
B74e26b:L74e26b:{c.instructions+=2;NFSU2_TR(0x74e26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e271:{NFSU2_TR(0x74e271);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B74e273:L74e273:{c.instructions+=1;NFSU2_TR(0x74e273);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e279:L74e279:{c.instructions+=3;NFSU2_TR(0x74e279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e27f:{NFSU2_TR(0x74e27f);
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
B74e281:{NFSU2_TR(0x74e281);
if(r1(R+518)){{goto L74e297;}}
}
B74e283:L74e283:{c.instructions+=7;NFSU2_TR(0x74e283);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74e289:{NFSU2_TR(0x74e289);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e28a:{NFSU2_TR(0x74e28a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e28b:{NFSU2_TR(0x74e28b);
u8 U[4];
w4(U+0,u32(0x67696e76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e290:{NFSU2_TR(0x74e290);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e291:{NFSU2_TR(0x74e291);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e292:{NFSU2_TR(0x74e292);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e294ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74e294:L74e294:{c.instructions+=1;NFSU2_TR(0x74e294);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74e297:L74e297:{c.instructions+=6;NFSU2_TR(0x74e297);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e29b:{NFSU2_TR(0x74e29b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74e29c:{NFSU2_TR(0x74e29c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74e29d:{NFSU2_TR(0x74e29d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74e29f:{NFSU2_TR(0x74e29f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74e2a0:{NFSU2_TR(0x74e2a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e2a5ull));
TAIL_STATIC(0x76115eu,761);
}
B74e2a5:L74e2a5:{c.instructions+=2;NFSU2_TR(0x74e2a5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x68ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x68ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74e2a8:{NFSU2_TR(0x74e2a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74e2b0:L74e2b0:{c.instructions+=13;NFSU2_TR(0x74e2b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e2b1:{NFSU2_TR(0x74e2b1);
__builtin_memmove((R+20),(R+16),4);
}
B74e2b3:{NFSU2_TR(0x74e2b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B74e2b6:{NFSU2_TR(0x74e2b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x214ull))));
}
B74e2bc:{NFSU2_TR(0x74e2bc);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74e2c1:{NFSU2_TR(0x74e2c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e2c2:{NFSU2_TR(0x74e2c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e2c3:{NFSU2_TR(0x74e2c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e2c4:{NFSU2_TR(0x74e2c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e2cb:{NFSU2_TR(0x74e2cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74e2cd:{NFSU2_TR(0x74e2cd);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e2d2:{NFSU2_TR(0x74e2d2);
w4(R+4,u32(0x42ull));
}
B74e2d7:{NFSU2_TR(0x74e2d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74e2db:L74e2db:{c.instructions+=1;NFSU2_TR(0x74e2db);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74e2dd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e2dbu);}goto L74e2db;}
}
B74e2dd:L74e2dd:{c.instructions+=8;NFSU2_TR(0x74e2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74e2e0:{NFSU2_TR(0x74e2e0);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e2e5:{NFSU2_TR(0x74e2e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74e2ec:{NFSU2_TR(0x74e2ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e2ed:{NFSU2_TR(0x74e2ed);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e2f2:{NFSU2_TR(0x74e2f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e2f3:{NFSU2_TR(0x74e2f3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74e2f5:{NFSU2_TR(0x74e2f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e2faull));
TAIL_STATIC(0x7414a0u,741);
}
B74e2fa:L74e2fa:{c.instructions+=3;NFSU2_TR(0x74e2fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e2fd:{NFSU2_TR(0x74e2fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e2fe:{NFSU2_TR(0x74e2fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e303ull));
TAIL_STATIC(0x742360u,742);
}
B74e303:L74e303:{c.instructions+=4;NFSU2_TR(0x74e303);
u8 U[4];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74e30a:{NFSU2_TR(0x74e30a);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e30c:{NFSU2_TR(0x74e30c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e30d:{NFSU2_TR(0x74e30d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e312ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74e312:L74e312:{c.instructions+=3;NFSU2_TR(0x74e312);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74e315:{NFSU2_TR(0x74e315);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e317:{NFSU2_TR(0x74e317);
if(r1(R+518)){{goto L74e31c;}}
}
B74e319:L74e319:{c.instructions+=1;NFSU2_TR(0x74e319);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74e31c:L74e31c:{c.instructions+=4;NFSU2_TR(0x74e31c);
u8 U[4];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74e323:{NFSU2_TR(0x74e323);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e325:{NFSU2_TR(0x74e325);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e326:{NFSU2_TR(0x74e326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e32bull));
TAIL_STATIC(0x75cf10u,75c);
}
B74e32b:L74e32b:{c.instructions+=3;NFSU2_TR(0x74e32b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e32e:{NFSU2_TR(0x74e32e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e330:{NFSU2_TR(0x74e330);
if(r1(R+518)){{goto L74e335;}}
}
B74e332:L74e332:{c.instructions+=1;NFSU2_TR(0x74e332);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74e335:L74e335:{c.instructions+=4;NFSU2_TR(0x74e335);
u8 U[4];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74e33c:{NFSU2_TR(0x74e33c);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e33e:{NFSU2_TR(0x74e33e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e33f:{NFSU2_TR(0x74e33f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e344ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74e344:L74e344:{c.instructions+=3;NFSU2_TR(0x74e344);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e347:{NFSU2_TR(0x74e347);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e349:{NFSU2_TR(0x74e349);
if(r1(R+518)){{goto L74e34e;}}
}
B74e34b:L74e34b:{c.instructions+=1;NFSU2_TR(0x74e34b);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74e34e:L74e34e:{c.instructions+=1;NFSU2_TR(0x74e34e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74e350:L74e350:{c.instructions+=5;NFSU2_TR(0x74e350);
u8 U[13];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B74e357:{NFSU2_TR(0x74e357);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B74e35b:{NFSU2_TR(0x74e35b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74e35c:{NFSU2_TR(0x74e35c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e35e:{NFSU2_TR(0x74e35e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e350u);}goto L74e350;}}
}
B74e360:L74e360:{c.instructions+=7;NFSU2_TR(0x74e360);
u8 U[4];
w4(U+0,u32(0x7d29f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e365:{NFSU2_TR(0x74e365);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e36a:{NFSU2_TR(0x74e36a);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74e371:{NFSU2_TR(0x74e371);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e372:{NFSU2_TR(0x74e372);
u8 U[4];
w4(U+0,u32(0x7d2f4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e377:{NFSU2_TR(0x74e377);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e378:{NFSU2_TR(0x74e378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e37dull));
TAIL_STATIC(0x7414a0u,741);
}
B74e37d:L74e37d:{c.instructions+=3;NFSU2_TR(0x74e37d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e380:{NFSU2_TR(0x74e380);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e381:{NFSU2_TR(0x74e381);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e386ull));
TAIL_STATIC(0x742360u,742);
}
B74e386:L74e386:{c.instructions+=4;NFSU2_TR(0x74e386);
u8 U[5];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B74e38d:{NFSU2_TR(0x74e38d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74e390:{NFSU2_TR(0x74e390);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x44ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74e393:{NFSU2_TR(0x74e393);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e3c0;}}
}
B74e395:L74e395:{c.instructions+=6;NFSU2_TR(0x74e395);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e398:{NFSU2_TR(0x74e398);
u8 U[4];
w4(U+0,u32(0xc0004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e39d:{NFSU2_TR(0x74e39d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74e3a1:{NFSU2_TR(0x74e3a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e3a2:{NFSU2_TR(0x74e3a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e3a3:{NFSU2_TR(0x74e3a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e3a8ull));
TAIL_STATIC(0x74cd70u,74c);
}
B74e3a8:L74e3a8:{c.instructions+=4;NFSU2_TR(0x74e3a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74e3ab:{NFSU2_TR(0x74e3ab);
__builtin_memmove((R+0),(R+24),4);
}
B74e3ad:{NFSU2_TR(0x74e3ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e3b4:{NFSU2_TR(0x74e3b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e3b9ull));
TAIL_STATIC(0x76115eu,761);
}
B74e3b9:L74e3b9:{c.instructions+=6;NFSU2_TR(0x74e3b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74e3ba:{NFSU2_TR(0x74e3ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74e3bb:{NFSU2_TR(0x74e3bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74e3bc:{NFSU2_TR(0x74e3bc);
__builtin_memmove((R+16),(R+20),4);
}
B74e3be:{NFSU2_TR(0x74e3be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74e3bf:{NFSU2_TR(0x74e3bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74e3c0:L74e3c0:{c.instructions+=4;NFSU2_TR(0x74e3c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e3c2:{NFSU2_TR(0x74e3c2);
u8 U[4];
w4(U+0,u32(0x7a1578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e3c7:{NFSU2_TR(0x74e3c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e3c8:{NFSU2_TR(0x74e3c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e3cdull));
TAIL_STATIC(0x7414a0u,741);
}
B74e3cd:L74e3cd:{c.instructions+=3;NFSU2_TR(0x74e3cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e3d0:{NFSU2_TR(0x74e3d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e3d1:{NFSU2_TR(0x74e3d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e3d6ull));
TAIL_STATIC(0x742100u,742);
}
B74e3d6:L74e3d6:{c.instructions+=12;NFSU2_TR(0x74e3d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74e3dd:{NFSU2_TR(0x74e3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74e3e0:{NFSU2_TR(0x74e3e0);
__builtin_memmove((R+4),(R+0),4);
}
B74e3e2:{NFSU2_TR(0x74e3e2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x100000ull))));
}
B74e3e8:{NFSU2_TR(0x74e3e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B74e3eb:{NFSU2_TR(0x74e3eb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xc0000ull))));
}
B74e3f0:{NFSU2_TR(0x74e3f0);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B74e3f2:{NFSU2_TR(0x74e3f2);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B74e3f4:{NFSU2_TR(0x74e3f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e3f7:{NFSU2_TR(0x74e3f7);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x58ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74e3fa:{NFSU2_TR(0x74e3fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e401:{NFSU2_TR(0x74e401);
if(r1(R+518)){{goto L74e408;}}
}
B74e403:L74e403:{c.instructions+=2;NFSU2_TR(0x74e403);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74e406:{NFSU2_TR(0x74e406);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e479;}}
}
B74e408:L74e408:{c.instructions+=3;NFSU2_TR(0x74e408);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e40e:{NFSU2_TR(0x74e40e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e410:{NFSU2_TR(0x74e410);
if(r1(R+518)){{goto L74e479;}}
}
B74e412:L74e412:{c.instructions+=4;NFSU2_TR(0x74e412);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74e416:{NFSU2_TR(0x74e416);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e417:{NFSU2_TR(0x74e417);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e418:{NFSU2_TR(0x74e418);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e41dull));
TAIL_STATIC(0x754f70u,754);
}
B74e41d:L74e41d:{c.instructions+=3;NFSU2_TR(0x74e41d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e420:{NFSU2_TR(0x74e420);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e422:{NFSU2_TR(0x74e422);
if(r1(R+518)){{goto L74e479;}}
}
B74e424:L74e424:{c.instructions+=4;NFSU2_TR(0x74e424);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e425:{NFSU2_TR(0x74e425);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e42b:{NFSU2_TR(0x74e42b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e42c:{NFSU2_TR(0x74e42c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e431ull));
TAIL_STATIC(0x73d810u,73d);
}
B74e431:L74e431:{c.instructions+=3;NFSU2_TR(0x74e431);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e434:{NFSU2_TR(0x74e434);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e436:{NFSU2_TR(0x74e436);
if(r1(R+518)){{goto L74e479;}}
}
B74e438:L74e438:{c.instructions+=4;NFSU2_TR(0x74e438);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e43e:{NFSU2_TR(0x74e43e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e444:{NFSU2_TR(0x74e444);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74e44b:{NFSU2_TR(0x74e44b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74e455;}}
}
B74e44d:L74e44d:{c.instructions+=2;NFSU2_TR(0x74e44d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e453:{NFSU2_TR(0x74e453);
if(r1(R+518)){{goto L74e465;}}
}
B74e455:L74e455:{c.instructions+=2;NFSU2_TR(0x74e455);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e45b:{NFSU2_TR(0x74e45b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74e479;}}
}
B74e45d:L74e45d:{c.instructions+=2;NFSU2_TR(0x74e45d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e463:{NFSU2_TR(0x74e463);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e479;}}
}
B74e465:L74e465:{c.instructions+=3;NFSU2_TR(0x74e465);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4ull))));
}
B74e468:{NFSU2_TR(0x74e468);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e46f:{NFSU2_TR(0x74e46f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfff3ffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B74e479:L74e479:{c.instructions+=4;NFSU2_TR(0x74e479);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74e47d:{NFSU2_TR(0x74e47d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e47e:{NFSU2_TR(0x74e47e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e47f:{NFSU2_TR(0x74e47f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e484ull));
TAIL_STATIC(0x74cce0u,74c);
}
B74e484:L74e484:{c.instructions+=4;NFSU2_TR(0x74e484);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e487:{NFSU2_TR(0x74e487);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e489:{NFSU2_TR(0x74e489);
w4(R+0,u32(0xfffffffeull));
}
B74e48e:{NFSU2_TR(0x74e48e);
if(r1(R+518)){{goto L74e492;}}
}
B74e490:L74e490:{c.instructions+=1;NFSU2_TR(0x74e490);
__builtin_memmove((R+0),(R+24),4);
}
B74e492:L74e492:{c.instructions+=2;NFSU2_TR(0x74e492);
u8 U[8];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e499:{NFSU2_TR(0x74e499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e49eull));
TAIL_STATIC(0x76115eu,761);
}
B74e49e:L74e49e:{c.instructions+=6;NFSU2_TR(0x74e49e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74e49f:{NFSU2_TR(0x74e49f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74e4a0:{NFSU2_TR(0x74e4a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74e4a1:{NFSU2_TR(0x74e4a1);
__builtin_memmove((R+16),(R+20),4);
}
B74e4a3:{NFSU2_TR(0x74e4a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74e4a4:{NFSU2_TR(0x74e4a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74e4b0:L74e4b0:{c.instructions+=5;NFSU2_TR(0x74e4b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e4b1:{NFSU2_TR(0x74e4b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74e4b5:{NFSU2_TR(0x74e4b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e4b8:{NFSU2_TR(0x74e4b8);
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
B74e4ba:{NFSU2_TR(0x74e4ba);
if(r1(R+518)){{goto L74e4ca;}}
}
B74e4bc:L74e4bc:{c.instructions+=2;NFSU2_TR(0x74e4bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e4bd:{NFSU2_TR(0x74e4bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e4c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74e4c0:L74e4c0:{c.instructions+=2;NFSU2_TR(0x74e4c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74e4c3:{NFSU2_TR(0x74e4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74e4ca:L74e4ca:{c.instructions+=2;NFSU2_TR(0x74e4ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e4cb:{NFSU2_TR(0x74e4cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e4d0ull));
TAIL_STATIC(0x74d0c0u,74d);
}
B74e4d0:L74e4d0:{c.instructions+=2;NFSU2_TR(0x74e4d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e4d1:{NFSU2_TR(0x74e4d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e4d6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e020u);}goto L74e020;}
}
B74e4d6:L74e4d6:{c.instructions+=2;NFSU2_TR(0x74e4d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e4d7:{NFSU2_TR(0x74e4d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e4dcull));
TAIL_STATIC(0x74d0c0u,74d);
}
B74e4dc:L74e4dc:{c.instructions+=3;NFSU2_TR(0x74e4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e4df:{NFSU2_TR(0x74e4df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e4e0:{NFSU2_TR(0x74e4e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e4e5ull));
TAIL_STATIC(0x7542c0u,754);
}
B74e4e5:L74e4e5:{c.instructions+=2;NFSU2_TR(0x74e4e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e4e6:{NFSU2_TR(0x74e4e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e4e9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74e4e9:L74e4e9:{c.instructions+=3;NFSU2_TR(0x74e4e9);
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
B74e4ec:{NFSU2_TR(0x74e4ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74e4ed:{NFSU2_TR(0x74e4ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74e4f0:L74e4f0:{c.instructions+=10;NFSU2_TR(0x74e4f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x220ull))));
}
B74e4f6:{NFSU2_TR(0x74e4f6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74e4fb:{NFSU2_TR(0x74e4fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e4fc:{NFSU2_TR(0x74e4fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e4fd:{NFSU2_TR(0x74e4fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74e504:{NFSU2_TR(0x74e504);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e505:{NFSU2_TR(0x74e505);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e506:{NFSU2_TR(0x74e506);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e507:{NFSU2_TR(0x74e507);
u8 U[8];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e50e:{NFSU2_TR(0x74e50e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e513ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e020u);}goto L74e020;}
}
B74e513:L74e513:{c.instructions+=14;NFSU2_TR(0x74e513);
u8 U[8];
w4(U+0,u32(u32(u32(0x250ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e51a:{NFSU2_TR(0x74e51a);
u8 U[8];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74e521:{NFSU2_TR(0x74e521);
u8 U[8];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e528:{NFSU2_TR(0x74e528);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e52e:{NFSU2_TR(0x74e52e);
u8 U[8];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e535:{NFSU2_TR(0x74e535);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e53a:{NFSU2_TR(0x74e53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e53d:{NFSU2_TR(0x74e53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e543:{NFSU2_TR(0x74e543);
u8 U[8];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e54a:{NFSU2_TR(0x74e54a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e54b:{NFSU2_TR(0x74e54b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74e54e:{NFSU2_TR(0x74e54e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e54f:{NFSU2_TR(0x74e54f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e555:{NFSU2_TR(0x74e555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e55aull));
TAIL_STATIC(0x75c840u,75c);
}
B74e55a:L74e55a:{c.instructions+=6;NFSU2_TR(0x74e55a);
u8 U[8];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74e561:{NFSU2_TR(0x74e561);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e566:{NFSU2_TR(0x74e566);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74e56c:{NFSU2_TR(0x74e56c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e56d:{NFSU2_TR(0x74e56d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e56e:{NFSU2_TR(0x74e56e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e573ull));
TAIL_STATIC(0x75c840u,75c);
}
B74e573:L74e573:{c.instructions+=6;NFSU2_TR(0x74e573);
u8 U[8];
w4(U+0,u32(u32(u32(0x264ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74e57a:{NFSU2_TR(0x74e57a);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e57f:{NFSU2_TR(0x74e57f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x128ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74e585:{NFSU2_TR(0x74e585);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e586:{NFSU2_TR(0x74e586);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e587:{NFSU2_TR(0x74e587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e58cull));
TAIL_STATIC(0x75c840u,75c);
}
B74e58c:L74e58c:{c.instructions+=4;NFSU2_TR(0x74e58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e592:{NFSU2_TR(0x74e592);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B74e595:{NFSU2_TR(0x74e595);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e597:{NFSU2_TR(0x74e597);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e5ab;}}
}
B74e599:L74e599:{c.instructions+=2;NFSU2_TR(0x74e599);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e59a:{NFSU2_TR(0x74e59a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e59full));
TAIL_STATIC(0x74bcd0u,74b);
}
B74e59f:L74e59f:{c.instructions+=3;NFSU2_TR(0x74e59f);
w4(R+8,u32(r2(R+0)));
}
B74e5a2:{NFSU2_TR(0x74e5a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74e5a5:{NFSU2_TR(0x74e5a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e5ab:L74e5ab:{c.instructions+=8;NFSU2_TR(0x74e5ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x534ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74e5b1:{NFSU2_TR(0x74e5b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5b2:{NFSU2_TR(0x74e5b2);
u8 U[4];
w4(U+0,u32(0x7a14b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5b7:{NFSU2_TR(0x74e5b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5b4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74e5bd:{NFSU2_TR(0x74e5bd);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5c2:{NFSU2_TR(0x74e5c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5c3:{NFSU2_TR(0x74e5c3);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+12)),r1(U+0));
}
B74e5c6:{NFSU2_TR(0x74e5c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e5cbull));
TAIL_STATIC(0x741a50u,741);
}
B74e5cb:L74e5cb:{c.instructions+=6;NFSU2_TR(0x74e5cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x574ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74e5d1:{NFSU2_TR(0x74e5d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5d2:{NFSU2_TR(0x74e5d2);
u8 U[4];
w4(U+0,u32(0x7a1498ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5d7:{NFSU2_TR(0x74e5d7);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5dc:{NFSU2_TR(0x74e5dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5dd:{NFSU2_TR(0x74e5dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e5e2ull));
TAIL_STATIC(0x741a50u,741);
}
B74e5e2:L74e5e2:{c.instructions+=6;NFSU2_TR(0x74e5e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4e8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74e5e8:{NFSU2_TR(0x74e5e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5e9:{NFSU2_TR(0x74e5e9);
u8 U[4];
w4(U+0,u32(0x7d2f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5ee:{NFSU2_TR(0x74e5ee);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5f3:{NFSU2_TR(0x74e5f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5f4:{NFSU2_TR(0x74e5f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e5f9ull));
TAIL_STATIC(0x741a50u,741);
}
B74e5f9:L74e5f9:{c.instructions+=3;NFSU2_TR(0x74e5f9);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5fb:{NFSU2_TR(0x74e5fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e5fc:{NFSU2_TR(0x74e5fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e601ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74e601:L74e601:{c.instructions+=3;NFSU2_TR(0x74e601);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B74e604:{NFSU2_TR(0x74e604);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e606:{NFSU2_TR(0x74e606);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e632;}}
}
B74e608:L74e608:{c.instructions+=5;NFSU2_TR(0x74e608);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e609:{NFSU2_TR(0x74e609);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e60e:{NFSU2_TR(0x74e60e);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e613:{NFSU2_TR(0x74e613);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e614:{NFSU2_TR(0x74e614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e619ull));
TAIL_STATIC(0x741a50u,741);
}
B74e619:L74e619:{c.instructions+=5;NFSU2_TR(0x74e619);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e61a:{NFSU2_TR(0x74e61a);
u8 U[4];
w4(U+0,u32(0x7a1300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e61f:{NFSU2_TR(0x74e61f);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e624:{NFSU2_TR(0x74e624);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e625:{NFSU2_TR(0x74e625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e62aull));
TAIL_STATIC(0x741a50u,741);
}
B74e62a:L74e62a:{c.instructions+=2;NFSU2_TR(0x74e62a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74e62d:{NFSU2_TR(0x74e62d);
{goto L74e732;}
}
B74e632:L74e632:{c.instructions+=5;NFSU2_TR(0x74e632);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e637:{NFSU2_TR(0x74e637);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74e63b:{NFSU2_TR(0x74e63b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e63c:{NFSU2_TR(0x74e63c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e63d:{NFSU2_TR(0x74e63d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e642ull));
TAIL_STATIC(0x75c840u,75c);
}
B74e642:L74e642:{c.instructions+=5;NFSU2_TR(0x74e642);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74e646:{NFSU2_TR(0x74e646);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e648:{NFSU2_TR(0x74e648);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e649:{NFSU2_TR(0x74e649);
u8 U[5];
w4(U+0,u32(u32(u32(0x13full))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74e651:{NFSU2_TR(0x74e651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e656ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74e656:L74e656:{c.instructions+=4;NFSU2_TR(0x74e656);
__builtin_memmove((R+24),(R+0),4);
}
B74e658:{NFSU2_TR(0x74e658);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74e65b:{NFSU2_TR(0x74e65b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e65d:{NFSU2_TR(0x74e65d);
if(r1(R+518)){{goto L74e732;}}
}
B74e663:L74e663:{c.instructions+=9;NFSU2_TR(0x74e663);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74e667:{NFSU2_TR(0x74e667);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e668:{NFSU2_TR(0x74e668);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B74e66b:{NFSU2_TR(0x74e66b);
u8 U[4];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74e672:{NFSU2_TR(0x74e672);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e677:{NFSU2_TR(0x74e677);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74e678:{NFSU2_TR(0x74e678);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e679:{NFSU2_TR(0x74e679);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e67d:{NFSU2_TR(0x74e67d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e682ull));
TAIL_STATIC(0x741650u,741);
}
B74e682:L74e682:{c.instructions+=4;NFSU2_TR(0x74e682);
u8 U[4];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74e689:{NFSU2_TR(0x74e689);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74e68c:{NFSU2_TR(0x74e68c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74e68f:{NFSU2_TR(0x74e68f);
}
B74e690:L74e690:{c.instructions+=4;NFSU2_TR(0x74e690);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74e692:{NFSU2_TR(0x74e692);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74e693:{NFSU2_TR(0x74e693);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e695:{NFSU2_TR(0x74e695);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e690u);}goto L74e690;}}
}
B74e697:L74e697:{c.instructions+=4;NFSU2_TR(0x74e697);
__builtin_memmove((R+4),(R+28),4);
}
B74e699:{NFSU2_TR(0x74e699);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74e69b:{NFSU2_TR(0x74e69b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74e69e:{NFSU2_TR(0x74e69e);
__builtin_memmove((R+28),(R+28),4);
}
B74e6a0:L74e6a0:{c.instructions+=4;NFSU2_TR(0x74e6a0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B74e6a2:{NFSU2_TR(0x74e6a2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74e6a3:{NFSU2_TR(0x74e6a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e6a5:{NFSU2_TR(0x74e6a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e6a0u);}goto L74e6a0;}}
}
B74e6a7:L74e6a7:{c.instructions+=4;NFSU2_TR(0x74e6a7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B74e6a9:{NFSU2_TR(0x74e6a9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B74e6ab:{NFSU2_TR(0x74e6ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x100ull))));
}
B74e6b1:{NFSU2_TR(0x74e6b1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L74e6ed;}}
}
B74e6b3:L74e6b3:{c.instructions+=3;NFSU2_TR(0x74e6b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e6ba:{NFSU2_TR(0x74e6ba);
__builtin_memmove((R+8),(R+0),4);
}
B74e6bc:{NFSU2_TR(0x74e6bc);
__builtin_memmove((R+16),(R+16),4);
}
B74e6c0:L74e6c0:{c.instructions+=4;NFSU2_TR(0x74e6c0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74e6c2:{NFSU2_TR(0x74e6c2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74e6c3:{NFSU2_TR(0x74e6c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e6c5:{NFSU2_TR(0x74e6c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e6c0u);}goto L74e6c0;}}
}
B74e6c7:L74e6c7:{c.instructions+=3;NFSU2_TR(0x74e6c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74e6ce:{NFSU2_TR(0x74e6ce);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74e6d0:{NFSU2_TR(0x74e6d0);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B74e6d1:L74e6d1:{c.instructions+=4;NFSU2_TR(0x74e6d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74e6d4:{NFSU2_TR(0x74e6d4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B74e6d5:{NFSU2_TR(0x74e6d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e6d7:{NFSU2_TR(0x74e6d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e6d1u);}goto L74e6d1;}}
}
B74e6d9:L74e6d9:{c.instructions+=3;NFSU2_TR(0x74e6d9);
__builtin_memmove((R+4),(R+0),4);
}
B74e6db:{NFSU2_TR(0x74e6db);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B74e6de:{NFSU2_TR(0x74e6de);
__builtin_memmove((R+24),(R+8),4);
}
B74e6e0:L74e6e0:{c.instructions+=1;NFSU2_TR(0x74e6e0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74e6e2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e6e0u);}goto L74e6e0;}
}
B74e6e2:L74e6e2:{c.instructions+=2;NFSU2_TR(0x74e6e2);
__builtin_memmove((R+4),(R+0),4);
}
B74e6e4:{NFSU2_TR(0x74e6e4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B74e6e7:L74e6e7:{c.instructions+=1;NFSU2_TR(0x74e6e7);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L74e6e9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e6e7u);}goto L74e6e7;}
}
B74e6e9:L74e6e9:{c.instructions+=1;NFSU2_TR(0x74e6e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74e6ed:L74e6ed:{c.instructions+=6;NFSU2_TR(0x74e6ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74e6f4:{NFSU2_TR(0x74e6f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e6f5:{NFSU2_TR(0x74e6f5);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e6fa:{NFSU2_TR(0x74e6fa);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e6ff:{NFSU2_TR(0x74e6ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e700:{NFSU2_TR(0x74e700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e705ull));
TAIL_STATIC(0x741a50u,741);
}
B74e705:L74e705:{c.instructions+=4;NFSU2_TR(0x74e705);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74e707:{NFSU2_TR(0x74e707);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74e70a:{NFSU2_TR(0x74e70a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x24ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e70c:{NFSU2_TR(0x74e70c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e717;}}
}
B74e70e:L74e70e:{c.instructions+=4;NFSU2_TR(0x74e70e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74e70f:{NFSU2_TR(0x74e70f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e710:{NFSU2_TR(0x74e710);
u8 U[4];
w4(U+0,u32(0x7a1300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e715:{NFSU2_TR(0x74e715);
{goto L74e71d;}
}
B74e717:L74e717:{c.instructions+=2;NFSU2_TR(0x74e717);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e718:{NFSU2_TR(0x74e718);
u8 U[4];
w4(U+0,u32(0x7a13c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e71d:L74e71d:{c.instructions+=3;NFSU2_TR(0x74e71d);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e722:{NFSU2_TR(0x74e722);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e723:{NFSU2_TR(0x74e723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e728ull));
TAIL_STATIC(0x741a50u,741);
}
B74e728:L74e728:{c.instructions+=2;NFSU2_TR(0x74e728);
u8 U[8];
w4(U+0,u32(u32(u32(0x258ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74e72f:{NFSU2_TR(0x74e72f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74e732:L74e732:{c.instructions+=5;NFSU2_TR(0x74e732);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e733:{NFSU2_TR(0x74e733);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6b4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74e739:{NFSU2_TR(0x74e739);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e73b:{NFSU2_TR(0x74e73b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e73c:{NFSU2_TR(0x74e73c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e741ull));
TAIL_STATIC(0x741650u,741);
}
B74e741:L74e741:{c.instructions+=4;NFSU2_TR(0x74e741);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74e743:{NFSU2_TR(0x74e743);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74e746:{NFSU2_TR(0x74e746);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e748:{NFSU2_TR(0x74e748);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e75e;}}
}
B74e74a:L74e74a:{c.instructions+=3;NFSU2_TR(0x74e74a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6b5ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74e750:{NFSU2_TR(0x74e750);
__builtin_memmove((R+8),(R+24),4);
}
B74e752:{NFSU2_TR(0x74e752);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B74e754:L74e754:{c.instructions+=5;NFSU2_TR(0x74e754);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74e756:{NFSU2_TR(0x74e756);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74e759:{NFSU2_TR(0x74e759);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74e75a:{NFSU2_TR(0x74e75a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e75c:{NFSU2_TR(0x74e75c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e754u);}goto L74e754;}}
}
B74e75e:L74e75e:{c.instructions+=3;NFSU2_TR(0x74e75e);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e760:{NFSU2_TR(0x74e760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e761:{NFSU2_TR(0x74e761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e766ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74e766:L74e766:{c.instructions+=4;NFSU2_TR(0x74e766);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B74e768:{NFSU2_TR(0x74e768);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e76b:{NFSU2_TR(0x74e76b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74e76d:{NFSU2_TR(0x74e76d);
if(r1(R+518)){{goto L74e771;}}
}
B74e76f:L74e76f:{c.instructions+=1;NFSU2_TR(0x74e76f);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B74e771:L74e771:{c.instructions+=3;NFSU2_TR(0x74e771);
u8 U[8];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e778:{NFSU2_TR(0x74e778);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2aull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74e77b:{NFSU2_TR(0x74e77b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e77e;}}
}
B74e77d:L74e77d:{c.instructions+=1;NFSU2_TR(0x74e77d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74e77e:L74e77e:{c.instructions+=6;NFSU2_TR(0x74e77e);
u8 U[8];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74e785:{NFSU2_TR(0x74e785);
__builtin_memmove((R+24),(R+28),4);
}
B74e787:{NFSU2_TR(0x74e787);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B74e78d:{NFSU2_TR(0x74e78d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e78e:{NFSU2_TR(0x74e78e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e78f:{NFSU2_TR(0x74e78f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e794ull));
TAIL_STATIC(0x756b90u,756);
}
B74e794:L74e794:{c.instructions+=6;NFSU2_TR(0x74e794);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e797:{NFSU2_TR(0x74e797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e79a:{NFSU2_TR(0x74e79a);
w4(R+4,u32(0x1ull));
}
B74e79f:{NFSU2_TR(0x74e79f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e7a2:{NFSU2_TR(0x74e7a2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74e7a4:{NFSU2_TR(0x74e7a4);
if(r1(R+518)){{goto L74e7d9;}}
}
B74e7a6:L74e7a6:{c.instructions+=4;NFSU2_TR(0x74e7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e7ac:{NFSU2_TR(0x74e7ac);
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
B74e7ae:{NFSU2_TR(0x74e7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e7b1:{NFSU2_TR(0x74e7b1);
if(r1(R+518)){{goto L74e7d9;}}
}
B74e7b3:L74e7b3:{c.instructions+=10;NFSU2_TR(0x74e7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74e7b9:{NFSU2_TR(0x74e7b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e7bd:{NFSU2_TR(0x74e7bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e7be:{NFSU2_TR(0x74e7be);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74e7c2:{NFSU2_TR(0x74e7c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e7c3:{NFSU2_TR(0x74e7c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e7c4:{NFSU2_TR(0x74e7c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x636f6e6eull));
s4(u32(r4(U+0)),r4(U+4));
}
B74e7cc:{NFSU2_TR(0x74e7cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e7d0:{NFSU2_TR(0x74e7d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e7d4:{NFSU2_TR(0x74e7d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e7d6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74e7d6:L74e7d6:{c.instructions+=1;NFSU2_TR(0x74e7d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74e7d9:L74e7d9:{c.instructions+=2;NFSU2_TR(0x74e7d9);
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
B74e7db:{NFSU2_TR(0x74e7db);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74e7f0;}}
}
B74e7dd:L74e7dd:{c.instructions+=3;NFSU2_TR(0x74e7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74e7e0:{NFSU2_TR(0x74e7e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e7e1:{NFSU2_TR(0x74e7e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e7e6ull));
TAIL_STATIC(0x754c40u,754);
}
B74e7e6:L74e7e6:{c.instructions+=4;NFSU2_TR(0x74e7e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74e7e9:{NFSU2_TR(0x74e7e9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B74e7eb:{NFSU2_TR(0x74e7eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e7ee:{NFSU2_TR(0x74e7ee);
{goto L74e7f3;}
}
B74e7f0:L74e7f0:{c.instructions+=1;NFSU2_TR(0x74e7f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e7f3:L74e7f3:{c.instructions+=8;NFSU2_TR(0x74e7f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e7fa:{NFSU2_TR(0x74e7fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74e7fb:{NFSU2_TR(0x74e7fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74e7fc:{NFSU2_TR(0x74e7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4e4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B74e806:{NFSU2_TR(0x74e806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74e807:{NFSU2_TR(0x74e807);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74e809:{NFSU2_TR(0x74e809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74e80a:{NFSU2_TR(0x74e80a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e80full));
TAIL_STATIC(0x76115eu,761);
}
B74e80f:L74e80f:{c.instructions+=2;NFSU2_TR(0x74e80f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x220ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x220ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x220ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74e815:{NFSU2_TR(0x74e815);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74e820:L74e820:{c.instructions+=5;NFSU2_TR(0x74e820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e821:{NFSU2_TR(0x74e821);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74e825:{NFSU2_TR(0x74e825);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e82b:{NFSU2_TR(0x74e82b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74e82d:{NFSU2_TR(0x74e82d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e833;}}
}
B74e82f:L74e82f:{c.instructions+=3;NFSU2_TR(0x74e82f);
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
B74e831:{NFSU2_TR(0x74e831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74e832:{NFSU2_TR(0x74e832);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74e833:L74e833:{c.instructions+=15;NFSU2_TR(0x74e833);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e839:{NFSU2_TR(0x74e839);
__builtin_memmove((R+0),(R+4),4);
}
B74e83b:{NFSU2_TR(0x74e83b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x19660dull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B74e841:{NFSU2_TR(0x74e841);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e842:{NFSU2_TR(0x74e842);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B74e847:{NFSU2_TR(0x74e847);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74e849:{NFSU2_TR(0x74e849);
w4(R+28,u32(0x55ull));
}
B74e84e:{NFSU2_TR(0x74e84e);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x74e84e);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x74e84e);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B74e850:{NFSU2_TR(0x74e850);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e854:{NFSU2_TR(0x74e854);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3c6ef35full))));
}
B74e85a:{NFSU2_TR(0x74e85a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e860:{NFSU2_TR(0x74e860);
__builtin_memmove((R+28),(R+8),4);
}
B74e862:{NFSU2_TR(0x74e862);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfull))));
}
B74e865:{NFSU2_TR(0x74e865);
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
B74e867:{NFSU2_TR(0x74e867);
if(r1(R+518)){{goto L74e8a7;}}
}
B74e869:L74e869:{c.instructions+=20;NFSU2_TR(0x74e869);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e86f:{NFSU2_TR(0x74e86f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e875:{NFSU2_TR(0x74e875);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e876:{NFSU2_TR(0x74e876);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e877:{NFSU2_TR(0x74e877);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e87a:{NFSU2_TR(0x74e87a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74e880:{NFSU2_TR(0x74e880);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e881:{NFSU2_TR(0x74e881);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74e887:{NFSU2_TR(0x74e887);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e888:{NFSU2_TR(0x74e888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e88e:{NFSU2_TR(0x74e88e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B74e88f:{NFSU2_TR(0x74e88f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74e891:{NFSU2_TR(0x74e891);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B74e893:{NFSU2_TR(0x74e893);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B74e895:{NFSU2_TR(0x74e895);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e896:{NFSU2_TR(0x74e896);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e897:{NFSU2_TR(0x74e897);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74e89a:{NFSU2_TR(0x74e89a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e89b:{NFSU2_TR(0x74e89b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e89c:{NFSU2_TR(0x74e89c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e8a1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e4f0u);}goto L74e4f0;}
}
B74e8a1:L74e8a1:{c.instructions+=4;NFSU2_TR(0x74e8a1);
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
B74e8a4:{NFSU2_TR(0x74e8a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74e8a5:{NFSU2_TR(0x74e8a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74e8a6:{NFSU2_TR(0x74e8a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74e8a7:L74e8a7:{c.instructions+=3;NFSU2_TR(0x74e8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e8aa:{NFSU2_TR(0x74e8aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e8ab:{NFSU2_TR(0x74e8ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e8b0ull));
TAIL_STATIC(0x754c40u,754);
}
B74e8b0:L74e8b0:{c.instructions+=8;NFSU2_TR(0x74e8b0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B74e8b6:{NFSU2_TR(0x74e8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e8b9:{NFSU2_TR(0x74e8b9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B74e8bb:{NFSU2_TR(0x74e8bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e8be:{NFSU2_TR(0x74e8be);
w4(R+0,u32(0x7ull));
}
B74e8c3:{NFSU2_TR(0x74e8c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74e8c6:{NFSU2_TR(0x74e8c6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74e8c8:{NFSU2_TR(0x74e8c8);
if(r1(R+518)){{goto L74e8cd;}}
}
B74e8ca:L74e8ca:{c.instructions+=1;NFSU2_TR(0x74e8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e8cd:L74e8cd:{c.instructions+=4;NFSU2_TR(0x74e8cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74e8ce:{NFSU2_TR(0x74e8ce);
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
B74e8d0:{NFSU2_TR(0x74e8d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74e8d1:{NFSU2_TR(0x74e8d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74e8e0:L74e8e0:{c.instructions+=13;NFSU2_TR(0x74e8e0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xc4ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xc4ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74e8e6:{NFSU2_TR(0x74e8e6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74e8eb:{NFSU2_TR(0x74e8eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e8ec:{NFSU2_TR(0x74e8ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e8ed:{NFSU2_TR(0x74e8ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e8ee:{NFSU2_TR(0x74e8ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e8ef:{NFSU2_TR(0x74e8ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74e8f6:{NFSU2_TR(0x74e8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e8f9:{NFSU2_TR(0x74e8f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e900:{NFSU2_TR(0x74e900);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e906:{NFSU2_TR(0x74e906);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e907:{NFSU2_TR(0x74e907);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e90b:{NFSU2_TR(0x74e90b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e910ull));
TAIL_STATIC(0x754c40u,754);
}
B74e910:L74e910:{c.instructions+=5;NFSU2_TR(0x74e910);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74e913:{NFSU2_TR(0x74e913);
__builtin_memmove((R+12),(R+0),4);
}
B74e915:{NFSU2_TR(0x74e915);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e916:{NFSU2_TR(0x74e916);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e91a:{NFSU2_TR(0x74e91a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e91full));
TAIL_STATIC(0x754490u,754);
}
B74e91f:L74e91f:{c.instructions+=12;NFSU2_TR(0x74e91f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74e921:{NFSU2_TR(0x74e921);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e925:{NFSU2_TR(0x74e925);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e929:{NFSU2_TR(0x74e929);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e92d:{NFSU2_TR(0x74e92d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e931:{NFSU2_TR(0x74e931);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e935:{NFSU2_TR(0x74e935);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e939:{NFSU2_TR(0x74e939);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e93f:{NFSU2_TR(0x74e93f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74e941:{NFSU2_TR(0x74e941);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e944:{NFSU2_TR(0x74e944);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74e946:{NFSU2_TR(0x74e946);
if(r1(R+518)){{goto L74e9f0;}}
}
B74e94c:L74e94c:{c.instructions+=3;NFSU2_TR(0x74e94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e94f:{NFSU2_TR(0x74e94f);
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
B74e951:{NFSU2_TR(0x74e951);
if(r1(R+518)){{goto L74e9f0;}}
}
B74e957:L74e957:{c.instructions+=2;NFSU2_TR(0x74e957);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e958:{NFSU2_TR(0x74e958);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e95bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74e95b:L74e95b:{c.instructions+=4;NFSU2_TR(0x74e95b);
__builtin_memmove((R+20),(R+0),4);
}
B74e95d:{NFSU2_TR(0x74e95d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74e960:{NFSU2_TR(0x74e960);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74e962:{NFSU2_TR(0x74e962);
if(r1(R+518)){{goto L74e9f0;}}
}
B74e968:L74e968:{c.instructions+=1;NFSU2_TR(0x74e968);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74e9c5;}}
}
B74e96a:L74e96a:{c.instructions+=5;NFSU2_TR(0x74e96a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74e96d:{NFSU2_TR(0x74e96d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2aull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74e96f:{NFSU2_TR(0x74e96f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74e972:{NFSU2_TR(0x74e972);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x25ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74e975:{NFSU2_TR(0x74e975);
if(r1(R+518)){{goto L74e979;}}
}
B74e977:L74e977:{c.instructions+=1;NFSU2_TR(0x74e977);
__builtin_memmove((R+24),(R+12),4);
}
B74e979:L74e979:{c.instructions+=9;NFSU2_TR(0x74e979);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e97c:{NFSU2_TR(0x74e97c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74e97f:{NFSU2_TR(0x74e97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e982:{NFSU2_TR(0x74e982);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e983:{NFSU2_TR(0x74e983);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e986:{NFSU2_TR(0x74e986);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e987:{NFSU2_TR(0x74e987);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e988:{NFSU2_TR(0x74e988);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e989:{NFSU2_TR(0x74e989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e98eull));
TAIL_STATIC(0x754c50u,754);
}
B74e98e:L74e98e:{c.instructions+=3;NFSU2_TR(0x74e98e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74e991:{NFSU2_TR(0x74e991);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74e993:{NFSU2_TR(0x74e993);
if(r1(R+518)){{goto L74e9a3;}}
}
B74e995:L74e995:{c.instructions+=4;NFSU2_TR(0x74e995);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74e998:{NFSU2_TR(0x74e998);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e99a:{NFSU2_TR(0x74e99a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e99b:{NFSU2_TR(0x74e99b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e9a0ull));
TAIL_STATIC(0x754410u,754);
}
B74e9a0:L74e9a0:{c.instructions+=1;NFSU2_TR(0x74e9a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74e9a3:L74e9a3:{c.instructions+=8;NFSU2_TR(0x74e9a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74e9a6:{NFSU2_TR(0x74e9a6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e9a8:{NFSU2_TR(0x74e9a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5b4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74e9ae:{NFSU2_TR(0x74e9ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e9af:{NFSU2_TR(0x74e9af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e9b1:{NFSU2_TR(0x74e9b1);
u8 U[4];
w4(U+0,u32(0x41555448ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e9b6:{NFSU2_TR(0x74e9b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e9b7:{NFSU2_TR(0x74e9b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e9bcull));
TAIL_STATIC(0x7549f0u,754);
}
B74e9bc:L74e9bc:{c.instructions+=3;NFSU2_TR(0x74e9bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74e9c0:{NFSU2_TR(0x74e9c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74e9c3:{NFSU2_TR(0x74e9c3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74e9c5:L74e9c5:{c.instructions+=2;NFSU2_TR(0x74e9c5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74e9c7:{NFSU2_TR(0x74e9c7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74e9e3;}}
}
B74e9c9:L74e9c9:{c.instructions+=3;NFSU2_TR(0x74e9c9);
w4(R+8,u32(0x2ull));
}
B74e9ce:{NFSU2_TR(0x74e9ce);
__builtin_memmove((R+0),(R+28),4);
}
B74e9d0:{NFSU2_TR(0x74e9d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e9d5ull));
TAIL_STATIC(0x74c580u,74c);
}
B74e9d5:L74e9d5:{c.instructions+=2;NFSU2_TR(0x74e9d5);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B74e9db:{NFSU2_TR(0x74e9db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74e9e3;}}
}
B74e9dd:L74e9dd:{c.instructions+=1;NFSU2_TR(0x74e9dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e9e3:L74e9e3:{c.instructions+=3;NFSU2_TR(0x74e9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e9e6:{NFSU2_TR(0x74e9e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74e9e7:{NFSU2_TR(0x74e9e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74e9eaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74e9ea:L74e9ea:{c.instructions+=2;NFSU2_TR(0x74e9ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74e9ed:{NFSU2_TR(0x74e9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74e9f0:L74e9f0:{c.instructions+=3;NFSU2_TR(0x74e9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e9f3:{NFSU2_TR(0x74e9f3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74e9f5:{NFSU2_TR(0x74e9f5);
if(r1(R+518)){{goto L74ea5a;}}
}
B74e9f7:L74e9f7:{c.instructions+=2;NFSU2_TR(0x74e9f7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74e9f9:{NFSU2_TR(0x74e9f9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74ea5a;}}
}
B74e9fb:L74e9fb:{c.instructions+=3;NFSU2_TR(0x74e9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74e9fe:{NFSU2_TR(0x74e9fe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ea01:{NFSU2_TR(0x74ea01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ea10;}}
}
B74ea03:L74ea03:{c.instructions+=3;NFSU2_TR(0x74ea03);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ea05:{NFSU2_TR(0x74ea05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ea06:{NFSU2_TR(0x74ea06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ea0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e820u);}goto L74e820;}
}
B74ea0b:L74ea0b:{c.instructions+=2;NFSU2_TR(0x74ea0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ea0e:{NFSU2_TR(0x74ea0e);
{goto L74ea5a;}
}
B74ea10:L74ea10:{c.instructions+=3;NFSU2_TR(0x74ea10);
w4(R+4,u32(0x3ull));
}
B74ea15:{NFSU2_TR(0x74ea15);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ea17:{NFSU2_TR(0x74ea17);
if(r1(R+518)){{goto L74ea4c;}}
}
B74ea19:L74ea19:{c.instructions+=4;NFSU2_TR(0x74ea19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ea1f:{NFSU2_TR(0x74ea1f);
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
B74ea21:{NFSU2_TR(0x74ea21);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ea24:{NFSU2_TR(0x74ea24);
if(r1(R+518)){{goto L74ea4c;}}
}
B74ea26:L74ea26:{c.instructions+=10;NFSU2_TR(0x74ea26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74ea2c:{NFSU2_TR(0x74ea2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ea30:{NFSU2_TR(0x74ea30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ea31:{NFSU2_TR(0x74ea31);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74ea35:{NFSU2_TR(0x74ea35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ea36:{NFSU2_TR(0x74ea36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ea37:{NFSU2_TR(0x74ea37);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x636f6e6eull));
s4(u32(r4(U+0)),r4(U+4));
}
B74ea3f:{NFSU2_TR(0x74ea3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ea43:{NFSU2_TR(0x74ea43);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ea47:{NFSU2_TR(0x74ea47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ea49ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74ea49:L74ea49:{c.instructions+=1;NFSU2_TR(0x74ea49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74ea4c:L74ea4c:{c.instructions+=2;NFSU2_TR(0x74ea4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74ea52:{NFSU2_TR(0x74ea52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ea5a;}}
}
B74ea54:L74ea54:{c.instructions+=1;NFSU2_TR(0x74ea54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ea5a:L74ea5a:{c.instructions+=4;NFSU2_TR(0x74ea5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ea5d:{NFSU2_TR(0x74ea5d);
w4(R+20,u32(0x5ull));
}
B74ea62:{NFSU2_TR(0x74ea62);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ea64:{NFSU2_TR(0x74ea64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74eaba;}}
}
B74ea66:L74ea66:{c.instructions+=3;NFSU2_TR(0x74ea66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ea6c:{NFSU2_TR(0x74ea6c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ea6e:{NFSU2_TR(0x74ea6e);
if(r1(R+518)){{goto L74ea81;}}
}
B74ea70:L74ea70:{c.instructions+=2;NFSU2_TR(0x74ea70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B74ea72:{NFSU2_TR(0x74ea72);
if(r1(R+512)){{goto L74ea81;}}
}
B74ea74:L74ea74:{c.instructions+=2;NFSU2_TR(0x74ea74);
__builtin_memmove((R+24),(R+28),4);
}
B74ea76:{NFSU2_TR(0x74ea76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ea7bull));
TAIL_STATIC(0x74c440u,74c);
}
B74ea7b:L74ea7b:{c.instructions+=2;NFSU2_TR(0x74ea7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74ea7f:{NFSU2_TR(0x74ea7f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74ea81:L74ea81:{c.instructions+=2;NFSU2_TR(0x74ea81);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74ea84:{NFSU2_TR(0x74ea84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74eaba;}}
}
B74ea86:L74ea86:{c.instructions+=2;NFSU2_TR(0x74ea86);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74ea8c:{NFSU2_TR(0x74ea8c);
if(r1(R+518)){{goto L74eaba;}}
}
B74ea8e:L74ea8e:{c.instructions+=3;NFSU2_TR(0x74ea8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ea94:{NFSU2_TR(0x74ea94);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ea96:{NFSU2_TR(0x74ea96);
if(r1(R+518)){{goto L74eaba;}}
}
B74ea98:L74ea98:{c.instructions+=2;NFSU2_TR(0x74ea98);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ea9a:{NFSU2_TR(0x74ea9a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74eaba;}}
}
B74ea9c:L74ea9c:{c.instructions+=4;NFSU2_TR(0x74ea9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74eaa2:{NFSU2_TR(0x74eaa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74eaa5:{NFSU2_TR(0x74eaa5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eaa6:{NFSU2_TR(0x74eaa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74eaabull));
TAIL_STATIC(0x7543d0u,754);
}
B74eaab:L74eaab:{c.instructions+=4;NFSU2_TR(0x74eaab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74eaae:{NFSU2_TR(0x74eaae);
w4(R+8,u32(0x3ull));
}
B74eab3:{NFSU2_TR(0x74eab3);
__builtin_memmove((R+0),(R+28),4);
}
B74eab5:{NFSU2_TR(0x74eab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74eabaull));
TAIL_STATIC(0x74c580u,74c);
}
B74eaba:L74eaba:{c.instructions+=3;NFSU2_TR(0x74eaba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74eabd:{NFSU2_TR(0x74eabd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74eac0:{NFSU2_TR(0x74eac0);
if(r1(R+518)){{goto L74eac7;}}
}
B74eac2:L74eac2:{c.instructions+=2;NFSU2_TR(0x74eac2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74eac5:{NFSU2_TR(0x74eac5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74eb1a;}}
}
B74eac7:L74eac7:{c.instructions+=3;NFSU2_TR(0x74eac7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x920ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74eacd:{NFSU2_TR(0x74eacd);
w4(R+12,u32(0x9ull));
}
B74ead2:{NFSU2_TR(0x74ead2);
w4(R+20,u32(0xfffffffcull));
}
B74ead7:L74ead7:{c.instructions+=3;NFSU2_TR(0x74ead7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74ead9:{NFSU2_TR(0x74ead9);
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
B74eadb:{NFSU2_TR(0x74eadb);
if(r1(R+518)){{goto L74eafd;}}
}
B74eadd:L74eadd:{c.instructions+=9;NFSU2_TR(0x74eadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74eae0:{NFSU2_TR(0x74eae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74eae3:{NFSU2_TR(0x74eae3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74eae7:{NFSU2_TR(0x74eae7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eae8:{NFSU2_TR(0x74eae8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74eaec:{NFSU2_TR(0x74eaec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eaed:{NFSU2_TR(0x74eaed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eaee:{NFSU2_TR(0x74eaee);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74eaf2:{NFSU2_TR(0x74eaf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74eaf4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74eaf4:L74eaf4:{c.instructions+=2;NFSU2_TR(0x74eaf4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74eaf7:{NFSU2_TR(0x74eaf7);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B74eafd:L74eafd:{c.instructions+=3;NFSU2_TR(0x74eafd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B74eb00:{NFSU2_TR(0x74eb00);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B74eb01:{NFSU2_TR(0x74eb01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ead7u);}goto L74ead7;}}
}
B74eb03:L74eb03:{c.instructions+=3;NFSU2_TR(0x74eb03);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74eb07:{NFSU2_TR(0x74eb07);
w4(R+20,u32(0x1ull));
}
B74eb0c:{NFSU2_TR(0x74eb0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74eb1f;}}
}
B74eb0e:L74eb0e:{c.instructions+=3;NFSU2_TR(0x74eb0e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eb0f:{NFSU2_TR(0x74eb0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eb10:{NFSU2_TR(0x74eb10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74eb15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e820u);}goto L74e820;}
}
B74eb15:L74eb15:{c.instructions+=2;NFSU2_TR(0x74eb15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74eb18:{NFSU2_TR(0x74eb18);
{goto L74eb1f;}
}
B74eb1a:L74eb1a:{c.instructions+=1;NFSU2_TR(0x74eb1a);
w4(R+20,u32(0x1ull));
}
B74eb1f:L74eb1f:{c.instructions+=10;NFSU2_TR(0x74eb1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74eb23:{NFSU2_TR(0x74eb23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eb24:{NFSU2_TR(0x74eb24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74eb27:{NFSU2_TR(0x74eb27);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74eb2b:{NFSU2_TR(0x74eb2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eb2c:{NFSU2_TR(0x74eb2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74eb30:{NFSU2_TR(0x74eb30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eb31:{NFSU2_TR(0x74eb31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eb32:{NFSU2_TR(0x74eb32);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B74eb34:{NFSU2_TR(0x74eb34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74eb39ull));
TAIL_STATIC(0x754b10u,754);
}
B74eb39:L74eb39:{c.instructions+=3;NFSU2_TR(0x74eb39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74eb3c:{NFSU2_TR(0x74eb3c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B74eb3e:{NFSU2_TR(0x74eb3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x74f560u,74f);}
}
B74eb44:L74eb44:{c.instructions+=5;NFSU2_TR(0x74eb44);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74eb48:{NFSU2_TR(0x74eb48);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74eb4c:{NFSU2_TR(0x74eb4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74eb50:{NFSU2_TR(0x74eb50);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x52454356ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74eb55:{NFSU2_TR(0x74eb55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74eb76;}}
}
B74eb57:L74eb57:{c.instructions+=2;NFSU2_TR(0x74eb57);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74eb5d:{NFSU2_TR(0x74eb5d);
if(r1(R+518)){TAIL_STATIC(0x74f4f2u,74f);}
}
B74eb63:L74eb63:{c.instructions+=3;NFSU2_TR(0x74eb63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eb64:{NFSU2_TR(0x74eb64);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B74eb68:{NFSU2_TR(0x74eb68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74eb6dull));
TAIL_STATIC(0x74be70u,74b);
}
B74eb6d:L74eb6d:{c.instructions+=3;NFSU2_TR(0x74eb6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74eb71:{NFSU2_TR(0x74eb71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74eb74:{NFSU2_TR(0x74eb74);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B74eb76:L74eb76:{c.instructions+=2;NFSU2_TR(0x74eb76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x53454e44ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74eb7b:{NFSU2_TR(0x74eb7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ebaf;}}
}
B74eb7d:L74eb7d:{c.instructions+=3;NFSU2_TR(0x74eb7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x948ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74eb83:{NFSU2_TR(0x74eb83);
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
B74eb85:{NFSU2_TR(0x74eb85);
if(r1(R+518)){TAIL_STATIC(0x74f4f2u,74f);}
}
B74eb8b:L74eb8b:{c.instructions+=7;NFSU2_TR(0x74eb8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x944ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74eb91:{NFSU2_TR(0x74eb91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eb92:{NFSU2_TR(0x74eb92);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74eb96:{NFSU2_TR(0x74eb96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eb97:{NFSU2_TR(0x74eb97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eb98:{NFSU2_TR(0x74eb98);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x73656e64ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74eba0:{NFSU2_TR(0x74eba0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74eba2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74eba2:L74eba2:{c.instructions+=3;NFSU2_TR(0x74eba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74eba6:{NFSU2_TR(0x74eba6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74eba9:{NFSU2_TR(0x74eba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x948ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ebaf:L74ebaf:{c.instructions+=2;NFSU2_TR(0x74ebaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x42524443ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ebb4:{NFSU2_TR(0x74ebb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ebe8;}}
}
B74ebb6:L74ebb6:{c.instructions+=3;NFSU2_TR(0x74ebb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x970ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ebbc:{NFSU2_TR(0x74ebbc);
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
B74ebbe:{NFSU2_TR(0x74ebbe);
if(r1(R+518)){TAIL_STATIC(0x74f4f2u,74f);}
}
B74ebc4:L74ebc4:{c.instructions+=7;NFSU2_TR(0x74ebc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x96cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ebca:{NFSU2_TR(0x74ebca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ebcb:{NFSU2_TR(0x74ebcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74ebcf:{NFSU2_TR(0x74ebcf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ebd0:{NFSU2_TR(0x74ebd0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ebd1:{NFSU2_TR(0x74ebd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x62726463ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74ebd9:{NFSU2_TR(0x74ebd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ebdbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74ebdb:L74ebdb:{c.instructions+=3;NFSU2_TR(0x74ebdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ebdf:{NFSU2_TR(0x74ebdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74ebe2:{NFSU2_TR(0x74ebe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x970ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ebe8:L74ebe8:{c.instructions+=2;NFSU2_TR(0x74ebe8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ebeb:{NFSU2_TR(0x74ebeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ec04;}}
}
B74ebed:L74ebed:{c.instructions+=2;NFSU2_TR(0x74ebed);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74ebf2:{NFSU2_TR(0x74ebf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ec31;}}
}
B74ebf4:L74ebf4:{c.instructions+=3;NFSU2_TR(0x74ebf4);
w4(R+8,u32(0x5ull));
}
B74ebf9:{NFSU2_TR(0x74ebf9);
__builtin_memmove((R+0),(R+28),4);
}
B74ebfb:{NFSU2_TR(0x74ebfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ec00ull));
TAIL_STATIC(0x74c580u,74c);
}
B74ec00:L74ec00:{c.instructions+=1;NFSU2_TR(0x74ec00);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ec04:L74ec04:{c.instructions+=2;NFSU2_TR(0x74ec04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50494e47ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ec09:{NFSU2_TR(0x74ec09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ec2c;}}
}
B74ec0b:L74ec0b:{c.instructions+=9;NFSU2_TR(0x74ec0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ec0f:{NFSU2_TR(0x74ec0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ec13:{NFSU2_TR(0x74ec13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74ec16:{NFSU2_TR(0x74ec16);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ec18:{NFSU2_TR(0x74ec18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ec19:{NFSU2_TR(0x74ec19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ec1a:{NFSU2_TR(0x74ec1a);
u8 U[4];
w4(U+0,u32(0x50494e47ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ec1f:{NFSU2_TR(0x74ec1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ec20:{NFSU2_TR(0x74ec20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ec25ull));
TAIL_STATIC(0x7549f0u,754);
}
B74ec25:L74ec25:{c.instructions+=2;NFSU2_TR(0x74ec25);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ec29:{NFSU2_TR(0x74ec29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74ec2c:L74ec2c:{c.instructions+=2;NFSU2_TR(0x74ec2c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ec2f:{NFSU2_TR(0x74ec2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ec61;}}
}
B74ec31:L74ec31:{c.instructions+=2;NFSU2_TR(0x74ec31);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xfefefefeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74ec39:{NFSU2_TR(0x74ec39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x74f4f2u,74f);}
}
B74ec3f:L74ec3f:{c.instructions+=4;NFSU2_TR(0x74ec3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74ec42:{NFSU2_TR(0x74ec42);
w4(R+8,u32(0x6ull));
}
B74ec47:{NFSU2_TR(0x74ec47);
__builtin_memmove((R+0),(R+28),4);
}
B74ec49:{NFSU2_TR(0x74ec49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ec4eull));
TAIL_STATIC(0x74c580u,74c);
}
B74ec4e:L74ec4e:{c.instructions+=2;NFSU2_TR(0x74ec4e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ec51:{NFSU2_TR(0x74ec51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ec5d;}}
}
B74ec53:L74ec53:{c.instructions+=3;NFSU2_TR(0x74ec53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ec54:{NFSU2_TR(0x74ec54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ec55:{NFSU2_TR(0x74ec55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ec5aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e820u);}goto L74e820;}
}
B74ec5a:L74ec5a:{c.instructions+=1;NFSU2_TR(0x74ec5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ec5d:L74ec5d:{c.instructions+=1;NFSU2_TR(0x74ec5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ec61:L74ec61:{c.instructions+=2;NFSU2_TR(0x74ec61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x41555448ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ec66:{NFSU2_TR(0x74ec66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ecff;}}
}
B74ec6c:L74ec6c:{c.instructions+=3;NFSU2_TR(0x74ec6c);
u8 U[22];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
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
B74ec70:{NFSU2_TR(0x74ec70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ec73:{NFSU2_TR(0x74ec73);
if(r1(R+518)){{goto L74ecb7;}}
}
B74ec75:L74ec75:{c.instructions+=7;NFSU2_TR(0x74ec75);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ec7b:{NFSU2_TR(0x74ec7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ec7c:{NFSU2_TR(0x74ec7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74ec80:{NFSU2_TR(0x74ec80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ec81:{NFSU2_TR(0x74ec81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ec82:{NFSU2_TR(0x74ec82);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x61757468ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74ec8a:{NFSU2_TR(0x74ec8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ec90ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74ec90:L74ec90:{c.instructions+=4;NFSU2_TR(0x74ec90);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ec94:{NFSU2_TR(0x74ec94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74ec97:{NFSU2_TR(0x74ec97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e657477ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ec9c:{NFSU2_TR(0x74ec9c);
if(r1(R+518)){{goto L74eca5;}}
}
B74ec9e:L74ec9e:{c.instructions+=2;NFSU2_TR(0x74ec9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x62736f64ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74eca3:{NFSU2_TR(0x74eca3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ecfb;}}
}
B74eca5:L74eca5:{c.instructions+=2;NFSU2_TR(0x74eca5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eca6:{NFSU2_TR(0x74eca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ecabull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e020u);}goto L74e020;}
}
B74ecab:L74ecab:{c.instructions+=3;NFSU2_TR(0x74ecab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ecac:{NFSU2_TR(0x74ecac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ecad:{NFSU2_TR(0x74ecad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ecb2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e820u);}goto L74e820;}
}
B74ecb2:L74ecb2:{c.instructions+=2;NFSU2_TR(0x74ecb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74ecb5:{NFSU2_TR(0x74ecb5);
{goto L74ecfb;}
}
B74ecb7:L74ecb7:{c.instructions+=8;NFSU2_TR(0x74ecb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ecbb:{NFSU2_TR(0x74ecbb);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ecc0:{NFSU2_TR(0x74ecc0);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ecc2:{NFSU2_TR(0x74ecc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd08ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74ecc8:{NFSU2_TR(0x74ecc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ecc9:{NFSU2_TR(0x74ecc9);
u8 U[4];
w4(U+0,u32(0x7d2f2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ecce:{NFSU2_TR(0x74ecce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eccf:{NFSU2_TR(0x74eccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ecd4ull));
TAIL_STATIC(0x7414a0u,741);
}
B74ecd4:L74ecd4:{c.instructions+=3;NFSU2_TR(0x74ecd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ecd7:{NFSU2_TR(0x74ecd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ecd8:{NFSU2_TR(0x74ecd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ecddull));
TAIL_STATIC(0x742360u,742);
}
B74ecdd:L74ecdd:{c.instructions+=7;NFSU2_TR(0x74ecdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ece3:{NFSU2_TR(0x74ece3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ece4:{NFSU2_TR(0x74ece4);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74ece8:{NFSU2_TR(0x74ece8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ece9:{NFSU2_TR(0x74ece9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ecea:{NFSU2_TR(0x74ecea);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x61757468ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74ecf2:{NFSU2_TR(0x74ecf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ecf8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74ecf8:L74ecf8:{c.instructions+=1;NFSU2_TR(0x74ecf8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B74ecfb:L74ecfb:{c.instructions+=1;NFSU2_TR(0x74ecfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ecff:L74ecff:{c.instructions+=2;NFSU2_TR(0x74ecff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x41444d4eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ed04:{NFSU2_TR(0x74ed04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ed74;}}
}
B74ed06:L74ed06:{c.instructions+=8;NFSU2_TR(0x74ed06);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ed0a:{NFSU2_TR(0x74ed0a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed0f:{NFSU2_TR(0x74ed0f);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed11:{NFSU2_TR(0x74ed11);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74ed15:{NFSU2_TR(0x74ed15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed16:{NFSU2_TR(0x74ed16);
u8 U[4];
w4(U+0,u32(0x7a15f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed1b:{NFSU2_TR(0x74ed1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed1c:{NFSU2_TR(0x74ed1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ed21ull));
TAIL_STATIC(0x7414a0u,741);
}
B74ed21:L74ed21:{c.instructions+=3;NFSU2_TR(0x74ed21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ed24:{NFSU2_TR(0x74ed24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed25:{NFSU2_TR(0x74ed25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ed2aull));
TAIL_STATIC(0x742360u,742);
}
B74ed2a:L74ed2a:{c.instructions+=4;NFSU2_TR(0x74ed2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74ed2e:{NFSU2_TR(0x74ed2e);
u8 U[4];
w4(U+0,u32(0x7d2f9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed33:{NFSU2_TR(0x74ed33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed34:{NFSU2_TR(0x74ed34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ed39ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B74ed39:L74ed39:{c.instructions+=3;NFSU2_TR(0x74ed39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74ed3c:{NFSU2_TR(0x74ed3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ed3e:{NFSU2_TR(0x74ed3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ed4c;}}
}
B74ed40:L74ed40:{c.instructions+=3;NFSU2_TR(0x74ed40);
w4(R+8,u32(0x6ull));
}
B74ed45:{NFSU2_TR(0x74ed45);
__builtin_memmove((R+0),(R+28),4);
}
B74ed47:{NFSU2_TR(0x74ed47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ed4cull));
TAIL_STATIC(0x74c580u,74c);
}
B74ed4c:L74ed4c:{c.instructions+=3;NFSU2_TR(0x74ed4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ed52:{NFSU2_TR(0x74ed52);
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
B74ed54:{NFSU2_TR(0x74ed54);
if(r1(R+518)){{goto L74ed70;}}
}
B74ed56:L74ed56:{c.instructions+=7;NFSU2_TR(0x74ed56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ed5c:{NFSU2_TR(0x74ed5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed5d:{NFSU2_TR(0x74ed5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74ed61:{NFSU2_TR(0x74ed61);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed62:{NFSU2_TR(0x74ed62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed63:{NFSU2_TR(0x74ed63);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x61646d6eull));
s4(u32(r4(U+0)),r4(U+4));
}
B74ed6b:{NFSU2_TR(0x74ed6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ed6dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74ed6d:L74ed6d:{c.instructions+=1;NFSU2_TR(0x74ed6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74ed70:L74ed70:{c.instructions+=1;NFSU2_TR(0x74ed70);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ed74:L74ed74:{c.instructions+=2;NFSU2_TR(0x74ed74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x52474554ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ed79:{NFSU2_TR(0x74ed79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74edcc;}}
}
B74ed7b:L74ed7b:{c.instructions+=5;NFSU2_TR(0x74ed7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ed7f:{NFSU2_TR(0x74ed7f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed80:{NFSU2_TR(0x74ed80);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed85:{NFSU2_TR(0x74ed85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed86:{NFSU2_TR(0x74ed86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ed8bull));
TAIL_STATIC(0x7414a0u,741);
}
B74ed8b:L74ed8b:{c.instructions+=3;NFSU2_TR(0x74ed8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ed8e:{NFSU2_TR(0x74ed8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ed8f:{NFSU2_TR(0x74ed8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ed94ull));
TAIL_STATIC(0x7420b0u,742);
}
B74ed94:L74ed94:{c.instructions+=3;NFSU2_TR(0x74ed94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ed97:{NFSU2_TR(0x74ed97);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ed9a:{NFSU2_TR(0x74ed9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74edc8;}}
}
B74ed9c:L74ed9c:{c.instructions+=5;NFSU2_TR(0x74ed9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74eda0:{NFSU2_TR(0x74eda0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eda1:{NFSU2_TR(0x74eda1);
u8 U[4];
w4(U+0,u32(0x7a38bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eda6:{NFSU2_TR(0x74eda6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eda7:{NFSU2_TR(0x74eda7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74edacull));
TAIL_STATIC(0x7414a0u,741);
}
B74edac:L74edac:{c.instructions+=3;NFSU2_TR(0x74edac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74edaf:{NFSU2_TR(0x74edaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74edb0:{NFSU2_TR(0x74edb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74edb5ull));
TAIL_STATIC(0x7420b0u,742);
}
B74edb5:L74edb5:{c.instructions+=4;NFSU2_TR(0x74edb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74edb8:{NFSU2_TR(0x74edb8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74edba:{NFSU2_TR(0x74edba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74edc0:{NFSU2_TR(0x74edc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74edc8;}}
}
B74edc2:L74edc2:{c.instructions+=1;NFSU2_TR(0x74edc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd04ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74edc8:L74edc8:{c.instructions+=1;NFSU2_TR(0x74edc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74edcc:L74edcc:{c.instructions+=2;NFSU2_TR(0x74edcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x524f5354ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74edd1:{NFSU2_TR(0x74edd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ee29;}}
}
B74edd3:L74edd3:{c.instructions+=2;NFSU2_TR(0x74edd3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74edd9:{NFSU2_TR(0x74edd9);
if(r1(R+518)){TAIL_STATIC(0x74f4f2u,74f);}
}
B74eddf:L74eddf:{c.instructions+=15;NFSU2_TR(0x74eddf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ede3:{NFSU2_TR(0x74ede3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74ede6:{NFSU2_TR(0x74ede6);
__builtin_memmove((R+8),(R+16),4);
}
B74ede8:{NFSU2_TR(0x74ede8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74edea:{NFSU2_TR(0x74edea);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74edee:{NFSU2_TR(0x74edee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74edf1:{NFSU2_TR(0x74edf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74edf5:{NFSU2_TR(0x74edf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74edf8:{NFSU2_TR(0x74edf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74edfc:{NFSU2_TR(0x74edfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74edff:{NFSU2_TR(0x74edff);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ee03:{NFSU2_TR(0x74ee03);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ee06:{NFSU2_TR(0x74ee06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ee07:{NFSU2_TR(0x74ee07);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ee0a:{NFSU2_TR(0x74ee0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ee0full));
TAIL_STATIC(0x74c640u,74c);
}
B74ee0f:L74ee0f:{c.instructions+=3;NFSU2_TR(0x74ee0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B74ee12:{NFSU2_TR(0x74ee12);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ee15:{NFSU2_TR(0x74ee15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ee25;}}
}
B74ee17:L74ee17:{c.instructions+=2;NFSU2_TR(0x74ee17);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ee1d:{NFSU2_TR(0x74ee1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ee25;}}
}
B74ee1f:L74ee1f:{c.instructions+=1;NFSU2_TR(0x74ee1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd04ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ee25:L74ee25:{c.instructions+=1;NFSU2_TR(0x74ee25);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ee29:L74ee29:{c.instructions+=2;NFSU2_TR(0x74ee29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x524e4f54ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ee2e:{NFSU2_TR(0x74ee2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ee87;}}
}
B74ee30:L74ee30:{c.instructions+=2;NFSU2_TR(0x74ee30);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74ee36:{NFSU2_TR(0x74ee36);
if(r1(R+518)){TAIL_STATIC(0x74f4f2u,74f);}
}
B74ee3c:L74ee3c:{c.instructions+=15;NFSU2_TR(0x74ee3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ee40:{NFSU2_TR(0x74ee40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74ee43:{NFSU2_TR(0x74ee43);
__builtin_memmove((R+8),(R+16),4);
}
B74ee45:{NFSU2_TR(0x74ee45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74ee47:{NFSU2_TR(0x74ee47);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ee4b:{NFSU2_TR(0x74ee4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ee4e:{NFSU2_TR(0x74ee4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ee52:{NFSU2_TR(0x74ee52);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ee55:{NFSU2_TR(0x74ee55);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ee59:{NFSU2_TR(0x74ee59);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ee5c:{NFSU2_TR(0x74ee5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ee60:{NFSU2_TR(0x74ee60);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ee63:{NFSU2_TR(0x74ee63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ee64:{NFSU2_TR(0x74ee64);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ee67:{NFSU2_TR(0x74ee67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ee6cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74e2b0u);}goto L74e2b0;}
}
B74ee6c:L74ee6c:{c.instructions+=3;NFSU2_TR(0x74ee6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B74ee6f:{NFSU2_TR(0x74ee6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ee71:{NFSU2_TR(0x74ee71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ee83;}}
}
B74ee73:L74ee73:{c.instructions+=4;NFSU2_TR(0x74ee73);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74ee79:{NFSU2_TR(0x74ee79);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ee7a:{NFSU2_TR(0x74ee7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ee7b:{NFSU2_TR(0x74ee7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ee80ull));
TAIL_STATIC(0x73d990u,73d);
}
B74ee80:L74ee80:{c.instructions+=1;NFSU2_TR(0x74ee80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ee83:L74ee83:{c.instructions+=1;NFSU2_TR(0x74ee83);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ee87:L74ee87:{c.instructions+=2;NFSU2_TR(0x74ee87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50474554ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ee8c:{NFSU2_TR(0x74ee8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74eed1;}}
}
B74ee8e:L74ee8e:{c.instructions+=2;NFSU2_TR(0x74ee8e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74ee94:{NFSU2_TR(0x74ee94);
if(r1(R+518)){TAIL_STATIC(0x74f4f2u,74f);}
}
B74ee9a:L74ee9a:{c.instructions+=15;NFSU2_TR(0x74ee9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74ee9e:{NFSU2_TR(0x74ee9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74eea1:{NFSU2_TR(0x74eea1);
__builtin_memmove((R+4),(R+16),4);
}
B74eea3:{NFSU2_TR(0x74eea3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B74eea5:{NFSU2_TR(0x74eea5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74eea9:{NFSU2_TR(0x74eea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74eeac:{NFSU2_TR(0x74eeac);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74eeb0:{NFSU2_TR(0x74eeb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74eeb3:{NFSU2_TR(0x74eeb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74eeb7:{NFSU2_TR(0x74eeb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74eeba:{NFSU2_TR(0x74eeba);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74eebe:{NFSU2_TR(0x74eebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74eec1:{NFSU2_TR(0x74eec1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eec2:{NFSU2_TR(0x74eec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74eec5:{NFSU2_TR(0x74eec5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74eecaull));
TAIL_STATIC(0x74c8b0u,74c);
}
B74eeca:L74eeca:{c.instructions+=2;NFSU2_TR(0x74eeca);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74eece:{NFSU2_TR(0x74eece);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B74eed1:L74eed1:{c.instructions+=2;NFSU2_TR(0x74eed1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x52414444ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74eed6:{NFSU2_TR(0x74eed6);
if(r1(R+518)){{goto L74eee3;}}
}
B74eed8:L74eed8:{c.instructions+=2;NFSU2_TR(0x74eed8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5241444dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74eedd:{NFSU2_TR(0x74eedd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x74f144u,74f);}
}
B74eee3:L74eee3:{c.instructions+=2;NFSU2_TR(0x74eee3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74eee9:{NFSU2_TR(0x74eee9);
if(r1(R+518)){TAIL_STATIC(0x74f144u,74f);}
}
B74eeef:L74eeef:{c.instructions+=7;NFSU2_TR(0x74eeef);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74eef3:{NFSU2_TR(0x74eef3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74eef5:{NFSU2_TR(0x74eef5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eef6:{NFSU2_TR(0x74eef6);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eefb:{NFSU2_TR(0x74eefb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74eefc:{NFSU2_TR(0x74eefc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x61646475ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74ef04:{NFSU2_TR(0x74ef04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ef09ull));
TAIL_STATIC(0x7414a0u,741);
}
B74ef09:L74ef09:{c.instructions+=3;NFSU2_TR(0x74ef09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ef0c:{NFSU2_TR(0x74ef0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ef0d:{NFSU2_TR(0x74ef0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ef12ull));
TAIL_STATIC(0x7420b0u,742);
}
B74ef12:L74ef12:{c.instructions+=6;NFSU2_TR(0x74ef12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ef18:{NFSU2_TR(0x74ef18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ef19:{NFSU2_TR(0x74ef19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ef1a:{NFSU2_TR(0x74ef1a);
__builtin_memmove((R+20),(R+0),4);
}
B74ef1c:{NFSU2_TR(0x74ef1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ef22:{NFSU2_TR(0x74ef22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ef27ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B74ef27:L74ef27:{c.instructions+=4;NFSU2_TR(0x74ef27);
__builtin_memmove((R+12),(R+0),4);
}
B74ef29:{NFSU2_TR(0x74ef29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74ef2c:{NFSU2_TR(0x74ef2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ef2e:{NFSU2_TR(0x74ef2e);
if(r1(R+518)){TAIL_STATIC(0x74f128u,74f);}
}
B74ef34:L74ef34:{c.instructions+=2;NFSU2_TR(0x74ef34);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B74ef3e:{NFSU2_TR(0x74ef3e);
if(r1(R+518)){{goto L74ef48;}}
}
B74ef40:L74ef40:{c.instructions+=2;NFSU2_TR(0x74ef40);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74ef46:{NFSU2_TR(0x74ef46);
if(r1(R+518)){{goto L74ef64;}}
}
B74ef48:L74ef48:{c.instructions+=5;NFSU2_TR(0x74ef48);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74ef4e:{NFSU2_TR(0x74ef4e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74ef4f:{NFSU2_TR(0x74ef4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ef50:{NFSU2_TR(0x74ef50);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ef51:{NFSU2_TR(0x74ef51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ef56ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B74ef56:L74ef56:{c.instructions+=4;NFSU2_TR(0x74ef56);
__builtin_memmove((R+12),(R+0),4);
}
B74ef58:{NFSU2_TR(0x74ef58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ef5b:{NFSU2_TR(0x74ef5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ef5d:{NFSU2_TR(0x74ef5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ef34u);}goto L74ef34;}}
}
B74ef5f:L74ef5f:{c.instructions+=1;NFSU2_TR(0x74ef5f);
TAIL_STATIC(0x74f128u,74f);
}
B74ef64:L74ef64:{c.instructions+=3;NFSU2_TR(0x74ef64);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ef68:{NFSU2_TR(0x74ef68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ef6a:{NFSU2_TR(0x74ef6a);
if(r1(R+518)){TAIL_STATIC(0x74f06cu,74f);}
}
B74ef70:L74ef70:{c.instructions+=3;NFSU2_TR(0x74ef70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x626c636bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ef75:{NFSU2_TR(0x74ef75);
w4(R+24,u32(0x1ull));
}
B74ef7a:{NFSU2_TR(0x74ef7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ef86;}}
}
B74ef7c:L74ef7c:{c.instructions+=2;NFSU2_TR(0x74ef7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74ef84:{NFSU2_TR(0x74ef84);
{goto L74ef9b;}
}
B74ef86:L74ef86:{c.instructions+=7;NFSU2_TR(0x74ef86);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74ef88:{NFSU2_TR(0x74ef88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x66756c6cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ef8d:{NFSU2_TR(0x74ef8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B74ef90:{NFSU2_TR(0x74ef90);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B74ef91:{NFSU2_TR(0x74ef91);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffdull))));
}
B74ef94:{NFSU2_TR(0x74ef94);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
}
B74ef97:{NFSU2_TR(0x74ef97);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ef9b:L74ef9b:{c.instructions+=2;NFSU2_TR(0x74ef9b);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x52414444ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74efa3:{NFSU2_TR(0x74efa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74efd1;}}
}
B74efa5:L74efa5:{c.instructions+=3;NFSU2_TR(0x74efa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74efab:{NFSU2_TR(0x74efab);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74efad:{NFSU2_TR(0x74efad);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74efc4;}}
}
B74efaf:L74efaf:{c.instructions+=2;NFSU2_TR(0x74efaf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74efb4:{NFSU2_TR(0x74efb4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74efc4;}}
}
B74efb6:L74efb6:{c.instructions+=2;NFSU2_TR(0x74efb6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74efbb:{NFSU2_TR(0x74efbb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74efc4;}}
}
B74efbd:L74efbd:{c.instructions+=2;NFSU2_TR(0x74efbd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74efc2:{NFSU2_TR(0x74efc2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x74f003u,74f);}
}
B74efc4:L74efc4:{c.instructions+=3;NFSU2_TR(0x74efc4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74efc6:{NFSU2_TR(0x74efc6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffdffull))));
}
B74efcb:{NFSU2_TR(0x74efcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74efd1:L74efd1:{c.instructions+=2;NFSU2_TR(0x74efd1);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5241444dull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74efd9:{NFSU2_TR(0x74efd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x74f003u,74f);}
}
B74efdb:L74efdb:{c.instructions+=3;NFSU2_TR(0x74efdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74efe1:{NFSU2_TR(0x74efe1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74efe6:{NFSU2_TR(0x74efe6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74eff6;}}
}
B74efe8:L74efe8:{c.instructions+=2;NFSU2_TR(0x74efe8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74efed:{NFSU2_TR(0x74efed);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74eff6;}}
}
B74efef:L74efef:{c.instructions+=2;NFSU2_TR(0x74efef);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74eff4:{NFSU2_TR(0x74eff4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x74f003u,74f);}
}
B74eff6:L74eff6:{c.instructions+=3;NFSU2_TR(0x74eff6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74eff8:{NFSU2_TR(0x74eff8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff7ffffull))));
}
B74effd:{NFSU2_TR(0x74effd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x74f003u,74f);
}
XIT:NFSU2_TR_EXIT(0x74e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
