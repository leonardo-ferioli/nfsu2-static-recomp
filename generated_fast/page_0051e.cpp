#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x51e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x51e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_51e(u8* __restrict R,Cpu& c);
u32 page_51e(Cpu& c){return body_51e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_51e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x51e001:goto L51e001;
case 0x51e004:c.instructions+=8;goto B51e004;
case 0x51e00a:c.instructions+=7;goto B51e00a;
case 0x51e00d:c.instructions+=6;goto B51e00d;
case 0x51e010:c.instructions+=5;goto B51e010;
case 0x51e012:c.instructions+=4;goto B51e012;
case 0x51e015:c.instructions+=3;goto B51e015;
case 0x51e018:c.instructions+=2;goto B51e018;
case 0x51e019:c.instructions+=1;goto B51e019;
case 0x51e020:goto L51e020;
case 0x51e021:c.instructions+=5;goto B51e021;
case 0x51e023:c.instructions+=4;goto B51e023;
case 0x51e024:c.instructions+=3;goto B51e024;
case 0x51e027:c.instructions+=2;goto B51e027;
case 0x51e029:c.instructions+=1;goto B51e029;
case 0x51e02b:goto L51e02b;
case 0x51e02c:c.instructions+=3;goto B51e02c;
case 0x51e02f:c.instructions+=2;goto B51e02f;
case 0x51e031:c.instructions+=1;goto B51e031;
case 0x51e033:goto L51e033;
case 0x51e038:c.instructions+=1;goto B51e038;
case 0x51e03d:goto L51e03d;
case 0x51e040:c.instructions+=3;goto B51e040;
case 0x51e043:c.instructions+=2;goto B51e043;
case 0x51e045:c.instructions+=1;goto B51e045;
case 0x51e047:goto L51e047;
case 0x51e04a:c.instructions+=2;goto B51e04a;
case 0x51e04c:c.instructions+=1;goto B51e04c;
case 0x51e04e:goto L51e04e;
case 0x51e050:goto L51e050;
case 0x51e052:c.instructions+=1;goto B51e052;
case 0x51e054:goto L51e054;
case 0x51e057:c.instructions+=1;goto B51e057;
case 0x51e059:goto L51e059;
case 0x51e05b:c.instructions+=2;goto B51e05b;
case 0x51e05e:c.instructions+=1;goto B51e05e;
case 0x51e063:goto L51e063;
case 0x51e066:c.instructions+=1;goto B51e066;
case 0x51e06d:goto L51e06d;
case 0x51e074:goto L51e074;
case 0x51e075:goto L51e075;
case 0x51e078:c.instructions+=4;goto B51e078;
case 0x51e07a:c.instructions+=3;goto B51e07a;
case 0x51e07b:c.instructions+=2;goto B51e07b;
case 0x51e07c:c.instructions+=1;goto B51e07c;
case 0x51e07e:goto L51e07e;
case 0x51e080:c.instructions+=3;goto B51e080;
case 0x51e085:c.instructions+=2;goto B51e085;
case 0x51e086:c.instructions+=1;goto B51e086;
case 0x51e08b:goto L51e08b;
case 0x51e08e:goto L51e08e;
case 0x51e090:goto L51e090;
case 0x51e092:c.instructions+=24;goto B51e092;
case 0x51e096:c.instructions+=23;goto B51e096;
case 0x51e09c:c.instructions+=22;goto B51e09c;
case 0x51e09e:c.instructions+=21;goto B51e09e;
case 0x51e0a1:c.instructions+=20;goto B51e0a1;
case 0x51e0a4:c.instructions+=19;goto B51e0a4;
case 0x51e0a7:c.instructions+=18;goto B51e0a7;
case 0x51e0ab:c.instructions+=17;goto B51e0ab;
case 0x51e0ad:c.instructions+=16;goto B51e0ad;
case 0x51e0b0:c.instructions+=15;goto B51e0b0;
case 0x51e0b3:c.instructions+=14;goto B51e0b3;
case 0x51e0b6:c.instructions+=13;goto B51e0b6;
case 0x51e0bd:c.instructions+=12;goto B51e0bd;
case 0x51e0c4:c.instructions+=11;goto B51e0c4;
case 0x51e0c6:c.instructions+=10;goto B51e0c6;
case 0x51e0c9:c.instructions+=9;goto B51e0c9;
case 0x51e0cd:c.instructions+=8;goto B51e0cd;
case 0x51e0d0:c.instructions+=7;goto B51e0d0;
case 0x51e0d6:c.instructions+=6;goto B51e0d6;
case 0x51e0d9:c.instructions+=5;goto B51e0d9;
case 0x51e0dc:c.instructions+=4;goto B51e0dc;
case 0x51e0de:c.instructions+=3;goto B51e0de;
case 0x51e0e1:c.instructions+=2;goto B51e0e1;
case 0x51e0e4:c.instructions+=1;goto B51e0e4;
case 0x51e0f0:goto L51e0f0;
case 0x51e0f1:c.instructions+=8;goto B51e0f1;
case 0x51e0f3:c.instructions+=7;goto B51e0f3;
case 0x51e0f6:c.instructions+=6;goto B51e0f6;
case 0x51e0f9:c.instructions+=5;goto B51e0f9;
case 0x51e0fc:c.instructions+=4;goto B51e0fc;
case 0x51e0fd:c.instructions+=3;goto B51e0fd;
case 0x51e0fe:c.instructions+=2;goto B51e0fe;
case 0x51e0ff:c.instructions+=1;goto B51e0ff;
case 0x51e104:goto L51e104;
case 0x51e107:c.instructions+=3;goto B51e107;
case 0x51e10a:c.instructions+=2;goto B51e10a;
case 0x51e10c:c.instructions+=1;goto B51e10c;
case 0x51e10e:goto L51e10e;
case 0x51e111:c.instructions+=8;goto B51e111;
case 0x51e114:c.instructions+=7;goto B51e114;
case 0x51e117:c.instructions+=6;goto B51e117;
case 0x51e11b:c.instructions+=5;goto B51e11b;
case 0x51e11e:c.instructions+=4;goto B51e11e;
case 0x51e121:c.instructions+=3;goto B51e121;
case 0x51e124:c.instructions+=2;goto B51e124;
case 0x51e125:c.instructions+=1;goto B51e125;
case 0x51e12a:goto L51e12a;
case 0x51e12d:goto L51e12d;
case 0x51e12e:c.instructions+=1;goto B51e12e;
case 0x51e130:goto L51e130;
case 0x51e131:c.instructions+=5;goto B51e131;
case 0x51e133:c.instructions+=4;goto B51e133;
case 0x51e134:c.instructions+=3;goto B51e134;
case 0x51e137:c.instructions+=2;goto B51e137;
case 0x51e139:c.instructions+=1;goto B51e139;
case 0x51e13b:goto L51e13b;
case 0x51e13c:c.instructions+=3;goto B51e13c;
case 0x51e13f:c.instructions+=2;goto B51e13f;
case 0x51e141:c.instructions+=1;goto B51e141;
case 0x51e143:goto L51e143;
case 0x51e148:c.instructions+=1;goto B51e148;
case 0x51e14d:goto L51e14d;
case 0x51e150:c.instructions+=3;goto B51e150;
case 0x51e153:c.instructions+=2;goto B51e153;
case 0x51e155:c.instructions+=1;goto B51e155;
case 0x51e157:goto L51e157;
case 0x51e15a:c.instructions+=2;goto B51e15a;
case 0x51e15c:c.instructions+=1;goto B51e15c;
case 0x51e15e:goto L51e15e;
case 0x51e160:goto L51e160;
case 0x51e162:c.instructions+=1;goto B51e162;
case 0x51e164:goto L51e164;
case 0x51e167:c.instructions+=1;goto B51e167;
case 0x51e169:goto L51e169;
case 0x51e16b:c.instructions+=2;goto B51e16b;
case 0x51e16e:c.instructions+=1;goto B51e16e;
case 0x51e173:goto L51e173;
case 0x51e176:c.instructions+=1;goto B51e176;
case 0x51e17d:goto L51e17d;
case 0x51e184:goto L51e184;
case 0x51e185:goto L51e185;
case 0x51e188:c.instructions+=4;goto B51e188;
case 0x51e18a:c.instructions+=3;goto B51e18a;
case 0x51e18b:c.instructions+=2;goto B51e18b;
case 0x51e18c:c.instructions+=1;goto B51e18c;
case 0x51e18e:goto L51e18e;
case 0x51e190:c.instructions+=3;goto B51e190;
case 0x51e195:c.instructions+=2;goto B51e195;
case 0x51e196:c.instructions+=1;goto B51e196;
case 0x51e19b:goto L51e19b;
case 0x51e19e:goto L51e19e;
case 0x51e1b0:goto L51e1b0;
case 0x51e1b2:c.instructions+=38;goto B51e1b2;
case 0x51e1b6:c.instructions+=37;goto B51e1b6;
case 0x51e1bc:c.instructions+=36;goto B51e1bc;
case 0x51e1be:c.instructions+=35;goto B51e1be;
case 0x51e1c1:c.instructions+=34;goto B51e1c1;
case 0x51e1c4:c.instructions+=33;goto B51e1c4;
case 0x51e1c7:c.instructions+=32;goto B51e1c7;
case 0x51e1cb:c.instructions+=31;goto B51e1cb;
case 0x51e1cd:c.instructions+=30;goto B51e1cd;
case 0x51e1d0:c.instructions+=29;goto B51e1d0;
case 0x51e1d3:c.instructions+=28;goto B51e1d3;
case 0x51e1d6:c.instructions+=27;goto B51e1d6;
case 0x51e1dd:c.instructions+=26;goto B51e1dd;
case 0x51e1e4:c.instructions+=25;goto B51e1e4;
case 0x51e1ea:c.instructions+=24;goto B51e1ea;
case 0x51e1ec:c.instructions+=23;goto B51e1ec;
case 0x51e1ef:c.instructions+=22;goto B51e1ef;
case 0x51e1f2:c.instructions+=21;goto B51e1f2;
case 0x51e1f5:c.instructions+=20;goto B51e1f5;
case 0x51e1f8:c.instructions+=19;goto B51e1f8;
case 0x51e1f9:c.instructions+=18;goto B51e1f9;
case 0x51e1fd:c.instructions+=17;goto B51e1fd;
case 0x51e200:c.instructions+=16;goto B51e200;
case 0x51e203:c.instructions+=15;goto B51e203;
case 0x51e205:c.instructions+=14;goto B51e205;
case 0x51e208:c.instructions+=13;goto B51e208;
case 0x51e20b:c.instructions+=12;goto B51e20b;
case 0x51e20f:c.instructions+=11;goto B51e20f;
case 0x51e212:c.instructions+=10;goto B51e212;
case 0x51e214:c.instructions+=9;goto B51e214;
case 0x51e218:c.instructions+=8;goto B51e218;
case 0x51e21b:c.instructions+=7;goto B51e21b;
case 0x51e21e:c.instructions+=6;goto B51e21e;
case 0x51e221:c.instructions+=5;goto B51e221;
case 0x51e223:c.instructions+=4;goto B51e223;
case 0x51e226:c.instructions+=3;goto B51e226;
case 0x51e229:c.instructions+=2;goto B51e229;
case 0x51e22a:c.instructions+=1;goto B51e22a;
case 0x51e230:goto L51e230;
case 0x51e234:c.instructions+=13;goto B51e234;
case 0x51e238:c.instructions+=12;goto B51e238;
case 0x51e239:c.instructions+=11;goto B51e239;
case 0x51e23a:c.instructions+=10;goto B51e23a;
case 0x51e23e:c.instructions+=9;goto B51e23e;
case 0x51e240:c.instructions+=8;goto B51e240;
case 0x51e244:c.instructions+=7;goto B51e244;
case 0x51e245:c.instructions+=6;goto B51e245;
case 0x51e249:c.instructions+=5;goto B51e249;
case 0x51e24a:c.instructions+=4;goto B51e24a;
case 0x51e24b:c.instructions+=3;goto B51e24b;
case 0x51e24c:c.instructions+=2;goto B51e24c;
case 0x51e24e:c.instructions+=1;goto B51e24e;
case 0x51e253:goto L51e253;
case 0x51e255:c.instructions+=6;goto B51e255;
case 0x51e258:c.instructions+=5;goto B51e258;
case 0x51e25b:c.instructions+=4;goto B51e25b;
case 0x51e261:c.instructions+=3;goto B51e261;
case 0x51e263:c.instructions+=2;goto B51e263;
case 0x51e264:c.instructions+=1;goto B51e264;
case 0x51e270:goto L51e270;
case 0x51e271:c.instructions+=9;goto B51e271;
case 0x51e272:c.instructions+=8;goto B51e272;
case 0x51e273:c.instructions+=7;goto B51e273;
case 0x51e275:c.instructions+=6;goto B51e275;
case 0x51e276:c.instructions+=5;goto B51e276;
case 0x51e279:c.instructions+=4;goto B51e279;
case 0x51e27b:c.instructions+=3;goto B51e27b;
case 0x51e27d:c.instructions+=2;goto B51e27d;
case 0x51e281:c.instructions+=1;goto B51e281;
case 0x51e283:goto L51e283;
case 0x51e286:c.instructions+=2;goto B51e286;
case 0x51e288:c.instructions+=1;goto B51e288;
case 0x51e28a:goto L51e28a;
case 0x51e290:goto L51e290;
case 0x51e295:c.instructions+=1;goto B51e295;
case 0x51e29a:goto L51e29a;
case 0x51e29d:c.instructions+=3;goto B51e29d;
case 0x51e2a0:c.instructions+=2;goto B51e2a0;
case 0x51e2a2:c.instructions+=1;goto B51e2a2;
case 0x51e2a4:goto L51e2a4;
case 0x51e2a7:c.instructions+=2;goto B51e2a7;
case 0x51e2a9:c.instructions+=1;goto B51e2a9;
case 0x51e2ab:goto L51e2ab;
case 0x51e2ad:goto L51e2ad;
case 0x51e2af:c.instructions+=1;goto B51e2af;
case 0x51e2b1:goto L51e2b1;
case 0x51e2b4:c.instructions+=1;goto B51e2b4;
case 0x51e2b6:goto L51e2b6;
case 0x51e2b8:c.instructions+=2;goto B51e2b8;
case 0x51e2bb:c.instructions+=1;goto B51e2bb;
case 0x51e2c0:goto L51e2c0;
case 0x51e2c3:c.instructions+=1;goto B51e2c3;
case 0x51e2c6:goto L51e2c6;
case 0x51e2c9:goto L51e2c9;
case 0x51e2cc:c.instructions+=2;goto B51e2cc;
case 0x51e2ce:c.instructions+=1;goto B51e2ce;
case 0x51e2d0:goto L51e2d0;
case 0x51e2d3:c.instructions+=2;goto B51e2d3;
case 0x51e2d5:c.instructions+=1;goto B51e2d5;
case 0x51e2d7:goto L51e2d7;
case 0x51e2e0:goto L51e2e0;
case 0x51e2e5:c.instructions+=1;goto B51e2e5;
case 0x51e2ea:goto L51e2ea;
case 0x51e2ed:c.instructions+=3;goto B51e2ed;
case 0x51e2f0:c.instructions+=2;goto B51e2f0;
case 0x51e2f2:c.instructions+=1;goto B51e2f2;
case 0x51e2f4:goto L51e2f4;
case 0x51e2f7:c.instructions+=2;goto B51e2f7;
case 0x51e2f9:c.instructions+=1;goto B51e2f9;
case 0x51e2fb:goto L51e2fb;
case 0x51e2fd:goto L51e2fd;
case 0x51e2ff:c.instructions+=1;goto B51e2ff;
case 0x51e301:goto L51e301;
case 0x51e304:c.instructions+=1;goto B51e304;
case 0x51e306:goto L51e306;
case 0x51e308:c.instructions+=2;goto B51e308;
case 0x51e30b:c.instructions+=1;goto B51e30b;
case 0x51e310:goto L51e310;
case 0x51e313:c.instructions+=1;goto B51e313;
case 0x51e316:goto L51e316;
case 0x51e319:goto L51e319;
case 0x51e31c:c.instructions+=2;goto B51e31c;
case 0x51e31e:c.instructions+=1;goto B51e31e;
case 0x51e320:goto L51e320;
case 0x51e323:c.instructions+=2;goto B51e323;
case 0x51e325:c.instructions+=1;goto B51e325;
case 0x51e327:goto L51e327;
case 0x51e330:goto L51e330;
case 0x51e335:c.instructions+=1;goto B51e335;
case 0x51e33a:goto L51e33a;
case 0x51e33d:c.instructions+=3;goto B51e33d;
case 0x51e340:c.instructions+=2;goto B51e340;
case 0x51e342:c.instructions+=1;goto B51e342;
case 0x51e344:goto L51e344;
case 0x51e347:c.instructions+=2;goto B51e347;
case 0x51e349:c.instructions+=1;goto B51e349;
case 0x51e34b:goto L51e34b;
case 0x51e34d:goto L51e34d;
case 0x51e34f:c.instructions+=1;goto B51e34f;
case 0x51e351:goto L51e351;
case 0x51e354:c.instructions+=1;goto B51e354;
case 0x51e356:goto L51e356;
case 0x51e358:c.instructions+=2;goto B51e358;
case 0x51e35b:c.instructions+=1;goto B51e35b;
case 0x51e360:goto L51e360;
case 0x51e363:c.instructions+=1;goto B51e363;
case 0x51e366:goto L51e366;
case 0x51e369:goto L51e369;
case 0x51e36c:c.instructions+=2;goto B51e36c;
case 0x51e36e:c.instructions+=1;goto B51e36e;
case 0x51e370:goto L51e370;
case 0x51e373:c.instructions+=2;goto B51e373;
case 0x51e375:c.instructions+=1;goto B51e375;
case 0x51e377:goto L51e377;
case 0x51e380:goto L51e380;
case 0x51e385:c.instructions+=1;goto B51e385;
case 0x51e38a:goto L51e38a;
case 0x51e38d:c.instructions+=3;goto B51e38d;
case 0x51e390:c.instructions+=2;goto B51e390;
case 0x51e392:c.instructions+=1;goto B51e392;
case 0x51e394:goto L51e394;
case 0x51e397:c.instructions+=2;goto B51e397;
case 0x51e399:c.instructions+=1;goto B51e399;
case 0x51e39b:goto L51e39b;
case 0x51e39d:goto L51e39d;
case 0x51e39f:c.instructions+=1;goto B51e39f;
case 0x51e3a1:goto L51e3a1;
case 0x51e3a4:c.instructions+=1;goto B51e3a4;
case 0x51e3a6:goto L51e3a6;
case 0x51e3a8:c.instructions+=2;goto B51e3a8;
case 0x51e3ab:c.instructions+=1;goto B51e3ab;
case 0x51e3b0:goto L51e3b0;
case 0x51e3b3:c.instructions+=1;goto B51e3b3;
case 0x51e3b6:goto L51e3b6;
case 0x51e3b9:goto L51e3b9;
case 0x51e3bc:c.instructions+=6;goto B51e3bc;
case 0x51e3bd:c.instructions+=5;goto B51e3bd;
case 0x51e3be:c.instructions+=4;goto B51e3be;
case 0x51e3bf:c.instructions+=3;goto B51e3bf;
case 0x51e3c1:c.instructions+=2;goto B51e3c1;
case 0x51e3c2:c.instructions+=1;goto B51e3c2;
case 0x51e3c4:goto L51e3c4;
case 0x51e3c6:c.instructions+=3;goto B51e3c6;
case 0x51e3cb:c.instructions+=2;goto B51e3cb;
case 0x51e3cc:c.instructions+=1;goto B51e3cc;
case 0x51e3d1:goto L51e3d1;
case 0x51e3d4:goto L51e3d4;
case 0x51e3e0:goto L51e3e0;
case 0x51e3e1:c.instructions+=9;goto B51e3e1;
case 0x51e3e2:c.instructions+=8;goto B51e3e2;
case 0x51e3e3:c.instructions+=7;goto B51e3e3;
case 0x51e3e5:c.instructions+=6;goto B51e3e5;
case 0x51e3e6:c.instructions+=5;goto B51e3e6;
case 0x51e3e9:c.instructions+=4;goto B51e3e9;
case 0x51e3eb:c.instructions+=3;goto B51e3eb;
case 0x51e3ed:c.instructions+=2;goto B51e3ed;
case 0x51e3f0:c.instructions+=1;goto B51e3f0;
case 0x51e3f2:goto L51e3f2;
case 0x51e3f5:c.instructions+=2;goto B51e3f5;
case 0x51e3f7:c.instructions+=1;goto B51e3f7;
case 0x51e3f9:goto L51e3f9;
case 0x51e400:goto L51e400;
case 0x51e405:c.instructions+=1;goto B51e405;
case 0x51e40a:goto L51e40a;
case 0x51e40d:c.instructions+=3;goto B51e40d;
case 0x51e410:c.instructions+=2;goto B51e410;
case 0x51e412:c.instructions+=1;goto B51e412;
case 0x51e414:goto L51e414;
case 0x51e417:c.instructions+=2;goto B51e417;
case 0x51e419:c.instructions+=1;goto B51e419;
case 0x51e41b:goto L51e41b;
case 0x51e41d:goto L51e41d;
case 0x51e41f:c.instructions+=1;goto B51e41f;
case 0x51e421:goto L51e421;
case 0x51e424:c.instructions+=1;goto B51e424;
case 0x51e426:goto L51e426;
case 0x51e428:c.instructions+=2;goto B51e428;
case 0x51e42b:c.instructions+=1;goto B51e42b;
case 0x51e430:goto L51e430;
case 0x51e433:c.instructions+=1;goto B51e433;
case 0x51e436:goto L51e436;
case 0x51e439:goto L51e439;
case 0x51e43c:c.instructions+=2;goto B51e43c;
case 0x51e43e:c.instructions+=1;goto B51e43e;
case 0x51e440:goto L51e440;
case 0x51e443:c.instructions+=2;goto B51e443;
case 0x51e445:c.instructions+=1;goto B51e445;
case 0x51e447:goto L51e447;
case 0x51e450:goto L51e450;
case 0x51e455:c.instructions+=1;goto B51e455;
case 0x51e45a:goto L51e45a;
case 0x51e45d:c.instructions+=3;goto B51e45d;
case 0x51e460:c.instructions+=2;goto B51e460;
case 0x51e462:c.instructions+=1;goto B51e462;
case 0x51e464:goto L51e464;
case 0x51e467:c.instructions+=2;goto B51e467;
case 0x51e469:c.instructions+=1;goto B51e469;
case 0x51e46b:goto L51e46b;
case 0x51e46d:goto L51e46d;
case 0x51e46f:c.instructions+=1;goto B51e46f;
case 0x51e471:goto L51e471;
case 0x51e474:c.instructions+=1;goto B51e474;
case 0x51e476:goto L51e476;
case 0x51e478:c.instructions+=2;goto B51e478;
case 0x51e47b:c.instructions+=1;goto B51e47b;
case 0x51e480:goto L51e480;
case 0x51e483:c.instructions+=1;goto B51e483;
case 0x51e486:goto L51e486;
case 0x51e489:goto L51e489;
case 0x51e48c:c.instructions+=2;goto B51e48c;
case 0x51e48e:c.instructions+=1;goto B51e48e;
case 0x51e490:goto L51e490;
case 0x51e493:c.instructions+=2;goto B51e493;
case 0x51e495:c.instructions+=1;goto B51e495;
case 0x51e497:goto L51e497;
case 0x51e4a0:goto L51e4a0;
case 0x51e4a5:c.instructions+=1;goto B51e4a5;
case 0x51e4aa:goto L51e4aa;
case 0x51e4ad:c.instructions+=3;goto B51e4ad;
case 0x51e4b0:c.instructions+=2;goto B51e4b0;
case 0x51e4b2:c.instructions+=1;goto B51e4b2;
case 0x51e4b4:goto L51e4b4;
case 0x51e4b7:c.instructions+=2;goto B51e4b7;
case 0x51e4b9:c.instructions+=1;goto B51e4b9;
case 0x51e4bb:goto L51e4bb;
case 0x51e4bd:goto L51e4bd;
case 0x51e4bf:c.instructions+=1;goto B51e4bf;
case 0x51e4c1:goto L51e4c1;
case 0x51e4c4:c.instructions+=1;goto B51e4c4;
case 0x51e4c6:goto L51e4c6;
case 0x51e4c8:c.instructions+=2;goto B51e4c8;
case 0x51e4cb:c.instructions+=1;goto B51e4cb;
case 0x51e4d0:goto L51e4d0;
case 0x51e4d3:c.instructions+=1;goto B51e4d3;
case 0x51e4d6:goto L51e4d6;
case 0x51e4d9:goto L51e4d9;
case 0x51e4dc:c.instructions+=2;goto B51e4dc;
case 0x51e4de:c.instructions+=1;goto B51e4de;
case 0x51e4e0:goto L51e4e0;
case 0x51e4e3:c.instructions+=2;goto B51e4e3;
case 0x51e4e5:c.instructions+=1;goto B51e4e5;
case 0x51e4e7:goto L51e4e7;
case 0x51e4f0:goto L51e4f0;
case 0x51e4f5:c.instructions+=1;goto B51e4f5;
case 0x51e4fa:goto L51e4fa;
case 0x51e4fd:c.instructions+=3;goto B51e4fd;
case 0x51e500:c.instructions+=2;goto B51e500;
case 0x51e502:c.instructions+=1;goto B51e502;
case 0x51e504:goto L51e504;
case 0x51e507:c.instructions+=2;goto B51e507;
case 0x51e509:c.instructions+=1;goto B51e509;
case 0x51e50b:goto L51e50b;
case 0x51e50d:goto L51e50d;
case 0x51e50f:c.instructions+=1;goto B51e50f;
case 0x51e511:goto L51e511;
case 0x51e514:c.instructions+=1;goto B51e514;
case 0x51e516:goto L51e516;
case 0x51e518:c.instructions+=2;goto B51e518;
case 0x51e51b:c.instructions+=1;goto B51e51b;
case 0x51e520:goto L51e520;
case 0x51e523:c.instructions+=1;goto B51e523;
case 0x51e526:goto L51e526;
case 0x51e529:goto L51e529;
case 0x51e52c:c.instructions+=6;goto B51e52c;
case 0x51e52d:c.instructions+=5;goto B51e52d;
case 0x51e52e:c.instructions+=4;goto B51e52e;
case 0x51e52f:c.instructions+=3;goto B51e52f;
case 0x51e531:c.instructions+=2;goto B51e531;
case 0x51e532:c.instructions+=1;goto B51e532;
case 0x51e534:goto L51e534;
case 0x51e536:c.instructions+=3;goto B51e536;
case 0x51e53b:c.instructions+=2;goto B51e53b;
case 0x51e53c:c.instructions+=1;goto B51e53c;
case 0x51e541:goto L51e541;
case 0x51e544:goto L51e544;
case 0x51e550:goto L51e550;
case 0x51e551:c.instructions+=8;goto B51e551;
case 0x51e552:c.instructions+=7;goto B51e552;
case 0x51e553:c.instructions+=6;goto B51e553;
case 0x51e555:c.instructions+=5;goto B51e555;
case 0x51e556:c.instructions+=4;goto B51e556;
case 0x51e559:c.instructions+=3;goto B51e559;
case 0x51e55b:c.instructions+=2;goto B51e55b;
case 0x51e55d:c.instructions+=1;goto B51e55d;
case 0x51e55f:goto L51e55f;
case 0x51e562:c.instructions+=2;goto B51e562;
case 0x51e564:c.instructions+=1;goto B51e564;
case 0x51e566:goto L51e566;
case 0x51e56b:c.instructions+=1;goto B51e56b;
case 0x51e570:goto L51e570;
case 0x51e573:c.instructions+=3;goto B51e573;
case 0x51e576:c.instructions+=2;goto B51e576;
case 0x51e578:c.instructions+=1;goto B51e578;
case 0x51e57a:goto L51e57a;
case 0x51e57d:c.instructions+=2;goto B51e57d;
case 0x51e57f:c.instructions+=1;goto B51e57f;
case 0x51e581:goto L51e581;
case 0x51e583:goto L51e583;
case 0x51e585:c.instructions+=1;goto B51e585;
case 0x51e587:goto L51e587;
case 0x51e58a:c.instructions+=1;goto B51e58a;
case 0x51e58c:goto L51e58c;
case 0x51e58e:c.instructions+=2;goto B51e58e;
case 0x51e591:c.instructions+=1;goto B51e591;
case 0x51e596:goto L51e596;
case 0x51e599:c.instructions+=1;goto B51e599;
case 0x51e59c:goto L51e59c;
case 0x51e59f:goto L51e59f;
case 0x51e5a2:c.instructions+=2;goto B51e5a2;
case 0x51e5a4:c.instructions+=1;goto B51e5a4;
case 0x51e5a6:goto L51e5a6;
case 0x51e5a9:c.instructions+=2;goto B51e5a9;
case 0x51e5ab:c.instructions+=1;goto B51e5ab;
case 0x51e5ad:goto L51e5ad;
case 0x51e5b0:goto L51e5b0;
case 0x51e5b5:c.instructions+=1;goto B51e5b5;
case 0x51e5ba:goto L51e5ba;
case 0x51e5bd:c.instructions+=3;goto B51e5bd;
case 0x51e5c0:c.instructions+=2;goto B51e5c0;
case 0x51e5c2:c.instructions+=1;goto B51e5c2;
case 0x51e5c4:goto L51e5c4;
case 0x51e5c7:c.instructions+=2;goto B51e5c7;
case 0x51e5c9:c.instructions+=1;goto B51e5c9;
case 0x51e5cb:goto L51e5cb;
case 0x51e5cd:goto L51e5cd;
case 0x51e5cf:c.instructions+=1;goto B51e5cf;
case 0x51e5d1:goto L51e5d1;
case 0x51e5d4:c.instructions+=1;goto B51e5d4;
case 0x51e5d6:goto L51e5d6;
case 0x51e5d8:c.instructions+=2;goto B51e5d8;
case 0x51e5db:c.instructions+=1;goto B51e5db;
case 0x51e5e0:goto L51e5e0;
case 0x51e5e3:c.instructions+=1;goto B51e5e3;
case 0x51e5e6:goto L51e5e6;
case 0x51e5e9:goto L51e5e9;
case 0x51e5ec:c.instructions+=2;goto B51e5ec;
case 0x51e5ee:c.instructions+=1;goto B51e5ee;
case 0x51e5f0:goto L51e5f0;
case 0x51e5f3:c.instructions+=2;goto B51e5f3;
case 0x51e5f5:c.instructions+=1;goto B51e5f5;
case 0x51e5f7:goto L51e5f7;
case 0x51e600:goto L51e600;
case 0x51e605:c.instructions+=1;goto B51e605;
case 0x51e60a:goto L51e60a;
case 0x51e60d:c.instructions+=3;goto B51e60d;
case 0x51e610:c.instructions+=2;goto B51e610;
case 0x51e612:c.instructions+=1;goto B51e612;
case 0x51e614:goto L51e614;
case 0x51e617:c.instructions+=2;goto B51e617;
case 0x51e619:c.instructions+=1;goto B51e619;
case 0x51e61b:goto L51e61b;
case 0x51e61d:goto L51e61d;
case 0x51e61f:c.instructions+=1;goto B51e61f;
case 0x51e621:goto L51e621;
case 0x51e624:c.instructions+=1;goto B51e624;
case 0x51e626:goto L51e626;
case 0x51e628:c.instructions+=2;goto B51e628;
case 0x51e62b:c.instructions+=1;goto B51e62b;
case 0x51e630:goto L51e630;
case 0x51e633:c.instructions+=1;goto B51e633;
case 0x51e636:goto L51e636;
case 0x51e639:goto L51e639;
case 0x51e63c:c.instructions+=2;goto B51e63c;
case 0x51e63e:c.instructions+=1;goto B51e63e;
case 0x51e640:goto L51e640;
case 0x51e643:c.instructions+=2;goto B51e643;
case 0x51e645:c.instructions+=1;goto B51e645;
case 0x51e647:goto L51e647;
case 0x51e650:goto L51e650;
case 0x51e655:c.instructions+=1;goto B51e655;
case 0x51e65a:goto L51e65a;
case 0x51e65d:c.instructions+=3;goto B51e65d;
case 0x51e660:c.instructions+=2;goto B51e660;
case 0x51e662:c.instructions+=1;goto B51e662;
case 0x51e664:goto L51e664;
case 0x51e667:c.instructions+=2;goto B51e667;
case 0x51e669:c.instructions+=1;goto B51e669;
case 0x51e66b:goto L51e66b;
case 0x51e66d:goto L51e66d;
case 0x51e66f:c.instructions+=1;goto B51e66f;
case 0x51e671:goto L51e671;
case 0x51e674:c.instructions+=1;goto B51e674;
case 0x51e676:goto L51e676;
case 0x51e678:c.instructions+=2;goto B51e678;
case 0x51e67b:c.instructions+=1;goto B51e67b;
case 0x51e680:goto L51e680;
case 0x51e683:c.instructions+=1;goto B51e683;
case 0x51e686:goto L51e686;
case 0x51e689:goto L51e689;
case 0x51e68c:c.instructions+=6;goto B51e68c;
case 0x51e68d:c.instructions+=5;goto B51e68d;
case 0x51e68e:c.instructions+=4;goto B51e68e;
case 0x51e68f:c.instructions+=3;goto B51e68f;
case 0x51e691:c.instructions+=2;goto B51e691;
case 0x51e692:c.instructions+=1;goto B51e692;
case 0x51e694:goto L51e694;
case 0x51e696:c.instructions+=3;goto B51e696;
case 0x51e69b:c.instructions+=2;goto B51e69b;
case 0x51e69c:c.instructions+=1;goto B51e69c;
case 0x51e6a1:goto L51e6a1;
case 0x51e6a4:goto L51e6a4;
case 0x51e6b0:goto L51e6b0;
case 0x51e6b4:c.instructions+=2;goto B51e6b4;
case 0x51e6b9:c.instructions+=1;goto B51e6b9;
case 0x51e6bb:goto L51e6bb;
case 0x51e6be:c.instructions+=4;goto B51e6be;
case 0x51e6c0:c.instructions+=3;goto B51e6c0;
case 0x51e6c5:c.instructions+=2;goto B51e6c5;
case 0x51e6c6:c.instructions+=1;goto B51e6c6;
case 0x51e6cb:goto L51e6cb;
case 0x51e6ce:c.instructions+=1;goto B51e6ce;
case 0x51e6d1:goto L51e6d1;
case 0x51e6d6:c.instructions+=1;goto B51e6d6;
case 0x51e6d8:goto L51e6d8;
case 0x51e6db:c.instructions+=4;goto B51e6db;
case 0x51e6dd:c.instructions+=3;goto B51e6dd;
case 0x51e6e2:c.instructions+=2;goto B51e6e2;
case 0x51e6e3:c.instructions+=1;goto B51e6e3;
case 0x51e6e8:goto L51e6e8;
case 0x51e6eb:goto L51e6eb;
case 0x51e6f0:goto L51e6f0;
case 0x51e6f1:c.instructions+=3;goto B51e6f1;
case 0x51e6f2:c.instructions+=2;goto B51e6f2;
case 0x51e6f4:c.instructions+=1;goto B51e6f4;
case 0x51e6f9:goto L51e6f9;
case 0x51e6fc:c.instructions+=2;goto B51e6fc;
case 0x51e6fe:c.instructions+=1;goto B51e6fe;
case 0x51e700:goto L51e700;
case 0x51e703:c.instructions+=2;goto B51e703;
case 0x51e705:c.instructions+=1;goto B51e705;
case 0x51e707:goto L51e707;
case 0x51e710:goto L51e710;
case 0x51e715:c.instructions+=1;goto B51e715;
case 0x51e71a:goto L51e71a;
case 0x51e71d:c.instructions+=3;goto B51e71d;
case 0x51e720:c.instructions+=2;goto B51e720;
case 0x51e722:c.instructions+=1;goto B51e722;
case 0x51e724:goto L51e724;
case 0x51e727:c.instructions+=2;goto B51e727;
case 0x51e729:c.instructions+=1;goto B51e729;
case 0x51e72b:goto L51e72b;
case 0x51e72c:c.instructions+=2;goto B51e72c;
case 0x51e72d:c.instructions+=1;goto B51e72d;
case 0x51e72e:goto L51e72e;
case 0x51e730:c.instructions+=1;goto B51e730;
case 0x51e732:goto L51e732;
case 0x51e735:c.instructions+=1;goto B51e735;
case 0x51e737:goto L51e737;
case 0x51e739:c.instructions+=2;goto B51e739;
case 0x51e73c:c.instructions+=1;goto B51e73c;
case 0x51e741:goto L51e741;
case 0x51e744:c.instructions+=1;goto B51e744;
case 0x51e74b:goto L51e74b;
case 0x51e752:goto L51e752;
case 0x51e753:c.instructions+=2;goto B51e753;
case 0x51e754:c.instructions+=1;goto B51e754;
case 0x51e760:goto L51e760;
case 0x51e761:c.instructions+=3;goto B51e761;
case 0x51e762:c.instructions+=2;goto B51e762;
case 0x51e764:c.instructions+=1;goto B51e764;
case 0x51e769:goto L51e769;
case 0x51e76c:c.instructions+=2;goto B51e76c;
case 0x51e76e:c.instructions+=1;goto B51e76e;
case 0x51e770:goto L51e770;
case 0x51e773:c.instructions+=2;goto B51e773;
case 0x51e775:c.instructions+=1;goto B51e775;
case 0x51e777:goto L51e777;
case 0x51e780:goto L51e780;
case 0x51e785:c.instructions+=1;goto B51e785;
case 0x51e78a:goto L51e78a;
case 0x51e78d:c.instructions+=3;goto B51e78d;
case 0x51e790:c.instructions+=2;goto B51e790;
case 0x51e792:c.instructions+=1;goto B51e792;
case 0x51e794:goto L51e794;
case 0x51e797:c.instructions+=2;goto B51e797;
case 0x51e799:c.instructions+=1;goto B51e799;
case 0x51e79b:goto L51e79b;
case 0x51e79c:c.instructions+=2;goto B51e79c;
case 0x51e79d:c.instructions+=1;goto B51e79d;
case 0x51e79e:goto L51e79e;
case 0x51e7a0:c.instructions+=1;goto B51e7a0;
case 0x51e7a2:goto L51e7a2;
case 0x51e7a5:c.instructions+=1;goto B51e7a5;
case 0x51e7a7:goto L51e7a7;
case 0x51e7a9:c.instructions+=2;goto B51e7a9;
case 0x51e7ac:c.instructions+=1;goto B51e7ac;
case 0x51e7b1:goto L51e7b1;
case 0x51e7b4:c.instructions+=1;goto B51e7b4;
case 0x51e7bb:goto L51e7bb;
case 0x51e7c2:goto L51e7c2;
case 0x51e7c3:c.instructions+=2;goto B51e7c3;
case 0x51e7c4:c.instructions+=1;goto B51e7c4;
case 0x51e7d0:goto L51e7d0;
case 0x51e7d1:c.instructions+=3;goto B51e7d1;
case 0x51e7d2:c.instructions+=2;goto B51e7d2;
case 0x51e7d4:c.instructions+=1;goto B51e7d4;
case 0x51e7d9:goto L51e7d9;
case 0x51e7dc:c.instructions+=2;goto B51e7dc;
case 0x51e7de:c.instructions+=1;goto B51e7de;
case 0x51e7e0:goto L51e7e0;
case 0x51e7e3:c.instructions+=2;goto B51e7e3;
case 0x51e7e5:c.instructions+=1;goto B51e7e5;
case 0x51e7e7:goto L51e7e7;
case 0x51e7f0:goto L51e7f0;
case 0x51e7f5:c.instructions+=1;goto B51e7f5;
case 0x51e7fa:goto L51e7fa;
case 0x51e7fd:c.instructions+=3;goto B51e7fd;
case 0x51e800:c.instructions+=2;goto B51e800;
case 0x51e802:c.instructions+=1;goto B51e802;
case 0x51e804:goto L51e804;
case 0x51e807:c.instructions+=2;goto B51e807;
case 0x51e809:c.instructions+=1;goto B51e809;
case 0x51e80b:goto L51e80b;
case 0x51e80c:c.instructions+=2;goto B51e80c;
case 0x51e80d:c.instructions+=1;goto B51e80d;
case 0x51e80e:goto L51e80e;
case 0x51e810:c.instructions+=1;goto B51e810;
case 0x51e812:goto L51e812;
case 0x51e815:c.instructions+=1;goto B51e815;
case 0x51e817:goto L51e817;
case 0x51e819:c.instructions+=2;goto B51e819;
case 0x51e81c:c.instructions+=1;goto B51e81c;
case 0x51e821:goto L51e821;
case 0x51e824:c.instructions+=1;goto B51e824;
case 0x51e82b:goto L51e82b;
case 0x51e832:goto L51e832;
case 0x51e833:c.instructions+=2;goto B51e833;
case 0x51e834:c.instructions+=1;goto B51e834;
case 0x51e840:goto L51e840;
case 0x51e844:c.instructions+=13;goto B51e844;
case 0x51e848:c.instructions+=12;goto B51e848;
case 0x51e849:c.instructions+=11;goto B51e849;
case 0x51e84a:c.instructions+=10;goto B51e84a;
case 0x51e84e:c.instructions+=9;goto B51e84e;
case 0x51e850:c.instructions+=8;goto B51e850;
case 0x51e854:c.instructions+=7;goto B51e854;
case 0x51e855:c.instructions+=6;goto B51e855;
case 0x51e859:c.instructions+=5;goto B51e859;
case 0x51e85a:c.instructions+=4;goto B51e85a;
case 0x51e85b:c.instructions+=3;goto B51e85b;
case 0x51e85c:c.instructions+=2;goto B51e85c;
case 0x51e85e:c.instructions+=1;goto B51e85e;
case 0x51e863:goto L51e863;
case 0x51e865:c.instructions+=23;goto B51e865;
case 0x51e868:c.instructions+=22;goto B51e868;
case 0x51e86b:c.instructions+=21;goto B51e86b;
case 0x51e871:c.instructions+=20;goto B51e871;
case 0x51e874:c.instructions+=19;goto B51e874;
case 0x51e877:c.instructions+=18;goto B51e877;
case 0x51e87a:c.instructions+=17;goto B51e87a;
case 0x51e87d:c.instructions+=16;goto B51e87d;
case 0x51e880:c.instructions+=15;goto B51e880;
case 0x51e883:c.instructions+=14;goto B51e883;
case 0x51e886:c.instructions+=13;goto B51e886;
case 0x51e889:c.instructions+=12;goto B51e889;
case 0x51e88f:c.instructions+=11;goto B51e88f;
case 0x51e895:c.instructions+=10;goto B51e895;
case 0x51e89b:c.instructions+=9;goto B51e89b;
case 0x51e8a1:c.instructions+=8;goto B51e8a1;
case 0x51e8a7:c.instructions+=7;goto B51e8a7;
case 0x51e8aa:c.instructions+=6;goto B51e8aa;
case 0x51e8b1:c.instructions+=5;goto B51e8b1;
case 0x51e8b8:c.instructions+=4;goto B51e8b8;
case 0x51e8c2:c.instructions+=3;goto B51e8c2;
case 0x51e8c4:c.instructions+=2;goto B51e8c4;
case 0x51e8c5:c.instructions+=1;goto B51e8c5;
case 0x51e8d0:goto L51e8d0;
case 0x51e8d1:c.instructions+=8;goto B51e8d1;
case 0x51e8d2:c.instructions+=7;goto B51e8d2;
case 0x51e8d3:c.instructions+=6;goto B51e8d3;
case 0x51e8d5:c.instructions+=5;goto B51e8d5;
case 0x51e8d6:c.instructions+=4;goto B51e8d6;
case 0x51e8d9:c.instructions+=3;goto B51e8d9;
case 0x51e8db:c.instructions+=2;goto B51e8db;
case 0x51e8dd:c.instructions+=1;goto B51e8dd;
case 0x51e8df:goto L51e8df;
case 0x51e8e2:c.instructions+=2;goto B51e8e2;
case 0x51e8e4:c.instructions+=1;goto B51e8e4;
case 0x51e8e6:goto L51e8e6;
case 0x51e8eb:c.instructions+=1;goto B51e8eb;
case 0x51e8f0:goto L51e8f0;
case 0x51e8f3:c.instructions+=3;goto B51e8f3;
case 0x51e8f6:c.instructions+=2;goto B51e8f6;
case 0x51e8f8:c.instructions+=1;goto B51e8f8;
case 0x51e8fa:goto L51e8fa;
case 0x51e8fd:c.instructions+=2;goto B51e8fd;
case 0x51e8ff:c.instructions+=1;goto B51e8ff;
case 0x51e901:goto L51e901;
case 0x51e903:goto L51e903;
case 0x51e905:c.instructions+=1;goto B51e905;
case 0x51e907:goto L51e907;
case 0x51e90a:c.instructions+=1;goto B51e90a;
case 0x51e90c:goto L51e90c;
case 0x51e90e:c.instructions+=2;goto B51e90e;
case 0x51e911:c.instructions+=1;goto B51e911;
case 0x51e916:goto L51e916;
case 0x51e919:c.instructions+=1;goto B51e919;
case 0x51e91c:goto L51e91c;
case 0x51e91f:goto L51e91f;
case 0x51e922:c.instructions+=2;goto B51e922;
case 0x51e924:c.instructions+=1;goto B51e924;
case 0x51e926:goto L51e926;
case 0x51e929:c.instructions+=2;goto B51e929;
case 0x51e92b:c.instructions+=1;goto B51e92b;
case 0x51e92d:goto L51e92d;
case 0x51e930:goto L51e930;
case 0x51e935:c.instructions+=1;goto B51e935;
case 0x51e93a:goto L51e93a;
case 0x51e93d:c.instructions+=3;goto B51e93d;
case 0x51e940:c.instructions+=2;goto B51e940;
case 0x51e942:c.instructions+=1;goto B51e942;
case 0x51e944:goto L51e944;
case 0x51e947:c.instructions+=2;goto B51e947;
case 0x51e949:c.instructions+=1;goto B51e949;
case 0x51e94b:goto L51e94b;
case 0x51e94d:goto L51e94d;
case 0x51e94f:c.instructions+=1;goto B51e94f;
case 0x51e951:goto L51e951;
case 0x51e954:c.instructions+=1;goto B51e954;
case 0x51e956:goto L51e956;
case 0x51e958:c.instructions+=2;goto B51e958;
case 0x51e95b:c.instructions+=1;goto B51e95b;
case 0x51e960:goto L51e960;
case 0x51e963:c.instructions+=1;goto B51e963;
case 0x51e966:goto L51e966;
case 0x51e969:goto L51e969;
case 0x51e96c:c.instructions+=2;goto B51e96c;
case 0x51e96e:c.instructions+=1;goto B51e96e;
case 0x51e970:goto L51e970;
case 0x51e973:c.instructions+=2;goto B51e973;
case 0x51e975:c.instructions+=1;goto B51e975;
case 0x51e977:goto L51e977;
case 0x51e980:goto L51e980;
case 0x51e985:c.instructions+=1;goto B51e985;
case 0x51e98a:goto L51e98a;
case 0x51e98d:c.instructions+=3;goto B51e98d;
case 0x51e990:c.instructions+=2;goto B51e990;
case 0x51e992:c.instructions+=1;goto B51e992;
case 0x51e994:goto L51e994;
case 0x51e997:c.instructions+=2;goto B51e997;
case 0x51e999:c.instructions+=1;goto B51e999;
case 0x51e99b:goto L51e99b;
case 0x51e99d:goto L51e99d;
case 0x51e99f:c.instructions+=1;goto B51e99f;
case 0x51e9a1:goto L51e9a1;
case 0x51e9a4:c.instructions+=1;goto B51e9a4;
case 0x51e9a6:goto L51e9a6;
case 0x51e9a8:c.instructions+=2;goto B51e9a8;
case 0x51e9ab:c.instructions+=1;goto B51e9ab;
case 0x51e9b0:goto L51e9b0;
case 0x51e9b3:c.instructions+=1;goto B51e9b3;
case 0x51e9b6:goto L51e9b6;
case 0x51e9b9:goto L51e9b9;
case 0x51e9bc:c.instructions+=2;goto B51e9bc;
case 0x51e9bf:c.instructions+=1;goto B51e9bf;
case 0x51e9c2:goto L51e9c2;
case 0x51e9c5:c.instructions+=6;goto B51e9c5;
case 0x51e9c6:c.instructions+=5;goto B51e9c6;
case 0x51e9c7:c.instructions+=4;goto B51e9c7;
case 0x51e9c8:c.instructions+=3;goto B51e9c8;
case 0x51e9ca:c.instructions+=2;goto B51e9ca;
case 0x51e9cb:c.instructions+=1;goto B51e9cb;
case 0x51e9cd:goto L51e9cd;
case 0x51e9cf:c.instructions+=3;goto B51e9cf;
case 0x51e9d4:c.instructions+=2;goto B51e9d4;
case 0x51e9d5:c.instructions+=1;goto B51e9d5;
case 0x51e9da:goto L51e9da;
case 0x51e9dd:goto L51e9dd;
case 0x51e9e0:goto L51e9e0;
case 0x51e9e2:c.instructions+=21;goto B51e9e2;
case 0x51e9e7:c.instructions+=20;goto B51e9e7;
case 0x51e9ed:c.instructions+=19;goto B51e9ed;
case 0x51e9ee:c.instructions+=18;goto B51e9ee;
case 0x51e9f5:c.instructions+=17;goto B51e9f5;
case 0x51e9f6:c.instructions+=16;goto B51e9f6;
case 0x51e9fa:c.instructions+=15;goto B51e9fa;
case 0x51e9fe:c.instructions+=14;goto B51e9fe;
case 0x51e9ff:c.instructions+=13;goto B51e9ff;
case 0x51ea00:c.instructions+=12;goto B51ea00;
case 0x51ea02:c.instructions+=11;goto B51ea02;
case 0x51ea06:c.instructions+=10;goto B51ea06;
case 0x51ea07:c.instructions+=9;goto B51ea07;
case 0x51ea0b:c.instructions+=8;goto B51ea0b;
case 0x51ea0c:c.instructions+=7;goto B51ea0c;
case 0x51ea10:c.instructions+=6;goto B51ea10;
case 0x51ea11:c.instructions+=5;goto B51ea11;
case 0x51ea12:c.instructions+=4;goto B51ea12;
case 0x51ea13:c.instructions+=3;goto B51ea13;
case 0x51ea15:c.instructions+=2;goto B51ea15;
case 0x51ea19:c.instructions+=1;goto B51ea19;
case 0x51ea1e:goto L51ea1e;
case 0x51ea22:c.instructions+=7;goto B51ea22;
case 0x51ea26:c.instructions+=6;goto B51ea26;
case 0x51ea2c:c.instructions+=5;goto B51ea2c;
case 0x51ea2e:c.instructions+=4;goto B51ea2e;
case 0x51ea34:c.instructions+=3;goto B51ea34;
case 0x51ea3a:c.instructions+=2;goto B51ea3a;
case 0x51ea3f:c.instructions+=1;goto B51ea3f;
case 0x51ea45:goto L51ea45;
case 0x51ea47:goto L51ea47;
case 0x51ea4a:c.instructions+=2;goto B51ea4a;
case 0x51ea4f:c.instructions+=1;goto B51ea4f;
case 0x51ea51:goto L51ea51;
case 0x51ea53:goto L51ea53;
case 0x51ea57:c.instructions+=3;goto B51ea57;
case 0x51ea59:c.instructions+=2;goto B51ea59;
case 0x51ea61:c.instructions+=1;goto B51ea61;
case 0x51ea63:goto L51ea63;
case 0x51ea68:c.instructions+=3;goto B51ea68;
case 0x51ea69:c.instructions+=2;goto B51ea69;
case 0x51ea6a:c.instructions+=1;goto B51ea6a;
case 0x51ea6f:goto L51ea6f;
case 0x51ea72:goto L51ea72;
case 0x51ea76:c.instructions+=6;goto B51ea76;
case 0x51ea77:c.instructions+=5;goto B51ea77;
case 0x51ea79:c.instructions+=4;goto B51ea79;
case 0x51ea7a:c.instructions+=3;goto B51ea7a;
case 0x51ea81:c.instructions+=2;goto B51ea81;
case 0x51ea84:c.instructions+=1;goto B51ea84;
case 0x51ea90:goto L51ea90;
case 0x51ea91:c.instructions+=9;goto B51ea91;
case 0x51ea92:c.instructions+=8;goto B51ea92;
case 0x51ea93:c.instructions+=7;goto B51ea93;
case 0x51ea95:c.instructions+=6;goto B51ea95;
case 0x51ea96:c.instructions+=5;goto B51ea96;
case 0x51ea99:c.instructions+=4;goto B51ea99;
case 0x51ea9b:c.instructions+=3;goto B51ea9b;
case 0x51ea9d:c.instructions+=2;goto B51ea9d;
case 0x51eaa0:c.instructions+=1;goto B51eaa0;
case 0x51eaa2:goto L51eaa2;
case 0x51eaa5:c.instructions+=2;goto B51eaa5;
case 0x51eaa7:c.instructions+=1;goto B51eaa7;
case 0x51eaa9:goto L51eaa9;
case 0x51eab0:goto L51eab0;
case 0x51eab5:c.instructions+=1;goto B51eab5;
case 0x51eaba:goto L51eaba;
case 0x51eabd:c.instructions+=3;goto B51eabd;
case 0x51eac0:c.instructions+=2;goto B51eac0;
case 0x51eac2:c.instructions+=1;goto B51eac2;
case 0x51eac4:goto L51eac4;
case 0x51eac7:c.instructions+=2;goto B51eac7;
case 0x51eac9:c.instructions+=1;goto B51eac9;
case 0x51eacb:goto L51eacb;
case 0x51eacd:goto L51eacd;
case 0x51eacf:c.instructions+=1;goto B51eacf;
case 0x51ead1:goto L51ead1;
case 0x51ead4:c.instructions+=1;goto B51ead4;
case 0x51ead6:goto L51ead6;
case 0x51ead8:c.instructions+=2;goto B51ead8;
case 0x51eadb:c.instructions+=1;goto B51eadb;
case 0x51eae0:goto L51eae0;
case 0x51eae3:c.instructions+=1;goto B51eae3;
case 0x51eae6:goto L51eae6;
case 0x51eae9:goto L51eae9;
case 0x51eaec:c.instructions+=2;goto B51eaec;
case 0x51eaee:c.instructions+=1;goto B51eaee;
case 0x51eaf0:goto L51eaf0;
case 0x51eaf3:c.instructions+=2;goto B51eaf3;
case 0x51eaf5:c.instructions+=1;goto B51eaf5;
case 0x51eaf7:goto L51eaf7;
case 0x51eb00:goto L51eb00;
case 0x51eb05:c.instructions+=1;goto B51eb05;
case 0x51eb0a:goto L51eb0a;
case 0x51eb0d:c.instructions+=3;goto B51eb0d;
case 0x51eb10:c.instructions+=2;goto B51eb10;
case 0x51eb12:c.instructions+=1;goto B51eb12;
case 0x51eb14:goto L51eb14;
case 0x51eb17:c.instructions+=2;goto B51eb17;
case 0x51eb19:c.instructions+=1;goto B51eb19;
case 0x51eb1b:goto L51eb1b;
case 0x51eb1d:goto L51eb1d;
case 0x51eb1f:c.instructions+=1;goto B51eb1f;
case 0x51eb21:goto L51eb21;
case 0x51eb24:c.instructions+=1;goto B51eb24;
case 0x51eb26:goto L51eb26;
case 0x51eb28:c.instructions+=2;goto B51eb28;
case 0x51eb2b:c.instructions+=1;goto B51eb2b;
case 0x51eb30:goto L51eb30;
case 0x51eb33:c.instructions+=1;goto B51eb33;
case 0x51eb36:goto L51eb36;
case 0x51eb39:goto L51eb39;
case 0x51eb3c:c.instructions+=6;goto B51eb3c;
case 0x51eb3d:c.instructions+=5;goto B51eb3d;
case 0x51eb3e:c.instructions+=4;goto B51eb3e;
case 0x51eb3f:c.instructions+=3;goto B51eb3f;
case 0x51eb41:c.instructions+=2;goto B51eb41;
case 0x51eb42:c.instructions+=1;goto B51eb42;
case 0x51eb44:goto L51eb44;
case 0x51eb46:c.instructions+=3;goto B51eb46;
case 0x51eb4b:c.instructions+=2;goto B51eb4b;
case 0x51eb4c:c.instructions+=1;goto B51eb4c;
case 0x51eb51:goto L51eb51;
case 0x51eb54:goto L51eb54;
case 0x51eb60:goto L51eb60;
case 0x51eb61:c.instructions+=5;goto B51eb61;
case 0x51eb63:c.instructions+=4;goto B51eb63;
case 0x51eb64:c.instructions+=3;goto B51eb64;
case 0x51eb67:c.instructions+=2;goto B51eb67;
case 0x51eb69:c.instructions+=1;goto B51eb69;
case 0x51eb6b:goto L51eb6b;
case 0x51eb6c:c.instructions+=3;goto B51eb6c;
case 0x51eb6f:c.instructions+=2;goto B51eb6f;
case 0x51eb71:c.instructions+=1;goto B51eb71;
case 0x51eb73:goto L51eb73;
case 0x51eb78:c.instructions+=1;goto B51eb78;
case 0x51eb7d:goto L51eb7d;
case 0x51eb80:c.instructions+=3;goto B51eb80;
case 0x51eb83:c.instructions+=2;goto B51eb83;
case 0x51eb85:c.instructions+=1;goto B51eb85;
case 0x51eb87:goto L51eb87;
case 0x51eb8a:c.instructions+=2;goto B51eb8a;
case 0x51eb8c:c.instructions+=1;goto B51eb8c;
case 0x51eb8e:goto L51eb8e;
case 0x51eb90:goto L51eb90;
case 0x51eb92:c.instructions+=1;goto B51eb92;
case 0x51eb94:goto L51eb94;
case 0x51eb97:c.instructions+=1;goto B51eb97;
case 0x51eb99:goto L51eb99;
case 0x51eb9b:c.instructions+=2;goto B51eb9b;
case 0x51eb9e:c.instructions+=1;goto B51eb9e;
case 0x51eba3:goto L51eba3;
case 0x51eba6:c.instructions+=1;goto B51eba6;
case 0x51ebad:goto L51ebad;
case 0x51ebb4:goto L51ebb4;
case 0x51ebb5:goto L51ebb5;
case 0x51ebb8:c.instructions+=4;goto B51ebb8;
case 0x51ebba:c.instructions+=3;goto B51ebba;
case 0x51ebbb:c.instructions+=2;goto B51ebbb;
case 0x51ebbc:c.instructions+=1;goto B51ebbc;
case 0x51ebbe:goto L51ebbe;
case 0x51ebc0:c.instructions+=3;goto B51ebc0;
case 0x51ebc5:c.instructions+=2;goto B51ebc5;
case 0x51ebc6:c.instructions+=1;goto B51ebc6;
case 0x51ebcb:goto L51ebcb;
case 0x51ebce:goto L51ebce;
case 0x51ebd0:goto L51ebd0;
case 0x51ebd4:c.instructions+=13;goto B51ebd4;
case 0x51ebd8:c.instructions+=12;goto B51ebd8;
case 0x51ebd9:c.instructions+=11;goto B51ebd9;
case 0x51ebda:c.instructions+=10;goto B51ebda;
case 0x51ebde:c.instructions+=9;goto B51ebde;
case 0x51ebe0:c.instructions+=8;goto B51ebe0;
case 0x51ebe4:c.instructions+=7;goto B51ebe4;
case 0x51ebe5:c.instructions+=6;goto B51ebe5;
case 0x51ebe9:c.instructions+=5;goto B51ebe9;
case 0x51ebea:c.instructions+=4;goto B51ebea;
case 0x51ebeb:c.instructions+=3;goto B51ebeb;
case 0x51ebec:c.instructions+=2;goto B51ebec;
case 0x51ebee:c.instructions+=1;goto B51ebee;
case 0x51ebf3:goto L51ebf3;
case 0x51ebf9:c.instructions+=3;goto B51ebf9;
case 0x51ebfb:c.instructions+=2;goto B51ebfb;
case 0x51ebfc:c.instructions+=1;goto B51ebfc;
case 0x51ec00:goto L51ec00;
case 0x51ec05:c.instructions+=1;goto B51ec05;
case 0x51ec10:goto L51ec10;
case 0x51ec13:c.instructions+=13;goto B51ec13;
case 0x51ec14:c.instructions+=12;goto B51ec14;
case 0x51ec16:c.instructions+=11;goto B51ec16;
case 0x51ec19:c.instructions+=10;goto B51ec19;
case 0x51ec1c:c.instructions+=9;goto B51ec1c;
case 0x51ec20:c.instructions+=8;goto B51ec20;
case 0x51ec24:c.instructions+=7;goto B51ec24;
case 0x51ec25:c.instructions+=6;goto B51ec25;
case 0x51ec29:c.instructions+=5;goto B51ec29;
case 0x51ec2d:c.instructions+=4;goto B51ec2d;
case 0x51ec30:c.instructions+=3;goto B51ec30;
case 0x51ec31:c.instructions+=2;goto B51ec31;
case 0x51ec32:c.instructions+=1;goto B51ec32;
case 0x51ec37:goto L51ec37;
case 0x51ec3b:c.instructions+=14;goto B51ec3b;
case 0x51ec3f:c.instructions+=13;goto B51ec3f;
case 0x51ec43:c.instructions+=12;goto B51ec43;
case 0x51ec47:c.instructions+=11;goto B51ec47;
case 0x51ec48:c.instructions+=10;goto B51ec48;
case 0x51ec4c:c.instructions+=9;goto B51ec4c;
case 0x51ec50:c.instructions+=8;goto B51ec50;
case 0x51ec54:c.instructions+=7;goto B51ec54;
case 0x51ec58:c.instructions+=6;goto B51ec58;
case 0x51ec5c:c.instructions+=5;goto B51ec5c;
case 0x51ec5d:c.instructions+=4;goto B51ec5d;
case 0x51ec5e:c.instructions+=3;goto B51ec5e;
case 0x51ec5f:c.instructions+=2;goto B51ec5f;
case 0x51ec63:c.instructions+=1;goto B51ec63;
case 0x51ec68:goto L51ec68;
case 0x51ec6b:c.instructions+=2;goto B51ec6b;
case 0x51ec6d:c.instructions+=1;goto B51ec6d;
case 0x51ec6f:goto L51ec6f;
case 0x51ec73:c.instructions+=5;goto B51ec73;
case 0x51ec75:c.instructions+=4;goto B51ec75;
case 0x51ec7a:c.instructions+=3;goto B51ec7a;
case 0x51ec7b:c.instructions+=2;goto B51ec7b;
case 0x51ec7d:c.instructions+=1;goto B51ec7d;
case 0x51ec80:goto L51ec80;
case 0x51ec81:c.instructions+=2;goto B51ec81;
case 0x51ec84:c.instructions+=1;goto B51ec84;
case 0x51ec90:goto L51ec90;
case 0x51ec91:c.instructions+=9;goto B51ec91;
case 0x51ec92:c.instructions+=8;goto B51ec92;
case 0x51ec93:c.instructions+=7;goto B51ec93;
case 0x51ec95:c.instructions+=6;goto B51ec95;
case 0x51ec96:c.instructions+=5;goto B51ec96;
case 0x51ec99:c.instructions+=4;goto B51ec99;
case 0x51ec9b:c.instructions+=3;goto B51ec9b;
case 0x51ec9d:c.instructions+=2;goto B51ec9d;
case 0x51eca1:c.instructions+=1;goto B51eca1;
case 0x51eca3:goto L51eca3;
case 0x51eca6:c.instructions+=2;goto B51eca6;
case 0x51eca8:c.instructions+=1;goto B51eca8;
case 0x51ecaa:goto L51ecaa;
case 0x51ecb0:goto L51ecb0;
case 0x51ecb5:c.instructions+=1;goto B51ecb5;
case 0x51ecba:goto L51ecba;
case 0x51ecbd:c.instructions+=3;goto B51ecbd;
case 0x51ecc0:c.instructions+=2;goto B51ecc0;
case 0x51ecc2:c.instructions+=1;goto B51ecc2;
case 0x51ecc4:goto L51ecc4;
case 0x51ecc7:c.instructions+=2;goto B51ecc7;
case 0x51ecc9:c.instructions+=1;goto B51ecc9;
case 0x51eccb:goto L51eccb;
case 0x51eccd:goto L51eccd;
case 0x51eccf:c.instructions+=1;goto B51eccf;
case 0x51ecd1:goto L51ecd1;
case 0x51ecd4:c.instructions+=1;goto B51ecd4;
case 0x51ecd6:goto L51ecd6;
case 0x51ecd8:c.instructions+=2;goto B51ecd8;
case 0x51ecdb:c.instructions+=1;goto B51ecdb;
case 0x51ece0:goto L51ece0;
case 0x51ece3:c.instructions+=1;goto B51ece3;
case 0x51ece6:goto L51ece6;
case 0x51ece9:goto L51ece9;
case 0x51ecec:c.instructions+=2;goto B51ecec;
case 0x51ecee:c.instructions+=1;goto B51ecee;
case 0x51ecf0:goto L51ecf0;
case 0x51ecf3:c.instructions+=2;goto B51ecf3;
case 0x51ecf5:c.instructions+=1;goto B51ecf5;
case 0x51ecf7:goto L51ecf7;
case 0x51ed00:goto L51ed00;
case 0x51ed05:c.instructions+=1;goto B51ed05;
case 0x51ed0a:goto L51ed0a;
case 0x51ed0d:c.instructions+=3;goto B51ed0d;
case 0x51ed10:c.instructions+=2;goto B51ed10;
case 0x51ed12:c.instructions+=1;goto B51ed12;
case 0x51ed14:goto L51ed14;
case 0x51ed17:c.instructions+=2;goto B51ed17;
case 0x51ed19:c.instructions+=1;goto B51ed19;
case 0x51ed1b:goto L51ed1b;
case 0x51ed1d:goto L51ed1d;
case 0x51ed1f:c.instructions+=1;goto B51ed1f;
case 0x51ed21:goto L51ed21;
case 0x51ed24:c.instructions+=1;goto B51ed24;
case 0x51ed26:goto L51ed26;
case 0x51ed28:c.instructions+=2;goto B51ed28;
case 0x51ed2b:c.instructions+=1;goto B51ed2b;
case 0x51ed30:goto L51ed30;
case 0x51ed33:c.instructions+=1;goto B51ed33;
case 0x51ed36:goto L51ed36;
case 0x51ed39:goto L51ed39;
case 0x51ed3c:c.instructions+=6;goto B51ed3c;
case 0x51ed3d:c.instructions+=5;goto B51ed3d;
case 0x51ed3e:c.instructions+=4;goto B51ed3e;
case 0x51ed40:c.instructions+=3;goto B51ed40;
case 0x51ed41:c.instructions+=2;goto B51ed41;
case 0x51ed42:c.instructions+=1;goto B51ed42;
case 0x51ed44:goto L51ed44;
case 0x51ed46:c.instructions+=3;goto B51ed46;
case 0x51ed4b:c.instructions+=2;goto B51ed4b;
case 0x51ed4c:c.instructions+=1;goto B51ed4c;
case 0x51ed51:goto L51ed51;
case 0x51ed54:goto L51ed54;
case 0x51ed60:goto L51ed60;
case 0x51ed61:c.instructions+=8;goto B51ed61;
case 0x51ed62:c.instructions+=7;goto B51ed62;
case 0x51ed63:c.instructions+=6;goto B51ed63;
case 0x51ed65:c.instructions+=5;goto B51ed65;
case 0x51ed66:c.instructions+=4;goto B51ed66;
case 0x51ed69:c.instructions+=3;goto B51ed69;
case 0x51ed6b:c.instructions+=2;goto B51ed6b;
case 0x51ed6d:c.instructions+=1;goto B51ed6d;
case 0x51ed6f:goto L51ed6f;
case 0x51ed72:c.instructions+=2;goto B51ed72;
case 0x51ed74:c.instructions+=1;goto B51ed74;
case 0x51ed76:goto L51ed76;
case 0x51ed7b:c.instructions+=1;goto B51ed7b;
case 0x51ed80:goto L51ed80;
case 0x51ed83:c.instructions+=3;goto B51ed83;
case 0x51ed86:c.instructions+=2;goto B51ed86;
case 0x51ed88:c.instructions+=1;goto B51ed88;
case 0x51ed8a:goto L51ed8a;
case 0x51ed8d:c.instructions+=2;goto B51ed8d;
case 0x51ed8f:c.instructions+=1;goto B51ed8f;
case 0x51ed91:goto L51ed91;
case 0x51ed93:goto L51ed93;
case 0x51ed95:c.instructions+=1;goto B51ed95;
case 0x51ed97:goto L51ed97;
case 0x51ed9a:c.instructions+=1;goto B51ed9a;
case 0x51ed9c:goto L51ed9c;
case 0x51ed9e:c.instructions+=2;goto B51ed9e;
case 0x51eda1:c.instructions+=1;goto B51eda1;
case 0x51eda6:goto L51eda6;
case 0x51eda9:c.instructions+=1;goto B51eda9;
case 0x51edac:goto L51edac;
case 0x51edaf:goto L51edaf;
case 0x51edb2:c.instructions+=2;goto B51edb2;
case 0x51edb4:c.instructions+=1;goto B51edb4;
case 0x51edb6:goto L51edb6;
case 0x51edb9:c.instructions+=2;goto B51edb9;
case 0x51edbb:c.instructions+=1;goto B51edbb;
case 0x51edbd:goto L51edbd;
case 0x51edc0:goto L51edc0;
case 0x51edc5:c.instructions+=1;goto B51edc5;
case 0x51edca:goto L51edca;
case 0x51edcd:c.instructions+=3;goto B51edcd;
case 0x51edd0:c.instructions+=2;goto B51edd0;
case 0x51edd2:c.instructions+=1;goto B51edd2;
case 0x51edd4:goto L51edd4;
case 0x51edd7:c.instructions+=2;goto B51edd7;
case 0x51edd9:c.instructions+=1;goto B51edd9;
case 0x51eddb:goto L51eddb;
case 0x51eddd:goto L51eddd;
case 0x51eddf:c.instructions+=1;goto B51eddf;
case 0x51ede1:goto L51ede1;
case 0x51ede4:c.instructions+=1;goto B51ede4;
case 0x51ede6:goto L51ede6;
case 0x51ede8:c.instructions+=2;goto B51ede8;
case 0x51edeb:c.instructions+=1;goto B51edeb;
case 0x51edf0:goto L51edf0;
case 0x51edf3:c.instructions+=1;goto B51edf3;
case 0x51edf6:goto L51edf6;
case 0x51edf9:goto L51edf9;
case 0x51edfc:c.instructions+=6;goto B51edfc;
case 0x51edfd:c.instructions+=5;goto B51edfd;
case 0x51edfe:c.instructions+=4;goto B51edfe;
case 0x51edff:c.instructions+=3;goto B51edff;
case 0x51ee01:c.instructions+=2;goto B51ee01;
case 0x51ee02:c.instructions+=1;goto B51ee02;
case 0x51ee04:goto L51ee04;
case 0x51ee06:c.instructions+=3;goto B51ee06;
case 0x51ee0b:c.instructions+=2;goto B51ee0b;
case 0x51ee0c:c.instructions+=1;goto B51ee0c;
case 0x51ee11:goto L51ee11;
case 0x51ee14:goto L51ee14;
case 0x51ee20:goto L51ee20;
case 0x51ee23:c.instructions+=6;goto B51ee23;
case 0x51ee24:c.instructions+=5;goto B51ee24;
case 0x51ee25:c.instructions+=4;goto B51ee25;
case 0x51ee26:c.instructions+=3;goto B51ee26;
case 0x51ee29:c.instructions+=2;goto B51ee29;
case 0x51ee2b:c.instructions+=1;goto B51ee2b;
case 0x51ee2d:goto L51ee2d;
case 0x51ee2f:c.instructions+=1;goto B51ee2f;
case 0x51ee31:goto L51ee31;
case 0x51ee34:c.instructions+=1;goto B51ee34;
case 0x51ee36:goto L51ee36;
case 0x51ee38:goto L51ee38;
case 0x51ee3c:c.instructions+=1;goto B51ee3c;
case 0x51ee40:goto L51ee40;
case 0x51ee42:c.instructions+=1;goto B51ee42;
case 0x51ee44:goto L51ee44;
case 0x51ee47:c.instructions+=1;goto B51ee47;
case 0x51ee49:goto L51ee49;
case 0x51ee4b:goto L51ee4b;
case 0x51ee4d:c.instructions+=1;goto B51ee4d;
case 0x51ee4f:goto L51ee4f;
case 0x51ee52:c.instructions+=3;goto B51ee52;
case 0x51ee53:c.instructions+=2;goto B51ee53;
case 0x51ee54:c.instructions+=1;goto B51ee54;
case 0x51ee59:goto L51ee59;
case 0x51ee5c:c.instructions+=2;goto B51ee5c;
case 0x51ee5e:c.instructions+=1;goto B51ee5e;
case 0x51ee60:goto L51ee60;
case 0x51ee63:c.instructions+=2;goto B51ee63;
case 0x51ee65:c.instructions+=1;goto B51ee65;
case 0x51ee67:goto L51ee67;
case 0x51ee6a:c.instructions+=1;goto B51ee6a;
case 0x51ee6c:goto L51ee6c;
case 0x51ee6e:c.instructions+=1;goto B51ee6e;
case 0x51ee70:goto L51ee70;
case 0x51ee71:c.instructions+=4;goto B51ee71;
case 0x51ee73:c.instructions+=3;goto B51ee73;
case 0x51ee74:c.instructions+=2;goto B51ee74;
case 0x51ee75:c.instructions+=1;goto B51ee75;
case 0x51ee78:goto L51ee78;
case 0x51ee79:c.instructions+=4;goto B51ee79;
case 0x51ee7a:c.instructions+=3;goto B51ee7a;
case 0x51ee7c:c.instructions+=2;goto B51ee7c;
case 0x51ee7d:c.instructions+=1;goto B51ee7d;
case 0x51ee80:goto L51ee80;
case 0x51ee81:c.instructions+=8;goto B51ee81;
case 0x51ee82:c.instructions+=7;goto B51ee82;
case 0x51ee83:c.instructions+=6;goto B51ee83;
case 0x51ee86:c.instructions+=5;goto B51ee86;
case 0x51ee88:c.instructions+=4;goto B51ee88;
case 0x51ee89:c.instructions+=3;goto B51ee89;
case 0x51ee8a:c.instructions+=2;goto B51ee8a;
case 0x51ee8e:c.instructions+=1;goto B51ee8e;
case 0x51ee90:goto L51ee90;
case 0x51ee92:c.instructions+=1;goto B51ee92;
case 0x51ee94:goto L51ee94;
case 0x51ee97:c.instructions+=1;goto B51ee97;
case 0x51ee99:goto L51ee99;
case 0x51ee9b:c.instructions+=1;goto B51ee9b;
case 0x51eea0:goto L51eea0;
case 0x51eea4:c.instructions+=3;goto B51eea4;
case 0x51eea7:c.instructions+=2;goto B51eea7;
case 0x51eea9:c.instructions+=1;goto B51eea9;
case 0x51eeab:goto L51eeab;
case 0x51eeae:c.instructions+=1;goto B51eeae;
case 0x51eeb0:goto L51eeb0;
case 0x51eeb2:goto L51eeb2;
case 0x51eeb4:c.instructions+=1;goto B51eeb4;
case 0x51eeb6:goto L51eeb6;
case 0x51eeb8:c.instructions+=1;goto B51eeb8;
case 0x51eeba:goto L51eeba;
case 0x51eebd:c.instructions+=2;goto B51eebd;
case 0x51eebf:c.instructions+=1;goto B51eebf;
case 0x51eec1:goto L51eec1;
case 0x51eec4:c.instructions+=2;goto B51eec4;
case 0x51eec6:c.instructions+=1;goto B51eec6;
case 0x51eec8:goto L51eec8;
case 0x51eed0:goto L51eed0;
case 0x51eed4:c.instructions+=2;goto B51eed4;
case 0x51eed5:c.instructions+=1;goto B51eed5;
case 0x51eeda:goto L51eeda;
case 0x51eedd:c.instructions+=3;goto B51eedd;
case 0x51eee0:c.instructions+=2;goto B51eee0;
case 0x51eee2:c.instructions+=1;goto B51eee2;
case 0x51eee4:goto L51eee4;
case 0x51eee7:c.instructions+=2;goto B51eee7;
case 0x51eee9:c.instructions+=1;goto B51eee9;
case 0x51eeeb:goto L51eeeb;
case 0x51eeee:c.instructions+=1;goto B51eeee;
case 0x51eef0:goto L51eef0;
case 0x51eef2:c.instructions+=1;goto B51eef2;
case 0x51eef4:goto L51eef4;
case 0x51eef7:c.instructions+=1;goto B51eef7;
case 0x51eef9:goto L51eef9;
case 0x51eefb:c.instructions+=2;goto B51eefb;
case 0x51eefe:c.instructions+=1;goto B51eefe;
case 0x51ef03:goto L51ef03;
case 0x51ef06:c.instructions+=1;goto B51ef06;
case 0x51ef09:goto L51ef09;
case 0x51ef0c:goto L51ef0c;
case 0x51ef0f:c.instructions+=1;goto B51ef0f;
case 0x51ef14:goto L51ef14;
case 0x51ef17:c.instructions+=2;goto B51ef17;
case 0x51ef19:c.instructions+=1;goto B51ef19;
case 0x51ef1f:goto L51ef1f;
case 0x51ef23:c.instructions+=3;goto B51ef23;
case 0x51ef25:c.instructions+=2;goto B51ef25;
case 0x51ef28:c.instructions+=1;goto B51ef28;
case 0x51ef2a:goto L51ef2a;
case 0x51ef2c:c.instructions+=1;goto B51ef2c;
case 0x51ef32:goto L51ef32;
case 0x51ef33:c.instructions+=1;goto B51ef33;
case 0x51ef38:goto L51ef38;
case 0x51ef3b:c.instructions+=3;goto B51ef3b;
case 0x51ef3e:c.instructions+=2;goto B51ef3e;
case 0x51ef40:c.instructions+=1;goto B51ef40;
case 0x51ef42:goto L51ef42;
case 0x51ef45:c.instructions+=2;goto B51ef45;
case 0x51ef47:c.instructions+=1;goto B51ef47;
case 0x51ef49:goto L51ef49;
case 0x51ef4a:c.instructions+=5;goto B51ef4a;
case 0x51ef4b:c.instructions+=4;goto B51ef4b;
case 0x51ef4c:c.instructions+=3;goto B51ef4c;
case 0x51ef4d:c.instructions+=2;goto B51ef4d;
case 0x51ef4e:c.instructions+=1;goto B51ef4e;
case 0x51ef51:goto L51ef51;
case 0x51ef53:c.instructions+=1;goto B51ef53;
case 0x51ef55:goto L51ef55;
case 0x51ef58:c.instructions+=1;goto B51ef58;
case 0x51ef5a:goto L51ef5a;
case 0x51ef5c:c.instructions+=2;goto B51ef5c;
case 0x51ef5f:c.instructions+=1;goto B51ef5f;
case 0x51ef64:goto L51ef64;
case 0x51ef67:c.instructions+=8;goto B51ef67;
case 0x51ef68:c.instructions+=7;goto B51ef68;
case 0x51ef6b:c.instructions+=6;goto B51ef6b;
case 0x51ef6e:c.instructions+=5;goto B51ef6e;
case 0x51ef6f:c.instructions+=4;goto B51ef6f;
case 0x51ef70:c.instructions+=3;goto B51ef70;
case 0x51ef71:c.instructions+=2;goto B51ef71;
case 0x51ef72:c.instructions+=1;goto B51ef72;
case 0x51ef75:goto L51ef75;
case 0x51ef77:c.instructions+=1;goto B51ef77;
case 0x51ef79:goto L51ef79;
case 0x51ef80:goto L51ef80;
case 0x51ef84:c.instructions+=2;goto B51ef84;
case 0x51ef85:c.instructions+=1;goto B51ef85;
case 0x51ef8a:goto L51ef8a;
case 0x51ef8d:c.instructions+=3;goto B51ef8d;
case 0x51ef90:c.instructions+=2;goto B51ef90;
case 0x51ef92:c.instructions+=1;goto B51ef92;
case 0x51ef94:goto L51ef94;
case 0x51ef97:c.instructions+=2;goto B51ef97;
case 0x51ef99:c.instructions+=1;goto B51ef99;
case 0x51ef9b:goto L51ef9b;
case 0x51ef9c:c.instructions+=5;goto B51ef9c;
case 0x51ef9d:c.instructions+=4;goto B51ef9d;
case 0x51ef9e:c.instructions+=3;goto B51ef9e;
case 0x51ef9f:c.instructions+=2;goto B51ef9f;
case 0x51efa0:c.instructions+=1;goto B51efa0;
case 0x51efa3:goto L51efa3;
case 0x51efa5:c.instructions+=1;goto B51efa5;
case 0x51efa7:goto L51efa7;
case 0x51efaa:c.instructions+=1;goto B51efaa;
case 0x51efac:goto L51efac;
case 0x51efae:c.instructions+=2;goto B51efae;
case 0x51efb1:c.instructions+=1;goto B51efb1;
case 0x51efb6:goto L51efb6;
case 0x51efb9:c.instructions+=1;goto B51efb9;
case 0x51efbc:goto L51efbc;
case 0x51efbf:goto L51efbf;
case 0x51efc0:c.instructions+=5;goto B51efc0;
case 0x51efc1:c.instructions+=4;goto B51efc1;
case 0x51efc2:c.instructions+=3;goto B51efc2;
case 0x51efc3:c.instructions+=2;goto B51efc3;
case 0x51efc4:c.instructions+=1;goto B51efc4;
case 0x51efd0:goto L51efd0;
case 0x51efd3:c.instructions+=12;goto B51efd3;
case 0x51efd4:c.instructions+=11;goto B51efd4;
case 0x51efd5:c.instructions+=10;goto B51efd5;
case 0x51efd6:c.instructions+=9;goto B51efd6;
case 0x51efd8:c.instructions+=8;goto B51efd8;
case 0x51efdb:c.instructions+=7;goto B51efdb;
case 0x51efdc:c.instructions+=6;goto B51efdc;
case 0x51efdf:c.instructions+=5;goto B51efdf;
case 0x51efe7:c.instructions+=4;goto B51efe7;
case 0x51efef:c.instructions+=3;goto B51efef;
case 0x51eff7:c.instructions+=2;goto B51eff7;
case 0x51efff:c.instructions+=1;goto B51efff;
default:missing_instruction(c.pc);}
B51e001:L51e001:{c.instructions+=9;NFSU2_TR(0x51e001);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x29ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51e004:{NFSU2_TR(0x51e004);
u8 U[4];
w4(U+0,u32(0x79b2f8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51e00a:{NFSU2_TR(0x51e00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e00d:{NFSU2_TR(0x51e00d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51e010:{NFSU2_TR(0x51e010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51e012:{NFSU2_TR(0x51e012);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51e015:{NFSU2_TR(0x51e015);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e018:{NFSU2_TR(0x51e018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51e019:{NFSU2_TR(0x51e019);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e020:L51e020:{c.instructions+=6;NFSU2_TR(0x51e020);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e021:{NFSU2_TR(0x51e021);
__builtin_memmove((R+12),(R+4),4);
}
B51e023:{NFSU2_TR(0x51e023);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e024:{NFSU2_TR(0x51e024);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e027:{NFSU2_TR(0x51e027);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51e029:{NFSU2_TR(0x51e029);
if(r1(R+518)){{goto L51e075;}}
}
B51e02b:L51e02b:{c.instructions+=4;NFSU2_TR(0x51e02b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e02c:{NFSU2_TR(0x51e02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e02f:{NFSU2_TR(0x51e02f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51e031:{NFSU2_TR(0x51e031);
if(r1(R+518)){{goto L51e074;}}
}
B51e033:L51e033:{c.instructions+=2;NFSU2_TR(0x51e033);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e038:{NFSU2_TR(0x51e038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e03dull));
TAIL_STATIC(0x505450u,505);
}
B51e03d:L51e03d:{c.instructions+=4;NFSU2_TR(0x51e03d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e040:{NFSU2_TR(0x51e040);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e043:{NFSU2_TR(0x51e043);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e045:{NFSU2_TR(0x51e045);
if(r1(R+518)){{goto L51e050;}}
}
B51e047:L51e047:{c.instructions+=3;NFSU2_TR(0x51e047);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e04a:{NFSU2_TR(0x51e04a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51e04c:{NFSU2_TR(0x51e04c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e033u);}goto L51e033;}}
}
B51e04e:L51e04e:{c.instructions+=1;NFSU2_TR(0x51e04e);
{goto L51e074;}
}
B51e050:L51e050:{c.instructions+=2;NFSU2_TR(0x51e050);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51e052:{NFSU2_TR(0x51e052);
if(r1(R+518)){{goto L51e074;}}
}
B51e054:L51e054:{c.instructions+=2;NFSU2_TR(0x51e054);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e057:{NFSU2_TR(0x51e057);
if(r1(R+518)){{goto L51e06d;}}
}
B51e059:L51e059:{c.instructions+=3;NFSU2_TR(0x51e059);
__builtin_memmove((R+4),(R+28),4);
}
B51e05b:{NFSU2_TR(0x51e05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e05e:{NFSU2_TR(0x51e05e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e063ull));
TAIL_STATIC(0x517720u,517);
}
B51e063:L51e063:{c.instructions+=2;NFSU2_TR(0x51e063);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e066:{NFSU2_TR(0x51e066);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e06d:L51e06d:{c.instructions+=1;NFSU2_TR(0x51e06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e074:L51e074:{c.instructions+=1;NFSU2_TR(0x51e074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e075:L51e075:{c.instructions+=5;NFSU2_TR(0x51e075);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e078:{NFSU2_TR(0x51e078);
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
B51e07a:{NFSU2_TR(0x51e07a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51e07b:{NFSU2_TR(0x51e07b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51e07c:{NFSU2_TR(0x51e07c);
if(r1(R+518)){{goto L51e08e;}}
}
B51e07e:L51e07e:{c.instructions+=4;NFSU2_TR(0x51e07e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e080:{NFSU2_TR(0x51e080);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e085:{NFSU2_TR(0x51e085);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e086:{NFSU2_TR(0x51e086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e08bull));
TAIL_STATIC(0x51cf70u,51c);
}
B51e08b:L51e08b:{c.instructions+=1;NFSU2_TR(0x51e08b);
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
B51e08e:L51e08e:{c.instructions+=1;NFSU2_TR(0x51e08e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e090:L51e090:{c.instructions+=25;NFSU2_TR(0x51e090);
__builtin_memmove((R+0),(R+4),4);
}
B51e092:{NFSU2_TR(0x51e092);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e096:{NFSU2_TR(0x51e096);
u8 U[4];
w4(U+0,u32(0x790b98ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51e09c:{NFSU2_TR(0x51e09c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51e09e:{NFSU2_TR(0x51e09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e0a1:{NFSU2_TR(0x51e0a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e0a4:{NFSU2_TR(0x51e0a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e0a7:{NFSU2_TR(0x51e0a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e0ab:{NFSU2_TR(0x51e0ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51e0ad:{NFSU2_TR(0x51e0ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e0b0:{NFSU2_TR(0x51e0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51e0b3:{NFSU2_TR(0x51e0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e0b6:{NFSU2_TR(0x51e0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0xc38a0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e0bd:{NFSU2_TR(0x51e0bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w4(U+4,u32(0xc1200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e0c4:{NFSU2_TR(0x51e0c4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51e0c6:{NFSU2_TR(0x51e0c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e0c9:{NFSU2_TR(0x51e0c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51e0cd:{NFSU2_TR(0x51e0cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x29ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51e0d0:{NFSU2_TR(0x51e0d0);
u8 U[4];
w4(U+0,u32(0x79b338ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51e0d6:{NFSU2_TR(0x51e0d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e0d9:{NFSU2_TR(0x51e0d9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51e0dc:{NFSU2_TR(0x51e0dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51e0de:{NFSU2_TR(0x51e0de);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51e0e1:{NFSU2_TR(0x51e0e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e0e4:{NFSU2_TR(0x51e0e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e0f0:L51e0f0:{c.instructions+=9;NFSU2_TR(0x51e0f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e0f1:{NFSU2_TR(0x51e0f1);
__builtin_memmove((R+24),(R+4),4);
}
B51e0f3:{NFSU2_TR(0x51e0f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e0f6:{NFSU2_TR(0x51e0f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e0f9:{NFSU2_TR(0x51e0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51e0fc:{NFSU2_TR(0x51e0fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e0fd:{NFSU2_TR(0x51e0fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e0fe:{NFSU2_TR(0x51e0fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e0ff:{NFSU2_TR(0x51e0ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e104ull));
TAIL_STATIC(0x51d380u,51d);
}
B51e104:L51e104:{c.instructions+=4;NFSU2_TR(0x51e104);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e107:{NFSU2_TR(0x51e107);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51e10a:{NFSU2_TR(0x51e10a);
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
B51e10c:{NFSU2_TR(0x51e10c);
if(r1(R+518)){{goto L51e12d;}}
}
B51e10e:L51e10e:{c.instructions+=9;NFSU2_TR(0x51e10e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51e111:{NFSU2_TR(0x51e111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B51e114:{NFSU2_TR(0x51e114);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51e117:{NFSU2_TR(0x51e117);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51e11b:{NFSU2_TR(0x51e11b);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51e11e:{NFSU2_TR(0x51e11e);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51e121:{NFSU2_TR(0x51e121);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51e124:{NFSU2_TR(0x51e124);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e125:{NFSU2_TR(0x51e125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e12aull));
TAIL_STATIC(0x51d380u,51d);
}
B51e12a:L51e12a:{c.instructions+=1;NFSU2_TR(0x51e12a);
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
B51e12d:L51e12d:{c.instructions+=2;NFSU2_TR(0x51e12d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e12e:{NFSU2_TR(0x51e12e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e130:L51e130:{c.instructions+=6;NFSU2_TR(0x51e130);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e131:{NFSU2_TR(0x51e131);
__builtin_memmove((R+12),(R+4),4);
}
B51e133:{NFSU2_TR(0x51e133);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e134:{NFSU2_TR(0x51e134);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e137:{NFSU2_TR(0x51e137);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51e139:{NFSU2_TR(0x51e139);
if(r1(R+518)){{goto L51e185;}}
}
B51e13b:L51e13b:{c.instructions+=4;NFSU2_TR(0x51e13b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e13c:{NFSU2_TR(0x51e13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e13f:{NFSU2_TR(0x51e13f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51e141:{NFSU2_TR(0x51e141);
if(r1(R+518)){{goto L51e184;}}
}
B51e143:L51e143:{c.instructions+=2;NFSU2_TR(0x51e143);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e148:{NFSU2_TR(0x51e148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e14dull));
TAIL_STATIC(0x505450u,505);
}
B51e14d:L51e14d:{c.instructions+=4;NFSU2_TR(0x51e14d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e150:{NFSU2_TR(0x51e150);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e153:{NFSU2_TR(0x51e153);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e155:{NFSU2_TR(0x51e155);
if(r1(R+518)){{goto L51e160;}}
}
B51e157:L51e157:{c.instructions+=3;NFSU2_TR(0x51e157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e15a:{NFSU2_TR(0x51e15a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51e15c:{NFSU2_TR(0x51e15c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e143u);}goto L51e143;}}
}
B51e15e:L51e15e:{c.instructions+=1;NFSU2_TR(0x51e15e);
{goto L51e184;}
}
B51e160:L51e160:{c.instructions+=2;NFSU2_TR(0x51e160);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51e162:{NFSU2_TR(0x51e162);
if(r1(R+518)){{goto L51e184;}}
}
B51e164:L51e164:{c.instructions+=2;NFSU2_TR(0x51e164);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e167:{NFSU2_TR(0x51e167);
if(r1(R+518)){{goto L51e17d;}}
}
B51e169:L51e169:{c.instructions+=3;NFSU2_TR(0x51e169);
__builtin_memmove((R+4),(R+28),4);
}
B51e16b:{NFSU2_TR(0x51e16b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e16e:{NFSU2_TR(0x51e16e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e173ull));
TAIL_STATIC(0x517720u,517);
}
B51e173:L51e173:{c.instructions+=2;NFSU2_TR(0x51e173);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e176:{NFSU2_TR(0x51e176);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e17d:L51e17d:{c.instructions+=1;NFSU2_TR(0x51e17d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e184:L51e184:{c.instructions+=1;NFSU2_TR(0x51e184);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e185:L51e185:{c.instructions+=5;NFSU2_TR(0x51e185);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e188:{NFSU2_TR(0x51e188);
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
B51e18a:{NFSU2_TR(0x51e18a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51e18b:{NFSU2_TR(0x51e18b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51e18c:{NFSU2_TR(0x51e18c);
if(r1(R+518)){{goto L51e19e;}}
}
B51e18e:L51e18e:{c.instructions+=4;NFSU2_TR(0x51e18e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e190:{NFSU2_TR(0x51e190);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e195:{NFSU2_TR(0x51e195);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e196:{NFSU2_TR(0x51e196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e19bull));
TAIL_STATIC(0x51cf70u,51c);
}
B51e19b:L51e19b:{c.instructions+=1;NFSU2_TR(0x51e19b);
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
B51e19e:L51e19e:{c.instructions+=1;NFSU2_TR(0x51e19e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e1b0:L51e1b0:{c.instructions+=39;NFSU2_TR(0x51e1b0);
__builtin_memmove((R+0),(R+4),4);
}
B51e1b2:{NFSU2_TR(0x51e1b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e1b6:{NFSU2_TR(0x51e1b6);
u8 U[4];
w4(U+0,u32(0x790b98ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51e1bc:{NFSU2_TR(0x51e1bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51e1be:{NFSU2_TR(0x51e1be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e1c1:{NFSU2_TR(0x51e1c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e1c4:{NFSU2_TR(0x51e1c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e1c7:{NFSU2_TR(0x51e1c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e1cb:{NFSU2_TR(0x51e1cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51e1cd:{NFSU2_TR(0x51e1cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e1d0:{NFSU2_TR(0x51e1d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51e1d3:{NFSU2_TR(0x51e1d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e1d6:{NFSU2_TR(0x51e1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0xc38a0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e1dd:{NFSU2_TR(0x51e1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w4(U+4,u32(0xc1200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e1e4:{NFSU2_TR(0x51e1e4);
u8 U[4];
w4(U+0,u32(0x79b378ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51e1ea:{NFSU2_TR(0x51e1ea);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51e1ec:{NFSU2_TR(0x51e1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e1ef:{NFSU2_TR(0x51e1ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x29ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51e1f2:{NFSU2_TR(0x51e1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e1f5:{NFSU2_TR(0x51e1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e1f8:{NFSU2_TR(0x51e1f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e1f9:{NFSU2_TR(0x51e1f9);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B51e1fd:{NFSU2_TR(0x51e1fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51e200:{NFSU2_TR(0x51e200);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51e203:{NFSU2_TR(0x51e203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51e205:{NFSU2_TR(0x51e205);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51e208:{NFSU2_TR(0x51e208);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e20b:{NFSU2_TR(0x51e20b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e20f:{NFSU2_TR(0x51e20f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51e212:{NFSU2_TR(0x51e212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51e214:{NFSU2_TR(0x51e214);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e218:{NFSU2_TR(0x51e218);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51e21b:{NFSU2_TR(0x51e21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e21e:{NFSU2_TR(0x51e21e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51e221:{NFSU2_TR(0x51e221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51e223:{NFSU2_TR(0x51e223);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51e226:{NFSU2_TR(0x51e226);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e229:{NFSU2_TR(0x51e229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51e22a:{NFSU2_TR(0x51e22a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e230:L51e230:{c.instructions+=14;NFSU2_TR(0x51e230);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e234:{NFSU2_TR(0x51e234);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51e238:{NFSU2_TR(0x51e238);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e239:{NFSU2_TR(0x51e239);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e23a:{NFSU2_TR(0x51e23a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e23e:{NFSU2_TR(0x51e23e);
__builtin_memmove((R+24),(R+4),4);
}
B51e240:{NFSU2_TR(0x51e240);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e244:{NFSU2_TR(0x51e244);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e245:{NFSU2_TR(0x51e245);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e249:{NFSU2_TR(0x51e249);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e24a:{NFSU2_TR(0x51e24a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e24b:{NFSU2_TR(0x51e24b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e24c:{NFSU2_TR(0x51e24c);
__builtin_memmove((R+4),(R+24),4);
}
B51e24e:{NFSU2_TR(0x51e24e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e253ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e1b0u);}goto L51e1b0;}
}
B51e253:L51e253:{c.instructions+=7;NFSU2_TR(0x51e253);
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
B51e255:{NFSU2_TR(0x51e255);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e258:{NFSU2_TR(0x51e258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e25b:{NFSU2_TR(0x51e25b);
u8 U[4];
w4(U+0,u32(0x79b3b8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B51e261:{NFSU2_TR(0x51e261);
__builtin_memmove((R+0),(R+24),4);
}
B51e263:{NFSU2_TR(0x51e263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e264:{NFSU2_TR(0x51e264);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e270:L51e270:{c.instructions+=10;NFSU2_TR(0x51e270);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e271:{NFSU2_TR(0x51e271);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e272:{NFSU2_TR(0x51e272);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e273:{NFSU2_TR(0x51e273);
__builtin_memmove((R+20),(R+4),4);
}
B51e275:{NFSU2_TR(0x51e275);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e276:{NFSU2_TR(0x51e276);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e279:{NFSU2_TR(0x51e279);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B51e27b:{NFSU2_TR(0x51e27b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e27d:{NFSU2_TR(0x51e27d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51e281:{NFSU2_TR(0x51e281);
if(r1(R+518)){{goto L51e2c9;}}
}
B51e283:L51e283:{c.instructions+=3;NFSU2_TR(0x51e283);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e286:{NFSU2_TR(0x51e286);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e288:{NFSU2_TR(0x51e288);
if(r1(R+518)){{goto L51e2c9;}}
}
B51e28a:L51e28a:{c.instructions+=1;NFSU2_TR(0x51e28a);
__builtin_memmove((R+12),(R+12),4);
}
B51e290:L51e290:{c.instructions+=2;NFSU2_TR(0x51e290);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e295:{NFSU2_TR(0x51e295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e29aull));
TAIL_STATIC(0x505450u,505);
}
B51e29a:L51e29a:{c.instructions+=4;NFSU2_TR(0x51e29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e29d:{NFSU2_TR(0x51e29d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e2a0:{NFSU2_TR(0x51e2a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e2a2:{NFSU2_TR(0x51e2a2);
if(r1(R+518)){{goto L51e2ad;}}
}
B51e2a4:L51e2a4:{c.instructions+=3;NFSU2_TR(0x51e2a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e2a7:{NFSU2_TR(0x51e2a7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e2a9:{NFSU2_TR(0x51e2a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e290u);}goto L51e290;}}
}
B51e2ab:L51e2ab:{c.instructions+=1;NFSU2_TR(0x51e2ab);
{goto L51e2c9;}
}
B51e2ad:L51e2ad:{c.instructions+=2;NFSU2_TR(0x51e2ad);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e2af:{NFSU2_TR(0x51e2af);
if(r1(R+518)){{goto L51e2c9;}}
}
B51e2b1:L51e2b1:{c.instructions+=2;NFSU2_TR(0x51e2b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e2b4:{NFSU2_TR(0x51e2b4);
if(r1(R+518)){{goto L51e2c6;}}
}
B51e2b6:L51e2b6:{c.instructions+=3;NFSU2_TR(0x51e2b6);
__builtin_memmove((R+4),(R+28),4);
}
B51e2b8:{NFSU2_TR(0x51e2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e2bb:{NFSU2_TR(0x51e2bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e2c0ull));
TAIL_STATIC(0x517720u,517);
}
B51e2c0:L51e2c0:{c.instructions+=2;NFSU2_TR(0x51e2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e2c3:{NFSU2_TR(0x51e2c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e2c6:L51e2c6:{c.instructions+=1;NFSU2_TR(0x51e2c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e2c9:L51e2c9:{c.instructions+=3;NFSU2_TR(0x51e2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e2cc:{NFSU2_TR(0x51e2cc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e2ce:{NFSU2_TR(0x51e2ce);
if(r1(R+518)){{goto L51e319;}}
}
B51e2d0:L51e2d0:{c.instructions+=3;NFSU2_TR(0x51e2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e2d3:{NFSU2_TR(0x51e2d3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e2d5:{NFSU2_TR(0x51e2d5);
if(r1(R+518)){{goto L51e319;}}
}
B51e2d7:L51e2d7:{c.instructions+=1;NFSU2_TR(0x51e2d7);
{goto L51e2e0;}
}
B51e2e0:L51e2e0:{c.instructions+=2;NFSU2_TR(0x51e2e0);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e2e5:{NFSU2_TR(0x51e2e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e2eaull));
TAIL_STATIC(0x505450u,505);
}
B51e2ea:L51e2ea:{c.instructions+=4;NFSU2_TR(0x51e2ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e2ed:{NFSU2_TR(0x51e2ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e2f0:{NFSU2_TR(0x51e2f0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e2f2:{NFSU2_TR(0x51e2f2);
if(r1(R+518)){{goto L51e2fd;}}
}
B51e2f4:L51e2f4:{c.instructions+=3;NFSU2_TR(0x51e2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e2f7:{NFSU2_TR(0x51e2f7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e2f9:{NFSU2_TR(0x51e2f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e2e0u);}goto L51e2e0;}}
}
B51e2fb:L51e2fb:{c.instructions+=1;NFSU2_TR(0x51e2fb);
{goto L51e319;}
}
B51e2fd:L51e2fd:{c.instructions+=2;NFSU2_TR(0x51e2fd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e2ff:{NFSU2_TR(0x51e2ff);
if(r1(R+518)){{goto L51e319;}}
}
B51e301:L51e301:{c.instructions+=2;NFSU2_TR(0x51e301);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e304:{NFSU2_TR(0x51e304);
if(r1(R+518)){{goto L51e316;}}
}
B51e306:L51e306:{c.instructions+=3;NFSU2_TR(0x51e306);
__builtin_memmove((R+4),(R+28),4);
}
B51e308:{NFSU2_TR(0x51e308);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e30b:{NFSU2_TR(0x51e30b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e310ull));
TAIL_STATIC(0x517720u,517);
}
B51e310:L51e310:{c.instructions+=2;NFSU2_TR(0x51e310);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e313:{NFSU2_TR(0x51e313);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e316:L51e316:{c.instructions+=1;NFSU2_TR(0x51e316);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e319:L51e319:{c.instructions+=3;NFSU2_TR(0x51e319);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e31c:{NFSU2_TR(0x51e31c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e31e:{NFSU2_TR(0x51e31e);
if(r1(R+518)){{goto L51e369;}}
}
B51e320:L51e320:{c.instructions+=3;NFSU2_TR(0x51e320);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e323:{NFSU2_TR(0x51e323);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e325:{NFSU2_TR(0x51e325);
if(r1(R+518)){{goto L51e369;}}
}
B51e327:L51e327:{c.instructions+=1;NFSU2_TR(0x51e327);
{goto L51e330;}
}
B51e330:L51e330:{c.instructions+=2;NFSU2_TR(0x51e330);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e335:{NFSU2_TR(0x51e335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e33aull));
TAIL_STATIC(0x505450u,505);
}
B51e33a:L51e33a:{c.instructions+=4;NFSU2_TR(0x51e33a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e33d:{NFSU2_TR(0x51e33d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e340:{NFSU2_TR(0x51e340);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e342:{NFSU2_TR(0x51e342);
if(r1(R+518)){{goto L51e34d;}}
}
B51e344:L51e344:{c.instructions+=3;NFSU2_TR(0x51e344);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e347:{NFSU2_TR(0x51e347);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e349:{NFSU2_TR(0x51e349);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e330u);}goto L51e330;}}
}
B51e34b:L51e34b:{c.instructions+=1;NFSU2_TR(0x51e34b);
{goto L51e369;}
}
B51e34d:L51e34d:{c.instructions+=2;NFSU2_TR(0x51e34d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e34f:{NFSU2_TR(0x51e34f);
if(r1(R+518)){{goto L51e369;}}
}
B51e351:L51e351:{c.instructions+=2;NFSU2_TR(0x51e351);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e354:{NFSU2_TR(0x51e354);
if(r1(R+518)){{goto L51e366;}}
}
B51e356:L51e356:{c.instructions+=3;NFSU2_TR(0x51e356);
__builtin_memmove((R+4),(R+28),4);
}
B51e358:{NFSU2_TR(0x51e358);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e35b:{NFSU2_TR(0x51e35b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e360ull));
TAIL_STATIC(0x517720u,517);
}
B51e360:L51e360:{c.instructions+=2;NFSU2_TR(0x51e360);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51e363:{NFSU2_TR(0x51e363);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e366:L51e366:{c.instructions+=1;NFSU2_TR(0x51e366);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e369:L51e369:{c.instructions+=3;NFSU2_TR(0x51e369);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e36c:{NFSU2_TR(0x51e36c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e36e:{NFSU2_TR(0x51e36e);
if(r1(R+518)){{goto L51e3b9;}}
}
B51e370:L51e370:{c.instructions+=3;NFSU2_TR(0x51e370);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e373:{NFSU2_TR(0x51e373);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e375:{NFSU2_TR(0x51e375);
if(r1(R+518)){{goto L51e3b9;}}
}
B51e377:L51e377:{c.instructions+=1;NFSU2_TR(0x51e377);
{goto L51e380;}
}
B51e380:L51e380:{c.instructions+=2;NFSU2_TR(0x51e380);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e385:{NFSU2_TR(0x51e385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e38aull));
TAIL_STATIC(0x505450u,505);
}
B51e38a:L51e38a:{c.instructions+=4;NFSU2_TR(0x51e38a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e38d:{NFSU2_TR(0x51e38d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e390:{NFSU2_TR(0x51e390);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e392:{NFSU2_TR(0x51e392);
if(r1(R+518)){{goto L51e39d;}}
}
B51e394:L51e394:{c.instructions+=3;NFSU2_TR(0x51e394);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e397:{NFSU2_TR(0x51e397);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e399:{NFSU2_TR(0x51e399);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e380u);}goto L51e380;}}
}
B51e39b:L51e39b:{c.instructions+=1;NFSU2_TR(0x51e39b);
{goto L51e3b9;}
}
B51e39d:L51e39d:{c.instructions+=2;NFSU2_TR(0x51e39d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e39f:{NFSU2_TR(0x51e39f);
if(r1(R+518)){{goto L51e3b9;}}
}
B51e3a1:L51e3a1:{c.instructions+=2;NFSU2_TR(0x51e3a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e3a4:{NFSU2_TR(0x51e3a4);
if(r1(R+518)){{goto L51e3b6;}}
}
B51e3a6:L51e3a6:{c.instructions+=3;NFSU2_TR(0x51e3a6);
__builtin_memmove((R+4),(R+28),4);
}
B51e3a8:{NFSU2_TR(0x51e3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e3ab:{NFSU2_TR(0x51e3ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e3b0ull));
TAIL_STATIC(0x517720u,517);
}
B51e3b0:L51e3b0:{c.instructions+=2;NFSU2_TR(0x51e3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e3b3:{NFSU2_TR(0x51e3b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e3b6:L51e3b6:{c.instructions+=1;NFSU2_TR(0x51e3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e3b9:L51e3b9:{c.instructions+=7;NFSU2_TR(0x51e3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e3bc:{NFSU2_TR(0x51e3bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51e3bd:{NFSU2_TR(0x51e3bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e3be:{NFSU2_TR(0x51e3be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51e3bf:{NFSU2_TR(0x51e3bf);
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
B51e3c1:{NFSU2_TR(0x51e3c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51e3c2:{NFSU2_TR(0x51e3c2);
if(r1(R+518)){{goto L51e3d4;}}
}
B51e3c4:L51e3c4:{c.instructions+=4;NFSU2_TR(0x51e3c4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e3c6:{NFSU2_TR(0x51e3c6);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e3cb:{NFSU2_TR(0x51e3cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e3cc:{NFSU2_TR(0x51e3cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e3d1ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51e3d1:L51e3d1:{c.instructions+=1;NFSU2_TR(0x51e3d1);
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
B51e3d4:L51e3d4:{c.instructions+=1;NFSU2_TR(0x51e3d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e3e0:L51e3e0:{c.instructions+=10;NFSU2_TR(0x51e3e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e3e1:{NFSU2_TR(0x51e3e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e3e2:{NFSU2_TR(0x51e3e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e3e3:{NFSU2_TR(0x51e3e3);
__builtin_memmove((R+20),(R+4),4);
}
B51e3e5:{NFSU2_TR(0x51e3e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e3e6:{NFSU2_TR(0x51e3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e3e9:{NFSU2_TR(0x51e3e9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B51e3eb:{NFSU2_TR(0x51e3eb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e3ed:{NFSU2_TR(0x51e3ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51e3f0:{NFSU2_TR(0x51e3f0);
if(r1(R+518)){{goto L51e439;}}
}
B51e3f2:L51e3f2:{c.instructions+=3;NFSU2_TR(0x51e3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e3f5:{NFSU2_TR(0x51e3f5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e3f7:{NFSU2_TR(0x51e3f7);
if(r1(R+518)){{goto L51e439;}}
}
B51e3f9:L51e3f9:{c.instructions+=1;NFSU2_TR(0x51e3f9);
__builtin_memmove((R+16),(R+16),4);
}
B51e400:L51e400:{c.instructions+=2;NFSU2_TR(0x51e400);
u8 U[4];
w4(U+0,u32(0x78f570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e405:{NFSU2_TR(0x51e405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e40aull));
TAIL_STATIC(0x505450u,505);
}
B51e40a:L51e40a:{c.instructions+=4;NFSU2_TR(0x51e40a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e40d:{NFSU2_TR(0x51e40d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e410:{NFSU2_TR(0x51e410);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e412:{NFSU2_TR(0x51e412);
if(r1(R+518)){{goto L51e41d;}}
}
B51e414:L51e414:{c.instructions+=3;NFSU2_TR(0x51e414);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e417:{NFSU2_TR(0x51e417);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e419:{NFSU2_TR(0x51e419);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e400u);}goto L51e400;}}
}
B51e41b:L51e41b:{c.instructions+=1;NFSU2_TR(0x51e41b);
{goto L51e439;}
}
B51e41d:L51e41d:{c.instructions+=2;NFSU2_TR(0x51e41d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e41f:{NFSU2_TR(0x51e41f);
if(r1(R+518)){{goto L51e439;}}
}
B51e421:L51e421:{c.instructions+=2;NFSU2_TR(0x51e421);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e424:{NFSU2_TR(0x51e424);
if(r1(R+518)){{goto L51e436;}}
}
B51e426:L51e426:{c.instructions+=3;NFSU2_TR(0x51e426);
__builtin_memmove((R+4),(R+28),4);
}
B51e428:{NFSU2_TR(0x51e428);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e42b:{NFSU2_TR(0x51e42b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e430ull));
TAIL_STATIC(0x517720u,517);
}
B51e430:L51e430:{c.instructions+=2;NFSU2_TR(0x51e430);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e433:{NFSU2_TR(0x51e433);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e436:L51e436:{c.instructions+=1;NFSU2_TR(0x51e436);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e439:L51e439:{c.instructions+=3;NFSU2_TR(0x51e439);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e43c:{NFSU2_TR(0x51e43c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e43e:{NFSU2_TR(0x51e43e);
if(r1(R+518)){{goto L51e489;}}
}
B51e440:L51e440:{c.instructions+=3;NFSU2_TR(0x51e440);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e443:{NFSU2_TR(0x51e443);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e445:{NFSU2_TR(0x51e445);
if(r1(R+518)){{goto L51e489;}}
}
B51e447:L51e447:{c.instructions+=1;NFSU2_TR(0x51e447);
{goto L51e450;}
}
B51e450:L51e450:{c.instructions+=2;NFSU2_TR(0x51e450);
u8 U[4];
w4(U+0,u32(0x78f570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e455:{NFSU2_TR(0x51e455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e45aull));
TAIL_STATIC(0x505450u,505);
}
B51e45a:L51e45a:{c.instructions+=4;NFSU2_TR(0x51e45a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e45d:{NFSU2_TR(0x51e45d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e460:{NFSU2_TR(0x51e460);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e462:{NFSU2_TR(0x51e462);
if(r1(R+518)){{goto L51e46d;}}
}
B51e464:L51e464:{c.instructions+=3;NFSU2_TR(0x51e464);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e467:{NFSU2_TR(0x51e467);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e469:{NFSU2_TR(0x51e469);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e450u);}goto L51e450;}}
}
B51e46b:L51e46b:{c.instructions+=1;NFSU2_TR(0x51e46b);
{goto L51e489;}
}
B51e46d:L51e46d:{c.instructions+=2;NFSU2_TR(0x51e46d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e46f:{NFSU2_TR(0x51e46f);
if(r1(R+518)){{goto L51e489;}}
}
B51e471:L51e471:{c.instructions+=2;NFSU2_TR(0x51e471);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e474:{NFSU2_TR(0x51e474);
if(r1(R+518)){{goto L51e486;}}
}
B51e476:L51e476:{c.instructions+=3;NFSU2_TR(0x51e476);
__builtin_memmove((R+4),(R+28),4);
}
B51e478:{NFSU2_TR(0x51e478);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e47b:{NFSU2_TR(0x51e47b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e480ull));
TAIL_STATIC(0x517720u,517);
}
B51e480:L51e480:{c.instructions+=2;NFSU2_TR(0x51e480);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e483:{NFSU2_TR(0x51e483);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e486:L51e486:{c.instructions+=1;NFSU2_TR(0x51e486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e489:L51e489:{c.instructions+=3;NFSU2_TR(0x51e489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e48c:{NFSU2_TR(0x51e48c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e48e:{NFSU2_TR(0x51e48e);
if(r1(R+518)){{goto L51e4d9;}}
}
B51e490:L51e490:{c.instructions+=3;NFSU2_TR(0x51e490);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e493:{NFSU2_TR(0x51e493);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e495:{NFSU2_TR(0x51e495);
if(r1(R+518)){{goto L51e4d9;}}
}
B51e497:L51e497:{c.instructions+=1;NFSU2_TR(0x51e497);
{goto L51e4a0;}
}
B51e4a0:L51e4a0:{c.instructions+=2;NFSU2_TR(0x51e4a0);
u8 U[4];
w4(U+0,u32(0x78f570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e4a5:{NFSU2_TR(0x51e4a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e4aaull));
TAIL_STATIC(0x505450u,505);
}
B51e4aa:L51e4aa:{c.instructions+=4;NFSU2_TR(0x51e4aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e4ad:{NFSU2_TR(0x51e4ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e4b0:{NFSU2_TR(0x51e4b0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e4b2:{NFSU2_TR(0x51e4b2);
if(r1(R+518)){{goto L51e4bd;}}
}
B51e4b4:L51e4b4:{c.instructions+=3;NFSU2_TR(0x51e4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e4b7:{NFSU2_TR(0x51e4b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e4b9:{NFSU2_TR(0x51e4b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e4a0u);}goto L51e4a0;}}
}
B51e4bb:L51e4bb:{c.instructions+=1;NFSU2_TR(0x51e4bb);
{goto L51e4d9;}
}
B51e4bd:L51e4bd:{c.instructions+=2;NFSU2_TR(0x51e4bd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e4bf:{NFSU2_TR(0x51e4bf);
if(r1(R+518)){{goto L51e4d9;}}
}
B51e4c1:L51e4c1:{c.instructions+=2;NFSU2_TR(0x51e4c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e4c4:{NFSU2_TR(0x51e4c4);
if(r1(R+518)){{goto L51e4d6;}}
}
B51e4c6:L51e4c6:{c.instructions+=3;NFSU2_TR(0x51e4c6);
__builtin_memmove((R+4),(R+28),4);
}
B51e4c8:{NFSU2_TR(0x51e4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e4cb:{NFSU2_TR(0x51e4cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e4d0ull));
TAIL_STATIC(0x517720u,517);
}
B51e4d0:L51e4d0:{c.instructions+=2;NFSU2_TR(0x51e4d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51e4d3:{NFSU2_TR(0x51e4d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e4d6:L51e4d6:{c.instructions+=1;NFSU2_TR(0x51e4d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e4d9:L51e4d9:{c.instructions+=3;NFSU2_TR(0x51e4d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e4dc:{NFSU2_TR(0x51e4dc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e4de:{NFSU2_TR(0x51e4de);
if(r1(R+518)){{goto L51e529;}}
}
B51e4e0:L51e4e0:{c.instructions+=3;NFSU2_TR(0x51e4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e4e3:{NFSU2_TR(0x51e4e3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e4e5:{NFSU2_TR(0x51e4e5);
if(r1(R+518)){{goto L51e529;}}
}
B51e4e7:L51e4e7:{c.instructions+=1;NFSU2_TR(0x51e4e7);
{goto L51e4f0;}
}
B51e4f0:L51e4f0:{c.instructions+=2;NFSU2_TR(0x51e4f0);
u8 U[4];
w4(U+0,u32(0x78f570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e4f5:{NFSU2_TR(0x51e4f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e4faull));
TAIL_STATIC(0x505450u,505);
}
B51e4fa:L51e4fa:{c.instructions+=4;NFSU2_TR(0x51e4fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e4fd:{NFSU2_TR(0x51e4fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e500:{NFSU2_TR(0x51e500);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e502:{NFSU2_TR(0x51e502);
if(r1(R+518)){{goto L51e50d;}}
}
B51e504:L51e504:{c.instructions+=3;NFSU2_TR(0x51e504);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e507:{NFSU2_TR(0x51e507);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e509:{NFSU2_TR(0x51e509);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e4f0u);}goto L51e4f0;}}
}
B51e50b:L51e50b:{c.instructions+=1;NFSU2_TR(0x51e50b);
{goto L51e529;}
}
B51e50d:L51e50d:{c.instructions+=2;NFSU2_TR(0x51e50d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e50f:{NFSU2_TR(0x51e50f);
if(r1(R+518)){{goto L51e529;}}
}
B51e511:L51e511:{c.instructions+=2;NFSU2_TR(0x51e511);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e514:{NFSU2_TR(0x51e514);
if(r1(R+518)){{goto L51e526;}}
}
B51e516:L51e516:{c.instructions+=3;NFSU2_TR(0x51e516);
__builtin_memmove((R+4),(R+28),4);
}
B51e518:{NFSU2_TR(0x51e518);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e51b:{NFSU2_TR(0x51e51b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e520ull));
TAIL_STATIC(0x517720u,517);
}
B51e520:L51e520:{c.instructions+=2;NFSU2_TR(0x51e520);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e523:{NFSU2_TR(0x51e523);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e526:L51e526:{c.instructions+=1;NFSU2_TR(0x51e526);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e529:L51e529:{c.instructions+=7;NFSU2_TR(0x51e529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e52c:{NFSU2_TR(0x51e52c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51e52d:{NFSU2_TR(0x51e52d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e52e:{NFSU2_TR(0x51e52e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51e52f:{NFSU2_TR(0x51e52f);
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
B51e531:{NFSU2_TR(0x51e531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51e532:{NFSU2_TR(0x51e532);
if(r1(R+518)){{goto L51e544;}}
}
B51e534:L51e534:{c.instructions+=4;NFSU2_TR(0x51e534);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e536:{NFSU2_TR(0x51e536);
u8 U[4];
w4(U+0,u32(0x78f570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e53b:{NFSU2_TR(0x51e53b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e53c:{NFSU2_TR(0x51e53c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e541ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51e541:L51e541:{c.instructions+=1;NFSU2_TR(0x51e541);
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
B51e544:L51e544:{c.instructions+=1;NFSU2_TR(0x51e544);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e550:L51e550:{c.instructions+=9;NFSU2_TR(0x51e550);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e551:{NFSU2_TR(0x51e551);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e552:{NFSU2_TR(0x51e552);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e553:{NFSU2_TR(0x51e553);
__builtin_memmove((R+20),(R+4),4);
}
B51e555:{NFSU2_TR(0x51e555);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e556:{NFSU2_TR(0x51e556);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e559:{NFSU2_TR(0x51e559);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B51e55b:{NFSU2_TR(0x51e55b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e55d:{NFSU2_TR(0x51e55d);
if(r1(R+518)){{goto L51e59f;}}
}
B51e55f:L51e55f:{c.instructions+=3;NFSU2_TR(0x51e55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e562:{NFSU2_TR(0x51e562);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e564:{NFSU2_TR(0x51e564);
if(r1(R+518)){{goto L51e59f;}}
}
B51e566:L51e566:{c.instructions+=2;NFSU2_TR(0x51e566);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e56b:{NFSU2_TR(0x51e56b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e570ull));
TAIL_STATIC(0x505450u,505);
}
B51e570:L51e570:{c.instructions+=4;NFSU2_TR(0x51e570);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e573:{NFSU2_TR(0x51e573);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e576:{NFSU2_TR(0x51e576);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e578:{NFSU2_TR(0x51e578);
if(r1(R+518)){{goto L51e583;}}
}
B51e57a:L51e57a:{c.instructions+=3;NFSU2_TR(0x51e57a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e57d:{NFSU2_TR(0x51e57d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e57f:{NFSU2_TR(0x51e57f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e566u);}goto L51e566;}}
}
B51e581:L51e581:{c.instructions+=1;NFSU2_TR(0x51e581);
{goto L51e59f;}
}
B51e583:L51e583:{c.instructions+=2;NFSU2_TR(0x51e583);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e585:{NFSU2_TR(0x51e585);
if(r1(R+518)){{goto L51e59f;}}
}
B51e587:L51e587:{c.instructions+=2;NFSU2_TR(0x51e587);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e58a:{NFSU2_TR(0x51e58a);
if(r1(R+518)){{goto L51e59c;}}
}
B51e58c:L51e58c:{c.instructions+=3;NFSU2_TR(0x51e58c);
__builtin_memmove((R+4),(R+28),4);
}
B51e58e:{NFSU2_TR(0x51e58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e591:{NFSU2_TR(0x51e591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e596ull));
TAIL_STATIC(0x517720u,517);
}
B51e596:L51e596:{c.instructions+=2;NFSU2_TR(0x51e596);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e599:{NFSU2_TR(0x51e599);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e59c:L51e59c:{c.instructions+=1;NFSU2_TR(0x51e59c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e59f:L51e59f:{c.instructions+=3;NFSU2_TR(0x51e59f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e5a2:{NFSU2_TR(0x51e5a2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e5a4:{NFSU2_TR(0x51e5a4);
if(r1(R+518)){{goto L51e5e9;}}
}
B51e5a6:L51e5a6:{c.instructions+=3;NFSU2_TR(0x51e5a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e5a9:{NFSU2_TR(0x51e5a9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e5ab:{NFSU2_TR(0x51e5ab);
if(r1(R+518)){{goto L51e5e9;}}
}
B51e5ad:L51e5ad:{c.instructions+=1;NFSU2_TR(0x51e5ad);
__builtin_memmove((R+4),(R+4),4);
}
B51e5b0:L51e5b0:{c.instructions+=2;NFSU2_TR(0x51e5b0);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e5b5:{NFSU2_TR(0x51e5b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e5baull));
TAIL_STATIC(0x505450u,505);
}
B51e5ba:L51e5ba:{c.instructions+=4;NFSU2_TR(0x51e5ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e5bd:{NFSU2_TR(0x51e5bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e5c0:{NFSU2_TR(0x51e5c0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e5c2:{NFSU2_TR(0x51e5c2);
if(r1(R+518)){{goto L51e5cd;}}
}
B51e5c4:L51e5c4:{c.instructions+=3;NFSU2_TR(0x51e5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e5c7:{NFSU2_TR(0x51e5c7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e5c9:{NFSU2_TR(0x51e5c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e5b0u);}goto L51e5b0;}}
}
B51e5cb:L51e5cb:{c.instructions+=1;NFSU2_TR(0x51e5cb);
{goto L51e5e9;}
}
B51e5cd:L51e5cd:{c.instructions+=2;NFSU2_TR(0x51e5cd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e5cf:{NFSU2_TR(0x51e5cf);
if(r1(R+518)){{goto L51e5e9;}}
}
B51e5d1:L51e5d1:{c.instructions+=2;NFSU2_TR(0x51e5d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e5d4:{NFSU2_TR(0x51e5d4);
if(r1(R+518)){{goto L51e5e6;}}
}
B51e5d6:L51e5d6:{c.instructions+=3;NFSU2_TR(0x51e5d6);
__builtin_memmove((R+4),(R+28),4);
}
B51e5d8:{NFSU2_TR(0x51e5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e5db:{NFSU2_TR(0x51e5db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e5e0ull));
TAIL_STATIC(0x517720u,517);
}
B51e5e0:L51e5e0:{c.instructions+=2;NFSU2_TR(0x51e5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e5e3:{NFSU2_TR(0x51e5e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e5e6:L51e5e6:{c.instructions+=1;NFSU2_TR(0x51e5e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e5e9:L51e5e9:{c.instructions+=3;NFSU2_TR(0x51e5e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e5ec:{NFSU2_TR(0x51e5ec);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e5ee:{NFSU2_TR(0x51e5ee);
if(r1(R+518)){{goto L51e639;}}
}
B51e5f0:L51e5f0:{c.instructions+=3;NFSU2_TR(0x51e5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e5f3:{NFSU2_TR(0x51e5f3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e5f5:{NFSU2_TR(0x51e5f5);
if(r1(R+518)){{goto L51e639;}}
}
B51e5f7:L51e5f7:{c.instructions+=1;NFSU2_TR(0x51e5f7);
{goto L51e600;}
}
B51e600:L51e600:{c.instructions+=2;NFSU2_TR(0x51e600);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e605:{NFSU2_TR(0x51e605);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e60aull));
TAIL_STATIC(0x505450u,505);
}
B51e60a:L51e60a:{c.instructions+=4;NFSU2_TR(0x51e60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e60d:{NFSU2_TR(0x51e60d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e610:{NFSU2_TR(0x51e610);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e612:{NFSU2_TR(0x51e612);
if(r1(R+518)){{goto L51e61d;}}
}
B51e614:L51e614:{c.instructions+=3;NFSU2_TR(0x51e614);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e617:{NFSU2_TR(0x51e617);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e619:{NFSU2_TR(0x51e619);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e600u);}goto L51e600;}}
}
B51e61b:L51e61b:{c.instructions+=1;NFSU2_TR(0x51e61b);
{goto L51e639;}
}
B51e61d:L51e61d:{c.instructions+=2;NFSU2_TR(0x51e61d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e61f:{NFSU2_TR(0x51e61f);
if(r1(R+518)){{goto L51e639;}}
}
B51e621:L51e621:{c.instructions+=2;NFSU2_TR(0x51e621);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e624:{NFSU2_TR(0x51e624);
if(r1(R+518)){{goto L51e636;}}
}
B51e626:L51e626:{c.instructions+=3;NFSU2_TR(0x51e626);
__builtin_memmove((R+4),(R+28),4);
}
B51e628:{NFSU2_TR(0x51e628);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e62b:{NFSU2_TR(0x51e62b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e630ull));
TAIL_STATIC(0x517720u,517);
}
B51e630:L51e630:{c.instructions+=2;NFSU2_TR(0x51e630);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51e633:{NFSU2_TR(0x51e633);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e636:L51e636:{c.instructions+=1;NFSU2_TR(0x51e636);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e639:L51e639:{c.instructions+=3;NFSU2_TR(0x51e639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e63c:{NFSU2_TR(0x51e63c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e63e:{NFSU2_TR(0x51e63e);
if(r1(R+518)){{goto L51e689;}}
}
B51e640:L51e640:{c.instructions+=3;NFSU2_TR(0x51e640);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e643:{NFSU2_TR(0x51e643);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e645:{NFSU2_TR(0x51e645);
if(r1(R+518)){{goto L51e689;}}
}
B51e647:L51e647:{c.instructions+=1;NFSU2_TR(0x51e647);
{goto L51e650;}
}
B51e650:L51e650:{c.instructions+=2;NFSU2_TR(0x51e650);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e655:{NFSU2_TR(0x51e655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e65aull));
TAIL_STATIC(0x505450u,505);
}
B51e65a:L51e65a:{c.instructions+=4;NFSU2_TR(0x51e65a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e65d:{NFSU2_TR(0x51e65d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e660:{NFSU2_TR(0x51e660);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e662:{NFSU2_TR(0x51e662);
if(r1(R+518)){{goto L51e66d;}}
}
B51e664:L51e664:{c.instructions+=3;NFSU2_TR(0x51e664);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e667:{NFSU2_TR(0x51e667);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e669:{NFSU2_TR(0x51e669);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e650u);}goto L51e650;}}
}
B51e66b:L51e66b:{c.instructions+=1;NFSU2_TR(0x51e66b);
{goto L51e689;}
}
B51e66d:L51e66d:{c.instructions+=2;NFSU2_TR(0x51e66d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e66f:{NFSU2_TR(0x51e66f);
if(r1(R+518)){{goto L51e689;}}
}
B51e671:L51e671:{c.instructions+=2;NFSU2_TR(0x51e671);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e674:{NFSU2_TR(0x51e674);
if(r1(R+518)){{goto L51e686;}}
}
B51e676:L51e676:{c.instructions+=3;NFSU2_TR(0x51e676);
__builtin_memmove((R+4),(R+28),4);
}
B51e678:{NFSU2_TR(0x51e678);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e67b:{NFSU2_TR(0x51e67b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e680ull));
TAIL_STATIC(0x517720u,517);
}
B51e680:L51e680:{c.instructions+=2;NFSU2_TR(0x51e680);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e683:{NFSU2_TR(0x51e683);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e686:L51e686:{c.instructions+=1;NFSU2_TR(0x51e686);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e689:L51e689:{c.instructions+=7;NFSU2_TR(0x51e689);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e68c:{NFSU2_TR(0x51e68c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51e68d:{NFSU2_TR(0x51e68d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e68e:{NFSU2_TR(0x51e68e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51e68f:{NFSU2_TR(0x51e68f);
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
B51e691:{NFSU2_TR(0x51e691);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51e692:{NFSU2_TR(0x51e692);
if(r1(R+518)){{goto L51e6a4;}}
}
B51e694:L51e694:{c.instructions+=4;NFSU2_TR(0x51e694);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e696:{NFSU2_TR(0x51e696);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e69b:{NFSU2_TR(0x51e69b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e69c:{NFSU2_TR(0x51e69c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e6a1ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51e6a1:L51e6a1:{c.instructions+=1;NFSU2_TR(0x51e6a1);
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
B51e6a4:L51e6a4:{c.instructions+=1;NFSU2_TR(0x51e6a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e6b0:L51e6b0:{c.instructions+=3;NFSU2_TR(0x51e6b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e6b4:{NFSU2_TR(0x51e6b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51e6b9:{NFSU2_TR(0x51e6b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51e6d1;}}
}
B51e6bb:L51e6bb:{c.instructions+=5;NFSU2_TR(0x51e6bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e6be:{NFSU2_TR(0x51e6be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e6c0:{NFSU2_TR(0x51e6c0);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e6c5:{NFSU2_TR(0x51e6c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e6c6:{NFSU2_TR(0x51e6c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e6cbull));
TAIL_STATIC(0x51cf70u,51c);
}
B51e6cb:L51e6cb:{c.instructions+=2;NFSU2_TR(0x51e6cb);
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
B51e6ce:{NFSU2_TR(0x51e6ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e6d1:L51e6d1:{c.instructions+=2;NFSU2_TR(0x51e6d1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51e6d6:{NFSU2_TR(0x51e6d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51e6eb;}}
}
B51e6d8:L51e6d8:{c.instructions+=5;NFSU2_TR(0x51e6d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e6db:{NFSU2_TR(0x51e6db);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e6dd:{NFSU2_TR(0x51e6dd);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e6e2:{NFSU2_TR(0x51e6e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e6e3:{NFSU2_TR(0x51e6e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e6e8ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51e6e8:L51e6e8:{c.instructions+=1;NFSU2_TR(0x51e6e8);
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
B51e6eb:L51e6eb:{c.instructions+=1;NFSU2_TR(0x51e6eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e6f0:L51e6f0:{c.instructions+=4;NFSU2_TR(0x51e6f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e6f1:{NFSU2_TR(0x51e6f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e6f2:{NFSU2_TR(0x51e6f2);
__builtin_memmove((R+24),(R+4),4);
}
B51e6f4:{NFSU2_TR(0x51e6f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e6f9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e270u);}goto L51e270;}
}
B51e6f9:L51e6f9:{c.instructions+=3;NFSU2_TR(0x51e6f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e6fc:{NFSU2_TR(0x51e6fc);
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
B51e6fe:{NFSU2_TR(0x51e6fe);
if(r1(R+518)){{goto L51e752;}}
}
B51e700:L51e700:{c.instructions+=3;NFSU2_TR(0x51e700);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e703:{NFSU2_TR(0x51e703);
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
B51e705:{NFSU2_TR(0x51e705);
if(r1(R+518)){{goto L51e752;}}
}
B51e707:L51e707:{c.instructions+=1;NFSU2_TR(0x51e707);
{goto L51e710;}
}
B51e710:L51e710:{c.instructions+=2;NFSU2_TR(0x51e710);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e715:{NFSU2_TR(0x51e715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e71aull));
TAIL_STATIC(0x505450u,505);
}
B51e71a:L51e71a:{c.instructions+=4;NFSU2_TR(0x51e71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e71d:{NFSU2_TR(0x51e71d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e720:{NFSU2_TR(0x51e720);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e722:{NFSU2_TR(0x51e722);
if(r1(R+518)){{goto L51e72e;}}
}
B51e724:L51e724:{c.instructions+=3;NFSU2_TR(0x51e724);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e727:{NFSU2_TR(0x51e727);
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
B51e729:{NFSU2_TR(0x51e729);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e710u);}goto L51e710;}}
}
B51e72b:L51e72b:{c.instructions+=3;NFSU2_TR(0x51e72b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51e72c:{NFSU2_TR(0x51e72c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e72d:{NFSU2_TR(0x51e72d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e72e:L51e72e:{c.instructions+=2;NFSU2_TR(0x51e72e);
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
B51e730:{NFSU2_TR(0x51e730);
if(r1(R+518)){{goto L51e752;}}
}
B51e732:L51e732:{c.instructions+=2;NFSU2_TR(0x51e732);
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
B51e735:{NFSU2_TR(0x51e735);
if(r1(R+518)){{goto L51e74b;}}
}
B51e737:L51e737:{c.instructions+=3;NFSU2_TR(0x51e737);
__builtin_memmove((R+4),(R+28),4);
}
B51e739:{NFSU2_TR(0x51e739);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e73c:{NFSU2_TR(0x51e73c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e741ull));
TAIL_STATIC(0x517720u,517);
}
B51e741:L51e741:{c.instructions+=2;NFSU2_TR(0x51e741);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e744:{NFSU2_TR(0x51e744);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e74b:L51e74b:{c.instructions+=1;NFSU2_TR(0x51e74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e752:L51e752:{c.instructions+=3;NFSU2_TR(0x51e752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51e753:{NFSU2_TR(0x51e753);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e754:{NFSU2_TR(0x51e754);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e760:L51e760:{c.instructions+=4;NFSU2_TR(0x51e760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e761:{NFSU2_TR(0x51e761);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e762:{NFSU2_TR(0x51e762);
__builtin_memmove((R+24),(R+4),4);
}
B51e764:{NFSU2_TR(0x51e764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e769ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e3e0u);}goto L51e3e0;}
}
B51e769:L51e769:{c.instructions+=3;NFSU2_TR(0x51e769);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e76c:{NFSU2_TR(0x51e76c);
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
B51e76e:{NFSU2_TR(0x51e76e);
if(r1(R+518)){{goto L51e7c2;}}
}
B51e770:L51e770:{c.instructions+=3;NFSU2_TR(0x51e770);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e773:{NFSU2_TR(0x51e773);
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
B51e775:{NFSU2_TR(0x51e775);
if(r1(R+518)){{goto L51e7c2;}}
}
B51e777:L51e777:{c.instructions+=1;NFSU2_TR(0x51e777);
{goto L51e780;}
}
B51e780:L51e780:{c.instructions+=2;NFSU2_TR(0x51e780);
u8 U[4];
w4(U+0,u32(0x78f570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e785:{NFSU2_TR(0x51e785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e78aull));
TAIL_STATIC(0x505450u,505);
}
B51e78a:L51e78a:{c.instructions+=4;NFSU2_TR(0x51e78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e78d:{NFSU2_TR(0x51e78d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e790:{NFSU2_TR(0x51e790);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e792:{NFSU2_TR(0x51e792);
if(r1(R+518)){{goto L51e79e;}}
}
B51e794:L51e794:{c.instructions+=3;NFSU2_TR(0x51e794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e797:{NFSU2_TR(0x51e797);
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
B51e799:{NFSU2_TR(0x51e799);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e780u);}goto L51e780;}}
}
B51e79b:L51e79b:{c.instructions+=3;NFSU2_TR(0x51e79b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51e79c:{NFSU2_TR(0x51e79c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e79d:{NFSU2_TR(0x51e79d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e79e:L51e79e:{c.instructions+=2;NFSU2_TR(0x51e79e);
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
B51e7a0:{NFSU2_TR(0x51e7a0);
if(r1(R+518)){{goto L51e7c2;}}
}
B51e7a2:L51e7a2:{c.instructions+=2;NFSU2_TR(0x51e7a2);
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
B51e7a5:{NFSU2_TR(0x51e7a5);
if(r1(R+518)){{goto L51e7bb;}}
}
B51e7a7:L51e7a7:{c.instructions+=3;NFSU2_TR(0x51e7a7);
__builtin_memmove((R+4),(R+28),4);
}
B51e7a9:{NFSU2_TR(0x51e7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e7ac:{NFSU2_TR(0x51e7ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e7b1ull));
TAIL_STATIC(0x517720u,517);
}
B51e7b1:L51e7b1:{c.instructions+=2;NFSU2_TR(0x51e7b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e7b4:{NFSU2_TR(0x51e7b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e7bb:L51e7bb:{c.instructions+=1;NFSU2_TR(0x51e7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e7c2:L51e7c2:{c.instructions+=3;NFSU2_TR(0x51e7c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51e7c3:{NFSU2_TR(0x51e7c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e7c4:{NFSU2_TR(0x51e7c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e7d0:L51e7d0:{c.instructions+=4;NFSU2_TR(0x51e7d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e7d1:{NFSU2_TR(0x51e7d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e7d2:{NFSU2_TR(0x51e7d2);
__builtin_memmove((R+24),(R+4),4);
}
B51e7d4:{NFSU2_TR(0x51e7d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e7d9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e550u);}goto L51e550;}
}
B51e7d9:L51e7d9:{c.instructions+=3;NFSU2_TR(0x51e7d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e7dc:{NFSU2_TR(0x51e7dc);
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
B51e7de:{NFSU2_TR(0x51e7de);
if(r1(R+518)){{goto L51e832;}}
}
B51e7e0:L51e7e0:{c.instructions+=3;NFSU2_TR(0x51e7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e7e3:{NFSU2_TR(0x51e7e3);
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
B51e7e5:{NFSU2_TR(0x51e7e5);
if(r1(R+518)){{goto L51e832;}}
}
B51e7e7:L51e7e7:{c.instructions+=1;NFSU2_TR(0x51e7e7);
{goto L51e7f0;}
}
B51e7f0:L51e7f0:{c.instructions+=2;NFSU2_TR(0x51e7f0);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e7f5:{NFSU2_TR(0x51e7f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e7faull));
TAIL_STATIC(0x505450u,505);
}
B51e7fa:L51e7fa:{c.instructions+=4;NFSU2_TR(0x51e7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e7fd:{NFSU2_TR(0x51e7fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e800:{NFSU2_TR(0x51e800);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e802:{NFSU2_TR(0x51e802);
if(r1(R+518)){{goto L51e80e;}}
}
B51e804:L51e804:{c.instructions+=3;NFSU2_TR(0x51e804);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e807:{NFSU2_TR(0x51e807);
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
B51e809:{NFSU2_TR(0x51e809);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e7f0u);}goto L51e7f0;}}
}
B51e80b:L51e80b:{c.instructions+=3;NFSU2_TR(0x51e80b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51e80c:{NFSU2_TR(0x51e80c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e80d:{NFSU2_TR(0x51e80d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e80e:L51e80e:{c.instructions+=2;NFSU2_TR(0x51e80e);
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
B51e810:{NFSU2_TR(0x51e810);
if(r1(R+518)){{goto L51e832;}}
}
B51e812:L51e812:{c.instructions+=2;NFSU2_TR(0x51e812);
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
B51e815:{NFSU2_TR(0x51e815);
if(r1(R+518)){{goto L51e82b;}}
}
B51e817:L51e817:{c.instructions+=3;NFSU2_TR(0x51e817);
__builtin_memmove((R+4),(R+28),4);
}
B51e819:{NFSU2_TR(0x51e819);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e81c:{NFSU2_TR(0x51e81c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e821ull));
TAIL_STATIC(0x517720u,517);
}
B51e821:L51e821:{c.instructions+=2;NFSU2_TR(0x51e821);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e824:{NFSU2_TR(0x51e824);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e82b:L51e82b:{c.instructions+=1;NFSU2_TR(0x51e82b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e832:L51e832:{c.instructions+=3;NFSU2_TR(0x51e832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51e833:{NFSU2_TR(0x51e833);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e834:{NFSU2_TR(0x51e834);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e840:L51e840:{c.instructions+=14;NFSU2_TR(0x51e840);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e844:{NFSU2_TR(0x51e844);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51e848:{NFSU2_TR(0x51e848);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e849:{NFSU2_TR(0x51e849);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e84a:{NFSU2_TR(0x51e84a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e84e:{NFSU2_TR(0x51e84e);
__builtin_memmove((R+24),(R+4),4);
}
B51e850:{NFSU2_TR(0x51e850);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e854:{NFSU2_TR(0x51e854);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e855:{NFSU2_TR(0x51e855);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e859:{NFSU2_TR(0x51e859);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e85a:{NFSU2_TR(0x51e85a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e85b:{NFSU2_TR(0x51e85b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e85c:{NFSU2_TR(0x51e85c);
__builtin_memmove((R+4),(R+24),4);
}
B51e85e:{NFSU2_TR(0x51e85e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e863ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e1b0u);}goto L51e1b0;}
}
B51e863:L51e863:{c.instructions+=24;NFSU2_TR(0x51e863);
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
B51e865:{NFSU2_TR(0x51e865);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e868:{NFSU2_TR(0x51e868);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e86b:{NFSU2_TR(0x51e86b);
u8 U[4];
w4(U+0,u32(0x79b400ull));
s4(u32(r4(R+24)),r4(U+0));
}
B51e871:{NFSU2_TR(0x51e871);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e874:{NFSU2_TR(0x51e874);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e877:{NFSU2_TR(0x51e877);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e87a:{NFSU2_TR(0x51e87a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e87d:{NFSU2_TR(0x51e87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e880:{NFSU2_TR(0x51e880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e883:{NFSU2_TR(0x51e883);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e886:{NFSU2_TR(0x51e886);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e889:{NFSU2_TR(0x51e889);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e88f:{NFSU2_TR(0x51e88f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e895:{NFSU2_TR(0x51e895);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e89b:{NFSU2_TR(0x51e89b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e8a1:{NFSU2_TR(0x51e8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e8a7:{NFSU2_TR(0x51e8a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51e8aa:{NFSU2_TR(0x51e8aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x78f544ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e8b1:{NFSU2_TR(0x51e8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x783fe5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e8b8:{NFSU2_TR(0x51e8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51e8c2:{NFSU2_TR(0x51e8c2);
__builtin_memmove((R+0),(R+24),4);
}
B51e8c4:{NFSU2_TR(0x51e8c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e8c5:{NFSU2_TR(0x51e8c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e8d0:L51e8d0:{c.instructions+=9;NFSU2_TR(0x51e8d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e8d1:{NFSU2_TR(0x51e8d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e8d2:{NFSU2_TR(0x51e8d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e8d3:{NFSU2_TR(0x51e8d3);
__builtin_memmove((R+20),(R+4),4);
}
B51e8d5:{NFSU2_TR(0x51e8d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e8d6:{NFSU2_TR(0x51e8d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e8d9:{NFSU2_TR(0x51e8d9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B51e8db:{NFSU2_TR(0x51e8db);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e8dd:{NFSU2_TR(0x51e8dd);
if(r1(R+518)){{goto L51e91f;}}
}
B51e8df:L51e8df:{c.instructions+=3;NFSU2_TR(0x51e8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e8e2:{NFSU2_TR(0x51e8e2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e8e4:{NFSU2_TR(0x51e8e4);
if(r1(R+518)){{goto L51e91f;}}
}
B51e8e6:L51e8e6:{c.instructions+=2;NFSU2_TR(0x51e8e6);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e8eb:{NFSU2_TR(0x51e8eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e8f0ull));
TAIL_STATIC(0x505450u,505);
}
B51e8f0:L51e8f0:{c.instructions+=4;NFSU2_TR(0x51e8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e8f3:{NFSU2_TR(0x51e8f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e8f6:{NFSU2_TR(0x51e8f6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e8f8:{NFSU2_TR(0x51e8f8);
if(r1(R+518)){{goto L51e903;}}
}
B51e8fa:L51e8fa:{c.instructions+=3;NFSU2_TR(0x51e8fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e8fd:{NFSU2_TR(0x51e8fd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e8ff:{NFSU2_TR(0x51e8ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e8e6u);}goto L51e8e6;}}
}
B51e901:L51e901:{c.instructions+=1;NFSU2_TR(0x51e901);
{goto L51e91f;}
}
B51e903:L51e903:{c.instructions+=2;NFSU2_TR(0x51e903);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e905:{NFSU2_TR(0x51e905);
if(r1(R+518)){{goto L51e91f;}}
}
B51e907:L51e907:{c.instructions+=2;NFSU2_TR(0x51e907);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e90a:{NFSU2_TR(0x51e90a);
if(r1(R+518)){{goto L51e91c;}}
}
B51e90c:L51e90c:{c.instructions+=3;NFSU2_TR(0x51e90c);
__builtin_memmove((R+4),(R+28),4);
}
B51e90e:{NFSU2_TR(0x51e90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e911:{NFSU2_TR(0x51e911);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e916ull));
TAIL_STATIC(0x517720u,517);
}
B51e916:L51e916:{c.instructions+=2;NFSU2_TR(0x51e916);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e919:{NFSU2_TR(0x51e919);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e91c:L51e91c:{c.instructions+=1;NFSU2_TR(0x51e91c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e91f:L51e91f:{c.instructions+=3;NFSU2_TR(0x51e91f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e922:{NFSU2_TR(0x51e922);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e924:{NFSU2_TR(0x51e924);
if(r1(R+518)){{goto L51e969;}}
}
B51e926:L51e926:{c.instructions+=3;NFSU2_TR(0x51e926);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e929:{NFSU2_TR(0x51e929);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e92b:{NFSU2_TR(0x51e92b);
if(r1(R+518)){{goto L51e969;}}
}
B51e92d:L51e92d:{c.instructions+=1;NFSU2_TR(0x51e92d);
__builtin_memmove((R+4),(R+4),4);
}
B51e930:L51e930:{c.instructions+=2;NFSU2_TR(0x51e930);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e935:{NFSU2_TR(0x51e935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e93aull));
TAIL_STATIC(0x505450u,505);
}
B51e93a:L51e93a:{c.instructions+=4;NFSU2_TR(0x51e93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e93d:{NFSU2_TR(0x51e93d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e940:{NFSU2_TR(0x51e940);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e942:{NFSU2_TR(0x51e942);
if(r1(R+518)){{goto L51e94d;}}
}
B51e944:L51e944:{c.instructions+=3;NFSU2_TR(0x51e944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e947:{NFSU2_TR(0x51e947);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e949:{NFSU2_TR(0x51e949);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e930u);}goto L51e930;}}
}
B51e94b:L51e94b:{c.instructions+=1;NFSU2_TR(0x51e94b);
{goto L51e969;}
}
B51e94d:L51e94d:{c.instructions+=2;NFSU2_TR(0x51e94d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e94f:{NFSU2_TR(0x51e94f);
if(r1(R+518)){{goto L51e969;}}
}
B51e951:L51e951:{c.instructions+=2;NFSU2_TR(0x51e951);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51e954:{NFSU2_TR(0x51e954);
if(r1(R+518)){{goto L51e966;}}
}
B51e956:L51e956:{c.instructions+=3;NFSU2_TR(0x51e956);
__builtin_memmove((R+4),(R+28),4);
}
B51e958:{NFSU2_TR(0x51e958);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e95b:{NFSU2_TR(0x51e95b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e960ull));
TAIL_STATIC(0x517720u,517);
}
B51e960:L51e960:{c.instructions+=2;NFSU2_TR(0x51e960);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e963:{NFSU2_TR(0x51e963);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e966:L51e966:{c.instructions+=1;NFSU2_TR(0x51e966);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e969:L51e969:{c.instructions+=3;NFSU2_TR(0x51e969);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51e96c:{NFSU2_TR(0x51e96c);
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
B51e96e:{NFSU2_TR(0x51e96e);
if(r1(R+518)){{goto L51e9b9;}}
}
B51e970:L51e970:{c.instructions+=3;NFSU2_TR(0x51e970);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e973:{NFSU2_TR(0x51e973);
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
B51e975:{NFSU2_TR(0x51e975);
if(r1(R+518)){{goto L51e9b9;}}
}
B51e977:L51e977:{c.instructions+=1;NFSU2_TR(0x51e977);
{goto L51e980;}
}
B51e980:L51e980:{c.instructions+=2;NFSU2_TR(0x51e980);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e985:{NFSU2_TR(0x51e985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e98aull));
TAIL_STATIC(0x505450u,505);
}
B51e98a:L51e98a:{c.instructions+=4;NFSU2_TR(0x51e98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51e98d:{NFSU2_TR(0x51e98d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51e990:{NFSU2_TR(0x51e990);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51e992:{NFSU2_TR(0x51e992);
if(r1(R+518)){{goto L51e99d;}}
}
B51e994:L51e994:{c.instructions+=3;NFSU2_TR(0x51e994);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51e997:{NFSU2_TR(0x51e997);
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
B51e999:{NFSU2_TR(0x51e999);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e980u);}goto L51e980;}}
}
B51e99b:L51e99b:{c.instructions+=1;NFSU2_TR(0x51e99b);
{goto L51e9b9;}
}
B51e99d:L51e99d:{c.instructions+=2;NFSU2_TR(0x51e99d);
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
B51e99f:{NFSU2_TR(0x51e99f);
if(r1(R+518)){{goto L51e9b9;}}
}
B51e9a1:L51e9a1:{c.instructions+=2;NFSU2_TR(0x51e9a1);
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
B51e9a4:{NFSU2_TR(0x51e9a4);
if(r1(R+518)){{goto L51e9b6;}}
}
B51e9a6:L51e9a6:{c.instructions+=3;NFSU2_TR(0x51e9a6);
__builtin_memmove((R+4),(R+28),4);
}
B51e9a8:{NFSU2_TR(0x51e9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e9ab:{NFSU2_TR(0x51e9ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e9b0ull));
TAIL_STATIC(0x517720u,517);
}
B51e9b0:L51e9b0:{c.instructions+=2;NFSU2_TR(0x51e9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51e9b3:{NFSU2_TR(0x51e9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e9b6:L51e9b6:{c.instructions+=1;NFSU2_TR(0x51e9b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e9b9:L51e9b9:{c.instructions+=3;NFSU2_TR(0x51e9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e9bc:{NFSU2_TR(0x51e9bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51e9bf:{NFSU2_TR(0x51e9bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e9c2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51e9c2:L51e9c2:{c.instructions+=7;NFSU2_TR(0x51e9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e9c5:{NFSU2_TR(0x51e9c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51e9c6:{NFSU2_TR(0x51e9c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51e9c7:{NFSU2_TR(0x51e9c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51e9c8:{NFSU2_TR(0x51e9c8);
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
B51e9ca:{NFSU2_TR(0x51e9ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51e9cb:{NFSU2_TR(0x51e9cb);
if(r1(R+518)){{goto L51e9dd;}}
}
B51e9cd:L51e9cd:{c.instructions+=4;NFSU2_TR(0x51e9cd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e9cf:{NFSU2_TR(0x51e9cf);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e9d4:{NFSU2_TR(0x51e9d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e9d5:{NFSU2_TR(0x51e9d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51e9daull));
TAIL_STATIC(0x51cf70u,51c);
}
B51e9da:L51e9da:{c.instructions+=1;NFSU2_TR(0x51e9da);
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
B51e9dd:L51e9dd:{c.instructions+=1;NFSU2_TR(0x51e9dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51e9e0:L51e9e0:{c.instructions+=22;NFSU2_TR(0x51e9e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e9e2:{NFSU2_TR(0x51e9e2);
u8 U[4];
w4(U+0,u32(0x777168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e9e7:{NFSU2_TR(0x51e9e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e9ed:{NFSU2_TR(0x51e9ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e9ee:{NFSU2_TR(0x51e9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51e9f5:{NFSU2_TR(0x51e9f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e9f6:{NFSU2_TR(0x51e9f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51e9fa:{NFSU2_TR(0x51e9fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51e9fe:{NFSU2_TR(0x51e9fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51e9ff:{NFSU2_TR(0x51e9ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea00:{NFSU2_TR(0x51ea00);
__builtin_memmove((R+24),(R+4),4);
}
B51ea02:{NFSU2_TR(0x51ea02);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ea06:{NFSU2_TR(0x51ea06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea07:{NFSU2_TR(0x51ea07);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ea0b:{NFSU2_TR(0x51ea0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea0c:{NFSU2_TR(0x51ea0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ea10:{NFSU2_TR(0x51ea10);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea11:{NFSU2_TR(0x51ea11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea12:{NFSU2_TR(0x51ea12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea13:{NFSU2_TR(0x51ea13);
__builtin_memmove((R+4),(R+24),4);
}
B51ea15:{NFSU2_TR(0x51ea15);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ea19:{NFSU2_TR(0x51ea19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ea1eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e1b0u);}goto L51e1b0;}
}
B51ea1e:L51ea1e:{c.instructions+=8;NFSU2_TR(0x51ea1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ea22:{NFSU2_TR(0x51ea22);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51ea26:{NFSU2_TR(0x51ea26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ea2c:{NFSU2_TR(0x51ea2c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51ea2e:{NFSU2_TR(0x51ea2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ea34:{NFSU2_TR(0x51ea34);
u8 U[4];
w4(U+0,u32(0x79b450ull));
s4(u32(r4(R+24)),r4(U+0));
}
B51ea3a:{NFSU2_TR(0x51ea3a);
w4(R+4,u32(0x40ull));
}
B51ea3f:{NFSU2_TR(0x51ea3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ea45:L51ea45:{c.instructions+=1;NFSU2_TR(0x51ea45);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L51ea47;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ea45u);}goto L51ea45;}
}
B51ea47:L51ea47:{c.instructions+=3;NFSU2_TR(0x51ea47);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+8),(U+0),4);
}
B51ea4a:{NFSU2_TR(0x51ea4a);
w4(R+4,u32(0x40ull));
}
B51ea4f:{NFSU2_TR(0x51ea4f);
__builtin_memmove((R+28),(R+8),4);
}
B51ea51:L51ea51:{c.instructions+=1;NFSU2_TR(0x51ea51);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L51ea53;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ea51u);}goto L51ea51;}
}
B51ea53:L51ea53:{c.instructions+=4;NFSU2_TR(0x51ea53);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ea57:{NFSU2_TR(0x51ea57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ea59:{NFSU2_TR(0x51ea59);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51ea61:{NFSU2_TR(0x51ea61);
if(r1(R+518)){{goto L51ea72;}}
}
B51ea63:L51ea63:{c.instructions+=4;NFSU2_TR(0x51ea63);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea68:{NFSU2_TR(0x51ea68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea69:{NFSU2_TR(0x51ea69);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea6a:{NFSU2_TR(0x51ea6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ea6full));
TAIL_STATIC(0x43dc00u,43d);
}
B51ea6f:L51ea6f:{c.instructions+=1;NFSU2_TR(0x51ea6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51ea72:L51ea72:{c.instructions+=7;NFSU2_TR(0x51ea72);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ea76:{NFSU2_TR(0x51ea76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ea77:{NFSU2_TR(0x51ea77);
__builtin_memmove((R+0),(R+24),4);
}
B51ea79:{NFSU2_TR(0x51ea79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ea7a:{NFSU2_TR(0x51ea7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ea81:{NFSU2_TR(0x51ea81);
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
B51ea84:{NFSU2_TR(0x51ea84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ea90:L51ea90:{c.instructions+=10;NFSU2_TR(0x51ea90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea91:{NFSU2_TR(0x51ea91);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea92:{NFSU2_TR(0x51ea92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea93:{NFSU2_TR(0x51ea93);
__builtin_memmove((R+20),(R+4),4);
}
B51ea95:{NFSU2_TR(0x51ea95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ea96:{NFSU2_TR(0x51ea96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51ea99:{NFSU2_TR(0x51ea99);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B51ea9b:{NFSU2_TR(0x51ea9b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ea9d:{NFSU2_TR(0x51ea9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51eaa0:{NFSU2_TR(0x51eaa0);
if(r1(R+518)){{goto L51eae9;}}
}
B51eaa2:L51eaa2:{c.instructions+=3;NFSU2_TR(0x51eaa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51eaa5:{NFSU2_TR(0x51eaa5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eaa7:{NFSU2_TR(0x51eaa7);
if(r1(R+518)){{goto L51eae9;}}
}
B51eaa9:L51eaa9:{c.instructions+=1;NFSU2_TR(0x51eaa9);
__builtin_memmove((R+16),(R+16),4);
}
B51eab0:L51eab0:{c.instructions+=2;NFSU2_TR(0x51eab0);
u8 U[4];
w4(U+0,u32(0x78f570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51eab5:{NFSU2_TR(0x51eab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51eabaull));
TAIL_STATIC(0x505450u,505);
}
B51eaba:L51eaba:{c.instructions+=4;NFSU2_TR(0x51eaba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51eabd:{NFSU2_TR(0x51eabd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51eac0:{NFSU2_TR(0x51eac0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eac2:{NFSU2_TR(0x51eac2);
if(r1(R+518)){{goto L51eacd;}}
}
B51eac4:L51eac4:{c.instructions+=3;NFSU2_TR(0x51eac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51eac7:{NFSU2_TR(0x51eac7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eac9:{NFSU2_TR(0x51eac9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51eab0u);}goto L51eab0;}}
}
B51eacb:L51eacb:{c.instructions+=1;NFSU2_TR(0x51eacb);
{goto L51eae9;}
}
B51eacd:L51eacd:{c.instructions+=2;NFSU2_TR(0x51eacd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eacf:{NFSU2_TR(0x51eacf);
if(r1(R+518)){{goto L51eae9;}}
}
B51ead1:L51ead1:{c.instructions+=2;NFSU2_TR(0x51ead1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51ead4:{NFSU2_TR(0x51ead4);
if(r1(R+518)){{goto L51eae6;}}
}
B51ead6:L51ead6:{c.instructions+=3;NFSU2_TR(0x51ead6);
__builtin_memmove((R+4),(R+28),4);
}
B51ead8:{NFSU2_TR(0x51ead8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51eadb:{NFSU2_TR(0x51eadb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51eae0ull));
TAIL_STATIC(0x517720u,517);
}
B51eae0:L51eae0:{c.instructions+=2;NFSU2_TR(0x51eae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51eae3:{NFSU2_TR(0x51eae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51eae6:L51eae6:{c.instructions+=1;NFSU2_TR(0x51eae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51eae9:L51eae9:{c.instructions+=3;NFSU2_TR(0x51eae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51eaec:{NFSU2_TR(0x51eaec);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eaee:{NFSU2_TR(0x51eaee);
if(r1(R+518)){{goto L51eb39;}}
}
B51eaf0:L51eaf0:{c.instructions+=3;NFSU2_TR(0x51eaf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51eaf3:{NFSU2_TR(0x51eaf3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eaf5:{NFSU2_TR(0x51eaf5);
if(r1(R+518)){{goto L51eb39;}}
}
B51eaf7:L51eaf7:{c.instructions+=1;NFSU2_TR(0x51eaf7);
{goto L51eb00;}
}
B51eb00:L51eb00:{c.instructions+=2;NFSU2_TR(0x51eb00);
u8 U[4];
w4(U+0,u32(0x78f570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51eb05:{NFSU2_TR(0x51eb05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51eb0aull));
TAIL_STATIC(0x505450u,505);
}
B51eb0a:L51eb0a:{c.instructions+=4;NFSU2_TR(0x51eb0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51eb0d:{NFSU2_TR(0x51eb0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51eb10:{NFSU2_TR(0x51eb10);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eb12:{NFSU2_TR(0x51eb12);
if(r1(R+518)){{goto L51eb1d;}}
}
B51eb14:L51eb14:{c.instructions+=3;NFSU2_TR(0x51eb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51eb17:{NFSU2_TR(0x51eb17);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eb19:{NFSU2_TR(0x51eb19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51eb00u);}goto L51eb00;}}
}
B51eb1b:L51eb1b:{c.instructions+=1;NFSU2_TR(0x51eb1b);
{goto L51eb39;}
}
B51eb1d:L51eb1d:{c.instructions+=2;NFSU2_TR(0x51eb1d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eb1f:{NFSU2_TR(0x51eb1f);
if(r1(R+518)){{goto L51eb39;}}
}
B51eb21:L51eb21:{c.instructions+=2;NFSU2_TR(0x51eb21);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51eb24:{NFSU2_TR(0x51eb24);
if(r1(R+518)){{goto L51eb36;}}
}
B51eb26:L51eb26:{c.instructions+=3;NFSU2_TR(0x51eb26);
__builtin_memmove((R+4),(R+28),4);
}
B51eb28:{NFSU2_TR(0x51eb28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51eb2b:{NFSU2_TR(0x51eb2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51eb30ull));
TAIL_STATIC(0x517720u,517);
}
B51eb30:L51eb30:{c.instructions+=2;NFSU2_TR(0x51eb30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51eb33:{NFSU2_TR(0x51eb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51eb36:L51eb36:{c.instructions+=1;NFSU2_TR(0x51eb36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51eb39:L51eb39:{c.instructions+=7;NFSU2_TR(0x51eb39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51eb3c:{NFSU2_TR(0x51eb3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51eb3d:{NFSU2_TR(0x51eb3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51eb3e:{NFSU2_TR(0x51eb3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51eb3f:{NFSU2_TR(0x51eb3f);
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
B51eb41:{NFSU2_TR(0x51eb41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51eb42:{NFSU2_TR(0x51eb42);
if(r1(R+518)){{goto L51eb54;}}
}
B51eb44:L51eb44:{c.instructions+=4;NFSU2_TR(0x51eb44);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51eb46:{NFSU2_TR(0x51eb46);
u8 U[4];
w4(U+0,u32(0x78f570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51eb4b:{NFSU2_TR(0x51eb4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51eb4c:{NFSU2_TR(0x51eb4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51eb51ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51eb51:L51eb51:{c.instructions+=1;NFSU2_TR(0x51eb51);
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
B51eb54:L51eb54:{c.instructions+=1;NFSU2_TR(0x51eb54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51eb60:L51eb60:{c.instructions+=6;NFSU2_TR(0x51eb60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51eb61:{NFSU2_TR(0x51eb61);
__builtin_memmove((R+12),(R+4),4);
}
B51eb63:{NFSU2_TR(0x51eb63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51eb64:{NFSU2_TR(0x51eb64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51eb67:{NFSU2_TR(0x51eb67);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51eb69:{NFSU2_TR(0x51eb69);
if(r1(R+518)){{goto L51ebb5;}}
}
B51eb6b:L51eb6b:{c.instructions+=4;NFSU2_TR(0x51eb6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51eb6c:{NFSU2_TR(0x51eb6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51eb6f:{NFSU2_TR(0x51eb6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51eb71:{NFSU2_TR(0x51eb71);
if(r1(R+518)){{goto L51ebb4;}}
}
B51eb73:L51eb73:{c.instructions+=2;NFSU2_TR(0x51eb73);
u8 U[4];
w4(U+0,u32(0x790cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51eb78:{NFSU2_TR(0x51eb78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51eb7dull));
TAIL_STATIC(0x505450u,505);
}
B51eb7d:L51eb7d:{c.instructions+=4;NFSU2_TR(0x51eb7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51eb80:{NFSU2_TR(0x51eb80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51eb83:{NFSU2_TR(0x51eb83);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eb85:{NFSU2_TR(0x51eb85);
if(r1(R+518)){{goto L51eb90;}}
}
B51eb87:L51eb87:{c.instructions+=3;NFSU2_TR(0x51eb87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51eb8a:{NFSU2_TR(0x51eb8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51eb8c:{NFSU2_TR(0x51eb8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51eb73u);}goto L51eb73;}}
}
B51eb8e:L51eb8e:{c.instructions+=1;NFSU2_TR(0x51eb8e);
{goto L51ebb4;}
}
B51eb90:L51eb90:{c.instructions+=2;NFSU2_TR(0x51eb90);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51eb92:{NFSU2_TR(0x51eb92);
if(r1(R+518)){{goto L51ebb4;}}
}
B51eb94:L51eb94:{c.instructions+=2;NFSU2_TR(0x51eb94);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51eb97:{NFSU2_TR(0x51eb97);
if(r1(R+518)){{goto L51ebad;}}
}
B51eb99:L51eb99:{c.instructions+=3;NFSU2_TR(0x51eb99);
__builtin_memmove((R+4),(R+28),4);
}
B51eb9b:{NFSU2_TR(0x51eb9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51eb9e:{NFSU2_TR(0x51eb9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51eba3ull));
TAIL_STATIC(0x517720u,517);
}
B51eba3:L51eba3:{c.instructions+=2;NFSU2_TR(0x51eba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51eba6:{NFSU2_TR(0x51eba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51ebad:L51ebad:{c.instructions+=1;NFSU2_TR(0x51ebad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51ebb4:L51ebb4:{c.instructions+=1;NFSU2_TR(0x51ebb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ebb5:L51ebb5:{c.instructions+=5;NFSU2_TR(0x51ebb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ebb8:{NFSU2_TR(0x51ebb8);
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
B51ebba:{NFSU2_TR(0x51ebba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ebbb:{NFSU2_TR(0x51ebbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ebbc:{NFSU2_TR(0x51ebbc);
if(r1(R+518)){{goto L51ebce;}}
}
B51ebbe:L51ebbe:{c.instructions+=4;NFSU2_TR(0x51ebbe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ebc0:{NFSU2_TR(0x51ebc0);
u8 U[4];
w4(U+0,u32(0x790cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ebc5:{NFSU2_TR(0x51ebc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ebc6:{NFSU2_TR(0x51ebc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ebcbull));
TAIL_STATIC(0x51cf70u,51c);
}
B51ebcb:L51ebcb:{c.instructions+=1;NFSU2_TR(0x51ebcb);
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
B51ebce:L51ebce:{c.instructions+=1;NFSU2_TR(0x51ebce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ebd0:L51ebd0:{c.instructions+=14;NFSU2_TR(0x51ebd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ebd4:{NFSU2_TR(0x51ebd4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51ebd8:{NFSU2_TR(0x51ebd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ebd9:{NFSU2_TR(0x51ebd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ebda:{NFSU2_TR(0x51ebda);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ebde:{NFSU2_TR(0x51ebde);
__builtin_memmove((R+24),(R+4),4);
}
B51ebe0:{NFSU2_TR(0x51ebe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ebe4:{NFSU2_TR(0x51ebe4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ebe5:{NFSU2_TR(0x51ebe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ebe9:{NFSU2_TR(0x51ebe9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ebea:{NFSU2_TR(0x51ebea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ebeb:{NFSU2_TR(0x51ebeb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ebec:{NFSU2_TR(0x51ebec);
__builtin_memmove((R+4),(R+24),4);
}
B51ebee:{NFSU2_TR(0x51ebee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ebf3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51e1b0u);}goto L51e1b0;}
}
B51ebf3:L51ebf3:{c.instructions+=4;NFSU2_TR(0x51ebf3);
u8 U[4];
w4(U+0,u32(0x79b490ull));
s4(u32(r4(R+24)),r4(U+0));
}
B51ebf9:{NFSU2_TR(0x51ebf9);
__builtin_memmove((R+0),(R+24),4);
}
B51ebfb:{NFSU2_TR(0x51ebfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ebfc:{NFSU2_TR(0x51ebfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ec00:L51ec00:{c.instructions+=2;NFSU2_TR(0x51ec00);
w4(R+0,u32(0x7dfull));
}
B51ec05:{NFSU2_TR(0x51ec05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ec10:L51ec10:{c.instructions+=14;NFSU2_TR(0x51ec10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B51ec13:{NFSU2_TR(0x51ec13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec14:{NFSU2_TR(0x51ec14);
__builtin_memmove((R+24),(R+4),4);
}
B51ec16:{NFSU2_TR(0x51ec16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ec19:{NFSU2_TR(0x51ec19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ec1c:{NFSU2_TR(0x51ec1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51ec20:{NFSU2_TR(0x51ec20);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ec24:{NFSU2_TR(0x51ec24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec25:{NFSU2_TR(0x51ec25);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51ec29:{NFSU2_TR(0x51ec29);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ec2d:{NFSU2_TR(0x51ec2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ec30:{NFSU2_TR(0x51ec30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec31:{NFSU2_TR(0x51ec31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec32:{NFSU2_TR(0x51ec32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ec37ull));
TAIL_STATIC(0x51d170u,51d);
}
B51ec37:L51ec37:{c.instructions+=15;NFSU2_TR(0x51ec37);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51ec3b:{NFSU2_TR(0x51ec3b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B51ec3f:{NFSU2_TR(0x51ec3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ec43:{NFSU2_TR(0x51ec43);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51ec47:{NFSU2_TR(0x51ec47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec48:{NFSU2_TR(0x51ec48);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51ec4c:{NFSU2_TR(0x51ec4c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51ec50:{NFSU2_TR(0x51ec50);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51ec54:{NFSU2_TR(0x51ec54);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51ec58:{NFSU2_TR(0x51ec58);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B51ec5c:{NFSU2_TR(0x51ec5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec5d:{NFSU2_TR(0x51ec5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec5e:{NFSU2_TR(0x51ec5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec5f:{NFSU2_TR(0x51ec5f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51ec63:{NFSU2_TR(0x51ec63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ec68ull));
TAIL_STATIC(0x50cd00u,50c);
}
B51ec68:L51ec68:{c.instructions+=3;NFSU2_TR(0x51ec68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B51ec6b:{NFSU2_TR(0x51ec6b);
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
B51ec6d:{NFSU2_TR(0x51ec6d);
if(r1(R+518)){{goto L51ec80;}}
}
B51ec6f:L51ec6f:{c.instructions+=6;NFSU2_TR(0x51ec6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ec73:{NFSU2_TR(0x51ec73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51ec75:{NFSU2_TR(0x51ec75);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec7a:{NFSU2_TR(0x51ec7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec7b:{NFSU2_TR(0x51ec7b);
__builtin_memmove((R+4),(R+24),4);
}
B51ec7d:{NFSU2_TR(0x51ec7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ec80ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51ec80:L51ec80:{c.instructions+=3;NFSU2_TR(0x51ec80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ec81:{NFSU2_TR(0x51ec81);
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
B51ec84:{NFSU2_TR(0x51ec84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ec90:L51ec90:{c.instructions+=10;NFSU2_TR(0x51ec90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec91:{NFSU2_TR(0x51ec91);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec92:{NFSU2_TR(0x51ec92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec93:{NFSU2_TR(0x51ec93);
__builtin_memmove((R+12),(R+4),4);
}
B51ec95:{NFSU2_TR(0x51ec95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ec96:{NFSU2_TR(0x51ec96);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51ec99:{NFSU2_TR(0x51ec99);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B51ec9b:{NFSU2_TR(0x51ec9b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ec9d:{NFSU2_TR(0x51ec9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51eca1:{NFSU2_TR(0x51eca1);
if(r1(R+518)){{goto L51ece9;}}
}
B51eca3:L51eca3:{c.instructions+=3;NFSU2_TR(0x51eca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51eca6:{NFSU2_TR(0x51eca6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eca8:{NFSU2_TR(0x51eca8);
if(r1(R+518)){{goto L51ece9;}}
}
B51ecaa:L51ecaa:{c.instructions+=1;NFSU2_TR(0x51ecaa);
__builtin_memmove((R+12),(R+12),4);
}
B51ecb0:L51ecb0:{c.instructions+=2;NFSU2_TR(0x51ecb0);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ecb5:{NFSU2_TR(0x51ecb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ecbaull));
TAIL_STATIC(0x505450u,505);
}
B51ecba:L51ecba:{c.instructions+=4;NFSU2_TR(0x51ecba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ecbd:{NFSU2_TR(0x51ecbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51ecc0:{NFSU2_TR(0x51ecc0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ecc2:{NFSU2_TR(0x51ecc2);
if(r1(R+518)){{goto L51eccd;}}
}
B51ecc4:L51ecc4:{c.instructions+=3;NFSU2_TR(0x51ecc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51ecc7:{NFSU2_TR(0x51ecc7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ecc9:{NFSU2_TR(0x51ecc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ecb0u);}goto L51ecb0;}}
}
B51eccb:L51eccb:{c.instructions+=1;NFSU2_TR(0x51eccb);
{goto L51ece9;}
}
B51eccd:L51eccd:{c.instructions+=2;NFSU2_TR(0x51eccd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eccf:{NFSU2_TR(0x51eccf);
if(r1(R+518)){{goto L51ece9;}}
}
B51ecd1:L51ecd1:{c.instructions+=2;NFSU2_TR(0x51ecd1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51ecd4:{NFSU2_TR(0x51ecd4);
if(r1(R+518)){{goto L51ece6;}}
}
B51ecd6:L51ecd6:{c.instructions+=3;NFSU2_TR(0x51ecd6);
__builtin_memmove((R+4),(R+28),4);
}
B51ecd8:{NFSU2_TR(0x51ecd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ecdb:{NFSU2_TR(0x51ecdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ece0ull));
TAIL_STATIC(0x517720u,517);
}
B51ece0:L51ece0:{c.instructions+=2;NFSU2_TR(0x51ece0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ece3:{NFSU2_TR(0x51ece3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ece6:L51ece6:{c.instructions+=1;NFSU2_TR(0x51ece6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ece9:L51ece9:{c.instructions+=3;NFSU2_TR(0x51ece9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51ecec:{NFSU2_TR(0x51ecec);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ecee:{NFSU2_TR(0x51ecee);
if(r1(R+518)){{goto L51ed39;}}
}
B51ecf0:L51ecf0:{c.instructions+=3;NFSU2_TR(0x51ecf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51ecf3:{NFSU2_TR(0x51ecf3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ecf5:{NFSU2_TR(0x51ecf5);
if(r1(R+518)){{goto L51ed39;}}
}
B51ecf7:L51ecf7:{c.instructions+=1;NFSU2_TR(0x51ecf7);
{goto L51ed00;}
}
B51ed00:L51ed00:{c.instructions+=2;NFSU2_TR(0x51ed00);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ed05:{NFSU2_TR(0x51ed05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ed0aull));
TAIL_STATIC(0x505450u,505);
}
B51ed0a:L51ed0a:{c.instructions+=4;NFSU2_TR(0x51ed0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ed0d:{NFSU2_TR(0x51ed0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51ed10:{NFSU2_TR(0x51ed10);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ed12:{NFSU2_TR(0x51ed12);
if(r1(R+518)){{goto L51ed1d;}}
}
B51ed14:L51ed14:{c.instructions+=3;NFSU2_TR(0x51ed14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51ed17:{NFSU2_TR(0x51ed17);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ed19:{NFSU2_TR(0x51ed19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ed00u);}goto L51ed00;}}
}
B51ed1b:L51ed1b:{c.instructions+=1;NFSU2_TR(0x51ed1b);
{goto L51ed39;}
}
B51ed1d:L51ed1d:{c.instructions+=2;NFSU2_TR(0x51ed1d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ed1f:{NFSU2_TR(0x51ed1f);
if(r1(R+518)){{goto L51ed39;}}
}
B51ed21:L51ed21:{c.instructions+=2;NFSU2_TR(0x51ed21);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51ed24:{NFSU2_TR(0x51ed24);
if(r1(R+518)){{goto L51ed36;}}
}
B51ed26:L51ed26:{c.instructions+=3;NFSU2_TR(0x51ed26);
__builtin_memmove((R+4),(R+28),4);
}
B51ed28:{NFSU2_TR(0x51ed28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ed2b:{NFSU2_TR(0x51ed2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ed30ull));
TAIL_STATIC(0x517720u,517);
}
B51ed30:L51ed30:{c.instructions+=2;NFSU2_TR(0x51ed30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ed33:{NFSU2_TR(0x51ed33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ed36:L51ed36:{c.instructions+=1;NFSU2_TR(0x51ed36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ed39:L51ed39:{c.instructions+=7;NFSU2_TR(0x51ed39);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ed3c:{NFSU2_TR(0x51ed3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ed3d:{NFSU2_TR(0x51ed3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ed3e:{NFSU2_TR(0x51ed3e);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B51ed40:{NFSU2_TR(0x51ed40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51ed41:{NFSU2_TR(0x51ed41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ed42:{NFSU2_TR(0x51ed42);
if(r1(R+518)){{goto L51ed54;}}
}
B51ed44:L51ed44:{c.instructions+=4;NFSU2_TR(0x51ed44);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ed46:{NFSU2_TR(0x51ed46);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ed4b:{NFSU2_TR(0x51ed4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ed4c:{NFSU2_TR(0x51ed4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ed51ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51ed51:L51ed51:{c.instructions+=1;NFSU2_TR(0x51ed51);
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
B51ed54:L51ed54:{c.instructions+=1;NFSU2_TR(0x51ed54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ed60:L51ed60:{c.instructions+=9;NFSU2_TR(0x51ed60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ed61:{NFSU2_TR(0x51ed61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ed62:{NFSU2_TR(0x51ed62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ed63:{NFSU2_TR(0x51ed63);
__builtin_memmove((R+20),(R+4),4);
}
B51ed65:{NFSU2_TR(0x51ed65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ed66:{NFSU2_TR(0x51ed66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51ed69:{NFSU2_TR(0x51ed69);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B51ed6b:{NFSU2_TR(0x51ed6b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ed6d:{NFSU2_TR(0x51ed6d);
if(r1(R+518)){{goto L51edaf;}}
}
B51ed6f:L51ed6f:{c.instructions+=3;NFSU2_TR(0x51ed6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51ed72:{NFSU2_TR(0x51ed72);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ed74:{NFSU2_TR(0x51ed74);
if(r1(R+518)){{goto L51edaf;}}
}
B51ed76:L51ed76:{c.instructions+=2;NFSU2_TR(0x51ed76);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ed7b:{NFSU2_TR(0x51ed7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ed80ull));
TAIL_STATIC(0x505450u,505);
}
B51ed80:L51ed80:{c.instructions+=4;NFSU2_TR(0x51ed80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ed83:{NFSU2_TR(0x51ed83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51ed86:{NFSU2_TR(0x51ed86);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ed88:{NFSU2_TR(0x51ed88);
if(r1(R+518)){{goto L51ed93;}}
}
B51ed8a:L51ed8a:{c.instructions+=3;NFSU2_TR(0x51ed8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51ed8d:{NFSU2_TR(0x51ed8d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ed8f:{NFSU2_TR(0x51ed8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ed76u);}goto L51ed76;}}
}
B51ed91:L51ed91:{c.instructions+=1;NFSU2_TR(0x51ed91);
{goto L51edaf;}
}
B51ed93:L51ed93:{c.instructions+=2;NFSU2_TR(0x51ed93);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ed95:{NFSU2_TR(0x51ed95);
if(r1(R+518)){{goto L51edaf;}}
}
B51ed97:L51ed97:{c.instructions+=2;NFSU2_TR(0x51ed97);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51ed9a:{NFSU2_TR(0x51ed9a);
if(r1(R+518)){{goto L51edac;}}
}
B51ed9c:L51ed9c:{c.instructions+=3;NFSU2_TR(0x51ed9c);
__builtin_memmove((R+4),(R+28),4);
}
B51ed9e:{NFSU2_TR(0x51ed9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51eda1:{NFSU2_TR(0x51eda1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51eda6ull));
TAIL_STATIC(0x517720u,517);
}
B51eda6:L51eda6:{c.instructions+=2;NFSU2_TR(0x51eda6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51eda9:{NFSU2_TR(0x51eda9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51edac:L51edac:{c.instructions+=1;NFSU2_TR(0x51edac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51edaf:L51edaf:{c.instructions+=3;NFSU2_TR(0x51edaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51edb2:{NFSU2_TR(0x51edb2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51edb4:{NFSU2_TR(0x51edb4);
if(r1(R+518)){{goto L51edf9;}}
}
B51edb6:L51edb6:{c.instructions+=3;NFSU2_TR(0x51edb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51edb9:{NFSU2_TR(0x51edb9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51edbb:{NFSU2_TR(0x51edbb);
if(r1(R+518)){{goto L51edf9;}}
}
B51edbd:L51edbd:{c.instructions+=1;NFSU2_TR(0x51edbd);
__builtin_memmove((R+4),(R+4),4);
}
B51edc0:L51edc0:{c.instructions+=2;NFSU2_TR(0x51edc0);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51edc5:{NFSU2_TR(0x51edc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51edcaull));
TAIL_STATIC(0x505450u,505);
}
B51edca:L51edca:{c.instructions+=4;NFSU2_TR(0x51edca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51edcd:{NFSU2_TR(0x51edcd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51edd0:{NFSU2_TR(0x51edd0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51edd2:{NFSU2_TR(0x51edd2);
if(r1(R+518)){{goto L51eddd;}}
}
B51edd4:L51edd4:{c.instructions+=3;NFSU2_TR(0x51edd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51edd7:{NFSU2_TR(0x51edd7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51edd9:{NFSU2_TR(0x51edd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51edc0u);}goto L51edc0;}}
}
B51eddb:L51eddb:{c.instructions+=1;NFSU2_TR(0x51eddb);
{goto L51edf9;}
}
B51eddd:L51eddd:{c.instructions+=2;NFSU2_TR(0x51eddd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eddf:{NFSU2_TR(0x51eddf);
if(r1(R+518)){{goto L51edf9;}}
}
B51ede1:L51ede1:{c.instructions+=2;NFSU2_TR(0x51ede1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51ede4:{NFSU2_TR(0x51ede4);
if(r1(R+518)){{goto L51edf6;}}
}
B51ede6:L51ede6:{c.instructions+=3;NFSU2_TR(0x51ede6);
__builtin_memmove((R+4),(R+28),4);
}
B51ede8:{NFSU2_TR(0x51ede8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51edeb:{NFSU2_TR(0x51edeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51edf0ull));
TAIL_STATIC(0x517720u,517);
}
B51edf0:L51edf0:{c.instructions+=2;NFSU2_TR(0x51edf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51edf3:{NFSU2_TR(0x51edf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51edf6:L51edf6:{c.instructions+=1;NFSU2_TR(0x51edf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51edf9:L51edf9:{c.instructions+=7;NFSU2_TR(0x51edf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51edfc:{NFSU2_TR(0x51edfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51edfd:{NFSU2_TR(0x51edfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51edfe:{NFSU2_TR(0x51edfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51edff:{NFSU2_TR(0x51edff);
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
B51ee01:{NFSU2_TR(0x51ee01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ee02:{NFSU2_TR(0x51ee02);
if(r1(R+518)){{goto L51ee14;}}
}
B51ee04:L51ee04:{c.instructions+=4;NFSU2_TR(0x51ee04);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee06:{NFSU2_TR(0x51ee06);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee0b:{NFSU2_TR(0x51ee0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee0c:{NFSU2_TR(0x51ee0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ee11ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51ee11:L51ee11:{c.instructions+=1;NFSU2_TR(0x51ee11);
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
B51ee14:L51ee14:{c.instructions+=1;NFSU2_TR(0x51ee14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ee20:L51ee20:{c.instructions+=7;NFSU2_TR(0x51ee20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ee23:{NFSU2_TR(0x51ee23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee24:{NFSU2_TR(0x51ee24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee25:{NFSU2_TR(0x51ee25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee26:{NFSU2_TR(0x51ee26);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ee29:{NFSU2_TR(0x51ee29);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ee2b:{NFSU2_TR(0x51ee2b);
if(r1(R+518)){{goto L51ee78;}}
}
B51ee2d:L51ee2d:{c.instructions+=2;NFSU2_TR(0x51ee2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ee2f:{NFSU2_TR(0x51ee2f);
if(r1(R+518)){{goto L51ee36;}}
}
B51ee31:L51ee31:{c.instructions+=2;NFSU2_TR(0x51ee31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ee34:{NFSU2_TR(0x51ee34);
{goto L51ee38;}
}
B51ee36:L51ee36:{c.instructions+=1;NFSU2_TR(0x51ee36);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51ee38:L51ee38:{c.instructions+=2;NFSU2_TR(0x51ee38);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51ee3c:{NFSU2_TR(0x51ee3c);
__builtin_memmove((R+16),(R+16),4);
}
B51ee40:L51ee40:{c.instructions+=2;NFSU2_TR(0x51ee40);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ee42:{NFSU2_TR(0x51ee42);
if(r1(R+518)){{goto L51ee49;}}
}
B51ee44:L51ee44:{c.instructions+=2;NFSU2_TR(0x51ee44);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51ee47:{NFSU2_TR(0x51ee47);
{goto L51ee4b;}
}
B51ee49:L51ee49:{c.instructions+=1;NFSU2_TR(0x51ee49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51ee4b:L51ee4b:{c.instructions+=2;NFSU2_TR(0x51ee4b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ee4d:{NFSU2_TR(0x51ee4d);
if(r1(R+518)){{goto L51ee78;}}
}
B51ee4f:L51ee4f:{c.instructions+=4;NFSU2_TR(0x51ee4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51ee52:{NFSU2_TR(0x51ee52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee53:{NFSU2_TR(0x51ee53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee54:{NFSU2_TR(0x51ee54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ee59ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B51ee59:L51ee59:{c.instructions+=3;NFSU2_TR(0x51ee59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51ee5c:{NFSU2_TR(0x51ee5c);
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
B51ee5e:{NFSU2_TR(0x51ee5e);
if(r1(R+518)){{goto L51ee70;}}
}
B51ee60:L51ee60:{c.instructions+=3;NFSU2_TR(0x51ee60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51ee63:{NFSU2_TR(0x51ee63);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ee65:{NFSU2_TR(0x51ee65);
if(r1(R+518)){{goto L51ee6c;}}
}
B51ee67:L51ee67:{c.instructions+=2;NFSU2_TR(0x51ee67);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B51ee6a:{NFSU2_TR(0x51ee6a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ee40u);}goto L51ee40;}
}
B51ee6c:L51ee6c:{c.instructions+=2;NFSU2_TR(0x51ee6c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51ee6e:{NFSU2_TR(0x51ee6e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ee40u);}goto L51ee40;}
}
B51ee70:L51ee70:{c.instructions+=5;NFSU2_TR(0x51ee70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ee71:{NFSU2_TR(0x51ee71);
__builtin_memmove((R+0),(R+24),4);
}
B51ee73:{NFSU2_TR(0x51ee73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ee74:{NFSU2_TR(0x51ee74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ee75:{NFSU2_TR(0x51ee75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ee78:L51ee78:{c.instructions+=5;NFSU2_TR(0x51ee78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ee79:{NFSU2_TR(0x51ee79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ee7a:{NFSU2_TR(0x51ee7a);
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
B51ee7c:{NFSU2_TR(0x51ee7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ee7d:{NFSU2_TR(0x51ee7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ee80:L51ee80:{c.instructions+=9;NFSU2_TR(0x51ee80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee81:{NFSU2_TR(0x51ee81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee82:{NFSU2_TR(0x51ee82);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee83:{NFSU2_TR(0x51ee83);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51ee86:{NFSU2_TR(0x51ee86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51ee88:{NFSU2_TR(0x51ee88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee89:{NFSU2_TR(0x51ee89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ee8a:{NFSU2_TR(0x51ee8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ee8e:{NFSU2_TR(0x51ee8e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B51ee90:L51ee90:{c.instructions+=2;NFSU2_TR(0x51ee90);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ee92:{NFSU2_TR(0x51ee92);
if(r1(R+518)){{goto L51ee99;}}
}
B51ee94:L51ee94:{c.instructions+=2;NFSU2_TR(0x51ee94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ee97:{NFSU2_TR(0x51ee97);
{goto L51eea0;}
}
B51ee99:L51ee99:{c.instructions+=2;NFSU2_TR(0x51ee99);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B51ee9b:{NFSU2_TR(0x51ee9b);
{goto L51eea0;}
}
B51eea0:L51eea0:{c.instructions+=4;NFSU2_TR(0x51eea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51eea4:{NFSU2_TR(0x51eea4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51eea7:{NFSU2_TR(0x51eea7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eea9:{NFSU2_TR(0x51eea9);
if(r1(R+518)){{goto L51eeb0;}}
}
B51eeab:L51eeab:{c.instructions+=2;NFSU2_TR(0x51eeab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51eeae:{NFSU2_TR(0x51eeae);
{goto L51eeb2;}
}
B51eeb0:L51eeb0:{c.instructions+=1;NFSU2_TR(0x51eeb0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51eeb2:L51eeb2:{c.instructions+=2;NFSU2_TR(0x51eeb2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eeb4:{NFSU2_TR(0x51eeb4);
if(r1(R+518)){{goto L51ef14;}}
}
B51eeb6:L51eeb6:{c.instructions+=2;NFSU2_TR(0x51eeb6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eeb8:{NFSU2_TR(0x51eeb8);
if(r1(R+518)){{goto L51ef0c;}}
}
B51eeba:L51eeba:{c.instructions+=3;NFSU2_TR(0x51eeba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51eebd:{NFSU2_TR(0x51eebd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eebf:{NFSU2_TR(0x51eebf);
if(r1(R+518)){{goto L51ef0c;}}
}
B51eec1:L51eec1:{c.instructions+=3;NFSU2_TR(0x51eec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51eec4:{NFSU2_TR(0x51eec4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eec6:{NFSU2_TR(0x51eec6);
if(r1(R+518)){{goto L51ef0c;}}
}
B51eec8:L51eec8:{c.instructions+=1;NFSU2_TR(0x51eec8);
{goto L51eed0;}
}
B51eed0:L51eed0:{c.instructions+=3;NFSU2_TR(0x51eed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51eed4:{NFSU2_TR(0x51eed4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51eed5:{NFSU2_TR(0x51eed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51eedaull));
TAIL_STATIC(0x505450u,505);
}
B51eeda:L51eeda:{c.instructions+=4;NFSU2_TR(0x51eeda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51eedd:{NFSU2_TR(0x51eedd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51eee0:{NFSU2_TR(0x51eee0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eee2:{NFSU2_TR(0x51eee2);
if(r1(R+518)){{goto L51eef0;}}
}
B51eee4:L51eee4:{c.instructions+=3;NFSU2_TR(0x51eee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51eee7:{NFSU2_TR(0x51eee7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eee9:{NFSU2_TR(0x51eee9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51eed0u);}goto L51eed0;}}
}
B51eeeb:L51eeeb:{c.instructions+=2;NFSU2_TR(0x51eeeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51eeee:{NFSU2_TR(0x51eeee);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ee90u);}goto L51ee90;}
}
B51eef0:L51eef0:{c.instructions+=2;NFSU2_TR(0x51eef0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51eef2:{NFSU2_TR(0x51eef2);
if(r1(R+518)){{goto L51ef0c;}}
}
B51eef4:L51eef4:{c.instructions+=2;NFSU2_TR(0x51eef4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51eef7:{NFSU2_TR(0x51eef7);
if(r1(R+518)){{goto L51ef09;}}
}
B51eef9:L51eef9:{c.instructions+=3;NFSU2_TR(0x51eef9);
__builtin_memmove((R+4),(R+28),4);
}
B51eefb:{NFSU2_TR(0x51eefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51eefe:{NFSU2_TR(0x51eefe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ef03ull));
TAIL_STATIC(0x517720u,517);
}
B51ef03:L51ef03:{c.instructions+=2;NFSU2_TR(0x51ef03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ef06:{NFSU2_TR(0x51ef06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ef09:L51ef09:{c.instructions+=1;NFSU2_TR(0x51ef09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ef0c:L51ef0c:{c.instructions+=2;NFSU2_TR(0x51ef0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ef0f:{NFSU2_TR(0x51ef0f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ee90u);}goto L51ee90;}
}
B51ef14:L51ef14:{c.instructions+=3;NFSU2_TR(0x51ef14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51ef17:{NFSU2_TR(0x51ef17);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B51ef19:{NFSU2_TR(0x51ef19);
if(r1(R+518)){{goto L51efbf;}}
}
B51ef1f:L51ef1f:{c.instructions+=4;NFSU2_TR(0x51ef1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51ef23:{NFSU2_TR(0x51ef23);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ef25:{NFSU2_TR(0x51ef25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51ef28:{NFSU2_TR(0x51ef28);
if(r1(R+518)){{goto L51ef75;}}
}
B51ef2a:L51ef2a:{c.instructions+=2;NFSU2_TR(0x51ef2a);
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
B51ef2c:{NFSU2_TR(0x51ef2c);
if(r1(R+518)){{goto L51efbf;}}
}
B51ef32:L51ef32:{c.instructions+=2;NFSU2_TR(0x51ef32);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ef33:{NFSU2_TR(0x51ef33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ef38ull));
TAIL_STATIC(0x505450u,505);
}
B51ef38:L51ef38:{c.instructions+=4;NFSU2_TR(0x51ef38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ef3b:{NFSU2_TR(0x51ef3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51ef3e:{NFSU2_TR(0x51ef3e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ef40:{NFSU2_TR(0x51ef40);
if(r1(R+518)){{goto L51ef51;}}
}
B51ef42:L51ef42:{c.instructions+=3;NFSU2_TR(0x51ef42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51ef45:{NFSU2_TR(0x51ef45);
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
B51ef47:{NFSU2_TR(0x51ef47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ef32u);}goto L51ef32;}}
}
B51ef49:L51ef49:{c.instructions+=6;NFSU2_TR(0x51ef49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ef4a:{NFSU2_TR(0x51ef4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ef4b:{NFSU2_TR(0x51ef4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51ef4c:{NFSU2_TR(0x51ef4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ef4d:{NFSU2_TR(0x51ef4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51ef4e:{NFSU2_TR(0x51ef4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ef51:L51ef51:{c.instructions+=2;NFSU2_TR(0x51ef51);
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
B51ef53:{NFSU2_TR(0x51ef53);
if(r1(R+518)){{goto L51efbf;}}
}
B51ef55:L51ef55:{c.instructions+=2;NFSU2_TR(0x51ef55);
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
B51ef58:{NFSU2_TR(0x51ef58);
if(r1(R+518)){{goto L51efbc;}}
}
B51ef5a:L51ef5a:{c.instructions+=3;NFSU2_TR(0x51ef5a);
__builtin_memmove((R+4),(R+28),4);
}
B51ef5c:{NFSU2_TR(0x51ef5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ef5f:{NFSU2_TR(0x51ef5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ef64ull));
TAIL_STATIC(0x517720u,517);
}
B51ef64:L51ef64:{c.instructions+=9;NFSU2_TR(0x51ef64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51ef67:{NFSU2_TR(0x51ef67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ef68:{NFSU2_TR(0x51ef68);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ef6b:{NFSU2_TR(0x51ef6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ef6e:{NFSU2_TR(0x51ef6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ef6f:{NFSU2_TR(0x51ef6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51ef70:{NFSU2_TR(0x51ef70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ef71:{NFSU2_TR(0x51ef71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51ef72:{NFSU2_TR(0x51ef72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ef75:L51ef75:{c.instructions+=2;NFSU2_TR(0x51ef75);
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
B51ef77:{NFSU2_TR(0x51ef77);
if(r1(R+518)){{goto L51efbf;}}
}
B51ef79:L51ef79:{c.instructions+=1;NFSU2_TR(0x51ef79);
__builtin_memmove((R+16),(R+16),4);
}
B51ef80:L51ef80:{c.instructions+=3;NFSU2_TR(0x51ef80);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ef84:{NFSU2_TR(0x51ef84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ef85:{NFSU2_TR(0x51ef85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ef8aull));
TAIL_STATIC(0x505450u,505);
}
B51ef8a:L51ef8a:{c.instructions+=4;NFSU2_TR(0x51ef8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ef8d:{NFSU2_TR(0x51ef8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51ef90:{NFSU2_TR(0x51ef90);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ef92:{NFSU2_TR(0x51ef92);
if(r1(R+518)){{goto L51efa3;}}
}
B51ef94:L51ef94:{c.instructions+=3;NFSU2_TR(0x51ef94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51ef97:{NFSU2_TR(0x51ef97);
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
B51ef99:{NFSU2_TR(0x51ef99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ef80u);}goto L51ef80;}}
}
B51ef9b:L51ef9b:{c.instructions+=6;NFSU2_TR(0x51ef9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ef9c:{NFSU2_TR(0x51ef9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ef9d:{NFSU2_TR(0x51ef9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51ef9e:{NFSU2_TR(0x51ef9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ef9f:{NFSU2_TR(0x51ef9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51efa0:{NFSU2_TR(0x51efa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51efa3:L51efa3:{c.instructions+=2;NFSU2_TR(0x51efa3);
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
B51efa5:{NFSU2_TR(0x51efa5);
if(r1(R+518)){{goto L51efbf;}}
}
B51efa7:L51efa7:{c.instructions+=2;NFSU2_TR(0x51efa7);
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
B51efaa:{NFSU2_TR(0x51efaa);
if(r1(R+518)){{goto L51efbc;}}
}
B51efac:L51efac:{c.instructions+=3;NFSU2_TR(0x51efac);
__builtin_memmove((R+4),(R+28),4);
}
B51efae:{NFSU2_TR(0x51efae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51efb1:{NFSU2_TR(0x51efb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51efb6ull));
TAIL_STATIC(0x517720u,517);
}
B51efb6:L51efb6:{c.instructions+=2;NFSU2_TR(0x51efb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51efb9:{NFSU2_TR(0x51efb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51efbc:L51efbc:{c.instructions+=1;NFSU2_TR(0x51efbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51efbf:L51efbf:{c.instructions+=6;NFSU2_TR(0x51efbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51efc0:{NFSU2_TR(0x51efc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51efc1:{NFSU2_TR(0x51efc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51efc2:{NFSU2_TR(0x51efc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51efc3:{NFSU2_TR(0x51efc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51efc4:{NFSU2_TR(0x51efc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51efd0:L51efd0:{c.instructions+=13;NFSU2_TR(0x51efd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B51efd3:{NFSU2_TR(0x51efd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51efd4:{NFSU2_TR(0x51efd4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51efd5:{NFSU2_TR(0x51efd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51efd6:{NFSU2_TR(0x51efd6);
__builtin_memmove((R+20),(R+4),4);
}
B51efd8:{NFSU2_TR(0x51efd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51efdb:{NFSU2_TR(0x51efdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51efdc:{NFSU2_TR(0x51efdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B51efdf:{NFSU2_TR(0x51efdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51efe7:{NFSU2_TR(0x51efe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51efef:{NFSU2_TR(0x51efef);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51eff7:{NFSU2_TR(0x51eff7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51efff:{NFSU2_TR(0x51efff);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
TAIL_STATIC(0x51f001u,51f);
}
XIT:NFSU2_TR_EXIT(0x51e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
