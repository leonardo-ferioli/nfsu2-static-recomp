#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_446(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_44a(u8* __restrict R,Cpu& c);
u32 body_44f(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x44e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x44e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_44e(u8* __restrict R,Cpu& c);
u32 page_44e(Cpu& c){return body_44e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_44e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x44e000:goto L44e000;
case 0x44e003:c.instructions+=1;goto B44e003;
case 0x44e008:goto L44e008;
case 0x44e00a:c.instructions+=1;goto B44e00a;
case 0x44e00c:goto L44e00c;
case 0x44e00f:c.instructions+=1;goto B44e00f;
case 0x44e014:goto L44e014;
case 0x44e016:c.instructions+=1;goto B44e016;
case 0x44e018:goto L44e018;
case 0x44e01b:c.instructions+=2;goto B44e01b;
case 0x44e01e:c.instructions+=1;goto B44e01e;
case 0x44e020:goto L44e020;
case 0x44e027:c.instructions+=1;goto B44e027;
case 0x44e029:goto L44e029;
case 0x44e02f:c.instructions+=7;goto B44e02f;
case 0x44e033:c.instructions+=6;goto B44e033;
case 0x44e037:c.instructions+=5;goto B44e037;
case 0x44e03b:c.instructions+=4;goto B44e03b;
case 0x44e041:c.instructions+=3;goto B44e041;
case 0x44e047:c.instructions+=2;goto B44e047;
case 0x44e04b:c.instructions+=1;goto B44e04b;
case 0x44e04d:goto L44e04d;
case 0x44e051:c.instructions+=1;goto B44e051;
case 0x44e055:goto L44e055;
case 0x44e059:c.instructions+=13;goto B44e059;
case 0x44e05c:c.instructions+=12;goto B44e05c;
case 0x44e060:c.instructions+=11;goto B44e060;
case 0x44e064:c.instructions+=10;goto B44e064;
case 0x44e065:c.instructions+=9;goto B44e065;
case 0x44e069:c.instructions+=8;goto B44e069;
case 0x44e06b:c.instructions+=7;goto B44e06b;
case 0x44e06f:c.instructions+=6;goto B44e06f;
case 0x44e073:c.instructions+=5;goto B44e073;
case 0x44e077:c.instructions+=4;goto B44e077;
case 0x44e079:c.instructions+=3;goto B44e079;
case 0x44e07d:c.instructions+=2;goto B44e07d;
case 0x44e07f:c.instructions+=1;goto B44e07f;
case 0x44e084:goto L44e084;
case 0x44e088:c.instructions+=15;goto B44e088;
case 0x44e08e:c.instructions+=14;goto B44e08e;
case 0x44e091:c.instructions+=13;goto B44e091;
case 0x44e092:c.instructions+=12;goto B44e092;
case 0x44e098:c.instructions+=11;goto B44e098;
case 0x44e099:c.instructions+=10;goto B44e099;
case 0x44e09d:c.instructions+=9;goto B44e09d;
case 0x44e0a1:c.instructions+=8;goto B44e0a1;
case 0x44e0a5:c.instructions+=7;goto B44e0a5;
case 0x44e0a8:c.instructions+=6;goto B44e0a8;
case 0x44e0a9:c.instructions+=5;goto B44e0a9;
case 0x44e0ad:c.instructions+=4;goto B44e0ad;
case 0x44e0b1:c.instructions+=3;goto B44e0b1;
case 0x44e0b4:c.instructions+=2;goto B44e0b4;
case 0x44e0b8:c.instructions+=1;goto B44e0b8;
case 0x44e0bd:goto L44e0bd;
case 0x44e0c1:c.instructions+=12;goto B44e0c1;
case 0x44e0c5:c.instructions+=11;goto B44e0c5;
case 0x44e0c9:c.instructions+=10;goto B44e0c9;
case 0x44e0cc:c.instructions+=9;goto B44e0cc;
case 0x44e0d0:c.instructions+=8;goto B44e0d0;
case 0x44e0d4:c.instructions+=7;goto B44e0d4;
case 0x44e0d8:c.instructions+=6;goto B44e0d8;
case 0x44e0dc:c.instructions+=5;goto B44e0dc;
case 0x44e0df:c.instructions+=4;goto B44e0df;
case 0x44e0e3:c.instructions+=3;goto B44e0e3;
case 0x44e0e4:c.instructions+=2;goto B44e0e4;
case 0x44e0e8:c.instructions+=1;goto B44e0e8;
case 0x44e0ed:goto L44e0ed;
case 0x44e0f0:c.instructions+=22;goto B44e0f0;
case 0x44e0f3:c.instructions+=21;goto B44e0f3;
case 0x44e0f6:c.instructions+=20;goto B44e0f6;
case 0x44e0fe:c.instructions+=19;goto B44e0fe;
case 0x44e106:c.instructions+=18;goto B44e106;
case 0x44e10e:c.instructions+=17;goto B44e10e;
case 0x44e111:c.instructions+=16;goto B44e111;
case 0x44e114:c.instructions+=15;goto B44e114;
case 0x44e118:c.instructions+=14;goto B44e118;
case 0x44e11b:c.instructions+=13;goto B44e11b;
case 0x44e121:c.instructions+=12;goto B44e121;
case 0x44e123:c.instructions+=11;goto B44e123;
case 0x44e126:c.instructions+=10;goto B44e126;
case 0x44e129:c.instructions+=9;goto B44e129;
case 0x44e12a:c.instructions+=8;goto B44e12a;
case 0x44e12d:c.instructions+=7;goto B44e12d;
case 0x44e12e:c.instructions+=6;goto B44e12e;
case 0x44e132:c.instructions+=5;goto B44e132;
case 0x44e134:c.instructions+=4;goto B44e134;
case 0x44e135:c.instructions+=3;goto B44e135;
case 0x44e139:c.instructions+=2;goto B44e139;
case 0x44e13d:c.instructions+=1;goto B44e13d;
case 0x44e142:goto L44e142;
case 0x44e145:c.instructions+=4;goto B44e145;
case 0x44e148:c.instructions+=3;goto B44e148;
case 0x44e14c:c.instructions+=2;goto B44e14c;
case 0x44e14d:c.instructions+=1;goto B44e14d;
case 0x44e152:goto L44e152;
case 0x44e155:c.instructions+=10;goto B44e155;
case 0x44e158:c.instructions+=9;goto B44e158;
case 0x44e160:c.instructions+=8;goto B44e160;
case 0x44e164:c.instructions+=7;goto B44e164;
case 0x44e168:c.instructions+=6;goto B44e168;
case 0x44e16b:c.instructions+=5;goto B44e16b;
case 0x44e16e:c.instructions+=4;goto B44e16e;
case 0x44e170:c.instructions+=3;goto B44e170;
case 0x44e172:c.instructions+=2;goto B44e172;
case 0x44e175:c.instructions+=1;goto B44e175;
case 0x44e177:goto L44e177;
case 0x44e17d:goto L44e17d;
case 0x44e184:c.instructions+=1;goto B44e184;
case 0x44e186:goto L44e186;
case 0x44e18a:c.instructions+=3;goto B44e18a;
case 0x44e18b:c.instructions+=2;goto B44e18b;
case 0x44e18d:c.instructions+=1;goto B44e18d;
case 0x44e192:goto L44e192;
case 0x44e195:c.instructions+=2;goto B44e195;
case 0x44e198:c.instructions+=1;goto B44e198;
case 0x44e19a:goto L44e19a;
case 0x44e19d:c.instructions+=1;goto B44e19d;
case 0x44e19f:goto L44e19f;
case 0x44e1a1:c.instructions+=1;goto B44e1a1;
case 0x44e1a3:goto L44e1a3;
case 0x44e1a5:goto L44e1a5;
case 0x44e1a8:c.instructions+=1;goto B44e1a8;
case 0x44e1aa:goto L44e1aa;
case 0x44e1ac:c.instructions+=1;goto B44e1ac;
case 0x44e1b2:goto L44e1b2;
case 0x44e1b5:c.instructions+=53;goto B44e1b5;
case 0x44e1b8:c.instructions+=52;goto B44e1b8;
case 0x44e1bb:c.instructions+=51;goto B44e1bb;
case 0x44e1bd:c.instructions+=50;goto B44e1bd;
case 0x44e1c0:c.instructions+=49;goto B44e1c0;
case 0x44e1c4:c.instructions+=48;goto B44e1c4;
case 0x44e1c7:c.instructions+=47;goto B44e1c7;
case 0x44e1ca:c.instructions+=46;goto B44e1ca;
case 0x44e1cd:c.instructions+=45;goto B44e1cd;
case 0x44e1d0:c.instructions+=44;goto B44e1d0;
case 0x44e1d4:c.instructions+=43;goto B44e1d4;
case 0x44e1d7:c.instructions+=42;goto B44e1d7;
case 0x44e1da:c.instructions+=41;goto B44e1da;
case 0x44e1dd:c.instructions+=40;goto B44e1dd;
case 0x44e1e0:c.instructions+=39;goto B44e1e0;
case 0x44e1e7:c.instructions+=38;goto B44e1e7;
case 0x44e1ea:c.instructions+=37;goto B44e1ea;
case 0x44e1ed:c.instructions+=36;goto B44e1ed;
case 0x44e1f0:c.instructions+=35;goto B44e1f0;
case 0x44e1f2:c.instructions+=34;goto B44e1f2;
case 0x44e1f5:c.instructions+=33;goto B44e1f5;
case 0x44e1f9:c.instructions+=32;goto B44e1f9;
case 0x44e1fc:c.instructions+=31;goto B44e1fc;
case 0x44e1ff:c.instructions+=30;goto B44e1ff;
case 0x44e202:c.instructions+=29;goto B44e202;
case 0x44e204:c.instructions+=28;goto B44e204;
case 0x44e207:c.instructions+=27;goto B44e207;
case 0x44e20b:c.instructions+=26;goto B44e20b;
case 0x44e20e:c.instructions+=25;goto B44e20e;
case 0x44e211:c.instructions+=24;goto B44e211;
case 0x44e214:c.instructions+=23;goto B44e214;
case 0x44e217:c.instructions+=22;goto B44e217;
case 0x44e21b:c.instructions+=21;goto B44e21b;
case 0x44e21e:c.instructions+=20;goto B44e21e;
case 0x44e221:c.instructions+=19;goto B44e221;
case 0x44e224:c.instructions+=18;goto B44e224;
case 0x44e227:c.instructions+=17;goto B44e227;
case 0x44e22e:c.instructions+=16;goto B44e22e;
case 0x44e231:c.instructions+=15;goto B44e231;
case 0x44e234:c.instructions+=14;goto B44e234;
case 0x44e237:c.instructions+=13;goto B44e237;
case 0x44e239:c.instructions+=12;goto B44e239;
case 0x44e23c:c.instructions+=11;goto B44e23c;
case 0x44e240:c.instructions+=10;goto B44e240;
case 0x44e243:c.instructions+=9;goto B44e243;
case 0x44e246:c.instructions+=8;goto B44e246;
case 0x44e249:c.instructions+=7;goto B44e249;
case 0x44e24c:c.instructions+=6;goto B44e24c;
case 0x44e250:c.instructions+=5;goto B44e250;
case 0x44e253:c.instructions+=4;goto B44e253;
case 0x44e256:c.instructions+=3;goto B44e256;
case 0x44e259:c.instructions+=2;goto B44e259;
case 0x44e25c:c.instructions+=1;goto B44e25c;
case 0x44e263:goto L44e263;
case 0x44e266:c.instructions+=1;goto B44e266;
case 0x44e268:goto L44e268;
case 0x44e26d:goto L44e26d;
case 0x44e26e:c.instructions+=5;goto B44e26e;
case 0x44e26f:c.instructions+=4;goto B44e26f;
case 0x44e270:c.instructions+=3;goto B44e270;
case 0x44e272:c.instructions+=2;goto B44e272;
case 0x44e273:c.instructions+=1;goto B44e273;
case 0x44e280:goto L44e280;
case 0x44e282:c.instructions+=13;goto B44e282;
case 0x44e287:c.instructions+=12;goto B44e287;
case 0x44e28d:c.instructions+=11;goto B44e28d;
case 0x44e28e:c.instructions+=10;goto B44e28e;
case 0x44e295:c.instructions+=9;goto B44e295;
case 0x44e296:c.instructions+=8;goto B44e296;
case 0x44e297:c.instructions+=7;goto B44e297;
case 0x44e299:c.instructions+=6;goto B44e299;
case 0x44e29d:c.instructions+=5;goto B44e29d;
case 0x44e2a3:c.instructions+=4;goto B44e2a3;
case 0x44e2a6:c.instructions+=3;goto B44e2a6;
case 0x44e2a7:c.instructions+=2;goto B44e2a7;
case 0x44e2af:c.instructions+=1;goto B44e2af;
case 0x44e2b4:goto L44e2b4;
case 0x44e2b7:c.instructions+=2;goto B44e2b7;
case 0x44e2b8:c.instructions+=1;goto B44e2b8;
case 0x44e2bd:goto L44e2bd;
case 0x44e2c0:c.instructions+=2;goto B44e2c0;
case 0x44e2c1:c.instructions+=1;goto B44e2c1;
case 0x44e2c6:goto L44e2c6;
case 0x44e2c9:c.instructions+=5;goto B44e2c9;
case 0x44e2cc:c.instructions+=4;goto B44e2cc;
case 0x44e2ce:c.instructions+=3;goto B44e2ce;
case 0x44e2d6:c.instructions+=2;goto B44e2d6;
case 0x44e2dc:c.instructions+=1;goto B44e2dc;
case 0x44e2de:goto L44e2de;
case 0x44e2e1:c.instructions+=8;goto B44e2e1;
case 0x44e2e8:c.instructions+=7;goto B44e2e8;
case 0x44e2ee:c.instructions+=6;goto B44e2ee;
case 0x44e2f1:c.instructions+=5;goto B44e2f1;
case 0x44e2f7:c.instructions+=4;goto B44e2f7;
case 0x44e2fa:c.instructions+=3;goto B44e2fa;
case 0x44e2fb:c.instructions+=2;goto B44e2fb;
case 0x44e2fe:c.instructions+=1;goto B44e2fe;
case 0x44e303:goto L44e303;
case 0x44e307:c.instructions+=2;goto B44e307;
case 0x44e308:c.instructions+=1;goto B44e308;
case 0x44e30a:goto L44e30a;
case 0x44e310:goto L44e310;
case 0x44e314:c.instructions+=3;goto B44e314;
case 0x44e31b:c.instructions+=2;goto B44e31b;
case 0x44e31e:c.instructions+=1;goto B44e31e;
case 0x44e320:goto L44e320;
case 0x44e321:c.instructions+=15;goto B44e321;
case 0x44e323:c.instructions+=14;goto B44e323;
case 0x44e326:c.instructions+=13;goto B44e326;
case 0x44e32c:c.instructions+=12;goto B44e32c;
case 0x44e32d:c.instructions+=11;goto B44e32d;
case 0x44e32e:c.instructions+=10;goto B44e32e;
case 0x44e330:c.instructions+=9;goto B44e330;
case 0x44e333:c.instructions+=8;goto B44e333;
case 0x44e334:c.instructions+=7;goto B44e334;
case 0x44e337:c.instructions+=6;goto B44e337;
case 0x44e338:c.instructions+=5;goto B44e338;
case 0x44e33d:c.instructions+=4;goto B44e33d;
case 0x44e33e:c.instructions+=3;goto B44e33e;
case 0x44e345:c.instructions+=2;goto B44e345;
case 0x44e346:c.instructions+=1;goto B44e346;
case 0x44e34b:goto L44e34b;
case 0x44e352:c.instructions+=4;goto B44e352;
case 0x44e353:c.instructions+=3;goto B44e353;
case 0x44e35a:c.instructions+=2;goto B44e35a;
case 0x44e35b:c.instructions+=1;goto B44e35b;
case 0x44e360:goto L44e360;
case 0x44e366:c.instructions+=4;goto B44e366;
case 0x44e36b:c.instructions+=3;goto B44e36b;
case 0x44e36e:c.instructions+=2;goto B44e36e;
case 0x44e36f:c.instructions+=1;goto B44e36f;
case 0x44e375:goto L44e375;
case 0x44e376:c.instructions+=1;goto B44e376;
case 0x44e37c:goto L44e37c;
case 0x44e37f:c.instructions+=26;goto B44e37f;
case 0x44e381:c.instructions+=25;goto B44e381;
case 0x44e384:c.instructions+=24;goto B44e384;
case 0x44e38c:c.instructions+=23;goto B44e38c;
case 0x44e394:c.instructions+=22;goto B44e394;
case 0x44e39c:c.instructions+=21;goto B44e39c;
case 0x44e39f:c.instructions+=20;goto B44e39f;
case 0x44e3a2:c.instructions+=19;goto B44e3a2;
case 0x44e3a5:c.instructions+=18;goto B44e3a5;
case 0x44e3a8:c.instructions+=17;goto B44e3a8;
case 0x44e3ab:c.instructions+=16;goto B44e3ab;
case 0x44e3ae:c.instructions+=15;goto B44e3ae;
case 0x44e3b1:c.instructions+=14;goto B44e3b1;
case 0x44e3b8:c.instructions+=13;goto B44e3b8;
case 0x44e3bb:c.instructions+=12;goto B44e3bb;
case 0x44e3bc:c.instructions+=11;goto B44e3bc;
case 0x44e3c0:c.instructions+=10;goto B44e3c0;
case 0x44e3c7:c.instructions+=9;goto B44e3c7;
case 0x44e3ce:c.instructions+=8;goto B44e3ce;
case 0x44e3d0:c.instructions+=7;goto B44e3d0;
case 0x44e3d7:c.instructions+=6;goto B44e3d7;
case 0x44e3de:c.instructions+=5;goto B44e3de;
case 0x44e3df:c.instructions+=4;goto B44e3df;
case 0x44e3e3:c.instructions+=3;goto B44e3e3;
case 0x44e3ea:c.instructions+=2;goto B44e3ea;
case 0x44e3eb:c.instructions+=1;goto B44e3eb;
case 0x44e3f0:goto L44e3f0;
case 0x44e3f4:c.instructions+=6;goto B44e3f4;
case 0x44e3f5:c.instructions+=5;goto B44e3f5;
case 0x44e3fc:c.instructions+=4;goto B44e3fc;
case 0x44e3fd:c.instructions+=3;goto B44e3fd;
case 0x44e404:c.instructions+=2;goto B44e404;
case 0x44e405:c.instructions+=1;goto B44e405;
case 0x44e40a:goto L44e40a;
case 0x44e411:c.instructions+=4;goto B44e411;
case 0x44e412:c.instructions+=3;goto B44e412;
case 0x44e419:c.instructions+=2;goto B44e419;
case 0x44e41a:c.instructions+=1;goto B44e41a;
case 0x44e41f:goto L44e41f;
case 0x44e426:c.instructions+=4;goto B44e426;
case 0x44e427:c.instructions+=3;goto B44e427;
case 0x44e42e:c.instructions+=2;goto B44e42e;
case 0x44e42f:c.instructions+=1;goto B44e42f;
case 0x44e434:goto L44e434;
case 0x44e43b:c.instructions+=4;goto B44e43b;
case 0x44e43c:c.instructions+=3;goto B44e43c;
case 0x44e443:c.instructions+=2;goto B44e443;
case 0x44e444:c.instructions+=1;goto B44e444;
case 0x44e449:goto L44e449;
case 0x44e450:c.instructions+=35;goto B44e450;
case 0x44e457:c.instructions+=34;goto B44e457;
case 0x44e45e:c.instructions+=33;goto B44e45e;
case 0x44e465:c.instructions+=32;goto B44e465;
case 0x44e46c:c.instructions+=31;goto B44e46c;
case 0x44e473:c.instructions+=30;goto B44e473;
case 0x44e47a:c.instructions+=29;goto B44e47a;
case 0x44e481:c.instructions+=28;goto B44e481;
case 0x44e488:c.instructions+=27;goto B44e488;
case 0x44e48f:c.instructions+=26;goto B44e48f;
case 0x44e496:c.instructions+=25;goto B44e496;
case 0x44e49d:c.instructions+=24;goto B44e49d;
case 0x44e4a0:c.instructions+=23;goto B44e4a0;
case 0x44e4a7:c.instructions+=22;goto B44e4a7;
case 0x44e4ae:c.instructions+=21;goto B44e4ae;
case 0x44e4b5:c.instructions+=20;goto B44e4b5;
case 0x44e4bc:c.instructions+=19;goto B44e4bc;
case 0x44e4bf:c.instructions+=18;goto B44e4bf;
case 0x44e4ca:c.instructions+=17;goto B44e4ca;
case 0x44e4d5:c.instructions+=16;goto B44e4d5;
case 0x44e4dc:c.instructions+=15;goto B44e4dc;
case 0x44e4e3:c.instructions+=14;goto B44e4e3;
case 0x44e4ee:c.instructions+=13;goto B44e4ee;
case 0x44e4f1:c.instructions+=12;goto B44e4f1;
case 0x44e4f4:c.instructions+=11;goto B44e4f4;
case 0x44e4f6:c.instructions+=10;goto B44e4f6;
case 0x44e4f8:c.instructions+=9;goto B44e4f8;
case 0x44e4ff:c.instructions+=8;goto B44e4ff;
case 0x44e506:c.instructions+=7;goto B44e506;
case 0x44e507:c.instructions+=6;goto B44e507;
case 0x44e50e:c.instructions+=5;goto B44e50e;
case 0x44e515:c.instructions+=4;goto B44e515;
case 0x44e516:c.instructions+=3;goto B44e516;
case 0x44e51d:c.instructions+=2;goto B44e51d;
case 0x44e528:c.instructions+=1;goto B44e528;
case 0x44e52d:goto L44e52d;
case 0x44e530:c.instructions+=6;goto B44e530;
case 0x44e537:c.instructions+=5;goto B44e537;
case 0x44e538:c.instructions+=4;goto B44e538;
case 0x44e53c:c.instructions+=3;goto B44e53c;
case 0x44e53d:c.instructions+=2;goto B44e53d;
case 0x44e53f:c.instructions+=1;goto B44e53f;
case 0x44e544:goto L44e544;
case 0x44e548:c.instructions+=5;goto B44e548;
case 0x44e549:c.instructions+=4;goto B44e549;
case 0x44e54d:c.instructions+=3;goto B44e54d;
case 0x44e54e:c.instructions+=2;goto B44e54e;
case 0x44e553:c.instructions+=1;goto B44e553;
case 0x44e558:goto L44e558;
case 0x44e55f:c.instructions+=5;goto B44e55f;
case 0x44e560:c.instructions+=4;goto B44e560;
case 0x44e567:c.instructions+=3;goto B44e567;
case 0x44e568:c.instructions+=2;goto B44e568;
case 0x44e56d:c.instructions+=1;goto B44e56d;
case 0x44e572:goto L44e572;
case 0x44e575:c.instructions+=7;goto B44e575;
case 0x44e578:c.instructions+=6;goto B44e578;
case 0x44e579:c.instructions+=5;goto B44e579;
case 0x44e580:c.instructions+=4;goto B44e580;
case 0x44e581:c.instructions+=3;goto B44e581;
case 0x44e585:c.instructions+=2;goto B44e585;
case 0x44e586:c.instructions+=1;goto B44e586;
case 0x44e58b:goto L44e58b;
case 0x44e58f:c.instructions+=15;goto B44e58f;
case 0x44e593:c.instructions+=14;goto B44e593;
case 0x44e59a:c.instructions+=13;goto B44e59a;
case 0x44e59b:c.instructions+=12;goto B44e59b;
case 0x44e59f:c.instructions+=11;goto B44e59f;
case 0x44e5a3:c.instructions+=10;goto B44e5a3;
case 0x44e5a7:c.instructions+=9;goto B44e5a7;
case 0x44e5a8:c.instructions+=8;goto B44e5a8;
case 0x44e5ac:c.instructions+=7;goto B44e5ac;
case 0x44e5b0:c.instructions+=6;goto B44e5b0;
case 0x44e5b1:c.instructions+=5;goto B44e5b1;
case 0x44e5b5:c.instructions+=4;goto B44e5b5;
case 0x44e5b9:c.instructions+=3;goto B44e5b9;
case 0x44e5bd:c.instructions+=2;goto B44e5bd;
case 0x44e5c1:c.instructions+=1;goto B44e5c1;
case 0x44e5c6:goto L44e5c6;
case 0x44e5ca:c.instructions+=18;goto B44e5ca;
case 0x44e5ce:c.instructions+=17;goto B44e5ce;
case 0x44e5d5:c.instructions+=16;goto B44e5d5;
case 0x44e5d6:c.instructions+=15;goto B44e5d6;
case 0x44e5dd:c.instructions+=14;goto B44e5dd;
case 0x44e5e1:c.instructions+=13;goto B44e5e1;
case 0x44e5e2:c.instructions+=12;goto B44e5e2;
case 0x44e5e6:c.instructions+=11;goto B44e5e6;
case 0x44e5ed:c.instructions+=10;goto B44e5ed;
case 0x44e5f1:c.instructions+=9;goto B44e5f1;
case 0x44e5f2:c.instructions+=8;goto B44e5f2;
case 0x44e5fa:c.instructions+=7;goto B44e5fa;
case 0x44e602:c.instructions+=6;goto B44e602;
case 0x44e606:c.instructions+=5;goto B44e606;
case 0x44e60e:c.instructions+=4;goto B44e60e;
case 0x44e612:c.instructions+=3;goto B44e612;
case 0x44e616:c.instructions+=2;goto B44e616;
case 0x44e61a:c.instructions+=1;goto B44e61a;
case 0x44e61f:goto L44e61f;
case 0x44e623:c.instructions+=6;goto B44e623;
case 0x44e624:c.instructions+=5;goto B44e624;
case 0x44e62b:c.instructions+=4;goto B44e62b;
case 0x44e62c:c.instructions+=3;goto B44e62c;
case 0x44e633:c.instructions+=2;goto B44e633;
case 0x44e634:c.instructions+=1;goto B44e634;
case 0x44e639:goto L44e639;
case 0x44e63c:c.instructions+=7;goto B44e63c;
case 0x44e63f:c.instructions+=6;goto B44e63f;
case 0x44e640:c.instructions+=5;goto B44e640;
case 0x44e647:c.instructions+=4;goto B44e647;
case 0x44e648:c.instructions+=3;goto B44e648;
case 0x44e64f:c.instructions+=2;goto B44e64f;
case 0x44e650:c.instructions+=1;goto B44e650;
case 0x44e655:goto L44e655;
case 0x44e65c:c.instructions+=6;goto B44e65c;
case 0x44e663:c.instructions+=5;goto B44e663;
case 0x44e666:c.instructions+=4;goto B44e666;
case 0x44e66c:c.instructions+=3;goto B44e66c;
case 0x44e66e:c.instructions+=2;goto B44e66e;
case 0x44e671:c.instructions+=1;goto B44e671;
case 0x44e673:goto L44e673;
case 0x44e67a:c.instructions+=6;goto B44e67a;
case 0x44e67b:c.instructions+=5;goto B44e67b;
case 0x44e682:c.instructions+=4;goto B44e682;
case 0x44e683:c.instructions+=3;goto B44e683;
case 0x44e68a:c.instructions+=2;goto B44e68a;
case 0x44e68b:c.instructions+=1;goto B44e68b;
case 0x44e690:goto L44e690;
case 0x44e697:c.instructions+=7;goto B44e697;
case 0x44e698:c.instructions+=6;goto B44e698;
case 0x44e69f:c.instructions+=5;goto B44e69f;
case 0x44e6a0:c.instructions+=4;goto B44e6a0;
case 0x44e6a4:c.instructions+=3;goto B44e6a4;
case 0x44e6a5:c.instructions+=2;goto B44e6a5;
case 0x44e6b0:c.instructions+=1;goto B44e6b0;
case 0x44e6b5:goto L44e6b5;
case 0x44e6b8:goto L44e6b8;
case 0x44e6bf:c.instructions+=1;goto B44e6bf;
case 0x44e6c4:goto L44e6c4;
case 0x44e6c7:c.instructions+=4;goto B44e6c7;
case 0x44e6c9:c.instructions+=3;goto B44e6c9;
case 0x44e6d0:c.instructions+=2;goto B44e6d0;
case 0x44e6d1:c.instructions+=1;goto B44e6d1;
case 0x44e6d6:goto L44e6d6;
case 0x44e6dd:c.instructions+=4;goto B44e6dd;
case 0x44e6de:c.instructions+=3;goto B44e6de;
case 0x44e6e5:c.instructions+=2;goto B44e6e5;
case 0x44e6e6:c.instructions+=1;goto B44e6e6;
case 0x44e6eb:goto L44e6eb;
case 0x44e6ee:c.instructions+=6;goto B44e6ee;
case 0x44e6f5:c.instructions+=5;goto B44e6f5;
case 0x44e6f6:c.instructions+=4;goto B44e6f6;
case 0x44e6fd:c.instructions+=3;goto B44e6fd;
case 0x44e6fe:c.instructions+=2;goto B44e6fe;
case 0x44e700:c.instructions+=1;goto B44e700;
case 0x44e705:goto L44e705;
case 0x44e70c:c.instructions+=5;goto B44e70c;
case 0x44e70d:c.instructions+=4;goto B44e70d;
case 0x44e714:c.instructions+=3;goto B44e714;
case 0x44e715:c.instructions+=2;goto B44e715;
case 0x44e71a:c.instructions+=1;goto B44e71a;
case 0x44e71f:goto L44e71f;
case 0x44e722:c.instructions+=6;goto B44e722;
case 0x44e725:c.instructions+=5;goto B44e725;
case 0x44e728:c.instructions+=4;goto B44e728;
case 0x44e729:c.instructions+=3;goto B44e729;
case 0x44e72c:c.instructions+=2;goto B44e72c;
case 0x44e72d:c.instructions+=1;goto B44e72d;
case 0x44e732:goto L44e732;
case 0x44e739:c.instructions+=11;goto B44e739;
case 0x44e73d:c.instructions+=10;goto B44e73d;
case 0x44e73e:c.instructions+=9;goto B44e73e;
case 0x44e745:c.instructions+=8;goto B44e745;
case 0x44e749:c.instructions+=7;goto B44e749;
case 0x44e74a:c.instructions+=6;goto B44e74a;
case 0x44e74e:c.instructions+=5;goto B44e74e;
case 0x44e74f:c.instructions+=4;goto B44e74f;
case 0x44e757:c.instructions+=3;goto B44e757;
case 0x44e75f:c.instructions+=2;goto B44e75f;
case 0x44e767:c.instructions+=1;goto B44e767;
case 0x44e76c:goto L44e76c;
case 0x44e771:c.instructions+=5;goto B44e771;
case 0x44e778:c.instructions+=4;goto B44e778;
case 0x44e779:c.instructions+=3;goto B44e779;
case 0x44e780:c.instructions+=2;goto B44e780;
case 0x44e781:c.instructions+=1;goto B44e781;
case 0x44e786:goto L44e786;
case 0x44e78a:c.instructions+=9;goto B44e78a;
case 0x44e78d:c.instructions+=8;goto B44e78d;
case 0x44e78f:c.instructions+=7;goto B44e78f;
case 0x44e792:c.instructions+=6;goto B44e792;
case 0x44e795:c.instructions+=5;goto B44e795;
case 0x44e798:c.instructions+=4;goto B44e798;
case 0x44e799:c.instructions+=3;goto B44e799;
case 0x44e79d:c.instructions+=2;goto B44e79d;
case 0x44e79e:c.instructions+=1;goto B44e79e;
case 0x44e7a3:goto L44e7a3;
case 0x44e7a7:c.instructions+=12;goto B44e7a7;
case 0x44e7ab:c.instructions+=11;goto B44e7ab;
case 0x44e7ae:c.instructions+=10;goto B44e7ae;
case 0x44e7b2:c.instructions+=9;goto B44e7b2;
case 0x44e7b6:c.instructions+=8;goto B44e7b6;
case 0x44e7ba:c.instructions+=7;goto B44e7ba;
case 0x44e7be:c.instructions+=6;goto B44e7be;
case 0x44e7c2:c.instructions+=5;goto B44e7c2;
case 0x44e7c6:c.instructions+=4;goto B44e7c6;
case 0x44e7ca:c.instructions+=3;goto B44e7ca;
case 0x44e7cc:c.instructions+=2;goto B44e7cc;
case 0x44e7cf:c.instructions+=1;goto B44e7cf;
case 0x44e7d1:goto L44e7d1;
case 0x44e7d3:c.instructions+=1;goto B44e7d3;
case 0x44e7d7:goto L44e7d7;
case 0x44e7db:c.instructions+=24;goto B44e7db;
case 0x44e7e2:c.instructions+=23;goto B44e7e2;
case 0x44e7e6:c.instructions+=22;goto B44e7e6;
case 0x44e7e7:c.instructions+=21;goto B44e7e7;
case 0x44e7eb:c.instructions+=20;goto B44e7eb;
case 0x44e7f2:c.instructions+=19;goto B44e7f2;
case 0x44e7f3:c.instructions+=18;goto B44e7f3;
case 0x44e7fa:c.instructions+=17;goto B44e7fa;
case 0x44e7fe:c.instructions+=16;goto B44e7fe;
case 0x44e802:c.instructions+=15;goto B44e802;
case 0x44e809:c.instructions+=14;goto B44e809;
case 0x44e80d:c.instructions+=13;goto B44e80d;
case 0x44e80f:c.instructions+=12;goto B44e80f;
case 0x44e816:c.instructions+=11;goto B44e816;
case 0x44e81a:c.instructions+=10;goto B44e81a;
case 0x44e81e:c.instructions+=9;goto B44e81e;
case 0x44e822:c.instructions+=8;goto B44e822;
case 0x44e826:c.instructions+=7;goto B44e826;
case 0x44e82a:c.instructions+=6;goto B44e82a;
case 0x44e82e:c.instructions+=5;goto B44e82e;
case 0x44e835:c.instructions+=4;goto B44e835;
case 0x44e837:c.instructions+=3;goto B44e837;
case 0x44e83b:c.instructions+=2;goto B44e83b;
case 0x44e83d:c.instructions+=1;goto B44e83d;
case 0x44e842:goto L44e842;
case 0x44e846:c.instructions+=4;goto B44e846;
case 0x44e847:c.instructions+=3;goto B44e847;
case 0x44e84b:c.instructions+=2;goto B44e84b;
case 0x44e84c:c.instructions+=1;goto B44e84c;
case 0x44e851:goto L44e851;
case 0x44e855:c.instructions+=11;goto B44e855;
case 0x44e85c:c.instructions+=10;goto B44e85c;
case 0x44e860:c.instructions+=9;goto B44e860;
case 0x44e867:c.instructions+=8;goto B44e867;
case 0x44e869:c.instructions+=7;goto B44e869;
case 0x44e86d:c.instructions+=6;goto B44e86d;
case 0x44e874:c.instructions+=5;goto B44e874;
case 0x44e876:c.instructions+=4;goto B44e876;
case 0x44e87a:c.instructions+=3;goto B44e87a;
case 0x44e87e:c.instructions+=2;goto B44e87e;
case 0x44e87f:c.instructions+=1;goto B44e87f;
case 0x44e884:goto L44e884;
case 0x44e88b:c.instructions+=5;goto B44e88b;
case 0x44e892:c.instructions+=4;goto B44e892;
case 0x44e897:c.instructions+=3;goto B44e897;
case 0x44e89a:c.instructions+=2;goto B44e89a;
case 0x44e89c:c.instructions+=1;goto B44e89c;
case 0x44e8a1:goto L44e8a1;
case 0x44e8a3:c.instructions+=2;goto B44e8a3;
case 0x44e8a6:c.instructions+=1;goto B44e8a6;
case 0x44e8ac:goto L44e8ac;
case 0x44e8b3:c.instructions+=46;goto B44e8b3;
case 0x44e8b5:c.instructions+=45;goto B44e8b5;
case 0x44e8b9:c.instructions+=44;goto B44e8b9;
case 0x44e8c0:c.instructions+=43;goto B44e8c0;
case 0x44e8c2:c.instructions+=42;goto B44e8c2;
case 0x44e8c6:c.instructions+=41;goto B44e8c6;
case 0x44e8cd:c.instructions+=40;goto B44e8cd;
case 0x44e8cf:c.instructions+=39;goto B44e8cf;
case 0x44e8d3:c.instructions+=38;goto B44e8d3;
case 0x44e8d7:c.instructions+=37;goto B44e8d7;
case 0x44e8db:c.instructions+=36;goto B44e8db;
case 0x44e8df:c.instructions+=35;goto B44e8df;
case 0x44e8e3:c.instructions+=34;goto B44e8e3;
case 0x44e8e7:c.instructions+=33;goto B44e8e7;
case 0x44e8eb:c.instructions+=32;goto B44e8eb;
case 0x44e8f2:c.instructions+=31;goto B44e8f2;
case 0x44e8f4:c.instructions+=30;goto B44e8f4;
case 0x44e8f6:c.instructions+=29;goto B44e8f6;
case 0x44e8fd:c.instructions+=28;goto B44e8fd;
case 0x44e904:c.instructions+=27;goto B44e904;
case 0x44e906:c.instructions+=26;goto B44e906;
case 0x44e908:c.instructions+=25;goto B44e908;
case 0x44e90a:c.instructions+=24;goto B44e90a;
case 0x44e90c:c.instructions+=23;goto B44e90c;
case 0x44e90e:c.instructions+=22;goto B44e90e;
case 0x44e912:c.instructions+=21;goto B44e912;
case 0x44e918:c.instructions+=20;goto B44e918;
case 0x44e91c:c.instructions+=19;goto B44e91c;
case 0x44e923:c.instructions+=18;goto B44e923;
case 0x44e925:c.instructions+=17;goto B44e925;
case 0x44e92c:c.instructions+=16;goto B44e92c;
case 0x44e933:c.instructions+=15;goto B44e933;
case 0x44e93a:c.instructions+=14;goto B44e93a;
case 0x44e941:c.instructions+=13;goto B44e941;
case 0x44e948:c.instructions+=12;goto B44e948;
case 0x44e94f:c.instructions+=11;goto B44e94f;
case 0x44e953:c.instructions+=10;goto B44e953;
case 0x44e955:c.instructions+=9;goto B44e955;
case 0x44e959:c.instructions+=8;goto B44e959;
case 0x44e95b:c.instructions+=7;goto B44e95b;
case 0x44e95d:c.instructions+=6;goto B44e95d;
case 0x44e961:c.instructions+=5;goto B44e961;
case 0x44e963:c.instructions+=4;goto B44e963;
case 0x44e96a:c.instructions+=3;goto B44e96a;
case 0x44e971:c.instructions+=2;goto B44e971;
case 0x44e972:c.instructions+=1;goto B44e972;
case 0x44e977:goto L44e977;
case 0x44e97c:c.instructions+=3;goto B44e97c;
case 0x44e97d:c.instructions+=2;goto B44e97d;
case 0x44e97f:c.instructions+=1;goto B44e97f;
case 0x44e984:goto L44e984;
case 0x44e98b:c.instructions+=4;goto B44e98b;
case 0x44e98e:c.instructions+=3;goto B44e98e;
case 0x44e992:c.instructions+=2;goto B44e992;
case 0x44e995:c.instructions+=1;goto B44e995;
case 0x44e99a:goto L44e99a;
case 0x44e9a1:c.instructions+=13;goto B44e9a1;
case 0x44e9a3:c.instructions+=12;goto B44e9a3;
case 0x44e9a7:c.instructions+=11;goto B44e9a7;
case 0x44e9ab:c.instructions+=10;goto B44e9ab;
case 0x44e9af:c.instructions+=9;goto B44e9af;
case 0x44e9b3:c.instructions+=8;goto B44e9b3;
case 0x44e9b7:c.instructions+=7;goto B44e9b7;
case 0x44e9b8:c.instructions+=6;goto B44e9b8;
case 0x44e9b9:c.instructions+=5;goto B44e9b9;
case 0x44e9bb:c.instructions+=4;goto B44e9bb;
case 0x44e9bc:c.instructions+=3;goto B44e9bc;
case 0x44e9c0:c.instructions+=2;goto B44e9c0;
case 0x44e9c1:c.instructions+=1;goto B44e9c1;
case 0x44e9c6:goto L44e9c6;
case 0x44e9cd:c.instructions+=13;goto B44e9cd;
case 0x44e9d1:c.instructions+=12;goto B44e9d1;
case 0x44e9d8:c.instructions+=11;goto B44e9d8;
case 0x44e9dc:c.instructions+=10;goto B44e9dc;
case 0x44e9e3:c.instructions+=9;goto B44e9e3;
case 0x44e9e4:c.instructions+=8;goto B44e9e4;
case 0x44e9e8:c.instructions+=7;goto B44e9e8;
case 0x44e9ef:c.instructions+=6;goto B44e9ef;
case 0x44e9f6:c.instructions+=5;goto B44e9f6;
case 0x44e9f8:c.instructions+=4;goto B44e9f8;
case 0x44e9fc:c.instructions+=3;goto B44e9fc;
case 0x44ea03:c.instructions+=2;goto B44ea03;
case 0x44ea07:c.instructions+=1;goto B44ea07;
case 0x44ea0c:goto L44ea0c;
case 0x44ea0d:c.instructions+=2;goto B44ea0d;
case 0x44ea11:c.instructions+=1;goto B44ea11;
case 0x44ea16:goto L44ea16;
case 0x44ea1a:c.instructions+=8;goto B44ea1a;
case 0x44ea1d:c.instructions+=7;goto B44ea1d;
case 0x44ea21:c.instructions+=6;goto B44ea21;
case 0x44ea25:c.instructions+=5;goto B44ea25;
case 0x44ea29:c.instructions+=4;goto B44ea29;
case 0x44ea2c:c.instructions+=3;goto B44ea2c;
case 0x44ea2d:c.instructions+=2;goto B44ea2d;
case 0x44ea2e:c.instructions+=1;goto B44ea2e;
case 0x44ea33:goto L44ea33;
case 0x44ea37:c.instructions+=26;goto B44ea37;
case 0x44ea3b:c.instructions+=25;goto B44ea3b;
case 0x44ea3c:c.instructions+=24;goto B44ea3c;
case 0x44ea40:c.instructions+=23;goto B44ea40;
case 0x44ea41:c.instructions+=22;goto B44ea41;
case 0x44ea45:c.instructions+=21;goto B44ea45;
case 0x44ea49:c.instructions+=20;goto B44ea49;
case 0x44ea4d:c.instructions+=19;goto B44ea4d;
case 0x44ea4e:c.instructions+=18;goto B44ea4e;
case 0x44ea52:c.instructions+=17;goto B44ea52;
case 0x44ea56:c.instructions+=16;goto B44ea56;
case 0x44ea5d:c.instructions+=15;goto B44ea5d;
case 0x44ea61:c.instructions+=14;goto B44ea61;
case 0x44ea65:c.instructions+=13;goto B44ea65;
case 0x44ea69:c.instructions+=12;goto B44ea69;
case 0x44ea6d:c.instructions+=11;goto B44ea6d;
case 0x44ea71:c.instructions+=10;goto B44ea71;
case 0x44ea75:c.instructions+=9;goto B44ea75;
case 0x44ea79:c.instructions+=8;goto B44ea79;
case 0x44ea7d:c.instructions+=7;goto B44ea7d;
case 0x44ea84:c.instructions+=6;goto B44ea84;
case 0x44ea8b:c.instructions+=5;goto B44ea8b;
case 0x44ea8d:c.instructions+=4;goto B44ea8d;
case 0x44ea91:c.instructions+=3;goto B44ea91;
case 0x44ea95:c.instructions+=2;goto B44ea95;
case 0x44ea99:c.instructions+=1;goto B44ea99;
case 0x44ea9e:goto L44ea9e;
case 0x44eaa2:c.instructions+=12;goto B44eaa2;
case 0x44eaa5:c.instructions+=11;goto B44eaa5;
case 0x44eaa9:c.instructions+=10;goto B44eaa9;
case 0x44eaad:c.instructions+=9;goto B44eaad;
case 0x44eab1:c.instructions+=8;goto B44eab1;
case 0x44eab5:c.instructions+=7;goto B44eab5;
case 0x44eab9:c.instructions+=6;goto B44eab9;
case 0x44eac0:c.instructions+=5;goto B44eac0;
case 0x44eac7:c.instructions+=4;goto B44eac7;
case 0x44eac9:c.instructions+=3;goto B44eac9;
case 0x44eacd:c.instructions+=2;goto B44eacd;
case 0x44ead1:c.instructions+=1;goto B44ead1;
case 0x44ead5:goto L44ead5;
case 0x44ead9:c.instructions+=6;goto B44ead9;
case 0x44eada:c.instructions+=5;goto B44eada;
case 0x44eae1:c.instructions+=4;goto B44eae1;
case 0x44eae2:c.instructions+=3;goto B44eae2;
case 0x44eae6:c.instructions+=2;goto B44eae6;
case 0x44eae7:c.instructions+=1;goto B44eae7;
case 0x44eaec:goto L44eaec;
case 0x44eaf0:c.instructions+=6;goto B44eaf0;
case 0x44eaf1:c.instructions+=5;goto B44eaf1;
case 0x44eaf8:c.instructions+=4;goto B44eaf8;
case 0x44eaf9:c.instructions+=3;goto B44eaf9;
case 0x44eafd:c.instructions+=2;goto B44eafd;
case 0x44eafe:c.instructions+=1;goto B44eafe;
case 0x44eb03:goto L44eb03;
case 0x44eb0a:c.instructions+=1;goto B44eb0a;
case 0x44eb0d:goto L44eb0d;
case 0x44eb10:c.instructions+=5;goto B44eb10;
case 0x44eb13:c.instructions+=4;goto B44eb13;
case 0x44eb15:c.instructions+=3;goto B44eb15;
case 0x44eb17:c.instructions+=2;goto B44eb17;
case 0x44eb1a:c.instructions+=1;goto B44eb1a;
case 0x44eb1c:goto L44eb1c;
case 0x44eb22:goto L44eb22;
case 0x44eb25:c.instructions+=3;goto B44eb25;
case 0x44eb29:c.instructions+=2;goto B44eb29;
case 0x44eb2a:c.instructions+=1;goto B44eb2a;
case 0x44eb2f:goto L44eb2f;
case 0x44eb32:c.instructions+=3;goto B44eb32;
case 0x44eb36:c.instructions+=2;goto B44eb36;
case 0x44eb37:c.instructions+=1;goto B44eb37;
case 0x44eb3c:goto L44eb3c;
case 0x44eb3f:c.instructions+=2;goto B44eb3f;
case 0x44eb41:c.instructions+=1;goto B44eb41;
case 0x44eb43:goto L44eb43;
case 0x44eb4a:c.instructions+=3;goto B44eb4a;
case 0x44eb4b:c.instructions+=2;goto B44eb4b;
case 0x44eb4c:c.instructions+=1;goto B44eb4c;
case 0x44eb51:goto L44eb51;
case 0x44eb54:goto L44eb54;
case 0x44eb57:c.instructions+=2;goto B44eb57;
case 0x44eb59:c.instructions+=1;goto B44eb59;
case 0x44eb5b:goto L44eb5b;
case 0x44eb62:c.instructions+=3;goto B44eb62;
case 0x44eb63:c.instructions+=2;goto B44eb63;
case 0x44eb64:c.instructions+=1;goto B44eb64;
case 0x44eb69:goto L44eb69;
case 0x44eb6c:goto L44eb6c;
case 0x44eb6f:c.instructions+=2;goto B44eb6f;
case 0x44eb71:c.instructions+=1;goto B44eb71;
case 0x44eb73:goto L44eb73;
case 0x44eb7a:c.instructions+=3;goto B44eb7a;
case 0x44eb7b:c.instructions+=2;goto B44eb7b;
case 0x44eb7c:c.instructions+=1;goto B44eb7c;
case 0x44eb81:goto L44eb81;
case 0x44eb84:goto L44eb84;
case 0x44eb87:c.instructions+=2;goto B44eb87;
case 0x44eb89:c.instructions+=1;goto B44eb89;
case 0x44eb8b:goto L44eb8b;
case 0x44eb92:c.instructions+=3;goto B44eb92;
case 0x44eb93:c.instructions+=2;goto B44eb93;
case 0x44eb94:c.instructions+=1;goto B44eb94;
case 0x44eb99:goto L44eb99;
case 0x44eb9c:goto L44eb9c;
case 0x44eb9d:c.instructions+=5;goto B44eb9d;
case 0x44eb9e:c.instructions+=4;goto B44eb9e;
case 0x44eb9f:c.instructions+=3;goto B44eb9f;
case 0x44eba1:c.instructions+=2;goto B44eba1;
case 0x44eba2:c.instructions+=1;goto B44eba2;
case 0x44ebb0:goto L44ebb0;
case 0x44ebb1:c.instructions+=8;goto B44ebb1;
case 0x44ebb3:c.instructions+=7;goto B44ebb3;
case 0x44ebb6:c.instructions+=6;goto B44ebb6;
case 0x44ebbc:c.instructions+=5;goto B44ebbc;
case 0x44ebbd:c.instructions+=4;goto B44ebbd;
case 0x44ebbf:c.instructions+=3;goto B44ebbf;
case 0x44ebc0:c.instructions+=2;goto B44ebc0;
case 0x44ebc5:c.instructions+=1;goto B44ebc5;
case 0x44ebca:goto L44ebca;
case 0x44ebcc:c.instructions+=1;goto B44ebcc;
case 0x44ebd2:goto L44ebd2;
case 0x44ebd5:c.instructions+=22;goto B44ebd5;
case 0x44ebdb:c.instructions+=21;goto B44ebdb;
case 0x44ebe1:c.instructions+=20;goto B44ebe1;
case 0x44ebe4:c.instructions+=19;goto B44ebe4;
case 0x44ebe7:c.instructions+=18;goto B44ebe7;
case 0x44ebe9:c.instructions+=17;goto B44ebe9;
case 0x44ebec:c.instructions+=16;goto B44ebec;
case 0x44ebf2:c.instructions+=15;goto B44ebf2;
case 0x44ebf5:c.instructions+=14;goto B44ebf5;
case 0x44ebfb:c.instructions+=13;goto B44ebfb;
case 0x44ebfe:c.instructions+=12;goto B44ebfe;
case 0x44ec00:c.instructions+=11;goto B44ec00;
case 0x44ec03:c.instructions+=10;goto B44ec03;
case 0x44ec05:c.instructions+=9;goto B44ec05;
case 0x44ec0c:c.instructions+=8;goto B44ec0c;
case 0x44ec0d:c.instructions+=7;goto B44ec0d;
case 0x44ec10:c.instructions+=6;goto B44ec10;
case 0x44ec16:c.instructions+=5;goto B44ec16;
case 0x44ec18:c.instructions+=4;goto B44ec18;
case 0x44ec1f:c.instructions+=3;goto B44ec1f;
case 0x44ec20:c.instructions+=2;goto B44ec20;
case 0x44ec22:c.instructions+=1;goto B44ec22;
case 0x44ec27:goto L44ec27;
case 0x44ec2c:c.instructions+=2;goto B44ec2c;
case 0x44ec2e:c.instructions+=1;goto B44ec2e;
case 0x44ec30:goto L44ec30;
case 0x44ec36:c.instructions+=2;goto B44ec36;
case 0x44ec3a:c.instructions+=1;goto B44ec3a;
case 0x44ec3c:goto L44ec3c;
case 0x44ec42:c.instructions+=1;goto B44ec42;
case 0x44ec46:goto L44ec46;
case 0x44ec4a:c.instructions+=5;goto B44ec4a;
case 0x44ec4d:c.instructions+=4;goto B44ec4d;
case 0x44ec4f:c.instructions+=3;goto B44ec4f;
case 0x44ec51:c.instructions+=2;goto B44ec51;
case 0x44ec52:c.instructions+=1;goto B44ec52;
case 0x44ec57:goto L44ec57;
case 0x44ec5a:c.instructions+=4;goto B44ec5a;
case 0x44ec5c:c.instructions+=3;goto B44ec5c;
case 0x44ec5e:c.instructions+=2;goto B44ec5e;
case 0x44ec5f:c.instructions+=1;goto B44ec5f;
case 0x44ec64:goto L44ec64;
case 0x44ec67:c.instructions+=4;goto B44ec67;
case 0x44ec69:c.instructions+=3;goto B44ec69;
case 0x44ec6b:c.instructions+=2;goto B44ec6b;
case 0x44ec6c:c.instructions+=1;goto B44ec6c;
case 0x44ec71:goto L44ec71;
case 0x44ec74:c.instructions+=23;goto B44ec74;
case 0x44ec7c:c.instructions+=22;goto B44ec7c;
case 0x44ec84:c.instructions+=21;goto B44ec84;
case 0x44ec8c:c.instructions+=20;goto B44ec8c;
case 0x44ec8f:c.instructions+=19;goto B44ec8f;
case 0x44ec92:c.instructions+=18;goto B44ec92;
case 0x44ec94:c.instructions+=17;goto B44ec94;
case 0x44ec98:c.instructions+=16;goto B44ec98;
case 0x44ec9c:c.instructions+=15;goto B44ec9c;
case 0x44ec9f:c.instructions+=14;goto B44ec9f;
case 0x44eca3:c.instructions+=13;goto B44eca3;
case 0x44eca5:c.instructions+=12;goto B44eca5;
case 0x44eca8:c.instructions+=11;goto B44eca8;
case 0x44ecac:c.instructions+=10;goto B44ecac;
case 0x44ecaf:c.instructions+=9;goto B44ecaf;
case 0x44ecb0:c.instructions+=8;goto B44ecb0;
case 0x44ecb7:c.instructions+=7;goto B44ecb7;
case 0x44ecbb:c.instructions+=6;goto B44ecbb;
case 0x44ecbf:c.instructions+=5;goto B44ecbf;
case 0x44ecc0:c.instructions+=4;goto B44ecc0;
case 0x44ecc4:c.instructions+=3;goto B44ecc4;
case 0x44ecc8:c.instructions+=2;goto B44ecc8;
case 0x44ecc9:c.instructions+=1;goto B44ecc9;
case 0x44ecce:goto L44ecce;
case 0x44ecd2:c.instructions+=6;goto B44ecd2;
case 0x44ecd3:c.instructions+=5;goto B44ecd3;
case 0x44ecda:c.instructions+=4;goto B44ecda;
case 0x44ecdb:c.instructions+=3;goto B44ecdb;
case 0x44ecdf:c.instructions+=2;goto B44ecdf;
case 0x44ece0:c.instructions+=1;goto B44ece0;
case 0x44ece5:goto L44ece5;
case 0x44ece9:c.instructions+=8;goto B44ece9;
case 0x44ecea:c.instructions+=7;goto B44ecea;
case 0x44ecee:c.instructions+=6;goto B44ecee;
case 0x44ecef:c.instructions+=5;goto B44ecef;
case 0x44ecf3:c.instructions+=4;goto B44ecf3;
case 0x44ecf4:c.instructions+=3;goto B44ecf4;
case 0x44ecf8:c.instructions+=2;goto B44ecf8;
case 0x44ecf9:c.instructions+=1;goto B44ecf9;
case 0x44ecfe:goto L44ecfe;
case 0x44ed01:c.instructions+=7;goto B44ed01;
case 0x44ed04:c.instructions+=6;goto B44ed04;
case 0x44ed06:c.instructions+=5;goto B44ed06;
case 0x44ed07:c.instructions+=4;goto B44ed07;
case 0x44ed0b:c.instructions+=3;goto B44ed0b;
case 0x44ed0c:c.instructions+=2;goto B44ed0c;
case 0x44ed0e:c.instructions+=1;goto B44ed0e;
case 0x44ed13:goto L44ed13;
case 0x44ed18:c.instructions+=2;goto B44ed18;
case 0x44ed1a:c.instructions+=1;goto B44ed1a;
case 0x44ed1c:goto L44ed1c;
case 0x44ed1f:c.instructions+=2;goto B44ed1f;
case 0x44ed21:c.instructions+=1;goto B44ed21;
case 0x44ed26:goto L44ed26;
case 0x44ed29:c.instructions+=1;goto B44ed29;
case 0x44ed30:goto L44ed30;
case 0x44ed36:c.instructions+=5;goto B44ed36;
case 0x44ed39:c.instructions+=4;goto B44ed39;
case 0x44ed3a:c.instructions+=3;goto B44ed3a;
case 0x44ed3e:c.instructions+=2;goto B44ed3e;
case 0x44ed3f:c.instructions+=1;goto B44ed3f;
case 0x44ed44:goto L44ed44;
case 0x44ed45:c.instructions+=4;goto B44ed45;
case 0x44ed46:c.instructions+=3;goto B44ed46;
case 0x44ed48:c.instructions+=2;goto B44ed48;
case 0x44ed49:c.instructions+=1;goto B44ed49;
case 0x44ed50:goto L44ed50;
case 0x44ed54:c.instructions+=5;goto B44ed54;
case 0x44ed55:c.instructions+=4;goto B44ed55;
case 0x44ed57:c.instructions+=3;goto B44ed57;
case 0x44ed58:c.instructions+=2;goto B44ed58;
case 0x44ed5a:c.instructions+=1;goto B44ed5a;
case 0x44ed5f:goto L44ed5f;
case 0x44ed65:c.instructions+=4;goto B44ed65;
case 0x44ed6a:c.instructions+=3;goto B44ed6a;
case 0x44ed6c:c.instructions+=2;goto B44ed6c;
case 0x44ed6e:c.instructions+=1;goto B44ed6e;
case 0x44ed70:goto L44ed70;
case 0x44ed73:c.instructions+=1;goto B44ed73;
case 0x44ed7d:goto L44ed7d;
case 0x44ed7e:c.instructions+=1;goto B44ed7e;
case 0x44ed90:goto L44ed90;
case 0x44ed91:c.instructions+=3;goto B44ed91;
case 0x44ed93:c.instructions+=2;goto B44ed93;
case 0x44ed98:c.instructions+=1;goto B44ed98;
case 0x44ed9d:goto L44ed9d;
case 0x44ed9f:c.instructions+=1;goto B44ed9f;
case 0x44eda1:goto L44eda1;
case 0x44eda6:c.instructions+=2;goto B44eda6;
case 0x44eda8:c.instructions+=1;goto B44eda8;
case 0x44edaa:goto L44edaa;
case 0x44edad:c.instructions+=3;goto B44edad;
case 0x44edb0:c.instructions+=2;goto B44edb0;
case 0x44edb7:c.instructions+=1;goto B44edb7;
case 0x44edbe:goto L44edbe;
case 0x44edc3:c.instructions+=6;goto B44edc3;
case 0x44edc6:c.instructions+=5;goto B44edc6;
case 0x44edcc:c.instructions+=4;goto B44edcc;
case 0x44edcd:c.instructions+=3;goto B44edcd;
case 0x44edce:c.instructions+=2;goto B44edce;
case 0x44edd1:c.instructions+=1;goto B44edd1;
case 0x44edd6:goto L44edd6;
case 0x44edd7:c.instructions+=1;goto B44edd7;
case 0x44ede0:goto L44ede0;
case 0x44ede2:c.instructions+=17;goto B44ede2;
case 0x44ede7:c.instructions+=16;goto B44ede7;
case 0x44eded:c.instructions+=15;goto B44eded;
case 0x44edee:c.instructions+=14;goto B44edee;
case 0x44edf5:c.instructions+=13;goto B44edf5;
case 0x44edf6:c.instructions+=12;goto B44edf6;
case 0x44edf7:c.instructions+=11;goto B44edf7;
case 0x44edf9:c.instructions+=10;goto B44edf9;
case 0x44edfa:c.instructions+=9;goto B44edfa;
case 0x44edfe:c.instructions+=8;goto B44edfe;
case 0x44ee04:c.instructions+=7;goto B44ee04;
case 0x44ee07:c.instructions+=6;goto B44ee07;
case 0x44ee09:c.instructions+=5;goto B44ee09;
case 0x44ee0f:c.instructions+=4;goto B44ee0f;
case 0x44ee15:c.instructions+=3;goto B44ee15;
case 0x44ee18:c.instructions+=2;goto B44ee18;
case 0x44ee1c:c.instructions+=1;goto B44ee1c;
case 0x44ee1e:goto L44ee1e;
case 0x44ee24:goto L44ee24;
case 0x44ee2a:c.instructions+=2;goto B44ee2a;
case 0x44ee2d:c.instructions+=1;goto B44ee2d;
case 0x44ee2f:goto L44ee2f;
case 0x44ee35:goto L44ee35;
case 0x44ee38:c.instructions+=2;goto B44ee38;
case 0x44ee39:c.instructions+=1;goto B44ee39;
case 0x44ee3e:goto L44ee3e;
case 0x44ee41:c.instructions+=2;goto B44ee41;
case 0x44ee43:c.instructions+=1;goto B44ee43;
case 0x44ee45:goto L44ee45;
case 0x44ee48:c.instructions+=5;goto B44ee48;
case 0x44ee4b:c.instructions+=4;goto B44ee4b;
case 0x44ee4e:c.instructions+=3;goto B44ee4e;
case 0x44ee51:c.instructions+=2;goto B44ee51;
case 0x44ee54:c.instructions+=1;goto B44ee54;
case 0x44ee57:goto L44ee57;
case 0x44ee5a:c.instructions+=2;goto B44ee5a;
case 0x44ee5b:c.instructions+=1;goto B44ee5b;
case 0x44ee60:goto L44ee60;
case 0x44ee63:c.instructions+=2;goto B44ee63;
case 0x44ee64:c.instructions+=1;goto B44ee64;
case 0x44ee69:goto L44ee69;
case 0x44ee6c:c.instructions+=2;goto B44ee6c;
case 0x44ee6d:c.instructions+=1;goto B44ee6d;
case 0x44ee72:goto L44ee72;
case 0x44ee75:c.instructions+=2;goto B44ee75;
case 0x44ee76:c.instructions+=1;goto B44ee76;
case 0x44ee7b:goto L44ee7b;
case 0x44ee7e:c.instructions+=2;goto B44ee7e;
case 0x44ee7f:c.instructions+=1;goto B44ee7f;
case 0x44ee84:goto L44ee84;
case 0x44ee87:c.instructions+=2;goto B44ee87;
case 0x44ee88:c.instructions+=1;goto B44ee88;
case 0x44ee8d:goto L44ee8d;
case 0x44ee90:c.instructions+=2;goto B44ee90;
case 0x44ee91:c.instructions+=1;goto B44ee91;
case 0x44ee96:goto L44ee96;
case 0x44ee99:c.instructions+=2;goto B44ee99;
case 0x44ee9a:c.instructions+=1;goto B44ee9a;
case 0x44ee9f:goto L44ee9f;
case 0x44eea2:c.instructions+=2;goto B44eea2;
case 0x44eea3:c.instructions+=1;goto B44eea3;
case 0x44eea8:goto L44eea8;
case 0x44eeab:c.instructions+=2;goto B44eeab;
case 0x44eeac:c.instructions+=1;goto B44eeac;
case 0x44eeb1:goto L44eeb1;
case 0x44eeb4:c.instructions+=2;goto B44eeb4;
case 0x44eeb5:c.instructions+=1;goto B44eeb5;
case 0x44eeba:goto L44eeba;
case 0x44eebd:c.instructions+=2;goto B44eebd;
case 0x44eebe:c.instructions+=1;goto B44eebe;
case 0x44eec3:goto L44eec3;
case 0x44eec6:c.instructions+=2;goto B44eec6;
case 0x44eec7:c.instructions+=1;goto B44eec7;
case 0x44eecc:goto L44eecc;
case 0x44eecf:c.instructions+=3;goto B44eecf;
case 0x44eed2:c.instructions+=2;goto B44eed2;
case 0x44eed4:c.instructions+=1;goto B44eed4;
case 0x44eed6:goto L44eed6;
case 0x44eed8:c.instructions+=2;goto B44eed8;
case 0x44eeda:c.instructions+=1;goto B44eeda;
case 0x44eedc:goto L44eedc;
case 0x44eedf:c.instructions+=2;goto B44eedf;
case 0x44eee0:c.instructions+=1;goto B44eee0;
case 0x44eee5:goto L44eee5;
case 0x44eee8:c.instructions+=9;goto B44eee8;
case 0x44eeef:c.instructions+=8;goto B44eeef;
case 0x44eef5:c.instructions+=7;goto B44eef5;
case 0x44eefb:c.instructions+=6;goto B44eefb;
case 0x44eefe:c.instructions+=5;goto B44eefe;
case 0x44ef01:c.instructions+=4;goto B44ef01;
case 0x44ef03:c.instructions+=3;goto B44ef03;
case 0x44ef0b:c.instructions+=2;goto B44ef0b;
case 0x44ef11:c.instructions+=1;goto B44ef11;
case 0x44ef13:goto L44ef13;
case 0x44ef16:c.instructions+=8;goto B44ef16;
case 0x44ef19:c.instructions+=7;goto B44ef19;
case 0x44ef1c:c.instructions+=6;goto B44ef1c;
case 0x44ef22:c.instructions+=5;goto B44ef22;
case 0x44ef25:c.instructions+=4;goto B44ef25;
case 0x44ef2b:c.instructions+=3;goto B44ef2b;
case 0x44ef2c:c.instructions+=2;goto B44ef2c;
case 0x44ef2f:c.instructions+=1;goto B44ef2f;
case 0x44ef34:goto L44ef34;
case 0x44ef38:c.instructions+=3;goto B44ef38;
case 0x44ef39:c.instructions+=2;goto B44ef39;
case 0x44ef3a:c.instructions+=1;goto B44ef3a;
case 0x44ef3c:goto L44ef3c;
case 0x44ef42:goto L44ef42;
case 0x44ef46:c.instructions+=3;goto B44ef46;
case 0x44ef4d:c.instructions+=2;goto B44ef4d;
case 0x44ef50:c.instructions+=1;goto B44ef50;
case 0x44ef60:goto L44ef60;
case 0x44ef61:c.instructions+=2;goto B44ef61;
case 0x44ef63:c.instructions+=1;goto B44ef63;
case 0x44ef68:goto L44ef68;
case 0x44ef6d:c.instructions+=2;goto B44ef6d;
case 0x44ef6f:c.instructions+=1;goto B44ef6f;
case 0x44ef71:goto L44ef71;
case 0x44ef74:c.instructions+=2;goto B44ef74;
case 0x44ef7a:c.instructions+=1;goto B44ef7a;
case 0x44ef7f:goto L44ef7f;
case 0x44ef81:c.instructions+=12;goto B44ef81;
case 0x44ef86:c.instructions+=11;goto B44ef86;
case 0x44ef88:c.instructions+=10;goto B44ef88;
case 0x44ef8a:c.instructions+=9;goto B44ef8a;
case 0x44ef8d:c.instructions+=8;goto B44ef8d;
case 0x44ef90:c.instructions+=7;goto B44ef90;
case 0x44ef92:c.instructions+=6;goto B44ef92;
case 0x44ef95:c.instructions+=5;goto B44ef95;
case 0x44ef97:c.instructions+=4;goto B44ef97;
case 0x44ef9e:c.instructions+=3;goto B44ef9e;
case 0x44efa3:c.instructions+=2;goto B44efa3;
case 0x44efa5:c.instructions+=1;goto B44efa5;
case 0x44efa7:goto L44efa7;
case 0x44efaa:c.instructions+=5;goto B44efaa;
case 0x44efad:c.instructions+=4;goto B44efad;
case 0x44efb3:c.instructions+=3;goto B44efb3;
case 0x44efb8:c.instructions+=2;goto B44efb8;
case 0x44efba:c.instructions+=1;goto B44efba;
case 0x44efbc:goto L44efbc;
case 0x44efbf:c.instructions+=2;goto B44efbf;
case 0x44efc2:c.instructions+=1;goto B44efc2;
case 0x44efc8:goto L44efc8;
case 0x44efce:c.instructions+=5;goto B44efce;
case 0x44efcf:c.instructions+=4;goto B44efcf;
case 0x44efd2:c.instructions+=3;goto B44efd2;
case 0x44efd5:c.instructions+=2;goto B44efd5;
case 0x44efd6:c.instructions+=1;goto B44efd6;
case 0x44efdb:goto L44efdb;
case 0x44efdc:c.instructions+=1;goto B44efdc;
case 0x44efe0:goto L44efe0;
case 0x44efe1:c.instructions+=10;goto B44efe1;
case 0x44efe3:c.instructions+=9;goto B44efe3;
case 0x44efe6:c.instructions+=8;goto B44efe6;
case 0x44efe9:c.instructions+=7;goto B44efe9;
case 0x44efea:c.instructions+=6;goto B44efea;
case 0x44efeb:c.instructions+=5;goto B44efeb;
case 0x44efec:c.instructions+=4;goto B44efec;
case 0x44efee:c.instructions+=3;goto B44efee;
case 0x44eff0:c.instructions+=2;goto B44eff0;
case 0x44eff1:c.instructions+=1;goto B44eff1;
case 0x44eff6:goto L44eff6;
case 0x44eff9:c.instructions+=2;goto B44eff9;
case 0x44effb:c.instructions+=1;goto B44effb;
case 0x44effd:goto L44effd;
default:missing_instruction(c.pc);}
B44e000:L44e000:{c.instructions+=2;NFSU2_TR(0x44e000);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e003:{NFSU2_TR(0x44e003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e008ull));
TAIL_STATIC(0x5ed290u,5ed);
}
B44e008:L44e008:{c.instructions+=2;NFSU2_TR(0x44e008);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44e00a:{NFSU2_TR(0x44e00a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44e029;}}
}
B44e00c:L44e00c:{c.instructions+=2;NFSU2_TR(0x44e00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e00f:{NFSU2_TR(0x44e00f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e014ull));
TAIL_STATIC(0x5ed300u,5ed);
}
B44e014:L44e014:{c.instructions+=2;NFSU2_TR(0x44e014);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44e016:{NFSU2_TR(0x44e016);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44e029;}}
}
B44e018:L44e018:{c.instructions+=3;NFSU2_TR(0x44e018);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e01b:{NFSU2_TR(0x44e01b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44e01e:{NFSU2_TR(0x44e01e);
if(r1(R+518)){{goto L44e04d;}}
}
B44e020:L44e020:{c.instructions+=2;NFSU2_TR(0x44e020);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44e027:{NFSU2_TR(0x44e027);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L44e04d;}}
}
B44e029:L44e029:{c.instructions+=8;NFSU2_TR(0x44e029);
{u32 ea_=u32(u32(7893520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e02f:{NFSU2_TR(0x44e02f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e033:{NFSU2_TR(0x44e033);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e037:{NFSU2_TR(0x44e037);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e03b:{NFSU2_TR(0x44e03b);
{u32 ea_=u32(u32(7893520u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e041:{NFSU2_TR(0x44e041);
{u32 ea_=u32(u32(7893520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e047:{NFSU2_TR(0x44e047);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e04b:{NFSU2_TR(0x44e04b);
{goto L44e055;}
}
B44e04d:L44e04d:{c.instructions+=2;NFSU2_TR(0x44e04d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e051:{NFSU2_TR(0x44e051);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e055:L44e055:{c.instructions+=14;NFSU2_TR(0x44e055);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e059:{NFSU2_TR(0x44e059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e05c:{NFSU2_TR(0x44e05c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44e060:{NFSU2_TR(0x44e060);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e064:{NFSU2_TR(0x44e064);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e065:{NFSU2_TR(0x44e065);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e069:{NFSU2_TR(0x44e069);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44e06b:{NFSU2_TR(0x44e06b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44e06f:{NFSU2_TR(0x44e06f);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e073:{NFSU2_TR(0x44e073);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e077:{NFSU2_TR(0x44e077);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44e079:{NFSU2_TR(0x44e079);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e07d:{NFSU2_TR(0x44e07d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44e07f:{NFSU2_TR(0x44e07f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e084ull));
TAIL_STATIC(0x574cd0u,574);
}
B44e084:L44e084:{c.instructions+=16;NFSU2_TR(0x44e084);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e088:{NFSU2_TR(0x44e088);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44e08e:{NFSU2_TR(0x44e08e);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e091:{NFSU2_TR(0x44e091);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e092:{NFSU2_TR(0x44e092);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44e098:{NFSU2_TR(0x44e098);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e099:{NFSU2_TR(0x44e099);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e09d:{NFSU2_TR(0x44e09d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e0a1:{NFSU2_TR(0x44e0a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e0a5:{NFSU2_TR(0x44e0a5);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e0a8:{NFSU2_TR(0x44e0a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e0a9:{NFSU2_TR(0x44e0a9);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e0ad:{NFSU2_TR(0x44e0ad);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e0b1:{NFSU2_TR(0x44e0b1);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e0b4:{NFSU2_TR(0x44e0b4);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e0b8:{NFSU2_TR(0x44e0b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e0bdull));
TAIL_STATIC(0x443f70u,443);
}
B44e0bd:L44e0bd:{c.instructions+=13;NFSU2_TR(0x44e0bd);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e0c1:{NFSU2_TR(0x44e0c1);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44e0c5:{NFSU2_TR(0x44e0c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e0c9:{NFSU2_TR(0x44e0c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44e0cc:{NFSU2_TR(0x44e0cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e0d0:{NFSU2_TR(0x44e0d0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e0d4:{NFSU2_TR(0x44e0d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e0d8:{NFSU2_TR(0x44e0d8);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e0dc:{NFSU2_TR(0x44e0dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e0df:{NFSU2_TR(0x44e0df);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44e0e3:{NFSU2_TR(0x44e0e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e0e4:{NFSU2_TR(0x44e0e4);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e0e8:{NFSU2_TR(0x44e0e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e0edull));
TAIL_STATIC(0x574cd0u,574);
}
B44e0ed:L44e0ed:{c.instructions+=23;NFSU2_TR(0x44e0ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e0f0:{NFSU2_TR(0x44e0f0);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e0f3:{NFSU2_TR(0x44e0f3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B44e0f6:{NFSU2_TR(0x44e0f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e0fe:{NFSU2_TR(0x44e0fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e106:{NFSU2_TR(0x44e106);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e10e:{NFSU2_TR(0x44e10e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e111:{NFSU2_TR(0x44e111);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e114:{NFSU2_TR(0x44e114);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e118:{NFSU2_TR(0x44e118);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e11b:{NFSU2_TR(0x44e11b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44e121:{NFSU2_TR(0x44e121);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e123:{NFSU2_TR(0x44e123);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44e126:{NFSU2_TR(0x44e126);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e129:{NFSU2_TR(0x44e129);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e12a:{NFSU2_TR(0x44e12a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B44e12d:{NFSU2_TR(0x44e12d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e12e:{NFSU2_TR(0x44e12e);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e132:{NFSU2_TR(0x44e132);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44e134:{NFSU2_TR(0x44e134);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e135:{NFSU2_TR(0x44e135);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e139:{NFSU2_TR(0x44e139);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e13d:{NFSU2_TR(0x44e13d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e142ull));
TAIL_STATIC(0x443f70u,443);
}
B44e142:L44e142:{c.instructions+=5;NFSU2_TR(0x44e142);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e145:{NFSU2_TR(0x44e145);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44e148:{NFSU2_TR(0x44e148);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e14c:{NFSU2_TR(0x44e14c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e14d:{NFSU2_TR(0x44e14d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e152ull));
TAIL_STATIC(0x574cd0u,574);
}
B44e152:L44e152:{c.instructions+=11;NFSU2_TR(0x44e152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44e155:{NFSU2_TR(0x44e155);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B44e158:{NFSU2_TR(0x44e158);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7eb5b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B44e160:{NFSU2_TR(0x44e160);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e164:{NFSU2_TR(0x44e164);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44e168:{NFSU2_TR(0x44e168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e16b:{NFSU2_TR(0x44e16b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44e16e:{NFSU2_TR(0x44e16e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44e170:{NFSU2_TR(0x44e170);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44e172:{NFSU2_TR(0x44e172);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44e175:{NFSU2_TR(0x44e175);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44e17d;}}
}
B44e177:L44e177:{c.instructions+=1;NFSU2_TR(0x44e177);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44e17d:L44e17d:{c.instructions+=2;NFSU2_TR(0x44e17d);
u8 U[8];
__builtin_memmove((U+0),gp(0x7ebec0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44e184:{NFSU2_TR(0x44e184);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44e192;}}
}
B44e186:L44e186:{c.instructions+=4;NFSU2_TR(0x44e186);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e18a:{NFSU2_TR(0x44e18a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e18b:{NFSU2_TR(0x44e18b);
__builtin_memmove((R+4),(R+24),4);
}
B44e18d:{NFSU2_TR(0x44e18d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e192ull));
TAIL_STATIC(0x446040u,446);
}
B44e192:L44e192:{c.instructions+=3;NFSU2_TR(0x44e192);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B44e195:{NFSU2_TR(0x44e195);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44e198:{NFSU2_TR(0x44e198);
if(r1(R+518)){{goto L44e1a3;}}
}
B44e19a:L44e19a:{c.instructions+=2;NFSU2_TR(0x44e19a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44e19d:{NFSU2_TR(0x44e19d);
if(r1(R+518)){{goto L44e1a3;}}
}
B44e19f:L44e19f:{c.instructions+=2;NFSU2_TR(0x44e19f);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B44e1a1:{NFSU2_TR(0x44e1a1);
{goto L44e1a5;}
}
B44e1a3:L44e1a3:{c.instructions+=1;NFSU2_TR(0x44e1a3);
w1(R+0,u8(0x1ull));
}
B44e1a5:L44e1a5:{c.instructions+=2;NFSU2_TR(0x44e1a5);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B44e1a8:{NFSU2_TR(0x44e1a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44e1b2;}}
}
B44e1aa:L44e1aa:{c.instructions+=2;NFSU2_TR(0x44e1aa);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B44e1ac:{NFSU2_TR(0x44e1ac);
if(r1(R+518)){{goto L44e263;}}
}
B44e1b2:L44e1b2:{c.instructions+=54;NFSU2_TR(0x44e1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e1b5:{NFSU2_TR(0x44e1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e1b8:{NFSU2_TR(0x44e1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e1bb:{NFSU2_TR(0x44e1bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44e1bd:{NFSU2_TR(0x44e1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e1c0:{NFSU2_TR(0x44e1c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44e1c4:{NFSU2_TR(0x44e1c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e1c7:{NFSU2_TR(0x44e1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e1ca:{NFSU2_TR(0x44e1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e1cd:{NFSU2_TR(0x44e1cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e1d0:{NFSU2_TR(0x44e1d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44e1d4:{NFSU2_TR(0x44e1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e1d7:{NFSU2_TR(0x44e1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e1da:{NFSU2_TR(0x44e1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e1dd:{NFSU2_TR(0x44e1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e1e0:{NFSU2_TR(0x44e1e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44e1e7:{NFSU2_TR(0x44e1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e1ea:{NFSU2_TR(0x44e1ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e1ed:{NFSU2_TR(0x44e1ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e1f0:{NFSU2_TR(0x44e1f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44e1f2:{NFSU2_TR(0x44e1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e1f5:{NFSU2_TR(0x44e1f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44e1f9:{NFSU2_TR(0x44e1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e1fc:{NFSU2_TR(0x44e1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e1ff:{NFSU2_TR(0x44e1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e202:{NFSU2_TR(0x44e202);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44e204:{NFSU2_TR(0x44e204);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e207:{NFSU2_TR(0x44e207);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44e20b:{NFSU2_TR(0x44e20b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e20e:{NFSU2_TR(0x44e20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e211:{NFSU2_TR(0x44e211);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e214:{NFSU2_TR(0x44e214);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e217:{NFSU2_TR(0x44e217);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44e21b:{NFSU2_TR(0x44e21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e21e:{NFSU2_TR(0x44e21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e221:{NFSU2_TR(0x44e221);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e224:{NFSU2_TR(0x44e224);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e227:{NFSU2_TR(0x44e227);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44e22e:{NFSU2_TR(0x44e22e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e231:{NFSU2_TR(0x44e231);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e234:{NFSU2_TR(0x44e234);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e237:{NFSU2_TR(0x44e237);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44e239:{NFSU2_TR(0x44e239);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e23c:{NFSU2_TR(0x44e23c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44e240:{NFSU2_TR(0x44e240);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e243:{NFSU2_TR(0x44e243);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e246:{NFSU2_TR(0x44e246);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e249:{NFSU2_TR(0x44e249);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e24c:{NFSU2_TR(0x44e24c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44e250:{NFSU2_TR(0x44e250);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e253:{NFSU2_TR(0x44e253);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e256:{NFSU2_TR(0x44e256);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e259:{NFSU2_TR(0x44e259);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e25c:{NFSU2_TR(0x44e25c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44e263:L44e263:{c.instructions+=2;NFSU2_TR(0x44e263);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B44e266:{NFSU2_TR(0x44e266);
if(r1(R+518)){{goto L44e26d;}}
}
B44e268:L44e268:{c.instructions+=1;NFSU2_TR(0x44e268);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e26dull));
TAIL_STATIC(0x5d7ae0u,5d7);
}
B44e26d:L44e26d:{c.instructions+=6;NFSU2_TR(0x44e26d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44e26e:{NFSU2_TR(0x44e26e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44e26f:{NFSU2_TR(0x44e26f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44e270:{NFSU2_TR(0x44e270);
__builtin_memmove((R+16),(R+20),4);
}
B44e272:{NFSU2_TR(0x44e272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44e273:{NFSU2_TR(0x44e273);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44e280:L44e280:{c.instructions+=14;NFSU2_TR(0x44e280);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e282:{NFSU2_TR(0x44e282);
u8 U[4];
w4(U+0,u32(0x772068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e287:{NFSU2_TR(0x44e287);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e28d:{NFSU2_TR(0x44e28d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e28e:{NFSU2_TR(0x44e28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e295:{NFSU2_TR(0x44e295);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e296:{NFSU2_TR(0x44e296);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e297:{NFSU2_TR(0x44e297);
__builtin_memmove((R+24),(R+4),4);
}
B44e299:{NFSU2_TR(0x44e299);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e29d:{NFSU2_TR(0x44e29d);
u8 U[4];
w4(U+0,u32(0x787f78ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44e2a3:{NFSU2_TR(0x44e2a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e2a6:{NFSU2_TR(0x44e2a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e2a7:{NFSU2_TR(0x44e2a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e2af:{NFSU2_TR(0x44e2af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e2b4ull));
TAIL_STATIC(0x575630u,575);
}
B44e2b4:L44e2b4:{c.instructions+=3;NFSU2_TR(0x44e2b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e2b7:{NFSU2_TR(0x44e2b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e2b8:{NFSU2_TR(0x44e2b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e2bdull));
TAIL_STATIC(0x575630u,575);
}
B44e2bd:L44e2bd:{c.instructions+=3;NFSU2_TR(0x44e2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e2c0:{NFSU2_TR(0x44e2c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e2c1:{NFSU2_TR(0x44e2c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e2c6ull));
TAIL_STATIC(0x575630u,575);
}
B44e2c6:L44e2c6:{c.instructions+=6;NFSU2_TR(0x44e2c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e2c9:{NFSU2_TR(0x44e2c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44e2cc:{NFSU2_TR(0x44e2cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44e2ce:{NFSU2_TR(0x44e2ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e2d6:{NFSU2_TR(0x44e2d6);
u8 U[4];
w4(U+0,u32(0x787cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44e2dc:{NFSU2_TR(0x44e2dc);
if(r1(R+518)){{goto L44e303;}}
}
B44e2de:L44e2de:{c.instructions+=9;NFSU2_TR(0x44e2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e2e1:{NFSU2_TR(0x44e2e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e2e8:{NFSU2_TR(0x44e2e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e2ee:{NFSU2_TR(0x44e2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e2f1:{NFSU2_TR(0x44e2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e2f7:{NFSU2_TR(0x44e2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e2fa:{NFSU2_TR(0x44e2fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e2fb:{NFSU2_TR(0x44e2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e2fe:{NFSU2_TR(0x44e2fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e303ull));
TAIL_STATIC(0x48f760u,48f);
}
B44e303:L44e303:{c.instructions+=3;NFSU2_TR(0x44e303);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44e307:{NFSU2_TR(0x44e307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44e308:{NFSU2_TR(0x44e308);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44e310;}}
}
B44e30a:L44e30a:{c.instructions+=1;NFSU2_TR(0x44e30a);
s4(0x883dfc,u32(u32(m4(0x883dfc))-u32(u32(0x1ull))));
}
B44e310:L44e310:{c.instructions+=4;NFSU2_TR(0x44e310);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e314:{NFSU2_TR(0x44e314);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e31b:{NFSU2_TR(0x44e31b);
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
B44e31e:{NFSU2_TR(0x44e31e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44e320:L44e320:{c.instructions+=16;NFSU2_TR(0x44e320);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e321:{NFSU2_TR(0x44e321);
__builtin_memmove((R+20),(R+16),4);
}
B44e323:{NFSU2_TR(0x44e323);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44e326:{NFSU2_TR(0x44e326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x244ull))));
}
B44e32c:{NFSU2_TR(0x44e32c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e32d:{NFSU2_TR(0x44e32d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e32e:{NFSU2_TR(0x44e32e);
__builtin_memmove((R+24),(R+4),4);
}
B44e330:{NFSU2_TR(0x44e330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e333:{NFSU2_TR(0x44e333);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e334:{NFSU2_TR(0x44e334);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44e337:{NFSU2_TR(0x44e337);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e338:{NFSU2_TR(0x44e338);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44e33d:{NFSU2_TR(0x44e33d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e33e:{NFSU2_TR(0x44e33e);
u8 U[4];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e345:{NFSU2_TR(0x44e345);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e346:{NFSU2_TR(0x44e346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e34bull));
TAIL_STATIC(0x401340u,401);
}
B44e34b:L44e34b:{c.instructions+=5;NFSU2_TR(0x44e34b);
u8 U[4];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e352:{NFSU2_TR(0x44e352);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e353:{NFSU2_TR(0x44e353);
u8 U[4];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e35a:{NFSU2_TR(0x44e35a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e35b:{NFSU2_TR(0x44e35b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e360ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B44e360:L44e360:{c.instructions+=5;NFSU2_TR(0x44e360);
{u32 ea_=u32(u32(7897028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e366:{NFSU2_TR(0x44e366);
__builtin_memmove((R+0),gp(0x7ebec0),4);
}
B44e36b:{NFSU2_TR(0x44e36b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B44e36e:{NFSU2_TR(0x44e36e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44e36f:{NFSU2_TR(0x44e36f);
if(r1(R+518)){{goto L44e6c4;}}
}
B44e375:L44e375:{c.instructions+=2;NFSU2_TR(0x44e375);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44e376:{NFSU2_TR(0x44e376);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44eb0d;}}
}
B44e37c:L44e37c:{c.instructions+=27;NFSU2_TR(0x44e37c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e37f:{NFSU2_TR(0x44e37f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44e381:{NFSU2_TR(0x44e381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e384:{NFSU2_TR(0x44e384);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e38c:{NFSU2_TR(0x44e38c);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e394:{NFSU2_TR(0x44e394);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e39c:{NFSU2_TR(0x44e39c);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e39f:{NFSU2_TR(0x44e39f);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e3a2:{NFSU2_TR(0x44e3a2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B44e3a5:{NFSU2_TR(0x44e3a5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e3a8:{NFSU2_TR(0x44e3a8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x60ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44e3ab:{NFSU2_TR(0x44e3ab);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e3ae:{NFSU2_TR(0x44e3ae);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e3b1:{NFSU2_TR(0x44e3b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e3b8:{NFSU2_TR(0x44e3b8);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e3bb:{NFSU2_TR(0x44e3bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e3bc:{NFSU2_TR(0x44e3bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e3c0:{NFSU2_TR(0x44e3c0);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e3c7:{NFSU2_TR(0x44e3c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e3ce:{NFSU2_TR(0x44e3ce);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44e3d0:{NFSU2_TR(0x44e3d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e3d7:{NFSU2_TR(0x44e3d7);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e3de:{NFSU2_TR(0x44e3de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e3df:{NFSU2_TR(0x44e3df);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e3e3:{NFSU2_TR(0x44e3e3);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e3ea:{NFSU2_TR(0x44e3ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e3eb:{NFSU2_TR(0x44e3eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e3f0ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B44e3f0:L44e3f0:{c.instructions+=7;NFSU2_TR(0x44e3f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e3f4:{NFSU2_TR(0x44e3f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e3f5:{NFSU2_TR(0x44e3f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e3fc:{NFSU2_TR(0x44e3fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e3fd:{NFSU2_TR(0x44e3fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e404:{NFSU2_TR(0x44e404);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e405:{NFSU2_TR(0x44e405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e40aull));
TAIL_STATIC(0x43d1e0u,43d);
}
B44e40a:L44e40a:{c.instructions+=5;NFSU2_TR(0x44e40a);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e411:{NFSU2_TR(0x44e411);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e412:{NFSU2_TR(0x44e412);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e419:{NFSU2_TR(0x44e419);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e41a:{NFSU2_TR(0x44e41a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e41full));
TAIL_STATIC(0x43cf10u,43c);
}
B44e41f:L44e41f:{c.instructions+=5;NFSU2_TR(0x44e41f);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e426:{NFSU2_TR(0x44e426);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e427:{NFSU2_TR(0x44e427);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e42e:{NFSU2_TR(0x44e42e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e42f:{NFSU2_TR(0x44e42f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e434ull));
TAIL_STATIC(0x43cf10u,43c);
}
B44e434:L44e434:{c.instructions+=5;NFSU2_TR(0x44e434);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e43b:{NFSU2_TR(0x44e43b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e43c:{NFSU2_TR(0x44e43c);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e443:{NFSU2_TR(0x44e443);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e444:{NFSU2_TR(0x44e444);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e449ull));
TAIL_STATIC(0x43cf10u,43c);
}
B44e449:L44e449:{c.instructions+=36;NFSU2_TR(0x44e449);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e450:{NFSU2_TR(0x44e450);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e457:{NFSU2_TR(0x44e457);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e45e:{NFSU2_TR(0x44e45e);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e465:{NFSU2_TR(0x44e465);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e46c:{NFSU2_TR(0x44e46c);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e473:{NFSU2_TR(0x44e473);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e47a:{NFSU2_TR(0x44e47a);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e481:{NFSU2_TR(0x44e481);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e488:{NFSU2_TR(0x44e488);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e48f:{NFSU2_TR(0x44e48f);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e496:{NFSU2_TR(0x44e496);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e49d:{NFSU2_TR(0x44e49d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e4a0:{NFSU2_TR(0x44e4a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e4a7:{NFSU2_TR(0x44e4a7);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e4ae:{NFSU2_TR(0x44e4ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e4b5:{NFSU2_TR(0x44e4b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e4bc:{NFSU2_TR(0x44e4bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B44e4bf:{NFSU2_TR(0x44e4bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e4ca:{NFSU2_TR(0x44e4ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e4d5:{NFSU2_TR(0x44e4d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e4dc:{NFSU2_TR(0x44e4dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e4e3:{NFSU2_TR(0x44e4e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e4ee:{NFSU2_TR(0x44e4ee);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e4f1:{NFSU2_TR(0x44e4f1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e4f4:{NFSU2_TR(0x44e4f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44e4f6:{NFSU2_TR(0x44e4f6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44e4f8:{NFSU2_TR(0x44e4f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e4ff:{NFSU2_TR(0x44e4ff);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e506:{NFSU2_TR(0x44e506);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e507:{NFSU2_TR(0x44e507);
u8 U[4];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e50e:{NFSU2_TR(0x44e50e);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e515:{NFSU2_TR(0x44e515);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e516:{NFSU2_TR(0x44e516);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44e51d:{NFSU2_TR(0x44e51d);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e528:{NFSU2_TR(0x44e528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e52dull));
TAIL_STATIC(0x5baf90u,5ba);
}
B44e52d:L44e52d:{c.instructions+=7;NFSU2_TR(0x44e52d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B44e530:{NFSU2_TR(0x44e530);
u8 U[4];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e537:{NFSU2_TR(0x44e537);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e538:{NFSU2_TR(0x44e538);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e53c:{NFSU2_TR(0x44e53c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e53d:{NFSU2_TR(0x44e53d);
__builtin_memmove((R+4),(R+24),4);
}
B44e53f:{NFSU2_TR(0x44e53f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e544ull));
TAIL_STATIC(0x446110u,446);
}
B44e544:L44e544:{c.instructions+=6;NFSU2_TR(0x44e544);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e548:{NFSU2_TR(0x44e548);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e549:{NFSU2_TR(0x44e549);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e54d:{NFSU2_TR(0x44e54d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e54e:{NFSU2_TR(0x44e54e);
w4(R+4,u32(0x7ec740ull));
}
B44e553:{NFSU2_TR(0x44e553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e558ull));
TAIL_STATIC(0x4470b0u,447);
}
B44e558:L44e558:{c.instructions+=6;NFSU2_TR(0x44e558);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e55f:{NFSU2_TR(0x44e55f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e560:{NFSU2_TR(0x44e560);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e567:{NFSU2_TR(0x44e567);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e568:{NFSU2_TR(0x44e568);
w4(R+4,u32(0x7ec754ull));
}
B44e56d:{NFSU2_TR(0x44e56d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e572ull));
TAIL_STATIC(0x447170u,447);
}
B44e572:L44e572:{c.instructions+=8;NFSU2_TR(0x44e572);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e575:{NFSU2_TR(0x44e575);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B44e578:{NFSU2_TR(0x44e578);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e579:{NFSU2_TR(0x44e579);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e580:{NFSU2_TR(0x44e580);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e581:{NFSU2_TR(0x44e581);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e585:{NFSU2_TR(0x44e585);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e586:{NFSU2_TR(0x44e586);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e58bull));
TAIL_STATIC(0x43c9c0u,43c);
}
B44e58b:L44e58b:{c.instructions+=16;NFSU2_TR(0x44e58b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e58f:{NFSU2_TR(0x44e58f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e593:{NFSU2_TR(0x44e593);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e59a:{NFSU2_TR(0x44e59a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e59b:{NFSU2_TR(0x44e59b);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e59f:{NFSU2_TR(0x44e59f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e5a3:{NFSU2_TR(0x44e5a3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e5a7:{NFSU2_TR(0x44e5a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e5a8:{NFSU2_TR(0x44e5a8);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e5ac:{NFSU2_TR(0x44e5ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e5b0:{NFSU2_TR(0x44e5b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e5b1:{NFSU2_TR(0x44e5b1);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e5b5:{NFSU2_TR(0x44e5b5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e5b9:{NFSU2_TR(0x44e5b9);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e5bd:{NFSU2_TR(0x44e5bd);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e5c1:{NFSU2_TR(0x44e5c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e5c6ull));
TAIL_STATIC(0x43cf90u,43c);
}
B44e5c6:L44e5c6:{c.instructions+=19;NFSU2_TR(0x44e5c6);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e5ca:{NFSU2_TR(0x44e5ca);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44e5ce:{NFSU2_TR(0x44e5ce);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e5d5:{NFSU2_TR(0x44e5d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e5d6:{NFSU2_TR(0x44e5d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e5dd:{NFSU2_TR(0x44e5dd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e5e1:{NFSU2_TR(0x44e5e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e5e2:{NFSU2_TR(0x44e5e2);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e5e6:{NFSU2_TR(0x44e5e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e5ed:{NFSU2_TR(0x44e5ed);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44e5f1:{NFSU2_TR(0x44e5f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e5f2:{NFSU2_TR(0x44e5f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e5fa:{NFSU2_TR(0x44e5fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e602:{NFSU2_TR(0x44e602);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e606:{NFSU2_TR(0x44e606);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e60e:{NFSU2_TR(0x44e60e);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e612:{NFSU2_TR(0x44e612);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44e616:{NFSU2_TR(0x44e616);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e61a:{NFSU2_TR(0x44e61a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e61full));
TAIL_STATIC(0x43c990u,43c);
}
B44e61f:L44e61f:{c.instructions+=7;NFSU2_TR(0x44e61f);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e623:{NFSU2_TR(0x44e623);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e624:{NFSU2_TR(0x44e624);
u8 U[4];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e62b:{NFSU2_TR(0x44e62b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e62c:{NFSU2_TR(0x44e62c);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e633:{NFSU2_TR(0x44e633);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e634:{NFSU2_TR(0x44e634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e639ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B44e639:L44e639:{c.instructions+=8;NFSU2_TR(0x44e639);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e63c:{NFSU2_TR(0x44e63c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B44e63f:{NFSU2_TR(0x44e63f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e640:{NFSU2_TR(0x44e640);
u8 U[4];
w4(U+0,u32(u32(u32(0x204ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e647:{NFSU2_TR(0x44e647);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e648:{NFSU2_TR(0x44e648);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e64f:{NFSU2_TR(0x44e64f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e650:{NFSU2_TR(0x44e650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e655ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B44e655:L44e655:{c.instructions+=7;NFSU2_TR(0x44e655);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e65c:{NFSU2_TR(0x44e65c);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e663:{NFSU2_TR(0x44e663);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B44e666:{NFSU2_TR(0x44e666);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44e66c:{NFSU2_TR(0x44e66c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44e66e:{NFSU2_TR(0x44e66e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44e671:{NFSU2_TR(0x44e671);
if(r1(R+514)){{goto L44e6b8;}}
}
B44e673:L44e673:{c.instructions+=7;NFSU2_TR(0x44e673);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e67a:{NFSU2_TR(0x44e67a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e67b:{NFSU2_TR(0x44e67b);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e682:{NFSU2_TR(0x44e682);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e683:{NFSU2_TR(0x44e683);
u8 U[4];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e68a:{NFSU2_TR(0x44e68a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e68b:{NFSU2_TR(0x44e68b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e690ull));
TAIL_STATIC(0x43c990u,43c);
}
B44e690:L44e690:{c.instructions+=8;NFSU2_TR(0x44e690);
u8 U[4];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e697:{NFSU2_TR(0x44e697);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e698:{NFSU2_TR(0x44e698);
u8 U[4];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e69f:{NFSU2_TR(0x44e69f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e6a0:{NFSU2_TR(0x44e6a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e6a4:{NFSU2_TR(0x44e6a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e6a5:{NFSU2_TR(0x44e6a5);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e6b0:{NFSU2_TR(0x44e6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e6b5ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B44e6b5:L44e6b5:{c.instructions+=1;NFSU2_TR(0x44e6b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B44e6b8:L44e6b8:{c.instructions+=2;NFSU2_TR(0x44e6b8);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e6bf:{NFSU2_TR(0x44e6bf);
{goto L44eb0d;}
}
B44e6c4:L44e6c4:{c.instructions+=5;NFSU2_TR(0x44e6c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e6c7:{NFSU2_TR(0x44e6c7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44e6c9:{NFSU2_TR(0x44e6c9);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e6d0:{NFSU2_TR(0x44e6d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e6d1:{NFSU2_TR(0x44e6d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e6d6ull));
TAIL_STATIC(0x5ecc00u,5ec);
}
B44e6d6:L44e6d6:{c.instructions+=5;NFSU2_TR(0x44e6d6);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e6dd:{NFSU2_TR(0x44e6dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e6de:{NFSU2_TR(0x44e6de);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e6e5:{NFSU2_TR(0x44e6e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e6e6:{NFSU2_TR(0x44e6e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e6ebull));
TAIL_STATIC(0x5baf90u,5ba);
}
B44e6eb:L44e6eb:{c.instructions+=7;NFSU2_TR(0x44e6eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44e6ee:{NFSU2_TR(0x44e6ee);
u8 U[4];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e6f5:{NFSU2_TR(0x44e6f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e6f6:{NFSU2_TR(0x44e6f6);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e6fd:{NFSU2_TR(0x44e6fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e6fe:{NFSU2_TR(0x44e6fe);
__builtin_memmove((R+4),(R+24),4);
}
B44e700:{NFSU2_TR(0x44e700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e705ull));
TAIL_STATIC(0x446110u,446);
}
B44e705:L44e705:{c.instructions+=6;NFSU2_TR(0x44e705);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e70c:{NFSU2_TR(0x44e70c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e70d:{NFSU2_TR(0x44e70d);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e714:{NFSU2_TR(0x44e714);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e715:{NFSU2_TR(0x44e715);
w4(R+4,u32(0x7ec6c0ull));
}
B44e71a:{NFSU2_TR(0x44e71a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e71full));
TAIL_STATIC(0x4470b0u,447);
}
B44e71f:L44e71f:{c.instructions+=7;NFSU2_TR(0x44e71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e722:{NFSU2_TR(0x44e722);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e725:{NFSU2_TR(0x44e725);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B44e728:{NFSU2_TR(0x44e728);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e729:{NFSU2_TR(0x44e729);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x60ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44e72c:{NFSU2_TR(0x44e72c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e72d:{NFSU2_TR(0x44e72d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e732ull));
TAIL_STATIC(0x43ce10u,43c);
}
B44e732:L44e732:{c.instructions+=12;NFSU2_TR(0x44e732);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e739:{NFSU2_TR(0x44e739);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e73d:{NFSU2_TR(0x44e73d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e73e:{NFSU2_TR(0x44e73e);
u8 U[4];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e745:{NFSU2_TR(0x44e745);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e749:{NFSU2_TR(0x44e749);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e74a:{NFSU2_TR(0x44e74a);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e74e:{NFSU2_TR(0x44e74e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e74f:{NFSU2_TR(0x44e74f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e757:{NFSU2_TR(0x44e757);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e75f:{NFSU2_TR(0x44e75f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44e767:{NFSU2_TR(0x44e767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e76cull));
TAIL_STATIC(0x43c9c0u,43c);
}
B44e76c:L44e76c:{c.instructions+=6;NFSU2_TR(0x44e76c);
u8 U[4];
w4(U+0,u32(0x7ec690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e771:{NFSU2_TR(0x44e771);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e778:{NFSU2_TR(0x44e778);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e779:{NFSU2_TR(0x44e779);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e780:{NFSU2_TR(0x44e780);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e781:{NFSU2_TR(0x44e781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e786ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B44e786:L44e786:{c.instructions+=10;NFSU2_TR(0x44e786);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e78a:{NFSU2_TR(0x44e78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e78d:{NFSU2_TR(0x44e78d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B44e78f:{NFSU2_TR(0x44e78f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B44e792:{NFSU2_TR(0x44e792);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x70ull))));
}
B44e795:{NFSU2_TR(0x44e795);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e798:{NFSU2_TR(0x44e798);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e799:{NFSU2_TR(0x44e799);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e79d:{NFSU2_TR(0x44e79d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e79e:{NFSU2_TR(0x44e79e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e7a3ull));
TAIL_STATIC(0x43cf90u,43c);
}
B44e7a3:L44e7a3:{c.instructions+=13;NFSU2_TR(0x44e7a3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e7a7:{NFSU2_TR(0x44e7a7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44e7ab:{NFSU2_TR(0x44e7ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44e7ae:{NFSU2_TR(0x44e7ae);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e7b2:{NFSU2_TR(0x44e7b2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e7b6:{NFSU2_TR(0x44e7b6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44e7ba:{NFSU2_TR(0x44e7ba);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e7be:{NFSU2_TR(0x44e7be);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e7c2:{NFSU2_TR(0x44e7c2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44e7c6:{NFSU2_TR(0x44e7c6);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44e7ca:{NFSU2_TR(0x44e7ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44e7cc:{NFSU2_TR(0x44e7cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44e7cf:{NFSU2_TR(0x44e7cf);
if(r1(R+518)){{goto L44e7d7;}}
}
B44e7d1:L44e7d1:{c.instructions+=2;NFSU2_TR(0x44e7d1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44e7d3:{NFSU2_TR(0x44e7d3);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e7d7:L44e7d7:{c.instructions+=25;NFSU2_TR(0x44e7d7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44e7db:{NFSU2_TR(0x44e7db);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e7e2:{NFSU2_TR(0x44e7e2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e7e6:{NFSU2_TR(0x44e7e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e7e7:{NFSU2_TR(0x44e7e7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e7eb:{NFSU2_TR(0x44e7eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e7f2:{NFSU2_TR(0x44e7f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e7f3:{NFSU2_TR(0x44e7f3);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e7fa:{NFSU2_TR(0x44e7fa);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e7fe:{NFSU2_TR(0x44e7fe);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e802:{NFSU2_TR(0x44e802);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e809:{NFSU2_TR(0x44e809);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e80d:{NFSU2_TR(0x44e80d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B44e80f:{NFSU2_TR(0x44e80f);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e816:{NFSU2_TR(0x44e816);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e81a:{NFSU2_TR(0x44e81a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e81e:{NFSU2_TR(0x44e81e);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e822:{NFSU2_TR(0x44e822);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e826:{NFSU2_TR(0x44e826);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e82a:{NFSU2_TR(0x44e82a);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e82e:{NFSU2_TR(0x44e82e);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e835:{NFSU2_TR(0x44e835);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B44e837:{NFSU2_TR(0x44e837);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e83b:{NFSU2_TR(0x44e83b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44e83d:{NFSU2_TR(0x44e83d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e842ull));
TAIL_STATIC(0x43cf10u,43c);
}
B44e842:L44e842:{c.instructions+=5;NFSU2_TR(0x44e842);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e846:{NFSU2_TR(0x44e846);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e847:{NFSU2_TR(0x44e847);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e84b:{NFSU2_TR(0x44e84b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e84c:{NFSU2_TR(0x44e84c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e851ull));
TAIL_STATIC(0x43cf10u,43c);
}
B44e851:L44e851:{c.instructions+=12;NFSU2_TR(0x44e851);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e855:{NFSU2_TR(0x44e855);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e85c:{NFSU2_TR(0x44e85c);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e860:{NFSU2_TR(0x44e860);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e867:{NFSU2_TR(0x44e867);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44e869:{NFSU2_TR(0x44e869);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e86d:{NFSU2_TR(0x44e86d);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e874:{NFSU2_TR(0x44e874);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44e876:{NFSU2_TR(0x44e876);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e87a:{NFSU2_TR(0x44e87a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44e87e:{NFSU2_TR(0x44e87e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e87f:{NFSU2_TR(0x44e87f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e884ull));
TAIL_STATIC(0x43c490u,43c);
}
B44e884:L44e884:{c.instructions+=6;NFSU2_TR(0x44e884);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e88b:{NFSU2_TR(0x44e88b);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e892:{NFSU2_TR(0x44e892);
w4(R+28,u32(0x4000ull));
}
B44e897:{NFSU2_TR(0x44e897);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B44e89a:{NFSU2_TR(0x44e89a);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B44e89c:{NFSU2_TR(0x44e89c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e8a1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44e8a1:L44e8a1:{c.instructions+=3;NFSU2_TR(0x44e8a1);
__builtin_memmove((R+12),(R+0),4);
}
B44e8a3:{NFSU2_TR(0x44e8a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w1(R+512,u8((r2(R+28))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+28))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B44e8a6:{NFSU2_TR(0x44e8a6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L44ead5;}}
}
B44e8ac:L44e8ac:{c.instructions+=47;NFSU2_TR(0x44e8ac);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e8b3:{NFSU2_TR(0x44e8b3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B44e8b5:{NFSU2_TR(0x44e8b5);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e8b9:{NFSU2_TR(0x44e8b9);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e8c0:{NFSU2_TR(0x44e8c0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B44e8c2:{NFSU2_TR(0x44e8c2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e8c6:{NFSU2_TR(0x44e8c6);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e8cd:{NFSU2_TR(0x44e8cd);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B44e8cf:{NFSU2_TR(0x44e8cf);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e8d3:{NFSU2_TR(0x44e8d3);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e8d7:{NFSU2_TR(0x44e8d7);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e8db:{NFSU2_TR(0x44e8db);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e8df:{NFSU2_TR(0x44e8df);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e8e3:{NFSU2_TR(0x44e8e3);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e8e7:{NFSU2_TR(0x44e8e7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e8eb:{NFSU2_TR(0x44e8eb);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e8f2:{NFSU2_TR(0x44e8f2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B44e8f4:{NFSU2_TR(0x44e8f4);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B44e8f6:{NFSU2_TR(0x44e8f6);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e8fd:{NFSU2_TR(0x44e8fd);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e904:{NFSU2_TR(0x44e904);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44e906:{NFSU2_TR(0x44e906);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B44e908:{NFSU2_TR(0x44e908);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B44e90a:{NFSU2_TR(0x44e90a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44e90c:{NFSU2_TR(0x44e90c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B44e90e:{NFSU2_TR(0x44e90e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e912:{NFSU2_TR(0x44e912);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e918:{NFSU2_TR(0x44e918);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B44e91c:{NFSU2_TR(0x44e91c);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e923:{NFSU2_TR(0x44e923);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44e925:{NFSU2_TR(0x44e925);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e92c:{NFSU2_TR(0x44e92c);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e933:{NFSU2_TR(0x44e933);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e93a:{NFSU2_TR(0x44e93a);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e941:{NFSU2_TR(0x44e941);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e948:{NFSU2_TR(0x44e948);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e94f:{NFSU2_TR(0x44e94f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e953:{NFSU2_TR(0x44e953);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44e955:{NFSU2_TR(0x44e955);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e959:{NFSU2_TR(0x44e959);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44e95b:{NFSU2_TR(0x44e95b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44e95d:{NFSU2_TR(0x44e95d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e961:{NFSU2_TR(0x44e961);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44e963:{NFSU2_TR(0x44e963);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e96a:{NFSU2_TR(0x44e96a);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44e971:{NFSU2_TR(0x44e971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e972:{NFSU2_TR(0x44e972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e977ull));
TAIL_STATIC(0x43c490u,43c);
}
B44e977:L44e977:{c.instructions+=4;NFSU2_TR(0x44e977);
w4(R+28,u32(0x4000ull));
}
B44e97c:{NFSU2_TR(0x44e97c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e97d:{NFSU2_TR(0x44e97d);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B44e97f:{NFSU2_TR(0x44e97f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e984ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44e984:L44e984:{c.instructions+=5;NFSU2_TR(0x44e984);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e98b:{NFSU2_TR(0x44e98b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44e98e:{NFSU2_TR(0x44e98e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e992:{NFSU2_TR(0x44e992);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e995:{NFSU2_TR(0x44e995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e99aull));
TAIL_STATIC(0x43c490u,43c);
}
B44e99a:L44e99a:{c.instructions+=14;NFSU2_TR(0x44e99a);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e9a1:{NFSU2_TR(0x44e9a1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B44e9a3:{NFSU2_TR(0x44e9a3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44e9a7:{NFSU2_TR(0x44e9a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44e9ab:{NFSU2_TR(0x44e9ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44e9af:{NFSU2_TR(0x44e9af);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e9b3:{NFSU2_TR(0x44e9b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B44e9b7:{NFSU2_TR(0x44e9b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e9b8:{NFSU2_TR(0x44e9b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e9b9:{NFSU2_TR(0x44e9b9);
u8 U[6];
w1(R+512,u8((r4(R+28))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44e9bb:{NFSU2_TR(0x44e9bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e9bc:{NFSU2_TR(0x44e9bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44e9c0:{NFSU2_TR(0x44e9c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e9c1:{NFSU2_TR(0x44e9c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44e9c6ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B44e9c6:L44e9c6:{c.instructions+=14;NFSU2_TR(0x44e9c6);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e9cd:{NFSU2_TR(0x44e9cd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e9d1:{NFSU2_TR(0x44e9d1);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e9d8:{NFSU2_TR(0x44e9d8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e9dc:{NFSU2_TR(0x44e9dc);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44e9e3:{NFSU2_TR(0x44e9e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44e9e4:{NFSU2_TR(0x44e9e4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44e9e8:{NFSU2_TR(0x44e9e8);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e9ef:{NFSU2_TR(0x44e9ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44e9f6:{NFSU2_TR(0x44e9f6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44e9f8:{NFSU2_TR(0x44e9f8);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44e9fc:{NFSU2_TR(0x44e9fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ea03:{NFSU2_TR(0x44ea03);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ea07:{NFSU2_TR(0x44ea07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ea0cull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44ea0c:L44ea0c:{c.instructions+=3;NFSU2_TR(0x44ea0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ea0d:{NFSU2_TR(0x44ea0d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ea11:{NFSU2_TR(0x44ea11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ea16ull));
TAIL_STATIC(0x43c370u,43c);
}
B44ea16:L44ea16:{c.instructions+=9;NFSU2_TR(0x44ea16);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44ea1a:{NFSU2_TR(0x44ea1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B44ea1d:{NFSU2_TR(0x44ea1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44ea21:{NFSU2_TR(0x44ea21);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44ea25:{NFSU2_TR(0x44ea25);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ea29:{NFSU2_TR(0x44ea29);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ea2c:{NFSU2_TR(0x44ea2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ea2d:{NFSU2_TR(0x44ea2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ea2e:{NFSU2_TR(0x44ea2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ea33ull));
TAIL_STATIC(0x43cf90u,43c);
}
B44ea33:L44ea33:{c.instructions+=27;NFSU2_TR(0x44ea33);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ea37:{NFSU2_TR(0x44ea37);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44ea3b:{NFSU2_TR(0x44ea3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ea3c:{NFSU2_TR(0x44ea3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44ea40:{NFSU2_TR(0x44ea40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ea41:{NFSU2_TR(0x44ea41);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ea45:{NFSU2_TR(0x44ea45);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44ea49:{NFSU2_TR(0x44ea49);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ea4d:{NFSU2_TR(0x44ea4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ea4e:{NFSU2_TR(0x44ea4e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44ea52:{NFSU2_TR(0x44ea52);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ea56:{NFSU2_TR(0x44ea56);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ea5d:{NFSU2_TR(0x44ea5d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44ea61:{NFSU2_TR(0x44ea61);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ea65:{NFSU2_TR(0x44ea65);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ea69:{NFSU2_TR(0x44ea69);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ea6d:{NFSU2_TR(0x44ea6d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ea71:{NFSU2_TR(0x44ea71);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ea75:{NFSU2_TR(0x44ea75);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ea79:{NFSU2_TR(0x44ea79);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ea7d:{NFSU2_TR(0x44ea7d);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ea84:{NFSU2_TR(0x44ea84);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ea8b:{NFSU2_TR(0x44ea8b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44ea8d:{NFSU2_TR(0x44ea8d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ea91:{NFSU2_TR(0x44ea91);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ea95:{NFSU2_TR(0x44ea95);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ea99:{NFSU2_TR(0x44ea99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ea9eull));
TAIL_STATIC(0x43cf90u,43c);
}
B44ea9e:L44ea9e:{c.instructions+=13;NFSU2_TR(0x44ea9e);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44eaa2:{NFSU2_TR(0x44eaa2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B44eaa5:{NFSU2_TR(0x44eaa5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44eaa9:{NFSU2_TR(0x44eaa9);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44eaad:{NFSU2_TR(0x44eaad);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44eab1:{NFSU2_TR(0x44eab1);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44eab5:{NFSU2_TR(0x44eab5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44eab9:{NFSU2_TR(0x44eab9);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44eac0:{NFSU2_TR(0x44eac0);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44eac7:{NFSU2_TR(0x44eac7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44eac9:{NFSU2_TR(0x44eac9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44eacd:{NFSU2_TR(0x44eacd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ead1:{NFSU2_TR(0x44ead1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ead5:L44ead5:{c.instructions+=7;NFSU2_TR(0x44ead5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44ead9:{NFSU2_TR(0x44ead9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eada:{NFSU2_TR(0x44eada);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44eae1:{NFSU2_TR(0x44eae1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eae2:{NFSU2_TR(0x44eae2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44eae6:{NFSU2_TR(0x44eae6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eae7:{NFSU2_TR(0x44eae7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eaecull));
TAIL_STATIC(0x43c9c0u,43c);
}
B44eaec:L44eaec:{c.instructions+=7;NFSU2_TR(0x44eaec);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44eaf0:{NFSU2_TR(0x44eaf0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eaf1:{NFSU2_TR(0x44eaf1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44eaf8:{NFSU2_TR(0x44eaf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eaf9:{NFSU2_TR(0x44eaf9);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44eafd:{NFSU2_TR(0x44eafd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eafe:{NFSU2_TR(0x44eafe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eb03ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B44eb03:L44eb03:{c.instructions+=2;NFSU2_TR(0x44eb03);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44eb0a:{NFSU2_TR(0x44eb0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B44eb0d:L44eb0d:{c.instructions+=6;NFSU2_TR(0x44eb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44eb10:{NFSU2_TR(0x44eb10);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44eb13:{NFSU2_TR(0x44eb13);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44eb15:{NFSU2_TR(0x44eb15);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44eb17:{NFSU2_TR(0x44eb17);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44eb1a:{NFSU2_TR(0x44eb1a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44eb22;}}
}
B44eb1c:L44eb1c:{c.instructions+=1;NFSU2_TR(0x44eb1c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44eb22:L44eb22:{c.instructions+=4;NFSU2_TR(0x44eb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44eb25:{NFSU2_TR(0x44eb25);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44eb29:{NFSU2_TR(0x44eb29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eb2a:{NFSU2_TR(0x44eb2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eb2full));
TAIL_STATIC(0x574cd0u,574);
}
B44eb2f:L44eb2f:{c.instructions+=4;NFSU2_TR(0x44eb2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44eb32:{NFSU2_TR(0x44eb32);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44eb36:{NFSU2_TR(0x44eb36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eb37:{NFSU2_TR(0x44eb37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eb3cull));
TAIL_STATIC(0x574cd0u,574);
}
B44eb3c:L44eb3c:{c.instructions+=3;NFSU2_TR(0x44eb3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eb3f:{NFSU2_TR(0x44eb3f);
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
B44eb41:{NFSU2_TR(0x44eb41);
if(r1(R+518)){{goto L44eb54;}}
}
B44eb43:L44eb43:{c.instructions+=4;NFSU2_TR(0x44eb43);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44eb4a:{NFSU2_TR(0x44eb4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eb4b:{NFSU2_TR(0x44eb4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eb4c:{NFSU2_TR(0x44eb4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eb51ull));
TAIL_STATIC(0x4012b0u,401);
}
B44eb51:L44eb51:{c.instructions+=1;NFSU2_TR(0x44eb51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44eb54:L44eb54:{c.instructions+=3;NFSU2_TR(0x44eb54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eb57:{NFSU2_TR(0x44eb57);
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
B44eb59:{NFSU2_TR(0x44eb59);
if(r1(R+518)){{goto L44eb6c;}}
}
B44eb5b:L44eb5b:{c.instructions+=4;NFSU2_TR(0x44eb5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44eb62:{NFSU2_TR(0x44eb62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eb63:{NFSU2_TR(0x44eb63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eb64:{NFSU2_TR(0x44eb64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eb69ull));
TAIL_STATIC(0x4012b0u,401);
}
B44eb69:L44eb69:{c.instructions+=1;NFSU2_TR(0x44eb69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44eb6c:L44eb6c:{c.instructions+=3;NFSU2_TR(0x44eb6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eb6f:{NFSU2_TR(0x44eb6f);
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
B44eb71:{NFSU2_TR(0x44eb71);
if(r1(R+518)){{goto L44eb84;}}
}
B44eb73:L44eb73:{c.instructions+=4;NFSU2_TR(0x44eb73);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44eb7a:{NFSU2_TR(0x44eb7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eb7b:{NFSU2_TR(0x44eb7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eb7c:{NFSU2_TR(0x44eb7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eb81ull));
TAIL_STATIC(0x4012b0u,401);
}
B44eb81:L44eb81:{c.instructions+=1;NFSU2_TR(0x44eb81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44eb84:L44eb84:{c.instructions+=3;NFSU2_TR(0x44eb84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eb87:{NFSU2_TR(0x44eb87);
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
B44eb89:{NFSU2_TR(0x44eb89);
if(r1(R+518)){{goto L44eb9c;}}
}
B44eb8b:L44eb8b:{c.instructions+=4;NFSU2_TR(0x44eb8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44eb92:{NFSU2_TR(0x44eb92);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eb93:{NFSU2_TR(0x44eb93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eb94:{NFSU2_TR(0x44eb94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eb99ull));
TAIL_STATIC(0x4012b0u,401);
}
B44eb99:L44eb99:{c.instructions+=1;NFSU2_TR(0x44eb99);
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
B44eb9c:L44eb9c:{c.instructions+=6;NFSU2_TR(0x44eb9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44eb9d:{NFSU2_TR(0x44eb9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44eb9e:{NFSU2_TR(0x44eb9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44eb9f:{NFSU2_TR(0x44eb9f);
__builtin_memmove((R+16),(R+20),4);
}
B44eba1:{NFSU2_TR(0x44eba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44eba2:{NFSU2_TR(0x44eba2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ebb0:L44ebb0:{c.instructions+=9;NFSU2_TR(0x44ebb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ebb1:{NFSU2_TR(0x44ebb1);
__builtin_memmove((R+20),(R+16),4);
}
B44ebb3:{NFSU2_TR(0x44ebb3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44ebb6:{NFSU2_TR(0x44ebb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf8ull))));
}
B44ebbc:{NFSU2_TR(0x44ebbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ebbd:{NFSU2_TR(0x44ebbd);
__builtin_memmove((R+24),(R+4),4);
}
B44ebbf:{NFSU2_TR(0x44ebbf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ebc0:{NFSU2_TR(0x44ebc0);
w4(R+4,u32(0x865480ull));
}
B44ebc5:{NFSU2_TR(0x44ebc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ebcaull));
TAIL_STATIC(0x571250u,571);
}
B44ebca:L44ebca:{c.instructions+=2;NFSU2_TR(0x44ebca);
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
B44ebcc:{NFSU2_TR(0x44ebcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44ed44;}}
}
B44ebd2:L44ebd2:{c.instructions+=23;NFSU2_TR(0x44ebd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ebd5:{NFSU2_TR(0x44ebd5);
__builtin_memmove((R+8),gp(0x787224),4);
}
B44ebdb:{NFSU2_TR(0x44ebdb);
__builtin_memmove((R+4),gp(0x787220),4);
}
B44ebe1:{NFSU2_TR(0x44ebe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ebe4:{NFSU2_TR(0x44ebe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ebe7:{NFSU2_TR(0x44ebe7);
__builtin_memmove((R+4),(R+8),4);
}
B44ebe9:{NFSU2_TR(0x44ebe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ebec:{NFSU2_TR(0x44ebec);
__builtin_memmove((R+4),gp(0x787228),4);
}
B44ebf2:{NFSU2_TR(0x44ebf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ebf5:{NFSU2_TR(0x44ebf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ebfb:{NFSU2_TR(0x44ebfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ebfe:{NFSU2_TR(0x44ebfe);
__builtin_memmove((R+8),(R+4),4);
}
B44ec00:{NFSU2_TR(0x44ec00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ec03:{NFSU2_TR(0x44ec03);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec05:{NFSU2_TR(0x44ec05);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44ec0c:{NFSU2_TR(0x44ec0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec0d:{NFSU2_TR(0x44ec0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ec10:{NFSU2_TR(0x44ec10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ec16:{NFSU2_TR(0x44ec16);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec18:{NFSU2_TR(0x44ec18);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44ec1f:{NFSU2_TR(0x44ec1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec20:{NFSU2_TR(0x44ec20);
__builtin_memmove((R+4),(R+24),4);
}
B44ec22:{NFSU2_TR(0x44ec22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ec27ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44e320u);}goto L44e320;}
}
B44ec27:L44ec27:{c.instructions+=3;NFSU2_TR(0x44ec27);
__builtin_memmove((R+0),gp(0x890084),4);
}
B44ec2c:{NFSU2_TR(0x44ec2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44ec2e:{NFSU2_TR(0x44ec2e);
if(r1(R+518)){{goto L44ec3c;}}
}
B44ec30:L44ec30:{c.instructions+=3;NFSU2_TR(0x44ec30);
__builtin_memmove((R+4),gp(0x865198),4);
}
B44ec36:{NFSU2_TR(0x44ec36);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ec3a:{NFSU2_TR(0x44ec3a);
{goto L44ec46;}
}
B44ec3c:L44ec3c:{c.instructions+=2;NFSU2_TR(0x44ec3c);
__builtin_memmove((R+8),gp(0x865154),4);
}
B44ec42:{NFSU2_TR(0x44ec42);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ec46:L44ec46:{c.instructions+=6;NFSU2_TR(0x44ec46);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44ec4a:{NFSU2_TR(0x44ec4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ec4d:{NFSU2_TR(0x44ec4d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec4f:{NFSU2_TR(0x44ec4f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec51:{NFSU2_TR(0x44ec51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec52:{NFSU2_TR(0x44ec52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ec57ull));
TAIL_STATIC(0x5749e0u,574);
}
B44ec57:L44ec57:{c.instructions+=5;NFSU2_TR(0x44ec57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ec5a:{NFSU2_TR(0x44ec5a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec5c:{NFSU2_TR(0x44ec5c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec5e:{NFSU2_TR(0x44ec5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec5f:{NFSU2_TR(0x44ec5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ec64ull));
TAIL_STATIC(0x574df0u,574);
}
B44ec64:L44ec64:{c.instructions+=5;NFSU2_TR(0x44ec64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ec67:{NFSU2_TR(0x44ec67);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec69:{NFSU2_TR(0x44ec69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec6b:{NFSU2_TR(0x44ec6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ec6c:{NFSU2_TR(0x44ec6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ec71ull));
TAIL_STATIC(0x574df0u,574);
}
B44ec71:L44ec71:{c.instructions+=24;NFSU2_TR(0x44ec71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ec74:{NFSU2_TR(0x44ec74);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44ec7c:{NFSU2_TR(0x44ec7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44ec84:{NFSU2_TR(0x44ec84);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44ec8c:{NFSU2_TR(0x44ec8c);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ec8f:{NFSU2_TR(0x44ec8f);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ec92:{NFSU2_TR(0x44ec92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44ec94:{NFSU2_TR(0x44ec94);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ec98:{NFSU2_TR(0x44ec98);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ec9c:{NFSU2_TR(0x44ec9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ec9f:{NFSU2_TR(0x44ec9f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44eca3:{NFSU2_TR(0x44eca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B44eca5:{NFSU2_TR(0x44eca5);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44eca8:{NFSU2_TR(0x44eca8);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44ecac:{NFSU2_TR(0x44ecac);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ecaf:{NFSU2_TR(0x44ecaf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ecb0:{NFSU2_TR(0x44ecb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44ecb7:{NFSU2_TR(0x44ecb7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ecbb:{NFSU2_TR(0x44ecbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ecbf:{NFSU2_TR(0x44ecbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ecc0:{NFSU2_TR(0x44ecc0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ecc4:{NFSU2_TR(0x44ecc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44ecc8:{NFSU2_TR(0x44ecc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ecc9:{NFSU2_TR(0x44ecc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ecceull));
TAIL_STATIC(0x43c9c0u,43c);
}
B44ecce:L44ecce:{c.instructions+=7;NFSU2_TR(0x44ecce);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44ecd2:{NFSU2_TR(0x44ecd2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ecd3:{NFSU2_TR(0x44ecd3);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44ecda:{NFSU2_TR(0x44ecda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ecdb:{NFSU2_TR(0x44ecdb);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44ecdf:{NFSU2_TR(0x44ecdf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ece0:{NFSU2_TR(0x44ece0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ece5ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B44ece5:L44ece5:{c.instructions+=9;NFSU2_TR(0x44ece5);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44ece9:{NFSU2_TR(0x44ece9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ecea:{NFSU2_TR(0x44ecea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44ecee:{NFSU2_TR(0x44ecee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ecef:{NFSU2_TR(0x44ecef);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44ecf3:{NFSU2_TR(0x44ecf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ecf4:{NFSU2_TR(0x44ecf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44ecf8:{NFSU2_TR(0x44ecf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ecf9:{NFSU2_TR(0x44ecf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ecfeull));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B44ecfe:L44ecfe:{c.instructions+=8;NFSU2_TR(0x44ecfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ed01:{NFSU2_TR(0x44ed01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B44ed04:{NFSU2_TR(0x44ed04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ed06:{NFSU2_TR(0x44ed06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ed07:{NFSU2_TR(0x44ed07);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44ed0b:{NFSU2_TR(0x44ed0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ed0c:{NFSU2_TR(0x44ed0c);
__builtin_memmove((R+4),(R+24),4);
}
B44ed0e:{NFSU2_TR(0x44ed0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ed13ull));
TAIL_STATIC(0x444530u,444);
}
B44ed13:L44ed13:{c.instructions+=3;NFSU2_TR(0x44ed13);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44ed18:{NFSU2_TR(0x44ed18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44ed1a:{NFSU2_TR(0x44ed1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44ed30;}}
}
B44ed1c:L44ed1c:{c.instructions+=3;NFSU2_TR(0x44ed1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44ed1f:{NFSU2_TR(0x44ed1f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ed21:{NFSU2_TR(0x44ed21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ed26ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44ed26:L44ed26:{c.instructions+=2;NFSU2_TR(0x44ed26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ed29:{NFSU2_TR(0x44ed29);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44ed30:L44ed30:{c.instructions+=6;NFSU2_TR(0x44ed30);
__builtin_memmove((R+8),gp(0x865154),4);
}
B44ed36:{NFSU2_TR(0x44ed36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ed39:{NFSU2_TR(0x44ed39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ed3a:{NFSU2_TR(0x44ed3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44ed3e:{NFSU2_TR(0x44ed3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ed3f:{NFSU2_TR(0x44ed3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ed44ull));
TAIL_STATIC(0x447280u,447);
}
B44ed44:L44ed44:{c.instructions+=5;NFSU2_TR(0x44ed44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44ed45:{NFSU2_TR(0x44ed45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44ed46:{NFSU2_TR(0x44ed46);
__builtin_memmove((R+16),(R+20),4);
}
B44ed48:{NFSU2_TR(0x44ed48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44ed49:{NFSU2_TR(0x44ed49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ed50:L44ed50:{c.instructions+=6;NFSU2_TR(0x44ed50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ed54:{NFSU2_TR(0x44ed54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ed55:{NFSU2_TR(0x44ed55);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ed57:{NFSU2_TR(0x44ed57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ed58:{NFSU2_TR(0x44ed58);
__builtin_memmove((R+24),(R+4),4);
}
B44ed5a:{NFSU2_TR(0x44ed5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ed5full));
TAIL_STATIC(0x44ab90u,44a);
}
B44ed5f:L44ed5f:{c.instructions+=5;NFSU2_TR(0x44ed5f);
u8 U[4];
w4(U+0,u32(0x787fc8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44ed65:{NFSU2_TR(0x44ed65);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44ed6a:{NFSU2_TR(0x44ed6a);
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
B44ed6c:{NFSU2_TR(0x44ed6c);
__builtin_memmove((R+0),(R+24),4);
}
B44ed6e:{NFSU2_TR(0x44ed6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44ed7d;}}
}
B44ed70:L44ed70:{c.instructions+=2;NFSU2_TR(0x44ed70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ed73:{NFSU2_TR(0x44ed73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x280ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44ed7d:L44ed7d:{c.instructions+=2;NFSU2_TR(0x44ed7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44ed7e:{NFSU2_TR(0x44ed7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ed90:L44ed90:{c.instructions+=4;NFSU2_TR(0x44ed90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ed91:{NFSU2_TR(0x44ed91);
__builtin_memmove((R+24),(R+4),4);
}
B44ed93:{NFSU2_TR(0x44ed93);
w4(R+4,u32(0x865480ull));
}
B44ed98:{NFSU2_TR(0x44ed98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ed9dull));
TAIL_STATIC(0x571250u,571);
}
B44ed9d:L44ed9d:{c.instructions+=2;NFSU2_TR(0x44ed9d);
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
B44ed9f:{NFSU2_TR(0x44ed9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44edd6;}}
}
B44eda1:L44eda1:{c.instructions+=3;NFSU2_TR(0x44eda1);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44eda6:{NFSU2_TR(0x44eda6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44eda8:{NFSU2_TR(0x44eda8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44edbe;}}
}
B44edaa:L44edaa:{c.instructions+=4;NFSU2_TR(0x44edaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44edad:{NFSU2_TR(0x44edad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44edb0:{NFSU2_TR(0x44edb0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B44edb7:{NFSU2_TR(0x44edb7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44edbe:L44edbe:{c.instructions+=7;NFSU2_TR(0x44edbe);
__builtin_memmove((R+0),gp(0x865198),4);
}
B44edc3:{NFSU2_TR(0x44edc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44edc6:{NFSU2_TR(0x44edc6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x190ull))));
}
B44edcc:{NFSU2_TR(0x44edcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44edcd:{NFSU2_TR(0x44edcd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44edce:{NFSU2_TR(0x44edce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44edd1:{NFSU2_TR(0x44edd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44edd6ull));
TAIL_STATIC(0x447280u,447);
}
B44edd6:L44edd6:{c.instructions+=2;NFSU2_TR(0x44edd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44edd7:{NFSU2_TR(0x44edd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ede0:L44ede0:{c.instructions+=18;NFSU2_TR(0x44ede0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ede2:{NFSU2_TR(0x44ede2);
u8 U[4];
w4(U+0,u32(0x772068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ede7:{NFSU2_TR(0x44ede7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eded:{NFSU2_TR(0x44eded);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44edee:{NFSU2_TR(0x44edee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44edf5:{NFSU2_TR(0x44edf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44edf6:{NFSU2_TR(0x44edf6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44edf7:{NFSU2_TR(0x44edf7);
__builtin_memmove((R+24),(R+4),4);
}
B44edf9:{NFSU2_TR(0x44edf9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44edfa:{NFSU2_TR(0x44edfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44edfe:{NFSU2_TR(0x44edfe);
u8 U[4];
w4(U+0,u32(0x788018ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44ee04:{NFSU2_TR(0x44ee04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee07:{NFSU2_TR(0x44ee07);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B44ee09:{NFSU2_TR(0x44ee09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ee0f:{NFSU2_TR(0x44ee0f);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44ee15:{NFSU2_TR(0x44ee15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee18:{NFSU2_TR(0x44ee18);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ee1c:{NFSU2_TR(0x44ee1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44ee24;}}
}
B44ee1e:L44ee1e:{c.instructions+=1;NFSU2_TR(0x44ee1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ee24:L44ee24:{c.instructions+=3;NFSU2_TR(0x44ee24);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44ee2a:{NFSU2_TR(0x44ee2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee2d:{NFSU2_TR(0x44ee2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44ee35;}}
}
B44ee2f:L44ee2f:{c.instructions+=1;NFSU2_TR(0x44ee2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ee35:L44ee35:{c.instructions+=3;NFSU2_TR(0x44ee35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee38:{NFSU2_TR(0x44ee38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ee39:{NFSU2_TR(0x44ee39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ee3eull));
TAIL_STATIC(0x48b1e0u,48b);
}
B44ee3e:L44ee3e:{c.instructions+=3;NFSU2_TR(0x44ee3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44ee41:{NFSU2_TR(0x44ee41);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44ee43:{NFSU2_TR(0x44ee43);
if(r1(R+518)){{goto L44ee57;}}
}
B44ee45:L44ee45:{c.instructions+=6;NFSU2_TR(0x44ee45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ee48:{NFSU2_TR(0x44ee48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ee4b:{NFSU2_TR(0x44ee4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ee4e:{NFSU2_TR(0x44ee4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ee51:{NFSU2_TR(0x44ee51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee54:{NFSU2_TR(0x44ee54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ee57:L44ee57:{c.instructions+=3;NFSU2_TR(0x44ee57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee5a:{NFSU2_TR(0x44ee5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ee5b:{NFSU2_TR(0x44ee5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ee60ull));
TAIL_STATIC(0x575630u,575);
}
B44ee60:L44ee60:{c.instructions+=3;NFSU2_TR(0x44ee60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee63:{NFSU2_TR(0x44ee63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ee64:{NFSU2_TR(0x44ee64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ee69ull));
TAIL_STATIC(0x575630u,575);
}
B44ee69:L44ee69:{c.instructions+=3;NFSU2_TR(0x44ee69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee6c:{NFSU2_TR(0x44ee6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ee6d:{NFSU2_TR(0x44ee6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ee72ull));
TAIL_STATIC(0x575630u,575);
}
B44ee72:L44ee72:{c.instructions+=3;NFSU2_TR(0x44ee72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee75:{NFSU2_TR(0x44ee75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ee76:{NFSU2_TR(0x44ee76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ee7bull));
TAIL_STATIC(0x575630u,575);
}
B44ee7b:L44ee7b:{c.instructions+=3;NFSU2_TR(0x44ee7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee7e:{NFSU2_TR(0x44ee7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ee7f:{NFSU2_TR(0x44ee7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ee84ull));
TAIL_STATIC(0x575630u,575);
}
B44ee84:L44ee84:{c.instructions+=3;NFSU2_TR(0x44ee84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee87:{NFSU2_TR(0x44ee87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ee88:{NFSU2_TR(0x44ee88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ee8dull));
TAIL_STATIC(0x575630u,575);
}
B44ee8d:L44ee8d:{c.instructions+=3;NFSU2_TR(0x44ee8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee90:{NFSU2_TR(0x44ee90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ee91:{NFSU2_TR(0x44ee91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ee96ull));
TAIL_STATIC(0x575630u,575);
}
B44ee96:L44ee96:{c.instructions+=3;NFSU2_TR(0x44ee96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ee99:{NFSU2_TR(0x44ee99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ee9a:{NFSU2_TR(0x44ee9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ee9full));
TAIL_STATIC(0x575630u,575);
}
B44ee9f:L44ee9f:{c.instructions+=3;NFSU2_TR(0x44ee9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eea2:{NFSU2_TR(0x44eea2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eea3:{NFSU2_TR(0x44eea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eea8ull));
TAIL_STATIC(0x575630u,575);
}
B44eea8:L44eea8:{c.instructions+=3;NFSU2_TR(0x44eea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eeab:{NFSU2_TR(0x44eeab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eeac:{NFSU2_TR(0x44eeac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eeb1ull));
TAIL_STATIC(0x575630u,575);
}
B44eeb1:L44eeb1:{c.instructions+=3;NFSU2_TR(0x44eeb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eeb4:{NFSU2_TR(0x44eeb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eeb5:{NFSU2_TR(0x44eeb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eebaull));
TAIL_STATIC(0x575630u,575);
}
B44eeba:L44eeba:{c.instructions+=3;NFSU2_TR(0x44eeba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eebd:{NFSU2_TR(0x44eebd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eebe:{NFSU2_TR(0x44eebe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eec3ull));
TAIL_STATIC(0x575630u,575);
}
B44eec3:L44eec3:{c.instructions+=3;NFSU2_TR(0x44eec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eec6:{NFSU2_TR(0x44eec6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eec7:{NFSU2_TR(0x44eec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eeccull));
TAIL_STATIC(0x575630u,575);
}
B44eecc:L44eecc:{c.instructions+=4;NFSU2_TR(0x44eecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44eecf:{NFSU2_TR(0x44eecf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B44eed2:{NFSU2_TR(0x44eed2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B44eed4:{NFSU2_TR(0x44eed4);
if(r1(R+518)){{goto L44eedc;}}
}
B44eed6:L44eed6:{c.instructions+=3;NFSU2_TR(0x44eed6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B44eed8:{NFSU2_TR(0x44eed8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eeda:{NFSU2_TR(0x44eeda);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eedcull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B44eedc:L44eedc:{c.instructions+=3;NFSU2_TR(0x44eedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eedf:{NFSU2_TR(0x44eedf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eee0:{NFSU2_TR(0x44eee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eee5ull));
TAIL_STATIC(0x575630u,575);
}
B44eee5:L44eee5:{c.instructions+=10;NFSU2_TR(0x44eee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eee8:{NFSU2_TR(0x44eee8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x270ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44eeef:{NFSU2_TR(0x44eeef);
__builtin_memmove((R+4),gp(0x7fb708),4);
}
B44eef5:{NFSU2_TR(0x44eef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44eefb:{NFSU2_TR(0x44eefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44eefe:{NFSU2_TR(0x44eefe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44ef01:{NFSU2_TR(0x44ef01);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44ef03:{NFSU2_TR(0x44ef03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B44ef0b:{NFSU2_TR(0x44ef0b);
u8 U[4];
w4(U+0,u32(0x787cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44ef11:{NFSU2_TR(0x44ef11);
if(r1(R+518)){{goto L44ef34;}}
}
B44ef13:L44ef13:{c.instructions+=9;NFSU2_TR(0x44ef13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ef16:{NFSU2_TR(0x44ef16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ef19:{NFSU2_TR(0x44ef19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ef1c:{NFSU2_TR(0x44ef1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44ef22:{NFSU2_TR(0x44ef22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ef25:{NFSU2_TR(0x44ef25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ef2b:{NFSU2_TR(0x44ef2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ef2c:{NFSU2_TR(0x44ef2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ef2f:{NFSU2_TR(0x44ef2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ef34ull));
TAIL_STATIC(0x48f760u,48f);
}
B44ef34:L44ef34:{c.instructions+=4;NFSU2_TR(0x44ef34);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44ef38:{NFSU2_TR(0x44ef38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44ef39:{NFSU2_TR(0x44ef39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44ef3a:{NFSU2_TR(0x44ef3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44ef42;}}
}
B44ef3c:L44ef3c:{c.instructions+=1;NFSU2_TR(0x44ef3c);
s4(0x883dfc,u32(u32(m4(0x883dfc))-u32(u32(0x1ull))));
}
B44ef42:L44ef42:{c.instructions+=4;NFSU2_TR(0x44ef42);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ef46:{NFSU2_TR(0x44ef46);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ef4d:{NFSU2_TR(0x44ef4d);
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
B44ef50:{NFSU2_TR(0x44ef50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ef60:L44ef60:{c.instructions+=3;NFSU2_TR(0x44ef60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ef61:{NFSU2_TR(0x44ef61);
__builtin_memmove((R+24),(R+4),4);
}
B44ef63:{NFSU2_TR(0x44ef63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ef68ull));
TAIL_STATIC(0x446400u,446);
}
B44ef68:L44ef68:{c.instructions+=3;NFSU2_TR(0x44ef68);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44ef6d:{NFSU2_TR(0x44ef6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44ef6f:{NFSU2_TR(0x44ef6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44efc8;}}
}
B44ef71:L44ef71:{c.instructions+=3;NFSU2_TR(0x44ef71);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ef74:{NFSU2_TR(0x44ef74);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ef7a:{NFSU2_TR(0x44ef7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ef7full));
TAIL_STATIC(0x75bed4u,75b);
}
B44ef7f:L44ef7f:{c.instructions+=13;NFSU2_TR(0x44ef7f);
__builtin_memmove((R+4),(R+0),4);
}
B44ef81:{NFSU2_TR(0x44ef81);
w4(R+0,u32(0xb60b60b7ull));
}
B44ef86:{NFSU2_TR(0x44ef86);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B44ef88:{NFSU2_TR(0x44ef88);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B44ef8a:{NFSU2_TR(0x44ef8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ef8d:{NFSU2_TR(0x44ef8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B44ef90:{NFSU2_TR(0x44ef90);
__builtin_memmove((R+0),(R+8),4);
}
B44ef92:{NFSU2_TR(0x44ef92);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B44ef95:{NFSU2_TR(0x44ef95);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B44ef97:{NFSU2_TR(0x44ef97);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44ef9e:{NFSU2_TR(0x44ef9e);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44efa3:{NFSU2_TR(0x44efa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44efa5:{NFSU2_TR(0x44efa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44efc8;}}
}
B44efa7:L44efa7:{c.instructions+=6;NFSU2_TR(0x44efa7);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44efaa:{NFSU2_TR(0x44efaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44efad:{NFSU2_TR(0x44efad);
{u32 ea_=u32(r4(R+8)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44efb3:{NFSU2_TR(0x44efb3);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44efb8:{NFSU2_TR(0x44efb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44efba:{NFSU2_TR(0x44efba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44efc8;}}
}
B44efbc:L44efbc:{c.instructions+=3;NFSU2_TR(0x44efbc);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44efbf:{NFSU2_TR(0x44efbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44efc2:{NFSU2_TR(0x44efc2);
{u32 ea_=u32(r4(R+0)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44efc8:L44efc8:{c.instructions+=6;NFSU2_TR(0x44efc8);
__builtin_memmove((R+4),gp(0x865198),4);
}
B44efce:{NFSU2_TR(0x44efce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44efcf:{NFSU2_TR(0x44efcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44efd2:{NFSU2_TR(0x44efd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44efd5:{NFSU2_TR(0x44efd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44efd6:{NFSU2_TR(0x44efd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44efdbull));
TAIL_STATIC(0x447280u,447);
}
B44efdb:L44efdb:{c.instructions+=2;NFSU2_TR(0x44efdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44efdc:{NFSU2_TR(0x44efdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44efe0:L44efe0:{c.instructions+=11;NFSU2_TR(0x44efe0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44efe1:{NFSU2_TR(0x44efe1);
__builtin_memmove((R+20),(R+16),4);
}
B44efe3:{NFSU2_TR(0x44efe3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44efe6:{NFSU2_TR(0x44efe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B44efe9:{NFSU2_TR(0x44efe9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44efea:{NFSU2_TR(0x44efea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44efeb:{NFSU2_TR(0x44efeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44efec:{NFSU2_TR(0x44efec);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B44efee:{NFSU2_TR(0x44efee);
__builtin_memmove((R+28),(R+28),4);
}
B44eff0:{NFSU2_TR(0x44eff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44eff1:{NFSU2_TR(0x44eff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44eff6ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B44eff6:L44eff6:{c.instructions+=3;NFSU2_TR(0x44eff6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44eff9:{NFSU2_TR(0x44eff9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44effb:{NFSU2_TR(0x44effb);
if(r1(R+518)){TAIL_STATIC(0x44f019u,44f);}
}
B44effd:L44effd:{c.instructions+=1;NFSU2_TR(0x44effd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x44f000u,44f);
}
XIT:NFSU2_TR_EXIT(0x44e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
