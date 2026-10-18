#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_65d(u8* __restrict R,Cpu& c);
u32 body_65f(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x65e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x65e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_65e(u8* __restrict R,Cpu& c);
u32 page_65e(Cpu& c){return body_65e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_65e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x65e002:goto L65e002;
case 0x65e005:c.instructions+=4;goto B65e005;
case 0x65e008:c.instructions+=3;goto B65e008;
case 0x65e00a:c.instructions+=2;goto B65e00a;
case 0x65e00d:c.instructions+=1;goto B65e00d;
case 0x65e00f:goto L65e00f;
case 0x65e012:c.instructions+=3;goto B65e012;
case 0x65e015:c.instructions+=2;goto B65e015;
case 0x65e018:c.instructions+=1;goto B65e018;
case 0x65e01a:goto L65e01a;
case 0x65e01d:c.instructions+=5;goto B65e01d;
case 0x65e020:c.instructions+=4;goto B65e020;
case 0x65e023:c.instructions+=3;goto B65e023;
case 0x65e025:c.instructions+=2;goto B65e025;
case 0x65e028:c.instructions+=1;goto B65e028;
case 0x65e02a:goto L65e02a;
case 0x65e02f:goto L65e02f;
case 0x65e032:c.instructions+=2;goto B65e032;
case 0x65e034:c.instructions+=1;goto B65e034;
case 0x65e03a:goto L65e03a;
case 0x65e03c:c.instructions+=3;goto B65e03c;
case 0x65e03f:c.instructions+=2;goto B65e03f;
case 0x65e042:c.instructions+=1;goto B65e042;
case 0x65e045:goto L65e045;
case 0x65e049:c.instructions+=2;goto B65e049;
case 0x65e04b:c.instructions+=1;goto B65e04b;
case 0x65e04d:goto L65e04d;
case 0x65e04f:c.instructions+=1;goto B65e04f;
case 0x65e051:goto L65e051;
case 0x65e054:c.instructions+=5;goto B65e054;
case 0x65e056:c.instructions+=4;goto B65e056;
case 0x65e058:c.instructions+=3;goto B65e058;
case 0x65e05b:c.instructions+=2;goto B65e05b;
case 0x65e05e:c.instructions+=1;goto B65e05e;
case 0x65e061:goto L65e061;
case 0x65e064:c.instructions+=11;goto B65e064;
case 0x65e066:c.instructions+=10;goto B65e066;
case 0x65e069:c.instructions+=9;goto B65e069;
case 0x65e06c:c.instructions+=8;goto B65e06c;
case 0x65e06e:c.instructions+=7;goto B65e06e;
case 0x65e071:c.instructions+=6;goto B65e071;
case 0x65e073:c.instructions+=5;goto B65e073;
case 0x65e076:c.instructions+=4;goto B65e076;
case 0x65e079:c.instructions+=3;goto B65e079;
case 0x65e07b:c.instructions+=2;goto B65e07b;
case 0x65e07e:c.instructions+=1;goto B65e07e;
case 0x65e080:goto L65e080;
case 0x65e083:goto L65e083;
case 0x65e086:c.instructions+=2;goto B65e086;
case 0x65e089:c.instructions+=1;goto B65e089;
case 0x65e08b:goto L65e08b;
case 0x65e08e:c.instructions+=5;goto B65e08e;
case 0x65e091:c.instructions+=4;goto B65e091;
case 0x65e094:c.instructions+=3;goto B65e094;
case 0x65e096:c.instructions+=2;goto B65e096;
case 0x65e099:c.instructions+=1;goto B65e099;
case 0x65e09b:goto L65e09b;
case 0x65e09d:goto L65e09d;
case 0x65e0a0:c.instructions+=2;goto B65e0a0;
case 0x65e0a2:c.instructions+=1;goto B65e0a2;
case 0x65e0a4:goto L65e0a4;
case 0x65e0a6:c.instructions+=3;goto B65e0a6;
case 0x65e0a9:c.instructions+=2;goto B65e0a9;
case 0x65e0ac:c.instructions+=1;goto B65e0ac;
case 0x65e0af:goto L65e0af;
case 0x65e0b3:c.instructions+=2;goto B65e0b3;
case 0x65e0b5:c.instructions+=1;goto B65e0b5;
case 0x65e0b7:goto L65e0b7;
case 0x65e0b9:c.instructions+=1;goto B65e0b9;
case 0x65e0bb:goto L65e0bb;
case 0x65e0be:c.instructions+=5;goto B65e0be;
case 0x65e0c0:c.instructions+=4;goto B65e0c0;
case 0x65e0c2:c.instructions+=3;goto B65e0c2;
case 0x65e0c5:c.instructions+=2;goto B65e0c5;
case 0x65e0c8:c.instructions+=1;goto B65e0c8;
case 0x65e0cb:goto L65e0cb;
case 0x65e0ce:c.instructions+=13;goto B65e0ce;
case 0x65e0d0:c.instructions+=12;goto B65e0d0;
case 0x65e0d2:c.instructions+=11;goto B65e0d2;
case 0x65e0d5:c.instructions+=10;goto B65e0d5;
case 0x65e0d8:c.instructions+=9;goto B65e0d8;
case 0x65e0da:c.instructions+=8;goto B65e0da;
case 0x65e0dd:c.instructions+=7;goto B65e0dd;
case 0x65e0e0:c.instructions+=6;goto B65e0e0;
case 0x65e0e2:c.instructions+=5;goto B65e0e2;
case 0x65e0e5:c.instructions+=4;goto B65e0e5;
case 0x65e0e8:c.instructions+=3;goto B65e0e8;
case 0x65e0ea:c.instructions+=2;goto B65e0ea;
case 0x65e0ed:c.instructions+=1;goto B65e0ed;
case 0x65e0ef:goto L65e0ef;
case 0x65e0f2:goto L65e0f2;
case 0x65e0f5:c.instructions+=2;goto B65e0f5;
case 0x65e0f8:c.instructions+=1;goto B65e0f8;
case 0x65e0fa:goto L65e0fa;
case 0x65e0fd:c.instructions+=5;goto B65e0fd;
case 0x65e100:c.instructions+=4;goto B65e100;
case 0x65e103:c.instructions+=3;goto B65e103;
case 0x65e105:c.instructions+=2;goto B65e105;
case 0x65e108:c.instructions+=1;goto B65e108;
case 0x65e10a:goto L65e10a;
case 0x65e10d:c.instructions+=2;goto B65e10d;
case 0x65e110:c.instructions+=1;goto B65e110;
case 0x65e115:goto L65e115;
case 0x65e118:c.instructions+=12;goto B65e118;
case 0x65e11a:c.instructions+=11;goto B65e11a;
case 0x65e11d:c.instructions+=10;goto B65e11d;
case 0x65e11f:c.instructions+=9;goto B65e11f;
case 0x65e122:c.instructions+=8;goto B65e122;
case 0x65e125:c.instructions+=7;goto B65e125;
case 0x65e127:c.instructions+=6;goto B65e127;
case 0x65e128:c.instructions+=5;goto B65e128;
case 0x65e12a:c.instructions+=4;goto B65e12a;
case 0x65e12d:c.instructions+=3;goto B65e12d;
case 0x65e130:c.instructions+=2;goto B65e130;
case 0x65e132:c.instructions+=1;goto B65e132;
case 0x65e134:goto L65e134;
case 0x65e136:c.instructions+=1;goto B65e136;
case 0x65e138:goto L65e138;
case 0x65e13b:goto L65e13b;
case 0x65e13d:c.instructions+=5;goto B65e13d;
case 0x65e13f:c.instructions+=4;goto B65e13f;
case 0x65e142:c.instructions+=3;goto B65e142;
case 0x65e145:c.instructions+=2;goto B65e145;
case 0x65e148:c.instructions+=1;goto B65e148;
case 0x65e14a:goto L65e14a;
case 0x65e14c:goto L65e14c;
case 0x65e14e:c.instructions+=1;goto B65e14e;
case 0x65e150:goto L65e150;
case 0x65e153:c.instructions+=4;goto B65e153;
case 0x65e155:c.instructions+=3;goto B65e155;
case 0x65e158:c.instructions+=2;goto B65e158;
case 0x65e15a:c.instructions+=1;goto B65e15a;
case 0x65e15c:goto L65e15c;
case 0x65e161:c.instructions+=5;goto B65e161;
case 0x65e162:c.instructions+=4;goto B65e162;
case 0x65e163:c.instructions+=3;goto B65e163;
case 0x65e164:c.instructions+=2;goto B65e164;
case 0x65e165:c.instructions+=1;goto B65e165;
case 0x65e168:goto L65e168;
case 0x65e16a:c.instructions+=15;goto B65e16a;
case 0x65e16b:c.instructions+=14;goto B65e16b;
case 0x65e16d:c.instructions+=13;goto B65e16d;
case 0x65e170:c.instructions+=12;goto B65e170;
case 0x65e173:c.instructions+=11;goto B65e173;
case 0x65e175:c.instructions+=10;goto B65e175;
case 0x65e179:c.instructions+=9;goto B65e179;
case 0x65e17d:c.instructions+=8;goto B65e17d;
case 0x65e17f:c.instructions+=7;goto B65e17f;
case 0x65e180:c.instructions+=6;goto B65e180;
case 0x65e181:c.instructions+=5;goto B65e181;
case 0x65e182:c.instructions+=4;goto B65e182;
case 0x65e185:c.instructions+=3;goto B65e185;
case 0x65e188:c.instructions+=2;goto B65e188;
case 0x65e18b:c.instructions+=1;goto B65e18b;
case 0x65e18d:goto L65e18d;
case 0x65e190:c.instructions+=1;goto B65e190;
case 0x65e192:goto L65e192;
case 0x65e194:c.instructions+=1;goto B65e194;
case 0x65e195:goto L65e195;
case 0x65e197:c.instructions+=1;goto B65e197;
case 0x65e19d:goto L65e19d;
case 0x65e1a0:c.instructions+=1;goto B65e1a0;
case 0x65e1a6:goto L65e1a6;
case 0x65e1a9:c.instructions+=1;goto B65e1a9;
case 0x65e1ab:goto L65e1ab;
case 0x65e1ae:c.instructions+=1;goto B65e1ae;
case 0x65e1b4:goto L65e1b4;
case 0x65e1b6:c.instructions+=5;goto B65e1b6;
case 0x65e1b9:c.instructions+=4;goto B65e1b9;
case 0x65e1bc:c.instructions+=3;goto B65e1bc;
case 0x65e1bf:c.instructions+=2;goto B65e1bf;
case 0x65e1c1:c.instructions+=1;goto B65e1c1;
case 0x65e1c7:goto L65e1c7;
case 0x65e1ca:c.instructions+=4;goto B65e1ca;
case 0x65e1ce:c.instructions+=3;goto B65e1ce;
case 0x65e1d0:c.instructions+=2;goto B65e1d0;
case 0x65e1d2:c.instructions+=1;goto B65e1d2;
case 0x65e1d4:goto L65e1d4;
case 0x65e1d7:c.instructions+=6;goto B65e1d7;
case 0x65e1d9:c.instructions+=5;goto B65e1d9;
case 0x65e1dc:c.instructions+=4;goto B65e1dc;
case 0x65e1df:c.instructions+=3;goto B65e1df;
case 0x65e1e2:c.instructions+=2;goto B65e1e2;
case 0x65e1e5:c.instructions+=1;goto B65e1e5;
case 0x65e1ea:goto L65e1ea;
case 0x65e1ec:c.instructions+=2;goto B65e1ec;
case 0x65e1ef:c.instructions+=1;goto B65e1ef;
case 0x65e1f5:goto L65e1f5;
case 0x65e1f8:c.instructions+=2;goto B65e1f8;
case 0x65e1fb:c.instructions+=1;goto B65e1fb;
case 0x65e1fd:goto L65e1fd;
case 0x65e1fe:c.instructions+=1;goto B65e1fe;
case 0x65e200:goto L65e200;
case 0x65e205:goto L65e205;
case 0x65e208:c.instructions+=1;goto B65e208;
case 0x65e20e:goto L65e20e;
case 0x65e214:goto L65e214;
case 0x65e217:c.instructions+=1;goto B65e217;
case 0x65e21d:goto L65e21d;
case 0x65e220:c.instructions+=1;goto B65e220;
case 0x65e222:goto L65e222;
case 0x65e225:c.instructions+=1;goto B65e225;
case 0x65e22b:goto L65e22b;
case 0x65e22d:c.instructions+=1;goto B65e22d;
case 0x65e233:goto L65e233;
case 0x65e236:c.instructions+=3;goto B65e236;
case 0x65e239:c.instructions+=2;goto B65e239;
case 0x65e23c:c.instructions+=1;goto B65e23c;
case 0x65e23f:goto L65e23f;
case 0x65e241:c.instructions+=3;goto B65e241;
case 0x65e243:c.instructions+=2;goto B65e243;
case 0x65e245:c.instructions+=1;goto B65e245;
case 0x65e247:goto L65e247;
case 0x65e24a:c.instructions+=1;goto B65e24a;
case 0x65e24d:goto L65e24d;
case 0x65e250:c.instructions+=8;goto B65e250;
case 0x65e253:c.instructions+=7;goto B65e253;
case 0x65e255:c.instructions+=6;goto B65e255;
case 0x65e258:c.instructions+=5;goto B65e258;
case 0x65e25c:c.instructions+=4;goto B65e25c;
case 0x65e25e:c.instructions+=3;goto B65e25e;
case 0x65e260:c.instructions+=2;goto B65e260;
case 0x65e263:c.instructions+=1;goto B65e263;
case 0x65e265:goto L65e265;
case 0x65e267:c.instructions+=3;goto B65e267;
case 0x65e269:c.instructions+=2;goto B65e269;
case 0x65e26a:c.instructions+=1;goto B65e26a;
case 0x65e26d:goto L65e26d;
case 0x65e270:c.instructions+=3;goto B65e270;
case 0x65e273:c.instructions+=2;goto B65e273;
case 0x65e276:c.instructions+=1;goto B65e276;
case 0x65e278:goto L65e278;
case 0x65e27d:goto L65e27d;
case 0x65e27f:c.instructions+=1;goto B65e27f;
case 0x65e285:goto L65e285;
case 0x65e288:c.instructions+=3;goto B65e288;
case 0x65e28b:c.instructions+=2;goto B65e28b;
case 0x65e28e:c.instructions+=1;goto B65e28e;
case 0x65e291:goto L65e291;
case 0x65e293:c.instructions+=3;goto B65e293;
case 0x65e295:c.instructions+=2;goto B65e295;
case 0x65e297:c.instructions+=1;goto B65e297;
case 0x65e299:goto L65e299;
case 0x65e29c:c.instructions+=1;goto B65e29c;
case 0x65e29f:goto L65e29f;
case 0x65e2a2:c.instructions+=8;goto B65e2a2;
case 0x65e2a5:c.instructions+=7;goto B65e2a5;
case 0x65e2a7:c.instructions+=6;goto B65e2a7;
case 0x65e2aa:c.instructions+=5;goto B65e2aa;
case 0x65e2ae:c.instructions+=4;goto B65e2ae;
case 0x65e2b0:c.instructions+=3;goto B65e2b0;
case 0x65e2b2:c.instructions+=2;goto B65e2b2;
case 0x65e2b5:c.instructions+=1;goto B65e2b5;
case 0x65e2b7:goto L65e2b7;
case 0x65e2b9:c.instructions+=3;goto B65e2b9;
case 0x65e2bb:c.instructions+=2;goto B65e2bb;
case 0x65e2bc:c.instructions+=1;goto B65e2bc;
case 0x65e2bf:goto L65e2bf;
case 0x65e2c2:c.instructions+=3;goto B65e2c2;
case 0x65e2c5:c.instructions+=2;goto B65e2c5;
case 0x65e2c8:c.instructions+=1;goto B65e2c8;
case 0x65e2ca:goto L65e2ca;
case 0x65e2cf:goto L65e2cf;
case 0x65e2d1:c.instructions+=1;goto B65e2d1;
case 0x65e2d7:goto L65e2d7;
case 0x65e2da:c.instructions+=3;goto B65e2da;
case 0x65e2dd:c.instructions+=2;goto B65e2dd;
case 0x65e2e0:c.instructions+=1;goto B65e2e0;
case 0x65e2e3:goto L65e2e3;
case 0x65e2e5:c.instructions+=3;goto B65e2e5;
case 0x65e2e7:c.instructions+=2;goto B65e2e7;
case 0x65e2e9:c.instructions+=1;goto B65e2e9;
case 0x65e2eb:goto L65e2eb;
case 0x65e2ee:c.instructions+=1;goto B65e2ee;
case 0x65e2f1:goto L65e2f1;
case 0x65e2f4:c.instructions+=8;goto B65e2f4;
case 0x65e2f7:c.instructions+=7;goto B65e2f7;
case 0x65e2f9:c.instructions+=6;goto B65e2f9;
case 0x65e2fc:c.instructions+=5;goto B65e2fc;
case 0x65e300:c.instructions+=4;goto B65e300;
case 0x65e302:c.instructions+=3;goto B65e302;
case 0x65e304:c.instructions+=2;goto B65e304;
case 0x65e307:c.instructions+=1;goto B65e307;
case 0x65e309:goto L65e309;
case 0x65e30b:c.instructions+=3;goto B65e30b;
case 0x65e30d:c.instructions+=2;goto B65e30d;
case 0x65e30e:c.instructions+=1;goto B65e30e;
case 0x65e311:goto L65e311;
case 0x65e314:c.instructions+=3;goto B65e314;
case 0x65e317:c.instructions+=2;goto B65e317;
case 0x65e31a:c.instructions+=1;goto B65e31a;
case 0x65e31c:goto L65e31c;
case 0x65e31e:goto L65e31e;
case 0x65e320:c.instructions+=1;goto B65e320;
case 0x65e322:goto L65e322;
case 0x65e325:c.instructions+=3;goto B65e325;
case 0x65e328:c.instructions+=2;goto B65e328;
case 0x65e32b:c.instructions+=1;goto B65e32b;
case 0x65e32e:goto L65e32e;
case 0x65e330:c.instructions+=3;goto B65e330;
case 0x65e332:c.instructions+=2;goto B65e332;
case 0x65e334:c.instructions+=1;goto B65e334;
case 0x65e336:goto L65e336;
case 0x65e339:c.instructions+=1;goto B65e339;
case 0x65e33c:goto L65e33c;
case 0x65e33f:c.instructions+=5;goto B65e33f;
case 0x65e342:c.instructions+=4;goto B65e342;
case 0x65e345:c.instructions+=3;goto B65e345;
case 0x65e348:c.instructions+=2;goto B65e348;
case 0x65e34c:c.instructions+=1;goto B65e34c;
case 0x65e34e:goto L65e34e;
case 0x65e350:c.instructions+=1;goto B65e350;
case 0x65e352:goto L65e352;
case 0x65e355:c.instructions+=3;goto B65e355;
case 0x65e357:c.instructions+=2;goto B65e357;
case 0x65e358:c.instructions+=1;goto B65e358;
case 0x65e35b:goto L65e35b;
case 0x65e35d:c.instructions+=5;goto B65e35d;
case 0x65e35f:c.instructions+=4;goto B65e35f;
case 0x65e362:c.instructions+=3;goto B65e362;
case 0x65e365:c.instructions+=2;goto B65e365;
case 0x65e368:c.instructions+=1;goto B65e368;
case 0x65e36a:goto L65e36a;
case 0x65e36d:c.instructions+=2;goto B65e36d;
case 0x65e370:c.instructions+=1;goto B65e370;
case 0x65e375:goto L65e375;
case 0x65e378:c.instructions+=11;goto B65e378;
case 0x65e37b:c.instructions+=10;goto B65e37b;
case 0x65e37d:c.instructions+=9;goto B65e37d;
case 0x65e380:c.instructions+=8;goto B65e380;
case 0x65e383:c.instructions+=7;goto B65e383;
case 0x65e386:c.instructions+=6;goto B65e386;
case 0x65e387:c.instructions+=5;goto B65e387;
case 0x65e38a:c.instructions+=4;goto B65e38a;
case 0x65e38d:c.instructions+=3;goto B65e38d;
case 0x65e38e:c.instructions+=2;goto B65e38e;
case 0x65e391:c.instructions+=1;goto B65e391;
case 0x65e397:goto L65e397;
case 0x65e398:c.instructions+=1;goto B65e398;
case 0x65e39a:goto L65e39a;
case 0x65e39b:c.instructions+=1;goto B65e39b;
case 0x65e3a1:goto L65e3a1;
case 0x65e3a3:c.instructions+=1;goto B65e3a3;
case 0x65e3a9:goto L65e3a9;
case 0x65e3ab:c.instructions+=3;goto B65e3ab;
case 0x65e3ae:c.instructions+=2;goto B65e3ae;
case 0x65e3b1:c.instructions+=1;goto B65e3b1;
case 0x65e3b4:goto L65e3b4;
case 0x65e3b8:c.instructions+=2;goto B65e3b8;
case 0x65e3ba:c.instructions+=1;goto B65e3ba;
case 0x65e3bc:goto L65e3bc;
case 0x65e3be:c.instructions+=1;goto B65e3be;
case 0x65e3c0:goto L65e3c0;
case 0x65e3c3:c.instructions+=4;goto B65e3c3;
case 0x65e3c5:c.instructions+=3;goto B65e3c5;
case 0x65e3c8:c.instructions+=2;goto B65e3c8;
case 0x65e3cb:c.instructions+=1;goto B65e3cb;
case 0x65e3ce:goto L65e3ce;
case 0x65e3d1:c.instructions+=11;goto B65e3d1;
case 0x65e3d3:c.instructions+=10;goto B65e3d3;
case 0x65e3d6:c.instructions+=9;goto B65e3d6;
case 0x65e3d9:c.instructions+=8;goto B65e3d9;
case 0x65e3db:c.instructions+=7;goto B65e3db;
case 0x65e3dd:c.instructions+=6;goto B65e3dd;
case 0x65e3e0:c.instructions+=5;goto B65e3e0;
case 0x65e3e3:c.instructions+=4;goto B65e3e3;
case 0x65e3e6:c.instructions+=3;goto B65e3e6;
case 0x65e3e8:c.instructions+=2;goto B65e3e8;
case 0x65e3eb:c.instructions+=1;goto B65e3eb;
case 0x65e3ed:goto L65e3ed;
case 0x65e3f0:goto L65e3f0;
case 0x65e3f3:c.instructions+=2;goto B65e3f3;
case 0x65e3f6:c.instructions+=1;goto B65e3f6;
case 0x65e3f8:goto L65e3f8;
case 0x65e3fb:c.instructions+=6;goto B65e3fb;
case 0x65e3fe:c.instructions+=5;goto B65e3fe;
case 0x65e400:c.instructions+=4;goto B65e400;
case 0x65e403:c.instructions+=3;goto B65e403;
case 0x65e405:c.instructions+=2;goto B65e405;
case 0x65e408:c.instructions+=1;goto B65e408;
case 0x65e40a:goto L65e40a;
case 0x65e40f:goto L65e40f;
case 0x65e411:c.instructions+=1;goto B65e411;
case 0x65e417:goto L65e417;
case 0x65e419:c.instructions+=3;goto B65e419;
case 0x65e41c:c.instructions+=2;goto B65e41c;
case 0x65e41f:c.instructions+=1;goto B65e41f;
case 0x65e422:goto L65e422;
case 0x65e426:c.instructions+=2;goto B65e426;
case 0x65e428:c.instructions+=1;goto B65e428;
case 0x65e42a:goto L65e42a;
case 0x65e42c:c.instructions+=1;goto B65e42c;
case 0x65e42e:goto L65e42e;
case 0x65e431:c.instructions+=4;goto B65e431;
case 0x65e433:c.instructions+=3;goto B65e433;
case 0x65e436:c.instructions+=2;goto B65e436;
case 0x65e439:c.instructions+=1;goto B65e439;
case 0x65e43c:goto L65e43c;
case 0x65e43f:c.instructions+=11;goto B65e43f;
case 0x65e441:c.instructions+=10;goto B65e441;
case 0x65e444:c.instructions+=9;goto B65e444;
case 0x65e447:c.instructions+=8;goto B65e447;
case 0x65e449:c.instructions+=7;goto B65e449;
case 0x65e44c:c.instructions+=6;goto B65e44c;
case 0x65e44e:c.instructions+=5;goto B65e44e;
case 0x65e451:c.instructions+=4;goto B65e451;
case 0x65e454:c.instructions+=3;goto B65e454;
case 0x65e456:c.instructions+=2;goto B65e456;
case 0x65e459:c.instructions+=1;goto B65e459;
case 0x65e45b:goto L65e45b;
case 0x65e45e:goto L65e45e;
case 0x65e461:c.instructions+=2;goto B65e461;
case 0x65e464:c.instructions+=1;goto B65e464;
case 0x65e466:goto L65e466;
case 0x65e469:c.instructions+=6;goto B65e469;
case 0x65e46c:c.instructions+=5;goto B65e46c;
case 0x65e46e:c.instructions+=4;goto B65e46e;
case 0x65e471:c.instructions+=3;goto B65e471;
case 0x65e473:c.instructions+=2;goto B65e473;
case 0x65e476:c.instructions+=1;goto B65e476;
case 0x65e478:goto L65e478;
case 0x65e47a:goto L65e47a;
case 0x65e47c:c.instructions+=1;goto B65e47c;
case 0x65e47e:goto L65e47e;
case 0x65e480:c.instructions+=3;goto B65e480;
case 0x65e483:c.instructions+=2;goto B65e483;
case 0x65e486:c.instructions+=1;goto B65e486;
case 0x65e489:goto L65e489;
case 0x65e48d:c.instructions+=2;goto B65e48d;
case 0x65e48f:c.instructions+=1;goto B65e48f;
case 0x65e491:goto L65e491;
case 0x65e493:c.instructions+=1;goto B65e493;
case 0x65e495:goto L65e495;
case 0x65e498:c.instructions+=5;goto B65e498;
case 0x65e49a:c.instructions+=4;goto B65e49a;
case 0x65e49c:c.instructions+=3;goto B65e49c;
case 0x65e49f:c.instructions+=2;goto B65e49f;
case 0x65e4a2:c.instructions+=1;goto B65e4a2;
case 0x65e4a5:goto L65e4a5;
case 0x65e4a8:c.instructions+=13;goto B65e4a8;
case 0x65e4aa:c.instructions+=12;goto B65e4aa;
case 0x65e4ac:c.instructions+=11;goto B65e4ac;
case 0x65e4af:c.instructions+=10;goto B65e4af;
case 0x65e4b2:c.instructions+=9;goto B65e4b2;
case 0x65e4b4:c.instructions+=8;goto B65e4b4;
case 0x65e4b7:c.instructions+=7;goto B65e4b7;
case 0x65e4ba:c.instructions+=6;goto B65e4ba;
case 0x65e4bd:c.instructions+=5;goto B65e4bd;
case 0x65e4bf:c.instructions+=4;goto B65e4bf;
case 0x65e4c2:c.instructions+=3;goto B65e4c2;
case 0x65e4c4:c.instructions+=2;goto B65e4c4;
case 0x65e4c7:c.instructions+=1;goto B65e4c7;
case 0x65e4c9:goto L65e4c9;
case 0x65e4cc:goto L65e4cc;
case 0x65e4cf:c.instructions+=2;goto B65e4cf;
case 0x65e4d2:c.instructions+=1;goto B65e4d2;
case 0x65e4d4:goto L65e4d4;
case 0x65e4d7:c.instructions+=6;goto B65e4d7;
case 0x65e4da:c.instructions+=5;goto B65e4da;
case 0x65e4dc:c.instructions+=4;goto B65e4dc;
case 0x65e4df:c.instructions+=3;goto B65e4df;
case 0x65e4e1:c.instructions+=2;goto B65e4e1;
case 0x65e4e4:c.instructions+=1;goto B65e4e4;
case 0x65e4e6:goto L65e4e6;
case 0x65e4e9:c.instructions+=2;goto B65e4e9;
case 0x65e4ec:c.instructions+=1;goto B65e4ec;
case 0x65e4ee:goto L65e4ee;
case 0x65e4f5:goto L65e4f5;
case 0x65e4f8:c.instructions+=5;goto B65e4f8;
case 0x65e4f9:c.instructions+=4;goto B65e4f9;
case 0x65e4fa:c.instructions+=3;goto B65e4fa;
case 0x65e4fb:c.instructions+=2;goto B65e4fb;
case 0x65e4fc:c.instructions+=1;goto B65e4fc;
case 0x65e4ff:goto L65e4ff;
case 0x65e501:c.instructions+=6;goto B65e501;
case 0x65e502:c.instructions+=5;goto B65e502;
case 0x65e504:c.instructions+=4;goto B65e504;
case 0x65e507:c.instructions+=3;goto B65e507;
case 0x65e509:c.instructions+=2;goto B65e509;
case 0x65e50f:c.instructions+=1;goto B65e50f;
case 0x65e511:goto L65e511;
case 0x65e513:c.instructions+=2;goto B65e513;
case 0x65e514:c.instructions+=1;goto B65e514;
case 0x65e517:goto L65e517;
case 0x65e51b:goto L65e51b;
case 0x65e51e:c.instructions+=2;goto B65e51e;
case 0x65e520:c.instructions+=1;goto B65e520;
case 0x65e522:goto L65e522;
case 0x65e524:c.instructions+=2;goto B65e524;
case 0x65e525:c.instructions+=1;goto B65e525;
case 0x65e528:goto L65e528;
case 0x65e52c:goto L65e52c;
case 0x65e52d:c.instructions+=1;goto B65e52d;
case 0x65e52e:goto L65e52e;
case 0x65e533:c.instructions+=1;goto B65e533;
case 0x65e536:goto L65e536;
case 0x65e53b:c.instructions+=1;goto B65e53b;
case 0x65e53e:goto L65e53e;
case 0x65e543:c.instructions+=1;goto B65e543;
case 0x65e546:goto L65e546;
case 0x65e54b:c.instructions+=1;goto B65e54b;
case 0x65e54e:goto L65e54e;
case 0x65e550:c.instructions+=1;goto B65e550;
case 0x65e553:goto L65e553;
case 0x65e558:c.instructions+=1;goto B65e558;
case 0x65e55b:goto L65e55b;
case 0x65e560:c.instructions+=1;goto B65e560;
case 0x65e563:goto L65e563;
case 0x65e568:c.instructions+=1;goto B65e568;
case 0x65e56b:goto L65e56b;
case 0x65e570:c.instructions+=1;goto B65e570;
case 0x65e573:goto L65e573;
case 0x65e578:c.instructions+=1;goto B65e578;
case 0x65e57b:goto L65e57b;
case 0x65e580:c.instructions+=1;goto B65e580;
case 0x65e583:goto L65e583;
case 0x65e585:c.instructions+=1;goto B65e585;
case 0x65e588:goto L65e588;
case 0x65e58e:c.instructions+=1;goto B65e58e;
case 0x65e591:goto L65e591;
case 0x65e593:c.instructions+=8;goto B65e593;
case 0x65e594:c.instructions+=7;goto B65e594;
case 0x65e596:c.instructions+=6;goto B65e596;
case 0x65e597:c.instructions+=5;goto B65e597;
case 0x65e598:c.instructions+=4;goto B65e598;
case 0x65e59b:c.instructions+=3;goto B65e59b;
case 0x65e59d:c.instructions+=2;goto B65e59d;
case 0x65e59f:c.instructions+=1;goto B65e59f;
case 0x65e5a1:goto L65e5a1;
case 0x65e5a3:c.instructions+=2;goto B65e5a3;
case 0x65e5a4:c.instructions+=1;goto B65e5a4;
case 0x65e5a7:goto L65e5a7;
case 0x65e5aa:c.instructions+=2;goto B65e5aa;
case 0x65e5ac:c.instructions+=1;goto B65e5ac;
case 0x65e5ae:goto L65e5ae;
case 0x65e5b0:c.instructions+=2;goto B65e5b0;
case 0x65e5b1:c.instructions+=1;goto B65e5b1;
case 0x65e5b4:goto L65e5b4;
case 0x65e5b8:goto L65e5b8;
case 0x65e5bb:c.instructions+=6;goto B65e5bb;
case 0x65e5be:c.instructions+=5;goto B65e5be;
case 0x65e5bf:c.instructions+=4;goto B65e5bf;
case 0x65e5c1:c.instructions+=3;goto B65e5c1;
case 0x65e5c2:c.instructions+=2;goto B65e5c2;
case 0x65e5c3:c.instructions+=1;goto B65e5c3;
case 0x65e5c6:goto L65e5c6;
case 0x65e5c8:c.instructions+=8;goto B65e5c8;
case 0x65e5c9:c.instructions+=7;goto B65e5c9;
case 0x65e5cb:c.instructions+=6;goto B65e5cb;
case 0x65e5cc:c.instructions+=5;goto B65e5cc;
case 0x65e5cd:c.instructions+=4;goto B65e5cd;
case 0x65e5d0:c.instructions+=3;goto B65e5d0;
case 0x65e5d2:c.instructions+=2;goto B65e5d2;
case 0x65e5d4:c.instructions+=1;goto B65e5d4;
case 0x65e5d6:goto L65e5d6;
case 0x65e5d8:c.instructions+=2;goto B65e5d8;
case 0x65e5d9:c.instructions+=1;goto B65e5d9;
case 0x65e5dc:goto L65e5dc;
case 0x65e5df:c.instructions+=2;goto B65e5df;
case 0x65e5e1:c.instructions+=1;goto B65e5e1;
case 0x65e5e3:goto L65e5e3;
case 0x65e5e5:c.instructions+=2;goto B65e5e5;
case 0x65e5e6:c.instructions+=1;goto B65e5e6;
case 0x65e5e9:goto L65e5e9;
case 0x65e5ed:goto L65e5ed;
case 0x65e5ef:c.instructions+=2;goto B65e5ef;
case 0x65e5f2:c.instructions+=1;goto B65e5f2;
case 0x65e5f4:goto L65e5f4;
case 0x65e5f7:c.instructions+=2;goto B65e5f7;
case 0x65e5fa:c.instructions+=1;goto B65e5fa;
case 0x65e5fc:goto L65e5fc;
case 0x65e5ff:goto L65e5ff;
case 0x65e600:c.instructions+=4;goto B65e600;
case 0x65e602:c.instructions+=3;goto B65e602;
case 0x65e603:c.instructions+=2;goto B65e603;
case 0x65e604:c.instructions+=1;goto B65e604;
case 0x65e607:goto L65e607;
case 0x65e609:c.instructions+=6;goto B65e609;
case 0x65e60a:c.instructions+=5;goto B65e60a;
case 0x65e60c:c.instructions+=4;goto B65e60c;
case 0x65e60d:c.instructions+=3;goto B65e60d;
case 0x65e60f:c.instructions+=2;goto B65e60f;
case 0x65e613:c.instructions+=1;goto B65e613;
case 0x65e615:goto L65e615;
case 0x65e618:c.instructions+=3;goto B65e618;
case 0x65e61a:c.instructions+=2;goto B65e61a;
case 0x65e61b:c.instructions+=1;goto B65e61b;
case 0x65e61e:goto L65e61e;
case 0x65e621:c.instructions+=6;goto B65e621;
case 0x65e624:c.instructions+=5;goto B65e624;
case 0x65e626:c.instructions+=4;goto B65e626;
case 0x65e628:c.instructions+=3;goto B65e628;
case 0x65e629:c.instructions+=2;goto B65e629;
case 0x65e62a:c.instructions+=1;goto B65e62a;
case 0x65e62d:goto L65e62d;
case 0x65e62f:c.instructions+=9;goto B65e62f;
case 0x65e630:c.instructions+=8;goto B65e630;
case 0x65e632:c.instructions+=7;goto B65e632;
case 0x65e635:c.instructions+=6;goto B65e635;
case 0x65e638:c.instructions+=5;goto B65e638;
case 0x65e63b:c.instructions+=4;goto B65e63b;
case 0x65e63e:c.instructions+=3;goto B65e63e;
case 0x65e640:c.instructions+=2;goto B65e640;
case 0x65e641:c.instructions+=1;goto B65e641;
case 0x65e644:goto L65e644;
case 0x65e645:c.instructions+=1;goto B65e645;
case 0x65e648:goto L65e648;
case 0x65e64a:c.instructions+=8;goto B65e64a;
case 0x65e64b:c.instructions+=7;goto B65e64b;
case 0x65e64d:c.instructions+=6;goto B65e64d;
case 0x65e650:c.instructions+=5;goto B65e650;
case 0x65e653:c.instructions+=4;goto B65e653;
case 0x65e656:c.instructions+=3;goto B65e656;
case 0x65e658:c.instructions+=2;goto B65e658;
case 0x65e659:c.instructions+=1;goto B65e659;
case 0x65e65c:goto L65e65c;
case 0x65e65d:c.instructions+=1;goto B65e65d;
case 0x65e660:goto L65e660;
case 0x65e662:c.instructions+=9;goto B65e662;
case 0x65e663:c.instructions+=8;goto B65e663;
case 0x65e665:c.instructions+=7;goto B65e665;
case 0x65e668:c.instructions+=6;goto B65e668;
case 0x65e66b:c.instructions+=5;goto B65e66b;
case 0x65e66e:c.instructions+=4;goto B65e66e;
case 0x65e671:c.instructions+=3;goto B65e671;
case 0x65e673:c.instructions+=2;goto B65e673;
case 0x65e674:c.instructions+=1;goto B65e674;
case 0x65e677:goto L65e677;
case 0x65e678:c.instructions+=1;goto B65e678;
case 0x65e67b:goto L65e67b;
case 0x65e67d:c.instructions+=9;goto B65e67d;
case 0x65e67e:c.instructions+=8;goto B65e67e;
case 0x65e680:c.instructions+=7;goto B65e680;
case 0x65e683:c.instructions+=6;goto B65e683;
case 0x65e686:c.instructions+=5;goto B65e686;
case 0x65e689:c.instructions+=4;goto B65e689;
case 0x65e68c:c.instructions+=3;goto B65e68c;
case 0x65e68e:c.instructions+=2;goto B65e68e;
case 0x65e68f:c.instructions+=1;goto B65e68f;
case 0x65e692:goto L65e692;
case 0x65e693:c.instructions+=1;goto B65e693;
case 0x65e696:goto L65e696;
case 0x65e698:c.instructions+=9;goto B65e698;
case 0x65e699:c.instructions+=8;goto B65e699;
case 0x65e69b:c.instructions+=7;goto B65e69b;
case 0x65e69e:c.instructions+=6;goto B65e69e;
case 0x65e6a1:c.instructions+=5;goto B65e6a1;
case 0x65e6a4:c.instructions+=4;goto B65e6a4;
case 0x65e6a7:c.instructions+=3;goto B65e6a7;
case 0x65e6a9:c.instructions+=2;goto B65e6a9;
case 0x65e6aa:c.instructions+=1;goto B65e6aa;
case 0x65e6ad:goto L65e6ad;
case 0x65e6ae:c.instructions+=1;goto B65e6ae;
case 0x65e6b1:goto L65e6b1;
case 0x65e6b3:c.instructions+=9;goto B65e6b3;
case 0x65e6b4:c.instructions+=8;goto B65e6b4;
case 0x65e6b6:c.instructions+=7;goto B65e6b6;
case 0x65e6b9:c.instructions+=6;goto B65e6b9;
case 0x65e6bc:c.instructions+=5;goto B65e6bc;
case 0x65e6bf:c.instructions+=4;goto B65e6bf;
case 0x65e6c2:c.instructions+=3;goto B65e6c2;
case 0x65e6c4:c.instructions+=2;goto B65e6c4;
case 0x65e6c5:c.instructions+=1;goto B65e6c5;
case 0x65e6c8:goto L65e6c8;
case 0x65e6c9:c.instructions+=1;goto B65e6c9;
case 0x65e6cc:goto L65e6cc;
case 0x65e6ce:c.instructions+=10;goto B65e6ce;
case 0x65e6cf:c.instructions+=9;goto B65e6cf;
case 0x65e6d1:c.instructions+=8;goto B65e6d1;
case 0x65e6d4:c.instructions+=7;goto B65e6d4;
case 0x65e6d7:c.instructions+=6;goto B65e6d7;
case 0x65e6da:c.instructions+=5;goto B65e6da;
case 0x65e6dd:c.instructions+=4;goto B65e6dd;
case 0x65e6e0:c.instructions+=3;goto B65e6e0;
case 0x65e6e2:c.instructions+=2;goto B65e6e2;
case 0x65e6e3:c.instructions+=1;goto B65e6e3;
case 0x65e6e6:goto L65e6e6;
case 0x65e6e7:c.instructions+=1;goto B65e6e7;
case 0x65e6ea:goto L65e6ea;
case 0x65e6ec:c.instructions+=10;goto B65e6ec;
case 0x65e6ed:c.instructions+=9;goto B65e6ed;
case 0x65e6ef:c.instructions+=8;goto B65e6ef;
case 0x65e6f2:c.instructions+=7;goto B65e6f2;
case 0x65e6f5:c.instructions+=6;goto B65e6f5;
case 0x65e6f8:c.instructions+=5;goto B65e6f8;
case 0x65e6fb:c.instructions+=4;goto B65e6fb;
case 0x65e6fe:c.instructions+=3;goto B65e6fe;
case 0x65e700:c.instructions+=2;goto B65e700;
case 0x65e701:c.instructions+=1;goto B65e701;
case 0x65e704:goto L65e704;
case 0x65e705:c.instructions+=1;goto B65e705;
case 0x65e708:goto L65e708;
case 0x65e70a:c.instructions+=10;goto B65e70a;
case 0x65e70b:c.instructions+=9;goto B65e70b;
case 0x65e70d:c.instructions+=8;goto B65e70d;
case 0x65e710:c.instructions+=7;goto B65e710;
case 0x65e713:c.instructions+=6;goto B65e713;
case 0x65e716:c.instructions+=5;goto B65e716;
case 0x65e718:c.instructions+=4;goto B65e718;
case 0x65e719:c.instructions+=3;goto B65e719;
case 0x65e71c:c.instructions+=2;goto B65e71c;
case 0x65e71d:c.instructions+=1;goto B65e71d;
case 0x65e720:goto L65e720;
case 0x65e721:c.instructions+=1;goto B65e721;
case 0x65e724:goto L65e724;
case 0x65e726:c.instructions+=8;goto B65e726;
case 0x65e727:c.instructions+=7;goto B65e727;
case 0x65e729:c.instructions+=6;goto B65e729;
case 0x65e72c:c.instructions+=5;goto B65e72c;
case 0x65e72f:c.instructions+=4;goto B65e72f;
case 0x65e732:c.instructions+=3;goto B65e732;
case 0x65e734:c.instructions+=2;goto B65e734;
case 0x65e735:c.instructions+=1;goto B65e735;
case 0x65e738:goto L65e738;
case 0x65e739:c.instructions+=1;goto B65e739;
case 0x65e73c:goto L65e73c;
case 0x65e73e:c.instructions+=8;goto B65e73e;
case 0x65e73f:c.instructions+=7;goto B65e73f;
case 0x65e741:c.instructions+=6;goto B65e741;
case 0x65e744:c.instructions+=5;goto B65e744;
case 0x65e747:c.instructions+=4;goto B65e747;
case 0x65e74a:c.instructions+=3;goto B65e74a;
case 0x65e74c:c.instructions+=2;goto B65e74c;
case 0x65e74d:c.instructions+=1;goto B65e74d;
case 0x65e750:goto L65e750;
case 0x65e751:c.instructions+=1;goto B65e751;
case 0x65e754:goto L65e754;
case 0x65e756:c.instructions+=8;goto B65e756;
case 0x65e757:c.instructions+=7;goto B65e757;
case 0x65e759:c.instructions+=6;goto B65e759;
case 0x65e75c:c.instructions+=5;goto B65e75c;
case 0x65e75f:c.instructions+=4;goto B65e75f;
case 0x65e762:c.instructions+=3;goto B65e762;
case 0x65e764:c.instructions+=2;goto B65e764;
case 0x65e765:c.instructions+=1;goto B65e765;
case 0x65e768:goto L65e768;
case 0x65e769:c.instructions+=1;goto B65e769;
case 0x65e76c:goto L65e76c;
case 0x65e76e:c.instructions+=10;goto B65e76e;
case 0x65e76f:c.instructions+=9;goto B65e76f;
case 0x65e771:c.instructions+=8;goto B65e771;
case 0x65e774:c.instructions+=7;goto B65e774;
case 0x65e777:c.instructions+=6;goto B65e777;
case 0x65e77a:c.instructions+=5;goto B65e77a;
case 0x65e77d:c.instructions+=4;goto B65e77d;
case 0x65e780:c.instructions+=3;goto B65e780;
case 0x65e782:c.instructions+=2;goto B65e782;
case 0x65e783:c.instructions+=1;goto B65e783;
case 0x65e786:goto L65e786;
case 0x65e787:c.instructions+=1;goto B65e787;
case 0x65e78a:goto L65e78a;
case 0x65e78c:c.instructions+=10;goto B65e78c;
case 0x65e78d:c.instructions+=9;goto B65e78d;
case 0x65e78f:c.instructions+=8;goto B65e78f;
case 0x65e792:c.instructions+=7;goto B65e792;
case 0x65e795:c.instructions+=6;goto B65e795;
case 0x65e798:c.instructions+=5;goto B65e798;
case 0x65e79b:c.instructions+=4;goto B65e79b;
case 0x65e79e:c.instructions+=3;goto B65e79e;
case 0x65e7a0:c.instructions+=2;goto B65e7a0;
case 0x65e7a1:c.instructions+=1;goto B65e7a1;
case 0x65e7a4:goto L65e7a4;
case 0x65e7a5:c.instructions+=1;goto B65e7a5;
case 0x65e7a8:goto L65e7a8;
case 0x65e7aa:c.instructions+=7;goto B65e7aa;
case 0x65e7ab:c.instructions+=6;goto B65e7ab;
case 0x65e7ad:c.instructions+=5;goto B65e7ad;
case 0x65e7ae:c.instructions+=4;goto B65e7ae;
case 0x65e7b0:c.instructions+=3;goto B65e7b0;
case 0x65e7b3:c.instructions+=2;goto B65e7b3;
case 0x65e7b4:c.instructions+=1;goto B65e7b4;
case 0x65e7b6:goto L65e7b6;
case 0x65e7b9:goto L65e7b9;
case 0x65e7bd:c.instructions+=2;goto B65e7bd;
case 0x65e7c0:c.instructions+=1;goto B65e7c0;
case 0x65e7c2:goto L65e7c2;
case 0x65e7c6:goto L65e7c6;
case 0x65e7c9:c.instructions+=10;goto B65e7c9;
case 0x65e7cc:c.instructions+=9;goto B65e7cc;
case 0x65e7ce:c.instructions+=8;goto B65e7ce;
case 0x65e7d0:c.instructions+=7;goto B65e7d0;
case 0x65e7d3:c.instructions+=6;goto B65e7d3;
case 0x65e7d4:c.instructions+=5;goto B65e7d4;
case 0x65e7d7:c.instructions+=4;goto B65e7d7;
case 0x65e7d9:c.instructions+=3;goto B65e7d9;
case 0x65e7da:c.instructions+=2;goto B65e7da;
case 0x65e7db:c.instructions+=1;goto B65e7db;
case 0x65e7de:goto L65e7de;
case 0x65e7e0:c.instructions+=1;goto B65e7e0;
case 0x65e7e2:goto L65e7e2;
case 0x65e7e5:c.instructions+=3;goto B65e7e5;
case 0x65e7e6:c.instructions+=2;goto B65e7e6;
case 0x65e7e9:c.instructions+=1;goto B65e7e9;
case 0x65e7eb:goto L65e7eb;
case 0x65e7ed:goto L65e7ed;
case 0x65e7ee:c.instructions+=3;goto B65e7ee;
case 0x65e7ef:c.instructions+=2;goto B65e7ef;
case 0x65e7f0:c.instructions+=1;goto B65e7f0;
case 0x65e7f3:goto L65e7f3;
case 0x65e7f5:c.instructions+=10;goto B65e7f5;
case 0x65e7f6:c.instructions+=9;goto B65e7f6;
case 0x65e7f8:c.instructions+=8;goto B65e7f8;
case 0x65e7fb:c.instructions+=7;goto B65e7fb;
case 0x65e7fe:c.instructions+=6;goto B65e7fe;
case 0x65e801:c.instructions+=5;goto B65e801;
case 0x65e804:c.instructions+=4;goto B65e804;
case 0x65e807:c.instructions+=3;goto B65e807;
case 0x65e809:c.instructions+=2;goto B65e809;
case 0x65e80a:c.instructions+=1;goto B65e80a;
case 0x65e80d:goto L65e80d;
case 0x65e80e:c.instructions+=1;goto B65e80e;
case 0x65e811:goto L65e811;
case 0x65e813:c.instructions+=10;goto B65e813;
case 0x65e814:c.instructions+=9;goto B65e814;
case 0x65e816:c.instructions+=8;goto B65e816;
case 0x65e819:c.instructions+=7;goto B65e819;
case 0x65e81c:c.instructions+=6;goto B65e81c;
case 0x65e81f:c.instructions+=5;goto B65e81f;
case 0x65e822:c.instructions+=4;goto B65e822;
case 0x65e825:c.instructions+=3;goto B65e825;
case 0x65e827:c.instructions+=2;goto B65e827;
case 0x65e828:c.instructions+=1;goto B65e828;
case 0x65e82b:goto L65e82b;
case 0x65e82c:c.instructions+=1;goto B65e82c;
case 0x65e82f:goto L65e82f;
case 0x65e831:c.instructions+=10;goto B65e831;
case 0x65e832:c.instructions+=9;goto B65e832;
case 0x65e834:c.instructions+=8;goto B65e834;
case 0x65e837:c.instructions+=7;goto B65e837;
case 0x65e83a:c.instructions+=6;goto B65e83a;
case 0x65e83d:c.instructions+=5;goto B65e83d;
case 0x65e840:c.instructions+=4;goto B65e840;
case 0x65e843:c.instructions+=3;goto B65e843;
case 0x65e845:c.instructions+=2;goto B65e845;
case 0x65e846:c.instructions+=1;goto B65e846;
case 0x65e849:goto L65e849;
case 0x65e84a:c.instructions+=1;goto B65e84a;
case 0x65e84d:goto L65e84d;
case 0x65e84f:c.instructions+=12;goto B65e84f;
case 0x65e850:c.instructions+=11;goto B65e850;
case 0x65e852:c.instructions+=10;goto B65e852;
case 0x65e853:c.instructions+=9;goto B65e853;
case 0x65e854:c.instructions+=8;goto B65e854;
case 0x65e855:c.instructions+=7;goto B65e855;
case 0x65e858:c.instructions+=6;goto B65e858;
case 0x65e85b:c.instructions+=5;goto B65e85b;
case 0x65e85c:c.instructions+=4;goto B65e85c;
case 0x65e85e:c.instructions+=3;goto B65e85e;
case 0x65e861:c.instructions+=2;goto B65e861;
case 0x65e864:c.instructions+=1;goto B65e864;
case 0x65e86a:goto L65e86a;
case 0x65e86d:c.instructions+=1;goto B65e86d;
case 0x65e873:goto L65e873;
case 0x65e879:c.instructions+=3;goto B65e879;
case 0x65e87f:c.instructions+=2;goto B65e87f;
case 0x65e880:c.instructions+=1;goto B65e880;
case 0x65e882:goto L65e882;
case 0x65e886:c.instructions+=5;goto B65e886;
case 0x65e888:c.instructions+=4;goto B65e888;
case 0x65e88b:c.instructions+=3;goto B65e88b;
case 0x65e88c:c.instructions+=2;goto B65e88c;
case 0x65e88f:c.instructions+=1;goto B65e88f;
case 0x65e894:goto L65e894;
case 0x65e896:c.instructions+=4;goto B65e896;
case 0x65e898:c.instructions+=3;goto B65e898;
case 0x65e899:c.instructions+=2;goto B65e899;
case 0x65e89c:c.instructions+=1;goto B65e89c;
case 0x65e8a2:goto L65e8a2;
case 0x65e8a4:c.instructions+=3;goto B65e8a4;
case 0x65e8a7:c.instructions+=2;goto B65e8a7;
case 0x65e8a9:c.instructions+=1;goto B65e8a9;
case 0x65e8ab:goto L65e8ab;
case 0x65e8ad:goto L65e8ad;
case 0x65e8af:c.instructions+=1;goto B65e8af;
case 0x65e8b2:goto L65e8b2;
case 0x65e8b4:goto L65e8b4;
case 0x65e8ba:c.instructions+=5;goto B65e8ba;
case 0x65e8c0:c.instructions+=4;goto B65e8c0;
case 0x65e8c3:c.instructions+=3;goto B65e8c3;
case 0x65e8c5:c.instructions+=2;goto B65e8c5;
case 0x65e8c8:c.instructions+=1;goto B65e8c8;
case 0x65e8ca:goto L65e8ca;
case 0x65e8cc:goto L65e8cc;
case 0x65e8ce:c.instructions+=1;goto B65e8ce;
case 0x65e8d1:goto L65e8d1;
case 0x65e8d3:goto L65e8d3;
case 0x65e8d9:c.instructions+=2;goto B65e8d9;
case 0x65e8db:c.instructions+=1;goto B65e8db;
case 0x65e8dd:goto L65e8dd;
case 0x65e8de:c.instructions+=1;goto B65e8de;
case 0x65e8e3:goto L65e8e3;
case 0x65e8ea:c.instructions+=2;goto B65e8ea;
case 0x65e8ed:c.instructions+=1;goto B65e8ed;
case 0x65e8ee:goto L65e8ee;
case 0x65e8f1:c.instructions+=3;goto B65e8f1;
case 0x65e8f7:c.instructions+=2;goto B65e8f7;
case 0x65e8fd:c.instructions+=1;goto B65e8fd;
case 0x65e8ff:goto L65e8ff;
case 0x65e905:c.instructions+=8;goto B65e905;
case 0x65e90b:c.instructions+=7;goto B65e90b;
case 0x65e911:c.instructions+=6;goto B65e911;
case 0x65e913:c.instructions+=5;goto B65e913;
case 0x65e916:c.instructions+=4;goto B65e916;
case 0x65e919:c.instructions+=3;goto B65e919;
case 0x65e91b:c.instructions+=2;goto B65e91b;
case 0x65e91d:c.instructions+=1;goto B65e91d;
case 0x65e922:goto L65e922;
case 0x65e924:c.instructions+=2;goto B65e924;
case 0x65e925:c.instructions+=1;goto B65e925;
case 0x65e927:goto L65e927;
case 0x65e92b:c.instructions+=5;goto B65e92b;
case 0x65e92e:c.instructions+=4;goto B65e92e;
case 0x65e931:c.instructions+=3;goto B65e931;
case 0x65e933:c.instructions+=2;goto B65e933;
case 0x65e936:c.instructions+=1;goto B65e936;
case 0x65e938:goto L65e938;
case 0x65e93a:goto L65e93a;
case 0x65e93c:c.instructions+=1;goto B65e93c;
case 0x65e93e:goto L65e93e;
case 0x65e945:c.instructions+=9;goto B65e945;
case 0x65e94b:c.instructions+=8;goto B65e94b;
case 0x65e94e:c.instructions+=7;goto B65e94e;
case 0x65e954:c.instructions+=6;goto B65e954;
case 0x65e956:c.instructions+=5;goto B65e956;
case 0x65e959:c.instructions+=4;goto B65e959;
case 0x65e95f:c.instructions+=3;goto B65e95f;
case 0x65e961:c.instructions+=2;goto B65e961;
case 0x65e963:c.instructions+=1;goto B65e963;
case 0x65e966:goto L65e966;
case 0x65e967:goto L65e967;
case 0x65e96a:c.instructions+=4;goto B65e96a;
case 0x65e96b:c.instructions+=3;goto B65e96b;
case 0x65e96c:c.instructions+=2;goto B65e96c;
case 0x65e96d:c.instructions+=1;goto B65e96d;
case 0x65e970:goto L65e970;
case 0x65e972:c.instructions+=5;goto B65e972;
case 0x65e973:c.instructions+=4;goto B65e973;
case 0x65e975:c.instructions+=3;goto B65e975;
case 0x65e978:c.instructions+=2;goto B65e978;
case 0x65e97a:c.instructions+=1;goto B65e97a;
case 0x65e97c:goto L65e97c;
case 0x65e97e:c.instructions+=3;goto B65e97e;
case 0x65e984:c.instructions+=2;goto B65e984;
case 0x65e986:c.instructions+=1;goto B65e986;
case 0x65e988:goto L65e988;
case 0x65e98a:c.instructions+=2;goto B65e98a;
case 0x65e98e:c.instructions+=1;goto B65e98e;
case 0x65e990:goto L65e990;
case 0x65e993:c.instructions+=2;goto B65e993;
case 0x65e999:c.instructions+=1;goto B65e999;
case 0x65e99b:goto L65e99b;
case 0x65e9a1:c.instructions+=2;goto B65e9a1;
case 0x65e9a4:c.instructions+=1;goto B65e9a4;
case 0x65e9a6:goto L65e9a6;
case 0x65e9a8:goto L65e9a8;
case 0x65e9a9:c.instructions+=1;goto B65e9a9;
case 0x65e9ac:goto L65e9ac;
case 0x65e9ae:c.instructions+=9;goto B65e9ae;
case 0x65e9af:c.instructions+=8;goto B65e9af;
case 0x65e9b1:c.instructions+=7;goto B65e9b1;
case 0x65e9b2:c.instructions+=6;goto B65e9b2;
case 0x65e9b3:c.instructions+=5;goto B65e9b3;
case 0x65e9b6:c.instructions+=4;goto B65e9b6;
case 0x65e9b8:c.instructions+=3;goto B65e9b8;
case 0x65e9bb:c.instructions+=2;goto B65e9bb;
case 0x65e9bd:c.instructions+=1;goto B65e9bd;
case 0x65e9c2:goto L65e9c2;
case 0x65e9c4:c.instructions+=2;goto B65e9c4;
case 0x65e9c6:c.instructions+=1;goto B65e9c6;
case 0x65e9c8:goto L65e9c8;
case 0x65e9cd:c.instructions+=1;goto B65e9cd;
case 0x65e9d2:goto L65e9d2;
case 0x65e9d4:c.instructions+=2;goto B65e9d4;
case 0x65e9d7:c.instructions+=1;goto B65e9d7;
case 0x65e9dd:goto L65e9dd;
case 0x65e9e4:goto L65e9e4;
case 0x65e9e7:c.instructions+=5;goto B65e9e7;
case 0x65e9e9:c.instructions+=4;goto B65e9e9;
case 0x65e9ec:c.instructions+=3;goto B65e9ec;
case 0x65e9ef:c.instructions+=2;goto B65e9ef;
case 0x65e9f0:c.instructions+=1;goto B65e9f0;
case 0x65e9f3:goto L65e9f3;
case 0x65e9f8:goto L65e9f8;
case 0x65e9fb:c.instructions+=4;goto B65e9fb;
case 0x65e9fd:c.instructions+=3;goto B65e9fd;
case 0x65ea00:c.instructions+=2;goto B65ea00;
case 0x65ea01:c.instructions+=1;goto B65ea01;
case 0x65ea04:goto L65ea04;
case 0x65ea09:goto L65ea09;
case 0x65ea0c:c.instructions+=5;goto B65ea0c;
case 0x65ea0e:c.instructions+=4;goto B65ea0e;
case 0x65ea11:c.instructions+=3;goto B65ea11;
case 0x65ea14:c.instructions+=2;goto B65ea14;
case 0x65ea15:c.instructions+=1;goto B65ea15;
case 0x65ea18:goto L65ea18;
case 0x65ea1d:goto L65ea1d;
case 0x65ea20:c.instructions+=4;goto B65ea20;
case 0x65ea22:c.instructions+=3;goto B65ea22;
case 0x65ea25:c.instructions+=2;goto B65ea25;
case 0x65ea26:c.instructions+=1;goto B65ea26;
case 0x65ea29:goto L65ea29;
case 0x65ea2e:goto L65ea2e;
case 0x65ea31:c.instructions+=5;goto B65ea31;
case 0x65ea33:c.instructions+=4;goto B65ea33;
case 0x65ea36:c.instructions+=3;goto B65ea36;
case 0x65ea39:c.instructions+=2;goto B65ea39;
case 0x65ea3a:c.instructions+=1;goto B65ea3a;
case 0x65ea3d:goto L65ea3d;
case 0x65ea42:goto L65ea42;
case 0x65ea45:c.instructions+=6;goto B65ea45;
case 0x65ea47:c.instructions+=5;goto B65ea47;
case 0x65ea48:c.instructions+=4;goto B65ea48;
case 0x65ea4b:c.instructions+=3;goto B65ea4b;
case 0x65ea4e:c.instructions+=2;goto B65ea4e;
case 0x65ea4f:c.instructions+=1;goto B65ea4f;
case 0x65ea52:goto L65ea52;
case 0x65ea57:goto L65ea57;
case 0x65ea5a:c.instructions+=5;goto B65ea5a;
case 0x65ea5c:c.instructions+=4;goto B65ea5c;
case 0x65ea5f:c.instructions+=3;goto B65ea5f;
case 0x65ea62:c.instructions+=2;goto B65ea62;
case 0x65ea63:c.instructions+=1;goto B65ea63;
case 0x65ea69:goto L65ea69;
case 0x65ea6e:goto L65ea6e;
case 0x65ea71:c.instructions+=4;goto B65ea71;
case 0x65ea73:c.instructions+=3;goto B65ea73;
case 0x65ea76:c.instructions+=2;goto B65ea76;
case 0x65ea77:c.instructions+=1;goto B65ea77;
case 0x65ea7d:goto L65ea7d;
case 0x65ea82:goto L65ea82;
case 0x65ea85:c.instructions+=5;goto B65ea85;
case 0x65ea87:c.instructions+=4;goto B65ea87;
case 0x65ea8a:c.instructions+=3;goto B65ea8a;
case 0x65ea8d:c.instructions+=2;goto B65ea8d;
case 0x65ea8e:c.instructions+=1;goto B65ea8e;
case 0x65ea94:goto L65ea94;
case 0x65ea99:goto L65ea99;
case 0x65ea9c:c.instructions+=4;goto B65ea9c;
case 0x65ea9e:c.instructions+=3;goto B65ea9e;
case 0x65eaa1:c.instructions+=2;goto B65eaa1;
case 0x65eaa2:c.instructions+=1;goto B65eaa2;
case 0x65eaa8:goto L65eaa8;
case 0x65eaaa:goto L65eaaa;
case 0x65eaad:c.instructions+=5;goto B65eaad;
case 0x65eaaf:c.instructions+=4;goto B65eaaf;
case 0x65eab2:c.instructions+=3;goto B65eab2;
case 0x65eab5:c.instructions+=2;goto B65eab5;
case 0x65eab6:c.instructions+=1;goto B65eab6;
case 0x65eabc:goto L65eabc;
case 0x65eabe:goto L65eabe;
case 0x65eac1:c.instructions+=2;goto B65eac1;
case 0x65eac5:c.instructions+=1;goto B65eac5;
case 0x65eac7:goto L65eac7;
case 0x65eac9:c.instructions+=1;goto B65eac9;
case 0x65eacb:goto L65eacb;
case 0x65eace:c.instructions+=4;goto B65eace;
case 0x65ead1:c.instructions+=3;goto B65ead1;
case 0x65ead3:c.instructions+=2;goto B65ead3;
case 0x65ead4:c.instructions+=1;goto B65ead4;
case 0x65ead7:goto L65ead7;
case 0x65ead9:c.instructions+=4;goto B65ead9;
case 0x65eada:c.instructions+=3;goto B65eada;
case 0x65eadd:c.instructions+=2;goto B65eadd;
case 0x65eade:c.instructions+=1;goto B65eade;
case 0x65eae4:goto L65eae4;
case 0x65eae6:goto L65eae6;
case 0x65eae9:c.instructions+=5;goto B65eae9;
case 0x65eaec:c.instructions+=4;goto B65eaec;
case 0x65eaee:c.instructions+=3;goto B65eaee;
case 0x65eaf1:c.instructions+=2;goto B65eaf1;
case 0x65eaf2:c.instructions+=1;goto B65eaf2;
case 0x65eaf8:goto L65eaf8;
case 0x65eafa:goto L65eafa;
case 0x65eafd:c.instructions+=5;goto B65eafd;
case 0x65eb00:c.instructions+=4;goto B65eb00;
case 0x65eb02:c.instructions+=3;goto B65eb02;
case 0x65eb05:c.instructions+=2;goto B65eb05;
case 0x65eb06:c.instructions+=1;goto B65eb06;
case 0x65eb0c:goto L65eb0c;
case 0x65eb0e:goto L65eb0e;
case 0x65eb11:c.instructions+=5;goto B65eb11;
case 0x65eb14:c.instructions+=4;goto B65eb14;
case 0x65eb16:c.instructions+=3;goto B65eb16;
case 0x65eb19:c.instructions+=2;goto B65eb19;
case 0x65eb1a:c.instructions+=1;goto B65eb1a;
case 0x65eb20:goto L65eb20;
case 0x65eb22:goto L65eb22;
case 0x65eb27:goto L65eb27;
case 0x65eb29:c.instructions+=1;goto B65eb29;
case 0x65eb2b:goto L65eb2b;
case 0x65eb2e:c.instructions+=2;goto B65eb2e;
case 0x65eb30:c.instructions+=1;goto B65eb30;
case 0x65eb36:goto L65eb36;
case 0x65eb37:c.instructions+=3;goto B65eb37;
case 0x65eb38:c.instructions+=2;goto B65eb38;
case 0x65eb39:c.instructions+=1;goto B65eb39;
case 0x65eb78:goto L65eb78;
case 0x65eb7a:c.instructions+=7;goto B65eb7a;
case 0x65eb7c:c.instructions+=6;goto B65eb7c;
case 0x65eb82:c.instructions+=5;goto B65eb82;
case 0x65eb85:c.instructions+=4;goto B65eb85;
case 0x65eb88:c.instructions+=3;goto B65eb88;
case 0x65eb8b:c.instructions+=2;goto B65eb8b;
case 0x65eb8e:c.instructions+=1;goto B65eb8e;
case 0x65eb8f:goto L65eb8f;
case 0x65eb91:c.instructions+=17;goto B65eb91;
case 0x65eb92:c.instructions+=16;goto B65eb92;
case 0x65eb94:c.instructions+=15;goto B65eb94;
case 0x65eb97:c.instructions+=14;goto B65eb97;
case 0x65eb98:c.instructions+=13;goto B65eb98;
case 0x65eb99:c.instructions+=12;goto B65eb99;
case 0x65eb9a:c.instructions+=11;goto B65eb9a;
case 0x65eb9d:c.instructions+=10;goto B65eb9d;
case 0x65eb9f:c.instructions+=9;goto B65eb9f;
case 0x65eba1:c.instructions+=8;goto B65eba1;
case 0x65eba4:c.instructions+=7;goto B65eba4;
case 0x65eba7:c.instructions+=6;goto B65eba7;
case 0x65ebaa:c.instructions+=5;goto B65ebaa;
case 0x65ebad:c.instructions+=4;goto B65ebad;
case 0x65ebaf:c.instructions+=3;goto B65ebaf;
case 0x65ebb2:c.instructions+=2;goto B65ebb2;
case 0x65ebb5:c.instructions+=1;goto B65ebb5;
case 0x65ebb7:goto L65ebb7;
case 0x65ebbe:c.instructions+=1;goto B65ebbe;
case 0x65ebc0:goto L65ebc0;
case 0x65ebc2:c.instructions+=3;goto B65ebc2;
case 0x65ebc3:c.instructions+=2;goto B65ebc3;
case 0x65ebc5:c.instructions+=1;goto B65ebc5;
case 0x65ebc7:goto L65ebc7;
case 0x65ebca:goto L65ebca;
case 0x65ebcd:goto L65ebcd;
case 0x65ebcf:c.instructions+=1;goto B65ebcf;
case 0x65ebd5:goto L65ebd5;
case 0x65ebd8:c.instructions+=1;goto B65ebd8;
case 0x65ebde:goto L65ebde;
case 0x65ebe1:c.instructions+=1;goto B65ebe1;
case 0x65ebe3:goto L65ebe3;
case 0x65ebe6:c.instructions+=1;goto B65ebe6;
case 0x65ebec:goto L65ebec;
case 0x65ebf0:c.instructions+=4;goto B65ebf0;
case 0x65ebf3:c.instructions+=3;goto B65ebf3;
case 0x65ebf6:c.instructions+=2;goto B65ebf6;
case 0x65ebf8:c.instructions+=1;goto B65ebf8;
case 0x65ebfe:goto L65ebfe;
case 0x65ec02:c.instructions+=3;goto B65ec02;
case 0x65ec04:c.instructions+=2;goto B65ec04;
case 0x65ec06:c.instructions+=1;goto B65ec06;
case 0x65ec08:goto L65ec08;
case 0x65ec0a:c.instructions+=5;goto B65ec0a;
case 0x65ec0d:c.instructions+=4;goto B65ec0d;
case 0x65ec10:c.instructions+=3;goto B65ec10;
case 0x65ec13:c.instructions+=2;goto B65ec13;
case 0x65ec14:c.instructions+=1;goto B65ec14;
case 0x65ec19:goto L65ec19;
case 0x65ec1b:c.instructions+=2;goto B65ec1b;
case 0x65ec1e:c.instructions+=1;goto B65ec1e;
case 0x65ec24:goto L65ec24;
case 0x65ec27:c.instructions+=2;goto B65ec27;
case 0x65ec2a:c.instructions+=1;goto B65ec2a;
case 0x65ec2c:goto L65ec2c;
case 0x65ec2f:c.instructions+=1;goto B65ec2f;
case 0x65ec31:goto L65ec31;
case 0x65ec36:goto L65ec36;
case 0x65ec39:c.instructions+=1;goto B65ec39;
case 0x65ec3f:goto L65ec3f;
case 0x65ec45:goto L65ec45;
case 0x65ec48:c.instructions+=1;goto B65ec48;
case 0x65ec4e:goto L65ec4e;
case 0x65ec51:c.instructions+=1;goto B65ec51;
case 0x65ec53:goto L65ec53;
case 0x65ec56:c.instructions+=1;goto B65ec56;
case 0x65ec5c:goto L65ec5c;
case 0x65ec5e:c.instructions+=1;goto B65ec5e;
case 0x65ec64:goto L65ec64;
case 0x65ec67:c.instructions+=2;goto B65ec67;
case 0x65ec6a:c.instructions+=1;goto B65ec6a;
case 0x65ec6d:goto L65ec6d;
case 0x65ec70:c.instructions+=1;goto B65ec70;
case 0x65ec72:goto L65ec72;
case 0x65ec74:c.instructions+=3;goto B65ec74;
case 0x65ec76:c.instructions+=2;goto B65ec76;
case 0x65ec78:c.instructions+=1;goto B65ec78;
case 0x65ec7a:goto L65ec7a;
case 0x65ec7c:c.instructions+=2;goto B65ec7c;
case 0x65ec7d:c.instructions+=1;goto B65ec7d;
case 0x65ec80:goto L65ec80;
case 0x65ec82:c.instructions+=4;goto B65ec82;
case 0x65ec88:c.instructions+=3;goto B65ec88;
case 0x65ec8a:c.instructions+=2;goto B65ec8a;
case 0x65ec8d:c.instructions+=1;goto B65ec8d;
case 0x65ec90:goto L65ec90;
case 0x65ec93:c.instructions+=2;goto B65ec93;
case 0x65ec95:c.instructions+=1;goto B65ec95;
case 0x65ec97:goto L65ec97;
case 0x65ec99:goto L65ec99;
case 0x65ec9c:c.instructions+=2;goto B65ec9c;
case 0x65ec9f:c.instructions+=1;goto B65ec9f;
case 0x65eca1:goto L65eca1;
case 0x65eca3:goto L65eca3;
case 0x65eca5:c.instructions+=1;goto B65eca5;
case 0x65ecab:goto L65ecab;
case 0x65ecae:c.instructions+=2;goto B65ecae;
case 0x65ecb1:c.instructions+=1;goto B65ecb1;
case 0x65ecb4:goto L65ecb4;
case 0x65ecb7:c.instructions+=1;goto B65ecb7;
case 0x65ecb9:goto L65ecb9;
case 0x65ecbb:c.instructions+=3;goto B65ecbb;
case 0x65ecbd:c.instructions+=2;goto B65ecbd;
case 0x65ecbf:c.instructions+=1;goto B65ecbf;
case 0x65ecc1:goto L65ecc1;
case 0x65ecc3:c.instructions+=2;goto B65ecc3;
case 0x65ecc4:c.instructions+=1;goto B65ecc4;
case 0x65ecc7:goto L65ecc7;
case 0x65ecc9:c.instructions+=4;goto B65ecc9;
case 0x65eccf:c.instructions+=3;goto B65eccf;
case 0x65ecd1:c.instructions+=2;goto B65ecd1;
case 0x65ecd4:c.instructions+=1;goto B65ecd4;
case 0x65ecd7:goto L65ecd7;
case 0x65ecda:c.instructions+=2;goto B65ecda;
case 0x65ecdc:c.instructions+=1;goto B65ecdc;
case 0x65ecde:goto L65ecde;
case 0x65ece0:goto L65ece0;
case 0x65ece3:c.instructions+=2;goto B65ece3;
case 0x65ece6:c.instructions+=1;goto B65ece6;
case 0x65ece8:goto L65ece8;
case 0x65eceb:c.instructions+=1;goto B65eceb;
case 0x65ecf0:goto L65ecf0;
case 0x65ecf2:c.instructions+=1;goto B65ecf2;
case 0x65ecf8:goto L65ecf8;
case 0x65ecfb:c.instructions+=2;goto B65ecfb;
case 0x65ecfe:c.instructions+=1;goto B65ecfe;
case 0x65ed01:goto L65ed01;
case 0x65ed04:c.instructions+=1;goto B65ed04;
case 0x65ed06:goto L65ed06;
case 0x65ed08:c.instructions+=3;goto B65ed08;
case 0x65ed0a:c.instructions+=2;goto B65ed0a;
case 0x65ed0c:c.instructions+=1;goto B65ed0c;
case 0x65ed0e:goto L65ed0e;
case 0x65ed10:c.instructions+=2;goto B65ed10;
case 0x65ed11:c.instructions+=1;goto B65ed11;
case 0x65ed14:goto L65ed14;
case 0x65ed16:c.instructions+=4;goto B65ed16;
case 0x65ed1c:c.instructions+=3;goto B65ed1c;
case 0x65ed1e:c.instructions+=2;goto B65ed1e;
case 0x65ed21:c.instructions+=1;goto B65ed21;
case 0x65ed24:goto L65ed24;
case 0x65ed27:c.instructions+=2;goto B65ed27;
case 0x65ed29:c.instructions+=1;goto B65ed29;
case 0x65ed2b:goto L65ed2b;
case 0x65ed2d:goto L65ed2d;
case 0x65ed30:c.instructions+=2;goto B65ed30;
case 0x65ed33:c.instructions+=1;goto B65ed33;
case 0x65ed35:goto L65ed35;
case 0x65ed37:goto L65ed37;
case 0x65ed39:c.instructions+=1;goto B65ed39;
case 0x65ed3f:goto L65ed3f;
case 0x65ed42:goto L65ed42;
case 0x65ed45:c.instructions+=1;goto B65ed45;
case 0x65ed47:goto L65ed47;
case 0x65ed4a:c.instructions+=4;goto B65ed4a;
case 0x65ed4c:c.instructions+=3;goto B65ed4c;
case 0x65ed4e:c.instructions+=2;goto B65ed4e;
case 0x65ed50:c.instructions+=1;goto B65ed50;
case 0x65ed52:goto L65ed52;
case 0x65ed54:c.instructions+=1;goto B65ed54;
case 0x65ed57:goto L65ed57;
case 0x65ed59:c.instructions+=3;goto B65ed59;
case 0x65ed5a:c.instructions+=2;goto B65ed5a;
case 0x65ed5c:c.instructions+=1;goto B65ed5c;
case 0x65ed5e:goto L65ed5e;
case 0x65ed60:c.instructions+=6;goto B65ed60;
case 0x65ed63:c.instructions+=5;goto B65ed63;
case 0x65ed64:c.instructions+=4;goto B65ed64;
case 0x65ed65:c.instructions+=3;goto B65ed65;
case 0x65ed66:c.instructions+=2;goto B65ed66;
case 0x65ed69:c.instructions+=1;goto B65ed69;
case 0x65ed6e:goto L65ed6e;
case 0x65ed70:c.instructions+=2;goto B65ed70;
case 0x65ed73:c.instructions+=1;goto B65ed73;
case 0x65ed79:goto L65ed79;
case 0x65ed7c:c.instructions+=3;goto B65ed7c;
case 0x65ed7e:c.instructions+=2;goto B65ed7e;
case 0x65ed7f:c.instructions+=1;goto B65ed7f;
case 0x65ed82:goto L65ed82;
case 0x65ed85:c.instructions+=3;goto B65ed85;
case 0x65ed87:c.instructions+=2;goto B65ed87;
case 0x65ed89:c.instructions+=1;goto B65ed89;
case 0x65ed8c:goto L65ed8c;
case 0x65ed8e:goto L65ed8e;
case 0x65ed90:c.instructions+=1;goto B65ed90;
case 0x65ed93:goto L65ed93;
case 0x65ed95:goto L65ed95;
case 0x65ed98:goto L65ed98;
case 0x65ed9a:c.instructions+=6;goto B65ed9a;
case 0x65eda0:c.instructions+=5;goto B65eda0;
case 0x65eda2:c.instructions+=4;goto B65eda2;
case 0x65eda5:c.instructions+=3;goto B65eda5;
case 0x65eda8:c.instructions+=2;goto B65eda8;
case 0x65edac:c.instructions+=1;goto B65edac;
case 0x65edaf:goto L65edaf;
case 0x65edb2:c.instructions+=2;goto B65edb2;
case 0x65edb4:c.instructions+=1;goto B65edb4;
case 0x65edb6:goto L65edb6;
case 0x65edb8:goto L65edb8;
case 0x65edbb:c.instructions+=3;goto B65edbb;
case 0x65edbe:c.instructions+=2;goto B65edbe;
case 0x65edc1:c.instructions+=1;goto B65edc1;
case 0x65edc7:goto L65edc7;
case 0x65edca:c.instructions+=1;goto B65edca;
case 0x65edcc:goto L65edcc;
case 0x65edcf:c.instructions+=4;goto B65edcf;
case 0x65edd3:c.instructions+=3;goto B65edd3;
case 0x65edd6:c.instructions+=2;goto B65edd6;
case 0x65edd7:c.instructions+=1;goto B65edd7;
case 0x65edd9:goto L65edd9;
case 0x65edda:c.instructions+=1;goto B65edda;
case 0x65eddc:goto L65eddc;
case 0x65eddd:c.instructions+=1;goto B65eddd;
case 0x65eddf:goto L65eddf;
case 0x65ede6:c.instructions+=1;goto B65ede6;
case 0x65ede8:goto L65ede8;
case 0x65edeb:c.instructions+=4;goto B65edeb;
case 0x65edee:c.instructions+=3;goto B65edee;
case 0x65edf0:c.instructions+=2;goto B65edf0;
case 0x65edf3:c.instructions+=1;goto B65edf3;
case 0x65edf5:goto L65edf5;
case 0x65edfc:goto L65edfc;
case 0x65edff:c.instructions+=2;goto B65edff;
case 0x65ee01:c.instructions+=1;goto B65ee01;
case 0x65ee03:goto L65ee03;
case 0x65ee05:c.instructions+=2;goto B65ee05;
case 0x65ee06:c.instructions+=1;goto B65ee06;
case 0x65ee09:goto L65ee09;
case 0x65ee0c:c.instructions+=5;goto B65ee0c;
case 0x65ee0d:c.instructions+=4;goto B65ee0d;
case 0x65ee0e:c.instructions+=3;goto B65ee0e;
case 0x65ee0f:c.instructions+=2;goto B65ee0f;
case 0x65ee10:c.instructions+=1;goto B65ee10;
case 0x65ee13:goto L65ee13;
case 0x65ee15:c.instructions+=11;goto B65ee15;
case 0x65ee16:c.instructions+=10;goto B65ee16;
case 0x65ee18:c.instructions+=9;goto B65ee18;
case 0x65ee1b:c.instructions+=8;goto B65ee1b;
case 0x65ee1e:c.instructions+=7;goto B65ee1e;
case 0x65ee21:c.instructions+=6;goto B65ee21;
case 0x65ee22:c.instructions+=5;goto B65ee22;
case 0x65ee25:c.instructions+=4;goto B65ee25;
case 0x65ee26:c.instructions+=3;goto B65ee26;
case 0x65ee29:c.instructions+=2;goto B65ee29;
case 0x65ee2a:c.instructions+=1;goto B65ee2a;
case 0x65ee2f:goto L65ee2f;
case 0x65ee30:c.instructions+=1;goto B65ee30;
case 0x65ee33:goto L65ee33;
case 0x65ee35:c.instructions+=3;goto B65ee35;
case 0x65ee39:c.instructions+=2;goto B65ee39;
case 0x65ee3f:c.instructions+=1;goto B65ee3f;
case 0x65ee40:goto L65ee40;
case 0x65ee42:c.instructions+=5;goto B65ee42;
case 0x65ee43:c.instructions+=4;goto B65ee43;
case 0x65ee45:c.instructions+=3;goto B65ee45;
case 0x65ee47:c.instructions+=2;goto B65ee47;
case 0x65ee4a:c.instructions+=1;goto B65ee4a;
case 0x65ee4c:goto L65ee4c;
case 0x65ee4e:goto L65ee4e;
case 0x65ee51:c.instructions+=1;goto B65ee51;
case 0x65ee53:goto L65ee53;
case 0x65ee56:c.instructions+=1;goto B65ee56;
case 0x65ee58:goto L65ee58;
case 0x65ee5b:c.instructions+=1;goto B65ee5b;
case 0x65ee5d:goto L65ee5d;
case 0x65ee60:c.instructions+=2;goto B65ee60;
case 0x65ee62:c.instructions+=1;goto B65ee62;
case 0x65ee64:goto L65ee64;
case 0x65ee66:c.instructions+=2;goto B65ee66;
case 0x65ee67:c.instructions+=1;goto B65ee67;
case 0x65ee6a:goto L65ee6a;
case 0x65ee6e:goto L65ee6e;
case 0x65ee6f:c.instructions+=1;goto B65ee6f;
case 0x65ee70:goto L65ee70;
case 0x65ee72:c.instructions+=10;goto B65ee72;
case 0x65ee73:c.instructions+=9;goto B65ee73;
case 0x65ee75:c.instructions+=8;goto B65ee75;
case 0x65ee78:c.instructions+=7;goto B65ee78;
case 0x65ee7b:c.instructions+=6;goto B65ee7b;
case 0x65ee7c:c.instructions+=5;goto B65ee7c;
case 0x65ee7d:c.instructions+=4;goto B65ee7d;
case 0x65ee80:c.instructions+=3;goto B65ee80;
case 0x65ee82:c.instructions+=2;goto B65ee82;
case 0x65ee83:c.instructions+=1;goto B65ee83;
case 0x65ee85:goto L65ee85;
case 0x65ee88:c.instructions+=3;goto B65ee88;
case 0x65ee8a:c.instructions+=2;goto B65ee8a;
case 0x65ee8d:c.instructions+=1;goto B65ee8d;
case 0x65ee8f:goto L65ee8f;
case 0x65ee91:c.instructions+=2;goto B65ee91;
case 0x65ee94:c.instructions+=1;goto B65ee94;
case 0x65ee97:goto L65ee97;
case 0x65ee9a:c.instructions+=4;goto B65ee9a;
case 0x65ee9c:c.instructions+=3;goto B65ee9c;
case 0x65ee9d:c.instructions+=2;goto B65ee9d;
case 0x65eea0:c.instructions+=1;goto B65eea0;
case 0x65eea2:goto L65eea2;
case 0x65eea5:c.instructions+=1;goto B65eea5;
case 0x65eea7:goto L65eea7;
case 0x65eea9:c.instructions+=4;goto B65eea9;
case 0x65eeac:c.instructions+=3;goto B65eeac;
case 0x65eeae:c.instructions+=2;goto B65eeae;
case 0x65eeb1:c.instructions+=1;goto B65eeb1;
case 0x65eeb3:goto L65eeb3;
case 0x65eeb6:goto L65eeb6;
case 0x65eeb8:c.instructions+=1;goto B65eeb8;
case 0x65eebe:goto L65eebe;
case 0x65eec0:c.instructions+=1;goto B65eec0;
case 0x65eec6:goto L65eec6;
case 0x65eec9:c.instructions+=1;goto B65eec9;
case 0x65eecf:goto L65eecf;
case 0x65eed2:c.instructions+=1;goto B65eed2;
case 0x65eed8:goto L65eed8;
case 0x65eedb:c.instructions+=1;goto B65eedb;
case 0x65eee1:goto L65eee1;
case 0x65eee5:c.instructions+=2;goto B65eee5;
case 0x65eee7:c.instructions+=1;goto B65eee7;
case 0x65eee9:goto L65eee9;
case 0x65eeec:c.instructions+=2;goto B65eeec;
case 0x65eeee:c.instructions+=1;goto B65eeee;
case 0x65eef1:goto L65eef1;
case 0x65eef3:c.instructions+=6;goto B65eef3;
case 0x65eef7:c.instructions+=5;goto B65eef7;
case 0x65eefb:c.instructions+=4;goto B65eefb;
case 0x65eefe:c.instructions+=3;goto B65eefe;
case 0x65ef01:c.instructions+=2;goto B65ef01;
case 0x65ef03:c.instructions+=1;goto B65ef03;
case 0x65ef09:goto L65ef09;
case 0x65ef0c:c.instructions+=2;goto B65ef0c;
case 0x65ef0f:c.instructions+=1;goto B65ef0f;
case 0x65ef15:goto L65ef15;
case 0x65ef19:c.instructions+=3;goto B65ef19;
case 0x65ef1b:c.instructions+=2;goto B65ef1b;
case 0x65ef1d:c.instructions+=1;goto B65ef1d;
case 0x65ef1f:goto L65ef1f;
case 0x65ef22:c.instructions+=1;goto B65ef22;
case 0x65ef25:goto L65ef25;
case 0x65ef28:c.instructions+=2;goto B65ef28;
case 0x65ef2b:c.instructions+=1;goto B65ef2b;
case 0x65ef2d:goto L65ef2d;
case 0x65ef31:c.instructions+=1;goto B65ef31;
case 0x65ef33:goto L65ef33;
case 0x65ef35:c.instructions+=1;goto B65ef35;
case 0x65ef38:goto L65ef38;
case 0x65ef3a:c.instructions+=7;goto B65ef3a;
case 0x65ef3d:c.instructions+=6;goto B65ef3d;
case 0x65ef40:c.instructions+=5;goto B65ef40;
case 0x65ef43:c.instructions+=4;goto B65ef43;
case 0x65ef46:c.instructions+=3;goto B65ef46;
case 0x65ef49:c.instructions+=2;goto B65ef49;
case 0x65ef4c:c.instructions+=1;goto B65ef4c;
case 0x65ef51:goto L65ef51;
case 0x65ef54:c.instructions+=4;goto B65ef54;
case 0x65ef57:c.instructions+=3;goto B65ef57;
case 0x65ef5a:c.instructions+=2;goto B65ef5a;
case 0x65ef5d:c.instructions+=1;goto B65ef5d;
case 0x65ef5f:goto L65ef5f;
case 0x65ef62:c.instructions+=3;goto B65ef62;
case 0x65ef65:c.instructions+=2;goto B65ef65;
case 0x65ef68:c.instructions+=1;goto B65ef68;
case 0x65ef6a:goto L65ef6a;
case 0x65ef6f:goto L65ef6f;
case 0x65ef71:c.instructions+=7;goto B65ef71;
case 0x65ef74:c.instructions+=6;goto B65ef74;
case 0x65ef77:c.instructions+=5;goto B65ef77;
case 0x65ef7a:c.instructions+=4;goto B65ef7a;
case 0x65ef7c:c.instructions+=3;goto B65ef7c;
case 0x65ef7d:c.instructions+=2;goto B65ef7d;
case 0x65ef80:c.instructions+=1;goto B65ef80;
case 0x65ef86:goto L65ef86;
case 0x65ef87:c.instructions+=1;goto B65ef87;
case 0x65ef8d:goto L65ef8d;
case 0x65ef8e:c.instructions+=1;goto B65ef8e;
case 0x65ef94:goto L65ef94;
case 0x65ef97:c.instructions+=8;goto B65ef97;
case 0x65ef9a:c.instructions+=7;goto B65ef9a;
case 0x65ef9d:c.instructions+=6;goto B65ef9d;
case 0x65efa1:c.instructions+=5;goto B65efa1;
case 0x65efa5:c.instructions+=4;goto B65efa5;
case 0x65efa7:c.instructions+=3;goto B65efa7;
case 0x65efa9:c.instructions+=2;goto B65efa9;
case 0x65efab:c.instructions+=1;goto B65efab;
case 0x65efad:goto L65efad;
case 0x65efaf:c.instructions+=1;goto B65efaf;
case 0x65efb1:goto L65efb1;
case 0x65efb5:c.instructions+=2;goto B65efb5;
case 0x65efb9:c.instructions+=1;goto B65efb9;
case 0x65efbb:goto L65efbb;
case 0x65efbe:goto L65efbe;
case 0x65efc0:c.instructions+=1;goto B65efc0;
case 0x65efc2:goto L65efc2;
case 0x65efc4:c.instructions+=2;goto B65efc4;
case 0x65efc7:c.instructions+=1;goto B65efc7;
case 0x65efc9:goto L65efc9;
case 0x65efcc:goto L65efcc;
case 0x65efce:c.instructions+=5;goto B65efce;
case 0x65efd1:c.instructions+=4;goto B65efd1;
case 0x65efd4:c.instructions+=3;goto B65efd4;
case 0x65efd5:c.instructions+=2;goto B65efd5;
case 0x65efd8:c.instructions+=1;goto B65efd8;
case 0x65efda:goto L65efda;
case 0x65efde:c.instructions+=7;goto B65efde;
case 0x65efe1:c.instructions+=6;goto B65efe1;
case 0x65efe2:c.instructions+=5;goto B65efe2;
case 0x65efe5:c.instructions+=4;goto B65efe5;
case 0x65efe8:c.instructions+=3;goto B65efe8;
case 0x65efeb:c.instructions+=2;goto B65efeb;
case 0x65efee:c.instructions+=1;goto B65efee;
case 0x65eff0:goto L65eff0;
case 0x65eff3:c.instructions+=4;goto B65eff3;
case 0x65eff6:c.instructions+=3;goto B65eff6;
case 0x65eff9:c.instructions+=2;goto B65eff9;
case 0x65effc:c.instructions+=1;goto B65effc;
case 0x65effe:goto L65effe;
default:missing_instruction(c.pc);}
B65e002:L65e002:{c.instructions+=5;NFSU2_TR(0x65e002);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65e005:{NFSU2_TR(0x65e005);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65e008:{NFSU2_TR(0x65e008);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B65e00a:{NFSU2_TR(0x65e00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e00d:{NFSU2_TR(0x65e00d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65dff0u,65d);}
}
B65e00f:L65e00f:{c.instructions+=4;NFSU2_TR(0x65e00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e012:{NFSU2_TR(0x65e012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e015:{NFSU2_TR(0x65e015);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65e018:{NFSU2_TR(0x65e018);
if(r1(R+512)){TAIL_STATIC(0x65dfdcu,65d);}
}
B65e01a:L65e01a:{c.instructions+=6;NFSU2_TR(0x65e01a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e01d:{NFSU2_TR(0x65e01d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x40ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e020:{NFSU2_TR(0x65e020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e023:{NFSU2_TR(0x65e023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e025:{NFSU2_TR(0x65e025);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e028:{NFSU2_TR(0x65e028);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65dfd4u,65d);}
}
B65e02a:L65e02a:{c.instructions+=1;NFSU2_TR(0x65e02a);
{goto L65e10a;}
}
B65e02f:L65e02f:{c.instructions+=3;NFSU2_TR(0x65e02f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e032:{NFSU2_TR(0x65e032);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e034:{NFSU2_TR(0x65e034);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e10a;}}
}
B65e03a:L65e03a:{c.instructions+=4;NFSU2_TR(0x65e03a);
__builtin_memmove((R+8),(R+28),4);
}
B65e03c:{NFSU2_TR(0x65e03c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B65e03f:{NFSU2_TR(0x65e03f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65e042:{NFSU2_TR(0x65e042);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e045:L65e045:{c.instructions+=3;NFSU2_TR(0x65e045);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e049:{NFSU2_TR(0x65e049);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e04b:{NFSU2_TR(0x65e04b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e08b;}}
}
B65e04d:L65e04d:{c.instructions+=2;NFSU2_TR(0x65e04d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e04f:{NFSU2_TR(0x65e04f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e083;}}
}
B65e051:L65e051:{c.instructions+=6;NFSU2_TR(0x65e051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e054:{NFSU2_TR(0x65e054);
__builtin_memmove((R+4),(R+0),4);
}
B65e056:{NFSU2_TR(0x65e056);
__builtin_memmove((R+24),(R+0),4);
}
B65e058:{NFSU2_TR(0x65e058);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65e05b:{NFSU2_TR(0x65e05b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B65e05e:{NFSU2_TR(0x65e05e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e061:L65e061:{c.instructions+=12;NFSU2_TR(0x65e061);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e064:{NFSU2_TR(0x65e064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e066:{NFSU2_TR(0x65e066);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65e069:{NFSU2_TR(0x65e069);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e06c:{NFSU2_TR(0x65e06c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65e06e:{NFSU2_TR(0x65e06e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65e071:{NFSU2_TR(0x65e071);
__builtin_memmove((R+0),(R+28),4);
}
B65e073:{NFSU2_TR(0x65e073);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65e076:{NFSU2_TR(0x65e076);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65e079:{NFSU2_TR(0x65e079);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B65e07b:{NFSU2_TR(0x65e07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e07e:{NFSU2_TR(0x65e07e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e061u);}goto L65e061;}}
}
B65e080:L65e080:{c.instructions+=1;NFSU2_TR(0x65e080);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e083:L65e083:{c.instructions+=3;NFSU2_TR(0x65e083);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e086:{NFSU2_TR(0x65e086);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65e089:{NFSU2_TR(0x65e089);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e04du);}goto L65e04d;}}
}
B65e08b:L65e08b:{c.instructions+=6;NFSU2_TR(0x65e08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e08e:{NFSU2_TR(0x65e08e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x40ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e091:{NFSU2_TR(0x65e091);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e094:{NFSU2_TR(0x65e094);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e096:{NFSU2_TR(0x65e096);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e099:{NFSU2_TR(0x65e099);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e045u);}goto L65e045;}}
}
B65e09b:L65e09b:{c.instructions+=1;NFSU2_TR(0x65e09b);
{goto L65e10a;}
}
B65e09d:L65e09d:{c.instructions+=3;NFSU2_TR(0x65e09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e0a0:{NFSU2_TR(0x65e0a0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e0a2:{NFSU2_TR(0x65e0a2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e10a;}}
}
B65e0a4:L65e0a4:{c.instructions+=4;NFSU2_TR(0x65e0a4);
__builtin_memmove((R+8),(R+28),4);
}
B65e0a6:{NFSU2_TR(0x65e0a6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B65e0a9:{NFSU2_TR(0x65e0a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65e0ac:{NFSU2_TR(0x65e0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e0af:L65e0af:{c.instructions+=3;NFSU2_TR(0x65e0af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e0b3:{NFSU2_TR(0x65e0b3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e0b5:{NFSU2_TR(0x65e0b5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e0fa;}}
}
B65e0b7:L65e0b7:{c.instructions+=2;NFSU2_TR(0x65e0b7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e0b9:{NFSU2_TR(0x65e0b9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e0f2;}}
}
B65e0bb:L65e0bb:{c.instructions+=6;NFSU2_TR(0x65e0bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e0be:{NFSU2_TR(0x65e0be);
__builtin_memmove((R+4),(R+0),4);
}
B65e0c0:{NFSU2_TR(0x65e0c0);
__builtin_memmove((R+24),(R+0),4);
}
B65e0c2:{NFSU2_TR(0x65e0c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65e0c5:{NFSU2_TR(0x65e0c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B65e0c8:{NFSU2_TR(0x65e0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e0cb:L65e0cb:{c.instructions+=14;NFSU2_TR(0x65e0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e0ce:{NFSU2_TR(0x65e0ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e0d0:{NFSU2_TR(0x65e0d0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65e0d2:{NFSU2_TR(0x65e0d2);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B65e0d5:{NFSU2_TR(0x65e0d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e0d8:{NFSU2_TR(0x65e0d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e0da:{NFSU2_TR(0x65e0da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B65e0dd:{NFSU2_TR(0x65e0dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65e0e0:{NFSU2_TR(0x65e0e0);
__builtin_memmove((R+0),(R+28),4);
}
B65e0e2:{NFSU2_TR(0x65e0e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65e0e5:{NFSU2_TR(0x65e0e5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65e0e8:{NFSU2_TR(0x65e0e8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B65e0ea:{NFSU2_TR(0x65e0ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e0ed:{NFSU2_TR(0x65e0ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e0cbu);}goto L65e0cb;}}
}
B65e0ef:L65e0ef:{c.instructions+=1;NFSU2_TR(0x65e0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e0f2:L65e0f2:{c.instructions+=3;NFSU2_TR(0x65e0f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e0f5:{NFSU2_TR(0x65e0f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65e0f8:{NFSU2_TR(0x65e0f8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e0b7u);}goto L65e0b7;}}
}
B65e0fa:L65e0fa:{c.instructions+=6;NFSU2_TR(0x65e0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e0fd:{NFSU2_TR(0x65e0fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x40ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e100:{NFSU2_TR(0x65e100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e103:{NFSU2_TR(0x65e103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e105:{NFSU2_TR(0x65e105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e108:{NFSU2_TR(0x65e108);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e0afu);}goto L65e0af;}}
}
B65e10a:L65e10a:{c.instructions+=3;NFSU2_TR(0x65e10a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e10d:{NFSU2_TR(0x65e10d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e110:{NFSU2_TR(0x65e110);
TAIL_STATIC(0x65de5cu,65d);
}
B65e115:L65e115:{c.instructions+=13;NFSU2_TR(0x65e115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e118:{NFSU2_TR(0x65e118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65e11a:{NFSU2_TR(0x65e11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e11d:{NFSU2_TR(0x65e11d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65e11f:{NFSU2_TR(0x65e11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e122:{NFSU2_TR(0x65e122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e125:{NFSU2_TR(0x65e125);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e127:{NFSU2_TR(0x65e127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65e128:{NFSU2_TR(0x65e128);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B65e12a:{NFSU2_TR(0x65e12a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65e12d:{NFSU2_TR(0x65e12d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B65e130:{NFSU2_TR(0x65e130);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B65e132:{NFSU2_TR(0x65e132);
{goto L65e14c;}
}
B65e134:L65e134:{c.instructions+=2;NFSU2_TR(0x65e134);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e136:{NFSU2_TR(0x65e136);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e14a;}}
}
B65e138:L65e138:{c.instructions+=1;NFSU2_TR(0x65e138);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e13b:L65e13b:{c.instructions+=6;NFSU2_TR(0x65e13b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65e13d:{NFSU2_TR(0x65e13d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65e13f:{NFSU2_TR(0x65e13f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B65e142:{NFSU2_TR(0x65e142);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B65e145:{NFSU2_TR(0x65e145);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e148:{NFSU2_TR(0x65e148);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e13bu);}goto L65e13b;}}
}
B65e14a:L65e14a:{c.instructions+=1;NFSU2_TR(0x65e14a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B65e14c:L65e14c:{c.instructions+=2;NFSU2_TR(0x65e14c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B65e14e:{NFSU2_TR(0x65e14e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e134u);}goto L65e134;}}
}
B65e150:L65e150:{c.instructions+=5;NFSU2_TR(0x65e150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e153:{NFSU2_TR(0x65e153);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65e155:{NFSU2_TR(0x65e155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e158:{NFSU2_TR(0x65e158);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65e15a:{NFSU2_TR(0x65e15a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e10au);}goto L65e10a;}
}
B65e15c:L65e15c:{c.instructions+=6;NFSU2_TR(0x65e15c);
w4(R+0,u32(0x80004005ull));
}
B65e161:{NFSU2_TR(0x65e161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65e162:{NFSU2_TR(0x65e162);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65e163:{NFSU2_TR(0x65e163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65e164:{NFSU2_TR(0x65e164);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65e165:{NFSU2_TR(0x65e165);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e168:L65e168:{c.instructions+=16;NFSU2_TR(0x65e168);
__builtin_memmove((R+28),(R+28),4);
}
B65e16a:{NFSU2_TR(0x65e16a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e16b:{NFSU2_TR(0x65e16b);
__builtin_memmove((R+20),(R+16),4);
}
B65e16d:{NFSU2_TR(0x65e16d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B65e170:{NFSU2_TR(0x65e170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e173:{NFSU2_TR(0x65e173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e175:{NFSU2_TR(0x65e175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e179:{NFSU2_TR(0x65e179);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65e17d:{NFSU2_TR(0x65e17d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65e17f:{NFSU2_TR(0x65e17f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e180:{NFSU2_TR(0x65e180);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e181:{NFSU2_TR(0x65e181);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e182:{NFSU2_TR(0x65e182);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65e185:{NFSU2_TR(0x65e185);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e188:{NFSU2_TR(0x65e188);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e18b:{NFSU2_TR(0x65e18b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65e192;}}
}
B65e18d:L65e18d:{c.instructions+=2;NFSU2_TR(0x65e18d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B65e190:{NFSU2_TR(0x65e190);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65e195;}}
}
B65e192:L65e192:{c.instructions+=2;NFSU2_TR(0x65e192);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65e194:{NFSU2_TR(0x65e194);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65e195:L65e195:{c.instructions+=2;NFSU2_TR(0x65e195);
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
B65e197:{NFSU2_TR(0x65e197);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65e4ee;}}
}
B65e19d:L65e19d:{c.instructions+=2;NFSU2_TR(0x65e19d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e1a0:{NFSU2_TR(0x65e1a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65e375;}}
}
B65e1a6:L65e1a6:{c.instructions+=2;NFSU2_TR(0x65e1a6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e1a9:{NFSU2_TR(0x65e1a9);
if(r1(R+518)){{goto L65e205;}}
}
B65e1ab:L65e1ab:{c.instructions+=2;NFSU2_TR(0x65e1ab);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B65e1ae:{NFSU2_TR(0x65e1ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65e4ee;}}
}
B65e1b4:L65e1b4:{c.instructions+=6;NFSU2_TR(0x65e1b4);
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
B65e1b6:{NFSU2_TR(0x65e1b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e1b9:{NFSU2_TR(0x65e1b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65e1bc:{NFSU2_TR(0x65e1bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e1bf:{NFSU2_TR(0x65e1bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65e1c1:{NFSU2_TR(0x65e1c1);
if(r1(R+518)){{goto L65e4f5;}}
}
B65e1c7:L65e1c7:{c.instructions+=5;NFSU2_TR(0x65e1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e1ca:{NFSU2_TR(0x65e1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e1ce:{NFSU2_TR(0x65e1ce);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e1d0:{NFSU2_TR(0x65e1d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65e1d2:{NFSU2_TR(0x65e1d2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e1fd;}}
}
B65e1d4:L65e1d4:{c.instructions+=7;NFSU2_TR(0x65e1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e1d7:{NFSU2_TR(0x65e1d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e1d9:{NFSU2_TR(0x65e1d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e1dc:{NFSU2_TR(0x65e1dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e1df:{NFSU2_TR(0x65e1df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e1e2:{NFSU2_TR(0x65e1e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e1e5:{NFSU2_TR(0x65e1e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e1eaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e168u);}goto L65e168;}
}
B65e1ea:L65e1ea:{c.instructions+=3;NFSU2_TR(0x65e1ea);
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
B65e1ec:{NFSU2_TR(0x65e1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e1ef:{NFSU2_TR(0x65e1ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65e4f5;}}
}
B65e1f5:L65e1f5:{c.instructions+=3;NFSU2_TR(0x65e1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e1f8:{NFSU2_TR(0x65e1f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B65e1fb:{NFSU2_TR(0x65e1fb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e1d4u);}goto L65e1d4;}}
}
B65e1fd:L65e1fd:{c.instructions+=2;NFSU2_TR(0x65e1fd);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65e1fe:{NFSU2_TR(0x65e1fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e1c7u);}goto L65e1c7;}}
}
B65e200:L65e200:{c.instructions+=1;NFSU2_TR(0x65e200);
{goto L65e4f5;}
}
B65e205:L65e205:{c.instructions+=2;NFSU2_TR(0x65e205);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B65e208:{NFSU2_TR(0x65e208);
if(r1(R+518)){{goto L65e31e;}}
}
B65e20e:L65e20e:{c.instructions+=1;NFSU2_TR(0x65e20e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65e4ee;}}
}
B65e214:L65e214:{c.instructions+=2;NFSU2_TR(0x65e214);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e217:{NFSU2_TR(0x65e217);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65e2cf;}}
}
B65e21d:L65e21d:{c.instructions+=2;NFSU2_TR(0x65e21d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e220:{NFSU2_TR(0x65e220);
if(r1(R+518)){{goto L65e27d;}}
}
B65e222:L65e222:{c.instructions+=2;NFSU2_TR(0x65e222);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65e225:{NFSU2_TR(0x65e225);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65e4ee;}}
}
B65e22b:L65e22b:{c.instructions+=2;NFSU2_TR(0x65e22b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e22d:{NFSU2_TR(0x65e22d);
if(r1(R+518)){{goto L65e36a;}}
}
B65e233:L65e233:{c.instructions+=4;NFSU2_TR(0x65e233);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e236:{NFSU2_TR(0x65e236);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65e239:{NFSU2_TR(0x65e239);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e23c:{NFSU2_TR(0x65e23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65e23f:L65e23f:{c.instructions+=4;NFSU2_TR(0x65e23f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e241:{NFSU2_TR(0x65e241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e243:{NFSU2_TR(0x65e243);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e245:{NFSU2_TR(0x65e245);
if(r1(R+518)){{goto L65e24d;}}
}
B65e247:L65e247:{c.instructions+=2;NFSU2_TR(0x65e247);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e24a:{NFSU2_TR(0x65e24a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65e24d:L65e24d:{c.instructions+=9;NFSU2_TR(0x65e24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e250:{NFSU2_TR(0x65e250);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e253:{NFSU2_TR(0x65e253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65e255:{NFSU2_TR(0x65e255);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65e258:{NFSU2_TR(0x65e258);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B65e25c:{NFSU2_TR(0x65e25c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65e25e:{NFSU2_TR(0x65e25e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e260:{NFSU2_TR(0x65e260);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65e263:{NFSU2_TR(0x65e263);
if(r1(R+518)){{goto L65e26d;}}
}
B65e265:L65e265:{c.instructions+=4;NFSU2_TR(0x65e265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e267:{NFSU2_TR(0x65e267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e269:{NFSU2_TR(0x65e269);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e26a:{NFSU2_TR(0x65e26a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e26dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e26d:L65e26d:{c.instructions+=4;NFSU2_TR(0x65e26d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65e270:{NFSU2_TR(0x65e270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65e273:{NFSU2_TR(0x65e273);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e276:{NFSU2_TR(0x65e276);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e23fu);}goto L65e23f;}}
}
B65e278:L65e278:{c.instructions+=1;NFSU2_TR(0x65e278);
{goto L65e36a;}
}
B65e27d:L65e27d:{c.instructions+=2;NFSU2_TR(0x65e27d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e27f:{NFSU2_TR(0x65e27f);
if(r1(R+518)){{goto L65e36a;}}
}
B65e285:L65e285:{c.instructions+=4;NFSU2_TR(0x65e285);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e288:{NFSU2_TR(0x65e288);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65e28b:{NFSU2_TR(0x65e28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e28e:{NFSU2_TR(0x65e28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65e291:L65e291:{c.instructions+=4;NFSU2_TR(0x65e291);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e293:{NFSU2_TR(0x65e293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e295:{NFSU2_TR(0x65e295);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e297:{NFSU2_TR(0x65e297);
if(r1(R+518)){{goto L65e29f;}}
}
B65e299:L65e299:{c.instructions+=2;NFSU2_TR(0x65e299);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e29c:{NFSU2_TR(0x65e29c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65e29f:L65e29f:{c.instructions+=9;NFSU2_TR(0x65e29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e2a2:{NFSU2_TR(0x65e2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e2a5:{NFSU2_TR(0x65e2a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65e2a7:{NFSU2_TR(0x65e2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65e2aa:{NFSU2_TR(0x65e2aa);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B65e2ae:{NFSU2_TR(0x65e2ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65e2b0:{NFSU2_TR(0x65e2b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e2b2:{NFSU2_TR(0x65e2b2);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65e2b5:{NFSU2_TR(0x65e2b5);
if(r1(R+518)){{goto L65e2bf;}}
}
B65e2b7:L65e2b7:{c.instructions+=4;NFSU2_TR(0x65e2b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e2b9:{NFSU2_TR(0x65e2b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e2bb:{NFSU2_TR(0x65e2bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e2bc:{NFSU2_TR(0x65e2bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e2bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e2bf:L65e2bf:{c.instructions+=4;NFSU2_TR(0x65e2bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65e2c2:{NFSU2_TR(0x65e2c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65e2c5:{NFSU2_TR(0x65e2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e2c8:{NFSU2_TR(0x65e2c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e291u);}goto L65e291;}}
}
B65e2ca:L65e2ca:{c.instructions+=1;NFSU2_TR(0x65e2ca);
{goto L65e36a;}
}
B65e2cf:L65e2cf:{c.instructions+=2;NFSU2_TR(0x65e2cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e2d1:{NFSU2_TR(0x65e2d1);
if(r1(R+518)){{goto L65e36a;}}
}
B65e2d7:L65e2d7:{c.instructions+=4;NFSU2_TR(0x65e2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e2da:{NFSU2_TR(0x65e2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65e2dd:{NFSU2_TR(0x65e2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e2e0:{NFSU2_TR(0x65e2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65e2e3:L65e2e3:{c.instructions+=4;NFSU2_TR(0x65e2e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e2e5:{NFSU2_TR(0x65e2e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e2e7:{NFSU2_TR(0x65e2e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e2e9:{NFSU2_TR(0x65e2e9);
if(r1(R+518)){{goto L65e2f1;}}
}
B65e2eb:L65e2eb:{c.instructions+=2;NFSU2_TR(0x65e2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e2ee:{NFSU2_TR(0x65e2ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65e2f1:L65e2f1:{c.instructions+=9;NFSU2_TR(0x65e2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e2f4:{NFSU2_TR(0x65e2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e2f7:{NFSU2_TR(0x65e2f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65e2f9:{NFSU2_TR(0x65e2f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65e2fc:{NFSU2_TR(0x65e2fc);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B65e300:{NFSU2_TR(0x65e300);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65e302:{NFSU2_TR(0x65e302);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e304:{NFSU2_TR(0x65e304);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65e307:{NFSU2_TR(0x65e307);
if(r1(R+518)){{goto L65e311;}}
}
B65e309:L65e309:{c.instructions+=4;NFSU2_TR(0x65e309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e30b:{NFSU2_TR(0x65e30b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e30d:{NFSU2_TR(0x65e30d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e30e:{NFSU2_TR(0x65e30e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e311ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e311:L65e311:{c.instructions+=4;NFSU2_TR(0x65e311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65e314:{NFSU2_TR(0x65e314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65e317:{NFSU2_TR(0x65e317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e31a:{NFSU2_TR(0x65e31a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e2e3u);}goto L65e2e3;}}
}
B65e31c:L65e31c:{c.instructions+=1;NFSU2_TR(0x65e31c);
{goto L65e36a;}
}
B65e31e:L65e31e:{c.instructions+=2;NFSU2_TR(0x65e31e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e320:{NFSU2_TR(0x65e320);
if(r1(R+518)){{goto L65e36a;}}
}
B65e322:L65e322:{c.instructions+=4;NFSU2_TR(0x65e322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e325:{NFSU2_TR(0x65e325);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65e328:{NFSU2_TR(0x65e328);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e32b:{NFSU2_TR(0x65e32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65e32e:L65e32e:{c.instructions+=4;NFSU2_TR(0x65e32e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e330:{NFSU2_TR(0x65e330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e332:{NFSU2_TR(0x65e332);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e334:{NFSU2_TR(0x65e334);
if(r1(R+518)){{goto L65e33c;}}
}
B65e336:L65e336:{c.instructions+=2;NFSU2_TR(0x65e336);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e339:{NFSU2_TR(0x65e339);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65e33c:L65e33c:{c.instructions+=6;NFSU2_TR(0x65e33c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e33f:{NFSU2_TR(0x65e33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e342:{NFSU2_TR(0x65e342);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65e345:{NFSU2_TR(0x65e345);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65e348:{NFSU2_TR(0x65e348);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B65e34c:{NFSU2_TR(0x65e34c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65e352;}}
}
B65e34e:L65e34e:{c.instructions+=2;NFSU2_TR(0x65e34e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65e350:{NFSU2_TR(0x65e350);
{goto L65e35b;}
}
B65e352:L65e352:{c.instructions+=4;NFSU2_TR(0x65e352);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e355:{NFSU2_TR(0x65e355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e357:{NFSU2_TR(0x65e357);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e358:{NFSU2_TR(0x65e358);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e35bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e35b:L65e35b:{c.instructions+=6;NFSU2_TR(0x65e35b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e35d:{NFSU2_TR(0x65e35d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65e35f:{NFSU2_TR(0x65e35f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65e362:{NFSU2_TR(0x65e362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65e365:{NFSU2_TR(0x65e365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e368:{NFSU2_TR(0x65e368);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e32eu);}goto L65e32e;}}
}
B65e36a:L65e36a:{c.instructions+=3;NFSU2_TR(0x65e36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e36d:{NFSU2_TR(0x65e36d);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65e370:{NFSU2_TR(0x65e370);
{goto L65e4f5;}
}
B65e375:L65e375:{c.instructions+=12;NFSU2_TR(0x65e375);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e378:{NFSU2_TR(0x65e378);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65e37b:{NFSU2_TR(0x65e37b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65e37d:{NFSU2_TR(0x65e37d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e380:{NFSU2_TR(0x65e380);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B65e383:{NFSU2_TR(0x65e383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e386:{NFSU2_TR(0x65e386);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B65e387:{NFSU2_TR(0x65e387);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x30ull))));
}
B65e38a:{NFSU2_TR(0x65e38a);
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65e38d:{NFSU2_TR(0x65e38d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65e38e:{NFSU2_TR(0x65e38e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e391:{NFSU2_TR(0x65e391);
if(r1(R+518)){{goto L65e47a;}}
}
B65e397:L65e397:{c.instructions+=2;NFSU2_TR(0x65e397);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65e398:{NFSU2_TR(0x65e398);
if(r1(R+518)){{goto L65e40f;}}
}
B65e39a:L65e39a:{c.instructions+=2;NFSU2_TR(0x65e39a);
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
B65e39b:{NFSU2_TR(0x65e39b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65e4ee;}}
}
B65e3a1:L65e3a1:{c.instructions+=2;NFSU2_TR(0x65e3a1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e3a3:{NFSU2_TR(0x65e3a3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e4e6;}}
}
B65e3a9:L65e3a9:{c.instructions+=4;NFSU2_TR(0x65e3a9);
__builtin_memmove((R+8),(R+24),4);
}
B65e3ab:{NFSU2_TR(0x65e3ab);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B65e3ae:{NFSU2_TR(0x65e3ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65e3b1:{NFSU2_TR(0x65e3b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e3b4:L65e3b4:{c.instructions+=3;NFSU2_TR(0x65e3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e3b8:{NFSU2_TR(0x65e3b8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e3ba:{NFSU2_TR(0x65e3ba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e3f8;}}
}
B65e3bc:L65e3bc:{c.instructions+=2;NFSU2_TR(0x65e3bc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e3be:{NFSU2_TR(0x65e3be);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e3f0;}}
}
B65e3c0:L65e3c0:{c.instructions+=5;NFSU2_TR(0x65e3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e3c3:{NFSU2_TR(0x65e3c3);
__builtin_memmove((R+4),(R+0),4);
}
B65e3c5:{NFSU2_TR(0x65e3c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65e3c8:{NFSU2_TR(0x65e3c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65e3cb:{NFSU2_TR(0x65e3cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e3ce:L65e3ce:{c.instructions+=12;NFSU2_TR(0x65e3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65e3d1:{NFSU2_TR(0x65e3d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65e3d3:{NFSU2_TR(0x65e3d3);
{u32 ea_=u32(r4(R+28)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65e3d6:{NFSU2_TR(0x65e3d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e3d9:{NFSU2_TR(0x65e3d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65e3db:{NFSU2_TR(0x65e3db);
__builtin_memmove((R+28),(R+24),4);
}
B65e3dd:{NFSU2_TR(0x65e3dd);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65e3e0:{NFSU2_TR(0x65e3e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B65e3e3:{NFSU2_TR(0x65e3e3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65e3e6:{NFSU2_TR(0x65e3e6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B65e3e8:{NFSU2_TR(0x65e3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e3eb:{NFSU2_TR(0x65e3eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e3ceu);}goto L65e3ce;}}
}
B65e3ed:L65e3ed:{c.instructions+=1;NFSU2_TR(0x65e3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e3f0:L65e3f0:{c.instructions+=3;NFSU2_TR(0x65e3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e3f3:{NFSU2_TR(0x65e3f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B65e3f6:{NFSU2_TR(0x65e3f6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e3bcu);}goto L65e3bc;}}
}
B65e3f8:L65e3f8:{c.instructions+=7;NFSU2_TR(0x65e3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e3fb:{NFSU2_TR(0x65e3fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e3fe:{NFSU2_TR(0x65e3fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e400:{NFSU2_TR(0x65e400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e403:{NFSU2_TR(0x65e403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e405:{NFSU2_TR(0x65e405);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e408:{NFSU2_TR(0x65e408);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e3b4u);}goto L65e3b4;}}
}
B65e40a:L65e40a:{c.instructions+=1;NFSU2_TR(0x65e40a);
{goto L65e4e6;}
}
B65e40f:L65e40f:{c.instructions+=2;NFSU2_TR(0x65e40f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e411:{NFSU2_TR(0x65e411);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e4e6;}}
}
B65e417:L65e417:{c.instructions+=4;NFSU2_TR(0x65e417);
__builtin_memmove((R+8),(R+24),4);
}
B65e419:{NFSU2_TR(0x65e419);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B65e41c:{NFSU2_TR(0x65e41c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65e41f:{NFSU2_TR(0x65e41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e422:L65e422:{c.instructions+=3;NFSU2_TR(0x65e422);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e426:{NFSU2_TR(0x65e426);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e428:{NFSU2_TR(0x65e428);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e466;}}
}
B65e42a:L65e42a:{c.instructions+=2;NFSU2_TR(0x65e42a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e42c:{NFSU2_TR(0x65e42c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e45e;}}
}
B65e42e:L65e42e:{c.instructions+=5;NFSU2_TR(0x65e42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e431:{NFSU2_TR(0x65e431);
__builtin_memmove((R+4),(R+0),4);
}
B65e433:{NFSU2_TR(0x65e433);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65e436:{NFSU2_TR(0x65e436);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65e439:{NFSU2_TR(0x65e439);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e43c:L65e43c:{c.instructions+=12;NFSU2_TR(0x65e43c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65e43f:{NFSU2_TR(0x65e43f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65e441:{NFSU2_TR(0x65e441);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B65e444:{NFSU2_TR(0x65e444);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e447:{NFSU2_TR(0x65e447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65e449:{NFSU2_TR(0x65e449);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65e44c:{NFSU2_TR(0x65e44c);
__builtin_memmove((R+28),(R+24),4);
}
B65e44e:{NFSU2_TR(0x65e44e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B65e451:{NFSU2_TR(0x65e451);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65e454:{NFSU2_TR(0x65e454);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B65e456:{NFSU2_TR(0x65e456);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e459:{NFSU2_TR(0x65e459);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e43cu);}goto L65e43c;}}
}
B65e45b:L65e45b:{c.instructions+=1;NFSU2_TR(0x65e45b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e45e:L65e45e:{c.instructions+=3;NFSU2_TR(0x65e45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e461:{NFSU2_TR(0x65e461);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B65e464:{NFSU2_TR(0x65e464);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e42au);}goto L65e42a;}}
}
B65e466:L65e466:{c.instructions+=7;NFSU2_TR(0x65e466);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e469:{NFSU2_TR(0x65e469);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e46c:{NFSU2_TR(0x65e46c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e46e:{NFSU2_TR(0x65e46e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e471:{NFSU2_TR(0x65e471);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e473:{NFSU2_TR(0x65e473);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e476:{NFSU2_TR(0x65e476);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e422u);}goto L65e422;}}
}
B65e478:L65e478:{c.instructions+=1;NFSU2_TR(0x65e478);
{goto L65e4e6;}
}
B65e47a:L65e47a:{c.instructions+=2;NFSU2_TR(0x65e47a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e47c:{NFSU2_TR(0x65e47c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e4e6;}}
}
B65e47e:L65e47e:{c.instructions+=4;NFSU2_TR(0x65e47e);
__builtin_memmove((R+8),(R+24),4);
}
B65e480:{NFSU2_TR(0x65e480);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B65e483:{NFSU2_TR(0x65e483);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65e486:{NFSU2_TR(0x65e486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e489:L65e489:{c.instructions+=3;NFSU2_TR(0x65e489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e48d:{NFSU2_TR(0x65e48d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e48f:{NFSU2_TR(0x65e48f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e4d4;}}
}
B65e491:L65e491:{c.instructions+=2;NFSU2_TR(0x65e491);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e493:{NFSU2_TR(0x65e493);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e4cc;}}
}
B65e495:L65e495:{c.instructions+=6;NFSU2_TR(0x65e495);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e498:{NFSU2_TR(0x65e498);
__builtin_memmove((R+4),(R+0),4);
}
B65e49a:{NFSU2_TR(0x65e49a);
__builtin_memmove((R+28),(R+0),4);
}
B65e49c:{NFSU2_TR(0x65e49c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65e49f:{NFSU2_TR(0x65e49f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B65e4a2:{NFSU2_TR(0x65e4a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e4a5:L65e4a5:{c.instructions+=14;NFSU2_TR(0x65e4a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e4a8:{NFSU2_TR(0x65e4a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e4aa:{NFSU2_TR(0x65e4aa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65e4ac:{NFSU2_TR(0x65e4ac);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B65e4af:{NFSU2_TR(0x65e4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e4b2:{NFSU2_TR(0x65e4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e4b4:{NFSU2_TR(0x65e4b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B65e4b7:{NFSU2_TR(0x65e4b7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65e4ba:{NFSU2_TR(0x65e4ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65e4bd:{NFSU2_TR(0x65e4bd);
__builtin_memmove((R+0),(R+24),4);
}
B65e4bf:{NFSU2_TR(0x65e4bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65e4c2:{NFSU2_TR(0x65e4c2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B65e4c4:{NFSU2_TR(0x65e4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e4c7:{NFSU2_TR(0x65e4c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e4a5u);}goto L65e4a5;}}
}
B65e4c9:L65e4c9:{c.instructions+=1;NFSU2_TR(0x65e4c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e4cc:L65e4cc:{c.instructions+=3;NFSU2_TR(0x65e4cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e4cf:{NFSU2_TR(0x65e4cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B65e4d2:{NFSU2_TR(0x65e4d2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e491u);}goto L65e491;}}
}
B65e4d4:L65e4d4:{c.instructions+=7;NFSU2_TR(0x65e4d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e4d7:{NFSU2_TR(0x65e4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e4da:{NFSU2_TR(0x65e4da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e4dc:{NFSU2_TR(0x65e4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e4df:{NFSU2_TR(0x65e4df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B65e4e1:{NFSU2_TR(0x65e4e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e4e4:{NFSU2_TR(0x65e4e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e489u);}goto L65e489;}}
}
B65e4e6:L65e4e6:{c.instructions+=3;NFSU2_TR(0x65e4e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e4e9:{NFSU2_TR(0x65e4e9);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65e4ec:{NFSU2_TR(0x65e4ec);
{goto L65e4f5;}
}
B65e4ee:L65e4ee:{c.instructions+=1;NFSU2_TR(0x65e4ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65e4f5:L65e4f5:{c.instructions+=6;NFSU2_TR(0x65e4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e4f8:{NFSU2_TR(0x65e4f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65e4f9:{NFSU2_TR(0x65e4f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65e4fa:{NFSU2_TR(0x65e4fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65e4fb:{NFSU2_TR(0x65e4fb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65e4fc:{NFSU2_TR(0x65e4fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e4ff:L65e4ff:{c.instructions+=7;NFSU2_TR(0x65e4ff);
__builtin_memmove((R+28),(R+28),4);
}
B65e501:{NFSU2_TR(0x65e501);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e502:{NFSU2_TR(0x65e502);
__builtin_memmove((R+24),(R+4),4);
}
B65e504:{NFSU2_TR(0x65e504);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e507:{NFSU2_TR(0x65e507);
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
B65e509:{NFSU2_TR(0x65e509);
u8 U[4];
w4(U+0,u32(0x7b6e00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B65e50f:{NFSU2_TR(0x65e50f);
if(r1(R+518)){{goto L65e51b;}}
}
B65e511:L65e511:{c.instructions+=3;NFSU2_TR(0x65e511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e513:{NFSU2_TR(0x65e513);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e514:{NFSU2_TR(0x65e514);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e517ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e517:L65e517:{c.instructions+=1;NFSU2_TR(0x65e517);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e51b:L65e51b:{c.instructions+=3;NFSU2_TR(0x65e51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e51e:{NFSU2_TR(0x65e51e);
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
B65e520:{NFSU2_TR(0x65e520);
if(r1(R+518)){{goto L65e52c;}}
}
B65e522:L65e522:{c.instructions+=3;NFSU2_TR(0x65e522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e524:{NFSU2_TR(0x65e524);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e525:{NFSU2_TR(0x65e525);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e528ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e528:L65e528:{c.instructions+=1;NFSU2_TR(0x65e528);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B65e52c:L65e52c:{c.instructions+=2;NFSU2_TR(0x65e52c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65e52d:{NFSU2_TR(0x65e52d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e52e:L65e52e:{c.instructions+=2;NFSU2_TR(0x65e52e);
w4(R+0,u32(0x80004005ull));
}
B65e533:{NFSU2_TR(0x65e533);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e536:L65e536:{c.instructions+=2;NFSU2_TR(0x65e536);
w4(R+0,u32(0x80004005ull));
}
B65e53b:{NFSU2_TR(0x65e53b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e53e:L65e53e:{c.instructions+=2;NFSU2_TR(0x65e53e);
w4(R+0,u32(0x80004005ull));
}
B65e543:{NFSU2_TR(0x65e543);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e546:L65e546:{c.instructions+=2;NFSU2_TR(0x65e546);
w4(R+0,u32(0x80004005ull));
}
B65e54b:{NFSU2_TR(0x65e54b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e54e:L65e54e:{c.instructions+=2;NFSU2_TR(0x65e54e);
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
B65e550:{NFSU2_TR(0x65e550);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e553:L65e553:{c.instructions+=2;NFSU2_TR(0x65e553);
w4(R+0,u32(0x80004005ull));
}
B65e558:{NFSU2_TR(0x65e558);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e55b:L65e55b:{c.instructions+=2;NFSU2_TR(0x65e55b);
w4(R+0,u32(0x80004005ull));
}
B65e560:{NFSU2_TR(0x65e560);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e563:L65e563:{c.instructions+=2;NFSU2_TR(0x65e563);
w4(R+0,u32(0x80004005ull));
}
B65e568:{NFSU2_TR(0x65e568);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e56b:L65e56b:{c.instructions+=2;NFSU2_TR(0x65e56b);
w4(R+0,u32(0x80004005ull));
}
B65e570:{NFSU2_TR(0x65e570);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e573:L65e573:{c.instructions+=2;NFSU2_TR(0x65e573);
w4(R+0,u32(0x80004005ull));
}
B65e578:{NFSU2_TR(0x65e578);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e57b:L65e57b:{c.instructions+=2;NFSU2_TR(0x65e57b);
w4(R+0,u32(0x80004005ull));
}
B65e580:{NFSU2_TR(0x65e580);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e583:L65e583:{c.instructions+=2;NFSU2_TR(0x65e583);
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
B65e585:{NFSU2_TR(0x65e585);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e588:L65e588:{c.instructions+=2;NFSU2_TR(0x65e588);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65e58e:{NFSU2_TR(0x65e58e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e591:L65e591:{c.instructions+=9;NFSU2_TR(0x65e591);
__builtin_memmove((R+28),(R+28),4);
}
B65e593:{NFSU2_TR(0x65e593);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e594:{NFSU2_TR(0x65e594);
__builtin_memmove((R+20),(R+16),4);
}
B65e596:{NFSU2_TR(0x65e596);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e597:{NFSU2_TR(0x65e597);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e598:{NFSU2_TR(0x65e598);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65e59b:{NFSU2_TR(0x65e59b);
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
B65e59d:{NFSU2_TR(0x65e59d);
__builtin_memmove((R+24),(R+4),4);
}
B65e59f:{NFSU2_TR(0x65e59f);
if(r1(R+518)){{goto L65e5a7;}}
}
B65e5a1:L65e5a1:{c.instructions+=3;NFSU2_TR(0x65e5a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e5a3:{NFSU2_TR(0x65e5a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e5a4:{NFSU2_TR(0x65e5a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e5a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e5a7:L65e5a7:{c.instructions+=3;NFSU2_TR(0x65e5a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e5aa:{NFSU2_TR(0x65e5aa);
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
B65e5ac:{NFSU2_TR(0x65e5ac);
if(r1(R+518)){{goto L65e5b8;}}
}
B65e5ae:L65e5ae:{c.instructions+=3;NFSU2_TR(0x65e5ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e5b0:{NFSU2_TR(0x65e5b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e5b1:{NFSU2_TR(0x65e5b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e5b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e5b4:L65e5b4:{c.instructions+=1;NFSU2_TR(0x65e5b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e5b8:L65e5b8:{c.instructions+=7;NFSU2_TR(0x65e5b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e5bb:{NFSU2_TR(0x65e5bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e5be:{NFSU2_TR(0x65e5be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65e5bf:{NFSU2_TR(0x65e5bf);
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
B65e5c1:{NFSU2_TR(0x65e5c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65e5c2:{NFSU2_TR(0x65e5c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e5c3:{NFSU2_TR(0x65e5c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e5c6:L65e5c6:{c.instructions+=9;NFSU2_TR(0x65e5c6);
__builtin_memmove((R+28),(R+28),4);
}
B65e5c8:{NFSU2_TR(0x65e5c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e5c9:{NFSU2_TR(0x65e5c9);
__builtin_memmove((R+20),(R+16),4);
}
B65e5cb:{NFSU2_TR(0x65e5cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e5cc:{NFSU2_TR(0x65e5cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e5cd:{NFSU2_TR(0x65e5cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65e5d0:{NFSU2_TR(0x65e5d0);
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
B65e5d2:{NFSU2_TR(0x65e5d2);
__builtin_memmove((R+24),(R+4),4);
}
B65e5d4:{NFSU2_TR(0x65e5d4);
if(r1(R+518)){{goto L65e5dc;}}
}
B65e5d6:L65e5d6:{c.instructions+=3;NFSU2_TR(0x65e5d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e5d8:{NFSU2_TR(0x65e5d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e5d9:{NFSU2_TR(0x65e5d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e5dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e5dc:L65e5dc:{c.instructions+=3;NFSU2_TR(0x65e5dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e5df:{NFSU2_TR(0x65e5df);
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
B65e5e1:{NFSU2_TR(0x65e5e1);
if(r1(R+518)){{goto L65e5ed;}}
}
B65e5e3:L65e5e3:{c.instructions+=3;NFSU2_TR(0x65e5e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e5e5:{NFSU2_TR(0x65e5e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e5e6:{NFSU2_TR(0x65e5e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e5e9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e5e9:L65e5e9:{c.instructions+=1;NFSU2_TR(0x65e5e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e5ed:L65e5ed:{c.instructions+=3;NFSU2_TR(0x65e5ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e5ef:{NFSU2_TR(0x65e5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e5f2:{NFSU2_TR(0x65e5f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65e5fc;}}
}
B65e5f4:L65e5f4:{c.instructions+=3;NFSU2_TR(0x65e5f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e5f7:{NFSU2_TR(0x65e5f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e5fa:{NFSU2_TR(0x65e5fa);
{goto L65e5ff;}
}
B65e5fc:L65e5fc:{c.instructions+=1;NFSU2_TR(0x65e5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e5ff:L65e5ff:{c.instructions+=5;NFSU2_TR(0x65e5ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65e600:{NFSU2_TR(0x65e600);
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
B65e602:{NFSU2_TR(0x65e602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65e603:{NFSU2_TR(0x65e603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e604:{NFSU2_TR(0x65e604);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e607:L65e607:{c.instructions+=7;NFSU2_TR(0x65e607);
__builtin_memmove((R+28),(R+28),4);
}
B65e609:{NFSU2_TR(0x65e609);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e60a:{NFSU2_TR(0x65e60a);
__builtin_memmove((R+20),(R+16),4);
}
B65e60c:{NFSU2_TR(0x65e60c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e60d:{NFSU2_TR(0x65e60d);
__builtin_memmove((R+24),(R+4),4);
}
B65e60f:{NFSU2_TR(0x65e60f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B65e613:{NFSU2_TR(0x65e613);
if(r1(R+518)){{goto L65e61e;}}
}
B65e615:L65e615:{c.instructions+=4;NFSU2_TR(0x65e615);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e618:{NFSU2_TR(0x65e618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e61a:{NFSU2_TR(0x65e61a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e61b:{NFSU2_TR(0x65e61b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e61eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e61e:L65e61e:{c.instructions+=7;NFSU2_TR(0x65e61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e621:{NFSU2_TR(0x65e621);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e624:{NFSU2_TR(0x65e624);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65e626:{NFSU2_TR(0x65e626);
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
B65e628:{NFSU2_TR(0x65e628);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65e629:{NFSU2_TR(0x65e629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e62a:{NFSU2_TR(0x65e62a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e62d:L65e62d:{c.instructions+=10;NFSU2_TR(0x65e62d);
__builtin_memmove((R+28),(R+28),4);
}
B65e62f:{NFSU2_TR(0x65e62f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e630:{NFSU2_TR(0x65e630);
__builtin_memmove((R+20),(R+16),4);
}
B65e632:{NFSU2_TR(0x65e632);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e635:{NFSU2_TR(0x65e635);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e638:{NFSU2_TR(0x65e638);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e63b:{NFSU2_TR(0x65e63b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e63e:{NFSU2_TR(0x65e63e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e640:{NFSU2_TR(0x65e640);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e641:{NFSU2_TR(0x65e641);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e644ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e644:L65e644:{c.instructions+=2;NFSU2_TR(0x65e644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e645:{NFSU2_TR(0x65e645);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e648:L65e648:{c.instructions+=9;NFSU2_TR(0x65e648);
__builtin_memmove((R+28),(R+28),4);
}
B65e64a:{NFSU2_TR(0x65e64a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e64b:{NFSU2_TR(0x65e64b);
__builtin_memmove((R+20),(R+16),4);
}
B65e64d:{NFSU2_TR(0x65e64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e650:{NFSU2_TR(0x65e650);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e653:{NFSU2_TR(0x65e653);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e656:{NFSU2_TR(0x65e656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e658:{NFSU2_TR(0x65e658);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e659:{NFSU2_TR(0x65e659);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e65cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e65c:L65e65c:{c.instructions+=2;NFSU2_TR(0x65e65c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e65d:{NFSU2_TR(0x65e65d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e660:L65e660:{c.instructions+=10;NFSU2_TR(0x65e660);
__builtin_memmove((R+28),(R+28),4);
}
B65e662:{NFSU2_TR(0x65e662);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e663:{NFSU2_TR(0x65e663);
__builtin_memmove((R+20),(R+16),4);
}
B65e665:{NFSU2_TR(0x65e665);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e668:{NFSU2_TR(0x65e668);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e66b:{NFSU2_TR(0x65e66b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e66e:{NFSU2_TR(0x65e66e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e671:{NFSU2_TR(0x65e671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e673:{NFSU2_TR(0x65e673);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e674:{NFSU2_TR(0x65e674);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e677ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e677:L65e677:{c.instructions+=2;NFSU2_TR(0x65e677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e678:{NFSU2_TR(0x65e678);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e67b:L65e67b:{c.instructions+=10;NFSU2_TR(0x65e67b);
__builtin_memmove((R+28),(R+28),4);
}
B65e67d:{NFSU2_TR(0x65e67d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e67e:{NFSU2_TR(0x65e67e);
__builtin_memmove((R+20),(R+16),4);
}
B65e680:{NFSU2_TR(0x65e680);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e683:{NFSU2_TR(0x65e683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e686:{NFSU2_TR(0x65e686);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e689:{NFSU2_TR(0x65e689);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e68c:{NFSU2_TR(0x65e68c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e68e:{NFSU2_TR(0x65e68e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e68f:{NFSU2_TR(0x65e68f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e692ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e692:L65e692:{c.instructions+=2;NFSU2_TR(0x65e692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e693:{NFSU2_TR(0x65e693);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e696:L65e696:{c.instructions+=10;NFSU2_TR(0x65e696);
__builtin_memmove((R+28),(R+28),4);
}
B65e698:{NFSU2_TR(0x65e698);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e699:{NFSU2_TR(0x65e699);
__builtin_memmove((R+20),(R+16),4);
}
B65e69b:{NFSU2_TR(0x65e69b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e69e:{NFSU2_TR(0x65e69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e6a1:{NFSU2_TR(0x65e6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e6a4:{NFSU2_TR(0x65e6a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e6a7:{NFSU2_TR(0x65e6a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e6a9:{NFSU2_TR(0x65e6a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e6aa:{NFSU2_TR(0x65e6aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e6adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e6ad:L65e6ad:{c.instructions+=2;NFSU2_TR(0x65e6ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e6ae:{NFSU2_TR(0x65e6ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e6b1:L65e6b1:{c.instructions+=10;NFSU2_TR(0x65e6b1);
__builtin_memmove((R+28),(R+28),4);
}
B65e6b3:{NFSU2_TR(0x65e6b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e6b4:{NFSU2_TR(0x65e6b4);
__builtin_memmove((R+20),(R+16),4);
}
B65e6b6:{NFSU2_TR(0x65e6b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e6b9:{NFSU2_TR(0x65e6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e6bc:{NFSU2_TR(0x65e6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e6bf:{NFSU2_TR(0x65e6bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e6c2:{NFSU2_TR(0x65e6c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e6c4:{NFSU2_TR(0x65e6c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e6c5:{NFSU2_TR(0x65e6c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e6c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e6c8:L65e6c8:{c.instructions+=2;NFSU2_TR(0x65e6c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e6c9:{NFSU2_TR(0x65e6c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e6cc:L65e6cc:{c.instructions+=11;NFSU2_TR(0x65e6cc);
__builtin_memmove((R+28),(R+28),4);
}
B65e6ce:{NFSU2_TR(0x65e6ce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e6cf:{NFSU2_TR(0x65e6cf);
__builtin_memmove((R+20),(R+16),4);
}
B65e6d1:{NFSU2_TR(0x65e6d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e6d4:{NFSU2_TR(0x65e6d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e6d7:{NFSU2_TR(0x65e6d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e6da:{NFSU2_TR(0x65e6da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e6dd:{NFSU2_TR(0x65e6dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e6e0:{NFSU2_TR(0x65e6e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e6e2:{NFSU2_TR(0x65e6e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e6e3:{NFSU2_TR(0x65e6e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e6e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e6e6:L65e6e6:{c.instructions+=2;NFSU2_TR(0x65e6e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e6e7:{NFSU2_TR(0x65e6e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e6ea:L65e6ea:{c.instructions+=11;NFSU2_TR(0x65e6ea);
__builtin_memmove((R+28),(R+28),4);
}
B65e6ec:{NFSU2_TR(0x65e6ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e6ed:{NFSU2_TR(0x65e6ed);
__builtin_memmove((R+20),(R+16),4);
}
B65e6ef:{NFSU2_TR(0x65e6ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e6f2:{NFSU2_TR(0x65e6f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e6f5:{NFSU2_TR(0x65e6f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e6f8:{NFSU2_TR(0x65e6f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e6fb:{NFSU2_TR(0x65e6fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e6fe:{NFSU2_TR(0x65e6fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e700:{NFSU2_TR(0x65e700);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e701:{NFSU2_TR(0x65e701);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e704ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e704:L65e704:{c.instructions+=2;NFSU2_TR(0x65e704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e705:{NFSU2_TR(0x65e705);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e708:L65e708:{c.instructions+=11;NFSU2_TR(0x65e708);
__builtin_memmove((R+28),(R+28),4);
}
B65e70a:{NFSU2_TR(0x65e70a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e70b:{NFSU2_TR(0x65e70b);
__builtin_memmove((R+20),(R+16),4);
}
B65e70d:{NFSU2_TR(0x65e70d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e710:{NFSU2_TR(0x65e710);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65e713:{NFSU2_TR(0x65e713);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e716:{NFSU2_TR(0x65e716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e718:{NFSU2_TR(0x65e718);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e719:{NFSU2_TR(0x65e719);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65e71c:{NFSU2_TR(0x65e71c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e71d:{NFSU2_TR(0x65e71d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e720ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e720:L65e720:{c.instructions+=2;NFSU2_TR(0x65e720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e721:{NFSU2_TR(0x65e721);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e724:L65e724:{c.instructions+=9;NFSU2_TR(0x65e724);
__builtin_memmove((R+28),(R+28),4);
}
B65e726:{NFSU2_TR(0x65e726);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e727:{NFSU2_TR(0x65e727);
__builtin_memmove((R+20),(R+16),4);
}
B65e729:{NFSU2_TR(0x65e729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e72c:{NFSU2_TR(0x65e72c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e72f:{NFSU2_TR(0x65e72f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e732:{NFSU2_TR(0x65e732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e734:{NFSU2_TR(0x65e734);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e735:{NFSU2_TR(0x65e735);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e738ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e738:L65e738:{c.instructions+=2;NFSU2_TR(0x65e738);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e739:{NFSU2_TR(0x65e739);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e73c:L65e73c:{c.instructions+=9;NFSU2_TR(0x65e73c);
__builtin_memmove((R+28),(R+28),4);
}
B65e73e:{NFSU2_TR(0x65e73e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e73f:{NFSU2_TR(0x65e73f);
__builtin_memmove((R+20),(R+16),4);
}
B65e741:{NFSU2_TR(0x65e741);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e744:{NFSU2_TR(0x65e744);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e747:{NFSU2_TR(0x65e747);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e74a:{NFSU2_TR(0x65e74a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e74c:{NFSU2_TR(0x65e74c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e74d:{NFSU2_TR(0x65e74d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e750ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e750:L65e750:{c.instructions+=2;NFSU2_TR(0x65e750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e751:{NFSU2_TR(0x65e751);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e754:L65e754:{c.instructions+=9;NFSU2_TR(0x65e754);
__builtin_memmove((R+28),(R+28),4);
}
B65e756:{NFSU2_TR(0x65e756);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e757:{NFSU2_TR(0x65e757);
__builtin_memmove((R+20),(R+16),4);
}
B65e759:{NFSU2_TR(0x65e759);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e75c:{NFSU2_TR(0x65e75c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e75f:{NFSU2_TR(0x65e75f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e762:{NFSU2_TR(0x65e762);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e764:{NFSU2_TR(0x65e764);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e765:{NFSU2_TR(0x65e765);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e768ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e768:L65e768:{c.instructions+=2;NFSU2_TR(0x65e768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e769:{NFSU2_TR(0x65e769);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e76c:L65e76c:{c.instructions+=11;NFSU2_TR(0x65e76c);
__builtin_memmove((R+28),(R+28),4);
}
B65e76e:{NFSU2_TR(0x65e76e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e76f:{NFSU2_TR(0x65e76f);
__builtin_memmove((R+20),(R+16),4);
}
B65e771:{NFSU2_TR(0x65e771);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e774:{NFSU2_TR(0x65e774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e777:{NFSU2_TR(0x65e777);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e77a:{NFSU2_TR(0x65e77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e77d:{NFSU2_TR(0x65e77d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e780:{NFSU2_TR(0x65e780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e782:{NFSU2_TR(0x65e782);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e783:{NFSU2_TR(0x65e783);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e786ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e786:L65e786:{c.instructions+=2;NFSU2_TR(0x65e786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e787:{NFSU2_TR(0x65e787);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e78a:L65e78a:{c.instructions+=11;NFSU2_TR(0x65e78a);
__builtin_memmove((R+28),(R+28),4);
}
B65e78c:{NFSU2_TR(0x65e78c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e78d:{NFSU2_TR(0x65e78d);
__builtin_memmove((R+20),(R+16),4);
}
B65e78f:{NFSU2_TR(0x65e78f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e792:{NFSU2_TR(0x65e792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e795:{NFSU2_TR(0x65e795);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e798:{NFSU2_TR(0x65e798);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e79b:{NFSU2_TR(0x65e79b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e79e:{NFSU2_TR(0x65e79e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e7a0:{NFSU2_TR(0x65e7a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e7a1:{NFSU2_TR(0x65e7a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e7a4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e7a4:L65e7a4:{c.instructions+=2;NFSU2_TR(0x65e7a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e7a5:{NFSU2_TR(0x65e7a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e7a8:L65e7a8:{c.instructions+=8;NFSU2_TR(0x65e7a8);
__builtin_memmove((R+28),(R+28),4);
}
B65e7aa:{NFSU2_TR(0x65e7aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e7ab:{NFSU2_TR(0x65e7ab);
__builtin_memmove((R+20),(R+16),4);
}
B65e7ad:{NFSU2_TR(0x65e7ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e7ae:{NFSU2_TR(0x65e7ae);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65e7b0:{NFSU2_TR(0x65e7b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65e7b3:{NFSU2_TR(0x65e7b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e7b4:{NFSU2_TR(0x65e7b4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65e7eb;}}
}
B65e7b6:L65e7b6:{c.instructions+=1;NFSU2_TR(0x65e7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65e7b9:L65e7b9:{c.instructions+=3;NFSU2_TR(0x65e7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e7bd:{NFSU2_TR(0x65e7bd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65e7c0:{NFSU2_TR(0x65e7c0);
if(r1(R+518)){{goto L65e7c6;}}
}
B65e7c2:L65e7c2:{c.instructions+=1;NFSU2_TR(0x65e7c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e7c6:L65e7c6:{c.instructions+=11;NFSU2_TR(0x65e7c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e7c9:{NFSU2_TR(0x65e7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e7cc:{NFSU2_TR(0x65e7cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e7ce:{NFSU2_TR(0x65e7ce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e7d0:{NFSU2_TR(0x65e7d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65e7d3:{NFSU2_TR(0x65e7d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e7d4:{NFSU2_TR(0x65e7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65e7d7:{NFSU2_TR(0x65e7d7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+24)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65e7d9:{NFSU2_TR(0x65e7d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e7da:{NFSU2_TR(0x65e7da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e7db:{NFSU2_TR(0x65e7db);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e7deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e7de:L65e7de:{c.instructions+=2;NFSU2_TR(0x65e7de);
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
B65e7e0:{NFSU2_TR(0x65e7e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65e7ed;}}
}
B65e7e2:L65e7e2:{c.instructions+=4;NFSU2_TR(0x65e7e2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B65e7e5:{NFSU2_TR(0x65e7e5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65e7e6:{NFSU2_TR(0x65e7e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65e7e9:{NFSU2_TR(0x65e7e9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e7b9u);}goto L65e7b9;}}
}
B65e7eb:L65e7eb:{c.instructions+=1;NFSU2_TR(0x65e7eb);
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
B65e7ed:L65e7ed:{c.instructions+=4;NFSU2_TR(0x65e7ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65e7ee:{NFSU2_TR(0x65e7ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65e7ef:{NFSU2_TR(0x65e7ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e7f0:{NFSU2_TR(0x65e7f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e7f3:L65e7f3:{c.instructions+=11;NFSU2_TR(0x65e7f3);
__builtin_memmove((R+28),(R+28),4);
}
B65e7f5:{NFSU2_TR(0x65e7f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e7f6:{NFSU2_TR(0x65e7f6);
__builtin_memmove((R+20),(R+16),4);
}
B65e7f8:{NFSU2_TR(0x65e7f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e7fb:{NFSU2_TR(0x65e7fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e7fe:{NFSU2_TR(0x65e7fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e801:{NFSU2_TR(0x65e801);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e804:{NFSU2_TR(0x65e804);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e807:{NFSU2_TR(0x65e807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e809:{NFSU2_TR(0x65e809);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e80a:{NFSU2_TR(0x65e80a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e80dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e80d:L65e80d:{c.instructions+=2;NFSU2_TR(0x65e80d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e80e:{NFSU2_TR(0x65e80e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e811:L65e811:{c.instructions+=11;NFSU2_TR(0x65e811);
__builtin_memmove((R+28),(R+28),4);
}
B65e813:{NFSU2_TR(0x65e813);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e814:{NFSU2_TR(0x65e814);
__builtin_memmove((R+20),(R+16),4);
}
B65e816:{NFSU2_TR(0x65e816);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e819:{NFSU2_TR(0x65e819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e81c:{NFSU2_TR(0x65e81c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e81f:{NFSU2_TR(0x65e81f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e822:{NFSU2_TR(0x65e822);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e825:{NFSU2_TR(0x65e825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e827:{NFSU2_TR(0x65e827);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e828:{NFSU2_TR(0x65e828);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e82bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e82b:L65e82b:{c.instructions+=2;NFSU2_TR(0x65e82b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e82c:{NFSU2_TR(0x65e82c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e82f:L65e82f:{c.instructions+=11;NFSU2_TR(0x65e82f);
__builtin_memmove((R+28),(R+28),4);
}
B65e831:{NFSU2_TR(0x65e831);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e832:{NFSU2_TR(0x65e832);
__builtin_memmove((R+20),(R+16),4);
}
B65e834:{NFSU2_TR(0x65e834);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e837:{NFSU2_TR(0x65e837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e83a:{NFSU2_TR(0x65e83a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e83d:{NFSU2_TR(0x65e83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e840:{NFSU2_TR(0x65e840);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e843:{NFSU2_TR(0x65e843);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65e845:{NFSU2_TR(0x65e845);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e846:{NFSU2_TR(0x65e846);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e849ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e849:L65e849:{c.instructions+=2;NFSU2_TR(0x65e849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e84a:{NFSU2_TR(0x65e84a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e84d:L65e84d:{c.instructions+=13;NFSU2_TR(0x65e84d);
__builtin_memmove((R+28),(R+28),4);
}
B65e84f:{NFSU2_TR(0x65e84f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e850:{NFSU2_TR(0x65e850);
__builtin_memmove((R+20),(R+16),4);
}
B65e852:{NFSU2_TR(0x65e852);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e853:{NFSU2_TR(0x65e853);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e854:{NFSU2_TR(0x65e854);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e855:{NFSU2_TR(0x65e855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65e858:{NFSU2_TR(0x65e858);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e85b:{NFSU2_TR(0x65e85b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e85c:{NFSU2_TR(0x65e85c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65e85e:{NFSU2_TR(0x65e85e);
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
B65e861:{NFSU2_TR(0x65e861);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e864:{NFSU2_TR(0x65e864);
if(r1(R+518)){{goto L65e967;}}
}
B65e86a:L65e86a:{c.instructions+=2;NFSU2_TR(0x65e86a);
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
B65e86d:{NFSU2_TR(0x65e86d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65e967;}}
}
B65e873:L65e873:{c.instructions+=4;NFSU2_TR(0x65e873);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e879:{NFSU2_TR(0x65e879);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65e87f:{NFSU2_TR(0x65e87f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e880:{NFSU2_TR(0x65e880);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65e8ff;}}
}
B65e882:L65e882:{c.instructions+=6;NFSU2_TR(0x65e882);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B65e886:{NFSU2_TR(0x65e886);
__builtin_memmove((R+24),(R+0),4);
}
B65e888:{NFSU2_TR(0x65e888);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B65e88b:{NFSU2_TR(0x65e88b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e88c:{NFSU2_TR(0x65e88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e88f:{NFSU2_TR(0x65e88f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e894ull));
TAIL_STATIC(0x575620u,575);
}
B65e894:L65e894:{c.instructions+=5;NFSU2_TR(0x65e894);
__builtin_memmove((R+8),(R+0),4);
}
B65e896:{NFSU2_TR(0x65e896);
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
B65e898:{NFSU2_TR(0x65e898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65e899:{NFSU2_TR(0x65e899);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e89c:{NFSU2_TR(0x65e89c);
if(r1(R+518)){{goto L65e966;}}
}
B65e8a2:L65e8a2:{c.instructions+=4;NFSU2_TR(0x65e8a2);
__builtin_memmove((R+4),(R+24),4);
}
B65e8a4:{NFSU2_TR(0x65e8a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65e8a7:{NFSU2_TR(0x65e8a7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65e8a9:{NFSU2_TR(0x65e8a9);
__builtin_memmove((R+28),(R+8),4);
}
B65e8ab:L65e8ab:{c.instructions+=1;NFSU2_TR(0x65e8ab);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65e8ad;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e8abu);}goto L65e8ab;}
}
B65e8ad:L65e8ad:{c.instructions+=2;NFSU2_TR(0x65e8ad);
__builtin_memmove((R+4),(R+24),4);
}
B65e8af:{NFSU2_TR(0x65e8af);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65e8b2:L65e8b2:{c.instructions+=1;NFSU2_TR(0x65e8b2);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L65e8b4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e8b2u);}goto L65e8b2;}
}
B65e8b4:L65e8b4:{c.instructions+=6;NFSU2_TR(0x65e8b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e8ba:{NFSU2_TR(0x65e8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65e8c0:{NFSU2_TR(0x65e8c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65e8c3:{NFSU2_TR(0x65e8c3);
__builtin_memmove((R+0),(R+4),4);
}
B65e8c5:{NFSU2_TR(0x65e8c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65e8c8:{NFSU2_TR(0x65e8c8);
__builtin_memmove((R+28),(R+8),4);
}
B65e8ca:L65e8ca:{c.instructions+=1;NFSU2_TR(0x65e8ca);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65e8cc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e8cau);}goto L65e8ca;}
}
B65e8cc:L65e8cc:{c.instructions+=2;NFSU2_TR(0x65e8cc);
__builtin_memmove((R+4),(R+0),4);
}
B65e8ce:{NFSU2_TR(0x65e8ce);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65e8d1:L65e8d1:{c.instructions+=1;NFSU2_TR(0x65e8d1);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65e8d3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e8d1u);}goto L65e8d1;}
}
B65e8d3:L65e8d3:{c.instructions+=3;NFSU2_TR(0x65e8d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e8d9:{NFSU2_TR(0x65e8d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e8db:{NFSU2_TR(0x65e8db);
if(r1(R+518)){{goto L65e8ee;}}
}
B65e8dd:L65e8dd:{c.instructions+=2;NFSU2_TR(0x65e8dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e8de:{NFSU2_TR(0x65e8de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e8e3ull));
TAIL_STATIC(0x575630u,575);
}
B65e8e3:L65e8e3:{c.instructions+=3;NFSU2_TR(0x65e8e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e8ea:{NFSU2_TR(0x65e8ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65e8ed:{NFSU2_TR(0x65e8ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65e8ee:L65e8ee:{c.instructions+=4;NFSU2_TR(0x65e8ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e8f1:{NFSU2_TR(0x65e8f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e8f7:{NFSU2_TR(0x65e8f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e8fd:{NFSU2_TR(0x65e8fd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65e8ff:L65e8ff:{c.instructions+=9;NFSU2_TR(0x65e8ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e905:{NFSU2_TR(0x65e905);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65e90b:{NFSU2_TR(0x65e90b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65e911:{NFSU2_TR(0x65e911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65e913:{NFSU2_TR(0x65e913);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e916:{NFSU2_TR(0x65e916);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65e919:{NFSU2_TR(0x65e919);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e91b:{NFSU2_TR(0x65e91b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65e91d:{NFSU2_TR(0x65e91d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e922ull));
TAIL_STATIC(0x575620u,575);
}
B65e922:L65e922:{c.instructions+=3;NFSU2_TR(0x65e922);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e924:{NFSU2_TR(0x65e924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65e925:{NFSU2_TR(0x65e925);
if(r1(R+518)){{goto L65e938;}}
}
B65e927:L65e927:{c.instructions+=6;NFSU2_TR(0x65e927);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65e92b:{NFSU2_TR(0x65e92b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e92e:{NFSU2_TR(0x65e92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e931:{NFSU2_TR(0x65e931);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65e933:{NFSU2_TR(0x65e933);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e936:{NFSU2_TR(0x65e936);
{goto L65e93a;}
}
B65e938:L65e938:{c.instructions+=1;NFSU2_TR(0x65e938);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65e93a:L65e93a:{c.instructions+=2;NFSU2_TR(0x65e93a);
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
B65e93c:{NFSU2_TR(0x65e93c);
if(r1(R+518)){{goto L65e966;}}
}
B65e93e:L65e93e:{c.instructions+=10;NFSU2_TR(0x65e93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65e945:{NFSU2_TR(0x65e945);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e94b:{NFSU2_TR(0x65e94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e94e:{NFSU2_TR(0x65e94e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B65e954:{NFSU2_TR(0x65e954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65e956:{NFSU2_TR(0x65e956);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e959:{NFSU2_TR(0x65e959);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B65e95f:{NFSU2_TR(0x65e95f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65e961:{NFSU2_TR(0x65e961);
w4(R+0,u32(~u32(r4(R+0))));
}
B65e963:{NFSU2_TR(0x65e963);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65e966:L65e966:{c.instructions+=1;NFSU2_TR(0x65e966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65e967:L65e967:{c.instructions+=5;NFSU2_TR(0x65e967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e96a:{NFSU2_TR(0x65e96a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65e96b:{NFSU2_TR(0x65e96b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65e96c:{NFSU2_TR(0x65e96c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65e96d:{NFSU2_TR(0x65e96d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e970:L65e970:{c.instructions+=6;NFSU2_TR(0x65e970);
__builtin_memmove((R+28),(R+28),4);
}
B65e972:{NFSU2_TR(0x65e972);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e973:{NFSU2_TR(0x65e973);
__builtin_memmove((R+20),(R+16),4);
}
B65e975:{NFSU2_TR(0x65e975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e978:{NFSU2_TR(0x65e978);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65e97a:{NFSU2_TR(0x65e97a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L65e9a6;}}
}
B65e97c:L65e97c:{c.instructions+=4;NFSU2_TR(0x65e97c);
__builtin_memmove((R+8),(R+0),4);
}
B65e97e:{NFSU2_TR(0x65e97e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B65e984:{NFSU2_TR(0x65e984);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65e986:{NFSU2_TR(0x65e986);
if(r1(R+518)){{goto L65e9a6;}}
}
B65e988:L65e988:{c.instructions+=3;NFSU2_TR(0x65e988);
w4(R+0,u32(~u32(r4(R+0))));
}
B65e98a:{NFSU2_TR(0x65e98a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65e98e:{NFSU2_TR(0x65e98e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65e9a6;}}
}
B65e990:L65e990:{c.instructions+=3;NFSU2_TR(0x65e990);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65e993:{NFSU2_TR(0x65e993);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65e999:{NFSU2_TR(0x65e999);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65e9a6;}}
}
B65e99b:L65e99b:{c.instructions+=3;NFSU2_TR(0x65e99b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65e9a1:{NFSU2_TR(0x65e9a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65e9a4:{NFSU2_TR(0x65e9a4);
{goto L65e9a8;}
}
B65e9a6:L65e9a6:{c.instructions+=1;NFSU2_TR(0x65e9a6);
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
B65e9a8:L65e9a8:{c.instructions+=2;NFSU2_TR(0x65e9a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65e9a9:{NFSU2_TR(0x65e9a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65e9ac:L65e9ac:{c.instructions+=10;NFSU2_TR(0x65e9ac);
__builtin_memmove((R+28),(R+28),4);
}
B65e9ae:{NFSU2_TR(0x65e9ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e9af:{NFSU2_TR(0x65e9af);
__builtin_memmove((R+20),(R+16),4);
}
B65e9b1:{NFSU2_TR(0x65e9b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e9b2:{NFSU2_TR(0x65e9b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e9b3:{NFSU2_TR(0x65e9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65e9b6:{NFSU2_TR(0x65e9b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e9b8:{NFSU2_TR(0x65e9b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e9bb:{NFSU2_TR(0x65e9bb);
__builtin_memmove((R+4),(R+28),4);
}
B65e9bd:{NFSU2_TR(0x65e9bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e9c2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e970u);}goto L65e970;}
}
B65e9c2:L65e9c2:{c.instructions+=3;NFSU2_TR(0x65e9c2);
__builtin_memmove((R+24),(R+0),4);
}
B65e9c4:{NFSU2_TR(0x65e9c4);
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
B65e9c6:{NFSU2_TR(0x65e9c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65e9d2;}}
}
B65e9c8:L65e9c8:{c.instructions+=2;NFSU2_TR(0x65e9c8);
w4(R+0,u32(0x8876086cull));
}
B65e9cd:{NFSU2_TR(0x65e9cd);
{goto L65eb36;}
}
B65e9d2:L65e9d2:{c.instructions+=3;NFSU2_TR(0x65e9d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e9d4:{NFSU2_TR(0x65e9d4);
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
B65e9d7:{NFSU2_TR(0x65e9d7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65eb22;}}
}
B65e9dd:L65e9dd:{c.instructions+=1;NFSU2_TR(0x65e9dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x65eb3cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e9e4:L65e9e4:{c.instructions+=6;NFSU2_TR(0x65e9e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e9e7:{NFSU2_TR(0x65e9e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e9e9:{NFSU2_TR(0x65e9e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e9ec:{NFSU2_TR(0x65e9ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e9ef:{NFSU2_TR(0x65e9ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65e9f0:{NFSU2_TR(0x65e9f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65e9f3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65e9f3:L65e9f3:{c.instructions+=1;NFSU2_TR(0x65e9f3);
{goto L65eb27;}
}
B65e9f8:L65e9f8:{c.instructions+=5;NFSU2_TR(0x65e9f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65e9fb:{NFSU2_TR(0x65e9fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65e9fd:{NFSU2_TR(0x65e9fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea00:{NFSU2_TR(0x65ea00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ea01:{NFSU2_TR(0x65ea01);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ea04ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ea04:L65ea04:{c.instructions+=1;NFSU2_TR(0x65ea04);
{goto L65eb27;}
}
B65ea09:L65ea09:{c.instructions+=6;NFSU2_TR(0x65ea09);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea0c:{NFSU2_TR(0x65ea0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ea0e:{NFSU2_TR(0x65ea0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea11:{NFSU2_TR(0x65ea11);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea14:{NFSU2_TR(0x65ea14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ea15:{NFSU2_TR(0x65ea15);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ea18ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ea18:L65ea18:{c.instructions+=1;NFSU2_TR(0x65ea18);
{goto L65eb27;}
}
B65ea1d:L65ea1d:{c.instructions+=5;NFSU2_TR(0x65ea1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea20:{NFSU2_TR(0x65ea20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ea22:{NFSU2_TR(0x65ea22);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea25:{NFSU2_TR(0x65ea25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ea26:{NFSU2_TR(0x65ea26);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ea29ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ea29:L65ea29:{c.instructions+=1;NFSU2_TR(0x65ea29);
{goto L65eb27;}
}
B65ea2e:L65ea2e:{c.instructions+=6;NFSU2_TR(0x65ea2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea31:{NFSU2_TR(0x65ea31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ea33:{NFSU2_TR(0x65ea33);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea36:{NFSU2_TR(0x65ea36);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea39:{NFSU2_TR(0x65ea39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ea3a:{NFSU2_TR(0x65ea3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ea3dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ea3d:L65ea3d:{c.instructions+=1;NFSU2_TR(0x65ea3d);
{goto L65eb27;}
}
B65ea42:L65ea42:{c.instructions+=7;NFSU2_TR(0x65ea42);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65ea45:{NFSU2_TR(0x65ea45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ea47:{NFSU2_TR(0x65ea47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ea48:{NFSU2_TR(0x65ea48);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65ea4b:{NFSU2_TR(0x65ea4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea4e:{NFSU2_TR(0x65ea4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ea4f:{NFSU2_TR(0x65ea4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ea52ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ea52:L65ea52:{c.instructions+=1;NFSU2_TR(0x65ea52);
{goto L65eb27;}
}
B65ea57:L65ea57:{c.instructions+=6;NFSU2_TR(0x65ea57);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea5a:{NFSU2_TR(0x65ea5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ea5c:{NFSU2_TR(0x65ea5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea5f:{NFSU2_TR(0x65ea5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea62:{NFSU2_TR(0x65ea62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ea63:{NFSU2_TR(0x65ea63);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ea69ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ea69:L65ea69:{c.instructions+=1;NFSU2_TR(0x65ea69);
{goto L65eb27;}
}
B65ea6e:L65ea6e:{c.instructions+=5;NFSU2_TR(0x65ea6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea71:{NFSU2_TR(0x65ea71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ea73:{NFSU2_TR(0x65ea73);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea76:{NFSU2_TR(0x65ea76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ea77:{NFSU2_TR(0x65ea77);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ea7dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ea7d:L65ea7d:{c.instructions+=1;NFSU2_TR(0x65ea7d);
{goto L65eb27;}
}
B65ea82:L65ea82:{c.instructions+=6;NFSU2_TR(0x65ea82);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea85:{NFSU2_TR(0x65ea85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ea87:{NFSU2_TR(0x65ea87);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea8a:{NFSU2_TR(0x65ea8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea8d:{NFSU2_TR(0x65ea8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ea8e:{NFSU2_TR(0x65ea8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ea94ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ea94:L65ea94:{c.instructions+=1;NFSU2_TR(0x65ea94);
{goto L65eb27;}
}
B65ea99:L65ea99:{c.instructions+=5;NFSU2_TR(0x65ea99);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ea9c:{NFSU2_TR(0x65ea9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ea9e:{NFSU2_TR(0x65ea9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65eaa1:{NFSU2_TR(0x65eaa1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65eaa2:{NFSU2_TR(0x65eaa2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65eaa8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65eaa8:L65eaa8:{c.instructions+=1;NFSU2_TR(0x65eaa8);
{goto L65eb27;}
}
B65eaaa:L65eaaa:{c.instructions+=6;NFSU2_TR(0x65eaaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65eaad:{NFSU2_TR(0x65eaad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65eaaf:{NFSU2_TR(0x65eaaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65eab2:{NFSU2_TR(0x65eab2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65eab5:{NFSU2_TR(0x65eab5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65eab6:{NFSU2_TR(0x65eab6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65eabcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65eabc:L65eabc:{c.instructions+=1;NFSU2_TR(0x65eabc);
{goto L65eb27;}
}
B65eabe:L65eabe:{c.instructions+=3;NFSU2_TR(0x65eabe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65eac1:{NFSU2_TR(0x65eac1);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B65eac5:{NFSU2_TR(0x65eac5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65eacb;}}
}
B65eac7:L65eac7:{c.instructions+=2;NFSU2_TR(0x65eac7);
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
B65eac9:{NFSU2_TR(0x65eac9);
{goto L65ead7;}
}
B65eacb:L65eacb:{c.instructions+=5;NFSU2_TR(0x65eacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65eace:{NFSU2_TR(0x65eace);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ead1:{NFSU2_TR(0x65ead1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ead3:{NFSU2_TR(0x65ead3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ead4:{NFSU2_TR(0x65ead4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ead7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ead7:L65ead7:{c.instructions+=5;NFSU2_TR(0x65ead7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ead9:{NFSU2_TR(0x65ead9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65eada:{NFSU2_TR(0x65eada);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65eadd:{NFSU2_TR(0x65eadd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65eade:{NFSU2_TR(0x65eade);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65eae4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65eae4:L65eae4:{c.instructions+=1;NFSU2_TR(0x65eae4);
{goto L65eb27;}
}
B65eae6:L65eae6:{c.instructions+=6;NFSU2_TR(0x65eae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65eae9:{NFSU2_TR(0x65eae9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65eaec:{NFSU2_TR(0x65eaec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65eaee:{NFSU2_TR(0x65eaee);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65eaf1:{NFSU2_TR(0x65eaf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65eaf2:{NFSU2_TR(0x65eaf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65eaf8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65eaf8:L65eaf8:{c.instructions+=1;NFSU2_TR(0x65eaf8);
{goto L65eb27;}
}
B65eafa:L65eafa:{c.instructions+=6;NFSU2_TR(0x65eafa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65eafd:{NFSU2_TR(0x65eafd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65eb00:{NFSU2_TR(0x65eb00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65eb02:{NFSU2_TR(0x65eb02);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65eb05:{NFSU2_TR(0x65eb05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65eb06:{NFSU2_TR(0x65eb06);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65eb0cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65eb0c:L65eb0c:{c.instructions+=1;NFSU2_TR(0x65eb0c);
{goto L65eb27;}
}
B65eb0e:L65eb0e:{c.instructions+=6;NFSU2_TR(0x65eb0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65eb11:{NFSU2_TR(0x65eb11);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65eb14:{NFSU2_TR(0x65eb14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65eb16:{NFSU2_TR(0x65eb16);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65eb19:{NFSU2_TR(0x65eb19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65eb1a:{NFSU2_TR(0x65eb1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65eb20ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65eb20:L65eb20:{c.instructions+=1;NFSU2_TR(0x65eb20);
{goto L65eb27;}
}
B65eb22:L65eb22:{c.instructions+=1;NFSU2_TR(0x65eb22);
w4(R+0,u32(0x80004005ull));
}
B65eb27:L65eb27:{c.instructions+=2;NFSU2_TR(0x65eb27);
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
B65eb29:{NFSU2_TR(0x65eb29);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65eb36;}}
}
B65eb2b:L65eb2b:{c.instructions+=3;NFSU2_TR(0x65eb2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65eb2e:{NFSU2_TR(0x65eb2e);
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
B65eb30:{NFSU2_TR(0x65eb30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65e9d2u);}goto L65e9d2;}}
}
B65eb36:L65eb36:{c.instructions+=4;NFSU2_TR(0x65eb36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65eb37:{NFSU2_TR(0x65eb37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65eb38:{NFSU2_TR(0x65eb38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65eb39:{NFSU2_TR(0x65eb39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65eb78:L65eb78:{c.instructions+=8;NFSU2_TR(0x65eb78);
__builtin_memmove((R+0),(R+4),4);
}
B65eb7a:{NFSU2_TR(0x65eb7a);
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
B65eb7c:{NFSU2_TR(0x65eb7c);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+0)),r4(U+0));
}
B65eb82:{NFSU2_TR(0x65eb82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65eb85:{NFSU2_TR(0x65eb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65eb88:{NFSU2_TR(0x65eb88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65eb8b:{NFSU2_TR(0x65eb8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65eb8e:{NFSU2_TR(0x65eb8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65eb8f:L65eb8f:{c.instructions+=18;NFSU2_TR(0x65eb8f);
__builtin_memmove((R+28),(R+28),4);
}
B65eb91:{NFSU2_TR(0x65eb91);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65eb92:{NFSU2_TR(0x65eb92);
__builtin_memmove((R+20),(R+16),4);
}
B65eb94:{NFSU2_TR(0x65eb94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B65eb97:{NFSU2_TR(0x65eb97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65eb98:{NFSU2_TR(0x65eb98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65eb99:{NFSU2_TR(0x65eb99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65eb9a:{NFSU2_TR(0x65eb9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65eb9d:{NFSU2_TR(0x65eb9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65eb9f:{NFSU2_TR(0x65eb9f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65eba1:{NFSU2_TR(0x65eba1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65eba4:{NFSU2_TR(0x65eba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65eba7:{NFSU2_TR(0x65eba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65ebaa:{NFSU2_TR(0x65ebaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ebad:{NFSU2_TR(0x65ebad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65ebaf:{NFSU2_TR(0x65ebaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ebb2:{NFSU2_TR(0x65ebb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ebb5:{NFSU2_TR(0x65ebb5);
if(r1(R+518)){{goto L65ebc0;}}
}
B65ebb7:L65ebb7:{c.instructions+=2;NFSU2_TR(0x65ebb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65ebbe:{NFSU2_TR(0x65ebbe);
{goto L65ebca;}
}
B65ebc0:L65ebc0:{c.instructions+=4;NFSU2_TR(0x65ebc0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65ebc2:{NFSU2_TR(0x65ebc2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65ebc3:{NFSU2_TR(0x65ebc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B65ebc5:{NFSU2_TR(0x65ebc5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65ebcd;}}
}
B65ebc7:L65ebc7:{c.instructions+=1;NFSU2_TR(0x65ebc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ebca:L65ebca:{c.instructions+=1;NFSU2_TR(0x65ebca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65ebcd:L65ebcd:{c.instructions+=2;NFSU2_TR(0x65ebcd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65ebcf:{NFSU2_TR(0x65ebcf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65edf5;}}
}
B65ebd5:L65ebd5:{c.instructions+=2;NFSU2_TR(0x65ebd5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ebd8:{NFSU2_TR(0x65ebd8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65edcc;}}
}
B65ebde:L65ebde:{c.instructions+=2;NFSU2_TR(0x65ebde);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ebe1:{NFSU2_TR(0x65ebe1);
if(r1(R+518)){{goto L65ec36;}}
}
B65ebe3:L65ebe3:{c.instructions+=2;NFSU2_TR(0x65ebe3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ebe6:{NFSU2_TR(0x65ebe6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65edf5;}}
}
B65ebec:L65ebec:{c.instructions+=5;NFSU2_TR(0x65ebec);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B65ebf0:{NFSU2_TR(0x65ebf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65ebf3:{NFSU2_TR(0x65ebf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65ebf6:{NFSU2_TR(0x65ebf6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65ebf8:{NFSU2_TR(0x65ebf8);
if(r1(R+518)){{goto L65ee09;}}
}
B65ebfe:L65ebfe:{c.instructions+=4;NFSU2_TR(0x65ebfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ec02:{NFSU2_TR(0x65ec02);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ec04:{NFSU2_TR(0x65ec04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65ec06:{NFSU2_TR(0x65ec06);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65ec2c;}}
}
B65ec08:L65ec08:{c.instructions+=6;NFSU2_TR(0x65ec08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ec0a:{NFSU2_TR(0x65ec0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ec0d:{NFSU2_TR(0x65ec0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ec10:{NFSU2_TR(0x65ec10);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ec13:{NFSU2_TR(0x65ec13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ec14:{NFSU2_TR(0x65ec14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ec19ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65eb8fu);}goto L65eb8f;}
}
B65ec19:L65ec19:{c.instructions+=3;NFSU2_TR(0x65ec19);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65ec1b:{NFSU2_TR(0x65ec1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ec1e:{NFSU2_TR(0x65ec1e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65edfc;}}
}
B65ec24:L65ec24:{c.instructions+=3;NFSU2_TR(0x65ec24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ec27:{NFSU2_TR(0x65ec27);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B65ec2a:{NFSU2_TR(0x65ec2a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ec08u);}goto L65ec08;}}
}
B65ec2c:L65ec2c:{c.instructions+=2;NFSU2_TR(0x65ec2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ec2f:{NFSU2_TR(0x65ec2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ebfeu);}goto L65ebfe;}}
}
B65ec31:L65ec31:{c.instructions+=1;NFSU2_TR(0x65ec31);
{goto L65edfc;}
}
B65ec36:L65ec36:{c.instructions+=2;NFSU2_TR(0x65ec36);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B65ec39:{NFSU2_TR(0x65ec39);
if(r1(R+518)){{goto L65ed37;}}
}
B65ec3f:L65ec3f:{c.instructions+=1;NFSU2_TR(0x65ec3f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65eddf;}}
}
B65ec45:L65ec45:{c.instructions+=2;NFSU2_TR(0x65ec45);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ec48:{NFSU2_TR(0x65ec48);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65ecf0;}}
}
B65ec4e:L65ec4e:{c.instructions+=2;NFSU2_TR(0x65ec4e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ec51:{NFSU2_TR(0x65ec51);
if(r1(R+518)){{goto L65eca3;}}
}
B65ec53:L65ec53:{c.instructions+=2;NFSU2_TR(0x65ec53);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65ec56:{NFSU2_TR(0x65ec56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65eddf;}}
}
B65ec5c:L65ec5c:{c.instructions+=2;NFSU2_TR(0x65ec5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ec5e:{NFSU2_TR(0x65ec5e);
if(r1(R+518)){{goto L65edc7;}}
}
B65ec64:L65ec64:{c.instructions+=3;NFSU2_TR(0x65ec64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65ec67:{NFSU2_TR(0x65ec67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ec6a:{NFSU2_TR(0x65ec6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ec6d:L65ec6d:{c.instructions+=2;NFSU2_TR(0x65ec6d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65ec70:{NFSU2_TR(0x65ec70);
if(r1(R+518)){{goto L65ec90;}}
}
B65ec72:L65ec72:{c.instructions+=4;NFSU2_TR(0x65ec72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ec74:{NFSU2_TR(0x65ec74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65ec76:{NFSU2_TR(0x65ec76);
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
B65ec78:{NFSU2_TR(0x65ec78);
if(r1(R+518)){{goto L65ec80;}}
}
B65ec7a:L65ec7a:{c.instructions+=3;NFSU2_TR(0x65ec7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ec7c:{NFSU2_TR(0x65ec7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ec7d:{NFSU2_TR(0x65ec7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ec80ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ec80:L65ec80:{c.instructions+=5;NFSU2_TR(0x65ec80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ec82:{NFSU2_TR(0x65ec82);
u8 U[4];
w4(U+0,u32(0x10ull));
s4(u32(r4(R+0)),r4(U+0));
}
B65ec88:{NFSU2_TR(0x65ec88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ec8a:{NFSU2_TR(0x65ec8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ec8d:{NFSU2_TR(0x65ec8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x8ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65ec90:L65ec90:{c.instructions+=3;NFSU2_TR(0x65ec90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ec93:{NFSU2_TR(0x65ec93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ec95:{NFSU2_TR(0x65ec95);
if(r1(R+518)){{goto L65ec99;}}
}
B65ec97:L65ec97:{c.instructions+=1;NFSU2_TR(0x65ec97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65ec99:L65ec99:{c.instructions+=3;NFSU2_TR(0x65ec99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65ec9c:{NFSU2_TR(0x65ec9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ec9f:{NFSU2_TR(0x65ec9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ec6du);}goto L65ec6d;}}
}
B65eca1:L65eca1:{c.instructions+=1;NFSU2_TR(0x65eca1);
{goto L65ece8;}
}
B65eca3:L65eca3:{c.instructions+=2;NFSU2_TR(0x65eca3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65eca5:{NFSU2_TR(0x65eca5);
if(r1(R+518)){{goto L65edc7;}}
}
B65ecab:L65ecab:{c.instructions+=3;NFSU2_TR(0x65ecab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65ecae:{NFSU2_TR(0x65ecae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ecb1:{NFSU2_TR(0x65ecb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ecb4:L65ecb4:{c.instructions+=2;NFSU2_TR(0x65ecb4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65ecb7:{NFSU2_TR(0x65ecb7);
if(r1(R+518)){{goto L65ecd7;}}
}
B65ecb9:L65ecb9:{c.instructions+=4;NFSU2_TR(0x65ecb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ecbb:{NFSU2_TR(0x65ecbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65ecbd:{NFSU2_TR(0x65ecbd);
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
B65ecbf:{NFSU2_TR(0x65ecbf);
if(r1(R+518)){{goto L65ecc7;}}
}
B65ecc1:L65ecc1:{c.instructions+=3;NFSU2_TR(0x65ecc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ecc3:{NFSU2_TR(0x65ecc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ecc4:{NFSU2_TR(0x65ecc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ecc7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ecc7:L65ecc7:{c.instructions+=5;NFSU2_TR(0x65ecc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ecc9:{NFSU2_TR(0x65ecc9);
u8 U[4];
w4(U+0,u32(0xfull));
s4(u32(r4(R+0)),r4(U+0));
}
B65eccf:{NFSU2_TR(0x65eccf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ecd1:{NFSU2_TR(0x65ecd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ecd4:{NFSU2_TR(0x65ecd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x8ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65ecd7:L65ecd7:{c.instructions+=3;NFSU2_TR(0x65ecd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ecda:{NFSU2_TR(0x65ecda);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ecdc:{NFSU2_TR(0x65ecdc);
if(r1(R+518)){{goto L65ece0;}}
}
B65ecde:L65ecde:{c.instructions+=1;NFSU2_TR(0x65ecde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65ece0:L65ece0:{c.instructions+=3;NFSU2_TR(0x65ece0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65ece3:{NFSU2_TR(0x65ece3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ece6:{NFSU2_TR(0x65ece6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ecb4u);}goto L65ecb4;}}
}
B65ece8:L65ece8:{c.instructions+=2;NFSU2_TR(0x65ece8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65eceb:{NFSU2_TR(0x65eceb);
{goto L65edc7;}
}
B65ecf0:L65ecf0:{c.instructions+=2;NFSU2_TR(0x65ecf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ecf2:{NFSU2_TR(0x65ecf2);
if(r1(R+518)){{goto L65edc7;}}
}
B65ecf8:L65ecf8:{c.instructions+=3;NFSU2_TR(0x65ecf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65ecfb:{NFSU2_TR(0x65ecfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ecfe:{NFSU2_TR(0x65ecfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ed01:L65ed01:{c.instructions+=2;NFSU2_TR(0x65ed01);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65ed04:{NFSU2_TR(0x65ed04);
if(r1(R+518)){{goto L65ed24;}}
}
B65ed06:L65ed06:{c.instructions+=4;NFSU2_TR(0x65ed06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ed08:{NFSU2_TR(0x65ed08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65ed0a:{NFSU2_TR(0x65ed0a);
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
B65ed0c:{NFSU2_TR(0x65ed0c);
if(r1(R+518)){{goto L65ed14;}}
}
B65ed0e:L65ed0e:{c.instructions+=3;NFSU2_TR(0x65ed0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ed10:{NFSU2_TR(0x65ed10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ed11:{NFSU2_TR(0x65ed11);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ed14ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ed14:L65ed14:{c.instructions+=5;NFSU2_TR(0x65ed14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ed16:{NFSU2_TR(0x65ed16);
u8 U[4];
w4(U+0,u32(0x5ull));
s4(u32(r4(R+0)),r4(U+0));
}
B65ed1c:{NFSU2_TR(0x65ed1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ed1e:{NFSU2_TR(0x65ed1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ed21:{NFSU2_TR(0x65ed21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x8ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65ed24:L65ed24:{c.instructions+=3;NFSU2_TR(0x65ed24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ed27:{NFSU2_TR(0x65ed27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ed29:{NFSU2_TR(0x65ed29);
if(r1(R+518)){{goto L65ed2d;}}
}
B65ed2b:L65ed2b:{c.instructions+=1;NFSU2_TR(0x65ed2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65ed2d:L65ed2d:{c.instructions+=3;NFSU2_TR(0x65ed2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65ed30:{NFSU2_TR(0x65ed30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ed33:{NFSU2_TR(0x65ed33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ed01u);}goto L65ed01;}}
}
B65ed35:L65ed35:{c.instructions+=1;NFSU2_TR(0x65ed35);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ece8u);}goto L65ece8;}
}
B65ed37:L65ed37:{c.instructions+=2;NFSU2_TR(0x65ed37);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ed39:{NFSU2_TR(0x65ed39);
if(r1(R+518)){{goto L65edc7;}}
}
B65ed3f:L65ed3f:{c.instructions+=1;NFSU2_TR(0x65ed3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65ed42:L65ed42:{c.instructions+=2;NFSU2_TR(0x65ed42);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65ed45:{NFSU2_TR(0x65ed45);
if(r1(R+518)){{goto L65edaf;}}
}
B65ed47:L65ed47:{c.instructions+=5;NFSU2_TR(0x65ed47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ed4a:{NFSU2_TR(0x65ed4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ed4c:{NFSU2_TR(0x65ed4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65ed4e:{NFSU2_TR(0x65ed4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ed50:{NFSU2_TR(0x65ed50);
if(r1(R+518)){{goto L65ed98;}}
}
B65ed52:L65ed52:{c.instructions+=2;NFSU2_TR(0x65ed52);
__builtin_memmove((R+0),(R+24),4);
}
B65ed54:{NFSU2_TR(0x65ed54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65ed57:L65ed57:{c.instructions+=4;NFSU2_TR(0x65ed57);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B65ed59:{NFSU2_TR(0x65ed59);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65ed5a:{NFSU2_TR(0x65ed5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65ed5c:{NFSU2_TR(0x65ed5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ed57u);}goto L65ed57;}}
}
B65ed5e:L65ed5e:{c.instructions+=7;NFSU2_TR(0x65ed5e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B65ed60:{NFSU2_TR(0x65ed60);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65ed63:{NFSU2_TR(0x65ed63);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65ed64:{NFSU2_TR(0x65ed64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ed65:{NFSU2_TR(0x65ed65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ed66:{NFSU2_TR(0x65ed66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ed69:{NFSU2_TR(0x65ed69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ed6eull));
TAIL_STATIC(0x670f08u,670);
}
B65ed6e:L65ed6e:{c.instructions+=3;NFSU2_TR(0x65ed6e);
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
B65ed70:{NFSU2_TR(0x65ed70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ed73:{NFSU2_TR(0x65ed73);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65ee09;}}
}
B65ed79:L65ed79:{c.instructions+=4;NFSU2_TR(0x65ed79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ed7c:{NFSU2_TR(0x65ed7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ed7e:{NFSU2_TR(0x65ed7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ed7f:{NFSU2_TR(0x65ed7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ed82ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ed82:L65ed82:{c.instructions+=4;NFSU2_TR(0x65ed82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ed85:{NFSU2_TR(0x65ed85);
__builtin_memmove((R+28),(R+0),4);
}
B65ed87:{NFSU2_TR(0x65ed87);
__builtin_memmove((R+0),(R+4),4);
}
B65ed89:{NFSU2_TR(0x65ed89);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65ed8c:L65ed8c:{c.instructions+=1;NFSU2_TR(0x65ed8c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65ed8e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ed8cu);}goto L65ed8c;}
}
B65ed8e:L65ed8e:{c.instructions+=2;NFSU2_TR(0x65ed8e);
__builtin_memmove((R+4),(R+0),4);
}
B65ed90:{NFSU2_TR(0x65ed90);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65ed93:L65ed93:{c.instructions+=1;NFSU2_TR(0x65ed93);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65ed95;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ed93u);}goto L65ed93;}
}
B65ed95:L65ed95:{c.instructions+=1;NFSU2_TR(0x65ed95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ed98:L65ed98:{c.instructions+=7;NFSU2_TR(0x65ed98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ed9a:{NFSU2_TR(0x65ed9a);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B65eda0:{NFSU2_TR(0x65eda0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65eda2:{NFSU2_TR(0x65eda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65eda5:{NFSU2_TR(0x65eda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65eda8:{NFSU2_TR(0x65eda8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65edac:{NFSU2_TR(0x65edac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x8ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B65edaf:L65edaf:{c.instructions+=3;NFSU2_TR(0x65edaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65edb2:{NFSU2_TR(0x65edb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65edb4:{NFSU2_TR(0x65edb4);
if(r1(R+518)){{goto L65edb8;}}
}
B65edb6:L65edb6:{c.instructions+=1;NFSU2_TR(0x65edb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65edb8:L65edb8:{c.instructions+=4;NFSU2_TR(0x65edb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65edbb:{NFSU2_TR(0x65edbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65edbe:{NFSU2_TR(0x65edbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65edc1:{NFSU2_TR(0x65edc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ed42u);}goto L65ed42;}}
}
B65edc7:L65edc7:{c.instructions+=2;NFSU2_TR(0x65edc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65edca:{NFSU2_TR(0x65edca);
{goto L65edfc;}
}
B65edcc:L65edcc:{c.instructions+=5;NFSU2_TR(0x65edcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65edcf:{NFSU2_TR(0x65edcf);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B65edd3:{NFSU2_TR(0x65edd3);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(r4(R+12)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B65edd6:{NFSU2_TR(0x65edd6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65edd7:{NFSU2_TR(0x65edd7);
if(r1(R+518)){{goto L65ede8;}}
}
B65edd9:L65edd9:{c.instructions+=2;NFSU2_TR(0x65edd9);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65edda:{NFSU2_TR(0x65edda);
if(r1(R+518)){{goto L65ede8;}}
}
B65eddc:L65eddc:{c.instructions+=2;NFSU2_TR(0x65eddc);
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
B65eddd:{NFSU2_TR(0x65eddd);
if(r1(R+518)){{goto L65ede8;}}
}
B65eddf:L65eddf:{c.instructions+=2;NFSU2_TR(0x65eddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65ede6:{NFSU2_TR(0x65ede6);
{goto L65ee09;}
}
B65ede8:L65ede8:{c.instructions+=5;NFSU2_TR(0x65ede8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65edeb:{NFSU2_TR(0x65edeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65edee:{NFSU2_TR(0x65edee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B65edf0:{NFSU2_TR(0x65edf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65edf3:{NFSU2_TR(0x65edf3);
{goto L65edfc;}
}
B65edf5:L65edf5:{c.instructions+=1;NFSU2_TR(0x65edf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65edfc:L65edfc:{c.instructions+=3;NFSU2_TR(0x65edfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65edff:{NFSU2_TR(0x65edff);
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
B65ee01:{NFSU2_TR(0x65ee01);
if(r1(R+518)){{goto L65ee09;}}
}
B65ee03:L65ee03:{c.instructions+=3;NFSU2_TR(0x65ee03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ee05:{NFSU2_TR(0x65ee05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ee06:{NFSU2_TR(0x65ee06);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ee09ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ee09:L65ee09:{c.instructions+=6;NFSU2_TR(0x65ee09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ee0c:{NFSU2_TR(0x65ee0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65ee0d:{NFSU2_TR(0x65ee0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65ee0e:{NFSU2_TR(0x65ee0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65ee0f:{NFSU2_TR(0x65ee0f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65ee10:{NFSU2_TR(0x65ee10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65ee13:L65ee13:{c.instructions+=12;NFSU2_TR(0x65ee13);
__builtin_memmove((R+28),(R+28),4);
}
B65ee15:{NFSU2_TR(0x65ee15);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ee16:{NFSU2_TR(0x65ee16);
__builtin_memmove((R+20),(R+16),4);
}
B65ee18:{NFSU2_TR(0x65ee18);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ee1b:{NFSU2_TR(0x65ee1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65ee1e:{NFSU2_TR(0x65ee1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ee21:{NFSU2_TR(0x65ee21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ee22:{NFSU2_TR(0x65ee22);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B65ee25:{NFSU2_TR(0x65ee25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ee26:{NFSU2_TR(0x65ee26);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65ee29:{NFSU2_TR(0x65ee29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ee2a:{NFSU2_TR(0x65ee2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ee2full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65eb8fu);}goto L65eb8f;}
}
B65ee2f:L65ee2f:{c.instructions+=2;NFSU2_TR(0x65ee2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65ee30:{NFSU2_TR(0x65ee30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65ee33:L65ee33:{c.instructions+=4;NFSU2_TR(0x65ee33);
__builtin_memmove((R+0),(R+4),4);
}
B65ee35:{NFSU2_TR(0x65ee35);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B65ee39:{NFSU2_TR(0x65ee39);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B65ee3f:{NFSU2_TR(0x65ee3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65ee40:L65ee40:{c.instructions+=6;NFSU2_TR(0x65ee40);
__builtin_memmove((R+28),(R+28),4);
}
B65ee42:{NFSU2_TR(0x65ee42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ee43:{NFSU2_TR(0x65ee43);
__builtin_memmove((R+24),(R+4),4);
}
B65ee45:{NFSU2_TR(0x65ee45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ee47:{NFSU2_TR(0x65ee47);
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
B65ee4a:{NFSU2_TR(0x65ee4a);
if(r1(R+518)){{goto L65ee5d;}}
}
B65ee4c:L65ee4c:{c.instructions+=1;NFSU2_TR(0x65ee4c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65ee6e;}}
}
B65ee4e:L65ee4e:{c.instructions+=2;NFSU2_TR(0x65ee4e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ee51:{NFSU2_TR(0x65ee51);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65ee5d;}}
}
B65ee53:L65ee53:{c.instructions+=2;NFSU2_TR(0x65ee53);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ee56:{NFSU2_TR(0x65ee56);
if(r1(R+518)){{goto L65ee5d;}}
}
B65ee58:L65ee58:{c.instructions+=2;NFSU2_TR(0x65ee58);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65ee5b:{NFSU2_TR(0x65ee5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65ee6e;}}
}
B65ee5d:L65ee5d:{c.instructions+=3;NFSU2_TR(0x65ee5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ee60:{NFSU2_TR(0x65ee60);
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
B65ee62:{NFSU2_TR(0x65ee62);
if(r1(R+518)){{goto L65ee6e;}}
}
B65ee64:L65ee64:{c.instructions+=3;NFSU2_TR(0x65ee64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ee66:{NFSU2_TR(0x65ee66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ee67:{NFSU2_TR(0x65ee67);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ee6aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ee6a:L65ee6a:{c.instructions+=1;NFSU2_TR(0x65ee6a);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B65ee6e:L65ee6e:{c.instructions+=2;NFSU2_TR(0x65ee6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65ee6f:{NFSU2_TR(0x65ee6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65ee70:L65ee70:{c.instructions+=11;NFSU2_TR(0x65ee70);
__builtin_memmove((R+28),(R+28),4);
}
B65ee72:{NFSU2_TR(0x65ee72);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ee73:{NFSU2_TR(0x65ee73);
__builtin_memmove((R+20),(R+16),4);
}
B65ee75:{NFSU2_TR(0x65ee75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B65ee78:{NFSU2_TR(0x65ee78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65ee7b:{NFSU2_TR(0x65ee7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ee7c:{NFSU2_TR(0x65ee7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ee7d:{NFSU2_TR(0x65ee7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65ee80:{NFSU2_TR(0x65ee80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ee82:{NFSU2_TR(0x65ee82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ee83:{NFSU2_TR(0x65ee83);
if(r1(R+518)){{goto L65ee8f;}}
}
B65ee85:L65ee85:{c.instructions+=4;NFSU2_TR(0x65ee85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ee88:{NFSU2_TR(0x65ee88);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65ee8a:{NFSU2_TR(0x65ee8a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B65ee8d:{NFSU2_TR(0x65ee8d);
{goto L65ee97;}
}
B65ee8f:L65ee8f:{c.instructions+=3;NFSU2_TR(0x65ee8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ee91:{NFSU2_TR(0x65ee91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ee94:{NFSU2_TR(0x65ee94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ee97:L65ee97:{c.instructions+=5;NFSU2_TR(0x65ee97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ee9a:{NFSU2_TR(0x65ee9a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65ee9c:{NFSU2_TR(0x65ee9c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65ee9d:{NFSU2_TR(0x65ee9d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65eea0:{NFSU2_TR(0x65eea0);
if(r1(R+518)){{goto L65eea7;}}
}
B65eea2:L65eea2:{c.instructions+=2;NFSU2_TR(0x65eea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65eea5:{NFSU2_TR(0x65eea5);
{goto L65eeb6;}
}
B65eea7:L65eea7:{c.instructions+=5;NFSU2_TR(0x65eea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65eea9:{NFSU2_TR(0x65eea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65eeac:{NFSU2_TR(0x65eeac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65eeae:{NFSU2_TR(0x65eeae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65eeb1:{NFSU2_TR(0x65eeb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65eeb6;}}
}
B65eeb3:L65eeb3:{c.instructions+=1;NFSU2_TR(0x65eeb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65eeb6:L65eeb6:{c.instructions+=2;NFSU2_TR(0x65eeb6);
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
B65eeb8:{NFSU2_TR(0x65eeb8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65f290u,65f);}
}
B65eebe:L65eebe:{c.instructions+=2;NFSU2_TR(0x65eebe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65eec0:{NFSU2_TR(0x65eec0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x65f107u,65f);}
}
B65eec6:L65eec6:{c.instructions+=2;NFSU2_TR(0x65eec6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65eec9:{NFSU2_TR(0x65eec9);
if(r1(R+518)){{goto L65ef6f;}}
}
B65eecf:L65eecf:{c.instructions+=2;NFSU2_TR(0x65eecf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65eed2:{NFSU2_TR(0x65eed2);
if(r1(R+518)){TAIL_STATIC(0x65f107u,65f);}
}
B65eed8:L65eed8:{c.instructions+=2;NFSU2_TR(0x65eed8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B65eedb:{NFSU2_TR(0x65eedb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65f290u,65f);}
}
B65eee1:L65eee1:{c.instructions+=3;NFSU2_TR(0x65eee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65eee5:{NFSU2_TR(0x65eee5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65eee7:{NFSU2_TR(0x65eee7);
if(r1(R+518)){{goto L65eef1;}}
}
B65eee9:L65eee9:{c.instructions+=3;NFSU2_TR(0x65eee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65eeec:{NFSU2_TR(0x65eeec);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65eeee:{NFSU2_TR(0x65eeee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65eef1:L65eef1:{c.instructions+=7;NFSU2_TR(0x65eef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65eef3:{NFSU2_TR(0x65eef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65eef7:{NFSU2_TR(0x65eef7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B65eefb:{NFSU2_TR(0x65eefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65eefe:{NFSU2_TR(0x65eefe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65ef01:{NFSU2_TR(0x65ef01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65ef03:{NFSU2_TR(0x65ef03);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65f290u,65f);}
}
B65ef09:L65ef09:{c.instructions+=3;NFSU2_TR(0x65ef09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ef0c:{NFSU2_TR(0x65ef0c);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65ef0f:{NFSU2_TR(0x65ef0f);
if(r1(R+518)){TAIL_STATIC(0x65f290u,65f);}
}
B65ef15:L65ef15:{c.instructions+=4;NFSU2_TR(0x65ef15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ef19:{NFSU2_TR(0x65ef19);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ef1b:{NFSU2_TR(0x65ef1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65ef1d:{NFSU2_TR(0x65ef1d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65ef5f;}}
}
B65ef1f:L65ef1f:{c.instructions+=2;NFSU2_TR(0x65ef1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65ef22:{NFSU2_TR(0x65ef22);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B65ef25:L65ef25:{c.instructions+=3;NFSU2_TR(0x65ef25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ef28:{NFSU2_TR(0x65ef28);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65ef2b:{NFSU2_TR(0x65ef2b);
if(r1(R+518)){{goto L65ef5f;}}
}
B65ef2d:L65ef2d:{c.instructions+=2;NFSU2_TR(0x65ef2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65ef31:{NFSU2_TR(0x65ef31);
if(r1(R+518)){{goto L65ef38;}}
}
B65ef33:L65ef33:{c.instructions+=2;NFSU2_TR(0x65ef33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ef35:{NFSU2_TR(0x65ef35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ef38:L65ef38:{c.instructions+=8;NFSU2_TR(0x65ef38);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ef3a:{NFSU2_TR(0x65ef3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ef3d:{NFSU2_TR(0x65ef3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ef40:{NFSU2_TR(0x65ef40);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ef43:{NFSU2_TR(0x65ef43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ef46:{NFSU2_TR(0x65ef46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ef49:{NFSU2_TR(0x65ef49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ef4c:{NFSU2_TR(0x65ef4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ef51ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ee70u);}goto L65ee70;}
}
B65ef51:L65ef51:{c.instructions+=5;NFSU2_TR(0x65ef51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ef54:{NFSU2_TR(0x65ef54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65ef57:{NFSU2_TR(0x65ef57);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B65ef5a:{NFSU2_TR(0x65ef5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65ef5d:{NFSU2_TR(0x65ef5d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ef25u);}goto L65ef25;}}
}
B65ef5f:L65ef5f:{c.instructions+=4;NFSU2_TR(0x65ef5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ef62:{NFSU2_TR(0x65ef62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ef65:{NFSU2_TR(0x65ef65);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65ef68:{NFSU2_TR(0x65ef68);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ef09u);}goto L65ef09;}}
}
B65ef6a:L65ef6a:{c.instructions+=1;NFSU2_TR(0x65ef6a);
TAIL_STATIC(0x65f290u,65f);
}
B65ef6f:L65ef6f:{c.instructions+=8;NFSU2_TR(0x65ef6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ef71:{NFSU2_TR(0x65ef71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ef74:{NFSU2_TR(0x65ef74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ef77:{NFSU2_TR(0x65ef77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ef7a:{NFSU2_TR(0x65ef7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ef7c:{NFSU2_TR(0x65ef7c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65ef7d:{NFSU2_TR(0x65ef7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ef80:{NFSU2_TR(0x65ef80);
if(r1(R+518)){TAIL_STATIC(0x65f083u,65f);}
}
B65ef86:L65ef86:{c.instructions+=2;NFSU2_TR(0x65ef86);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65ef87:{NFSU2_TR(0x65ef87);
if(r1(R+518)){TAIL_STATIC(0x65f00fu,65f);}
}
B65ef8d:L65ef8d:{c.instructions+=2;NFSU2_TR(0x65ef8d);
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
B65ef8e:{NFSU2_TR(0x65ef8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65f290u,65f);}
}
B65ef94:L65ef94:{c.instructions+=9;NFSU2_TR(0x65ef94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65ef97:{NFSU2_TR(0x65ef97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ef9a:{NFSU2_TR(0x65ef9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65ef9d:{NFSU2_TR(0x65ef9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65efa1:{NFSU2_TR(0x65efa1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65efa5:{NFSU2_TR(0x65efa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65efa7:{NFSU2_TR(0x65efa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65efa9:{NFSU2_TR(0x65efa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65efab:{NFSU2_TR(0x65efab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65effe;}}
}
B65efad:L65efad:{c.instructions+=2;NFSU2_TR(0x65efad);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65efaf:{NFSU2_TR(0x65efaf);
if(r1(R+518)){{goto L65effe;}}
}
B65efb1:L65efb1:{c.instructions+=3;NFSU2_TR(0x65efb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65efb5:{NFSU2_TR(0x65efb5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65efb9:{NFSU2_TR(0x65efb9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65eff0;}}
}
B65efbb:L65efbb:{c.instructions+=1;NFSU2_TR(0x65efbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65efbe:L65efbe:{c.instructions+=2;NFSU2_TR(0x65efbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65efc0:{NFSU2_TR(0x65efc0);
if(r1(R+518)){{goto L65eff0;}}
}
B65efc2:L65efc2:{c.instructions+=3;NFSU2_TR(0x65efc2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65efc4:{NFSU2_TR(0x65efc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65efc7:{NFSU2_TR(0x65efc7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65efda;}}
}
B65efc9:L65efc9:{c.instructions+=1;NFSU2_TR(0x65efc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65efcc:L65efcc:{c.instructions+=6;NFSU2_TR(0x65efcc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65efce:{NFSU2_TR(0x65efce);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65efd1:{NFSU2_TR(0x65efd1);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65efd4:{NFSU2_TR(0x65efd4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B65efd5:{NFSU2_TR(0x65efd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B65efd8:{NFSU2_TR(0x65efd8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65efccu);}goto L65efcc;}}
}
B65efda:L65efda:{c.instructions+=8;NFSU2_TR(0x65efda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65efde:{NFSU2_TR(0x65efde);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65efe1:{NFSU2_TR(0x65efe1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B65efe2:{NFSU2_TR(0x65efe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65efe5:{NFSU2_TR(0x65efe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65efe8:{NFSU2_TR(0x65efe8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B65efeb:{NFSU2_TR(0x65efeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65efee:{NFSU2_TR(0x65efee);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65efbeu);}goto L65efbe;}}
}
B65eff0:L65eff0:{c.instructions+=5;NFSU2_TR(0x65eff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65eff3:{NFSU2_TR(0x65eff3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B65eff6:{NFSU2_TR(0x65eff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65eff9:{NFSU2_TR(0x65eff9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65effc:{NFSU2_TR(0x65effc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65efadu);}goto L65efad;}}
}
B65effe:L65effe:{c.instructions+=1;NFSU2_TR(0x65effe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
TAIL_STATIC(0x65f000u,65f);
}
XIT:NFSU2_TR_EXIT(0x65e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
