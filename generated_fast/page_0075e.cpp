#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_765(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_767(u8* __restrict R,Cpu& c);
u32 body_768(u8* __restrict R,Cpu& c);
u32 body_769(u8* __restrict R,Cpu& c);
u32 body_76a(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x75e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x75e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_75e(u8* __restrict R,Cpu& c);
u32 page_75e(Cpu& c){return body_75e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_75e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x75e001:goto L75e001;
case 0x75e005:c.instructions+=1;goto B75e005;
case 0x75e007:goto L75e007;
case 0x75e00c:c.instructions+=3;goto B75e00c;
case 0x75e010:c.instructions+=2;goto B75e010;
case 0x75e011:c.instructions+=1;goto B75e011;
case 0x75e016:goto L75e016;
case 0x75e019:c.instructions+=1;goto B75e019;
case 0x75e01a:goto L75e01a;
case 0x75e01d:c.instructions+=4;goto B75e01d;
case 0x75e021:c.instructions+=3;goto B75e021;
case 0x75e025:c.instructions+=2;goto B75e025;
case 0x75e02a:c.instructions+=1;goto B75e02a;
case 0x75e02b:goto L75e02b;
case 0x75e02c:c.instructions+=15;goto B75e02c;
case 0x75e02e:c.instructions+=14;goto B75e02e;
case 0x75e031:c.instructions+=13;goto B75e031;
case 0x75e034:c.instructions+=12;goto B75e034;
case 0x75e035:c.instructions+=11;goto B75e035;
case 0x75e038:c.instructions+=10;goto B75e038;
case 0x75e039:c.instructions+=9;goto B75e039;
case 0x75e03c:c.instructions+=8;goto B75e03c;
case 0x75e03f:c.instructions+=7;goto B75e03f;
case 0x75e042:c.instructions+=6;goto B75e042;
case 0x75e045:c.instructions+=5;goto B75e045;
case 0x75e046:c.instructions+=4;goto B75e046;
case 0x75e04d:c.instructions+=3;goto B75e04d;
case 0x75e050:c.instructions+=2;goto B75e050;
case 0x75e053:c.instructions+=1;goto B75e053;
case 0x75e058:goto L75e058;
case 0x75e05b:c.instructions+=3;goto B75e05b;
case 0x75e05d:c.instructions+=2;goto B75e05d;
case 0x75e05f:c.instructions+=1;goto B75e05f;
case 0x75e061:goto L75e061;
case 0x75e064:c.instructions+=1;goto B75e064;
case 0x75e066:goto L75e066;
case 0x75e069:c.instructions+=2;goto B75e069;
case 0x75e06c:c.instructions+=1;goto B75e06c;
case 0x75e06e:goto L75e06e;
case 0x75e071:c.instructions+=3;goto B75e071;
case 0x75e072:c.instructions+=2;goto B75e072;
case 0x75e074:c.instructions+=1;goto B75e074;
case 0x75e079:goto L75e079;
case 0x75e07a:c.instructions+=1;goto B75e07a;
case 0x75e07b:goto L75e07b;
case 0x75e07d:c.instructions+=4;goto B75e07d;
case 0x75e07e:c.instructions+=3;goto B75e07e;
case 0x75e07f:c.instructions+=2;goto B75e07f;
case 0x75e080:c.instructions+=1;goto B75e080;
case 0x75e081:goto L75e081;
case 0x75e082:c.instructions+=16;goto B75e082;
case 0x75e084:c.instructions+=15;goto B75e084;
case 0x75e087:c.instructions+=14;goto B75e087;
case 0x75e08a:c.instructions+=13;goto B75e08a;
case 0x75e08b:c.instructions+=12;goto B75e08b;
case 0x75e08e:c.instructions+=11;goto B75e08e;
case 0x75e091:c.instructions+=10;goto B75e091;
case 0x75e092:c.instructions+=9;goto B75e092;
case 0x75e095:c.instructions+=8;goto B75e095;
case 0x75e096:c.instructions+=7;goto B75e096;
case 0x75e099:c.instructions+=6;goto B75e099;
case 0x75e09c:c.instructions+=5;goto B75e09c;
case 0x75e09d:c.instructions+=4;goto B75e09d;
case 0x75e0a4:c.instructions+=3;goto B75e0a4;
case 0x75e0a7:c.instructions+=2;goto B75e0a7;
case 0x75e0aa:c.instructions+=1;goto B75e0aa;
case 0x75e0af:goto L75e0af;
case 0x75e0b2:c.instructions+=3;goto B75e0b2;
case 0x75e0b4:c.instructions+=2;goto B75e0b4;
case 0x75e0b6:c.instructions+=1;goto B75e0b6;
case 0x75e0b8:goto L75e0b8;
case 0x75e0bb:c.instructions+=1;goto B75e0bb;
case 0x75e0bd:goto L75e0bd;
case 0x75e0c0:c.instructions+=2;goto B75e0c0;
case 0x75e0c3:c.instructions+=1;goto B75e0c3;
case 0x75e0c5:goto L75e0c5;
case 0x75e0c8:c.instructions+=3;goto B75e0c8;
case 0x75e0c9:c.instructions+=2;goto B75e0c9;
case 0x75e0cb:c.instructions+=1;goto B75e0cb;
case 0x75e0d0:goto L75e0d0;
case 0x75e0d1:c.instructions+=1;goto B75e0d1;
case 0x75e0d2:goto L75e0d2;
case 0x75e0d4:c.instructions+=4;goto B75e0d4;
case 0x75e0d5:c.instructions+=3;goto B75e0d5;
case 0x75e0d6:c.instructions+=2;goto B75e0d6;
case 0x75e0d7:c.instructions+=1;goto B75e0d7;
case 0x75e0d8:goto L75e0d8;
case 0x75e0d9:c.instructions+=3;goto B75e0d9;
case 0x75e0dd:c.instructions+=2;goto B75e0dd;
case 0x75e0df:c.instructions+=1;goto B75e0df;
case 0x75e0e1:goto L75e0e1;
case 0x75e0e2:c.instructions+=1;goto B75e0e2;
case 0x75e0e7:goto L75e0e7;
case 0x75e0e8:c.instructions+=2;goto B75e0e8;
case 0x75e0e9:c.instructions+=1;goto B75e0e9;
case 0x75e0ee:goto L75e0ee;
case 0x75e0f0:c.instructions+=3;goto B75e0f0;
case 0x75e0f1:c.instructions+=2;goto B75e0f1;
case 0x75e0f2:c.instructions+=1;goto B75e0f2;
case 0x75e0f4:goto L75e0f4;
case 0x75e0f5:c.instructions+=2;goto B75e0f5;
case 0x75e0f6:c.instructions+=1;goto B75e0f6;
case 0x75e0fb:goto L75e0fb;
case 0x75e0fc:c.instructions+=3;goto B75e0fc;
case 0x75e0fd:c.instructions+=2;goto B75e0fd;
case 0x75e0fe:c.instructions+=1;goto B75e0fe;
case 0x75e0ff:goto L75e0ff;
case 0x75e101:c.instructions+=2;goto B75e101;
case 0x75e102:c.instructions+=1;goto B75e102;
case 0x75e103:goto L75e103;
case 0x75e104:c.instructions+=6;goto B75e104;
case 0x75e108:c.instructions+=5;goto B75e108;
case 0x75e10b:c.instructions+=4;goto B75e10b;
case 0x75e10c:c.instructions+=3;goto B75e10c;
case 0x75e10e:c.instructions+=2;goto B75e10e;
case 0x75e114:c.instructions+=1;goto B75e114;
case 0x75e116:goto L75e116;
case 0x75e118:c.instructions+=1;goto B75e118;
case 0x75e11a:goto L75e11a;
case 0x75e11d:c.instructions+=2;goto B75e11d;
case 0x75e11f:c.instructions+=1;goto B75e11f;
case 0x75e121:goto L75e121;
case 0x75e124:c.instructions+=2;goto B75e124;
case 0x75e126:c.instructions+=1;goto B75e126;
case 0x75e128:goto L75e128;
case 0x75e12a:c.instructions+=1;goto B75e12a;
case 0x75e12c:goto L75e12c;
case 0x75e132:c.instructions+=1;goto B75e132;
case 0x75e134:goto L75e134;
case 0x75e135:c.instructions+=1;goto B75e135;
case 0x75e13a:goto L75e13a;
case 0x75e13d:c.instructions+=1;goto B75e13d;
case 0x75e142:goto L75e142;
case 0x75e143:c.instructions+=1;goto B75e143;
case 0x75e144:goto L75e144;
case 0x75e147:c.instructions+=2;goto B75e147;
case 0x75e149:c.instructions+=1;goto B75e149;
case 0x75e14b:goto L75e14b;
case 0x75e14d:c.instructions+=1;goto B75e14d;
case 0x75e14f:goto L75e14f;
case 0x75e155:c.instructions+=1;goto B75e155;
case 0x75e157:goto L75e157;
case 0x75e158:c.instructions+=1;goto B75e158;
case 0x75e15d:goto L75e15d;
case 0x75e160:c.instructions+=1;goto B75e160;
case 0x75e165:goto L75e165;
case 0x75e166:c.instructions+=1;goto B75e166;
case 0x75e167:goto L75e167;
case 0x75e16a:c.instructions+=1;goto B75e16a;
case 0x75e16f:goto L75e16f;
case 0x75e172:c.instructions+=1;goto B75e172;
case 0x75e177:goto L75e177;
case 0x75e178:c.instructions+=1;goto B75e178;
case 0x75e179:goto L75e179;
case 0x75e17c:c.instructions+=2;goto B75e17c;
case 0x75e182:c.instructions+=1;goto B75e182;
case 0x75e184:goto L75e184;
case 0x75e186:c.instructions+=1;goto B75e186;
case 0x75e188:goto L75e188;
case 0x75e18a:c.instructions+=1;goto B75e18a;
case 0x75e18c:goto L75e18c;
case 0x75e18d:c.instructions+=1;goto B75e18d;
case 0x75e192:goto L75e192;
case 0x75e195:c.instructions+=1;goto B75e195;
case 0x75e19a:goto L75e19a;
case 0x75e19b:c.instructions+=1;goto B75e19b;
case 0x75e19c:goto L75e19c;
case 0x75e19f:c.instructions+=2;goto B75e19f;
case 0x75e1a5:c.instructions+=1;goto B75e1a5;
case 0x75e1a7:goto L75e1a7;
case 0x75e1a9:c.instructions+=1;goto B75e1a9;
case 0x75e1ab:goto L75e1ab;
case 0x75e1b1:c.instructions+=1;goto B75e1b1;
case 0x75e1b3:goto L75e1b3;
case 0x75e1b4:c.instructions+=1;goto B75e1b4;
case 0x75e1b9:goto L75e1b9;
case 0x75e1bc:c.instructions+=1;goto B75e1bc;
case 0x75e1c1:goto L75e1c1;
case 0x75e1c2:c.instructions+=1;goto B75e1c2;
case 0x75e1c3:goto L75e1c3;
case 0x75e1c4:c.instructions+=1;goto B75e1c4;
case 0x75e1c9:goto L75e1c9;
case 0x75e1ca:c.instructions+=3;goto B75e1ca;
case 0x75e1cb:c.instructions+=2;goto B75e1cb;
case 0x75e1cc:c.instructions+=1;goto B75e1cc;
case 0x75e1cd:goto L75e1cd;
case 0x75e1ce:c.instructions+=1;goto B75e1ce;
case 0x75e1d3:goto L75e1d3;
case 0x75e1d5:c.instructions+=3;goto B75e1d5;
case 0x75e1d8:c.instructions+=2;goto B75e1d8;
case 0x75e1de:c.instructions+=1;goto B75e1de;
case 0x75e1e4:goto L75e1e4;
case 0x75e1e6:c.instructions+=1;goto B75e1e6;
case 0x75e1e8:goto L75e1e8;
case 0x75e1eb:c.instructions+=3;goto B75e1eb;
case 0x75e1ed:c.instructions+=2;goto B75e1ed;
case 0x75e1ef:c.instructions+=1;goto B75e1ef;
case 0x75e1f1:goto L75e1f1;
case 0x75e1f3:goto L75e1f3;
case 0x75e1f6:c.instructions+=2;goto B75e1f6;
case 0x75e1f8:c.instructions+=1;goto B75e1f8;
case 0x75e1fa:goto L75e1fa;
case 0x75e1fc:goto L75e1fc;
case 0x75e1ff:c.instructions+=2;goto B75e1ff;
case 0x75e201:c.instructions+=1;goto B75e201;
case 0x75e203:goto L75e203;
case 0x75e205:goto L75e205;
case 0x75e208:c.instructions+=2;goto B75e208;
case 0x75e20a:c.instructions+=1;goto B75e20a;
case 0x75e20c:goto L75e20c;
case 0x75e20e:goto L75e20e;
case 0x75e211:c.instructions+=1;goto B75e211;
case 0x75e217:goto L75e217;
case 0x75e21d:c.instructions+=7;goto B75e21d;
case 0x75e220:c.instructions+=6;goto B75e220;
case 0x75e226:c.instructions+=5;goto B75e226;
case 0x75e228:c.instructions+=4;goto B75e228;
case 0x75e22e:c.instructions+=3;goto B75e22e;
case 0x75e231:c.instructions+=2;goto B75e231;
case 0x75e233:c.instructions+=1;goto B75e233;
case 0x75e235:goto L75e235;
case 0x75e237:goto L75e237;
case 0x75e23d:c.instructions+=3;goto B75e23d;
case 0x75e240:c.instructions+=2;goto B75e240;
case 0x75e242:c.instructions+=1;goto B75e242;
case 0x75e244:goto L75e244;
case 0x75e246:goto L75e246;
case 0x75e24c:c.instructions+=3;goto B75e24c;
case 0x75e24f:c.instructions+=2;goto B75e24f;
case 0x75e251:c.instructions+=1;goto B75e251;
case 0x75e253:goto L75e253;
case 0x75e255:goto L75e255;
case 0x75e25b:c.instructions+=3;goto B75e25b;
case 0x75e25e:c.instructions+=2;goto B75e25e;
case 0x75e260:c.instructions+=1;goto B75e260;
case 0x75e262:goto L75e262;
case 0x75e264:goto L75e264;
case 0x75e26a:c.instructions+=4;goto B75e26a;
case 0x75e26d:c.instructions+=3;goto B75e26d;
case 0x75e273:c.instructions+=2;goto B75e273;
case 0x75e275:c.instructions+=1;goto B75e275;
case 0x75e277:goto L75e277;
case 0x75e27a:c.instructions+=1;goto B75e27a;
case 0x75e27c:goto L75e27c;
case 0x75e281:c.instructions+=1;goto B75e281;
case 0x75e283:goto L75e283;
case 0x75e284:c.instructions+=1;goto B75e284;
case 0x75e289:goto L75e289;
case 0x75e28a:goto L75e28a;
case 0x75e28d:c.instructions+=2;goto B75e28d;
case 0x75e28e:c.instructions+=1;goto B75e28e;
case 0x75e28f:goto L75e28f;
case 0x75e290:c.instructions+=3;goto B75e290;
case 0x75e294:c.instructions+=2;goto B75e294;
case 0x75e296:c.instructions+=1;goto B75e296;
case 0x75e298:goto L75e298;
case 0x75e299:c.instructions+=1;goto B75e299;
case 0x75e29d:goto L75e29d;
case 0x75e2a0:c.instructions+=3;goto B75e2a0;
case 0x75e2a2:c.instructions+=2;goto B75e2a2;
case 0x75e2a6:c.instructions+=1;goto B75e2a6;
case 0x75e2ab:goto L75e2ab;
case 0x75e2ac:c.instructions+=3;goto B75e2ac;
case 0x75e2ad:c.instructions+=2;goto B75e2ad;
case 0x75e2ae:c.instructions+=1;goto B75e2ae;
case 0x75e2b0:goto L75e2b0;
case 0x75e2b1:goto L75e2b1;
case 0x75e2b2:c.instructions+=1;goto B75e2b2;
case 0x75e2b3:goto L75e2b3;
case 0x75e2b4:c.instructions+=8;goto B75e2b4;
case 0x75e2b6:c.instructions+=7;goto B75e2b6;
case 0x75e2b7:c.instructions+=6;goto B75e2b7;
case 0x75e2b8:c.instructions+=5;goto B75e2b8;
case 0x75e2bb:c.instructions+=4;goto B75e2bb;
case 0x75e2c0:c.instructions+=3;goto B75e2c0;
case 0x75e2c2:c.instructions+=2;goto B75e2c2;
case 0x75e2c3:c.instructions+=1;goto B75e2c3;
case 0x75e2c8:goto L75e2c8;
case 0x75e2cb:c.instructions+=4;goto B75e2cb;
case 0x75e2cd:c.instructions+=3;goto B75e2cd;
case 0x75e2d0:c.instructions+=2;goto B75e2d0;
case 0x75e2d2:c.instructions+=1;goto B75e2d2;
case 0x75e2d4:goto L75e2d4;
case 0x75e2d6:c.instructions+=1;goto B75e2d6;
case 0x75e2d8:goto L75e2d8;
case 0x75e2db:c.instructions+=2;goto B75e2db;
case 0x75e2de:c.instructions+=1;goto B75e2de;
case 0x75e2e0:goto L75e2e0;
case 0x75e2e1:c.instructions+=3;goto B75e2e1;
case 0x75e2e7:c.instructions+=2;goto B75e2e7;
case 0x75e2e8:c.instructions+=1;goto B75e2e8;
case 0x75e2ed:goto L75e2ed;
case 0x75e2ee:c.instructions+=1;goto B75e2ee;
case 0x75e2ef:goto L75e2ef;
case 0x75e2f1:c.instructions+=1;goto B75e2f1;
case 0x75e2f6:goto L75e2f6;
case 0x75e2fa:c.instructions+=2;goto B75e2fa;
case 0x75e2fb:c.instructions+=1;goto B75e2fb;
case 0x75e2fd:goto L75e2fd;
case 0x75e301:c.instructions+=3;goto B75e301;
case 0x75e304:c.instructions+=2;goto B75e304;
case 0x75e306:c.instructions+=1;goto B75e306;
case 0x75e308:goto L75e308;
case 0x75e30b:c.instructions+=1;goto B75e30b;
case 0x75e30d:goto L75e30d;
case 0x75e310:c.instructions+=1;goto B75e310;
case 0x75e312:goto L75e312;
case 0x75e313:c.instructions+=3;goto B75e313;
case 0x75e314:c.instructions+=2;goto B75e314;
case 0x75e317:c.instructions+=1;goto B75e317;
case 0x75e319:goto L75e319;
case 0x75e31d:c.instructions+=1;goto B75e31d;
case 0x75e31f:goto L75e31f;
case 0x75e322:c.instructions+=1;goto B75e322;
case 0x75e324:goto L75e324;
case 0x75e327:c.instructions+=1;goto B75e327;
case 0x75e329:goto L75e329;
case 0x75e32a:c.instructions+=3;goto B75e32a;
case 0x75e32d:c.instructions+=2;goto B75e32d;
case 0x75e330:c.instructions+=1;goto B75e330;
case 0x75e332:goto L75e332;
case 0x75e336:c.instructions+=1;goto B75e336;
case 0x75e338:goto L75e338;
case 0x75e33b:c.instructions+=1;goto B75e33b;
case 0x75e33d:goto L75e33d;
case 0x75e33f:c.instructions+=1;goto B75e33f;
case 0x75e341:goto L75e341;
case 0x75e344:c.instructions+=1;goto B75e344;
case 0x75e346:goto L75e346;
case 0x75e347:c.instructions+=2;goto B75e347;
case 0x75e34a:c.instructions+=1;goto B75e34a;
case 0x75e34f:goto L75e34f;
case 0x75e350:c.instructions+=1;goto B75e350;
case 0x75e351:goto L75e351;
case 0x75e356:goto L75e356;
case 0x75e359:c.instructions+=2;goto B75e359;
case 0x75e35c:c.instructions+=1;goto B75e35c;
case 0x75e35e:goto L75e35e;
case 0x75e360:c.instructions+=1;goto B75e360;
case 0x75e362:goto L75e362;
case 0x75e365:c.instructions+=1;goto B75e365;
case 0x75e368:goto L75e368;
case 0x75e36d:c.instructions+=2;goto B75e36d;
case 0x75e36e:c.instructions+=1;goto B75e36e;
case 0x75e373:goto L75e373;
case 0x75e375:c.instructions+=3;goto B75e375;
case 0x75e376:c.instructions+=2;goto B75e376;
case 0x75e377:c.instructions+=1;goto B75e377;
case 0x75e379:goto L75e379;
case 0x75e37c:goto L75e37c;
case 0x75e37d:goto L75e37d;
case 0x75e37e:c.instructions+=3;goto B75e37e;
case 0x75e37f:c.instructions+=2;goto B75e37f;
case 0x75e380:c.instructions+=1;goto B75e380;
case 0x75e381:goto L75e381;
case 0x75e383:c.instructions+=1;goto B75e383;
case 0x75e385:goto L75e385;
case 0x75e386:c.instructions+=4;goto B75e386;
case 0x75e38a:c.instructions+=3;goto B75e38a;
case 0x75e38b:c.instructions+=2;goto B75e38b;
case 0x75e38f:c.instructions+=1;goto B75e38f;
case 0x75e394:goto L75e394;
case 0x75e397:c.instructions+=4;goto B75e397;
case 0x75e39a:c.instructions+=3;goto B75e39a;
case 0x75e39b:c.instructions+=2;goto B75e39b;
case 0x75e39c:c.instructions+=1;goto B75e39c;
case 0x75e39e:goto L75e39e;
case 0x75e39f:c.instructions+=4;goto B75e39f;
case 0x75e3a4:c.instructions+=3;goto B75e3a4;
case 0x75e3a6:c.instructions+=2;goto B75e3a6;
case 0x75e3aa:c.instructions+=1;goto B75e3aa;
case 0x75e3af:goto L75e3af;
case 0x75e3b2:goto L75e3b2;
case 0x75e3b8:c.instructions+=3;goto B75e3b8;
case 0x75e3bb:c.instructions+=2;goto B75e3bb;
case 0x75e3bc:c.instructions+=1;goto B75e3bc;
case 0x75e3be:goto L75e3be;
case 0x75e3bf:c.instructions+=4;goto B75e3bf;
case 0x75e3c4:c.instructions+=3;goto B75e3c4;
case 0x75e3c6:c.instructions+=2;goto B75e3c6;
case 0x75e3ca:c.instructions+=1;goto B75e3ca;
case 0x75e3cf:goto L75e3cf;
case 0x75e3d2:goto L75e3d2;
case 0x75e3d3:goto L75e3d3;
case 0x75e3d5:c.instructions+=2;goto B75e3d5;
case 0x75e3da:c.instructions+=1;goto B75e3da;
case 0x75e3df:goto L75e3df;
case 0x75e3e1:c.instructions+=1;goto B75e3e1;
case 0x75e3e6:goto L75e3e6;
case 0x75e3e7:c.instructions+=2;goto B75e3e7;
case 0x75e3eb:c.instructions+=1;goto B75e3eb;
case 0x75e3f0:goto L75e3f0;
case 0x75e3f3:c.instructions+=2;goto B75e3f3;
case 0x75e3f7:c.instructions+=1;goto B75e3f7;
case 0x75e3fc:goto L75e3fc;
case 0x75e3ff:c.instructions+=1;goto B75e3ff;
case 0x75e404:goto L75e404;
case 0x75e405:goto L75e405;
case 0x75e407:c.instructions+=1;goto B75e407;
case 0x75e40c:goto L75e40c;
case 0x75e40d:c.instructions+=1;goto B75e40d;
case 0x75e40e:goto L75e40e;
case 0x75e413:c.instructions+=5;goto B75e413;
case 0x75e414:c.instructions+=4;goto B75e414;
case 0x75e416:c.instructions+=3;goto B75e416;
case 0x75e417:c.instructions+=2;goto B75e417;
case 0x75e419:c.instructions+=1;goto B75e419;
case 0x75e41b:goto L75e41b;
case 0x75e420:c.instructions+=1;goto B75e420;
case 0x75e425:goto L75e425;
case 0x75e427:c.instructions+=3;goto B75e427;
case 0x75e428:c.instructions+=2;goto B75e428;
case 0x75e42d:c.instructions+=1;goto B75e42d;
case 0x75e42f:goto L75e42f;
case 0x75e430:c.instructions+=1;goto B75e430;
case 0x75e431:goto L75e431;
case 0x75e434:c.instructions+=10;goto B75e434;
case 0x75e435:c.instructions+=9;goto B75e435;
case 0x75e436:c.instructions+=8;goto B75e436;
case 0x75e437:c.instructions+=7;goto B75e437;
case 0x75e43d:c.instructions+=6;goto B75e43d;
case 0x75e442:c.instructions+=5;goto B75e442;
case 0x75e443:c.instructions+=4;goto B75e443;
case 0x75e449:c.instructions+=3;goto B75e449;
case 0x75e44b:c.instructions+=2;goto B75e44b;
case 0x75e451:c.instructions+=1;goto B75e451;
case 0x75e456:goto L75e456;
case 0x75e45b:c.instructions+=2;goto B75e45b;
case 0x75e45e:c.instructions+=1;goto B75e45e;
case 0x75e460:goto L75e460;
case 0x75e465:c.instructions+=2;goto B75e465;
case 0x75e46b:c.instructions+=1;goto B75e46b;
case 0x75e470:goto L75e470;
case 0x75e473:c.instructions+=3;goto B75e473;
case 0x75e475:c.instructions+=2;goto B75e475;
case 0x75e477:c.instructions+=1;goto B75e477;
case 0x75e47c:goto L75e47c;
case 0x75e47f:c.instructions+=2;goto B75e47f;
case 0x75e481:c.instructions+=1;goto B75e481;
case 0x75e483:goto L75e483;
case 0x75e485:goto L75e485;
case 0x75e487:c.instructions+=6;goto B75e487;
case 0x75e489:c.instructions+=5;goto B75e489;
case 0x75e48a:c.instructions+=4;goto B75e48a;
case 0x75e48d:c.instructions+=3;goto B75e48d;
case 0x75e48f:c.instructions+=2;goto B75e48f;
case 0x75e495:c.instructions+=1;goto B75e495;
case 0x75e49a:goto L75e49a;
case 0x75e49d:c.instructions+=2;goto B75e49d;
case 0x75e4a3:c.instructions+=1;goto B75e4a3;
case 0x75e4a5:goto L75e4a5;
case 0x75e4a7:c.instructions+=4;goto B75e4a7;
case 0x75e4a8:c.instructions+=3;goto B75e4a8;
case 0x75e4a9:c.instructions+=2;goto B75e4a9;
case 0x75e4aa:c.instructions+=1;goto B75e4aa;
case 0x75e4ac:goto L75e4ac;
case 0x75e4b1:c.instructions+=2;goto B75e4b1;
case 0x75e4b2:c.instructions+=1;goto B75e4b2;
case 0x75e4b3:goto L75e4b3;
case 0x75e4b9:c.instructions+=1;goto B75e4b9;
case 0x75e4be:goto L75e4be;
case 0x75e4c5:c.instructions+=4;goto B75e4c5;
case 0x75e4ca:c.instructions+=3;goto B75e4ca;
case 0x75e4cb:c.instructions+=2;goto B75e4cb;
case 0x75e4cc:c.instructions+=1;goto B75e4cc;
case 0x75e4cd:goto L75e4cd;
case 0x75e4ce:c.instructions+=10;goto B75e4ce;
case 0x75e4d2:c.instructions+=9;goto B75e4d2;
case 0x75e4d8:c.instructions+=8;goto B75e4d8;
case 0x75e4dd:c.instructions+=7;goto B75e4dd;
case 0x75e4e0:c.instructions+=6;goto B75e4e0;
case 0x75e4e1:c.instructions+=5;goto B75e4e1;
case 0x75e4e4:c.instructions+=4;goto B75e4e4;
case 0x75e4e6:c.instructions+=3;goto B75e4e6;
case 0x75e4e8:c.instructions+=2;goto B75e4e8;
case 0x75e4eb:c.instructions+=1;goto B75e4eb;
case 0x75e4ed:goto L75e4ed;
case 0x75e4ef:c.instructions+=1;goto B75e4ef;
case 0x75e4f4:goto L75e4f4;
case 0x75e4f7:c.instructions+=1;goto B75e4f7;
case 0x75e4f9:goto L75e4f9;
case 0x75e4fd:c.instructions+=1;goto B75e4fd;
case 0x75e4ff:goto L75e4ff;
case 0x75e502:c.instructions+=5;goto B75e502;
case 0x75e505:c.instructions+=4;goto B75e505;
case 0x75e509:c.instructions+=3;goto B75e509;
case 0x75e50b:c.instructions+=2;goto B75e50b;
case 0x75e50e:c.instructions+=1;goto B75e50e;
case 0x75e510:goto L75e510;
case 0x75e513:c.instructions+=2;goto B75e513;
case 0x75e517:c.instructions+=1;goto B75e517;
case 0x75e51b:goto L75e51b;
case 0x75e51e:c.instructions+=2;goto B75e51e;
case 0x75e520:c.instructions+=1;goto B75e520;
case 0x75e526:goto L75e526;
case 0x75e528:c.instructions+=1;goto B75e528;
case 0x75e52d:goto L75e52d;
case 0x75e52e:c.instructions+=5;goto B75e52e;
case 0x75e52f:c.instructions+=4;goto B75e52f;
case 0x75e530:c.instructions+=3;goto B75e530;
case 0x75e535:c.instructions+=2;goto B75e535;
case 0x75e536:c.instructions+=1;goto B75e536;
case 0x75e53b:goto L75e53b;
case 0x75e53d:c.instructions+=3;goto B75e53d;
case 0x75e53e:c.instructions+=2;goto B75e53e;
case 0x75e53f:c.instructions+=1;goto B75e53f;
case 0x75e541:goto L75e541;
case 0x75e542:c.instructions+=3;goto B75e542;
case 0x75e547:c.instructions+=2;goto B75e547;
case 0x75e548:c.instructions+=1;goto B75e548;
case 0x75e54d:goto L75e54d;
case 0x75e54f:c.instructions+=3;goto B75e54f;
case 0x75e550:c.instructions+=2;goto B75e550;
case 0x75e551:c.instructions+=1;goto B75e551;
case 0x75e553:goto L75e553;
case 0x75e556:c.instructions+=3;goto B75e556;
case 0x75e557:c.instructions+=2;goto B75e557;
case 0x75e558:c.instructions+=1;goto B75e558;
case 0x75e55d:goto L75e55d;
case 0x75e55f:c.instructions+=3;goto B75e55f;
case 0x75e560:c.instructions+=2;goto B75e560;
case 0x75e561:c.instructions+=1;goto B75e561;
case 0x75e563:goto L75e563;
case 0x75e565:c.instructions+=1;goto B75e565;
case 0x75e567:goto L75e567;
case 0x75e56a:c.instructions+=5;goto B75e56a;
case 0x75e56b:c.instructions+=4;goto B75e56b;
case 0x75e56e:c.instructions+=3;goto B75e56e;
case 0x75e573:c.instructions+=2;goto B75e573;
case 0x75e574:c.instructions+=1;goto B75e574;
case 0x75e579:goto L75e579;
case 0x75e57c:c.instructions+=2;goto B75e57c;
case 0x75e57e:c.instructions+=1;goto B75e57e;
case 0x75e580:goto L75e580;
case 0x75e587:c.instructions+=5;goto B75e587;
case 0x75e58c:c.instructions+=4;goto B75e58c;
case 0x75e58f:c.instructions+=3;goto B75e58f;
case 0x75e590:c.instructions+=2;goto B75e590;
case 0x75e591:c.instructions+=1;goto B75e591;
case 0x75e596:goto L75e596;
case 0x75e599:c.instructions+=3;goto B75e599;
case 0x75e59a:c.instructions+=2;goto B75e59a;
case 0x75e59b:c.instructions+=1;goto B75e59b;
case 0x75e59d:goto L75e59d;
case 0x75e59e:c.instructions+=1;goto B75e59e;
case 0x75e5a0:goto L75e5a0;
case 0x75e5a1:goto L75e5a1;
case 0x75e5a2:c.instructions+=1;goto B75e5a2;
case 0x75e5a7:goto L75e5a7;
case 0x75e5a8:c.instructions+=1;goto B75e5a8;
case 0x75e5a9:goto L75e5a9;
case 0x75e5ad:c.instructions+=1;goto B75e5ad;
case 0x75e5af:goto L75e5af;
case 0x75e5b1:c.instructions+=3;goto B75e5b1;
case 0x75e5b6:c.instructions+=2;goto B75e5b6;
case 0x75e5b9:c.instructions+=1;goto B75e5b9;
case 0x75e5be:goto L75e5be;
case 0x75e5c1:goto L75e5c1;
case 0x75e5c5:c.instructions+=1;goto B75e5c5;
case 0x75e5c7:goto L75e5c7;
case 0x75e5c9:c.instructions+=3;goto B75e5c9;
case 0x75e5ce:c.instructions+=2;goto B75e5ce;
case 0x75e5d1:c.instructions+=1;goto B75e5d1;
case 0x75e5d6:goto L75e5d6;
case 0x75e5d9:goto L75e5d9;
case 0x75e5da:c.instructions+=2;goto B75e5da;
case 0x75e5dd:c.instructions+=1;goto B75e5dd;
case 0x75e5e2:goto L75e5e2;
case 0x75e5e3:c.instructions+=2;goto B75e5e3;
case 0x75e5e4:c.instructions+=1;goto B75e5e4;
case 0x75e5e6:goto L75e5e6;
case 0x75e5e7:c.instructions+=1;goto B75e5e7;
case 0x75e5e8:goto L75e5e8;
case 0x75e5eb:c.instructions+=3;goto B75e5eb;
case 0x75e5ee:c.instructions+=2;goto B75e5ee;
case 0x75e5ef:c.instructions+=1;goto B75e5ef;
case 0x75e5f4:goto L75e5f4;
case 0x75e5f7:c.instructions+=2;goto B75e5f7;
case 0x75e5f8:c.instructions+=1;goto B75e5f8;
case 0x75e5f9:goto L75e5f9;
case 0x75e5fa:c.instructions+=14;goto B75e5fa;
case 0x75e5fe:c.instructions+=13;goto B75e5fe;
case 0x75e604:c.instructions+=12;goto B75e604;
case 0x75e609:c.instructions+=11;goto B75e609;
case 0x75e60c:c.instructions+=10;goto B75e60c;
case 0x75e60d:c.instructions+=9;goto B75e60d;
case 0x75e610:c.instructions+=8;goto B75e610;
case 0x75e613:c.instructions+=7;goto B75e613;
case 0x75e614:c.instructions+=6;goto B75e614;
case 0x75e617:c.instructions+=5;goto B75e617;
case 0x75e618:c.instructions+=4;goto B75e618;
case 0x75e61b:c.instructions+=3;goto B75e61b;
case 0x75e61c:c.instructions+=2;goto B75e61c;
case 0x75e61f:c.instructions+=1;goto B75e61f;
case 0x75e624:goto L75e624;
case 0x75e627:c.instructions+=2;goto B75e627;
case 0x75e629:c.instructions+=1;goto B75e629;
case 0x75e62f:goto L75e62f;
case 0x75e630:c.instructions+=7;goto B75e630;
case 0x75e633:c.instructions+=6;goto B75e633;
case 0x75e634:c.instructions+=5;goto B75e634;
case 0x75e637:c.instructions+=4;goto B75e637;
case 0x75e63d:c.instructions+=3;goto B75e63d;
case 0x75e640:c.instructions+=2;goto B75e640;
case 0x75e641:c.instructions+=1;goto B75e641;
case 0x75e646:goto L75e646;
case 0x75e648:c.instructions+=3;goto B75e648;
case 0x75e649:c.instructions+=2;goto B75e649;
case 0x75e64a:c.instructions+=1;goto B75e64a;
case 0x75e650:goto L75e650;
case 0x75e653:c.instructions+=2;goto B75e653;
case 0x75e654:c.instructions+=1;goto B75e654;
case 0x75e659:goto L75e659;
case 0x75e65a:c.instructions+=2;goto B75e65a;
case 0x75e65b:c.instructions+=1;goto B75e65b;
case 0x75e660:goto L75e660;
case 0x75e662:c.instructions+=4;goto B75e662;
case 0x75e663:c.instructions+=3;goto B75e663;
case 0x75e664:c.instructions+=2;goto B75e664;
case 0x75e667:c.instructions+=1;goto B75e667;
case 0x75e669:goto L75e669;
case 0x75e66b:c.instructions+=1;goto B75e66b;
case 0x75e670:goto L75e670;
case 0x75e676:c.instructions+=12;goto B75e676;
case 0x75e679:c.instructions+=11;goto B75e679;
case 0x75e680:c.instructions+=10;goto B75e680;
case 0x75e682:c.instructions+=9;goto B75e682;
case 0x75e685:c.instructions+=8;goto B75e685;
case 0x75e688:c.instructions+=7;goto B75e688;
case 0x75e68f:c.instructions+=6;goto B75e68f;
case 0x75e691:c.instructions+=5;goto B75e691;
case 0x75e692:c.instructions+=4;goto B75e692;
case 0x75e695:c.instructions+=3;goto B75e695;
case 0x75e698:c.instructions+=2;goto B75e698;
case 0x75e699:c.instructions+=1;goto B75e699;
case 0x75e69e:goto L75e69e;
case 0x75e6a3:c.instructions+=5;goto B75e6a3;
case 0x75e6a6:c.instructions+=4;goto B75e6a6;
case 0x75e6a9:c.instructions+=3;goto B75e6a9;
case 0x75e6aa:c.instructions+=2;goto B75e6aa;
case 0x75e6ad:c.instructions+=1;goto B75e6ad;
case 0x75e6b2:goto L75e6b2;
case 0x75e6b8:c.instructions+=7;goto B75e6b8;
case 0x75e6bc:c.instructions+=6;goto B75e6bc;
case 0x75e6be:c.instructions+=5;goto B75e6be;
case 0x75e6c0:c.instructions+=4;goto B75e6c0;
case 0x75e6c3:c.instructions+=3;goto B75e6c3;
case 0x75e6c4:c.instructions+=2;goto B75e6c4;
case 0x75e6c7:c.instructions+=1;goto B75e6c7;
case 0x75e6cc:goto L75e6cc;
case 0x75e6cf:c.instructions+=2;goto B75e6cf;
case 0x75e6d2:c.instructions+=1;goto B75e6d2;
case 0x75e6d8:goto L75e6d8;
case 0x75e6db:c.instructions+=6;goto B75e6db;
case 0x75e6e1:c.instructions+=5;goto B75e6e1;
case 0x75e6e5:c.instructions+=4;goto B75e6e5;
case 0x75e6ea:c.instructions+=3;goto B75e6ea;
case 0x75e6ef:c.instructions+=2;goto B75e6ef;
case 0x75e6f2:c.instructions+=1;goto B75e6f2;
case 0x75e6f7:goto L75e6f7;
case 0x75e6fa:c.instructions+=2;goto B75e6fa;
case 0x75e6fc:c.instructions+=1;goto B75e6fc;
case 0x75e6fe:goto L75e6fe;
case 0x75e700:c.instructions+=11;goto B75e700;
case 0x75e703:c.instructions+=10;goto B75e703;
case 0x75e705:c.instructions+=9;goto B75e705;
case 0x75e708:c.instructions+=8;goto B75e708;
case 0x75e70b:c.instructions+=7;goto B75e70b;
case 0x75e70e:c.instructions+=6;goto B75e70e;
case 0x75e711:c.instructions+=5;goto B75e711;
case 0x75e714:c.instructions+=4;goto B75e714;
case 0x75e717:c.instructions+=3;goto B75e717;
case 0x75e71c:c.instructions+=2;goto B75e71c;
case 0x75e71f:c.instructions+=1;goto B75e71f;
case 0x75e721:goto L75e721;
case 0x75e723:goto L75e723;
case 0x75e726:c.instructions+=8;goto B75e726;
case 0x75e72d:c.instructions+=7;goto B75e72d;
case 0x75e72f:c.instructions+=6;goto B75e72f;
case 0x75e735:c.instructions+=5;goto B75e735;
case 0x75e738:c.instructions+=4;goto B75e738;
case 0x75e73e:c.instructions+=3;goto B75e73e;
case 0x75e740:c.instructions+=2;goto B75e740;
case 0x75e743:c.instructions+=1;goto B75e743;
case 0x75e746:goto L75e746;
case 0x75e74a:c.instructions+=1;goto B75e74a;
case 0x75e74c:goto L75e74c;
case 0x75e74e:c.instructions+=8;goto B75e74e;
case 0x75e754:c.instructions+=7;goto B75e754;
case 0x75e75a:c.instructions+=6;goto B75e75a;
case 0x75e75d:c.instructions+=5;goto B75e75d;
case 0x75e75e:c.instructions+=4;goto B75e75e;
case 0x75e760:c.instructions+=3;goto B75e760;
case 0x75e765:c.instructions+=2;goto B75e765;
case 0x75e767:c.instructions+=1;goto B75e767;
case 0x75e76c:goto L75e76c;
case 0x75e76f:c.instructions+=2;goto B75e76f;
case 0x75e771:c.instructions+=1;goto B75e771;
case 0x75e773:goto L75e773;
case 0x75e778:c.instructions+=4;goto B75e778;
case 0x75e77e:c.instructions+=3;goto B75e77e;
case 0x75e783:c.instructions+=2;goto B75e783;
case 0x75e784:c.instructions+=1;goto B75e784;
case 0x75e789:goto L75e789;
case 0x75e78c:c.instructions+=4;goto B75e78c;
case 0x75e78e:c.instructions+=3;goto B75e78e;
case 0x75e790:c.instructions+=2;goto B75e790;
case 0x75e791:c.instructions+=1;goto B75e791;
case 0x75e793:goto L75e793;
case 0x75e795:goto L75e795;
case 0x75e79b:c.instructions+=3;goto B75e79b;
case 0x75e7a0:c.instructions+=2;goto B75e7a0;
case 0x75e7a6:c.instructions+=1;goto B75e7a6;
case 0x75e7a8:goto L75e7a8;
case 0x75e7ad:goto L75e7ad;
case 0x75e7b2:goto L75e7b2;
case 0x75e7b5:c.instructions+=1;goto B75e7b5;
case 0x75e7b7:goto L75e7b7;
case 0x75e7ba:c.instructions+=1;goto B75e7ba;
case 0x75e7bf:goto L75e7bf;
case 0x75e7c5:goto L75e7c5;
case 0x75e7c7:c.instructions+=1;goto B75e7c7;
case 0x75e7c9:goto L75e7c9;
case 0x75e7cc:c.instructions+=3;goto B75e7cc;
case 0x75e7cf:c.instructions+=2;goto B75e7cf;
case 0x75e7d5:c.instructions+=1;goto B75e7d5;
case 0x75e7da:goto L75e7da;
case 0x75e7dd:c.instructions+=5;goto B75e7dd;
case 0x75e7df:c.instructions+=4;goto B75e7df;
case 0x75e7e2:c.instructions+=3;goto B75e7e2;
case 0x75e7e3:c.instructions+=2;goto B75e7e3;
case 0x75e7e8:c.instructions+=1;goto B75e7e8;
case 0x75e7ed:goto L75e7ed;
case 0x75e7f4:c.instructions+=1;goto B75e7f4;
case 0x75e7f6:goto L75e7f6;
case 0x75e7f9:c.instructions+=1;goto B75e7f9;
case 0x75e7fe:goto L75e7fe;
case 0x75e7ff:goto L75e7ff;
case 0x75e805:goto L75e805;
case 0x75e806:c.instructions+=1;goto B75e806;
case 0x75e807:goto L75e807;
case 0x75e80a:c.instructions+=2;goto B75e80a;
case 0x75e80d:c.instructions+=1;goto B75e80d;
case 0x75e812:goto L75e812;
case 0x75e815:c.instructions+=2;goto B75e815;
case 0x75e816:c.instructions+=1;goto B75e816;
case 0x75e817:goto L75e817;
case 0x75e818:c.instructions+=13;goto B75e818;
case 0x75e81c:c.instructions+=12;goto B75e81c;
case 0x75e822:c.instructions+=11;goto B75e822;
case 0x75e827:c.instructions+=10;goto B75e827;
case 0x75e82a:c.instructions+=9;goto B75e82a;
case 0x75e82b:c.instructions+=8;goto B75e82b;
case 0x75e82c:c.instructions+=7;goto B75e82c;
case 0x75e82e:c.instructions+=6;goto B75e82e;
case 0x75e830:c.instructions+=5;goto B75e830;
case 0x75e832:c.instructions+=4;goto B75e832;
case 0x75e833:c.instructions+=3;goto B75e833;
case 0x75e836:c.instructions+=2;goto B75e836;
case 0x75e838:c.instructions+=1;goto B75e838;
case 0x75e83a:goto L75e83a;
case 0x75e83c:c.instructions+=1;goto B75e83c;
case 0x75e83e:goto L75e83e;
case 0x75e83f:c.instructions+=1;goto B75e83f;
case 0x75e844:goto L75e844;
case 0x75e845:c.instructions+=1;goto B75e845;
case 0x75e84a:goto L75e84a;
case 0x75e84d:c.instructions+=2;goto B75e84d;
case 0x75e854:c.instructions+=1;goto B75e854;
case 0x75e859:goto L75e859;
case 0x75e85b:c.instructions+=3;goto B75e85b;
case 0x75e862:c.instructions+=2;goto B75e862;
case 0x75e865:c.instructions+=1;goto B75e865;
case 0x75e86b:goto L75e86b;
case 0x75e86e:c.instructions+=1;goto B75e86e;
case 0x75e874:goto L75e874;
case 0x75e878:c.instructions+=1;goto B75e878;
case 0x75e87e:goto L75e87e;
case 0x75e882:c.instructions+=1;goto B75e882;
case 0x75e888:goto L75e888;
case 0x75e88d:c.instructions+=2;goto B75e88d;
case 0x75e88e:c.instructions+=1;goto B75e88e;
case 0x75e893:goto L75e893;
case 0x75e895:c.instructions+=4;goto B75e895;
case 0x75e897:c.instructions+=3;goto B75e897;
case 0x75e898:c.instructions+=2;goto B75e898;
case 0x75e899:c.instructions+=1;goto B75e899;
case 0x75e89f:goto L75e89f;
case 0x75e8a1:c.instructions+=2;goto B75e8a1;
case 0x75e8a4:c.instructions+=1;goto B75e8a4;
case 0x75e8aa:goto L75e8aa;
case 0x75e8ad:c.instructions+=1;goto B75e8ad;
case 0x75e8b3:goto L75e8b3;
case 0x75e8ba:c.instructions+=2;goto B75e8ba;
case 0x75e8bf:c.instructions+=1;goto B75e8bf;
case 0x75e8c1:goto L75e8c1;
case 0x75e8c4:goto L75e8c4;
case 0x75e8c5:c.instructions+=3;goto B75e8c5;
case 0x75e8c6:c.instructions+=2;goto B75e8c6;
case 0x75e8c8:c.instructions+=1;goto B75e8c8;
case 0x75e8cd:goto L75e8cd;
case 0x75e8d0:c.instructions+=2;goto B75e8d0;
case 0x75e8d2:c.instructions+=1;goto B75e8d2;
case 0x75e8d4:goto L75e8d4;
case 0x75e8d6:c.instructions+=1;goto B75e8d6;
case 0x75e8db:goto L75e8db;
case 0x75e8de:c.instructions+=2;goto B75e8de;
case 0x75e8df:c.instructions+=1;goto B75e8df;
case 0x75e8e1:goto L75e8e1;
case 0x75e8e4:c.instructions+=3;goto B75e8e4;
case 0x75e8e7:c.instructions+=2;goto B75e8e7;
case 0x75e8ed:c.instructions+=1;goto B75e8ed;
case 0x75e8ef:goto L75e8ef;
case 0x75e8f0:c.instructions+=3;goto B75e8f0;
case 0x75e8f5:c.instructions+=2;goto B75e8f5;
case 0x75e8f6:c.instructions+=1;goto B75e8f6;
case 0x75e8fb:goto L75e8fb;
case 0x75e8fd:c.instructions+=4;goto B75e8fd;
case 0x75e8ff:c.instructions+=3;goto B75e8ff;
case 0x75e900:c.instructions+=2;goto B75e900;
case 0x75e901:c.instructions+=1;goto B75e901;
case 0x75e903:goto L75e903;
case 0x75e906:c.instructions+=1;goto B75e906;
case 0x75e908:goto L75e908;
case 0x75e90b:c.instructions+=2;goto B75e90b;
case 0x75e90e:c.instructions+=1;goto B75e90e;
case 0x75e910:goto L75e910;
case 0x75e911:c.instructions+=4;goto B75e911;
case 0x75e914:c.instructions+=3;goto B75e914;
case 0x75e915:c.instructions+=2;goto B75e915;
case 0x75e916:c.instructions+=1;goto B75e916;
case 0x75e91b:goto L75e91b;
case 0x75e920:c.instructions+=3;goto B75e920;
case 0x75e923:c.instructions+=2;goto B75e923;
case 0x75e924:c.instructions+=1;goto B75e924;
case 0x75e929:goto L75e929;
case 0x75e92c:c.instructions+=2;goto B75e92c;
case 0x75e92e:c.instructions+=1;goto B75e92e;
case 0x75e930:goto L75e930;
case 0x75e933:goto L75e933;
case 0x75e935:c.instructions+=2;goto B75e935;
case 0x75e938:c.instructions+=1;goto B75e938;
case 0x75e93a:goto L75e93a;
case 0x75e93b:c.instructions+=2;goto B75e93b;
case 0x75e93e:c.instructions+=1;goto B75e93e;
case 0x75e944:goto L75e944;
case 0x75e946:c.instructions+=2;goto B75e946;
case 0x75e949:c.instructions+=1;goto B75e949;
case 0x75e94b:goto L75e94b;
case 0x75e950:goto L75e950;
case 0x75e952:goto L75e952;
case 0x75e954:goto L75e954;
case 0x75e957:c.instructions+=5;goto B75e957;
case 0x75e95a:c.instructions+=4;goto B75e95a;
case 0x75e95b:c.instructions+=3;goto B75e95b;
case 0x75e95c:c.instructions+=2;goto B75e95c;
case 0x75e95d:c.instructions+=1;goto B75e95d;
case 0x75e962:goto L75e962;
case 0x75e965:c.instructions+=2;goto B75e965;
case 0x75e966:c.instructions+=1;goto B75e966;
case 0x75e967:goto L75e967;
case 0x75e969:c.instructions+=1;goto B75e969;
case 0x75e96b:goto L75e96b;
case 0x75e96c:c.instructions+=6;goto B75e96c;
case 0x75e96d:c.instructions+=5;goto B75e96d;
case 0x75e96e:c.instructions+=4;goto B75e96e;
case 0x75e971:c.instructions+=3;goto B75e971;
case 0x75e972:c.instructions+=2;goto B75e972;
case 0x75e973:c.instructions+=1;goto B75e973;
case 0x75e978:goto L75e978;
case 0x75e97a:c.instructions+=3;goto B75e97a;
case 0x75e97d:c.instructions+=2;goto B75e97d;
case 0x75e97f:c.instructions+=1;goto B75e97f;
case 0x75e981:goto L75e981;
case 0x75e986:c.instructions+=2;goto B75e986;
case 0x75e988:c.instructions+=1;goto B75e988;
case 0x75e98a:goto L75e98a;
case 0x75e98c:c.instructions+=1;goto B75e98c;
case 0x75e98e:goto L75e98e;
case 0x75e990:c.instructions+=3;goto B75e990;
case 0x75e993:c.instructions+=2;goto B75e993;
case 0x75e994:c.instructions+=1;goto B75e994;
case 0x75e999:goto L75e999;
case 0x75e99b:c.instructions+=3;goto B75e99b;
case 0x75e99c:c.instructions+=2;goto B75e99c;
case 0x75e99d:c.instructions+=1;goto B75e99d;
case 0x75e99f:goto L75e99f;
case 0x75e9a2:c.instructions+=2;goto B75e9a2;
case 0x75e9a3:c.instructions+=1;goto B75e9a3;
case 0x75e9a8:goto L75e9a8;
case 0x75e9aa:c.instructions+=2;goto B75e9aa;
case 0x75e9ab:c.instructions+=1;goto B75e9ab;
case 0x75e9ad:goto L75e9ad;
case 0x75e9b0:c.instructions+=1;goto B75e9b0;
case 0x75e9b2:goto L75e9b2;
case 0x75e9b5:goto L75e9b5;
case 0x75e9b8:c.instructions+=3;goto B75e9b8;
case 0x75e9b9:c.instructions+=2;goto B75e9b9;
case 0x75e9bf:c.instructions+=1;goto B75e9bf;
case 0x75e9c1:goto L75e9c1;
case 0x75e9c3:c.instructions+=2;goto B75e9c3;
case 0x75e9c6:c.instructions+=1;goto B75e9c6;
case 0x75e9c8:goto L75e9c8;
case 0x75e9cd:goto L75e9cd;
case 0x75e9d3:c.instructions+=2;goto B75e9d3;
case 0x75e9d5:c.instructions+=1;goto B75e9d5;
case 0x75e9da:goto L75e9da;
case 0x75e9db:c.instructions+=2;goto B75e9db;
case 0x75e9e1:c.instructions+=1;goto B75e9e1;
case 0x75e9e6:goto L75e9e6;
case 0x75e9e9:c.instructions+=1;goto B75e9e9;
case 0x75e9ef:goto L75e9ef;
case 0x75e9f1:c.instructions+=1;goto B75e9f1;
case 0x75e9f6:goto L75e9f6;
case 0x75e9f8:c.instructions+=2;goto B75e9f8;
case 0x75e9fd:c.instructions+=1;goto B75e9fd;
case 0x75ea02:goto L75ea02;
case 0x75ea05:c.instructions+=3;goto B75ea05;
case 0x75ea07:c.instructions+=2;goto B75ea07;
case 0x75ea09:c.instructions+=1;goto B75ea09;
case 0x75ea0f:goto L75ea0f;
case 0x75ea12:c.instructions+=1;goto B75ea12;
case 0x75ea18:goto L75ea18;
case 0x75ea1a:c.instructions+=1;goto B75ea1a;
case 0x75ea1f:goto L75ea1f;
case 0x75ea20:c.instructions+=3;goto B75ea20;
case 0x75ea23:c.instructions+=2;goto B75ea23;
case 0x75ea26:c.instructions+=1;goto B75ea26;
case 0x75ea28:goto L75ea28;
case 0x75ea2a:c.instructions+=2;goto B75ea2a;
case 0x75ea2c:c.instructions+=1;goto B75ea2c;
case 0x75ea31:goto L75ea31;
case 0x75ea33:c.instructions+=4;goto B75ea33;
case 0x75ea35:c.instructions+=3;goto B75ea35;
case 0x75ea38:c.instructions+=2;goto B75ea38;
case 0x75ea39:c.instructions+=1;goto B75ea39;
case 0x75ea3e:goto L75ea3e;
case 0x75ea3f:c.instructions+=3;goto B75ea3f;
case 0x75ea40:c.instructions+=2;goto B75ea40;
case 0x75ea42:c.instructions+=1;goto B75ea42;
case 0x75ea47:goto L75ea47;
case 0x75ea49:c.instructions+=1;goto B75ea49;
case 0x75ea4e:goto L75ea4e;
case 0x75ea4f:c.instructions+=4;goto B75ea4f;
case 0x75ea51:c.instructions+=3;goto B75ea51;
case 0x75ea54:c.instructions+=2;goto B75ea54;
case 0x75ea56:c.instructions+=1;goto B75ea56;
case 0x75ea58:goto L75ea58;
case 0x75ea5b:c.instructions+=1;goto B75ea5b;
case 0x75ea60:goto L75ea60;
case 0x75ea63:c.instructions+=2;goto B75ea63;
case 0x75ea65:c.instructions+=1;goto B75ea65;
case 0x75ea6a:goto L75ea6a;
case 0x75ea6d:c.instructions+=2;goto B75ea6d;
case 0x75ea6f:c.instructions+=1;goto B75ea6f;
case 0x75ea75:goto L75ea75;
case 0x75ea77:c.instructions+=5;goto B75ea77;
case 0x75ea7c:c.instructions+=4;goto B75ea7c;
case 0x75ea7f:c.instructions+=3;goto B75ea7f;
case 0x75ea84:c.instructions+=2;goto B75ea84;
case 0x75ea87:c.instructions+=1;goto B75ea87;
case 0x75ea89:goto L75ea89;
case 0x75ea8c:c.instructions+=2;goto B75ea8c;
case 0x75ea8f:c.instructions+=1;goto B75ea8f;
case 0x75ea91:goto L75ea91;
case 0x75ea98:c.instructions+=3;goto B75ea98;
case 0x75ea9c:c.instructions+=2;goto B75ea9c;
case 0x75ea9d:c.instructions+=1;goto B75ea9d;
case 0x75ea9f:goto L75ea9f;
case 0x75eaa4:c.instructions+=26;goto B75eaa4;
case 0x75eaa7:c.instructions+=25;goto B75eaa7;
case 0x75eaac:c.instructions+=24;goto B75eaac;
case 0x75eaaf:c.instructions+=23;goto B75eaaf;
case 0x75eab4:c.instructions+=22;goto B75eab4;
case 0x75eab7:c.instructions+=21;goto B75eab7;
case 0x75eabc:c.instructions+=20;goto B75eabc;
case 0x75eabf:c.instructions+=19;goto B75eabf;
case 0x75eac4:c.instructions+=18;goto B75eac4;
case 0x75eac7:c.instructions+=17;goto B75eac7;
case 0x75eacc:c.instructions+=16;goto B75eacc;
case 0x75eacf:c.instructions+=15;goto B75eacf;
case 0x75ead4:c.instructions+=14;goto B75ead4;
case 0x75ead7:c.instructions+=13;goto B75ead7;
case 0x75eadc:c.instructions+=12;goto B75eadc;
case 0x75eadf:c.instructions+=11;goto B75eadf;
case 0x75eae4:c.instructions+=10;goto B75eae4;
case 0x75eae7:c.instructions+=9;goto B75eae7;
case 0x75eaec:c.instructions+=8;goto B75eaec;
case 0x75eaef:c.instructions+=7;goto B75eaef;
case 0x75eaf4:c.instructions+=6;goto B75eaf4;
case 0x75eaf7:c.instructions+=5;goto B75eaf7;
case 0x75eafc:c.instructions+=4;goto B75eafc;
case 0x75eaff:c.instructions+=3;goto B75eaff;
case 0x75eb04:c.instructions+=2;goto B75eb04;
case 0x75eb06:c.instructions+=1;goto B75eb06;
case 0x75eb08:goto L75eb08;
case 0x75eb0d:c.instructions+=1;goto B75eb0d;
case 0x75eb0f:goto L75eb0f;
case 0x75eb10:c.instructions+=1;goto B75eb10;
case 0x75eb15:goto L75eb15;
case 0x75eb16:goto L75eb16;
case 0x75eb1c:c.instructions+=1;goto B75eb1c;
case 0x75eb21:goto L75eb21;
case 0x75eb24:c.instructions+=1;goto B75eb24;
case 0x75eb26:goto L75eb26;
case 0x75eb28:c.instructions+=1;goto B75eb28;
case 0x75eb2a:goto L75eb2a;
case 0x75eb2b:c.instructions+=1;goto B75eb2b;
case 0x75eb30:goto L75eb30;
case 0x75eb31:goto L75eb31;
case 0x75eb35:c.instructions+=1;goto B75eb35;
case 0x75eb3a:goto L75eb3a;
case 0x75eb3d:c.instructions+=1;goto B75eb3d;
case 0x75eb3f:goto L75eb3f;
case 0x75eb41:c.instructions+=1;goto B75eb41;
case 0x75eb46:goto L75eb46;
case 0x75eb47:c.instructions+=1;goto B75eb47;
case 0x75eb48:goto L75eb48;
case 0x75eb4a:goto L75eb4a;
case 0x75eb4f:goto L75eb4f;
case 0x75eb50:goto L75eb50;
case 0x75eb57:c.instructions+=1;goto B75eb57;
case 0x75eb5d:goto L75eb5d;
case 0x75eb60:c.instructions+=5;goto B75eb60;
case 0x75eb65:c.instructions+=4;goto B75eb65;
case 0x75eb69:c.instructions+=3;goto B75eb69;
case 0x75eb6e:c.instructions+=2;goto B75eb6e;
case 0x75eb73:c.instructions+=1;goto B75eb73;
case 0x75eb75:goto L75eb75;
case 0x75eb78:c.instructions+=3;goto B75eb78;
case 0x75eb7c:c.instructions+=2;goto B75eb7c;
case 0x75eb80:c.instructions+=1;goto B75eb80;
case 0x75eb84:goto L75eb84;
case 0x75eb88:c.instructions+=1;goto B75eb88;
case 0x75eb8e:goto L75eb8e;
case 0x75eb90:goto L75eb90;
case 0x75eb96:c.instructions+=10;goto B75eb96;
case 0x75eb9e:c.instructions+=9;goto B75eb9e;
case 0x75eba2:c.instructions+=8;goto B75eba2;
case 0x75eba6:c.instructions+=7;goto B75eba6;
case 0x75ebab:c.instructions+=6;goto B75ebab;
case 0x75ebaf:c.instructions+=5;goto B75ebaf;
case 0x75ebb7:c.instructions+=4;goto B75ebb7;
case 0x75ebbb:c.instructions+=3;goto B75ebbb;
case 0x75ebbf:c.instructions+=2;goto B75ebbf;
case 0x75ebc4:c.instructions+=1;goto B75ebc4;
case 0x75ebc6:goto L75ebc6;
case 0x75ebcb:c.instructions+=1;goto B75ebcb;
case 0x75ebcd:goto L75ebcd;
case 0x75ebd1:c.instructions+=2;goto B75ebd1;
case 0x75ebd6:c.instructions+=1;goto B75ebd6;
case 0x75ebd8:goto L75ebd8;
case 0x75ebde:c.instructions+=2;goto B75ebde;
case 0x75ebe2:c.instructions+=1;goto B75ebe2;
case 0x75ebe3:goto L75ebe3;
case 0x75ebe7:c.instructions+=1;goto B75ebe7;
case 0x75ebe9:goto L75ebe9;
case 0x75ebee:c.instructions+=8;goto B75ebee;
case 0x75ebf1:c.instructions+=7;goto B75ebf1;
case 0x75ebf5:c.instructions+=6;goto B75ebf5;
case 0x75ebf7:c.instructions+=5;goto B75ebf7;
case 0x75ebfa:c.instructions+=4;goto B75ebfa;
case 0x75ebfe:c.instructions+=3;goto B75ebfe;
case 0x75ec02:c.instructions+=2;goto B75ec02;
case 0x75ec05:c.instructions+=1;goto B75ec05;
case 0x75ec0a:goto L75ec0a;
case 0x75ec0d:goto L75ec0d;
case 0x75ec11:c.instructions+=1;goto B75ec11;
case 0x75ec12:goto L75ec12;
case 0x75ec18:c.instructions+=5;goto B75ec18;
case 0x75ec1c:c.instructions+=4;goto B75ec1c;
case 0x75ec20:c.instructions+=3;goto B75ec20;
case 0x75ec25:c.instructions+=2;goto B75ec25;
case 0x75ec2a:c.instructions+=1;goto B75ec2a;
case 0x75ec2c:goto L75ec2c;
case 0x75ec31:c.instructions+=1;goto B75ec31;
case 0x75ec33:goto L75ec33;
case 0x75ec3b:c.instructions+=4;goto B75ec3b;
case 0x75ec3f:c.instructions+=3;goto B75ec3f;
case 0x75ec45:c.instructions+=2;goto B75ec45;
case 0x75ec49:c.instructions+=1;goto B75ec49;
case 0x75ec4a:goto L75ec4a;
case 0x75ec4c:c.instructions+=1;goto B75ec4c;
case 0x75ec4d:goto L75ec4d;
case 0x75ec56:c.instructions+=5;goto B75ec56;
case 0x75ec5e:c.instructions+=4;goto B75ec5e;
case 0x75ec66:c.instructions+=3;goto B75ec66;
case 0x75ec6c:c.instructions+=2;goto B75ec6c;
case 0x75ec70:c.instructions+=1;goto B75ec70;
case 0x75ec80:goto L75ec80;
case 0x75ec87:c.instructions+=1;goto B75ec87;
case 0x75ec8d:goto L75ec8d;
case 0x75ec90:c.instructions+=5;goto B75ec90;
case 0x75ec95:c.instructions+=4;goto B75ec95;
case 0x75ec99:c.instructions+=3;goto B75ec99;
case 0x75ec9e:c.instructions+=2;goto B75ec9e;
case 0x75eca3:c.instructions+=1;goto B75eca3;
case 0x75eca5:goto L75eca5;
case 0x75eca8:c.instructions+=3;goto B75eca8;
case 0x75ecac:c.instructions+=2;goto B75ecac;
case 0x75ecb0:c.instructions+=1;goto B75ecb0;
case 0x75ecb4:goto L75ecb4;
case 0x75ecb8:c.instructions+=1;goto B75ecb8;
case 0x75ecbe:goto L75ecbe;
case 0x75ecc0:goto L75ecc0;
case 0x75ecc6:c.instructions+=10;goto B75ecc6;
case 0x75ecce:c.instructions+=9;goto B75ecce;
case 0x75ecd2:c.instructions+=8;goto B75ecd2;
case 0x75ecd6:c.instructions+=7;goto B75ecd6;
case 0x75ecdb:c.instructions+=6;goto B75ecdb;
case 0x75ecdf:c.instructions+=5;goto B75ecdf;
case 0x75ece7:c.instructions+=4;goto B75ece7;
case 0x75eceb:c.instructions+=3;goto B75eceb;
case 0x75ecef:c.instructions+=2;goto B75ecef;
case 0x75ecf4:c.instructions+=1;goto B75ecf4;
case 0x75ecf6:goto L75ecf6;
case 0x75ecfb:c.instructions+=1;goto B75ecfb;
case 0x75ecfd:goto L75ecfd;
case 0x75ed01:c.instructions+=2;goto B75ed01;
case 0x75ed06:c.instructions+=1;goto B75ed06;
case 0x75ed08:goto L75ed08;
case 0x75ed0e:c.instructions+=2;goto B75ed0e;
case 0x75ed12:c.instructions+=1;goto B75ed12;
case 0x75ed13:goto L75ed13;
case 0x75ed17:c.instructions+=1;goto B75ed17;
case 0x75ed19:goto L75ed19;
case 0x75ed1e:c.instructions+=8;goto B75ed1e;
case 0x75ed21:c.instructions+=7;goto B75ed21;
case 0x75ed25:c.instructions+=6;goto B75ed25;
case 0x75ed27:c.instructions+=5;goto B75ed27;
case 0x75ed2a:c.instructions+=4;goto B75ed2a;
case 0x75ed2e:c.instructions+=3;goto B75ed2e;
case 0x75ed32:c.instructions+=2;goto B75ed32;
case 0x75ed35:c.instructions+=1;goto B75ed35;
case 0x75ed3a:goto L75ed3a;
case 0x75ed3d:goto L75ed3d;
case 0x75ed41:c.instructions+=1;goto B75ed41;
case 0x75ed42:goto L75ed42;
case 0x75ed48:c.instructions+=5;goto B75ed48;
case 0x75ed4c:c.instructions+=4;goto B75ed4c;
case 0x75ed50:c.instructions+=3;goto B75ed50;
case 0x75ed55:c.instructions+=2;goto B75ed55;
case 0x75ed5a:c.instructions+=1;goto B75ed5a;
case 0x75ed5c:goto L75ed5c;
case 0x75ed61:c.instructions+=1;goto B75ed61;
case 0x75ed63:goto L75ed63;
case 0x75ed6b:c.instructions+=4;goto B75ed6b;
case 0x75ed6f:c.instructions+=3;goto B75ed6f;
case 0x75ed75:c.instructions+=2;goto B75ed75;
case 0x75ed79:c.instructions+=1;goto B75ed79;
case 0x75ed7a:goto L75ed7a;
case 0x75ed80:c.instructions+=1;goto B75ed80;
case 0x75ed81:goto L75ed81;
case 0x75ed8a:c.instructions+=4;goto B75ed8a;
case 0x75ed92:c.instructions+=3;goto B75ed92;
case 0x75ed98:c.instructions+=2;goto B75ed98;
case 0x75ed9c:c.instructions+=1;goto B75ed9c;
case 0x75edb8:goto L75edb8;
case 0x75edbd:goto L75edbd;
case 0x75edc2:goto L75edc2;
case 0x75edc7:c.instructions+=1;goto B75edc7;
case 0x75edc9:goto L75edc9;
case 0x75edce:c.instructions+=1;goto B75edce;
case 0x75edda:goto L75edda;
case 0x75eddf:c.instructions+=1;goto B75eddf;
case 0x75ede4:goto L75ede4;
case 0x75ede6:goto L75ede6;
case 0x75eded:c.instructions+=1;goto B75eded;
case 0x75edef:goto L75edef;
case 0x75edf1:c.instructions+=1;goto B75edf1;
case 0x75edf3:goto L75edf3;
case 0x75edf8:goto L75edf8;
case 0x75edfb:c.instructions+=3;goto B75edfb;
case 0x75edfc:c.instructions+=2;goto B75edfc;
case 0x75edfd:c.instructions+=1;goto B75edfd;
case 0x75edff:goto L75edff;
case 0x75ee01:c.instructions+=1;goto B75ee01;
case 0x75ee4c:goto L75ee4c;
case 0x75ee53:c.instructions+=1;goto B75ee53;
case 0x75ee55:goto L75ee55;
case 0x75ee58:c.instructions+=5;goto B75ee58;
case 0x75ee5d:c.instructions+=4;goto B75ee5d;
case 0x75ee61:c.instructions+=3;goto B75ee61;
case 0x75ee66:c.instructions+=2;goto B75ee66;
case 0x75ee6b:c.instructions+=1;goto B75ee6b;
case 0x75ee6d:goto L75ee6d;
case 0x75ee70:c.instructions+=3;goto B75ee70;
case 0x75ee74:c.instructions+=2;goto B75ee74;
case 0x75ee78:c.instructions+=1;goto B75ee78;
case 0x75ee7c:goto L75ee7c;
case 0x75ee80:c.instructions+=1;goto B75ee80;
case 0x75ee82:goto L75ee82;
case 0x75ee91:goto L75ee91;
case 0x75ee96:c.instructions+=1;goto B75ee96;
case 0x75eea0:goto L75eea0;
case 0x75eea3:c.instructions+=2;goto B75eea3;
case 0x75eea6:c.instructions+=1;goto B75eea6;
case 0x75eeab:goto L75eeab;
case 0x75eeb0:goto L75eeb0;
case 0x75eeb3:c.instructions+=1;goto B75eeb3;
case 0x75eebd:goto L75eebd;
case 0x75eebe:c.instructions+=2;goto B75eebe;
case 0x75eec2:c.instructions+=1;goto B75eec2;
case 0x75eec4:goto L75eec4;
case 0x75eeca:c.instructions+=1;goto B75eeca;
case 0x75eecc:goto L75eecc;
case 0x75eed1:goto L75eed1;
case 0x75eed6:c.instructions+=1;goto B75eed6;
case 0x75eed8:goto L75eed8;
case 0x75eeda:c.instructions+=6;goto B75eeda;
case 0x75eedc:c.instructions+=5;goto B75eedc;
case 0x75eede:c.instructions+=4;goto B75eede;
case 0x75eee0:c.instructions+=3;goto B75eee0;
case 0x75eee2:c.instructions+=2;goto B75eee2;
case 0x75eee4:c.instructions+=1;goto B75eee4;
case 0x75eee6:goto L75eee6;
case 0x75eeed:c.instructions+=1;goto B75eeed;
case 0x75eef3:goto L75eef3;
case 0x75eef8:c.instructions+=2;goto B75eef8;
case 0x75eefe:c.instructions+=1;goto B75eefe;
case 0x75ef03:goto L75ef03;
case 0x75ef05:goto L75ef05;
case 0x75ef09:c.instructions+=4;goto B75ef09;
case 0x75ef0b:c.instructions+=3;goto B75ef0b;
case 0x75ef10:c.instructions+=2;goto B75ef10;
case 0x75ef14:c.instructions+=1;goto B75ef14;
case 0x75ef16:goto L75ef16;
case 0x75ef1c:c.instructions+=3;goto B75ef1c;
case 0x75ef1e:c.instructions+=2;goto B75ef1e;
case 0x75ef24:c.instructions+=1;goto B75ef24;
case 0x75ef26:goto L75ef26;
case 0x75ef28:c.instructions+=1;goto B75ef28;
case 0x75ef2a:goto L75ef2a;
case 0x75ef2f:goto L75ef2f;
case 0x75ef31:goto L75ef31;
case 0x75ef36:c.instructions+=1;goto B75ef36;
case 0x75ef38:goto L75ef38;
case 0x75ef3d:c.instructions+=1;goto B75ef3d;
case 0x75ef3f:goto L75ef3f;
case 0x75ef41:c.instructions+=2;goto B75ef41;
case 0x75ef47:c.instructions+=1;goto B75ef47;
case 0x75ef4c:goto L75ef4c;
case 0x75ef53:c.instructions+=1;goto B75ef53;
case 0x75ef59:goto L75ef59;
case 0x75ef5e:c.instructions+=2;goto B75ef5e;
case 0x75ef64:c.instructions+=1;goto B75ef64;
case 0x75ef69:goto L75ef69;
case 0x75ef6a:c.instructions+=1;goto B75ef6a;
case 0x75ef74:goto L75ef74;
case 0x75ef75:c.instructions+=11;goto B75ef75;
case 0x75ef77:c.instructions+=10;goto B75ef77;
case 0x75ef7a:c.instructions+=9;goto B75ef7a;
case 0x75ef7b:c.instructions+=8;goto B75ef7b;
case 0x75ef7c:c.instructions+=7;goto B75ef7c;
case 0x75ef7d:c.instructions+=6;goto B75ef7d;
case 0x75ef7e:c.instructions+=5;goto B75ef7e;
case 0x75ef7f:c.instructions+=4;goto B75ef7f;
case 0x75ef82:c.instructions+=3;goto B75ef82;
case 0x75ef85:c.instructions+=2;goto B75ef85;
case 0x75ef8c:c.instructions+=1;goto B75ef8c;
case 0x75ef92:goto L75ef92;
case 0x75ef95:c.instructions+=8;goto B75ef95;
case 0x75ef98:c.instructions+=7;goto B75ef98;
case 0x75ef9b:c.instructions+=6;goto B75ef9b;
case 0x75ef9e:c.instructions+=5;goto B75ef9e;
case 0x75efa1:c.instructions+=4;goto B75efa1;
case 0x75efa4:c.instructions+=3;goto B75efa4;
case 0x75efa7:c.instructions+=2;goto B75efa7;
case 0x75efaa:c.instructions+=1;goto B75efaa;
case 0x75efac:goto L75efac;
case 0x75efaf:c.instructions+=2;goto B75efaf;
case 0x75efb4:c.instructions+=1;goto B75efb4;
case 0x75efb6:goto L75efb6;
case 0x75efb7:c.instructions+=3;goto B75efb7;
case 0x75efb8:c.instructions+=2;goto B75efb8;
case 0x75efbb:c.instructions+=1;goto B75efbb;
case 0x75efbf:goto L75efbf;
case 0x75efc0:c.instructions+=4;goto B75efc0;
case 0x75efc1:c.instructions+=3;goto B75efc1;
case 0x75efc4:c.instructions+=2;goto B75efc4;
case 0x75efc6:c.instructions+=1;goto B75efc6;
case 0x75efc8:goto L75efc8;
case 0x75efca:goto L75efca;
case 0x75efcd:c.instructions+=2;goto B75efcd;
case 0x75efce:c.instructions+=1;goto B75efce;
case 0x75efd3:goto L75efd3;
case 0x75efd6:c.instructions+=4;goto B75efd6;
case 0x75efd9:c.instructions+=3;goto B75efd9;
case 0x75efda:c.instructions+=2;goto B75efda;
case 0x75efdb:c.instructions+=1;goto B75efdb;
case 0x75efe0:goto L75efe0;
case 0x75efe3:c.instructions+=4;goto B75efe3;
case 0x75efe6:c.instructions+=3;goto B75efe6;
case 0x75efe8:c.instructions+=2;goto B75efe8;
case 0x75efec:c.instructions+=1;goto B75efec;
case 0x75eff1:goto L75eff1;
case 0x75eff4:c.instructions+=2;goto B75eff4;
case 0x75eff7:c.instructions+=1;goto B75eff7;
case 0x75effb:goto L75effb;
case 0x75effe:c.instructions+=1;goto B75effe;
default:missing_instruction(c.pc);}
B75e001:L75e001:{c.instructions+=2;NFSU2_TR(0x75e001);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e005:{NFSU2_TR(0x75e005);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75e01a;}}
}
B75e007:L75e007:{c.instructions+=4;NFSU2_TR(0x75e007);
u8 U[4];
w4(U+0,u32(0x107ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e00c:{NFSU2_TR(0x75e00c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e010:{NFSU2_TR(0x75e010);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e011:{NFSU2_TR(0x75e011);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e016ull));
TAIL_STATIC(0x766361u,766);
}
B75e016:L75e016:{c.instructions+=2;NFSU2_TR(0x75e016);
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
B75e019:{NFSU2_TR(0x75e019);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e01a:L75e01a:{c.instructions+=5;NFSU2_TR(0x75e01a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e01d:{NFSU2_TR(0x75e01d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e021:{NFSU2_TR(0x75e021);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B75e025:{NFSU2_TR(0x75e025);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x107ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75e02a:{NFSU2_TR(0x75e02a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e02b:L75e02b:{c.instructions+=16;NFSU2_TR(0x75e02b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e02c:{NFSU2_TR(0x75e02c);
__builtin_memmove((R+20),(R+16),4);
}
B75e02e:{NFSU2_TR(0x75e02e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B75e031:{NFSU2_TR(0x75e031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e034:{NFSU2_TR(0x75e034);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e035:{NFSU2_TR(0x75e035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75e038:{NFSU2_TR(0x75e038);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e039:{NFSU2_TR(0x75e039);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e03c:{NFSU2_TR(0x75e03c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e03f:{NFSU2_TR(0x75e03f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e042:{NFSU2_TR(0x75e042);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e045:{NFSU2_TR(0x75e045);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e046:{NFSU2_TR(0x75e046);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x42ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75e04d:{NFSU2_TR(0x75e04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e050:{NFSU2_TR(0x75e050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e053:{NFSU2_TR(0x75e053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e058ull));
TAIL_STATIC(0x763f07u,763);
}
B75e058:L75e058:{c.instructions+=4;NFSU2_TR(0x75e058);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75e05b:{NFSU2_TR(0x75e05b);
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
B75e05d:{NFSU2_TR(0x75e05d);
__builtin_memmove((R+28),(R+0),4);
}
B75e05f:{NFSU2_TR(0x75e05f);
if(r1(R+518)){{goto L75e07b;}}
}
B75e061:L75e061:{c.instructions+=2;NFSU2_TR(0x75e061);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75e064:{NFSU2_TR(0x75e064);
if(r1(R+519)){{goto L75e06e;}}
}
B75e066:L75e066:{c.instructions+=3;NFSU2_TR(0x75e066);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e069:{NFSU2_TR(0x75e069);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x0ull))));
s1(u32(r4(R+0)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B75e06c:{NFSU2_TR(0x75e06c);
{goto L75e07b;}
}
B75e06e:L75e06e:{c.instructions+=4;NFSU2_TR(0x75e06e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e071:{NFSU2_TR(0x75e071);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e072:{NFSU2_TR(0x75e072);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e074:{NFSU2_TR(0x75e074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e079ull));
TAIL_STATIC(0x763d60u,763);
}
B75e079:L75e079:{c.instructions+=2;NFSU2_TR(0x75e079);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e07a:{NFSU2_TR(0x75e07a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e07b:L75e07b:{c.instructions+=5;NFSU2_TR(0x75e07b);
__builtin_memmove((R+0),(R+28),4);
}
B75e07d:{NFSU2_TR(0x75e07d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75e07e:{NFSU2_TR(0x75e07e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e07f:{NFSU2_TR(0x75e07f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75e080:{NFSU2_TR(0x75e080);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e081:L75e081:{c.instructions+=17;NFSU2_TR(0x75e081);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e082:{NFSU2_TR(0x75e082);
__builtin_memmove((R+20),(R+16),4);
}
B75e084:{NFSU2_TR(0x75e084);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B75e087:{NFSU2_TR(0x75e087);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e08a:{NFSU2_TR(0x75e08a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e08b:{NFSU2_TR(0x75e08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75e08e:{NFSU2_TR(0x75e08e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e091:{NFSU2_TR(0x75e091);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e092:{NFSU2_TR(0x75e092);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e095:{NFSU2_TR(0x75e095);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e096:{NFSU2_TR(0x75e096);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e099:{NFSU2_TR(0x75e099);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e09c:{NFSU2_TR(0x75e09c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e09d:{NFSU2_TR(0x75e09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x42ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75e0a4:{NFSU2_TR(0x75e0a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e0a7:{NFSU2_TR(0x75e0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e0aa:{NFSU2_TR(0x75e0aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e0afull));
TAIL_STATIC(0x763f07u,763);
}
B75e0af:L75e0af:{c.instructions+=4;NFSU2_TR(0x75e0af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75e0b2:{NFSU2_TR(0x75e0b2);
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
B75e0b4:{NFSU2_TR(0x75e0b4);
__builtin_memmove((R+28),(R+0),4);
}
B75e0b6:{NFSU2_TR(0x75e0b6);
if(r1(R+518)){{goto L75e0d2;}}
}
B75e0b8:L75e0b8:{c.instructions+=2;NFSU2_TR(0x75e0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75e0bb:{NFSU2_TR(0x75e0bb);
if(r1(R+519)){{goto L75e0c5;}}
}
B75e0bd:L75e0bd:{c.instructions+=3;NFSU2_TR(0x75e0bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e0c0:{NFSU2_TR(0x75e0c0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x0ull))));
s1(u32(r4(R+0)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B75e0c3:{NFSU2_TR(0x75e0c3);
{goto L75e0d2;}
}
B75e0c5:L75e0c5:{c.instructions+=4;NFSU2_TR(0x75e0c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e0c8:{NFSU2_TR(0x75e0c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e0c9:{NFSU2_TR(0x75e0c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e0cb:{NFSU2_TR(0x75e0cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e0d0ull));
TAIL_STATIC(0x763d60u,763);
}
B75e0d0:L75e0d0:{c.instructions+=2;NFSU2_TR(0x75e0d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e0d1:{NFSU2_TR(0x75e0d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e0d2:L75e0d2:{c.instructions+=5;NFSU2_TR(0x75e0d2);
__builtin_memmove((R+0),(R+28),4);
}
B75e0d4:{NFSU2_TR(0x75e0d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75e0d5:{NFSU2_TR(0x75e0d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e0d6:{NFSU2_TR(0x75e0d6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75e0d7:{NFSU2_TR(0x75e0d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e0d8:L75e0d8:{c.instructions+=4;NFSU2_TR(0x75e0d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e0d9:{NFSU2_TR(0x75e0d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75e0dd:{NFSU2_TR(0x75e0dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e0df:{NFSU2_TR(0x75e0df);
if(r1(R+518)){{goto L75e0ff;}}
}
B75e0e1:L75e0e1:{c.instructions+=2;NFSU2_TR(0x75e0e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e0e2:{NFSU2_TR(0x75e0e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e0e7ull));
TAIL_STATIC(0x766bc0u,766);
}
B75e0e7:L75e0e7:{c.instructions+=3;NFSU2_TR(0x75e0e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75e0e8:{NFSU2_TR(0x75e0e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e0e9:{NFSU2_TR(0x75e0e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e0eeull));
TAIL_STATIC(0x75c6c8u,75c);
}
B75e0ee:L75e0ee:{c.instructions+=4;NFSU2_TR(0x75e0ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e0f0:{NFSU2_TR(0x75e0f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e0f1:{NFSU2_TR(0x75e0f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e0f2:{NFSU2_TR(0x75e0f2);
if(r1(R+518)){{goto L75e0ff;}}
}
B75e0f4:L75e0f4:{c.instructions+=3;NFSU2_TR(0x75e0f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e0f5:{NFSU2_TR(0x75e0f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e0f6:{NFSU2_TR(0x75e0f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e0fbull));
TAIL_STATIC(0x766ac0u,766);
}
B75e0fb:L75e0fb:{c.instructions+=4;NFSU2_TR(0x75e0fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e0fc:{NFSU2_TR(0x75e0fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e0fd:{NFSU2_TR(0x75e0fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e0fe:{NFSU2_TR(0x75e0fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e0ff:L75e0ff:{c.instructions+=3;NFSU2_TR(0x75e0ff);
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
B75e101:{NFSU2_TR(0x75e101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e102:{NFSU2_TR(0x75e102);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e103:L75e103:{c.instructions+=7;NFSU2_TR(0x75e103);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e104:{NFSU2_TR(0x75e104);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75e108:{NFSU2_TR(0x75e108);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e10b:{NFSU2_TR(0x75e10b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e10c:{NFSU2_TR(0x75e10c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B75e10e:{NFSU2_TR(0x75e10e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8804),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e114:{NFSU2_TR(0x75e114);
if(r1(R+518)){{goto L75e179;}}
}
B75e116:L75e116:{c.instructions+=2;NFSU2_TR(0x75e116);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e118:{NFSU2_TR(0x75e118);
if(r1(R+518)){{goto L75e179;}}
}
B75e11a:L75e11a:{c.instructions+=3;NFSU2_TR(0x75e11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e11d:{NFSU2_TR(0x75e11d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B75e11f:{NFSU2_TR(0x75e11f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e179;}}
}
B75e121:L75e121:{c.instructions+=3;NFSU2_TR(0x75e121);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e124:{NFSU2_TR(0x75e124);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e126:{NFSU2_TR(0x75e126);
if(r1(R+518)){{goto L75e144;}}
}
B75e128:L75e128:{c.instructions+=2;NFSU2_TR(0x75e128);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B75e12a:{NFSU2_TR(0x75e12a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e144;}}
}
B75e12c:L75e12c:{c.instructions+=2;NFSU2_TR(0x75e12c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba22c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e132:{NFSU2_TR(0x75e132);
if(r1(R+518)){{goto L75e144;}}
}
B75e134:L75e134:{c.instructions+=2;NFSU2_TR(0x75e134);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e135:{NFSU2_TR(0x75e135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e13aull));
TAIL_STATIC(0x75c6dau,75c);
}
B75e13a:L75e13a:{c.instructions+=2;NFSU2_TR(0x75e13a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e13d:{NFSU2_TR(0x75e13d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e142ull));
TAIL_STATIC(0x768357u,768);
}
B75e142:L75e142:{c.instructions+=2;NFSU2_TR(0x75e142);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e143:{NFSU2_TR(0x75e143);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e144:L75e144:{c.instructions+=3;NFSU2_TR(0x75e144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e147:{NFSU2_TR(0x75e147);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e149:{NFSU2_TR(0x75e149);
if(r1(R+518)){{goto L75e167;}}
}
B75e14b:L75e14b:{c.instructions+=2;NFSU2_TR(0x75e14b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B75e14d:{NFSU2_TR(0x75e14d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e167;}}
}
B75e14f:L75e14f:{c.instructions+=2;NFSU2_TR(0x75e14f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba234),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e155:{NFSU2_TR(0x75e155);
if(r1(R+518)){{goto L75e167;}}
}
B75e157:L75e157:{c.instructions+=2;NFSU2_TR(0x75e157);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e158:{NFSU2_TR(0x75e158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e15dull));
TAIL_STATIC(0x75c6dau,75c);
}
B75e15d:L75e15d:{c.instructions+=2;NFSU2_TR(0x75e15d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e160:{NFSU2_TR(0x75e160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e165ull));
TAIL_STATIC(0x76812bu,768);
}
B75e165:L75e165:{c.instructions+=2;NFSU2_TR(0x75e165);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e166:{NFSU2_TR(0x75e166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e167:L75e167:{c.instructions+=2;NFSU2_TR(0x75e167);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e16a:{NFSU2_TR(0x75e16a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e16full));
TAIL_STATIC(0x75c6dau,75c);
}
B75e16f:L75e16f:{c.instructions+=2;NFSU2_TR(0x75e16f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e172:{NFSU2_TR(0x75e172);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e177ull));
TAIL_STATIC(0x75c6dau,75c);
}
B75e177:L75e177:{c.instructions+=2;NFSU2_TR(0x75e177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e178:{NFSU2_TR(0x75e178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e179:L75e179:{c.instructions+=3;NFSU2_TR(0x75e179);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e17c:{NFSU2_TR(0x75e17c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba228),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e182:{NFSU2_TR(0x75e182);
if(r1(R+518)){{goto L75e19c;}}
}
B75e184:L75e184:{c.instructions+=2;NFSU2_TR(0x75e184);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e186:{NFSU2_TR(0x75e186);
if(r1(R+518)){{goto L75e19c;}}
}
B75e188:L75e188:{c.instructions+=2;NFSU2_TR(0x75e188);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B75e18a:{NFSU2_TR(0x75e18a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e19c;}}
}
B75e18c:L75e18c:{c.instructions+=2;NFSU2_TR(0x75e18c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e18d:{NFSU2_TR(0x75e18d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e192ull));
TAIL_STATIC(0x75c6dau,75c);
}
B75e192:L75e192:{c.instructions+=2;NFSU2_TR(0x75e192);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e195:{NFSU2_TR(0x75e195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e19aull));
TAIL_STATIC(0x75c6dau,75c);
}
B75e19a:L75e19a:{c.instructions+=2;NFSU2_TR(0x75e19a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e19b:{NFSU2_TR(0x75e19b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e19c:L75e19c:{c.instructions+=3;NFSU2_TR(0x75e19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e19f:{NFSU2_TR(0x75e19f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8800),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e1a5:{NFSU2_TR(0x75e1a5);
if(r1(R+518)){{goto L75e1c3;}}
}
B75e1a7:L75e1a7:{c.instructions+=2;NFSU2_TR(0x75e1a7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e1a9:{NFSU2_TR(0x75e1a9);
if(r1(R+518)){{goto L75e1c3;}}
}
B75e1ab:L75e1ab:{c.instructions+=2;NFSU2_TR(0x75e1ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e1b1:{NFSU2_TR(0x75e1b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e1c3;}}
}
B75e1b3:L75e1b3:{c.instructions+=2;NFSU2_TR(0x75e1b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e1b4:{NFSU2_TR(0x75e1b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e1b9ull));
TAIL_STATIC(0x767f3cu,767);
}
B75e1b9:L75e1b9:{c.instructions+=2;NFSU2_TR(0x75e1b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e1bc:{NFSU2_TR(0x75e1bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e1c1ull));
TAIL_STATIC(0x75c6dau,75c);
}
B75e1c1:L75e1c1:{c.instructions+=2;NFSU2_TR(0x75e1c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e1c2:{NFSU2_TR(0x75e1c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e1c3:L75e1c3:{c.instructions+=2;NFSU2_TR(0x75e1c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e1c4:{NFSU2_TR(0x75e1c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e1c9ull));
TAIL_STATIC(0x75c6dau,75c);
}
B75e1c9:L75e1c9:{c.instructions+=4;NFSU2_TR(0x75e1c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e1ca:{NFSU2_TR(0x75e1ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75e1cb:{NFSU2_TR(0x75e1cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e1cc:{NFSU2_TR(0x75e1cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e1cd:L75e1cd:{c.instructions+=2;NFSU2_TR(0x75e1cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e1ce:{NFSU2_TR(0x75e1ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e1d3ull));
TAIL_STATIC(0x761e3cu,761);
}
B75e1d3:L75e1d3:{c.instructions+=4;NFSU2_TR(0x75e1d3);
__builtin_memmove((R+24),(R+0),4);
}
B75e1d5:{NFSU2_TR(0x75e1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e1d8:{NFSU2_TR(0x75e1d8);
u8 U[14];
__builtin_memmove((U+6),gp(0x819d24),4);
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
B75e1de:{NFSU2_TR(0x75e1de);
if(r1(R+518)){{goto L75e28a;}}
}
B75e1e4:L75e1e4:{c.instructions+=2;NFSU2_TR(0x75e1e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e1e6:{NFSU2_TR(0x75e1e6);
if(r1(R+518)){{goto L75e217;}}
}
B75e1e8:L75e1e8:{c.instructions+=4;NFSU2_TR(0x75e1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e1eb:{NFSU2_TR(0x75e1eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B75e1ed:{NFSU2_TR(0x75e1ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e1ef:{NFSU2_TR(0x75e1ef);
if(r1(R+518)){{goto L75e1f3;}}
}
B75e1f1:L75e1f1:{c.instructions+=1;NFSU2_TR(0x75e1f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B75e1f3:L75e1f3:{c.instructions+=3;NFSU2_TR(0x75e1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e1f6:{NFSU2_TR(0x75e1f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e1f8:{NFSU2_TR(0x75e1f8);
if(r1(R+518)){{goto L75e1fc;}}
}
B75e1fa:L75e1fa:{c.instructions+=1;NFSU2_TR(0x75e1fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B75e1fc:L75e1fc:{c.instructions+=3;NFSU2_TR(0x75e1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e1ff:{NFSU2_TR(0x75e1ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e201:{NFSU2_TR(0x75e201);
if(r1(R+518)){{goto L75e205;}}
}
B75e203:L75e203:{c.instructions+=1;NFSU2_TR(0x75e203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B75e205:L75e205:{c.instructions+=3;NFSU2_TR(0x75e205);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e208:{NFSU2_TR(0x75e208);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e20a:{NFSU2_TR(0x75e20a);
if(r1(R+518)){{goto L75e20e;}}
}
B75e20c:L75e20c:{c.instructions+=1;NFSU2_TR(0x75e20c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B75e20e:L75e20e:{c.instructions+=2;NFSU2_TR(0x75e20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e211:{NFSU2_TR(0x75e211);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75e217:L75e217:{c.instructions+=8;NFSU2_TR(0x75e217);
__builtin_memmove((R+4),gp(0x819d24),4);
}
B75e21d:{NFSU2_TR(0x75e21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e220:{NFSU2_TR(0x75e220);
__builtin_memmove((R+4),gp(0x819d24),4);
}
B75e226:{NFSU2_TR(0x75e226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B75e228:{NFSU2_TR(0x75e228);
__builtin_memmove((R+4),gp(0x819d24),4);
}
B75e22e:{NFSU2_TR(0x75e22e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e231:{NFSU2_TR(0x75e231);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e233:{NFSU2_TR(0x75e233);
if(r1(R+518)){{goto L75e237;}}
}
B75e235:L75e235:{c.instructions+=1;NFSU2_TR(0x75e235);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B75e237:L75e237:{c.instructions+=4;NFSU2_TR(0x75e237);
__builtin_memmove((R+4),gp(0x819d24),4);
}
B75e23d:{NFSU2_TR(0x75e23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e240:{NFSU2_TR(0x75e240);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e242:{NFSU2_TR(0x75e242);
if(r1(R+518)){{goto L75e246;}}
}
B75e244:L75e244:{c.instructions+=1;NFSU2_TR(0x75e244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B75e246:L75e246:{c.instructions+=4;NFSU2_TR(0x75e246);
__builtin_memmove((R+4),gp(0x819d24),4);
}
B75e24c:{NFSU2_TR(0x75e24c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e24f:{NFSU2_TR(0x75e24f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e251:{NFSU2_TR(0x75e251);
if(r1(R+518)){{goto L75e255;}}
}
B75e253:L75e253:{c.instructions+=1;NFSU2_TR(0x75e253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B75e255:L75e255:{c.instructions+=4;NFSU2_TR(0x75e255);
__builtin_memmove((R+4),gp(0x819d24),4);
}
B75e25b:{NFSU2_TR(0x75e25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e25e:{NFSU2_TR(0x75e25e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e260:{NFSU2_TR(0x75e260);
if(r1(R+518)){{goto L75e264;}}
}
B75e262:L75e262:{c.instructions+=1;NFSU2_TR(0x75e262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B75e264:L75e264:{c.instructions+=5;NFSU2_TR(0x75e264);
__builtin_memmove((R+4),gp(0x819d24),4);
}
B75e26a:{NFSU2_TR(0x75e26a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e26d:{NFSU2_TR(0x75e26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75e273:{NFSU2_TR(0x75e273);
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
B75e275:{NFSU2_TR(0x75e275);
if(r1(R+518)){{goto L75e28a;}}
}
B75e277:L75e277:{c.instructions+=2;NFSU2_TR(0x75e277);
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
B75e27a:{NFSU2_TR(0x75e27a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e28a;}}
}
B75e27c:L75e27c:{c.instructions+=2;NFSU2_TR(0x75e27c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x819cd0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x819cd0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x819cd0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75e281:{NFSU2_TR(0x75e281);
if(r1(R+518)){{goto L75e28a;}}
}
B75e283:L75e283:{c.instructions+=2;NFSU2_TR(0x75e283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e284:{NFSU2_TR(0x75e284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e289ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e103u);}goto L75e103;}
}
B75e289:L75e289:{c.instructions+=1;NFSU2_TR(0x75e289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e28a:L75e28a:{c.instructions+=3;NFSU2_TR(0x75e28a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e28d:{NFSU2_TR(0x75e28d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e28e:{NFSU2_TR(0x75e28e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e28f:L75e28f:{c.instructions+=4;NFSU2_TR(0x75e28f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e290:{NFSU2_TR(0x75e290);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75e294:{NFSU2_TR(0x75e294);
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
B75e296:{NFSU2_TR(0x75e296);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75e2b1;}}
}
B75e298:L75e298:{c.instructions+=2;NFSU2_TR(0x75e298);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e299:{NFSU2_TR(0x75e299);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B75e29d:L75e29d:{c.instructions+=4;NFSU2_TR(0x75e29d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B75e2a0:{NFSU2_TR(0x75e2a0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B75e2a2:{NFSU2_TR(0x75e2a2);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e2a6:{NFSU2_TR(0x75e2a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e2abull));
TAIL_STATIC(0x766ad0u,766);
}
B75e2ab:L75e2ab:{c.instructions+=4;NFSU2_TR(0x75e2ab);
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
B75e2ac:{NFSU2_TR(0x75e2ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e2ad:{NFSU2_TR(0x75e2ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e2ae:{NFSU2_TR(0x75e2ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e29du);}goto L75e29d;}}
}
B75e2b0:L75e2b0:{c.instructions+=1;NFSU2_TR(0x75e2b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e2b1:L75e2b1:{c.instructions+=2;NFSU2_TR(0x75e2b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75e2b2:{NFSU2_TR(0x75e2b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e2b3:L75e2b3:{c.instructions+=9;NFSU2_TR(0x75e2b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e2b4:{NFSU2_TR(0x75e2b4);
__builtin_memmove((R+20),(R+16),4);
}
B75e2b6:{NFSU2_TR(0x75e2b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e2b7:{NFSU2_TR(0x75e2b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e2b8:{NFSU2_TR(0x75e2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75e2bb:{NFSU2_TR(0x75e2bb);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e2c0:{NFSU2_TR(0x75e2c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e2c2:{NFSU2_TR(0x75e2c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e2c3:{NFSU2_TR(0x75e2c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e2c8ull));
TAIL_STATIC(0x768890u,768);
}
B75e2c8:L75e2c8:{c.instructions+=5;NFSU2_TR(0x75e2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75e2cb:{NFSU2_TR(0x75e2cb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75e2cd:{NFSU2_TR(0x75e2cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75e2d0:{NFSU2_TR(0x75e2d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75e2d2:{NFSU2_TR(0x75e2d2);
if(r1(R+518)){{goto L75e2ef;}}
}
B75e2d4:L75e2d4:{c.instructions+=2;NFSU2_TR(0x75e2d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75e2d6:{NFSU2_TR(0x75e2d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e2f6;}}
}
B75e2d8:L75e2d8:{c.instructions+=3;NFSU2_TR(0x75e2d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e2db:{NFSU2_TR(0x75e2db);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75e2de:{NFSU2_TR(0x75e2de);
if(r1(R+518)){{goto L75e2f6;}}
}
B75e2e0:L75e2e0:{c.instructions+=4;NFSU2_TR(0x75e2e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e2e1:{NFSU2_TR(0x75e2e1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x80ull))));
}
B75e2e7:{NFSU2_TR(0x75e2e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e2e8:{NFSU2_TR(0x75e2e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e2edull));
TAIL_STATIC(0x766ac0u,766);
}
B75e2ed:L75e2ed:{c.instructions+=2;NFSU2_TR(0x75e2ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e2ee:{NFSU2_TR(0x75e2ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e2ef:L75e2ef:{c.instructions+=2;NFSU2_TR(0x75e2ef);
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
B75e2f1:{NFSU2_TR(0x75e2f1);
{goto L75e37d;}
}
B75e2f6:L75e2f6:{c.instructions+=3;NFSU2_TR(0x75e2f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75e2fa:{NFSU2_TR(0x75e2fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e2fb:{NFSU2_TR(0x75e2fb);
{goto L75e368;}
}
B75e2fd:L75e2fd:{c.instructions+=4;NFSU2_TR(0x75e2fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e301:{NFSU2_TR(0x75e301);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B75e304:{NFSU2_TR(0x75e304);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B75e306:{NFSU2_TR(0x75e306);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e319;}}
}
B75e308:L75e308:{c.instructions+=2;NFSU2_TR(0x75e308);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B75e30b:{NFSU2_TR(0x75e30b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75e379;}}
}
B75e30d:L75e30d:{c.instructions+=2;NFSU2_TR(0x75e30d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75e310:{NFSU2_TR(0x75e310);
if(r1(R+518)){{goto L75e379;}}
}
B75e312:L75e312:{c.instructions+=4;NFSU2_TR(0x75e312);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e313:{NFSU2_TR(0x75e313);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e314:{NFSU2_TR(0x75e314);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e317:{NFSU2_TR(0x75e317);
{goto L75e351;}
}
B75e319:L75e319:{c.instructions+=2;NFSU2_TR(0x75e319);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e31d:{NFSU2_TR(0x75e31d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e332;}}
}
B75e31f:L75e31f:{c.instructions+=2;NFSU2_TR(0x75e31f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B75e322:{NFSU2_TR(0x75e322);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75e379;}}
}
B75e324:L75e324:{c.instructions+=2;NFSU2_TR(0x75e324);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75e327:{NFSU2_TR(0x75e327);
if(r1(R+518)){{goto L75e379;}}
}
B75e329:L75e329:{c.instructions+=4;NFSU2_TR(0x75e329);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e32a:{NFSU2_TR(0x75e32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e32d:{NFSU2_TR(0x75e32d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B75e330:{NFSU2_TR(0x75e330);
{goto L75e34f;}
}
B75e332:L75e332:{c.instructions+=2;NFSU2_TR(0x75e332);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e336:{NFSU2_TR(0x75e336);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e379;}}
}
B75e338:L75e338:{c.instructions+=2;NFSU2_TR(0x75e338);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B75e33b:{NFSU2_TR(0x75e33b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75e379;}}
}
B75e33d:L75e33d:{c.instructions+=2;NFSU2_TR(0x75e33d);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75e33f:{NFSU2_TR(0x75e33f);
if(r1(R+518)){{goto L75e346;}}
}
B75e341:L75e341:{c.instructions+=2;NFSU2_TR(0x75e341);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75e344:{NFSU2_TR(0x75e344);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e379;}}
}
B75e346:L75e346:{c.instructions+=3;NFSU2_TR(0x75e346);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e347:{NFSU2_TR(0x75e347);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e34a:{NFSU2_TR(0x75e34a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B75e34f:L75e34f:{c.instructions+=2;NFSU2_TR(0x75e34f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e350:{NFSU2_TR(0x75e350);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e351:L75e351:{c.instructions+=1;NFSU2_TR(0x75e351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e356ull));
TAIL_STATIC(0x75c840u,75c);
}
B75e356:L75e356:{c.instructions+=3;NFSU2_TR(0x75e356);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75e359:{NFSU2_TR(0x75e359);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75e35c:{NFSU2_TR(0x75e35c);
if(r1(R+518)){{goto L75e381;}}
}
B75e35e:L75e35e:{c.instructions+=2;NFSU2_TR(0x75e35e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75e360:{NFSU2_TR(0x75e360);
if(r1(R+518)){{goto L75e381;}}
}
B75e362:L75e362:{c.instructions+=2;NFSU2_TR(0x75e362);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75e365:{NFSU2_TR(0x75e365);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e368:L75e368:{c.instructions+=3;NFSU2_TR(0x75e368);
u8 U[4];
w4(U+0,u32(0x7d3c58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e36d:{NFSU2_TR(0x75e36d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e36e:{NFSU2_TR(0x75e36e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e373ull));
TAIL_STATIC(0x768840u,768);
}
B75e373:L75e373:{c.instructions+=4;NFSU2_TR(0x75e373);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e375:{NFSU2_TR(0x75e375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e376:{NFSU2_TR(0x75e376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e377:{NFSU2_TR(0x75e377);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e2fdu);}goto L75e2fd;}}
}
B75e379:L75e379:{c.instructions+=1;NFSU2_TR(0x75e379);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75e37c:L75e37c:{c.instructions+=1;NFSU2_TR(0x75e37c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75e37d:L75e37d:{c.instructions+=4;NFSU2_TR(0x75e37d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75e37e:{NFSU2_TR(0x75e37e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e37f:{NFSU2_TR(0x75e37f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75e380:{NFSU2_TR(0x75e380);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e381:L75e381:{c.instructions+=2;NFSU2_TR(0x75e381);
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
B75e383:{NFSU2_TR(0x75e383);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e37cu);}goto L75e37c;}
}
B75e385:L75e385:{c.instructions+=5;NFSU2_TR(0x75e385);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e386:{NFSU2_TR(0x75e386);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75e38a:{NFSU2_TR(0x75e38a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e38b:{NFSU2_TR(0x75e38b);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e38f:{NFSU2_TR(0x75e38f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e394ull));
TAIL_STATIC(0x766ac0u,766);
}
B75e394:L75e394:{c.instructions+=5;NFSU2_TR(0x75e394);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e397:{NFSU2_TR(0x75e397);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75e39a:{NFSU2_TR(0x75e39a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e39b:{NFSU2_TR(0x75e39b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e39c:{NFSU2_TR(0x75e39c);
if(r1(R+518)){{goto L75e3b2;}}
}
B75e39e:L75e39e:{c.instructions+=5;NFSU2_TR(0x75e39e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e39f:{NFSU2_TR(0x75e39f);
u8 U[4];
w4(U+0,u32(0x7864b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e3a4:{NFSU2_TR(0x75e3a4);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e3a6:{NFSU2_TR(0x75e3a6);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e3aa:{NFSU2_TR(0x75e3aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e3afull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e28fu);}goto L75e28f;}
}
B75e3af:L75e3af:{c.instructions+=1;NFSU2_TR(0x75e3af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75e3b2:L75e3b2:{c.instructions+=4;NFSU2_TR(0x75e3b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e3b8:{NFSU2_TR(0x75e3b8);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B75e3bb:{NFSU2_TR(0x75e3bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e3bc:{NFSU2_TR(0x75e3bc);
if(r1(R+518)){{goto L75e3d2;}}
}
B75e3be:L75e3be:{c.instructions+=5;NFSU2_TR(0x75e3be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e3bf:{NFSU2_TR(0x75e3bf);
u8 U[4];
w4(U+0,u32(0x7c32f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e3c4:{NFSU2_TR(0x75e3c4);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e3c6:{NFSU2_TR(0x75e3c6);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e3ca:{NFSU2_TR(0x75e3ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e3cfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e28fu);}goto L75e28f;}
}
B75e3cf:L75e3cf:{c.instructions+=1;NFSU2_TR(0x75e3cf);
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
B75e3d2:L75e3d2:{c.instructions+=1;NFSU2_TR(0x75e3d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e3d3:L75e3d3:{c.instructions+=3;NFSU2_TR(0x75e3d3);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e3d5:{NFSU2_TR(0x75e3d5);
u8 U[4];
w4(U+0,u32(0x7d3c60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e3da:{NFSU2_TR(0x75e3da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e3dfull));
TAIL_STATIC(0x760da0u,760);
}
B75e3df:L75e3df:{c.instructions+=2;NFSU2_TR(0x75e3df);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e3e1:{NFSU2_TR(0x75e3e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e3e6ull));
TAIL_STATIC(0x7631f1u,763);
}
B75e3e6:L75e3e6:{c.instructions+=3;NFSU2_TR(0x75e3e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e3e7:{NFSU2_TR(0x75e3e7);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B75e3eb:{NFSU2_TR(0x75e3eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e3f0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e1cdu);}goto L75e1cd;}
}
B75e3f0:L75e3f0:{c.instructions+=3;NFSU2_TR(0x75e3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e3f3:{NFSU2_TR(0x75e3f3);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B75e3f7:{NFSU2_TR(0x75e3f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e3fcull));
{goto L75e405;}
}
B75e3fc:L75e3fc:{c.instructions+=2;NFSU2_TR(0x75e3fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e3ff:{NFSU2_TR(0x75e3ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e404ull));
TAIL_STATIC(0x760ddbu,760);
}
B75e404:L75e404:{c.instructions+=1;NFSU2_TR(0x75e404);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e405:L75e405:{c.instructions+=2;NFSU2_TR(0x75e405);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e407:{NFSU2_TR(0x75e407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e40cull));
TAIL_STATIC(0x76315du,763);
}
B75e40c:L75e40c:{c.instructions+=2;NFSU2_TR(0x75e40c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e40d:{NFSU2_TR(0x75e40d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e40e:L75e40e:{c.instructions+=6;NFSU2_TR(0x75e40e);
__builtin_memmove((R+0),gp(0x819e64),4);
}
B75e413:{NFSU2_TR(0x75e413);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e414:{NFSU2_TR(0x75e414);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B75e416:{NFSU2_TR(0x75e416);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B75e417:{NFSU2_TR(0x75e417);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e419:{NFSU2_TR(0x75e419);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e431;}}
}
B75e41b:L75e41b:{c.instructions+=2;NFSU2_TR(0x75e41b);
u8 U[4];
w4(U+0,u32(0x351ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e420:{NFSU2_TR(0x75e420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e425ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B75e425:L75e425:{c.instructions+=4;NFSU2_TR(0x75e425);
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
B75e427:{NFSU2_TR(0x75e427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e428:{NFSU2_TR(0x75e428);
__builtin_memmove(gp(0x819e64),(R+0),4);
}
B75e42d:{NFSU2_TR(0x75e42d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e431;}}
}
B75e42f:L75e42f:{c.instructions+=2;NFSU2_TR(0x75e42f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75e430:{NFSU2_TR(0x75e430);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e431:L75e431:{c.instructions+=11;NFSU2_TR(0x75e431);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x0ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B75e434:{NFSU2_TR(0x75e434);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e435:{NFSU2_TR(0x75e435);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e436:{NFSU2_TR(0x75e436);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e437:{NFSU2_TR(0x75e437);
u8 U[4];
__builtin_memmove((U+0),gp(0x819e70),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e43d:{NFSU2_TR(0x75e43d);
w4(R+28,u32(0x7d3c6cull));
}
B75e442:{NFSU2_TR(0x75e442);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e443:{NFSU2_TR(0x75e443);
u8 U[4];
__builtin_memmove((U+0),gp(0x819e6c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e449:{NFSU2_TR(0x75e449);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e44b:{NFSU2_TR(0x75e44b);
u8 U[4];
__builtin_memmove((U+0),gp(0x819e64),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e451:{NFSU2_TR(0x75e451);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e456ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e28fu);}goto L75e28f;}
}
B75e456:L75e456:{c.instructions+=3;NFSU2_TR(0x75e456);
w4(R+24,u32(0x819e70ull));
}
B75e45b:{NFSU2_TR(0x75e45b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B75e45e:{NFSU2_TR(0x75e45e);
__builtin_memmove((R+12),(R+24),4);
}
B75e460:L75e460:{c.instructions+=3;NFSU2_TR(0x75e460);
u8 U[4];
w4(U+0,u32(0x7ab870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e465:{NFSU2_TR(0x75e465);
u8 U[4];
__builtin_memmove((U+0),gp(0x819e64),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e46b:{NFSU2_TR(0x75e46b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e470ull));
TAIL_STATIC(0x766ad0u,766);
}
B75e470:L75e470:{c.instructions+=4;NFSU2_TR(0x75e470);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B75e473:{NFSU2_TR(0x75e473);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B75e475:{NFSU2_TR(0x75e475);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B75e477:{NFSU2_TR(0x75e477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e47cull));
TAIL_STATIC(0x766c50u,766);
}
B75e47c:L75e47c:{c.instructions+=3;NFSU2_TR(0x75e47c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75e47f:{NFSU2_TR(0x75e47f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e481:{NFSU2_TR(0x75e481);
if(r1(R+518)){{goto L75e485;}}
}
B75e483:L75e483:{c.instructions+=1;NFSU2_TR(0x75e483);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B75e485:L75e485:{c.instructions+=7;NFSU2_TR(0x75e485);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B75e487:{NFSU2_TR(0x75e487);
__builtin_memmove((R+12),(R+24),4);
}
B75e489:{NFSU2_TR(0x75e489);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e48a:{NFSU2_TR(0x75e48a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e48d:{NFSU2_TR(0x75e48d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e48f:{NFSU2_TR(0x75e48f);
u8 U[4];
__builtin_memmove((U+0),gp(0x819e64),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e495:{NFSU2_TR(0x75e495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e49aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e28fu);}goto L75e28f;}
}
B75e49a:L75e49a:{c.instructions+=3;NFSU2_TR(0x75e49a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B75e49d:{NFSU2_TR(0x75e49d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x819ea0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x819ea0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75e4a3:{NFSU2_TR(0x75e4a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e460u);}goto L75e460;}}
}
B75e4a5:L75e4a5:{c.instructions+=5;NFSU2_TR(0x75e4a5);
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
B75e4a7:{NFSU2_TR(0x75e4a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75e4a8:{NFSU2_TR(0x75e4a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e4a9:{NFSU2_TR(0x75e4a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75e4aa:{NFSU2_TR(0x75e4aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e4b3;}}
}
B75e4ac:L75e4ac:{c.instructions+=3;NFSU2_TR(0x75e4ac);
__builtin_memmove((R+0),gp(0x819e64),4);
}
B75e4b1:{NFSU2_TR(0x75e4b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75e4b2:{NFSU2_TR(0x75e4b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e4b3:L75e4b3:{c.instructions+=2;NFSU2_TR(0x75e4b3);
u8 U[4];
__builtin_memmove((U+0),gp(0x819e64),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e4b9:{NFSU2_TR(0x75e4b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e4beull));
TAIL_STATIC(0x75c6dau,75c);
}
B75e4be:L75e4be:{c.instructions+=5;NFSU2_TR(0x75e4be);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x819e64,u32(u32(m4(0x819e64))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x819e64))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x819e64))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x819e64))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75e4c5:{NFSU2_TR(0x75e4c5);
__builtin_memmove((R+0),gp(0x819e7c),4);
}
B75e4ca:{NFSU2_TR(0x75e4ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e4cb:{NFSU2_TR(0x75e4cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75e4cc:{NFSU2_TR(0x75e4cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e4cd:L75e4cd:{c.instructions+=11;NFSU2_TR(0x75e4cd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e4ce:{NFSU2_TR(0x75e4ce);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B75e4d2:{NFSU2_TR(0x75e4d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x94ull))));
}
B75e4d8:{NFSU2_TR(0x75e4d8);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75e4dd:{NFSU2_TR(0x75e4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B75e4e0:{NFSU2_TR(0x75e4e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e4e1:{NFSU2_TR(0x75e4e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75e4e4:{NFSU2_TR(0x75e4e4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75e4e6:{NFSU2_TR(0x75e4e6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e4e8:{NFSU2_TR(0x75e4e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e4eb:{NFSU2_TR(0x75e4eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e4f4;}}
}
B75e4ed:L75e4ed:{c.instructions+=2;NFSU2_TR(0x75e4ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75e4ef:{NFSU2_TR(0x75e4ef);
{goto L75e5e8;}
}
B75e4f4:L75e4f4:{c.instructions+=2;NFSU2_TR(0x75e4f4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x43ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75e4f7:{NFSU2_TR(0x75e4f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e52d;}}
}
B75e4f9:L75e4f9:{c.instructions+=2;NFSU2_TR(0x75e4f9);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B75e4fd:{NFSU2_TR(0x75e4fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e52d;}}
}
B75e4ff:L75e4ff:{c.instructions+=6;NFSU2_TR(0x75e4ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e502:{NFSU2_TR(0x75e502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e505:{NFSU2_TR(0x75e505);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B75e509:{NFSU2_TR(0x75e509);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e50b:{NFSU2_TR(0x75e50b);
u8 U[1];
w1(U+0,u8(0x43ull));
s1(u32(r4(R+0)),r1(U+0));
}
B75e50e:{NFSU2_TR(0x75e50e);
if(r1(R+518)){{goto L75e51b;}}
}
B75e510:L75e510:{c.instructions+=3;NFSU2_TR(0x75e510);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+4)),r2(U+0));
}
B75e513:{NFSU2_TR(0x75e513);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B75e517:{NFSU2_TR(0x75e517);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B75e51b:L75e51b:{c.instructions+=3;NFSU2_TR(0x75e51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e51e:{NFSU2_TR(0x75e51e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e520:{NFSU2_TR(0x75e520);
if(r1(R+518)){{goto L75e5e8;}}
}
B75e526:L75e526:{c.instructions+=2;NFSU2_TR(0x75e526);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B75e528:{NFSU2_TR(0x75e528);
{goto L75e5e8;}
}
B75e52d:L75e52d:{c.instructions+=6;NFSU2_TR(0x75e52d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e52e:{NFSU2_TR(0x75e52e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e52f:{NFSU2_TR(0x75e52f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e530:{NFSU2_TR(0x75e530);
w4(R+28,u32(0x819dd8ull));
}
B75e535:{NFSU2_TR(0x75e535);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e536:{NFSU2_TR(0x75e536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e53bull));
TAIL_STATIC(0x766c50u,766);
}
B75e53b:L75e53b:{c.instructions+=4;NFSU2_TR(0x75e53b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e53d:{NFSU2_TR(0x75e53d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e53e:{NFSU2_TR(0x75e53e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e53f:{NFSU2_TR(0x75e53f);
if(r1(R+518)){{goto L75e5a9;}}
}
B75e541:L75e541:{c.instructions+=4;NFSU2_TR(0x75e541);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e542:{NFSU2_TR(0x75e542);
w4(R+12,u32(0x819d50ull));
}
B75e547:{NFSU2_TR(0x75e547);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e548:{NFSU2_TR(0x75e548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e54dull));
TAIL_STATIC(0x766c50u,766);
}
B75e54d:L75e54d:{c.instructions+=4;NFSU2_TR(0x75e54d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e54f:{NFSU2_TR(0x75e54f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e550:{NFSU2_TR(0x75e550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e551:{NFSU2_TR(0x75e551);
if(r1(R+518)){{goto L75e5a9;}}
}
B75e553:L75e553:{c.instructions+=4;NFSU2_TR(0x75e553);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e556:{NFSU2_TR(0x75e556);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e557:{NFSU2_TR(0x75e557);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e558:{NFSU2_TR(0x75e558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e55dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e2b3u);}goto L75e2b3;}
}
B75e55d:L75e55d:{c.instructions+=4;NFSU2_TR(0x75e55d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e55f:{NFSU2_TR(0x75e55f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e560:{NFSU2_TR(0x75e560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e561:{NFSU2_TR(0x75e561);
if(r1(R+518)){{goto L75e567;}}
}
B75e563:L75e563:{c.instructions+=2;NFSU2_TR(0x75e563);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75e565:{NFSU2_TR(0x75e565);
{goto L75e5e6;}
}
B75e567:L75e567:{c.instructions+=6;NFSU2_TR(0x75e567);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e56a:{NFSU2_TR(0x75e56a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e56b:{NFSU2_TR(0x75e56b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e56e:{NFSU2_TR(0x75e56e);
u8 U[4];
w4(U+0,u32(0x8b8478ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e573:{NFSU2_TR(0x75e573);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e574:{NFSU2_TR(0x75e574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e579ull));
TAIL_STATIC(0x76904du,769);
}
B75e579:L75e579:{c.instructions+=3;NFSU2_TR(0x75e579);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75e57c:{NFSU2_TR(0x75e57c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e57e:{NFSU2_TR(0x75e57e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e563u);}goto L75e563;}}
}
B75e580:L75e580:{c.instructions+=6;NFSU2_TR(0x75e580);
w4(R+0,u32(m2(0x8b847c)));
}
B75e587:{NFSU2_TR(0x75e587);
__builtin_memmove(gp(0x8b8480),(R+0),4);
}
B75e58c:{NFSU2_TR(0x75e58c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e58f:{NFSU2_TR(0x75e58f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e590:{NFSU2_TR(0x75e590);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e591:{NFSU2_TR(0x75e591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e596ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e385u);}goto L75e385;}
}
B75e596:L75e596:{c.instructions+=4;NFSU2_TR(0x75e596);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75e599:{NFSU2_TR(0x75e599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e59a:{NFSU2_TR(0x75e59a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e59b:{NFSU2_TR(0x75e59b);
if(r1(R+518)){{goto L75e5a0;}}
}
B75e59d:L75e59d:{c.instructions+=2;NFSU2_TR(0x75e59d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e59e:{NFSU2_TR(0x75e59e);
{goto L75e5a1;}
}
B75e5a0:L75e5a0:{c.instructions+=1;NFSU2_TR(0x75e5a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e5a1:L75e5a1:{c.instructions+=2;NFSU2_TR(0x75e5a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e5a2:{NFSU2_TR(0x75e5a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e5a7ull));
TAIL_STATIC(0x766ac0u,766);
}
B75e5a7:L75e5a7:{c.instructions+=2;NFSU2_TR(0x75e5a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e5a8:{NFSU2_TR(0x75e5a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e5a9:L75e5a9:{c.instructions+=2;NFSU2_TR(0x75e5a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e5ad:{NFSU2_TR(0x75e5ad);
if(r1(R+518)){{goto L75e5c1;}}
}
B75e5af:L75e5af:{c.instructions+=4;NFSU2_TR(0x75e5af);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e5b1:{NFSU2_TR(0x75e5b1);
u8 U[4];
w4(U+0,u32(0x8b8478ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e5b6:{NFSU2_TR(0x75e5b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e5b9:{NFSU2_TR(0x75e5b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e5beull));
TAIL_STATIC(0x760df0u,760);
}
B75e5be:L75e5be:{c.instructions+=1;NFSU2_TR(0x75e5be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75e5c1:L75e5c1:{c.instructions+=2;NFSU2_TR(0x75e5c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e5c5:{NFSU2_TR(0x75e5c5);
if(r1(R+518)){{goto L75e5d9;}}
}
B75e5c7:L75e5c7:{c.instructions+=4;NFSU2_TR(0x75e5c7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e5c9:{NFSU2_TR(0x75e5c9);
u8 U[4];
w4(U+0,u32(0x8b8480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e5ce:{NFSU2_TR(0x75e5ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e5d1:{NFSU2_TR(0x75e5d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e5d6ull));
TAIL_STATIC(0x760df0u,760);
}
B75e5d6:L75e5d6:{c.instructions+=1;NFSU2_TR(0x75e5d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75e5d9:L75e5d9:{c.instructions+=3;NFSU2_TR(0x75e5d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e5da:{NFSU2_TR(0x75e5da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e5dd:{NFSU2_TR(0x75e5dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e5e2ull));
TAIL_STATIC(0x766ac0u,766);
}
B75e5e2:L75e5e2:{c.instructions+=3;NFSU2_TR(0x75e5e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e5e3:{NFSU2_TR(0x75e5e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e5e4:{NFSU2_TR(0x75e5e4);
__builtin_memmove((R+0),(R+28),4);
}
B75e5e6:L75e5e6:{c.instructions+=2;NFSU2_TR(0x75e5e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75e5e7:{NFSU2_TR(0x75e5e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75e5e8:L75e5e8:{c.instructions+=4;NFSU2_TR(0x75e5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e5eb:{NFSU2_TR(0x75e5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B75e5ee:{NFSU2_TR(0x75e5ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e5ef:{NFSU2_TR(0x75e5ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e5f4ull));
TAIL_STATIC(0x76115eu,761);
}
B75e5f4:L75e5f4:{c.instructions+=3;NFSU2_TR(0x75e5f4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x64ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75e5f7:{NFSU2_TR(0x75e5f7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75e5f8:{NFSU2_TR(0x75e5f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e5f9:L75e5f9:{c.instructions+=15;NFSU2_TR(0x75e5f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e5fa:{NFSU2_TR(0x75e5fa);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B75e5fe:{NFSU2_TR(0x75e5fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1c0ull))));
}
B75e604:{NFSU2_TR(0x75e604);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75e609:{NFSU2_TR(0x75e609);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B75e60c:{NFSU2_TR(0x75e60c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e60d:{NFSU2_TR(0x75e60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e610:{NFSU2_TR(0x75e610);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e613:{NFSU2_TR(0x75e613);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e614:{NFSU2_TR(0x75e614);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e617:{NFSU2_TR(0x75e617);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e618:{NFSU2_TR(0x75e618);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e61b:{NFSU2_TR(0x75e61b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e61c:{NFSU2_TR(0x75e61c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e61f:{NFSU2_TR(0x75e61f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e624ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e4cdu);}goto L75e4cd;}
}
B75e624:L75e624:{c.instructions+=3;NFSU2_TR(0x75e624);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B75e627:{NFSU2_TR(0x75e627);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e629:{NFSU2_TR(0x75e629);
if(r1(R+518)){{goto L75e807;}}
}
B75e62f:L75e62f:{c.instructions+=8;NFSU2_TR(0x75e62f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e630:{NFSU2_TR(0x75e630);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B75e633:{NFSU2_TR(0x75e633);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e634:{NFSU2_TR(0x75e634);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B75e637:{NFSU2_TR(0x75e637);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x819e64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e63d:{NFSU2_TR(0x75e63d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e640:{NFSU2_TR(0x75e640);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e641:{NFSU2_TR(0x75e641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e646ull));
TAIL_STATIC(0x766c50u,766);
}
B75e646:L75e646:{c.instructions+=4;NFSU2_TR(0x75e646);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e648:{NFSU2_TR(0x75e648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e649:{NFSU2_TR(0x75e649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e64a:{NFSU2_TR(0x75e64a);
if(r1(R+518)){{goto L75e7ff;}}
}
B75e650:L75e650:{c.instructions+=3;NFSU2_TR(0x75e650);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e653:{NFSU2_TR(0x75e653);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e654:{NFSU2_TR(0x75e654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e659ull));
TAIL_STATIC(0x766bc0u,766);
}
B75e659:L75e659:{c.instructions+=3;NFSU2_TR(0x75e659);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75e65a:{NFSU2_TR(0x75e65a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e65b:{NFSU2_TR(0x75e65b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e660ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B75e660:L75e660:{c.instructions+=5;NFSU2_TR(0x75e660);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e662:{NFSU2_TR(0x75e662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e663:{NFSU2_TR(0x75e663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e664:{NFSU2_TR(0x75e664);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e667:{NFSU2_TR(0x75e667);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e670;}}
}
B75e669:L75e669:{c.instructions+=2;NFSU2_TR(0x75e669);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75e66b:{NFSU2_TR(0x75e66b);
{goto L75e805;}
}
B75e670:L75e670:{c.instructions+=13;NFSU2_TR(0x75e670);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x819e64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e676:{NFSU2_TR(0x75e676);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e679:{NFSU2_TR(0x75e679);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b882cull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B75e680:{NFSU2_TR(0x75e680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75e682:{NFSU2_TR(0x75e682);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e685:{NFSU2_TR(0x75e685);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75e688:{NFSU2_TR(0x75e688);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b8850ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75e68f:{NFSU2_TR(0x75e68f);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e691:{NFSU2_TR(0x75e691);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e692:{NFSU2_TR(0x75e692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e695:{NFSU2_TR(0x75e695);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e698:{NFSU2_TR(0x75e698);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e699:{NFSU2_TR(0x75e699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e69eull));
TAIL_STATIC(0x760df0u,760);
}
B75e69e:L75e69e:{c.instructions+=6;NFSU2_TR(0x75e69e);
__builtin_memmove((R+0),gp(0x8b8844),4);
}
B75e6a3:{NFSU2_TR(0x75e6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e6a6:{NFSU2_TR(0x75e6a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e6a9:{NFSU2_TR(0x75e6a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e6aa:{NFSU2_TR(0x75e6aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e6ad:{NFSU2_TR(0x75e6ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e6b2ull));
TAIL_STATIC(0x766ac0u,766);
}
B75e6b2:L75e6b2:{c.instructions+=8;NFSU2_TR(0x75e6b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x819e64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e6b8:{NFSU2_TR(0x75e6b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B75e6bc:{NFSU2_TR(0x75e6bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B75e6be:{NFSU2_TR(0x75e6be);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e6c0:{NFSU2_TR(0x75e6c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e6c3:{NFSU2_TR(0x75e6c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e6c4:{NFSU2_TR(0x75e6c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e6c7:{NFSU2_TR(0x75e6c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e6ccull));
TAIL_STATIC(0x760df0u,760);
}
B75e6cc:L75e6cc:{c.instructions+=3;NFSU2_TR(0x75e6cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B75e6cf:{NFSU2_TR(0x75e6cf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e6d2:{NFSU2_TR(0x75e6d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e7b2;}}
}
B75e6d8:L75e6d8:{c.instructions+=7;NFSU2_TR(0x75e6d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e6db:{NFSU2_TR(0x75e6db);
__builtin_memmove((R+4),gp(0x819d48),4);
}
B75e6e1:{NFSU2_TR(0x75e6e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75e6e5:{NFSU2_TR(0x75e6e5);
__builtin_memmove(gp(0x8b8844),(R+0),4);
}
B75e6ea:{NFSU2_TR(0x75e6ea);
__builtin_memmove((R+0),gp(0x819d4c),4);
}
B75e6ef:{NFSU2_TR(0x75e6ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e6f2:{NFSU2_TR(0x75e6f2);
w4(R+0,u32(0x819d28ull));
}
B75e6f7:L75e6f7:{c.instructions+=3;NFSU2_TR(0x75e6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75e6fa:{NFSU2_TR(0x75e6fa);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B75e6fc:{NFSU2_TR(0x75e6fc);
if(r1(R+518)){{goto L75e723;}}
}
B75e6fe:L75e6fe:{c.instructions+=12;NFSU2_TR(0x75e6fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B75e700:{NFSU2_TR(0x75e700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75e703:{NFSU2_TR(0x75e703);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B75e705:{NFSU2_TR(0x75e705);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e708:{NFSU2_TR(0x75e708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e70b:{NFSU2_TR(0x75e70b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75e70e:{NFSU2_TR(0x75e70e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e711:{NFSU2_TR(0x75e711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e714:{NFSU2_TR(0x75e714);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B75e717:{NFSU2_TR(0x75e717);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x819d50ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x819d50ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75e71c:{NFSU2_TR(0x75e71c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e71f:{NFSU2_TR(0x75e71f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e6f7u);}goto L75e6f7;}}
}
B75e721:L75e721:{c.instructions+=1;NFSU2_TR(0x75e721);
{goto L75e746;}
}
B75e723:L75e723:{c.instructions+=9;NFSU2_TR(0x75e723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e726:{NFSU2_TR(0x75e726);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x819d28ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75e72d:{NFSU2_TR(0x75e72d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B75e72f:{NFSU2_TR(0x75e72f);
__builtin_memmove(gp(0x819d28),(R+8),4);
}
B75e735:{NFSU2_TR(0x75e735);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75e738:{NFSU2_TR(0x75e738);
__builtin_memmove(gp(0x819d2c),(R+8),4);
}
B75e73e:{NFSU2_TR(0x75e73e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B75e740:{NFSU2_TR(0x75e740);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e743:{NFSU2_TR(0x75e743);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e746:L75e746:{c.instructions+=2;NFSU2_TR(0x75e746);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e74a:{NFSU2_TR(0x75e74a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e7a8;}}
}
B75e74c:L75e74c:{c.instructions+=9;NFSU2_TR(0x75e74c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e74e:{NFSU2_TR(0x75e74e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8834),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e754:{NFSU2_TR(0x75e754);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e75a:{NFSU2_TR(0x75e75a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e75d:{NFSU2_TR(0x75e75d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e75e:{NFSU2_TR(0x75e75e);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e760:{NFSU2_TR(0x75e760);
u8 U[4];
w4(U+0,u32(0x7d3b98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e765:{NFSU2_TR(0x75e765);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e767:{NFSU2_TR(0x75e767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e76cull));
TAIL_STATIC(0x7692c8u,769);
}
B75e76c:L75e76c:{c.instructions+=3;NFSU2_TR(0x75e76c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B75e76f:{NFSU2_TR(0x75e76f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e771:{NFSU2_TR(0x75e771);
if(r1(R+518)){{goto L75e793;}}
}
B75e773:L75e773:{c.instructions+=5;NFSU2_TR(0x75e773);
u8 U[4];
w4(U+0,u32(0xfeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e778:{NFSU2_TR(0x75e778);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e77e:{NFSU2_TR(0x75e77e);
u8 U[4];
w4(U+0,u32(0x7d3a98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e783:{NFSU2_TR(0x75e783);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e784:{NFSU2_TR(0x75e784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e789ull));
TAIL_STATIC(0x769210u,769);
}
B75e789:L75e789:{c.instructions+=5;NFSU2_TR(0x75e789);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75e78c:{NFSU2_TR(0x75e78c);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B75e78e:{NFSU2_TR(0x75e78e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B75e790:{NFSU2_TR(0x75e790);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75e791:{NFSU2_TR(0x75e791);
{goto L75e795;}
}
B75e793:L75e793:{c.instructions+=1;NFSU2_TR(0x75e793);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75e795:L75e795:{c.instructions+=4;NFSU2_TR(0x75e795);
__builtin_memmove((R+4),gp(0x8b8844),4);
}
B75e79b:{NFSU2_TR(0x75e79b);
__builtin_memmove(gp(0x819d2c),(R+0),4);
}
B75e7a0:{NFSU2_TR(0x75e7a0);
__builtin_memmove(gp(0x819d28),(R+4),4);
}
B75e7a6:{NFSU2_TR(0x75e7a6);
{goto L75e7ad;}
}
B75e7a8:L75e7a8:{c.instructions+=1;NFSU2_TR(0x75e7a8);
__builtin_memmove((R+0),gp(0x819d2c),4);
}
B75e7ad:L75e7ad:{c.instructions+=1;NFSU2_TR(0x75e7ad);
__builtin_memmove(gp(0x81aa40),(R+0),4);
}
B75e7b2:L75e7b2:{c.instructions+=2;NFSU2_TR(0x75e7b2);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B75e7b5:{NFSU2_TR(0x75e7b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e7bf;}}
}
B75e7b7:L75e7b7:{c.instructions+=2;NFSU2_TR(0x75e7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e7ba:{NFSU2_TR(0x75e7ba);
__builtin_memmove(gp(0x8b8848),(R+0),4);
}
B75e7bf:L75e7bf:{c.instructions+=1;NFSU2_TR(0x75e7bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x819e68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e7c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75e7c5:L75e7c5:{c.instructions+=2;NFSU2_TR(0x75e7c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e7c7:{NFSU2_TR(0x75e7c7);
if(r1(R+518)){{goto L75e7ed;}}
}
B75e7c9:L75e7c9:{c.instructions+=4;NFSU2_TR(0x75e7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e7cc:{NFSU2_TR(0x75e7cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e7cf:{NFSU2_TR(0x75e7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x819e64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e7d5:{NFSU2_TR(0x75e7d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e7daull));
TAIL_STATIC(0x75c6dau,75c);
}
B75e7da:L75e7da:{c.instructions+=6;NFSU2_TR(0x75e7da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e7dd:{NFSU2_TR(0x75e7dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B75e7df:{NFSU2_TR(0x75e7df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e7e2:{NFSU2_TR(0x75e7e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e7e3:{NFSU2_TR(0x75e7e3);
__builtin_memmove(gp(0x8b8844),(R+0),4);
}
B75e7e8:{NFSU2_TR(0x75e7e8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e669u);}goto L75e669;}
}
B75e7ed:L75e7ed:{c.instructions+=2;NFSU2_TR(0x75e7ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x819cc8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e7f4:{NFSU2_TR(0x75e7f4);
if(r1(R+518)){{goto L75e7ff;}}
}
B75e7f6:L75e7f6:{c.instructions+=2;NFSU2_TR(0x75e7f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75e7f9:{NFSU2_TR(0x75e7f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e7feull));
TAIL_STATIC(0x75c6dau,75c);
}
B75e7fe:L75e7fe:{c.instructions+=1;NFSU2_TR(0x75e7fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e7ff:L75e7ff:{c.instructions+=1;NFSU2_TR(0x75e7ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x819e64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e805:L75e805:{c.instructions+=2;NFSU2_TR(0x75e805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75e806:{NFSU2_TR(0x75e806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75e807:L75e807:{c.instructions+=3;NFSU2_TR(0x75e807);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e80a:{NFSU2_TR(0x75e80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B75e80d:{NFSU2_TR(0x75e80d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e812ull));
TAIL_STATIC(0x76115eu,761);
}
B75e812:L75e812:{c.instructions+=3;NFSU2_TR(0x75e812);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x74ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x74ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x74ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75e815:{NFSU2_TR(0x75e815);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75e816:{NFSU2_TR(0x75e816);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e817:L75e817:{c.instructions+=14;NFSU2_TR(0x75e817);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e818:{NFSU2_TR(0x75e818);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff88ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B75e81c:{NFSU2_TR(0x75e81c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x94ull))));
}
B75e822:{NFSU2_TR(0x75e822);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75e827:{NFSU2_TR(0x75e827);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B75e82a:{NFSU2_TR(0x75e82a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e82b:{NFSU2_TR(0x75e82b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e82c:{NFSU2_TR(0x75e82c);
__builtin_memmove((R+24),(R+8),4);
}
B75e82e:{NFSU2_TR(0x75e82e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B75e830:{NFSU2_TR(0x75e830);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e832:{NFSU2_TR(0x75e832);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e833:{NFSU2_TR(0x75e833);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e836:{NFSU2_TR(0x75e836);
__builtin_memmove((R+28),(R+4),4);
}
B75e838:{NFSU2_TR(0x75e838);
if(r1(R+518)){{goto L75e859;}}
}
B75e83a:L75e83a:{c.instructions+=2;NFSU2_TR(0x75e83a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e83c:{NFSU2_TR(0x75e83c);
if(r1(R+518)){{goto L75e84a;}}
}
B75e83e:L75e83e:{c.instructions+=2;NFSU2_TR(0x75e83e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e83f:{NFSU2_TR(0x75e83f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e844ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e5f9u);}goto L75e5f9;}
}
B75e844:L75e844:{c.instructions+=2;NFSU2_TR(0x75e844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e845:{NFSU2_TR(0x75e845);
{goto L75e950;}
}
B75e84a:L75e84a:{c.instructions+=3;NFSU2_TR(0x75e84a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75e84d:{NFSU2_TR(0x75e84d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819e64ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B75e854:{NFSU2_TR(0x75e854);
{goto L75e952;}
}
B75e859:L75e859:{c.instructions+=4;NFSU2_TR(0x75e859);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e85b:{NFSU2_TR(0x75e85b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75e862:{NFSU2_TR(0x75e862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e865:{NFSU2_TR(0x75e865);
if(r1(R+518)){{goto L75e94b;}}
}
B75e86b:L75e86b:{c.instructions+=2;NFSU2_TR(0x75e86b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x4cull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75e86e:{NFSU2_TR(0x75e86e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e96b;}}
}
B75e874:L75e874:{c.instructions+=2;NFSU2_TR(0x75e874);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x43ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B75e878:{NFSU2_TR(0x75e878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e96b;}}
}
B75e87e:L75e87e:{c.instructions+=2;NFSU2_TR(0x75e87e);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B75e882:{NFSU2_TR(0x75e882);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e96b;}}
}
B75e888:L75e888:{c.instructions+=3;NFSU2_TR(0x75e888);
u8 U[4];
w4(U+0,u32(0x7d3c70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e88d:{NFSU2_TR(0x75e88d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e88e:{NFSU2_TR(0x75e88e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e893ull));
TAIL_STATIC(0x769490u,769);
}
B75e893:L75e893:{c.instructions+=5;NFSU2_TR(0x75e893);
__builtin_memmove((R+12),(R+0),4);
}
B75e895:{NFSU2_TR(0x75e895);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e897:{NFSU2_TR(0x75e897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e898:{NFSU2_TR(0x75e898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e899:{NFSU2_TR(0x75e899);
if(r1(R+518)){{goto L75e967;}}
}
B75e89f:L75e89f:{c.instructions+=3;NFSU2_TR(0x75e89f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75e8a1:{NFSU2_TR(0x75e8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75e8a4:{NFSU2_TR(0x75e8a4);
if(r1(R+518)){{goto L75e967;}}
}
B75e8aa:L75e8aa:{c.instructions+=2;NFSU2_TR(0x75e8aa);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x3bull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x3bull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x3bull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B75e8ad:{NFSU2_TR(0x75e8ad);
if(r1(R+518)){{goto L75e967;}}
}
B75e8b3:L75e8b3:{c.instructions+=3;NFSU2_TR(0x75e8b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75e8ba:{NFSU2_TR(0x75e8ba);
w4(R+24,u32(0x819e6cull));
}
B75e8bf:{NFSU2_TR(0x75e8bf);
{goto L75e8c4;}
}
B75e8c1:L75e8c1:{c.instructions+=1;NFSU2_TR(0x75e8c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75e8c4:L75e8c4:{c.instructions+=4;NFSU2_TR(0x75e8c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e8c5:{NFSU2_TR(0x75e8c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e8c6:{NFSU2_TR(0x75e8c6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B75e8c8:{NFSU2_TR(0x75e8c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e8cdull));
TAIL_STATIC(0x75f1d0u,75f);
}
B75e8cd:L75e8cd:{c.instructions+=3;NFSU2_TR(0x75e8cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75e8d0:{NFSU2_TR(0x75e8d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e8d2:{NFSU2_TR(0x75e8d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e8e1;}}
}
B75e8d4:L75e8d4:{c.instructions+=2;NFSU2_TR(0x75e8d4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B75e8d6:{NFSU2_TR(0x75e8d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e8dbull));
TAIL_STATIC(0x766bc0u,766);
}
B75e8db:L75e8db:{c.instructions+=3;NFSU2_TR(0x75e8db);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e8de:{NFSU2_TR(0x75e8de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e8df:{NFSU2_TR(0x75e8df);
if(r1(R+518)){{goto L75e8ef;}}
}
B75e8e1:L75e8e1:{c.instructions+=4;NFSU2_TR(0x75e8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75e8e4:{NFSU2_TR(0x75e8e4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B75e8e7:{NFSU2_TR(0x75e8e7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x819e9cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x819e9cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x819e9cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75e8ed:{NFSU2_TR(0x75e8ed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e8c1u);}goto L75e8c1;}}
}
B75e8ef:L75e8ef:{c.instructions+=4;NFSU2_TR(0x75e8ef);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B75e8f0:{NFSU2_TR(0x75e8f0);
u8 U[4];
w4(U+0,u32(0x7ab870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e8f5:{NFSU2_TR(0x75e8f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e8f6:{NFSU2_TR(0x75e8f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e8fbull));
TAIL_STATIC(0x768840u,768);
}
B75e8fb:L75e8fb:{c.instructions+=5;NFSU2_TR(0x75e8fb);
__builtin_memmove((R+28),(R+0),4);
}
B75e8fd:{NFSU2_TR(0x75e8fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e8ff:{NFSU2_TR(0x75e8ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e900:{NFSU2_TR(0x75e900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e901:{NFSU2_TR(0x75e901);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e908;}}
}
B75e903:L75e903:{c.instructions+=2;NFSU2_TR(0x75e903);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x3bull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75e906:{NFSU2_TR(0x75e906);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e967;}}
}
B75e908:L75e908:{c.instructions+=3;NFSU2_TR(0x75e908);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75e90b:{NFSU2_TR(0x75e90b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e90e:{NFSU2_TR(0x75e90e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L75e933;}}
}
B75e910:L75e910:{c.instructions+=5;NFSU2_TR(0x75e910);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e911:{NFSU2_TR(0x75e911);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e914:{NFSU2_TR(0x75e914);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e915:{NFSU2_TR(0x75e915);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e916:{NFSU2_TR(0x75e916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e91bull));
TAIL_STATIC(0x75c840u,75c);
}
B75e91b:L75e91b:{c.instructions+=4;NFSU2_TR(0x75e91b);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))&u32(u8(0x0ull))));
s1(u32(r4(U+8)),r1(U+12));
}
B75e920:{NFSU2_TR(0x75e920);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e923:{NFSU2_TR(0x75e923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e924:{NFSU2_TR(0x75e924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e929ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e5f9u);}goto L75e5f9;}
}
B75e929:L75e929:{c.instructions+=3;NFSU2_TR(0x75e929);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75e92c:{NFSU2_TR(0x75e92c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e92e:{NFSU2_TR(0x75e92e);
if(r1(R+518)){{goto L75e933;}}
}
B75e930:L75e930:{c.instructions+=1;NFSU2_TR(0x75e930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75e933:L75e933:{c.instructions+=3;NFSU2_TR(0x75e933);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B75e935:{NFSU2_TR(0x75e935);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75e938:{NFSU2_TR(0x75e938);
if(r1(R+518)){{goto L75e944;}}
}
B75e93a:L75e93a:{c.instructions+=3;NFSU2_TR(0x75e93a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75e93b:{NFSU2_TR(0x75e93b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75e93e:{NFSU2_TR(0x75e93e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e888u);}goto L75e888;}}
}
B75e944:L75e944:{c.instructions+=3;NFSU2_TR(0x75e944);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B75e946:{NFSU2_TR(0x75e946);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e949:{NFSU2_TR(0x75e949);
if(r1(R+518)){{goto L75e952;}}
}
B75e94b:L75e94b:{c.instructions+=1;NFSU2_TR(0x75e94b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e950ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e40eu);}goto L75e40e;}
}
B75e950:L75e950:{c.instructions+=1;NFSU2_TR(0x75e950);
__builtin_memmove((R+24),(R+0),4);
}
B75e952:L75e952:{c.instructions+=1;NFSU2_TR(0x75e952);
__builtin_memmove((R+0),(R+24),4);
}
B75e954:L75e954:{c.instructions+=6;NFSU2_TR(0x75e954);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75e957:{NFSU2_TR(0x75e957);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B75e95a:{NFSU2_TR(0x75e95a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75e95b:{NFSU2_TR(0x75e95b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75e95c:{NFSU2_TR(0x75e95c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75e95d:{NFSU2_TR(0x75e95d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e962ull));
TAIL_STATIC(0x76115eu,761);
}
B75e962:L75e962:{c.instructions+=3;NFSU2_TR(0x75e962);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x78ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x78ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x78ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75e965:{NFSU2_TR(0x75e965);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75e966:{NFSU2_TR(0x75e966);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75e967:L75e967:{c.instructions+=2;NFSU2_TR(0x75e967);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75e969:{NFSU2_TR(0x75e969);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e954u);}goto L75e954;}
}
B75e96b:L75e96b:{c.instructions+=7;NFSU2_TR(0x75e96b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e96c:{NFSU2_TR(0x75e96c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e96d:{NFSU2_TR(0x75e96d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e96e:{NFSU2_TR(0x75e96e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e971:{NFSU2_TR(0x75e971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e972:{NFSU2_TR(0x75e972);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e973:{NFSU2_TR(0x75e973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e978ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e4cdu);}goto L75e4cd;}
}
B75e978:L75e978:{c.instructions+=4;NFSU2_TR(0x75e978);
__builtin_memmove((R+24),(R+0),4);
}
B75e97a:{NFSU2_TR(0x75e97a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B75e97d:{NFSU2_TR(0x75e97d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e97f:{NFSU2_TR(0x75e97f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e952u);}goto L75e952;}}
}
B75e981:L75e981:{c.instructions+=3;NFSU2_TR(0x75e981);
w4(R+28,u32(0x819e64ull));
}
B75e986:{NFSU2_TR(0x75e986);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B75e988:{NFSU2_TR(0x75e988);
__builtin_memmove((R+12),(R+28),4);
}
B75e98a:L75e98a:{c.instructions+=2;NFSU2_TR(0x75e98a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e98c:{NFSU2_TR(0x75e98c);
if(r1(R+518)){{goto L75e9b5;}}
}
B75e98e:L75e98e:{c.instructions+=4;NFSU2_TR(0x75e98e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B75e990:{NFSU2_TR(0x75e990);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e993:{NFSU2_TR(0x75e993);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e994:{NFSU2_TR(0x75e994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e999ull));
TAIL_STATIC(0x766c50u,766);
}
B75e999:L75e999:{c.instructions+=4;NFSU2_TR(0x75e999);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e99b:{NFSU2_TR(0x75e99b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e99c:{NFSU2_TR(0x75e99c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e99d:{NFSU2_TR(0x75e99d);
if(r1(R+518)){{goto L75e9b2;}}
}
B75e99f:L75e99f:{c.instructions+=3;NFSU2_TR(0x75e99f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75e9a2:{NFSU2_TR(0x75e9a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e9a3:{NFSU2_TR(0x75e9a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e9a8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e5f9u);}goto L75e5f9;}
}
B75e9a8:L75e9a8:{c.instructions+=3;NFSU2_TR(0x75e9a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75e9aa:{NFSU2_TR(0x75e9aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e9ab:{NFSU2_TR(0x75e9ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75e9b2;}}
}
B75e9ad:L75e9ad:{c.instructions+=2;NFSU2_TR(0x75e9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B75e9b0:{NFSU2_TR(0x75e9b0);
{goto L75e9b5;}
}
B75e9b2:L75e9b2:{c.instructions+=1;NFSU2_TR(0x75e9b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75e9b5:L75e9b5:{c.instructions+=4;NFSU2_TR(0x75e9b5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xcull))));
}
B75e9b8:{NFSU2_TR(0x75e9b8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75e9b9:{NFSU2_TR(0x75e9b9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x819ea0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x819ea0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75e9bf:{NFSU2_TR(0x75e9bf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e98au);}goto L75e98a;}}
}
B75e9c1:L75e9c1:{c.instructions+=3;NFSU2_TR(0x75e9c1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B75e9c3:{NFSU2_TR(0x75e9c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e9c6:{NFSU2_TR(0x75e9c6);
if(r1(R+518)){{goto L75e9e6;}}
}
B75e9c8:L75e9c8:{c.instructions+=1;NFSU2_TR(0x75e9c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e9cdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e40eu);}goto L75e40e;}
}
B75e9cd:L75e9cd:{c.instructions+=3;NFSU2_TR(0x75e9cd);
u8 U[4];
__builtin_memmove((U+0),gp(0x819e64),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e9d3:{NFSU2_TR(0x75e9d3);
__builtin_memmove((R+24),(R+0),4);
}
B75e9d5:{NFSU2_TR(0x75e9d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e9daull));
TAIL_STATIC(0x75c6dau,75c);
}
B75e9da:L75e9da:{c.instructions+=3;NFSU2_TR(0x75e9da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75e9db:{NFSU2_TR(0x75e9db);
__builtin_memmove(gp(0x819e64),(R+28),4);
}
B75e9e1:{NFSU2_TR(0x75e9e1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e952u);}goto L75e952;}
}
B75e9e6:L75e9e6:{c.instructions+=2;NFSU2_TR(0x75e9e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75e9e9:{NFSU2_TR(0x75e9e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e94bu);}goto L75e94b;}}
}
B75e9ef:L75e9ef:{c.instructions+=2;NFSU2_TR(0x75e9ef);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B75e9f1:{NFSU2_TR(0x75e9f1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e952u);}goto L75e952;}
}
B75e9f6:L75e9f6:{c.instructions+=3;NFSU2_TR(0x75e9f6);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e9f8:{NFSU2_TR(0x75e9f8);
u8 U[4];
w4(U+0,u32(0x7d3c78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75e9fd:{NFSU2_TR(0x75e9fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ea02ull));
TAIL_STATIC(0x760da0u,760);
}
B75ea02:L75ea02:{c.instructions+=4;NFSU2_TR(0x75ea02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75ea05:{NFSU2_TR(0x75ea05);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B75ea07:{NFSU2_TR(0x75ea07);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75ea09:{NFSU2_TR(0x75ea09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75eb48;}}
}
B75ea0f:L75ea0f:{c.instructions+=2;NFSU2_TR(0x75ea0f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ea12:{NFSU2_TR(0x75ea12);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L75eb48;}}
}
B75ea18:L75ea18:{c.instructions+=2;NFSU2_TR(0x75ea18);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ea1a:{NFSU2_TR(0x75ea1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ea1full));
TAIL_STATIC(0x7631f1u,763);
}
B75ea1f:L75ea1f:{c.instructions+=4;NFSU2_TR(0x75ea1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ea20:{NFSU2_TR(0x75ea20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ea23:{NFSU2_TR(0x75ea23);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75ea26:{NFSU2_TR(0x75ea26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ea47;}}
}
B75ea28:L75ea28:{c.instructions+=3;NFSU2_TR(0x75ea28);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75ea2a:{NFSU2_TR(0x75ea2a);
__builtin_memmove((R+8),(R+28),4);
}
B75ea2c:{NFSU2_TR(0x75ea2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ea31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e817u);}goto L75e817;}
}
B75ea31:L75ea31:{c.instructions+=5;NFSU2_TR(0x75ea31);
__builtin_memmove((R+24),(R+0),4);
}
B75ea33:{NFSU2_TR(0x75ea33);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ea35:{NFSU2_TR(0x75ea35);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75ea38:{NFSU2_TR(0x75ea38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ea39:{NFSU2_TR(0x75ea39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ea3eull));
TAIL_STATIC(0x75c2eeu,75c);
}
B75ea3e:L75ea3e:{c.instructions+=4;NFSU2_TR(0x75ea3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ea3f:{NFSU2_TR(0x75ea3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ea40:{NFSU2_TR(0x75ea40);
__builtin_memmove((R+0),(R+24),4);
}
B75ea42:{NFSU2_TR(0x75ea42);
{goto L75eb4a;}
}
B75ea47:L75ea47:{c.instructions+=2;NFSU2_TR(0x75ea47);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ea49:{NFSU2_TR(0x75ea49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ea4eull));
TAIL_STATIC(0x75c6c8u,75c);
}
B75ea4e:L75ea4e:{c.instructions+=5;NFSU2_TR(0x75ea4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ea4f:{NFSU2_TR(0x75ea4f);
__builtin_memmove((R+24),(R+0),4);
}
B75ea51:{NFSU2_TR(0x75ea51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ea54:{NFSU2_TR(0x75ea54);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ea56:{NFSU2_TR(0x75ea56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ea60;}}
}
B75ea58:L75ea58:{c.instructions+=2;NFSU2_TR(0x75ea58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ea5b:{NFSU2_TR(0x75ea5b);
{goto L75eb21;}
}
B75ea60:L75ea60:{c.instructions+=3;NFSU2_TR(0x75ea60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75ea63:{NFSU2_TR(0x75ea63);
__builtin_memmove((R+8),(R+28),4);
}
B75ea65:{NFSU2_TR(0x75ea65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ea6aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e817u);}goto L75e817;}
}
B75ea6a:L75ea6a:{c.instructions+=3;NFSU2_TR(0x75ea6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ea6d:{NFSU2_TR(0x75ea6d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ea6f:{NFSU2_TR(0x75ea6f);
if(r1(R+518)){{goto L75eb21;}}
}
B75ea75:L75ea75:{c.instructions+=6;NFSU2_TR(0x75ea75);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75ea77:{NFSU2_TR(0x75ea77);
__builtin_memmove((R+0),gp(0x8b8844),4);
}
B75ea7c:{NFSU2_TR(0x75ea7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ea7f:{NFSU2_TR(0x75ea7f);
__builtin_memmove((R+0),gp(0x8b8848),4);
}
B75ea84:{NFSU2_TR(0x75ea84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ea87:{NFSU2_TR(0x75ea87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75ea89:L75ea89:{c.instructions+=3;NFSU2_TR(0x75ea89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ea8c:{NFSU2_TR(0x75ea8c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ea8f:{NFSU2_TR(0x75ea8f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L75ea9f;}}
}
B75ea91:L75ea91:{c.instructions+=4;NFSU2_TR(0x75ea91);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b882cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B75ea98:{NFSU2_TR(0x75ea98);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75ea9c:{NFSU2_TR(0x75ea9c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75ea9d:{NFSU2_TR(0x75ea9d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ea89u);}goto L75ea89;}
}
B75ea9f:L75ea9f:{c.instructions+=27;NFSU2_TR(0x75ea9f);
__builtin_memmove((R+0),gp(0x81aa40),4);
}
B75eaa4:{NFSU2_TR(0x75eaa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eaa7:{NFSU2_TR(0x75eaa7);
__builtin_memmove((R+0),gp(0x81aa50),4);
}
B75eaac:{NFSU2_TR(0x75eaac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eaaf:{NFSU2_TR(0x75eaaf);
__builtin_memmove((R+0),gp(0x8ba230),4);
}
B75eab4:{NFSU2_TR(0x75eab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eab7:{NFSU2_TR(0x75eab7);
__builtin_memmove((R+0),gp(0x8ba234),4);
}
B75eabc:{NFSU2_TR(0x75eabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eabf:{NFSU2_TR(0x75eabf);
__builtin_memmove((R+0),gp(0x8ba22c),4);
}
B75eac4:{NFSU2_TR(0x75eac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eac7:{NFSU2_TR(0x75eac7);
__builtin_memmove((R+0),gp(0x81aa3c),4);
}
B75eacc:{NFSU2_TR(0x75eacc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eacf:{NFSU2_TR(0x75eacf);
__builtin_memmove((R+0),gp(0x8b8804),4);
}
B75ead4:{NFSU2_TR(0x75ead4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ead7:{NFSU2_TR(0x75ead7);
__builtin_memmove((R+0),gp(0x8ba228),4);
}
B75eadc:{NFSU2_TR(0x75eadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eadf:{NFSU2_TR(0x75eadf);
__builtin_memmove((R+0),gp(0x8ba224),4);
}
B75eae4:{NFSU2_TR(0x75eae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eae7:{NFSU2_TR(0x75eae7);
__builtin_memmove((R+0),gp(0x81aa00),4);
}
B75eaec:{NFSU2_TR(0x75eaec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eaef:{NFSU2_TR(0x75eaef);
__builtin_memmove((R+0),gp(0x81a940),4);
}
B75eaf4:{NFSU2_TR(0x75eaf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eaf7:{NFSU2_TR(0x75eaf7);
__builtin_memmove((R+0),gp(0x8b8800),4);
}
B75eafc:{NFSU2_TR(0x75eafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eaff:{NFSU2_TR(0x75eaff);
__builtin_memmove((R+0),gp(0x819d24),4);
}
B75eb04:{NFSU2_TR(0x75eb04);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B75eb06:{NFSU2_TR(0x75eb06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75eb16;}}
}
B75eb08:L75eb08:{c.instructions+=2;NFSU2_TR(0x75eb08);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x819cd0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x819cd0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x819cd0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75eb0d:{NFSU2_TR(0x75eb0d);
if(r1(R+518)){{goto L75eb16;}}
}
B75eb0f:L75eb0f:{c.instructions+=2;NFSU2_TR(0x75eb0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75eb10:{NFSU2_TR(0x75eb10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75eb15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e103u);}goto L75e103;}
}
B75eb15:L75eb15:{c.instructions+=1;NFSU2_TR(0x75eb15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75eb16:L75eb16:{c.instructions+=2;NFSU2_TR(0x75eb16);
__builtin_memmove(gp(0x819d24),(R+24),4);
}
B75eb1c:{NFSU2_TR(0x75eb1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75eb21ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75e1cdu);}goto L75e1cd;}
}
B75eb21:L75eb21:{c.instructions+=2;NFSU2_TR(0x75eb21);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75eb24:{NFSU2_TR(0x75eb24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75eb31;}}
}
B75eb26:L75eb26:{c.instructions+=2;NFSU2_TR(0x75eb26);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75eb28:{NFSU2_TR(0x75eb28);
if(r1(R+518)){{goto L75eb31;}}
}
B75eb2a:L75eb2a:{c.instructions+=2;NFSU2_TR(0x75eb2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75eb2b:{NFSU2_TR(0x75eb2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75eb30ull));
TAIL_STATIC(0x75c6dau,75c);
}
B75eb30:L75eb30:{c.instructions+=1;NFSU2_TR(0x75eb30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75eb31:L75eb31:{c.instructions+=2;NFSU2_TR(0x75eb31);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B75eb35:{NFSU2_TR(0x75eb35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75eb3aull));
{goto L75eb3f;}
}
B75eb3a:L75eb3a:{c.instructions+=2;NFSU2_TR(0x75eb3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75eb3d:{NFSU2_TR(0x75eb3d);
{goto L75eb4a;}
}
B75eb3f:L75eb3f:{c.instructions+=2;NFSU2_TR(0x75eb3f);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75eb41:{NFSU2_TR(0x75eb41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75eb46ull));
TAIL_STATIC(0x76315du,763);
}
B75eb46:L75eb46:{c.instructions+=2;NFSU2_TR(0x75eb46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75eb47:{NFSU2_TR(0x75eb47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75eb48:L75eb48:{c.instructions+=1;NFSU2_TR(0x75eb48);
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
B75eb4a:L75eb4a:{c.instructions+=1;NFSU2_TR(0x75eb4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75eb4full));
TAIL_STATIC(0x760ddbu,760);
}
B75eb4f:L75eb4f:{c.instructions+=1;NFSU2_TR(0x75eb4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75eb50:L75eb50:{c.instructions+=2;NFSU2_TR(0x75eb50);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba480),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75eb57:{NFSU2_TR(0x75eb57);
if(r1(R+518)){TAIL_STATIC(0x769764u,769);}
}
B75eb5d:L75eb5d:{c.instructions+=6;NFSU2_TR(0x75eb5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B75eb60:{NFSU2_TR(0x75eb60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(R+4244,mxcsr_store());
__builtin_memmove((U+4),(R+4244),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eb65:{NFSU2_TR(0x75eb65);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75eb69:{NFSU2_TR(0x75eb69);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1f80ull))));
}
B75eb6e:{NFSU2_TR(0x75eb6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1f80ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75eb73:{NFSU2_TR(0x75eb73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75eb84;}}
}
B75eb75:L75eb75:{c.instructions+=4;NFSU2_TR(0x75eb75);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B75eb78:{NFSU2_TR(0x75eb78);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+16))),2);
__builtin_memmove((R+0),(U+0),2);
}
B75eb7c:{NFSU2_TR(0x75eb7c);
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x7full))));
}
B75eb80:{NFSU2_TR(0x75eb80);
u8 U[4];
__builtin_memmove((U+0),(R+0),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x7full))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B75eb84:L75eb84:{c.instructions+=2;NFSU2_TR(0x75eb84);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+16),(U+0),4);
}
B75eb88:{NFSU2_TR(0x75eb88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x769764u,769);}
}
B75eb8e:L75eb8e:{c.instructions+=1;NFSU2_TR(0x75eb8e);
{goto L75eb90;}
}
B75eb90:L75eb90:{c.instructions+=11;NFSU2_TR(0x75eb90);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+4))));
}
B75eb96:{NFSU2_TR(0x75eb96);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d3ca0),16);
__builtin_memmove((R+4736),(U+0),8);
__builtin_memmove((R+4744),(U+8),8);
}
B75eb9e:{NFSU2_TR(0x75eb9e);
__builtin_memmove((R+4672),(R+4608),8);
__builtin_memmove((R+4680),(R+4616),8);
}
B75eba2:{NFSU2_TR(0x75eba2);
__builtin_memmove((R+5056),(R+4608),8);
__builtin_memmove((R+5064),(R+4616),8);
}
B75eba6:{NFSU2_TR(0x75eba6);
w8(R+4608,shr<u64>(r8(R+4608),u64(u32(0x34ull))));
w8(R+4616,shr<u64>(r8(R+4616),u64(u32(0x34ull))));
}
B75ebab:{NFSU2_TR(0x75ebab);
wv<4>((R+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4608)),V(0x0ull)));
}
B75ebaf:{NFSU2_TR(0x75ebaf);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d3cd0),16);
w8(R+4608,u64(u64(r8(R+4608))&u64(r8(U+0))));
w8(R+4616,u64(u64(r8(R+4616))&u64(r8(U+8))));
}
B75ebb7:{NFSU2_TR(0x75ebb7);
w4(R+4736,u32(u32(r4(R+4736))-u32(r4(R+4608))));
w4(R+4740,u32(u32(r4(R+4740))-u32(r4(R+4612))));
w4(R+4744,u32(u32(r4(R+4744))-u32(r4(R+4616))));
w4(R+4748,u32(u32(r4(R+4748))-u32(r4(R+4620))));
}
B75ebbb:{NFSU2_TR(0x75ebbb);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
w8(R+4672,shr<u64>(r8(R+4672),u64(r8(U+0))));
w8(R+4680,shr<u64>(r8(R+4680),u64(r8(U+0))));
}
B75ebbf:{NFSU2_TR(0x75ebbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x800ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75ebc4:{NFSU2_TR(0x75ebc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ec12;}}
}
B75ebc6:L75ebc6:{c.instructions+=2;NFSU2_TR(0x75ebc6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3ffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3ffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75ebcb:{NFSU2_TR(0x75ebcb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75ec4a;}}
}
B75ebcd:L75ebcd:{c.instructions+=3;NFSU2_TR(0x75ebcd);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
w8(R+4672,shl<u64>(r8(R+4672),u64(r8(U+0))));
w8(R+4680,shl<u64>(r8(R+4680),u64(r8(U+0))));
}
B75ebd1:{NFSU2_TR(0x75ebd1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x432ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x432ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x432ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75ebd6:{NFSU2_TR(0x75ebd6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L75ebe3;}}
}
B75ebd8:L75ebd8:{c.instructions+=3;NFSU2_TR(0x75ebd8);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B75ebde:{NFSU2_TR(0x75ebde);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75ebe2:{NFSU2_TR(0x75ebe2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ebe3:L75ebe3:{c.instructions+=2;NFSU2_TR(0x75ebe3);
u8 U[4];
w1(U+0,u8(std::isnan(f64(r8(R+5056)))));
w1(U+1,u8(std::isnan(f64(r8(R+5056)))));
w1(R+514,u8((r1(U+0))||(r1(U+1))));
w1(U+2,u8(f64(r8(R+5056))==f64(r8(R+5056))));
w1(R+518,u8(u32(r1(R+514))|u32(r1(U+2))));
w1(U+3,u8(f64(r8(R+5056))<f64(r8(R+5056))));
w1(R+512,u8(u32(r1(R+514))|u32(r1(U+3))));
w1(R+523,u8(0x0ull));
w1(R+516,u8(0x0ull));
w1(R+519,u8(0x0ull));
}
B75ebe7:{NFSU2_TR(0x75ebe7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L75ec0d;}}
}
B75ebe9:L75ebe9:{c.instructions+=9;NFSU2_TR(0x75ebe9);
w4(R+8,u32(0x3edull));
}
B75ebee:{NFSU2_TR(0x75ebee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B75ebf1:{NFSU2_TR(0x75ebf1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ebf5:{NFSU2_TR(0x75ebf5);
__builtin_memmove((R+8),(R+16),4);
}
B75ebf7:{NFSU2_TR(0x75ebf7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B75ebfa:{NFSU2_TR(0x75ebfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ebfe:{NFSU2_TR(0x75ebfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ec02:{NFSU2_TR(0x75ec02);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B75ec05:{NFSU2_TR(0x75ec05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ec0aull));
TAIL_STATIC(0x7694d0u,769);
}
B75ec0a:L75ec0a:{c.instructions+=1;NFSU2_TR(0x75ec0a);
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
B75ec0d:L75ec0d:{c.instructions+=2;NFSU2_TR(0x75ec0d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75ec11:{NFSU2_TR(0x75ec11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ec12:L75ec12:{c.instructions+=6;NFSU2_TR(0x75ec12);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+4))));
}
B75ec18:{NFSU2_TR(0x75ec18);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
w8(R+4672,shl<u64>(r8(R+4672),u64(r8(U+0))));
w8(R+4680,shl<u64>(r8(R+4680),u64(r8(U+0))));
}
B75ec1c:{NFSU2_TR(0x75ec1c);
__builtin_memmove((R+4800),(R+4608),8);
__builtin_memmove((R+4808),(R+4616),8);
}
B75ec20:{NFSU2_TR(0x75ec20);
u8 U[18];
__builtin_memmove((R+4480),(R+4608),8);
__builtin_memmove((R+4488),(R+4616),8);
__builtin_memmove((R+4496),(R+4672),8);
__builtin_memmove((R+4504),(R+4680),8);
w1(U+0,u8(f64(r8(R+4480))<f64(r8(R+4496))));
w8(U+1,u64(r1(U+0)));
w8(R+4480,u64(u64(r8(U+1))*u64(u64(0xffffffffffffffffull))));
w1(U+9,u8(f64(r8(R+4488))<f64(r8(R+4504))));
w8(U+10,u64(r1(U+9)));
w8(R+4488,u64(u64(r8(U+10))*u64(u64(0xffffffffffffffffull))));
__builtin_memmove((R+4608),(R+4480),8);
__builtin_memmove((R+4616),(R+4488),8);
}
B75ec25:{NFSU2_TR(0x75ec25);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xbffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xbffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xbffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75ec2a:{NFSU2_TR(0x75ec2a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75ec4d;}}
}
B75ec2c:L75ec2c:{c.instructions+=2;NFSU2_TR(0x75ec2c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc32ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc32ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc32ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75ec31:{NFSU2_TR(0x75ec31);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ebe3u);}goto L75ebe3;}}
}
B75ec33:L75ec33:{c.instructions+=5;NFSU2_TR(0x75ec33);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d3c90),16);
w8(R+4608,u64(u64(r8(R+4608))&u64(r8(U+0))));
w8(R+4616,u64(u64(r8(R+4616))&u64(r8(U+8))));
}
B75ec3b:{NFSU2_TR(0x75ec3b);
w8(R+4672,b64(f64(r8(R+4672))-f64(r8(R+4608))));
}
B75ec3f:{NFSU2_TR(0x75ec3f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B75ec45:{NFSU2_TR(0x75ec45);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75ec49:{NFSU2_TR(0x75ec49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ec4a:L75ec4a:{c.instructions+=2;NFSU2_TR(0x75ec4a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B75ec4c:{NFSU2_TR(0x75ec4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ec4d:L75ec4d:{c.instructions+=6;NFSU2_TR(0x75ec4d);
u8 U[34];
__builtin_memmove((U+18),gp(0x7d3cc0),16);
__builtin_memmove((R+4480),(R+4800),8);
__builtin_memmove((R+4488),(R+4808),8);
__builtin_memmove((R+4496),(U+18),8);
__builtin_memmove((R+4504),(U+26),8);
w1(U+0,u8(f64(r8(R+4480))<f64(r8(R+4496))));
w8(U+1,u64(r1(U+0)));
w8(R+4480,u64(u64(r8(U+1))*u64(u64(0xffffffffffffffffull))));
w1(U+9,u8(f64(r8(R+4488))<f64(r8(R+4504))));
w8(U+10,u64(r1(U+9)));
w8(R+4488,u64(u64(r8(U+10))*u64(u64(0xffffffffffffffffull))));
__builtin_memmove((R+4800),(R+4480),8);
__builtin_memmove((R+4808),(R+4488),8);
}
B75ec56:{NFSU2_TR(0x75ec56);
wv<16>((R+4800),eval<Op::INT_OR,16,16,16>(rv<16>((R+4800)),rv<16>(gp(0x7d3cc0))));
}
B75ec5e:{NFSU2_TR(0x75ec5e);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d3cb0),16);
w8(R+4800,u64(u64(r8(R+4800))&u64(r8(U+0))));
w8(R+4808,u64(u64(r8(R+4808))&u64(r8(U+8))));
}
B75ec66:{NFSU2_TR(0x75ec66);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4800),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B75ec6c:{NFSU2_TR(0x75ec6c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75ec70:{NFSU2_TR(0x75ec70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ec80:L75ec80:{c.instructions+=2;NFSU2_TR(0x75ec80);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba480),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ec87:{NFSU2_TR(0x75ec87);
if(r1(R+518)){TAIL_STATIC(0x769835u,769);}
}
B75ec8d:L75ec8d:{c.instructions+=6;NFSU2_TR(0x75ec8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B75ec90:{NFSU2_TR(0x75ec90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(R+4244,mxcsr_store());
__builtin_memmove((U+4),(R+4244),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ec95:{NFSU2_TR(0x75ec95);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ec99:{NFSU2_TR(0x75ec99);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1f80ull))));
}
B75ec9e:{NFSU2_TR(0x75ec9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1f80ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75eca3:{NFSU2_TR(0x75eca3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ecb4;}}
}
B75eca5:L75eca5:{c.instructions+=4;NFSU2_TR(0x75eca5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B75eca8:{NFSU2_TR(0x75eca8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+16))),2);
__builtin_memmove((R+0),(U+0),2);
}
B75ecac:{NFSU2_TR(0x75ecac);
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x7full))));
}
B75ecb0:{NFSU2_TR(0x75ecb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x7full))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B75ecb4:L75ecb4:{c.instructions+=2;NFSU2_TR(0x75ecb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+16),(U+0),4);
}
B75ecb8:{NFSU2_TR(0x75ecb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x769835u,769);}
}
B75ecbe:L75ecbe:{c.instructions+=1;NFSU2_TR(0x75ecbe);
{goto L75ecc0;}
}
B75ecc0:L75ecc0:{c.instructions+=11;NFSU2_TR(0x75ecc0);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+4))));
}
B75ecc6:{NFSU2_TR(0x75ecc6);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d3cf0),16);
__builtin_memmove((R+4736),(U+0),8);
__builtin_memmove((R+4744),(U+8),8);
}
B75ecce:{NFSU2_TR(0x75ecce);
__builtin_memmove((R+4672),(R+4608),8);
__builtin_memmove((R+4680),(R+4616),8);
}
B75ecd2:{NFSU2_TR(0x75ecd2);
__builtin_memmove((R+5056),(R+4608),8);
__builtin_memmove((R+5064),(R+4616),8);
}
B75ecd6:{NFSU2_TR(0x75ecd6);
w8(R+4608,shr<u64>(r8(R+4608),u64(u32(0x34ull))));
w8(R+4616,shr<u64>(r8(R+4616),u64(u32(0x34ull))));
}
B75ecdb:{NFSU2_TR(0x75ecdb);
wv<4>((R+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4608)),V(0x0ull)));
}
B75ecdf:{NFSU2_TR(0x75ecdf);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d3d10),16);
w8(R+4608,u64(u64(r8(R+4608))&u64(r8(U+0))));
w8(R+4616,u64(u64(r8(R+4616))&u64(r8(U+8))));
}
B75ece7:{NFSU2_TR(0x75ece7);
w4(R+4736,u32(u32(r4(R+4736))-u32(r4(R+4608))));
w4(R+4740,u32(u32(r4(R+4740))-u32(r4(R+4612))));
w4(R+4744,u32(u32(r4(R+4744))-u32(r4(R+4616))));
w4(R+4748,u32(u32(r4(R+4748))-u32(r4(R+4620))));
}
B75eceb:{NFSU2_TR(0x75eceb);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
w8(R+4672,shr<u64>(r8(R+4672),u64(r8(U+0))));
w8(R+4680,shr<u64>(r8(R+4680),u64(r8(U+0))));
}
B75ecef:{NFSU2_TR(0x75ecef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x800ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75ecf4:{NFSU2_TR(0x75ecf4);
if(r1(R+518)){{goto L75ed42;}}
}
B75ecf6:L75ecf6:{c.instructions+=2;NFSU2_TR(0x75ecf6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xbffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xbffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xbffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75ecfb:{NFSU2_TR(0x75ecfb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75ed7a;}}
}
B75ecfd:L75ecfd:{c.instructions+=3;NFSU2_TR(0x75ecfd);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
w8(R+4672,shl<u64>(r8(R+4672),u64(r8(U+0))));
w8(R+4680,shl<u64>(r8(R+4680),u64(r8(U+0))));
}
B75ed01:{NFSU2_TR(0x75ed01);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc32ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc32ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc32ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75ed06:{NFSU2_TR(0x75ed06);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L75ed13;}}
}
B75ed08:L75ed08:{c.instructions+=3;NFSU2_TR(0x75ed08);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B75ed0e:{NFSU2_TR(0x75ed0e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75ed12:{NFSU2_TR(0x75ed12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ed13:L75ed13:{c.instructions+=2;NFSU2_TR(0x75ed13);
u8 U[4];
w1(U+0,u8(std::isnan(f64(r8(R+5056)))));
w1(U+1,u8(std::isnan(f64(r8(R+5056)))));
w1(R+514,u8((r1(U+0))||(r1(U+1))));
w1(U+2,u8(f64(r8(R+5056))==f64(r8(R+5056))));
w1(R+518,u8(u32(r1(R+514))|u32(r1(U+2))));
w1(U+3,u8(f64(r8(R+5056))<f64(r8(R+5056))));
w1(R+512,u8(u32(r1(R+514))|u32(r1(U+3))));
w1(R+523,u8(0x0ull));
w1(R+516,u8(0x0ull));
w1(R+519,u8(0x0ull));
}
B75ed17:{NFSU2_TR(0x75ed17);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L75ed3d;}}
}
B75ed19:L75ed19:{c.instructions+=9;NFSU2_TR(0x75ed19);
w4(R+8,u32(0x3ecull));
}
B75ed1e:{NFSU2_TR(0x75ed1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B75ed21:{NFSU2_TR(0x75ed21);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ed25:{NFSU2_TR(0x75ed25);
__builtin_memmove((R+8),(R+16),4);
}
B75ed27:{NFSU2_TR(0x75ed27);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B75ed2a:{NFSU2_TR(0x75ed2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ed2e:{NFSU2_TR(0x75ed2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ed32:{NFSU2_TR(0x75ed32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B75ed35:{NFSU2_TR(0x75ed35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ed3aull));
TAIL_STATIC(0x7694d0u,769);
}
B75ed3a:L75ed3a:{c.instructions+=1;NFSU2_TR(0x75ed3a);
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
B75ed3d:L75ed3d:{c.instructions+=2;NFSU2_TR(0x75ed3d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75ed41:{NFSU2_TR(0x75ed41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ed42:L75ed42:{c.instructions+=6;NFSU2_TR(0x75ed42);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+4))));
}
B75ed48:{NFSU2_TR(0x75ed48);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
w8(R+4672,shl<u64>(r8(R+4672),u64(r8(U+0))));
w8(R+4680,shl<u64>(r8(R+4680),u64(r8(U+0))));
}
B75ed4c:{NFSU2_TR(0x75ed4c);
__builtin_memmove((R+4800),(R+4608),8);
__builtin_memmove((R+4808),(R+4616),8);
}
B75ed50:{NFSU2_TR(0x75ed50);
u8 U[20];
__builtin_memmove((R+4480),(R+4608),8);
__builtin_memmove((R+4488),(R+4616),8);
__builtin_memmove((R+4496),(R+4672),8);
__builtin_memmove((R+4504),(R+4680),8);
w1(U+0,u8(f64(r8(R+4480))<=f64(r8(R+4496))));
w1(U+1,u8(!(r1(U+0))));
w8(U+2,u64(r1(U+1)));
w8(R+4480,u64(u64(r8(U+2))*u64(u64(0xffffffffffffffffull))));
w1(U+10,u8(f64(r8(R+4488))<=f64(r8(R+4504))));
w1(U+11,u8(!(r1(U+10))));
w8(U+12,u64(r1(U+11)));
w8(R+4488,u64(u64(r8(U+12))*u64(u64(0xffffffffffffffffull))));
__builtin_memmove((R+4608),(R+4480),8);
__builtin_memmove((R+4616),(R+4488),8);
}
B75ed55:{NFSU2_TR(0x75ed55);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3ffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3ffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75ed5a:{NFSU2_TR(0x75ed5a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75ed81;}}
}
B75ed5c:L75ed5c:{c.instructions+=2;NFSU2_TR(0x75ed5c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x432ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x432ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x432ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75ed61:{NFSU2_TR(0x75ed61);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ed13u);}goto L75ed13;}}
}
B75ed63:L75ed63:{c.instructions+=5;NFSU2_TR(0x75ed63);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d3ce0),16);
w8(R+4608,u64(u64(r8(R+4608))&u64(r8(U+0))));
w8(R+4616,u64(u64(r8(R+4616))&u64(r8(U+8))));
}
B75ed6b:{NFSU2_TR(0x75ed6b);
w8(R+4672,b64(f64(r8(R+4672))+f64(r8(R+4608))));
}
B75ed6f:{NFSU2_TR(0x75ed6f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B75ed75:{NFSU2_TR(0x75ed75);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75ed79:{NFSU2_TR(0x75ed79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ed7a:L75ed7a:{c.instructions+=2;NFSU2_TR(0x75ed7a);
{u32 ea_=u32(u32(8207648u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75ed80:{NFSU2_TR(0x75ed80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ed81:L75ed81:{c.instructions+=5;NFSU2_TR(0x75ed81);
u8 U[36];
__builtin_memmove((U+20),gp(0x7d3d00),16);
__builtin_memmove((R+4480),(R+4800),8);
__builtin_memmove((R+4488),(R+4808),8);
__builtin_memmove((R+4496),(U+20),8);
__builtin_memmove((R+4504),(U+28),8);
w1(U+0,u8(f64(r8(R+4480))<=f64(r8(R+4496))));
w1(U+1,u8(!(r1(U+0))));
w8(U+2,u64(r1(U+1)));
w8(R+4480,u64(u64(r8(U+2))*u64(u64(0xffffffffffffffffull))));
w1(U+10,u8(f64(r8(R+4488))<=f64(r8(R+4504))));
w1(U+11,u8(!(r1(U+10))));
w8(U+12,u64(r1(U+11)));
w8(R+4488,u64(u64(r8(U+12))*u64(u64(0xffffffffffffffffull))));
__builtin_memmove((R+4800),(R+4480),8);
__builtin_memmove((R+4808),(R+4488),8);
}
B75ed8a:{NFSU2_TR(0x75ed8a);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d3ce0),16);
w8(R+4800,u64(u64(r8(R+4800))&u64(r8(U+0))));
w8(R+4808,u64(u64(r8(R+4808))&u64(r8(U+8))));
}
B75ed92:{NFSU2_TR(0x75ed92);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4800),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B75ed98:{NFSU2_TR(0x75ed98);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75ed9c:{NFSU2_TR(0x75ed9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75edb8:L75edb8:{c.instructions+=1;NFSU2_TR(0x75edb8);
w4(R+8,u32(0x81aa7aull));
}
B75edbd:L75edbd:{c.instructions+=1;NFSU2_TR(0x75edbd);
TAIL_STATIC(0x769a4eu,769);
}
B75edc2:L75edc2:{c.instructions+=2;NFSU2_TR(0x75edc2);
w4(R+8,u32(0x81aa9aull));
}
B75edc7:{NFSU2_TR(0x75edc7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75edbdu);}goto L75edbd;}
}
B75edc9:L75edc9:{c.instructions+=2;NFSU2_TR(0x75edc9);
w4(R+8,u32(0x81aabaull));
}
B75edce:{NFSU2_TR(0x75edce);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75edbdu);}goto L75edbd;}
}
B75edda:L75edda:{c.instructions+=2;NFSU2_TR(0x75edda);
w4(R+8,u32(0x819eb0ull));
}
B75eddf:{NFSU2_TR(0x75eddf);
TAIL_STATIC(0x769a10u,769);
}
B75ede4:L75ede4:{c.instructions+=1;NFSU2_TR(0x75ede4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B75ede6:L75ede6:{c.instructions+=2;NFSU2_TR(0x75ede6);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8428),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75eded:{NFSU2_TR(0x75eded);
if(r1(R+518)){{goto L75edf3;}}
}
B75edef:L75edef:{c.instructions+=2;NFSU2_TR(0x75edef);
__asm__ volatile(".byte 0xd9,0xf8":::"memory");
}
B75edf1:{NFSU2_TR(0x75edf1);
{goto L75edf8;}
}
B75edf3:L75edf3:{c.instructions+=1;NFSU2_TR(0x75edf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75edf8ull));
TAIL_STATIC(0x76a69cu,76a);
}
B75edf8:L75edf8:{c.instructions+=4;NFSU2_TR(0x75edf8);
{u32 ax_;__asm__ volatile(".byte 0x9b,0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B75edfb:{NFSU2_TR(0x75edfb);
}
B75edfc:{NFSU2_TR(0x75edfc);
u8 U[5];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x80ull))));
w1(R+519,u8((r1(U+0))!=(u8(0x0ull))));
w1(U+1,u8(u32(r1(R+1))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))!=(u8(0x0ull))));
w1(U+2,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+516,u8((r1(U+2))!=(u8(0x0ull))));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+514,u8((r1(U+3))!=(u8(0x0ull))));
w1(U+4,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+512,u8((r1(U+4))!=(u8(0x0ull))));
}
B75edfd:{NFSU2_TR(0x75edfd);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ede6u);}goto L75ede6;}}
}
B75edff:L75edff:{c.instructions+=2;NFSU2_TR(0x75edff);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B75ee01:{NFSU2_TR(0x75ee01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ee4c:L75ee4c:{c.instructions+=2;NFSU2_TR(0x75ee4c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba480),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ee53:{NFSU2_TR(0x75ee53);
if(r1(R+518)){{goto L75ee91;}}
}
B75ee55:L75ee55:{c.instructions+=6;NFSU2_TR(0x75ee55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B75ee58:{NFSU2_TR(0x75ee58);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(R+4244,mxcsr_store());
__builtin_memmove((U+4),(R+4244),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ee5d:{NFSU2_TR(0x75ee5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ee61:{NFSU2_TR(0x75ee61);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1f80ull))));
}
B75ee66:{NFSU2_TR(0x75ee66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1f80ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75ee6b:{NFSU2_TR(0x75ee6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ee7c;}}
}
B75ee6d:L75ee6d:{c.instructions+=4;NFSU2_TR(0x75ee6d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B75ee70:{NFSU2_TR(0x75ee70);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+16))),2);
__builtin_memmove((R+0),(U+0),2);
}
B75ee74:{NFSU2_TR(0x75ee74);
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x7full))));
}
B75ee78:{NFSU2_TR(0x75ee78);
u8 U[4];
__builtin_memmove((U+0),(R+0),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x7full))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B75ee7c:L75ee7c:{c.instructions+=2;NFSU2_TR(0x75ee7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+16),(U+0),4);
}
B75ee80:{NFSU2_TR(0x75ee80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ee91;}}
}
B75ee82:L75ee82:{c.instructions+=1;NFSU2_TR(0x75ee82);
TAIL_STATIC(0x76aa20u,76a);
}
B75ee91:L75ee91:{c.instructions+=2;NFSU2_TR(0x75ee91);
w4(R+8,u32(0x81a4aaull));
}
B75ee96:{NFSU2_TR(0x75ee96);
TAIL_STATIC(0x769a4eu,769);
}
B75eea0:L75eea0:{c.instructions+=3;NFSU2_TR(0x75eea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B75eea3:{NFSU2_TR(0x75eea3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B75eea6:{NFSU2_TR(0x75eea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75eeabull));
TAIL_STATIC(0x765748u,765);
}
B75eeab:L75eeab:{c.instructions+=1;NFSU2_TR(0x75eeab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75eeb0ull));
{goto L75eebd;}
}
B75eeb0:L75eeb0:{c.instructions+=2;NFSU2_TR(0x75eeb0);
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
B75eeb3:{NFSU2_TR(0x75eeb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75eebd:L75eebd:{c.instructions+=3;NFSU2_TR(0x75eebd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75eebe:{NFSU2_TR(0x75eebe);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0x9b,0xd9,0x38"::"a"(ea_):"memory");}
}
B75eec2:{NFSU2_TR(0x75eec2);
if(r1(R+518)){{goto L75ef31;}}
}
B75eec4:L75eec4:{c.instructions+=2;NFSU2_TR(0x75eec4);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+16))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x27full))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B75eeca:{NFSU2_TR(0x75eeca);
if(r1(R+518)){{goto L75eed1;}}
}
B75eecc:L75eecc:{c.instructions+=1;NFSU2_TR(0x75eecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75eed1ull));
TAIL_STATIC(0x7656d5u,765);
}
B75eed1:L75eed1:{c.instructions+=2;NFSU2_TR(0x75eed1);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x3ff00000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3ff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75eed6:{NFSU2_TR(0x75eed6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75ef03;}}
}
B75eed8:L75eed8:{c.instructions+=7;NFSU2_TR(0x75eed8);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B75eeda:{NFSU2_TR(0x75eeda);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B75eedc:{NFSU2_TR(0x75eedc);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B75eede:{NFSU2_TR(0x75eede);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B75eee0:{NFSU2_TR(0x75eee0);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B75eee2:{NFSU2_TR(0x75eee2);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B75eee4:{NFSU2_TR(0x75eee4);
__asm__ volatile(".byte 0xd9,0xf3":::"memory");
}
B75eee6:L75eee6:{c.instructions+=2;NFSU2_TR(0x75eee6);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8424),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75eeed:{NFSU2_TR(0x75eeed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76575eu,765);}
}
B75eef3:L75eef3:{c.instructions+=3;NFSU2_TR(0x75eef3);
w4(R+8,u32(0xeull));
}
B75eef8:{NFSU2_TR(0x75eef8);
w4(R+4,u32(0x819f00ull));
}
B75eefe:{NFSU2_TR(0x75eefe);
TAIL_STATIC(0x76576bu,765);
}
B75ef03:L75ef03:{c.instructions+=1;NFSU2_TR(0x75ef03);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75ef3f;}}
}
B75ef05:L75ef05:{c.instructions+=5;NFSU2_TR(0x75ef05);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ef09:{NFSU2_TR(0x75ef09);
__builtin_memmove((R+4),(R+0),4);
}
B75ef0b:{NFSU2_TR(0x75ef0b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B75ef10:{NFSU2_TR(0x75ef10);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75ef14:{NFSU2_TR(0x75ef14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ef3f;}}
}
B75ef16:L75ef16:{c.instructions+=4;NFSU2_TR(0x75ef16);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000000ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75ef1c:{NFSU2_TR(0x75ef1c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B75ef1e:{NFSU2_TR(0x75ef1e);
{u32 ea_=u32(u32(8496346u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B75ef24:{NFSU2_TR(0x75ef24);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75eee6u);}goto L75eee6;}}
}
B75ef26:L75ef26:{c.instructions+=2;NFSU2_TR(0x75ef26);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B75ef28:{NFSU2_TR(0x75ef28);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75eee6u);}goto L75eee6;}
}
B75ef2a:L75ef2a:{c.instructions+=1;NFSU2_TR(0x75ef2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ef2full));
TAIL_STATIC(0x7656ecu,765);
}
B75ef2f:L75ef2f:{c.instructions+=1;NFSU2_TR(0x75ef2f);
{goto L75ef4c;}
}
B75ef31:L75ef31:{c.instructions+=2;NFSU2_TR(0x75ef31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75ef36:{NFSU2_TR(0x75ef36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ef2au);}goto L75ef2a;}}
}
B75ef38:L75ef38:{c.instructions+=2;NFSU2_TR(0x75ef38);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75ef3d:{NFSU2_TR(0x75ef3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ef2au);}goto L75ef2a;}}
}
B75ef3f:L75ef3f:{c.instructions+=3;NFSU2_TR(0x75ef3f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B75ef41:{NFSU2_TR(0x75ef41);
{u32 ea_=u32(u32(8496336u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B75ef47:{NFSU2_TR(0x75ef47);
w4(R+0,u32(0x1ull));
}
B75ef4c:L75ef4c:{c.instructions+=2;NFSU2_TR(0x75ef4c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8424),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ef53:{NFSU2_TR(0x75ef53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76575eu,765);}
}
B75ef59:L75ef59:{c.instructions+=3;NFSU2_TR(0x75ef59);
w4(R+8,u32(0xeull));
}
B75ef5e:{NFSU2_TR(0x75ef5e);
w4(R+4,u32(0x819f00ull));
}
B75ef64:{NFSU2_TR(0x75ef64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ef69ull));
TAIL_STATIC(0x765677u,765);
}
B75ef69:L75ef69:{c.instructions+=2;NFSU2_TR(0x75ef69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B75ef6a:{NFSU2_TR(0x75ef6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ef74:L75ef74:{c.instructions+=12;NFSU2_TR(0x75ef74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ef75:{NFSU2_TR(0x75ef75);
__builtin_memmove((R+20),(R+16),4);
}
B75ef77:{NFSU2_TR(0x75ef77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B75ef7a:{NFSU2_TR(0x75ef7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ef7b:{NFSU2_TR(0x75ef7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ef7c:{NFSU2_TR(0x75ef7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ef7d:{NFSU2_TR(0x75ef7d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ef7e:{NFSU2_TR(0x75ef7e);
w1(R+522,u8(0x0ull));
}
B75ef7f:{NFSU2_TR(0x75ef7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75ef82:{NFSU2_TR(0x75ef82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ef85:{NFSU2_TR(0x75ef85);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B75ef8c:{NFSU2_TR(0x75ef8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x75f014u,75f);}
}
B75ef92:L75ef92:{c.instructions+=9;NFSU2_TR(0x75ef92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ef95:{NFSU2_TR(0x75ef95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ef98:{NFSU2_TR(0x75ef98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ef9b:{NFSU2_TR(0x75ef9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75ef9e:{NFSU2_TR(0x75ef9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75efa1:{NFSU2_TR(0x75efa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75efa4:{NFSU2_TR(0x75efa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75efa7:{NFSU2_TR(0x75efa7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B75efaa:{NFSU2_TR(0x75efaa);
if(r1(R+518)){TAIL_STATIC(0x75f00du,75f);}
}
B75efac:L75efac:{c.instructions+=3;NFSU2_TR(0x75efac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B75efaf:{NFSU2_TR(0x75efaf);
u8 U[30];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+22),u32(0x0ull)));
w4(U+26,u32(u32(r4(U+22))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B75efb4:{NFSU2_TR(0x75efb4);
if(r1(R+518)){{goto L75effb;}}
}
B75efb6:L75efb6:{c.instructions+=4;NFSU2_TR(0x75efb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75efb7:{NFSU2_TR(0x75efb7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75efb8:{NFSU2_TR(0x75efb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75efbb:{NFSU2_TR(0x75efbb);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75efbfull));
{u32 t_=u32(r4(U+16));TAIL_DYNAMIC(t_);}
}
B75efbf:L75efbf:{c.instructions+=5;NFSU2_TR(0x75efbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75efc0:{NFSU2_TR(0x75efc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75efc1:{NFSU2_TR(0x75efc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75efc4:{NFSU2_TR(0x75efc4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75efc6:{NFSU2_TR(0x75efc6);
if(r1(R+518)){{goto L75effb;}}
}
B75efc8:L75efc8:{c.instructions+=1;NFSU2_TR(0x75efc8);
if(r1(R+519)){TAIL_STATIC(0x75f006u,75f);}
}
B75efca:L75efca:{c.instructions+=3;NFSU2_TR(0x75efca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75efcd:{NFSU2_TR(0x75efcd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75efce:{NFSU2_TR(0x75efce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75efd3ull));
TAIL_STATIC(0x75c2acu,75c);
}
B75efd3:L75efd3:{c.instructions+=5;NFSU2_TR(0x75efd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75efd6:{NFSU2_TR(0x75efd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75efd9:{NFSU2_TR(0x75efd9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75efda:{NFSU2_TR(0x75efda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75efdb:{NFSU2_TR(0x75efdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75efe0ull));
TAIL_STATIC(0x75c2eeu,75c);
}
B75efe0:L75efe0:{c.instructions+=5;NFSU2_TR(0x75efe0);
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
B75efe3:{NFSU2_TR(0x75efe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B75efe6:{NFSU2_TR(0x75efe6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75efe8:{NFSU2_TR(0x75efe8);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75efec:{NFSU2_TR(0x75efec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75eff1ull));
TAIL_STATIC(0x75c382u,75c);
}
B75eff1:L75eff1:{c.instructions+=3;NFSU2_TR(0x75eff1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B75eff4:{NFSU2_TR(0x75eff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75eff7:{NFSU2_TR(0x75eff7);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75effbull));
{u32 t_=u32(r4(U+16));TAIL_DYNAMIC(t_);}
}
B75effb:L75effb:{c.instructions+=2;NFSU2_TR(0x75effb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75effe:{NFSU2_TR(0x75effe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x75f001u,75f);
}
XIT:NFSU2_TR_EXIT(0x75e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
