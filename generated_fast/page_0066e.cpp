#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_660(u8* __restrict R,Cpu& c);
u32 body_666(u8* __restrict R,Cpu& c);
u32 body_66b(u8* __restrict R,Cpu& c);
u32 body_66f(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x66e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x66e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_66e(u8* __restrict R,Cpu& c);
u32 page_66e(Cpu& c){return body_66e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_66e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x66e002:goto L66e002;
case 0x66e004:c.instructions+=3;goto B66e004;
case 0x66e006:c.instructions+=2;goto B66e006;
case 0x66e009:c.instructions+=1;goto B66e009;
case 0x66e00b:goto L66e00b;
case 0x66e00d:c.instructions+=1;goto B66e00d;
case 0x66e00f:goto L66e00f;
case 0x66e012:c.instructions+=3;goto B66e012;
case 0x66e018:c.instructions+=2;goto B66e018;
case 0x66e01e:c.instructions+=1;goto B66e01e;
case 0x66e023:goto L66e023;
case 0x66e025:goto L66e025;
case 0x66e028:c.instructions+=4;goto B66e028;
case 0x66e02a:c.instructions+=3;goto B66e02a;
case 0x66e02c:c.instructions+=2;goto B66e02c;
case 0x66e02f:c.instructions+=1;goto B66e02f;
case 0x66e031:goto L66e031;
case 0x66e033:c.instructions+=2;goto B66e033;
case 0x66e035:c.instructions+=1;goto B66e035;
case 0x66e037:goto L66e037;
case 0x66e03a:c.instructions+=4;goto B66e03a;
case 0x66e03c:c.instructions+=3;goto B66e03c;
case 0x66e03e:c.instructions+=2;goto B66e03e;
case 0x66e041:c.instructions+=1;goto B66e041;
case 0x66e043:goto L66e043;
case 0x66e045:c.instructions+=1;goto B66e045;
case 0x66e047:goto L66e047;
case 0x66e04a:c.instructions+=3;goto B66e04a;
case 0x66e050:c.instructions+=2;goto B66e050;
case 0x66e056:c.instructions+=1;goto B66e056;
case 0x66e05b:goto L66e05b;
case 0x66e05d:goto L66e05d;
case 0x66e060:c.instructions+=4;goto B66e060;
case 0x66e062:c.instructions+=3;goto B66e062;
case 0x66e064:c.instructions+=2;goto B66e064;
case 0x66e067:c.instructions+=1;goto B66e067;
case 0x66e069:goto L66e069;
case 0x66e06b:c.instructions+=1;goto B66e06b;
case 0x66e06d:goto L66e06d;
case 0x66e070:c.instructions+=4;goto B66e070;
case 0x66e076:c.instructions+=3;goto B66e076;
case 0x66e078:c.instructions+=2;goto B66e078;
case 0x66e07b:c.instructions+=1;goto B66e07b;
case 0x66e07d:goto L66e07d;
case 0x66e07f:c.instructions+=1;goto B66e07f;
case 0x66e081:goto L66e081;
case 0x66e084:c.instructions+=3;goto B66e084;
case 0x66e08a:c.instructions+=2;goto B66e08a;
case 0x66e090:c.instructions+=1;goto B66e090;
case 0x66e095:goto L66e095;
case 0x66e098:c.instructions+=8;goto B66e098;
case 0x66e09b:c.instructions+=7;goto B66e09b;
case 0x66e09e:c.instructions+=6;goto B66e09e;
case 0x66e0a1:c.instructions+=5;goto B66e0a1;
case 0x66e0a3:c.instructions+=4;goto B66e0a3;
case 0x66e0a6:c.instructions+=3;goto B66e0a6;
case 0x66e0a8:c.instructions+=2;goto B66e0a8;
case 0x66e0aa:c.instructions+=1;goto B66e0aa;
case 0x66e0ac:goto L66e0ac;
case 0x66e0ae:c.instructions+=1;goto B66e0ae;
case 0x66e0b0:goto L66e0b0;
case 0x66e0b2:c.instructions+=1;goto B66e0b2;
case 0x66e0b4:goto L66e0b4;
case 0x66e0b5:c.instructions+=1;goto B66e0b5;
case 0x66e0b7:goto L66e0b7;
case 0x66e0b8:c.instructions+=1;goto B66e0b8;
case 0x66e0ba:goto L66e0ba;
case 0x66e0bb:c.instructions+=1;goto B66e0bb;
case 0x66e0bd:goto L66e0bd;
case 0x66e0bf:c.instructions+=2;goto B66e0bf;
case 0x66e0c1:c.instructions+=1;goto B66e0c1;
case 0x66e0c6:goto L66e0c6;
case 0x66e0c8:c.instructions+=1;goto B66e0c8;
case 0x66e0ca:goto L66e0ca;
case 0x66e0cc:c.instructions+=2;goto B66e0cc;
case 0x66e0ce:c.instructions+=1;goto B66e0ce;
case 0x66e0d0:goto L66e0d0;
case 0x66e0d2:c.instructions+=5;goto B66e0d2;
case 0x66e0d4:c.instructions+=4;goto B66e0d4;
case 0x66e0d6:c.instructions+=3;goto B66e0d6;
case 0x66e0d9:c.instructions+=2;goto B66e0d9;
case 0x66e0db:c.instructions+=1;goto B66e0db;
case 0x66e0dd:goto L66e0dd;
case 0x66e0e4:goto L66e0e4;
case 0x66e0e5:c.instructions+=5;goto B66e0e5;
case 0x66e0e8:c.instructions+=4;goto B66e0e8;
case 0x66e0e9:c.instructions+=3;goto B66e0e9;
case 0x66e0ea:c.instructions+=2;goto B66e0ea;
case 0x66e0eb:c.instructions+=1;goto B66e0eb;
case 0x66e0ee:goto L66e0ee;
case 0x66e0f0:c.instructions+=14;goto B66e0f0;
case 0x66e0f1:c.instructions+=13;goto B66e0f1;
case 0x66e0f3:c.instructions+=12;goto B66e0f3;
case 0x66e0f4:c.instructions+=11;goto B66e0f4;
case 0x66e0f7:c.instructions+=10;goto B66e0f7;
case 0x66e0f8:c.instructions+=9;goto B66e0f8;
case 0x66e0f9:c.instructions+=8;goto B66e0f9;
case 0x66e0fb:c.instructions+=7;goto B66e0fb;
case 0x66e0fd:c.instructions+=6;goto B66e0fd;
case 0x66e0fe:c.instructions+=5;goto B66e0fe;
case 0x66e100:c.instructions+=4;goto B66e100;
case 0x66e101:c.instructions+=3;goto B66e101;
case 0x66e104:c.instructions+=2;goto B66e104;
case 0x66e107:c.instructions+=1;goto B66e107;
case 0x66e109:goto L66e109;
case 0x66e10b:c.instructions+=1;goto B66e10b;
case 0x66e10d:goto L66e10d;
case 0x66e113:c.instructions+=15;goto B66e113;
case 0x66e115:c.instructions+=14;goto B66e115;
case 0x66e118:c.instructions+=13;goto B66e118;
case 0x66e11a:c.instructions+=12;goto B66e11a;
case 0x66e11c:c.instructions+=11;goto B66e11c;
case 0x66e11e:c.instructions+=10;goto B66e11e;
case 0x66e121:c.instructions+=9;goto B66e121;
case 0x66e123:c.instructions+=8;goto B66e123;
case 0x66e124:c.instructions+=7;goto B66e124;
case 0x66e127:c.instructions+=6;goto B66e127;
case 0x66e129:c.instructions+=5;goto B66e129;
case 0x66e12a:c.instructions+=4;goto B66e12a;
case 0x66e12b:c.instructions+=3;goto B66e12b;
case 0x66e12d:c.instructions+=2;goto B66e12d;
case 0x66e130:c.instructions+=1;goto B66e130;
case 0x66e135:goto L66e135;
case 0x66e137:c.instructions+=2;goto B66e137;
case 0x66e139:c.instructions+=1;goto B66e139;
case 0x66e13f:goto L66e13f;
case 0x66e142:c.instructions+=2;goto B66e142;
case 0x66e145:c.instructions+=1;goto B66e145;
case 0x66e147:goto L66e147;
case 0x66e14b:c.instructions+=1;goto B66e14b;
case 0x66e151:goto L66e151;
case 0x66e155:c.instructions+=1;goto B66e155;
case 0x66e157:goto L66e157;
case 0x66e15a:c.instructions+=4;goto B66e15a;
case 0x66e15c:c.instructions+=3;goto B66e15c;
case 0x66e15d:c.instructions+=2;goto B66e15d;
case 0x66e15f:c.instructions+=1;goto B66e15f;
case 0x66e164:goto L66e164;
case 0x66e166:goto L66e166;
case 0x66e168:c.instructions+=7;goto B66e168;
case 0x66e16b:c.instructions+=6;goto B66e16b;
case 0x66e16e:c.instructions+=5;goto B66e16e;
case 0x66e170:c.instructions+=4;goto B66e170;
case 0x66e173:c.instructions+=3;goto B66e173;
case 0x66e175:c.instructions+=2;goto B66e175;
case 0x66e178:c.instructions+=1;goto B66e178;
case 0x66e17a:goto L66e17a;
case 0x66e17d:c.instructions+=1;goto B66e17d;
case 0x66e17f:goto L66e17f;
case 0x66e182:c.instructions+=1;goto B66e182;
case 0x66e184:goto L66e184;
case 0x66e187:c.instructions+=1;goto B66e187;
case 0x66e189:goto L66e189;
case 0x66e18b:c.instructions+=2;goto B66e18b;
case 0x66e18c:c.instructions+=1;goto B66e18c;
case 0x66e18e:goto L66e18e;
case 0x66e18f:c.instructions+=1;goto B66e18f;
case 0x66e191:goto L66e191;
case 0x66e192:c.instructions+=1;goto B66e192;
case 0x66e194:goto L66e194;
case 0x66e197:c.instructions+=7;goto B66e197;
case 0x66e199:c.instructions+=6;goto B66e199;
case 0x66e19b:c.instructions+=5;goto B66e19b;
case 0x66e19d:c.instructions+=4;goto B66e19d;
case 0x66e19f:c.instructions+=3;goto B66e19f;
case 0x66e1a1:c.instructions+=2;goto B66e1a1;
case 0x66e1a4:c.instructions+=1;goto B66e1a4;
case 0x66e1a6:goto L66e1a6;
case 0x66e1a8:c.instructions+=1;goto B66e1a8;
case 0x66e1aa:goto L66e1aa;
case 0x66e1ac:c.instructions+=2;goto B66e1ac;
case 0x66e1ae:c.instructions+=1;goto B66e1ae;
case 0x66e1b0:goto L66e1b0;
case 0x66e1b2:c.instructions+=1;goto B66e1b2;
case 0x66e1b4:goto L66e1b4;
case 0x66e1b6:c.instructions+=8;goto B66e1b6;
case 0x66e1b8:c.instructions+=7;goto B66e1b8;
case 0x66e1ba:c.instructions+=6;goto B66e1ba;
case 0x66e1bd:c.instructions+=5;goto B66e1bd;
case 0x66e1bf:c.instructions+=4;goto B66e1bf;
case 0x66e1c1:c.instructions+=3;goto B66e1c1;
case 0x66e1c4:c.instructions+=2;goto B66e1c4;
case 0x66e1c6:c.instructions+=1;goto B66e1c6;
case 0x66e1c8:goto L66e1c8;
case 0x66e1ca:goto L66e1ca;
case 0x66e1cb:c.instructions+=2;goto B66e1cb;
case 0x66e1ce:c.instructions+=1;goto B66e1ce;
case 0x66e1d3:goto L66e1d3;
case 0x66e1d5:goto L66e1d5;
case 0x66e1da:c.instructions+=1;goto B66e1da;
case 0x66e1dc:goto L66e1dc;
case 0x66e1de:goto L66e1de;
case 0x66e1e1:goto L66e1e1;
case 0x66e1e2:c.instructions+=4;goto B66e1e2;
case 0x66e1e3:c.instructions+=3;goto B66e1e3;
case 0x66e1e4:c.instructions+=2;goto B66e1e4;
case 0x66e1e5:c.instructions+=1;goto B66e1e5;
case 0x66e1e8:goto L66e1e8;
case 0x66e1ea:c.instructions+=10;goto B66e1ea;
case 0x66e1eb:c.instructions+=9;goto B66e1eb;
case 0x66e1ed:c.instructions+=8;goto B66e1ed;
case 0x66e1ee:c.instructions+=7;goto B66e1ee;
case 0x66e1ef:c.instructions+=6;goto B66e1ef;
case 0x66e1f2:c.instructions+=5;goto B66e1f2;
case 0x66e1f3:c.instructions+=4;goto B66e1f3;
case 0x66e1f5:c.instructions+=3;goto B66e1f5;
case 0x66e1f7:c.instructions+=2;goto B66e1f7;
case 0x66e1fa:c.instructions+=1;goto B66e1fa;
case 0x66e1fc:goto L66e1fc;
case 0x66e1ff:c.instructions+=4;goto B66e1ff;
case 0x66e200:c.instructions+=3;goto B66e200;
case 0x66e202:c.instructions+=2;goto B66e202;
case 0x66e205:c.instructions+=1;goto B66e205;
case 0x66e20a:goto L66e20a;
case 0x66e20c:c.instructions+=1;goto B66e20c;
case 0x66e20e:goto L66e20e;
case 0x66e211:c.instructions+=2;goto B66e211;
case 0x66e214:c.instructions+=1;goto B66e214;
case 0x66e216:goto L66e216;
case 0x66e21a:c.instructions+=1;goto B66e21a;
case 0x66e21c:goto L66e21c;
case 0x66e21f:c.instructions+=2;goto B66e21f;
case 0x66e221:c.instructions+=1;goto B66e221;
case 0x66e223:goto L66e223;
case 0x66e226:c.instructions+=1;goto B66e226;
case 0x66e228:goto L66e228;
case 0x66e22c:c.instructions+=1;goto B66e22c;
case 0x66e22e:goto L66e22e;
case 0x66e232:c.instructions+=1;goto B66e232;
case 0x66e234:goto L66e234;
case 0x66e236:c.instructions+=2;goto B66e236;
case 0x66e237:c.instructions+=1;goto B66e237;
case 0x66e239:goto L66e239;
case 0x66e23a:c.instructions+=1;goto B66e23a;
case 0x66e23c:goto L66e23c;
case 0x66e23d:c.instructions+=1;goto B66e23d;
case 0x66e23f:goto L66e23f;
case 0x66e241:c.instructions+=6;goto B66e241;
case 0x66e243:c.instructions+=5;goto B66e243;
case 0x66e249:c.instructions+=4;goto B66e249;
case 0x66e24b:c.instructions+=3;goto B66e24b;
case 0x66e24d:c.instructions+=2;goto B66e24d;
case 0x66e250:c.instructions+=1;goto B66e250;
case 0x66e252:goto L66e252;
case 0x66e254:c.instructions+=2;goto B66e254;
case 0x66e255:c.instructions+=1;goto B66e255;
case 0x66e257:goto L66e257;
case 0x66e259:goto L66e259;
case 0x66e25b:c.instructions+=1;goto B66e25b;
case 0x66e25d:goto L66e25d;
case 0x66e25f:c.instructions+=5;goto B66e25f;
case 0x66e261:c.instructions+=4;goto B66e261;
case 0x66e263:c.instructions+=3;goto B66e263;
case 0x66e266:c.instructions+=2;goto B66e266;
case 0x66e268:c.instructions+=1;goto B66e268;
case 0x66e26a:goto L66e26a;
case 0x66e271:goto L66e271;
case 0x66e274:c.instructions+=4;goto B66e274;
case 0x66e275:c.instructions+=3;goto B66e275;
case 0x66e276:c.instructions+=2;goto B66e276;
case 0x66e277:c.instructions+=1;goto B66e277;
case 0x66e27a:goto L66e27a;
case 0x66e27c:c.instructions+=11;goto B66e27c;
case 0x66e27d:c.instructions+=10;goto B66e27d;
case 0x66e27f:c.instructions+=9;goto B66e27f;
case 0x66e282:c.instructions+=8;goto B66e282;
case 0x66e285:c.instructions+=7;goto B66e285;
case 0x66e286:c.instructions+=6;goto B66e286;
case 0x66e287:c.instructions+=5;goto B66e287;
case 0x66e289:c.instructions+=4;goto B66e289;
case 0x66e28a:c.instructions+=3;goto B66e28a;
case 0x66e28c:c.instructions+=2;goto B66e28c;
case 0x66e28d:c.instructions+=1;goto B66e28d;
case 0x66e28f:goto L66e28f;
case 0x66e291:c.instructions+=2;goto B66e291;
case 0x66e294:c.instructions+=1;goto B66e294;
case 0x66e296:goto L66e296;
case 0x66e299:c.instructions+=17;goto B66e299;
case 0x66e29c:c.instructions+=16;goto B66e29c;
case 0x66e2a2:c.instructions+=15;goto B66e2a2;
case 0x66e2a4:c.instructions+=14;goto B66e2a4;
case 0x66e2a8:c.instructions+=13;goto B66e2a8;
case 0x66e2aa:c.instructions+=12;goto B66e2aa;
case 0x66e2ac:c.instructions+=11;goto B66e2ac;
case 0x66e2ae:c.instructions+=10;goto B66e2ae;
case 0x66e2b1:c.instructions+=9;goto B66e2b1;
case 0x66e2b3:c.instructions+=8;goto B66e2b3;
case 0x66e2b4:c.instructions+=7;goto B66e2b4;
case 0x66e2b7:c.instructions+=6;goto B66e2b7;
case 0x66e2b9:c.instructions+=5;goto B66e2b9;
case 0x66e2ba:c.instructions+=4;goto B66e2ba;
case 0x66e2bb:c.instructions+=3;goto B66e2bb;
case 0x66e2bd:c.instructions+=2;goto B66e2bd;
case 0x66e2c0:c.instructions+=1;goto B66e2c0;
case 0x66e2c5:goto L66e2c5;
case 0x66e2c7:c.instructions+=2;goto B66e2c7;
case 0x66e2ca:c.instructions+=1;goto B66e2ca;
case 0x66e2cc:goto L66e2cc;
case 0x66e2cf:c.instructions+=2;goto B66e2cf;
case 0x66e2d3:c.instructions+=1;goto B66e2d3;
case 0x66e2d5:goto L66e2d5;
case 0x66e2d8:c.instructions+=5;goto B66e2d8;
case 0x66e2db:c.instructions+=4;goto B66e2db;
case 0x66e2de:c.instructions+=3;goto B66e2de;
case 0x66e2e0:c.instructions+=2;goto B66e2e0;
case 0x66e2e1:c.instructions+=1;goto B66e2e1;
case 0x66e2e6:goto L66e2e6;
case 0x66e2e8:goto L66e2e8;
case 0x66e2eb:c.instructions+=4;goto B66e2eb;
case 0x66e2ee:c.instructions+=3;goto B66e2ee;
case 0x66e2f1:c.instructions+=2;goto B66e2f1;
case 0x66e2f3:c.instructions+=1;goto B66e2f3;
case 0x66e2f5:goto L66e2f5;
case 0x66e2f7:c.instructions+=1;goto B66e2f7;
case 0x66e2fd:goto L66e2fd;
case 0x66e300:c.instructions+=1;goto B66e300;
case 0x66e302:goto L66e302;
case 0x66e305:c.instructions+=1;goto B66e305;
case 0x66e30b:goto L66e30b;
case 0x66e310:goto L66e310;
case 0x66e311:c.instructions+=4;goto B66e311;
case 0x66e312:c.instructions+=3;goto B66e312;
case 0x66e313:c.instructions+=2;goto B66e313;
case 0x66e314:c.instructions+=1;goto B66e314;
case 0x66e317:goto L66e317;
case 0x66e31a:c.instructions+=6;goto B66e31a;
case 0x66e31c:c.instructions+=5;goto B66e31c;
case 0x66e31f:c.instructions+=4;goto B66e31f;
case 0x66e322:c.instructions+=3;goto B66e322;
case 0x66e325:c.instructions+=2;goto B66e325;
case 0x66e328:c.instructions+=1;goto B66e328;
case 0x66e32a:goto L66e32a;
case 0x66e32e:c.instructions+=1;goto B66e32e;
case 0x66e330:goto L66e330;
case 0x66e333:goto L66e333;
case 0x66e335:c.instructions+=3;goto B66e335;
case 0x66e336:c.instructions+=2;goto B66e336;
case 0x66e338:c.instructions+=1;goto B66e338;
case 0x66e33e:goto L66e33e;
case 0x66e33f:c.instructions+=1;goto B66e33f;
case 0x66e345:goto L66e345;
case 0x66e346:c.instructions+=1;goto B66e346;
case 0x66e348:goto L66e348;
case 0x66e34d:c.instructions+=1;goto B66e34d;
case 0x66e34f:goto L66e34f;
case 0x66e353:c.instructions+=2;goto B66e353;
case 0x66e357:c.instructions+=1;goto B66e357;
case 0x66e35d:goto L66e35d;
case 0x66e360:goto L66e360;
case 0x66e364:c.instructions+=1;goto B66e364;
case 0x66e36a:goto L66e36a;
case 0x66e36e:c.instructions+=2;goto B66e36e;
case 0x66e370:c.instructions+=1;goto B66e370;
case 0x66e372:goto L66e372;
case 0x66e374:c.instructions+=2;goto B66e374;
case 0x66e376:c.instructions+=1;goto B66e376;
case 0x66e378:goto L66e378;
case 0x66e37b:c.instructions+=1;goto B66e37b;
case 0x66e37e:goto L66e37e;
case 0x66e382:c.instructions+=1;goto B66e382;
case 0x66e384:goto L66e384;
case 0x66e386:c.instructions+=11;goto B66e386;
case 0x66e389:c.instructions+=10;goto B66e389;
case 0x66e38c:c.instructions+=9;goto B66e38c;
case 0x66e38f:c.instructions+=8;goto B66e38f;
case 0x66e392:c.instructions+=7;goto B66e392;
case 0x66e394:c.instructions+=6;goto B66e394;
case 0x66e397:c.instructions+=5;goto B66e397;
case 0x66e399:c.instructions+=4;goto B66e399;
case 0x66e39c:c.instructions+=3;goto B66e39c;
case 0x66e39d:c.instructions+=2;goto B66e39d;
case 0x66e39f:c.instructions+=1;goto B66e39f;
case 0x66e3a1:goto L66e3a1;
case 0x66e3a3:goto L66e3a3;
case 0x66e3a6:goto L66e3a6;
case 0x66e3a9:c.instructions+=2;goto B66e3a9;
case 0x66e3ac:c.instructions+=1;goto B66e3ac;
case 0x66e3ae:goto L66e3ae;
case 0x66e3b0:c.instructions+=7;goto B66e3b0;
case 0x66e3b3:c.instructions+=6;goto B66e3b3;
case 0x66e3b6:c.instructions+=5;goto B66e3b6;
case 0x66e3b9:c.instructions+=4;goto B66e3b9;
case 0x66e3bc:c.instructions+=3;goto B66e3bc;
case 0x66e3bf:c.instructions+=2;goto B66e3bf;
case 0x66e3c2:c.instructions+=1;goto B66e3c2;
case 0x66e3c4:goto L66e3c4;
case 0x66e3c9:goto L66e3c9;
case 0x66e3cd:c.instructions+=2;goto B66e3cd;
case 0x66e3d1:c.instructions+=1;goto B66e3d1;
case 0x66e3d7:goto L66e3d7;
case 0x66e3da:goto L66e3da;
case 0x66e3de:c.instructions+=1;goto B66e3de;
case 0x66e3e4:goto L66e3e4;
case 0x66e3e8:c.instructions+=2;goto B66e3e8;
case 0x66e3ea:c.instructions+=1;goto B66e3ea;
case 0x66e3ec:goto L66e3ec;
case 0x66e3f0:c.instructions+=2;goto B66e3f0;
case 0x66e3f2:c.instructions+=1;goto B66e3f2;
case 0x66e3f4:goto L66e3f4;
case 0x66e3f7:c.instructions+=1;goto B66e3f7;
case 0x66e3fa:goto L66e3fa;
case 0x66e3fe:c.instructions+=1;goto B66e3fe;
case 0x66e400:goto L66e400;
case 0x66e403:c.instructions+=12;goto B66e403;
case 0x66e406:c.instructions+=11;goto B66e406;
case 0x66e409:c.instructions+=10;goto B66e409;
case 0x66e40c:c.instructions+=9;goto B66e40c;
case 0x66e40f:c.instructions+=8;goto B66e40f;
case 0x66e411:c.instructions+=7;goto B66e411;
case 0x66e414:c.instructions+=6;goto B66e414;
case 0x66e416:c.instructions+=5;goto B66e416;
case 0x66e419:c.instructions+=4;goto B66e419;
case 0x66e41b:c.instructions+=3;goto B66e41b;
case 0x66e41e:c.instructions+=2;goto B66e41e;
case 0x66e421:c.instructions+=1;goto B66e421;
case 0x66e423:goto L66e423;
case 0x66e426:c.instructions+=2;goto B66e426;
case 0x66e429:c.instructions+=1;goto B66e429;
case 0x66e42b:goto L66e42b;
case 0x66e42d:c.instructions+=7;goto B66e42d;
case 0x66e430:c.instructions+=6;goto B66e430;
case 0x66e433:c.instructions+=5;goto B66e433;
case 0x66e436:c.instructions+=4;goto B66e436;
case 0x66e439:c.instructions+=3;goto B66e439;
case 0x66e43c:c.instructions+=2;goto B66e43c;
case 0x66e43f:c.instructions+=1;goto B66e43f;
case 0x66e441:goto L66e441;
case 0x66e446:goto L66e446;
case 0x66e44a:c.instructions+=2;goto B66e44a;
case 0x66e44e:c.instructions+=1;goto B66e44e;
case 0x66e454:goto L66e454;
case 0x66e457:goto L66e457;
case 0x66e45b:c.instructions+=1;goto B66e45b;
case 0x66e461:goto L66e461;
case 0x66e465:c.instructions+=2;goto B66e465;
case 0x66e467:c.instructions+=1;goto B66e467;
case 0x66e469:goto L66e469;
case 0x66e46d:c.instructions+=2;goto B66e46d;
case 0x66e46f:c.instructions+=1;goto B66e46f;
case 0x66e471:goto L66e471;
case 0x66e474:c.instructions+=1;goto B66e474;
case 0x66e477:goto L66e477;
case 0x66e47b:c.instructions+=1;goto B66e47b;
case 0x66e47d:goto L66e47d;
case 0x66e480:c.instructions+=12;goto B66e480;
case 0x66e483:c.instructions+=11;goto B66e483;
case 0x66e486:c.instructions+=10;goto B66e486;
case 0x66e489:c.instructions+=9;goto B66e489;
case 0x66e48c:c.instructions+=8;goto B66e48c;
case 0x66e48e:c.instructions+=7;goto B66e48e;
case 0x66e491:c.instructions+=6;goto B66e491;
case 0x66e493:c.instructions+=5;goto B66e493;
case 0x66e496:c.instructions+=4;goto B66e496;
case 0x66e498:c.instructions+=3;goto B66e498;
case 0x66e49b:c.instructions+=2;goto B66e49b;
case 0x66e49e:c.instructions+=1;goto B66e49e;
case 0x66e4a0:goto L66e4a0;
case 0x66e4a3:c.instructions+=2;goto B66e4a3;
case 0x66e4a6:c.instructions+=1;goto B66e4a6;
case 0x66e4a8:goto L66e4a8;
case 0x66e4aa:c.instructions+=7;goto B66e4aa;
case 0x66e4ad:c.instructions+=6;goto B66e4ad;
case 0x66e4b0:c.instructions+=5;goto B66e4b0;
case 0x66e4b3:c.instructions+=4;goto B66e4b3;
case 0x66e4b6:c.instructions+=3;goto B66e4b6;
case 0x66e4b9:c.instructions+=2;goto B66e4b9;
case 0x66e4bc:c.instructions+=1;goto B66e4bc;
case 0x66e4be:goto L66e4be;
case 0x66e4c3:goto L66e4c3;
case 0x66e4c6:c.instructions+=3;goto B66e4c6;
case 0x66e4c8:c.instructions+=2;goto B66e4c8;
case 0x66e4cb:c.instructions+=1;goto B66e4cb;
case 0x66e4cd:goto L66e4cd;
case 0x66e4d1:c.instructions+=1;goto B66e4d1;
case 0x66e4d3:goto L66e4d3;
case 0x66e4d5:c.instructions+=1;goto B66e4d5;
case 0x66e4d8:goto L66e4d8;
case 0x66e4db:c.instructions+=4;goto B66e4db;
case 0x66e4dd:c.instructions+=3;goto B66e4dd;
case 0x66e4de:c.instructions+=2;goto B66e4de;
case 0x66e4e0:c.instructions+=1;goto B66e4e0;
case 0x66e4e6:goto L66e4e6;
case 0x66e4e7:c.instructions+=1;goto B66e4e7;
case 0x66e4e9:goto L66e4e9;
case 0x66e4ea:c.instructions+=1;goto B66e4ea;
case 0x66e4f0:goto L66e4f0;
case 0x66e4f2:c.instructions+=2;goto B66e4f2;
case 0x66e4f4:c.instructions+=1;goto B66e4f4;
case 0x66e4fa:goto L66e4fa;
case 0x66e4fd:goto L66e4fd;
case 0x66e4ff:c.instructions+=2;goto B66e4ff;
case 0x66e502:c.instructions+=1;goto B66e502;
case 0x66e508:goto L66e508;
case 0x66e50a:c.instructions+=1;goto B66e50a;
case 0x66e50c:goto L66e50c;
case 0x66e510:c.instructions+=1;goto B66e510;
case 0x66e512:goto L66e512;
case 0x66e514:c.instructions+=7;goto B66e514;
case 0x66e517:c.instructions+=6;goto B66e517;
case 0x66e51a:c.instructions+=5;goto B66e51a;
case 0x66e51c:c.instructions+=4;goto B66e51c;
case 0x66e51f:c.instructions+=3;goto B66e51f;
case 0x66e520:c.instructions+=2;goto B66e520;
case 0x66e522:c.instructions+=1;goto B66e522;
case 0x66e524:goto L66e524;
case 0x66e526:c.instructions+=6;goto B66e526;
case 0x66e527:c.instructions+=5;goto B66e527;
case 0x66e529:c.instructions+=4;goto B66e529;
case 0x66e52a:c.instructions+=3;goto B66e52a;
case 0x66e52d:c.instructions+=2;goto B66e52d;
case 0x66e530:c.instructions+=1;goto B66e530;
case 0x66e532:goto L66e532;
case 0x66e534:goto L66e534;
case 0x66e536:c.instructions+=2;goto B66e536;
case 0x66e538:c.instructions+=1;goto B66e538;
case 0x66e53a:goto L66e53a;
case 0x66e53d:goto L66e53d;
case 0x66e53f:c.instructions+=2;goto B66e53f;
case 0x66e542:c.instructions+=1;goto B66e542;
case 0x66e544:goto L66e544;
case 0x66e546:c.instructions+=1;goto B66e546;
case 0x66e548:goto L66e548;
case 0x66e54c:c.instructions+=1;goto B66e54c;
case 0x66e54e:goto L66e54e;
case 0x66e550:c.instructions+=7;goto B66e550;
case 0x66e553:c.instructions+=6;goto B66e553;
case 0x66e556:c.instructions+=5;goto B66e556;
case 0x66e558:c.instructions+=4;goto B66e558;
case 0x66e55b:c.instructions+=3;goto B66e55b;
case 0x66e55c:c.instructions+=2;goto B66e55c;
case 0x66e55e:c.instructions+=1;goto B66e55e;
case 0x66e560:goto L66e560;
case 0x66e562:c.instructions+=6;goto B66e562;
case 0x66e563:c.instructions+=5;goto B66e563;
case 0x66e565:c.instructions+=4;goto B66e565;
case 0x66e566:c.instructions+=3;goto B66e566;
case 0x66e569:c.instructions+=2;goto B66e569;
case 0x66e56c:c.instructions+=1;goto B66e56c;
case 0x66e56e:goto L66e56e;
case 0x66e570:goto L66e570;
case 0x66e572:c.instructions+=2;goto B66e572;
case 0x66e574:c.instructions+=1;goto B66e574;
case 0x66e576:goto L66e576;
case 0x66e579:goto L66e579;
case 0x66e57b:c.instructions+=2;goto B66e57b;
case 0x66e57e:c.instructions+=1;goto B66e57e;
case 0x66e580:goto L66e580;
case 0x66e582:c.instructions+=1;goto B66e582;
case 0x66e584:goto L66e584;
case 0x66e588:c.instructions+=1;goto B66e588;
case 0x66e58a:goto L66e58a;
case 0x66e58c:c.instructions+=7;goto B66e58c;
case 0x66e58f:c.instructions+=6;goto B66e58f;
case 0x66e592:c.instructions+=5;goto B66e592;
case 0x66e594:c.instructions+=4;goto B66e594;
case 0x66e597:c.instructions+=3;goto B66e597;
case 0x66e598:c.instructions+=2;goto B66e598;
case 0x66e59a:c.instructions+=1;goto B66e59a;
case 0x66e59c:goto L66e59c;
case 0x66e59e:c.instructions+=6;goto B66e59e;
case 0x66e59f:c.instructions+=5;goto B66e59f;
case 0x66e5a1:c.instructions+=4;goto B66e5a1;
case 0x66e5a2:c.instructions+=3;goto B66e5a2;
case 0x66e5a5:c.instructions+=2;goto B66e5a5;
case 0x66e5a8:c.instructions+=1;goto B66e5a8;
case 0x66e5aa:goto L66e5aa;
case 0x66e5ad:c.instructions+=2;goto B66e5ad;
case 0x66e5b0:c.instructions+=1;goto B66e5b0;
case 0x66e5b5:goto L66e5b5;
case 0x66e5ba:goto L66e5ba;
case 0x66e5bc:c.instructions+=6;goto B66e5bc;
case 0x66e5bd:c.instructions+=5;goto B66e5bd;
case 0x66e5bf:c.instructions+=4;goto B66e5bf;
case 0x66e5c2:c.instructions+=3;goto B66e5c2;
case 0x66e5c6:c.instructions+=2;goto B66e5c6;
case 0x66e5ca:c.instructions+=1;goto B66e5ca;
case 0x66e5cc:goto L66e5cc;
case 0x66e5cd:c.instructions+=3;goto B66e5cd;
case 0x66e5d0:c.instructions+=2;goto B66e5d0;
case 0x66e5d2:c.instructions+=1;goto B66e5d2;
case 0x66e5d4:goto L66e5d4;
case 0x66e5db:c.instructions+=1;goto B66e5db;
case 0x66e5dd:goto L66e5dd;
case 0x66e5e0:c.instructions+=7;goto B66e5e0;
case 0x66e5e1:c.instructions+=6;goto B66e5e1;
case 0x66e5e3:c.instructions+=5;goto B66e5e3;
case 0x66e5e5:c.instructions+=4;goto B66e5e5;
case 0x66e5e6:c.instructions+=3;goto B66e5e6;
case 0x66e5e7:c.instructions+=2;goto B66e5e7;
case 0x66e5ea:c.instructions+=1;goto B66e5ea;
case 0x66e5ef:goto L66e5ef;
case 0x66e5f1:c.instructions+=1;goto B66e5f1;
case 0x66e5f3:goto L66e5f3;
case 0x66e5fa:c.instructions+=1;goto B66e5fa;
case 0x66e5fc:goto L66e5fc;
case 0x66e5ff:c.instructions+=4;goto B66e5ff;
case 0x66e602:c.instructions+=3;goto B66e602;
case 0x66e604:c.instructions+=2;goto B66e604;
case 0x66e605:c.instructions+=1;goto B66e605;
case 0x66e607:goto L66e607;
case 0x66e609:c.instructions+=1;goto B66e609;
case 0x66e60f:goto L66e60f;
case 0x66e612:c.instructions+=1;goto B66e612;
case 0x66e614:goto L66e614;
case 0x66e617:c.instructions+=1;goto B66e617;
case 0x66e61d:goto L66e61d;
case 0x66e624:goto L66e624;
case 0x66e625:goto L66e625;
case 0x66e626:goto L66e626;
case 0x66e627:goto L66e627;
case 0x66e62a:c.instructions+=2;goto B66e62a;
case 0x66e62b:c.instructions+=1;goto B66e62b;
case 0x66e62e:goto L66e62e;
case 0x66e631:c.instructions+=2;goto B66e631;
case 0x66e633:c.instructions+=1;goto B66e633;
case 0x66e635:goto L66e635;
case 0x66e639:c.instructions+=1;goto B66e639;
case 0x66e63b:goto L66e63b;
case 0x66e63d:goto L66e63d;
case 0x66e640:c.instructions+=7;goto B66e640;
case 0x66e643:c.instructions+=6;goto B66e643;
case 0x66e645:c.instructions+=5;goto B66e645;
case 0x66e646:c.instructions+=4;goto B66e646;
case 0x66e648:c.instructions+=3;goto B66e648;
case 0x66e64b:c.instructions+=2;goto B66e64b;
case 0x66e64e:c.instructions+=1;goto B66e64e;
case 0x66e654:goto L66e654;
case 0x66e655:c.instructions+=1;goto B66e655;
case 0x66e65b:goto L66e65b;
case 0x66e65c:c.instructions+=1;goto B66e65c;
case 0x66e65e:goto L66e65e;
case 0x66e665:c.instructions+=1;goto B66e665;
case 0x66e667:goto L66e667;
case 0x66e669:c.instructions+=1;goto B66e669;
case 0x66e66b:goto L66e66b;
case 0x66e66d:c.instructions+=3;goto B66e66d;
case 0x66e670:c.instructions+=2;goto B66e670;
case 0x66e673:c.instructions+=1;goto B66e673;
case 0x66e676:goto L66e676;
case 0x66e678:c.instructions+=1;goto B66e678;
case 0x66e67a:goto L66e67a;
case 0x66e67d:c.instructions+=4;goto B66e67d;
case 0x66e680:c.instructions+=3;goto B66e680;
case 0x66e683:c.instructions+=2;goto B66e683;
case 0x66e686:c.instructions+=1;goto B66e686;
case 0x66e689:goto L66e689;
case 0x66e68b:c.instructions+=1;goto B66e68b;
case 0x66e68d:goto L66e68d;
case 0x66e690:c.instructions+=5;goto B66e690;
case 0x66e693:c.instructions+=4;goto B66e693;
case 0x66e695:c.instructions+=3;goto B66e695;
case 0x66e698:c.instructions+=2;goto B66e698;
case 0x66e69b:c.instructions+=1;goto B66e69b;
case 0x66e69e:goto L66e69e;
case 0x66e6a1:c.instructions+=6;goto B66e6a1;
case 0x66e6a3:c.instructions+=5;goto B66e6a3;
case 0x66e6a9:c.instructions+=4;goto B66e6a9;
case 0x66e6ab:c.instructions+=3;goto B66e6ab;
case 0x66e6ad:c.instructions+=2;goto B66e6ad;
case 0x66e6b0:c.instructions+=1;goto B66e6b0;
case 0x66e6b2:goto L66e6b2;
case 0x66e6b4:c.instructions+=2;goto B66e6b4;
case 0x66e6b5:c.instructions+=1;goto B66e6b5;
case 0x66e6b7:goto L66e6b7;
case 0x66e6b9:goto L66e6b9;
case 0x66e6bd:c.instructions+=4;goto B66e6bd;
case 0x66e6bf:c.instructions+=3;goto B66e6bf;
case 0x66e6c1:c.instructions+=2;goto B66e6c1;
case 0x66e6c4:c.instructions+=1;goto B66e6c4;
case 0x66e6c6:goto L66e6c6;
case 0x66e6ca:c.instructions+=3;goto B66e6ca;
case 0x66e6ce:c.instructions+=2;goto B66e6ce;
case 0x66e6d1:c.instructions+=1;goto B66e6d1;
case 0x66e6d3:goto L66e6d3;
case 0x66e6d7:c.instructions+=3;goto B66e6d7;
case 0x66e6da:c.instructions+=2;goto B66e6da;
case 0x66e6dd:c.instructions+=1;goto B66e6dd;
case 0x66e6df:goto L66e6df;
case 0x66e6e4:goto L66e6e4;
case 0x66e6e6:c.instructions+=1;goto B66e6e6;
case 0x66e6ec:goto L66e6ec;
case 0x66e6ee:c.instructions+=3;goto B66e6ee;
case 0x66e6f1:c.instructions+=2;goto B66e6f1;
case 0x66e6f4:c.instructions+=1;goto B66e6f4;
case 0x66e6f7:goto L66e6f7;
case 0x66e6f9:c.instructions+=1;goto B66e6f9;
case 0x66e6fb:goto L66e6fb;
case 0x66e6fe:c.instructions+=4;goto B66e6fe;
case 0x66e701:c.instructions+=3;goto B66e701;
case 0x66e704:c.instructions+=2;goto B66e704;
case 0x66e707:c.instructions+=1;goto B66e707;
case 0x66e70a:goto L66e70a;
case 0x66e70c:c.instructions+=1;goto B66e70c;
case 0x66e70e:goto L66e70e;
case 0x66e711:c.instructions+=4;goto B66e711;
case 0x66e714:c.instructions+=3;goto B66e714;
case 0x66e716:c.instructions+=2;goto B66e716;
case 0x66e719:c.instructions+=1;goto B66e719;
case 0x66e71c:goto L66e71c;
case 0x66e71e:c.instructions+=7;goto B66e71e;
case 0x66e720:c.instructions+=6;goto B66e720;
case 0x66e723:c.instructions+=5;goto B66e723;
case 0x66e726:c.instructions+=4;goto B66e726;
case 0x66e728:c.instructions+=3;goto B66e728;
case 0x66e72a:c.instructions+=2;goto B66e72a;
case 0x66e72d:c.instructions+=1;goto B66e72d;
case 0x66e72f:goto L66e72f;
case 0x66e732:goto L66e732;
case 0x66e736:c.instructions+=3;goto B66e736;
case 0x66e73a:c.instructions+=2;goto B66e73a;
case 0x66e73d:c.instructions+=1;goto B66e73d;
case 0x66e73f:goto L66e73f;
case 0x66e743:c.instructions+=3;goto B66e743;
case 0x66e746:c.instructions+=2;goto B66e746;
case 0x66e749:c.instructions+=1;goto B66e749;
case 0x66e74b:goto L66e74b;
case 0x66e750:goto L66e750;
case 0x66e752:c.instructions+=1;goto B66e752;
case 0x66e758:goto L66e758;
case 0x66e75a:c.instructions+=3;goto B66e75a;
case 0x66e75d:c.instructions+=2;goto B66e75d;
case 0x66e760:c.instructions+=1;goto B66e760;
case 0x66e763:goto L66e763;
case 0x66e765:c.instructions+=1;goto B66e765;
case 0x66e767:goto L66e767;
case 0x66e76a:c.instructions+=4;goto B66e76a;
case 0x66e76d:c.instructions+=3;goto B66e76d;
case 0x66e770:c.instructions+=2;goto B66e770;
case 0x66e773:c.instructions+=1;goto B66e773;
case 0x66e776:goto L66e776;
case 0x66e778:c.instructions+=1;goto B66e778;
case 0x66e77a:goto L66e77a;
case 0x66e77d:c.instructions+=4;goto B66e77d;
case 0x66e780:c.instructions+=3;goto B66e780;
case 0x66e782:c.instructions+=2;goto B66e782;
case 0x66e785:c.instructions+=1;goto B66e785;
case 0x66e788:goto L66e788;
case 0x66e78a:c.instructions+=7;goto B66e78a;
case 0x66e78c:c.instructions+=6;goto B66e78c;
case 0x66e78f:c.instructions+=5;goto B66e78f;
case 0x66e792:c.instructions+=4;goto B66e792;
case 0x66e794:c.instructions+=3;goto B66e794;
case 0x66e796:c.instructions+=2;goto B66e796;
case 0x66e799:c.instructions+=1;goto B66e799;
case 0x66e79b:goto L66e79b;
case 0x66e79e:goto L66e79e;
case 0x66e7a2:c.instructions+=3;goto B66e7a2;
case 0x66e7a6:c.instructions+=2;goto B66e7a6;
case 0x66e7a9:c.instructions+=1;goto B66e7a9;
case 0x66e7ab:goto L66e7ab;
case 0x66e7af:c.instructions+=3;goto B66e7af;
case 0x66e7b2:c.instructions+=2;goto B66e7b2;
case 0x66e7b5:c.instructions+=1;goto B66e7b5;
case 0x66e7b7:goto L66e7b7;
case 0x66e7bc:goto L66e7bc;
case 0x66e7bf:c.instructions+=2;goto B66e7bf;
case 0x66e7c1:c.instructions+=1;goto B66e7c1;
case 0x66e7c3:goto L66e7c3;
case 0x66e7c7:c.instructions+=1;goto B66e7c7;
case 0x66e7c9:goto L66e7c9;
case 0x66e7cb:goto L66e7cb;
case 0x66e7ce:c.instructions+=4;goto B66e7ce;
case 0x66e7d0:c.instructions+=3;goto B66e7d0;
case 0x66e7d1:c.instructions+=2;goto B66e7d1;
case 0x66e7d3:c.instructions+=1;goto B66e7d3;
case 0x66e7d9:goto L66e7d9;
case 0x66e7da:c.instructions+=1;goto B66e7da;
case 0x66e7dc:goto L66e7dc;
case 0x66e7dd:c.instructions+=1;goto B66e7dd;
case 0x66e7e3:goto L66e7e3;
case 0x66e7e5:c.instructions+=1;goto B66e7e5;
case 0x66e7eb:goto L66e7eb;
case 0x66e7ed:c.instructions+=4;goto B66e7ed;
case 0x66e7ee:c.instructions+=3;goto B66e7ee;
case 0x66e7f0:c.instructions+=2;goto B66e7f0;
case 0x66e7f3:c.instructions+=1;goto B66e7f3;
case 0x66e7f6:goto L66e7f6;
case 0x66e7f8:c.instructions+=1;goto B66e7f8;
case 0x66e7fa:goto L66e7fa;
case 0x66e7fc:goto L66e7fc;
case 0x66e7fe:c.instructions+=5;goto B66e7fe;
case 0x66e804:c.instructions+=4;goto B66e804;
case 0x66e806:c.instructions+=3;goto B66e806;
case 0x66e808:c.instructions+=2;goto B66e808;
case 0x66e80b:c.instructions+=1;goto B66e80b;
case 0x66e80d:goto L66e80d;
case 0x66e80f:c.instructions+=2;goto B66e80f;
case 0x66e810:c.instructions+=1;goto B66e810;
case 0x66e812:goto L66e812;
case 0x66e814:goto L66e814;
case 0x66e816:c.instructions+=4;goto B66e816;
case 0x66e819:c.instructions+=3;goto B66e819;
case 0x66e81c:c.instructions+=2;goto B66e81c;
case 0x66e81d:c.instructions+=1;goto B66e81d;
case 0x66e81f:goto L66e81f;
case 0x66e821:c.instructions+=2;goto B66e821;
case 0x66e824:c.instructions+=1;goto B66e824;
case 0x66e826:goto L66e826;
case 0x66e82b:goto L66e82b;
case 0x66e82d:c.instructions+=1;goto B66e82d;
case 0x66e833:goto L66e833;
case 0x66e835:c.instructions+=4;goto B66e835;
case 0x66e836:c.instructions+=3;goto B66e836;
case 0x66e838:c.instructions+=2;goto B66e838;
case 0x66e83b:c.instructions+=1;goto B66e83b;
case 0x66e83e:goto L66e83e;
case 0x66e840:c.instructions+=1;goto B66e840;
case 0x66e842:goto L66e842;
case 0x66e844:goto L66e844;
case 0x66e846:c.instructions+=7;goto B66e846;
case 0x66e848:c.instructions+=6;goto B66e848;
case 0x66e84b:c.instructions+=5;goto B66e84b;
case 0x66e84e:c.instructions+=4;goto B66e84e;
case 0x66e850:c.instructions+=3;goto B66e850;
case 0x66e853:c.instructions+=2;goto B66e853;
case 0x66e854:c.instructions+=1;goto B66e854;
case 0x66e856:goto L66e856;
case 0x66e858:c.instructions+=2;goto B66e858;
case 0x66e85b:c.instructions+=1;goto B66e85b;
case 0x66e85d:goto L66e85d;
case 0x66e862:goto L66e862;
case 0x66e864:c.instructions+=1;goto B66e864;
case 0x66e86a:goto L66e86a;
case 0x66e86c:c.instructions+=4;goto B66e86c;
case 0x66e86d:c.instructions+=3;goto B66e86d;
case 0x66e86f:c.instructions+=2;goto B66e86f;
case 0x66e872:c.instructions+=1;goto B66e872;
case 0x66e875:goto L66e875;
case 0x66e877:c.instructions+=1;goto B66e877;
case 0x66e879:goto L66e879;
case 0x66e87b:goto L66e87b;
case 0x66e87d:c.instructions+=7;goto B66e87d;
case 0x66e87f:c.instructions+=6;goto B66e87f;
case 0x66e882:c.instructions+=5;goto B66e882;
case 0x66e885:c.instructions+=4;goto B66e885;
case 0x66e887:c.instructions+=3;goto B66e887;
case 0x66e88a:c.instructions+=2;goto B66e88a;
case 0x66e88b:c.instructions+=1;goto B66e88b;
case 0x66e88d:goto L66e88d;
case 0x66e88f:c.instructions+=2;goto B66e88f;
case 0x66e892:c.instructions+=1;goto B66e892;
case 0x66e894:goto L66e894;
case 0x66e899:goto L66e899;
case 0x66e89b:c.instructions+=13;goto B66e89b;
case 0x66e89c:c.instructions+=12;goto B66e89c;
case 0x66e89e:c.instructions+=11;goto B66e89e;
case 0x66e8a1:c.instructions+=10;goto B66e8a1;
case 0x66e8a4:c.instructions+=9;goto B66e8a4;
case 0x66e8a5:c.instructions+=8;goto B66e8a5;
case 0x66e8a6:c.instructions+=7;goto B66e8a6;
case 0x66e8a7:c.instructions+=6;goto B66e8a7;
case 0x66e8a9:c.instructions+=5;goto B66e8a9;
case 0x66e8ab:c.instructions+=4;goto B66e8ab;
case 0x66e8ac:c.instructions+=3;goto B66e8ac;
case 0x66e8ae:c.instructions+=2;goto B66e8ae;
case 0x66e8af:c.instructions+=1;goto B66e8af;
case 0x66e8b1:goto L66e8b1;
case 0x66e8b3:c.instructions+=2;goto B66e8b3;
case 0x66e8b6:c.instructions+=1;goto B66e8b6;
case 0x66e8b8:goto L66e8b8;
case 0x66e8bb:c.instructions+=17;goto B66e8bb;
case 0x66e8be:c.instructions+=16;goto B66e8be;
case 0x66e8c3:c.instructions+=15;goto B66e8c3;
case 0x66e8c5:c.instructions+=14;goto B66e8c5;
case 0x66e8c9:c.instructions+=13;goto B66e8c9;
case 0x66e8cb:c.instructions+=12;goto B66e8cb;
case 0x66e8cd:c.instructions+=11;goto B66e8cd;
case 0x66e8cf:c.instructions+=10;goto B66e8cf;
case 0x66e8d2:c.instructions+=9;goto B66e8d2;
case 0x66e8d4:c.instructions+=8;goto B66e8d4;
case 0x66e8d5:c.instructions+=7;goto B66e8d5;
case 0x66e8d8:c.instructions+=6;goto B66e8d8;
case 0x66e8da:c.instructions+=5;goto B66e8da;
case 0x66e8db:c.instructions+=4;goto B66e8db;
case 0x66e8dc:c.instructions+=3;goto B66e8dc;
case 0x66e8df:c.instructions+=2;goto B66e8df;
case 0x66e8e2:c.instructions+=1;goto B66e8e2;
case 0x66e8e7:goto L66e8e7;
case 0x66e8e9:c.instructions+=2;goto B66e8e9;
case 0x66e8ec:c.instructions+=1;goto B66e8ec;
case 0x66e8ee:goto L66e8ee;
case 0x66e8f1:c.instructions+=2;goto B66e8f1;
case 0x66e8f5:c.instructions+=1;goto B66e8f5;
case 0x66e8f7:goto L66e8f7;
case 0x66e8fa:c.instructions+=5;goto B66e8fa;
case 0x66e8fd:c.instructions+=4;goto B66e8fd;
case 0x66e900:c.instructions+=3;goto B66e900;
case 0x66e902:c.instructions+=2;goto B66e902;
case 0x66e903:c.instructions+=1;goto B66e903;
case 0x66e908:goto L66e908;
case 0x66e90a:goto L66e90a;
case 0x66e90d:c.instructions+=4;goto B66e90d;
case 0x66e910:c.instructions+=3;goto B66e910;
case 0x66e913:c.instructions+=2;goto B66e913;
case 0x66e915:c.instructions+=1;goto B66e915;
case 0x66e917:goto L66e917;
case 0x66e919:c.instructions+=1;goto B66e919;
case 0x66e91f:goto L66e91f;
case 0x66e921:c.instructions+=1;goto B66e921;
case 0x66e923:goto L66e923;
case 0x66e926:c.instructions+=1;goto B66e926;
case 0x66e92c:goto L66e92c;
case 0x66e931:goto L66e931;
case 0x66e932:c.instructions+=4;goto B66e932;
case 0x66e933:c.instructions+=3;goto B66e933;
case 0x66e934:c.instructions+=2;goto B66e934;
case 0x66e935:c.instructions+=1;goto B66e935;
case 0x66e938:goto L66e938;
case 0x66e93b:c.instructions+=6;goto B66e93b;
case 0x66e93d:c.instructions+=5;goto B66e93d;
case 0x66e940:c.instructions+=4;goto B66e940;
case 0x66e943:c.instructions+=3;goto B66e943;
case 0x66e946:c.instructions+=2;goto B66e946;
case 0x66e949:c.instructions+=1;goto B66e949;
case 0x66e94b:goto L66e94b;
case 0x66e94f:c.instructions+=1;goto B66e94f;
case 0x66e951:goto L66e951;
case 0x66e954:goto L66e954;
case 0x66e956:c.instructions+=4;goto B66e956;
case 0x66e957:c.instructions+=3;goto B66e957;
case 0x66e959:c.instructions+=2;goto B66e959;
case 0x66e95c:c.instructions+=1;goto B66e95c;
case 0x66e962:goto L66e962;
case 0x66e963:c.instructions+=1;goto B66e963;
case 0x66e969:goto L66e969;
case 0x66e96a:c.instructions+=1;goto B66e96a;
case 0x66e96c:goto L66e96c;
case 0x66e971:c.instructions+=1;goto B66e971;
case 0x66e973:goto L66e973;
case 0x66e977:c.instructions+=2;goto B66e977;
case 0x66e97b:c.instructions+=1;goto B66e97b;
case 0x66e981:goto L66e981;
case 0x66e984:goto L66e984;
case 0x66e988:c.instructions+=1;goto B66e988;
case 0x66e98e:goto L66e98e;
case 0x66e992:c.instructions+=2;goto B66e992;
case 0x66e994:c.instructions+=1;goto B66e994;
case 0x66e996:goto L66e996;
case 0x66e998:c.instructions+=2;goto B66e998;
case 0x66e99a:c.instructions+=1;goto B66e99a;
case 0x66e99c:goto L66e99c;
case 0x66e99f:c.instructions+=1;goto B66e99f;
case 0x66e9a2:goto L66e9a2;
case 0x66e9a6:c.instructions+=1;goto B66e9a6;
case 0x66e9a8:goto L66e9a8;
case 0x66e9aa:c.instructions+=11;goto B66e9aa;
case 0x66e9ad:c.instructions+=10;goto B66e9ad;
case 0x66e9b0:c.instructions+=9;goto B66e9b0;
case 0x66e9b3:c.instructions+=8;goto B66e9b3;
case 0x66e9b6:c.instructions+=7;goto B66e9b6;
case 0x66e9b8:c.instructions+=6;goto B66e9b8;
case 0x66e9bb:c.instructions+=5;goto B66e9bb;
case 0x66e9bd:c.instructions+=4;goto B66e9bd;
case 0x66e9c0:c.instructions+=3;goto B66e9c0;
case 0x66e9c1:c.instructions+=2;goto B66e9c1;
case 0x66e9c3:c.instructions+=1;goto B66e9c3;
case 0x66e9c5:goto L66e9c5;
case 0x66e9c7:goto L66e9c7;
case 0x66e9ca:goto L66e9ca;
case 0x66e9cd:c.instructions+=2;goto B66e9cd;
case 0x66e9d0:c.instructions+=1;goto B66e9d0;
case 0x66e9d2:goto L66e9d2;
case 0x66e9d4:c.instructions+=7;goto B66e9d4;
case 0x66e9d7:c.instructions+=6;goto B66e9d7;
case 0x66e9da:c.instructions+=5;goto B66e9da;
case 0x66e9dd:c.instructions+=4;goto B66e9dd;
case 0x66e9e0:c.instructions+=3;goto B66e9e0;
case 0x66e9e3:c.instructions+=2;goto B66e9e3;
case 0x66e9e6:c.instructions+=1;goto B66e9e6;
case 0x66e9e8:goto L66e9e8;
case 0x66e9ed:goto L66e9ed;
case 0x66e9f1:c.instructions+=2;goto B66e9f1;
case 0x66e9f5:c.instructions+=1;goto B66e9f5;
case 0x66e9fb:goto L66e9fb;
case 0x66e9fe:goto L66e9fe;
case 0x66ea02:c.instructions+=1;goto B66ea02;
case 0x66ea08:goto L66ea08;
case 0x66ea0c:c.instructions+=2;goto B66ea0c;
case 0x66ea0e:c.instructions+=1;goto B66ea0e;
case 0x66ea10:goto L66ea10;
case 0x66ea14:c.instructions+=2;goto B66ea14;
case 0x66ea16:c.instructions+=1;goto B66ea16;
case 0x66ea18:goto L66ea18;
case 0x66ea1b:c.instructions+=1;goto B66ea1b;
case 0x66ea1e:goto L66ea1e;
case 0x66ea22:c.instructions+=1;goto B66ea22;
case 0x66ea24:goto L66ea24;
case 0x66ea27:c.instructions+=12;goto B66ea27;
case 0x66ea2a:c.instructions+=11;goto B66ea2a;
case 0x66ea2d:c.instructions+=10;goto B66ea2d;
case 0x66ea30:c.instructions+=9;goto B66ea30;
case 0x66ea33:c.instructions+=8;goto B66ea33;
case 0x66ea35:c.instructions+=7;goto B66ea35;
case 0x66ea38:c.instructions+=6;goto B66ea38;
case 0x66ea3a:c.instructions+=5;goto B66ea3a;
case 0x66ea3d:c.instructions+=4;goto B66ea3d;
case 0x66ea3f:c.instructions+=3;goto B66ea3f;
case 0x66ea42:c.instructions+=2;goto B66ea42;
case 0x66ea45:c.instructions+=1;goto B66ea45;
case 0x66ea47:goto L66ea47;
case 0x66ea4a:c.instructions+=2;goto B66ea4a;
case 0x66ea4d:c.instructions+=1;goto B66ea4d;
case 0x66ea4f:goto L66ea4f;
case 0x66ea51:c.instructions+=7;goto B66ea51;
case 0x66ea54:c.instructions+=6;goto B66ea54;
case 0x66ea57:c.instructions+=5;goto B66ea57;
case 0x66ea5a:c.instructions+=4;goto B66ea5a;
case 0x66ea5d:c.instructions+=3;goto B66ea5d;
case 0x66ea60:c.instructions+=2;goto B66ea60;
case 0x66ea63:c.instructions+=1;goto B66ea63;
case 0x66ea65:goto L66ea65;
case 0x66ea6a:goto L66ea6a;
case 0x66ea6e:c.instructions+=2;goto B66ea6e;
case 0x66ea72:c.instructions+=1;goto B66ea72;
case 0x66ea78:goto L66ea78;
case 0x66ea7b:goto L66ea7b;
case 0x66ea7f:c.instructions+=1;goto B66ea7f;
case 0x66ea85:goto L66ea85;
case 0x66ea89:c.instructions+=2;goto B66ea89;
case 0x66ea8b:c.instructions+=1;goto B66ea8b;
case 0x66ea8d:goto L66ea8d;
case 0x66ea91:c.instructions+=2;goto B66ea91;
case 0x66ea93:c.instructions+=1;goto B66ea93;
case 0x66ea95:goto L66ea95;
case 0x66ea98:c.instructions+=1;goto B66ea98;
case 0x66ea9b:goto L66ea9b;
case 0x66ea9f:c.instructions+=1;goto B66ea9f;
case 0x66eaa1:goto L66eaa1;
case 0x66eaa4:c.instructions+=15;goto B66eaa4;
case 0x66eaa7:c.instructions+=14;goto B66eaa7;
case 0x66eaa9:c.instructions+=13;goto B66eaa9;
case 0x66eaab:c.instructions+=12;goto B66eaab;
case 0x66eaae:c.instructions+=11;goto B66eaae;
case 0x66eab1:c.instructions+=10;goto B66eab1;
case 0x66eab4:c.instructions+=9;goto B66eab4;
case 0x66eab7:c.instructions+=8;goto B66eab7;
case 0x66eaba:c.instructions+=7;goto B66eaba;
case 0x66eabd:c.instructions+=6;goto B66eabd;
case 0x66eabf:c.instructions+=5;goto B66eabf;
case 0x66eac2:c.instructions+=4;goto B66eac2;
case 0x66eac4:c.instructions+=3;goto B66eac4;
case 0x66eac7:c.instructions+=2;goto B66eac7;
case 0x66eaca:c.instructions+=1;goto B66eaca;
case 0x66eacc:goto L66eacc;
case 0x66eacf:c.instructions+=2;goto B66eacf;
case 0x66ead2:c.instructions+=1;goto B66ead2;
case 0x66ead4:goto L66ead4;
case 0x66ead6:c.instructions+=8;goto B66ead6;
case 0x66ead9:c.instructions+=7;goto B66ead9;
case 0x66eadc:c.instructions+=6;goto B66eadc;
case 0x66eadf:c.instructions+=5;goto B66eadf;
case 0x66eae2:c.instructions+=4;goto B66eae2;
case 0x66eae5:c.instructions+=3;goto B66eae5;
case 0x66eae8:c.instructions+=2;goto B66eae8;
case 0x66eaeb:c.instructions+=1;goto B66eaeb;
case 0x66eaed:goto L66eaed;
case 0x66eaf2:goto L66eaf2;
case 0x66eaf5:c.instructions+=3;goto B66eaf5;
case 0x66eaf7:c.instructions+=2;goto B66eaf7;
case 0x66eafa:c.instructions+=1;goto B66eafa;
case 0x66eafc:goto L66eafc;
case 0x66eb00:c.instructions+=1;goto B66eb00;
case 0x66eb02:goto L66eb02;
case 0x66eb04:c.instructions+=1;goto B66eb04;
case 0x66eb07:goto L66eb07;
case 0x66eb0a:c.instructions+=4;goto B66eb0a;
case 0x66eb0c:c.instructions+=3;goto B66eb0c;
case 0x66eb0d:c.instructions+=2;goto B66eb0d;
case 0x66eb0f:c.instructions+=1;goto B66eb0f;
case 0x66eb15:goto L66eb15;
case 0x66eb16:c.instructions+=1;goto B66eb16;
case 0x66eb18:goto L66eb18;
case 0x66eb19:c.instructions+=1;goto B66eb19;
case 0x66eb1f:goto L66eb1f;
case 0x66eb21:c.instructions+=2;goto B66eb21;
case 0x66eb23:c.instructions+=1;goto B66eb23;
case 0x66eb29:goto L66eb29;
case 0x66eb2c:goto L66eb2c;
case 0x66eb2e:c.instructions+=2;goto B66eb2e;
case 0x66eb31:c.instructions+=1;goto B66eb31;
case 0x66eb37:goto L66eb37;
case 0x66eb39:c.instructions+=1;goto B66eb39;
case 0x66eb3b:goto L66eb3b;
case 0x66eb3f:c.instructions+=1;goto B66eb3f;
case 0x66eb41:goto L66eb41;
case 0x66eb43:c.instructions+=7;goto B66eb43;
case 0x66eb46:c.instructions+=6;goto B66eb46;
case 0x66eb49:c.instructions+=5;goto B66eb49;
case 0x66eb4b:c.instructions+=4;goto B66eb4b;
case 0x66eb4e:c.instructions+=3;goto B66eb4e;
case 0x66eb4f:c.instructions+=2;goto B66eb4f;
case 0x66eb51:c.instructions+=1;goto B66eb51;
case 0x66eb53:goto L66eb53;
case 0x66eb55:c.instructions+=6;goto B66eb55;
case 0x66eb56:c.instructions+=5;goto B66eb56;
case 0x66eb58:c.instructions+=4;goto B66eb58;
case 0x66eb59:c.instructions+=3;goto B66eb59;
case 0x66eb5c:c.instructions+=2;goto B66eb5c;
case 0x66eb5f:c.instructions+=1;goto B66eb5f;
case 0x66eb61:goto L66eb61;
case 0x66eb63:goto L66eb63;
case 0x66eb65:c.instructions+=2;goto B66eb65;
case 0x66eb67:c.instructions+=1;goto B66eb67;
case 0x66eb69:goto L66eb69;
case 0x66eb6c:goto L66eb6c;
case 0x66eb6e:c.instructions+=2;goto B66eb6e;
case 0x66eb71:c.instructions+=1;goto B66eb71;
case 0x66eb73:goto L66eb73;
case 0x66eb75:c.instructions+=1;goto B66eb75;
case 0x66eb77:goto L66eb77;
case 0x66eb7b:c.instructions+=1;goto B66eb7b;
case 0x66eb7d:goto L66eb7d;
case 0x66eb7f:c.instructions+=7;goto B66eb7f;
case 0x66eb82:c.instructions+=6;goto B66eb82;
case 0x66eb85:c.instructions+=5;goto B66eb85;
case 0x66eb87:c.instructions+=4;goto B66eb87;
case 0x66eb8a:c.instructions+=3;goto B66eb8a;
case 0x66eb8b:c.instructions+=2;goto B66eb8b;
case 0x66eb8d:c.instructions+=1;goto B66eb8d;
case 0x66eb8f:goto L66eb8f;
case 0x66eb91:c.instructions+=6;goto B66eb91;
case 0x66eb92:c.instructions+=5;goto B66eb92;
case 0x66eb94:c.instructions+=4;goto B66eb94;
case 0x66eb95:c.instructions+=3;goto B66eb95;
case 0x66eb98:c.instructions+=2;goto B66eb98;
case 0x66eb9b:c.instructions+=1;goto B66eb9b;
case 0x66eb9d:goto L66eb9d;
case 0x66eb9f:goto L66eb9f;
case 0x66eba1:c.instructions+=2;goto B66eba1;
case 0x66eba3:c.instructions+=1;goto B66eba3;
case 0x66eba5:goto L66eba5;
case 0x66eba8:goto L66eba8;
case 0x66ebaa:c.instructions+=2;goto B66ebaa;
case 0x66ebad:c.instructions+=1;goto B66ebad;
case 0x66ebaf:goto L66ebaf;
case 0x66ebb1:c.instructions+=1;goto B66ebb1;
case 0x66ebb3:goto L66ebb3;
case 0x66ebb7:c.instructions+=1;goto B66ebb7;
case 0x66ebb9:goto L66ebb9;
case 0x66ebbb:c.instructions+=9;goto B66ebbb;
case 0x66ebbd:c.instructions+=8;goto B66ebbd;
case 0x66ebc0:c.instructions+=7;goto B66ebc0;
case 0x66ebc3:c.instructions+=6;goto B66ebc3;
case 0x66ebc6:c.instructions+=5;goto B66ebc6;
case 0x66ebc8:c.instructions+=4;goto B66ebc8;
case 0x66ebcb:c.instructions+=3;goto B66ebcb;
case 0x66ebcc:c.instructions+=2;goto B66ebcc;
case 0x66ebce:c.instructions+=1;goto B66ebce;
case 0x66ebd0:goto L66ebd0;
case 0x66ebd2:c.instructions+=6;goto B66ebd2;
case 0x66ebd3:c.instructions+=5;goto B66ebd3;
case 0x66ebd5:c.instructions+=4;goto B66ebd5;
case 0x66ebd6:c.instructions+=3;goto B66ebd6;
case 0x66ebd9:c.instructions+=2;goto B66ebd9;
case 0x66ebdc:c.instructions+=1;goto B66ebdc;
case 0x66ebde:goto L66ebde;
case 0x66ebe1:c.instructions+=2;goto B66ebe1;
case 0x66ebe4:c.instructions+=1;goto B66ebe4;
case 0x66ebe9:goto L66ebe9;
case 0x66ebee:goto L66ebee;
case 0x66ebf0:c.instructions+=6;goto B66ebf0;
case 0x66ebf1:c.instructions+=5;goto B66ebf1;
case 0x66ebf3:c.instructions+=4;goto B66ebf3;
case 0x66ebf6:c.instructions+=3;goto B66ebf6;
case 0x66ebfa:c.instructions+=2;goto B66ebfa;
case 0x66ebfe:c.instructions+=1;goto B66ebfe;
case 0x66ec00:goto L66ec00;
case 0x66ec04:c.instructions+=1;goto B66ec04;
case 0x66ec06:goto L66ec06;
case 0x66ec0d:c.instructions+=1;goto B66ec0d;
case 0x66ec0f:goto L66ec0f;
case 0x66ec12:c.instructions+=7;goto B66ec12;
case 0x66ec13:c.instructions+=6;goto B66ec13;
case 0x66ec15:c.instructions+=5;goto B66ec15;
case 0x66ec17:c.instructions+=4;goto B66ec17;
case 0x66ec18:c.instructions+=3;goto B66ec18;
case 0x66ec19:c.instructions+=2;goto B66ec19;
case 0x66ec1c:c.instructions+=1;goto B66ec1c;
case 0x66ec21:goto L66ec21;
case 0x66ec23:c.instructions+=1;goto B66ec23;
case 0x66ec25:goto L66ec25;
case 0x66ec2c:c.instructions+=1;goto B66ec2c;
case 0x66ec2e:goto L66ec2e;
case 0x66ec31:c.instructions+=5;goto B66ec31;
case 0x66ec34:c.instructions+=4;goto B66ec34;
case 0x66ec36:c.instructions+=3;goto B66ec36;
case 0x66ec37:c.instructions+=2;goto B66ec37;
case 0x66ec38:c.instructions+=1;goto B66ec38;
case 0x66ec3a:goto L66ec3a;
case 0x66ec3c:c.instructions+=1;goto B66ec3c;
case 0x66ec42:goto L66ec42;
case 0x66ec45:c.instructions+=1;goto B66ec45;
case 0x66ec47:goto L66ec47;
case 0x66ec4a:c.instructions+=1;goto B66ec4a;
case 0x66ec50:goto L66ec50;
case 0x66ec57:goto L66ec57;
case 0x66ec58:c.instructions+=1;goto B66ec58;
case 0x66ec59:goto L66ec59;
case 0x66ec5a:goto L66ec5a;
case 0x66ec5d:c.instructions+=2;goto B66ec5d;
case 0x66ec5e:c.instructions+=1;goto B66ec5e;
case 0x66ec61:goto L66ec61;
case 0x66ec64:c.instructions+=2;goto B66ec64;
case 0x66ec66:c.instructions+=1;goto B66ec66;
case 0x66ec68:goto L66ec68;
case 0x66ec6c:c.instructions+=1;goto B66ec6c;
case 0x66ec6e:goto L66ec6e;
case 0x66ec70:goto L66ec70;
case 0x66ec73:c.instructions+=7;goto B66ec73;
case 0x66ec76:c.instructions+=6;goto B66ec76;
case 0x66ec78:c.instructions+=5;goto B66ec78;
case 0x66ec79:c.instructions+=4;goto B66ec79;
case 0x66ec7b:c.instructions+=3;goto B66ec7b;
case 0x66ec7e:c.instructions+=2;goto B66ec7e;
case 0x66ec81:c.instructions+=1;goto B66ec81;
case 0x66ec87:goto L66ec87;
case 0x66ec88:c.instructions+=1;goto B66ec88;
case 0x66ec8e:goto L66ec8e;
case 0x66ec8f:c.instructions+=1;goto B66ec8f;
case 0x66ec91:goto L66ec91;
case 0x66ec98:c.instructions+=1;goto B66ec98;
case 0x66ec9a:goto L66ec9a;
case 0x66ec9c:c.instructions+=1;goto B66ec9c;
case 0x66ec9e:goto L66ec9e;
case 0x66eca0:c.instructions+=3;goto B66eca0;
case 0x66eca3:c.instructions+=2;goto B66eca3;
case 0x66eca6:c.instructions+=1;goto B66eca6;
case 0x66eca9:goto L66eca9;
case 0x66ecab:c.instructions+=1;goto B66ecab;
case 0x66ecad:goto L66ecad;
case 0x66ecb0:c.instructions+=4;goto B66ecb0;
case 0x66ecb3:c.instructions+=3;goto B66ecb3;
case 0x66ecb6:c.instructions+=2;goto B66ecb6;
case 0x66ecb9:c.instructions+=1;goto B66ecb9;
case 0x66ecbc:goto L66ecbc;
case 0x66ecc0:c.instructions+=1;goto B66ecc0;
case 0x66ecc2:goto L66ecc2;
case 0x66ecc5:c.instructions+=7;goto B66ecc5;
case 0x66ecc8:c.instructions+=6;goto B66ecc8;
case 0x66eccb:c.instructions+=5;goto B66eccb;
case 0x66ecce:c.instructions+=4;goto B66ecce;
case 0x66ecd1:c.instructions+=3;goto B66ecd1;
case 0x66ecd3:c.instructions+=2;goto B66ecd3;
case 0x66ecd6:c.instructions+=1;goto B66ecd6;
case 0x66ecd9:goto L66ecd9;
case 0x66ecdc:c.instructions+=2;goto B66ecdc;
case 0x66ecde:c.instructions+=1;goto B66ecde;
case 0x66ece3:goto L66ece3;
case 0x66ece6:c.instructions+=5;goto B66ece6;
case 0x66ecea:c.instructions+=4;goto B66ecea;
case 0x66eced:c.instructions+=3;goto B66eced;
case 0x66ecf0:c.instructions+=2;goto B66ecf0;
case 0x66ecf2:c.instructions+=1;goto B66ecf2;
case 0x66ecf4:goto L66ecf4;
case 0x66ecf8:c.instructions+=3;goto B66ecf8;
case 0x66ecfc:c.instructions+=2;goto B66ecfc;
case 0x66ecff:c.instructions+=1;goto B66ecff;
case 0x66ed01:goto L66ed01;
case 0x66ed05:c.instructions+=3;goto B66ed05;
case 0x66ed08:c.instructions+=2;goto B66ed08;
case 0x66ed0b:c.instructions+=1;goto B66ed0b;
case 0x66ed0d:goto L66ed0d;
case 0x66ed12:goto L66ed12;
case 0x66ed14:c.instructions+=1;goto B66ed14;
case 0x66ed1a:goto L66ed1a;
case 0x66ed1c:c.instructions+=3;goto B66ed1c;
case 0x66ed1f:c.instructions+=2;goto B66ed1f;
case 0x66ed22:c.instructions+=1;goto B66ed22;
case 0x66ed25:goto L66ed25;
case 0x66ed27:c.instructions+=1;goto B66ed27;
case 0x66ed29:goto L66ed29;
case 0x66ed2c:c.instructions+=4;goto B66ed2c;
case 0x66ed2f:c.instructions+=3;goto B66ed2f;
case 0x66ed32:c.instructions+=2;goto B66ed32;
case 0x66ed35:c.instructions+=1;goto B66ed35;
case 0x66ed38:goto L66ed38;
case 0x66ed3a:c.instructions+=1;goto B66ed3a;
case 0x66ed3c:goto L66ed3c;
case 0x66ed3f:c.instructions+=4;goto B66ed3f;
case 0x66ed42:c.instructions+=3;goto B66ed42;
case 0x66ed44:c.instructions+=2;goto B66ed44;
case 0x66ed47:c.instructions+=1;goto B66ed47;
case 0x66ed4a:goto L66ed4a;
case 0x66ed4c:c.instructions+=5;goto B66ed4c;
case 0x66ed4e:c.instructions+=4;goto B66ed4e;
case 0x66ed51:c.instructions+=3;goto B66ed51;
case 0x66ed53:c.instructions+=2;goto B66ed53;
case 0x66ed56:c.instructions+=1;goto B66ed56;
case 0x66ed58:goto L66ed58;
case 0x66ed5b:goto L66ed5b;
case 0x66ed5f:c.instructions+=3;goto B66ed5f;
case 0x66ed63:c.instructions+=2;goto B66ed63;
case 0x66ed66:c.instructions+=1;goto B66ed66;
case 0x66ed68:goto L66ed68;
case 0x66ed6c:c.instructions+=3;goto B66ed6c;
case 0x66ed6f:c.instructions+=2;goto B66ed6f;
case 0x66ed72:c.instructions+=1;goto B66ed72;
case 0x66ed74:goto L66ed74;
case 0x66ed79:goto L66ed79;
case 0x66ed7b:c.instructions+=1;goto B66ed7b;
case 0x66ed81:goto L66ed81;
case 0x66ed83:c.instructions+=3;goto B66ed83;
case 0x66ed86:c.instructions+=2;goto B66ed86;
case 0x66ed89:c.instructions+=1;goto B66ed89;
case 0x66ed8c:goto L66ed8c;
case 0x66ed8e:c.instructions+=1;goto B66ed8e;
case 0x66ed90:goto L66ed90;
case 0x66ed93:c.instructions+=4;goto B66ed93;
case 0x66ed96:c.instructions+=3;goto B66ed96;
case 0x66ed99:c.instructions+=2;goto B66ed99;
case 0x66ed9c:c.instructions+=1;goto B66ed9c;
case 0x66ed9f:goto L66ed9f;
case 0x66eda3:c.instructions+=1;goto B66eda3;
case 0x66eda5:goto L66eda5;
case 0x66eda8:c.instructions+=5;goto B66eda8;
case 0x66edab:c.instructions+=4;goto B66edab;
case 0x66edae:c.instructions+=3;goto B66edae;
case 0x66edb0:c.instructions+=2;goto B66edb0;
case 0x66edb3:c.instructions+=1;goto B66edb3;
case 0x66edb6:goto L66edb6;
case 0x66edb8:c.instructions+=7;goto B66edb8;
case 0x66edba:c.instructions+=6;goto B66edba;
case 0x66edbd:c.instructions+=5;goto B66edbd;
case 0x66edc0:c.instructions+=4;goto B66edc0;
case 0x66edc2:c.instructions+=3;goto B66edc2;
case 0x66edc4:c.instructions+=2;goto B66edc4;
case 0x66edc7:c.instructions+=1;goto B66edc7;
case 0x66edc9:goto L66edc9;
case 0x66edcd:c.instructions+=3;goto B66edcd;
case 0x66edd1:c.instructions+=2;goto B66edd1;
case 0x66edd4:c.instructions+=1;goto B66edd4;
case 0x66edd6:goto L66edd6;
case 0x66edda:c.instructions+=3;goto B66edda;
case 0x66eddd:c.instructions+=2;goto B66eddd;
case 0x66ede0:c.instructions+=1;goto B66ede0;
case 0x66ede2:goto L66ede2;
case 0x66ede7:goto L66ede7;
case 0x66edea:c.instructions+=2;goto B66edea;
case 0x66edec:c.instructions+=1;goto B66edec;
case 0x66edee:goto L66edee;
case 0x66edf2:c.instructions+=1;goto B66edf2;
case 0x66edf4:goto L66edf4;
case 0x66edf6:goto L66edf6;
case 0x66edf9:c.instructions+=4;goto B66edf9;
case 0x66edfb:c.instructions+=3;goto B66edfb;
case 0x66edfc:c.instructions+=2;goto B66edfc;
case 0x66edfe:c.instructions+=1;goto B66edfe;
case 0x66ee00:goto L66ee00;
case 0x66ee01:c.instructions+=1;goto B66ee01;
case 0x66ee03:goto L66ee03;
case 0x66ee04:c.instructions+=1;goto B66ee04;
case 0x66ee0a:goto L66ee0a;
case 0x66ee0c:c.instructions+=1;goto B66ee0c;
case 0x66ee12:goto L66ee12;
case 0x66ee14:c.instructions+=4;goto B66ee14;
case 0x66ee15:c.instructions+=3;goto B66ee15;
case 0x66ee17:c.instructions+=2;goto B66ee17;
case 0x66ee1a:c.instructions+=1;goto B66ee1a;
case 0x66ee1d:goto L66ee1d;
case 0x66ee1f:c.instructions+=1;goto B66ee1f;
case 0x66ee21:goto L66ee21;
case 0x66ee24:goto L66ee24;
case 0x66ee26:c.instructions+=1;goto B66ee26;
case 0x66ee2b:goto L66ee2b;
case 0x66ee2e:c.instructions+=5;goto B66ee2e;
case 0x66ee32:c.instructions+=4;goto B66ee32;
case 0x66ee35:c.instructions+=3;goto B66ee35;
case 0x66ee38:c.instructions+=2;goto B66ee38;
case 0x66ee3a:c.instructions+=1;goto B66ee3a;
case 0x66ee3c:goto L66ee3c;
case 0x66ee3e:c.instructions+=2;goto B66ee3e;
case 0x66ee41:c.instructions+=1;goto B66ee41;
case 0x66ee43:goto L66ee43;
case 0x66ee48:goto L66ee48;
case 0x66ee4a:c.instructions+=1;goto B66ee4a;
case 0x66ee50:goto L66ee50;
case 0x66ee53:c.instructions+=5;goto B66ee53;
case 0x66ee55:c.instructions+=4;goto B66ee55;
case 0x66ee56:c.instructions+=3;goto B66ee56;
case 0x66ee58:c.instructions+=2;goto B66ee58;
case 0x66ee5b:c.instructions+=1;goto B66ee5b;
case 0x66ee5e:goto L66ee5e;
case 0x66ee60:c.instructions+=1;goto B66ee60;
case 0x66ee62:goto L66ee62;
case 0x66ee64:goto L66ee64;
case 0x66ee66:c.instructions+=5;goto B66ee66;
case 0x66ee68:c.instructions+=4;goto B66ee68;
case 0x66ee6b:c.instructions+=3;goto B66ee6b;
case 0x66ee6e:c.instructions+=2;goto B66ee6e;
case 0x66ee6f:c.instructions+=1;goto B66ee6f;
case 0x66ee71:goto L66ee71;
case 0x66ee73:c.instructions+=2;goto B66ee73;
case 0x66ee76:c.instructions+=1;goto B66ee76;
case 0x66ee78:goto L66ee78;
case 0x66ee7d:goto L66ee7d;
case 0x66ee7f:c.instructions+=1;goto B66ee7f;
case 0x66ee85:goto L66ee85;
case 0x66ee87:c.instructions+=4;goto B66ee87;
case 0x66ee88:c.instructions+=3;goto B66ee88;
case 0x66ee8a:c.instructions+=2;goto B66ee8a;
case 0x66ee8d:c.instructions+=1;goto B66ee8d;
case 0x66ee90:goto L66ee90;
case 0x66ee92:c.instructions+=1;goto B66ee92;
case 0x66ee94:goto L66ee94;
case 0x66ee96:goto L66ee96;
case 0x66ee99:c.instructions+=8;goto B66ee99;
case 0x66ee9b:c.instructions+=7;goto B66ee9b;
case 0x66ee9d:c.instructions+=6;goto B66ee9d;
case 0x66eea0:c.instructions+=5;goto B66eea0;
case 0x66eea4:c.instructions+=4;goto B66eea4;
case 0x66eea7:c.instructions+=3;goto B66eea7;
case 0x66eea8:c.instructions+=2;goto B66eea8;
case 0x66eeaa:c.instructions+=1;goto B66eeaa;
case 0x66eeac:goto L66eeac;
case 0x66eeae:c.instructions+=2;goto B66eeae;
case 0x66eeb1:c.instructions+=1;goto B66eeb1;
case 0x66eeb3:goto L66eeb3;
case 0x66eeb8:goto L66eeb8;
case 0x66eeba:c.instructions+=13;goto B66eeba;
case 0x66eebb:c.instructions+=12;goto B66eebb;
case 0x66eebd:c.instructions+=11;goto B66eebd;
case 0x66eec0:c.instructions+=10;goto B66eec0;
case 0x66eec3:c.instructions+=9;goto B66eec3;
case 0x66eec5:c.instructions+=8;goto B66eec5;
case 0x66eec6:c.instructions+=7;goto B66eec6;
case 0x66eec9:c.instructions+=6;goto B66eec9;
case 0x66eeca:c.instructions+=5;goto B66eeca;
case 0x66eecd:c.instructions+=4;goto B66eecd;
case 0x66eece:c.instructions+=3;goto B66eece;
case 0x66eed0:c.instructions+=2;goto B66eed0;
case 0x66eed1:c.instructions+=1;goto B66eed1;
case 0x66eed3:goto L66eed3;
case 0x66eed5:c.instructions+=2;goto B66eed5;
case 0x66eed8:c.instructions+=1;goto B66eed8;
case 0x66eeda:goto L66eeda;
case 0x66eee0:c.instructions+=17;goto B66eee0;
case 0x66eee2:c.instructions+=16;goto B66eee2;
case 0x66eee6:c.instructions+=15;goto B66eee6;
case 0x66eee8:c.instructions+=14;goto B66eee8;
case 0x66eeea:c.instructions+=13;goto B66eeea;
case 0x66eeec:c.instructions+=12;goto B66eeec;
case 0x66eeef:c.instructions+=11;goto B66eeef;
case 0x66eef1:c.instructions+=10;goto B66eef1;
case 0x66eef8:c.instructions+=9;goto B66eef8;
case 0x66eefa:c.instructions+=8;goto B66eefa;
case 0x66eefc:c.instructions+=7;goto B66eefc;
case 0x66eefd:c.instructions+=6;goto B66eefd;
case 0x66eefe:c.instructions+=5;goto B66eefe;
case 0x66eeff:c.instructions+=4;goto B66eeff;
case 0x66ef00:c.instructions+=3;goto B66ef00;
case 0x66ef02:c.instructions+=2;goto B66ef02;
case 0x66ef05:c.instructions+=1;goto B66ef05;
case 0x66ef0a:goto L66ef0a;
case 0x66ef0c:c.instructions+=3;goto B66ef0c;
case 0x66ef0e:c.instructions+=2;goto B66ef0e;
case 0x66ef11:c.instructions+=1;goto B66ef11;
case 0x66ef13:goto L66ef13;
case 0x66ef16:c.instructions+=1;goto B66ef16;
case 0x66ef18:goto L66ef18;
case 0x66ef19:c.instructions+=5;goto B66ef19;
case 0x66ef1c:c.instructions+=4;goto B66ef1c;
case 0x66ef1e:c.instructions+=3;goto B66ef1e;
case 0x66ef1f:c.instructions+=2;goto B66ef1f;
case 0x66ef21:c.instructions+=1;goto B66ef21;
case 0x66ef26:goto L66ef26;
case 0x66ef28:goto L66ef28;
case 0x66ef2b:c.instructions+=3;goto B66ef2b;
case 0x66ef2e:c.instructions+=2;goto B66ef2e;
case 0x66ef30:c.instructions+=1;goto B66ef30;
case 0x66ef32:goto L66ef32;
case 0x66ef34:c.instructions+=3;goto B66ef34;
case 0x66ef35:c.instructions+=2;goto B66ef35;
case 0x66ef37:c.instructions+=1;goto B66ef37;
case 0x66ef3d:goto L66ef3d;
case 0x66ef40:c.instructions+=1;goto B66ef40;
case 0x66ef42:goto L66ef42;
case 0x66ef44:c.instructions+=1;goto B66ef44;
case 0x66ef4a:goto L66ef4a;
case 0x66ef4f:goto L66ef4f;
case 0x66ef50:c.instructions+=4;goto B66ef50;
case 0x66ef51:c.instructions+=3;goto B66ef51;
case 0x66ef52:c.instructions+=2;goto B66ef52;
case 0x66ef53:c.instructions+=1;goto B66ef53;
case 0x66ef56:goto L66ef56;
case 0x66ef59:c.instructions+=7;goto B66ef59;
case 0x66ef5c:c.instructions+=6;goto B66ef5c;
case 0x66ef5f:c.instructions+=5;goto B66ef5f;
case 0x66ef62:c.instructions+=4;goto B66ef62;
case 0x66ef64:c.instructions+=3;goto B66ef64;
case 0x66ef66:c.instructions+=2;goto B66ef66;
case 0x66ef69:c.instructions+=1;goto B66ef69;
case 0x66ef6b:goto L66ef6b;
case 0x66ef6f:c.instructions+=1;goto B66ef6f;
case 0x66ef71:goto L66ef71;
case 0x66ef73:c.instructions+=1;goto B66ef73;
case 0x66ef76:goto L66ef76;
case 0x66ef78:c.instructions+=4;goto B66ef78;
case 0x66ef79:c.instructions+=3;goto B66ef79;
case 0x66ef7b:c.instructions+=2;goto B66ef7b;
case 0x66ef7e:c.instructions+=1;goto B66ef7e;
case 0x66ef84:goto L66ef84;
case 0x66ef85:c.instructions+=1;goto B66ef85;
case 0x66ef8b:goto L66ef8b;
case 0x66ef8c:c.instructions+=1;goto B66ef8c;
case 0x66ef8e:goto L66ef8e;
case 0x66ef93:c.instructions+=1;goto B66ef93;
case 0x66ef95:goto L66ef95;
case 0x66ef97:c.instructions+=2;goto B66ef97;
case 0x66ef9a:c.instructions+=1;goto B66ef9a;
case 0x66efa0:goto L66efa0;
case 0x66efa3:c.instructions+=2;goto B66efa3;
case 0x66efa7:c.instructions+=1;goto B66efa7;
case 0x66efad:goto L66efad;
case 0x66efb1:c.instructions+=2;goto B66efb1;
case 0x66efb3:c.instructions+=1;goto B66efb3;
case 0x66efb5:goto L66efb5;
case 0x66efb7:c.instructions+=2;goto B66efb7;
case 0x66efba:c.instructions+=1;goto B66efba;
case 0x66efbc:goto L66efbc;
case 0x66efbf:c.instructions+=1;goto B66efbf;
case 0x66efc2:goto L66efc2;
case 0x66efc6:c.instructions+=1;goto B66efc6;
case 0x66efc8:goto L66efc8;
case 0x66efcb:c.instructions+=11;goto B66efcb;
case 0x66efcd:c.instructions+=10;goto B66efcd;
case 0x66efd0:c.instructions+=9;goto B66efd0;
case 0x66efd3:c.instructions+=8;goto B66efd3;
case 0x66efd6:c.instructions+=7;goto B66efd6;
case 0x66efd9:c.instructions+=6;goto B66efd9;
case 0x66efdb:c.instructions+=5;goto B66efdb;
case 0x66efde:c.instructions+=4;goto B66efde;
case 0x66efdf:c.instructions+=3;goto B66efdf;
case 0x66efe1:c.instructions+=2;goto B66efe1;
case 0x66efe4:c.instructions+=1;goto B66efe4;
case 0x66efe6:goto L66efe6;
case 0x66efe9:c.instructions+=2;goto B66efe9;
case 0x66efec:c.instructions+=1;goto B66efec;
case 0x66efee:goto L66efee;
case 0x66eff2:c.instructions+=5;goto B66eff2;
case 0x66eff4:c.instructions+=4;goto B66eff4;
case 0x66eff8:c.instructions+=3;goto B66eff8;
case 0x66effb:c.instructions+=2;goto B66effb;
case 0x66effe:c.instructions+=1;goto B66effe;
default:missing_instruction(c.pc);}
B66e002:L66e002:{c.instructions+=4;NFSU2_TR(0x66e002);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B66e004:{NFSU2_TR(0x66e004);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66e006:{NFSU2_TR(0x66e006);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66e009:{NFSU2_TR(0x66e009);
if(r1(R+514)){{goto L66e00f;}}
}
B66e00b:L66e00b:{c.instructions+=2;NFSU2_TR(0x66e00b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66e00d:{NFSU2_TR(0x66e00d);
{goto L66e025;}
}
B66e00f:L66e00f:{c.instructions+=4;NFSU2_TR(0x66e00f);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e012:{NFSU2_TR(0x66e012);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B66e018:{NFSU2_TR(0x66e018);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B66e01e:{NFSU2_TR(0x66e01e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e023ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66e023:L66e023:{c.instructions+=1;NFSU2_TR(0x66e023);
__builtin_memmove((R+28),(R+0),4);
}
B66e025:L66e025:{c.instructions+=5;NFSU2_TR(0x66e025);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e028:{NFSU2_TR(0x66e028);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B66e02a:{NFSU2_TR(0x66e02a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66e02c:{NFSU2_TR(0x66e02c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66e02f:{NFSU2_TR(0x66e02f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e037;}}
}
B66e031:L66e031:{c.instructions+=3;NFSU2_TR(0x66e031);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B66e033:{NFSU2_TR(0x66e033);
__builtin_memmove((R+24),(R+12),4);
}
B66e035:{NFSU2_TR(0x66e035);
{goto L66e05d;}
}
B66e037:L66e037:{c.instructions+=5;NFSU2_TR(0x66e037);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e03a:{NFSU2_TR(0x66e03a);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B66e03c:{NFSU2_TR(0x66e03c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66e03e:{NFSU2_TR(0x66e03e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66e041:{NFSU2_TR(0x66e041);
if(r1(R+514)){{goto L66e047;}}
}
B66e043:L66e043:{c.instructions+=2;NFSU2_TR(0x66e043);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66e045:{NFSU2_TR(0x66e045);
{goto L66e05d;}
}
B66e047:L66e047:{c.instructions+=4;NFSU2_TR(0x66e047);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e04a:{NFSU2_TR(0x66e04a);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B66e050:{NFSU2_TR(0x66e050);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B66e056:{NFSU2_TR(0x66e056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e05bull));
TAIL_STATIC(0x75dd28u,75d);
}
B66e05b:L66e05b:{c.instructions+=1;NFSU2_TR(0x66e05b);
__builtin_memmove((R+24),(R+0),4);
}
B66e05d:L66e05d:{c.instructions+=5;NFSU2_TR(0x66e05d);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e060:{NFSU2_TR(0x66e060);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B66e062:{NFSU2_TR(0x66e062);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66e064:{NFSU2_TR(0x66e064);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66e067:{NFSU2_TR(0x66e067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e06d;}}
}
B66e069:L66e069:{c.instructions+=2;NFSU2_TR(0x66e069);
__builtin_memmove((R+0),(R+12),4);
}
B66e06b:{NFSU2_TR(0x66e06b);
{goto L66e095;}
}
B66e06d:L66e06d:{c.instructions+=5;NFSU2_TR(0x66e06d);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e070:{NFSU2_TR(0x66e070);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B66e076:{NFSU2_TR(0x66e076);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66e078:{NFSU2_TR(0x66e078);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66e07b:{NFSU2_TR(0x66e07b);
if(r1(R+514)){{goto L66e081;}}
}
B66e07d:L66e07d:{c.instructions+=2;NFSU2_TR(0x66e07d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66e07f:{NFSU2_TR(0x66e07f);
{goto L66e095;}
}
B66e081:L66e081:{c.instructions+=4;NFSU2_TR(0x66e081);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e084:{NFSU2_TR(0x66e084);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B66e08a:{NFSU2_TR(0x66e08a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B66e090:{NFSU2_TR(0x66e090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e095ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66e095:L66e095:{c.instructions+=9;NFSU2_TR(0x66e095);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e098:{NFSU2_TR(0x66e098);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66e09b:{NFSU2_TR(0x66e09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B66e09e:{NFSU2_TR(0x66e09e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66e0a1:{NFSU2_TR(0x66e0a1);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B66e0a3:{NFSU2_TR(0x66e0a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66e0a6:{NFSU2_TR(0x66e0a6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66e0a8:{NFSU2_TR(0x66e0a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66e0aa:{NFSU2_TR(0x66e0aa);
{goto L66e0e4;}
}
B66e0ac:L66e0ac:{c.instructions+=2;NFSU2_TR(0x66e0ac);
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
B66e0ae:{NFSU2_TR(0x66e0ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e0dd;}}
}
B66e0b0:L66e0b0:{c.instructions+=2;NFSU2_TR(0x66e0b0);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B66e0b2:{NFSU2_TR(0x66e0b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e0dd;}}
}
B66e0b4:L66e0b4:{c.instructions+=2;NFSU2_TR(0x66e0b4);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66e0b5:{NFSU2_TR(0x66e0b5);
if(r1(R+518)){{goto L66e0d0;}}
}
B66e0b7:L66e0b7:{c.instructions+=2;NFSU2_TR(0x66e0b7);
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
B66e0b8:{NFSU2_TR(0x66e0b8);
if(r1(R+518)){{goto L66e0ca;}}
}
B66e0ba:L66e0ba:{c.instructions+=2;NFSU2_TR(0x66e0ba);
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
B66e0bb:{NFSU2_TR(0x66e0bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e0dd;}}
}
B66e0bd:L66e0bd:{c.instructions+=3;NFSU2_TR(0x66e0bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66e0bf:{NFSU2_TR(0x66e0bf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e0c1:{NFSU2_TR(0x66e0c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e0c6ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66e0c6:L66e0c6:{c.instructions+=2;NFSU2_TR(0x66e0c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66e0c8:{NFSU2_TR(0x66e0c8);
{goto L66e0e4;}
}
B66e0ca:L66e0ca:{c.instructions+=3;NFSU2_TR(0x66e0ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66e0cc:{NFSU2_TR(0x66e0cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66e0ce:{NFSU2_TR(0x66e0ce);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e0c6u);}goto L66e0c6;}
}
B66e0d0:L66e0d0:{c.instructions+=6;NFSU2_TR(0x66e0d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66e0d2:{NFSU2_TR(0x66e0d2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66e0d4:{NFSU2_TR(0x66e0d4);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+4)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66e0d6:{NFSU2_TR(0x66e0d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B66e0d9:{NFSU2_TR(0x66e0d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66e0db:{NFSU2_TR(0x66e0db);
{goto L66e0e4;}
}
B66e0dd:L66e0dd:{c.instructions+=1;NFSU2_TR(0x66e0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66e0e4:L66e0e4:{c.instructions+=6;NFSU2_TR(0x66e0e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66e0e5:{NFSU2_TR(0x66e0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e0e8:{NFSU2_TR(0x66e0e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66e0e9:{NFSU2_TR(0x66e0e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66e0ea:{NFSU2_TR(0x66e0ea);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66e0eb:{NFSU2_TR(0x66e0eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66e0ee:L66e0ee:{c.instructions+=15;NFSU2_TR(0x66e0ee);
__builtin_memmove((R+28),(R+28),4);
}
B66e0f0:{NFSU2_TR(0x66e0f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e0f1:{NFSU2_TR(0x66e0f1);
__builtin_memmove((R+20),(R+16),4);
}
B66e0f3:{NFSU2_TR(0x66e0f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e0f4:{NFSU2_TR(0x66e0f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e0f7:{NFSU2_TR(0x66e0f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e0f8:{NFSU2_TR(0x66e0f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e0f9:{NFSU2_TR(0x66e0f9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66e0fb:{NFSU2_TR(0x66e0fb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66e0fd:{NFSU2_TR(0x66e0fd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66e0fe:{NFSU2_TR(0x66e0fe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B66e100:{NFSU2_TR(0x66e100);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e101:{NFSU2_TR(0x66e101);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66e104:{NFSU2_TR(0x66e104);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e107:{NFSU2_TR(0x66e107);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66e10d;}}
}
B66e109:L66e109:{c.instructions+=2;NFSU2_TR(0x66e109);
w4(R+4,u32(~u32(r4(R+4))));
}
B66e10b:{NFSU2_TR(0x66e10b);
{goto L66e13f;}
}
B66e10d:L66e10d:{c.instructions+=16;NFSU2_TR(0x66e10d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66e113:{NFSU2_TR(0x66e113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e115:{NFSU2_TR(0x66e115);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e118:{NFSU2_TR(0x66e118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e11a:{NFSU2_TR(0x66e11a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B66e11c:{NFSU2_TR(0x66e11c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e11e:{NFSU2_TR(0x66e11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e121:{NFSU2_TR(0x66e121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e123:{NFSU2_TR(0x66e123);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e124:{NFSU2_TR(0x66e124);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e127:{NFSU2_TR(0x66e127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66e129:{NFSU2_TR(0x66e129);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e12a:{NFSU2_TR(0x66e12a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e12b:{NFSU2_TR(0x66e12b);
__builtin_memmove((R+4),(R+28),4);
}
B66e12d:{NFSU2_TR(0x66e12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e130:{NFSU2_TR(0x66e130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e135ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66e135:L66e135:{c.instructions+=3;NFSU2_TR(0x66e135);
__builtin_memmove((R+4),(R+0),4);
}
B66e137:{NFSU2_TR(0x66e137);
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
B66e139:{NFSU2_TR(0x66e139);
if(r1(R+518)){{goto L66e1d5;}}
}
B66e13f:L66e13f:{c.instructions+=3;NFSU2_TR(0x66e13f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e142:{NFSU2_TR(0x66e142);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e145:{NFSU2_TR(0x66e145);
if(r1(R+518)){{goto L66e151;}}
}
B66e147:L66e147:{c.instructions+=2;NFSU2_TR(0x66e147);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66e14b:{NFSU2_TR(0x66e14b);
if(r1(R+518)){{goto L66e1d5;}}
}
B66e151:L66e151:{c.instructions+=2;NFSU2_TR(0x66e151);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e155:{NFSU2_TR(0x66e155);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e166;}}
}
B66e157:L66e157:{c.instructions+=5;NFSU2_TR(0x66e157);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66e15a:{NFSU2_TR(0x66e15a);
w4(R+4,u32(~u32(r4(R+4))));
}
B66e15c:{NFSU2_TR(0x66e15c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e15d:{NFSU2_TR(0x66e15d);
__builtin_memmove((R+4),(R+28),4);
}
B66e15f:{NFSU2_TR(0x66e15f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e164ull));
TAIL_STATIC(0x666103u,666);
}
B66e164:L66e164:{c.instructions+=1;NFSU2_TR(0x66e164);
{goto L66e1e1;}
}
B66e166:L66e166:{c.instructions+=8;NFSU2_TR(0x66e166);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66e168:{NFSU2_TR(0x66e168);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e16b:{NFSU2_TR(0x66e16b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B66e16e:{NFSU2_TR(0x66e16e);
__builtin_memmove((R+28),(R+8),4);
}
B66e170:{NFSU2_TR(0x66e170);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e173:{NFSU2_TR(0x66e173);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B66e175:{NFSU2_TR(0x66e175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e178:{NFSU2_TR(0x66e178);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66e1d5;}}
}
B66e17a:L66e17a:{c.instructions+=2;NFSU2_TR(0x66e17a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B66e17d:{NFSU2_TR(0x66e17d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L66e1d5;}}
}
B66e17f:L66e17f:{c.instructions+=2;NFSU2_TR(0x66e17f);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
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
B66e182:{NFSU2_TR(0x66e182);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e1d5;}}
}
B66e184:L66e184:{c.instructions+=2;NFSU2_TR(0x66e184);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
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
B66e187:{NFSU2_TR(0x66e187);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e1d5;}}
}
B66e189:L66e189:{c.instructions+=3;NFSU2_TR(0x66e189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66e18b:{NFSU2_TR(0x66e18b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66e18c:{NFSU2_TR(0x66e18c);
if(r1(R+518)){{goto L66e1b4;}}
}
B66e18e:L66e18e:{c.instructions+=2;NFSU2_TR(0x66e18e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66e18f:{NFSU2_TR(0x66e18f);
if(r1(R+518)){{goto L66e1aa;}}
}
B66e191:L66e191:{c.instructions+=2;NFSU2_TR(0x66e191);
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
B66e192:{NFSU2_TR(0x66e192);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e1d5;}}
}
B66e194:L66e194:{c.instructions+=8;NFSU2_TR(0x66e194);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66e197:{NFSU2_TR(0x66e197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e199:{NFSU2_TR(0x66e199);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B66e19b:{NFSU2_TR(0x66e19b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e19d:{NFSU2_TR(0x66e19d);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B66e19f:{NFSU2_TR(0x66e19f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66e1a1:{NFSU2_TR(0x66e1a1);
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
B66e1a4:{NFSU2_TR(0x66e1a4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L66e1dc;}}
}
B66e1a6:L66e1a6:{c.instructions+=2;NFSU2_TR(0x66e1a6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66e1a8:{NFSU2_TR(0x66e1a8);
{goto L66e1ca;}
}
B66e1aa:L66e1aa:{c.instructions+=3;NFSU2_TR(0x66e1aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66e1ac:{NFSU2_TR(0x66e1ac);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66e1ae:{NFSU2_TR(0x66e1ae);
if(r1(R+518)){{goto L66e1de;}}
}
B66e1b0:L66e1b0:{c.instructions+=2;NFSU2_TR(0x66e1b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66e1b2:{NFSU2_TR(0x66e1b2);
{goto L66e1ca;}
}
B66e1b4:L66e1b4:{c.instructions+=9;NFSU2_TR(0x66e1b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66e1b6:{NFSU2_TR(0x66e1b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66e1b8:{NFSU2_TR(0x66e1b8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e1ba:{NFSU2_TR(0x66e1ba);
__builtin_memmove((R+0),(R+518),1);
}
B66e1bd:{NFSU2_TR(0x66e1bd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66e1bf:{NFSU2_TR(0x66e1bf);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66e1c1:{NFSU2_TR(0x66e1c1);
__builtin_memmove((R+8),(R+518),1);
}
B66e1c4:{NFSU2_TR(0x66e1c4);
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
B66e1c6:{NFSU2_TR(0x66e1c6);
if(r1(R+518)){{goto L66e1de;}}
}
B66e1c8:L66e1c8:{c.instructions+=1;NFSU2_TR(0x66e1c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B66e1ca:L66e1ca:{c.instructions+=3;NFSU2_TR(0x66e1ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e1cb:{NFSU2_TR(0x66e1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e1ce:{NFSU2_TR(0x66e1ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e1d3ull));
TAIL_STATIC(0x66055cu,660);
}
B66e1d3:L66e1d3:{c.instructions+=1;NFSU2_TR(0x66e1d3);
{goto L66e1e1;}
}
B66e1d5:L66e1d5:{c.instructions+=2;NFSU2_TR(0x66e1d5);
w4(R+0,u32(0x8876086cull));
}
B66e1da:{NFSU2_TR(0x66e1da);
{goto L66e1e1;}
}
B66e1dc:L66e1dc:{c.instructions+=1;NFSU2_TR(0x66e1dc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B66e1de:L66e1de:{c.instructions+=1;NFSU2_TR(0x66e1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e1e1:L66e1e1:{c.instructions+=5;NFSU2_TR(0x66e1e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66e1e2:{NFSU2_TR(0x66e1e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66e1e3:{NFSU2_TR(0x66e1e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66e1e4:{NFSU2_TR(0x66e1e4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66e1e5:{NFSU2_TR(0x66e1e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66e1e8:L66e1e8:{c.instructions+=11;NFSU2_TR(0x66e1e8);
__builtin_memmove((R+28),(R+28),4);
}
B66e1ea:{NFSU2_TR(0x66e1ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e1eb:{NFSU2_TR(0x66e1eb);
__builtin_memmove((R+20),(R+16),4);
}
B66e1ed:{NFSU2_TR(0x66e1ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e1ee:{NFSU2_TR(0x66e1ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e1ef:{NFSU2_TR(0x66e1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66e1f2:{NFSU2_TR(0x66e1f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e1f3:{NFSU2_TR(0x66e1f3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66e1f5:{NFSU2_TR(0x66e1f5);
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
B66e1f7:{NFSU2_TR(0x66e1f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e1fa:{NFSU2_TR(0x66e1fa);
if(r1(R+518)){{goto L66e26a;}}
}
B66e1fc:L66e1fc:{c.instructions+=5;NFSU2_TR(0x66e1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e1ff:{NFSU2_TR(0x66e1ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e200:{NFSU2_TR(0x66e200);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e202:{NFSU2_TR(0x66e202);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66e205:{NFSU2_TR(0x66e205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e20aull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66e20a:L66e20a:{c.instructions+=2;NFSU2_TR(0x66e20a);
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
B66e20c:{NFSU2_TR(0x66e20c);
if(r1(R+518)){{goto L66e26a;}}
}
B66e20e:L66e20e:{c.instructions+=3;NFSU2_TR(0x66e20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e211:{NFSU2_TR(0x66e211);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e214:{NFSU2_TR(0x66e214);
if(r1(R+518)){{goto L66e21c;}}
}
B66e216:L66e216:{c.instructions+=2;NFSU2_TR(0x66e216);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66e21a:{NFSU2_TR(0x66e21a);
if(r1(R+518)){{goto L66e26a;}}
}
B66e21c:L66e21c:{c.instructions+=3;NFSU2_TR(0x66e21c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e21f:{NFSU2_TR(0x66e21f);
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
B66e221:{NFSU2_TR(0x66e221);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66e26a;}}
}
B66e223:L66e223:{c.instructions+=2;NFSU2_TR(0x66e223);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B66e226:{NFSU2_TR(0x66e226);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L66e26a;}}
}
B66e228:L66e228:{c.instructions+=2;NFSU2_TR(0x66e228);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
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
B66e22c:{NFSU2_TR(0x66e22c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e26a;}}
}
B66e22e:L66e22e:{c.instructions+=2;NFSU2_TR(0x66e22e);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
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
B66e232:{NFSU2_TR(0x66e232);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e26a;}}
}
B66e234:L66e234:{c.instructions+=3;NFSU2_TR(0x66e234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66e236:{NFSU2_TR(0x66e236);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66e237:{NFSU2_TR(0x66e237);
if(r1(R+518)){{goto L66e25d;}}
}
B66e239:L66e239:{c.instructions+=2;NFSU2_TR(0x66e239);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66e23a:{NFSU2_TR(0x66e23a);
if(r1(R+518)){{goto L66e25d;}}
}
B66e23c:L66e23c:{c.instructions+=2;NFSU2_TR(0x66e23c);
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
B66e23d:{NFSU2_TR(0x66e23d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e26a;}}
}
B66e23f:L66e23f:{c.instructions+=7;NFSU2_TR(0x66e23f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66e241:{NFSU2_TR(0x66e241);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e243:{NFSU2_TR(0x66e243);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e249:{NFSU2_TR(0x66e249);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B66e24b:{NFSU2_TR(0x66e24b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66e24d:{NFSU2_TR(0x66e24d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66e250:{NFSU2_TR(0x66e250);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L66e257;}}
}
B66e252:L66e252:{c.instructions+=3;NFSU2_TR(0x66e252);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66e254:{NFSU2_TR(0x66e254);
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
B66e255:{NFSU2_TR(0x66e255);
{goto L66e259;}
}
B66e257:L66e257:{c.instructions+=1;NFSU2_TR(0x66e257);
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
B66e259:L66e259:{c.instructions+=2;NFSU2_TR(0x66e259);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B66e25b:{NFSU2_TR(0x66e25b);
{goto L66e271;}
}
B66e25d:L66e25d:{c.instructions+=6;NFSU2_TR(0x66e25d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66e25f:{NFSU2_TR(0x66e25f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66e261:{NFSU2_TR(0x66e261);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66e263:{NFSU2_TR(0x66e263);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B66e266:{NFSU2_TR(0x66e266);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B66e268:{NFSU2_TR(0x66e268);
{goto L66e271;}
}
B66e26a:L66e26a:{c.instructions+=1;NFSU2_TR(0x66e26a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66e271:L66e271:{c.instructions+=5;NFSU2_TR(0x66e271);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e274:{NFSU2_TR(0x66e274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66e275:{NFSU2_TR(0x66e275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66e276:{NFSU2_TR(0x66e276);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66e277:{NFSU2_TR(0x66e277);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66e27a:L66e27a:{c.instructions+=12;NFSU2_TR(0x66e27a);
__builtin_memmove((R+28),(R+28),4);
}
B66e27c:{NFSU2_TR(0x66e27c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e27d:{NFSU2_TR(0x66e27d);
__builtin_memmove((R+20),(R+16),4);
}
B66e27f:{NFSU2_TR(0x66e27f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B66e282:{NFSU2_TR(0x66e282);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e285:{NFSU2_TR(0x66e285);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e286:{NFSU2_TR(0x66e286);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e287:{NFSU2_TR(0x66e287);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66e289:{NFSU2_TR(0x66e289);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66e28a:{NFSU2_TR(0x66e28a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66e28c:{NFSU2_TR(0x66e28c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e28d:{NFSU2_TR(0x66e28d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66e296;}}
}
B66e28f:L66e28f:{c.instructions+=3;NFSU2_TR(0x66e28f);
w4(R+4,u32(~u32(r4(R+4))));
}
B66e291:{NFSU2_TR(0x66e291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e294:{NFSU2_TR(0x66e294);
{goto L66e2cc;}
}
B66e296:L66e296:{c.instructions+=18;NFSU2_TR(0x66e296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e299:{NFSU2_TR(0x66e299);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66e29c:{NFSU2_TR(0x66e29c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66e2a2:{NFSU2_TR(0x66e2a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B66e2a4:{NFSU2_TR(0x66e2a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e2a8:{NFSU2_TR(0x66e2a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B66e2aa:{NFSU2_TR(0x66e2aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66e2ac:{NFSU2_TR(0x66e2ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B66e2ae:{NFSU2_TR(0x66e2ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e2b1:{NFSU2_TR(0x66e2b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B66e2b3:{NFSU2_TR(0x66e2b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e2b4:{NFSU2_TR(0x66e2b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e2b7:{NFSU2_TR(0x66e2b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66e2b9:{NFSU2_TR(0x66e2b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e2ba:{NFSU2_TR(0x66e2ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e2bb:{NFSU2_TR(0x66e2bb);
__builtin_memmove((R+4),(R+8),4);
}
B66e2bd:{NFSU2_TR(0x66e2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e2c0:{NFSU2_TR(0x66e2c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e2c5ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66e2c5:L66e2c5:{c.instructions+=3;NFSU2_TR(0x66e2c5);
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
B66e2c7:{NFSU2_TR(0x66e2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e2ca:{NFSU2_TR(0x66e2ca);
if(r1(R+518)){{goto L66e30b;}}
}
B66e2cc:L66e2cc:{c.instructions+=3;NFSU2_TR(0x66e2cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e2cf:{NFSU2_TR(0x66e2cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e2d3:{NFSU2_TR(0x66e2d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e2e8;}}
}
B66e2d5:L66e2d5:{c.instructions+=6;NFSU2_TR(0x66e2d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66e2d8:{NFSU2_TR(0x66e2d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e2db:{NFSU2_TR(0x66e2db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66e2de:{NFSU2_TR(0x66e2de);
w4(R+0,u32(~u32(r4(R+0))));
}
B66e2e0:{NFSU2_TR(0x66e2e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e2e1:{NFSU2_TR(0x66e2e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e2e6ull));
TAIL_STATIC(0x6661ffu,666);
}
B66e2e6:L66e2e6:{c.instructions+=1;NFSU2_TR(0x66e2e6);
{goto L66e310;}
}
B66e2e8:L66e2e8:{c.instructions+=5;NFSU2_TR(0x66e2e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66e2eb:{NFSU2_TR(0x66e2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e2ee:{NFSU2_TR(0x66e2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e2f1:{NFSU2_TR(0x66e2f1);
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
B66e2f3:{NFSU2_TR(0x66e2f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66e30b;}}
}
B66e2f5:L66e2f5:{c.instructions+=2;NFSU2_TR(0x66e2f5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e2f7:{NFSU2_TR(0x66e2f7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L66e4c3;}}
}
B66e2fd:L66e2fd:{c.instructions+=2;NFSU2_TR(0x66e2fd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e300:{NFSU2_TR(0x66e300);
if(r1(R+518)){{goto L66e317;}}
}
B66e302:L66e302:{c.instructions+=2;NFSU2_TR(0x66e302);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B66e305:{NFSU2_TR(0x66e305);
if(r1(R+518)){{goto L66e4c3;}}
}
B66e30b:L66e30b:{c.instructions+=1;NFSU2_TR(0x66e30b);
w4(R+0,u32(0x8876086cull));
}
B66e310:L66e310:{c.instructions+=5;NFSU2_TR(0x66e310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66e311:{NFSU2_TR(0x66e311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66e312:{NFSU2_TR(0x66e312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66e313:{NFSU2_TR(0x66e313);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66e314:{NFSU2_TR(0x66e314);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66e317:L66e317:{c.instructions+=7;NFSU2_TR(0x66e317);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e31a:{NFSU2_TR(0x66e31a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e31c:{NFSU2_TR(0x66e31c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e31f:{NFSU2_TR(0x66e31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66e322:{NFSU2_TR(0x66e322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e325:{NFSU2_TR(0x66e325);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e328:{NFSU2_TR(0x66e328);
if(r1(R+518)){{goto L66e330;}}
}
B66e32a:L66e32a:{c.instructions+=2;NFSU2_TR(0x66e32a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e32e:{NFSU2_TR(0x66e32e);
if(r1(R+518)){{goto L66e333;}}
}
B66e330:L66e330:{c.instructions+=1;NFSU2_TR(0x66e330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e333:L66e333:{c.instructions+=4;NFSU2_TR(0x66e333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e335:{NFSU2_TR(0x66e335);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66e336:{NFSU2_TR(0x66e336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B66e338:{NFSU2_TR(0x66e338);
if(r1(R+518)){{goto L66e446;}}
}
B66e33e:L66e33e:{c.instructions+=2;NFSU2_TR(0x66e33e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66e33f:{NFSU2_TR(0x66e33f);
if(r1(R+518)){{goto L66e3c9;}}
}
B66e345:L66e345:{c.instructions+=2;NFSU2_TR(0x66e345);
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
B66e346:{NFSU2_TR(0x66e346);
if(r1(R+518)){{goto L66e34f;}}
}
B66e348:L66e348:{c.instructions+=2;NFSU2_TR(0x66e348);
w4(R+0,u32(0x80004005ull));
}
B66e34d:{NFSU2_TR(0x66e34d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e310u);}goto L66e310;}
}
B66e34f:L66e34f:{c.instructions+=3;NFSU2_TR(0x66e34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e353:{NFSU2_TR(0x66e353);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e357:{NFSU2_TR(0x66e357);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e5aa;}}
}
B66e35d:L66e35d:{c.instructions+=1;NFSU2_TR(0x66e35d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e360:L66e360:{c.instructions+=2;NFSU2_TR(0x66e360);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e364:{NFSU2_TR(0x66e364);
if(r1(R+518)){{goto L66e5aa;}}
}
B66e36a:L66e36a:{c.instructions+=3;NFSU2_TR(0x66e36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e36e:{NFSU2_TR(0x66e36e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e370:{NFSU2_TR(0x66e370);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e3ae;}}
}
B66e372:L66e372:{c.instructions+=3;NFSU2_TR(0x66e372);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66e374:{NFSU2_TR(0x66e374);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e376:{NFSU2_TR(0x66e376);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e3a6;}}
}
B66e378:L66e378:{c.instructions+=2;NFSU2_TR(0x66e378);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e37b:{NFSU2_TR(0x66e37b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66e37e:L66e37e:{c.instructions+=2;NFSU2_TR(0x66e37e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e382:{NFSU2_TR(0x66e382);
if(r1(R+518)){{goto L66e3a3;}}
}
B66e384:L66e384:{c.instructions+=12;NFSU2_TR(0x66e384);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66e386:{NFSU2_TR(0x66e386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e389:{NFSU2_TR(0x66e389);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e38c:{NFSU2_TR(0x66e38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66e38f:{NFSU2_TR(0x66e38f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66e392:{NFSU2_TR(0x66e392);
__builtin_memmove((R+0),(R+28),4);
}
B66e394:{NFSU2_TR(0x66e394);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66e397:{NFSU2_TR(0x66e397);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66e399:{NFSU2_TR(0x66e399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e39c:{NFSU2_TR(0x66e39c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66e39d:{NFSU2_TR(0x66e39d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B66e39f:{NFSU2_TR(0x66e39f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e37eu);}goto L66e37e;}}
}
B66e3a1:L66e3a1:{c.instructions+=1;NFSU2_TR(0x66e3a1);
{goto L66e3a6;}
}
B66e3a3:L66e3a3:{c.instructions+=1;NFSU2_TR(0x66e3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e3a6:L66e3a6:{c.instructions+=3;NFSU2_TR(0x66e3a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e3a9:{NFSU2_TR(0x66e3a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B66e3ac:{NFSU2_TR(0x66e3ac);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e372u);}goto L66e372;}}
}
B66e3ae:L66e3ae:{c.instructions+=8;NFSU2_TR(0x66e3ae);
__builtin_memmove((R+4),(R+28),4);
}
B66e3b0:{NFSU2_TR(0x66e3b0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66e3b3:{NFSU2_TR(0x66e3b3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B66e3b6:{NFSU2_TR(0x66e3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e3b9:{NFSU2_TR(0x66e3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B66e3bc:{NFSU2_TR(0x66e3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e3bf:{NFSU2_TR(0x66e3bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B66e3c2:{NFSU2_TR(0x66e3c2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e360u);}goto L66e360;}}
}
B66e3c4:L66e3c4:{c.instructions+=1;NFSU2_TR(0x66e3c4);
{goto L66e5aa;}
}
B66e3c9:L66e3c9:{c.instructions+=3;NFSU2_TR(0x66e3c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e3cd:{NFSU2_TR(0x66e3cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e3d1:{NFSU2_TR(0x66e3d1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e5aa;}}
}
B66e3d7:L66e3d7:{c.instructions+=1;NFSU2_TR(0x66e3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e3da:L66e3da:{c.instructions+=2;NFSU2_TR(0x66e3da);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e3de:{NFSU2_TR(0x66e3de);
if(r1(R+518)){{goto L66e5aa;}}
}
B66e3e4:L66e3e4:{c.instructions+=3;NFSU2_TR(0x66e3e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e3e8:{NFSU2_TR(0x66e3e8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e3ea:{NFSU2_TR(0x66e3ea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e42b;}}
}
B66e3ec:L66e3ec:{c.instructions+=3;NFSU2_TR(0x66e3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e3f0:{NFSU2_TR(0x66e3f0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e3f2:{NFSU2_TR(0x66e3f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e423;}}
}
B66e3f4:L66e3f4:{c.instructions+=2;NFSU2_TR(0x66e3f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e3f7:{NFSU2_TR(0x66e3f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66e3fa:L66e3fa:{c.instructions+=2;NFSU2_TR(0x66e3fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e3fe:{NFSU2_TR(0x66e3fe);
if(r1(R+518)){{goto L66e423;}}
}
B66e400:L66e400:{c.instructions+=13;NFSU2_TR(0x66e400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e403:{NFSU2_TR(0x66e403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66e406:{NFSU2_TR(0x66e406);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e409:{NFSU2_TR(0x66e409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e40c:{NFSU2_TR(0x66e40c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66e40f:{NFSU2_TR(0x66e40f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66e411:{NFSU2_TR(0x66e411);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66e414:{NFSU2_TR(0x66e414);
__builtin_memmove((R+0),(R+28),4);
}
B66e416:{NFSU2_TR(0x66e416);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66e419:{NFSU2_TR(0x66e419);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66e41b:{NFSU2_TR(0x66e41b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e41e:{NFSU2_TR(0x66e41e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B66e421:{NFSU2_TR(0x66e421);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e3fau);}goto L66e3fa;}}
}
B66e423:L66e423:{c.instructions+=3;NFSU2_TR(0x66e423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e426:{NFSU2_TR(0x66e426);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B66e429:{NFSU2_TR(0x66e429);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e3ecu);}goto L66e3ec;}}
}
B66e42b:L66e42b:{c.instructions+=8;NFSU2_TR(0x66e42b);
__builtin_memmove((R+4),(R+28),4);
}
B66e42d:{NFSU2_TR(0x66e42d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66e430:{NFSU2_TR(0x66e430);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B66e433:{NFSU2_TR(0x66e433);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e436:{NFSU2_TR(0x66e436);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B66e439:{NFSU2_TR(0x66e439);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e43c:{NFSU2_TR(0x66e43c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B66e43f:{NFSU2_TR(0x66e43f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e3dau);}goto L66e3da;}}
}
B66e441:L66e441:{c.instructions+=1;NFSU2_TR(0x66e441);
{goto L66e5aa;}
}
B66e446:L66e446:{c.instructions+=3;NFSU2_TR(0x66e446);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e44a:{NFSU2_TR(0x66e44a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e44e:{NFSU2_TR(0x66e44e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e5aa;}}
}
B66e454:L66e454:{c.instructions+=1;NFSU2_TR(0x66e454);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e457:L66e457:{c.instructions+=2;NFSU2_TR(0x66e457);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e45b:{NFSU2_TR(0x66e45b);
if(r1(R+518)){{goto L66e5aa;}}
}
B66e461:L66e461:{c.instructions+=3;NFSU2_TR(0x66e461);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e465:{NFSU2_TR(0x66e465);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e467:{NFSU2_TR(0x66e467);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e4a8;}}
}
B66e469:L66e469:{c.instructions+=3;NFSU2_TR(0x66e469);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e46d:{NFSU2_TR(0x66e46d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e46f:{NFSU2_TR(0x66e46f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e4a0;}}
}
B66e471:L66e471:{c.instructions+=2;NFSU2_TR(0x66e471);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e474:{NFSU2_TR(0x66e474);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66e477:L66e477:{c.instructions+=2;NFSU2_TR(0x66e477);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e47b:{NFSU2_TR(0x66e47b);
if(r1(R+518)){{goto L66e4a0;}}
}
B66e47d:L66e47d:{c.instructions+=13;NFSU2_TR(0x66e47d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e480:{NFSU2_TR(0x66e480);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66e483:{NFSU2_TR(0x66e483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e486:{NFSU2_TR(0x66e486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e489:{NFSU2_TR(0x66e489);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66e48c:{NFSU2_TR(0x66e48c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66e48e:{NFSU2_TR(0x66e48e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66e491:{NFSU2_TR(0x66e491);
__builtin_memmove((R+0),(R+28),4);
}
B66e493:{NFSU2_TR(0x66e493);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66e496:{NFSU2_TR(0x66e496);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66e498:{NFSU2_TR(0x66e498);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e49b:{NFSU2_TR(0x66e49b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B66e49e:{NFSU2_TR(0x66e49e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e477u);}goto L66e477;}}
}
B66e4a0:L66e4a0:{c.instructions+=3;NFSU2_TR(0x66e4a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e4a3:{NFSU2_TR(0x66e4a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B66e4a6:{NFSU2_TR(0x66e4a6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e469u);}goto L66e469;}}
}
B66e4a8:L66e4a8:{c.instructions+=8;NFSU2_TR(0x66e4a8);
__builtin_memmove((R+4),(R+28),4);
}
B66e4aa:{NFSU2_TR(0x66e4aa);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66e4ad:{NFSU2_TR(0x66e4ad);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B66e4b0:{NFSU2_TR(0x66e4b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e4b3:{NFSU2_TR(0x66e4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B66e4b6:{NFSU2_TR(0x66e4b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e4b9:{NFSU2_TR(0x66e4b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B66e4bc:{NFSU2_TR(0x66e4bc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e457u);}goto L66e457;}}
}
B66e4be:L66e4be:{c.instructions+=1;NFSU2_TR(0x66e4be);
{goto L66e5aa;}
}
B66e4c3:L66e4c3:{c.instructions+=4;NFSU2_TR(0x66e4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e4c6:{NFSU2_TR(0x66e4c6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e4c8:{NFSU2_TR(0x66e4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e4cb:{NFSU2_TR(0x66e4cb);
if(r1(R+518)){{goto L66e4d3;}}
}
B66e4cd:L66e4cd:{c.instructions+=2;NFSU2_TR(0x66e4cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e4d1:{NFSU2_TR(0x66e4d1);
if(r1(R+518)){{goto L66e4d8;}}
}
B66e4d3:L66e4d3:{c.instructions+=2;NFSU2_TR(0x66e4d3);
__builtin_memmove((R+0),(R+24),4);
}
B66e4d5:{NFSU2_TR(0x66e4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e4d8:L66e4d8:{c.instructions+=5;NFSU2_TR(0x66e4d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66e4db:{NFSU2_TR(0x66e4db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e4dd:{NFSU2_TR(0x66e4dd);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66e4de:{NFSU2_TR(0x66e4de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66e4e0:{NFSU2_TR(0x66e4e0);
if(r1(R+518)){{goto L66e570;}}
}
B66e4e6:L66e4e6:{c.instructions+=2;NFSU2_TR(0x66e4e6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66e4e7:{NFSU2_TR(0x66e4e7);
if(r1(R+518)){{goto L66e534;}}
}
B66e4e9:L66e4e9:{c.instructions+=2;NFSU2_TR(0x66e4e9);
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
B66e4ea:{NFSU2_TR(0x66e4ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e30bu);}goto L66e30b;}}
}
B66e4f0:L66e4f0:{c.instructions+=3;NFSU2_TR(0x66e4f0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66e4f2:{NFSU2_TR(0x66e4f2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e4f4:{NFSU2_TR(0x66e4f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e5aa;}}
}
B66e4fa:L66e4fa:{c.instructions+=1;NFSU2_TR(0x66e4fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e4fd:L66e4fd:{c.instructions+=3;NFSU2_TR(0x66e4fd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66e4ff:{NFSU2_TR(0x66e4ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e502:{NFSU2_TR(0x66e502);
if(r1(R+518)){{goto L66e5aa;}}
}
B66e508:L66e508:{c.instructions+=2;NFSU2_TR(0x66e508);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e50a:{NFSU2_TR(0x66e50a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e524;}}
}
B66e50c:L66e50c:{c.instructions+=2;NFSU2_TR(0x66e50c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e510:{NFSU2_TR(0x66e510);
if(r1(R+518)){{goto L66e524;}}
}
B66e512:L66e512:{c.instructions+=8;NFSU2_TR(0x66e512);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66e514:{NFSU2_TR(0x66e514);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B66e517:{NFSU2_TR(0x66e517);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e51a:{NFSU2_TR(0x66e51a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66e51c:{NFSU2_TR(0x66e51c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66e51f:{NFSU2_TR(0x66e51f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66e520:{NFSU2_TR(0x66e520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B66e522:{NFSU2_TR(0x66e522);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e50cu);}goto L66e50c;}}
}
B66e524:L66e524:{c.instructions+=7;NFSU2_TR(0x66e524);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e526:{NFSU2_TR(0x66e526);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66e527:{NFSU2_TR(0x66e527);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B66e529:{NFSU2_TR(0x66e529);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66e52a:{NFSU2_TR(0x66e52a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B66e52d:{NFSU2_TR(0x66e52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66e530:{NFSU2_TR(0x66e530);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e4fdu);}goto L66e4fd;}}
}
B66e532:L66e532:{c.instructions+=1;NFSU2_TR(0x66e532);
{goto L66e5aa;}
}
B66e534:L66e534:{c.instructions+=3;NFSU2_TR(0x66e534);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66e536:{NFSU2_TR(0x66e536);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e538:{NFSU2_TR(0x66e538);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e5aa;}}
}
B66e53a:L66e53a:{c.instructions+=1;NFSU2_TR(0x66e53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e53d:L66e53d:{c.instructions+=3;NFSU2_TR(0x66e53d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66e53f:{NFSU2_TR(0x66e53f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e542:{NFSU2_TR(0x66e542);
if(r1(R+518)){{goto L66e5aa;}}
}
B66e544:L66e544:{c.instructions+=2;NFSU2_TR(0x66e544);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e546:{NFSU2_TR(0x66e546);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e560;}}
}
B66e548:L66e548:{c.instructions+=2;NFSU2_TR(0x66e548);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e54c:{NFSU2_TR(0x66e54c);
if(r1(R+518)){{goto L66e560;}}
}
B66e54e:L66e54e:{c.instructions+=8;NFSU2_TR(0x66e54e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B66e550:{NFSU2_TR(0x66e550);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B66e553:{NFSU2_TR(0x66e553);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e556:{NFSU2_TR(0x66e556);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66e558:{NFSU2_TR(0x66e558);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66e55b:{NFSU2_TR(0x66e55b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66e55c:{NFSU2_TR(0x66e55c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B66e55e:{NFSU2_TR(0x66e55e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e548u);}goto L66e548;}}
}
B66e560:L66e560:{c.instructions+=7;NFSU2_TR(0x66e560);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e562:{NFSU2_TR(0x66e562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66e563:{NFSU2_TR(0x66e563);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B66e565:{NFSU2_TR(0x66e565);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66e566:{NFSU2_TR(0x66e566);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B66e569:{NFSU2_TR(0x66e569);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66e56c:{NFSU2_TR(0x66e56c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e53du);}goto L66e53d;}}
}
B66e56e:L66e56e:{c.instructions+=1;NFSU2_TR(0x66e56e);
{goto L66e5aa;}
}
B66e570:L66e570:{c.instructions+=3;NFSU2_TR(0x66e570);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66e572:{NFSU2_TR(0x66e572);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e574:{NFSU2_TR(0x66e574);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e5aa;}}
}
B66e576:L66e576:{c.instructions+=1;NFSU2_TR(0x66e576);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e579:L66e579:{c.instructions+=3;NFSU2_TR(0x66e579);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66e57b:{NFSU2_TR(0x66e57b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e57e:{NFSU2_TR(0x66e57e);
if(r1(R+518)){{goto L66e5aa;}}
}
B66e580:L66e580:{c.instructions+=2;NFSU2_TR(0x66e580);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e582:{NFSU2_TR(0x66e582);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e59c;}}
}
B66e584:L66e584:{c.instructions+=2;NFSU2_TR(0x66e584);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e588:{NFSU2_TR(0x66e588);
if(r1(R+518)){{goto L66e59c;}}
}
B66e58a:L66e58a:{c.instructions+=8;NFSU2_TR(0x66e58a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B66e58c:{NFSU2_TR(0x66e58c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B66e58f:{NFSU2_TR(0x66e58f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e592:{NFSU2_TR(0x66e592);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66e594:{NFSU2_TR(0x66e594);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66e597:{NFSU2_TR(0x66e597);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66e598:{NFSU2_TR(0x66e598);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B66e59a:{NFSU2_TR(0x66e59a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e584u);}goto L66e584;}}
}
B66e59c:L66e59c:{c.instructions+=7;NFSU2_TR(0x66e59c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e59e:{NFSU2_TR(0x66e59e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66e59f:{NFSU2_TR(0x66e59f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B66e5a1:{NFSU2_TR(0x66e5a1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66e5a2:{NFSU2_TR(0x66e5a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B66e5a5:{NFSU2_TR(0x66e5a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66e5a8:{NFSU2_TR(0x66e5a8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e579u);}goto L66e579;}}
}
B66e5aa:L66e5aa:{c.instructions+=3;NFSU2_TR(0x66e5aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66e5ad:{NFSU2_TR(0x66e5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e5b0:{NFSU2_TR(0x66e5b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e5b5ull));
TAIL_STATIC(0x66055cu,660);
}
B66e5b5:L66e5b5:{c.instructions+=1;NFSU2_TR(0x66e5b5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e310u);}goto L66e310;}
}
B66e5ba:L66e5ba:{c.instructions+=7;NFSU2_TR(0x66e5ba);
__builtin_memmove((R+28),(R+28),4);
}
B66e5bc:{NFSU2_TR(0x66e5bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e5bd:{NFSU2_TR(0x66e5bd);
__builtin_memmove((R+20),(R+16),4);
}
B66e5bf:{NFSU2_TR(0x66e5bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B66e5c2:{NFSU2_TR(0x66e5c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e5c6:{NFSU2_TR(0x66e5c6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66e5ca:{NFSU2_TR(0x66e5ca);
if(r1(R+518)){{goto L66e627;}}
}
B66e5cc:L66e5cc:{c.instructions+=4;NFSU2_TR(0x66e5cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e5cd:{NFSU2_TR(0x66e5cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66e5d0:{NFSU2_TR(0x66e5d0);
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
B66e5d2:{NFSU2_TR(0x66e5d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e5dd;}}
}
B66e5d4:L66e5d4:{c.instructions+=2;NFSU2_TR(0x66e5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66e5db:{NFSU2_TR(0x66e5db);
{goto L66e626;}
}
B66e5dd:L66e5dd:{c.instructions+=8;NFSU2_TR(0x66e5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e5e0:{NFSU2_TR(0x66e5e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e5e1:{NFSU2_TR(0x66e5e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e5e3:{NFSU2_TR(0x66e5e3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66e5e5:{NFSU2_TR(0x66e5e5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66e5e6:{NFSU2_TR(0x66e5e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e5e7:{NFSU2_TR(0x66e5e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66e5ea:{NFSU2_TR(0x66e5ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e5efull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66e5ef:L66e5ef:{c.instructions+=2;NFSU2_TR(0x66e5ef);
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
B66e5f1:{NFSU2_TR(0x66e5f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e5fc;}}
}
B66e5f3:L66e5f3:{c.instructions+=2;NFSU2_TR(0x66e5f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66e5fa:{NFSU2_TR(0x66e5fa);
{goto L66e625;}
}
B66e5fc:L66e5fc:{c.instructions+=5;NFSU2_TR(0x66e5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e5ff:{NFSU2_TR(0x66e5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e602:{NFSU2_TR(0x66e602);
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
B66e604:{NFSU2_TR(0x66e604);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e605:{NFSU2_TR(0x66e605);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66e61d;}}
}
B66e607:L66e607:{c.instructions+=2;NFSU2_TR(0x66e607);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e609:{NFSU2_TR(0x66e609);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L66e7bc;}}
}
B66e60f:L66e60f:{c.instructions+=2;NFSU2_TR(0x66e60f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e612:{NFSU2_TR(0x66e612);
if(r1(R+518)){{goto L66e62e;}}
}
B66e614:L66e614:{c.instructions+=2;NFSU2_TR(0x66e614);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B66e617:{NFSU2_TR(0x66e617);
if(r1(R+518)){{goto L66e7bc;}}
}
B66e61d:L66e61d:{c.instructions+=1;NFSU2_TR(0x66e61d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66e624:L66e624:{c.instructions+=1;NFSU2_TR(0x66e624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66e625:L66e625:{c.instructions+=1;NFSU2_TR(0x66e625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66e626:L66e626:{c.instructions+=1;NFSU2_TR(0x66e626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66e627:L66e627:{c.instructions+=3;NFSU2_TR(0x66e627);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e62a:{NFSU2_TR(0x66e62a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66e62b:{NFSU2_TR(0x66e62b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66e62e:L66e62e:{c.instructions+=3;NFSU2_TR(0x66e62e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66e631:{NFSU2_TR(0x66e631);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e633:{NFSU2_TR(0x66e633);
if(r1(R+518)){{goto L66e63b;}}
}
B66e635:L66e635:{c.instructions+=2;NFSU2_TR(0x66e635);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e639:{NFSU2_TR(0x66e639);
if(r1(R+518)){{goto L66e63d;}}
}
B66e63b:L66e63b:{c.instructions+=1;NFSU2_TR(0x66e63b);
__builtin_memmove((R+24),(R+28),4);
}
B66e63d:L66e63d:{c.instructions+=8;NFSU2_TR(0x66e63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66e640:{NFSU2_TR(0x66e640);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e643:{NFSU2_TR(0x66e643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66e645:{NFSU2_TR(0x66e645);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66e646:{NFSU2_TR(0x66e646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66e648:{NFSU2_TR(0x66e648);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e64b:{NFSU2_TR(0x66e64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e64e:{NFSU2_TR(0x66e64e);
if(r1(R+518)){{goto L66e750;}}
}
B66e654:L66e654:{c.instructions+=2;NFSU2_TR(0x66e654);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66e655:{NFSU2_TR(0x66e655);
if(r1(R+518)){{goto L66e6e4;}}
}
B66e65b:L66e65b:{c.instructions+=2;NFSU2_TR(0x66e65b);
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
B66e65c:{NFSU2_TR(0x66e65c);
if(r1(R+518)){{goto L66e667;}}
}
B66e65e:L66e65e:{c.instructions+=2;NFSU2_TR(0x66e65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66e665:{NFSU2_TR(0x66e665);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}
}
B66e667:L66e667:{c.instructions+=2;NFSU2_TR(0x66e667);
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
B66e669:{NFSU2_TR(0x66e669);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}}
}
B66e66b:L66e66b:{c.instructions+=4;NFSU2_TR(0x66e66b);
__builtin_memmove((R+4),(R+8),4);
}
B66e66d:{NFSU2_TR(0x66e66d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66e670:{NFSU2_TR(0x66e670);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66e673:{NFSU2_TR(0x66e673);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e676:L66e676:{c.instructions+=2;NFSU2_TR(0x66e676);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e678:{NFSU2_TR(0x66e678);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e6d3;}}
}
B66e67a:L66e67a:{c.instructions+=5;NFSU2_TR(0x66e67a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e67d:{NFSU2_TR(0x66e67d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e680:{NFSU2_TR(0x66e680);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e683:{NFSU2_TR(0x66e683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e686:{NFSU2_TR(0x66e686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e689:L66e689:{c.instructions+=2;NFSU2_TR(0x66e689);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e68b:{NFSU2_TR(0x66e68b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e6c6;}}
}
B66e68d:L66e68d:{c.instructions+=6;NFSU2_TR(0x66e68d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e690:{NFSU2_TR(0x66e690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66e693:{NFSU2_TR(0x66e693);
__builtin_memmove((R+28),(R+8),4);
}
B66e695:{NFSU2_TR(0x66e695);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B66e698:{NFSU2_TR(0x66e698);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e69b:{NFSU2_TR(0x66e69b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e69e:L66e69e:{c.instructions+=7;NFSU2_TR(0x66e69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e6a1:{NFSU2_TR(0x66e6a1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e6a3:{NFSU2_TR(0x66e6a3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e6a9:{NFSU2_TR(0x66e6a9);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B66e6ab:{NFSU2_TR(0x66e6ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66e6ad:{NFSU2_TR(0x66e6ad);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66e6b0:{NFSU2_TR(0x66e6b0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L66e6b7;}}
}
B66e6b2:L66e6b2:{c.instructions+=3;NFSU2_TR(0x66e6b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66e6b4:{NFSU2_TR(0x66e6b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66e6b5:{NFSU2_TR(0x66e6b5);
{goto L66e6b9;}
}
B66e6b7:L66e6b7:{c.instructions+=1;NFSU2_TR(0x66e6b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66e6b9:L66e6b9:{c.instructions+=5;NFSU2_TR(0x66e6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e6bd:{NFSU2_TR(0x66e6bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B66e6bf:{NFSU2_TR(0x66e6bf);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B66e6c1:{NFSU2_TR(0x66e6c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e6c4:{NFSU2_TR(0x66e6c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e69eu);}goto L66e69e;}}
}
B66e6c6:L66e6c6:{c.instructions+=4;NFSU2_TR(0x66e6c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e6ca:{NFSU2_TR(0x66e6ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e6ce:{NFSU2_TR(0x66e6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e6d1:{NFSU2_TR(0x66e6d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e689u);}goto L66e689;}}
}
B66e6d3:L66e6d3:{c.instructions+=4;NFSU2_TR(0x66e6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e6d7:{NFSU2_TR(0x66e6d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e6da:{NFSU2_TR(0x66e6da);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66e6dd:{NFSU2_TR(0x66e6dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e676u);}goto L66e676;}}
}
B66e6df:L66e6df:{c.instructions+=1;NFSU2_TR(0x66e6df);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}
}
B66e6e4:L66e6e4:{c.instructions+=2;NFSU2_TR(0x66e6e4);
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
B66e6e6:{NFSU2_TR(0x66e6e6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}}
}
B66e6ec:L66e6ec:{c.instructions+=4;NFSU2_TR(0x66e6ec);
__builtin_memmove((R+0),(R+8),4);
}
B66e6ee:{NFSU2_TR(0x66e6ee);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66e6f1:{NFSU2_TR(0x66e6f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66e6f4:{NFSU2_TR(0x66e6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e6f7:L66e6f7:{c.instructions+=2;NFSU2_TR(0x66e6f7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e6f9:{NFSU2_TR(0x66e6f9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e73f;}}
}
B66e6fb:L66e6fb:{c.instructions+=5;NFSU2_TR(0x66e6fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e6fe:{NFSU2_TR(0x66e6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e701:{NFSU2_TR(0x66e701);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e704:{NFSU2_TR(0x66e704);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e707:{NFSU2_TR(0x66e707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e70a:L66e70a:{c.instructions+=2;NFSU2_TR(0x66e70a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e70c:{NFSU2_TR(0x66e70c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e732;}}
}
B66e70e:L66e70e:{c.instructions+=5;NFSU2_TR(0x66e70e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66e711:{NFSU2_TR(0x66e711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66e714:{NFSU2_TR(0x66e714);
__builtin_memmove((R+4),(R+8),4);
}
B66e716:{NFSU2_TR(0x66e716);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66e719:{NFSU2_TR(0x66e719);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e71c:L66e71c:{c.instructions+=8;NFSU2_TR(0x66e71c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66e71e:{NFSU2_TR(0x66e71e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66e720:{NFSU2_TR(0x66e720);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B66e723:{NFSU2_TR(0x66e723);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66e726:{NFSU2_TR(0x66e726);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66e728:{NFSU2_TR(0x66e728);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B66e72a:{NFSU2_TR(0x66e72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e72d:{NFSU2_TR(0x66e72d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e71cu);}goto L66e71c;}}
}
B66e72f:L66e72f:{c.instructions+=1;NFSU2_TR(0x66e72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66e732:L66e732:{c.instructions+=4;NFSU2_TR(0x66e732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e736:{NFSU2_TR(0x66e736);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e73a:{NFSU2_TR(0x66e73a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e73d:{NFSU2_TR(0x66e73d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e70au);}goto L66e70a;}}
}
B66e73f:L66e73f:{c.instructions+=4;NFSU2_TR(0x66e73f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e743:{NFSU2_TR(0x66e743);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e746:{NFSU2_TR(0x66e746);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66e749:{NFSU2_TR(0x66e749);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e6f7u);}goto L66e6f7;}}
}
B66e74b:L66e74b:{c.instructions+=1;NFSU2_TR(0x66e74b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}
}
B66e750:L66e750:{c.instructions+=2;NFSU2_TR(0x66e750);
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
B66e752:{NFSU2_TR(0x66e752);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}}
}
B66e758:L66e758:{c.instructions+=4;NFSU2_TR(0x66e758);
__builtin_memmove((R+0),(R+8),4);
}
B66e75a:{NFSU2_TR(0x66e75a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66e75d:{NFSU2_TR(0x66e75d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66e760:{NFSU2_TR(0x66e760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e763:L66e763:{c.instructions+=2;NFSU2_TR(0x66e763);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e765:{NFSU2_TR(0x66e765);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e7ab;}}
}
B66e767:L66e767:{c.instructions+=5;NFSU2_TR(0x66e767);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e76a:{NFSU2_TR(0x66e76a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e76d:{NFSU2_TR(0x66e76d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e770:{NFSU2_TR(0x66e770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e773:{NFSU2_TR(0x66e773);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e776:L66e776:{c.instructions+=2;NFSU2_TR(0x66e776);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e778:{NFSU2_TR(0x66e778);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e79e;}}
}
B66e77a:L66e77a:{c.instructions+=5;NFSU2_TR(0x66e77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66e77d:{NFSU2_TR(0x66e77d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66e780:{NFSU2_TR(0x66e780);
__builtin_memmove((R+4),(R+8),4);
}
B66e782:{NFSU2_TR(0x66e782);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66e785:{NFSU2_TR(0x66e785);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e788:L66e788:{c.instructions+=8;NFSU2_TR(0x66e788);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66e78a:{NFSU2_TR(0x66e78a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66e78c:{NFSU2_TR(0x66e78c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B66e78f:{NFSU2_TR(0x66e78f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66e792:{NFSU2_TR(0x66e792);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66e794:{NFSU2_TR(0x66e794);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B66e796:{NFSU2_TR(0x66e796);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e799:{NFSU2_TR(0x66e799);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e788u);}goto L66e788;}}
}
B66e79b:L66e79b:{c.instructions+=1;NFSU2_TR(0x66e79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66e79e:L66e79e:{c.instructions+=4;NFSU2_TR(0x66e79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e7a2:{NFSU2_TR(0x66e7a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e7a6:{NFSU2_TR(0x66e7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e7a9:{NFSU2_TR(0x66e7a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e776u);}goto L66e776;}}
}
B66e7ab:L66e7ab:{c.instructions+=4;NFSU2_TR(0x66e7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e7af:{NFSU2_TR(0x66e7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e7b2:{NFSU2_TR(0x66e7b2);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66e7b5:{NFSU2_TR(0x66e7b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e763u);}goto L66e763;}}
}
B66e7b7:L66e7b7:{c.instructions+=1;NFSU2_TR(0x66e7b7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}
}
B66e7bc:L66e7bc:{c.instructions+=3;NFSU2_TR(0x66e7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66e7bf:{NFSU2_TR(0x66e7bf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e7c1:{NFSU2_TR(0x66e7c1);
if(r1(R+518)){{goto L66e7c9;}}
}
B66e7c3:L66e7c3:{c.instructions+=2;NFSU2_TR(0x66e7c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e7c7:{NFSU2_TR(0x66e7c7);
if(r1(R+518)){{goto L66e7cb;}}
}
B66e7c9:L66e7c9:{c.instructions+=1;NFSU2_TR(0x66e7c9);
__builtin_memmove((R+24),(R+28),4);
}
B66e7cb:L66e7cb:{c.instructions+=5;NFSU2_TR(0x66e7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66e7ce:{NFSU2_TR(0x66e7ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66e7d0:{NFSU2_TR(0x66e7d0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66e7d1:{NFSU2_TR(0x66e7d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e7d3:{NFSU2_TR(0x66e7d3);
if(r1(R+518)){{goto L66e862;}}
}
B66e7d9:L66e7d9:{c.instructions+=2;NFSU2_TR(0x66e7d9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66e7da:{NFSU2_TR(0x66e7da);
if(r1(R+518)){{goto L66e82b;}}
}
B66e7dc:L66e7dc:{c.instructions+=2;NFSU2_TR(0x66e7dc);
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
B66e7dd:{NFSU2_TR(0x66e7dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e61du);}goto L66e61d;}}
}
B66e7e3:L66e7e3:{c.instructions+=2;NFSU2_TR(0x66e7e3);
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
B66e7e5:{NFSU2_TR(0x66e7e5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}}
}
B66e7eb:L66e7eb:{c.instructions+=5;NFSU2_TR(0x66e7eb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e7ed:{NFSU2_TR(0x66e7ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66e7ee:{NFSU2_TR(0x66e7ee);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B66e7f0:{NFSU2_TR(0x66e7f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66e7f3:{NFSU2_TR(0x66e7f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e7f6:L66e7f6:{c.instructions+=2;NFSU2_TR(0x66e7f6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e7f8:{NFSU2_TR(0x66e7f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e81f;}}
}
B66e7fa:L66e7fa:{c.instructions+=1;NFSU2_TR(0x66e7fa);
__builtin_memmove((R+24),(R+28),4);
}
B66e7fc:L66e7fc:{c.instructions+=6;NFSU2_TR(0x66e7fc);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e7fe:{NFSU2_TR(0x66e7fe);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66e804:{NFSU2_TR(0x66e804);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B66e806:{NFSU2_TR(0x66e806);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66e808:{NFSU2_TR(0x66e808);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66e80b:{NFSU2_TR(0x66e80b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L66e812;}}
}
B66e80d:L66e80d:{c.instructions+=3;NFSU2_TR(0x66e80d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66e80f:{NFSU2_TR(0x66e80f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66e810:{NFSU2_TR(0x66e810);
{goto L66e814;}
}
B66e812:L66e812:{c.instructions+=1;NFSU2_TR(0x66e812);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66e814:L66e814:{c.instructions+=5;NFSU2_TR(0x66e814);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66e816:{NFSU2_TR(0x66e816);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B66e819:{NFSU2_TR(0x66e819);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B66e81c:{NFSU2_TR(0x66e81c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B66e81d:{NFSU2_TR(0x66e81d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e7fcu);}goto L66e7fc;}}
}
B66e81f:L66e81f:{c.instructions+=3;NFSU2_TR(0x66e81f);
w1(R+512,carry<u32>(r4(R+8),r4(R+4)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B66e821:{NFSU2_TR(0x66e821);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66e824:{NFSU2_TR(0x66e824);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e7f6u);}goto L66e7f6;}}
}
B66e826:L66e826:{c.instructions+=1;NFSU2_TR(0x66e826);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}
}
B66e82b:L66e82b:{c.instructions+=2;NFSU2_TR(0x66e82b);
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
B66e82d:{NFSU2_TR(0x66e82d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}}
}
B66e833:L66e833:{c.instructions+=5;NFSU2_TR(0x66e833);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e835:{NFSU2_TR(0x66e835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66e836:{NFSU2_TR(0x66e836);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B66e838:{NFSU2_TR(0x66e838);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66e83b:{NFSU2_TR(0x66e83b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e83e:L66e83e:{c.instructions+=2;NFSU2_TR(0x66e83e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e840:{NFSU2_TR(0x66e840);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e856;}}
}
B66e842:L66e842:{c.instructions+=1;NFSU2_TR(0x66e842);
__builtin_memmove((R+24),(R+28),4);
}
B66e844:L66e844:{c.instructions+=8;NFSU2_TR(0x66e844);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66e846:{NFSU2_TR(0x66e846);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66e848:{NFSU2_TR(0x66e848);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B66e84b:{NFSU2_TR(0x66e84b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B66e84e:{NFSU2_TR(0x66e84e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66e850:{NFSU2_TR(0x66e850);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B66e853:{NFSU2_TR(0x66e853);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B66e854:{NFSU2_TR(0x66e854);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e844u);}goto L66e844;}}
}
B66e856:L66e856:{c.instructions+=3;NFSU2_TR(0x66e856);
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B66e858:{NFSU2_TR(0x66e858);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66e85b:{NFSU2_TR(0x66e85b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e83eu);}goto L66e83e;}}
}
B66e85d:L66e85d:{c.instructions+=1;NFSU2_TR(0x66e85d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}
}
B66e862:L66e862:{c.instructions+=2;NFSU2_TR(0x66e862);
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
B66e864:{NFSU2_TR(0x66e864);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}}
}
B66e86a:L66e86a:{c.instructions+=5;NFSU2_TR(0x66e86a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e86c:{NFSU2_TR(0x66e86c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66e86d:{NFSU2_TR(0x66e86d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B66e86f:{NFSU2_TR(0x66e86f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66e872:{NFSU2_TR(0x66e872);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e875:L66e875:{c.instructions+=2;NFSU2_TR(0x66e875);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e877:{NFSU2_TR(0x66e877);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e88d;}}
}
B66e879:L66e879:{c.instructions+=1;NFSU2_TR(0x66e879);
__builtin_memmove((R+24),(R+28),4);
}
B66e87b:L66e87b:{c.instructions+=8;NFSU2_TR(0x66e87b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66e87d:{NFSU2_TR(0x66e87d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66e87f:{NFSU2_TR(0x66e87f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B66e882:{NFSU2_TR(0x66e882);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B66e885:{NFSU2_TR(0x66e885);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66e887:{NFSU2_TR(0x66e887);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B66e88a:{NFSU2_TR(0x66e88a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B66e88b:{NFSU2_TR(0x66e88b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e87bu);}goto L66e87b;}}
}
B66e88d:L66e88d:{c.instructions+=3;NFSU2_TR(0x66e88d);
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B66e88f:{NFSU2_TR(0x66e88f);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66e892:{NFSU2_TR(0x66e892);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e875u);}goto L66e875;}}
}
B66e894:L66e894:{c.instructions+=1;NFSU2_TR(0x66e894);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e624u);}goto L66e624;}
}
B66e899:L66e899:{c.instructions+=14;NFSU2_TR(0x66e899);
__builtin_memmove((R+28),(R+28),4);
}
B66e89b:{NFSU2_TR(0x66e89b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e89c:{NFSU2_TR(0x66e89c);
__builtin_memmove((R+20),(R+16),4);
}
B66e89e:{NFSU2_TR(0x66e89e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B66e8a1:{NFSU2_TR(0x66e8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e8a4:{NFSU2_TR(0x66e8a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e8a5:{NFSU2_TR(0x66e8a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e8a6:{NFSU2_TR(0x66e8a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e8a7:{NFSU2_TR(0x66e8a7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66e8a9:{NFSU2_TR(0x66e8a9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e8ab:{NFSU2_TR(0x66e8ab);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66e8ac:{NFSU2_TR(0x66e8ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66e8ae:{NFSU2_TR(0x66e8ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66e8af:{NFSU2_TR(0x66e8af);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66e8b8;}}
}
B66e8b1:L66e8b1:{c.instructions+=3;NFSU2_TR(0x66e8b1);
w4(R+4,u32(~u32(r4(R+4))));
}
B66e8b3:{NFSU2_TR(0x66e8b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e8b6:{NFSU2_TR(0x66e8b6);
{goto L66e8ee;}
}
B66e8b8:L66e8b8:{c.instructions+=18;NFSU2_TR(0x66e8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e8bb:{NFSU2_TR(0x66e8bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66e8be:{NFSU2_TR(0x66e8be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
}
B66e8c3:{NFSU2_TR(0x66e8c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e8c5:{NFSU2_TR(0x66e8c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e8c9:{NFSU2_TR(0x66e8c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e8cb:{NFSU2_TR(0x66e8cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B66e8cd:{NFSU2_TR(0x66e8cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e8cf:{NFSU2_TR(0x66e8cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e8d2:{NFSU2_TR(0x66e8d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e8d4:{NFSU2_TR(0x66e8d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e8d5:{NFSU2_TR(0x66e8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e8d8:{NFSU2_TR(0x66e8d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66e8da:{NFSU2_TR(0x66e8da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e8db:{NFSU2_TR(0x66e8db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e8dc:{NFSU2_TR(0x66e8dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e8df:{NFSU2_TR(0x66e8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e8e2:{NFSU2_TR(0x66e8e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e8e7ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66e8e7:L66e8e7:{c.instructions+=3;NFSU2_TR(0x66e8e7);
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
B66e8e9:{NFSU2_TR(0x66e8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e8ec:{NFSU2_TR(0x66e8ec);
if(r1(R+518)){{goto L66e92c;}}
}
B66e8ee:L66e8ee:{c.instructions+=3;NFSU2_TR(0x66e8ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e8f1:{NFSU2_TR(0x66e8f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e8f5:{NFSU2_TR(0x66e8f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66e90a;}}
}
B66e8f7:L66e8f7:{c.instructions+=6;NFSU2_TR(0x66e8f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66e8fa:{NFSU2_TR(0x66e8fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e8fd:{NFSU2_TR(0x66e8fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66e900:{NFSU2_TR(0x66e900);
w4(R+0,u32(~u32(r4(R+0))));
}
B66e902:{NFSU2_TR(0x66e902);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66e903:{NFSU2_TR(0x66e903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66e908ull));
TAIL_STATIC(0x6662a8u,666);
}
B66e908:L66e908:{c.instructions+=1;NFSU2_TR(0x66e908);
{goto L66e931;}
}
B66e90a:L66e90a:{c.instructions+=5;NFSU2_TR(0x66e90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66e90d:{NFSU2_TR(0x66e90d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e910:{NFSU2_TR(0x66e910);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e913:{NFSU2_TR(0x66e913);
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
B66e915:{NFSU2_TR(0x66e915);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66e92c;}}
}
B66e917:L66e917:{c.instructions+=2;NFSU2_TR(0x66e917);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e919:{NFSU2_TR(0x66e919);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L66eaf2;}}
}
B66e91f:L66e91f:{c.instructions+=2;NFSU2_TR(0x66e91f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66e921:{NFSU2_TR(0x66e921);
if(r1(R+518)){{goto L66e938;}}
}
B66e923:L66e923:{c.instructions+=2;NFSU2_TR(0x66e923);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B66e926:{NFSU2_TR(0x66e926);
if(r1(R+518)){{goto L66eaf2;}}
}
B66e92c:L66e92c:{c.instructions+=1;NFSU2_TR(0x66e92c);
w4(R+0,u32(0x8876086cull));
}
B66e931:L66e931:{c.instructions+=5;NFSU2_TR(0x66e931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66e932:{NFSU2_TR(0x66e932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66e933:{NFSU2_TR(0x66e933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66e934:{NFSU2_TR(0x66e934);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66e935:{NFSU2_TR(0x66e935);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66e938:L66e938:{c.instructions+=7;NFSU2_TR(0x66e938);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e93b:{NFSU2_TR(0x66e93b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e93d:{NFSU2_TR(0x66e93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e940:{NFSU2_TR(0x66e940);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66e943:{NFSU2_TR(0x66e943);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e946:{NFSU2_TR(0x66e946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e949:{NFSU2_TR(0x66e949);
if(r1(R+518)){{goto L66e951;}}
}
B66e94b:L66e94b:{c.instructions+=2;NFSU2_TR(0x66e94b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e94f:{NFSU2_TR(0x66e94f);
if(r1(R+518)){{goto L66e954;}}
}
B66e951:L66e951:{c.instructions+=1;NFSU2_TR(0x66e951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e954:L66e954:{c.instructions+=5;NFSU2_TR(0x66e954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66e956:{NFSU2_TR(0x66e956);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66e957:{NFSU2_TR(0x66e957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B66e959:{NFSU2_TR(0x66e959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66e95c:{NFSU2_TR(0x66e95c);
if(r1(R+518)){{goto L66ea6a;}}
}
B66e962:L66e962:{c.instructions+=2;NFSU2_TR(0x66e962);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66e963:{NFSU2_TR(0x66e963);
if(r1(R+518)){{goto L66e9ed;}}
}
B66e969:L66e969:{c.instructions+=2;NFSU2_TR(0x66e969);
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
B66e96a:{NFSU2_TR(0x66e96a);
if(r1(R+518)){{goto L66e973;}}
}
B66e96c:L66e96c:{c.instructions+=2;NFSU2_TR(0x66e96c);
w4(R+0,u32(0x80004005ull));
}
B66e971:{NFSU2_TR(0x66e971);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e931u);}goto L66e931;}
}
B66e973:L66e973:{c.instructions+=3;NFSU2_TR(0x66e973);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e977:{NFSU2_TR(0x66e977);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e97b:{NFSU2_TR(0x66e97b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ebde;}}
}
B66e981:L66e981:{c.instructions+=1;NFSU2_TR(0x66e981);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e984:L66e984:{c.instructions+=2;NFSU2_TR(0x66e984);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e988:{NFSU2_TR(0x66e988);
if(r1(R+518)){{goto L66ebde;}}
}
B66e98e:L66e98e:{c.instructions+=3;NFSU2_TR(0x66e98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e992:{NFSU2_TR(0x66e992);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e994:{NFSU2_TR(0x66e994);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e9d2;}}
}
B66e996:L66e996:{c.instructions+=3;NFSU2_TR(0x66e996);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66e998:{NFSU2_TR(0x66e998);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66e99a:{NFSU2_TR(0x66e99a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66e9ca;}}
}
B66e99c:L66e99c:{c.instructions+=2;NFSU2_TR(0x66e99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e99f:{NFSU2_TR(0x66e99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66e9a2:L66e9a2:{c.instructions+=2;NFSU2_TR(0x66e9a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e9a6:{NFSU2_TR(0x66e9a6);
if(r1(R+518)){{goto L66e9c7;}}
}
B66e9a8:L66e9a8:{c.instructions+=12;NFSU2_TR(0x66e9a8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66e9aa:{NFSU2_TR(0x66e9aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e9ad:{NFSU2_TR(0x66e9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e9b0:{NFSU2_TR(0x66e9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66e9b3:{NFSU2_TR(0x66e9b3);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66e9b6:{NFSU2_TR(0x66e9b6);
__builtin_memmove((R+0),(R+28),4);
}
B66e9b8:{NFSU2_TR(0x66e9b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66e9bb:{NFSU2_TR(0x66e9bb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66e9bd:{NFSU2_TR(0x66e9bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e9c0:{NFSU2_TR(0x66e9c0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66e9c1:{NFSU2_TR(0x66e9c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B66e9c3:{NFSU2_TR(0x66e9c3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e9a2u);}goto L66e9a2;}}
}
B66e9c5:L66e9c5:{c.instructions+=1;NFSU2_TR(0x66e9c5);
{goto L66e9ca;}
}
B66e9c7:L66e9c7:{c.instructions+=1;NFSU2_TR(0x66e9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66e9ca:L66e9ca:{c.instructions+=3;NFSU2_TR(0x66e9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e9cd:{NFSU2_TR(0x66e9cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B66e9d0:{NFSU2_TR(0x66e9d0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e996u);}goto L66e996;}}
}
B66e9d2:L66e9d2:{c.instructions+=8;NFSU2_TR(0x66e9d2);
__builtin_memmove((R+4),(R+28),4);
}
B66e9d4:{NFSU2_TR(0x66e9d4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66e9d7:{NFSU2_TR(0x66e9d7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B66e9da:{NFSU2_TR(0x66e9da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e9dd:{NFSU2_TR(0x66e9dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B66e9e0:{NFSU2_TR(0x66e9e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66e9e3:{NFSU2_TR(0x66e9e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B66e9e6:{NFSU2_TR(0x66e9e6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e984u);}goto L66e984;}}
}
B66e9e8:L66e9e8:{c.instructions+=1;NFSU2_TR(0x66e9e8);
{goto L66ebde;}
}
B66e9ed:L66e9ed:{c.instructions+=3;NFSU2_TR(0x66e9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66e9f1:{NFSU2_TR(0x66e9f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66e9f5:{NFSU2_TR(0x66e9f5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ebde;}}
}
B66e9fb:L66e9fb:{c.instructions+=1;NFSU2_TR(0x66e9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66e9fe:L66e9fe:{c.instructions+=2;NFSU2_TR(0x66e9fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ea02:{NFSU2_TR(0x66ea02);
if(r1(R+518)){{goto L66ebde;}}
}
B66ea08:L66ea08:{c.instructions+=3;NFSU2_TR(0x66ea08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ea0c:{NFSU2_TR(0x66ea0c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ea0e:{NFSU2_TR(0x66ea0e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ea4f;}}
}
B66ea10:L66ea10:{c.instructions+=3;NFSU2_TR(0x66ea10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ea14:{NFSU2_TR(0x66ea14);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ea16:{NFSU2_TR(0x66ea16);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ea47;}}
}
B66ea18:L66ea18:{c.instructions+=2;NFSU2_TR(0x66ea18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ea1b:{NFSU2_TR(0x66ea1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66ea1e:L66ea1e:{c.instructions+=2;NFSU2_TR(0x66ea1e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ea22:{NFSU2_TR(0x66ea22);
if(r1(R+518)){{goto L66ea47;}}
}
B66ea24:L66ea24:{c.instructions+=13;NFSU2_TR(0x66ea24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ea27:{NFSU2_TR(0x66ea27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66ea2a:{NFSU2_TR(0x66ea2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ea2d:{NFSU2_TR(0x66ea2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ea30:{NFSU2_TR(0x66ea30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66ea33:{NFSU2_TR(0x66ea33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66ea35:{NFSU2_TR(0x66ea35);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66ea38:{NFSU2_TR(0x66ea38);
__builtin_memmove((R+0),(R+28),4);
}
B66ea3a:{NFSU2_TR(0x66ea3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66ea3d:{NFSU2_TR(0x66ea3d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66ea3f:{NFSU2_TR(0x66ea3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ea42:{NFSU2_TR(0x66ea42);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B66ea45:{NFSU2_TR(0x66ea45);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ea1eu);}goto L66ea1e;}}
}
B66ea47:L66ea47:{c.instructions+=3;NFSU2_TR(0x66ea47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ea4a:{NFSU2_TR(0x66ea4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B66ea4d:{NFSU2_TR(0x66ea4d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ea10u);}goto L66ea10;}}
}
B66ea4f:L66ea4f:{c.instructions+=8;NFSU2_TR(0x66ea4f);
__builtin_memmove((R+4),(R+28),4);
}
B66ea51:{NFSU2_TR(0x66ea51);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66ea54:{NFSU2_TR(0x66ea54);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B66ea57:{NFSU2_TR(0x66ea57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ea5a:{NFSU2_TR(0x66ea5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B66ea5d:{NFSU2_TR(0x66ea5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ea60:{NFSU2_TR(0x66ea60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B66ea63:{NFSU2_TR(0x66ea63);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e9feu);}goto L66e9fe;}}
}
B66ea65:L66ea65:{c.instructions+=1;NFSU2_TR(0x66ea65);
{goto L66ebde;}
}
B66ea6a:L66ea6a:{c.instructions+=3;NFSU2_TR(0x66ea6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ea6e:{NFSU2_TR(0x66ea6e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ea72:{NFSU2_TR(0x66ea72);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ebde;}}
}
B66ea78:L66ea78:{c.instructions+=1;NFSU2_TR(0x66ea78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ea7b:L66ea7b:{c.instructions+=2;NFSU2_TR(0x66ea7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ea7f:{NFSU2_TR(0x66ea7f);
if(r1(R+518)){{goto L66ebde;}}
}
B66ea85:L66ea85:{c.instructions+=3;NFSU2_TR(0x66ea85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ea89:{NFSU2_TR(0x66ea89);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ea8b:{NFSU2_TR(0x66ea8b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ead4;}}
}
B66ea8d:L66ea8d:{c.instructions+=3;NFSU2_TR(0x66ea8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ea91:{NFSU2_TR(0x66ea91);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ea93:{NFSU2_TR(0x66ea93);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66eacc;}}
}
B66ea95:L66ea95:{c.instructions+=2;NFSU2_TR(0x66ea95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ea98:{NFSU2_TR(0x66ea98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66ea9b:L66ea9b:{c.instructions+=2;NFSU2_TR(0x66ea9b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ea9f:{NFSU2_TR(0x66ea9f);
if(r1(R+518)){{goto L66eacc;}}
}
B66eaa1:L66eaa1:{c.instructions+=16;NFSU2_TR(0x66eaa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66eaa4:{NFSU2_TR(0x66eaa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66eaa7:{NFSU2_TR(0x66eaa7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66eaa9:{NFSU2_TR(0x66eaa9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66eaab:{NFSU2_TR(0x66eaab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66eaae:{NFSU2_TR(0x66eaae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66eab1:{NFSU2_TR(0x66eab1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B66eab4:{NFSU2_TR(0x66eab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66eab7:{NFSU2_TR(0x66eab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66eaba:{NFSU2_TR(0x66eaba);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66eabd:{NFSU2_TR(0x66eabd);
__builtin_memmove((R+0),(R+28),4);
}
B66eabf:{NFSU2_TR(0x66eabf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66eac2:{NFSU2_TR(0x66eac2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66eac4:{NFSU2_TR(0x66eac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66eac7:{NFSU2_TR(0x66eac7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B66eaca:{NFSU2_TR(0x66eaca);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ea9bu);}goto L66ea9b;}}
}
B66eacc:L66eacc:{c.instructions+=3;NFSU2_TR(0x66eacc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66eacf:{NFSU2_TR(0x66eacf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B66ead2:{NFSU2_TR(0x66ead2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ea8du);}goto L66ea8d;}}
}
B66ead4:L66ead4:{c.instructions+=9;NFSU2_TR(0x66ead4);
__builtin_memmove((R+4),(R+28),4);
}
B66ead6:{NFSU2_TR(0x66ead6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66ead9:{NFSU2_TR(0x66ead9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B66eadc:{NFSU2_TR(0x66eadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66eadf:{NFSU2_TR(0x66eadf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B66eae2:{NFSU2_TR(0x66eae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66eae5:{NFSU2_TR(0x66eae5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B66eae8:{NFSU2_TR(0x66eae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66eaeb:{NFSU2_TR(0x66eaeb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ea7bu);}goto L66ea7b;}}
}
B66eaed:L66eaed:{c.instructions+=1;NFSU2_TR(0x66eaed);
{goto L66ebde;}
}
B66eaf2:L66eaf2:{c.instructions+=4;NFSU2_TR(0x66eaf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66eaf5:{NFSU2_TR(0x66eaf5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66eaf7:{NFSU2_TR(0x66eaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66eafa:{NFSU2_TR(0x66eafa);
if(r1(R+518)){{goto L66eb02;}}
}
B66eafc:L66eafc:{c.instructions+=2;NFSU2_TR(0x66eafc);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66eb00:{NFSU2_TR(0x66eb00);
if(r1(R+518)){{goto L66eb07;}}
}
B66eb02:L66eb02:{c.instructions+=2;NFSU2_TR(0x66eb02);
__builtin_memmove((R+28),(R+24),4);
}
B66eb04:{NFSU2_TR(0x66eb04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66eb07:L66eb07:{c.instructions+=5;NFSU2_TR(0x66eb07);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66eb0a:{NFSU2_TR(0x66eb0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66eb0c:{NFSU2_TR(0x66eb0c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66eb0d:{NFSU2_TR(0x66eb0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66eb0f:{NFSU2_TR(0x66eb0f);
if(r1(R+518)){{goto L66eb9f;}}
}
B66eb15:L66eb15:{c.instructions+=2;NFSU2_TR(0x66eb15);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B66eb16:{NFSU2_TR(0x66eb16);
if(r1(R+518)){{goto L66eb63;}}
}
B66eb18:L66eb18:{c.instructions+=2;NFSU2_TR(0x66eb18);
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
B66eb19:{NFSU2_TR(0x66eb19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e92cu);}goto L66e92c;}}
}
B66eb1f:L66eb1f:{c.instructions+=3;NFSU2_TR(0x66eb1f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66eb21:{NFSU2_TR(0x66eb21);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66eb23:{NFSU2_TR(0x66eb23);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ebde;}}
}
B66eb29:L66eb29:{c.instructions+=1;NFSU2_TR(0x66eb29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66eb2c:L66eb2c:{c.instructions+=3;NFSU2_TR(0x66eb2c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66eb2e:{NFSU2_TR(0x66eb2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66eb31:{NFSU2_TR(0x66eb31);
if(r1(R+518)){{goto L66ebde;}}
}
B66eb37:L66eb37:{c.instructions+=2;NFSU2_TR(0x66eb37);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66eb39:{NFSU2_TR(0x66eb39);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66eb53;}}
}
B66eb3b:L66eb3b:{c.instructions+=2;NFSU2_TR(0x66eb3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66eb3f:{NFSU2_TR(0x66eb3f);
if(r1(R+518)){{goto L66eb53;}}
}
B66eb41:L66eb41:{c.instructions+=8;NFSU2_TR(0x66eb41);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66eb43:{NFSU2_TR(0x66eb43);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B66eb46:{NFSU2_TR(0x66eb46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66eb49:{NFSU2_TR(0x66eb49);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66eb4b:{NFSU2_TR(0x66eb4b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66eb4e:{NFSU2_TR(0x66eb4e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B66eb4f:{NFSU2_TR(0x66eb4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B66eb51:{NFSU2_TR(0x66eb51);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66eb3bu);}goto L66eb3b;}}
}
B66eb53:L66eb53:{c.instructions+=7;NFSU2_TR(0x66eb53);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66eb55:{NFSU2_TR(0x66eb55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B66eb56:{NFSU2_TR(0x66eb56);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B66eb58:{NFSU2_TR(0x66eb58);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66eb59:{NFSU2_TR(0x66eb59);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66eb5c:{NFSU2_TR(0x66eb5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66eb5f:{NFSU2_TR(0x66eb5f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66eb2cu);}goto L66eb2c;}}
}
B66eb61:L66eb61:{c.instructions+=1;NFSU2_TR(0x66eb61);
{goto L66ebde;}
}
B66eb63:L66eb63:{c.instructions+=3;NFSU2_TR(0x66eb63);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66eb65:{NFSU2_TR(0x66eb65);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66eb67:{NFSU2_TR(0x66eb67);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ebde;}}
}
B66eb69:L66eb69:{c.instructions+=1;NFSU2_TR(0x66eb69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66eb6c:L66eb6c:{c.instructions+=3;NFSU2_TR(0x66eb6c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66eb6e:{NFSU2_TR(0x66eb6e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66eb71:{NFSU2_TR(0x66eb71);
if(r1(R+518)){{goto L66ebde;}}
}
B66eb73:L66eb73:{c.instructions+=2;NFSU2_TR(0x66eb73);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66eb75:{NFSU2_TR(0x66eb75);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66eb8f;}}
}
B66eb77:L66eb77:{c.instructions+=2;NFSU2_TR(0x66eb77);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66eb7b:{NFSU2_TR(0x66eb7b);
if(r1(R+518)){{goto L66eb8f;}}
}
B66eb7d:L66eb7d:{c.instructions+=8;NFSU2_TR(0x66eb7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B66eb7f:{NFSU2_TR(0x66eb7f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B66eb82:{NFSU2_TR(0x66eb82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66eb85:{NFSU2_TR(0x66eb85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66eb87:{NFSU2_TR(0x66eb87);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66eb8a:{NFSU2_TR(0x66eb8a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B66eb8b:{NFSU2_TR(0x66eb8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B66eb8d:{NFSU2_TR(0x66eb8d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66eb77u);}goto L66eb77;}}
}
B66eb8f:L66eb8f:{c.instructions+=7;NFSU2_TR(0x66eb8f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66eb91:{NFSU2_TR(0x66eb91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B66eb92:{NFSU2_TR(0x66eb92);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B66eb94:{NFSU2_TR(0x66eb94);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66eb95:{NFSU2_TR(0x66eb95);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66eb98:{NFSU2_TR(0x66eb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66eb9b:{NFSU2_TR(0x66eb9b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66eb6cu);}goto L66eb6c;}}
}
B66eb9d:L66eb9d:{c.instructions+=1;NFSU2_TR(0x66eb9d);
{goto L66ebde;}
}
B66eb9f:L66eb9f:{c.instructions+=3;NFSU2_TR(0x66eb9f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66eba1:{NFSU2_TR(0x66eba1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66eba3:{NFSU2_TR(0x66eba3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ebde;}}
}
B66eba5:L66eba5:{c.instructions+=1;NFSU2_TR(0x66eba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66eba8:L66eba8:{c.instructions+=3;NFSU2_TR(0x66eba8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66ebaa:{NFSU2_TR(0x66ebaa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ebad:{NFSU2_TR(0x66ebad);
if(r1(R+518)){{goto L66ebde;}}
}
B66ebaf:L66ebaf:{c.instructions+=2;NFSU2_TR(0x66ebaf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ebb1:{NFSU2_TR(0x66ebb1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ebd0;}}
}
B66ebb3:L66ebb3:{c.instructions+=2;NFSU2_TR(0x66ebb3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ebb7:{NFSU2_TR(0x66ebb7);
if(r1(R+518)){{goto L66ebd0;}}
}
B66ebb9:L66ebb9:{c.instructions+=10;NFSU2_TR(0x66ebb9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66ebbb:{NFSU2_TR(0x66ebbb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66ebbd:{NFSU2_TR(0x66ebbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B66ebc0:{NFSU2_TR(0x66ebc0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B66ebc3:{NFSU2_TR(0x66ebc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ebc6:{NFSU2_TR(0x66ebc6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66ebc8:{NFSU2_TR(0x66ebc8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66ebcb:{NFSU2_TR(0x66ebcb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66ebcc:{NFSU2_TR(0x66ebcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B66ebce:{NFSU2_TR(0x66ebce);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ebb3u);}goto L66ebb3;}}
}
B66ebd0:L66ebd0:{c.instructions+=7;NFSU2_TR(0x66ebd0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ebd2:{NFSU2_TR(0x66ebd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66ebd3:{NFSU2_TR(0x66ebd3);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B66ebd5:{NFSU2_TR(0x66ebd5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66ebd6:{NFSU2_TR(0x66ebd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66ebd9:{NFSU2_TR(0x66ebd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66ebdc:{NFSU2_TR(0x66ebdc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66eba8u);}goto L66eba8;}}
}
B66ebde:L66ebde:{c.instructions+=3;NFSU2_TR(0x66ebde);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66ebe1:{NFSU2_TR(0x66ebe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ebe4:{NFSU2_TR(0x66ebe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ebe9ull));
TAIL_STATIC(0x66055cu,660);
}
B66ebe9:L66ebe9:{c.instructions+=1;NFSU2_TR(0x66ebe9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66e931u);}goto L66e931;}
}
B66ebee:L66ebee:{c.instructions+=7;NFSU2_TR(0x66ebee);
__builtin_memmove((R+28),(R+28),4);
}
B66ebf0:{NFSU2_TR(0x66ebf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ebf1:{NFSU2_TR(0x66ebf1);
__builtin_memmove((R+20),(R+16),4);
}
B66ebf3:{NFSU2_TR(0x66ebf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B66ebf6:{NFSU2_TR(0x66ebf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ebfa:{NFSU2_TR(0x66ebfa);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66ebfe:{NFSU2_TR(0x66ebfe);
if(r1(R+518)){{goto L66ec5a;}}
}
B66ec00:L66ec00:{c.instructions+=2;NFSU2_TR(0x66ec00);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66ec04:{NFSU2_TR(0x66ec04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66ec0f;}}
}
B66ec06:L66ec06:{c.instructions+=2;NFSU2_TR(0x66ec06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66ec0d:{NFSU2_TR(0x66ec0d);
{goto L66ec5a;}
}
B66ec0f:L66ec0f:{c.instructions+=8;NFSU2_TR(0x66ec0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ec12:{NFSU2_TR(0x66ec12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ec13:{NFSU2_TR(0x66ec13);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ec15:{NFSU2_TR(0x66ec15);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66ec17:{NFSU2_TR(0x66ec17);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66ec18:{NFSU2_TR(0x66ec18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ec19:{NFSU2_TR(0x66ec19);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66ec1c:{NFSU2_TR(0x66ec1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ec21ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66ec21:L66ec21:{c.instructions+=2;NFSU2_TR(0x66ec21);
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
B66ec23:{NFSU2_TR(0x66ec23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66ec2e;}}
}
B66ec25:L66ec25:{c.instructions+=2;NFSU2_TR(0x66ec25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66ec2c:{NFSU2_TR(0x66ec2c);
{goto L66ec59;}
}
B66ec2e:L66ec2e:{c.instructions+=6;NFSU2_TR(0x66ec2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ec31:{NFSU2_TR(0x66ec31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ec34:{NFSU2_TR(0x66ec34);
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
B66ec36:{NFSU2_TR(0x66ec36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ec37:{NFSU2_TR(0x66ec37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ec38:{NFSU2_TR(0x66ec38);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66ec50;}}
}
B66ec3a:L66ec3a:{c.instructions+=2;NFSU2_TR(0x66ec3a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ec3c:{NFSU2_TR(0x66ec3c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L66ede7;}}
}
B66ec42:L66ec42:{c.instructions+=2;NFSU2_TR(0x66ec42);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ec45:{NFSU2_TR(0x66ec45);
if(r1(R+518)){{goto L66ec61;}}
}
B66ec47:L66ec47:{c.instructions+=2;NFSU2_TR(0x66ec47);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B66ec4a:{NFSU2_TR(0x66ec4a);
if(r1(R+518)){{goto L66ede7;}}
}
B66ec50:L66ec50:{c.instructions+=1;NFSU2_TR(0x66ec50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66ec57:L66ec57:{c.instructions+=2;NFSU2_TR(0x66ec57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66ec58:{NFSU2_TR(0x66ec58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66ec59:L66ec59:{c.instructions+=1;NFSU2_TR(0x66ec59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66ec5a:L66ec5a:{c.instructions+=3;NFSU2_TR(0x66ec5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ec5d:{NFSU2_TR(0x66ec5d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66ec5e:{NFSU2_TR(0x66ec5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66ec61:L66ec61:{c.instructions+=3;NFSU2_TR(0x66ec61);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ec64:{NFSU2_TR(0x66ec64);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ec66:{NFSU2_TR(0x66ec66);
if(r1(R+518)){{goto L66ec6e;}}
}
B66ec68:L66ec68:{c.instructions+=2;NFSU2_TR(0x66ec68);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ec6c:{NFSU2_TR(0x66ec6c);
if(r1(R+518)){{goto L66ec70;}}
}
B66ec6e:L66ec6e:{c.instructions+=1;NFSU2_TR(0x66ec6e);
__builtin_memmove((R+8),(R+24),4);
}
B66ec70:L66ec70:{c.instructions+=8;NFSU2_TR(0x66ec70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66ec73:{NFSU2_TR(0x66ec73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66ec76:{NFSU2_TR(0x66ec76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66ec78:{NFSU2_TR(0x66ec78);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66ec79:{NFSU2_TR(0x66ec79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66ec7b:{NFSU2_TR(0x66ec7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ec7e:{NFSU2_TR(0x66ec7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ec81:{NFSU2_TR(0x66ec81);
if(r1(R+518)){{goto L66ed79;}}
}
B66ec87:L66ec87:{c.instructions+=2;NFSU2_TR(0x66ec87);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66ec88:{NFSU2_TR(0x66ec88);
if(r1(R+518)){{goto L66ed12;}}
}
B66ec8e:L66ec8e:{c.instructions+=2;NFSU2_TR(0x66ec8e);
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
B66ec8f:{NFSU2_TR(0x66ec8f);
if(r1(R+518)){{goto L66ec9a;}}
}
B66ec91:L66ec91:{c.instructions+=2;NFSU2_TR(0x66ec91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66ec98:{NFSU2_TR(0x66ec98);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}
}
B66ec9a:L66ec9a:{c.instructions+=2;NFSU2_TR(0x66ec9a);
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
B66ec9c:{NFSU2_TR(0x66ec9c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}}
}
B66ec9e:L66ec9e:{c.instructions+=4;NFSU2_TR(0x66ec9e);
__builtin_memmove((R+28),(R+24),4);
}
B66eca0:{NFSU2_TR(0x66eca0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B66eca3:{NFSU2_TR(0x66eca3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B66eca6:{NFSU2_TR(0x66eca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66eca9:L66eca9:{c.instructions+=2;NFSU2_TR(0x66eca9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ecab:{NFSU2_TR(0x66ecab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ed01;}}
}
B66ecad:L66ecad:{c.instructions+=5;NFSU2_TR(0x66ecad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ecb0:{NFSU2_TR(0x66ecb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ecb3:{NFSU2_TR(0x66ecb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ecb6:{NFSU2_TR(0x66ecb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ecb9:{NFSU2_TR(0x66ecb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ecbc:L66ecbc:{c.instructions+=2;NFSU2_TR(0x66ecbc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ecc0:{NFSU2_TR(0x66ecc0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ecf4;}}
}
B66ecc2:L66ecc2:{c.instructions+=8;NFSU2_TR(0x66ecc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ecc5:{NFSU2_TR(0x66ecc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ecc8:{NFSU2_TR(0x66ecc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66eccb:{NFSU2_TR(0x66eccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ecce:{NFSU2_TR(0x66ecce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ecd1:{NFSU2_TR(0x66ecd1);
__builtin_memmove((R+12),(R+24),4);
}
B66ecd3:{NFSU2_TR(0x66ecd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B66ecd6:{NFSU2_TR(0x66ecd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ecd9:L66ecd9:{c.instructions+=3;NFSU2_TR(0x66ecd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ecdc:{NFSU2_TR(0x66ecdc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66ecde:{NFSU2_TR(0x66ecde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ece3ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66ece3:L66ece3:{c.instructions+=6;NFSU2_TR(0x66ece3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ece6:{NFSU2_TR(0x66ece6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ecea:{NFSU2_TR(0x66ecea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B66eced:{NFSU2_TR(0x66eced);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ecf0:{NFSU2_TR(0x66ecf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66ecf2:{NFSU2_TR(0x66ecf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ecd9u);}goto L66ecd9;}}
}
B66ecf4:L66ecf4:{c.instructions+=4;NFSU2_TR(0x66ecf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ecf8:{NFSU2_TR(0x66ecf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ecfc:{NFSU2_TR(0x66ecfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ecff:{NFSU2_TR(0x66ecff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ecbcu);}goto L66ecbc;}}
}
B66ed01:L66ed01:{c.instructions+=4;NFSU2_TR(0x66ed01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ed05:{NFSU2_TR(0x66ed05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+28)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ed08:{NFSU2_TR(0x66ed08);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66ed0b:{NFSU2_TR(0x66ed0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66eca9u);}goto L66eca9;}}
}
B66ed0d:L66ed0d:{c.instructions+=1;NFSU2_TR(0x66ed0d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}
}
B66ed12:L66ed12:{c.instructions+=2;NFSU2_TR(0x66ed12);
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
B66ed14:{NFSU2_TR(0x66ed14);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}}
}
B66ed1a:L66ed1a:{c.instructions+=4;NFSU2_TR(0x66ed1a);
__builtin_memmove((R+0),(R+24),4);
}
B66ed1c:{NFSU2_TR(0x66ed1c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66ed1f:{NFSU2_TR(0x66ed1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66ed22:{NFSU2_TR(0x66ed22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ed25:L66ed25:{c.instructions+=2;NFSU2_TR(0x66ed25);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ed27:{NFSU2_TR(0x66ed27);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ed68;}}
}
B66ed29:L66ed29:{c.instructions+=5;NFSU2_TR(0x66ed29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ed2c:{NFSU2_TR(0x66ed2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ed2f:{NFSU2_TR(0x66ed2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ed32:{NFSU2_TR(0x66ed32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ed35:{NFSU2_TR(0x66ed35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ed38:L66ed38:{c.instructions+=2;NFSU2_TR(0x66ed38);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ed3a:{NFSU2_TR(0x66ed3a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ed5b;}}
}
B66ed3c:L66ed3c:{c.instructions+=5;NFSU2_TR(0x66ed3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ed3f:{NFSU2_TR(0x66ed3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66ed42:{NFSU2_TR(0x66ed42);
__builtin_memmove((R+4),(R+24),4);
}
B66ed44:{NFSU2_TR(0x66ed44);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66ed47:{NFSU2_TR(0x66ed47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ed4a:L66ed4a:{c.instructions+=6;NFSU2_TR(0x66ed4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B66ed4c:{NFSU2_TR(0x66ed4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66ed4e:{NFSU2_TR(0x66ed4e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B66ed51:{NFSU2_TR(0x66ed51);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B66ed53:{NFSU2_TR(0x66ed53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ed56:{NFSU2_TR(0x66ed56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ed4au);}goto L66ed4a;}}
}
B66ed58:L66ed58:{c.instructions+=1;NFSU2_TR(0x66ed58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66ed5b:L66ed5b:{c.instructions+=4;NFSU2_TR(0x66ed5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ed5f:{NFSU2_TR(0x66ed5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ed63:{NFSU2_TR(0x66ed63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ed66:{NFSU2_TR(0x66ed66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ed38u);}goto L66ed38;}}
}
B66ed68:L66ed68:{c.instructions+=4;NFSU2_TR(0x66ed68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ed6c:{NFSU2_TR(0x66ed6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ed6f:{NFSU2_TR(0x66ed6f);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66ed72:{NFSU2_TR(0x66ed72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ed25u);}goto L66ed25;}}
}
B66ed74:L66ed74:{c.instructions+=1;NFSU2_TR(0x66ed74);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}
}
B66ed79:L66ed79:{c.instructions+=2;NFSU2_TR(0x66ed79);
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
B66ed7b:{NFSU2_TR(0x66ed7b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}}
}
B66ed81:L66ed81:{c.instructions+=4;NFSU2_TR(0x66ed81);
__builtin_memmove((R+0),(R+24),4);
}
B66ed83:{NFSU2_TR(0x66ed83);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66ed86:{NFSU2_TR(0x66ed86);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66ed89:{NFSU2_TR(0x66ed89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ed8c:L66ed8c:{c.instructions+=2;NFSU2_TR(0x66ed8c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ed8e:{NFSU2_TR(0x66ed8e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66edd6;}}
}
B66ed90:L66ed90:{c.instructions+=5;NFSU2_TR(0x66ed90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ed93:{NFSU2_TR(0x66ed93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ed96:{NFSU2_TR(0x66ed96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ed99:{NFSU2_TR(0x66ed99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ed9c:{NFSU2_TR(0x66ed9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ed9f:L66ed9f:{c.instructions+=2;NFSU2_TR(0x66ed9f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66eda3:{NFSU2_TR(0x66eda3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66edc9;}}
}
B66eda5:L66eda5:{c.instructions+=6;NFSU2_TR(0x66eda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66eda8:{NFSU2_TR(0x66eda8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66edab:{NFSU2_TR(0x66edab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66edae:{NFSU2_TR(0x66edae);
__builtin_memmove((R+8),(R+24),4);
}
B66edb0:{NFSU2_TR(0x66edb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B66edb3:{NFSU2_TR(0x66edb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66edb6:L66edb6:{c.instructions+=8;NFSU2_TR(0x66edb6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66edb8:{NFSU2_TR(0x66edb8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66edba:{NFSU2_TR(0x66edba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B66edbd:{NFSU2_TR(0x66edbd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66edc0:{NFSU2_TR(0x66edc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66edc2:{NFSU2_TR(0x66edc2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B66edc4:{NFSU2_TR(0x66edc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66edc7:{NFSU2_TR(0x66edc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66edb6u);}goto L66edb6;}}
}
B66edc9:L66edc9:{c.instructions+=4;NFSU2_TR(0x66edc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66edcd:{NFSU2_TR(0x66edcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66edd1:{NFSU2_TR(0x66edd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66edd4:{NFSU2_TR(0x66edd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ed9fu);}goto L66ed9f;}}
}
B66edd6:L66edd6:{c.instructions+=4;NFSU2_TR(0x66edd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66edda:{NFSU2_TR(0x66edda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B66eddd:{NFSU2_TR(0x66eddd);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66ede0:{NFSU2_TR(0x66ede0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ed8cu);}goto L66ed8c;}}
}
B66ede2:L66ede2:{c.instructions+=1;NFSU2_TR(0x66ede2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}
}
B66ede7:L66ede7:{c.instructions+=3;NFSU2_TR(0x66ede7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66edea:{NFSU2_TR(0x66edea);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66edec:{NFSU2_TR(0x66edec);
if(r1(R+518)){{goto L66edf4;}}
}
B66edee:L66edee:{c.instructions+=2;NFSU2_TR(0x66edee);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66edf2:{NFSU2_TR(0x66edf2);
if(r1(R+518)){{goto L66edf6;}}
}
B66edf4:L66edf4:{c.instructions+=1;NFSU2_TR(0x66edf4);
__builtin_memmove((R+8),(R+24),4);
}
B66edf6:L66edf6:{c.instructions+=5;NFSU2_TR(0x66edf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66edf9:{NFSU2_TR(0x66edf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66edfb:{NFSU2_TR(0x66edfb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66edfc:{NFSU2_TR(0x66edfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66edfe:{NFSU2_TR(0x66edfe);
if(r1(R+518)){{goto L66ee7d;}}
}
B66ee00:L66ee00:{c.instructions+=2;NFSU2_TR(0x66ee00);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66ee01:{NFSU2_TR(0x66ee01);
if(r1(R+518)){{goto L66ee48;}}
}
B66ee03:L66ee03:{c.instructions+=2;NFSU2_TR(0x66ee03);
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
B66ee04:{NFSU2_TR(0x66ee04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec50u);}goto L66ec50;}}
}
B66ee0a:L66ee0a:{c.instructions+=2;NFSU2_TR(0x66ee0a);
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
B66ee0c:{NFSU2_TR(0x66ee0c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}}
}
B66ee12:L66ee12:{c.instructions+=5;NFSU2_TR(0x66ee12);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ee14:{NFSU2_TR(0x66ee14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66ee15:{NFSU2_TR(0x66ee15);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B66ee17:{NFSU2_TR(0x66ee17);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B66ee1a:{NFSU2_TR(0x66ee1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ee1d:L66ee1d:{c.instructions+=2;NFSU2_TR(0x66ee1d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ee1f:{NFSU2_TR(0x66ee1f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ee3c;}}
}
B66ee21:L66ee21:{c.instructions+=1;NFSU2_TR(0x66ee21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ee24:L66ee24:{c.instructions+=2;NFSU2_TR(0x66ee24);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66ee26:{NFSU2_TR(0x66ee26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ee2bull));
TAIL_STATIC(0x75dd28u,75d);
}
B66ee2b:L66ee2b:{c.instructions+=6;NFSU2_TR(0x66ee2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ee2e:{NFSU2_TR(0x66ee2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ee32:{NFSU2_TR(0x66ee32);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66ee35:{NFSU2_TR(0x66ee35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ee38:{NFSU2_TR(0x66ee38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66ee3a:{NFSU2_TR(0x66ee3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ee24u);}goto L66ee24;}}
}
B66ee3c:L66ee3c:{c.instructions+=3;NFSU2_TR(0x66ee3c);
w1(R+512,carry<u32>(r4(R+24),r4(R+28)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B66ee3e:{NFSU2_TR(0x66ee3e);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66ee41:{NFSU2_TR(0x66ee41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ee1du);}goto L66ee1d;}}
}
B66ee43:L66ee43:{c.instructions+=1;NFSU2_TR(0x66ee43);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}
}
B66ee48:L66ee48:{c.instructions+=2;NFSU2_TR(0x66ee48);
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
B66ee4a:{NFSU2_TR(0x66ee4a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}}
}
B66ee50:L66ee50:{c.instructions+=6;NFSU2_TR(0x66ee50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ee53:{NFSU2_TR(0x66ee53);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ee55:{NFSU2_TR(0x66ee55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66ee56:{NFSU2_TR(0x66ee56);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B66ee58:{NFSU2_TR(0x66ee58);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66ee5b:{NFSU2_TR(0x66ee5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ee5e:L66ee5e:{c.instructions+=2;NFSU2_TR(0x66ee5e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ee60:{NFSU2_TR(0x66ee60);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ee71;}}
}
B66ee62:L66ee62:{c.instructions+=1;NFSU2_TR(0x66ee62);
__builtin_memmove((R+28),(R+12),4);
}
B66ee64:L66ee64:{c.instructions+=6;NFSU2_TR(0x66ee64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66ee66:{NFSU2_TR(0x66ee66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66ee68:{NFSU2_TR(0x66ee68);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66ee6b:{NFSU2_TR(0x66ee6b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66ee6e:{NFSU2_TR(0x66ee6e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B66ee6f:{NFSU2_TR(0x66ee6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ee64u);}goto L66ee64;}}
}
B66ee71:L66ee71:{c.instructions+=3;NFSU2_TR(0x66ee71);
w1(R+512,carry<u32>(r4(R+24),r4(R+0)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B66ee73:{NFSU2_TR(0x66ee73);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66ee76:{NFSU2_TR(0x66ee76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ee5eu);}goto L66ee5e;}}
}
B66ee78:L66ee78:{c.instructions+=1;NFSU2_TR(0x66ee78);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}
}
B66ee7d:L66ee7d:{c.instructions+=2;NFSU2_TR(0x66ee7d);
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
B66ee7f:{NFSU2_TR(0x66ee7f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}}
}
B66ee85:L66ee85:{c.instructions+=5;NFSU2_TR(0x66ee85);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ee87:{NFSU2_TR(0x66ee87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66ee88:{NFSU2_TR(0x66ee88);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B66ee8a:{NFSU2_TR(0x66ee8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66ee8d:{NFSU2_TR(0x66ee8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ee90:L66ee90:{c.instructions+=2;NFSU2_TR(0x66ee90);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ee92:{NFSU2_TR(0x66ee92);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66eeac;}}
}
B66ee94:L66ee94:{c.instructions+=1;NFSU2_TR(0x66ee94);
__builtin_memmove((R+28),(R+12),4);
}
B66ee96:L66ee96:{c.instructions+=9;NFSU2_TR(0x66ee96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ee99:{NFSU2_TR(0x66ee99);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66ee9b:{NFSU2_TR(0x66ee9b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66ee9d:{NFSU2_TR(0x66ee9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B66eea0:{NFSU2_TR(0x66eea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66eea4:{NFSU2_TR(0x66eea4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66eea7:{NFSU2_TR(0x66eea7);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B66eea8:{NFSU2_TR(0x66eea8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B66eeaa:{NFSU2_TR(0x66eeaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ee96u);}goto L66ee96;}}
}
B66eeac:L66eeac:{c.instructions+=3;NFSU2_TR(0x66eeac);
w1(R+512,carry<u32>(r4(R+24),r4(R+0)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B66eeae:{NFSU2_TR(0x66eeae);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66eeb1:{NFSU2_TR(0x66eeb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ee90u);}goto L66ee90;}}
}
B66eeb3:L66eeb3:{c.instructions+=1;NFSU2_TR(0x66eeb3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ec57u);}goto L66ec57;}
}
B66eeb8:L66eeb8:{c.instructions+=14;NFSU2_TR(0x66eeb8);
__builtin_memmove((R+28),(R+28),4);
}
B66eeba:{NFSU2_TR(0x66eeba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66eebb:{NFSU2_TR(0x66eebb);
__builtin_memmove((R+20),(R+16),4);
}
B66eebd:{NFSU2_TR(0x66eebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B66eec0:{NFSU2_TR(0x66eec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66eec3:{NFSU2_TR(0x66eec3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66eec5:{NFSU2_TR(0x66eec5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66eec6:{NFSU2_TR(0x66eec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66eec9:{NFSU2_TR(0x66eec9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66eeca:{NFSU2_TR(0x66eeca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66eecd:{NFSU2_TR(0x66eecd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66eece:{NFSU2_TR(0x66eece);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66eed0:{NFSU2_TR(0x66eed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66eed1:{NFSU2_TR(0x66eed1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66eeda;}}
}
B66eed3:L66eed3:{c.instructions+=3;NFSU2_TR(0x66eed3);
w4(R+4,u32(~u32(r4(R+4))));
}
B66eed5:{NFSU2_TR(0x66eed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66eed8:{NFSU2_TR(0x66eed8);
{goto L66ef13;}
}
B66eeda:L66eeda:{c.instructions+=18;NFSU2_TR(0x66eeda);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66eee0:{NFSU2_TR(0x66eee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66eee2:{NFSU2_TR(0x66eee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66eee6:{NFSU2_TR(0x66eee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66eee8:{NFSU2_TR(0x66eee8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B66eeea:{NFSU2_TR(0x66eeea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66eeec:{NFSU2_TR(0x66eeec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66eeef:{NFSU2_TR(0x66eeef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66eef1:{NFSU2_TR(0x66eef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66eef8:{NFSU2_TR(0x66eef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66eefa:{NFSU2_TR(0x66eefa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66eefc:{NFSU2_TR(0x66eefc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66eefd:{NFSU2_TR(0x66eefd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66eefe:{NFSU2_TR(0x66eefe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66eeff:{NFSU2_TR(0x66eeff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ef00:{NFSU2_TR(0x66ef00);
__builtin_memmove((R+4),(R+24),4);
}
B66ef02:{NFSU2_TR(0x66ef02);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ef05:{NFSU2_TR(0x66ef05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ef0aull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66ef0a:L66ef0a:{c.instructions+=4;NFSU2_TR(0x66ef0a);
__builtin_memmove((R+4),(R+0),4);
}
B66ef0c:{NFSU2_TR(0x66ef0c);
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
B66ef0e:{NFSU2_TR(0x66ef0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ef11:{NFSU2_TR(0x66ef11);
if(r1(R+518)){{goto L66ef4a;}}
}
B66ef13:L66ef13:{c.instructions+=2;NFSU2_TR(0x66ef13);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ef16:{NFSU2_TR(0x66ef16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66ef28;}}
}
B66ef18:L66ef18:{c.instructions+=6;NFSU2_TR(0x66ef18);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ef19:{NFSU2_TR(0x66ef19);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66ef1c:{NFSU2_TR(0x66ef1c);
w4(R+4,u32(~u32(r4(R+4))));
}
B66ef1e:{NFSU2_TR(0x66ef1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ef1f:{NFSU2_TR(0x66ef1f);
__builtin_memmove((R+4),(R+24),4);
}
B66ef21:{NFSU2_TR(0x66ef21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ef26ull));
TAIL_STATIC(0x666351u,666);
}
B66ef26:L66ef26:{c.instructions+=1;NFSU2_TR(0x66ef26);
{goto L66ef4f;}
}
B66ef28:L66ef28:{c.instructions+=4;NFSU2_TR(0x66ef28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ef2b:{NFSU2_TR(0x66ef2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ef2e:{NFSU2_TR(0x66ef2e);
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
B66ef30:{NFSU2_TR(0x66ef30);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66ef4a;}}
}
B66ef32:L66ef32:{c.instructions+=4;NFSU2_TR(0x66ef32);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66ef34:{NFSU2_TR(0x66ef34);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66ef35:{NFSU2_TR(0x66ef35);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ef37:{NFSU2_TR(0x66ef37);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x66f124u,66f);}
}
B66ef3d:L66ef3d:{c.instructions+=2;NFSU2_TR(0x66ef3d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ef40:{NFSU2_TR(0x66ef40);
if(r1(R+518)){{goto L66ef56;}}
}
B66ef42:L66ef42:{c.instructions+=2;NFSU2_TR(0x66ef42);
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
B66ef44:{NFSU2_TR(0x66ef44);
if(r1(R+518)){TAIL_STATIC(0x66f124u,66f);}
}
B66ef4a:L66ef4a:{c.instructions+=1;NFSU2_TR(0x66ef4a);
w4(R+0,u32(0x8876086cull));
}
B66ef4f:L66ef4f:{c.instructions+=5;NFSU2_TR(0x66ef4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66ef50:{NFSU2_TR(0x66ef50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66ef51:{NFSU2_TR(0x66ef51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66ef52:{NFSU2_TR(0x66ef52);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66ef53:{NFSU2_TR(0x66ef53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66ef56:L66ef56:{c.instructions+=8;NFSU2_TR(0x66ef56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66ef59:{NFSU2_TR(0x66ef59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ef5c:{NFSU2_TR(0x66ef5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66ef5f:{NFSU2_TR(0x66ef5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ef62:{NFSU2_TR(0x66ef62);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66ef64:{NFSU2_TR(0x66ef64);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ef66:{NFSU2_TR(0x66ef66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ef69:{NFSU2_TR(0x66ef69);
if(r1(R+518)){{goto L66ef71;}}
}
B66ef6b:L66ef6b:{c.instructions+=2;NFSU2_TR(0x66ef6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ef6f:{NFSU2_TR(0x66ef6f);
if(r1(R+518)){{goto L66ef76;}}
}
B66ef71:L66ef71:{c.instructions+=2;NFSU2_TR(0x66ef71);
__builtin_memmove((R+8),(R+24),4);
}
B66ef73:{NFSU2_TR(0x66ef73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ef76:L66ef76:{c.instructions+=5;NFSU2_TR(0x66ef76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66ef78:{NFSU2_TR(0x66ef78);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66ef79:{NFSU2_TR(0x66ef79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66ef7b:{NFSU2_TR(0x66ef7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ef7e:{NFSU2_TR(0x66ef7e);
if(r1(R+518)){TAIL_STATIC(0x66f091u,66f);}
}
B66ef84:L66ef84:{c.instructions+=2;NFSU2_TR(0x66ef84);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66ef85:{NFSU2_TR(0x66ef85);
if(r1(R+518)){TAIL_STATIC(0x66f00bu,66f);}
}
B66ef8b:L66ef8b:{c.instructions+=2;NFSU2_TR(0x66ef8b);
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
B66ef8c:{NFSU2_TR(0x66ef8c);
if(r1(R+518)){{goto L66ef95;}}
}
B66ef8e:L66ef8e:{c.instructions+=2;NFSU2_TR(0x66ef8e);
w4(R+0,u32(0x80004005ull));
}
B66ef93:{NFSU2_TR(0x66ef93);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ef4fu);}goto L66ef4f;}
}
B66ef95:L66ef95:{c.instructions+=3;NFSU2_TR(0x66ef95);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ef97:{NFSU2_TR(0x66ef97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ef9a:{NFSU2_TR(0x66ef9a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66f23eu,66f);}
}
B66efa0:L66efa0:{c.instructions+=3;NFSU2_TR(0x66efa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66efa3:{NFSU2_TR(0x66efa3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66efa7:{NFSU2_TR(0x66efa7);
if(r1(R+518)){TAIL_STATIC(0x66f23eu,66f);}
}
B66efad:L66efad:{c.instructions+=3;NFSU2_TR(0x66efad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66efb1:{NFSU2_TR(0x66efb1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66efb3:{NFSU2_TR(0x66efb3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66efee;}}
}
B66efb5:L66efb5:{c.instructions+=3;NFSU2_TR(0x66efb5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66efb7:{NFSU2_TR(0x66efb7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66efba:{NFSU2_TR(0x66efba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66efe6;}}
}
B66efbc:L66efbc:{c.instructions+=2;NFSU2_TR(0x66efbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66efbf:{NFSU2_TR(0x66efbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66efc2:L66efc2:{c.instructions+=2;NFSU2_TR(0x66efc2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66efc6:{NFSU2_TR(0x66efc6);
if(r1(R+518)){{goto L66efe6;}}
}
B66efc8:L66efc8:{c.instructions+=12;NFSU2_TR(0x66efc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66efcb:{NFSU2_TR(0x66efcb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66efcd:{NFSU2_TR(0x66efcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66efd0:{NFSU2_TR(0x66efd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66efd3:{NFSU2_TR(0x66efd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66efd6:{NFSU2_TR(0x66efd6);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66efd9:{NFSU2_TR(0x66efd9);
__builtin_memmove((R+24),(R+12),4);
}
B66efdb:{NFSU2_TR(0x66efdb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B66efde:{NFSU2_TR(0x66efde);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B66efdf:{NFSU2_TR(0x66efdf);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B66efe1:{NFSU2_TR(0x66efe1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B66efe4:{NFSU2_TR(0x66efe4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66efc2u);}goto L66efc2;}}
}
B66efe6:L66efe6:{c.instructions+=3;NFSU2_TR(0x66efe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66efe9:{NFSU2_TR(0x66efe9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B66efec:{NFSU2_TR(0x66efec);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66efb5u);}goto L66efb5;}}
}
B66efee:L66efee:{c.instructions+=6;NFSU2_TR(0x66efee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66eff2:{NFSU2_TR(0x66eff2);
__builtin_memmove((R+0),(R+12),4);
}
B66eff4:{NFSU2_TR(0x66eff4);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B66eff8:{NFSU2_TR(0x66eff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66effb:{NFSU2_TR(0x66effb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66effe:{NFSU2_TR(0x66effe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x66f001u,66f);
}
XIT:NFSU2_TR_EXIT(0x66e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
