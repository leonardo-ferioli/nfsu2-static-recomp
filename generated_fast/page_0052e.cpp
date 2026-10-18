#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x52e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x52e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_52e(u8* __restrict R,Cpu& c);
u32 page_52e(Cpu& c){return body_52e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_52e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x52e001:goto L52e001;
case 0x52e002:c.instructions+=2;goto B52e002;
case 0x52e003:c.instructions+=1;goto B52e003;
case 0x52e005:goto L52e005;
case 0x52e007:c.instructions+=1;goto B52e007;
case 0x52e009:goto L52e009;
case 0x52e00c:c.instructions+=4;goto B52e00c;
case 0x52e010:c.instructions+=3;goto B52e010;
case 0x52e011:c.instructions+=2;goto B52e011;
case 0x52e012:c.instructions+=1;goto B52e012;
case 0x52e017:goto L52e017;
case 0x52e01a:c.instructions+=2;goto B52e01a;
case 0x52e01c:c.instructions+=1;goto B52e01c;
case 0x52e01e:goto L52e01e;
case 0x52e021:c.instructions+=2;goto B52e021;
case 0x52e023:c.instructions+=1;goto B52e023;
case 0x52e025:goto L52e025;
case 0x52e02a:c.instructions+=1;goto B52e02a;
case 0x52e02f:goto L52e02f;
case 0x52e032:c.instructions+=3;goto B52e032;
case 0x52e035:c.instructions+=2;goto B52e035;
case 0x52e037:c.instructions+=1;goto B52e037;
case 0x52e039:goto L52e039;
case 0x52e03c:c.instructions+=2;goto B52e03c;
case 0x52e03e:c.instructions+=1;goto B52e03e;
case 0x52e040:goto L52e040;
case 0x52e042:goto L52e042;
case 0x52e044:c.instructions+=1;goto B52e044;
case 0x52e046:goto L52e046;
case 0x52e049:c.instructions+=1;goto B52e049;
case 0x52e04b:goto L52e04b;
case 0x52e04d:c.instructions+=2;goto B52e04d;
case 0x52e050:c.instructions+=1;goto B52e050;
case 0x52e055:goto L52e055;
case 0x52e058:c.instructions+=1;goto B52e058;
case 0x52e05b:goto L52e05b;
case 0x52e05e:goto L52e05e;
case 0x52e061:c.instructions+=2;goto B52e061;
case 0x52e063:c.instructions+=1;goto B52e063;
case 0x52e065:goto L52e065;
case 0x52e068:c.instructions+=2;goto B52e068;
case 0x52e06a:c.instructions+=1;goto B52e06a;
case 0x52e06c:goto L52e06c;
case 0x52e070:goto L52e070;
case 0x52e075:c.instructions+=1;goto B52e075;
case 0x52e07a:goto L52e07a;
case 0x52e07d:c.instructions+=3;goto B52e07d;
case 0x52e080:c.instructions+=2;goto B52e080;
case 0x52e082:c.instructions+=1;goto B52e082;
case 0x52e084:goto L52e084;
case 0x52e087:c.instructions+=2;goto B52e087;
case 0x52e089:c.instructions+=1;goto B52e089;
case 0x52e08b:goto L52e08b;
case 0x52e08d:goto L52e08d;
case 0x52e08f:c.instructions+=1;goto B52e08f;
case 0x52e091:goto L52e091;
case 0x52e094:c.instructions+=1;goto B52e094;
case 0x52e096:goto L52e096;
case 0x52e098:c.instructions+=2;goto B52e098;
case 0x52e09b:c.instructions+=1;goto B52e09b;
case 0x52e0a0:goto L52e0a0;
case 0x52e0a3:c.instructions+=1;goto B52e0a3;
case 0x52e0a6:goto L52e0a6;
case 0x52e0a9:goto L52e0a9;
case 0x52e0ac:c.instructions+=2;goto B52e0ac;
case 0x52e0ae:c.instructions+=1;goto B52e0ae;
case 0x52e0b0:goto L52e0b0;
case 0x52e0b3:c.instructions+=2;goto B52e0b3;
case 0x52e0b5:c.instructions+=1;goto B52e0b5;
case 0x52e0b7:goto L52e0b7;
case 0x52e0c0:goto L52e0c0;
case 0x52e0c5:c.instructions+=1;goto B52e0c5;
case 0x52e0ca:goto L52e0ca;
case 0x52e0cd:c.instructions+=3;goto B52e0cd;
case 0x52e0d0:c.instructions+=2;goto B52e0d0;
case 0x52e0d2:c.instructions+=1;goto B52e0d2;
case 0x52e0d4:goto L52e0d4;
case 0x52e0d7:c.instructions+=2;goto B52e0d7;
case 0x52e0d9:c.instructions+=1;goto B52e0d9;
case 0x52e0db:goto L52e0db;
case 0x52e0dd:goto L52e0dd;
case 0x52e0df:c.instructions+=1;goto B52e0df;
case 0x52e0e1:goto L52e0e1;
case 0x52e0e4:c.instructions+=1;goto B52e0e4;
case 0x52e0e6:goto L52e0e6;
case 0x52e0e8:c.instructions+=2;goto B52e0e8;
case 0x52e0eb:c.instructions+=1;goto B52e0eb;
case 0x52e0f0:goto L52e0f0;
case 0x52e0f3:c.instructions+=1;goto B52e0f3;
case 0x52e0f6:goto L52e0f6;
case 0x52e0f9:goto L52e0f9;
case 0x52e0fc:c.instructions+=2;goto B52e0fc;
case 0x52e0ff:c.instructions+=1;goto B52e0ff;
case 0x52e102:goto L52e102;
case 0x52e105:c.instructions+=6;goto B52e105;
case 0x52e106:c.instructions+=5;goto B52e106;
case 0x52e107:c.instructions+=4;goto B52e107;
case 0x52e108:c.instructions+=3;goto B52e108;
case 0x52e10a:c.instructions+=2;goto B52e10a;
case 0x52e10b:c.instructions+=1;goto B52e10b;
case 0x52e10d:goto L52e10d;
case 0x52e10f:c.instructions+=3;goto B52e10f;
case 0x52e114:c.instructions+=2;goto B52e114;
case 0x52e115:c.instructions+=1;goto B52e115;
case 0x52e11a:goto L52e11a;
case 0x52e11d:goto L52e11d;
case 0x52e120:goto L52e120;
case 0x52e121:c.instructions+=9;goto B52e121;
case 0x52e122:c.instructions+=8;goto B52e122;
case 0x52e124:c.instructions+=7;goto B52e124;
case 0x52e12a:c.instructions+=6;goto B52e12a;
case 0x52e12d:c.instructions+=5;goto B52e12d;
case 0x52e12f:c.instructions+=4;goto B52e12f;
case 0x52e131:c.instructions+=3;goto B52e131;
case 0x52e132:c.instructions+=2;goto B52e132;
case 0x52e133:c.instructions+=1;goto B52e133;
case 0x52e135:goto L52e135;
case 0x52e137:c.instructions+=1;goto B52e137;
case 0x52e139:goto L52e139;
case 0x52e13c:c.instructions+=4;goto B52e13c;
case 0x52e140:c.instructions+=3;goto B52e140;
case 0x52e141:c.instructions+=2;goto B52e141;
case 0x52e142:c.instructions+=1;goto B52e142;
case 0x52e147:goto L52e147;
case 0x52e14a:c.instructions+=2;goto B52e14a;
case 0x52e14c:c.instructions+=1;goto B52e14c;
case 0x52e14e:goto L52e14e;
case 0x52e151:c.instructions+=2;goto B52e151;
case 0x52e153:c.instructions+=1;goto B52e153;
case 0x52e155:goto L52e155;
case 0x52e15a:c.instructions+=1;goto B52e15a;
case 0x52e15f:goto L52e15f;
case 0x52e162:c.instructions+=3;goto B52e162;
case 0x52e165:c.instructions+=2;goto B52e165;
case 0x52e167:c.instructions+=1;goto B52e167;
case 0x52e169:goto L52e169;
case 0x52e16c:c.instructions+=2;goto B52e16c;
case 0x52e16e:c.instructions+=1;goto B52e16e;
case 0x52e170:goto L52e170;
case 0x52e172:goto L52e172;
case 0x52e174:c.instructions+=1;goto B52e174;
case 0x52e176:goto L52e176;
case 0x52e179:c.instructions+=1;goto B52e179;
case 0x52e17b:goto L52e17b;
case 0x52e17d:c.instructions+=2;goto B52e17d;
case 0x52e180:c.instructions+=1;goto B52e180;
case 0x52e185:goto L52e185;
case 0x52e188:c.instructions+=1;goto B52e188;
case 0x52e18b:goto L52e18b;
case 0x52e18e:goto L52e18e;
case 0x52e191:c.instructions+=2;goto B52e191;
case 0x52e193:c.instructions+=1;goto B52e193;
case 0x52e195:goto L52e195;
case 0x52e198:c.instructions+=2;goto B52e198;
case 0x52e19a:c.instructions+=1;goto B52e19a;
case 0x52e19c:goto L52e19c;
case 0x52e1a0:goto L52e1a0;
case 0x52e1a5:c.instructions+=1;goto B52e1a5;
case 0x52e1aa:goto L52e1aa;
case 0x52e1ad:c.instructions+=3;goto B52e1ad;
case 0x52e1b0:c.instructions+=2;goto B52e1b0;
case 0x52e1b2:c.instructions+=1;goto B52e1b2;
case 0x52e1b4:goto L52e1b4;
case 0x52e1b7:c.instructions+=2;goto B52e1b7;
case 0x52e1b9:c.instructions+=1;goto B52e1b9;
case 0x52e1bb:goto L52e1bb;
case 0x52e1bd:goto L52e1bd;
case 0x52e1bf:c.instructions+=1;goto B52e1bf;
case 0x52e1c1:goto L52e1c1;
case 0x52e1c4:c.instructions+=1;goto B52e1c4;
case 0x52e1c6:goto L52e1c6;
case 0x52e1c8:c.instructions+=2;goto B52e1c8;
case 0x52e1cb:c.instructions+=1;goto B52e1cb;
case 0x52e1d0:goto L52e1d0;
case 0x52e1d3:c.instructions+=1;goto B52e1d3;
case 0x52e1d6:goto L52e1d6;
case 0x52e1d9:goto L52e1d9;
case 0x52e1dc:c.instructions+=6;goto B52e1dc;
case 0x52e1dd:c.instructions+=5;goto B52e1dd;
case 0x52e1de:c.instructions+=4;goto B52e1de;
case 0x52e1df:c.instructions+=3;goto B52e1df;
case 0x52e1e1:c.instructions+=2;goto B52e1e1;
case 0x52e1e2:c.instructions+=1;goto B52e1e2;
case 0x52e1e4:goto L52e1e4;
case 0x52e1e6:c.instructions+=3;goto B52e1e6;
case 0x52e1eb:c.instructions+=2;goto B52e1eb;
case 0x52e1ec:c.instructions+=1;goto B52e1ec;
case 0x52e1f1:goto L52e1f1;
case 0x52e1f4:goto L52e1f4;
case 0x52e200:goto L52e200;
case 0x52e201:c.instructions+=12;goto B52e201;
case 0x52e205:c.instructions+=11;goto B52e205;
case 0x52e206:c.instructions+=10;goto B52e206;
case 0x52e208:c.instructions+=9;goto B52e208;
case 0x52e20a:c.instructions+=8;goto B52e20a;
case 0x52e20c:c.instructions+=7;goto B52e20c;
case 0x52e210:c.instructions+=6;goto B52e210;
case 0x52e214:c.instructions+=5;goto B52e214;
case 0x52e217:c.instructions+=4;goto B52e217;
case 0x52e21b:c.instructions+=3;goto B52e21b;
case 0x52e21f:c.instructions+=2;goto B52e21f;
case 0x52e223:c.instructions+=1;goto B52e223;
case 0x52e225:goto L52e225;
case 0x52e228:c.instructions+=5;goto B52e228;
case 0x52e22c:c.instructions+=4;goto B52e22c;
case 0x52e230:c.instructions+=3;goto B52e230;
case 0x52e231:c.instructions+=2;goto B52e231;
case 0x52e232:c.instructions+=1;goto B52e232;
case 0x52e237:goto L52e237;
case 0x52e23b:c.instructions+=11;goto B52e23b;
case 0x52e23e:c.instructions+=10;goto B52e23e;
case 0x52e244:c.instructions+=9;goto B52e244;
case 0x52e247:c.instructions+=8;goto B52e247;
case 0x52e24b:c.instructions+=7;goto B52e24b;
case 0x52e24f:c.instructions+=6;goto B52e24f;
case 0x52e253:c.instructions+=5;goto B52e253;
case 0x52e259:c.instructions+=4;goto B52e259;
case 0x52e25b:c.instructions+=3;goto B52e25b;
case 0x52e25d:c.instructions+=2;goto B52e25d;
case 0x52e260:c.instructions+=1;goto B52e260;
case 0x52e262:goto L52e262;
case 0x52e264:c.instructions+=1;goto B52e264;
case 0x52e26a:goto L52e26a;
case 0x52e26c:c.instructions+=7;goto B52e26c;
case 0x52e26f:c.instructions+=6;goto B52e26f;
case 0x52e271:c.instructions+=5;goto B52e271;
case 0x52e274:c.instructions+=4;goto B52e274;
case 0x52e276:c.instructions+=3;goto B52e276;
case 0x52e279:c.instructions+=2;goto B52e279;
case 0x52e27c:c.instructions+=1;goto B52e27c;
case 0x52e282:goto L52e282;
case 0x52e286:c.instructions+=3;goto B52e286;
case 0x52e28a:c.instructions+=2;goto B52e28a;
case 0x52e28e:c.instructions+=1;goto B52e28e;
case 0x52e290:goto L52e290;
case 0x52e293:c.instructions+=5;goto B52e293;
case 0x52e297:c.instructions+=4;goto B52e297;
case 0x52e29b:c.instructions+=3;goto B52e29b;
case 0x52e29c:c.instructions+=2;goto B52e29c;
case 0x52e29d:c.instructions+=1;goto B52e29d;
case 0x52e2a2:goto L52e2a2;
case 0x52e2a6:c.instructions+=11;goto B52e2a6;
case 0x52e2a9:c.instructions+=10;goto B52e2a9;
case 0x52e2af:c.instructions+=9;goto B52e2af;
case 0x52e2b2:c.instructions+=8;goto B52e2b2;
case 0x52e2b6:c.instructions+=7;goto B52e2b6;
case 0x52e2ba:c.instructions+=6;goto B52e2ba;
case 0x52e2be:c.instructions+=5;goto B52e2be;
case 0x52e2c4:c.instructions+=4;goto B52e2c4;
case 0x52e2c6:c.instructions+=3;goto B52e2c6;
case 0x52e2c8:c.instructions+=2;goto B52e2c8;
case 0x52e2cb:c.instructions+=1;goto B52e2cb;
case 0x52e2cd:goto L52e2cd;
case 0x52e2cf:c.instructions+=1;goto B52e2cf;
case 0x52e2d5:goto L52e2d5;
case 0x52e2d7:c.instructions+=7;goto B52e2d7;
case 0x52e2da:c.instructions+=6;goto B52e2da;
case 0x52e2dc:c.instructions+=5;goto B52e2dc;
case 0x52e2df:c.instructions+=4;goto B52e2df;
case 0x52e2e1:c.instructions+=3;goto B52e2e1;
case 0x52e2e4:c.instructions+=2;goto B52e2e4;
case 0x52e2e7:c.instructions+=1;goto B52e2e7;
case 0x52e2e9:goto L52e2e9;
case 0x52e2ed:c.instructions+=2;goto B52e2ed;
case 0x52e2f1:c.instructions+=1;goto B52e2f1;
case 0x52e2f5:goto L52e2f5;
case 0x52e2f8:c.instructions+=4;goto B52e2f8;
case 0x52e2f9:c.instructions+=3;goto B52e2f9;
case 0x52e2fa:c.instructions+=2;goto B52e2fa;
case 0x52e2fb:c.instructions+=1;goto B52e2fb;
case 0x52e300:goto L52e300;
case 0x52e304:c.instructions+=5;goto B52e304;
case 0x52e308:c.instructions+=4;goto B52e308;
case 0x52e309:c.instructions+=3;goto B52e309;
case 0x52e30a:c.instructions+=2;goto B52e30a;
case 0x52e30b:c.instructions+=1;goto B52e30b;
case 0x52e310:goto L52e310;
case 0x52e313:c.instructions+=3;goto B52e313;
case 0x52e314:c.instructions+=2;goto B52e314;
case 0x52e315:c.instructions+=1;goto B52e315;
case 0x52e318:goto L52e318;
case 0x52e31a:c.instructions+=3;goto B52e31a;
case 0x52e31b:c.instructions+=2;goto B52e31b;
case 0x52e31c:c.instructions+=1;goto B52e31c;
case 0x52e320:goto L52e320;
case 0x52e321:c.instructions+=10;goto B52e321;
case 0x52e322:c.instructions+=9;goto B52e322;
case 0x52e324:c.instructions+=8;goto B52e324;
case 0x52e326:c.instructions+=7;goto B52e326;
case 0x52e329:c.instructions+=6;goto B52e329;
case 0x52e32b:c.instructions+=5;goto B52e32b;
case 0x52e32e:c.instructions+=4;goto B52e32e;
case 0x52e331:c.instructions+=3;goto B52e331;
case 0x52e332:c.instructions+=2;goto B52e332;
case 0x52e336:c.instructions+=1;goto B52e336;
case 0x52e338:goto L52e338;
case 0x52e33b:c.instructions+=5;goto B52e33b;
case 0x52e33d:c.instructions+=4;goto B52e33d;
case 0x52e33f:c.instructions+=3;goto B52e33f;
case 0x52e343:c.instructions+=2;goto B52e343;
case 0x52e346:c.instructions+=1;goto B52e346;
case 0x52e349:goto L52e349;
case 0x52e34d:c.instructions+=13;goto B52e34d;
case 0x52e353:c.instructions+=12;goto B52e353;
case 0x52e357:c.instructions+=11;goto B52e357;
case 0x52e35b:c.instructions+=10;goto B52e35b;
case 0x52e35d:c.instructions+=9;goto B52e35d;
case 0x52e361:c.instructions+=8;goto B52e361;
case 0x52e365:c.instructions+=7;goto B52e365;
case 0x52e369:c.instructions+=6;goto B52e369;
case 0x52e36d:c.instructions+=5;goto B52e36d;
case 0x52e373:c.instructions+=4;goto B52e373;
case 0x52e375:c.instructions+=3;goto B52e375;
case 0x52e377:c.instructions+=2;goto B52e377;
case 0x52e37a:c.instructions+=1;goto B52e37a;
case 0x52e37c:goto L52e37c;
case 0x52e37e:c.instructions+=1;goto B52e37e;
case 0x52e384:goto L52e384;
case 0x52e386:c.instructions+=10;goto B52e386;
case 0x52e388:c.instructions+=9;goto B52e388;
case 0x52e38c:c.instructions+=8;goto B52e38c;
case 0x52e390:c.instructions+=7;goto B52e390;
case 0x52e393:c.instructions+=6;goto B52e393;
case 0x52e395:c.instructions+=5;goto B52e395;
case 0x52e399:c.instructions+=4;goto B52e399;
case 0x52e39f:c.instructions+=3;goto B52e39f;
case 0x52e3a1:c.instructions+=2;goto B52e3a1;
case 0x52e3a4:c.instructions+=1;goto B52e3a4;
case 0x52e3a6:goto L52e3a6;
case 0x52e3ac:c.instructions+=1;goto B52e3ac;
case 0x52e3ae:goto L52e3ae;
case 0x52e3b2:c.instructions+=5;goto B52e3b2;
case 0x52e3b8:c.instructions+=4;goto B52e3b8;
case 0x52e3bc:c.instructions+=3;goto B52e3bc;
case 0x52e3be:c.instructions+=2;goto B52e3be;
case 0x52e3c1:c.instructions+=1;goto B52e3c1;
case 0x52e3c3:goto L52e3c3;
case 0x52e3c7:c.instructions+=5;goto B52e3c7;
case 0x52e3c9:c.instructions+=4;goto B52e3c9;
case 0x52e3cb:c.instructions+=3;goto B52e3cb;
case 0x52e3d1:c.instructions+=2;goto B52e3d1;
case 0x52e3d3:c.instructions+=1;goto B52e3d3;
case 0x52e3d5:goto L52e3d5;
case 0x52e3d9:c.instructions+=4;goto B52e3d9;
case 0x52e3dd:c.instructions+=3;goto B52e3dd;
case 0x52e3df:c.instructions+=2;goto B52e3df;
case 0x52e3e5:c.instructions+=1;goto B52e3e5;
case 0x52e3e7:goto L52e3e7;
case 0x52e3e9:goto L52e3e9;
case 0x52e3eb:c.instructions+=4;goto B52e3eb;
case 0x52e3ef:c.instructions+=3;goto B52e3ef;
case 0x52e3f2:c.instructions+=2;goto B52e3f2;
case 0x52e3f4:c.instructions+=1;goto B52e3f4;
case 0x52e3f6:goto L52e3f6;
case 0x52e3f8:c.instructions+=1;goto B52e3f8;
case 0x52e3fa:goto L52e3fa;
case 0x52e3fd:c.instructions+=6;goto B52e3fd;
case 0x52e401:c.instructions+=5;goto B52e401;
case 0x52e402:c.instructions+=4;goto B52e402;
case 0x52e406:c.instructions+=3;goto B52e406;
case 0x52e407:c.instructions+=2;goto B52e407;
case 0x52e408:c.instructions+=1;goto B52e408;
case 0x52e40d:goto L52e40d;
case 0x52e411:c.instructions+=5;goto B52e411;
case 0x52e415:c.instructions+=4;goto B52e415;
case 0x52e416:c.instructions+=3;goto B52e416;
case 0x52e417:c.instructions+=2;goto B52e417;
case 0x52e418:c.instructions+=1;goto B52e418;
case 0x52e41d:goto L52e41d;
case 0x52e420:goto L52e420;
case 0x52e424:c.instructions+=5;goto B52e424;
case 0x52e425:c.instructions+=4;goto B52e425;
case 0x52e428:c.instructions+=3;goto B52e428;
case 0x52e429:c.instructions+=2;goto B52e429;
case 0x52e42a:c.instructions+=1;goto B52e42a;
case 0x52e42d:goto L52e42d;
case 0x52e42f:c.instructions+=1;goto B52e42f;
case 0x52e431:goto L52e431;
case 0x52e434:c.instructions+=6;goto B52e434;
case 0x52e438:c.instructions+=5;goto B52e438;
case 0x52e439:c.instructions+=4;goto B52e439;
case 0x52e43d:c.instructions+=3;goto B52e43d;
case 0x52e43e:c.instructions+=2;goto B52e43e;
case 0x52e43f:c.instructions+=1;goto B52e43f;
case 0x52e444:goto L52e444;
case 0x52e448:c.instructions+=5;goto B52e448;
case 0x52e44c:c.instructions+=4;goto B52e44c;
case 0x52e44d:c.instructions+=3;goto B52e44d;
case 0x52e44e:c.instructions+=2;goto B52e44e;
case 0x52e44f:c.instructions+=1;goto B52e44f;
case 0x52e454:goto L52e454;
case 0x52e457:goto L52e457;
case 0x52e45b:c.instructions+=5;goto B52e45b;
case 0x52e45c:c.instructions+=4;goto B52e45c;
case 0x52e45f:c.instructions+=3;goto B52e45f;
case 0x52e460:c.instructions+=2;goto B52e460;
case 0x52e461:c.instructions+=1;goto B52e461;
case 0x52e470:goto L52e470;
case 0x52e471:c.instructions+=4;goto B52e471;
case 0x52e473:c.instructions+=3;goto B52e473;
case 0x52e476:c.instructions+=2;goto B52e476;
case 0x52e477:c.instructions+=1;goto B52e477;
case 0x52e47c:goto L52e47c;
case 0x52e47f:c.instructions+=2;goto B52e47f;
case 0x52e481:c.instructions+=1;goto B52e481;
case 0x52e483:goto L52e483;
case 0x52e489:c.instructions+=4;goto B52e489;
case 0x52e48c:c.instructions+=3;goto B52e48c;
case 0x52e493:c.instructions+=2;goto B52e493;
case 0x52e49a:c.instructions+=1;goto B52e49a;
case 0x52e49c:goto L52e49c;
case 0x52e49f:c.instructions+=2;goto B52e49f;
case 0x52e4a0:c.instructions+=1;goto B52e4a0;
case 0x52e4a5:goto L52e4a5;
case 0x52e4a8:c.instructions+=2;goto B52e4a8;
case 0x52e4aa:c.instructions+=1;goto B52e4aa;
case 0x52e4ac:goto L52e4ac;
case 0x52e4b1:c.instructions+=3;goto B52e4b1;
case 0x52e4b4:c.instructions+=2;goto B52e4b4;
case 0x52e4bb:c.instructions+=1;goto B52e4bb;
case 0x52e4c2:goto L52e4c2;
case 0x52e4c5:c.instructions+=1;goto B52e4c5;
case 0x52e4c7:goto L52e4c7;
case 0x52e4cd:c.instructions+=2;goto B52e4cd;
case 0x52e4ce:c.instructions+=1;goto B52e4ce;
case 0x52e4d3:goto L52e4d3;
case 0x52e4d4:c.instructions+=1;goto B52e4d4;
case 0x52e4e0:goto L52e4e0;
case 0x52e4e3:c.instructions+=13;goto B52e4e3;
case 0x52e4e9:c.instructions+=12;goto B52e4e9;
case 0x52e4ea:c.instructions+=11;goto B52e4ea;
case 0x52e4ec:c.instructions+=10;goto B52e4ec;
case 0x52e4ee:c.instructions+=9;goto B52e4ee;
case 0x52e4f4:c.instructions+=8;goto B52e4f4;
case 0x52e4f6:c.instructions+=7;goto B52e4f6;
case 0x52e4f7:c.instructions+=6;goto B52e4f7;
case 0x52e4fb:c.instructions+=5;goto B52e4fb;
case 0x52e4ff:c.instructions+=4;goto B52e4ff;
case 0x52e505:c.instructions+=3;goto B52e505;
case 0x52e50b:c.instructions+=2;goto B52e50b;
case 0x52e50f:c.instructions+=1;goto B52e50f;
case 0x52e515:goto L52e515;
case 0x52e519:c.instructions+=8;goto B52e519;
case 0x52e51c:c.instructions+=7;goto B52e51c;
case 0x52e51f:c.instructions+=6;goto B52e51f;
case 0x52e520:c.instructions+=5;goto B52e520;
case 0x52e524:c.instructions+=4;goto B52e524;
case 0x52e525:c.instructions+=3;goto B52e525;
case 0x52e526:c.instructions+=2;goto B52e526;
case 0x52e52a:c.instructions+=1;goto B52e52a;
case 0x52e52f:goto L52e52f;
case 0x52e532:c.instructions+=10;goto B52e532;
case 0x52e535:c.instructions+=9;goto B52e535;
case 0x52e538:c.instructions+=8;goto B52e538;
case 0x52e53c:c.instructions+=7;goto B52e53c;
case 0x52e540:c.instructions+=6;goto B52e540;
case 0x52e543:c.instructions+=5;goto B52e543;
case 0x52e547:c.instructions+=4;goto B52e547;
case 0x52e549:c.instructions+=3;goto B52e549;
case 0x52e54b:c.instructions+=2;goto B52e54b;
case 0x52e54e:c.instructions+=1;goto B52e54e;
case 0x52e550:goto L52e550;
case 0x52e552:c.instructions+=1;goto B52e552;
case 0x52e556:goto L52e556;
case 0x52e55a:c.instructions+=4;goto B52e55a;
case 0x52e55c:c.instructions+=3;goto B52e55c;
case 0x52e55e:c.instructions+=2;goto B52e55e;
case 0x52e561:c.instructions+=1;goto B52e561;
case 0x52e563:goto L52e563;
case 0x52e567:c.instructions+=3;goto B52e567;
case 0x52e569:c.instructions+=2;goto B52e569;
case 0x52e56d:c.instructions+=1;goto B52e56d;
case 0x52e56f:goto L52e56f;
case 0x52e573:goto L52e573;
case 0x52e576:c.instructions+=6;goto B52e576;
case 0x52e57a:c.instructions+=5;goto B52e57a;
case 0x52e57b:c.instructions+=4;goto B52e57b;
case 0x52e57f:c.instructions+=3;goto B52e57f;
case 0x52e580:c.instructions+=2;goto B52e580;
case 0x52e581:c.instructions+=1;goto B52e581;
case 0x52e586:goto L52e586;
case 0x52e58a:c.instructions+=5;goto B52e58a;
case 0x52e58e:c.instructions+=4;goto B52e58e;
case 0x52e58f:c.instructions+=3;goto B52e58f;
case 0x52e590:c.instructions+=2;goto B52e590;
case 0x52e591:c.instructions+=1;goto B52e591;
case 0x52e596:goto L52e596;
case 0x52e59a:c.instructions+=3;goto B52e59a;
case 0x52e59d:c.instructions+=2;goto B52e59d;
case 0x52e5a0:c.instructions+=1;goto B52e5a0;
case 0x52e5a5:goto L52e5a5;
case 0x52e5a9:c.instructions+=8;goto B52e5a9;
case 0x52e5ac:c.instructions+=7;goto B52e5ac;
case 0x52e5af:c.instructions+=6;goto B52e5af;
case 0x52e5b3:c.instructions+=5;goto B52e5b3;
case 0x52e5b4:c.instructions+=4;goto B52e5b4;
case 0x52e5b5:c.instructions+=3;goto B52e5b5;
case 0x52e5b6:c.instructions+=2;goto B52e5b6;
case 0x52e5ba:c.instructions+=1;goto B52e5ba;
case 0x52e5bf:goto L52e5bf;
case 0x52e5c2:c.instructions+=10;goto B52e5c2;
case 0x52e5c5:c.instructions+=9;goto B52e5c5;
case 0x52e5c8:c.instructions+=8;goto B52e5c8;
case 0x52e5cc:c.instructions+=7;goto B52e5cc;
case 0x52e5d0:c.instructions+=6;goto B52e5d0;
case 0x52e5d3:c.instructions+=5;goto B52e5d3;
case 0x52e5d7:c.instructions+=4;goto B52e5d7;
case 0x52e5d9:c.instructions+=3;goto B52e5d9;
case 0x52e5db:c.instructions+=2;goto B52e5db;
case 0x52e5de:c.instructions+=1;goto B52e5de;
case 0x52e5e0:goto L52e5e0;
case 0x52e5e2:c.instructions+=1;goto B52e5e2;
case 0x52e5e6:goto L52e5e6;
case 0x52e5ea:c.instructions+=4;goto B52e5ea;
case 0x52e5ec:c.instructions+=3;goto B52e5ec;
case 0x52e5ee:c.instructions+=2;goto B52e5ee;
case 0x52e5f1:c.instructions+=1;goto B52e5f1;
case 0x52e5f3:goto L52e5f3;
case 0x52e5f7:c.instructions+=3;goto B52e5f7;
case 0x52e5f9:c.instructions+=2;goto B52e5f9;
case 0x52e5fd:c.instructions+=1;goto B52e5fd;
case 0x52e5ff:goto L52e5ff;
case 0x52e603:goto L52e603;
case 0x52e606:c.instructions+=6;goto B52e606;
case 0x52e60a:c.instructions+=5;goto B52e60a;
case 0x52e60b:c.instructions+=4;goto B52e60b;
case 0x52e60f:c.instructions+=3;goto B52e60f;
case 0x52e610:c.instructions+=2;goto B52e610;
case 0x52e611:c.instructions+=1;goto B52e611;
case 0x52e616:goto L52e616;
case 0x52e61a:c.instructions+=5;goto B52e61a;
case 0x52e61e:c.instructions+=4;goto B52e61e;
case 0x52e61f:c.instructions+=3;goto B52e61f;
case 0x52e620:c.instructions+=2;goto B52e620;
case 0x52e621:c.instructions+=1;goto B52e621;
case 0x52e626:goto L52e626;
case 0x52e62a:c.instructions+=2;goto B52e62a;
case 0x52e62d:c.instructions+=1;goto B52e62d;
case 0x52e630:goto L52e630;
case 0x52e633:c.instructions+=4;goto B52e633;
case 0x52e636:c.instructions+=3;goto B52e636;
case 0x52e638:c.instructions+=2;goto B52e638;
case 0x52e63b:c.instructions+=1;goto B52e63b;
case 0x52e63d:goto L52e63d;
case 0x52e63e:c.instructions+=5;goto B52e63e;
case 0x52e640:c.instructions+=4;goto B52e640;
case 0x52e647:c.instructions+=3;goto B52e647;
case 0x52e648:c.instructions+=2;goto B52e648;
case 0x52e64b:c.instructions+=1;goto B52e64b;
case 0x52e64c:goto L52e64c;
case 0x52e64f:c.instructions+=6;goto B52e64f;
case 0x52e651:c.instructions+=5;goto B52e651;
case 0x52e653:c.instructions+=4;goto B52e653;
case 0x52e655:c.instructions+=3;goto B52e655;
case 0x52e657:c.instructions+=2;goto B52e657;
case 0x52e65a:c.instructions+=1;goto B52e65a;
case 0x52e65c:goto L52e65c;
case 0x52e663:goto L52e663;
case 0x52e664:c.instructions+=3;goto B52e664;
case 0x52e665:c.instructions+=2;goto B52e665;
case 0x52e668:c.instructions+=1;goto B52e668;
case 0x52e670:goto L52e670;
case 0x52e673:c.instructions+=13;goto B52e673;
case 0x52e679:c.instructions+=12;goto B52e679;
case 0x52e67a:c.instructions+=11;goto B52e67a;
case 0x52e67c:c.instructions+=10;goto B52e67c;
case 0x52e67e:c.instructions+=9;goto B52e67e;
case 0x52e680:c.instructions+=8;goto B52e680;
case 0x52e686:c.instructions+=7;goto B52e686;
case 0x52e689:c.instructions+=6;goto B52e689;
case 0x52e68d:c.instructions+=5;goto B52e68d;
case 0x52e691:c.instructions+=4;goto B52e691;
case 0x52e697:c.instructions+=3;goto B52e697;
case 0x52e69d:c.instructions+=2;goto B52e69d;
case 0x52e6a1:c.instructions+=1;goto B52e6a1;
case 0x52e6a3:goto L52e6a3;
case 0x52e6a7:c.instructions+=4;goto B52e6a7;
case 0x52e6a8:c.instructions+=3;goto B52e6a8;
case 0x52e6a9:c.instructions+=2;goto B52e6a9;
case 0x52e6aa:c.instructions+=1;goto B52e6aa;
case 0x52e6af:goto L52e6af;
case 0x52e6b3:c.instructions+=5;goto B52e6b3;
case 0x52e6b7:c.instructions+=4;goto B52e6b7;
case 0x52e6ba:c.instructions+=3;goto B52e6ba;
case 0x52e6bc:c.instructions+=2;goto B52e6bc;
case 0x52e6bf:c.instructions+=1;goto B52e6bf;
case 0x52e6c1:goto L52e6c1;
case 0x52e6c8:c.instructions+=3;goto B52e6c8;
case 0x52e6c9:c.instructions+=2;goto B52e6c9;
case 0x52e6cc:c.instructions+=1;goto B52e6cc;
case 0x52e6cd:goto L52e6cd;
case 0x52e6d0:c.instructions+=6;goto B52e6d0;
case 0x52e6d4:c.instructions+=5;goto B52e6d4;
case 0x52e6d5:c.instructions+=4;goto B52e6d5;
case 0x52e6d9:c.instructions+=3;goto B52e6d9;
case 0x52e6da:c.instructions+=2;goto B52e6da;
case 0x52e6db:c.instructions+=1;goto B52e6db;
case 0x52e6e0:goto L52e6e0;
case 0x52e6e3:c.instructions+=6;goto B52e6e3;
case 0x52e6e7:c.instructions+=5;goto B52e6e7;
case 0x52e6e8:c.instructions+=4;goto B52e6e8;
case 0x52e6ec:c.instructions+=3;goto B52e6ec;
case 0x52e6ed:c.instructions+=2;goto B52e6ed;
case 0x52e6ee:c.instructions+=1;goto B52e6ee;
case 0x52e6f3:goto L52e6f3;
case 0x52e6f7:c.instructions+=3;goto B52e6f7;
case 0x52e6fb:c.instructions+=2;goto B52e6fb;
case 0x52e6ff:c.instructions+=1;goto B52e6ff;
case 0x52e701:goto L52e701;
case 0x52e705:c.instructions+=4;goto B52e705;
case 0x52e706:c.instructions+=3;goto B52e706;
case 0x52e707:c.instructions+=2;goto B52e707;
case 0x52e708:c.instructions+=1;goto B52e708;
case 0x52e70d:goto L52e70d;
case 0x52e711:c.instructions+=5;goto B52e711;
case 0x52e715:c.instructions+=4;goto B52e715;
case 0x52e718:c.instructions+=3;goto B52e718;
case 0x52e71a:c.instructions+=2;goto B52e71a;
case 0x52e71d:c.instructions+=1;goto B52e71d;
case 0x52e71f:goto L52e71f;
case 0x52e722:c.instructions+=6;goto B52e722;
case 0x52e726:c.instructions+=5;goto B52e726;
case 0x52e727:c.instructions+=4;goto B52e727;
case 0x52e72b:c.instructions+=3;goto B52e72b;
case 0x52e72c:c.instructions+=2;goto B52e72c;
case 0x52e72d:c.instructions+=1;goto B52e72d;
case 0x52e732:goto L52e732;
case 0x52e735:c.instructions+=6;goto B52e735;
case 0x52e739:c.instructions+=5;goto B52e739;
case 0x52e73a:c.instructions+=4;goto B52e73a;
case 0x52e73e:c.instructions+=3;goto B52e73e;
case 0x52e73f:c.instructions+=2;goto B52e73f;
case 0x52e740:c.instructions+=1;goto B52e740;
case 0x52e745:goto L52e745;
case 0x52e749:c.instructions+=2;goto B52e749;
case 0x52e74d:c.instructions+=1;goto B52e74d;
case 0x52e751:goto L52e751;
case 0x52e753:c.instructions+=3;goto B52e753;
case 0x52e756:c.instructions+=2;goto B52e756;
case 0x52e759:c.instructions+=1;goto B52e759;
case 0x52e75b:goto L52e75b;
case 0x52e762:goto L52e762;
case 0x52e763:c.instructions+=2;goto B52e763;
case 0x52e766:c.instructions+=1;goto B52e766;
case 0x52e770:goto L52e770;
case 0x52e771:c.instructions+=5;goto B52e771;
case 0x52e773:c.instructions+=4;goto B52e773;
case 0x52e777:c.instructions+=3;goto B52e777;
case 0x52e779:c.instructions+=2;goto B52e779;
case 0x52e77a:c.instructions+=1;goto B52e77a;
case 0x52e77c:goto L52e77c;
case 0x52e77f:c.instructions+=1;goto B52e77f;
case 0x52e781:goto L52e781;
case 0x52e783:goto L52e783;
case 0x52e786:c.instructions+=7;goto B52e786;
case 0x52e789:c.instructions+=6;goto B52e789;
case 0x52e78b:c.instructions+=5;goto B52e78b;
case 0x52e78e:c.instructions+=4;goto B52e78e;
case 0x52e791:c.instructions+=3;goto B52e791;
case 0x52e793:c.instructions+=2;goto B52e793;
case 0x52e796:c.instructions+=1;goto B52e796;
case 0x52e79b:goto L52e79b;
case 0x52e79d:c.instructions+=1;goto B52e79d;
case 0x52e7a2:goto L52e7a2;
case 0x52e7a5:c.instructions+=2;goto B52e7a5;
case 0x52e7a7:c.instructions+=1;goto B52e7a7;
case 0x52e7a9:goto L52e7a9;
case 0x52e7ab:c.instructions+=2;goto B52e7ab;
case 0x52e7ad:c.instructions+=1;goto B52e7ad;
case 0x52e7af:goto L52e7af;
case 0x52e7b2:c.instructions+=4;goto B52e7b2;
case 0x52e7b3:c.instructions+=3;goto B52e7b3;
case 0x52e7b6:c.instructions+=2;goto B52e7b6;
case 0x52e7b7:c.instructions+=1;goto B52e7b7;
case 0x52e7ba:goto L52e7ba;
case 0x52e7bc:c.instructions+=1;goto B52e7bc;
case 0x52e7bf:goto L52e7bf;
case 0x52e7c0:c.instructions+=2;goto B52e7c0;
case 0x52e7c1:c.instructions+=1;goto B52e7c1;
case 0x52e7d0:goto L52e7d0;
case 0x52e7d3:c.instructions+=4;goto B52e7d3;
case 0x52e7d4:c.instructions+=3;goto B52e7d4;
case 0x52e7d7:c.instructions+=2;goto B52e7d7;
case 0x52e7d9:c.instructions+=1;goto B52e7d9;
case 0x52e7db:goto L52e7db;
case 0x52e7dd:c.instructions+=2;goto B52e7dd;
case 0x52e7de:c.instructions+=1;goto B52e7de;
case 0x52e7e1:goto L52e7e1;
case 0x52e7e4:c.instructions+=5;goto B52e7e4;
case 0x52e7e5:c.instructions+=4;goto B52e7e5;
case 0x52e7e6:c.instructions+=3;goto B52e7e6;
case 0x52e7e9:c.instructions+=2;goto B52e7e9;
case 0x52e7eb:c.instructions+=1;goto B52e7eb;
case 0x52e7ed:goto L52e7ed;
case 0x52e7f1:c.instructions+=2;goto B52e7f1;
case 0x52e7f3:c.instructions+=1;goto B52e7f3;
case 0x52e7f5:goto L52e7f5;
case 0x52e7f8:c.instructions+=1;goto B52e7f8;
case 0x52e7fa:goto L52e7fa;
case 0x52e7fc:c.instructions+=1;goto B52e7fc;
case 0x52e7fe:goto L52e7fe;
case 0x52e801:c.instructions+=1;goto B52e801;
case 0x52e803:goto L52e803;
case 0x52e805:goto L52e805;
case 0x52e807:c.instructions+=1;goto B52e807;
case 0x52e809:goto L52e809;
case 0x52e80c:c.instructions+=1;goto B52e80c;
case 0x52e80e:goto L52e80e;
case 0x52e810:goto L52e810;
case 0x52e812:c.instructions+=1;goto B52e812;
case 0x52e814:goto L52e814;
case 0x52e816:c.instructions+=1;goto B52e816;
case 0x52e818:goto L52e818;
case 0x52e81a:c.instructions+=1;goto B52e81a;
case 0x52e81c:goto L52e81c;
case 0x52e81f:c.instructions+=1;goto B52e81f;
case 0x52e821:goto L52e821;
case 0x52e823:goto L52e823;
case 0x52e825:c.instructions+=1;goto B52e825;
case 0x52e827:goto L52e827;
case 0x52e82a:c.instructions+=2;goto B52e82a;
case 0x52e82c:c.instructions+=1;goto B52e82c;
case 0x52e82e:goto L52e82e;
case 0x52e831:c.instructions+=2;goto B52e831;
case 0x52e834:c.instructions+=1;goto B52e834;
case 0x52e836:goto L52e836;
case 0x52e839:c.instructions+=2;goto B52e839;
case 0x52e83b:c.instructions+=1;goto B52e83b;
case 0x52e83d:goto L52e83d;
case 0x52e83f:goto L52e83f;
case 0x52e840:c.instructions+=3;goto B52e840;
case 0x52e841:c.instructions+=2;goto B52e841;
case 0x52e842:c.instructions+=1;goto B52e842;
case 0x52e850:goto L52e850;
case 0x52e853:c.instructions+=6;goto B52e853;
case 0x52e854:c.instructions+=5;goto B52e854;
case 0x52e855:c.instructions+=4;goto B52e855;
case 0x52e858:c.instructions+=3;goto B52e858;
case 0x52e85a:c.instructions+=2;goto B52e85a;
case 0x52e85b:c.instructions+=1;goto B52e85b;
case 0x52e85d:goto L52e85d;
case 0x52e860:c.instructions+=3;goto B52e860;
case 0x52e863:c.instructions+=2;goto B52e863;
case 0x52e865:c.instructions+=1;goto B52e865;
case 0x52e867:goto L52e867;
case 0x52e86b:c.instructions+=2;goto B52e86b;
case 0x52e86d:c.instructions+=1;goto B52e86d;
case 0x52e86f:goto L52e86f;
case 0x52e872:c.instructions+=1;goto B52e872;
case 0x52e874:goto L52e874;
case 0x52e876:c.instructions+=1;goto B52e876;
case 0x52e878:goto L52e878;
case 0x52e87b:c.instructions+=1;goto B52e87b;
case 0x52e87d:goto L52e87d;
case 0x52e87f:c.instructions+=1;goto B52e87f;
case 0x52e880:goto L52e880;
case 0x52e882:c.instructions+=1;goto B52e882;
case 0x52e884:goto L52e884;
case 0x52e887:c.instructions+=1;goto B52e887;
case 0x52e889:goto L52e889;
case 0x52e88b:goto L52e88b;
case 0x52e88d:c.instructions+=1;goto B52e88d;
case 0x52e88f:goto L52e88f;
case 0x52e891:c.instructions+=1;goto B52e891;
case 0x52e893:goto L52e893;
case 0x52e895:c.instructions+=1;goto B52e895;
case 0x52e897:goto L52e897;
case 0x52e89a:c.instructions+=1;goto B52e89a;
case 0x52e89c:goto L52e89c;
case 0x52e89e:goto L52e89e;
case 0x52e8a0:c.instructions+=1;goto B52e8a0;
case 0x52e8a2:goto L52e8a2;
case 0x52e8a5:c.instructions+=2;goto B52e8a5;
case 0x52e8a7:c.instructions+=1;goto B52e8a7;
case 0x52e8a9:goto L52e8a9;
case 0x52e8ac:c.instructions+=2;goto B52e8ac;
case 0x52e8af:c.instructions+=1;goto B52e8af;
case 0x52e8b1:goto L52e8b1;
case 0x52e8b4:c.instructions+=2;goto B52e8b4;
case 0x52e8b6:c.instructions+=1;goto B52e8b6;
case 0x52e8b8:goto L52e8b8;
case 0x52e8ba:goto L52e8ba;
case 0x52e8bb:c.instructions+=3;goto B52e8bb;
case 0x52e8bc:c.instructions+=2;goto B52e8bc;
case 0x52e8bd:c.instructions+=1;goto B52e8bd;
case 0x52e8c0:goto L52e8c0;
case 0x52e8c4:c.instructions+=9;goto B52e8c4;
case 0x52e8c5:c.instructions+=8;goto B52e8c5;
case 0x52e8c6:c.instructions+=7;goto B52e8c6;
case 0x52e8c7:c.instructions+=6;goto B52e8c7;
case 0x52e8c9:c.instructions+=5;goto B52e8c9;
case 0x52e8cc:c.instructions+=4;goto B52e8cc;
case 0x52e8ce:c.instructions+=3;goto B52e8ce;
case 0x52e8d1:c.instructions+=2;goto B52e8d1;
case 0x52e8d2:c.instructions+=1;goto B52e8d2;
case 0x52e8d4:goto L52e8d4;
case 0x52e8d7:c.instructions+=2;goto B52e8d7;
case 0x52e8d9:c.instructions+=1;goto B52e8d9;
case 0x52e8db:goto L52e8db;
case 0x52e8de:c.instructions+=1;goto B52e8de;
case 0x52e8e0:goto L52e8e0;
case 0x52e8e2:goto L52e8e2;
case 0x52e8e4:c.instructions+=1;goto B52e8e4;
case 0x52e8e6:goto L52e8e6;
case 0x52e8e7:c.instructions+=2;goto B52e8e7;
case 0x52e8e9:c.instructions+=1;goto B52e8e9;
case 0x52e8ee:goto L52e8ee;
case 0x52e8f0:goto L52e8f0;
case 0x52e8f3:c.instructions+=2;goto B52e8f3;
case 0x52e8f5:c.instructions+=1;goto B52e8f5;
case 0x52e8f7:goto L52e8f7;
case 0x52e8fa:c.instructions+=1;goto B52e8fa;
case 0x52e8fc:goto L52e8fc;
case 0x52e8fe:goto L52e8fe;
case 0x52e901:c.instructions+=2;goto B52e901;
case 0x52e903:c.instructions+=1;goto B52e903;
case 0x52e905:goto L52e905;
case 0x52e908:c.instructions+=1;goto B52e908;
case 0x52e90a:goto L52e90a;
case 0x52e90c:goto L52e90c;
case 0x52e90e:c.instructions+=1;goto B52e90e;
case 0x52e910:goto L52e910;
case 0x52e912:c.instructions+=1;goto B52e912;
case 0x52e914:goto L52e914;
case 0x52e917:c.instructions+=1;goto B52e917;
case 0x52e919:goto L52e919;
case 0x52e91b:goto L52e91b;
case 0x52e91d:c.instructions+=1;goto B52e91d;
case 0x52e91f:goto L52e91f;
case 0x52e922:c.instructions+=2;goto B52e922;
case 0x52e924:c.instructions+=1;goto B52e924;
case 0x52e926:goto L52e926;
case 0x52e928:goto L52e928;
case 0x52e92b:c.instructions+=1;goto B52e92b;
case 0x52e92d:goto L52e92d;
case 0x52e930:c.instructions+=2;goto B52e930;
case 0x52e932:c.instructions+=1;goto B52e932;
case 0x52e934:goto L52e934;
case 0x52e937:c.instructions+=1;goto B52e937;
case 0x52e939:goto L52e939;
case 0x52e93b:goto L52e93b;
case 0x52e93d:c.instructions+=1;goto B52e93d;
case 0x52e93f:goto L52e93f;
case 0x52e940:c.instructions+=5;goto B52e940;
case 0x52e941:c.instructions+=4;goto B52e941;
case 0x52e942:c.instructions+=3;goto B52e942;
case 0x52e944:c.instructions+=2;goto B52e944;
case 0x52e945:c.instructions+=1;goto B52e945;
case 0x52e948:goto L52e948;
case 0x52e949:c.instructions+=2;goto B52e949;
case 0x52e94b:c.instructions+=1;goto B52e94b;
case 0x52e950:goto L52e950;
case 0x52e953:c.instructions+=2;goto B52e953;
case 0x52e955:c.instructions+=1;goto B52e955;
case 0x52e957:goto L52e957;
case 0x52e95a:c.instructions+=1;goto B52e95a;
case 0x52e95c:goto L52e95c;
case 0x52e95e:goto L52e95e;
case 0x52e961:c.instructions+=2;goto B52e961;
case 0x52e963:c.instructions+=1;goto B52e963;
case 0x52e965:goto L52e965;
case 0x52e968:c.instructions+=1;goto B52e968;
case 0x52e96a:goto L52e96a;
case 0x52e96c:goto L52e96c;
case 0x52e96e:c.instructions+=1;goto B52e96e;
case 0x52e970:goto L52e970;
case 0x52e972:c.instructions+=1;goto B52e972;
case 0x52e974:goto L52e974;
case 0x52e977:c.instructions+=1;goto B52e977;
case 0x52e979:goto L52e979;
case 0x52e97b:goto L52e97b;
case 0x52e97d:c.instructions+=1;goto B52e97d;
case 0x52e97f:goto L52e97f;
case 0x52e982:c.instructions+=2;goto B52e982;
case 0x52e984:c.instructions+=1;goto B52e984;
case 0x52e986:goto L52e986;
case 0x52e989:c.instructions+=2;goto B52e989;
case 0x52e98b:c.instructions+=1;goto B52e98b;
case 0x52e98d:goto L52e98d;
case 0x52e990:c.instructions+=3;goto B52e990;
case 0x52e995:c.instructions+=2;goto B52e995;
case 0x52e996:c.instructions+=1;goto B52e996;
case 0x52e99b:goto L52e99b;
case 0x52e99e:c.instructions+=5;goto B52e99e;
case 0x52e9a1:c.instructions+=4;goto B52e9a1;
case 0x52e9a6:c.instructions+=3;goto B52e9a6;
case 0x52e9a7:c.instructions+=2;goto B52e9a7;
case 0x52e9a9:c.instructions+=1;goto B52e9a9;
case 0x52e9ae:goto L52e9ae;
case 0x52e9b0:goto L52e9b0;
case 0x52e9b1:c.instructions+=5;goto B52e9b1;
case 0x52e9b2:c.instructions+=4;goto B52e9b2;
case 0x52e9b3:c.instructions+=3;goto B52e9b3;
case 0x52e9b5:c.instructions+=2;goto B52e9b5;
case 0x52e9b6:c.instructions+=1;goto B52e9b6;
case 0x52e9c0:goto L52e9c0;
case 0x52e9c1:c.instructions+=6;goto B52e9c1;
case 0x52e9c2:c.instructions+=5;goto B52e9c2;
case 0x52e9c4:c.instructions+=4;goto B52e9c4;
case 0x52e9c7:c.instructions+=3;goto B52e9c7;
case 0x52e9c9:c.instructions+=2;goto B52e9c9;
case 0x52e9ca:c.instructions+=1;goto B52e9ca;
case 0x52e9cc:goto L52e9cc;
case 0x52e9cf:c.instructions+=1;goto B52e9cf;
case 0x52e9d1:goto L52e9d1;
case 0x52e9d3:goto L52e9d3;
case 0x52e9d4:c.instructions+=2;goto B52e9d4;
case 0x52e9d6:c.instructions+=1;goto B52e9d6;
case 0x52e9db:goto L52e9db;
case 0x52e9dd:goto L52e9dd;
case 0x52e9df:c.instructions+=1;goto B52e9df;
case 0x52e9e1:goto L52e9e1;
case 0x52e9e4:c.instructions+=1;goto B52e9e4;
case 0x52e9e6:goto L52e9e6;
case 0x52e9e8:goto L52e9e8;
case 0x52e9eb:c.instructions+=2;goto B52e9eb;
case 0x52e9ed:c.instructions+=1;goto B52e9ed;
case 0x52e9ef:goto L52e9ef;
case 0x52e9f2:c.instructions+=1;goto B52e9f2;
case 0x52e9f4:goto L52e9f4;
case 0x52e9f6:goto L52e9f6;
case 0x52e9f8:c.instructions+=1;goto B52e9f8;
case 0x52e9fa:goto L52e9fa;
case 0x52e9fd:c.instructions+=2;goto B52e9fd;
case 0x52e9ff:c.instructions+=1;goto B52e9ff;
case 0x52ea01:goto L52ea01;
case 0x52ea04:c.instructions+=1;goto B52ea04;
case 0x52ea06:goto L52ea06;
case 0x52ea08:c.instructions+=3;goto B52ea08;
case 0x52ea0d:c.instructions+=2;goto B52ea0d;
case 0x52ea0f:c.instructions+=1;goto B52ea0f;
case 0x52ea14:goto L52ea14;
case 0x52ea18:c.instructions+=1;goto B52ea18;
case 0x52ea1a:goto L52ea1a;
case 0x52ea1c:c.instructions+=3;goto B52ea1c;
case 0x52ea21:c.instructions+=2;goto B52ea21;
case 0x52ea23:c.instructions+=1;goto B52ea23;
case 0x52ea28:goto L52ea28;
case 0x52ea2c:goto L52ea2c;
case 0x52ea2f:c.instructions+=2;goto B52ea2f;
case 0x52ea31:c.instructions+=1;goto B52ea31;
case 0x52ea33:goto L52ea33;
case 0x52ea36:c.instructions+=2;goto B52ea36;
case 0x52ea39:c.instructions+=1;goto B52ea39;
case 0x52ea3b:goto L52ea3b;
case 0x52ea3e:c.instructions+=2;goto B52ea3e;
case 0x52ea40:c.instructions+=1;goto B52ea40;
case 0x52ea42:goto L52ea42;
case 0x52ea43:c.instructions+=3;goto B52ea43;
case 0x52ea44:c.instructions+=2;goto B52ea44;
case 0x52ea45:c.instructions+=1;goto B52ea45;
case 0x52ea50:goto L52ea50;
case 0x52ea54:c.instructions+=4;goto B52ea54;
case 0x52ea56:c.instructions+=3;goto B52ea56;
case 0x52ea57:c.instructions+=2;goto B52ea57;
case 0x52ea59:c.instructions+=1;goto B52ea59;
case 0x52ea5b:goto L52ea5b;
case 0x52ea5e:c.instructions+=3;goto B52ea5e;
case 0x52ea61:c.instructions+=2;goto B52ea61;
case 0x52ea63:c.instructions+=1;goto B52ea63;
case 0x52ea65:goto L52ea65;
case 0x52ea68:c.instructions+=3;goto B52ea68;
case 0x52ea6b:c.instructions+=2;goto B52ea6b;
case 0x52ea6d:c.instructions+=1;goto B52ea6d;
case 0x52ea6f:goto L52ea6f;
case 0x52ea70:c.instructions+=3;goto B52ea70;
case 0x52ea72:c.instructions+=2;goto B52ea72;
case 0x52ea76:c.instructions+=1;goto B52ea76;
case 0x52ea7b:goto L52ea7b;
case 0x52ea7d:c.instructions+=1;goto B52ea7d;
case 0x52ea7f:goto L52ea7f;
case 0x52ea82:c.instructions+=1;goto B52ea82;
case 0x52ea84:goto L52ea84;
case 0x52ea86:c.instructions+=1;goto B52ea86;
case 0x52ea8b:goto L52ea8b;
case 0x52ea8c:c.instructions+=1;goto B52ea8c;
case 0x52ea90:goto L52ea90;
case 0x52ea92:c.instructions+=16;goto B52ea92;
case 0x52ea97:c.instructions+=15;goto B52ea97;
case 0x52ea9d:c.instructions+=14;goto B52ea9d;
case 0x52ea9e:c.instructions+=13;goto B52ea9e;
case 0x52eaa5:c.instructions+=12;goto B52eaa5;
case 0x52eaa6:c.instructions+=11;goto B52eaa6;
case 0x52eaa7:c.instructions+=10;goto B52eaa7;
case 0x52eaa9:c.instructions+=9;goto B52eaa9;
case 0x52eaaa:c.instructions+=8;goto B52eaaa;
case 0x52eaae:c.instructions+=7;goto B52eaae;
case 0x52eab4:c.instructions+=6;goto B52eab4;
case 0x52eab7:c.instructions+=5;goto B52eab7;
case 0x52eaba:c.instructions+=4;goto B52eaba;
case 0x52eabd:c.instructions+=3;goto B52eabd;
case 0x52eabf:c.instructions+=2;goto B52eabf;
case 0x52eac7:c.instructions+=1;goto B52eac7;
case 0x52eac9:goto L52eac9;
case 0x52eacc:c.instructions+=3;goto B52eacc;
case 0x52eacd:c.instructions+=2;goto B52eacd;
case 0x52ead0:c.instructions+=1;goto B52ead0;
case 0x52ead2:goto L52ead2;
case 0x52ead5:c.instructions+=1;goto B52ead5;
case 0x52ead7:goto L52ead7;
case 0x52eada:c.instructions+=1;goto B52eada;
case 0x52eadc:goto L52eadc;
case 0x52eadf:c.instructions+=2;goto B52eadf;
case 0x52eae1:c.instructions+=1;goto B52eae1;
case 0x52eae4:goto L52eae4;
case 0x52eae7:c.instructions+=5;goto B52eae7;
case 0x52eaea:c.instructions+=4;goto B52eaea;
case 0x52eaed:c.instructions+=3;goto B52eaed;
case 0x52eaf3:c.instructions+=2;goto B52eaf3;
case 0x52eaf6:c.instructions+=1;goto B52eaf6;
case 0x52eaf8:goto L52eaf8;
case 0x52eafa:c.instructions+=1;goto B52eafa;
case 0x52eafc:goto L52eafc;
case 0x52eaff:c.instructions+=3;goto B52eaff;
case 0x52eb02:c.instructions+=2;goto B52eb02;
case 0x52eb04:c.instructions+=1;goto B52eb04;
case 0x52eb06:goto L52eb06;
case 0x52eb07:goto L52eb07;
case 0x52eb09:c.instructions+=10;goto B52eb09;
case 0x52eb0b:c.instructions+=9;goto B52eb0b;
case 0x52eb0e:c.instructions+=8;goto B52eb0e;
case 0x52eb10:c.instructions+=7;goto B52eb10;
case 0x52eb13:c.instructions+=6;goto B52eb13;
case 0x52eb16:c.instructions+=5;goto B52eb16;
case 0x52eb19:c.instructions+=4;goto B52eb19;
case 0x52eb1c:c.instructions+=3;goto B52eb1c;
case 0x52eb1f:c.instructions+=2;goto B52eb1f;
case 0x52eb21:c.instructions+=1;goto B52eb21;
case 0x52eb23:goto L52eb23;
case 0x52eb26:c.instructions+=3;goto B52eb26;
case 0x52eb27:c.instructions+=2;goto B52eb27;
case 0x52eb2a:c.instructions+=1;goto B52eb2a;
case 0x52eb2c:goto L52eb2c;
case 0x52eb2f:c.instructions+=1;goto B52eb2f;
case 0x52eb31:goto L52eb31;
case 0x52eb34:c.instructions+=1;goto B52eb34;
case 0x52eb36:goto L52eb36;
case 0x52eb39:c.instructions+=2;goto B52eb39;
case 0x52eb3b:c.instructions+=1;goto B52eb3b;
case 0x52eb3e:goto L52eb3e;
case 0x52eb41:c.instructions+=5;goto B52eb41;
case 0x52eb44:c.instructions+=4;goto B52eb44;
case 0x52eb47:c.instructions+=3;goto B52eb47;
case 0x52eb4d:c.instructions+=2;goto B52eb4d;
case 0x52eb50:c.instructions+=1;goto B52eb50;
case 0x52eb52:goto L52eb52;
case 0x52eb54:c.instructions+=1;goto B52eb54;
case 0x52eb56:goto L52eb56;
case 0x52eb58:c.instructions+=2;goto B52eb58;
case 0x52eb5a:c.instructions+=1;goto B52eb5a;
case 0x52eb5c:goto L52eb5c;
case 0x52eb5e:c.instructions+=1;goto B52eb5e;
case 0x52eb60:goto L52eb60;
case 0x52eb61:goto L52eb61;
case 0x52eb64:c.instructions+=2;goto B52eb64;
case 0x52eb65:c.instructions+=1;goto B52eb65;
case 0x52eb6a:goto L52eb6a;
case 0x52eb6d:c.instructions+=3;goto B52eb6d;
case 0x52eb6f:c.instructions+=2;goto B52eb6f;
case 0x52eb77:c.instructions+=1;goto B52eb77;
case 0x52eb7c:goto L52eb7c;
case 0x52eb80:c.instructions+=5;goto B52eb80;
case 0x52eb81:c.instructions+=4;goto B52eb81;
case 0x52eb82:c.instructions+=3;goto B52eb82;
case 0x52eb89:c.instructions+=2;goto B52eb89;
case 0x52eb8c:c.instructions+=1;goto B52eb8c;
case 0x52eb90:goto L52eb90;
case 0x52eb91:c.instructions+=9;goto B52eb91;
case 0x52eb95:c.instructions+=8;goto B52eb95;
case 0x52eb96:c.instructions+=7;goto B52eb96;
case 0x52eb97:c.instructions+=6;goto B52eb97;
case 0x52eb98:c.instructions+=5;goto B52eb98;
case 0x52eb9a:c.instructions+=4;goto B52eb9a;
case 0x52eb9d:c.instructions+=3;goto B52eb9d;
case 0x52eb9e:c.instructions+=2;goto B52eb9e;
case 0x52eba1:c.instructions+=1;goto B52eba1;
case 0x52eba6:goto L52eba6;
case 0x52eba9:c.instructions+=4;goto B52eba9;
case 0x52ebac:c.instructions+=3;goto B52ebac;
case 0x52ebaf:c.instructions+=2;goto B52ebaf;
case 0x52ebb0:c.instructions+=1;goto B52ebb0;
case 0x52ebb5:goto L52ebb5;
case 0x52ebb8:c.instructions+=2;goto B52ebb8;
case 0x52ebbc:c.instructions+=1;goto B52ebbc;
case 0x52ebc0:goto L52ebc0;
case 0x52ebc4:c.instructions+=2;goto B52ebc4;
case 0x52ebc7:c.instructions+=1;goto B52ebc7;
case 0x52ebc9:goto L52ebc9;
case 0x52ebcb:c.instructions+=1;goto B52ebcb;
case 0x52ebcd:goto L52ebcd;
case 0x52ebce:c.instructions+=1;goto B52ebce;
case 0x52ebd3:goto L52ebd3;
case 0x52ebd6:c.instructions+=1;goto B52ebd6;
case 0x52ebd8:goto L52ebd8;
case 0x52ebdd:c.instructions+=2;goto B52ebdd;
case 0x52ebdf:c.instructions+=1;goto B52ebdf;
case 0x52ebe1:goto L52ebe1;
case 0x52ebe5:c.instructions+=1;goto B52ebe5;
case 0x52ebe7:goto L52ebe7;
case 0x52ebee:goto L52ebee;
case 0x52ebf2:c.instructions+=1;goto B52ebf2;
case 0x52ebf4:goto L52ebf4;
case 0x52ebf7:c.instructions+=3;goto B52ebf7;
case 0x52ebf9:c.instructions+=2;goto B52ebf9;
case 0x52ebfc:c.instructions+=1;goto B52ebfc;
case 0x52ebfe:goto L52ebfe;
case 0x52ec00:goto L52ec00;
case 0x52ec01:c.instructions+=1;goto B52ec01;
case 0x52ec06:goto L52ec06;
case 0x52ec09:c.instructions+=3;goto B52ec09;
case 0x52ec0c:c.instructions+=2;goto B52ec0c;
case 0x52ec0d:c.instructions+=1;goto B52ec0d;
case 0x52ec0f:goto L52ec0f;
case 0x52ec11:c.instructions+=1;goto B52ec11;
case 0x52ec13:goto L52ec13;
case 0x52ec16:c.instructions+=1;goto B52ec16;
case 0x52ec18:goto L52ec18;
case 0x52ec19:c.instructions+=4;goto B52ec19;
case 0x52ec1a:c.instructions+=3;goto B52ec1a;
case 0x52ec1b:c.instructions+=2;goto B52ec1b;
case 0x52ec1c:c.instructions+=1;goto B52ec1c;
case 0x52ec20:goto L52ec20;
case 0x52ec21:c.instructions+=6;goto B52ec21;
case 0x52ec22:c.instructions+=5;goto B52ec22;
case 0x52ec24:c.instructions+=4;goto B52ec24;
case 0x52ec27:c.instructions+=3;goto B52ec27;
case 0x52ec28:c.instructions+=2;goto B52ec28;
case 0x52ec29:c.instructions+=1;goto B52ec29;
case 0x52ec2e:goto L52ec2e;
case 0x52ec32:c.instructions+=4;goto B52ec32;
case 0x52ec35:c.instructions+=3;goto B52ec35;
case 0x52ec38:c.instructions+=2;goto B52ec38;
case 0x52ec3a:c.instructions+=1;goto B52ec3a;
case 0x52ec3c:goto L52ec3c;
case 0x52ec3f:c.instructions+=1;goto B52ec3f;
case 0x52ec41:goto L52ec41;
case 0x52ec44:goto L52ec44;
case 0x52ec47:goto L52ec47;
case 0x52ec49:c.instructions+=3;goto B52ec49;
case 0x52ec4c:c.instructions+=2;goto B52ec4c;
case 0x52ec4e:c.instructions+=1;goto B52ec4e;
case 0x52ec50:goto L52ec50;
case 0x52ec52:c.instructions+=2;goto B52ec52;
case 0x52ec54:c.instructions+=1;goto B52ec54;
case 0x52ec56:goto L52ec56;
case 0x52ec59:c.instructions+=2;goto B52ec59;
case 0x52ec5c:c.instructions+=1;goto B52ec5c;
case 0x52ec5e:goto L52ec5e;
case 0x52ec61:c.instructions+=1;goto B52ec61;
case 0x52ec63:goto L52ec63;
case 0x52ec66:goto L52ec66;
case 0x52ec69:c.instructions+=5;goto B52ec69;
case 0x52ec6b:c.instructions+=4;goto B52ec6b;
case 0x52ec6e:c.instructions+=3;goto B52ec6e;
case 0x52ec6f:c.instructions+=2;goto B52ec6f;
case 0x52ec71:c.instructions+=1;goto B52ec71;
case 0x52ec73:goto L52ec73;
case 0x52ec76:c.instructions+=1;goto B52ec76;
case 0x52ec78:goto L52ec78;
case 0x52ec7a:c.instructions+=1;goto B52ec7a;
case 0x52ec7c:goto L52ec7c;
case 0x52ec7f:c.instructions+=1;goto B52ec7f;
case 0x52ec81:goto L52ec81;
case 0x52ec83:goto L52ec83;
case 0x52ec84:c.instructions+=3;goto B52ec84;
case 0x52ec85:c.instructions+=2;goto B52ec85;
case 0x52ec86:c.instructions+=1;goto B52ec86;
case 0x52ec90:goto L52ec90;
case 0x52ec91:c.instructions+=6;goto B52ec91;
case 0x52ec93:c.instructions+=5;goto B52ec93;
case 0x52ec96:c.instructions+=4;goto B52ec96;
case 0x52ec97:c.instructions+=3;goto B52ec97;
case 0x52ec99:c.instructions+=2;goto B52ec99;
case 0x52ec9b:c.instructions+=1;goto B52ec9b;
case 0x52ec9d:goto L52ec9d;
case 0x52ec9e:c.instructions+=3;goto B52ec9e;
case 0x52eca0:c.instructions+=2;goto B52eca0;
case 0x52eca1:c.instructions+=1;goto B52eca1;
case 0x52eca4:goto L52eca4;
case 0x52eca6:c.instructions+=1;goto B52eca6;
case 0x52ecab:goto L52ecab;
case 0x52ecae:c.instructions+=2;goto B52ecae;
case 0x52ecb0:c.instructions+=1;goto B52ecb0;
case 0x52ecb2:goto L52ecb2;
case 0x52ecb5:c.instructions+=11;goto B52ecb5;
case 0x52ecb9:c.instructions+=10;goto B52ecb9;
case 0x52ecbc:c.instructions+=9;goto B52ecbc;
case 0x52ecbf:c.instructions+=8;goto B52ecbf;
case 0x52ecc5:c.instructions+=7;goto B52ecc5;
case 0x52ecc8:c.instructions+=6;goto B52ecc8;
case 0x52eccb:c.instructions+=5;goto B52eccb;
case 0x52eccf:c.instructions+=4;goto B52eccf;
case 0x52ecd3:c.instructions+=3;goto B52ecd3;
case 0x52ecd7:c.instructions+=2;goto B52ecd7;
case 0x52ecdb:c.instructions+=1;goto B52ecdb;
case 0x52ecdd:goto L52ecdd;
case 0x52ece1:c.instructions+=4;goto B52ece1;
case 0x52ece4:c.instructions+=3;goto B52ece4;
case 0x52ece7:c.instructions+=2;goto B52ece7;
case 0x52ece9:c.instructions+=1;goto B52ece9;
case 0x52eceb:goto L52eceb;
case 0x52ecee:c.instructions+=2;goto B52ecee;
case 0x52ecf1:c.instructions+=1;goto B52ecf1;
case 0x52ecf3:goto L52ecf3;
case 0x52ecf6:c.instructions+=1;goto B52ecf6;
case 0x52ecf9:goto L52ecf9;
case 0x52ecfd:c.instructions+=2;goto B52ecfd;
case 0x52ecff:c.instructions+=1;goto B52ecff;
case 0x52ed01:goto L52ed01;
case 0x52ed05:c.instructions+=1;goto B52ed05;
case 0x52ed07:goto L52ed07;
case 0x52ed0a:c.instructions+=2;goto B52ed0a;
case 0x52ed0b:c.instructions+=1;goto B52ed0b;
case 0x52ed10:goto L52ed10;
case 0x52ed13:goto L52ed13;
case 0x52ed17:c.instructions+=11;goto B52ed17;
case 0x52ed18:c.instructions+=10;goto B52ed18;
case 0x52ed19:c.instructions+=9;goto B52ed19;
case 0x52ed1c:c.instructions+=8;goto B52ed1c;
case 0x52ed1d:c.instructions+=7;goto B52ed1d;
case 0x52ed20:c.instructions+=6;goto B52ed20;
case 0x52ed23:c.instructions+=5;goto B52ed23;
case 0x52ed26:c.instructions+=4;goto B52ed26;
case 0x52ed27:c.instructions+=3;goto B52ed27;
case 0x52ed28:c.instructions+=2;goto B52ed28;
case 0x52ed2b:c.instructions+=1;goto B52ed2b;
case 0x52ed30:goto L52ed30;
case 0x52ed33:c.instructions+=3;goto B52ed33;
case 0x52ed36:c.instructions+=2;goto B52ed36;
case 0x52ed38:c.instructions+=1;goto B52ed38;
case 0x52ed3a:goto L52ed3a;
case 0x52ed3c:c.instructions+=1;goto B52ed3c;
case 0x52ed3e:goto L52ed3e;
case 0x52ed41:goto L52ed41;
case 0x52ed44:c.instructions+=15;goto B52ed44;
case 0x52ed47:c.instructions+=14;goto B52ed47;
case 0x52ed4a:c.instructions+=13;goto B52ed4a;
case 0x52ed4d:c.instructions+=12;goto B52ed4d;
case 0x52ed50:c.instructions+=11;goto B52ed50;
case 0x52ed53:c.instructions+=10;goto B52ed53;
case 0x52ed56:c.instructions+=9;goto B52ed56;
case 0x52ed59:c.instructions+=8;goto B52ed59;
case 0x52ed5b:c.instructions+=7;goto B52ed5b;
case 0x52ed5e:c.instructions+=6;goto B52ed5e;
case 0x52ed60:c.instructions+=5;goto B52ed60;
case 0x52ed63:c.instructions+=4;goto B52ed63;
case 0x52ed66:c.instructions+=3;goto B52ed66;
case 0x52ed67:c.instructions+=2;goto B52ed67;
case 0x52ed69:c.instructions+=1;goto B52ed69;
case 0x52ed6e:goto L52ed6e;
case 0x52ed6f:c.instructions+=6;goto B52ed6f;
case 0x52ed72:c.instructions+=5;goto B52ed72;
case 0x52ed75:c.instructions+=4;goto B52ed75;
case 0x52ed76:c.instructions+=3;goto B52ed76;
case 0x52ed77:c.instructions+=2;goto B52ed77;
case 0x52ed78:c.instructions+=1;goto B52ed78;
case 0x52ed80:goto L52ed80;
case 0x52ed81:c.instructions+=4;goto B52ed81;
case 0x52ed83:c.instructions+=3;goto B52ed83;
case 0x52ed86:c.instructions+=2;goto B52ed86;
case 0x52ed88:c.instructions+=1;goto B52ed88;
case 0x52ed8a:goto L52ed8a;
case 0x52ed8e:c.instructions+=2;goto B52ed8e;
case 0x52ed90:c.instructions+=1;goto B52ed90;
case 0x52ed92:goto L52ed92;
case 0x52ed94:c.instructions+=2;goto B52ed94;
case 0x52ed96:c.instructions+=1;goto B52ed96;
case 0x52ed98:goto L52ed98;
case 0x52ed9a:c.instructions+=2;goto B52ed9a;
case 0x52ed9b:c.instructions+=1;goto B52ed9b;
case 0x52ed9e:goto L52ed9e;
case 0x52ed9f:c.instructions+=7;goto B52ed9f;
case 0x52eda0:c.instructions+=6;goto B52eda0;
case 0x52eda1:c.instructions+=5;goto B52eda1;
case 0x52eda5:c.instructions+=4;goto B52eda5;
case 0x52eda8:c.instructions+=3;goto B52eda8;
case 0x52edab:c.instructions+=2;goto B52edab;
case 0x52edad:c.instructions+=1;goto B52edad;
case 0x52edaf:goto L52edaf;
case 0x52edb2:c.instructions+=2;goto B52edb2;
case 0x52edb5:c.instructions+=1;goto B52edb5;
case 0x52edb7:goto L52edb7;
case 0x52edba:c.instructions+=1;goto B52edba;
case 0x52edbd:goto L52edbd;
case 0x52edc1:c.instructions+=2;goto B52edc1;
case 0x52edc3:c.instructions+=1;goto B52edc3;
case 0x52edc5:goto L52edc5;
case 0x52edc9:c.instructions+=1;goto B52edc9;
case 0x52edcb:goto L52edcb;
case 0x52edce:c.instructions+=2;goto B52edce;
case 0x52edcf:c.instructions+=1;goto B52edcf;
case 0x52edd4:goto L52edd4;
case 0x52edd7:goto L52edd7;
case 0x52edda:c.instructions+=7;goto B52edda;
case 0x52eddd:c.instructions+=6;goto B52eddd;
case 0x52edde:c.instructions+=5;goto B52edde;
case 0x52ede1:c.instructions+=4;goto B52ede1;
case 0x52ede2:c.instructions+=3;goto B52ede2;
case 0x52ede3:c.instructions+=2;goto B52ede3;
case 0x52ede6:c.instructions+=1;goto B52ede6;
case 0x52edeb:goto L52edeb;
case 0x52edee:c.instructions+=3;goto B52edee;
case 0x52edf1:c.instructions+=2;goto B52edf1;
case 0x52edf3:c.instructions+=1;goto B52edf3;
case 0x52edf5:goto L52edf5;
case 0x52edf8:c.instructions+=2;goto B52edf8;
case 0x52edfb:c.instructions+=1;goto B52edfb;
case 0x52edfd:goto L52edfd;
case 0x52ee00:c.instructions+=1;goto B52ee00;
case 0x52ee02:goto L52ee02;
case 0x52ee05:c.instructions+=14;goto B52ee05;
case 0x52ee08:c.instructions+=13;goto B52ee08;
case 0x52ee0b:c.instructions+=12;goto B52ee0b;
case 0x52ee0e:c.instructions+=11;goto B52ee0e;
case 0x52ee11:c.instructions+=10;goto B52ee11;
case 0x52ee14:c.instructions+=9;goto B52ee14;
case 0x52ee17:c.instructions+=8;goto B52ee17;
case 0x52ee19:c.instructions+=7;goto B52ee19;
case 0x52ee1c:c.instructions+=6;goto B52ee1c;
case 0x52ee1e:c.instructions+=5;goto B52ee1e;
case 0x52ee21:c.instructions+=4;goto B52ee21;
case 0x52ee24:c.instructions+=3;goto B52ee24;
case 0x52ee25:c.instructions+=2;goto B52ee25;
case 0x52ee27:c.instructions+=1;goto B52ee27;
case 0x52ee2c:goto L52ee2c;
case 0x52ee2f:c.instructions+=6;goto B52ee2f;
case 0x52ee32:c.instructions+=5;goto B52ee32;
case 0x52ee33:c.instructions+=4;goto B52ee33;
case 0x52ee34:c.instructions+=3;goto B52ee34;
case 0x52ee35:c.instructions+=2;goto B52ee35;
case 0x52ee36:c.instructions+=1;goto B52ee36;
case 0x52ee40:goto L52ee40;
case 0x52ee44:c.instructions+=4;goto B52ee44;
case 0x52ee45:c.instructions+=3;goto B52ee45;
case 0x52ee46:c.instructions+=2;goto B52ee46;
case 0x52ee48:c.instructions+=1;goto B52ee48;
case 0x52ee4d:goto L52ee4d;
case 0x52ee4f:c.instructions+=1;goto B52ee4f;
case 0x52ee51:goto L52ee51;
case 0x52ee54:c.instructions+=1;goto B52ee54;
case 0x52ee56:goto L52ee56;
case 0x52ee59:c.instructions+=4;goto B52ee59;
case 0x52ee5b:c.instructions+=3;goto B52ee5b;
case 0x52ee5e:c.instructions+=2;goto B52ee5e;
case 0x52ee61:c.instructions+=1;goto B52ee61;
case 0x52ee63:goto L52ee63;
case 0x52ee66:c.instructions+=1;goto B52ee66;
case 0x52ee68:goto L52ee68;
case 0x52ee6b:goto L52ee6b;
case 0x52ee6d:c.instructions+=5;goto B52ee6d;
case 0x52ee70:c.instructions+=4;goto B52ee70;
case 0x52ee72:c.instructions+=3;goto B52ee72;
case 0x52ee74:c.instructions+=2;goto B52ee74;
case 0x52ee77:c.instructions+=1;goto B52ee77;
case 0x52ee79:goto L52ee79;
case 0x52ee7f:goto L52ee7f;
case 0x52ee81:c.instructions+=2;goto B52ee81;
case 0x52ee84:c.instructions+=1;goto B52ee84;
case 0x52ee89:goto L52ee89;
case 0x52ee8f:c.instructions+=1;goto B52ee8f;
case 0x52ee95:goto L52ee95;
case 0x52ee96:c.instructions+=1;goto B52ee96;
case 0x52eea0:goto L52eea0;
case 0x52eea3:c.instructions+=8;goto B52eea3;
case 0x52eea4:c.instructions+=7;goto B52eea4;
case 0x52eea5:c.instructions+=6;goto B52eea5;
case 0x52eea6:c.instructions+=5;goto B52eea6;
case 0x52eea7:c.instructions+=4;goto B52eea7;
case 0x52eea9:c.instructions+=3;goto B52eea9;
case 0x52eeac:c.instructions+=2;goto B52eeac;
case 0x52eeae:c.instructions+=1;goto B52eeae;
case 0x52eeb0:goto L52eeb0;
case 0x52eeb3:c.instructions+=1;goto B52eeb3;
case 0x52eeb5:goto L52eeb5;
case 0x52eeb7:goto L52eeb7;
case 0x52eeba:c.instructions+=2;goto B52eeba;
case 0x52eebc:c.instructions+=1;goto B52eebc;
case 0x52eebe:goto L52eebe;
case 0x52eec1:c.instructions+=1;goto B52eec1;
case 0x52eec3:goto L52eec3;
case 0x52eec5:goto L52eec5;
case 0x52eec7:c.instructions+=1;goto B52eec7;
case 0x52eecd:goto L52eecd;
case 0x52eed0:c.instructions+=3;goto B52eed0;
case 0x52eed4:c.instructions+=2;goto B52eed4;
case 0x52eed6:c.instructions+=1;goto B52eed6;
case 0x52eed8:goto L52eed8;
case 0x52eedb:c.instructions+=13;goto B52eedb;
case 0x52eede:c.instructions+=12;goto B52eede;
case 0x52eee1:c.instructions+=11;goto B52eee1;
case 0x52eee4:c.instructions+=10;goto B52eee4;
case 0x52eee7:c.instructions+=9;goto B52eee7;
case 0x52eee8:c.instructions+=8;goto B52eee8;
case 0x52eeec:c.instructions+=7;goto B52eeec;
case 0x52eeef:c.instructions+=6;goto B52eeef;
case 0x52eef3:c.instructions+=5;goto B52eef3;
case 0x52eef7:c.instructions+=4;goto B52eef7;
case 0x52eef8:c.instructions+=3;goto B52eef8;
case 0x52eefc:c.instructions+=2;goto B52eefc;
case 0x52eefd:c.instructions+=1;goto B52eefd;
case 0x52eeff:goto L52eeff;
case 0x52ef02:c.instructions+=12;goto B52ef02;
case 0x52ef05:c.instructions+=11;goto B52ef05;
case 0x52ef08:c.instructions+=10;goto B52ef08;
case 0x52ef0b:c.instructions+=9;goto B52ef0b;
case 0x52ef0e:c.instructions+=8;goto B52ef0e;
case 0x52ef12:c.instructions+=7;goto B52ef12;
case 0x52ef15:c.instructions+=6;goto B52ef15;
case 0x52ef19:c.instructions+=5;goto B52ef19;
case 0x52ef1d:c.instructions+=4;goto B52ef1d;
case 0x52ef1e:c.instructions+=3;goto B52ef1e;
case 0x52ef1f:c.instructions+=2;goto B52ef1f;
case 0x52ef23:c.instructions+=1;goto B52ef23;
case 0x52ef24:goto L52ef24;
case 0x52ef29:goto L52ef29;
case 0x52ef2c:c.instructions+=5;goto B52ef2c;
case 0x52ef2f:c.instructions+=4;goto B52ef2f;
case 0x52ef32:c.instructions+=3;goto B52ef32;
case 0x52ef35:c.instructions+=2;goto B52ef35;
case 0x52ef37:c.instructions+=1;goto B52ef37;
case 0x52ef39:goto L52ef39;
case 0x52ef3c:c.instructions+=3;goto B52ef3c;
case 0x52ef3d:c.instructions+=2;goto B52ef3d;
case 0x52ef40:c.instructions+=1;goto B52ef40;
case 0x52ef42:goto L52ef42;
case 0x52ef45:c.instructions+=1;goto B52ef45;
case 0x52ef47:goto L52ef47;
case 0x52ef4a:c.instructions+=1;goto B52ef4a;
case 0x52ef4c:goto L52ef4c;
case 0x52ef4f:c.instructions+=2;goto B52ef4f;
case 0x52ef51:c.instructions+=1;goto B52ef51;
case 0x52ef54:goto L52ef54;
case 0x52ef57:c.instructions+=6;goto B52ef57;
case 0x52ef5c:c.instructions+=5;goto B52ef5c;
case 0x52ef5f:c.instructions+=4;goto B52ef5f;
case 0x52ef62:c.instructions+=3;goto B52ef62;
case 0x52ef64:c.instructions+=2;goto B52ef64;
case 0x52ef67:c.instructions+=1;goto B52ef67;
case 0x52ef69:goto L52ef69;
case 0x52ef6b:c.instructions+=2;goto B52ef6b;
case 0x52ef70:c.instructions+=1;goto B52ef70;
case 0x52ef72:goto L52ef72;
case 0x52ef75:c.instructions+=2;goto B52ef75;
case 0x52ef77:c.instructions+=1;goto B52ef77;
case 0x52ef79:goto L52ef79;
case 0x52ef7d:c.instructions+=7;goto B52ef7d;
case 0x52ef83:c.instructions+=6;goto B52ef83;
case 0x52ef87:c.instructions+=5;goto B52ef87;
case 0x52ef89:c.instructions+=4;goto B52ef89;
case 0x52ef8d:c.instructions+=3;goto B52ef8d;
case 0x52ef8f:c.instructions+=2;goto B52ef8f;
case 0x52ef92:c.instructions+=1;goto B52ef92;
case 0x52ef94:goto L52ef94;
case 0x52ef98:c.instructions+=7;goto B52ef98;
case 0x52ef9a:c.instructions+=6;goto B52ef9a;
case 0x52ef9e:c.instructions+=5;goto B52ef9e;
case 0x52efa0:c.instructions+=4;goto B52efa0;
case 0x52efa2:c.instructions+=3;goto B52efa2;
case 0x52efa4:c.instructions+=2;goto B52efa4;
case 0x52efa7:c.instructions+=1;goto B52efa7;
case 0x52efa9:goto L52efa9;
case 0x52efac:c.instructions+=2;goto B52efac;
case 0x52efad:c.instructions+=1;goto B52efad;
case 0x52efb2:goto L52efb2;
case 0x52efb5:c.instructions+=1;goto B52efb5;
case 0x52efb7:goto L52efb7;
case 0x52efb9:goto L52efb9;
case 0x52efbc:c.instructions+=3;goto B52efbc;
case 0x52efbe:c.instructions+=2;goto B52efbe;
case 0x52efbf:c.instructions+=1;goto B52efbf;
case 0x52efc4:goto L52efc4;
case 0x52efc7:c.instructions+=3;goto B52efc7;
case 0x52efca:c.instructions+=2;goto B52efca;
case 0x52efcc:c.instructions+=1;goto B52efcc;
case 0x52efce:goto L52efce;
case 0x52efd4:c.instructions+=2;goto B52efd4;
case 0x52efd6:c.instructions+=1;goto B52efd6;
case 0x52efd8:goto L52efd8;
case 0x52efdc:c.instructions+=1;goto B52efdc;
case 0x52efde:goto L52efde;
case 0x52efe5:goto L52efe5;
case 0x52efe9:c.instructions+=1;goto B52efe9;
case 0x52efeb:goto L52efeb;
case 0x52efee:c.instructions+=3;goto B52efee;
case 0x52eff1:c.instructions+=2;goto B52eff1;
case 0x52eff3:c.instructions+=1;goto B52eff3;
case 0x52eff5:goto L52eff5;
case 0x52eff7:c.instructions+=2;goto B52eff7;
case 0x52eff8:c.instructions+=1;goto B52eff8;
case 0x52effd:goto L52effd;
default:missing_instruction(c.pc);}
B52e001:L52e001:{c.instructions+=3;NFSU2_TR(0x52e001);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e002:{NFSU2_TR(0x52e002);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e003:{NFSU2_TR(0x52e003);
if(r1(R+518)){{goto L52e017;}}
}
B52e005:L52e005:{c.instructions+=2;NFSU2_TR(0x52e005);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e007:{NFSU2_TR(0x52e007);
if(r1(R+518)){{goto L52e017;}}
}
B52e009:L52e009:{c.instructions+=5;NFSU2_TR(0x52e009);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e00c:{NFSU2_TR(0x52e00c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e010:{NFSU2_TR(0x52e010);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e011:{NFSU2_TR(0x52e011);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e012:{NFSU2_TR(0x52e012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e017ull));
TAIL_STATIC(0x52ce40u,52c);
}
B52e017:L52e017:{c.instructions+=3;NFSU2_TR(0x52e017);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52e01a:{NFSU2_TR(0x52e01a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e01c:{NFSU2_TR(0x52e01c);
if(r1(R+518)){{goto L52e05e;}}
}
B52e01e:L52e01e:{c.instructions+=3;NFSU2_TR(0x52e01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e021:{NFSU2_TR(0x52e021);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e023:{NFSU2_TR(0x52e023);
if(r1(R+518)){{goto L52e05e;}}
}
B52e025:L52e025:{c.instructions+=2;NFSU2_TR(0x52e025);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e02a:{NFSU2_TR(0x52e02a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e02full));
TAIL_STATIC(0x505450u,505);
}
B52e02f:L52e02f:{c.instructions+=4;NFSU2_TR(0x52e02f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e032:{NFSU2_TR(0x52e032);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52e035:{NFSU2_TR(0x52e035);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e037:{NFSU2_TR(0x52e037);
if(r1(R+518)){{goto L52e042;}}
}
B52e039:L52e039:{c.instructions+=3;NFSU2_TR(0x52e039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e03c:{NFSU2_TR(0x52e03c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e03e:{NFSU2_TR(0x52e03e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e025u);}goto L52e025;}}
}
B52e040:L52e040:{c.instructions+=1;NFSU2_TR(0x52e040);
{goto L52e05e;}
}
B52e042:L52e042:{c.instructions+=2;NFSU2_TR(0x52e042);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e044:{NFSU2_TR(0x52e044);
if(r1(R+518)){{goto L52e05e;}}
}
B52e046:L52e046:{c.instructions+=2;NFSU2_TR(0x52e046);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52e049:{NFSU2_TR(0x52e049);
if(r1(R+518)){{goto L52e05b;}}
}
B52e04b:L52e04b:{c.instructions+=3;NFSU2_TR(0x52e04b);
__builtin_memmove((R+4),(R+28),4);
}
B52e04d:{NFSU2_TR(0x52e04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e050:{NFSU2_TR(0x52e050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e055ull));
TAIL_STATIC(0x517720u,517);
}
B52e055:L52e055:{c.instructions+=2;NFSU2_TR(0x52e055);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e058:{NFSU2_TR(0x52e058);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e05b:L52e05b:{c.instructions+=1;NFSU2_TR(0x52e05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e05e:L52e05e:{c.instructions+=3;NFSU2_TR(0x52e05e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52e061:{NFSU2_TR(0x52e061);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e063:{NFSU2_TR(0x52e063);
if(r1(R+518)){{goto L52e0a9;}}
}
B52e065:L52e065:{c.instructions+=3;NFSU2_TR(0x52e065);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e068:{NFSU2_TR(0x52e068);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e06a:{NFSU2_TR(0x52e06a);
if(r1(R+518)){{goto L52e0a9;}}
}
B52e06c:L52e06c:{c.instructions+=1;NFSU2_TR(0x52e06c);
__builtin_memmove((R+16),(R+16),4);
}
B52e070:L52e070:{c.instructions+=2;NFSU2_TR(0x52e070);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e075:{NFSU2_TR(0x52e075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e07aull));
TAIL_STATIC(0x505450u,505);
}
B52e07a:L52e07a:{c.instructions+=4;NFSU2_TR(0x52e07a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e07d:{NFSU2_TR(0x52e07d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52e080:{NFSU2_TR(0x52e080);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e082:{NFSU2_TR(0x52e082);
if(r1(R+518)){{goto L52e08d;}}
}
B52e084:L52e084:{c.instructions+=3;NFSU2_TR(0x52e084);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e087:{NFSU2_TR(0x52e087);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e089:{NFSU2_TR(0x52e089);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e070u);}goto L52e070;}}
}
B52e08b:L52e08b:{c.instructions+=1;NFSU2_TR(0x52e08b);
{goto L52e0a9;}
}
B52e08d:L52e08d:{c.instructions+=2;NFSU2_TR(0x52e08d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e08f:{NFSU2_TR(0x52e08f);
if(r1(R+518)){{goto L52e0a9;}}
}
B52e091:L52e091:{c.instructions+=2;NFSU2_TR(0x52e091);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52e094:{NFSU2_TR(0x52e094);
if(r1(R+518)){{goto L52e0a6;}}
}
B52e096:L52e096:{c.instructions+=3;NFSU2_TR(0x52e096);
__builtin_memmove((R+4),(R+28),4);
}
B52e098:{NFSU2_TR(0x52e098);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e09b:{NFSU2_TR(0x52e09b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e0a0ull));
TAIL_STATIC(0x517720u,517);
}
B52e0a0:L52e0a0:{c.instructions+=2;NFSU2_TR(0x52e0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e0a3:{NFSU2_TR(0x52e0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e0a6:L52e0a6:{c.instructions+=1;NFSU2_TR(0x52e0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e0a9:L52e0a9:{c.instructions+=3;NFSU2_TR(0x52e0a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52e0ac:{NFSU2_TR(0x52e0ac);
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
B52e0ae:{NFSU2_TR(0x52e0ae);
if(r1(R+518)){{goto L52e0f9;}}
}
B52e0b0:L52e0b0:{c.instructions+=3;NFSU2_TR(0x52e0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e0b3:{NFSU2_TR(0x52e0b3);
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
B52e0b5:{NFSU2_TR(0x52e0b5);
if(r1(R+518)){{goto L52e0f9;}}
}
B52e0b7:L52e0b7:{c.instructions+=1;NFSU2_TR(0x52e0b7);
{goto L52e0c0;}
}
B52e0c0:L52e0c0:{c.instructions+=2;NFSU2_TR(0x52e0c0);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e0c5:{NFSU2_TR(0x52e0c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e0caull));
TAIL_STATIC(0x505450u,505);
}
B52e0ca:L52e0ca:{c.instructions+=4;NFSU2_TR(0x52e0ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e0cd:{NFSU2_TR(0x52e0cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52e0d0:{NFSU2_TR(0x52e0d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e0d2:{NFSU2_TR(0x52e0d2);
if(r1(R+518)){{goto L52e0dd;}}
}
B52e0d4:L52e0d4:{c.instructions+=3;NFSU2_TR(0x52e0d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e0d7:{NFSU2_TR(0x52e0d7);
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
B52e0d9:{NFSU2_TR(0x52e0d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e0c0u);}goto L52e0c0;}}
}
B52e0db:L52e0db:{c.instructions+=1;NFSU2_TR(0x52e0db);
{goto L52e0f9;}
}
B52e0dd:L52e0dd:{c.instructions+=2;NFSU2_TR(0x52e0dd);
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
B52e0df:{NFSU2_TR(0x52e0df);
if(r1(R+518)){{goto L52e0f9;}}
}
B52e0e1:L52e0e1:{c.instructions+=2;NFSU2_TR(0x52e0e1);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B52e0e4:{NFSU2_TR(0x52e0e4);
if(r1(R+518)){{goto L52e0f6;}}
}
B52e0e6:L52e0e6:{c.instructions+=3;NFSU2_TR(0x52e0e6);
__builtin_memmove((R+4),(R+28),4);
}
B52e0e8:{NFSU2_TR(0x52e0e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e0eb:{NFSU2_TR(0x52e0eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e0f0ull));
TAIL_STATIC(0x517720u,517);
}
B52e0f0:L52e0f0:{c.instructions+=2;NFSU2_TR(0x52e0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e0f3:{NFSU2_TR(0x52e0f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e0f6:L52e0f6:{c.instructions+=1;NFSU2_TR(0x52e0f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e0f9:L52e0f9:{c.instructions+=3;NFSU2_TR(0x52e0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e0fc:{NFSU2_TR(0x52e0fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52e0ff:{NFSU2_TR(0x52e0ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e102ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52e102:L52e102:{c.instructions+=7;NFSU2_TR(0x52e102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e105:{NFSU2_TR(0x52e105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e106:{NFSU2_TR(0x52e106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e107:{NFSU2_TR(0x52e107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52e108:{NFSU2_TR(0x52e108);
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
B52e10a:{NFSU2_TR(0x52e10a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52e10b:{NFSU2_TR(0x52e10b);
if(r1(R+518)){{goto L52e11d;}}
}
B52e10d:L52e10d:{c.instructions+=4;NFSU2_TR(0x52e10d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e10f:{NFSU2_TR(0x52e10f);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e114:{NFSU2_TR(0x52e114);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e115:{NFSU2_TR(0x52e115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e11aull));
TAIL_STATIC(0x51cf70u,51c);
}
B52e11a:L52e11a:{c.instructions+=1;NFSU2_TR(0x52e11a);
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
B52e11d:L52e11d:{c.instructions+=1;NFSU2_TR(0x52e11d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e120:L52e120:{c.instructions+=10;NFSU2_TR(0x52e120);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e121:{NFSU2_TR(0x52e121);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e122:{NFSU2_TR(0x52e122);
__builtin_memmove((R+20),(R+4),4);
}
B52e124:{NFSU2_TR(0x52e124);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52e12a:{NFSU2_TR(0x52e12a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e12d:{NFSU2_TR(0x52e12d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52e12f:{NFSU2_TR(0x52e12f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e131:{NFSU2_TR(0x52e131);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e132:{NFSU2_TR(0x52e132);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e133:{NFSU2_TR(0x52e133);
if(r1(R+518)){{goto L52e147;}}
}
B52e135:L52e135:{c.instructions+=2;NFSU2_TR(0x52e135);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e137:{NFSU2_TR(0x52e137);
if(r1(R+518)){{goto L52e147;}}
}
B52e139:L52e139:{c.instructions+=5;NFSU2_TR(0x52e139);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e13c:{NFSU2_TR(0x52e13c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e140:{NFSU2_TR(0x52e140);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e141:{NFSU2_TR(0x52e141);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e142:{NFSU2_TR(0x52e142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e147ull));
TAIL_STATIC(0x52ce40u,52c);
}
B52e147:L52e147:{c.instructions+=3;NFSU2_TR(0x52e147);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52e14a:{NFSU2_TR(0x52e14a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e14c:{NFSU2_TR(0x52e14c);
if(r1(R+518)){{goto L52e18e;}}
}
B52e14e:L52e14e:{c.instructions+=3;NFSU2_TR(0x52e14e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e151:{NFSU2_TR(0x52e151);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e153:{NFSU2_TR(0x52e153);
if(r1(R+518)){{goto L52e18e;}}
}
B52e155:L52e155:{c.instructions+=2;NFSU2_TR(0x52e155);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e15a:{NFSU2_TR(0x52e15a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e15full));
TAIL_STATIC(0x505450u,505);
}
B52e15f:L52e15f:{c.instructions+=4;NFSU2_TR(0x52e15f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e162:{NFSU2_TR(0x52e162);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52e165:{NFSU2_TR(0x52e165);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e167:{NFSU2_TR(0x52e167);
if(r1(R+518)){{goto L52e172;}}
}
B52e169:L52e169:{c.instructions+=3;NFSU2_TR(0x52e169);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e16c:{NFSU2_TR(0x52e16c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e16e:{NFSU2_TR(0x52e16e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e155u);}goto L52e155;}}
}
B52e170:L52e170:{c.instructions+=1;NFSU2_TR(0x52e170);
{goto L52e18e;}
}
B52e172:L52e172:{c.instructions+=2;NFSU2_TR(0x52e172);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e174:{NFSU2_TR(0x52e174);
if(r1(R+518)){{goto L52e18e;}}
}
B52e176:L52e176:{c.instructions+=2;NFSU2_TR(0x52e176);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52e179:{NFSU2_TR(0x52e179);
if(r1(R+518)){{goto L52e18b;}}
}
B52e17b:L52e17b:{c.instructions+=3;NFSU2_TR(0x52e17b);
__builtin_memmove((R+4),(R+28),4);
}
B52e17d:{NFSU2_TR(0x52e17d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e180:{NFSU2_TR(0x52e180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e185ull));
TAIL_STATIC(0x517720u,517);
}
B52e185:L52e185:{c.instructions+=2;NFSU2_TR(0x52e185);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e188:{NFSU2_TR(0x52e188);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e18b:L52e18b:{c.instructions+=1;NFSU2_TR(0x52e18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e18e:L52e18e:{c.instructions+=3;NFSU2_TR(0x52e18e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52e191:{NFSU2_TR(0x52e191);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e193:{NFSU2_TR(0x52e193);
if(r1(R+518)){{goto L52e1d9;}}
}
B52e195:L52e195:{c.instructions+=3;NFSU2_TR(0x52e195);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e198:{NFSU2_TR(0x52e198);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e19a:{NFSU2_TR(0x52e19a);
if(r1(R+518)){{goto L52e1d9;}}
}
B52e19c:L52e19c:{c.instructions+=1;NFSU2_TR(0x52e19c);
__builtin_memmove((R+16),(R+16),4);
}
B52e1a0:L52e1a0:{c.instructions+=2;NFSU2_TR(0x52e1a0);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e1a5:{NFSU2_TR(0x52e1a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e1aaull));
TAIL_STATIC(0x505450u,505);
}
B52e1aa:L52e1aa:{c.instructions+=4;NFSU2_TR(0x52e1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e1ad:{NFSU2_TR(0x52e1ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52e1b0:{NFSU2_TR(0x52e1b0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e1b2:{NFSU2_TR(0x52e1b2);
if(r1(R+518)){{goto L52e1bd;}}
}
B52e1b4:L52e1b4:{c.instructions+=3;NFSU2_TR(0x52e1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e1b7:{NFSU2_TR(0x52e1b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e1b9:{NFSU2_TR(0x52e1b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e1a0u);}goto L52e1a0;}}
}
B52e1bb:L52e1bb:{c.instructions+=1;NFSU2_TR(0x52e1bb);
{goto L52e1d9;}
}
B52e1bd:L52e1bd:{c.instructions+=2;NFSU2_TR(0x52e1bd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e1bf:{NFSU2_TR(0x52e1bf);
if(r1(R+518)){{goto L52e1d9;}}
}
B52e1c1:L52e1c1:{c.instructions+=2;NFSU2_TR(0x52e1c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52e1c4:{NFSU2_TR(0x52e1c4);
if(r1(R+518)){{goto L52e1d6;}}
}
B52e1c6:L52e1c6:{c.instructions+=3;NFSU2_TR(0x52e1c6);
__builtin_memmove((R+4),(R+28),4);
}
B52e1c8:{NFSU2_TR(0x52e1c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e1cb:{NFSU2_TR(0x52e1cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e1d0ull));
TAIL_STATIC(0x517720u,517);
}
B52e1d0:L52e1d0:{c.instructions+=2;NFSU2_TR(0x52e1d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e1d3:{NFSU2_TR(0x52e1d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e1d6:L52e1d6:{c.instructions+=1;NFSU2_TR(0x52e1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e1d9:L52e1d9:{c.instructions+=7;NFSU2_TR(0x52e1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e1dc:{NFSU2_TR(0x52e1dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e1dd:{NFSU2_TR(0x52e1dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e1de:{NFSU2_TR(0x52e1de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52e1df:{NFSU2_TR(0x52e1df);
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
B52e1e1:{NFSU2_TR(0x52e1e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52e1e2:{NFSU2_TR(0x52e1e2);
if(r1(R+518)){{goto L52e1f4;}}
}
B52e1e4:L52e1e4:{c.instructions+=4;NFSU2_TR(0x52e1e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e1e6:{NFSU2_TR(0x52e1e6);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e1eb:{NFSU2_TR(0x52e1eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e1ec:{NFSU2_TR(0x52e1ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e1f1ull));
TAIL_STATIC(0x51cf70u,51c);
}
B52e1f1:L52e1f1:{c.instructions+=1;NFSU2_TR(0x52e1f1);
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
B52e1f4:L52e1f4:{c.instructions+=1;NFSU2_TR(0x52e1f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e200:L52e200:{c.instructions+=13;NFSU2_TR(0x52e200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e201:{NFSU2_TR(0x52e201);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52e205:{NFSU2_TR(0x52e205);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e206:{NFSU2_TR(0x52e206);
__builtin_memmove((R+24),(R+4),4);
}
B52e208:{NFSU2_TR(0x52e208);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B52e20a:{NFSU2_TR(0x52e20a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e20c:{NFSU2_TR(0x52e20c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e210:{NFSU2_TR(0x52e210);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52e214:{NFSU2_TR(0x52e214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e217:{NFSU2_TR(0x52e217);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e21b:{NFSU2_TR(0x52e21b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e21f:{NFSU2_TR(0x52e21f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B52e223:{NFSU2_TR(0x52e223);
if(r1(R+518)){{goto L52e290;}}
}
B52e225:L52e225:{c.instructions+=6;NFSU2_TR(0x52e225);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52e228:{NFSU2_TR(0x52e228);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e22c:{NFSU2_TR(0x52e22c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e230:{NFSU2_TR(0x52e230);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e231:{NFSU2_TR(0x52e231);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e232:{NFSU2_TR(0x52e232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e237ull));
TAIL_STATIC(0x525db0u,525);
}
B52e237:L52e237:{c.instructions+=12;NFSU2_TR(0x52e237);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52e23b:{NFSU2_TR(0x52e23b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52e23e:{NFSU2_TR(0x52e23e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e244:{NFSU2_TR(0x52e244);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e247:{NFSU2_TR(0x52e247);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e24b:{NFSU2_TR(0x52e24b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e24f:{NFSU2_TR(0x52e24f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e253:{NFSU2_TR(0x52e253);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e259:{NFSU2_TR(0x52e259);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B52e25b:{NFSU2_TR(0x52e25b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e25d:{NFSU2_TR(0x52e25d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e260:{NFSU2_TR(0x52e260);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e26a;}}
}
B52e262:L52e262:{c.instructions+=2;NFSU2_TR(0x52e262);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e264:{NFSU2_TR(0x52e264);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e26a:L52e26a:{c.instructions+=8;NFSU2_TR(0x52e26a);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B52e26c:{NFSU2_TR(0x52e26c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52e26f:{NFSU2_TR(0x52e26f);
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
B52e271:{NFSU2_TR(0x52e271);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52e274:{NFSU2_TR(0x52e274);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B52e276:{NFSU2_TR(0x52e276);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52e279:{NFSU2_TR(0x52e279);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52e27c:{NFSU2_TR(0x52e27c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e318;}}
}
B52e282:L52e282:{c.instructions+=4;NFSU2_TR(0x52e282);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e286:{NFSU2_TR(0x52e286);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52e28a:{NFSU2_TR(0x52e28a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52e28e:{NFSU2_TR(0x52e28e);
{goto L52e2f5;}
}
B52e290:L52e290:{c.instructions+=6;NFSU2_TR(0x52e290);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52e293:{NFSU2_TR(0x52e293);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e297:{NFSU2_TR(0x52e297);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e29b:{NFSU2_TR(0x52e29b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e29c:{NFSU2_TR(0x52e29c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e29d:{NFSU2_TR(0x52e29d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e2a2ull));
TAIL_STATIC(0x495590u,495);
}
B52e2a2:L52e2a2:{c.instructions+=12;NFSU2_TR(0x52e2a2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52e2a6:{NFSU2_TR(0x52e2a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52e2a9:{NFSU2_TR(0x52e2a9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e2af:{NFSU2_TR(0x52e2af);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e2b2:{NFSU2_TR(0x52e2b2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e2b6:{NFSU2_TR(0x52e2b6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e2ba:{NFSU2_TR(0x52e2ba);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e2be:{NFSU2_TR(0x52e2be);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e2c4:{NFSU2_TR(0x52e2c4);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B52e2c6:{NFSU2_TR(0x52e2c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e2c8:{NFSU2_TR(0x52e2c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e2cb:{NFSU2_TR(0x52e2cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e2d5;}}
}
B52e2cd:L52e2cd:{c.instructions+=2;NFSU2_TR(0x52e2cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e2cf:{NFSU2_TR(0x52e2cf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e2d5:L52e2d5:{c.instructions+=8;NFSU2_TR(0x52e2d5);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B52e2d7:{NFSU2_TR(0x52e2d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52e2da:{NFSU2_TR(0x52e2da);
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
B52e2dc:{NFSU2_TR(0x52e2dc);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52e2df:{NFSU2_TR(0x52e2df);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B52e2e1:{NFSU2_TR(0x52e2e1);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52e2e4:{NFSU2_TR(0x52e2e4);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52e2e7:{NFSU2_TR(0x52e2e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e318;}}
}
B52e2e9:L52e2e9:{c.instructions+=3;NFSU2_TR(0x52e2e9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e2ed:{NFSU2_TR(0x52e2ed);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52e2f1:{NFSU2_TR(0x52e2f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52e2f5:L52e2f5:{c.instructions+=5;NFSU2_TR(0x52e2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e2f8:{NFSU2_TR(0x52e2f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e2f9:{NFSU2_TR(0x52e2f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e2fa:{NFSU2_TR(0x52e2fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e2fb:{NFSU2_TR(0x52e2fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e300ull));
TAIL_STATIC(0x51d070u,51d);
}
B52e300:L52e300:{c.instructions+=6;NFSU2_TR(0x52e300);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e304:{NFSU2_TR(0x52e304);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e308:{NFSU2_TR(0x52e308);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e309:{NFSU2_TR(0x52e309);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e30a:{NFSU2_TR(0x52e30a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e30b:{NFSU2_TR(0x52e30b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e310ull));
TAIL_STATIC(0x51d380u,51d);
}
B52e310:L52e310:{c.instructions+=4;NFSU2_TR(0x52e310);
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
B52e313:{NFSU2_TR(0x52e313);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e314:{NFSU2_TR(0x52e314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52e315:{NFSU2_TR(0x52e315);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e318:L52e318:{c.instructions+=4;NFSU2_TR(0x52e318);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e31a:{NFSU2_TR(0x52e31a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e31b:{NFSU2_TR(0x52e31b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52e31c:{NFSU2_TR(0x52e31c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e320:L52e320:{c.instructions+=11;NFSU2_TR(0x52e320);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e321:{NFSU2_TR(0x52e321);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e322:{NFSU2_TR(0x52e322);
__builtin_memmove((R+24),(R+4),4);
}
B52e324:{NFSU2_TR(0x52e324);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B52e326:{NFSU2_TR(0x52e326);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e329:{NFSU2_TR(0x52e329);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e32b:{NFSU2_TR(0x52e32b);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e32e:{NFSU2_TR(0x52e32e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e331:{NFSU2_TR(0x52e331);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e332:{NFSU2_TR(0x52e332);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e336:{NFSU2_TR(0x52e336);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e349;}}
}
B52e338:L52e338:{c.instructions+=6;NFSU2_TR(0x52e338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e33b:{NFSU2_TR(0x52e33b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e33d:{NFSU2_TR(0x52e33d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e33f:{NFSU2_TR(0x52e33f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e343:{NFSU2_TR(0x52e343);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e346:{NFSU2_TR(0x52e346);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e349:L52e349:{c.instructions+=14;NFSU2_TR(0x52e349);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52e34d:{NFSU2_TR(0x52e34d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e353:{NFSU2_TR(0x52e353);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e357:{NFSU2_TR(0x52e357);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e35b:{NFSU2_TR(0x52e35b);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B52e35d:{NFSU2_TR(0x52e35d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52e361:{NFSU2_TR(0x52e361);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e365:{NFSU2_TR(0x52e365);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52e369:{NFSU2_TR(0x52e369);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52e36d:{NFSU2_TR(0x52e36d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e373:{NFSU2_TR(0x52e373);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B52e375:{NFSU2_TR(0x52e375);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e377:{NFSU2_TR(0x52e377);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e37a:{NFSU2_TR(0x52e37a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e384;}}
}
B52e37c:L52e37c:{c.instructions+=2;NFSU2_TR(0x52e37c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e37e:{NFSU2_TR(0x52e37e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e384:L52e384:{c.instructions+=11;NFSU2_TR(0x52e384);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B52e386:{NFSU2_TR(0x52e386);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B52e388:{NFSU2_TR(0x52e388);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e38c:{NFSU2_TR(0x52e38c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e390:{NFSU2_TR(0x52e390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e393:{NFSU2_TR(0x52e393);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e395:{NFSU2_TR(0x52e395);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e399:{NFSU2_TR(0x52e399);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52e39f:{NFSU2_TR(0x52e39f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e3a1:{NFSU2_TR(0x52e3a1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52e3a4:{NFSU2_TR(0x52e3a4);
if(r1(R+514)){{goto L52e3ae;}}
}
B52e3a6:L52e3a6:{c.instructions+=2;NFSU2_TR(0x52e3a6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52e3ac:{NFSU2_TR(0x52e3ac);
{goto L52e3e7;}
}
B52e3ae:L52e3ae:{c.instructions+=6;NFSU2_TR(0x52e3ae);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e3b2:{NFSU2_TR(0x52e3b2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e3b8:{NFSU2_TR(0x52e3b8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52e3bc:{NFSU2_TR(0x52e3bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e3be:{NFSU2_TR(0x52e3be);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52e3c1:{NFSU2_TR(0x52e3c1);
if(r1(R+514)){{goto L52e3d5;}}
}
B52e3c3:L52e3c3:{c.instructions+=6;NFSU2_TR(0x52e3c3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e3c7:{NFSU2_TR(0x52e3c7);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B52e3c9:{NFSU2_TR(0x52e3c9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B52e3cb:{NFSU2_TR(0x52e3cb);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52e3d1:{NFSU2_TR(0x52e3d1);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B52e3d3:{NFSU2_TR(0x52e3d3);
{goto L52e3e9;}
}
B52e3d5:L52e3d5:{c.instructions+=5;NFSU2_TR(0x52e3d5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e3d9:{NFSU2_TR(0x52e3d9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52e3dd:{NFSU2_TR(0x52e3dd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B52e3df:{NFSU2_TR(0x52e3df);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52e3e5:{NFSU2_TR(0x52e3e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B52e3e7:L52e3e7:{c.instructions+=1;NFSU2_TR(0x52e3e7);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B52e3e9:L52e3e9:{c.instructions+=5;NFSU2_TR(0x52e3e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e3eb:{NFSU2_TR(0x52e3eb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e3ef:{NFSU2_TR(0x52e3ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52e3f2:{NFSU2_TR(0x52e3f2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e3f4:{NFSU2_TR(0x52e3f4);
if(r1(R+518)){{goto L52e42d;}}
}
B52e3f6:L52e3f6:{c.instructions+=2;NFSU2_TR(0x52e3f6);
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
B52e3f8:{NFSU2_TR(0x52e3f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e420;}}
}
B52e3fa:L52e3fa:{c.instructions+=7;NFSU2_TR(0x52e3fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52e3fd:{NFSU2_TR(0x52e3fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52e401:{NFSU2_TR(0x52e401);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e402:{NFSU2_TR(0x52e402);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52e406:{NFSU2_TR(0x52e406);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e407:{NFSU2_TR(0x52e407);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e408:{NFSU2_TR(0x52e408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e40dull));
TAIL_STATIC(0x51d620u,51d);
}
B52e40d:L52e40d:{c.instructions+=6;NFSU2_TR(0x52e40d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e411:{NFSU2_TR(0x52e411);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e415:{NFSU2_TR(0x52e415);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e416:{NFSU2_TR(0x52e416);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e417:{NFSU2_TR(0x52e417);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e418:{NFSU2_TR(0x52e418);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e41dull));
TAIL_STATIC(0x51d4d0u,51d);
}
B52e41d:L52e41d:{c.instructions+=1;NFSU2_TR(0x52e41d);
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
B52e420:L52e420:{c.instructions+=6;NFSU2_TR(0x52e420);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e424:{NFSU2_TR(0x52e424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e425:{NFSU2_TR(0x52e425);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e428:{NFSU2_TR(0x52e428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e429:{NFSU2_TR(0x52e429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52e42a:{NFSU2_TR(0x52e42a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e42d:L52e42d:{c.instructions+=2;NFSU2_TR(0x52e42d);
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
B52e42f:{NFSU2_TR(0x52e42f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e457;}}
}
B52e431:L52e431:{c.instructions+=7;NFSU2_TR(0x52e431);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52e434:{NFSU2_TR(0x52e434);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52e438:{NFSU2_TR(0x52e438);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e439:{NFSU2_TR(0x52e439);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52e43d:{NFSU2_TR(0x52e43d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e43e:{NFSU2_TR(0x52e43e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e43f:{NFSU2_TR(0x52e43f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e444ull));
TAIL_STATIC(0x51d620u,51d);
}
B52e444:L52e444:{c.instructions+=6;NFSU2_TR(0x52e444);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e448:{NFSU2_TR(0x52e448);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e44c:{NFSU2_TR(0x52e44c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e44d:{NFSU2_TR(0x52e44d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e44e:{NFSU2_TR(0x52e44e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e44f:{NFSU2_TR(0x52e44f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e454ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B52e454:L52e454:{c.instructions+=1;NFSU2_TR(0x52e454);
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
B52e457:L52e457:{c.instructions+=6;NFSU2_TR(0x52e457);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e45b:{NFSU2_TR(0x52e45b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e45c:{NFSU2_TR(0x52e45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e45f:{NFSU2_TR(0x52e45f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e460:{NFSU2_TR(0x52e460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52e461:{NFSU2_TR(0x52e461);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e470:L52e470:{c.instructions+=5;NFSU2_TR(0x52e470);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e471:{NFSU2_TR(0x52e471);
__builtin_memmove((R+24),(R+4),4);
}
B52e473:{NFSU2_TR(0x52e473);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e476:{NFSU2_TR(0x52e476);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e477:{NFSU2_TR(0x52e477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e47cull));
TAIL_STATIC(0x52d100u,52d);
}
B52e47c:L52e47c:{c.instructions+=3;NFSU2_TR(0x52e47c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52e47f:{NFSU2_TR(0x52e47f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e481:{NFSU2_TR(0x52e481);
if(r1(R+518)){{goto L52e49c;}}
}
B52e483:L52e483:{c.instructions+=5;NFSU2_TR(0x52e483);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B52e489:{NFSU2_TR(0x52e489);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e48c:{NFSU2_TR(0x52e48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B52e493:{NFSU2_TR(0x52e493);
w4(R+0,u32(s32(s8(m1(0x83804c)))));
}
B52e49a:{NFSU2_TR(0x52e49a);
{goto L52e4c2;}
}
B52e49c:L52e49c:{c.instructions+=3;NFSU2_TR(0x52e49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e49f:{NFSU2_TR(0x52e49f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e4a0:{NFSU2_TR(0x52e4a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e4a5ull));
TAIL_STATIC(0x52d100u,52d);
}
B52e4a5:L52e4a5:{c.instructions+=3;NFSU2_TR(0x52e4a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52e4a8:{NFSU2_TR(0x52e4a8);
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
B52e4aa:{NFSU2_TR(0x52e4aa);
if(r1(R+518)){{goto L52e4d3;}}
}
B52e4ac:L52e4ac:{c.instructions+=4;NFSU2_TR(0x52e4ac);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B52e4b1:{NFSU2_TR(0x52e4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e4b4:{NFSU2_TR(0x52e4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52e4bb:{NFSU2_TR(0x52e4bb);
w4(R+0,u32(s32(s8(m1(0x838067)))));
}
B52e4c2:L52e4c2:{c.instructions+=2;NFSU2_TR(0x52e4c2);
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
B52e4c5:{NFSU2_TR(0x52e4c5);
if(r1(R+518)){{goto L52e4d3;}}
}
B52e4c7:L52e4c7:{c.instructions+=3;NFSU2_TR(0x52e4c7);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B52e4cd:{NFSU2_TR(0x52e4cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e4ce:{NFSU2_TR(0x52e4ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e4d3ull));
TAIL_STATIC(0x458520u,458);
}
B52e4d3:L52e4d3:{c.instructions+=2;NFSU2_TR(0x52e4d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e4d4:{NFSU2_TR(0x52e4d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e4e0:L52e4e0:{c.instructions+=14;NFSU2_TR(0x52e4e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B52e4e3:{NFSU2_TR(0x52e4e3);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52e4e9:{NFSU2_TR(0x52e4e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e4ea:{NFSU2_TR(0x52e4ea);
__builtin_memmove((R+24),(R+4),4);
}
B52e4ec:{NFSU2_TR(0x52e4ec);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B52e4ee:{NFSU2_TR(0x52e4ee);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e4f4:{NFSU2_TR(0x52e4f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e4f6:{NFSU2_TR(0x52e4f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e4f7:{NFSU2_TR(0x52e4f7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52e4fb:{NFSU2_TR(0x52e4fb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e4ff:{NFSU2_TR(0x52e4ff);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52e505:{NFSU2_TR(0x52e505);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e50b:{NFSU2_TR(0x52e50b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e50f:{NFSU2_TR(0x52e50f);
if(r1(R+518)){{goto L52e5a5;}}
}
B52e515:L52e515:{c.instructions+=9;NFSU2_TR(0x52e515);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e519:{NFSU2_TR(0x52e519);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e51c:{NFSU2_TR(0x52e51c);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e51f:{NFSU2_TR(0x52e51f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e520:{NFSU2_TR(0x52e520);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52e524:{NFSU2_TR(0x52e524);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e525:{NFSU2_TR(0x52e525);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e526:{NFSU2_TR(0x52e526);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e52a:{NFSU2_TR(0x52e52a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e52full));
TAIL_STATIC(0x51d730u,51d);
}
B52e52f:L52e52f:{c.instructions+=11;NFSU2_TR(0x52e52f);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e532:{NFSU2_TR(0x52e532);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52e535:{NFSU2_TR(0x52e535);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52e538:{NFSU2_TR(0x52e538);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e53c:{NFSU2_TR(0x52e53c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e540:{NFSU2_TR(0x52e540);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e543:{NFSU2_TR(0x52e543);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e547:{NFSU2_TR(0x52e547);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B52e549:{NFSU2_TR(0x52e549);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e54b:{NFSU2_TR(0x52e54b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e54e:{NFSU2_TR(0x52e54e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e556;}}
}
B52e550:L52e550:{c.instructions+=2;NFSU2_TR(0x52e550);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e552:{NFSU2_TR(0x52e552);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e556:L52e556:{c.instructions+=5;NFSU2_TR(0x52e556);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e55a:{NFSU2_TR(0x52e55a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B52e55c:{NFSU2_TR(0x52e55c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e55e:{NFSU2_TR(0x52e55e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52e561:{NFSU2_TR(0x52e561);
if(r1(R+514)){{goto L52e56f;}}
}
B52e563:L52e563:{c.instructions+=4;NFSU2_TR(0x52e563);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e567:{NFSU2_TR(0x52e567);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e569:{NFSU2_TR(0x52e569);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e56d:{NFSU2_TR(0x52e56d);
{goto L52e573;}
}
B52e56f:L52e56f:{c.instructions+=1;NFSU2_TR(0x52e56f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e573:L52e573:{c.instructions+=7;NFSU2_TR(0x52e573);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52e576:{NFSU2_TR(0x52e576);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52e57a:{NFSU2_TR(0x52e57a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e57b:{NFSU2_TR(0x52e57b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52e57f:{NFSU2_TR(0x52e57f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e580:{NFSU2_TR(0x52e580);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e581:{NFSU2_TR(0x52e581);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e586ull));
TAIL_STATIC(0x51d070u,51d);
}
B52e586:L52e586:{c.instructions+=6;NFSU2_TR(0x52e586);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e58a:{NFSU2_TR(0x52e58a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e58e:{NFSU2_TR(0x52e58e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e58f:{NFSU2_TR(0x52e58f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e590:{NFSU2_TR(0x52e590);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e591:{NFSU2_TR(0x52e591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e596ull));
TAIL_STATIC(0x51d380u,51d);
}
B52e596:L52e596:{c.instructions+=4;NFSU2_TR(0x52e596);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e59a:{NFSU2_TR(0x52e59a);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e59d:{NFSU2_TR(0x52e59d);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e5a0:{NFSU2_TR(0x52e5a0);
{goto L52e630;}
}
B52e5a5:L52e5a5:{c.instructions+=9;NFSU2_TR(0x52e5a5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e5a9:{NFSU2_TR(0x52e5a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e5ac:{NFSU2_TR(0x52e5ac);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e5af:{NFSU2_TR(0x52e5af);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52e5b3:{NFSU2_TR(0x52e5b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e5b4:{NFSU2_TR(0x52e5b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e5b5:{NFSU2_TR(0x52e5b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e5b6:{NFSU2_TR(0x52e5b6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e5ba:{NFSU2_TR(0x52e5ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e5bfull));
TAIL_STATIC(0x51d730u,51d);
}
B52e5bf:L52e5bf:{c.instructions+=11;NFSU2_TR(0x52e5bf);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e5c2:{NFSU2_TR(0x52e5c2);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52e5c5:{NFSU2_TR(0x52e5c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52e5c8:{NFSU2_TR(0x52e5c8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e5cc:{NFSU2_TR(0x52e5cc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e5d0:{NFSU2_TR(0x52e5d0);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e5d3:{NFSU2_TR(0x52e5d3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e5d7:{NFSU2_TR(0x52e5d7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B52e5d9:{NFSU2_TR(0x52e5d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e5db:{NFSU2_TR(0x52e5db);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e5de:{NFSU2_TR(0x52e5de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e5e6;}}
}
B52e5e0:L52e5e0:{c.instructions+=2;NFSU2_TR(0x52e5e0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e5e2:{NFSU2_TR(0x52e5e2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e5e6:L52e5e6:{c.instructions+=5;NFSU2_TR(0x52e5e6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e5ea:{NFSU2_TR(0x52e5ea);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B52e5ec:{NFSU2_TR(0x52e5ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e5ee:{NFSU2_TR(0x52e5ee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52e5f1:{NFSU2_TR(0x52e5f1);
if(r1(R+514)){{goto L52e5ff;}}
}
B52e5f3:L52e5f3:{c.instructions+=4;NFSU2_TR(0x52e5f3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e5f7:{NFSU2_TR(0x52e5f7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e5f9:{NFSU2_TR(0x52e5f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e5fd:{NFSU2_TR(0x52e5fd);
{goto L52e603;}
}
B52e5ff:L52e5ff:{c.instructions+=1;NFSU2_TR(0x52e5ff);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e603:L52e603:{c.instructions+=7;NFSU2_TR(0x52e603);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52e606:{NFSU2_TR(0x52e606);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52e60a:{NFSU2_TR(0x52e60a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e60b:{NFSU2_TR(0x52e60b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52e60f:{NFSU2_TR(0x52e60f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e610:{NFSU2_TR(0x52e610);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e611:{NFSU2_TR(0x52e611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e616ull));
TAIL_STATIC(0x51d070u,51d);
}
B52e616:L52e616:{c.instructions+=6;NFSU2_TR(0x52e616);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e61a:{NFSU2_TR(0x52e61a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e61e:{NFSU2_TR(0x52e61e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e61f:{NFSU2_TR(0x52e61f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e620:{NFSU2_TR(0x52e620);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e621:{NFSU2_TR(0x52e621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e626ull));
TAIL_STATIC(0x51d380u,51d);
}
B52e626:L52e626:{c.instructions+=3;NFSU2_TR(0x52e626);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e62a:{NFSU2_TR(0x52e62a);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e62d:{NFSU2_TR(0x52e62d);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e630:L52e630:{c.instructions+=5;NFSU2_TR(0x52e630);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B52e633:{NFSU2_TR(0x52e633);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B52e636:{NFSU2_TR(0x52e636);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e638:{NFSU2_TR(0x52e638);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e63b:{NFSU2_TR(0x52e63b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e64c;}}
}
B52e63d:L52e63d:{c.instructions+=6;NFSU2_TR(0x52e63d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e63e:{NFSU2_TR(0x52e63e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52e640:{NFSU2_TR(0x52e640);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52e647:{NFSU2_TR(0x52e647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e648:{NFSU2_TR(0x52e648);
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
B52e64b:{NFSU2_TR(0x52e64b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e64c:L52e64c:{c.instructions+=7;NFSU2_TR(0x52e64c);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e64f:{NFSU2_TR(0x52e64f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B52e651:{NFSU2_TR(0x52e651);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B52e653:{NFSU2_TR(0x52e653);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B52e655:{NFSU2_TR(0x52e655);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e657:{NFSU2_TR(0x52e657);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52e65a:{NFSU2_TR(0x52e65a);
if(r1(R+514)){{goto L52e663;}}
}
B52e65c:L52e65c:{c.instructions+=1;NFSU2_TR(0x52e65c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B52e663:L52e663:{c.instructions+=4;NFSU2_TR(0x52e663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e664:{NFSU2_TR(0x52e664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e665:{NFSU2_TR(0x52e665);
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
B52e668:{NFSU2_TR(0x52e668);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e670:L52e670:{c.instructions+=14;NFSU2_TR(0x52e670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B52e673:{NFSU2_TR(0x52e673);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52e679:{NFSU2_TR(0x52e679);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e67a:{NFSU2_TR(0x52e67a);
__builtin_memmove((R+24),(R+4),4);
}
B52e67c:{NFSU2_TR(0x52e67c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B52e67e:{NFSU2_TR(0x52e67e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e680:{NFSU2_TR(0x52e680);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e686:{NFSU2_TR(0x52e686);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e689:{NFSU2_TR(0x52e689);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52e68d:{NFSU2_TR(0x52e68d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e691:{NFSU2_TR(0x52e691);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52e697:{NFSU2_TR(0x52e697);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52e69d:{NFSU2_TR(0x52e69d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52e6a1:{NFSU2_TR(0x52e6a1);
if(r1(R+518)){{goto L52e701;}}
}
B52e6a3:L52e6a3:{c.instructions+=5;NFSU2_TR(0x52e6a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52e6a7:{NFSU2_TR(0x52e6a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e6a8:{NFSU2_TR(0x52e6a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e6a9:{NFSU2_TR(0x52e6a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e6aa:{NFSU2_TR(0x52e6aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e6afull));
TAIL_STATIC(0x51d070u,51d);
}
B52e6af:L52e6af:{c.instructions+=6;NFSU2_TR(0x52e6af);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e6b3:{NFSU2_TR(0x52e6b3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52e6b7:{NFSU2_TR(0x52e6b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52e6ba:{NFSU2_TR(0x52e6ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e6bc:{NFSU2_TR(0x52e6bc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52e6bf:{NFSU2_TR(0x52e6bf);
if(r1(R+514)){{goto L52e6cd;}}
}
B52e6c1:L52e6c1:{c.instructions+=4;NFSU2_TR(0x52e6c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B52e6c8:{NFSU2_TR(0x52e6c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e6c9:{NFSU2_TR(0x52e6c9);
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
B52e6cc:{NFSU2_TR(0x52e6cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e6cd:L52e6cd:{c.instructions+=7;NFSU2_TR(0x52e6cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e6d0:{NFSU2_TR(0x52e6d0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52e6d4:{NFSU2_TR(0x52e6d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e6d5:{NFSU2_TR(0x52e6d5);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52e6d9:{NFSU2_TR(0x52e6d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e6da:{NFSU2_TR(0x52e6da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e6db:{NFSU2_TR(0x52e6db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e6e0ull));
TAIL_STATIC(0x51d070u,51d);
}
B52e6e0:L52e6e0:{c.instructions+=7;NFSU2_TR(0x52e6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e6e3:{NFSU2_TR(0x52e6e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52e6e7:{NFSU2_TR(0x52e6e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e6e8:{NFSU2_TR(0x52e6e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52e6ec:{NFSU2_TR(0x52e6ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e6ed:{NFSU2_TR(0x52e6ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e6ee:{NFSU2_TR(0x52e6ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e6f3ull));
TAIL_STATIC(0x51d730u,51d);
}
B52e6f3:L52e6f3:{c.instructions+=4;NFSU2_TR(0x52e6f3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e6f7:{NFSU2_TR(0x52e6f7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52e6fb:{NFSU2_TR(0x52e6fb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52e6ff:{NFSU2_TR(0x52e6ff);
{goto L52e751;}
}
B52e701:L52e701:{c.instructions+=5;NFSU2_TR(0x52e701);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52e705:{NFSU2_TR(0x52e705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e706:{NFSU2_TR(0x52e706);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e707:{NFSU2_TR(0x52e707);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e708:{NFSU2_TR(0x52e708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e70dull));
TAIL_STATIC(0x51d070u,51d);
}
B52e70d:L52e70d:{c.instructions+=6;NFSU2_TR(0x52e70d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e711:{NFSU2_TR(0x52e711);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52e715:{NFSU2_TR(0x52e715);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52e718:{NFSU2_TR(0x52e718);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e71a:{NFSU2_TR(0x52e71a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52e71d:{NFSU2_TR(0x52e71d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e6c1u);}goto L52e6c1;}}
}
B52e71f:L52e71f:{c.instructions+=7;NFSU2_TR(0x52e71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e722:{NFSU2_TR(0x52e722);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52e726:{NFSU2_TR(0x52e726);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e727:{NFSU2_TR(0x52e727);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52e72b:{NFSU2_TR(0x52e72b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e72c:{NFSU2_TR(0x52e72c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e72d:{NFSU2_TR(0x52e72d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e732ull));
TAIL_STATIC(0x51d070u,51d);
}
B52e732:L52e732:{c.instructions+=7;NFSU2_TR(0x52e732);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e735:{NFSU2_TR(0x52e735);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52e739:{NFSU2_TR(0x52e739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e73a:{NFSU2_TR(0x52e73a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52e73e:{NFSU2_TR(0x52e73e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e73f:{NFSU2_TR(0x52e73f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e740:{NFSU2_TR(0x52e740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e745ull));
TAIL_STATIC(0x51d730u,51d);
}
B52e745:L52e745:{c.instructions+=3;NFSU2_TR(0x52e745);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52e749:{NFSU2_TR(0x52e749);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52e74d:{NFSU2_TR(0x52e74d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52e751:L52e751:{c.instructions+=4;NFSU2_TR(0x52e751);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52e753:{NFSU2_TR(0x52e753);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B52e756:{NFSU2_TR(0x52e756);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52e759:{NFSU2_TR(0x52e759);
if(r1(R+514)){{goto L52e762;}}
}
B52e75b:L52e75b:{c.instructions+=1;NFSU2_TR(0x52e75b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0xfffffff6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52e762:L52e762:{c.instructions+=3;NFSU2_TR(0x52e762);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e763:{NFSU2_TR(0x52e763);
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
B52e766:{NFSU2_TR(0x52e766);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e770:L52e770:{c.instructions+=6;NFSU2_TR(0x52e770);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e771:{NFSU2_TR(0x52e771);
__builtin_memmove((R+24),(R+4),4);
}
B52e773:{NFSU2_TR(0x52e773);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e777:{NFSU2_TR(0x52e777);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e779:{NFSU2_TR(0x52e779);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e77a:{NFSU2_TR(0x52e77a);
if(r1(R+518)){{goto L52e781;}}
}
B52e77c:L52e77c:{c.instructions+=2;NFSU2_TR(0x52e77c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52e77f:{NFSU2_TR(0x52e77f);
{goto L52e783;}
}
B52e781:L52e781:{c.instructions+=1;NFSU2_TR(0x52e781);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52e783:L52e783:{c.instructions+=8;NFSU2_TR(0x52e783);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e786:{NFSU2_TR(0x52e786);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e789:{NFSU2_TR(0x52e789);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B52e78b:{NFSU2_TR(0x52e78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e78e:{NFSU2_TR(0x52e78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e791:{NFSU2_TR(0x52e791);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52e793:{NFSU2_TR(0x52e793);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B52e796:{NFSU2_TR(0x52e796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e79bull));
TAIL_STATIC(0x51efd0u,51e);
}
B52e79b:L52e79b:{c.instructions+=2;NFSU2_TR(0x52e79b);
__builtin_memmove((R+4),(R+24),4);
}
B52e79d:{NFSU2_TR(0x52e79d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e7a2ull));
TAIL_STATIC(0x51f560u,51f);
}
B52e7a2:L52e7a2:{c.instructions+=3;NFSU2_TR(0x52e7a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e7a5:{NFSU2_TR(0x52e7a5);
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
B52e7a7:{NFSU2_TR(0x52e7a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e7bf;}}
}
B52e7a9:L52e7a9:{c.instructions+=3;NFSU2_TR(0x52e7a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B52e7ab:{NFSU2_TR(0x52e7ab);
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
B52e7ad:{NFSU2_TR(0x52e7ad);
if(r1(R+518)){{goto L52e7ba;}}
}
B52e7af:L52e7af:{c.instructions+=5;NFSU2_TR(0x52e7af);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B52e7b2:{NFSU2_TR(0x52e7b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e7b3:{NFSU2_TR(0x52e7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e7b6:{NFSU2_TR(0x52e7b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e7b7:{NFSU2_TR(0x52e7b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e7ba:L52e7ba:{c.instructions+=2;NFSU2_TR(0x52e7ba);
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
B52e7bc:{NFSU2_TR(0x52e7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e7bf:L52e7bf:{c.instructions+=3;NFSU2_TR(0x52e7bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e7c0:{NFSU2_TR(0x52e7c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e7c1:{NFSU2_TR(0x52e7c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e7d0:L52e7d0:{c.instructions+=5;NFSU2_TR(0x52e7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e7d3:{NFSU2_TR(0x52e7d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e7d4:{NFSU2_TR(0x52e7d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e7d7:{NFSU2_TR(0x52e7d7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e7d9:{NFSU2_TR(0x52e7d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e7e1;}}
}
B52e7db:L52e7db:{c.instructions+=3;NFSU2_TR(0x52e7db);
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
B52e7dd:{NFSU2_TR(0x52e7dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e7de:{NFSU2_TR(0x52e7de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e7e1:L52e7e1:{c.instructions+=6;NFSU2_TR(0x52e7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e7e4:{NFSU2_TR(0x52e7e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e7e5:{NFSU2_TR(0x52e7e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e7e6:{NFSU2_TR(0x52e7e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e7e9:{NFSU2_TR(0x52e7e9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e7eb:{NFSU2_TR(0x52e7eb);
if(r1(R+518)){{goto L52e83d;}}
}
B52e7ed:L52e7ed:{c.instructions+=3;NFSU2_TR(0x52e7ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52e7f1:{NFSU2_TR(0x52e7f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e7f3:{NFSU2_TR(0x52e7f3);
if(r1(R+518)){{goto L52e83d;}}
}
B52e7f5:L52e7f5:{c.instructions+=2;NFSU2_TR(0x52e7f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e7f8:{NFSU2_TR(0x52e7f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52e7fa:L52e7fa:{c.instructions+=2;NFSU2_TR(0x52e7fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e7fc:{NFSU2_TR(0x52e7fc);
if(r1(R+518)){{goto L52e803;}}
}
B52e7fe:L52e7fe:{c.instructions+=2;NFSU2_TR(0x52e7fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B52e801:{NFSU2_TR(0x52e801);
{goto L52e805;}
}
B52e803:L52e803:{c.instructions+=1;NFSU2_TR(0x52e803);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B52e805:L52e805:{c.instructions+=2;NFSU2_TR(0x52e805);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e807:{NFSU2_TR(0x52e807);
if(r1(R+518)){{goto L52e80e;}}
}
B52e809:L52e809:{c.instructions+=2;NFSU2_TR(0x52e809);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52e80c:{NFSU2_TR(0x52e80c);
{goto L52e810;}
}
B52e80e:L52e80e:{c.instructions+=1;NFSU2_TR(0x52e80e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52e810:L52e810:{c.instructions+=2;NFSU2_TR(0x52e810);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e812:{NFSU2_TR(0x52e812);
if(r1(R+518)){{goto L52e83d;}}
}
B52e814:L52e814:{c.instructions+=2;NFSU2_TR(0x52e814);
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
B52e816:{NFSU2_TR(0x52e816);
if(r1(R+518)){{goto L52e83f;}}
}
B52e818:L52e818:{c.instructions+=2;NFSU2_TR(0x52e818);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e81a:{NFSU2_TR(0x52e81a);
if(r1(R+518)){{goto L52e821;}}
}
B52e81c:L52e81c:{c.instructions+=2;NFSU2_TR(0x52e81c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52e81f:{NFSU2_TR(0x52e81f);
{goto L52e823;}
}
B52e821:L52e821:{c.instructions+=1;NFSU2_TR(0x52e821);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52e823:L52e823:{c.instructions+=2;NFSU2_TR(0x52e823);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e825:{NFSU2_TR(0x52e825);
if(r1(R+518)){{goto L52e83d;}}
}
B52e827:L52e827:{c.instructions+=3;NFSU2_TR(0x52e827);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e82a:{NFSU2_TR(0x52e82a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e82c:{NFSU2_TR(0x52e82c);
if(r1(R+518)){{goto L52e836;}}
}
B52e82e:L52e82e:{c.instructions+=3;NFSU2_TR(0x52e82e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e831:{NFSU2_TR(0x52e831);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52e834:{NFSU2_TR(0x52e834);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e7fau);}goto L52e7fa;}
}
B52e836:L52e836:{c.instructions+=3;NFSU2_TR(0x52e836);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e839:{NFSU2_TR(0x52e839);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52e83b:{NFSU2_TR(0x52e83b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e7fau);}goto L52e7fa;}
}
B52e83d:L52e83d:{c.instructions+=1;NFSU2_TR(0x52e83d);
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
B52e83f:L52e83f:{c.instructions+=4;NFSU2_TR(0x52e83f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e840:{NFSU2_TR(0x52e840);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52e841:{NFSU2_TR(0x52e841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e842:{NFSU2_TR(0x52e842);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e850:L52e850:{c.instructions+=7;NFSU2_TR(0x52e850);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e853:{NFSU2_TR(0x52e853);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e854:{NFSU2_TR(0x52e854);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e855:{NFSU2_TR(0x52e855);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e858:{NFSU2_TR(0x52e858);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e85a:{NFSU2_TR(0x52e85a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e85b:{NFSU2_TR(0x52e85b);
if(r1(R+518)){{goto L52e8b8;}}
}
B52e85d:L52e85d:{c.instructions+=4;NFSU2_TR(0x52e85d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e860:{NFSU2_TR(0x52e860);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e863:{NFSU2_TR(0x52e863);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e865:{NFSU2_TR(0x52e865);
if(r1(R+518)){{goto L52e8b8;}}
}
B52e867:L52e867:{c.instructions+=3;NFSU2_TR(0x52e867);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52e86b:{NFSU2_TR(0x52e86b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e86d:{NFSU2_TR(0x52e86d);
if(r1(R+518)){{goto L52e8b8;}}
}
B52e86f:L52e86f:{c.instructions+=2;NFSU2_TR(0x52e86f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52e872:{NFSU2_TR(0x52e872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52e874:L52e874:{c.instructions+=2;NFSU2_TR(0x52e874);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e876:{NFSU2_TR(0x52e876);
if(r1(R+518)){{goto L52e87d;}}
}
B52e878:L52e878:{c.instructions+=2;NFSU2_TR(0x52e878);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52e87b:{NFSU2_TR(0x52e87b);
{goto L52e880;}
}
B52e87d:L52e87d:{c.instructions+=2;NFSU2_TR(0x52e87d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52e87f:{NFSU2_TR(0x52e87f);
}
B52e880:L52e880:{c.instructions+=2;NFSU2_TR(0x52e880);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e882:{NFSU2_TR(0x52e882);
if(r1(R+518)){{goto L52e889;}}
}
B52e884:L52e884:{c.instructions+=2;NFSU2_TR(0x52e884);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52e887:{NFSU2_TR(0x52e887);
{goto L52e88b;}
}
B52e889:L52e889:{c.instructions+=1;NFSU2_TR(0x52e889);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52e88b:L52e88b:{c.instructions+=2;NFSU2_TR(0x52e88b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e88d:{NFSU2_TR(0x52e88d);
if(r1(R+518)){{goto L52e8b8;}}
}
B52e88f:L52e88f:{c.instructions+=2;NFSU2_TR(0x52e88f);
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
B52e891:{NFSU2_TR(0x52e891);
if(r1(R+518)){{goto L52e8ba;}}
}
B52e893:L52e893:{c.instructions+=2;NFSU2_TR(0x52e893);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e895:{NFSU2_TR(0x52e895);
if(r1(R+518)){{goto L52e89c;}}
}
B52e897:L52e897:{c.instructions+=2;NFSU2_TR(0x52e897);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52e89a:{NFSU2_TR(0x52e89a);
{goto L52e89e;}
}
B52e89c:L52e89c:{c.instructions+=1;NFSU2_TR(0x52e89c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52e89e:L52e89e:{c.instructions+=2;NFSU2_TR(0x52e89e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e8a0:{NFSU2_TR(0x52e8a0);
if(r1(R+518)){{goto L52e8b8;}}
}
B52e8a2:L52e8a2:{c.instructions+=3;NFSU2_TR(0x52e8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e8a5:{NFSU2_TR(0x52e8a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e8a7:{NFSU2_TR(0x52e8a7);
if(r1(R+518)){{goto L52e8b1;}}
}
B52e8a9:L52e8a9:{c.instructions+=3;NFSU2_TR(0x52e8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e8ac:{NFSU2_TR(0x52e8ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B52e8af:{NFSU2_TR(0x52e8af);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e874u);}goto L52e874;}
}
B52e8b1:L52e8b1:{c.instructions+=3;NFSU2_TR(0x52e8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e8b4:{NFSU2_TR(0x52e8b4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B52e8b6:{NFSU2_TR(0x52e8b6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e874u);}goto L52e874;}
}
B52e8b8:L52e8b8:{c.instructions+=1;NFSU2_TR(0x52e8b8);
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
B52e8ba:L52e8ba:{c.instructions+=4;NFSU2_TR(0x52e8ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e8bb:{NFSU2_TR(0x52e8bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e8bc:{NFSU2_TR(0x52e8bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52e8bd:{NFSU2_TR(0x52e8bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e8c0:L52e8c0:{c.instructions+=10;NFSU2_TR(0x52e8c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e8c4:{NFSU2_TR(0x52e8c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e8c5:{NFSU2_TR(0x52e8c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e8c6:{NFSU2_TR(0x52e8c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e8c7:{NFSU2_TR(0x52e8c7);
__builtin_memmove((R+20),(R+4),4);
}
B52e8c9:{NFSU2_TR(0x52e8c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e8cc:{NFSU2_TR(0x52e8cc);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B52e8ce:{NFSU2_TR(0x52e8ce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e8d1:{NFSU2_TR(0x52e8d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e8d2:{NFSU2_TR(0x52e8d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e928;}}
}
B52e8d4:L52e8d4:{c.instructions+=3;NFSU2_TR(0x52e8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52e8d7:{NFSU2_TR(0x52e8d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e8d9:{NFSU2_TR(0x52e8d9);
if(r1(R+518)){{goto L52e8e0;}}
}
B52e8db:L52e8db:{c.instructions+=2;NFSU2_TR(0x52e8db);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B52e8de:{NFSU2_TR(0x52e8de);
{goto L52e8e2;}
}
B52e8e0:L52e8e0:{c.instructions+=1;NFSU2_TR(0x52e8e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52e8e2:L52e8e2:{c.instructions+=2;NFSU2_TR(0x52e8e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e8e4:{NFSU2_TR(0x52e8e4);
if(r1(R+518)){{goto L52e93f;}}
}
B52e8e6:L52e8e6:{c.instructions+=3;NFSU2_TR(0x52e8e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e8e7:{NFSU2_TR(0x52e8e7);
__builtin_memmove((R+4),(R+20),4);
}
B52e8e9:{NFSU2_TR(0x52e8e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e8eeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e7d0u);}goto L52e7d0;}
}
B52e8ee:L52e8ee:{c.instructions+=1;NFSU2_TR(0x52e8ee);
__builtin_memmove((R+28),(R+28),4);
}
B52e8f0:L52e8f0:{c.instructions+=3;NFSU2_TR(0x52e8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e8f3:{NFSU2_TR(0x52e8f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e8f5:{NFSU2_TR(0x52e8f5);
if(r1(R+518)){{goto L52e8fc;}}
}
B52e8f7:L52e8f7:{c.instructions+=2;NFSU2_TR(0x52e8f7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B52e8fa:{NFSU2_TR(0x52e8fa);
{goto L52e8fe;}
}
B52e8fc:L52e8fc:{c.instructions+=1;NFSU2_TR(0x52e8fc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52e8fe:L52e8fe:{c.instructions+=3;NFSU2_TR(0x52e8fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e901:{NFSU2_TR(0x52e901);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e903:{NFSU2_TR(0x52e903);
if(r1(R+518)){{goto L52e90a;}}
}
B52e905:L52e905:{c.instructions+=2;NFSU2_TR(0x52e905);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52e908:{NFSU2_TR(0x52e908);
{goto L52e90c;}
}
B52e90a:L52e90a:{c.instructions+=1;NFSU2_TR(0x52e90a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52e90c:L52e90c:{c.instructions+=2;NFSU2_TR(0x52e90c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e90e:{NFSU2_TR(0x52e90e);
if(r1(R+518)){{goto L52e986;}}
}
B52e910:L52e910:{c.instructions+=2;NFSU2_TR(0x52e910);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e912:{NFSU2_TR(0x52e912);
if(r1(R+518)){{goto L52e919;}}
}
B52e914:L52e914:{c.instructions+=2;NFSU2_TR(0x52e914);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52e917:{NFSU2_TR(0x52e917);
{goto L52e91b;}
}
B52e919:L52e919:{c.instructions+=1;NFSU2_TR(0x52e919);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52e91b:L52e91b:{c.instructions+=2;NFSU2_TR(0x52e91b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e91d:{NFSU2_TR(0x52e91d);
if(r1(R+518)){{goto L52e986;}}
}
B52e91f:L52e91f:{c.instructions+=3;NFSU2_TR(0x52e91f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52e922:{NFSU2_TR(0x52e922);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e924:{NFSU2_TR(0x52e924);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e8f0u);}goto L52e8f0;}}
}
B52e926:L52e926:{c.instructions+=1;NFSU2_TR(0x52e926);
{goto L52e986;}
}
B52e928:L52e928:{c.instructions+=2;NFSU2_TR(0x52e928);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e92b:{NFSU2_TR(0x52e92b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e986;}}
}
B52e92d:L52e92d:{c.instructions+=3;NFSU2_TR(0x52e92d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52e930:{NFSU2_TR(0x52e930);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e932:{NFSU2_TR(0x52e932);
if(r1(R+518)){{goto L52e939;}}
}
B52e934:L52e934:{c.instructions+=2;NFSU2_TR(0x52e934);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B52e937:{NFSU2_TR(0x52e937);
{goto L52e93b;}
}
B52e939:L52e939:{c.instructions+=1;NFSU2_TR(0x52e939);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52e93b:L52e93b:{c.instructions+=2;NFSU2_TR(0x52e93b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e93d:{NFSU2_TR(0x52e93d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52e948;}}
}
B52e93f:L52e93f:{c.instructions+=6;NFSU2_TR(0x52e93f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e940:{NFSU2_TR(0x52e940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e941:{NFSU2_TR(0x52e941);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52e942:{NFSU2_TR(0x52e942);
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
B52e944:{NFSU2_TR(0x52e944);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52e945:{NFSU2_TR(0x52e945);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e948:L52e948:{c.instructions+=3;NFSU2_TR(0x52e948);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e949:{NFSU2_TR(0x52e949);
__builtin_memmove((R+4),(R+20),4);
}
B52e94b:{NFSU2_TR(0x52e94b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e950ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e7d0u);}goto L52e7d0;}
}
B52e950:L52e950:{c.instructions+=3;NFSU2_TR(0x52e950);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e953:{NFSU2_TR(0x52e953);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e955:{NFSU2_TR(0x52e955);
if(r1(R+518)){{goto L52e95c;}}
}
B52e957:L52e957:{c.instructions+=2;NFSU2_TR(0x52e957);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B52e95a:{NFSU2_TR(0x52e95a);
{goto L52e95e;}
}
B52e95c:L52e95c:{c.instructions+=1;NFSU2_TR(0x52e95c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52e95e:L52e95e:{c.instructions+=3;NFSU2_TR(0x52e95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e961:{NFSU2_TR(0x52e961);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e963:{NFSU2_TR(0x52e963);
if(r1(R+518)){{goto L52e96a;}}
}
B52e965:L52e965:{c.instructions+=2;NFSU2_TR(0x52e965);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52e968:{NFSU2_TR(0x52e968);
{goto L52e96c;}
}
B52e96a:L52e96a:{c.instructions+=1;NFSU2_TR(0x52e96a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52e96c:L52e96c:{c.instructions+=2;NFSU2_TR(0x52e96c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e96e:{NFSU2_TR(0x52e96e);
if(r1(R+518)){{goto L52e986;}}
}
B52e970:L52e970:{c.instructions+=2;NFSU2_TR(0x52e970);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e972:{NFSU2_TR(0x52e972);
if(r1(R+518)){{goto L52e979;}}
}
B52e974:L52e974:{c.instructions+=2;NFSU2_TR(0x52e974);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52e977:{NFSU2_TR(0x52e977);
{goto L52e97b;}
}
B52e979:L52e979:{c.instructions+=1;NFSU2_TR(0x52e979);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52e97b:L52e97b:{c.instructions+=2;NFSU2_TR(0x52e97b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52e97d:{NFSU2_TR(0x52e97d);
if(r1(R+518)){{goto L52e986;}}
}
B52e97f:L52e97f:{c.instructions+=3;NFSU2_TR(0x52e97f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52e982:{NFSU2_TR(0x52e982);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e984:{NFSU2_TR(0x52e984);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e950u);}goto L52e950;}}
}
B52e986:L52e986:{c.instructions+=3;NFSU2_TR(0x52e986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e989:{NFSU2_TR(0x52e989);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B52e98b:{NFSU2_TR(0x52e98b);
if(r1(R+518)){{goto L52e9b0;}}
}
B52e98d:L52e98d:{c.instructions+=4;NFSU2_TR(0x52e98d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52e990:{NFSU2_TR(0x52e990);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e995:{NFSU2_TR(0x52e995);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e996:{NFSU2_TR(0x52e996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e99bull));
TAIL_STATIC(0x51ee80u,51e);
}
B52e99b:L52e99b:{c.instructions+=6;NFSU2_TR(0x52e99b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52e99e:{NFSU2_TR(0x52e99e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52e9a1:{NFSU2_TR(0x52e9a1);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e9a6:{NFSU2_TR(0x52e9a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e9a7:{NFSU2_TR(0x52e9a7);
__builtin_memmove((R+4),(R+24),4);
}
B52e9a9:{NFSU2_TR(0x52e9a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e9aeull));
TAIL_STATIC(0x51ee80u,51e);
}
B52e9ae:L52e9ae:{c.instructions+=1;NFSU2_TR(0x52e9ae);
w1(R+12,u8(0x1ull));
}
B52e9b0:L52e9b0:{c.instructions+=6;NFSU2_TR(0x52e9b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52e9b1:{NFSU2_TR(0x52e9b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52e9b2:{NFSU2_TR(0x52e9b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52e9b3:{NFSU2_TR(0x52e9b3);
__builtin_memmove((R+0),(R+12),1);
}
B52e9b5:{NFSU2_TR(0x52e9b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52e9b6:{NFSU2_TR(0x52e9b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52e9c0:L52e9c0:{c.instructions+=7;NFSU2_TR(0x52e9c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e9c1:{NFSU2_TR(0x52e9c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e9c2:{NFSU2_TR(0x52e9c2);
__builtin_memmove((R+20),(R+4),4);
}
B52e9c4:{NFSU2_TR(0x52e9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52e9c7:{NFSU2_TR(0x52e9c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e9c9:{NFSU2_TR(0x52e9c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e9ca:{NFSU2_TR(0x52e9ca);
if(r1(R+518)){{goto L52e9d1;}}
}
B52e9cc:L52e9cc:{c.instructions+=2;NFSU2_TR(0x52e9cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B52e9cf:{NFSU2_TR(0x52e9cf);
{goto L52e9d3;}
}
B52e9d1:L52e9d1:{c.instructions+=1;NFSU2_TR(0x52e9d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52e9d3:L52e9d3:{c.instructions+=3;NFSU2_TR(0x52e9d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52e9d4:{NFSU2_TR(0x52e9d4);
__builtin_memmove((R+4),(R+20),4);
}
B52e9d6:{NFSU2_TR(0x52e9d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52e9dbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e7d0u);}goto L52e7d0;}
}
B52e9db:L52e9db:{c.instructions+=1;NFSU2_TR(0x52e9db);
__builtin_memmove((R+28),(R+0),4);
}
B52e9dd:L52e9dd:{c.instructions+=2;NFSU2_TR(0x52e9dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e9df:{NFSU2_TR(0x52e9df);
if(r1(R+518)){{goto L52e9e6;}}
}
B52e9e1:L52e9e1:{c.instructions+=2;NFSU2_TR(0x52e9e1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B52e9e4:{NFSU2_TR(0x52e9e4);
{goto L52e9e8;}
}
B52e9e6:L52e9e6:{c.instructions+=1;NFSU2_TR(0x52e9e6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52e9e8:L52e9e8:{c.instructions+=3;NFSU2_TR(0x52e9e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52e9eb:{NFSU2_TR(0x52e9eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52e9ed:{NFSU2_TR(0x52e9ed);
if(r1(R+518)){{goto L52e9f4;}}
}
B52e9ef:L52e9ef:{c.instructions+=2;NFSU2_TR(0x52e9ef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52e9f2:{NFSU2_TR(0x52e9f2);
{goto L52e9f6;}
}
B52e9f4:L52e9f4:{c.instructions+=1;NFSU2_TR(0x52e9f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52e9f6:L52e9f6:{c.instructions+=2;NFSU2_TR(0x52e9f6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B52e9f8:{NFSU2_TR(0x52e9f8);
if(r1(R+518)){{goto L52ea42;}}
}
B52e9fa:L52e9fa:{c.instructions+=3;NFSU2_TR(0x52e9fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52e9fd:{NFSU2_TR(0x52e9fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52e9ff:{NFSU2_TR(0x52e9ff);
if(r1(R+518)){{goto L52ea1a;}}
}
B52ea01:L52ea01:{c.instructions+=2;NFSU2_TR(0x52ea01);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52ea04:{NFSU2_TR(0x52ea04);
if(r1(R+518)){{goto L52ea2c;}}
}
B52ea06:L52ea06:{c.instructions+=4;NFSU2_TR(0x52ea06);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ea08:{NFSU2_TR(0x52ea08);
u8 U[4];
w4(U+0,u32(0x79b8c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ea0d:{NFSU2_TR(0x52ea0d);
__builtin_memmove((R+4),(R+24),4);
}
B52ea0f:{NFSU2_TR(0x52ea0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ea14ull));
TAIL_STATIC(0x51ee80u,51e);
}
B52ea14:L52ea14:{c.instructions+=2;NFSU2_TR(0x52ea14);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52ea18:{NFSU2_TR(0x52ea18);
{goto L52ea2c;}
}
B52ea1a:L52ea1a:{c.instructions+=4;NFSU2_TR(0x52ea1a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ea1c:{NFSU2_TR(0x52ea1c);
u8 U[4];
w4(U+0,u32(0x78f570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ea21:{NFSU2_TR(0x52ea21);
__builtin_memmove((R+4),(R+24),4);
}
B52ea23:{NFSU2_TR(0x52ea23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ea28ull));
TAIL_STATIC(0x51ee80u,51e);
}
B52ea28:L52ea28:{c.instructions+=1;NFSU2_TR(0x52ea28);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52ea2c:L52ea2c:{c.instructions+=3;NFSU2_TR(0x52ea2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ea2f:{NFSU2_TR(0x52ea2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ea31:{NFSU2_TR(0x52ea31);
if(r1(R+518)){{goto L52ea3b;}}
}
B52ea33:L52ea33:{c.instructions+=3;NFSU2_TR(0x52ea33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52ea36:{NFSU2_TR(0x52ea36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ea39:{NFSU2_TR(0x52ea39);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e9ddu);}goto L52e9dd;}
}
B52ea3b:L52ea3b:{c.instructions+=3;NFSU2_TR(0x52ea3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52ea3e:{NFSU2_TR(0x52ea3e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B52ea40:{NFSU2_TR(0x52ea40);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e9ddu);}goto L52e9dd;}
}
B52ea42:L52ea42:{c.instructions+=4;NFSU2_TR(0x52ea42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ea43:{NFSU2_TR(0x52ea43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ea44:{NFSU2_TR(0x52ea44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52ea45:{NFSU2_TR(0x52ea45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ea50:L52ea50:{c.instructions+=5;NFSU2_TR(0x52ea50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ea54:{NFSU2_TR(0x52ea54);
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
B52ea56:{NFSU2_TR(0x52ea56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ea57:{NFSU2_TR(0x52ea57);
__builtin_memmove((R+24),(R+4),4);
}
B52ea59:{NFSU2_TR(0x52ea59);
if(r1(R+518)){{goto L52ea8b;}}
}
B52ea5b:L52ea5b:{c.instructions+=4;NFSU2_TR(0x52ea5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ea5e:{NFSU2_TR(0x52ea5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52ea61:{NFSU2_TR(0x52ea61);
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
B52ea63:{NFSU2_TR(0x52ea63);
if(r1(R+518)){{goto L52ea8b;}}
}
B52ea65:L52ea65:{c.instructions+=4;NFSU2_TR(0x52ea65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ea68:{NFSU2_TR(0x52ea68);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52ea6b:{NFSU2_TR(0x52ea6b);
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
B52ea6d:{NFSU2_TR(0x52ea6d);
if(r1(R+518)){{goto L52ea8b;}}
}
B52ea6f:L52ea6f:{c.instructions+=4;NFSU2_TR(0x52ea6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ea70:{NFSU2_TR(0x52ea70);
__builtin_memmove((R+4),(R+24),4);
}
B52ea72:{NFSU2_TR(0x52ea72);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52ea76:{NFSU2_TR(0x52ea76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ea7bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52e850u);}goto L52e850;}
}
B52ea7b:L52ea7b:{c.instructions+=2;NFSU2_TR(0x52ea7b);
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
B52ea7d:{NFSU2_TR(0x52ea7d);
if(r1(R+518)){{goto L52ea8b;}}
}
B52ea7f:L52ea7f:{c.instructions+=2;NFSU2_TR(0x52ea7f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
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
B52ea82:{NFSU2_TR(0x52ea82);
if(r1(R+518)){{goto L52ea8b;}}
}
B52ea84:L52ea84:{c.instructions+=2;NFSU2_TR(0x52ea84);
__builtin_memmove((R+4),(R+0),4);
}
B52ea86:{NFSU2_TR(0x52ea86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ea8bull));
TAIL_STATIC(0x5276b0u,527);
}
B52ea8b:L52ea8b:{c.instructions+=2;NFSU2_TR(0x52ea8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ea8c:{NFSU2_TR(0x52ea8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ea90:L52ea90:{c.instructions+=17;NFSU2_TR(0x52ea90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ea92:{NFSU2_TR(0x52ea92);
u8 U[4];
w4(U+0,u32(0x7779bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ea97:{NFSU2_TR(0x52ea97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ea9d:{NFSU2_TR(0x52ea9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ea9e:{NFSU2_TR(0x52ea9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52eaa5:{NFSU2_TR(0x52eaa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eaa6:{NFSU2_TR(0x52eaa6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eaa7:{NFSU2_TR(0x52eaa7);
__builtin_memmove((R+12),(R+4),4);
}
B52eaa9:{NFSU2_TR(0x52eaa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eaaa:{NFSU2_TR(0x52eaaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52eaae:{NFSU2_TR(0x52eaae);
u8 U[4];
w4(U+0,u32(0x79b948ull));
s4(u32(r4(R+12)),r4(U+0));
}
B52eab4:{NFSU2_TR(0x52eab4);
{u32 ea_=u32(r4(R+12)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52eab7:{NFSU2_TR(0x52eab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52eaba:{NFSU2_TR(0x52eaba);
{u32 ea_=u32(r4(R+12)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52eabd:{NFSU2_TR(0x52eabd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52eabf:{NFSU2_TR(0x52eabf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52eac7:{NFSU2_TR(0x52eac7);
if(r1(R+518)){{goto L52eaf8;}}
}
B52eac9:L52eac9:{c.instructions+=4;NFSU2_TR(0x52eac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52eacc:{NFSU2_TR(0x52eacc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52eacd:{NFSU2_TR(0x52eacd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ead0:{NFSU2_TR(0x52ead0);
if(r1(R+518)){{goto L52eadc;}}
}
B52ead2:L52ead2:{c.instructions+=2;NFSU2_TR(0x52ead2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52ead5:{NFSU2_TR(0x52ead5);
if(r1(R+518)){{goto L52eadc;}}
}
B52ead7:L52ead7:{c.instructions+=2;NFSU2_TR(0x52ead7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52eada:{NFSU2_TR(0x52eada);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52eae4;}}
}
B52eadc:L52eadc:{c.instructions+=3;NFSU2_TR(0x52eadc);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52eadf:{NFSU2_TR(0x52eadf);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B52eae1:{NFSU2_TR(0x52eae1);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52eae4:L52eae4:{c.instructions+=6;NFSU2_TR(0x52eae4);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52eae7:{NFSU2_TR(0x52eae7);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52eaea:{NFSU2_TR(0x52eaea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52eaed:{NFSU2_TR(0x52eaed);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B52eaf3:{NFSU2_TR(0x52eaf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52eaf6:{NFSU2_TR(0x52eaf6);
{goto L52eafc;}
}
B52eaf8:L52eaf8:{c.instructions+=2;NFSU2_TR(0x52eaf8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52eafa:{NFSU2_TR(0x52eafa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52eafc:L52eafc:{c.instructions+=4;NFSU2_TR(0x52eafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52eaff:{NFSU2_TR(0x52eaff);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52eb02:{NFSU2_TR(0x52eb02);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52eb04:{NFSU2_TR(0x52eb04);
if(r1(R+518)){{goto L52eb61;}}
}
B52eb06:L52eb06:{c.instructions+=1;NFSU2_TR(0x52eb06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eb07:L52eb07:{c.instructions+=11;NFSU2_TR(0x52eb07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52eb09:{NFSU2_TR(0x52eb09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52eb0b:{NFSU2_TR(0x52eb0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52eb0e:{NFSU2_TR(0x52eb0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B52eb10:{NFSU2_TR(0x52eb10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52eb13:{NFSU2_TR(0x52eb13);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52eb16:{NFSU2_TR(0x52eb16);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52eb19:{NFSU2_TR(0x52eb19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52eb1c:{NFSU2_TR(0x52eb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52eb1f:{NFSU2_TR(0x52eb1f);
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
B52eb21:{NFSU2_TR(0x52eb21);
if(r1(R+518)){{goto L52eb52;}}
}
B52eb23:L52eb23:{c.instructions+=4;NFSU2_TR(0x52eb23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52eb26:{NFSU2_TR(0x52eb26);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B52eb27:{NFSU2_TR(0x52eb27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52eb2a:{NFSU2_TR(0x52eb2a);
if(r1(R+518)){{goto L52eb36;}}
}
B52eb2c:L52eb2c:{c.instructions+=2;NFSU2_TR(0x52eb2c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B52eb2f:{NFSU2_TR(0x52eb2f);
if(r1(R+518)){{goto L52eb36;}}
}
B52eb31:L52eb31:{c.instructions+=2;NFSU2_TR(0x52eb31);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B52eb34:{NFSU2_TR(0x52eb34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52eb3e;}}
}
B52eb36:L52eb36:{c.instructions+=3;NFSU2_TR(0x52eb36);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52eb39:{NFSU2_TR(0x52eb39);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B52eb3b:{NFSU2_TR(0x52eb3b);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52eb3e:L52eb3e:{c.instructions+=6;NFSU2_TR(0x52eb3e);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52eb41:{NFSU2_TR(0x52eb41);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52eb44:{NFSU2_TR(0x52eb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52eb47:{NFSU2_TR(0x52eb47);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52eb4d:{NFSU2_TR(0x52eb4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52eb50:{NFSU2_TR(0x52eb50);
{goto L52eb56;}
}
B52eb52:L52eb52:{c.instructions+=2;NFSU2_TR(0x52eb52);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52eb54:{NFSU2_TR(0x52eb54);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52eb56:L52eb56:{c.instructions+=3;NFSU2_TR(0x52eb56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52eb58:{NFSU2_TR(0x52eb58);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eb5a:{NFSU2_TR(0x52eb5a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52eb5cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B52eb5c:L52eb5c:{c.instructions+=2;NFSU2_TR(0x52eb5c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B52eb5e:{NFSU2_TR(0x52eb5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52eb07u);}goto L52eb07;}}
}
B52eb60:L52eb60:{c.instructions+=1;NFSU2_TR(0x52eb60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52eb61:L52eb61:{c.instructions+=3;NFSU2_TR(0x52eb61);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52eb64:{NFSU2_TR(0x52eb64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eb65:{NFSU2_TR(0x52eb65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52eb6aull));
TAIL_STATIC(0x575630u,575);
}
B52eb6a:L52eb6a:{c.instructions+=4;NFSU2_TR(0x52eb6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52eb6d:{NFSU2_TR(0x52eb6d);
__builtin_memmove((R+4),(R+24),4);
}
B52eb6f:{NFSU2_TR(0x52eb6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B52eb77:{NFSU2_TR(0x52eb77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52eb7cull));
TAIL_STATIC(0x4358e0u,435);
}
B52eb7c:L52eb7c:{c.instructions+=6;NFSU2_TR(0x52eb7c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52eb80:{NFSU2_TR(0x52eb80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52eb81:{NFSU2_TR(0x52eb81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52eb82:{NFSU2_TR(0x52eb82);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52eb89:{NFSU2_TR(0x52eb89);
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
B52eb8c:{NFSU2_TR(0x52eb8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52eb90:L52eb90:{c.instructions+=10;NFSU2_TR(0x52eb90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eb91:{NFSU2_TR(0x52eb91);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B52eb95:{NFSU2_TR(0x52eb95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eb96:{NFSU2_TR(0x52eb96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eb97:{NFSU2_TR(0x52eb97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eb98:{NFSU2_TR(0x52eb98);
__builtin_memmove((R+28),(R+4),4);
}
B52eb9a:{NFSU2_TR(0x52eb9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52eb9d:{NFSU2_TR(0x52eb9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eb9e:{NFSU2_TR(0x52eb9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52eba1:{NFSU2_TR(0x52eba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52eba6ull));
TAIL_STATIC(0x52cef0u,52c);
}
B52eba6:L52eba6:{c.instructions+=5;NFSU2_TR(0x52eba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52eba9:{NFSU2_TR(0x52eba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52ebac:{NFSU2_TR(0x52ebac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52ebaf:{NFSU2_TR(0x52ebaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ebb0:{NFSU2_TR(0x52ebb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ebb5ull));
TAIL_STATIC(0x505450u,505);
}
B52ebb5:L52ebb5:{c.instructions+=3;NFSU2_TR(0x52ebb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52ebb8:{NFSU2_TR(0x52ebb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ebbc:{NFSU2_TR(0x52ebbc);
__builtin_memmove((R+16),(R+16),4);
}
B52ebc0:L52ebc0:{c.instructions+=3;NFSU2_TR(0x52ebc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ebc4:{NFSU2_TR(0x52ebc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52ebc7:{NFSU2_TR(0x52ebc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ec0f;}}
}
B52ebc9:L52ebc9:{c.instructions+=2;NFSU2_TR(0x52ebc9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52ebcb:{NFSU2_TR(0x52ebcb);
if(r1(R+518)){{goto L52ebd8;}}
}
B52ebcd:L52ebcd:{c.instructions+=2;NFSU2_TR(0x52ebcd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ebce:{NFSU2_TR(0x52ebce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ebd3ull));
TAIL_STATIC(0x50ca50u,50c);
}
B52ebd3:L52ebd3:{c.instructions+=2;NFSU2_TR(0x52ebd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52ebd6:{NFSU2_TR(0x52ebd6);
{goto L52ec0f;}
}
B52ebd8:L52ebd8:{c.instructions+=3;NFSU2_TR(0x52ebd8);
__builtin_memmove((R+0),gp(0x8384d4),4);
}
B52ebdd:{NFSU2_TR(0x52ebdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ebdf:{NFSU2_TR(0x52ebdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ebe7;}}
}
B52ebe1:L52ebe1:{c.instructions+=2;NFSU2_TR(0x52ebe1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B52ebe5:{NFSU2_TR(0x52ebe5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ebee;}}
}
B52ebe7:L52ebe7:{c.instructions+=1;NFSU2_TR(0x52ebe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B52ebee:L52ebee:{c.instructions+=2;NFSU2_TR(0x52ebee);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52ebf2:{NFSU2_TR(0x52ebf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ec0f;}}
}
B52ebf4:L52ebf4:{c.instructions+=4;NFSU2_TR(0x52ebf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ebf7:{NFSU2_TR(0x52ebf7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ebf9:{NFSU2_TR(0x52ebf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ebfc:{NFSU2_TR(0x52ebfc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52ec0f;}}
}
B52ebfe:L52ebfe:{c.instructions+=1;NFSU2_TR(0x52ebfe);
__builtin_memmove((R+28),(R+0),4);
}
B52ec00:L52ec00:{c.instructions+=2;NFSU2_TR(0x52ec00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ec01:{NFSU2_TR(0x52ec01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ec06ull));
TAIL_STATIC(0x50ca00u,50c);
}
B52ec06:L52ec06:{c.instructions+=4;NFSU2_TR(0x52ec06);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ec09:{NFSU2_TR(0x52ec09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52ec0c:{NFSU2_TR(0x52ec0c);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B52ec0d:{NFSU2_TR(0x52ec0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ec00u);}goto L52ec00;}}
}
B52ec0f:L52ec0f:{c.instructions+=2;NFSU2_TR(0x52ec0f);
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
B52ec11:{NFSU2_TR(0x52ec11);
if(r1(R+518)){{goto L52ec18;}}
}
B52ec13:L52ec13:{c.instructions+=2;NFSU2_TR(0x52ec13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52ec16:{NFSU2_TR(0x52ec16);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ebc0u);}goto L52ebc0;}
}
B52ec18:L52ec18:{c.instructions+=5;NFSU2_TR(0x52ec18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ec19:{NFSU2_TR(0x52ec19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ec1a:{NFSU2_TR(0x52ec1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52ec1b:{NFSU2_TR(0x52ec1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52ec1c:{NFSU2_TR(0x52ec1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ec20:L52ec20:{c.instructions+=7;NFSU2_TR(0x52ec20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ec21:{NFSU2_TR(0x52ec21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ec22:{NFSU2_TR(0x52ec22);
__builtin_memmove((R+24),(R+4),4);
}
B52ec24:{NFSU2_TR(0x52ec24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ec27:{NFSU2_TR(0x52ec27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ec28:{NFSU2_TR(0x52ec28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ec29:{NFSU2_TR(0x52ec29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ec2eull));
TAIL_STATIC(0x52cef0u,52c);
}
B52ec2e:L52ec2e:{c.instructions+=5;NFSU2_TR(0x52ec2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ec32:{NFSU2_TR(0x52ec32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52ec35:{NFSU2_TR(0x52ec35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52ec38:{NFSU2_TR(0x52ec38);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ec3a:{NFSU2_TR(0x52ec3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ec41;}}
}
B52ec3c:L52ec3c:{c.instructions+=2;NFSU2_TR(0x52ec3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ec3f:{NFSU2_TR(0x52ec3f);
{goto L52ec44;}
}
B52ec41:L52ec41:{c.instructions+=1;NFSU2_TR(0x52ec41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ec44:L52ec44:{c.instructions+=1;NFSU2_TR(0x52ec44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52ec47:L52ec47:{c.instructions+=4;NFSU2_TR(0x52ec47);
__builtin_memmove((R+24),(R+28),4);
}
B52ec49:{NFSU2_TR(0x52ec49);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B52ec4c:{NFSU2_TR(0x52ec4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ec4e:{NFSU2_TR(0x52ec4e);
if(r1(R+518)){{goto L52ec73;}}
}
B52ec50:L52ec50:{c.instructions+=3;NFSU2_TR(0x52ec50);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B52ec52:{NFSU2_TR(0x52ec52);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52ec54:{NFSU2_TR(0x52ec54);
if(r1(R+518)){{goto L52ec73;}}
}
B52ec56:L52ec56:{c.instructions+=3;NFSU2_TR(0x52ec56);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B52ec59:{NFSU2_TR(0x52ec59);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B52ec5c:{NFSU2_TR(0x52ec5c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L52ec66;}}
}
B52ec5e:L52ec5e:{c.instructions+=2;NFSU2_TR(0x52ec5e);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B52ec61:{NFSU2_TR(0x52ec61);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L52ec66;}}
}
B52ec63:L52ec63:{c.instructions+=1;NFSU2_TR(0x52ec63);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0xe0ull))));
}
B52ec66:L52ec66:{c.instructions+=6;NFSU2_TR(0x52ec66);
w4(R+4,u32(r1(R+4)));
}
B52ec69:{NFSU2_TR(0x52ec69);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B52ec6b:{NFSU2_TR(0x52ec6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52ec6e:{NFSU2_TR(0x52ec6e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B52ec6f:{NFSU2_TR(0x52ec6f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52ec71:{NFSU2_TR(0x52ec71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ec56u);}goto L52ec56;}}
}
B52ec73:L52ec73:{c.instructions+=2;NFSU2_TR(0x52ec73);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B52ec76:{NFSU2_TR(0x52ec76);
if(r1(R+518)){{goto L52ec83;}}
}
B52ec78:L52ec78:{c.instructions+=2;NFSU2_TR(0x52ec78);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ec7a:{NFSU2_TR(0x52ec7a);
if(r1(R+518)){{goto L52ec81;}}
}
B52ec7c:L52ec7c:{c.instructions+=2;NFSU2_TR(0x52ec7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ec7f:{NFSU2_TR(0x52ec7f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ec47u);}goto L52ec47;}
}
B52ec81:L52ec81:{c.instructions+=1;NFSU2_TR(0x52ec81);
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
B52ec83:L52ec83:{c.instructions+=4;NFSU2_TR(0x52ec83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ec84:{NFSU2_TR(0x52ec84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ec85:{NFSU2_TR(0x52ec85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52ec86:{NFSU2_TR(0x52ec86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ec90:L52ec90:{c.instructions+=7;NFSU2_TR(0x52ec90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ec91:{NFSU2_TR(0x52ec91);
__builtin_memmove((R+24),(R+4),4);
}
B52ec93:{NFSU2_TR(0x52ec93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ec96:{NFSU2_TR(0x52ec96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ec97:{NFSU2_TR(0x52ec97);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B52ec99:{NFSU2_TR(0x52ec99);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ec9b:{NFSU2_TR(0x52ec9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52eca4;}}
}
B52ec9d:L52ec9d:{c.instructions+=4;NFSU2_TR(0x52ec9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ec9e:{NFSU2_TR(0x52ec9e);
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
B52eca0:{NFSU2_TR(0x52eca0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52eca1:{NFSU2_TR(0x52eca1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52eca4:L52eca4:{c.instructions+=2;NFSU2_TR(0x52eca4);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eca6:{NFSU2_TR(0x52eca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ecabull));
TAIL_STATIC(0x575620u,575);
}
B52ecab:L52ecab:{c.instructions+=3;NFSU2_TR(0x52ecab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52ecae:{NFSU2_TR(0x52ecae);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ecb0:{NFSU2_TR(0x52ecb0);
if(r1(R+518)){{goto L52ecdd;}}
}
B52ecb2:L52ecb2:{c.instructions+=12;NFSU2_TR(0x52ecb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ecb5:{NFSU2_TR(0x52ecb5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ecb9:{NFSU2_TR(0x52ecb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ecbc:{NFSU2_TR(0x52ecbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ecbf:{NFSU2_TR(0x52ecbf);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+0)),r4(U+0));
}
B52ecc5:{NFSU2_TR(0x52ecc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ecc8:{NFSU2_TR(0x52ecc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52eccb:{NFSU2_TR(0x52eccb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52eccf:{NFSU2_TR(0x52eccf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52ecd3:{NFSU2_TR(0x52ecd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52ecd7:{NFSU2_TR(0x52ecd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52ecdb:{NFSU2_TR(0x52ecdb);
__builtin_memmove((R+28),(R+0),4);
}
B52ecdd:L52ecdd:{c.instructions+=5;NFSU2_TR(0x52ecdd);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52ece1:{NFSU2_TR(0x52ece1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52ece4:{NFSU2_TR(0x52ece4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52ece7:{NFSU2_TR(0x52ece7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52ece9:{NFSU2_TR(0x52ece9);
if(r1(R+518)){{goto L52ecf3;}}
}
B52eceb:L52eceb:{c.instructions+=3;NFSU2_TR(0x52eceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ecee:{NFSU2_TR(0x52ecee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ecf1:{NFSU2_TR(0x52ecf1);
{goto L52ecf9;}
}
B52ecf3:L52ecf3:{c.instructions+=2;NFSU2_TR(0x52ecf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ecf6:{NFSU2_TR(0x52ecf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ecf9:L52ecf9:{c.instructions+=3;NFSU2_TR(0x52ecf9);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52ecfd:{NFSU2_TR(0x52ecfd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52ecff:{NFSU2_TR(0x52ecff);
if(r1(R+518)){{goto L52ed07;}}
}
B52ed01:L52ed01:{c.instructions+=2;NFSU2_TR(0x52ed01);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ed05:{NFSU2_TR(0x52ed05);
{goto L52ed13;}
}
B52ed07:L52ed07:{c.instructions+=3;NFSU2_TR(0x52ed07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ed0a:{NFSU2_TR(0x52ed0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ed0b:{NFSU2_TR(0x52ed0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ed10ull));
TAIL_STATIC(0x495570u,495);
}
B52ed10:L52ed10:{c.instructions+=1;NFSU2_TR(0x52ed10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52ed13:L52ed13:{c.instructions+=12;NFSU2_TR(0x52ed13);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B52ed17:{NFSU2_TR(0x52ed17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ed18:{NFSU2_TR(0x52ed18);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ed19:{NFSU2_TR(0x52ed19);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52ed1c:{NFSU2_TR(0x52ed1c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ed1d:{NFSU2_TR(0x52ed1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ed20:{NFSU2_TR(0x52ed20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ed23:{NFSU2_TR(0x52ed23);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52ed26:{NFSU2_TR(0x52ed26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ed27:{NFSU2_TR(0x52ed27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ed28:{NFSU2_TR(0x52ed28);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52ed2b:{NFSU2_TR(0x52ed2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ed30ull));
TAIL_STATIC(0x51d730u,51d);
}
B52ed30:L52ed30:{c.instructions+=4;NFSU2_TR(0x52ed30);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52ed33:{NFSU2_TR(0x52ed33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52ed36:{NFSU2_TR(0x52ed36);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52ed38:{NFSU2_TR(0x52ed38);
if(r1(R+518)){{goto L52ed3e;}}
}
B52ed3a:L52ed3a:{c.instructions+=2;NFSU2_TR(0x52ed3a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ed3c:{NFSU2_TR(0x52ed3c);
{goto L52ed41;}
}
B52ed3e:L52ed3e:{c.instructions+=1;NFSU2_TR(0x52ed3e);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ed41:L52ed41:{c.instructions+=16;NFSU2_TR(0x52ed41);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52ed44:{NFSU2_TR(0x52ed44);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52ed47:{NFSU2_TR(0x52ed47);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52ed4a:{NFSU2_TR(0x52ed4a);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52ed4d:{NFSU2_TR(0x52ed4d);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ed50:{NFSU2_TR(0x52ed50);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52ed53:{NFSU2_TR(0x52ed53);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52ed56:{NFSU2_TR(0x52ed56);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ed59:{NFSU2_TR(0x52ed59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B52ed5b:{NFSU2_TR(0x52ed5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ed5e:{NFSU2_TR(0x52ed5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52ed60:{NFSU2_TR(0x52ed60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ed63:{NFSU2_TR(0x52ed63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ed66:{NFSU2_TR(0x52ed66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ed67:{NFSU2_TR(0x52ed67);
__builtin_memmove((R+4),(R+24),4);
}
B52ed69:{NFSU2_TR(0x52ed69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ed6eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ec20u);}goto L52ec20;}
}
B52ed6e:L52ed6e:{c.instructions+=7;NFSU2_TR(0x52ed6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52ed6f:{NFSU2_TR(0x52ed6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ed72:{NFSU2_TR(0x52ed72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ed75:{NFSU2_TR(0x52ed75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52ed76:{NFSU2_TR(0x52ed76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ed77:{NFSU2_TR(0x52ed77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ed78:{NFSU2_TR(0x52ed78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ed80:L52ed80:{c.instructions+=5;NFSU2_TR(0x52ed80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ed81:{NFSU2_TR(0x52ed81);
__builtin_memmove((R+24),(R+4),4);
}
B52ed83:{NFSU2_TR(0x52ed83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ed86:{NFSU2_TR(0x52ed86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ed88:{NFSU2_TR(0x52ed88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ed9e;}}
}
B52ed8a:L52ed8a:{c.instructions+=3;NFSU2_TR(0x52ed8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ed8e:{NFSU2_TR(0x52ed8e);
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
B52ed90:{NFSU2_TR(0x52ed90);
if(r1(R+518)){{goto L52ed98;}}
}
B52ed92:L52ed92:{c.instructions+=3;NFSU2_TR(0x52ed92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52ed94:{NFSU2_TR(0x52ed94);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ed96:{NFSU2_TR(0x52ed96);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ed98ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B52ed98:L52ed98:{c.instructions+=3;NFSU2_TR(0x52ed98);
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
B52ed9a:{NFSU2_TR(0x52ed9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ed9b:{NFSU2_TR(0x52ed9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ed9e:L52ed9e:{c.instructions+=8;NFSU2_TR(0x52ed9e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ed9f:{NFSU2_TR(0x52ed9f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eda0:{NFSU2_TR(0x52eda0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eda1:{NFSU2_TR(0x52eda1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52eda5:{NFSU2_TR(0x52eda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52eda8:{NFSU2_TR(0x52eda8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52edab:{NFSU2_TR(0x52edab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52edad:{NFSU2_TR(0x52edad);
if(r1(R+518)){{goto L52edb7;}}
}
B52edaf:L52edaf:{c.instructions+=3;NFSU2_TR(0x52edaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52edb2:{NFSU2_TR(0x52edb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52edb5:{NFSU2_TR(0x52edb5);
{goto L52edbd;}
}
B52edb7:L52edb7:{c.instructions+=2;NFSU2_TR(0x52edb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52edba:{NFSU2_TR(0x52edba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52edbd:L52edbd:{c.instructions+=3;NFSU2_TR(0x52edbd);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52edc1:{NFSU2_TR(0x52edc1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52edc3:{NFSU2_TR(0x52edc3);
if(r1(R+518)){{goto L52edcb;}}
}
B52edc5:L52edc5:{c.instructions+=2;NFSU2_TR(0x52edc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52edc9:{NFSU2_TR(0x52edc9);
{goto L52edd7;}
}
B52edcb:L52edcb:{c.instructions+=3;NFSU2_TR(0x52edcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52edce:{NFSU2_TR(0x52edce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52edcf:{NFSU2_TR(0x52edcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52edd4ull));
TAIL_STATIC(0x495570u,495);
}
B52edd4:L52edd4:{c.instructions+=1;NFSU2_TR(0x52edd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52edd7:L52edd7:{c.instructions+=8;NFSU2_TR(0x52edd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52edda:{NFSU2_TR(0x52edda);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52eddd:{NFSU2_TR(0x52eddd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52edde:{NFSU2_TR(0x52edde);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52ede1:{NFSU2_TR(0x52ede1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ede2:{NFSU2_TR(0x52ede2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ede3:{NFSU2_TR(0x52ede3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ede6:{NFSU2_TR(0x52ede6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52edebull));
TAIL_STATIC(0x51d730u,51d);
}
B52edeb:L52edeb:{c.instructions+=4;NFSU2_TR(0x52edeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52edee:{NFSU2_TR(0x52edee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52edf1:{NFSU2_TR(0x52edf1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52edf3:{NFSU2_TR(0x52edf3);
if(r1(R+518)){{goto L52edfd;}}
}
B52edf5:L52edf5:{c.instructions+=3;NFSU2_TR(0x52edf5);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52edf8:{NFSU2_TR(0x52edf8);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52edfb:{NFSU2_TR(0x52edfb);
{goto L52ee02;}
}
B52edfd:L52edfd:{c.instructions+=2;NFSU2_TR(0x52edfd);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ee00:{NFSU2_TR(0x52ee00);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52ee02:L52ee02:{c.instructions+=15;NFSU2_TR(0x52ee02);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52ee05:{NFSU2_TR(0x52ee05);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52ee08:{NFSU2_TR(0x52ee08);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ee0b:{NFSU2_TR(0x52ee0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52ee0e:{NFSU2_TR(0x52ee0e);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52ee11:{NFSU2_TR(0x52ee11);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52ee14:{NFSU2_TR(0x52ee14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ee17:{NFSU2_TR(0x52ee17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B52ee19:{NFSU2_TR(0x52ee19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ee1c:{NFSU2_TR(0x52ee1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52ee1e:{NFSU2_TR(0x52ee1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ee21:{NFSU2_TR(0x52ee21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ee24:{NFSU2_TR(0x52ee24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ee25:{NFSU2_TR(0x52ee25);
__builtin_memmove((R+4),(R+24),4);
}
B52ee27:{NFSU2_TR(0x52ee27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ee2cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ec20u);}goto L52ec20;}
}
B52ee2c:L52ee2c:{c.instructions+=7;NFSU2_TR(0x52ee2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ee2f:{NFSU2_TR(0x52ee2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ee32:{NFSU2_TR(0x52ee32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ee33:{NFSU2_TR(0x52ee33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52ee34:{NFSU2_TR(0x52ee34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52ee35:{NFSU2_TR(0x52ee35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ee36:{NFSU2_TR(0x52ee36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ee40:L52ee40:{c.instructions+=5;NFSU2_TR(0x52ee40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ee44:{NFSU2_TR(0x52ee44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ee45:{NFSU2_TR(0x52ee45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ee46:{NFSU2_TR(0x52ee46);
__builtin_memmove((R+24),(R+4),4);
}
B52ee48:{NFSU2_TR(0x52ee48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ee4dull));
TAIL_STATIC(0x51f7a0u,51f);
}
B52ee4d:L52ee4d:{c.instructions+=2;NFSU2_TR(0x52ee4d);
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
B52ee4f:{NFSU2_TR(0x52ee4f);
if(r1(R+518)){{goto L52ee95;}}
}
B52ee51:L52ee51:{c.instructions+=2;NFSU2_TR(0x52ee51);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52ee54:{NFSU2_TR(0x52ee54);
if(r1(R+518)){{goto L52ee7f;}}
}
B52ee56:L52ee56:{c.instructions+=5;NFSU2_TR(0x52ee56);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52ee59:{NFSU2_TR(0x52ee59);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52ee5b:{NFSU2_TR(0x52ee5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ee5e:{NFSU2_TR(0x52ee5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ee61:{NFSU2_TR(0x52ee61);
if(r1(R+518)){{goto L52ee68;}}
}
B52ee63:L52ee63:{c.instructions+=2;NFSU2_TR(0x52ee63);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ee66:{NFSU2_TR(0x52ee66);
{goto L52ee6b;}
}
B52ee68:L52ee68:{c.instructions+=1;NFSU2_TR(0x52ee68);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ee6b:L52ee6b:{c.instructions+=6;NFSU2_TR(0x52ee6b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B52ee6d:{NFSU2_TR(0x52ee6d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52ee70:{NFSU2_TR(0x52ee70);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52ee72:{NFSU2_TR(0x52ee72);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52ee74:{NFSU2_TR(0x52ee74);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52ee77:{NFSU2_TR(0x52ee77);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L52ee7f;}}
}
B52ee79:L52ee79:{c.instructions+=1;NFSU2_TR(0x52ee79);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B52ee7f:L52ee7f:{c.instructions+=3;NFSU2_TR(0x52ee7f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ee81:{NFSU2_TR(0x52ee81);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52ee84:{NFSU2_TR(0x52ee84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ee89ull));
TAIL_STATIC(0x43be80u,43b);
}
B52ee89:L52ee89:{c.instructions+=2;NFSU2_TR(0x52ee89);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B52ee8f:{NFSU2_TR(0x52ee8f);
__builtin_memmove(gp(0x8641a0),(R+4),4);
}
B52ee95:L52ee95:{c.instructions+=2;NFSU2_TR(0x52ee95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ee96:{NFSU2_TR(0x52ee96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52eea0:L52eea0:{c.instructions+=9;NFSU2_TR(0x52eea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B52eea3:{NFSU2_TR(0x52eea3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eea4:{NFSU2_TR(0x52eea4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eea5:{NFSU2_TR(0x52eea5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eea6:{NFSU2_TR(0x52eea6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eea7:{NFSU2_TR(0x52eea7);
__builtin_memmove((R+28),(R+4),4);
}
B52eea9:{NFSU2_TR(0x52eea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52eeac:{NFSU2_TR(0x52eeac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52eeae:{NFSU2_TR(0x52eeae);
if(r1(R+518)){{goto L52eeb5;}}
}
B52eeb0:L52eeb0:{c.instructions+=2;NFSU2_TR(0x52eeb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B52eeb3:{NFSU2_TR(0x52eeb3);
{goto L52eeb7;}
}
B52eeb5:L52eeb5:{c.instructions+=1;NFSU2_TR(0x52eeb5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52eeb7:L52eeb7:{c.instructions+=3;NFSU2_TR(0x52eeb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52eeba:{NFSU2_TR(0x52eeba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52eebc:{NFSU2_TR(0x52eebc);
if(r1(R+518)){{goto L52eec3;}}
}
B52eebe:L52eebe:{c.instructions+=2;NFSU2_TR(0x52eebe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52eec1:{NFSU2_TR(0x52eec1);
{goto L52eec5;}
}
B52eec3:L52eec3:{c.instructions+=1;NFSU2_TR(0x52eec3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52eec5:L52eec5:{c.instructions+=2;NFSU2_TR(0x52eec5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52eec7:{NFSU2_TR(0x52eec7);
if(r1(R+518)){TAIL_STATIC(0x52f383u,52f);}
}
B52eecd:L52eecd:{c.instructions+=4;NFSU2_TR(0x52eecd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52eed0:{NFSU2_TR(0x52eed0);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52eed4:{NFSU2_TR(0x52eed4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52eed6:{NFSU2_TR(0x52eed6);
if(r1(R+518)){{goto L52eeff;}}
}
B52eed8:L52eed8:{c.instructions+=14;NFSU2_TR(0x52eed8);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52eedb:{NFSU2_TR(0x52eedb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52eede:{NFSU2_TR(0x52eede);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52eee1:{NFSU2_TR(0x52eee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52eee4:{NFSU2_TR(0x52eee4);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52eee7:{NFSU2_TR(0x52eee7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eee8:{NFSU2_TR(0x52eee8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52eeec:{NFSU2_TR(0x52eeec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52eeef:{NFSU2_TR(0x52eeef);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52eef3:{NFSU2_TR(0x52eef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52eef7:{NFSU2_TR(0x52eef7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eef8:{NFSU2_TR(0x52eef8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52eefc:{NFSU2_TR(0x52eefc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eefd:{NFSU2_TR(0x52eefd);
{goto L52ef24;}
}
B52eeff:L52eeff:{c.instructions+=13;NFSU2_TR(0x52eeff);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52ef02:{NFSU2_TR(0x52ef02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ef05:{NFSU2_TR(0x52ef05);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ef08:{NFSU2_TR(0x52ef08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ef0b:{NFSU2_TR(0x52ef0b);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52ef0e:{NFSU2_TR(0x52ef0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ef12:{NFSU2_TR(0x52ef12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ef15:{NFSU2_TR(0x52ef15);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52ef19:{NFSU2_TR(0x52ef19);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52ef1d:{NFSU2_TR(0x52ef1d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ef1e:{NFSU2_TR(0x52ef1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ef1f:{NFSU2_TR(0x52ef1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ef23:{NFSU2_TR(0x52ef23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ef24:L52ef24:{c.instructions+=1;NFSU2_TR(0x52ef24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ef29ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B52ef29:L52ef29:{c.instructions+=6;NFSU2_TR(0x52ef29);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ef2c:{NFSU2_TR(0x52ef2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ef2f:{NFSU2_TR(0x52ef2f);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ef32:{NFSU2_TR(0x52ef32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52ef35:{NFSU2_TR(0x52ef35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ef37:{NFSU2_TR(0x52ef37);
if(r1(R+518)){{goto L52ef69;}}
}
B52ef39:L52ef39:{c.instructions+=4;NFSU2_TR(0x52ef39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ef3c:{NFSU2_TR(0x52ef3c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52ef3d:{NFSU2_TR(0x52ef3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ef40:{NFSU2_TR(0x52ef40);
if(r1(R+518)){{goto L52ef4c;}}
}
B52ef42:L52ef42:{c.instructions+=2;NFSU2_TR(0x52ef42);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52ef45:{NFSU2_TR(0x52ef45);
if(r1(R+518)){{goto L52ef4c;}}
}
B52ef47:L52ef47:{c.instructions+=2;NFSU2_TR(0x52ef47);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52ef4a:{NFSU2_TR(0x52ef4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ef54;}}
}
B52ef4c:L52ef4c:{c.instructions+=3;NFSU2_TR(0x52ef4c);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52ef4f:{NFSU2_TR(0x52ef4f);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B52ef51:{NFSU2_TR(0x52ef51);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52ef54:L52ef54:{c.instructions+=7;NFSU2_TR(0x52ef54);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52ef57:{NFSU2_TR(0x52ef57);
w4(R+20,u32(0x400000ull));
}
B52ef5c:{NFSU2_TR(0x52ef5c);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52ef5f:{NFSU2_TR(0x52ef5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ef62:{NFSU2_TR(0x52ef62);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+20))));
}
B52ef64:{NFSU2_TR(0x52ef64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ef67:{NFSU2_TR(0x52ef67);
{goto L52ef72;}
}
B52ef69:L52ef69:{c.instructions+=3;NFSU2_TR(0x52ef69);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52ef6b:{NFSU2_TR(0x52ef6b);
w4(R+20,u32(0x400000ull));
}
B52ef70:{NFSU2_TR(0x52ef70);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52ef72:L52ef72:{c.instructions+=3;NFSU2_TR(0x52ef72);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52ef75:{NFSU2_TR(0x52ef75);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52ef77:{NFSU2_TR(0x52ef77);
if(r1(R+518)){{goto L52efb9;}}
}
B52ef79:L52ef79:{c.instructions+=8;NFSU2_TR(0x52ef79);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ef7d:{NFSU2_TR(0x52ef7d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52ef83:{NFSU2_TR(0x52ef83);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ef87:{NFSU2_TR(0x52ef87);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B52ef89:{NFSU2_TR(0x52ef89);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52ef8d:{NFSU2_TR(0x52ef8d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52ef8f:{NFSU2_TR(0x52ef8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52ef92:{NFSU2_TR(0x52ef92);
if(r1(R+518)){{goto L52efb7;}}
}
B52ef94:L52ef94:{c.instructions+=8;NFSU2_TR(0x52ef94);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ef98:{NFSU2_TR(0x52ef98);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B52ef9a:{NFSU2_TR(0x52ef9a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ef9e:{NFSU2_TR(0x52ef9e);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B52efa0:{NFSU2_TR(0x52efa0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52efa2:{NFSU2_TR(0x52efa2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52efa4:{NFSU2_TR(0x52efa4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52efa7:{NFSU2_TR(0x52efa7);
if(r1(R+518)){{goto L52efb9;}}
}
B52efa9:L52efa9:{c.instructions+=3;NFSU2_TR(0x52efa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52efac:{NFSU2_TR(0x52efac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52efad:{NFSU2_TR(0x52efad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52efb2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B52efb2:L52efb2:{c.instructions+=2;NFSU2_TR(0x52efb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52efb5:{NFSU2_TR(0x52efb5);
TAIL_STATIC(0x52f00bu,52f);
}
B52efb7:L52efb7:{c.instructions+=1;NFSU2_TR(0x52efb7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52efb9:L52efb9:{c.instructions+=4;NFSU2_TR(0x52efb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52efbc:{NFSU2_TR(0x52efbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52efbe:{NFSU2_TR(0x52efbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52efbf:{NFSU2_TR(0x52efbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52efc4ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B52efc4:L52efc4:{c.instructions+=4;NFSU2_TR(0x52efc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52efc7:{NFSU2_TR(0x52efc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52efca:{NFSU2_TR(0x52efca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52efcc:{NFSU2_TR(0x52efcc);
if(r1(R+518)){TAIL_STATIC(0x52f00bu,52f);}
}
B52efce:L52efce:{c.instructions+=3;NFSU2_TR(0x52efce);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B52efd4:{NFSU2_TR(0x52efd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52efd6:{NFSU2_TR(0x52efd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52efde;}}
}
B52efd8:L52efd8:{c.instructions+=2;NFSU2_TR(0x52efd8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B52efdc:{NFSU2_TR(0x52efdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52efe5;}}
}
B52efde:L52efde:{c.instructions+=1;NFSU2_TR(0x52efde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B52efe5:L52efe5:{c.instructions+=2;NFSU2_TR(0x52efe5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52efe9:{NFSU2_TR(0x52efe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x52f00bu,52f);}
}
B52efeb:L52efeb:{c.instructions+=4;NFSU2_TR(0x52efeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52efee:{NFSU2_TR(0x52efee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52eff1:{NFSU2_TR(0x52eff1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52eff3:{NFSU2_TR(0x52eff3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x52f00bu,52f);}
}
B52eff5:L52eff5:{c.instructions+=3;NFSU2_TR(0x52eff5);
__builtin_memmove((R+20),(R+0),4);
}
B52eff7:{NFSU2_TR(0x52eff7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52eff8:{NFSU2_TR(0x52eff8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52effdull));
TAIL_STATIC(0x50ca00u,50c);
}
B52effd:L52effd:{c.instructions+=1;NFSU2_TR(0x52effd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x52f000u,52f);
}
XIT:NFSU2_TR_EXIT(0x52e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
