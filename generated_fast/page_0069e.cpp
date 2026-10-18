#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69d(u8* __restrict R,Cpu& c);
u32 body_69f(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x69e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x69e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_69e(u8* __restrict R,Cpu& c);
u32 page_69e(Cpu& c){return body_69e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_69e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x69e000:goto L69e000;
case 0x69e003:c.instructions+=2;goto B69e003;
case 0x69e006:c.instructions+=1;goto B69e006;
case 0x69e008:goto L69e008;
case 0x69e00b:c.instructions+=8;goto B69e00b;
case 0x69e00e:c.instructions+=7;goto B69e00e;
case 0x69e011:c.instructions+=6;goto B69e011;
case 0x69e014:c.instructions+=5;goto B69e014;
case 0x69e017:c.instructions+=4;goto B69e017;
case 0x69e01a:c.instructions+=3;goto B69e01a;
case 0x69e01d:c.instructions+=2;goto B69e01d;
case 0x69e020:c.instructions+=1;goto B69e020;
case 0x69e022:goto L69e022;
case 0x69e024:goto L69e024;
case 0x69e027:c.instructions+=2;goto B69e027;
case 0x69e02a:c.instructions+=1;goto B69e02a;
case 0x69e02c:goto L69e02c;
case 0x69e02f:goto L69e02f;
case 0x69e032:c.instructions+=2;goto B69e032;
case 0x69e035:c.instructions+=1;goto B69e035;
case 0x69e038:goto L69e038;
case 0x69e03b:c.instructions+=3;goto B69e03b;
case 0x69e03e:c.instructions+=2;goto B69e03e;
case 0x69e041:c.instructions+=1;goto B69e041;
case 0x69e043:goto L69e043;
case 0x69e046:goto L69e046;
case 0x69e049:c.instructions+=7;goto B69e049;
case 0x69e04c:c.instructions+=6;goto B69e04c;
case 0x69e04e:c.instructions+=5;goto B69e04e;
case 0x69e050:c.instructions+=4;goto B69e050;
case 0x69e053:c.instructions+=3;goto B69e053;
case 0x69e055:c.instructions+=2;goto B69e055;
case 0x69e057:c.instructions+=1;goto B69e057;
case 0x69e059:goto L69e059;
case 0x69e05a:c.instructions+=3;goto B69e05a;
case 0x69e05c:c.instructions+=2;goto B69e05c;
case 0x69e05e:c.instructions+=1;goto B69e05e;
case 0x69e060:goto L69e060;
case 0x69e063:c.instructions+=1;goto B69e063;
case 0x69e065:goto L69e065;
case 0x69e068:c.instructions+=7;goto B69e068;
case 0x69e06b:c.instructions+=6;goto B69e06b;
case 0x69e06f:c.instructions+=5;goto B69e06f;
case 0x69e072:c.instructions+=4;goto B69e072;
case 0x69e076:c.instructions+=3;goto B69e076;
case 0x69e077:c.instructions+=2;goto B69e077;
case 0x69e079:c.instructions+=1;goto B69e079;
case 0x69e07b:goto L69e07b;
case 0x69e07d:c.instructions+=1;goto B69e07d;
case 0x69e07f:goto L69e07f;
case 0x69e081:c.instructions+=1;goto B69e081;
case 0x69e084:goto L69e084;
case 0x69e086:goto L69e086;
case 0x69e087:c.instructions+=4;goto B69e087;
case 0x69e089:c.instructions+=3;goto B69e089;
case 0x69e08a:c.instructions+=2;goto B69e08a;
case 0x69e08b:c.instructions+=1;goto B69e08b;
case 0x69e08e:goto L69e08e;
case 0x69e090:c.instructions+=6;goto B69e090;
case 0x69e091:c.instructions+=5;goto B69e091;
case 0x69e093:c.instructions+=4;goto B69e093;
case 0x69e096:c.instructions+=3;goto B69e096;
case 0x69e097:c.instructions+=2;goto B69e097;
case 0x69e09a:c.instructions+=1;goto B69e09a;
case 0x69e09b:goto L69e09b;
case 0x69e09e:c.instructions+=4;goto B69e09e;
case 0x69e0a1:c.instructions+=3;goto B69e0a1;
case 0x69e0a4:c.instructions+=2;goto B69e0a4;
case 0x69e0a7:c.instructions+=1;goto B69e0a7;
case 0x69e0a9:goto L69e0a9;
case 0x69e0ac:goto L69e0ac;
case 0x69e0af:c.instructions+=4;goto B69e0af;
case 0x69e0b2:c.instructions+=3;goto B69e0b2;
case 0x69e0b5:c.instructions+=2;goto B69e0b5;
case 0x69e0b8:c.instructions+=1;goto B69e0b8;
case 0x69e0ba:goto L69e0ba;
case 0x69e0bd:goto L69e0bd;
case 0x69e0c0:c.instructions+=1;goto B69e0c0;
case 0x69e0c2:goto L69e0c2;
case 0x69e0c5:goto L69e0c5;
case 0x69e0c8:c.instructions+=2;goto B69e0c8;
case 0x69e0cc:c.instructions+=1;goto B69e0cc;
case 0x69e0ce:goto L69e0ce;
case 0x69e0d1:c.instructions+=1;goto B69e0d1;
case 0x69e0d3:goto L69e0d3;
case 0x69e0d6:goto L69e0d6;
case 0x69e0d9:c.instructions+=1;goto B69e0d9;
case 0x69e0db:goto L69e0db;
case 0x69e0de:goto L69e0de;
case 0x69e0e1:c.instructions+=2;goto B69e0e1;
case 0x69e0e4:c.instructions+=1;goto B69e0e4;
case 0x69e0e6:goto L69e0e6;
case 0x69e0e7:c.instructions+=3;goto B69e0e7;
case 0x69e0e8:c.instructions+=2;goto B69e0e8;
case 0x69e0e9:c.instructions+=1;goto B69e0e9;
case 0x69e0ec:goto L69e0ec;
case 0x69e0ee:c.instructions+=15;goto B69e0ee;
case 0x69e0ef:c.instructions+=14;goto B69e0ef;
case 0x69e0f1:c.instructions+=13;goto B69e0f1;
case 0x69e0f4:c.instructions+=12;goto B69e0f4;
case 0x69e0f5:c.instructions+=11;goto B69e0f5;
case 0x69e0f8:c.instructions+=10;goto B69e0f8;
case 0x69e0fb:c.instructions+=9;goto B69e0fb;
case 0x69e0fe:c.instructions+=8;goto B69e0fe;
case 0x69e0ff:c.instructions+=7;goto B69e0ff;
case 0x69e102:c.instructions+=6;goto B69e102;
case 0x69e105:c.instructions+=5;goto B69e105;
case 0x69e108:c.instructions+=4;goto B69e108;
case 0x69e10b:c.instructions+=3;goto B69e10b;
case 0x69e10e:c.instructions+=2;goto B69e10e;
case 0x69e110:c.instructions+=1;goto B69e110;
case 0x69e112:goto L69e112;
case 0x69e115:c.instructions+=7;goto B69e115;
case 0x69e116:c.instructions+=6;goto B69e116;
case 0x69e119:c.instructions+=5;goto B69e119;
case 0x69e11c:c.instructions+=4;goto B69e11c;
case 0x69e11f:c.instructions+=3;goto B69e11f;
case 0x69e121:c.instructions+=2;goto B69e121;
case 0x69e124:c.instructions+=1;goto B69e124;
case 0x69e126:goto L69e126;
case 0x69e129:c.instructions+=4;goto B69e129;
case 0x69e12b:c.instructions+=3;goto B69e12b;
case 0x69e12e:c.instructions+=2;goto B69e12e;
case 0x69e131:c.instructions+=1;goto B69e131;
case 0x69e134:goto L69e134;
case 0x69e136:c.instructions+=1;goto B69e136;
case 0x69e137:goto L69e137;
case 0x69e13a:c.instructions+=4;goto B69e13a;
case 0x69e13d:c.instructions+=3;goto B69e13d;
case 0x69e13e:c.instructions+=2;goto B69e13e;
case 0x69e13f:c.instructions+=1;goto B69e13f;
case 0x69e141:goto L69e141;
case 0x69e144:c.instructions+=2;goto B69e144;
case 0x69e145:c.instructions+=1;goto B69e145;
case 0x69e14a:goto L69e14a;
case 0x69e14b:c.instructions+=1;goto B69e14b;
case 0x69e14e:goto L69e14e;
case 0x69e150:c.instructions+=6;goto B69e150;
case 0x69e151:c.instructions+=5;goto B69e151;
case 0x69e152:c.instructions+=4;goto B69e152;
case 0x69e154:c.instructions+=3;goto B69e154;
case 0x69e156:c.instructions+=2;goto B69e156;
case 0x69e159:c.instructions+=1;goto B69e159;
case 0x69e15f:goto L69e15f;
case 0x69e160:goto L69e160;
case 0x69e163:c.instructions+=4;goto B69e163;
case 0x69e166:c.instructions+=3;goto B69e166;
case 0x69e169:c.instructions+=2;goto B69e169;
case 0x69e16c:c.instructions+=1;goto B69e16c;
case 0x69e16e:goto L69e16e;
case 0x69e171:c.instructions+=17;goto B69e171;
case 0x69e174:c.instructions+=16;goto B69e174;
case 0x69e177:c.instructions+=15;goto B69e177;
case 0x69e17a:c.instructions+=14;goto B69e17a;
case 0x69e17d:c.instructions+=13;goto B69e17d;
case 0x69e180:c.instructions+=12;goto B69e180;
case 0x69e183:c.instructions+=11;goto B69e183;
case 0x69e186:c.instructions+=10;goto B69e186;
case 0x69e189:c.instructions+=9;goto B69e189;
case 0x69e18c:c.instructions+=8;goto B69e18c;
case 0x69e18f:c.instructions+=7;goto B69e18f;
case 0x69e192:c.instructions+=6;goto B69e192;
case 0x69e195:c.instructions+=5;goto B69e195;
case 0x69e198:c.instructions+=4;goto B69e198;
case 0x69e19b:c.instructions+=3;goto B69e19b;
case 0x69e19e:c.instructions+=2;goto B69e19e;
case 0x69e1a1:c.instructions+=1;goto B69e1a1;
case 0x69e1a3:goto L69e1a3;
case 0x69e1a6:c.instructions+=6;goto B69e1a6;
case 0x69e1a9:c.instructions+=5;goto B69e1a9;
case 0x69e1ac:c.instructions+=4;goto B69e1ac;
case 0x69e1af:c.instructions+=3;goto B69e1af;
case 0x69e1b2:c.instructions+=2;goto B69e1b2;
case 0x69e1b5:c.instructions+=1;goto B69e1b5;
case 0x69e1b7:goto L69e1b7;
case 0x69e1ba:c.instructions+=2;goto B69e1ba;
case 0x69e1bc:c.instructions+=1;goto B69e1bc;
case 0x69e1be:goto L69e1be;
case 0x69e1c0:goto L69e1c0;
case 0x69e1c3:c.instructions+=5;goto B69e1c3;
case 0x69e1c6:c.instructions+=4;goto B69e1c6;
case 0x69e1c9:c.instructions+=3;goto B69e1c9;
case 0x69e1cc:c.instructions+=2;goto B69e1cc;
case 0x69e1ce:c.instructions+=1;goto B69e1ce;
case 0x69e1d0:goto L69e1d0;
case 0x69e1d2:goto L69e1d2;
case 0x69e1d5:c.instructions+=3;goto B69e1d5;
case 0x69e1d8:c.instructions+=2;goto B69e1d8;
case 0x69e1db:c.instructions+=1;goto B69e1db;
case 0x69e1de:goto L69e1de;
case 0x69e1e0:c.instructions+=1;goto B69e1e0;
case 0x69e1e1:goto L69e1e1;
case 0x69e1e2:c.instructions+=2;goto B69e1e2;
case 0x69e1e5:c.instructions+=1;goto B69e1e5;
case 0x69e1eb:goto L69e1eb;
case 0x69e1ed:c.instructions+=1;goto B69e1ed;
case 0x69e1ef:goto L69e1ef;
case 0x69e1f1:c.instructions+=2;goto B69e1f1;
case 0x69e1f4:c.instructions+=1;goto B69e1f4;
case 0x69e1f6:goto L69e1f6;
case 0x69e1f9:c.instructions+=4;goto B69e1f9;
case 0x69e1fc:c.instructions+=3;goto B69e1fc;
case 0x69e1ff:c.instructions+=2;goto B69e1ff;
case 0x69e202:c.instructions+=1;goto B69e202;
case 0x69e204:goto L69e204;
case 0x69e207:c.instructions+=2;goto B69e207;
case 0x69e20a:c.instructions+=1;goto B69e20a;
case 0x69e20d:goto L69e20d;
case 0x69e20e:c.instructions+=2;goto B69e20e;
case 0x69e211:c.instructions+=1;goto B69e211;
case 0x69e213:goto L69e213;
case 0x69e214:goto L69e214;
case 0x69e215:c.instructions+=3;goto B69e215;
case 0x69e217:c.instructions+=2;goto B69e217;
case 0x69e218:c.instructions+=1;goto B69e218;
case 0x69e219:goto L69e219;
case 0x69e21b:c.instructions+=11;goto B69e21b;
case 0x69e21c:c.instructions+=10;goto B69e21c;
case 0x69e21e:c.instructions+=9;goto B69e21e;
case 0x69e221:c.instructions+=8;goto B69e221;
case 0x69e222:c.instructions+=7;goto B69e222;
case 0x69e223:c.instructions+=6;goto B69e223;
case 0x69e225:c.instructions+=5;goto B69e225;
case 0x69e227:c.instructions+=4;goto B69e227;
case 0x69e229:c.instructions+=3;goto B69e229;
case 0x69e22c:c.instructions+=2;goto B69e22c;
case 0x69e22d:c.instructions+=1;goto B69e22d;
case 0x69e22f:goto L69e22f;
case 0x69e232:c.instructions+=8;goto B69e232;
case 0x69e235:c.instructions+=7;goto B69e235;
case 0x69e239:c.instructions+=6;goto B69e239;
case 0x69e23a:c.instructions+=5;goto B69e23a;
case 0x69e23d:c.instructions+=4;goto B69e23d;
case 0x69e240:c.instructions+=3;goto B69e240;
case 0x69e243:c.instructions+=2;goto B69e243;
case 0x69e246:c.instructions+=1;goto B69e246;
case 0x69e248:goto L69e248;
case 0x69e24a:c.instructions+=2;goto B69e24a;
case 0x69e24d:c.instructions+=1;goto B69e24d;
case 0x69e24f:goto L69e24f;
case 0x69e252:c.instructions+=12;goto B69e252;
case 0x69e255:c.instructions+=11;goto B69e255;
case 0x69e258:c.instructions+=10;goto B69e258;
case 0x69e25b:c.instructions+=9;goto B69e25b;
case 0x69e25c:c.instructions+=8;goto B69e25c;
case 0x69e25f:c.instructions+=7;goto B69e25f;
case 0x69e262:c.instructions+=6;goto B69e262;
case 0x69e265:c.instructions+=5;goto B69e265;
case 0x69e268:c.instructions+=4;goto B69e268;
case 0x69e26b:c.instructions+=3;goto B69e26b;
case 0x69e26e:c.instructions+=2;goto B69e26e;
case 0x69e271:c.instructions+=1;goto B69e271;
case 0x69e273:goto L69e273;
case 0x69e279:c.instructions+=2;goto B69e279;
case 0x69e27c:c.instructions+=1;goto B69e27c;
case 0x69e282:goto L69e282;
case 0x69e284:c.instructions+=2;goto B69e284;
case 0x69e287:c.instructions+=1;goto B69e287;
case 0x69e289:goto L69e289;
case 0x69e28c:c.instructions+=5;goto B69e28c;
case 0x69e28f:c.instructions+=4;goto B69e28f;
case 0x69e290:c.instructions+=3;goto B69e290;
case 0x69e293:c.instructions+=2;goto B69e293;
case 0x69e296:c.instructions+=1;goto B69e296;
case 0x69e298:goto L69e298;
case 0x69e29a:c.instructions+=2;goto B69e29a;
case 0x69e29d:c.instructions+=1;goto B69e29d;
case 0x69e29f:goto L69e29f;
case 0x69e2a2:c.instructions+=7;goto B69e2a2;
case 0x69e2a5:c.instructions+=6;goto B69e2a5;
case 0x69e2a8:c.instructions+=5;goto B69e2a8;
case 0x69e2ab:c.instructions+=4;goto B69e2ab;
case 0x69e2ae:c.instructions+=3;goto B69e2ae;
case 0x69e2b1:c.instructions+=2;goto B69e2b1;
case 0x69e2b4:c.instructions+=1;goto B69e2b4;
case 0x69e2b6:goto L69e2b6;
case 0x69e2b9:c.instructions+=1;goto B69e2b9;
case 0x69e2bb:goto L69e2bb;
case 0x69e2be:c.instructions+=3;goto B69e2be;
case 0x69e2bf:c.instructions+=2;goto B69e2bf;
case 0x69e2c2:c.instructions+=1;goto B69e2c2;
case 0x69e2c4:goto L69e2c4;
case 0x69e2c7:goto L69e2c7;
case 0x69e2c8:c.instructions+=2;goto B69e2c8;
case 0x69e2cb:c.instructions+=1;goto B69e2cb;
case 0x69e2cd:goto L69e2cd;
case 0x69e2d0:c.instructions+=3;goto B69e2d0;
case 0x69e2d2:c.instructions+=2;goto B69e2d2;
case 0x69e2d4:c.instructions+=1;goto B69e2d4;
case 0x69e2d6:goto L69e2d6;
case 0x69e2d9:goto L69e2d9;
case 0x69e2db:c.instructions+=4;goto B69e2db;
case 0x69e2de:c.instructions+=3;goto B69e2de;
case 0x69e2e1:c.instructions+=2;goto B69e2e1;
case 0x69e2e2:c.instructions+=1;goto B69e2e2;
case 0x69e2e4:goto L69e2e4;
case 0x69e2e7:c.instructions+=3;goto B69e2e7;
case 0x69e2e9:c.instructions+=2;goto B69e2e9;
case 0x69e2ea:c.instructions+=1;goto B69e2ea;
case 0x69e2ef:goto L69e2ef;
case 0x69e2f1:c.instructions+=3;goto B69e2f1;
case 0x69e2f2:c.instructions+=2;goto B69e2f2;
case 0x69e2f5:c.instructions+=1;goto B69e2f5;
case 0x69e2f7:goto L69e2f7;
case 0x69e2fc:c.instructions+=1;goto B69e2fc;
case 0x69e301:goto L69e301;
case 0x69e303:c.instructions+=4;goto B69e303;
case 0x69e306:c.instructions+=3;goto B69e306;
case 0x69e308:c.instructions+=2;goto B69e308;
case 0x69e30b:c.instructions+=1;goto B69e30b;
case 0x69e30e:goto L69e30e;
case 0x69e310:goto L69e310;
case 0x69e312:c.instructions+=1;goto B69e312;
case 0x69e315:goto L69e315;
case 0x69e317:goto L69e317;
case 0x69e319:c.instructions+=3;goto B69e319;
case 0x69e31b:c.instructions+=2;goto B69e31b;
case 0x69e31e:c.instructions+=1;goto B69e31e;
case 0x69e320:goto L69e320;
case 0x69e323:goto L69e323;
case 0x69e326:c.instructions+=16;goto B69e326;
case 0x69e329:c.instructions+=15;goto B69e329;
case 0x69e32c:c.instructions+=14;goto B69e32c;
case 0x69e32f:c.instructions+=13;goto B69e32f;
case 0x69e331:c.instructions+=12;goto B69e331;
case 0x69e334:c.instructions+=11;goto B69e334;
case 0x69e337:c.instructions+=10;goto B69e337;
case 0x69e339:c.instructions+=9;goto B69e339;
case 0x69e33b:c.instructions+=8;goto B69e33b;
case 0x69e33d:c.instructions+=7;goto B69e33d;
case 0x69e340:c.instructions+=6;goto B69e340;
case 0x69e343:c.instructions+=5;goto B69e343;
case 0x69e346:c.instructions+=4;goto B69e346;
case 0x69e349:c.instructions+=3;goto B69e349;
case 0x69e34a:c.instructions+=2;goto B69e34a;
case 0x69e34d:c.instructions+=1;goto B69e34d;
case 0x69e34f:goto L69e34f;
case 0x69e351:goto L69e351;
case 0x69e354:c.instructions+=2;goto B69e354;
case 0x69e357:c.instructions+=1;goto B69e357;
case 0x69e35d:goto L69e35d;
case 0x69e360:c.instructions+=4;goto B69e360;
case 0x69e363:c.instructions+=3;goto B69e363;
case 0x69e366:c.instructions+=2;goto B69e366;
case 0x69e368:c.instructions+=1;goto B69e368;
case 0x69e36e:goto L69e36e;
case 0x69e374:c.instructions+=1;goto B69e374;
case 0x69e37a:goto L69e37a;
case 0x69e37e:c.instructions+=1;goto B69e37e;
case 0x69e380:goto L69e380;
case 0x69e383:c.instructions+=4;goto B69e383;
case 0x69e386:c.instructions+=3;goto B69e386;
case 0x69e389:c.instructions+=2;goto B69e389;
case 0x69e38b:c.instructions+=1;goto B69e38b;
case 0x69e390:goto L69e390;
case 0x69e391:c.instructions+=2;goto B69e391;
case 0x69e394:c.instructions+=1;goto B69e394;
case 0x69e396:goto L69e396;
case 0x69e398:c.instructions+=2;goto B69e398;
case 0x69e39b:c.instructions+=1;goto B69e39b;
case 0x69e39d:goto L69e39d;
case 0x69e3a0:c.instructions+=4;goto B69e3a0;
case 0x69e3a3:c.instructions+=3;goto B69e3a3;
case 0x69e3a6:c.instructions+=2;goto B69e3a6;
case 0x69e3a8:c.instructions+=1;goto B69e3a8;
case 0x69e3ad:goto L69e3ad;
case 0x69e3ae:c.instructions+=2;goto B69e3ae;
case 0x69e3b1:c.instructions+=1;goto B69e3b1;
case 0x69e3b3:goto L69e3b3;
case 0x69e3b5:c.instructions+=3;goto B69e3b5;
case 0x69e3ba:c.instructions+=2;goto B69e3ba;
case 0x69e3bf:c.instructions+=1;goto B69e3bf;
case 0x69e3c1:goto L69e3c1;
case 0x69e3c8:c.instructions+=1;goto B69e3c8;
case 0x69e3ca:goto L69e3ca;
case 0x69e3ce:c.instructions+=2;goto B69e3ce;
case 0x69e3d2:c.instructions+=1;goto B69e3d2;
case 0x69e3d4:goto L69e3d4;
case 0x69e3d7:c.instructions+=14;goto B69e3d7;
case 0x69e3da:c.instructions+=13;goto B69e3da;
case 0x69e3dd:c.instructions+=12;goto B69e3dd;
case 0x69e3e0:c.instructions+=11;goto B69e3e0;
case 0x69e3e3:c.instructions+=10;goto B69e3e3;
case 0x69e3e6:c.instructions+=9;goto B69e3e6;
case 0x69e3e9:c.instructions+=8;goto B69e3e9;
case 0x69e3ec:c.instructions+=7;goto B69e3ec;
case 0x69e3ef:c.instructions+=6;goto B69e3ef;
case 0x69e3f2:c.instructions+=5;goto B69e3f2;
case 0x69e3f5:c.instructions+=4;goto B69e3f5;
case 0x69e3f8:c.instructions+=3;goto B69e3f8;
case 0x69e3fb:c.instructions+=2;goto B69e3fb;
case 0x69e400:c.instructions+=1;goto B69e400;
case 0x69e402:goto L69e402;
case 0x69e405:c.instructions+=1;goto B69e405;
case 0x69e407:goto L69e407;
case 0x69e40b:c.instructions+=1;goto B69e40b;
case 0x69e40d:goto L69e40d;
case 0x69e410:c.instructions+=3;goto B69e410;
case 0x69e413:c.instructions+=2;goto B69e413;
case 0x69e416:c.instructions+=1;goto B69e416;
case 0x69e419:goto L69e419;
case 0x69e41c:c.instructions+=3;goto B69e41c;
case 0x69e41f:c.instructions+=2;goto B69e41f;
case 0x69e422:c.instructions+=1;goto B69e422;
case 0x69e424:goto L69e424;
case 0x69e426:goto L69e426;
case 0x69e429:c.instructions+=3;goto B69e429;
case 0x69e42c:c.instructions+=2;goto B69e42c;
case 0x69e42f:c.instructions+=1;goto B69e42f;
case 0x69e435:goto L69e435;
case 0x69e437:c.instructions+=2;goto B69e437;
case 0x69e43a:c.instructions+=1;goto B69e43a;
case 0x69e43c:goto L69e43c;
case 0x69e43f:c.instructions+=7;goto B69e43f;
case 0x69e442:c.instructions+=6;goto B69e442;
case 0x69e445:c.instructions+=5;goto B69e445;
case 0x69e448:c.instructions+=4;goto B69e448;
case 0x69e44b:c.instructions+=3;goto B69e44b;
case 0x69e44e:c.instructions+=2;goto B69e44e;
case 0x69e451:c.instructions+=1;goto B69e451;
case 0x69e453:goto L69e453;
case 0x69e456:goto L69e456;
case 0x69e459:c.instructions+=2;goto B69e459;
case 0x69e45c:c.instructions+=1;goto B69e45c;
case 0x69e45e:goto L69e45e;
case 0x69e461:goto L69e461;
case 0x69e462:c.instructions+=2;goto B69e462;
case 0x69e465:c.instructions+=1;goto B69e465;
case 0x69e467:goto L69e467;
case 0x69e46d:c.instructions+=1;goto B69e46d;
case 0x69e46f:goto L69e46f;
case 0x69e471:c.instructions+=2;goto B69e471;
case 0x69e474:c.instructions+=1;goto B69e474;
case 0x69e476:goto L69e476;
case 0x69e479:c.instructions+=4;goto B69e479;
case 0x69e47c:c.instructions+=3;goto B69e47c;
case 0x69e47f:c.instructions+=2;goto B69e47f;
case 0x69e482:c.instructions+=1;goto B69e482;
case 0x69e484:goto L69e484;
case 0x69e487:c.instructions+=5;goto B69e487;
case 0x69e48a:c.instructions+=4;goto B69e48a;
case 0x69e48d:c.instructions+=3;goto B69e48d;
case 0x69e490:c.instructions+=2;goto B69e490;
case 0x69e492:c.instructions+=1;goto B69e492;
case 0x69e494:goto L69e494;
case 0x69e495:c.instructions+=2;goto B69e495;
case 0x69e498:c.instructions+=1;goto B69e498;
case 0x69e49a:goto L69e49a;
case 0x69e49d:goto L69e49d;
case 0x69e4a0:c.instructions+=2;goto B69e4a0;
case 0x69e4a3:c.instructions+=1;goto B69e4a3;
case 0x69e4a5:goto L69e4a5;
case 0x69e4a8:c.instructions+=6;goto B69e4a8;
case 0x69e4ab:c.instructions+=5;goto B69e4ab;
case 0x69e4ae:c.instructions+=4;goto B69e4ae;
case 0x69e4b1:c.instructions+=3;goto B69e4b1;
case 0x69e4b4:c.instructions+=2;goto B69e4b4;
case 0x69e4b6:c.instructions+=1;goto B69e4b6;
case 0x69e4b8:goto L69e4b8;
case 0x69e4bb:c.instructions+=1;goto B69e4bb;
case 0x69e4bd:goto L69e4bd;
case 0x69e4c1:goto L69e4c1;
case 0x69e4c2:c.instructions+=2;goto B69e4c2;
case 0x69e4c5:c.instructions+=1;goto B69e4c5;
case 0x69e4c7:goto L69e4c7;
case 0x69e4cd:c.instructions+=1;goto B69e4cd;
case 0x69e4cf:goto L69e4cf;
case 0x69e4d1:c.instructions+=1;goto B69e4d1;
case 0x69e4d6:goto L69e4d6;
case 0x69e4d9:c.instructions+=1;goto B69e4d9;
case 0x69e4de:goto L69e4de;
case 0x69e4df:c.instructions+=1;goto B69e4df;
case 0x69e4e1:goto L69e4e1;
case 0x69e4e2:c.instructions+=4;goto B69e4e2;
case 0x69e4e3:c.instructions+=3;goto B69e4e3;
case 0x69e4e4:c.instructions+=2;goto B69e4e4;
case 0x69e4e5:c.instructions+=1;goto B69e4e5;
case 0x69e4e6:goto L69e4e6;
case 0x69e4e8:c.instructions+=8;goto B69e4e8;
case 0x69e4e9:c.instructions+=7;goto B69e4e9;
case 0x69e4eb:c.instructions+=6;goto B69e4eb;
case 0x69e4ec:c.instructions+=5;goto B69e4ec;
case 0x69e4ef:c.instructions+=4;goto B69e4ef;
case 0x69e4f0:c.instructions+=3;goto B69e4f0;
case 0x69e4f1:c.instructions+=2;goto B69e4f1;
case 0x69e4f3:c.instructions+=1;goto B69e4f3;
case 0x69e4f6:goto L69e4f6;
case 0x69e4fa:c.instructions+=5;goto B69e4fa;
case 0x69e4fd:c.instructions+=4;goto B69e4fd;
case 0x69e500:c.instructions+=3;goto B69e500;
case 0x69e503:c.instructions+=2;goto B69e503;
case 0x69e506:c.instructions+=1;goto B69e506;
case 0x69e508:goto L69e508;
case 0x69e50b:c.instructions+=4;goto B69e50b;
case 0x69e50e:c.instructions+=3;goto B69e50e;
case 0x69e511:c.instructions+=2;goto B69e511;
case 0x69e515:c.instructions+=1;goto B69e515;
case 0x69e517:goto L69e517;
case 0x69e51a:c.instructions+=2;goto B69e51a;
case 0x69e51c:c.instructions+=1;goto B69e51c;
case 0x69e51e:goto L69e51e;
case 0x69e521:c.instructions+=3;goto B69e521;
case 0x69e524:c.instructions+=2;goto B69e524;
case 0x69e527:c.instructions+=1;goto B69e527;
case 0x69e52a:goto L69e52a;
case 0x69e52d:c.instructions+=6;goto B69e52d;
case 0x69e530:c.instructions+=5;goto B69e530;
case 0x69e533:c.instructions+=4;goto B69e533;
case 0x69e536:c.instructions+=3;goto B69e536;
case 0x69e539:c.instructions+=2;goto B69e539;
case 0x69e53b:c.instructions+=1;goto B69e53b;
case 0x69e53d:goto L69e53d;
case 0x69e540:c.instructions+=1;goto B69e540;
case 0x69e543:goto L69e543;
case 0x69e546:goto L69e546;
case 0x69e549:c.instructions+=2;goto B69e549;
case 0x69e54c:c.instructions+=1;goto B69e54c;
case 0x69e54e:goto L69e54e;
case 0x69e550:c.instructions+=4;goto B69e550;
case 0x69e551:c.instructions+=3;goto B69e551;
case 0x69e552:c.instructions+=2;goto B69e552;
case 0x69e554:c.instructions+=1;goto B69e554;
case 0x69e559:goto L69e559;
case 0x69e55c:c.instructions+=2;goto B69e55c;
case 0x69e55f:c.instructions+=1;goto B69e55f;
case 0x69e561:goto L69e561;
case 0x69e568:c.instructions+=2;goto B69e568;
case 0x69e56a:c.instructions+=1;goto B69e56a;
case 0x69e56c:goto L69e56c;
case 0x69e56d:c.instructions+=4;goto B69e56d;
case 0x69e56e:c.instructions+=3;goto B69e56e;
case 0x69e56f:c.instructions+=2;goto B69e56f;
case 0x69e570:c.instructions+=1;goto B69e570;
case 0x69e573:goto L69e573;
case 0x69e575:c.instructions+=9;goto B69e575;
case 0x69e576:c.instructions+=8;goto B69e576;
case 0x69e578:c.instructions+=7;goto B69e578;
case 0x69e579:c.instructions+=6;goto B69e579;
case 0x69e57a:c.instructions+=5;goto B69e57a;
case 0x69e57b:c.instructions+=4;goto B69e57b;
case 0x69e57c:c.instructions+=3;goto B69e57c;
case 0x69e57d:c.instructions+=2;goto B69e57d;
case 0x69e57f:c.instructions+=1;goto B69e57f;
case 0x69e584:goto L69e584;
case 0x69e586:c.instructions+=3;goto B69e586;
case 0x69e588:c.instructions+=2;goto B69e588;
case 0x69e58b:c.instructions+=1;goto B69e58b;
case 0x69e58d:goto L69e58d;
case 0x69e590:c.instructions+=8;goto B69e590;
case 0x69e593:c.instructions+=7;goto B69e593;
case 0x69e594:c.instructions+=6;goto B69e594;
case 0x69e597:c.instructions+=5;goto B69e597;
case 0x69e59a:c.instructions+=4;goto B69e59a;
case 0x69e59d:c.instructions+=3;goto B69e59d;
case 0x69e5a0:c.instructions+=2;goto B69e5a0;
case 0x69e5a3:c.instructions+=1;goto B69e5a3;
case 0x69e5a5:goto L69e5a5;
case 0x69e5a8:c.instructions+=2;goto B69e5a8;
case 0x69e5ab:c.instructions+=1;goto B69e5ab;
case 0x69e5ad:goto L69e5ad;
case 0x69e5b0:c.instructions+=4;goto B69e5b0;
case 0x69e5b3:c.instructions+=3;goto B69e5b3;
case 0x69e5b6:c.instructions+=2;goto B69e5b6;
case 0x69e5bc:c.instructions+=1;goto B69e5bc;
case 0x69e5be:goto L69e5be;
case 0x69e5c0:c.instructions+=2;goto B69e5c0;
case 0x69e5c3:c.instructions+=1;goto B69e5c3;
case 0x69e5c5:goto L69e5c5;
case 0x69e5c8:c.instructions+=5;goto B69e5c8;
case 0x69e5ca:c.instructions+=4;goto B69e5ca;
case 0x69e5cd:c.instructions+=3;goto B69e5cd;
case 0x69e5cf:c.instructions+=2;goto B69e5cf;
case 0x69e5d2:c.instructions+=1;goto B69e5d2;
case 0x69e5d7:goto L69e5d7;
case 0x69e5d8:c.instructions+=2;goto B69e5d8;
case 0x69e5db:c.instructions+=1;goto B69e5db;
case 0x69e5dd:goto L69e5dd;
case 0x69e5df:c.instructions+=2;goto B69e5df;
case 0x69e5e2:c.instructions+=1;goto B69e5e2;
case 0x69e5e4:goto L69e5e4;
case 0x69e5e7:c.instructions+=3;goto B69e5e7;
case 0x69e5ea:c.instructions+=2;goto B69e5ea;
case 0x69e5ed:c.instructions+=1;goto B69e5ed;
case 0x69e5ef:goto L69e5ef;
case 0x69e5f2:c.instructions+=4;goto B69e5f2;
case 0x69e5f5:c.instructions+=3;goto B69e5f5;
case 0x69e5f8:c.instructions+=2;goto B69e5f8;
case 0x69e5fb:c.instructions+=1;goto B69e5fb;
case 0x69e5fd:goto L69e5fd;
case 0x69e5ff:goto L69e5ff;
case 0x69e601:c.instructions+=4;goto B69e601;
case 0x69e604:c.instructions+=3;goto B69e604;
case 0x69e606:c.instructions+=2;goto B69e606;
case 0x69e607:c.instructions+=1;goto B69e607;
case 0x69e60c:goto L69e60c;
case 0x69e60d:c.instructions+=2;goto B69e60d;
case 0x69e610:c.instructions+=1;goto B69e610;
case 0x69e612:goto L69e612;
case 0x69e615:c.instructions+=4;goto B69e615;
case 0x69e618:c.instructions+=3;goto B69e618;
case 0x69e61a:c.instructions+=2;goto B69e61a;
case 0x69e61d:c.instructions+=1;goto B69e61d;
case 0x69e61f:goto L69e61f;
case 0x69e621:c.instructions+=2;goto B69e621;
case 0x69e624:c.instructions+=1;goto B69e624;
case 0x69e626:goto L69e626;
case 0x69e629:c.instructions+=4;goto B69e629;
case 0x69e62c:c.instructions+=3;goto B69e62c;
case 0x69e62f:c.instructions+=2;goto B69e62f;
case 0x69e631:c.instructions+=1;goto B69e631;
case 0x69e633:goto L69e633;
case 0x69e634:c.instructions+=1;goto B69e634;
case 0x69e639:goto L69e639;
case 0x69e63b:c.instructions+=2;goto B69e63b;
case 0x69e63e:c.instructions+=1;goto B69e63e;
case 0x69e644:goto L69e644;
case 0x69e647:c.instructions+=2;goto B69e647;
case 0x69e649:c.instructions+=1;goto B69e649;
case 0x69e64b:goto L69e64b;
case 0x69e64c:c.instructions+=1;goto B69e64c;
case 0x69e651:goto L69e651;
case 0x69e653:c.instructions+=2;goto B69e653;
case 0x69e656:c.instructions+=1;goto B69e656;
case 0x69e65c:goto L69e65c;
case 0x69e65e:c.instructions+=5;goto B69e65e;
case 0x69e65f:c.instructions+=4;goto B69e65f;
case 0x69e662:c.instructions+=3;goto B69e662;
case 0x69e665:c.instructions+=2;goto B69e665;
case 0x69e668:c.instructions+=1;goto B69e668;
case 0x69e66a:goto L69e66a;
case 0x69e66d:c.instructions+=2;goto B69e66d;
case 0x69e670:c.instructions+=1;goto B69e670;
case 0x69e672:goto L69e672;
case 0x69e675:c.instructions+=4;goto B69e675;
case 0x69e678:c.instructions+=3;goto B69e678;
case 0x69e67b:c.instructions+=2;goto B69e67b;
case 0x69e681:c.instructions+=1;goto B69e681;
case 0x69e683:goto L69e683;
case 0x69e685:c.instructions+=2;goto B69e685;
case 0x69e688:c.instructions+=1;goto B69e688;
case 0x69e68a:goto L69e68a;
case 0x69e68d:c.instructions+=5;goto B69e68d;
case 0x69e68f:c.instructions+=4;goto B69e68f;
case 0x69e692:c.instructions+=3;goto B69e692;
case 0x69e694:c.instructions+=2;goto B69e694;
case 0x69e697:c.instructions+=1;goto B69e697;
case 0x69e69c:goto L69e69c;
case 0x69e69d:c.instructions+=2;goto B69e69d;
case 0x69e6a0:c.instructions+=1;goto B69e6a0;
case 0x69e6a2:goto L69e6a2;
case 0x69e6a4:c.instructions+=2;goto B69e6a4;
case 0x69e6a7:c.instructions+=1;goto B69e6a7;
case 0x69e6a9:goto L69e6a9;
case 0x69e6ac:c.instructions+=3;goto B69e6ac;
case 0x69e6af:c.instructions+=2;goto B69e6af;
case 0x69e6b2:c.instructions+=1;goto B69e6b2;
case 0x69e6b4:goto L69e6b4;
case 0x69e6b7:c.instructions+=4;goto B69e6b7;
case 0x69e6ba:c.instructions+=3;goto B69e6ba;
case 0x69e6bd:c.instructions+=2;goto B69e6bd;
case 0x69e6c0:c.instructions+=1;goto B69e6c0;
case 0x69e6c2:goto L69e6c2;
case 0x69e6c4:goto L69e6c4;
case 0x69e6c6:c.instructions+=4;goto B69e6c6;
case 0x69e6c9:c.instructions+=3;goto B69e6c9;
case 0x69e6cb:c.instructions+=2;goto B69e6cb;
case 0x69e6cc:c.instructions+=1;goto B69e6cc;
case 0x69e6d1:goto L69e6d1;
case 0x69e6d2:c.instructions+=2;goto B69e6d2;
case 0x69e6d5:c.instructions+=1;goto B69e6d5;
case 0x69e6d7:goto L69e6d7;
case 0x69e6da:c.instructions+=4;goto B69e6da;
case 0x69e6dd:c.instructions+=3;goto B69e6dd;
case 0x69e6df:c.instructions+=2;goto B69e6df;
case 0x69e6e2:c.instructions+=1;goto B69e6e2;
case 0x69e6e4:goto L69e6e4;
case 0x69e6e7:c.instructions+=2;goto B69e6e7;
case 0x69e6ea:c.instructions+=1;goto B69e6ea;
case 0x69e6f0:goto L69e6f0;
case 0x69e6f2:goto L69e6f2;
case 0x69e6f7:c.instructions+=1;goto B69e6f7;
case 0x69e6fc:goto L69e6fc;
case 0x69e6fe:goto L69e6fe;
case 0x69e701:c.instructions+=5;goto B69e701;
case 0x69e704:c.instructions+=4;goto B69e704;
case 0x69e707:c.instructions+=3;goto B69e707;
case 0x69e70a:c.instructions+=2;goto B69e70a;
case 0x69e70c:c.instructions+=1;goto B69e70c;
case 0x69e70e:goto L69e70e;
case 0x69e70f:c.instructions+=4;goto B69e70f;
case 0x69e710:c.instructions+=3;goto B69e710;
case 0x69e713:c.instructions+=2;goto B69e713;
case 0x69e718:c.instructions+=1;goto B69e718;
case 0x69e71d:goto L69e71d;
case 0x69e71f:c.instructions+=5;goto B69e71f;
case 0x69e720:c.instructions+=4;goto B69e720;
case 0x69e723:c.instructions+=3;goto B69e723;
case 0x69e726:c.instructions+=2;goto B69e726;
case 0x69e728:c.instructions+=1;goto B69e728;
case 0x69e72a:goto L69e72a;
case 0x69e72d:c.instructions+=3;goto B69e72d;
case 0x69e730:c.instructions+=2;goto B69e730;
case 0x69e734:c.instructions+=1;goto B69e734;
case 0x69e736:goto L69e736;
case 0x69e739:c.instructions+=2;goto B69e739;
case 0x69e73c:c.instructions+=1;goto B69e73c;
case 0x69e73f:goto L69e73f;
case 0x69e740:c.instructions+=2;goto B69e740;
case 0x69e743:c.instructions+=1;goto B69e743;
case 0x69e745:goto L69e745;
case 0x69e747:c.instructions+=1;goto B69e747;
case 0x69e748:goto L69e748;
case 0x69e74b:c.instructions+=2;goto B69e74b;
case 0x69e74e:c.instructions+=1;goto B69e74e;
case 0x69e750:goto L69e750;
case 0x69e752:c.instructions+=1;goto B69e752;
case 0x69e753:goto L69e753;
case 0x69e756:c.instructions+=2;goto B69e756;
case 0x69e758:c.instructions+=1;goto B69e758;
case 0x69e75a:goto L69e75a;
case 0x69e75c:c.instructions+=4;goto B69e75c;
case 0x69e75d:c.instructions+=3;goto B69e75d;
case 0x69e760:c.instructions+=2;goto B69e760;
case 0x69e765:c.instructions+=1;goto B69e765;
case 0x69e76a:goto L69e76a;
case 0x69e76d:c.instructions+=3;goto B69e76d;
case 0x69e770:c.instructions+=2;goto B69e770;
case 0x69e772:c.instructions+=1;goto B69e772;
case 0x69e774:goto L69e774;
case 0x69e777:c.instructions+=3;goto B69e777;
case 0x69e77a:c.instructions+=2;goto B69e77a;
case 0x69e77e:c.instructions+=1;goto B69e77e;
case 0x69e780:goto L69e780;
case 0x69e783:c.instructions+=2;goto B69e783;
case 0x69e786:c.instructions+=1;goto B69e786;
case 0x69e789:goto L69e789;
case 0x69e78a:c.instructions+=2;goto B69e78a;
case 0x69e78d:c.instructions+=1;goto B69e78d;
case 0x69e78f:goto L69e78f;
case 0x69e792:c.instructions+=1;goto B69e792;
case 0x69e795:goto L69e795;
case 0x69e798:c.instructions+=3;goto B69e798;
case 0x69e79b:c.instructions+=2;goto B69e79b;
case 0x69e79e:c.instructions+=1;goto B69e79e;
case 0x69e7a4:goto L69e7a4;
case 0x69e7a6:goto L69e7a6;
case 0x69e7a7:c.instructions+=4;goto B69e7a7;
case 0x69e7a8:c.instructions+=3;goto B69e7a8;
case 0x69e7a9:c.instructions+=2;goto B69e7a9;
case 0x69e7aa:c.instructions+=1;goto B69e7aa;
case 0x69e7ab:goto L69e7ab;
case 0x69e7ad:c.instructions+=2;goto B69e7ad;
case 0x69e7b0:c.instructions+=1;goto B69e7b0;
case 0x69e7b2:goto L69e7b2;
case 0x69e7b5:c.instructions+=5;goto B69e7b5;
case 0x69e7b8:c.instructions+=4;goto B69e7b8;
case 0x69e7bb:c.instructions+=3;goto B69e7bb;
case 0x69e7bc:c.instructions+=2;goto B69e7bc;
case 0x69e7bf:c.instructions+=1;goto B69e7bf;
case 0x69e7c1:goto L69e7c1;
case 0x69e7c3:c.instructions+=1;goto B69e7c3;
case 0x69e7c4:goto L69e7c4;
case 0x69e7c6:c.instructions+=10;goto B69e7c6;
case 0x69e7c7:c.instructions+=9;goto B69e7c7;
case 0x69e7c9:c.instructions+=8;goto B69e7c9;
case 0x69e7ca:c.instructions+=7;goto B69e7ca;
case 0x69e7cb:c.instructions+=6;goto B69e7cb;
case 0x69e7cc:c.instructions+=5;goto B69e7cc;
case 0x69e7cd:c.instructions+=4;goto B69e7cd;
case 0x69e7cf:c.instructions+=3;goto B69e7cf;
case 0x69e7d2:c.instructions+=2;goto B69e7d2;
case 0x69e7d5:c.instructions+=1;goto B69e7d5;
case 0x69e7d7:goto L69e7d7;
case 0x69e7da:c.instructions+=4;goto B69e7da;
case 0x69e7dd:c.instructions+=3;goto B69e7dd;
case 0x69e7e0:c.instructions+=2;goto B69e7e0;
case 0x69e7e2:c.instructions+=1;goto B69e7e2;
case 0x69e7e4:goto L69e7e4;
case 0x69e7e7:c.instructions+=2;goto B69e7e7;
case 0x69e7ea:c.instructions+=1;goto B69e7ea;
case 0x69e7ec:goto L69e7ec;
case 0x69e7ee:goto L69e7ee;
case 0x69e7f1:c.instructions+=3;goto B69e7f1;
case 0x69e7f4:c.instructions+=2;goto B69e7f4;
case 0x69e7f6:c.instructions+=1;goto B69e7f6;
case 0x69e7f8:goto L69e7f8;
case 0x69e7fb:c.instructions+=3;goto B69e7fb;
case 0x69e7fe:c.instructions+=2;goto B69e7fe;
case 0x69e801:c.instructions+=1;goto B69e801;
case 0x69e803:goto L69e803;
case 0x69e805:goto L69e805;
case 0x69e808:c.instructions+=3;goto B69e808;
case 0x69e80b:c.instructions+=2;goto B69e80b;
case 0x69e80d:c.instructions+=1;goto B69e80d;
case 0x69e80f:goto L69e80f;
case 0x69e812:c.instructions+=3;goto B69e812;
case 0x69e815:c.instructions+=2;goto B69e815;
case 0x69e818:c.instructions+=1;goto B69e818;
case 0x69e81a:goto L69e81a;
case 0x69e81c:goto L69e81c;
case 0x69e81d:c.instructions+=3;goto B69e81d;
case 0x69e820:c.instructions+=2;goto B69e820;
case 0x69e823:c.instructions+=1;goto B69e823;
case 0x69e825:goto L69e825;
case 0x69e829:c.instructions+=2;goto B69e829;
case 0x69e82d:c.instructions+=1;goto B69e82d;
case 0x69e82f:goto L69e82f;
case 0x69e832:c.instructions+=5;goto B69e832;
case 0x69e835:c.instructions+=4;goto B69e835;
case 0x69e838:c.instructions+=3;goto B69e838;
case 0x69e83a:c.instructions+=2;goto B69e83a;
case 0x69e83c:c.instructions+=1;goto B69e83c;
case 0x69e83e:goto L69e83e;
case 0x69e841:c.instructions+=1;goto B69e841;
case 0x69e843:goto L69e843;
case 0x69e846:c.instructions+=4;goto B69e846;
case 0x69e849:c.instructions+=3;goto B69e849;
case 0x69e84b:c.instructions+=2;goto B69e84b;
case 0x69e84d:c.instructions+=1;goto B69e84d;
case 0x69e84f:goto L69e84f;
case 0x69e852:c.instructions+=4;goto B69e852;
case 0x69e855:c.instructions+=3;goto B69e855;
case 0x69e858:c.instructions+=2;goto B69e858;
case 0x69e85b:c.instructions+=1;goto B69e85b;
case 0x69e85d:goto L69e85d;
case 0x69e85f:goto L69e85f;
case 0x69e860:c.instructions+=3;goto B69e860;
case 0x69e862:c.instructions+=2;goto B69e862;
case 0x69e865:c.instructions+=1;goto B69e865;
case 0x69e867:goto L69e867;
case 0x69e869:c.instructions+=2;goto B69e869;
case 0x69e86c:c.instructions+=1;goto B69e86c;
case 0x69e86e:goto L69e86e;
case 0x69e871:c.instructions+=4;goto B69e871;
case 0x69e874:c.instructions+=3;goto B69e874;
case 0x69e876:c.instructions+=2;goto B69e876;
case 0x69e878:c.instructions+=1;goto B69e878;
case 0x69e87a:goto L69e87a;
case 0x69e87d:c.instructions+=4;goto B69e87d;
case 0x69e880:c.instructions+=3;goto B69e880;
case 0x69e883:c.instructions+=2;goto B69e883;
case 0x69e886:c.instructions+=1;goto B69e886;
case 0x69e888:goto L69e888;
case 0x69e88a:goto L69e88a;
case 0x69e88b:c.instructions+=3;goto B69e88b;
case 0x69e88d:c.instructions+=2;goto B69e88d;
case 0x69e890:c.instructions+=1;goto B69e890;
case 0x69e892:goto L69e892;
case 0x69e895:c.instructions+=3;goto B69e895;
case 0x69e898:c.instructions+=2;goto B69e898;
case 0x69e89b:c.instructions+=1;goto B69e89b;
case 0x69e89d:goto L69e89d;
case 0x69e89e:c.instructions+=5;goto B69e89e;
case 0x69e89f:c.instructions+=4;goto B69e89f;
case 0x69e8a1:c.instructions+=3;goto B69e8a1;
case 0x69e8a2:c.instructions+=2;goto B69e8a2;
case 0x69e8a3:c.instructions+=1;goto B69e8a3;
case 0x69e8a4:goto L69e8a4;
case 0x69e8a6:c.instructions+=12;goto B69e8a6;
case 0x69e8a7:c.instructions+=11;goto B69e8a7;
case 0x69e8a9:c.instructions+=10;goto B69e8a9;
case 0x69e8ac:c.instructions+=9;goto B69e8ac;
case 0x69e8af:c.instructions+=8;goto B69e8af;
case 0x69e8b0:c.instructions+=7;goto B69e8b0;
case 0x69e8b1:c.instructions+=6;goto B69e8b1;
case 0x69e8b4:c.instructions+=5;goto B69e8b4;
case 0x69e8b7:c.instructions+=4;goto B69e8b7;
case 0x69e8ba:c.instructions+=3;goto B69e8ba;
case 0x69e8bd:c.instructions+=2;goto B69e8bd;
case 0x69e8be:c.instructions+=1;goto B69e8be;
case 0x69e8c0:goto L69e8c0;
case 0x69e8c2:c.instructions+=1;goto B69e8c2;
case 0x69e8c4:goto L69e8c4;
case 0x69e8c7:c.instructions+=1;goto B69e8c7;
case 0x69e8ca:goto L69e8ca;
case 0x69e8cc:c.instructions+=2;goto B69e8cc;
case 0x69e8cf:c.instructions+=1;goto B69e8cf;
case 0x69e8d1:goto L69e8d1;
case 0x69e8d5:c.instructions+=1;goto B69e8d5;
case 0x69e8d7:goto L69e8d7;
case 0x69e8d8:c.instructions+=2;goto B69e8d8;
case 0x69e8dd:c.instructions+=1;goto B69e8dd;
case 0x69e8df:goto L69e8df;
case 0x69e8e0:c.instructions+=1;goto B69e8e0;
case 0x69e8e5:goto L69e8e5;
case 0x69e8e8:c.instructions+=4;goto B69e8e8;
case 0x69e8eb:c.instructions+=3;goto B69e8eb;
case 0x69e8ec:c.instructions+=2;goto B69e8ec;
case 0x69e8ed:c.instructions+=1;goto B69e8ed;
case 0x69e8f2:goto L69e8f2;
case 0x69e8f5:c.instructions+=3;goto B69e8f5;
case 0x69e8f8:c.instructions+=2;goto B69e8f8;
case 0x69e8fb:c.instructions+=1;goto B69e8fb;
case 0x69e8fd:goto L69e8fd;
case 0x69e8fe:c.instructions+=7;goto B69e8fe;
case 0x69e900:c.instructions+=6;goto B69e900;
case 0x69e902:c.instructions+=5;goto B69e902;
case 0x69e907:c.instructions+=4;goto B69e907;
case 0x69e908:c.instructions+=3;goto B69e908;
case 0x69e90a:c.instructions+=2;goto B69e90a;
case 0x69e90b:c.instructions+=1;goto B69e90b;
case 0x69e910:goto L69e910;
case 0x69e913:c.instructions+=1;goto B69e913;
case 0x69e915:goto L69e915;
case 0x69e917:c.instructions+=6;goto B69e917;
case 0x69e919:c.instructions+=5;goto B69e919;
case 0x69e91e:c.instructions+=4;goto B69e91e;
case 0x69e91f:c.instructions+=3;goto B69e91f;
case 0x69e921:c.instructions+=2;goto B69e921;
case 0x69e922:c.instructions+=1;goto B69e922;
case 0x69e927:goto L69e927;
case 0x69e92a:goto L69e92a;
case 0x69e92f:c.instructions+=5;goto B69e92f;
case 0x69e930:c.instructions+=4;goto B69e930;
case 0x69e931:c.instructions+=3;goto B69e931;
case 0x69e932:c.instructions+=2;goto B69e932;
case 0x69e933:c.instructions+=1;goto B69e933;
case 0x69e936:goto L69e936;
case 0x69e938:c.instructions+=10;goto B69e938;
case 0x69e939:c.instructions+=9;goto B69e939;
case 0x69e93b:c.instructions+=8;goto B69e93b;
case 0x69e941:c.instructions+=7;goto B69e941;
case 0x69e944:c.instructions+=6;goto B69e944;
case 0x69e945:c.instructions+=5;goto B69e945;
case 0x69e948:c.instructions+=4;goto B69e948;
case 0x69e94e:c.instructions+=3;goto B69e94e;
case 0x69e953:c.instructions+=2;goto B69e953;
case 0x69e954:c.instructions+=1;goto B69e954;
case 0x69e959:goto L69e959;
case 0x69e95c:c.instructions+=5;goto B69e95c;
case 0x69e95e:c.instructions+=4;goto B69e95e;
case 0x69e961:c.instructions+=3;goto B69e961;
case 0x69e963:c.instructions+=2;goto B69e963;
case 0x69e966:c.instructions+=1;goto B69e966;
case 0x69e968:goto L69e968;
case 0x69e96b:c.instructions+=2;goto B69e96b;
case 0x69e96e:c.instructions+=1;goto B69e96e;
case 0x69e970:goto L69e970;
case 0x69e973:c.instructions+=1;goto B69e973;
case 0x69e975:goto L69e975;
case 0x69e978:c.instructions+=1;goto B69e978;
case 0x69e97a:goto L69e97a;
case 0x69e97d:c.instructions+=1;goto B69e97d;
case 0x69e97f:goto L69e97f;
case 0x69e982:c.instructions+=2;goto B69e982;
case 0x69e985:c.instructions+=1;goto B69e985;
case 0x69e987:goto L69e987;
case 0x69e98a:goto L69e98a;
case 0x69e98b:c.instructions+=8;goto B69e98b;
case 0x69e98e:c.instructions+=7;goto B69e98e;
case 0x69e994:c.instructions+=6;goto B69e994;
case 0x69e995:c.instructions+=5;goto B69e995;
case 0x69e99a:c.instructions+=4;goto B69e99a;
case 0x69e99d:c.instructions+=3;goto B69e99d;
case 0x69e99e:c.instructions+=2;goto B69e99e;
case 0x69e9a4:c.instructions+=1;goto B69e9a4;
case 0x69e9a9:goto L69e9a9;
case 0x69e9ac:c.instructions+=5;goto B69e9ac;
case 0x69e9b6:c.instructions+=4;goto B69e9b6;
case 0x69e9b8:c.instructions+=3;goto B69e9b8;
case 0x69e9b9:c.instructions+=2;goto B69e9b9;
case 0x69e9ba:c.instructions+=1;goto B69e9ba;
case 0x69e9bb:goto L69e9bb;
case 0x69e9bd:c.instructions+=10;goto B69e9bd;
case 0x69e9be:c.instructions+=9;goto B69e9be;
case 0x69e9c0:c.instructions+=8;goto B69e9c0;
case 0x69e9c6:c.instructions+=7;goto B69e9c6;
case 0x69e9c9:c.instructions+=6;goto B69e9c9;
case 0x69e9ca:c.instructions+=5;goto B69e9ca;
case 0x69e9cd:c.instructions+=4;goto B69e9cd;
case 0x69e9d3:c.instructions+=3;goto B69e9d3;
case 0x69e9d8:c.instructions+=2;goto B69e9d8;
case 0x69e9d9:c.instructions+=1;goto B69e9d9;
case 0x69e9de:goto L69e9de;
case 0x69e9e1:c.instructions+=5;goto B69e9e1;
case 0x69e9e3:c.instructions+=4;goto B69e9e3;
case 0x69e9e6:c.instructions+=3;goto B69e9e6;
case 0x69e9e8:c.instructions+=2;goto B69e9e8;
case 0x69e9eb:c.instructions+=1;goto B69e9eb;
case 0x69e9ed:goto L69e9ed;
case 0x69e9f0:c.instructions+=2;goto B69e9f0;
case 0x69e9f3:c.instructions+=1;goto B69e9f3;
case 0x69e9f5:goto L69e9f5;
case 0x69e9f8:c.instructions+=1;goto B69e9f8;
case 0x69e9fa:goto L69e9fa;
case 0x69e9fd:c.instructions+=1;goto B69e9fd;
case 0x69e9ff:goto L69e9ff;
case 0x69ea02:c.instructions+=1;goto B69ea02;
case 0x69ea04:goto L69ea04;
case 0x69ea07:c.instructions+=2;goto B69ea07;
case 0x69ea0a:c.instructions+=1;goto B69ea0a;
case 0x69ea0c:goto L69ea0c;
case 0x69ea0f:goto L69ea0f;
case 0x69ea15:c.instructions+=7;goto B69ea15;
case 0x69ea16:c.instructions+=6;goto B69ea16;
case 0x69ea1b:c.instructions+=5;goto B69ea1b;
case 0x69ea1e:c.instructions+=4;goto B69ea1e;
case 0x69ea1f:c.instructions+=3;goto B69ea1f;
case 0x69ea22:c.instructions+=2;goto B69ea22;
case 0x69ea28:c.instructions+=1;goto B69ea28;
case 0x69ea2d:goto L69ea2d;
case 0x69ea30:c.instructions+=3;goto B69ea30;
case 0x69ea32:c.instructions+=2;goto B69ea32;
case 0x69ea33:c.instructions+=1;goto B69ea33;
case 0x69ea34:goto L69ea34;
case 0x69ea36:c.instructions+=15;goto B69ea36;
case 0x69ea37:c.instructions+=14;goto B69ea37;
case 0x69ea39:c.instructions+=13;goto B69ea39;
case 0x69ea3c:c.instructions+=12;goto B69ea3c;
case 0x69ea3d:c.instructions+=11;goto B69ea3d;
case 0x69ea40:c.instructions+=10;goto B69ea40;
case 0x69ea43:c.instructions+=9;goto B69ea43;
case 0x69ea44:c.instructions+=8;goto B69ea44;
case 0x69ea47:c.instructions+=7;goto B69ea47;
case 0x69ea4a:c.instructions+=6;goto B69ea4a;
case 0x69ea4b:c.instructions+=5;goto B69ea4b;
case 0x69ea4e:c.instructions+=4;goto B69ea4e;
case 0x69ea50:c.instructions+=3;goto B69ea50;
case 0x69ea52:c.instructions+=2;goto B69ea52;
case 0x69ea54:c.instructions+=1;goto B69ea54;
case 0x69ea5a:goto L69ea5a;
case 0x69ea60:goto L69ea60;
case 0x69ea63:c.instructions+=3;goto B69ea63;
case 0x69ea67:c.instructions+=2;goto B69ea67;
case 0x69ea69:c.instructions+=1;goto B69ea69;
case 0x69ea6b:goto L69ea6b;
case 0x69ea6e:c.instructions+=5;goto B69ea6e;
case 0x69ea71:c.instructions+=4;goto B69ea71;
case 0x69ea73:c.instructions+=3;goto B69ea73;
case 0x69ea76:c.instructions+=2;goto B69ea76;
case 0x69ea79:c.instructions+=1;goto B69ea79;
case 0x69ea7b:goto L69ea7b;
case 0x69ea7e:goto L69ea7e;
case 0x69ea81:c.instructions+=9;goto B69ea81;
case 0x69ea84:c.instructions+=8;goto B69ea84;
case 0x69ea87:c.instructions+=7;goto B69ea87;
case 0x69ea89:c.instructions+=6;goto B69ea89;
case 0x69ea8c:c.instructions+=5;goto B69ea8c;
case 0x69ea8f:c.instructions+=4;goto B69ea8f;
case 0x69ea92:c.instructions+=3;goto B69ea92;
case 0x69ea95:c.instructions+=2;goto B69ea95;
case 0x69ea97:c.instructions+=1;goto B69ea97;
case 0x69ea9d:goto L69ea9d;
case 0x69eaa3:goto L69eaa3;
case 0x69eaa6:c.instructions+=3;goto B69eaa6;
case 0x69eaa9:c.instructions+=2;goto B69eaa9;
case 0x69eaab:c.instructions+=1;goto B69eaab;
case 0x69eab1:goto L69eab1;
case 0x69eab7:goto L69eab7;
case 0x69eaba:c.instructions+=3;goto B69eaba;
case 0x69eabd:c.instructions+=2;goto B69eabd;
case 0x69eabf:c.instructions+=1;goto B69eabf;
case 0x69eac5:goto L69eac5;
case 0x69eacb:goto L69eacb;
case 0x69eace:c.instructions+=5;goto B69eace;
case 0x69ead1:c.instructions+=4;goto B69ead1;
case 0x69ead5:c.instructions+=3;goto B69ead5;
case 0x69ead8:c.instructions+=2;goto B69ead8;
case 0x69eadb:c.instructions+=1;goto B69eadb;
case 0x69eadd:goto L69eadd;
case 0x69eadf:c.instructions+=1;goto B69eadf;
case 0x69eae4:goto L69eae4;
case 0x69eae6:c.instructions+=1;goto B69eae6;
case 0x69eaec:goto L69eaec;
case 0x69eaee:c.instructions+=4;goto B69eaee;
case 0x69eaf4:c.instructions+=3;goto B69eaf4;
case 0x69eaf7:c.instructions+=2;goto B69eaf7;
case 0x69eafe:c.instructions+=1;goto B69eafe;
case 0x69eb04:goto L69eb04;
case 0x69eb07:c.instructions+=5;goto B69eb07;
case 0x69eb0a:c.instructions+=4;goto B69eb0a;
case 0x69eb0d:c.instructions+=3;goto B69eb0d;
case 0x69eb10:c.instructions+=2;goto B69eb10;
case 0x69eb13:c.instructions+=1;goto B69eb13;
case 0x69eb15:goto L69eb15;
case 0x69eb18:c.instructions+=17;goto B69eb18;
case 0x69eb1b:c.instructions+=16;goto B69eb1b;
case 0x69eb1d:c.instructions+=15;goto B69eb1d;
case 0x69eb20:c.instructions+=14;goto B69eb20;
case 0x69eb23:c.instructions+=13;goto B69eb23;
case 0x69eb26:c.instructions+=12;goto B69eb26;
case 0x69eb29:c.instructions+=11;goto B69eb29;
case 0x69eb2c:c.instructions+=10;goto B69eb2c;
case 0x69eb2f:c.instructions+=9;goto B69eb2f;
case 0x69eb32:c.instructions+=8;goto B69eb32;
case 0x69eb34:c.instructions+=7;goto B69eb34;
case 0x69eb37:c.instructions+=6;goto B69eb37;
case 0x69eb39:c.instructions+=5;goto B69eb39;
case 0x69eb3c:c.instructions+=4;goto B69eb3c;
case 0x69eb3f:c.instructions+=3;goto B69eb3f;
case 0x69eb42:c.instructions+=2;goto B69eb42;
case 0x69eb45:c.instructions+=1;goto B69eb45;
case 0x69eb47:goto L69eb47;
case 0x69eb4a:c.instructions+=2;goto B69eb4a;
case 0x69eb4d:c.instructions+=1;goto B69eb4d;
case 0x69eb4f:goto L69eb4f;
case 0x69eb52:goto L69eb52;
case 0x69eb55:c.instructions+=4;goto B69eb55;
case 0x69eb58:c.instructions+=3;goto B69eb58;
case 0x69eb5a:c.instructions+=2;goto B69eb5a;
case 0x69eb5c:c.instructions+=1;goto B69eb5c;
case 0x69eb5e:goto L69eb5e;
case 0x69eb60:c.instructions+=1;goto B69eb60;
case 0x69eb62:goto L69eb62;
case 0x69eb64:goto L69eb64;
case 0x69eb67:c.instructions+=1;goto B69eb67;
case 0x69eb69:goto L69eb69;
case 0x69eb6b:goto L69eb6b;
case 0x69eb6e:c.instructions+=1;goto B69eb6e;
case 0x69eb70:goto L69eb70;
case 0x69eb72:goto L69eb72;
case 0x69eb75:c.instructions+=5;goto B69eb75;
case 0x69eb78:c.instructions+=4;goto B69eb78;
case 0x69eb7c:c.instructions+=3;goto B69eb7c;
case 0x69eb7f:c.instructions+=2;goto B69eb7f;
case 0x69eb82:c.instructions+=1;goto B69eb82;
case 0x69eb84:goto L69eb84;
case 0x69eb86:goto L69eb86;
case 0x69eb87:c.instructions+=4;goto B69eb87;
case 0x69eb88:c.instructions+=3;goto B69eb88;
case 0x69eb89:c.instructions+=2;goto B69eb89;
case 0x69eb8a:c.instructions+=1;goto B69eb8a;
case 0x69eb8d:goto L69eb8d;
case 0x69eb90:c.instructions+=3;goto B69eb90;
case 0x69eb94:c.instructions+=2;goto B69eb94;
case 0x69eb96:c.instructions+=1;goto B69eb96;
case 0x69eb98:goto L69eb98;
case 0x69eb9b:c.instructions+=4;goto B69eb9b;
case 0x69eb9e:c.instructions+=3;goto B69eb9e;
case 0x69eba1:c.instructions+=2;goto B69eba1;
case 0x69eba3:c.instructions+=1;goto B69eba3;
case 0x69eba5:goto L69eba5;
case 0x69eba8:c.instructions+=7;goto B69eba8;
case 0x69ebaa:c.instructions+=6;goto B69ebaa;
case 0x69ebad:c.instructions+=5;goto B69ebad;
case 0x69ebb0:c.instructions+=4;goto B69ebb0;
case 0x69ebb3:c.instructions+=3;goto B69ebb3;
case 0x69ebb6:c.instructions+=2;goto B69ebb6;
case 0x69ebb8:c.instructions+=1;goto B69ebb8;
case 0x69ebba:goto L69ebba;
case 0x69ebbc:goto L69ebbc;
case 0x69ebbf:c.instructions+=3;goto B69ebbf;
case 0x69ebc2:c.instructions+=2;goto B69ebc2;
case 0x69ebc5:c.instructions+=1;goto B69ebc5;
case 0x69ebc7:goto L69ebc7;
case 0x69ebc9:goto L69ebc9;
case 0x69ebcc:c.instructions+=1;goto B69ebcc;
case 0x69ebce:goto L69ebce;
case 0x69ebd0:c.instructions+=2;goto B69ebd0;
case 0x69ebd1:c.instructions+=1;goto B69ebd1;
case 0x69ebd3:goto L69ebd3;
case 0x69ebd5:c.instructions+=8;goto B69ebd5;
case 0x69ebd6:c.instructions+=7;goto B69ebd6;
case 0x69ebd8:c.instructions+=6;goto B69ebd8;
case 0x69ebdb:c.instructions+=5;goto B69ebdb;
case 0x69ebdc:c.instructions+=4;goto B69ebdc;
case 0x69ebdf:c.instructions+=3;goto B69ebdf;
case 0x69ebe2:c.instructions+=2;goto B69ebe2;
case 0x69ebe3:c.instructions+=1;goto B69ebe3;
case 0x69ebe8:goto L69ebe8;
case 0x69ebea:c.instructions+=1;goto B69ebea;
case 0x69ebec:goto L69ebec;
case 0x69ebef:c.instructions+=1;goto B69ebef;
case 0x69ebf1:goto L69ebf1;
case 0x69ebf4:c.instructions+=1;goto B69ebf4;
case 0x69ebf6:goto L69ebf6;
case 0x69ebf8:c.instructions+=1;goto B69ebf8;
case 0x69ebfa:goto L69ebfa;
case 0x69ebfb:c.instructions+=2;goto B69ebfb;
case 0x69ebfc:c.instructions+=1;goto B69ebfc;
case 0x69ebff:goto L69ebff;
case 0x69ec01:c.instructions+=5;goto B69ec01;
case 0x69ec02:c.instructions+=4;goto B69ec02;
case 0x69ec04:c.instructions+=3;goto B69ec04;
case 0x69ec05:c.instructions+=2;goto B69ec05;
case 0x69ec07:c.instructions+=1;goto B69ec07;
case 0x69ec0c:goto L69ec0c;
case 0x69ec10:c.instructions+=1;goto B69ec10;
case 0x69ec12:goto L69ec12;
case 0x69ec13:c.instructions+=1;goto B69ec13;
case 0x69ec18:goto L69ec18;
case 0x69ec19:goto L69ec19;
case 0x69ec1b:c.instructions+=3;goto B69ec1b;
case 0x69ec1c:c.instructions+=2;goto B69ec1c;
case 0x69ec1d:c.instructions+=1;goto B69ec1d;
case 0x69ec20:goto L69ec20;
case 0x69ec22:c.instructions+=8;goto B69ec22;
case 0x69ec23:c.instructions+=7;goto B69ec23;
case 0x69ec25:c.instructions+=6;goto B69ec25;
case 0x69ec28:c.instructions+=5;goto B69ec28;
case 0x69ec29:c.instructions+=4;goto B69ec29;
case 0x69ec2b:c.instructions+=3;goto B69ec2b;
case 0x69ec2d:c.instructions+=2;goto B69ec2d;
case 0x69ec2f:c.instructions+=1;goto B69ec2f;
case 0x69ec31:goto L69ec31;
case 0x69ec36:c.instructions+=1;goto B69ec36;
case 0x69ec3b:goto L69ec3b;
case 0x69ec3e:c.instructions+=20;goto B69ec3e;
case 0x69ec3f:c.instructions+=19;goto B69ec3f;
case 0x69ec40:c.instructions+=18;goto B69ec40;
case 0x69ec42:c.instructions+=17;goto B69ec42;
case 0x69ec43:c.instructions+=16;goto B69ec43;
case 0x69ec44:c.instructions+=15;goto B69ec44;
case 0x69ec4a:c.instructions+=14;goto B69ec4a;
case 0x69ec4d:c.instructions+=13;goto B69ec4d;
case 0x69ec50:c.instructions+=12;goto B69ec50;
case 0x69ec51:c.instructions+=11;goto B69ec51;
case 0x69ec52:c.instructions+=10;goto B69ec52;
case 0x69ec58:c.instructions+=9;goto B69ec58;
case 0x69ec5b:c.instructions+=8;goto B69ec5b;
case 0x69ec61:c.instructions+=7;goto B69ec61;
case 0x69ec67:c.instructions+=6;goto B69ec67;
case 0x69ec6d:c.instructions+=5;goto B69ec6d;
case 0x69ec72:c.instructions+=4;goto B69ec72;
case 0x69ec74:c.instructions+=3;goto B69ec74;
case 0x69ec7a:c.instructions+=2;goto B69ec7a;
case 0x69ec80:c.instructions+=1;goto B69ec80;
case 0x69ec85:goto L69ec85;
case 0x69ec86:c.instructions+=6;goto B69ec86;
case 0x69ec87:c.instructions+=5;goto B69ec87;
case 0x69ec8c:c.instructions+=4;goto B69ec8c;
case 0x69ec91:c.instructions+=3;goto B69ec91;
case 0x69ec93:c.instructions+=2;goto B69ec93;
case 0x69ec96:c.instructions+=1;goto B69ec96;
case 0x69ec9b:goto L69ec9b;
case 0x69ec9c:c.instructions+=6;goto B69ec9c;
case 0x69ec9d:c.instructions+=5;goto B69ec9d;
case 0x69eca2:c.instructions+=4;goto B69eca2;
case 0x69eca7:c.instructions+=3;goto B69eca7;
case 0x69eca9:c.instructions+=2;goto B69eca9;
case 0x69ecac:c.instructions+=1;goto B69ecac;
case 0x69ecb1:goto L69ecb1;
case 0x69ecb2:c.instructions+=6;goto B69ecb2;
case 0x69ecb3:c.instructions+=5;goto B69ecb3;
case 0x69ecb5:c.instructions+=4;goto B69ecb5;
case 0x69ecba:c.instructions+=3;goto B69ecba;
case 0x69ecbc:c.instructions+=2;goto B69ecbc;
case 0x69ecbf:c.instructions+=1;goto B69ecbf;
case 0x69ecc4:goto L69ecc4;
case 0x69ecc5:c.instructions+=6;goto B69ecc5;
case 0x69ecc6:c.instructions+=5;goto B69ecc6;
case 0x69ecc8:c.instructions+=4;goto B69ecc8;
case 0x69eccd:c.instructions+=3;goto B69eccd;
case 0x69eccf:c.instructions+=2;goto B69eccf;
case 0x69ecd5:c.instructions+=1;goto B69ecd5;
case 0x69ecda:goto L69ecda;
case 0x69ecdb:c.instructions+=6;goto B69ecdb;
case 0x69ecdc:c.instructions+=5;goto B69ecdc;
case 0x69ecde:c.instructions+=4;goto B69ecde;
case 0x69ece3:c.instructions+=3;goto B69ece3;
case 0x69ece5:c.instructions+=2;goto B69ece5;
case 0x69eceb:c.instructions+=1;goto B69eceb;
case 0x69ecf0:goto L69ecf0;
case 0x69ecf1:c.instructions+=6;goto B69ecf1;
case 0x69ecf2:c.instructions+=5;goto B69ecf2;
case 0x69ecf4:c.instructions+=4;goto B69ecf4;
case 0x69ecf9:c.instructions+=3;goto B69ecf9;
case 0x69ecfb:c.instructions+=2;goto B69ecfb;
case 0x69ed01:c.instructions+=1;goto B69ed01;
case 0x69ed06:goto L69ed06;
case 0x69ed07:c.instructions+=6;goto B69ed07;
case 0x69ed08:c.instructions+=5;goto B69ed08;
case 0x69ed0a:c.instructions+=4;goto B69ed0a;
case 0x69ed0f:c.instructions+=3;goto B69ed0f;
case 0x69ed11:c.instructions+=2;goto B69ed11;
case 0x69ed17:c.instructions+=1;goto B69ed17;
case 0x69ed1c:goto L69ed1c;
case 0x69ed1d:c.instructions+=6;goto B69ed1d;
case 0x69ed1e:c.instructions+=5;goto B69ed1e;
case 0x69ed23:c.instructions+=4;goto B69ed23;
case 0x69ed28:c.instructions+=3;goto B69ed28;
case 0x69ed2a:c.instructions+=2;goto B69ed2a;
case 0x69ed30:c.instructions+=1;goto B69ed30;
case 0x69ed35:goto L69ed35;
case 0x69ed36:c.instructions+=6;goto B69ed36;
case 0x69ed37:c.instructions+=5;goto B69ed37;
case 0x69ed3d:c.instructions+=4;goto B69ed3d;
case 0x69ed42:c.instructions+=3;goto B69ed42;
case 0x69ed47:c.instructions+=2;goto B69ed47;
case 0x69ed49:c.instructions+=1;goto B69ed49;
case 0x69ed4e:goto L69ed4e;
case 0x69ed4f:c.instructions+=6;goto B69ed4f;
case 0x69ed50:c.instructions+=5;goto B69ed50;
case 0x69ed55:c.instructions+=4;goto B69ed55;
case 0x69ed5a:c.instructions+=3;goto B69ed5a;
case 0x69ed5c:c.instructions+=2;goto B69ed5c;
case 0x69ed62:c.instructions+=1;goto B69ed62;
case 0x69ed67:goto L69ed67;
case 0x69ed68:c.instructions+=6;goto B69ed68;
case 0x69ed69:c.instructions+=5;goto B69ed69;
case 0x69ed6e:c.instructions+=4;goto B69ed6e;
case 0x69ed73:c.instructions+=3;goto B69ed73;
case 0x69ed75:c.instructions+=2;goto B69ed75;
case 0x69ed7b:c.instructions+=1;goto B69ed7b;
case 0x69ed80:goto L69ed80;
case 0x69ed81:c.instructions+=6;goto B69ed81;
case 0x69ed82:c.instructions+=5;goto B69ed82;
case 0x69ed87:c.instructions+=4;goto B69ed87;
case 0x69ed8c:c.instructions+=3;goto B69ed8c;
case 0x69ed8e:c.instructions+=2;goto B69ed8e;
case 0x69ed94:c.instructions+=1;goto B69ed94;
case 0x69ed99:goto L69ed99;
case 0x69ed9a:c.instructions+=6;goto B69ed9a;
case 0x69ed9c:c.instructions+=5;goto B69ed9c;
case 0x69eda1:c.instructions+=4;goto B69eda1;
case 0x69eda6:c.instructions+=3;goto B69eda6;
case 0x69eda8:c.instructions+=2;goto B69eda8;
case 0x69edae:c.instructions+=1;goto B69edae;
case 0x69edb3:goto L69edb3;
case 0x69edb4:c.instructions+=6;goto B69edb4;
case 0x69edb5:c.instructions+=5;goto B69edb5;
case 0x69edba:c.instructions+=4;goto B69edba;
case 0x69edbf:c.instructions+=3;goto B69edbf;
case 0x69edc1:c.instructions+=2;goto B69edc1;
case 0x69edc7:c.instructions+=1;goto B69edc7;
case 0x69edcc:goto L69edcc;
case 0x69edcd:c.instructions+=6;goto B69edcd;
case 0x69edce:c.instructions+=5;goto B69edce;
case 0x69edd3:c.instructions+=4;goto B69edd3;
case 0x69edd8:c.instructions+=3;goto B69edd8;
case 0x69edda:c.instructions+=2;goto B69edda;
case 0x69ede0:c.instructions+=1;goto B69ede0;
case 0x69ede5:goto L69ede5;
case 0x69ede6:c.instructions+=6;goto B69ede6;
case 0x69ede7:c.instructions+=5;goto B69ede7;
case 0x69edec:c.instructions+=4;goto B69edec;
case 0x69edf1:c.instructions+=3;goto B69edf1;
case 0x69edf3:c.instructions+=2;goto B69edf3;
case 0x69edf9:c.instructions+=1;goto B69edf9;
case 0x69edfe:goto L69edfe;
case 0x69edff:c.instructions+=6;goto B69edff;
case 0x69ee00:c.instructions+=5;goto B69ee00;
case 0x69ee05:c.instructions+=4;goto B69ee05;
case 0x69ee0a:c.instructions+=3;goto B69ee0a;
case 0x69ee0c:c.instructions+=2;goto B69ee0c;
case 0x69ee12:c.instructions+=1;goto B69ee12;
case 0x69ee17:goto L69ee17;
case 0x69ee1b:c.instructions+=2;goto B69ee1b;
case 0x69ee21:c.instructions+=1;goto B69ee21;
case 0x69ee23:goto L69ee23;
case 0x69ee28:c.instructions+=1;goto B69ee28;
case 0x69ee2a:goto L69ee2a;
case 0x69ee2c:c.instructions+=3;goto B69ee2c;
case 0x69ee2e:c.instructions+=2;goto B69ee2e;
case 0x69ee2f:c.instructions+=1;goto B69ee2f;
case 0x69ee32:goto L69ee32;
case 0x69ee34:goto L69ee34;
case 0x69ee36:c.instructions+=2;goto B69ee36;
case 0x69ee38:c.instructions+=1;goto B69ee38;
case 0x69ee3b:goto L69ee3b;
case 0x69ee3d:c.instructions+=1;goto B69ee3d;
case 0x69ee3f:goto L69ee3f;
case 0x69ee41:c.instructions+=2;goto B69ee41;
case 0x69ee43:c.instructions+=1;goto B69ee43;
case 0x69ee48:goto L69ee48;
case 0x69ee4a:c.instructions+=1;goto B69ee4a;
case 0x69ee4c:goto L69ee4c;
case 0x69ee4e:goto L69ee4e;
case 0x69ee4f:c.instructions+=1;goto B69ee4f;
case 0x69ee50:goto L69ee50;
case 0x69ee51:c.instructions+=2;goto B69ee51;
case 0x69ee52:c.instructions+=1;goto B69ee52;
case 0x69ee55:goto L69ee55;
case 0x69ee57:c.instructions+=8;goto B69ee57;
case 0x69ee58:c.instructions+=7;goto B69ee58;
case 0x69ee5a:c.instructions+=6;goto B69ee5a;
case 0x69ee5b:c.instructions+=5;goto B69ee5b;
case 0x69ee5c:c.instructions+=4;goto B69ee5c;
case 0x69ee5f:c.instructions+=3;goto B69ee5f;
case 0x69ee60:c.instructions+=2;goto B69ee60;
case 0x69ee62:c.instructions+=1;goto B69ee62;
case 0x69ee67:goto L69ee67;
case 0x69ee69:c.instructions+=1;goto B69ee69;
case 0x69ee6f:goto L69ee6f;
case 0x69ee75:c.instructions+=50;goto B69ee75;
case 0x69ee7b:c.instructions+=49;goto B69ee7b;
case 0x69ee81:c.instructions+=48;goto B69ee81;
case 0x69ee88:c.instructions+=47;goto B69ee88;
case 0x69ee8f:c.instructions+=46;goto B69ee8f;
case 0x69ee96:c.instructions+=45;goto B69ee96;
case 0x69ee9c:c.instructions+=44;goto B69ee9c;
case 0x69ee9f:c.instructions+=43;goto B69ee9f;
case 0x69eea5:c.instructions+=42;goto B69eea5;
case 0x69eea8:c.instructions+=41;goto B69eea8;
case 0x69eeae:c.instructions+=40;goto B69eeae;
case 0x69eeb1:c.instructions+=39;goto B69eeb1;
case 0x69eeb4:c.instructions+=38;goto B69eeb4;
case 0x69eeb7:c.instructions+=37;goto B69eeb7;
case 0x69eeba:c.instructions+=36;goto B69eeba;
case 0x69eebd:c.instructions+=35;goto B69eebd;
case 0x69eec0:c.instructions+=34;goto B69eec0;
case 0x69eec6:c.instructions+=33;goto B69eec6;
case 0x69eecc:c.instructions+=32;goto B69eecc;
case 0x69eed2:c.instructions+=31;goto B69eed2;
case 0x69eed8:c.instructions+=30;goto B69eed8;
case 0x69eede:c.instructions+=29;goto B69eede;
case 0x69eee4:c.instructions+=28;goto B69eee4;
case 0x69eeea:c.instructions+=27;goto B69eeea;
case 0x69eef0:c.instructions+=26;goto B69eef0;
case 0x69eef6:c.instructions+=25;goto B69eef6;
case 0x69eefc:c.instructions+=24;goto B69eefc;
case 0x69ef02:c.instructions+=23;goto B69ef02;
case 0x69ef08:c.instructions+=22;goto B69ef08;
case 0x69ef0e:c.instructions+=21;goto B69ef0e;
case 0x69ef14:c.instructions+=20;goto B69ef14;
case 0x69ef1a:c.instructions+=19;goto B69ef1a;
case 0x69ef20:c.instructions+=18;goto B69ef20;
case 0x69ef26:c.instructions+=17;goto B69ef26;
case 0x69ef2c:c.instructions+=16;goto B69ef2c;
case 0x69ef32:c.instructions+=15;goto B69ef32;
case 0x69ef38:c.instructions+=14;goto B69ef38;
case 0x69ef3e:c.instructions+=13;goto B69ef3e;
case 0x69ef44:c.instructions+=12;goto B69ef44;
case 0x69ef4a:c.instructions+=11;goto B69ef4a;
case 0x69ef50:c.instructions+=10;goto B69ef50;
case 0x69ef56:c.instructions+=9;goto B69ef56;
case 0x69ef5c:c.instructions+=8;goto B69ef5c;
case 0x69ef62:c.instructions+=7;goto B69ef62;
case 0x69ef68:c.instructions+=6;goto B69ef68;
case 0x69ef6e:c.instructions+=5;goto B69ef6e;
case 0x69ef74:c.instructions+=4;goto B69ef74;
case 0x69ef76:c.instructions+=3;goto B69ef76;
case 0x69ef78:c.instructions+=2;goto B69ef78;
case 0x69ef79:c.instructions+=1;goto B69ef79;
case 0x69ef7c:goto L69ef7c;
case 0x69ef7e:goto L69ef7e;
case 0x69ef80:c.instructions+=2;goto B69ef80;
case 0x69ef82:c.instructions+=1;goto B69ef82;
case 0x69ef85:goto L69ef85;
case 0x69ef87:c.instructions+=1;goto B69ef87;
case 0x69ef89:goto L69ef89;
case 0x69ef8b:c.instructions+=2;goto B69ef8b;
case 0x69ef8d:c.instructions+=1;goto B69ef8d;
case 0x69ef92:goto L69ef92;
case 0x69ef94:c.instructions+=1;goto B69ef94;
case 0x69ef96:goto L69ef96;
case 0x69ef98:goto L69ef98;
case 0x69ef99:c.instructions+=3;goto B69ef99;
case 0x69ef9a:c.instructions+=2;goto B69ef9a;
case 0x69ef9b:c.instructions+=1;goto B69ef9b;
case 0x69ef9e:goto L69ef9e;
case 0x69efa0:c.instructions+=13;goto B69efa0;
case 0x69efa1:c.instructions+=12;goto B69efa1;
case 0x69efa3:c.instructions+=11;goto B69efa3;
case 0x69efa6:c.instructions+=10;goto B69efa6;
case 0x69efa7:c.instructions+=9;goto B69efa7;
case 0x69efa8:c.instructions+=8;goto B69efa8;
case 0x69efa9:c.instructions+=7;goto B69efa9;
case 0x69efab:c.instructions+=6;goto B69efab;
case 0x69efad:c.instructions+=5;goto B69efad;
case 0x69efaf:c.instructions+=4;goto B69efaf;
case 0x69efb2:c.instructions+=3;goto B69efb2;
case 0x69efb5:c.instructions+=2;goto B69efb5;
case 0x69efb8:c.instructions+=1;goto B69efb8;
case 0x69efba:goto L69efba;
case 0x69efbd:c.instructions+=6;goto B69efbd;
case 0x69efc0:c.instructions+=5;goto B69efc0;
case 0x69efc1:c.instructions+=4;goto B69efc1;
case 0x69efc4:c.instructions+=3;goto B69efc4;
case 0x69efc7:c.instructions+=2;goto B69efc7;
case 0x69efca:c.instructions+=1;goto B69efca;
case 0x69efcc:goto L69efcc;
case 0x69efce:c.instructions+=2;goto B69efce;
case 0x69efd1:c.instructions+=1;goto B69efd1;
case 0x69efd3:goto L69efd3;
case 0x69efd6:c.instructions+=6;goto B69efd6;
case 0x69efd9:c.instructions+=5;goto B69efd9;
case 0x69efda:c.instructions+=4;goto B69efda;
case 0x69efdd:c.instructions+=3;goto B69efdd;
case 0x69efe0:c.instructions+=2;goto B69efe0;
case 0x69efe3:c.instructions+=1;goto B69efe3;
case 0x69efe5:goto L69efe5;
case 0x69efe7:c.instructions+=2;goto B69efe7;
case 0x69efea:c.instructions+=1;goto B69efea;
case 0x69eff0:goto L69eff0;
case 0x69eff3:c.instructions+=4;goto B69eff3;
case 0x69eff6:c.instructions+=3;goto B69eff6;
case 0x69effc:c.instructions+=2;goto B69effc;
case 0x69efff:c.instructions+=1;goto B69efff;
default:missing_instruction(c.pc);}
B69e000:L69e000:{c.instructions+=3;NFSU2_TR(0x69e000);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e003:{NFSU2_TR(0x69e003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e006:{NFSU2_TR(0x69e006);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69e046;}}
}
B69e008:L69e008:{c.instructions+=9;NFSU2_TR(0x69e008);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e00b:{NFSU2_TR(0x69e00b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e00e:{NFSU2_TR(0x69e00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e011:{NFSU2_TR(0x69e011);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e014:{NFSU2_TR(0x69e014);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e017:{NFSU2_TR(0x69e017);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e01a:{NFSU2_TR(0x69e01a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e01d:{NFSU2_TR(0x69e01d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e020:{NFSU2_TR(0x69e020);
if(r1(R+512)){{goto L69e02f;}}
}
B69e022:L69e022:{c.instructions+=1;NFSU2_TR(0x69e022);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69e038;}}
}
B69e024:L69e024:{c.instructions+=3;NFSU2_TR(0x69e024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e027:{NFSU2_TR(0x69e027);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69e02a:{NFSU2_TR(0x69e02a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69e038;}}
}
B69e02c:L69e02c:{c.instructions+=1;NFSU2_TR(0x69e02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e02f:L69e02f:{c.instructions+=3;NFSU2_TR(0x69e02f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e032:{NFSU2_TR(0x69e032);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e035:{NFSU2_TR(0x69e035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e038:L69e038:{c.instructions+=4;NFSU2_TR(0x69e038);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e03b:{NFSU2_TR(0x69e03b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e03e:{NFSU2_TR(0x69e03e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69e041:{NFSU2_TR(0x69e041);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e008u);}goto L69e008;}}
}
B69e043:L69e043:{c.instructions+=1;NFSU2_TR(0x69e043);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e046:L69e046:{c.instructions+=8;NFSU2_TR(0x69e046);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e049:{NFSU2_TR(0x69e049);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B69e04c:{NFSU2_TR(0x69e04c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69e04e:{NFSU2_TR(0x69e04e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B69e050:{NFSU2_TR(0x69e050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e053:{NFSU2_TR(0x69e053);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B69e055:{NFSU2_TR(0x69e055);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B69e057:{NFSU2_TR(0x69e057);
if(r1(R+512)){TAIL_STATIC(0x69dfdfu,69d);}
}
B69e059:L69e059:{c.instructions+=4;NFSU2_TR(0x69e059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69e05a:{NFSU2_TR(0x69e05a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69e05c:{NFSU2_TR(0x69e05c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69e05e:{NFSU2_TR(0x69e05e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e086;}}
}
B69e060:L69e060:{c.instructions+=2;NFSU2_TR(0x69e060);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69e063:{NFSU2_TR(0x69e063);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B69e065:L69e065:{c.instructions+=8;NFSU2_TR(0x69e065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e068:{NFSU2_TR(0x69e068);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B69e06b:{NFSU2_TR(0x69e06b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B69e06f:{NFSU2_TR(0x69e06f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69e072:{NFSU2_TR(0x69e072);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69e076:{NFSU2_TR(0x69e076);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69e077:{NFSU2_TR(0x69e077);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B69e079:{NFSU2_TR(0x69e079);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e065u);}goto L69e065;}}
}
B69e07b:L69e07b:{c.instructions+=2;NFSU2_TR(0x69e07b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69e07d:{NFSU2_TR(0x69e07d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e086;}}
}
B69e07f:L69e07f:{c.instructions+=2;NFSU2_TR(0x69e07f);
__builtin_memmove((R+4),(R+8),4);
}
B69e081:{NFSU2_TR(0x69e081);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69e084:L69e084:{c.instructions+=1;NFSU2_TR(0x69e084);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L69e086;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e084u);}goto L69e084;}
}
B69e086:L69e086:{c.instructions+=5;NFSU2_TR(0x69e086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69e087:{NFSU2_TR(0x69e087);
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
B69e089:{NFSU2_TR(0x69e089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69e08a:{NFSU2_TR(0x69e08a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69e08b:{NFSU2_TR(0x69e08b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69e08e:L69e08e:{c.instructions+=7;NFSU2_TR(0x69e08e);
__builtin_memmove((R+28),(R+28),4);
}
B69e090:{NFSU2_TR(0x69e090);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e091:{NFSU2_TR(0x69e091);
__builtin_memmove((R+20),(R+16),4);
}
B69e093:{NFSU2_TR(0x69e093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e096:{NFSU2_TR(0x69e096);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e097:{NFSU2_TR(0x69e097);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e09a:{NFSU2_TR(0x69e09a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e09b:L69e09b:{c.instructions+=5;NFSU2_TR(0x69e09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e09e:{NFSU2_TR(0x69e09e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e0a1:{NFSU2_TR(0x69e0a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e0a4:{NFSU2_TR(0x69e0a4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e0a7:{NFSU2_TR(0x69e0a7);
if(r1(R+518)){{goto L69e0ac;}}
}
B69e0a9:L69e0a9:{c.instructions+=1;NFSU2_TR(0x69e0a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e0ac:L69e0ac:{c.instructions+=5;NFSU2_TR(0x69e0ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e0af:{NFSU2_TR(0x69e0af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e0b2:{NFSU2_TR(0x69e0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e0b5:{NFSU2_TR(0x69e0b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69e0b8:{NFSU2_TR(0x69e0b8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e0bd;}}
}
B69e0ba:L69e0ba:{c.instructions+=1;NFSU2_TR(0x69e0ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e0bd:L69e0bd:{c.instructions+=2;NFSU2_TR(0x69e0bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B69e0c0:{NFSU2_TR(0x69e0c0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69e0c5;}}
}
B69e0c2:L69e0c2:{c.instructions+=1;NFSU2_TR(0x69e0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e0c5:L69e0c5:{c.instructions+=3;NFSU2_TR(0x69e0c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e0c8:{NFSU2_TR(0x69e0c8);
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
B69e0cc:{NFSU2_TR(0x69e0cc);
if(r1(R+518)){{goto L69e0e6;}}
}
B69e0ce:L69e0ce:{c.instructions+=2;NFSU2_TR(0x69e0ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e0d1:{NFSU2_TR(0x69e0d1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e0d6;}}
}
B69e0d3:L69e0d3:{c.instructions+=1;NFSU2_TR(0x69e0d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e0d6:L69e0d6:{c.instructions+=2;NFSU2_TR(0x69e0d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B69e0d9:{NFSU2_TR(0x69e0d9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69e0de;}}
}
B69e0db:L69e0db:{c.instructions+=1;NFSU2_TR(0x69e0db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e0de:L69e0de:{c.instructions+=3;NFSU2_TR(0x69e0de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e0e1:{NFSU2_TR(0x69e0e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e0e4:{NFSU2_TR(0x69e0e4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e09bu);}goto L69e09b;}
}
B69e0e6:L69e0e6:{c.instructions+=4;NFSU2_TR(0x69e0e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69e0e7:{NFSU2_TR(0x69e0e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69e0e8:{NFSU2_TR(0x69e0e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69e0e9:{NFSU2_TR(0x69e0e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69e0ec:L69e0ec:{c.instructions+=16;NFSU2_TR(0x69e0ec);
__builtin_memmove((R+28),(R+28),4);
}
B69e0ee:{NFSU2_TR(0x69e0ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e0ef:{NFSU2_TR(0x69e0ef);
__builtin_memmove((R+20),(R+16),4);
}
B69e0f1:{NFSU2_TR(0x69e0f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e0f4:{NFSU2_TR(0x69e0f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e0f5:{NFSU2_TR(0x69e0f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e0f8:{NFSU2_TR(0x69e0f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e0fb:{NFSU2_TR(0x69e0fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e0fe:{NFSU2_TR(0x69e0fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e0ff:{NFSU2_TR(0x69e0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e102:{NFSU2_TR(0x69e102);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69e105:{NFSU2_TR(0x69e105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e108:{NFSU2_TR(0x69e108);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e10b:{NFSU2_TR(0x69e10b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e10e:{NFSU2_TR(0x69e10e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69e110:{NFSU2_TR(0x69e110);
if(r1(R+518)){{goto L69e137;}}
}
B69e112:L69e112:{c.instructions+=8;NFSU2_TR(0x69e112);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e115:{NFSU2_TR(0x69e115);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e116:{NFSU2_TR(0x69e116);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69e119:{NFSU2_TR(0x69e119);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B69e11c:{NFSU2_TR(0x69e11c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69e11f:{NFSU2_TR(0x69e11f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69e121:{NFSU2_TR(0x69e121);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e124:{NFSU2_TR(0x69e124);
if(r1(R+518)){{goto L69e134;}}
}
B69e126:L69e126:{c.instructions+=5;NFSU2_TR(0x69e126);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e129:{NFSU2_TR(0x69e129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69e12b:{NFSU2_TR(0x69e12b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69e12e:{NFSU2_TR(0x69e12e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69e131:{NFSU2_TR(0x69e131);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e134:L69e134:{c.instructions+=2;NFSU2_TR(0x69e134);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B69e136:{NFSU2_TR(0x69e136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69e137:L69e137:{c.instructions+=5;NFSU2_TR(0x69e137);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e13a:{NFSU2_TR(0x69e13a);
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
B69e13d:{NFSU2_TR(0x69e13d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69e13e:{NFSU2_TR(0x69e13e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69e13f:{NFSU2_TR(0x69e13f);
if(r1(R+518)){{goto L69e14a;}}
}
B69e141:L69e141:{c.instructions+=3;NFSU2_TR(0x69e141);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e144:{NFSU2_TR(0x69e144);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e145:{NFSU2_TR(0x69e145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e14aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e08eu);}goto L69e08e;}
}
B69e14a:L69e14a:{c.instructions+=2;NFSU2_TR(0x69e14a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69e14b:{NFSU2_TR(0x69e14b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69e14e:L69e14e:{c.instructions+=7;NFSU2_TR(0x69e14e);
__builtin_memmove((R+28),(R+28),4);
}
B69e150:{NFSU2_TR(0x69e150);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e151:{NFSU2_TR(0x69e151);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e152:{NFSU2_TR(0x69e152);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e154:{NFSU2_TR(0x69e154);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69e156:{NFSU2_TR(0x69e156);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e159:{NFSU2_TR(0x69e159);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e214;}}
}
B69e15f:L69e15f:{c.instructions+=1;NFSU2_TR(0x69e15f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e160:L69e160:{c.instructions+=5;NFSU2_TR(0x69e160);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e163:{NFSU2_TR(0x69e163);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e166:{NFSU2_TR(0x69e166);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e169:{NFSU2_TR(0x69e169);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e16c:{NFSU2_TR(0x69e16c);
if(r1(R+518)){{goto L69e1e1;}}
}
B69e16e:L69e16e:{c.instructions+=18;NFSU2_TR(0x69e16e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69e171:{NFSU2_TR(0x69e171);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e174:{NFSU2_TR(0x69e174);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e177:{NFSU2_TR(0x69e177);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e17a:{NFSU2_TR(0x69e17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e17d:{NFSU2_TR(0x69e17d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e180:{NFSU2_TR(0x69e180);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e183:{NFSU2_TR(0x69e183);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e186:{NFSU2_TR(0x69e186);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e189:{NFSU2_TR(0x69e189);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e18c:{NFSU2_TR(0x69e18c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e18f:{NFSU2_TR(0x69e18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e192:{NFSU2_TR(0x69e192);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e195:{NFSU2_TR(0x69e195);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e198:{NFSU2_TR(0x69e198);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e19b:{NFSU2_TR(0x69e19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e19e:{NFSU2_TR(0x69e19e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e1a1:{NFSU2_TR(0x69e1a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69e1b7;}}
}
B69e1a3:L69e1a3:{c.instructions+=7;NFSU2_TR(0x69e1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e1a6:{NFSU2_TR(0x69e1a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e1a9:{NFSU2_TR(0x69e1a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e1ac:{NFSU2_TR(0x69e1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e1af:{NFSU2_TR(0x69e1af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e1b2:{NFSU2_TR(0x69e1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e1b5:{NFSU2_TR(0x69e1b5);
{goto L69e1de;}
}
B69e1b7:L69e1b7:{c.instructions+=3;NFSU2_TR(0x69e1b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e1ba:{NFSU2_TR(0x69e1ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B69e1bc:{NFSU2_TR(0x69e1bc);
if(r1(R+512)){{goto L69e1c0;}}
}
B69e1be:L69e1be:{c.instructions+=1;NFSU2_TR(0x69e1be);
__builtin_memmove((R+24),(R+28),4);
}
B69e1c0:L69e1c0:{c.instructions+=6;NFSU2_TR(0x69e1c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e1c3:{NFSU2_TR(0x69e1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e1c6:{NFSU2_TR(0x69e1c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e1c9:{NFSU2_TR(0x69e1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e1cc:{NFSU2_TR(0x69e1cc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e1ce:{NFSU2_TR(0x69e1ce);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69e1d2;}}
}
B69e1d0:L69e1d0:{c.instructions+=1;NFSU2_TR(0x69e1d0);
__builtin_memmove((R+24),(R+28),4);
}
B69e1d2:L69e1d2:{c.instructions+=4;NFSU2_TR(0x69e1d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e1d5:{NFSU2_TR(0x69e1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e1d8:{NFSU2_TR(0x69e1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e1db:{NFSU2_TR(0x69e1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e1de:L69e1de:{c.instructions+=2;NFSU2_TR(0x69e1de);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69e1e0:{NFSU2_TR(0x69e1e0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69e1e1:L69e1e1:{c.instructions+=3;NFSU2_TR(0x69e1e1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69e1e2:{NFSU2_TR(0x69e1e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69e1e5:{NFSU2_TR(0x69e1e5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e160u);}goto L69e160;}}
}
B69e1eb:L69e1eb:{c.instructions+=2;NFSU2_TR(0x69e1eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69e1ed:{NFSU2_TR(0x69e1ed);
if(r1(R+518)){{goto L69e213;}}
}
B69e1ef:L69e1ef:{c.instructions+=3;NFSU2_TR(0x69e1ef);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69e1f1:{NFSU2_TR(0x69e1f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e1f4:{NFSU2_TR(0x69e1f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e213;}}
}
B69e1f6:L69e1f6:{c.instructions+=5;NFSU2_TR(0x69e1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e1f9:{NFSU2_TR(0x69e1f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69e1fc:{NFSU2_TR(0x69e1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e1ff:{NFSU2_TR(0x69e1ff);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e202:{NFSU2_TR(0x69e202);
if(r1(R+518)){{goto L69e20d;}}
}
B69e204:L69e204:{c.instructions+=3;NFSU2_TR(0x69e204);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e207:{NFSU2_TR(0x69e207);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e20a:{NFSU2_TR(0x69e20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e20d:L69e20d:{c.instructions+=3;NFSU2_TR(0x69e20d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69e20e:{NFSU2_TR(0x69e20e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69e211:{NFSU2_TR(0x69e211);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e1f6u);}goto L69e1f6;}}
}
B69e213:L69e213:{c.instructions+=1;NFSU2_TR(0x69e213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69e214:L69e214:{c.instructions+=4;NFSU2_TR(0x69e214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69e215:{NFSU2_TR(0x69e215);
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
B69e217:{NFSU2_TR(0x69e217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69e218:{NFSU2_TR(0x69e218);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69e219:L69e219:{c.instructions+=12;NFSU2_TR(0x69e219);
__builtin_memmove((R+28),(R+28),4);
}
B69e21b:{NFSU2_TR(0x69e21b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e21c:{NFSU2_TR(0x69e21c);
__builtin_memmove((R+20),(R+16),4);
}
B69e21e:{NFSU2_TR(0x69e21e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B69e221:{NFSU2_TR(0x69e221);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e222:{NFSU2_TR(0x69e222);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e223:{NFSU2_TR(0x69e223);
__builtin_memmove((R+24),(R+4),4);
}
B69e225:{NFSU2_TR(0x69e225);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e227:{NFSU2_TR(0x69e227);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69e229:{NFSU2_TR(0x69e229);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e22c:{NFSU2_TR(0x69e22c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e22d:{NFSU2_TR(0x69e22d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e248;}}
}
B69e22f:L69e22f:{c.instructions+=9;NFSU2_TR(0x69e22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e232:{NFSU2_TR(0x69e232);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e235:{NFSU2_TR(0x69e235);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e239:{NFSU2_TR(0x69e239);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69e23a:{NFSU2_TR(0x69e23a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e23d:{NFSU2_TR(0x69e23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e240:{NFSU2_TR(0x69e240);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e243:{NFSU2_TR(0x69e243);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69e246:{NFSU2_TR(0x69e246);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e22fu);}goto L69e22f;}}
}
B69e248:L69e248:{c.instructions+=3;NFSU2_TR(0x69e248);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69e24a:{NFSU2_TR(0x69e24a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e24d:{NFSU2_TR(0x69e24d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e273;}}
}
B69e24f:L69e24f:{c.instructions+=13;NFSU2_TR(0x69e24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e252:{NFSU2_TR(0x69e252);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e255:{NFSU2_TR(0x69e255);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B69e258:{NFSU2_TR(0x69e258);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e25b:{NFSU2_TR(0x69e25b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69e25c:{NFSU2_TR(0x69e25c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e25f:{NFSU2_TR(0x69e25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e262:{NFSU2_TR(0x69e262);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e265:{NFSU2_TR(0x69e265);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e268:{NFSU2_TR(0x69e268);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e26b:{NFSU2_TR(0x69e26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e26e:{NFSU2_TR(0x69e26e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69e271:{NFSU2_TR(0x69e271);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e24fu);}goto L69e24f;}}
}
B69e273:L69e273:{c.instructions+=3;NFSU2_TR(0x69e273);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e279:{NFSU2_TR(0x69e279);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e27c:{NFSU2_TR(0x69e27c);
if(r1(R+518)){{goto L69e351;}}
}
B69e282:L69e282:{c.instructions+=3;NFSU2_TR(0x69e282);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69e284:{NFSU2_TR(0x69e284);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e287:{NFSU2_TR(0x69e287);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e298;}}
}
B69e289:L69e289:{c.instructions+=6;NFSU2_TR(0x69e289);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e28c:{NFSU2_TR(0x69e28c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69e28f:{NFSU2_TR(0x69e28f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69e290:{NFSU2_TR(0x69e290);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e293:{NFSU2_TR(0x69e293);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69e296:{NFSU2_TR(0x69e296);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e289u);}goto L69e289;}}
}
B69e298:L69e298:{c.instructions+=3;NFSU2_TR(0x69e298);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69e29a:{NFSU2_TR(0x69e29a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e29d:{NFSU2_TR(0x69e29d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e2cd;}}
}
B69e29f:L69e29f:{c.instructions+=8;NFSU2_TR(0x69e29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e2a2:{NFSU2_TR(0x69e2a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69e2a5:{NFSU2_TR(0x69e2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e2a8:{NFSU2_TR(0x69e2a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e2ab:{NFSU2_TR(0x69e2ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e2ae:{NFSU2_TR(0x69e2ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e2b1:{NFSU2_TR(0x69e2b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69e2b4:{NFSU2_TR(0x69e2b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69e2c7;}}
}
B69e2b6:L69e2b6:{c.instructions+=2;NFSU2_TR(0x69e2b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69e2b9:{NFSU2_TR(0x69e2b9);
if(r1(R+518)){{goto L69e2c7;}}
}
B69e2bb:L69e2bb:{c.instructions+=4;NFSU2_TR(0x69e2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e2be:{NFSU2_TR(0x69e2be);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69e2bf:{NFSU2_TR(0x69e2bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B69e2c2:{NFSU2_TR(0x69e2c2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69e2c7;}}
}
B69e2c4:L69e2c4:{c.instructions+=1;NFSU2_TR(0x69e2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e2c7:L69e2c7:{c.instructions+=3;NFSU2_TR(0x69e2c7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69e2c8:{NFSU2_TR(0x69e2c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69e2cb:{NFSU2_TR(0x69e2cb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e29fu);}goto L69e29f;}}
}
B69e2cd:L69e2cd:{c.instructions+=4;NFSU2_TR(0x69e2cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e2d0:{NFSU2_TR(0x69e2d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69e2d2:{NFSU2_TR(0x69e2d2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e2d4:{NFSU2_TR(0x69e2d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e2e4;}}
}
B69e2d6:L69e2d6:{c.instructions+=1;NFSU2_TR(0x69e2d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e2d9:L69e2d9:{c.instructions+=5;NFSU2_TR(0x69e2d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69e2db:{NFSU2_TR(0x69e2db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B69e2de:{NFSU2_TR(0x69e2de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B69e2e1:{NFSU2_TR(0x69e2e1);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B69e2e2:{NFSU2_TR(0x69e2e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e2d9u);}goto L69e2d9;}}
}
B69e2e4:L69e2e4:{c.instructions+=4;NFSU2_TR(0x69e2e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69e2e7:{NFSU2_TR(0x69e2e7);
__builtin_memmove((R+28),(R+0),4);
}
B69e2e9:{NFSU2_TR(0x69e2e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e2ea:{NFSU2_TR(0x69e2ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e2efull));
TAIL_STATIC(0x575620u,575);
}
B69e2ef:L69e2ef:{c.instructions+=4;NFSU2_TR(0x69e2ef);
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
B69e2f1:{NFSU2_TR(0x69e2f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69e2f2:{NFSU2_TR(0x69e2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e2f5:{NFSU2_TR(0x69e2f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69e301;}}
}
B69e2f7:L69e2f7:{c.instructions+=2;NFSU2_TR(0x69e2f7);
w4(R+0,u32(0x8007000eull));
}
B69e2fc:{NFSU2_TR(0x69e2fc);
{goto L69e4e1;}
}
B69e301:L69e301:{c.instructions+=5;NFSU2_TR(0x69e301);
__builtin_memmove((R+4),(R+28),4);
}
B69e303:{NFSU2_TR(0x69e303);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e306:{NFSU2_TR(0x69e306);
__builtin_memmove((R+8),(R+4),4);
}
B69e308:{NFSU2_TR(0x69e308);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B69e30b:{NFSU2_TR(0x69e30b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B69e30e:L69e30e:{c.instructions+=1;NFSU2_TR(0x69e30e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L69e310;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e30eu);}goto L69e30e;}
}
B69e310:L69e310:{c.instructions+=2;NFSU2_TR(0x69e310);
__builtin_memmove((R+4),(R+8),4);
}
B69e312:{NFSU2_TR(0x69e312);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B69e315:L69e315:{c.instructions+=1;NFSU2_TR(0x69e315);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L69e317;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e315u);}goto L69e315;}
}
B69e317:L69e317:{c.instructions+=4;NFSU2_TR(0x69e317);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69e319:{NFSU2_TR(0x69e319);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69e31b:{NFSU2_TR(0x69e31b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e31e:{NFSU2_TR(0x69e31e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e351;}}
}
B69e320:L69e320:{c.instructions+=1;NFSU2_TR(0x69e320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e323:L69e323:{c.instructions+=17;NFSU2_TR(0x69e323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e326:{NFSU2_TR(0x69e326);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69e329:{NFSU2_TR(0x69e329);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e32c:{NFSU2_TR(0x69e32c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e32f:{NFSU2_TR(0x69e32f);
__builtin_memmove((R+12),(R+4),4);
}
B69e331:{NFSU2_TR(0x69e331);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B69e334:{NFSU2_TR(0x69e334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B69e337:{NFSU2_TR(0x69e337);
w1(R+512,u8((r4(R+28))!=(u32(0x0ull))));
w4(R+28,u32(0-u32(r4(R+28))));
}
B69e339:{NFSU2_TR(0x69e339);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(R+28))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B69e33b:{NFSU2_TR(0x69e33b);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+12))));
}
B69e33d:{NFSU2_TR(0x69e33d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e340:{NFSU2_TR(0x69e340);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e343:{NFSU2_TR(0x69e343);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69e346:{NFSU2_TR(0x69e346);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B69e349:{NFSU2_TR(0x69e349);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69e34a:{NFSU2_TR(0x69e34a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69e34d:{NFSU2_TR(0x69e34d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e323u);}goto L69e323;}}
}
B69e34f:L69e34f:{c.instructions+=1;NFSU2_TR(0x69e34f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e351:L69e351:{c.instructions+=3;NFSU2_TR(0x69e351);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e354:{NFSU2_TR(0x69e354);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e357:{NFSU2_TR(0x69e357);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e435;}}
}
B69e35d:L69e35d:{c.instructions+=5;NFSU2_TR(0x69e35d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e360:{NFSU2_TR(0x69e360);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e363:{NFSU2_TR(0x69e363);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69e366:{NFSU2_TR(0x69e366);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e368:{NFSU2_TR(0x69e368);
if(r1(R+518)){{goto L69e426;}}
}
B69e36e:L69e36e:{c.instructions+=2;NFSU2_TR(0x69e36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B69e374:{NFSU2_TR(0x69e374);
if(r1(R+518)){{goto L69e426;}}
}
B69e37a:L69e37a:{c.instructions+=2;NFSU2_TR(0x69e37a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e37e:{NFSU2_TR(0x69e37e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e396;}}
}
B69e380:L69e380:{c.instructions+=5;NFSU2_TR(0x69e380);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e383:{NFSU2_TR(0x69e383);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e386:{NFSU2_TR(0x69e386);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69e389:{NFSU2_TR(0x69e389);
__builtin_memmove((R+4),(R+24),4);
}
B69e38b:{NFSU2_TR(0x69e38b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e390ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e08eu);}goto L69e08e;}
}
B69e390:L69e390:{c.instructions+=3;NFSU2_TR(0x69e390);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69e391:{NFSU2_TR(0x69e391);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69e394:{NFSU2_TR(0x69e394);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e380u);}goto L69e380;}}
}
B69e396:L69e396:{c.instructions+=3;NFSU2_TR(0x69e396);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e398:{NFSU2_TR(0x69e398);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e39b:{NFSU2_TR(0x69e39b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e3b3;}}
}
B69e39d:L69e39d:{c.instructions+=5;NFSU2_TR(0x69e39d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e3a0:{NFSU2_TR(0x69e3a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e3a3:{NFSU2_TR(0x69e3a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69e3a6:{NFSU2_TR(0x69e3a6);
__builtin_memmove((R+4),(R+24),4);
}
B69e3a8:{NFSU2_TR(0x69e3a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e3adull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e0ecu);}goto L69e0ec;}
}
B69e3ad:L69e3ad:{c.instructions+=3;NFSU2_TR(0x69e3ad);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69e3ae:{NFSU2_TR(0x69e3ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69e3b1:{NFSU2_TR(0x69e3b1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e39du);}goto L69e39d;}}
}
B69e3b3:L69e3b3:{c.instructions+=4;NFSU2_TR(0x69e3b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69e3b5:{NFSU2_TR(0x69e3b5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B69e3ba:{NFSU2_TR(0x69e3ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69e3bf:{NFSU2_TR(0x69e3bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69e424;}}
}
B69e3c1:L69e3c1:{c.instructions+=2;NFSU2_TR(0x69e3c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69e3c8:{NFSU2_TR(0x69e3c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69e424;}}
}
B69e3ca:L69e3ca:{c.instructions+=3;NFSU2_TR(0x69e3ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e3ce:{NFSU2_TR(0x69e3ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e3d2:{NFSU2_TR(0x69e3d2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e424;}}
}
B69e3d4:L69e3d4:{c.instructions+=15;NFSU2_TR(0x69e3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e3d7:{NFSU2_TR(0x69e3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e3da:{NFSU2_TR(0x69e3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69e3dd:{NFSU2_TR(0x69e3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e3e0:{NFSU2_TR(0x69e3e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B69e3e3:{NFSU2_TR(0x69e3e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69e3e6:{NFSU2_TR(0x69e3e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69e3e9:{NFSU2_TR(0x69e3e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69e3ec:{NFSU2_TR(0x69e3ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e3ef:{NFSU2_TR(0x69e3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e3f2:{NFSU2_TR(0x69e3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69e3f5:{NFSU2_TR(0x69e3f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69e3f8:{NFSU2_TR(0x69e3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e3fb:{NFSU2_TR(0x69e3fb);
u8 U[2];
w2(U+0,u16(u32(r2(R+8))&u32(u16(0x1020ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B69e400:{NFSU2_TR(0x69e400);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69e419;}}
}
B69e402:L69e402:{c.instructions+=2;NFSU2_TR(0x69e402);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69e405:{NFSU2_TR(0x69e405);
if(r1(R+518)){{goto L69e419;}}
}
B69e407:L69e407:{c.instructions+=2;NFSU2_TR(0x69e407);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e40b:{NFSU2_TR(0x69e40b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69e419;}}
}
B69e40d:L69e40d:{c.instructions+=4;NFSU2_TR(0x69e40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69e410:{NFSU2_TR(0x69e410);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e413:{NFSU2_TR(0x69e413);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e416:{NFSU2_TR(0x69e416);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e419:L69e419:{c.instructions+=4;NFSU2_TR(0x69e419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e41c:{NFSU2_TR(0x69e41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e41f:{NFSU2_TR(0x69e41f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69e422:{NFSU2_TR(0x69e422);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e3d4u);}goto L69e3d4;}}
}
B69e424:L69e424:{c.instructions+=1;NFSU2_TR(0x69e424);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e426:L69e426:{c.instructions+=4;NFSU2_TR(0x69e426);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e429:{NFSU2_TR(0x69e429);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e42c:{NFSU2_TR(0x69e42c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69e42f:{NFSU2_TR(0x69e42f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e35du);}goto L69e35d;}}
}
B69e435:L69e435:{c.instructions+=3;NFSU2_TR(0x69e435);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69e437:{NFSU2_TR(0x69e437);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e43a:{NFSU2_TR(0x69e43a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e467;}}
}
B69e43c:L69e43c:{c.instructions+=8;NFSU2_TR(0x69e43c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e43f:{NFSU2_TR(0x69e43f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e442:{NFSU2_TR(0x69e442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e445:{NFSU2_TR(0x69e445);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e448:{NFSU2_TR(0x69e448);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69e44b:{NFSU2_TR(0x69e44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e44e:{NFSU2_TR(0x69e44e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e451:{NFSU2_TR(0x69e451);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e456;}}
}
B69e453:L69e453:{c.instructions+=1;NFSU2_TR(0x69e453);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e456:L69e456:{c.instructions+=3;NFSU2_TR(0x69e456);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e459:{NFSU2_TR(0x69e459);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B69e45c:{NFSU2_TR(0x69e45c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69e461;}}
}
B69e45e:L69e45e:{c.instructions+=1;NFSU2_TR(0x69e45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e461:L69e461:{c.instructions+=3;NFSU2_TR(0x69e461);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69e462:{NFSU2_TR(0x69e462);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69e465:{NFSU2_TR(0x69e465);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e43cu);}goto L69e43c;}}
}
B69e467:L69e467:{c.instructions+=2;NFSU2_TR(0x69e467);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e46d:{NFSU2_TR(0x69e46d);
if(r1(R+518)){{goto L69e4c7;}}
}
B69e46f:L69e46f:{c.instructions+=3;NFSU2_TR(0x69e46f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69e471:{NFSU2_TR(0x69e471);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e474:{NFSU2_TR(0x69e474);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e4c7;}}
}
B69e476:L69e476:{c.instructions+=5;NFSU2_TR(0x69e476);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e479:{NFSU2_TR(0x69e479);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e47c:{NFSU2_TR(0x69e47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e47f:{NFSU2_TR(0x69e47f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e482:{NFSU2_TR(0x69e482);
if(r1(R+518)){{goto L69e49a;}}
}
B69e484:L69e484:{c.instructions+=6;NFSU2_TR(0x69e484);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69e487:{NFSU2_TR(0x69e487);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e48a:{NFSU2_TR(0x69e48a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e48d:{NFSU2_TR(0x69e48d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e490:{NFSU2_TR(0x69e490);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e492:{NFSU2_TR(0x69e492);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69e49d;}}
}
B69e494:L69e494:{c.instructions+=3;NFSU2_TR(0x69e494);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69e495:{NFSU2_TR(0x69e495);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e498:{NFSU2_TR(0x69e498);
{goto L69e49d;}
}
B69e49a:L69e49a:{c.instructions+=1;NFSU2_TR(0x69e49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e49d:L69e49d:{c.instructions+=3;NFSU2_TR(0x69e49d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e4a0:{NFSU2_TR(0x69e4a0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e4a3:{NFSU2_TR(0x69e4a3);
if(r1(R+518)){{goto L69e4bd;}}
}
B69e4a5:L69e4a5:{c.instructions+=7;NFSU2_TR(0x69e4a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e4a8:{NFSU2_TR(0x69e4a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69e4ab:{NFSU2_TR(0x69e4ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e4ae:{NFSU2_TR(0x69e4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e4b1:{NFSU2_TR(0x69e4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e4b4:{NFSU2_TR(0x69e4b4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e4b6:{NFSU2_TR(0x69e4b6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e4c1;}}
}
B69e4b8:L69e4b8:{c.instructions+=2;NFSU2_TR(0x69e4b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e4bb:{NFSU2_TR(0x69e4bb);
{goto L69e4c1;}
}
B69e4bd:L69e4bd:{c.instructions+=1;NFSU2_TR(0x69e4bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e4c1:L69e4c1:{c.instructions+=3;NFSU2_TR(0x69e4c1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69e4c2:{NFSU2_TR(0x69e4c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69e4c5:{NFSU2_TR(0x69e4c5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e476u);}goto L69e476;}}
}
B69e4c7:L69e4c7:{c.instructions+=2;NFSU2_TR(0x69e4c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e4cd:{NFSU2_TR(0x69e4cd);
if(r1(R+518)){{goto L69e4d6;}}
}
B69e4cf:L69e4cf:{c.instructions+=2;NFSU2_TR(0x69e4cf);
__builtin_memmove((R+4),(R+24),4);
}
B69e4d1:{NFSU2_TR(0x69e4d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e4d6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e14eu);}goto L69e14e;}
}
B69e4d6:L69e4d6:{c.instructions+=2;NFSU2_TR(0x69e4d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e4d9:{NFSU2_TR(0x69e4d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e4deull));
TAIL_STATIC(0x575630u,575);
}
B69e4de:L69e4de:{c.instructions+=2;NFSU2_TR(0x69e4de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69e4df:{NFSU2_TR(0x69e4df);
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
B69e4e1:L69e4e1:{c.instructions+=5;NFSU2_TR(0x69e4e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69e4e2:{NFSU2_TR(0x69e4e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69e4e3:{NFSU2_TR(0x69e4e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69e4e4:{NFSU2_TR(0x69e4e4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69e4e5:{NFSU2_TR(0x69e4e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69e4e6:L69e4e6:{c.instructions+=9;NFSU2_TR(0x69e4e6);
__builtin_memmove((R+28),(R+28),4);
}
B69e4e8:{NFSU2_TR(0x69e4e8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e4e9:{NFSU2_TR(0x69e4e9);
__builtin_memmove((R+20),(R+16),4);
}
B69e4eb:{NFSU2_TR(0x69e4eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e4ec:{NFSU2_TR(0x69e4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69e4ef:{NFSU2_TR(0x69e4ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e4f0:{NFSU2_TR(0x69e4f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e4f1:{NFSU2_TR(0x69e4f1);
__builtin_memmove((R+28),(R+4),4);
}
B69e4f3:{NFSU2_TR(0x69e4f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e4f6:L69e4f6:{c.instructions+=6;NFSU2_TR(0x69e4f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e4fa:{NFSU2_TR(0x69e4fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e4fd:{NFSU2_TR(0x69e4fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e500:{NFSU2_TR(0x69e500);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e503:{NFSU2_TR(0x69e503);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69e506:{NFSU2_TR(0x69e506);
if(r1(R+518)){{goto L69e546;}}
}
B69e508:L69e508:{c.instructions+=5;NFSU2_TR(0x69e508);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e50b:{NFSU2_TR(0x69e50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e50e:{NFSU2_TR(0x69e50e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69e511:{NFSU2_TR(0x69e511);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69e515:{NFSU2_TR(0x69e515);
if(r1(R+518)){{goto L69e546;}}
}
B69e517:L69e517:{c.instructions+=3;NFSU2_TR(0x69e517);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e51a:{NFSU2_TR(0x69e51a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69e51c:{NFSU2_TR(0x69e51c);
if(r1(R+518)){{goto L69e52a;}}
}
B69e51e:L69e51e:{c.instructions+=4;NFSU2_TR(0x69e51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69e521:{NFSU2_TR(0x69e521);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e524:{NFSU2_TR(0x69e524);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69e527:{NFSU2_TR(0x69e527);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69e52a:L69e52a:{c.instructions+=7;NFSU2_TR(0x69e52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e52d:{NFSU2_TR(0x69e52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e530:{NFSU2_TR(0x69e530);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e533:{NFSU2_TR(0x69e533);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e536:{NFSU2_TR(0x69e536);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e539:{NFSU2_TR(0x69e539);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69e53b:{NFSU2_TR(0x69e53b);
if(r1(R+518)){{goto L69e543;}}
}
B69e53d:L69e53d:{c.instructions+=2;NFSU2_TR(0x69e53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e540:{NFSU2_TR(0x69e540);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69e543:L69e543:{c.instructions+=1;NFSU2_TR(0x69e543);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e546:L69e546:{c.instructions+=3;NFSU2_TR(0x69e546);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e549:{NFSU2_TR(0x69e549);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e54c:{NFSU2_TR(0x69e54c);
if(r1(R+518)){{goto L69e559;}}
}
B69e54e:L69e54e:{c.instructions+=5;NFSU2_TR(0x69e54e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e550:{NFSU2_TR(0x69e550);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e551:{NFSU2_TR(0x69e551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e552:{NFSU2_TR(0x69e552);
__builtin_memmove((R+4),(R+28),4);
}
B69e554:{NFSU2_TR(0x69e554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e559ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e4e6u);}goto L69e4e6;}
}
B69e559:L69e559:{c.instructions+=3;NFSU2_TR(0x69e559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e55c:{NFSU2_TR(0x69e55c);
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
B69e55f:{NFSU2_TR(0x69e55f);
if(r1(R+518)){{goto L69e56c;}}
}
B69e561:L69e561:{c.instructions+=3;NFSU2_TR(0x69e561);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69e568:{NFSU2_TR(0x69e568);
__builtin_memmove((R+4),(R+24),4);
}
B69e56a:{NFSU2_TR(0x69e56a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e4f6u);}goto L69e4f6;}
}
B69e56c:L69e56c:{c.instructions+=5;NFSU2_TR(0x69e56c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69e56d:{NFSU2_TR(0x69e56d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69e56e:{NFSU2_TR(0x69e56e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69e56f:{NFSU2_TR(0x69e56f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69e570:{NFSU2_TR(0x69e570);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69e573:L69e573:{c.instructions+=10;NFSU2_TR(0x69e573);
__builtin_memmove((R+28),(R+28),4);
}
B69e575:{NFSU2_TR(0x69e575);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e576:{NFSU2_TR(0x69e576);
__builtin_memmove((R+20),(R+16),4);
}
B69e578:{NFSU2_TR(0x69e578);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e579:{NFSU2_TR(0x69e579);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e57a:{NFSU2_TR(0x69e57a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e57b:{NFSU2_TR(0x69e57b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e57c:{NFSU2_TR(0x69e57c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e57d:{NFSU2_TR(0x69e57d);
__builtin_memmove((R+28),(R+4),4);
}
B69e57f:{NFSU2_TR(0x69e57f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e584ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e219u);}goto L69e219;}
}
B69e584:L69e584:{c.instructions+=4;NFSU2_TR(0x69e584);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69e586:{NFSU2_TR(0x69e586);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69e588:{NFSU2_TR(0x69e588);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e58b:{NFSU2_TR(0x69e58b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e5a5;}}
}
B69e58d:L69e58d:{c.instructions+=9;NFSU2_TR(0x69e58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e590:{NFSU2_TR(0x69e590);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e593:{NFSU2_TR(0x69e593);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69e594:{NFSU2_TR(0x69e594);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e597:{NFSU2_TR(0x69e597);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e59a:{NFSU2_TR(0x69e59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e59d:{NFSU2_TR(0x69e59d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e5a0:{NFSU2_TR(0x69e5a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69e5a3:{NFSU2_TR(0x69e5a3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e58du);}goto L69e58d;}}
}
B69e5a5:L69e5a5:{c.instructions+=3;NFSU2_TR(0x69e5a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e5a8:{NFSU2_TR(0x69e5a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e5ab:{NFSU2_TR(0x69e5ab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e61f;}}
}
B69e5ad:L69e5ad:{c.instructions+=5;NFSU2_TR(0x69e5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e5b0:{NFSU2_TR(0x69e5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e5b3:{NFSU2_TR(0x69e5b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69e5b6:{NFSU2_TR(0x69e5b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B69e5bc:{NFSU2_TR(0x69e5bc);
if(r1(R+518)){{goto L69e612;}}
}
B69e5be:L69e5be:{c.instructions+=3;NFSU2_TR(0x69e5be);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e5c0:{NFSU2_TR(0x69e5c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e5c3:{NFSU2_TR(0x69e5c3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e5dd;}}
}
B69e5c5:L69e5c5:{c.instructions+=6;NFSU2_TR(0x69e5c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e5c8:{NFSU2_TR(0x69e5c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e5ca:{NFSU2_TR(0x69e5ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e5cd:{NFSU2_TR(0x69e5cd);
__builtin_memmove((R+4),(R+28),4);
}
B69e5cf:{NFSU2_TR(0x69e5cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69e5d2:{NFSU2_TR(0x69e5d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e5d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e4e6u);}goto L69e4e6;}
}
B69e5d7:L69e5d7:{c.instructions+=3;NFSU2_TR(0x69e5d7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69e5d8:{NFSU2_TR(0x69e5d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69e5db:{NFSU2_TR(0x69e5db);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e5c5u);}goto L69e5c5;}}
}
B69e5dd:L69e5dd:{c.instructions+=3;NFSU2_TR(0x69e5dd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e5df:{NFSU2_TR(0x69e5df);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e5e2:{NFSU2_TR(0x69e5e2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e612;}}
}
B69e5e4:L69e5e4:{c.instructions+=4;NFSU2_TR(0x69e5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e5e7:{NFSU2_TR(0x69e5e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e5ea:{NFSU2_TR(0x69e5ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e5ed:{NFSU2_TR(0x69e5ed);
if(r1(R+518)){{goto L69e5ff;}}
}
B69e5ef:L69e5ef:{c.instructions+=5;NFSU2_TR(0x69e5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e5f2:{NFSU2_TR(0x69e5f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69e5f5:{NFSU2_TR(0x69e5f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e5f8:{NFSU2_TR(0x69e5f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e5fb:{NFSU2_TR(0x69e5fb);
if(r1(R+518)){{goto L69e5ff;}}
}
B69e5fd:L69e5fd:{c.instructions+=1;NFSU2_TR(0x69e5fd);
__builtin_memmove((R+0),(R+4),4);
}
B69e5ff:L69e5ff:{c.instructions+=5;NFSU2_TR(0x69e5ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e601:{NFSU2_TR(0x69e601);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e604:{NFSU2_TR(0x69e604);
__builtin_memmove((R+4),(R+28),4);
}
B69e606:{NFSU2_TR(0x69e606);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e607:{NFSU2_TR(0x69e607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e60cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e4e6u);}goto L69e4e6;}
}
B69e60c:L69e60c:{c.instructions+=3;NFSU2_TR(0x69e60c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69e60d:{NFSU2_TR(0x69e60d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69e610:{NFSU2_TR(0x69e610);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e5e4u);}goto L69e5e4;}}
}
B69e612:L69e612:{c.instructions+=5;NFSU2_TR(0x69e612);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e615:{NFSU2_TR(0x69e615);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e618:{NFSU2_TR(0x69e618);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69e61a:{NFSU2_TR(0x69e61a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69e61d:{NFSU2_TR(0x69e61d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e5adu);}goto L69e5ad;}}
}
B69e61f:L69e61f:{c.instructions+=3;NFSU2_TR(0x69e61f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e621:{NFSU2_TR(0x69e621);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e624:{NFSU2_TR(0x69e624);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e66a;}}
}
B69e626:L69e626:{c.instructions+=5;NFSU2_TR(0x69e626);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e629:{NFSU2_TR(0x69e629);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69e62c:{NFSU2_TR(0x69e62c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e62f:{NFSU2_TR(0x69e62f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e631:{NFSU2_TR(0x69e631);
if(r1(R+518)){{goto L69e644;}}
}
B69e633:L69e633:{c.instructions+=2;NFSU2_TR(0x69e633);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e634:{NFSU2_TR(0x69e634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e639ull));
TAIL_STATIC(0x6992fau,699);
}
B69e639:L69e639:{c.instructions+=3;NFSU2_TR(0x69e639);
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
B69e63b:{NFSU2_TR(0x69e63b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e63e:{NFSU2_TR(0x69e63e);
if(r1(R+518)){{goto L69e6f2;}}
}
B69e644:L69e644:{c.instructions+=3;NFSU2_TR(0x69e644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e647:{NFSU2_TR(0x69e647);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69e649:{NFSU2_TR(0x69e649);
if(r1(R+518)){{goto L69e65c;}}
}
B69e64b:L69e64b:{c.instructions+=2;NFSU2_TR(0x69e64b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e64c:{NFSU2_TR(0x69e64c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e651ull));
TAIL_STATIC(0x6992fau,699);
}
B69e651:L69e651:{c.instructions+=3;NFSU2_TR(0x69e651);
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
B69e653:{NFSU2_TR(0x69e653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e656:{NFSU2_TR(0x69e656);
if(r1(R+518)){{goto L69e6f2;}}
}
B69e65c:L69e65c:{c.instructions+=6;NFSU2_TR(0x69e65c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69e65e:{NFSU2_TR(0x69e65e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69e65f:{NFSU2_TR(0x69e65f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e662:{NFSU2_TR(0x69e662);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e665:{NFSU2_TR(0x69e665);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69e668:{NFSU2_TR(0x69e668);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e626u);}goto L69e626;}}
}
B69e66a:L69e66a:{c.instructions+=3;NFSU2_TR(0x69e66a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e66d:{NFSU2_TR(0x69e66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e670:{NFSU2_TR(0x69e670);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e6e4;}}
}
B69e672:L69e672:{c.instructions+=5;NFSU2_TR(0x69e672);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e675:{NFSU2_TR(0x69e675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e678:{NFSU2_TR(0x69e678);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69e67b:{NFSU2_TR(0x69e67b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B69e681:{NFSU2_TR(0x69e681);
if(r1(R+518)){{goto L69e6d7;}}
}
B69e683:L69e683:{c.instructions+=3;NFSU2_TR(0x69e683);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e685:{NFSU2_TR(0x69e685);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e688:{NFSU2_TR(0x69e688);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e6a2;}}
}
B69e68a:L69e68a:{c.instructions+=6;NFSU2_TR(0x69e68a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e68d:{NFSU2_TR(0x69e68d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e68f:{NFSU2_TR(0x69e68f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e692:{NFSU2_TR(0x69e692);
__builtin_memmove((R+4),(R+28),4);
}
B69e694:{NFSU2_TR(0x69e694);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69e697:{NFSU2_TR(0x69e697);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e69cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e4e6u);}goto L69e4e6;}
}
B69e69c:L69e69c:{c.instructions+=3;NFSU2_TR(0x69e69c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69e69d:{NFSU2_TR(0x69e69d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69e6a0:{NFSU2_TR(0x69e6a0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e68au);}goto L69e68a;}}
}
B69e6a2:L69e6a2:{c.instructions+=3;NFSU2_TR(0x69e6a2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e6a4:{NFSU2_TR(0x69e6a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e6a7:{NFSU2_TR(0x69e6a7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e6d7;}}
}
B69e6a9:L69e6a9:{c.instructions+=4;NFSU2_TR(0x69e6a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e6ac:{NFSU2_TR(0x69e6ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e6af:{NFSU2_TR(0x69e6af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e6b2:{NFSU2_TR(0x69e6b2);
if(r1(R+518)){{goto L69e6c4;}}
}
B69e6b4:L69e6b4:{c.instructions+=5;NFSU2_TR(0x69e6b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e6b7:{NFSU2_TR(0x69e6b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69e6ba:{NFSU2_TR(0x69e6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e6bd:{NFSU2_TR(0x69e6bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e6c0:{NFSU2_TR(0x69e6c0);
if(r1(R+518)){{goto L69e6c4;}}
}
B69e6c2:L69e6c2:{c.instructions+=1;NFSU2_TR(0x69e6c2);
__builtin_memmove((R+0),(R+4),4);
}
B69e6c4:L69e6c4:{c.instructions+=5;NFSU2_TR(0x69e6c4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e6c6:{NFSU2_TR(0x69e6c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e6c9:{NFSU2_TR(0x69e6c9);
__builtin_memmove((R+4),(R+28),4);
}
B69e6cb:{NFSU2_TR(0x69e6cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e6cc:{NFSU2_TR(0x69e6cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e6d1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e4e6u);}goto L69e4e6;}
}
B69e6d1:L69e6d1:{c.instructions+=3;NFSU2_TR(0x69e6d1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69e6d2:{NFSU2_TR(0x69e6d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69e6d5:{NFSU2_TR(0x69e6d5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e6a9u);}goto L69e6a9;}}
}
B69e6d7:L69e6d7:{c.instructions+=5;NFSU2_TR(0x69e6d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e6da:{NFSU2_TR(0x69e6da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e6dd:{NFSU2_TR(0x69e6dd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69e6df:{NFSU2_TR(0x69e6df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69e6e2:{NFSU2_TR(0x69e6e2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e672u);}goto L69e672;}}
}
B69e6e4:L69e6e4:{c.instructions+=3;NFSU2_TR(0x69e6e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e6e7:{NFSU2_TR(0x69e6e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e6ea:{NFSU2_TR(0x69e6ea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e7a4;}}
}
B69e6f0:L69e6f0:{c.instructions+=1;NFSU2_TR(0x69e6f0);
{goto L69e6fe;}
}
B69e6f2:L69e6f2:{c.instructions+=2;NFSU2_TR(0x69e6f2);
w4(R+0,u32(0x8007000eull));
}
B69e6f7:{NFSU2_TR(0x69e6f7);
{goto L69e7a6;}
}
B69e6fc:L69e6fc:{c.instructions+=1;NFSU2_TR(0x69e6fc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69e6fe:L69e6fe:{c.instructions+=6;NFSU2_TR(0x69e6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e701:{NFSU2_TR(0x69e701);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e704:{NFSU2_TR(0x69e704);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69e707:{NFSU2_TR(0x69e707);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e70a:{NFSU2_TR(0x69e70a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e70c:{NFSU2_TR(0x69e70c);
if(r1(R+518)){{goto L69e750;}}
}
B69e70e:L69e70e:{c.instructions+=5;NFSU2_TR(0x69e70e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e70f:{NFSU2_TR(0x69e70f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e710:{NFSU2_TR(0x69e710);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e713:{NFSU2_TR(0x69e713);
u8 U[4];
w4(U+0,u32(0x69a0c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e718:{NFSU2_TR(0x69e718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e71dull));
TAIL_STATIC(0x69a41du,69a);
}
B69e71d:L69e71d:{c.instructions+=6;NFSU2_TR(0x69e71d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e71f:{NFSU2_TR(0x69e71f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69e720:{NFSU2_TR(0x69e720);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e723:{NFSU2_TR(0x69e723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e726:{NFSU2_TR(0x69e726);
__builtin_memmove((R+8),(R+12),4);
}
B69e728:{NFSU2_TR(0x69e728);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e748;}}
}
B69e72a:L69e72a:{c.instructions+=4;NFSU2_TR(0x69e72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e72d:{NFSU2_TR(0x69e72d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69e730:{NFSU2_TR(0x69e730);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B69e734:{NFSU2_TR(0x69e734);
if(r1(R+518)){{goto L69e73f;}}
}
B69e736:L69e736:{c.instructions+=3;NFSU2_TR(0x69e736);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69e739:{NFSU2_TR(0x69e739);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e73c:{NFSU2_TR(0x69e73c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69e73f:L69e73f:{c.instructions+=3;NFSU2_TR(0x69e73f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69e740:{NFSU2_TR(0x69e740);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69e743:{NFSU2_TR(0x69e743);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e72au);}goto L69e72a;}}
}
B69e745:L69e745:{c.instructions+=2;NFSU2_TR(0x69e745);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e747:{NFSU2_TR(0x69e747);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69e748:L69e748:{c.instructions+=3;NFSU2_TR(0x69e748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e74b:{NFSU2_TR(0x69e74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e74e:{NFSU2_TR(0x69e74e);
{goto L69e753;}
}
B69e750:L69e750:{c.instructions+=2;NFSU2_TR(0x69e750);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69e752:{NFSU2_TR(0x69e752);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69e753:L69e753:{c.instructions+=3;NFSU2_TR(0x69e753);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e756:{NFSU2_TR(0x69e756);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69e758:{NFSU2_TR(0x69e758);
if(r1(R+518)){{goto L69e795;}}
}
B69e75a:L69e75a:{c.instructions+=5;NFSU2_TR(0x69e75a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e75c:{NFSU2_TR(0x69e75c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e75d:{NFSU2_TR(0x69e75d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e760:{NFSU2_TR(0x69e760);
u8 U[4];
w4(U+0,u32(0x69a0c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e765:{NFSU2_TR(0x69e765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e76aull));
TAIL_STATIC(0x69a41du,69a);
}
B69e76a:L69e76a:{c.instructions+=4;NFSU2_TR(0x69e76a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e76d:{NFSU2_TR(0x69e76d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e770:{NFSU2_TR(0x69e770);
__builtin_memmove((R+8),(R+12),4);
}
B69e772:{NFSU2_TR(0x69e772);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e78f;}}
}
B69e774:L69e774:{c.instructions+=4;NFSU2_TR(0x69e774);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e777:{NFSU2_TR(0x69e777);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69e77a:{NFSU2_TR(0x69e77a);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B69e77e:{NFSU2_TR(0x69e77e);
if(r1(R+518)){{goto L69e789;}}
}
B69e780:L69e780:{c.instructions+=3;NFSU2_TR(0x69e780);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69e783:{NFSU2_TR(0x69e783);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e786:{NFSU2_TR(0x69e786);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69e789:L69e789:{c.instructions+=3;NFSU2_TR(0x69e789);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69e78a:{NFSU2_TR(0x69e78a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69e78d:{NFSU2_TR(0x69e78d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e774u);}goto L69e774;}}
}
B69e78f:L69e78f:{c.instructions+=2;NFSU2_TR(0x69e78f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e792:{NFSU2_TR(0x69e792);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e795:L69e795:{c.instructions+=4;NFSU2_TR(0x69e795);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e798:{NFSU2_TR(0x69e798);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e79b:{NFSU2_TR(0x69e79b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69e79e:{NFSU2_TR(0x69e79e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e6fcu);}goto L69e6fc;}}
}
B69e7a4:L69e7a4:{c.instructions+=1;NFSU2_TR(0x69e7a4);
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
B69e7a6:L69e7a6:{c.instructions+=5;NFSU2_TR(0x69e7a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69e7a7:{NFSU2_TR(0x69e7a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69e7a8:{NFSU2_TR(0x69e7a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69e7a9:{NFSU2_TR(0x69e7a9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69e7aa:{NFSU2_TR(0x69e7aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69e7ab:L69e7ab:{c.instructions+=3;NFSU2_TR(0x69e7ab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69e7ad:{NFSU2_TR(0x69e7ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e7b0:{NFSU2_TR(0x69e7b0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e7c1;}}
}
B69e7b2:L69e7b2:{c.instructions+=6;NFSU2_TR(0x69e7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e7b5:{NFSU2_TR(0x69e7b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69e7b8:{NFSU2_TR(0x69e7b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e7bb:{NFSU2_TR(0x69e7bb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69e7bc:{NFSU2_TR(0x69e7bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69e7bf:{NFSU2_TR(0x69e7bf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e7b2u);}goto L69e7b2;}}
}
B69e7c1:L69e7c1:{c.instructions+=2;NFSU2_TR(0x69e7c1);
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
B69e7c3:{NFSU2_TR(0x69e7c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69e7c4:L69e7c4:{c.instructions+=11;NFSU2_TR(0x69e7c4);
__builtin_memmove((R+28),(R+28),4);
}
B69e7c6:{NFSU2_TR(0x69e7c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e7c7:{NFSU2_TR(0x69e7c7);
__builtin_memmove((R+20),(R+16),4);
}
B69e7c9:{NFSU2_TR(0x69e7c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e7ca:{NFSU2_TR(0x69e7ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e7cb:{NFSU2_TR(0x69e7cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e7cc:{NFSU2_TR(0x69e7cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e7cd:{NFSU2_TR(0x69e7cd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69e7cf:{NFSU2_TR(0x69e7cf);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B69e7d2:{NFSU2_TR(0x69e7d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e7d5:{NFSU2_TR(0x69e7d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e825;}}
}
B69e7d7:L69e7d7:{c.instructions+=5;NFSU2_TR(0x69e7d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e7da:{NFSU2_TR(0x69e7da);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e7dd:{NFSU2_TR(0x69e7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e7e0:{NFSU2_TR(0x69e7e0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e7e2:{NFSU2_TR(0x69e7e2);
if(r1(R+518)){{goto L69e7ec;}}
}
B69e7e4:L69e7e4:{c.instructions+=3;NFSU2_TR(0x69e7e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69e7e7:{NFSU2_TR(0x69e7e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e7ea:{NFSU2_TR(0x69e7ea);
{goto L69e7ee;}
}
B69e7ec:L69e7ec:{c.instructions+=1;NFSU2_TR(0x69e7ec);
__builtin_memmove((R+8),(R+12),4);
}
B69e7ee:L69e7ee:{c.instructions+=4;NFSU2_TR(0x69e7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e7f1:{NFSU2_TR(0x69e7f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e7f4:{NFSU2_TR(0x69e7f4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e7f6:{NFSU2_TR(0x69e7f6);
if(r1(R+518)){{goto L69e803;}}
}
B69e7f8:L69e7f8:{c.instructions+=4;NFSU2_TR(0x69e7f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e7fb:{NFSU2_TR(0x69e7fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69e7fe:{NFSU2_TR(0x69e7fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e801:{NFSU2_TR(0x69e801);
{goto L69e805;}
}
B69e803:L69e803:{c.instructions+=1;NFSU2_TR(0x69e803);
__builtin_memmove((R+8),(R+12),4);
}
B69e805:L69e805:{c.instructions+=4;NFSU2_TR(0x69e805);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e808:{NFSU2_TR(0x69e808);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e80b:{NFSU2_TR(0x69e80b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e80d:{NFSU2_TR(0x69e80d);
if(r1(R+518)){{goto L69e81a;}}
}
B69e80f:L69e80f:{c.instructions+=4;NFSU2_TR(0x69e80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e812:{NFSU2_TR(0x69e812);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69e815:{NFSU2_TR(0x69e815);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e818:{NFSU2_TR(0x69e818);
{goto L69e81c;}
}
B69e81a:L69e81a:{c.instructions+=1;NFSU2_TR(0x69e81a);
__builtin_memmove((R+8),(R+12),4);
}
B69e81c:L69e81c:{c.instructions+=4;NFSU2_TR(0x69e81c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69e81d:{NFSU2_TR(0x69e81d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69e820:{NFSU2_TR(0x69e820);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69e823:{NFSU2_TR(0x69e823);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e7d7u);}goto L69e7d7;}}
}
B69e825:L69e825:{c.instructions+=3;NFSU2_TR(0x69e825);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e829:{NFSU2_TR(0x69e829);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e82d:{NFSU2_TR(0x69e82d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e89d;}}
}
B69e82f:L69e82f:{c.instructions+=6;NFSU2_TR(0x69e82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e832:{NFSU2_TR(0x69e832);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e835:{NFSU2_TR(0x69e835);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69e838:{NFSU2_TR(0x69e838);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69e83a:{NFSU2_TR(0x69e83a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69e83c:{NFSU2_TR(0x69e83c);
if(r1(R+518)){{goto L69e892;}}
}
B69e83e:L69e83e:{c.instructions+=2;NFSU2_TR(0x69e83e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e841:{NFSU2_TR(0x69e841);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e867;}}
}
B69e843:L69e843:{c.instructions+=5;NFSU2_TR(0x69e843);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e846:{NFSU2_TR(0x69e846);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69e849:{NFSU2_TR(0x69e849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69e84b:{NFSU2_TR(0x69e84b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e84d:{NFSU2_TR(0x69e84d);
if(r1(R+518)){{goto L69e85d;}}
}
B69e84f:L69e84f:{c.instructions+=5;NFSU2_TR(0x69e84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69e852:{NFSU2_TR(0x69e852);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69e855:{NFSU2_TR(0x69e855);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e858:{NFSU2_TR(0x69e858);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B69e85b:{NFSU2_TR(0x69e85b);
{goto L69e85f;}
}
B69e85d:L69e85d:{c.instructions+=1;NFSU2_TR(0x69e85d);
__builtin_memmove((R+28),(R+12),4);
}
B69e85f:L69e85f:{c.instructions+=4;NFSU2_TR(0x69e85f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B69e860:{NFSU2_TR(0x69e860);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B69e862:{NFSU2_TR(0x69e862);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B69e865:{NFSU2_TR(0x69e865);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e843u);}goto L69e843;}}
}
B69e867:L69e867:{c.instructions+=3;NFSU2_TR(0x69e867);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69e869:{NFSU2_TR(0x69e869);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69e86c:{NFSU2_TR(0x69e86c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69e892;}}
}
B69e86e:L69e86e:{c.instructions+=5;NFSU2_TR(0x69e86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e871:{NFSU2_TR(0x69e871);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69e874:{NFSU2_TR(0x69e874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69e876:{NFSU2_TR(0x69e876);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e878:{NFSU2_TR(0x69e878);
if(r1(R+518)){{goto L69e888;}}
}
B69e87a:L69e87a:{c.instructions+=5;NFSU2_TR(0x69e87a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69e87d:{NFSU2_TR(0x69e87d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69e880:{NFSU2_TR(0x69e880);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e883:{NFSU2_TR(0x69e883);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B69e886:{NFSU2_TR(0x69e886);
{goto L69e88a;}
}
B69e888:L69e888:{c.instructions+=1;NFSU2_TR(0x69e888);
__builtin_memmove((R+28),(R+12),4);
}
B69e88a:L69e88a:{c.instructions+=4;NFSU2_TR(0x69e88a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B69e88b:{NFSU2_TR(0x69e88b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B69e88d:{NFSU2_TR(0x69e88d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B69e890:{NFSU2_TR(0x69e890);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e86eu);}goto L69e86e;}}
}
B69e892:L69e892:{c.instructions+=4;NFSU2_TR(0x69e892);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69e895:{NFSU2_TR(0x69e895);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e898:{NFSU2_TR(0x69e898);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69e89b:{NFSU2_TR(0x69e89b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69e82fu);}goto L69e82f;}}
}
B69e89d:L69e89d:{c.instructions+=6;NFSU2_TR(0x69e89d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69e89e:{NFSU2_TR(0x69e89e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69e89f:{NFSU2_TR(0x69e89f);
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
B69e8a1:{NFSU2_TR(0x69e8a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69e8a2:{NFSU2_TR(0x69e8a2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69e8a3:{NFSU2_TR(0x69e8a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69e8a4:L69e8a4:{c.instructions+=13;NFSU2_TR(0x69e8a4);
__builtin_memmove((R+28),(R+28),4);
}
B69e8a6:{NFSU2_TR(0x69e8a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e8a7:{NFSU2_TR(0x69e8a7);
__builtin_memmove((R+20),(R+16),4);
}
B69e8a9:{NFSU2_TR(0x69e8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e8ac:{NFSU2_TR(0x69e8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e8af:{NFSU2_TR(0x69e8af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e8b0:{NFSU2_TR(0x69e8b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e8b1:{NFSU2_TR(0x69e8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e8b4:{NFSU2_TR(0x69e8b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69e8b7:{NFSU2_TR(0x69e8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e8ba:{NFSU2_TR(0x69e8ba);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e8bd:{NFSU2_TR(0x69e8bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e8be:{NFSU2_TR(0x69e8be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69e8c4;}}
}
B69e8c0:L69e8c0:{c.instructions+=2;NFSU2_TR(0x69e8c0);
__builtin_memmove((R+12),(R+0),4);
}
B69e8c2:{NFSU2_TR(0x69e8c2);
{goto L69e8ca;}
}
B69e8c4:L69e8c4:{c.instructions+=2;NFSU2_TR(0x69e8c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e8c7:{NFSU2_TR(0x69e8c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69e8ca:L69e8ca:{c.instructions+=3;NFSU2_TR(0x69e8ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69e8cc:{NFSU2_TR(0x69e8cc);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B69e8cf:{NFSU2_TR(0x69e8cf);
if(r1(R+518)){{goto L69e8df;}}
}
B69e8d1:L69e8d1:{c.instructions+=2;NFSU2_TR(0x69e8d1);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B69e8d5:{NFSU2_TR(0x69e8d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69e8df;}}
}
B69e8d7:L69e8d7:{c.instructions+=3;NFSU2_TR(0x69e8d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e8d8:{NFSU2_TR(0x69e8d8);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e8dd:{NFSU2_TR(0x69e8dd);
{goto L69e8e5;}
}
B69e8df:L69e8df:{c.instructions+=2;NFSU2_TR(0x69e8df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e8e0:{NFSU2_TR(0x69e8e0);
u8 U[4];
w4(U+0,u32(0x7bac44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e8e5:L69e8e5:{c.instructions+=5;NFSU2_TR(0x69e8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69e8e8:{NFSU2_TR(0x69e8e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e8eb:{NFSU2_TR(0x69e8eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e8ec:{NFSU2_TR(0x69e8ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e8ed:{NFSU2_TR(0x69e8ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e8f2ull));
TAIL_STATIC(0x75e081u,75e);
}
B69e8f2:L69e8f2:{c.instructions+=4;NFSU2_TR(0x69e8f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e8f5:{NFSU2_TR(0x69e8f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B69e8f8:{NFSU2_TR(0x69e8f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e8fb:{NFSU2_TR(0x69e8fb);
if(r1(R+518)){{goto L69e915;}}
}
B69e8fd:L69e8fd:{c.instructions+=8;NFSU2_TR(0x69e8fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e8fe:{NFSU2_TR(0x69e8fe);
__builtin_memmove((R+4),(R+28),4);
}
B69e900:{NFSU2_TR(0x69e900);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B69e902:{NFSU2_TR(0x69e902);
u8 U[4];
w4(U+0,u32(0x7b3f54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e907:{NFSU2_TR(0x69e907);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e908:{NFSU2_TR(0x69e908);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B69e90a:{NFSU2_TR(0x69e90a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e90b:{NFSU2_TR(0x69e90b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e910ull));
TAIL_STATIC(0x75e081u,75e);
}
B69e910:L69e910:{c.instructions+=2;NFSU2_TR(0x69e910);
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
B69e913:{NFSU2_TR(0x69e913);
{goto L69e92a;}
}
B69e915:L69e915:{c.instructions+=7;NFSU2_TR(0x69e915);
__builtin_memmove((R+4),(R+28),4);
}
B69e917:{NFSU2_TR(0x69e917);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B69e919:{NFSU2_TR(0x69e919);
u8 U[4];
w4(U+0,u32(0x7bac40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e91e:{NFSU2_TR(0x69e91e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e91f:{NFSU2_TR(0x69e91f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B69e921:{NFSU2_TR(0x69e921);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e922:{NFSU2_TR(0x69e922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e927ull));
TAIL_STATIC(0x75e081u,75e);
}
B69e927:L69e927:{c.instructions+=1;NFSU2_TR(0x69e927);
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
B69e92a:L69e92a:{c.instructions+=6;NFSU2_TR(0x69e92a);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B69e92f:{NFSU2_TR(0x69e92f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69e930:{NFSU2_TR(0x69e930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69e931:{NFSU2_TR(0x69e931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69e932:{NFSU2_TR(0x69e932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69e933:{NFSU2_TR(0x69e933);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69e936:L69e936:{c.instructions+=11;NFSU2_TR(0x69e936);
__builtin_memmove((R+28),(R+28),4);
}
B69e938:{NFSU2_TR(0x69e938);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e939:{NFSU2_TR(0x69e939);
__builtin_memmove((R+20),(R+16),4);
}
B69e93b:{NFSU2_TR(0x69e93b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B69e941:{NFSU2_TR(0x69e941);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69e944:{NFSU2_TR(0x69e944);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e945:{NFSU2_TR(0x69e945);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e948:{NFSU2_TR(0x69e948);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69e94e:{NFSU2_TR(0x69e94e);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e953:{NFSU2_TR(0x69e953);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e954:{NFSU2_TR(0x69e954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e959ull));
TAIL_STATIC(0x75e02bu,75e);
}
B69e959:L69e959:{c.instructions+=6;NFSU2_TR(0x69e959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e95c:{NFSU2_TR(0x69e95c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69e95e:{NFSU2_TR(0x69e95e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B69e961:{NFSU2_TR(0x69e961);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e963:{NFSU2_TR(0x69e963);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B69e966:{NFSU2_TR(0x69e966);
if(r1(R+518)){{goto L69e98a;}}
}
B69e968:L69e968:{c.instructions+=3;NFSU2_TR(0x69e968);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e96b:{NFSU2_TR(0x69e96b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e96e:{NFSU2_TR(0x69e96e);
if(r1(R+518)){{goto L69e987;}}
}
B69e970:L69e970:{c.instructions+=2;NFSU2_TR(0x69e970);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e973:{NFSU2_TR(0x69e973);
if(r1(R+518)){{goto L69e97f;}}
}
B69e975:L69e975:{c.instructions+=2;NFSU2_TR(0x69e975);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e978:{NFSU2_TR(0x69e978);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69e98a;}}
}
B69e97a:L69e97a:{c.instructions+=2;NFSU2_TR(0x69e97a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69e97d:{NFSU2_TR(0x69e97d);
{goto L69e98a;}
}
B69e97f:L69e97f:{c.instructions+=3;NFSU2_TR(0x69e97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69e982:{NFSU2_TR(0x69e982);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B69e985:{NFSU2_TR(0x69e985);
{goto L69e98a;}
}
B69e987:L69e987:{c.instructions+=1;NFSU2_TR(0x69e987);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69e98a:L69e98a:{c.instructions+=9;NFSU2_TR(0x69e98a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e98b:{NFSU2_TR(0x69e98b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69e98e:{NFSU2_TR(0x69e98e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69e994:{NFSU2_TR(0x69e994);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e995:{NFSU2_TR(0x69e995);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e99a:{NFSU2_TR(0x69e99a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e99d:{NFSU2_TR(0x69e99d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e99e:{NFSU2_TR(0x69e99e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e9a4:{NFSU2_TR(0x69e9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e9a9ull));
TAIL_STATIC(0x64307cu,643);
}
B69e9a9:L69e9a9:{c.instructions+=6;NFSU2_TR(0x69e9a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B69e9ac:{NFSU2_TR(0x69e9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69e9b6:{NFSU2_TR(0x69e9b6);
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
B69e9b8:{NFSU2_TR(0x69e9b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69e9b9:{NFSU2_TR(0x69e9b9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69e9ba:{NFSU2_TR(0x69e9ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69e9bb:L69e9bb:{c.instructions+=11;NFSU2_TR(0x69e9bb);
__builtin_memmove((R+28),(R+28),4);
}
B69e9bd:{NFSU2_TR(0x69e9bd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e9be:{NFSU2_TR(0x69e9be);
__builtin_memmove((R+20),(R+16),4);
}
B69e9c0:{NFSU2_TR(0x69e9c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B69e9c6:{NFSU2_TR(0x69e9c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69e9c9:{NFSU2_TR(0x69e9c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e9ca:{NFSU2_TR(0x69e9ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69e9cd:{NFSU2_TR(0x69e9cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69e9d3:{NFSU2_TR(0x69e9d3);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e9d8:{NFSU2_TR(0x69e9d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69e9d9:{NFSU2_TR(0x69e9d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69e9deull));
TAIL_STATIC(0x75e02bu,75e);
}
B69e9de:L69e9de:{c.instructions+=6;NFSU2_TR(0x69e9de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69e9e1:{NFSU2_TR(0x69e9e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69e9e3:{NFSU2_TR(0x69e9e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B69e9e6:{NFSU2_TR(0x69e9e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e9e8:{NFSU2_TR(0x69e9e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B69e9eb:{NFSU2_TR(0x69e9eb);
if(r1(R+518)){{goto L69ea0f;}}
}
B69e9ed:L69e9ed:{c.instructions+=3;NFSU2_TR(0x69e9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69e9f0:{NFSU2_TR(0x69e9f0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e9f3:{NFSU2_TR(0x69e9f3);
if(r1(R+518)){{goto L69ea0c;}}
}
B69e9f5:L69e9f5:{c.instructions+=2;NFSU2_TR(0x69e9f5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e9f8:{NFSU2_TR(0x69e9f8);
if(r1(R+518)){{goto L69ea04;}}
}
B69e9fa:L69e9fa:{c.instructions+=2;NFSU2_TR(0x69e9fa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69e9fd:{NFSU2_TR(0x69e9fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ea0f;}}
}
B69e9ff:L69e9ff:{c.instructions+=2;NFSU2_TR(0x69e9ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69ea02:{NFSU2_TR(0x69ea02);
{goto L69ea0f;}
}
B69ea04:L69ea04:{c.instructions+=3;NFSU2_TR(0x69ea04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ea07:{NFSU2_TR(0x69ea07);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B69ea0a:{NFSU2_TR(0x69ea0a);
{goto L69ea0f;}
}
B69ea0c:L69ea0c:{c.instructions+=1;NFSU2_TR(0x69ea0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69ea0f:L69ea0f:{c.instructions+=8;NFSU2_TR(0x69ea0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69ea15:{NFSU2_TR(0x69ea15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ea16:{NFSU2_TR(0x69ea16);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ea1b:{NFSU2_TR(0x69ea1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ea1e:{NFSU2_TR(0x69ea1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ea1f:{NFSU2_TR(0x69ea1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ea22:{NFSU2_TR(0x69ea22);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ea28:{NFSU2_TR(0x69ea28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ea2dull));
TAIL_STATIC(0x643143u,643);
}
B69ea2d:L69ea2d:{c.instructions+=4;NFSU2_TR(0x69ea2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B69ea30:{NFSU2_TR(0x69ea30);
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
B69ea32:{NFSU2_TR(0x69ea32);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69ea33:{NFSU2_TR(0x69ea33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69ea34:L69ea34:{c.instructions+=16;NFSU2_TR(0x69ea34);
__builtin_memmove((R+28),(R+28),4);
}
B69ea36:{NFSU2_TR(0x69ea36);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ea37:{NFSU2_TR(0x69ea37);
__builtin_memmove((R+20),(R+16),4);
}
B69ea39:{NFSU2_TR(0x69ea39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B69ea3c:{NFSU2_TR(0x69ea3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ea3d:{NFSU2_TR(0x69ea3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69ea40:{NFSU2_TR(0x69ea40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ea43:{NFSU2_TR(0x69ea43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ea44:{NFSU2_TR(0x69ea44);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69ea47:{NFSU2_TR(0x69ea47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ea4a:{NFSU2_TR(0x69ea4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ea4b:{NFSU2_TR(0x69ea4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69ea4e:{NFSU2_TR(0x69ea4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69ea50:{NFSU2_TR(0x69ea50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69ea52:{NFSU2_TR(0x69ea52);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ea54:{NFSU2_TR(0x69ea54);
if(r1(R+512)){{goto L69ebc9;}}
}
B69ea5a:L69ea5a:{c.instructions+=1;NFSU2_TR(0x69ea5a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69ebce;}}
}
B69ea60:L69ea60:{c.instructions+=4;NFSU2_TR(0x69ea60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ea63:{NFSU2_TR(0x69ea63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ea67:{NFSU2_TR(0x69ea67);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69ea69:{NFSU2_TR(0x69ea69);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69eadd;}}
}
B69ea6b:L69ea6b:{c.instructions+=6;NFSU2_TR(0x69ea6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ea6e:{NFSU2_TR(0x69ea6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ea71:{NFSU2_TR(0x69ea71);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B69ea73:{NFSU2_TR(0x69ea73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ea76:{NFSU2_TR(0x69ea76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ea79:{NFSU2_TR(0x69ea79);
{goto L69ea7e;}
}
B69ea7b:L69ea7b:{c.instructions+=1;NFSU2_TR(0x69ea7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ea7e:L69ea7e:{c.instructions+=10;NFSU2_TR(0x69ea7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ea81:{NFSU2_TR(0x69ea81);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69ea84:{NFSU2_TR(0x69ea84);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ea87:{NFSU2_TR(0x69ea87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69ea89:{NFSU2_TR(0x69ea89);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69ea8c:{NFSU2_TR(0x69ea8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69ea8f:{NFSU2_TR(0x69ea8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ea92:{NFSU2_TR(0x69ea92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69ea95:{NFSU2_TR(0x69ea95);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ea97:{NFSU2_TR(0x69ea97);
if(r1(R+512)){{goto L69ebc9;}}
}
B69ea9d:L69ea9d:{c.instructions+=1;NFSU2_TR(0x69ea9d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69ebce;}}
}
B69eaa3:L69eaa3:{c.instructions+=4;NFSU2_TR(0x69eaa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69eaa6:{NFSU2_TR(0x69eaa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69eaa9:{NFSU2_TR(0x69eaa9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69eaab:{NFSU2_TR(0x69eaab);
if(r1(R+512)){{goto L69ebc9;}}
}
B69eab1:L69eab1:{c.instructions+=1;NFSU2_TR(0x69eab1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69ebce;}}
}
B69eab7:L69eab7:{c.instructions+=4;NFSU2_TR(0x69eab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69eaba:{NFSU2_TR(0x69eaba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69eabd:{NFSU2_TR(0x69eabd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69eabf:{NFSU2_TR(0x69eabf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69ebc9;}}
}
B69eac5:L69eac5:{c.instructions+=1;NFSU2_TR(0x69eac5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L69ebce;}}
}
B69eacb:L69eacb:{c.instructions+=6;NFSU2_TR(0x69eacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69eace:{NFSU2_TR(0x69eace);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ead1:{NFSU2_TR(0x69ead1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ead5:{NFSU2_TR(0x69ead5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ead8:{NFSU2_TR(0x69ead8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69eadb:{NFSU2_TR(0x69eadb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ea7bu);}goto L69ea7b;}}
}
B69eadd:L69eadd:{c.instructions+=2;NFSU2_TR(0x69eadd);
__builtin_memmove((R+4),(R+24),4);
}
B69eadf:{NFSU2_TR(0x69eadf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69eae4ull));
TAIL_STATIC(0x698f6cu,698);
}
B69eae4:L69eae4:{c.instructions+=2;NFSU2_TR(0x69eae4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69eae6:{NFSU2_TR(0x69eae6);
if(r1(R+518)){{goto L69eb8d;}}
}
B69eaec:L69eaec:{c.instructions+=5;NFSU2_TR(0x69eaec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69eaee:{NFSU2_TR(0x69eaee);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B69eaf4:{NFSU2_TR(0x69eaf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eaf7:{NFSU2_TR(0x69eaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69eafe:{NFSU2_TR(0x69eafe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69eb84;}}
}
B69eb04:L69eb04:{c.instructions+=6;NFSU2_TR(0x69eb04);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69eb07:{NFSU2_TR(0x69eb07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69eb0a:{NFSU2_TR(0x69eb0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69eb0d:{NFSU2_TR(0x69eb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eb10:{NFSU2_TR(0x69eb10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B69eb13:{NFSU2_TR(0x69eb13);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B69eb15:L69eb15:{c.instructions+=18;NFSU2_TR(0x69eb15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69eb18:{NFSU2_TR(0x69eb18);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69eb1b:{NFSU2_TR(0x69eb1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69eb1d:{NFSU2_TR(0x69eb1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69eb20:{NFSU2_TR(0x69eb20);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69eb23:{NFSU2_TR(0x69eb23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69eb26:{NFSU2_TR(0x69eb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69eb29:{NFSU2_TR(0x69eb29);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69eb2c:{NFSU2_TR(0x69eb2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69eb2f:{NFSU2_TR(0x69eb2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69eb32:{NFSU2_TR(0x69eb32);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69eb34:{NFSU2_TR(0x69eb34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eb37:{NFSU2_TR(0x69eb37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69eb39:{NFSU2_TR(0x69eb39);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69eb3c:{NFSU2_TR(0x69eb3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69eb3f:{NFSU2_TR(0x69eb3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eb42:{NFSU2_TR(0x69eb42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eb45:{NFSU2_TR(0x69eb45);
if(r1(R+512)){{goto L69eb4f;}}
}
B69eb47:L69eb47:{c.instructions+=3;NFSU2_TR(0x69eb47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eb4a:{NFSU2_TR(0x69eb4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eb4d:{NFSU2_TR(0x69eb4d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69eb52;}}
}
B69eb4f:L69eb4f:{c.instructions+=1;NFSU2_TR(0x69eb4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eb52:L69eb52:{c.instructions+=5;NFSU2_TR(0x69eb52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69eb55:{NFSU2_TR(0x69eb55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69eb58:{NFSU2_TR(0x69eb58);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69eb5a:{NFSU2_TR(0x69eb5a);
__builtin_memmove((R+8),(R+28),4);
}
B69eb5c:{NFSU2_TR(0x69eb5c);
if(r1(R+512)){{goto L69eb62;}}
}
B69eb5e:L69eb5e:{c.instructions+=2;NFSU2_TR(0x69eb5e);
__builtin_memmove((R+8),(R+12),4);
}
B69eb60:{NFSU2_TR(0x69eb60);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69eb64;}}
}
B69eb62:L69eb62:{c.instructions+=1;NFSU2_TR(0x69eb62);
__builtin_memmove((R+28),(R+12),4);
}
B69eb64:L69eb64:{c.instructions+=2;NFSU2_TR(0x69eb64);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69eb67:{NFSU2_TR(0x69eb67);
if(r1(R+512)){{goto L69ebc9;}}
}
B69eb69:L69eb69:{c.instructions+=1;NFSU2_TR(0x69eb69);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69ebce;}}
}
B69eb6b:L69eb6b:{c.instructions+=2;NFSU2_TR(0x69eb6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69eb6e:{NFSU2_TR(0x69eb6e);
if(r1(R+512)){{goto L69ebc9;}}
}
B69eb70:L69eb70:{c.instructions+=1;NFSU2_TR(0x69eb70);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69ebce;}}
}
B69eb72:L69eb72:{c.instructions+=6;NFSU2_TR(0x69eb72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69eb75:{NFSU2_TR(0x69eb75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69eb78:{NFSU2_TR(0x69eb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69eb7c:{NFSU2_TR(0x69eb7c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B69eb7f:{NFSU2_TR(0x69eb7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69eb82:{NFSU2_TR(0x69eb82);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69eb15u);}goto L69eb15;}}
}
B69eb84:L69eb84:{c.instructions+=1;NFSU2_TR(0x69eb84);
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
B69eb86:L69eb86:{c.instructions+=5;NFSU2_TR(0x69eb86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69eb87:{NFSU2_TR(0x69eb87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69eb88:{NFSU2_TR(0x69eb88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69eb89:{NFSU2_TR(0x69eb89);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69eb8a:{NFSU2_TR(0x69eb8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69eb8d:L69eb8d:{c.instructions+=4;NFSU2_TR(0x69eb8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69eb90:{NFSU2_TR(0x69eb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69eb94:{NFSU2_TR(0x69eb94);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69eb96:{NFSU2_TR(0x69eb96);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69eb84u);}goto L69eb84;}}
}
B69eb98:L69eb98:{c.instructions+=5;NFSU2_TR(0x69eb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69eb9b:{NFSU2_TR(0x69eb9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69eb9e:{NFSU2_TR(0x69eb9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69eba1:{NFSU2_TR(0x69eba1);
__builtin_memmove((R+0),(R+28),4);
}
B69eba3:{NFSU2_TR(0x69eba3);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B69eba5:L69eba5:{c.instructions+=8;NFSU2_TR(0x69eba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69eba8:{NFSU2_TR(0x69eba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69ebaa:{NFSU2_TR(0x69ebaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69ebad:{NFSU2_TR(0x69ebad);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69ebb0:{NFSU2_TR(0x69ebb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ebb3:{NFSU2_TR(0x69ebb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ebb6:{NFSU2_TR(0x69ebb6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ebb8:{NFSU2_TR(0x69ebb8);
if(r1(R+512)){{goto L69ebc9;}}
}
B69ebba:L69ebba:{c.instructions+=1;NFSU2_TR(0x69ebba);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69ebce;}}
}
B69ebbc:L69ebbc:{c.instructions+=4;NFSU2_TR(0x69ebbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ebbf:{NFSU2_TR(0x69ebbf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B69ebc2:{NFSU2_TR(0x69ebc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B69ebc5:{NFSU2_TR(0x69ebc5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69eba5u);}goto L69eba5;}}
}
B69ebc7:L69ebc7:{c.instructions+=1;NFSU2_TR(0x69ebc7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69eb84u);}goto L69eb84;}
}
B69ebc9:L69ebc9:{c.instructions+=2;NFSU2_TR(0x69ebc9);
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
B69ebcc:{NFSU2_TR(0x69ebcc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69eb86u);}goto L69eb86;}
}
B69ebce:L69ebce:{c.instructions+=3;NFSU2_TR(0x69ebce);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69ebd0:{NFSU2_TR(0x69ebd0);
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
B69ebd1:{NFSU2_TR(0x69ebd1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69eb86u);}goto L69eb86;}
}
B69ebd3:L69ebd3:{c.instructions+=9;NFSU2_TR(0x69ebd3);
__builtin_memmove((R+28),(R+28),4);
}
B69ebd5:{NFSU2_TR(0x69ebd5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ebd6:{NFSU2_TR(0x69ebd6);
__builtin_memmove((R+20),(R+16),4);
}
B69ebd8:{NFSU2_TR(0x69ebd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ebdb:{NFSU2_TR(0x69ebdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ebdc:{NFSU2_TR(0x69ebdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ebdf:{NFSU2_TR(0x69ebdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ebe2:{NFSU2_TR(0x69ebe2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ebe3:{NFSU2_TR(0x69ebe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ebe8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ea34u);}goto L69ea34;}
}
B69ebe8:L69ebe8:{c.instructions+=2;NFSU2_TR(0x69ebe8);
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
B69ebea:{NFSU2_TR(0x69ebea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ebfa;}}
}
B69ebec:L69ebec:{c.instructions+=2;NFSU2_TR(0x69ebec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ebef:{NFSU2_TR(0x69ebef);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ebf6;}}
}
B69ebf1:L69ebf1:{c.instructions+=2;NFSU2_TR(0x69ebf1);
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
B69ebf4:{NFSU2_TR(0x69ebf4);
{goto L69ebfa;}
}
B69ebf6:L69ebf6:{c.instructions+=2;NFSU2_TR(0x69ebf6);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B69ebf8:{NFSU2_TR(0x69ebf8);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69ebfa:L69ebfa:{c.instructions+=3;NFSU2_TR(0x69ebfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69ebfb:{NFSU2_TR(0x69ebfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69ebfc:{NFSU2_TR(0x69ebfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69ebff:L69ebff:{c.instructions+=6;NFSU2_TR(0x69ebff);
__builtin_memmove((R+28),(R+28),4);
}
B69ec01:{NFSU2_TR(0x69ec01);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec02:{NFSU2_TR(0x69ec02);
__builtin_memmove((R+20),(R+16),4);
}
B69ec04:{NFSU2_TR(0x69ec04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec05:{NFSU2_TR(0x69ec05);
__builtin_memmove((R+24),(R+4),4);
}
B69ec07:{NFSU2_TR(0x69ec07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ec0cull));
TAIL_STATIC(0x69a5dau,69a);
}
B69ec0c:L69ec0c:{c.instructions+=2;NFSU2_TR(0x69ec0c);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B69ec10:{NFSU2_TR(0x69ec10);
if(r1(R+518)){{goto L69ec19;}}
}
B69ec12:L69ec12:{c.instructions+=2;NFSU2_TR(0x69ec12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec13:{NFSU2_TR(0x69ec13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ec18ull));
TAIL_STATIC(0x575630u,575);
}
B69ec18:L69ec18:{c.instructions+=1;NFSU2_TR(0x69ec18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69ec19:L69ec19:{c.instructions+=4;NFSU2_TR(0x69ec19);
__builtin_memmove((R+0),(R+24),4);
}
B69ec1b:{NFSU2_TR(0x69ec1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69ec1c:{NFSU2_TR(0x69ec1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69ec1d:{NFSU2_TR(0x69ec1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69ec20:L69ec20:{c.instructions+=9;NFSU2_TR(0x69ec20);
__builtin_memmove((R+28),(R+28),4);
}
B69ec22:{NFSU2_TR(0x69ec22);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec23:{NFSU2_TR(0x69ec23);
__builtin_memmove((R+20),(R+16),4);
}
B69ec25:{NFSU2_TR(0x69ec25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ec28:{NFSU2_TR(0x69ec28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec29:{NFSU2_TR(0x69ec29);
__builtin_memmove((R+24),(R+4),4);
}
B69ec2b:{NFSU2_TR(0x69ec2b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69ec2d:{NFSU2_TR(0x69ec2d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B69ec2f:{NFSU2_TR(0x69ec2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ec3b;}}
}
B69ec31:L69ec31:{c.instructions+=2;NFSU2_TR(0x69ec31);
w4(R+0,u32(0x80004005ull));
}
B69ec36:{NFSU2_TR(0x69ec36);
{goto L69ee50;}
}
B69ec3b:L69ec3b:{c.instructions+=21;NFSU2_TR(0x69ec3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ec3e:{NFSU2_TR(0x69ec3e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec3f:{NFSU2_TR(0x69ec3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec40:{NFSU2_TR(0x69ec40);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec42:{NFSU2_TR(0x69ec42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69ec43:{NFSU2_TR(0x69ec43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec44:{NFSU2_TR(0x69ec44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ec4a:{NFSU2_TR(0x69ec4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ec4d:{NFSU2_TR(0x69ec4d);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B69ec50:{NFSU2_TR(0x69ec50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec51:{NFSU2_TR(0x69ec51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec52:{NFSU2_TR(0x69ec52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ec58:{NFSU2_TR(0x69ec58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ec5b:{NFSU2_TR(0x69ec5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ec61:{NFSU2_TR(0x69ec61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ec67:{NFSU2_TR(0x69ec67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ec6d:{NFSU2_TR(0x69ec6d);
u8 U[4];
w4(U+0,u32(0x7b3c38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec72:{NFSU2_TR(0x69ec72);
__builtin_memmove((R+4),(R+24),4);
}
B69ec74:{NFSU2_TR(0x69ec74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ec7a:{NFSU2_TR(0x69ec7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ec80:{NFSU2_TR(0x69ec80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ec85ull));
TAIL_STATIC(0x699be0u,699);
}
B69ec85:L69ec85:{c.instructions+=7;NFSU2_TR(0x69ec85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec86:{NFSU2_TR(0x69ec86);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec87:{NFSU2_TR(0x69ec87);
u8 U[4];
w4(U+0,u32(0x311ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec8c:{NFSU2_TR(0x69ec8c);
u8 U[4];
w4(U+0,u32(0x7b3b1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec91:{NFSU2_TR(0x69ec91);
__builtin_memmove((R+4),(R+24),4);
}
B69ec93:{NFSU2_TR(0x69ec93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ec96:{NFSU2_TR(0x69ec96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ec9bull));
TAIL_STATIC(0x699be0u,699);
}
B69ec9b:L69ec9b:{c.instructions+=7;NFSU2_TR(0x69ec9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec9c:{NFSU2_TR(0x69ec9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ec9d:{NFSU2_TR(0x69ec9d);
u8 U[4];
w4(U+0,u32(0x251ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69eca2:{NFSU2_TR(0x69eca2);
u8 U[4];
w4(U+0,u32(0x7b3a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69eca7:{NFSU2_TR(0x69eca7);
__builtin_memmove((R+4),(R+24),4);
}
B69eca9:{NFSU2_TR(0x69eca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ecac:{NFSU2_TR(0x69ecac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ecb1ull));
TAIL_STATIC(0x699be0u,699);
}
B69ecb1:L69ecb1:{c.instructions+=7;NFSU2_TR(0x69ecb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecb2:{NFSU2_TR(0x69ecb2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecb3:{NFSU2_TR(0x69ecb3);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecb5:{NFSU2_TR(0x69ecb5);
u8 U[4];
w4(U+0,u32(0x7b9b34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecba:{NFSU2_TR(0x69ecba);
__builtin_memmove((R+4),(R+24),4);
}
B69ecbc:{NFSU2_TR(0x69ecbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ecbf:{NFSU2_TR(0x69ecbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ecc4ull));
TAIL_STATIC(0x699be0u,699);
}
B69ecc4:L69ecc4:{c.instructions+=7;NFSU2_TR(0x69ecc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecc5:{NFSU2_TR(0x69ecc5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecc6:{NFSU2_TR(0x69ecc6);
u8 U[4];
w4(U+0,u32(0x62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecc8:{NFSU2_TR(0x69ecc8);
u8 U[4];
w4(U+0,u32(0x7b9ae8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69eccd:{NFSU2_TR(0x69eccd);
__builtin_memmove((R+4),(R+24),4);
}
B69eccf:{NFSU2_TR(0x69eccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ecd5:{NFSU2_TR(0x69ecd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ecdaull));
TAIL_STATIC(0x699be0u,699);
}
B69ecda:L69ecda:{c.instructions+=7;NFSU2_TR(0x69ecda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecdb:{NFSU2_TR(0x69ecdb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecdc:{NFSU2_TR(0x69ecdc);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecde:{NFSU2_TR(0x69ecde);
u8 U[4];
w4(U+0,u32(0x799434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ece3:{NFSU2_TR(0x69ece3);
__builtin_memmove((R+4),(R+24),4);
}
B69ece5:{NFSU2_TR(0x69ece5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eceb:{NFSU2_TR(0x69eceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ecf0ull));
TAIL_STATIC(0x699be0u,699);
}
B69ecf0:L69ecf0:{c.instructions+=7;NFSU2_TR(0x69ecf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecf1:{NFSU2_TR(0x69ecf1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecf2:{NFSU2_TR(0x69ecf2);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecf4:{NFSU2_TR(0x69ecf4);
u8 U[4];
w4(U+0,u32(0x799428ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ecf9:{NFSU2_TR(0x69ecf9);
__builtin_memmove((R+4),(R+24),4);
}
B69ecfb:{NFSU2_TR(0x69ecfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ed01:{NFSU2_TR(0x69ed01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ed06ull));
TAIL_STATIC(0x699be0u,699);
}
B69ed06:L69ed06:{c.instructions+=7;NFSU2_TR(0x69ed06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed07:{NFSU2_TR(0x69ed07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed08:{NFSU2_TR(0x69ed08);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed0a:{NFSU2_TR(0x69ed0a);
u8 U[4];
w4(U+0,u32(0x7b9aecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed0f:{NFSU2_TR(0x69ed0f);
__builtin_memmove((R+4),(R+24),4);
}
B69ed11:{NFSU2_TR(0x69ed11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ed17:{NFSU2_TR(0x69ed17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ed1cull));
TAIL_STATIC(0x699be0u,699);
}
B69ed1c:L69ed1c:{c.instructions+=7;NFSU2_TR(0x69ed1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed1d:{NFSU2_TR(0x69ed1d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed1e:{NFSU2_TR(0x69ed1e);
u8 U[4];
w4(U+0,u32(0x2d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed23:{NFSU2_TR(0x69ed23);
u8 U[4];
w4(U+0,u32(0x7b3b24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed28:{NFSU2_TR(0x69ed28);
__builtin_memmove((R+4),(R+24),4);
}
B69ed2a:{NFSU2_TR(0x69ed2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ed30:{NFSU2_TR(0x69ed30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ed35ull));
TAIL_STATIC(0x699be0u,699);
}
B69ed35:L69ed35:{c.instructions+=7;NFSU2_TR(0x69ed35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed36:{NFSU2_TR(0x69ed36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed37:{NFSU2_TR(0x69ed37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ed3d:{NFSU2_TR(0x69ed3d);
u8 U[4];
w4(U+0,u32(0x1003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed42:{NFSU2_TR(0x69ed42);
u8 U[4];
w4(U+0,u32(0x7b3ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed47:{NFSU2_TR(0x69ed47);
__builtin_memmove((R+4),(R+24),4);
}
B69ed49:{NFSU2_TR(0x69ed49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ed4eull));
TAIL_STATIC(0x699be0u,699);
}
B69ed4e:L69ed4e:{c.instructions+=7;NFSU2_TR(0x69ed4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed4f:{NFSU2_TR(0x69ed4f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed50:{NFSU2_TR(0x69ed50);
u8 U[4];
w4(U+0,u32(0x2251ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed55:{NFSU2_TR(0x69ed55);
u8 U[4];
w4(U+0,u32(0x7b3a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed5a:{NFSU2_TR(0x69ed5a);
__builtin_memmove((R+4),(R+24),4);
}
B69ed5c:{NFSU2_TR(0x69ed5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ed62:{NFSU2_TR(0x69ed62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ed67ull));
TAIL_STATIC(0x699be0u,699);
}
B69ed67:L69ed67:{c.instructions+=7;NFSU2_TR(0x69ed67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed68:{NFSU2_TR(0x69ed68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed69:{NFSU2_TR(0x69ed69);
u8 U[4];
w4(U+0,u32(0x400aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed6e:{NFSU2_TR(0x69ed6e);
u8 U[4];
w4(U+0,u32(0x7b9aecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed73:{NFSU2_TR(0x69ed73);
__builtin_memmove((R+4),(R+24),4);
}
B69ed75:{NFSU2_TR(0x69ed75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ed7b:{NFSU2_TR(0x69ed7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ed80ull));
TAIL_STATIC(0x699be0u,699);
}
B69ed80:L69ed80:{c.instructions+=7;NFSU2_TR(0x69ed80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed81:{NFSU2_TR(0x69ed81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed82:{NFSU2_TR(0x69ed82);
u8 U[4];
w4(U+0,u32(0xc00aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed87:{NFSU2_TR(0x69ed87);
u8 U[4];
w4(U+0,u32(0x7bac54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed8c:{NFSU2_TR(0x69ed8c);
__builtin_memmove((R+4),(R+24),4);
}
B69ed8e:{NFSU2_TR(0x69ed8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ed94:{NFSU2_TR(0x69ed94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ed99ull));
TAIL_STATIC(0x699be0u,699);
}
B69ed99:L69ed99:{c.instructions+=7;NFSU2_TR(0x69ed99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed9a:{NFSU2_TR(0x69ed9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ed9c:{NFSU2_TR(0x69ed9c);
u8 U[4];
w4(U+0,u32(0x10042ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69eda1:{NFSU2_TR(0x69eda1);
u8 U[4];
w4(U+0,u32(0x7bac50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69eda6:{NFSU2_TR(0x69eda6);
__builtin_memmove((R+4),(R+24),4);
}
B69eda8:{NFSU2_TR(0x69eda8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69edae:{NFSU2_TR(0x69edae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69edb3ull));
TAIL_STATIC(0x699be0u,699);
}
B69edb3:L69edb3:{c.instructions+=7;NFSU2_TR(0x69edb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69edb4:{NFSU2_TR(0x69edb4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69edb5:{NFSU2_TR(0x69edb5);
u8 U[4];
w4(U+0,u32(0x20003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69edba:{NFSU2_TR(0x69edba);
u8 U[4];
w4(U+0,u32(0x7b3c08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69edbf:{NFSU2_TR(0x69edbf);
__builtin_memmove((R+4),(R+24),4);
}
B69edc1:{NFSU2_TR(0x69edc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69edc7:{NFSU2_TR(0x69edc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69edccull));
TAIL_STATIC(0x699be0u,699);
}
B69edcc:L69edcc:{c.instructions+=7;NFSU2_TR(0x69edcc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69edcd:{NFSU2_TR(0x69edcd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69edce:{NFSU2_TR(0x69edce);
u8 U[4];
w4(U+0,u32(0x40211ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69edd3:{NFSU2_TR(0x69edd3);
u8 U[4];
w4(U+0,u32(0x7b3ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69edd8:{NFSU2_TR(0x69edd8);
__builtin_memmove((R+4),(R+24),4);
}
B69edda:{NFSU2_TR(0x69edda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ede0:{NFSU2_TR(0x69ede0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ede5ull));
TAIL_STATIC(0x699be0u,699);
}
B69ede5:L69ede5:{c.instructions+=7;NFSU2_TR(0x69ede5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ede6:{NFSU2_TR(0x69ede6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ede7:{NFSU2_TR(0x69ede7);
u8 U[4];
w4(U+0,u32(0x2062ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69edec:{NFSU2_TR(0x69edec);
u8 U[4];
w4(U+0,u32(0x7bac4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69edf1:{NFSU2_TR(0x69edf1);
__builtin_memmove((R+4),(R+24),4);
}
B69edf3:{NFSU2_TR(0x69edf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69edf9:{NFSU2_TR(0x69edf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69edfeull));
TAIL_STATIC(0x699be0u,699);
}
B69edfe:L69edfe:{c.instructions+=7;NFSU2_TR(0x69edfe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69edff:{NFSU2_TR(0x69edff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ee00:{NFSU2_TR(0x69ee00);
u8 U[4];
w4(U+0,u32(0x40062ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ee05:{NFSU2_TR(0x69ee05);
u8 U[4];
w4(U+0,u32(0x7bac48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ee0a:{NFSU2_TR(0x69ee0a);
__builtin_memmove((R+4),(R+24),4);
}
B69ee0c:{NFSU2_TR(0x69ee0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ee12:{NFSU2_TR(0x69ee12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ee17ull));
TAIL_STATIC(0x699be0u,699);
}
B69ee17:L69ee17:{c.instructions+=3;NFSU2_TR(0x69ee17);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x12ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69ee1b:{NFSU2_TR(0x69ee1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ee21:{NFSU2_TR(0x69ee21);
if(r1(R+518)){{goto L69ee2a;}}
}
B69ee23:L69ee23:{c.instructions+=2;NFSU2_TR(0x69ee23);
w4(R+0,u32(0x8007000eull));
}
B69ee28:{NFSU2_TR(0x69ee28);
{goto L69ee4e;}
}
B69ee2a:L69ee2a:{c.instructions+=4;NFSU2_TR(0x69ee2a);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ee2c:{NFSU2_TR(0x69ee2c);
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
B69ee2e:{NFSU2_TR(0x69ee2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69ee2f:{NFSU2_TR(0x69ee2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69ee32:L69ee32:{c.instructions+=1;NFSU2_TR(0x69ee32);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L69ee34;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ee32u);}goto L69ee32;}
}
B69ee34:L69ee34:{c.instructions+=3;NFSU2_TR(0x69ee34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69ee36:{NFSU2_TR(0x69ee36);
__builtin_memmove((R+4),(R+24),4);
}
B69ee38:{NFSU2_TR(0x69ee38);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ee3bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B69ee3b:L69ee3b:{c.instructions+=2;NFSU2_TR(0x69ee3b);
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
B69ee3d:{NFSU2_TR(0x69ee3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69ee4e;}}
}
B69ee3f:L69ee3f:{c.instructions+=3;NFSU2_TR(0x69ee3f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ee41:{NFSU2_TR(0x69ee41);
__builtin_memmove((R+4),(R+24),4);
}
B69ee43:{NFSU2_TR(0x69ee43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ee48ull));
TAIL_STATIC(0x69a609u,69a);
}
B69ee48:L69ee48:{c.instructions+=2;NFSU2_TR(0x69ee48);
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
B69ee4a:{NFSU2_TR(0x69ee4a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69ee4e;}}
}
B69ee4c:L69ee4c:{c.instructions+=1;NFSU2_TR(0x69ee4c);
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
B69ee4e:L69ee4e:{c.instructions+=2;NFSU2_TR(0x69ee4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69ee4f:{NFSU2_TR(0x69ee4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69ee50:L69ee50:{c.instructions+=3;NFSU2_TR(0x69ee50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69ee51:{NFSU2_TR(0x69ee51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69ee52:{NFSU2_TR(0x69ee52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69ee55:L69ee55:{c.instructions+=9;NFSU2_TR(0x69ee55);
__builtin_memmove((R+28),(R+28),4);
}
B69ee57:{NFSU2_TR(0x69ee57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ee58:{NFSU2_TR(0x69ee58);
__builtin_memmove((R+20),(R+16),4);
}
B69ee5a:{NFSU2_TR(0x69ee5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ee5b:{NFSU2_TR(0x69ee5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ee5c:{NFSU2_TR(0x69ee5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ee5f:{NFSU2_TR(0x69ee5f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ee60:{NFSU2_TR(0x69ee60);
__builtin_memmove((R+24),(R+4),4);
}
B69ee62:{NFSU2_TR(0x69ee62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ee67ull));
TAIL_STATIC(0x699e9du,699);
}
B69ee67:L69ee67:{c.instructions+=2;NFSU2_TR(0x69ee67);
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
B69ee69:{NFSU2_TR(0x69ee69);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69ef98;}}
}
B69ee6f:L69ee6f:{c.instructions+=51;NFSU2_TR(0x69ee6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ee75:{NFSU2_TR(0x69ee75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ee7b:{NFSU2_TR(0x69ee7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ee81:{NFSU2_TR(0x69ee81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ee88:{NFSU2_TR(0x69ee88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ee8f:{NFSU2_TR(0x69ee8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ee96:{NFSU2_TR(0x69ee96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ee9c:{NFSU2_TR(0x69ee9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ee9f:{NFSU2_TR(0x69ee9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eea5:{NFSU2_TR(0x69eea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69eea8:{NFSU2_TR(0x69eea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eeae:{NFSU2_TR(0x69eeae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69eeb1:{NFSU2_TR(0x69eeb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eeb4:{NFSU2_TR(0x69eeb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69eeb7:{NFSU2_TR(0x69eeb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eeba:{NFSU2_TR(0x69eeba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69eebd:{NFSU2_TR(0x69eebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eec0:{NFSU2_TR(0x69eec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69eec6:{NFSU2_TR(0x69eec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eecc:{NFSU2_TR(0x69eecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69eed2:{NFSU2_TR(0x69eed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eed8:{NFSU2_TR(0x69eed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69eede:{NFSU2_TR(0x69eede);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eee4:{NFSU2_TR(0x69eee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69eeea:{NFSU2_TR(0x69eeea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eef0:{NFSU2_TR(0x69eef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69eef6:{NFSU2_TR(0x69eef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69eefc:{NFSU2_TR(0x69eefc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ef02:{NFSU2_TR(0x69ef02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ef08:{NFSU2_TR(0x69ef08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ef0e:{NFSU2_TR(0x69ef0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ef14:{NFSU2_TR(0x69ef14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ef1a:{NFSU2_TR(0x69ef1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ef20:{NFSU2_TR(0x69ef20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ef26:{NFSU2_TR(0x69ef26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ef2c:{NFSU2_TR(0x69ef2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ef32:{NFSU2_TR(0x69ef32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ef38:{NFSU2_TR(0x69ef38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ef3e:{NFSU2_TR(0x69ef3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ef44:{NFSU2_TR(0x69ef44);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ef4a:{NFSU2_TR(0x69ef4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ef50:{NFSU2_TR(0x69ef50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ef56:{NFSU2_TR(0x69ef56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ef5c:{NFSU2_TR(0x69ef5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ef62:{NFSU2_TR(0x69ef62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ef68:{NFSU2_TR(0x69ef68);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ef6e:{NFSU2_TR(0x69ef6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ef74:{NFSU2_TR(0x69ef74);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ef76:{NFSU2_TR(0x69ef76);
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
B69ef78:{NFSU2_TR(0x69ef78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69ef79:{NFSU2_TR(0x69ef79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69ef7c:L69ef7c:{c.instructions+=1;NFSU2_TR(0x69ef7c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L69ef7e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ef7cu);}goto L69ef7c;}
}
B69ef7e:L69ef7e:{c.instructions+=3;NFSU2_TR(0x69ef7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69ef80:{NFSU2_TR(0x69ef80);
__builtin_memmove((R+4),(R+24),4);
}
B69ef82:{NFSU2_TR(0x69ef82);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ef85ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B69ef85:L69ef85:{c.instructions+=2;NFSU2_TR(0x69ef85);
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
B69ef87:{NFSU2_TR(0x69ef87);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69ef98;}}
}
B69ef89:L69ef89:{c.instructions+=3;NFSU2_TR(0x69ef89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ef8b:{NFSU2_TR(0x69ef8b);
__builtin_memmove((R+4),(R+24),4);
}
B69ef8d:{NFSU2_TR(0x69ef8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ef92ull));
TAIL_STATIC(0x69a609u,69a);
}
B69ef92:L69ef92:{c.instructions+=2;NFSU2_TR(0x69ef92);
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
B69ef94:{NFSU2_TR(0x69ef94);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69ef98;}}
}
B69ef96:L69ef96:{c.instructions+=1;NFSU2_TR(0x69ef96);
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
B69ef98:L69ef98:{c.instructions+=4;NFSU2_TR(0x69ef98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69ef99:{NFSU2_TR(0x69ef99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69ef9a:{NFSU2_TR(0x69ef9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69ef9b:{NFSU2_TR(0x69ef9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69ef9e:L69ef9e:{c.instructions+=14;NFSU2_TR(0x69ef9e);
__builtin_memmove((R+28),(R+28),4);
}
B69efa0:{NFSU2_TR(0x69efa0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69efa1:{NFSU2_TR(0x69efa1);
__builtin_memmove((R+20),(R+16),4);
}
B69efa3:{NFSU2_TR(0x69efa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B69efa6:{NFSU2_TR(0x69efa6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69efa7:{NFSU2_TR(0x69efa7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69efa8:{NFSU2_TR(0x69efa8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69efa9:{NFSU2_TR(0x69efa9);
__builtin_memmove((R+24),(R+4),4);
}
B69efab:{NFSU2_TR(0x69efab);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69efad:{NFSU2_TR(0x69efad);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69efaf:{NFSU2_TR(0x69efaf);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B69efb2:{NFSU2_TR(0x69efb2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69efb5:{NFSU2_TR(0x69efb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69efb8:{NFSU2_TR(0x69efb8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69efcc;}}
}
B69efba:L69efba:{c.instructions+=7;NFSU2_TR(0x69efba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69efbd:{NFSU2_TR(0x69efbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69efc0:{NFSU2_TR(0x69efc0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69efc1:{NFSU2_TR(0x69efc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69efc4:{NFSU2_TR(0x69efc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69efc7:{NFSU2_TR(0x69efc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69efca:{NFSU2_TR(0x69efca);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69efbau);}goto L69efba;}}
}
B69efcc:L69efcc:{c.instructions+=3;NFSU2_TR(0x69efcc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69efce:{NFSU2_TR(0x69efce);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69efd1:{NFSU2_TR(0x69efd1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69efe5;}}
}
B69efd3:L69efd3:{c.instructions+=7;NFSU2_TR(0x69efd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69efd6:{NFSU2_TR(0x69efd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69efd9:{NFSU2_TR(0x69efd9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69efda:{NFSU2_TR(0x69efda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69efdd:{NFSU2_TR(0x69efdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69efe0:{NFSU2_TR(0x69efe0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69efe3:{NFSU2_TR(0x69efe3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69efd3u);}goto L69efd3;}}
}
B69efe5:L69efe5:{c.instructions+=3;NFSU2_TR(0x69efe5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69efe7:{NFSU2_TR(0x69efe7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69efea:{NFSU2_TR(0x69efea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x69f137u,69f);}
}
B69eff0:L69eff0:{c.instructions+=5;NFSU2_TR(0x69eff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69eff3:{NFSU2_TR(0x69eff3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69eff6:{NFSU2_TR(0x69eff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B69effc:{NFSU2_TR(0x69effc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69efff:{NFSU2_TR(0x69efff);
if(r1(R+518)){TAIL_STATIC(0x69f12du,69f);}
TAIL_STATIC(0x69f005u,69f);
}
XIT:NFSU2_TR_EXIT(0x69e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
