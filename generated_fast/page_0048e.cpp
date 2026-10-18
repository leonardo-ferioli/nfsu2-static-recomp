#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_489(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x48e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x48e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_48e(u8* __restrict R,Cpu& c);
u32 page_48e(Cpu& c){return body_48e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_48e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x48e001:goto L48e001;
case 0x48e002:c.instructions+=3;goto B48e002;
case 0x48e003:c.instructions+=2;goto B48e003;
case 0x48e004:c.instructions+=1;goto B48e004;
case 0x48e009:goto L48e009;
case 0x48e00c:c.instructions+=2;goto B48e00c;
case 0x48e00e:c.instructions+=1;goto B48e00e;
case 0x48e010:goto L48e010;
case 0x48e013:c.instructions+=2;goto B48e013;
case 0x48e015:c.instructions+=1;goto B48e015;
case 0x48e017:goto L48e017;
case 0x48e019:c.instructions+=2;goto B48e019;
case 0x48e01b:c.instructions+=1;goto B48e01b;
case 0x48e01d:goto L48e01d;
case 0x48e01f:goto L48e01f;
case 0x48e022:c.instructions+=9;goto B48e022;
case 0x48e024:c.instructions+=8;goto B48e024;
case 0x48e027:c.instructions+=7;goto B48e027;
case 0x48e029:c.instructions+=6;goto B48e029;
case 0x48e02c:c.instructions+=5;goto B48e02c;
case 0x48e031:c.instructions+=4;goto B48e031;
case 0x48e037:c.instructions+=3;goto B48e037;
case 0x48e03a:c.instructions+=2;goto B48e03a;
case 0x48e041:c.instructions+=1;goto B48e041;
case 0x48e043:goto L48e043;
case 0x48e044:c.instructions+=2;goto B48e044;
case 0x48e045:c.instructions+=1;goto B48e045;
case 0x48e04a:goto L48e04a;
case 0x48e04e:c.instructions+=3;goto B48e04e;
case 0x48e04f:c.instructions+=2;goto B48e04f;
case 0x48e050:c.instructions+=1;goto B48e050;
case 0x48e055:goto L48e055;
case 0x48e05b:c.instructions+=6;goto B48e05b;
case 0x48e05e:c.instructions+=5;goto B48e05e;
case 0x48e060:c.instructions+=4;goto B48e060;
case 0x48e061:c.instructions+=3;goto B48e061;
case 0x48e067:c.instructions+=2;goto B48e067;
case 0x48e068:c.instructions+=1;goto B48e068;
case 0x48e070:goto L48e070;
case 0x48e074:c.instructions+=4;goto B48e074;
case 0x48e076:c.instructions+=3;goto B48e076;
case 0x48e07c:c.instructions+=2;goto B48e07c;
case 0x48e07d:c.instructions+=1;goto B48e07d;
case 0x48e07f:goto L48e07f;
case 0x48e085:c.instructions+=9;goto B48e085;
case 0x48e088:c.instructions+=8;goto B48e088;
case 0x48e08e:c.instructions+=7;goto B48e08e;
case 0x48e091:c.instructions+=6;goto B48e091;
case 0x48e094:c.instructions+=5;goto B48e094;
case 0x48e09a:c.instructions+=4;goto B48e09a;
case 0x48e0a0:c.instructions+=3;goto B48e0a0;
case 0x48e0a6:c.instructions+=2;goto B48e0a6;
case 0x48e0ac:c.instructions+=1;goto B48e0ac;
case 0x48e0ae:goto L48e0ae;
case 0x48e0b0:c.instructions+=1;goto B48e0b0;
case 0x48e0b5:goto L48e0b5;
case 0x48e0b7:c.instructions+=1;goto B48e0b7;
case 0x48e0bc:goto L48e0bc;
case 0x48e0c2:c.instructions+=7;goto B48e0c2;
case 0x48e0c5:c.instructions+=6;goto B48e0c5;
case 0x48e0c7:c.instructions+=5;goto B48e0c7;
case 0x48e0cc:c.instructions+=4;goto B48e0cc;
case 0x48e0cf:c.instructions+=3;goto B48e0cf;
case 0x48e0d5:c.instructions+=2;goto B48e0d5;
case 0x48e0dc:c.instructions+=1;goto B48e0dc;
case 0x48e0de:goto L48e0de;
case 0x48e0e4:goto L48e0e4;
case 0x48e0e9:c.instructions+=2;goto B48e0e9;
case 0x48e0ea:c.instructions+=1;goto B48e0ea;
case 0x48e0eb:goto L48e0eb;
case 0x48e0f1:c.instructions+=4;goto B48e0f1;
case 0x48e0f2:c.instructions+=3;goto B48e0f2;
case 0x48e0f3:c.instructions+=2;goto B48e0f3;
case 0x48e0f4:c.instructions+=1;goto B48e0f4;
case 0x48e0fa:goto L48e0fa;
case 0x48e0fd:c.instructions+=5;goto B48e0fd;
case 0x48e100:c.instructions+=4;goto B48e100;
case 0x48e104:c.instructions+=3;goto B48e104;
case 0x48e106:c.instructions+=2;goto B48e106;
case 0x48e108:c.instructions+=1;goto B48e108;
case 0x48e10e:goto L48e10e;
case 0x48e110:goto L48e110;
case 0x48e113:c.instructions+=2;goto B48e113;
case 0x48e118:c.instructions+=1;goto B48e118;
case 0x48e11a:goto L48e11a;
case 0x48e11b:c.instructions+=1;goto B48e11b;
case 0x48e11d:goto L48e11d;
case 0x48e11f:c.instructions+=1;goto B48e11f;
case 0x48e121:goto L48e121;
case 0x48e125:c.instructions+=4;goto B48e125;
case 0x48e128:c.instructions+=3;goto B48e128;
case 0x48e12b:c.instructions+=2;goto B48e12b;
case 0x48e12d:c.instructions+=1;goto B48e12d;
case 0x48e12f:goto L48e12f;
case 0x48e132:c.instructions+=1;goto B48e132;
case 0x48e134:goto L48e134;
case 0x48e137:c.instructions+=7;goto B48e137;
case 0x48e139:c.instructions+=6;goto B48e139;
case 0x48e13c:c.instructions+=5;goto B48e13c;
case 0x48e13f:c.instructions+=4;goto B48e13f;
case 0x48e141:c.instructions+=3;goto B48e141;
case 0x48e144:c.instructions+=2;goto B48e144;
case 0x48e145:c.instructions+=1;goto B48e145;
case 0x48e147:goto L48e147;
case 0x48e149:goto L48e149;
case 0x48e14c:c.instructions+=4;goto B48e14c;
case 0x48e14f:c.instructions+=3;goto B48e14f;
case 0x48e152:c.instructions+=2;goto B48e152;
case 0x48e154:c.instructions+=1;goto B48e154;
case 0x48e156:goto L48e156;
case 0x48e15a:goto L48e15a;
case 0x48e15e:c.instructions+=1;goto B48e15e;
case 0x48e160:goto L48e160;
case 0x48e162:c.instructions+=1;goto B48e162;
case 0x48e164:goto L48e164;
case 0x48e167:c.instructions+=2;goto B48e167;
case 0x48e169:c.instructions+=1;goto B48e169;
case 0x48e16c:goto L48e16c;
case 0x48e16f:c.instructions+=3;goto B48e16f;
case 0x48e173:c.instructions+=2;goto B48e173;
case 0x48e175:c.instructions+=1;goto B48e175;
case 0x48e177:goto L48e177;
case 0x48e179:c.instructions+=1;goto B48e179;
case 0x48e17b:goto L48e17b;
case 0x48e180:c.instructions+=8;goto B48e180;
case 0x48e182:c.instructions+=7;goto B48e182;
case 0x48e188:c.instructions+=6;goto B48e188;
case 0x48e18b:c.instructions+=5;goto B48e18b;
case 0x48e18e:c.instructions+=4;goto B48e18e;
case 0x48e18f:c.instructions+=3;goto B48e18f;
case 0x48e194:c.instructions+=2;goto B48e194;
case 0x48e19a:c.instructions+=1;goto B48e19a;
case 0x48e19f:goto L48e19f;
case 0x48e1a2:goto L48e1a2;
case 0x48e1a3:c.instructions+=5;goto B48e1a3;
case 0x48e1a4:c.instructions+=4;goto B48e1a4;
case 0x48e1a5:c.instructions+=3;goto B48e1a5;
case 0x48e1aa:c.instructions+=2;goto B48e1aa;
case 0x48e1ab:c.instructions+=1;goto B48e1ab;
case 0x48e1ac:goto L48e1ac;
case 0x48e1b2:c.instructions+=1;goto B48e1b2;
case 0x48e1b8:goto L48e1b8;
case 0x48e1bb:c.instructions+=6;goto B48e1bb;
case 0x48e1be:c.instructions+=5;goto B48e1be;
case 0x48e1c2:c.instructions+=4;goto B48e1c2;
case 0x48e1c4:c.instructions+=3;goto B48e1c4;
case 0x48e1c6:c.instructions+=2;goto B48e1c6;
case 0x48e1c8:c.instructions+=1;goto B48e1c8;
case 0x48e1ce:goto L48e1ce;
case 0x48e1d0:goto L48e1d0;
case 0x48e1d2:c.instructions+=2;goto B48e1d2;
case 0x48e1d7:c.instructions+=1;goto B48e1d7;
case 0x48e1d9:goto L48e1d9;
case 0x48e1da:c.instructions+=1;goto B48e1da;
case 0x48e1dc:goto L48e1dc;
case 0x48e1dd:c.instructions+=1;goto B48e1dd;
case 0x48e1df:goto L48e1df;
case 0x48e1e2:c.instructions+=3;goto B48e1e2;
case 0x48e1e5:c.instructions+=2;goto B48e1e5;
case 0x48e1e8:c.instructions+=1;goto B48e1e8;
case 0x48e1ea:goto L48e1ea;
case 0x48e1ed:c.instructions+=6;goto B48e1ed;
case 0x48e1f0:c.instructions+=5;goto B48e1f0;
case 0x48e1f2:c.instructions+=4;goto B48e1f2;
case 0x48e1f5:c.instructions+=3;goto B48e1f5;
case 0x48e1f8:c.instructions+=2;goto B48e1f8;
case 0x48e1fa:c.instructions+=1;goto B48e1fa;
case 0x48e1fc:goto L48e1fc;
case 0x48e201:goto L48e201;
case 0x48e203:goto L48e203;
case 0x48e206:c.instructions+=6;goto B48e206;
case 0x48e209:c.instructions+=5;goto B48e209;
case 0x48e20c:c.instructions+=4;goto B48e20c;
case 0x48e20e:c.instructions+=3;goto B48e20e;
case 0x48e211:c.instructions+=2;goto B48e211;
case 0x48e213:c.instructions+=1;goto B48e213;
case 0x48e215:goto L48e215;
case 0x48e219:goto L48e219;
case 0x48e21e:c.instructions+=1;goto B48e21e;
case 0x48e220:goto L48e220;
case 0x48e223:c.instructions+=3;goto B48e223;
case 0x48e227:c.instructions+=2;goto B48e227;
case 0x48e229:c.instructions+=1;goto B48e229;
case 0x48e22b:goto L48e22b;
case 0x48e22d:c.instructions+=1;goto B48e22d;
case 0x48e22f:goto L48e22f;
case 0x48e234:c.instructions+=8;goto B48e234;
case 0x48e236:c.instructions+=7;goto B48e236;
case 0x48e23c:c.instructions+=6;goto B48e23c;
case 0x48e23f:c.instructions+=5;goto B48e23f;
case 0x48e240:c.instructions+=4;goto B48e240;
case 0x48e245:c.instructions+=3;goto B48e245;
case 0x48e248:c.instructions+=2;goto B48e248;
case 0x48e24e:c.instructions+=1;goto B48e24e;
case 0x48e253:goto L48e253;
case 0x48e256:goto L48e256;
case 0x48e257:c.instructions+=5;goto B48e257;
case 0x48e258:c.instructions+=4;goto B48e258;
case 0x48e259:c.instructions+=3;goto B48e259;
case 0x48e25e:c.instructions+=2;goto B48e25e;
case 0x48e25f:c.instructions+=1;goto B48e25f;
case 0x48e260:goto L48e260;
case 0x48e261:c.instructions+=5;goto B48e261;
case 0x48e262:c.instructions+=4;goto B48e262;
case 0x48e263:c.instructions+=3;goto B48e263;
case 0x48e265:c.instructions+=2;goto B48e265;
case 0x48e266:c.instructions+=1;goto B48e266;
case 0x48e270:goto L48e270;
case 0x48e274:c.instructions+=3;goto B48e274;
case 0x48e276:c.instructions+=2;goto B48e276;
case 0x48e27c:c.instructions+=1;goto B48e27c;
case 0x48e27e:goto L48e27e;
case 0x48e282:c.instructions+=1;goto B48e282;
case 0x48e288:goto L48e288;
case 0x48e28b:c.instructions+=5;goto B48e28b;
case 0x48e28e:c.instructions+=4;goto B48e28e;
case 0x48e290:c.instructions+=3;goto B48e290;
case 0x48e293:c.instructions+=2;goto B48e293;
case 0x48e29a:c.instructions+=1;goto B48e29a;
case 0x48e2a0:goto L48e2a0;
case 0x48e2aa:c.instructions+=2;goto B48e2aa;
case 0x48e2af:c.instructions+=1;goto B48e2af;
case 0x48e2b0:goto L48e2b0;
case 0x48e2b6:c.instructions+=1;goto B48e2b6;
case 0x48e2b8:goto L48e2b8;
case 0x48e2bb:c.instructions+=4;goto B48e2bb;
case 0x48e2be:c.instructions+=3;goto B48e2be;
case 0x48e2c2:c.instructions+=2;goto B48e2c2;
case 0x48e2c4:c.instructions+=1;goto B48e2c4;
case 0x48e2ca:goto L48e2ca;
case 0x48e2d0:goto L48e2d0;
case 0x48e2d6:c.instructions+=1;goto B48e2d6;
case 0x48e2d8:goto L48e2d8;
case 0x48e2db:c.instructions+=3;goto B48e2db;
case 0x48e2df:c.instructions+=2;goto B48e2df;
case 0x48e2e1:c.instructions+=1;goto B48e2e1;
case 0x48e2e3:goto L48e2e3;
case 0x48e2e8:c.instructions+=1;goto B48e2e8;
case 0x48e2e9:goto L48e2e9;
case 0x48e2ec:c.instructions+=3;goto B48e2ec;
case 0x48e2ef:c.instructions+=2;goto B48e2ef;
case 0x48e2f3:c.instructions+=1;goto B48e2f3;
case 0x48e2f5:goto L48e2f5;
case 0x48e2f7:c.instructions+=8;goto B48e2f7;
case 0x48e2fa:c.instructions+=7;goto B48e2fa;
case 0x48e2fc:c.instructions+=6;goto B48e2fc;
case 0x48e2ff:c.instructions+=5;goto B48e2ff;
case 0x48e302:c.instructions+=4;goto B48e302;
case 0x48e309:c.instructions+=3;goto B48e309;
case 0x48e310:c.instructions+=2;goto B48e310;
case 0x48e313:c.instructions+=1;goto B48e313;
case 0x48e315:goto L48e315;
case 0x48e31b:c.instructions+=1;goto B48e31b;
case 0x48e31d:goto L48e31d;
case 0x48e320:c.instructions+=4;goto B48e320;
case 0x48e323:c.instructions+=3;goto B48e323;
case 0x48e327:c.instructions+=2;goto B48e327;
case 0x48e329:c.instructions+=1;goto B48e329;
case 0x48e32b:goto L48e32b;
case 0x48e32d:c.instructions+=1;goto B48e32d;
case 0x48e330:goto L48e330;
case 0x48e335:c.instructions+=1;goto B48e335;
case 0x48e337:goto L48e337;
case 0x48e33a:c.instructions+=3;goto B48e33a;
case 0x48e33d:c.instructions+=2;goto B48e33d;
case 0x48e342:c.instructions+=1;goto B48e342;
case 0x48e344:goto L48e344;
case 0x48e346:c.instructions+=7;goto B48e346;
case 0x48e349:c.instructions+=6;goto B48e349;
case 0x48e34b:c.instructions+=5;goto B48e34b;
case 0x48e34e:c.instructions+=4;goto B48e34e;
case 0x48e351:c.instructions+=3;goto B48e351;
case 0x48e358:c.instructions+=2;goto B48e358;
case 0x48e35f:c.instructions+=1;goto B48e35f;
case 0x48e362:goto L48e362;
case 0x48e363:c.instructions+=2;goto B48e363;
case 0x48e368:c.instructions+=1;goto B48e368;
case 0x48e36d:goto L48e36d;
case 0x48e372:c.instructions+=1;goto B48e372;
case 0x48e373:goto L48e373;
case 0x48e375:c.instructions+=1;goto B48e375;
case 0x48e380:goto L48e380;
case 0x48e384:c.instructions+=2;goto B48e384;
case 0x48e386:c.instructions+=1;goto B48e386;
case 0x48e388:goto L48e388;
case 0x48e389:goto L48e389;
case 0x48e38f:c.instructions+=6;goto B48e38f;
case 0x48e391:c.instructions+=5;goto B48e391;
case 0x48e396:c.instructions+=4;goto B48e396;
case 0x48e399:c.instructions+=3;goto B48e399;
case 0x48e39f:c.instructions+=2;goto B48e39f;
case 0x48e3a4:c.instructions+=1;goto B48e3a4;
case 0x48e3b0:goto L48e3b0;
case 0x48e3b4:c.instructions+=2;goto B48e3b4;
case 0x48e3b6:c.instructions+=1;goto B48e3b6;
case 0x48e3b8:goto L48e3b8;
case 0x48e3ba:c.instructions+=1;goto B48e3ba;
case 0x48e3bb:goto L48e3bb;
case 0x48e3bd:c.instructions+=5;goto B48e3bd;
case 0x48e3c0:c.instructions+=4;goto B48e3c0;
case 0x48e3c2:c.instructions+=3;goto B48e3c2;
case 0x48e3c5:c.instructions+=2;goto B48e3c5;
case 0x48e3ca:c.instructions+=1;goto B48e3ca;
case 0x48e3d0:goto L48e3d0;
case 0x48e3d1:c.instructions+=39;goto B48e3d1;
case 0x48e3d3:c.instructions+=38;goto B48e3d3;
case 0x48e3d6:c.instructions+=37;goto B48e3d6;
case 0x48e3dc:c.instructions+=36;goto B48e3dc;
case 0x48e3df:c.instructions+=35;goto B48e3df;
case 0x48e3e1:c.instructions+=34;goto B48e3e1;
case 0x48e3e2:c.instructions+=33;goto B48e3e2;
case 0x48e3e3:c.instructions+=32;goto B48e3e3;
case 0x48e3e4:c.instructions+=31;goto B48e3e4;
case 0x48e3e7:c.instructions+=30;goto B48e3e7;
case 0x48e3e9:c.instructions+=29;goto B48e3e9;
case 0x48e3ec:c.instructions+=28;goto B48e3ec;
case 0x48e3f2:c.instructions+=27;goto B48e3f2;
case 0x48e3f8:c.instructions+=26;goto B48e3f8;
case 0x48e3fe:c.instructions+=25;goto B48e3fe;
case 0x48e404:c.instructions+=24;goto B48e404;
case 0x48e406:c.instructions+=23;goto B48e406;
case 0x48e40c:c.instructions+=22;goto B48e40c;
case 0x48e410:c.instructions+=21;goto B48e410;
case 0x48e413:c.instructions+=20;goto B48e413;
case 0x48e416:c.instructions+=19;goto B48e416;
case 0x48e41a:c.instructions+=18;goto B48e41a;
case 0x48e41e:c.instructions+=17;goto B48e41e;
case 0x48e422:c.instructions+=16;goto B48e422;
case 0x48e429:c.instructions+=15;goto B48e429;
case 0x48e430:c.instructions+=14;goto B48e430;
case 0x48e437:c.instructions+=13;goto B48e437;
case 0x48e43e:c.instructions+=12;goto B48e43e;
case 0x48e442:c.instructions+=11;goto B48e442;
case 0x48e446:c.instructions+=10;goto B48e446;
case 0x48e44a:c.instructions+=9;goto B48e44a;
case 0x48e44e:c.instructions+=8;goto B48e44e;
case 0x48e453:c.instructions+=7;goto B48e453;
case 0x48e45a:c.instructions+=6;goto B48e45a;
case 0x48e461:c.instructions+=5;goto B48e461;
case 0x48e468:c.instructions+=4;goto B48e468;
case 0x48e473:c.instructions+=3;goto B48e473;
case 0x48e47b:c.instructions+=2;goto B48e47b;
case 0x48e47f:c.instructions+=1;goto B48e47f;
case 0x48e484:goto L48e484;
case 0x48e486:c.instructions+=2;goto B48e486;
case 0x48e48a:c.instructions+=1;goto B48e48a;
case 0x48e490:goto L48e490;
case 0x48e492:goto L48e492;
case 0x48e496:c.instructions+=1;goto B48e496;
case 0x48e4a0:goto L48e4a0;
case 0x48e4a8:c.instructions+=1;goto B48e4a8;
case 0x48e4ae:goto L48e4ae;
case 0x48e4b5:c.instructions+=1;goto B48e4b5;
case 0x48e4bb:goto L48e4bb;
case 0x48e4bf:c.instructions+=7;goto B48e4bf;
case 0x48e4c3:c.instructions+=6;goto B48e4c3;
case 0x48e4c6:c.instructions+=5;goto B48e4c6;
case 0x48e4c7:c.instructions+=4;goto B48e4c7;
case 0x48e4cb:c.instructions+=3;goto B48e4cb;
case 0x48e4cc:c.instructions+=2;goto B48e4cc;
case 0x48e4cd:c.instructions+=1;goto B48e4cd;
case 0x48e4d2:goto L48e4d2;
case 0x48e4d4:c.instructions+=1;goto B48e4d4;
case 0x48e4d6:goto L48e4d6;
case 0x48e4da:c.instructions+=6;goto B48e4da;
case 0x48e4dd:c.instructions+=5;goto B48e4dd;
case 0x48e4df:c.instructions+=4;goto B48e4df;
case 0x48e4e1:c.instructions+=3;goto B48e4e1;
case 0x48e4e3:c.instructions+=2;goto B48e4e3;
case 0x48e4e7:c.instructions+=1;goto B48e4e7;
case 0x48e4e9:goto L48e4e9;
case 0x48e4ec:c.instructions+=1;goto B48e4ec;
case 0x48e4f0:goto L48e4f0;
case 0x48e4f8:c.instructions+=1;goto B48e4f8;
case 0x48e4fa:goto L48e4fa;
case 0x48e4fe:c.instructions+=16;goto B48e4fe;
case 0x48e502:c.instructions+=15;goto B48e502;
case 0x48e506:c.instructions+=14;goto B48e506;
case 0x48e507:c.instructions+=13;goto B48e507;
case 0x48e508:c.instructions+=12;goto B48e508;
case 0x48e50b:c.instructions+=11;goto B48e50b;
case 0x48e50c:c.instructions+=10;goto B48e50c;
case 0x48e510:c.instructions+=9;goto B48e510;
case 0x48e513:c.instructions+=8;goto B48e513;
case 0x48e516:c.instructions+=7;goto B48e516;
case 0x48e518:c.instructions+=6;goto B48e518;
case 0x48e51b:c.instructions+=5;goto B48e51b;
case 0x48e51c:c.instructions+=4;goto B48e51c;
case 0x48e520:c.instructions+=3;goto B48e520;
case 0x48e521:c.instructions+=2;goto B48e521;
case 0x48e522:c.instructions+=1;goto B48e522;
case 0x48e527:goto L48e527;
case 0x48e52a:c.instructions+=4;goto B48e52a;
case 0x48e52b:c.instructions+=3;goto B48e52b;
case 0x48e52e:c.instructions+=2;goto B48e52e;
case 0x48e530:c.instructions+=1;goto B48e530;
case 0x48e532:goto L48e532;
case 0x48e536:goto L48e536;
case 0x48e539:goto L48e539;
case 0x48e53b:c.instructions+=4;goto B48e53b;
case 0x48e53f:c.instructions+=3;goto B48e53f;
case 0x48e546:c.instructions+=2;goto B48e546;
case 0x48e54a:c.instructions+=1;goto B48e54a;
case 0x48e550:goto L48e550;
case 0x48e556:c.instructions+=3;goto B48e556;
case 0x48e55b:c.instructions+=2;goto B48e55b;
case 0x48e55f:c.instructions+=1;goto B48e55f;
case 0x48e564:goto L48e564;
case 0x48e566:c.instructions+=2;goto B48e566;
case 0x48e56a:c.instructions+=1;goto B48e56a;
case 0x48e56c:goto L48e56c;
case 0x48e56e:goto L48e56e;
case 0x48e572:goto L48e572;
case 0x48e575:c.instructions+=2;goto B48e575;
case 0x48e577:c.instructions+=1;goto B48e577;
case 0x48e579:goto L48e579;
case 0x48e57c:c.instructions+=3;goto B48e57c;
case 0x48e57f:c.instructions+=2;goto B48e57f;
case 0x48e581:c.instructions+=1;goto B48e581;
case 0x48e583:goto L48e583;
case 0x48e585:c.instructions+=1;goto B48e585;
case 0x48e587:goto L48e587;
case 0x48e589:c.instructions+=1;goto B48e589;
case 0x48e58b:goto L48e58b;
case 0x48e58e:c.instructions+=1;goto B48e58e;
case 0x48e590:goto L48e590;
case 0x48e592:goto L48e592;
case 0x48e596:c.instructions+=10;goto B48e596;
case 0x48e59a:c.instructions+=9;goto B48e59a;
case 0x48e59b:c.instructions+=8;goto B48e59b;
case 0x48e59f:c.instructions+=7;goto B48e59f;
case 0x48e5a0:c.instructions+=6;goto B48e5a0;
case 0x48e5a1:c.instructions+=5;goto B48e5a1;
case 0x48e5a2:c.instructions+=4;goto B48e5a2;
case 0x48e5a6:c.instructions+=3;goto B48e5a6;
case 0x48e5a7:c.instructions+=2;goto B48e5a7;
case 0x48e5a8:c.instructions+=1;goto B48e5a8;
case 0x48e5ad:goto L48e5ad;
case 0x48e5af:c.instructions+=3;goto B48e5af;
case 0x48e5b2:c.instructions+=2;goto B48e5b2;
case 0x48e5b4:c.instructions+=1;goto B48e5b4;
case 0x48e5b6:goto L48e5b6;
case 0x48e5bd:c.instructions+=1;goto B48e5bd;
case 0x48e5c1:goto L48e5c1;
case 0x48e5c3:c.instructions+=3;goto B48e5c3;
case 0x48e5c7:c.instructions+=2;goto B48e5c7;
case 0x48e5cb:c.instructions+=1;goto B48e5cb;
case 0x48e5cd:goto L48e5cd;
case 0x48e5d3:c.instructions+=9;goto B48e5d3;
case 0x48e5da:c.instructions+=8;goto B48e5da;
case 0x48e5e1:c.instructions+=7;goto B48e5e1;
case 0x48e5e5:c.instructions+=6;goto B48e5e5;
case 0x48e5e9:c.instructions+=5;goto B48e5e9;
case 0x48e5f0:c.instructions+=4;goto B48e5f0;
case 0x48e5f6:c.instructions+=3;goto B48e5f6;
case 0x48e5f8:c.instructions+=2;goto B48e5f8;
case 0x48e5fb:c.instructions+=1;goto B48e5fb;
case 0x48e5fd:goto L48e5fd;
case 0x48e603:c.instructions+=3;goto B48e603;
case 0x48e60b:c.instructions+=2;goto B48e60b;
case 0x48e612:c.instructions+=1;goto B48e612;
case 0x48e616:goto L48e616;
case 0x48e61d:c.instructions+=13;goto B48e61d;
case 0x48e621:c.instructions+=12;goto B48e621;
case 0x48e623:c.instructions+=11;goto B48e623;
case 0x48e627:c.instructions+=10;goto B48e627;
case 0x48e629:c.instructions+=9;goto B48e629;
case 0x48e62d:c.instructions+=8;goto B48e62d;
case 0x48e630:c.instructions+=7;goto B48e630;
case 0x48e634:c.instructions+=6;goto B48e634;
case 0x48e637:c.instructions+=5;goto B48e637;
case 0x48e63b:c.instructions+=4;goto B48e63b;
case 0x48e63f:c.instructions+=3;goto B48e63f;
case 0x48e642:c.instructions+=2;goto B48e642;
case 0x48e646:c.instructions+=1;goto B48e646;
case 0x48e648:goto L48e648;
case 0x48e64c:c.instructions+=5;goto B48e64c;
case 0x48e64e:c.instructions+=4;goto B48e64e;
case 0x48e64f:c.instructions+=3;goto B48e64f;
case 0x48e652:c.instructions+=2;goto B48e652;
case 0x48e656:c.instructions+=1;goto B48e656;
case 0x48e657:goto L48e657;
case 0x48e65b:c.instructions+=14;goto B48e65b;
case 0x48e65e:c.instructions+=13;goto B48e65e;
case 0x48e65f:c.instructions+=12;goto B48e65f;
case 0x48e662:c.instructions+=11;goto B48e662;
case 0x48e664:c.instructions+=10;goto B48e664;
case 0x48e668:c.instructions+=9;goto B48e668;
case 0x48e66b:c.instructions+=8;goto B48e66b;
case 0x48e66d:c.instructions+=7;goto B48e66d;
case 0x48e671:c.instructions+=6;goto B48e671;
case 0x48e674:c.instructions+=5;goto B48e674;
case 0x48e676:c.instructions+=4;goto B48e676;
case 0x48e67a:c.instructions+=3;goto B48e67a;
case 0x48e67d:c.instructions+=2;goto B48e67d;
case 0x48e67f:c.instructions+=1;goto B48e67f;
case 0x48e681:goto L48e681;
case 0x48e685:c.instructions+=2;goto B48e685;
case 0x48e689:c.instructions+=1;goto B48e689;
case 0x48e68b:goto L48e68b;
case 0x48e68d:c.instructions+=1;goto B48e68d;
case 0x48e68f:goto L48e68f;
case 0x48e693:c.instructions+=13;goto B48e693;
case 0x48e695:c.instructions+=12;goto B48e695;
case 0x48e699:c.instructions+=11;goto B48e699;
case 0x48e69f:c.instructions+=10;goto B48e69f;
case 0x48e6a5:c.instructions+=9;goto B48e6a5;
case 0x48e6ac:c.instructions+=8;goto B48e6ac;
case 0x48e6b2:c.instructions+=7;goto B48e6b2;
case 0x48e6b8:c.instructions+=6;goto B48e6b8;
case 0x48e6b9:c.instructions+=5;goto B48e6b9;
case 0x48e6ba:c.instructions+=4;goto B48e6ba;
case 0x48e6bb:c.instructions+=3;goto B48e6bb;
case 0x48e6bd:c.instructions+=2;goto B48e6bd;
case 0x48e6be:c.instructions+=1;goto B48e6be;
case 0x48e6c0:goto L48e6c0;
case 0x48e6c1:c.instructions+=9;goto B48e6c1;
case 0x48e6c3:c.instructions+=8;goto B48e6c3;
case 0x48e6c6:c.instructions+=7;goto B48e6c6;
case 0x48e6cc:c.instructions+=6;goto B48e6cc;
case 0x48e6cd:c.instructions+=5;goto B48e6cd;
case 0x48e6ce:c.instructions+=4;goto B48e6ce;
case 0x48e6d2:c.instructions+=3;goto B48e6d2;
case 0x48e6d7:c.instructions+=2;goto B48e6d7;
case 0x48e6d9:c.instructions+=1;goto B48e6d9;
case 0x48e6e0:goto L48e6e0;
case 0x48e6e3:c.instructions+=6;goto B48e6e3;
case 0x48e6e5:c.instructions+=5;goto B48e6e5;
case 0x48e6e8:c.instructions+=4;goto B48e6e8;
case 0x48e6eb:c.instructions+=3;goto B48e6eb;
case 0x48e6ee:c.instructions+=2;goto B48e6ee;
case 0x48e6ef:c.instructions+=1;goto B48e6ef;
case 0x48e6f1:goto L48e6f1;
case 0x48e6f4:c.instructions+=4;goto B48e6f4;
case 0x48e6f7:c.instructions+=3;goto B48e6f7;
case 0x48e6f8:c.instructions+=2;goto B48e6f8;
case 0x48e6fa:c.instructions+=1;goto B48e6fa;
case 0x48e6ff:goto L48e6ff;
case 0x48e702:c.instructions+=4;goto B48e702;
case 0x48e703:c.instructions+=3;goto B48e703;
case 0x48e70a:c.instructions+=2;goto B48e70a;
case 0x48e70b:c.instructions+=1;goto B48e70b;
case 0x48e710:goto L48e710;
case 0x48e713:c.instructions+=225;goto B48e713;
case 0x48e71a:c.instructions+=224;goto B48e71a;
case 0x48e71d:c.instructions+=223;goto B48e71d;
case 0x48e723:c.instructions+=222;goto B48e723;
case 0x48e726:c.instructions+=221;goto B48e726;
case 0x48e72a:c.instructions+=220;goto B48e72a;
case 0x48e72e:c.instructions+=219;goto B48e72e;
case 0x48e732:c.instructions+=218;goto B48e732;
case 0x48e735:c.instructions+=217;goto B48e735;
case 0x48e73c:c.instructions+=216;goto B48e73c;
case 0x48e73f:c.instructions+=215;goto B48e73f;
case 0x48e743:c.instructions+=214;goto B48e743;
case 0x48e746:c.instructions+=213;goto B48e746;
case 0x48e74d:c.instructions+=212;goto B48e74d;
case 0x48e751:c.instructions+=211;goto B48e751;
case 0x48e755:c.instructions+=210;goto B48e755;
case 0x48e758:c.instructions+=209;goto B48e758;
case 0x48e75c:c.instructions+=208;goto B48e75c;
case 0x48e75f:c.instructions+=207;goto B48e75f;
case 0x48e761:c.instructions+=206;goto B48e761;
case 0x48e765:c.instructions+=205;goto B48e765;
case 0x48e76c:c.instructions+=204;goto B48e76c;
case 0x48e76f:c.instructions+=203;goto B48e76f;
case 0x48e771:c.instructions+=202;goto B48e771;
case 0x48e774:c.instructions+=201;goto B48e774;
case 0x48e778:c.instructions+=200;goto B48e778;
case 0x48e77c:c.instructions+=199;goto B48e77c;
case 0x48e77e:c.instructions+=198;goto B48e77e;
case 0x48e782:c.instructions+=197;goto B48e782;
case 0x48e786:c.instructions+=196;goto B48e786;
case 0x48e78d:c.instructions+=195;goto B48e78d;
case 0x48e793:c.instructions+=194;goto B48e793;
case 0x48e797:c.instructions+=193;goto B48e797;
case 0x48e79e:c.instructions+=192;goto B48e79e;
case 0x48e7a2:c.instructions+=191;goto B48e7a2;
case 0x48e7a9:c.instructions+=190;goto B48e7a9;
case 0x48e7ad:c.instructions+=189;goto B48e7ad;
case 0x48e7af:c.instructions+=188;goto B48e7af;
case 0x48e7b6:c.instructions+=187;goto B48e7b6;
case 0x48e7b8:c.instructions+=186;goto B48e7b8;
case 0x48e7ba:c.instructions+=185;goto B48e7ba;
case 0x48e7be:c.instructions+=184;goto B48e7be;
case 0x48e7c5:c.instructions+=183;goto B48e7c5;
case 0x48e7cb:c.instructions+=182;goto B48e7cb;
case 0x48e7cf:c.instructions+=181;goto B48e7cf;
case 0x48e7d6:c.instructions+=180;goto B48e7d6;
case 0x48e7da:c.instructions+=179;goto B48e7da;
case 0x48e7e1:c.instructions+=178;goto B48e7e1;
case 0x48e7e5:c.instructions+=177;goto B48e7e5;
case 0x48e7e7:c.instructions+=176;goto B48e7e7;
case 0x48e7ee:c.instructions+=175;goto B48e7ee;
case 0x48e7f0:c.instructions+=174;goto B48e7f0;
case 0x48e7f2:c.instructions+=173;goto B48e7f2;
case 0x48e7f6:c.instructions+=172;goto B48e7f6;
case 0x48e7fd:c.instructions+=171;goto B48e7fd;
case 0x48e7ff:c.instructions+=170;goto B48e7ff;
case 0x48e803:c.instructions+=169;goto B48e803;
case 0x48e805:c.instructions+=168;goto B48e805;
case 0x48e80c:c.instructions+=167;goto B48e80c;
case 0x48e813:c.instructions+=166;goto B48e813;
case 0x48e817:c.instructions+=165;goto B48e817;
case 0x48e81e:c.instructions+=164;goto B48e81e;
case 0x48e822:c.instructions+=163;goto B48e822;
case 0x48e824:c.instructions+=162;goto B48e824;
case 0x48e82b:c.instructions+=161;goto B48e82b;
case 0x48e82f:c.instructions+=160;goto B48e82f;
case 0x48e831:c.instructions+=159;goto B48e831;
case 0x48e835:c.instructions+=158;goto B48e835;
case 0x48e83c:c.instructions+=157;goto B48e83c;
case 0x48e840:c.instructions+=156;goto B48e840;
case 0x48e847:c.instructions+=155;goto B48e847;
case 0x48e84b:c.instructions+=154;goto B48e84b;
case 0x48e84f:c.instructions+=153;goto B48e84f;
case 0x48e852:c.instructions+=152;goto B48e852;
case 0x48e854:c.instructions+=151;goto B48e854;
case 0x48e85b:c.instructions+=150;goto B48e85b;
case 0x48e85f:c.instructions+=149;goto B48e85f;
case 0x48e861:c.instructions+=148;goto B48e861;
case 0x48e865:c.instructions+=147;goto B48e865;
case 0x48e86c:c.instructions+=146;goto B48e86c;
case 0x48e870:c.instructions+=145;goto B48e870;
case 0x48e877:c.instructions+=144;goto B48e877;
case 0x48e87b:c.instructions+=143;goto B48e87b;
case 0x48e87d:c.instructions+=142;goto B48e87d;
case 0x48e884:c.instructions+=141;goto B48e884;
case 0x48e888:c.instructions+=140;goto B48e888;
case 0x48e88a:c.instructions+=139;goto B48e88a;
case 0x48e88e:c.instructions+=138;goto B48e88e;
case 0x48e895:c.instructions+=137;goto B48e895;
case 0x48e89c:c.instructions+=136;goto B48e89c;
case 0x48e89e:c.instructions+=135;goto B48e89e;
case 0x48e8a2:c.instructions+=134;goto B48e8a2;
case 0x48e8a6:c.instructions+=133;goto B48e8a6;
case 0x48e8aa:c.instructions+=132;goto B48e8aa;
case 0x48e8ae:c.instructions+=131;goto B48e8ae;
case 0x48e8b2:c.instructions+=130;goto B48e8b2;
case 0x48e8b5:c.instructions+=129;goto B48e8b5;
case 0x48e8bc:c.instructions+=128;goto B48e8bc;
case 0x48e8bf:c.instructions+=127;goto B48e8bf;
case 0x48e8c3:c.instructions+=126;goto B48e8c3;
case 0x48e8ca:c.instructions+=125;goto B48e8ca;
case 0x48e8ce:c.instructions+=124;goto B48e8ce;
case 0x48e8d0:c.instructions+=123;goto B48e8d0;
case 0x48e8d7:c.instructions+=122;goto B48e8d7;
case 0x48e8db:c.instructions+=121;goto B48e8db;
case 0x48e8dd:c.instructions+=120;goto B48e8dd;
case 0x48e8e1:c.instructions+=119;goto B48e8e1;
case 0x48e8e8:c.instructions+=118;goto B48e8e8;
case 0x48e8ec:c.instructions+=117;goto B48e8ec;
case 0x48e8f3:c.instructions+=116;goto B48e8f3;
case 0x48e8f7:c.instructions+=115;goto B48e8f7;
case 0x48e8f9:c.instructions+=114;goto B48e8f9;
case 0x48e900:c.instructions+=113;goto B48e900;
case 0x48e904:c.instructions+=112;goto B48e904;
case 0x48e906:c.instructions+=111;goto B48e906;
case 0x48e90a:c.instructions+=110;goto B48e90a;
case 0x48e911:c.instructions+=109;goto B48e911;
case 0x48e915:c.instructions+=108;goto B48e915;
case 0x48e91c:c.instructions+=107;goto B48e91c;
case 0x48e920:c.instructions+=106;goto B48e920;
case 0x48e922:c.instructions+=105;goto B48e922;
case 0x48e929:c.instructions+=104;goto B48e929;
case 0x48e92d:c.instructions+=103;goto B48e92d;
case 0x48e92f:c.instructions+=102;goto B48e92f;
case 0x48e933:c.instructions+=101;goto B48e933;
case 0x48e93a:c.instructions+=100;goto B48e93a;
case 0x48e941:c.instructions+=99;goto B48e941;
case 0x48e943:c.instructions+=98;goto B48e943;
case 0x48e947:c.instructions+=97;goto B48e947;
case 0x48e94b:c.instructions+=96;goto B48e94b;
case 0x48e94f:c.instructions+=95;goto B48e94f;
case 0x48e953:c.instructions+=94;goto B48e953;
case 0x48e957:c.instructions+=93;goto B48e957;
case 0x48e95b:c.instructions+=92;goto B48e95b;
case 0x48e95e:c.instructions+=91;goto B48e95e;
case 0x48e960:c.instructions+=90;goto B48e960;
case 0x48e964:c.instructions+=89;goto B48e964;
case 0x48e967:c.instructions+=88;goto B48e967;
case 0x48e96a:c.instructions+=87;goto B48e96a;
case 0x48e96d:c.instructions+=86;goto B48e96d;
case 0x48e970:c.instructions+=85;goto B48e970;
case 0x48e973:c.instructions+=84;goto B48e973;
case 0x48e979:c.instructions+=83;goto B48e979;
case 0x48e97f:c.instructions+=82;goto B48e97f;
case 0x48e985:c.instructions+=81;goto B48e985;
case 0x48e989:c.instructions+=80;goto B48e989;
case 0x48e98f:c.instructions+=79;goto B48e98f;
case 0x48e993:c.instructions+=78;goto B48e993;
case 0x48e999:c.instructions+=77;goto B48e999;
case 0x48e99d:c.instructions+=76;goto B48e99d;
case 0x48e9a1:c.instructions+=75;goto B48e9a1;
case 0x48e9a5:c.instructions+=74;goto B48e9a5;
case 0x48e9ab:c.instructions+=73;goto B48e9ab;
case 0x48e9b1:c.instructions+=72;goto B48e9b1;
case 0x48e9b7:c.instructions+=71;goto B48e9b7;
case 0x48e9bb:c.instructions+=70;goto B48e9bb;
case 0x48e9c1:c.instructions+=69;goto B48e9c1;
case 0x48e9c5:c.instructions+=68;goto B48e9c5;
case 0x48e9cb:c.instructions+=67;goto B48e9cb;
case 0x48e9cf:c.instructions+=66;goto B48e9cf;
case 0x48e9d5:c.instructions+=65;goto B48e9d5;
case 0x48e9d9:c.instructions+=64;goto B48e9d9;
case 0x48e9df:c.instructions+=63;goto B48e9df;
case 0x48e9e3:c.instructions+=62;goto B48e9e3;
case 0x48e9e9:c.instructions+=61;goto B48e9e9;
case 0x48e9ed:c.instructions+=60;goto B48e9ed;
case 0x48e9f3:c.instructions+=59;goto B48e9f3;
case 0x48e9fa:c.instructions+=58;goto B48e9fa;
case 0x48ea00:c.instructions+=57;goto B48ea00;
case 0x48ea07:c.instructions+=56;goto B48ea07;
case 0x48ea0d:c.instructions+=55;goto B48ea0d;
case 0x48ea11:c.instructions+=54;goto B48ea11;
case 0x48ea17:c.instructions+=53;goto B48ea17;
case 0x48ea1e:c.instructions+=52;goto B48ea1e;
case 0x48ea24:c.instructions+=51;goto B48ea24;
case 0x48ea2b:c.instructions+=50;goto B48ea2b;
case 0x48ea31:c.instructions+=49;goto B48ea31;
case 0x48ea38:c.instructions+=48;goto B48ea38;
case 0x48ea3e:c.instructions+=47;goto B48ea3e;
case 0x48ea45:c.instructions+=46;goto B48ea45;
case 0x48ea4b:c.instructions+=45;goto B48ea4b;
case 0x48ea52:c.instructions+=44;goto B48ea52;
case 0x48ea58:c.instructions+=43;goto B48ea58;
case 0x48ea5f:c.instructions+=42;goto B48ea5f;
case 0x48ea65:c.instructions+=41;goto B48ea65;
case 0x48ea6c:c.instructions+=40;goto B48ea6c;
case 0x48ea72:c.instructions+=39;goto B48ea72;
case 0x48ea79:c.instructions+=38;goto B48ea79;
case 0x48ea7f:c.instructions+=37;goto B48ea7f;
case 0x48ea86:c.instructions+=36;goto B48ea86;
case 0x48ea8c:c.instructions+=35;goto B48ea8c;
case 0x48ea93:c.instructions+=34;goto B48ea93;
case 0x48ea99:c.instructions+=33;goto B48ea99;
case 0x48eaa0:c.instructions+=32;goto B48eaa0;
case 0x48eaa6:c.instructions+=31;goto B48eaa6;
case 0x48eaad:c.instructions+=30;goto B48eaad;
case 0x48eab3:c.instructions+=29;goto B48eab3;
case 0x48eaba:c.instructions+=28;goto B48eaba;
case 0x48eac0:c.instructions+=27;goto B48eac0;
case 0x48eac7:c.instructions+=26;goto B48eac7;
case 0x48eacd:c.instructions+=25;goto B48eacd;
case 0x48ead4:c.instructions+=24;goto B48ead4;
case 0x48eada:c.instructions+=23;goto B48eada;
case 0x48eae1:c.instructions+=22;goto B48eae1;
case 0x48eae7:c.instructions+=21;goto B48eae7;
case 0x48eaee:c.instructions+=20;goto B48eaee;
case 0x48eaf4:c.instructions+=19;goto B48eaf4;
case 0x48eafb:c.instructions+=18;goto B48eafb;
case 0x48eb01:c.instructions+=17;goto B48eb01;
case 0x48eb08:c.instructions+=16;goto B48eb08;
case 0x48eb0e:c.instructions+=15;goto B48eb0e;
case 0x48eb15:c.instructions+=14;goto B48eb15;
case 0x48eb1b:c.instructions+=13;goto B48eb1b;
case 0x48eb22:c.instructions+=12;goto B48eb22;
case 0x48eb28:c.instructions+=11;goto B48eb28;
case 0x48eb2f:c.instructions+=10;goto B48eb2f;
case 0x48eb35:c.instructions+=9;goto B48eb35;
case 0x48eb3c:c.instructions+=8;goto B48eb3c;
case 0x48eb43:c.instructions+=7;goto B48eb43;
case 0x48eb49:c.instructions+=6;goto B48eb49;
case 0x48eb50:c.instructions+=5;goto B48eb50;
case 0x48eb57:c.instructions+=4;goto B48eb57;
case 0x48eb58:c.instructions+=3;goto B48eb58;
case 0x48eb5c:c.instructions+=2;goto B48eb5c;
case 0x48eb63:c.instructions+=1;goto B48eb63;
case 0x48eb68:goto L48eb68;
case 0x48eb6c:c.instructions+=84;goto B48eb6c;
case 0x48eb70:c.instructions+=83;goto B48eb70;
case 0x48eb74:c.instructions+=82;goto B48eb74;
case 0x48eb7a:c.instructions+=81;goto B48eb7a;
case 0x48eb7e:c.instructions+=80;goto B48eb7e;
case 0x48eb84:c.instructions+=79;goto B48eb84;
case 0x48eb8a:c.instructions+=78;goto B48eb8a;
case 0x48eb8e:c.instructions+=77;goto B48eb8e;
case 0x48eb92:c.instructions+=76;goto B48eb92;
case 0x48eb98:c.instructions+=75;goto B48eb98;
case 0x48eb9c:c.instructions+=74;goto B48eb9c;
case 0x48eba2:c.instructions+=73;goto B48eba2;
case 0x48eba6:c.instructions+=72;goto B48eba6;
case 0x48ebac:c.instructions+=71;goto B48ebac;
case 0x48ebb0:c.instructions+=70;goto B48ebb0;
case 0x48ebb6:c.instructions+=69;goto B48ebb6;
case 0x48ebba:c.instructions+=68;goto B48ebba;
case 0x48ebc0:c.instructions+=67;goto B48ebc0;
case 0x48ebc4:c.instructions+=66;goto B48ebc4;
case 0x48ebca:c.instructions+=65;goto B48ebca;
case 0x48ebce:c.instructions+=64;goto B48ebce;
case 0x48ebd4:c.instructions+=63;goto B48ebd4;
case 0x48ebdb:c.instructions+=62;goto B48ebdb;
case 0x48ebe1:c.instructions+=61;goto B48ebe1;
case 0x48ebe8:c.instructions+=60;goto B48ebe8;
case 0x48ebee:c.instructions+=59;goto B48ebee;
case 0x48ebf5:c.instructions+=58;goto B48ebf5;
case 0x48ebfb:c.instructions+=57;goto B48ebfb;
case 0x48ec02:c.instructions+=56;goto B48ec02;
case 0x48ec08:c.instructions+=55;goto B48ec08;
case 0x48ec0f:c.instructions+=54;goto B48ec0f;
case 0x48ec15:c.instructions+=53;goto B48ec15;
case 0x48ec1c:c.instructions+=52;goto B48ec1c;
case 0x48ec22:c.instructions+=51;goto B48ec22;
case 0x48ec29:c.instructions+=50;goto B48ec29;
case 0x48ec2f:c.instructions+=49;goto B48ec2f;
case 0x48ec36:c.instructions+=48;goto B48ec36;
case 0x48ec3c:c.instructions+=47;goto B48ec3c;
case 0x48ec43:c.instructions+=46;goto B48ec43;
case 0x48ec49:c.instructions+=45;goto B48ec49;
case 0x48ec50:c.instructions+=44;goto B48ec50;
case 0x48ec56:c.instructions+=43;goto B48ec56;
case 0x48ec5d:c.instructions+=42;goto B48ec5d;
case 0x48ec63:c.instructions+=41;goto B48ec63;
case 0x48ec6a:c.instructions+=40;goto B48ec6a;
case 0x48ec70:c.instructions+=39;goto B48ec70;
case 0x48ec77:c.instructions+=38;goto B48ec77;
case 0x48ec7d:c.instructions+=37;goto B48ec7d;
case 0x48ec84:c.instructions+=36;goto B48ec84;
case 0x48ec8a:c.instructions+=35;goto B48ec8a;
case 0x48ec91:c.instructions+=34;goto B48ec91;
case 0x48ec97:c.instructions+=33;goto B48ec97;
case 0x48ec9e:c.instructions+=32;goto B48ec9e;
case 0x48eca4:c.instructions+=31;goto B48eca4;
case 0x48ecab:c.instructions+=30;goto B48ecab;
case 0x48ecb1:c.instructions+=29;goto B48ecb1;
case 0x48ecb8:c.instructions+=28;goto B48ecb8;
case 0x48ecbe:c.instructions+=27;goto B48ecbe;
case 0x48ecc5:c.instructions+=26;goto B48ecc5;
case 0x48eccb:c.instructions+=25;goto B48eccb;
case 0x48ecd2:c.instructions+=24;goto B48ecd2;
case 0x48ecd8:c.instructions+=23;goto B48ecd8;
case 0x48ecdf:c.instructions+=22;goto B48ecdf;
case 0x48ece5:c.instructions+=21;goto B48ece5;
case 0x48ecec:c.instructions+=20;goto B48ecec;
case 0x48ecf2:c.instructions+=19;goto B48ecf2;
case 0x48ecf9:c.instructions+=18;goto B48ecf9;
case 0x48ecff:c.instructions+=17;goto B48ecff;
case 0x48ed06:c.instructions+=16;goto B48ed06;
case 0x48ed0c:c.instructions+=15;goto B48ed0c;
case 0x48ed13:c.instructions+=14;goto B48ed13;
case 0x48ed19:c.instructions+=13;goto B48ed19;
case 0x48ed20:c.instructions+=12;goto B48ed20;
case 0x48ed26:c.instructions+=11;goto B48ed26;
case 0x48ed2d:c.instructions+=10;goto B48ed2d;
case 0x48ed33:c.instructions+=9;goto B48ed33;
case 0x48ed3a:c.instructions+=8;goto B48ed3a;
case 0x48ed40:c.instructions+=7;goto B48ed40;
case 0x48ed46:c.instructions+=6;goto B48ed46;
case 0x48ed4c:c.instructions+=5;goto B48ed4c;
case 0x48ed4d:c.instructions+=4;goto B48ed4d;
case 0x48ed4e:c.instructions+=3;goto B48ed4e;
case 0x48ed50:c.instructions+=2;goto B48ed50;
case 0x48ed51:c.instructions+=1;goto B48ed51;
case 0x48ed60:goto L48ed60;
case 0x48ed61:c.instructions+=9;goto B48ed61;
case 0x48ed63:c.instructions+=8;goto B48ed63;
case 0x48ed66:c.instructions+=7;goto B48ed66;
case 0x48ed6c:c.instructions+=6;goto B48ed6c;
case 0x48ed6f:c.instructions+=5;goto B48ed6f;
case 0x48ed71:c.instructions+=4;goto B48ed71;
case 0x48ed72:c.instructions+=3;goto B48ed72;
case 0x48ed73:c.instructions+=2;goto B48ed73;
case 0x48ed74:c.instructions+=1;goto B48ed74;
case 0x48ed76:goto L48ed76;
case 0x48ed79:c.instructions+=6;goto B48ed79;
case 0x48ed7a:c.instructions+=5;goto B48ed7a;
case 0x48ed7b:c.instructions+=4;goto B48ed7b;
case 0x48ed7c:c.instructions+=3;goto B48ed7c;
case 0x48ed7e:c.instructions+=2;goto B48ed7e;
case 0x48ed7f:c.instructions+=1;goto B48ed7f;
case 0x48ed80:goto L48ed80;
case 0x48ed83:c.instructions+=3;goto B48ed83;
case 0x48ed85:c.instructions+=2;goto B48ed85;
case 0x48ed88:c.instructions+=1;goto B48ed88;
case 0x48ed8a:goto L48ed8a;
case 0x48ed8d:c.instructions+=2;goto B48ed8d;
case 0x48ed8f:c.instructions+=1;goto B48ed8f;
case 0x48ed91:goto L48ed91;
case 0x48ed93:goto L48ed93;
case 0x48ed94:c.instructions+=3;goto B48ed94;
case 0x48ed9b:c.instructions+=2;goto B48ed9b;
case 0x48ed9c:c.instructions+=1;goto B48ed9c;
case 0x48eda1:goto L48eda1;
case 0x48eda4:c.instructions+=3;goto B48eda4;
case 0x48eda6:c.instructions+=2;goto B48eda6;
case 0x48edab:c.instructions+=1;goto B48edab;
case 0x48edb2:goto L48edb2;
case 0x48edb4:goto L48edb4;
case 0x48edb9:c.instructions+=1;goto B48edb9;
case 0x48edc0:goto L48edc0;
case 0x48edc2:goto L48edc2;
case 0x48edc7:c.instructions+=2;goto B48edc7;
case 0x48edce:c.instructions+=1;goto B48edce;
case 0x48edd1:goto L48edd1;
case 0x48edd3:goto L48edd3;
case 0x48edd6:c.instructions+=2;goto B48edd6;
case 0x48edd8:c.instructions+=1;goto B48edd8;
case 0x48ede0:goto L48ede0;
case 0x48ede6:c.instructions+=10;goto B48ede6;
case 0x48edeb:c.instructions+=9;goto B48edeb;
case 0x48edee:c.instructions+=8;goto B48edee;
case 0x48edf1:c.instructions+=7;goto B48edf1;
case 0x48edf8:c.instructions+=6;goto B48edf8;
case 0x48edfc:c.instructions+=5;goto B48edfc;
case 0x48edfe:c.instructions+=4;goto B48edfe;
case 0x48ee04:c.instructions+=3;goto B48ee04;
case 0x48ee07:c.instructions+=2;goto B48ee07;
case 0x48ee08:c.instructions+=1;goto B48ee08;
case 0x48ee0d:goto L48ee0d;
case 0x48ee10:c.instructions+=3;goto B48ee10;
case 0x48ee13:c.instructions+=2;goto B48ee13;
case 0x48ee15:c.instructions+=1;goto B48ee15;
case 0x48ee1b:goto L48ee1b;
case 0x48ee1d:c.instructions+=49;goto B48ee1d;
case 0x48ee24:c.instructions+=48;goto B48ee24;
case 0x48ee26:c.instructions+=47;goto B48ee26;
case 0x48ee2a:c.instructions+=46;goto B48ee2a;
case 0x48ee31:c.instructions+=45;goto B48ee31;
case 0x48ee33:c.instructions+=44;goto B48ee33;
case 0x48ee37:c.instructions+=43;goto B48ee37;
case 0x48ee3e:c.instructions+=42;goto B48ee3e;
case 0x48ee40:c.instructions+=41;goto B48ee40;
case 0x48ee47:c.instructions+=40;goto B48ee47;
case 0x48ee4b:c.instructions+=39;goto B48ee4b;
case 0x48ee4d:c.instructions+=38;goto B48ee4d;
case 0x48ee54:c.instructions+=37;goto B48ee54;
case 0x48ee58:c.instructions+=36;goto B48ee58;
case 0x48ee5a:c.instructions+=35;goto B48ee5a;
case 0x48ee61:c.instructions+=34;goto B48ee61;
case 0x48ee67:c.instructions+=33;goto B48ee67;
case 0x48ee69:c.instructions+=32;goto B48ee69;
case 0x48ee70:c.instructions+=31;goto B48ee70;
case 0x48ee72:c.instructions+=30;goto B48ee72;
case 0x48ee79:c.instructions+=29;goto B48ee79;
case 0x48ee7d:c.instructions+=28;goto B48ee7d;
case 0x48ee7f:c.instructions+=27;goto B48ee7f;
case 0x48ee86:c.instructions+=26;goto B48ee86;
case 0x48ee8a:c.instructions+=25;goto B48ee8a;
case 0x48ee8c:c.instructions+=24;goto B48ee8c;
case 0x48ee93:c.instructions+=23;goto B48ee93;
case 0x48ee99:c.instructions+=22;goto B48ee99;
case 0x48ee9b:c.instructions+=21;goto B48ee9b;
case 0x48eea2:c.instructions+=20;goto B48eea2;
case 0x48eea4:c.instructions+=19;goto B48eea4;
case 0x48eeab:c.instructions+=18;goto B48eeab;
case 0x48eeaf:c.instructions+=17;goto B48eeaf;
case 0x48eeb1:c.instructions+=16;goto B48eeb1;
case 0x48eeb8:c.instructions+=15;goto B48eeb8;
case 0x48eebc:c.instructions+=14;goto B48eebc;
case 0x48eebe:c.instructions+=13;goto B48eebe;
case 0x48eec5:c.instructions+=12;goto B48eec5;
case 0x48eecb:c.instructions+=11;goto B48eecb;
case 0x48eecd:c.instructions+=10;goto B48eecd;
case 0x48eed1:c.instructions+=9;goto B48eed1;
case 0x48eed3:c.instructions+=8;goto B48eed3;
case 0x48eed7:c.instructions+=7;goto B48eed7;
case 0x48eedb:c.instructions+=6;goto B48eedb;
case 0x48eedd:c.instructions+=5;goto B48eedd;
case 0x48eedf:c.instructions+=4;goto B48eedf;
case 0x48eee3:c.instructions+=3;goto B48eee3;
case 0x48eee5:c.instructions+=2;goto B48eee5;
case 0x48eeec:c.instructions+=1;goto B48eeec;
case 0x48eef3:goto L48eef3;
case 0x48eef6:c.instructions+=16;goto B48eef6;
case 0x48ef01:c.instructions+=15;goto B48ef01;
case 0x48ef03:c.instructions+=14;goto B48ef03;
case 0x48ef06:c.instructions+=13;goto B48ef06;
case 0x48ef09:c.instructions+=12;goto B48ef09;
case 0x48ef0c:c.instructions+=11;goto B48ef0c;
case 0x48ef0f:c.instructions+=10;goto B48ef0f;
case 0x48ef15:c.instructions+=9;goto B48ef15;
case 0x48ef1c:c.instructions+=8;goto B48ef1c;
case 0x48ef1e:c.instructions+=7;goto B48ef1e;
case 0x48ef21:c.instructions+=6;goto B48ef21;
case 0x48ef27:c.instructions+=5;goto B48ef27;
case 0x48ef2e:c.instructions+=4;goto B48ef2e;
case 0x48ef31:c.instructions+=3;goto B48ef31;
case 0x48ef37:c.instructions+=2;goto B48ef37;
case 0x48ef3e:c.instructions+=1;goto B48ef3e;
case 0x48ef44:goto L48ef44;
case 0x48ef47:c.instructions+=4;goto B48ef47;
case 0x48ef4b:c.instructions+=3;goto B48ef4b;
case 0x48ef4c:c.instructions+=2;goto B48ef4c;
case 0x48ef4d:c.instructions+=1;goto B48ef4d;
case 0x48ef52:goto L48ef52;
case 0x48ef54:c.instructions+=5;goto B48ef54;
case 0x48ef57:c.instructions+=4;goto B48ef57;
case 0x48ef5a:c.instructions+=3;goto B48ef5a;
case 0x48ef5d:c.instructions+=2;goto B48ef5d;
case 0x48ef61:c.instructions+=1;goto B48ef61;
case 0x48ef63:goto L48ef63;
case 0x48ef6b:c.instructions+=1;goto B48ef6b;
case 0x48ef6f:goto L48ef6f;
case 0x48ef71:c.instructions+=9;goto B48ef71;
case 0x48ef74:c.instructions+=8;goto B48ef74;
case 0x48ef77:c.instructions+=7;goto B48ef77;
case 0x48ef79:c.instructions+=6;goto B48ef79;
case 0x48ef7b:c.instructions+=5;goto B48ef7b;
case 0x48ef7d:c.instructions+=4;goto B48ef7d;
case 0x48ef81:c.instructions+=3;goto B48ef81;
case 0x48ef85:c.instructions+=2;goto B48ef85;
case 0x48ef89:c.instructions+=1;goto B48ef89;
case 0x48ef8f:goto L48ef8f;
case 0x48ef91:c.instructions+=17;goto B48ef91;
case 0x48ef95:c.instructions+=16;goto B48ef95;
case 0x48ef98:c.instructions+=15;goto B48ef98;
case 0x48ef9c:c.instructions+=14;goto B48ef9c;
case 0x48efa3:c.instructions+=13;goto B48efa3;
case 0x48efa6:c.instructions+=12;goto B48efa6;
case 0x48efaa:c.instructions+=11;goto B48efaa;
case 0x48efb1:c.instructions+=10;goto B48efb1;
case 0x48efb4:c.instructions+=9;goto B48efb4;
case 0x48efb8:c.instructions+=8;goto B48efb8;
case 0x48efbf:c.instructions+=7;goto B48efbf;
case 0x48efc2:c.instructions+=6;goto B48efc2;
case 0x48efc4:c.instructions+=5;goto B48efc4;
case 0x48efca:c.instructions+=4;goto B48efca;
case 0x48efcc:c.instructions+=3;goto B48efcc;
case 0x48efd0:c.instructions+=2;goto B48efd0;
case 0x48efd4:c.instructions+=1;goto B48efd4;
case 0x48efd6:goto L48efd6;
case 0x48efdc:goto L48efdc;
case 0x48efde:c.instructions+=7;goto B48efde;
case 0x48efe2:c.instructions+=6;goto B48efe2;
case 0x48efe5:c.instructions+=5;goto B48efe5;
case 0x48efeb:c.instructions+=4;goto B48efeb;
case 0x48efed:c.instructions+=3;goto B48efed;
case 0x48eff1:c.instructions+=2;goto B48eff1;
case 0x48eff5:c.instructions+=1;goto B48eff5;
case 0x48eff7:goto L48eff7;
case 0x48effd:goto L48effd;
default:missing_instruction(c.pc);}
B48e001:L48e001:{c.instructions+=4;NFSU2_TR(0x48e001);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e002:{NFSU2_TR(0x48e002);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e003:{NFSU2_TR(0x48e003);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e004:{NFSU2_TR(0x48e004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e009ull));
TAIL_STATIC(0x488bc0u,488);
}
B48e009:L48e009:{c.instructions+=3;NFSU2_TR(0x48e009);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48e00c:{NFSU2_TR(0x48e00c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48e00e:{NFSU2_TR(0x48e00e);
if(r1(R+518)){{goto L48e017;}}
}
B48e010:L48e010:{c.instructions+=3;NFSU2_TR(0x48e010);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e013:{NFSU2_TR(0x48e013);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48e015:{NFSU2_TR(0x48e015);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e01f;}}
}
B48e017:L48e017:{c.instructions+=3;NFSU2_TR(0x48e017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48e019:{NFSU2_TR(0x48e019);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48e01b:{NFSU2_TR(0x48e01b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x48dff3u,48d);}
}
B48e01d:L48e01d:{c.instructions+=1;NFSU2_TR(0x48e01d);
{goto L48e043;}
}
B48e01f:L48e01f:{c.instructions+=10;NFSU2_TR(0x48e01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48e022:{NFSU2_TR(0x48e022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48e024:{NFSU2_TR(0x48e024);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e027:{NFSU2_TR(0x48e027);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48e029:{NFSU2_TR(0x48e029);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e02c:{NFSU2_TR(0x48e02c);
__builtin_memmove((R+0),gp(0x830d1c),4);
}
B48e031:{NFSU2_TR(0x48e031);
__builtin_memmove(gp(0x830d1c),(R+24),4);
}
B48e037:{NFSU2_TR(0x48e037);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e03a:{NFSU2_TR(0x48e03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x830d1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B48e041:{NFSU2_TR(0x48e041);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B48e043:L48e043:{c.instructions+=3;NFSU2_TR(0x48e043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48e044:{NFSU2_TR(0x48e044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48e045:{NFSU2_TR(0x48e045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e04aull));
TAIL_STATIC(0x43bdf0u,43b);
}
B48e04a:L48e04a:{c.instructions+=4;NFSU2_TR(0x48e04a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e04e:{NFSU2_TR(0x48e04e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e04f:{NFSU2_TR(0x48e04f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e050:{NFSU2_TR(0x48e050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e055ull));
TAIL_STATIC(0x43be20u,43b);
}
B48e055:L48e055:{c.instructions+=7;NFSU2_TR(0x48e055);
{u32 ea_=u32(u32(8575680u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48e05b:{NFSU2_TR(0x48e05b);
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
B48e05e:{NFSU2_TR(0x48e05e);
__builtin_memmove((R+0),(R+20),4);
}
B48e060:{NFSU2_TR(0x48e060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48e061:{NFSU2_TR(0x48e061);
{u32 ea_=u32(u32(8575680u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e067:{NFSU2_TR(0x48e067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48e068:{NFSU2_TR(0x48e068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e070:L48e070:{c.instructions+=5;NFSU2_TR(0x48e070);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e074:{NFSU2_TR(0x48e074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48e076:{NFSU2_TR(0x48e076);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x135200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48e07c:{NFSU2_TR(0x48e07c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e07d:{NFSU2_TR(0x48e07d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e0eb;}}
}
B48e07f:L48e07f:{c.instructions+=10;NFSU2_TR(0x48e07f);
{u32 ea_=u32(u32(7919488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e085:{NFSU2_TR(0x48e085);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48e088:{NFSU2_TR(0x48e088);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e08e:{NFSU2_TR(0x48e08e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e091:{NFSU2_TR(0x48e091);
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
B48e094:{NFSU2_TR(0x48e094);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e09a:{NFSU2_TR(0x48e09a);
{u32 ea_=u32(u32(7919488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e0a0:{NFSU2_TR(0x48e0a0);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e0a6:{NFSU2_TR(0x48e0a6);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e0ac:{NFSU2_TR(0x48e0ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e0e4;}}
}
B48e0ae:L48e0ae:{c.instructions+=2;NFSU2_TR(0x48e0ae);
__builtin_memmove((R+4),(R+24),4);
}
B48e0b0:{NFSU2_TR(0x48e0b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e0b5ull));
TAIL_STATIC(0x5bb590u,5bb);
}
B48e0b5:L48e0b5:{c.instructions+=2;NFSU2_TR(0x48e0b5);
__builtin_memmove((R+4),(R+24),4);
}
B48e0b7:{NFSU2_TR(0x48e0b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e0bcull));
TAIL_STATIC(0x5bb5b0u,5bb);
}
B48e0bc:L48e0bc:{c.instructions+=8;NFSU2_TR(0x48e0bc);
__builtin_memmove((R+4),gp(0x8358c4),4);
}
B48e0c2:{NFSU2_TR(0x48e0c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48e0c5:{NFSU2_TR(0x48e0c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48e0c7:{NFSU2_TR(0x48e0c7);
__builtin_memmove(gp(0x8358c4),(R+0),4);
}
B48e0cc:{NFSU2_TR(0x48e0cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e0cf:{NFSU2_TR(0x48e0cf);
u8 U[4];
w4(U+0,u32(0x8358c0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48e0d5:{NFSU2_TR(0x48e0d5);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2c420d64ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2c420d64ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2c420d64ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B48e0dc:{NFSU2_TR(0x48e0dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e0e4;}}
}
B48e0de:L48e0de:{c.instructions+=1;NFSU2_TR(0x48e0de);
__builtin_memmove(gp(0x7f399c),(R+24),4);
}
B48e0e4:L48e0e4:{c.instructions+=3;NFSU2_TR(0x48e0e4);
w4(R+0,u32(0x1ull));
}
B48e0e9:{NFSU2_TR(0x48e0e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48e0ea:{NFSU2_TR(0x48e0ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e0eb:L48e0eb:{c.instructions+=5;NFSU2_TR(0x48e0eb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80135100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48e0f1:{NFSU2_TR(0x48e0f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e0f2:{NFSU2_TR(0x48e0f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e0f3:{NFSU2_TR(0x48e0f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e0f4:{NFSU2_TR(0x48e0f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e1ac;}}
}
B48e0fa:L48e0fa:{c.instructions+=6;NFSU2_TR(0x48e0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e0fd:{NFSU2_TR(0x48e0fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48e100:{NFSU2_TR(0x48e100);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B48e104:{NFSU2_TR(0x48e104);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48e106:{NFSU2_TR(0x48e106);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B48e108:{NFSU2_TR(0x48e108);
if(r1(R+518)){{goto L48e1a2;}}
}
B48e10e:L48e10e:{c.instructions+=1;NFSU2_TR(0x48e10e);
__builtin_memmove((R+28),(R+28),4);
}
B48e110:L48e110:{c.instructions+=3;NFSU2_TR(0x48e110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48e113:{NFSU2_TR(0x48e113);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x135101ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B48e118:{NFSU2_TR(0x48e118);
if(r1(R+518)){{goto L48e149;}}
}
B48e11a:L48e11a:{c.instructions+=2;NFSU2_TR(0x48e11a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B48e11b:{NFSU2_TR(0x48e11b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e16c;}}
}
B48e11d:L48e11d:{c.instructions+=2;NFSU2_TR(0x48e11d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48e11f:{NFSU2_TR(0x48e11f);
if(r1(R+518)){{goto L48e16c;}}
}
B48e121:L48e121:{c.instructions+=5;NFSU2_TR(0x48e121);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B48e125:{NFSU2_TR(0x48e125);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48e128:{NFSU2_TR(0x48e128);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B48e12b:{NFSU2_TR(0x48e12b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48e12d:{NFSU2_TR(0x48e12d);
if(r1(R+518)){{goto L48e16c;}}
}
B48e12f:L48e12f:{c.instructions+=2;NFSU2_TR(0x48e12f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48e132:{NFSU2_TR(0x48e132);
__builtin_memmove((R+28),(R+8),4);
}
B48e134:L48e134:{c.instructions+=8;NFSU2_TR(0x48e134);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e137:{NFSU2_TR(0x48e137);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48e139:{NFSU2_TR(0x48e139);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e13c:{NFSU2_TR(0x48e13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e13f:{NFSU2_TR(0x48e13f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48e141:{NFSU2_TR(0x48e141);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B48e144:{NFSU2_TR(0x48e144);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B48e145:{NFSU2_TR(0x48e145);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e134u);}goto L48e134;}}
}
B48e147:L48e147:{c.instructions+=1;NFSU2_TR(0x48e147);
{goto L48e16c;}
}
B48e149:L48e149:{c.instructions+=5;NFSU2_TR(0x48e149);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48e14c:{NFSU2_TR(0x48e14c);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B48e14f:{NFSU2_TR(0x48e14f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48e152:{NFSU2_TR(0x48e152);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48e154:{NFSU2_TR(0x48e154);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e15a;}}
}
B48e156:L48e156:{c.instructions+=1;NFSU2_TR(0x48e156);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48e15a:L48e15a:{c.instructions+=2;NFSU2_TR(0x48e15a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48e15e:{NFSU2_TR(0x48e15e);
if(r1(R+518)){{goto L48e164;}}
}
B48e160:L48e160:{c.instructions+=2;NFSU2_TR(0x48e160);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48e162:{NFSU2_TR(0x48e162);
{goto L48e16c;}
}
B48e164:L48e164:{c.instructions+=3;NFSU2_TR(0x48e164);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48e167:{NFSU2_TR(0x48e167);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48e169:{NFSU2_TR(0x48e169);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e16c:L48e16c:{c.instructions+=4;NFSU2_TR(0x48e16c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e16f:{NFSU2_TR(0x48e16f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B48e173:{NFSU2_TR(0x48e173);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48e175:{NFSU2_TR(0x48e175);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e110u);}goto L48e110;}}
}
B48e177:L48e177:{c.instructions+=2;NFSU2_TR(0x48e177);
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
B48e179:{NFSU2_TR(0x48e179);
if(r1(R+518)){{goto L48e1a2;}}
}
B48e17b:L48e17b:{c.instructions+=9;NFSU2_TR(0x48e17b);
__builtin_memmove((R+0),gp(0x830aec),4);
}
B48e180:{NFSU2_TR(0x48e180);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48e182:{NFSU2_TR(0x48e182);
__builtin_memmove(gp(0x830aec),(R+24),4);
}
B48e188:{NFSU2_TR(0x48e188);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e18b:{NFSU2_TR(0x48e18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e18e:{NFSU2_TR(0x48e18e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e18f:{NFSU2_TR(0x48e18f);
w4(R+4,u32(0x883e70ull));
}
B48e194:{NFSU2_TR(0x48e194);
u8 U[4];
w4(U+0,u32(0x830ae8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B48e19a:{NFSU2_TR(0x48e19a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e19full));
TAIL_STATIC(0x5db680u,5db);
}
B48e19f:L48e19f:{c.instructions+=1;NFSU2_TR(0x48e19f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e1a2:L48e1a2:{c.instructions+=6;NFSU2_TR(0x48e1a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48e1a3:{NFSU2_TR(0x48e1a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48e1a4:{NFSU2_TR(0x48e1a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48e1a5:{NFSU2_TR(0x48e1a5);
w4(R+0,u32(0x1ull));
}
B48e1aa:{NFSU2_TR(0x48e1aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48e1ab:{NFSU2_TR(0x48e1ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e1ac:L48e1ac:{c.instructions+=2;NFSU2_TR(0x48e1ac);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80135000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48e1b2:{NFSU2_TR(0x48e1b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e260;}}
}
B48e1b8:L48e1b8:{c.instructions+=7;NFSU2_TR(0x48e1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e1bb:{NFSU2_TR(0x48e1bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48e1be:{NFSU2_TR(0x48e1be);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B48e1c2:{NFSU2_TR(0x48e1c2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48e1c4:{NFSU2_TR(0x48e1c4);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B48e1c6:{NFSU2_TR(0x48e1c6);
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
B48e1c8:{NFSU2_TR(0x48e1c8);
if(r1(R+518)){{goto L48e256;}}
}
B48e1ce:L48e1ce:{c.instructions+=1;NFSU2_TR(0x48e1ce);
__builtin_memmove((R+28),(R+28),4);
}
B48e1d0:L48e1d0:{c.instructions+=3;NFSU2_TR(0x48e1d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48e1d2:{NFSU2_TR(0x48e1d2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x135001ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B48e1d7:{NFSU2_TR(0x48e1d7);
if(r1(R+518)){{goto L48e203;}}
}
B48e1d9:L48e1d9:{c.instructions+=2;NFSU2_TR(0x48e1d9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B48e1da:{NFSU2_TR(0x48e1da);
if(r1(R+518)){{goto L48e1ea;}}
}
B48e1dc:L48e1dc:{c.instructions+=2;NFSU2_TR(0x48e1dc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B48e1dd:{NFSU2_TR(0x48e1dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e220;}}
}
B48e1df:L48e1df:{c.instructions+=4;NFSU2_TR(0x48e1df);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((R+8),(U+0),4);
}
B48e1e2:{NFSU2_TR(0x48e1e2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff0ull))));
}
B48e1e5:{NFSU2_TR(0x48e1e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e1e8:{NFSU2_TR(0x48e1e8);
{goto L48e220;}
}
B48e1ea:L48e1ea:{c.instructions+=7;NFSU2_TR(0x48e1ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48e1ed:{NFSU2_TR(0x48e1ed);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B48e1f0:{NFSU2_TR(0x48e1f0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48e1f2:{NFSU2_TR(0x48e1f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48e1f5:{NFSU2_TR(0x48e1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e1f8:{NFSU2_TR(0x48e1f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48e1fa:{NFSU2_TR(0x48e1fa);
if(r1(R+518)){{goto L48e220;}}
}
B48e1fc:L48e1fc:{c.instructions+=1;NFSU2_TR(0x48e1fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e201ull));
TAIL_STATIC(0x4022c0u,402);
}
B48e201:L48e201:{c.instructions+=1;NFSU2_TR(0x48e201);
{goto L48e220;}
}
B48e203:L48e203:{c.instructions+=7;NFSU2_TR(0x48e203);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48e206:{NFSU2_TR(0x48e206);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B48e209:{NFSU2_TR(0x48e209);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48e20c:{NFSU2_TR(0x48e20c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48e20e:{NFSU2_TR(0x48e20e);
__builtin_memmove((R+12),(R+518),1);
}
B48e211:{NFSU2_TR(0x48e211);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48e213:{NFSU2_TR(0x48e213);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e219;}}
}
B48e215:L48e215:{c.instructions+=1;NFSU2_TR(0x48e215);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48e219:L48e219:{c.instructions+=2;NFSU2_TR(0x48e219);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x4ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x4ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x4ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B48e21e:{NFSU2_TR(0x48e21e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e1a2u);}goto L48e1a2;}}
}
B48e220:L48e220:{c.instructions+=4;NFSU2_TR(0x48e220);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e223:{NFSU2_TR(0x48e223);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B48e227:{NFSU2_TR(0x48e227);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48e229:{NFSU2_TR(0x48e229);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e1d0u);}goto L48e1d0;}}
}
B48e22b:L48e22b:{c.instructions+=2;NFSU2_TR(0x48e22b);
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
B48e22d:{NFSU2_TR(0x48e22d);
if(r1(R+518)){{goto L48e256;}}
}
B48e22f:L48e22f:{c.instructions+=9;NFSU2_TR(0x48e22f);
__builtin_memmove((R+0),gp(0x830d18),4);
}
B48e234:{NFSU2_TR(0x48e234);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48e236:{NFSU2_TR(0x48e236);
__builtin_memmove(gp(0x830d18),(R+24),4);
}
B48e23c:{NFSU2_TR(0x48e23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e23f:{NFSU2_TR(0x48e23f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e240:{NFSU2_TR(0x48e240);
w4(R+4,u32(0x883e70ull));
}
B48e245:{NFSU2_TR(0x48e245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e248:{NFSU2_TR(0x48e248);
u8 U[4];
w4(U+0,u32(0x830d14ull));
s4(u32(r4(R+24)),r4(U+0));
}
B48e24e:{NFSU2_TR(0x48e24e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e253ull));
TAIL_STATIC(0x5db680u,5db);
}
B48e253:L48e253:{c.instructions+=1;NFSU2_TR(0x48e253);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e256:L48e256:{c.instructions+=6;NFSU2_TR(0x48e256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48e257:{NFSU2_TR(0x48e257);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48e258:{NFSU2_TR(0x48e258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48e259:{NFSU2_TR(0x48e259);
w4(R+0,u32(0x1ull));
}
B48e25e:{NFSU2_TR(0x48e25e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48e25f:{NFSU2_TR(0x48e25f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e260:L48e260:{c.instructions+=6;NFSU2_TR(0x48e260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48e261:{NFSU2_TR(0x48e261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48e262:{NFSU2_TR(0x48e262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48e263:{NFSU2_TR(0x48e263);
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
B48e265:{NFSU2_TR(0x48e265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48e266:{NFSU2_TR(0x48e266);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e270:L48e270:{c.instructions+=4;NFSU2_TR(0x48e270);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e274:{NFSU2_TR(0x48e274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48e276:{NFSU2_TR(0x48e276);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x135200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48e27c:{NFSU2_TR(0x48e27c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e2b0;}}
}
B48e27e:L48e27e:{c.instructions+=2;NFSU2_TR(0x48e27e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B48e282:{NFSU2_TR(0x48e282);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e36d;}}
}
B48e288:L48e288:{c.instructions+=6;NFSU2_TR(0x48e288);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e28b:{NFSU2_TR(0x48e28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e28e:{NFSU2_TR(0x48e28e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48e290:{NFSU2_TR(0x48e290);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e293:{NFSU2_TR(0x48e293);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2c420d64ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2c420d64ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2c420d64ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B48e29a:{NFSU2_TR(0x48e29a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e36d;}}
}
B48e2a0:L48e2a0:{c.instructions+=3;NFSU2_TR(0x48e2a0);
s4(0x7f399c,u32(0x830bd8ull));
}
B48e2aa:{NFSU2_TR(0x48e2aa);
w4(R+0,u32(0x1ull));
}
B48e2af:{NFSU2_TR(0x48e2af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e2b0:L48e2b0:{c.instructions+=2;NFSU2_TR(0x48e2b0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80135100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48e2b6:{NFSU2_TR(0x48e2b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e315;}}
}
B48e2b8:L48e2b8:{c.instructions+=5;NFSU2_TR(0x48e2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e2bb:{NFSU2_TR(0x48e2bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48e2be:{NFSU2_TR(0x48e2be);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B48e2c2:{NFSU2_TR(0x48e2c2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B48e2c4:{NFSU2_TR(0x48e2c4);
if(r1(R+518)){{goto L48e36d;}}
}
B48e2ca:L48e2ca:{c.instructions+=1;NFSU2_TR(0x48e2ca);
__builtin_memmove((R+12),(R+12),4);
}
B48e2d0:L48e2d0:{c.instructions+=2;NFSU2_TR(0x48e2d0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x135101ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B48e2d6:{NFSU2_TR(0x48e2d6);
if(r1(R+518)){{goto L48e2e9;}}
}
B48e2d8:L48e2d8:{c.instructions+=4;NFSU2_TR(0x48e2d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e2db:{NFSU2_TR(0x48e2db);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B48e2df:{NFSU2_TR(0x48e2df);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B48e2e1:{NFSU2_TR(0x48e2e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e2d0u);}goto L48e2d0;}}
}
B48e2e3:L48e2e3:{c.instructions+=2;NFSU2_TR(0x48e2e3);
w4(R+0,u32(0x1ull));
}
B48e2e8:{NFSU2_TR(0x48e2e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e2e9:L48e2e9:{c.instructions+=4;NFSU2_TR(0x48e2e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48e2ec:{NFSU2_TR(0x48e2ec);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B48e2ef:{NFSU2_TR(0x48e2ef);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B48e2f3:{NFSU2_TR(0x48e2f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e36d;}}
}
B48e2f5:L48e2f5:{c.instructions+=9;NFSU2_TR(0x48e2f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48e2f7:{NFSU2_TR(0x48e2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e2fa:{NFSU2_TR(0x48e2fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48e2fc:{NFSU2_TR(0x48e2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e2ff:{NFSU2_TR(0x48e2ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e302:{NFSU2_TR(0x48e302);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B48e309:{NFSU2_TR(0x48e309);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48e310:{NFSU2_TR(0x48e310);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e313:{NFSU2_TR(0x48e313);
{goto L48e362;}
}
B48e315:L48e315:{c.instructions+=2;NFSU2_TR(0x48e315);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80135000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48e31b:{NFSU2_TR(0x48e31b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e373;}}
}
B48e31d:L48e31d:{c.instructions+=5;NFSU2_TR(0x48e31d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e320:{NFSU2_TR(0x48e320);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48e323:{NFSU2_TR(0x48e323);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B48e327:{NFSU2_TR(0x48e327);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B48e329:{NFSU2_TR(0x48e329);
if(r1(R+518)){{goto L48e36d;}}
}
B48e32b:L48e32b:{c.instructions+=2;NFSU2_TR(0x48e32b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48e32d:{NFSU2_TR(0x48e32d);
__builtin_memmove((R+4),(R+4),4);
}
B48e330:L48e330:{c.instructions+=2;NFSU2_TR(0x48e330);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x135001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48e335:{NFSU2_TR(0x48e335);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e330u);}goto L48e330;}}
}
B48e337:L48e337:{c.instructions+=4;NFSU2_TR(0x48e337);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48e33a:{NFSU2_TR(0x48e33a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B48e33d:{NFSU2_TR(0x48e33d);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x4ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x4ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x4ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B48e342:{NFSU2_TR(0x48e342);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e36d;}}
}
B48e344:L48e344:{c.instructions+=8;NFSU2_TR(0x48e344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48e346:{NFSU2_TR(0x48e346);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e349:{NFSU2_TR(0x48e349);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48e34b:{NFSU2_TR(0x48e34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e34e:{NFSU2_TR(0x48e34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e351:{NFSU2_TR(0x48e351);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B48e358:{NFSU2_TR(0x48e358);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48e35f:{NFSU2_TR(0x48e35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e362:L48e362:{c.instructions+=3;NFSU2_TR(0x48e362);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e363:{NFSU2_TR(0x48e363);
w4(R+4,u32(0x883e70ull));
}
B48e368:{NFSU2_TR(0x48e368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e36dull));
TAIL_STATIC(0x5db6e0u,5db);
}
B48e36d:L48e36d:{c.instructions+=2;NFSU2_TR(0x48e36d);
w4(R+0,u32(0x1ull));
}
B48e372:{NFSU2_TR(0x48e372);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e373:L48e373:{c.instructions+=2;NFSU2_TR(0x48e373);
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
B48e375:{NFSU2_TR(0x48e375);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e380:L48e380:{c.instructions+=3;NFSU2_TR(0x48e380);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e384:{NFSU2_TR(0x48e384);
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
B48e386:{NFSU2_TR(0x48e386);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e389;}}
}
B48e388:L48e388:{c.instructions+=1;NFSU2_TR(0x48e388);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e389:L48e389:{c.instructions+=7;NFSU2_TR(0x48e389);
__builtin_memmove((R+4),gp(0x835854),4);
}
B48e38f:{NFSU2_TR(0x48e38f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48e391:{NFSU2_TR(0x48e391);
__builtin_memmove(gp(0x835854),(R+0),4);
}
B48e396:{NFSU2_TR(0x48e396);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e399:{NFSU2_TR(0x48e399);
u8 U[4];
w4(U+0,u32(0x835850ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48e39f:{NFSU2_TR(0x48e39f);
w4(R+0,u32(0x1ull));
}
B48e3a4:{NFSU2_TR(0x48e3a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e3b0:L48e3b0:{c.instructions+=3;NFSU2_TR(0x48e3b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e3b4:{NFSU2_TR(0x48e3b4);
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
B48e3b6:{NFSU2_TR(0x48e3b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e3bb;}}
}
B48e3b8:L48e3b8:{c.instructions+=2;NFSU2_TR(0x48e3b8);
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
B48e3ba:{NFSU2_TR(0x48e3ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e3bb:L48e3bb:{c.instructions+=6;NFSU2_TR(0x48e3bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48e3bd:{NFSU2_TR(0x48e3bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e3c0:{NFSU2_TR(0x48e3c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48e3c2:{NFSU2_TR(0x48e3c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e3c5:{NFSU2_TR(0x48e3c5);
w4(R+0,u32(0x1ull));
}
B48e3ca:{NFSU2_TR(0x48e3ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e3d0:L48e3d0:{c.instructions+=40;NFSU2_TR(0x48e3d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e3d1:{NFSU2_TR(0x48e3d1);
__builtin_memmove((R+20),(R+16),4);
}
B48e3d3:{NFSU2_TR(0x48e3d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B48e3d6:{NFSU2_TR(0x48e3d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf4ull))));
}
B48e3dc:{NFSU2_TR(0x48e3dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e3df:{NFSU2_TR(0x48e3df);
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
B48e3e1:{NFSU2_TR(0x48e3e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e3e2:{NFSU2_TR(0x48e3e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e3e3:{NFSU2_TR(0x48e3e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e3e4:{NFSU2_TR(0x48e3e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48e3e7:{NFSU2_TR(0x48e3e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B48e3e9:{NFSU2_TR(0x48e3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e3ec:{NFSU2_TR(0x48e3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e3f2:{NFSU2_TR(0x48e3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e3f8:{NFSU2_TR(0x48e3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e3fe:{NFSU2_TR(0x48e3fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e404:{NFSU2_TR(0x48e404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48e406:{NFSU2_TR(0x48e406);
__builtin_memmove((R+12),gp(0x830d14),4);
}
B48e40c:{NFSU2_TR(0x48e40c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e410:{NFSU2_TR(0x48e410);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e413:{NFSU2_TR(0x48e413);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e416:{NFSU2_TR(0x48e416);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e41a:{NFSU2_TR(0x48e41a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e41e:{NFSU2_TR(0x48e41e);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48e422:{NFSU2_TR(0x48e422);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48e429:{NFSU2_TR(0x48e429);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e430:{NFSU2_TR(0x48e430);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e437:{NFSU2_TR(0x48e437);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e43e:{NFSU2_TR(0x48e43e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e442:{NFSU2_TR(0x48e442);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e446:{NFSU2_TR(0x48e446);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e44a:{NFSU2_TR(0x48e44a);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B48e44e:{NFSU2_TR(0x48e44e);
w4(R+4,u32(0x830d14ull));
}
B48e453:{NFSU2_TR(0x48e453);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e45a:{NFSU2_TR(0x48e45a);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e461:{NFSU2_TR(0x48e461);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e468:{NFSU2_TR(0x48e468);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
w4(U+4,u32(0x7f7fffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B48e473:{NFSU2_TR(0x48e473);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48e47b:{NFSU2_TR(0x48e47b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e47f:{NFSU2_TR(0x48e47f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e484ull));
TAIL_STATIC(0x502fd0u,502);
}
B48e484:L48e484:{c.instructions+=3;NFSU2_TR(0x48e484);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48e486:{NFSU2_TR(0x48e486);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e48a:{NFSU2_TR(0x48e48a);
if(r1(R+518)){{goto L48e550;}}
}
B48e490:L48e490:{c.instructions+=1;NFSU2_TR(0x48e490);
{goto L48e4a0;}
}
B48e492:L48e492:{c.instructions+=2;NFSU2_TR(0x48e492);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48e496:{NFSU2_TR(0x48e496);
{goto L48e4a0;}
}
B48e4a0:L48e4a0:{c.instructions+=2;NFSU2_TR(0x48e4a0);
u8 U[22];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
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
B48e4a8:{NFSU2_TR(0x48e4a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L48e550;}}
}
B48e4ae:L48e4ae:{c.instructions+=2;NFSU2_TR(0x48e4ae);
u8 U[22];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
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
B48e4b5:{NFSU2_TR(0x48e4b5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L48e550;}}
}
B48e4bb:L48e4bb:{c.instructions+=8;NFSU2_TR(0x48e4bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e4bf:{NFSU2_TR(0x48e4bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e4c3:{NFSU2_TR(0x48e4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e4c6:{NFSU2_TR(0x48e4c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e4c7:{NFSU2_TR(0x48e4c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e4cb:{NFSU2_TR(0x48e4cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e4cc:{NFSU2_TR(0x48e4cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e4cd:{NFSU2_TR(0x48e4cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e4d2ull));
TAIL_STATIC(0x5747e0u,574);
}
B48e4d2:L48e4d2:{c.instructions+=2;NFSU2_TR(0x48e4d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48e4d4:{NFSU2_TR(0x48e4d4);
if(r1(R+518)){{goto L48e539;}}
}
B48e4d6:L48e4d6:{c.instructions+=7;NFSU2_TR(0x48e4d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B48e4da:{NFSU2_TR(0x48e4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e4dd:{NFSU2_TR(0x48e4dd);
w4(R+28,u32(0-u32(r4(R+28))));
}
B48e4df:{NFSU2_TR(0x48e4df);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48e4e1:{NFSU2_TR(0x48e4e1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48e4e3:{NFSU2_TR(0x48e4e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e4e7:{NFSU2_TR(0x48e4e7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48e536;}}
}
B48e4e9:L48e4e9:{c.instructions+=2;NFSU2_TR(0x48e4e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B48e4ec:{NFSU2_TR(0x48e4ec);
__builtin_memmove((R+16),(R+16),4);
}
B48e4f0:L48e4f0:{c.instructions+=2;NFSU2_TR(0x48e4f0);
u8 U[16];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xaull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B48e4f8:{NFSU2_TR(0x48e4f8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L48e532;}}
}
B48e4fa:L48e4fa:{c.instructions+=17;NFSU2_TR(0x48e4fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e4fe:{NFSU2_TR(0x48e4fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e502:{NFSU2_TR(0x48e502);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e506:{NFSU2_TR(0x48e506);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e507:{NFSU2_TR(0x48e507);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e508:{NFSU2_TR(0x48e508);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B48e50b:{NFSU2_TR(0x48e50b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e50c:{NFSU2_TR(0x48e50c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e510:{NFSU2_TR(0x48e510);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B48e513:{NFSU2_TR(0x48e513);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B48e516:{NFSU2_TR(0x48e516);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B48e518:{NFSU2_TR(0x48e518);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e51b:{NFSU2_TR(0x48e51b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e51c:{NFSU2_TR(0x48e51c);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48e520:{NFSU2_TR(0x48e520);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e521:{NFSU2_TR(0x48e521);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e522:{NFSU2_TR(0x48e522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e527ull));
TAIL_STATIC(0x4893a0u,489);
}
B48e527:L48e527:{c.instructions+=5;NFSU2_TR(0x48e527);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B48e52a:{NFSU2_TR(0x48e52a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B48e52b:{NFSU2_TR(0x48e52b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B48e52e:{NFSU2_TR(0x48e52e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48e530:{NFSU2_TR(0x48e530);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e4f0u);}goto L48e4f0;}}
}
B48e532:L48e532:{c.instructions+=1;NFSU2_TR(0x48e532);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48e536:L48e536:{c.instructions+=1;NFSU2_TR(0x48e536);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48e539:L48e539:{c.instructions+=5;NFSU2_TR(0x48e539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B48e53b:{NFSU2_TR(0x48e53b);
u8 U[22];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B48e53f:{NFSU2_TR(0x48e53f);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48e546:{NFSU2_TR(0x48e546);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e54a:{NFSU2_TR(0x48e54a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e492u);}goto L48e492;}}
}
B48e550:L48e550:{c.instructions+=4;NFSU2_TR(0x48e550);
__builtin_memmove((R+12),gp(0x835850),4);
}
B48e556:{NFSU2_TR(0x48e556);
w4(R+4,u32(0x835850ull));
}
B48e55b:{NFSU2_TR(0x48e55b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e55f:{NFSU2_TR(0x48e55f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e564ull));
TAIL_STATIC(0x502fd0u,502);
}
B48e564:L48e564:{c.instructions+=3;NFSU2_TR(0x48e564);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48e566:{NFSU2_TR(0x48e566);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e56a:{NFSU2_TR(0x48e56a);
if(r1(R+518)){{goto L48e5cd;}}
}
B48e56c:L48e56c:{c.instructions+=1;NFSU2_TR(0x48e56c);
{goto L48e572;}
}
B48e56e:L48e56e:{c.instructions+=1;NFSU2_TR(0x48e56e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48e572:L48e572:{c.instructions+=3;NFSU2_TR(0x48e572);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e575:{NFSU2_TR(0x48e575);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48e577:{NFSU2_TR(0x48e577);
if(r1(R+518)){{goto L48e5c1;}}
}
B48e579:L48e579:{c.instructions+=4;NFSU2_TR(0x48e579);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48e57c:{NFSU2_TR(0x48e57c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2cull))));
}
B48e57f:{NFSU2_TR(0x48e57f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48e581:{NFSU2_TR(0x48e581);
if(r1(R+518)){{goto L48e5b6;}}
}
B48e583:L48e583:{c.instructions+=2;NFSU2_TR(0x48e583);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48e585:{NFSU2_TR(0x48e585);
if(r1(R+518)){{goto L48e5b6;}}
}
B48e587:L48e587:{c.instructions+=2;NFSU2_TR(0x48e587);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48e589:{NFSU2_TR(0x48e589);
if(r1(R+518)){{goto L48e590;}}
}
B48e58b:L48e58b:{c.instructions+=2;NFSU2_TR(0x48e58b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48e58e:{NFSU2_TR(0x48e58e);
{goto L48e592;}
}
B48e590:L48e590:{c.instructions+=1;NFSU2_TR(0x48e590);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48e592:L48e592:{c.instructions+=11;NFSU2_TR(0x48e592);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e596:{NFSU2_TR(0x48e596);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e59a:{NFSU2_TR(0x48e59a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e59b:{NFSU2_TR(0x48e59b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e59f:{NFSU2_TR(0x48e59f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e5a0:{NFSU2_TR(0x48e5a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e5a1:{NFSU2_TR(0x48e5a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e5a2:{NFSU2_TR(0x48e5a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48e5a6:{NFSU2_TR(0x48e5a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e5a7:{NFSU2_TR(0x48e5a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e5a8:{NFSU2_TR(0x48e5a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e5adull));
TAIL_STATIC(0x4893a0u,489);
}
B48e5ad:L48e5ad:{c.instructions+=4;NFSU2_TR(0x48e5ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48e5af:{NFSU2_TR(0x48e5af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B48e5b2:{NFSU2_TR(0x48e5b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48e5b4:{NFSU2_TR(0x48e5b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e583u);}goto L48e583;}}
}
B48e5b6:L48e5b6:{c.instructions+=2;NFSU2_TR(0x48e5b6);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48e5bd:{NFSU2_TR(0x48e5bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48e5c1:L48e5c1:{c.instructions+=4;NFSU2_TR(0x48e5c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B48e5c3:{NFSU2_TR(0x48e5c3);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48e5c7:{NFSU2_TR(0x48e5c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e5cb:{NFSU2_TR(0x48e5cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e56eu);}goto L48e56e;}}
}
B48e5cd:L48e5cd:{c.instructions+=10;NFSU2_TR(0x48e5cd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e5d3:{NFSU2_TR(0x48e5d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e5da:{NFSU2_TR(0x48e5da);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48e5e1:{NFSU2_TR(0x48e5e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e5e5:{NFSU2_TR(0x48e5e5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e5e9:{NFSU2_TR(0x48e5e9);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e5f0:{NFSU2_TR(0x48e5f0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48e5f6:{NFSU2_TR(0x48e5f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48e5f8:{NFSU2_TR(0x48e5f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48e5fb:{NFSU2_TR(0x48e5fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48e616;}}
}
B48e5fd:L48e5fd:{c.instructions+=4;NFSU2_TR(0x48e5fd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e603:{NFSU2_TR(0x48e603);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48e60b:{NFSU2_TR(0x48e60b);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B48e612:{NFSU2_TR(0x48e612);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e616:L48e616:{c.instructions+=14;NFSU2_TR(0x48e616);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e61d:{NFSU2_TR(0x48e61d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e621:{NFSU2_TR(0x48e621);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e623:{NFSU2_TR(0x48e623);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48e627:{NFSU2_TR(0x48e627);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B48e629:{NFSU2_TR(0x48e629);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e62d:{NFSU2_TR(0x48e62d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e630:{NFSU2_TR(0x48e630);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e634:{NFSU2_TR(0x48e634);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e637:{NFSU2_TR(0x48e637);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48e63b:{NFSU2_TR(0x48e63b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e63f:{NFSU2_TR(0x48e63f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e642:{NFSU2_TR(0x48e642);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48e646:{NFSU2_TR(0x48e646);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L48e68b;}}
}
B48e648:L48e648:{c.instructions+=6;NFSU2_TR(0x48e648);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48e64c:{NFSU2_TR(0x48e64c);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B48e64e:{NFSU2_TR(0x48e64e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B48e64f:{NFSU2_TR(0x48e64f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B48e652:{NFSU2_TR(0x48e652);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48e656:{NFSU2_TR(0x48e656);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B48e657:L48e657:{c.instructions+=15;NFSU2_TR(0x48e657);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e65b:{NFSU2_TR(0x48e65b);
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B48e65e:{NFSU2_TR(0x48e65e);
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
B48e65f:{NFSU2_TR(0x48e65f);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e662:{NFSU2_TR(0x48e662);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B48e664:{NFSU2_TR(0x48e664);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e668:{NFSU2_TR(0x48e668);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e66b:{NFSU2_TR(0x48e66b);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B48e66d:{NFSU2_TR(0x48e66d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e671:{NFSU2_TR(0x48e671);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e674:{NFSU2_TR(0x48e674);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B48e676:{NFSU2_TR(0x48e676);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e67a:{NFSU2_TR(0x48e67a);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e67d:{NFSU2_TR(0x48e67d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e67f:{NFSU2_TR(0x48e67f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e657u);}goto L48e657;}}
}
B48e681:L48e681:{c.instructions+=3;NFSU2_TR(0x48e681);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e685:{NFSU2_TR(0x48e685);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e689:{NFSU2_TR(0x48e689);
{goto L48e68f;}
}
B48e68b:L48e68b:{c.instructions+=2;NFSU2_TR(0x48e68b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48e68d:{NFSU2_TR(0x48e68d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48e68f:L48e68f:{c.instructions+=14;NFSU2_TR(0x48e68f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e693:{NFSU2_TR(0x48e693);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48e695:{NFSU2_TR(0x48e695);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e699:{NFSU2_TR(0x48e699);
{u32 ea_=u32(r4(R+28)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e69f:{NFSU2_TR(0x48e69f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e6a5:{NFSU2_TR(0x48e6a5);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e6ac:{NFSU2_TR(0x48e6ac);
{u32 ea_=u32(r4(R+28)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e6b2:{NFSU2_TR(0x48e6b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e6b8:{NFSU2_TR(0x48e6b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48e6b9:{NFSU2_TR(0x48e6b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48e6ba:{NFSU2_TR(0x48e6ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48e6bb:{NFSU2_TR(0x48e6bb);
__builtin_memmove((R+16),(R+20),4);
}
B48e6bd:{NFSU2_TR(0x48e6bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48e6be:{NFSU2_TR(0x48e6be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48e6c0:L48e6c0:{c.instructions+=10;NFSU2_TR(0x48e6c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e6c1:{NFSU2_TR(0x48e6c1);
__builtin_memmove((R+20),(R+16),4);
}
B48e6c3:{NFSU2_TR(0x48e6c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B48e6c6:{NFSU2_TR(0x48e6c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x138ull))));
}
B48e6cc:{NFSU2_TR(0x48e6cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e6cd:{NFSU2_TR(0x48e6cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e6ce:{NFSU2_TR(0x48e6ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48e6d2:{NFSU2_TR(0x48e6d2);
w4(R+8,u32(0xaull));
}
B48e6d7:{NFSU2_TR(0x48e6d7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B48e6d9:{NFSU2_TR(0x48e6d9);
__builtin_memmove((R+16),(R+16),4);
}
B48e6e0:L48e6e0:{c.instructions+=7;NFSU2_TR(0x48e6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e6e3:{NFSU2_TR(0x48e6e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48e6e5:{NFSU2_TR(0x48e6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e6e8:{NFSU2_TR(0x48e6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e6eb:{NFSU2_TR(0x48e6eb);
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B48e6ee:{NFSU2_TR(0x48e6ee);
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
B48e6ef:{NFSU2_TR(0x48e6ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e6e0u);}goto L48e6e0;}}
}
B48e6f1:L48e6f1:{c.instructions+=5;NFSU2_TR(0x48e6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48e6f4:{NFSU2_TR(0x48e6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48e6f7:{NFSU2_TR(0x48e6f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e6f8:{NFSU2_TR(0x48e6f8);
__builtin_memmove((R+4),(R+28),4);
}
B48e6fa:{NFSU2_TR(0x48e6fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e6ffull));
TAIL_STATIC(0x48a3b0u,48a);
}
B48e6ff:L48e6ff:{c.instructions+=5;NFSU2_TR(0x48e6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e702:{NFSU2_TR(0x48e702);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e703:{NFSU2_TR(0x48e703);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48e70a:{NFSU2_TR(0x48e70a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48e70b:{NFSU2_TR(0x48e70b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48e710ull));
TAIL_STATIC(0x5bb190u,5bb);
}
B48e710:L48e710:{c.instructions+=226;NFSU2_TR(0x48e710);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e713:{NFSU2_TR(0x48e713);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e71a:{NFSU2_TR(0x48e71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e71d:{NFSU2_TR(0x48e71d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e723:{NFSU2_TR(0x48e723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e726:{NFSU2_TR(0x48e726);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e72a:{NFSU2_TR(0x48e72a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e72e:{NFSU2_TR(0x48e72e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e732:{NFSU2_TR(0x48e732);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e735:{NFSU2_TR(0x48e735);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e73c:{NFSU2_TR(0x48e73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e73f:{NFSU2_TR(0x48e73f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e743:{NFSU2_TR(0x48e743);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e746:{NFSU2_TR(0x48e746);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e74d:{NFSU2_TR(0x48e74d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e751:{NFSU2_TR(0x48e751);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e755:{NFSU2_TR(0x48e755);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e758:{NFSU2_TR(0x48e758);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e75c:{NFSU2_TR(0x48e75c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e75f:{NFSU2_TR(0x48e75f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e761:{NFSU2_TR(0x48e761);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e765:{NFSU2_TR(0x48e765);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e76c:{NFSU2_TR(0x48e76c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e76f:{NFSU2_TR(0x48e76f);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B48e771:{NFSU2_TR(0x48e771);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48e774:{NFSU2_TR(0x48e774);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e778:{NFSU2_TR(0x48e778);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e77c:{NFSU2_TR(0x48e77c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e77e:{NFSU2_TR(0x48e77e);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e782:{NFSU2_TR(0x48e782);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48e786:{NFSU2_TR(0x48e786);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e78d:{NFSU2_TR(0x48e78d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e793:{NFSU2_TR(0x48e793);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e797:{NFSU2_TR(0x48e797);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e79e:{NFSU2_TR(0x48e79e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e7a2:{NFSU2_TR(0x48e7a2);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e7a9:{NFSU2_TR(0x48e7a9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e7ad:{NFSU2_TR(0x48e7ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e7af:{NFSU2_TR(0x48e7af);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e7b6:{NFSU2_TR(0x48e7b6);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B48e7b8:{NFSU2_TR(0x48e7b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e7ba:{NFSU2_TR(0x48e7ba);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48e7be:{NFSU2_TR(0x48e7be);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e7c5:{NFSU2_TR(0x48e7c5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e7cb:{NFSU2_TR(0x48e7cb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e7cf:{NFSU2_TR(0x48e7cf);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e7d6:{NFSU2_TR(0x48e7d6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e7da:{NFSU2_TR(0x48e7da);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e7e1:{NFSU2_TR(0x48e7e1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e7e5:{NFSU2_TR(0x48e7e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e7e7:{NFSU2_TR(0x48e7e7);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e7ee:{NFSU2_TR(0x48e7ee);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B48e7f0:{NFSU2_TR(0x48e7f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e7f2:{NFSU2_TR(0x48e7f2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48e7f6:{NFSU2_TR(0x48e7f6);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e7fd:{NFSU2_TR(0x48e7fd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48e7ff:{NFSU2_TR(0x48e7ff);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e803:{NFSU2_TR(0x48e803);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B48e805:{NFSU2_TR(0x48e805);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e80c:{NFSU2_TR(0x48e80c);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e813:{NFSU2_TR(0x48e813);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e817:{NFSU2_TR(0x48e817);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e81e:{NFSU2_TR(0x48e81e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e822:{NFSU2_TR(0x48e822);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e824:{NFSU2_TR(0x48e824);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e82b:{NFSU2_TR(0x48e82b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e82f:{NFSU2_TR(0x48e82f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e831:{NFSU2_TR(0x48e831);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48e835:{NFSU2_TR(0x48e835);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e83c:{NFSU2_TR(0x48e83c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e840:{NFSU2_TR(0x48e840);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e847:{NFSU2_TR(0x48e847);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e84b:{NFSU2_TR(0x48e84b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e84f:{NFSU2_TR(0x48e84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e852:{NFSU2_TR(0x48e852);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e854:{NFSU2_TR(0x48e854);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e85b:{NFSU2_TR(0x48e85b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e85f:{NFSU2_TR(0x48e85f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e861:{NFSU2_TR(0x48e861);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48e865:{NFSU2_TR(0x48e865);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e86c:{NFSU2_TR(0x48e86c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e870:{NFSU2_TR(0x48e870);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e877:{NFSU2_TR(0x48e877);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e87b:{NFSU2_TR(0x48e87b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e87d:{NFSU2_TR(0x48e87d);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e884:{NFSU2_TR(0x48e884);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e888:{NFSU2_TR(0x48e888);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e88a:{NFSU2_TR(0x48e88a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48e88e:{NFSU2_TR(0x48e88e);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e895:{NFSU2_TR(0x48e895);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e89c:{NFSU2_TR(0x48e89c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48e89e:{NFSU2_TR(0x48e89e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e8a2:{NFSU2_TR(0x48e8a2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e8a6:{NFSU2_TR(0x48e8a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e8aa:{NFSU2_TR(0x48e8aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e8ae:{NFSU2_TR(0x48e8ae);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e8b2:{NFSU2_TR(0x48e8b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e8b5:{NFSU2_TR(0x48e8b5);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e8bc:{NFSU2_TR(0x48e8bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e8bf:{NFSU2_TR(0x48e8bf);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e8c3:{NFSU2_TR(0x48e8c3);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e8ca:{NFSU2_TR(0x48e8ca);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e8ce:{NFSU2_TR(0x48e8ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e8d0:{NFSU2_TR(0x48e8d0);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e8d7:{NFSU2_TR(0x48e8d7);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e8db:{NFSU2_TR(0x48e8db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e8dd:{NFSU2_TR(0x48e8dd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48e8e1:{NFSU2_TR(0x48e8e1);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e8e8:{NFSU2_TR(0x48e8e8);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e8ec:{NFSU2_TR(0x48e8ec);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e8f3:{NFSU2_TR(0x48e8f3);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e8f7:{NFSU2_TR(0x48e8f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e8f9:{NFSU2_TR(0x48e8f9);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e900:{NFSU2_TR(0x48e900);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e904:{NFSU2_TR(0x48e904);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e906:{NFSU2_TR(0x48e906);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48e90a:{NFSU2_TR(0x48e90a);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e911:{NFSU2_TR(0x48e911);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e915:{NFSU2_TR(0x48e915);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e91c:{NFSU2_TR(0x48e91c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e920:{NFSU2_TR(0x48e920);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e922:{NFSU2_TR(0x48e922);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48e929:{NFSU2_TR(0x48e929);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48e92d:{NFSU2_TR(0x48e92d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48e92f:{NFSU2_TR(0x48e92f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48e933:{NFSU2_TR(0x48e933);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e93a:{NFSU2_TR(0x48e93a);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e941:{NFSU2_TR(0x48e941);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48e943:{NFSU2_TR(0x48e943);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e947:{NFSU2_TR(0x48e947);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e94b:{NFSU2_TR(0x48e94b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e94f:{NFSU2_TR(0x48e94f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e953:{NFSU2_TR(0x48e953);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e957:{NFSU2_TR(0x48e957);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e95b:{NFSU2_TR(0x48e95b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e95e:{NFSU2_TR(0x48e95e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48e960:{NFSU2_TR(0x48e960);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e964:{NFSU2_TR(0x48e964);
{u32 ea_=u32(r4(R+28)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e967:{NFSU2_TR(0x48e967);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e96a:{NFSU2_TR(0x48e96a);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48e96d:{NFSU2_TR(0x48e96d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e970:{NFSU2_TR(0x48e970);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e973:{NFSU2_TR(0x48e973);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e979:{NFSU2_TR(0x48e979);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e97f:{NFSU2_TR(0x48e97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e985:{NFSU2_TR(0x48e985);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e989:{NFSU2_TR(0x48e989);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e98f:{NFSU2_TR(0x48e98f);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e993:{NFSU2_TR(0x48e993);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e999:{NFSU2_TR(0x48e999);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e99d:{NFSU2_TR(0x48e99d);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e9a1:{NFSU2_TR(0x48e9a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e9a5:{NFSU2_TR(0x48e9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e9ab:{NFSU2_TR(0x48e9ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e9b1:{NFSU2_TR(0x48e9b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e9b7:{NFSU2_TR(0x48e9b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e9bb:{NFSU2_TR(0x48e9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e9c1:{NFSU2_TR(0x48e9c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e9c5:{NFSU2_TR(0x48e9c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e9cb:{NFSU2_TR(0x48e9cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e9cf:{NFSU2_TR(0x48e9cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e9d5:{NFSU2_TR(0x48e9d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e9d9:{NFSU2_TR(0x48e9d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48e9df:{NFSU2_TR(0x48e9df);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e9e3:{NFSU2_TR(0x48e9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48e9e9:{NFSU2_TR(0x48e9e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e9ed:{NFSU2_TR(0x48e9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48e9f3:{NFSU2_TR(0x48e9f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48e9fa:{NFSU2_TR(0x48e9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ea00:{NFSU2_TR(0x48ea00);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ea07:{NFSU2_TR(0x48ea07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ea0d:{NFSU2_TR(0x48ea0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ea11:{NFSU2_TR(0x48ea11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ea17:{NFSU2_TR(0x48ea17);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ea1e:{NFSU2_TR(0x48ea1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ea24:{NFSU2_TR(0x48ea24);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ea2b:{NFSU2_TR(0x48ea2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ea31:{NFSU2_TR(0x48ea31);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ea38:{NFSU2_TR(0x48ea38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ea3e:{NFSU2_TR(0x48ea3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ea45:{NFSU2_TR(0x48ea45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ea4b:{NFSU2_TR(0x48ea4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ea52:{NFSU2_TR(0x48ea52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ea58:{NFSU2_TR(0x48ea58);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ea5f:{NFSU2_TR(0x48ea5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ea65:{NFSU2_TR(0x48ea65);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ea6c:{NFSU2_TR(0x48ea6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ea72:{NFSU2_TR(0x48ea72);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ea79:{NFSU2_TR(0x48ea79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ea7f:{NFSU2_TR(0x48ea7f);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ea86:{NFSU2_TR(0x48ea86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ea8c:{NFSU2_TR(0x48ea8c);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ea93:{NFSU2_TR(0x48ea93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ea99:{NFSU2_TR(0x48ea99);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eaa0:{NFSU2_TR(0x48eaa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48eaa6:{NFSU2_TR(0x48eaa6);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eaad:{NFSU2_TR(0x48eaad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48eab3:{NFSU2_TR(0x48eab3);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eaba:{NFSU2_TR(0x48eaba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48eac0:{NFSU2_TR(0x48eac0);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eac7:{NFSU2_TR(0x48eac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48eacd:{NFSU2_TR(0x48eacd);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ead4:{NFSU2_TR(0x48ead4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48eada:{NFSU2_TR(0x48eada);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eae1:{NFSU2_TR(0x48eae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48eae7:{NFSU2_TR(0x48eae7);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eaee:{NFSU2_TR(0x48eaee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48eaf4:{NFSU2_TR(0x48eaf4);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eafb:{NFSU2_TR(0x48eafb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48eb01:{NFSU2_TR(0x48eb01);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eb08:{NFSU2_TR(0x48eb08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48eb0e:{NFSU2_TR(0x48eb0e);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eb15:{NFSU2_TR(0x48eb15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48eb1b:{NFSU2_TR(0x48eb1b);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eb22:{NFSU2_TR(0x48eb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48eb28:{NFSU2_TR(0x48eb28);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eb2f:{NFSU2_TR(0x48eb2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48eb35:{NFSU2_TR(0x48eb35);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eb3c:{NFSU2_TR(0x48eb3c);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eb43:{NFSU2_TR(0x48eb43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48eb49:{NFSU2_TR(0x48eb49);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48eb50:{NFSU2_TR(0x48eb50);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eb57:{NFSU2_TR(0x48eb57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48eb58:{NFSU2_TR(0x48eb58);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48eb5c:{NFSU2_TR(0x48eb5c);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eb63:{NFSU2_TR(0x48eb63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48eb68ull));
TAIL_STATIC(0x489ba0u,489);
}
B48eb68:L48eb68:{c.instructions+=85;NFSU2_TR(0x48eb68);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48eb6c:{NFSU2_TR(0x48eb6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48eb70:{NFSU2_TR(0x48eb70);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48eb74:{NFSU2_TR(0x48eb74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eb7a:{NFSU2_TR(0x48eb7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48eb7e:{NFSU2_TR(0x48eb7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eb84:{NFSU2_TR(0x48eb84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eb8a:{NFSU2_TR(0x48eb8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48eb8e:{NFSU2_TR(0x48eb8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48eb92:{NFSU2_TR(0x48eb92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eb98:{NFSU2_TR(0x48eb98);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48eb9c:{NFSU2_TR(0x48eb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eba2:{NFSU2_TR(0x48eba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48eba6:{NFSU2_TR(0x48eba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ebac:{NFSU2_TR(0x48ebac);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ebb0:{NFSU2_TR(0x48ebb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ebb6:{NFSU2_TR(0x48ebb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ebba:{NFSU2_TR(0x48ebba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ebc0:{NFSU2_TR(0x48ebc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ebc4:{NFSU2_TR(0x48ebc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ebca:{NFSU2_TR(0x48ebca);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ebce:{NFSU2_TR(0x48ebce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ebd4:{NFSU2_TR(0x48ebd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ebdb:{NFSU2_TR(0x48ebdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ebe1:{NFSU2_TR(0x48ebe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ebe8:{NFSU2_TR(0x48ebe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ebee:{NFSU2_TR(0x48ebee);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ebf5:{NFSU2_TR(0x48ebf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ebfb:{NFSU2_TR(0x48ebfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ec02:{NFSU2_TR(0x48ec02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ec08:{NFSU2_TR(0x48ec08);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ec0f:{NFSU2_TR(0x48ec0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ec15:{NFSU2_TR(0x48ec15);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ec1c:{NFSU2_TR(0x48ec1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ec22:{NFSU2_TR(0x48ec22);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ec29:{NFSU2_TR(0x48ec29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ec2f:{NFSU2_TR(0x48ec2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ec36:{NFSU2_TR(0x48ec36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ec3c:{NFSU2_TR(0x48ec3c);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ec43:{NFSU2_TR(0x48ec43);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ec49:{NFSU2_TR(0x48ec49);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ec50:{NFSU2_TR(0x48ec50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ec56:{NFSU2_TR(0x48ec56);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ec5d:{NFSU2_TR(0x48ec5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ec63:{NFSU2_TR(0x48ec63);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ec6a:{NFSU2_TR(0x48ec6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ec70:{NFSU2_TR(0x48ec70);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ec77:{NFSU2_TR(0x48ec77);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ec7d:{NFSU2_TR(0x48ec7d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ec84:{NFSU2_TR(0x48ec84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ec8a:{NFSU2_TR(0x48ec8a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ec91:{NFSU2_TR(0x48ec91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ec97:{NFSU2_TR(0x48ec97);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ec9e:{NFSU2_TR(0x48ec9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eca4:{NFSU2_TR(0x48eca4);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ecab:{NFSU2_TR(0x48ecab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ecb1:{NFSU2_TR(0x48ecb1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ecb8:{NFSU2_TR(0x48ecb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ecbe:{NFSU2_TR(0x48ecbe);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ecc5:{NFSU2_TR(0x48ecc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eccb:{NFSU2_TR(0x48eccb);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ecd2:{NFSU2_TR(0x48ecd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ecd8:{NFSU2_TR(0x48ecd8);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ecdf:{NFSU2_TR(0x48ecdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ece5:{NFSU2_TR(0x48ece5);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ecec:{NFSU2_TR(0x48ecec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ecf2:{NFSU2_TR(0x48ecf2);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ecf9:{NFSU2_TR(0x48ecf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ecff:{NFSU2_TR(0x48ecff);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ed06:{NFSU2_TR(0x48ed06);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ed0c:{NFSU2_TR(0x48ed0c);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ed13:{NFSU2_TR(0x48ed13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ed19:{NFSU2_TR(0x48ed19);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ed20:{NFSU2_TR(0x48ed20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ed26:{NFSU2_TR(0x48ed26);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ed2d:{NFSU2_TR(0x48ed2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ed33:{NFSU2_TR(0x48ed33);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ed3a:{NFSU2_TR(0x48ed3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ed40:{NFSU2_TR(0x48ed40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ed46:{NFSU2_TR(0x48ed46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ed4c:{NFSU2_TR(0x48ed4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48ed4d:{NFSU2_TR(0x48ed4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48ed4e:{NFSU2_TR(0x48ed4e);
__builtin_memmove((R+16),(R+20),4);
}
B48ed50:{NFSU2_TR(0x48ed50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48ed51:{NFSU2_TR(0x48ed51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ed60:L48ed60:{c.instructions+=10;NFSU2_TR(0x48ed60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ed61:{NFSU2_TR(0x48ed61);
__builtin_memmove((R+20),(R+16),4);
}
B48ed63:{NFSU2_TR(0x48ed63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B48ed66:{NFSU2_TR(0x48ed66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x534ull))));
}
B48ed6c:{NFSU2_TR(0x48ed6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ed6f:{NFSU2_TR(0x48ed6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48ed71:{NFSU2_TR(0x48ed71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ed72:{NFSU2_TR(0x48ed72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ed73:{NFSU2_TR(0x48ed73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ed74:{NFSU2_TR(0x48ed74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ed80;}}
}
B48ed76:L48ed76:{c.instructions+=7;NFSU2_TR(0x48ed76);
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
B48ed79:{NFSU2_TR(0x48ed79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48ed7a:{NFSU2_TR(0x48ed7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48ed7b:{NFSU2_TR(0x48ed7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48ed7c:{NFSU2_TR(0x48ed7c);
__builtin_memmove((R+16),(R+20),4);
}
B48ed7e:{NFSU2_TR(0x48ed7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48ed7f:{NFSU2_TR(0x48ed7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ed80:L48ed80:{c.instructions+=4;NFSU2_TR(0x48ed80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ed83:{NFSU2_TR(0x48ed83);
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
B48ed85:{NFSU2_TR(0x48ed85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ed88:{NFSU2_TR(0x48ed88);
if(r1(R+518)){{goto L48ed93;}}
}
B48ed8a:L48ed8a:{c.instructions+=3;NFSU2_TR(0x48ed8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ed8d:{NFSU2_TR(0x48ed8d);
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
B48ed8f:{NFSU2_TR(0x48ed8f);
if(r1(R+518)){{goto L48ed93;}}
}
B48ed91:L48ed91:{c.instructions+=1;NFSU2_TR(0x48ed91);
__builtin_memmove((R+0),(R+4),4);
}
B48ed93:L48ed93:{c.instructions+=4;NFSU2_TR(0x48ed93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ed94:{NFSU2_TR(0x48ed94);
u8 U[4];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48ed9b:{NFSU2_TR(0x48ed9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ed9c:{NFSU2_TR(0x48ed9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48eda1ull));
TAIL_STATIC(0x5bb190u,5bb);
}
B48eda1:L48eda1:{c.instructions+=4;NFSU2_TR(0x48eda1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48eda4:{NFSU2_TR(0x48eda4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48eda6:{NFSU2_TR(0x48eda6);
w4(R+4,u32(0x4cull));
}
B48edab:{NFSU2_TR(0x48edab);
u8 U[4];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B48edb2:L48edb2:{c.instructions+=1;NFSU2_TR(0x48edb2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L48edb4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48edb2u);}goto L48edb2;}
}
B48edb4:L48edb4:{c.instructions+=2;NFSU2_TR(0x48edb4);
w4(R+4,u32(0x4cull));
}
B48edb9:{NFSU2_TR(0x48edb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2e8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B48edc0:L48edc0:{c.instructions+=1;NFSU2_TR(0x48edc0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L48edc2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48edc0u);}goto L48edc0;}
}
B48edc2:L48edc2:{c.instructions+=3;NFSU2_TR(0x48edc2);
w4(R+4,u32(0x4cull));
}
B48edc7:{NFSU2_TR(0x48edc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1b8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B48edce:{NFSU2_TR(0x48edce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48edd1:L48edd1:{c.instructions+=1;NFSU2_TR(0x48edd1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L48edd3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48edd1u);}goto L48edd1;}
}
B48edd3:L48edd3:{c.instructions+=3;NFSU2_TR(0x48edd3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B48edd6:{NFSU2_TR(0x48edd6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B48edd8:{NFSU2_TR(0x48edd8);
{goto L48ede0;}
}
B48ede0:L48ede0:{c.instructions+=11;NFSU2_TR(0x48ede0);
{u32 ea_=u32(u32(7884428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ede6:{NFSU2_TR(0x48ede6);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48edeb:{NFSU2_TR(0x48edeb);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48edee:{NFSU2_TR(0x48edee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B48edf1:{NFSU2_TR(0x48edf1);
u8 U[12];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B48edf8:{NFSU2_TR(0x48edf8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48edfc:{NFSU2_TR(0x48edfc);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48edfe:{NFSU2_TR(0x48edfe);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48ee04:{NFSU2_TR(0x48ee04);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ee07:{NFSU2_TR(0x48ee07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ee08:{NFSU2_TR(0x48ee08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ee0dull));
TAIL_STATIC(0x48a310u,48a);
}
B48ee0d:L48ee0d:{c.instructions+=4;NFSU2_TR(0x48ee0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ee10:{NFSU2_TR(0x48ee10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B48ee13:{NFSU2_TR(0x48ee13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48ee15:{NFSU2_TR(0x48ee15);
if(r1(R+518)){{goto L48eef3;}}
}
B48ee1b:L48ee1b:{c.instructions+=50;NFSU2_TR(0x48ee1b);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ee1d:{NFSU2_TR(0x48ee1d);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(1044u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ee24:{NFSU2_TR(0x48ee24);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B48ee26:{NFSU2_TR(0x48ee26);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ee2a:{NFSU2_TR(0x48ee2a);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(1048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ee31:{NFSU2_TR(0x48ee31);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B48ee33:{NFSU2_TR(0x48ee33);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ee37:{NFSU2_TR(0x48ee37);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ee3e:{NFSU2_TR(0x48ee3e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48ee40:{NFSU2_TR(0x48ee40);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ee47:{NFSU2_TR(0x48ee47);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ee4b:{NFSU2_TR(0x48ee4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48ee4d:{NFSU2_TR(0x48ee4d);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ee54:{NFSU2_TR(0x48ee54);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ee58:{NFSU2_TR(0x48ee58);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48ee5a:{NFSU2_TR(0x48ee5a);
{u32 ea_=u32(r4(R+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ee61:{NFSU2_TR(0x48ee61);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ee67:{NFSU2_TR(0x48ee67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48ee69:{NFSU2_TR(0x48ee69);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ee70:{NFSU2_TR(0x48ee70);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B48ee72:{NFSU2_TR(0x48ee72);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ee79:{NFSU2_TR(0x48ee79);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ee7d:{NFSU2_TR(0x48ee7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48ee7f:{NFSU2_TR(0x48ee7f);
{u32 ea_=u32(r4(R+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ee86:{NFSU2_TR(0x48ee86);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ee8a:{NFSU2_TR(0x48ee8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48ee8c:{NFSU2_TR(0x48ee8c);
{u32 ea_=u32(r4(R+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ee93:{NFSU2_TR(0x48ee93);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ee99:{NFSU2_TR(0x48ee99);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48ee9b:{NFSU2_TR(0x48ee9b);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48eea2:{NFSU2_TR(0x48eea2);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B48eea4:{NFSU2_TR(0x48eea4);
{u32 ea_=u32(r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48eeab:{NFSU2_TR(0x48eeab);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48eeaf:{NFSU2_TR(0x48eeaf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48eeb1:{NFSU2_TR(0x48eeb1);
{u32 ea_=u32(r4(R+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48eeb8:{NFSU2_TR(0x48eeb8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48eebc:{NFSU2_TR(0x48eebc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48eebe:{NFSU2_TR(0x48eebe);
{u32 ea_=u32(r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48eec5:{NFSU2_TR(0x48eec5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48eecb:{NFSU2_TR(0x48eecb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48eecd:{NFSU2_TR(0x48eecd);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48eed1:{NFSU2_TR(0x48eed1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48eed3:{NFSU2_TR(0x48eed3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48eed7:{NFSU2_TR(0x48eed7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48eedb:{NFSU2_TR(0x48eedb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B48eedd:{NFSU2_TR(0x48eedd);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B48eedf:{NFSU2_TR(0x48eedf);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48eee3:{NFSU2_TR(0x48eee3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48eee5:{NFSU2_TR(0x48eee5);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(1044u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48eeec:{NFSU2_TR(0x48eeec);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(1048u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48eef3:L48eef3:{c.instructions+=17;NFSU2_TR(0x48eef3);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48eef6:{NFSU2_TR(0x48eef6);
u8 U[16];
w4(U+0,u32(u32(u32(0x1bcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B48ef01:{NFSU2_TR(0x48ef01);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48ef03:{NFSU2_TR(0x48ef03);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B48ef06:{NFSU2_TR(0x48ef06);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ef09:{NFSU2_TR(0x48ef09);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B48ef0c:{NFSU2_TR(0x48ef0c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x30ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48ef0f:{NFSU2_TR(0x48ef0f);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ef15:{NFSU2_TR(0x48ef15);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ef1c:{NFSU2_TR(0x48ef1c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48ef1e:{NFSU2_TR(0x48ef1e);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ef21:{NFSU2_TR(0x48ef21);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ef27:{NFSU2_TR(0x48ef27);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ef2e:{NFSU2_TR(0x48ef2e);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ef31:{NFSU2_TR(0x48ef31);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ef37:{NFSU2_TR(0x48ef37);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ef3e:{NFSU2_TR(0x48ef3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48ede0u);}goto L48ede0;}}
}
B48ef44:L48ef44:{c.instructions+=5;NFSU2_TR(0x48ef44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48ef47:{NFSU2_TR(0x48ef47);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48ef4b:{NFSU2_TR(0x48ef4b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ef4c:{NFSU2_TR(0x48ef4c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ef4d:{NFSU2_TR(0x48ef4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ef52ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48e3d0u);}goto L48e3d0;}
}
B48ef52:L48ef52:{c.instructions+=6;NFSU2_TR(0x48ef52);
__builtin_memmove((R+28),(R+0),4);
}
B48ef54:{NFSU2_TR(0x48ef54);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48ef57:{NFSU2_TR(0x48ef57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48ef5a:{NFSU2_TR(0x48ef5a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48ef5d:{NFSU2_TR(0x48ef5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ef61:{NFSU2_TR(0x48ef61);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48ef6f;}}
}
B48ef63:L48ef63:{c.instructions+=2;NFSU2_TR(0x48ef63);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B48ef6b:{NFSU2_TR(0x48ef6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48ef6f:L48ef6f:{c.instructions+=10;NFSU2_TR(0x48ef6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48ef71:{NFSU2_TR(0x48ef71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ef74:{NFSU2_TR(0x48ef74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ef77:{NFSU2_TR(0x48ef77);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48ef79:{NFSU2_TR(0x48ef79);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B48ef7b:{NFSU2_TR(0x48ef7b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48ef7d:{NFSU2_TR(0x48ef7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ef81:{NFSU2_TR(0x48ef81);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ef85:{NFSU2_TR(0x48ef85);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ef89:{NFSU2_TR(0x48ef89);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x48f14au,48f);}
}
B48ef8f:L48ef8f:{c.instructions+=18;NFSU2_TR(0x48ef8f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B48ef91:{NFSU2_TR(0x48ef91);
u8 U[16];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B48ef95:{NFSU2_TR(0x48ef95);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ef98:{NFSU2_TR(0x48ef98);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ef9c:{NFSU2_TR(0x48ef9c);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(1088u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48efa3:{NFSU2_TR(0x48efa3);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48efa6:{NFSU2_TR(0x48efa6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48efaa:{NFSU2_TR(0x48efaa);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(1092u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48efb1:{NFSU2_TR(0x48efb1);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48efb4:{NFSU2_TR(0x48efb4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48efb8:{NFSU2_TR(0x48efb8);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(1096u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48efbf:{NFSU2_TR(0x48efbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48efc2:{NFSU2_TR(0x48efc2);
__builtin_memmove((R+4),(R+0),4);
}
B48efc4:{NFSU2_TR(0x48efc4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B48efca:{NFSU2_TR(0x48efca);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48efcc:{NFSU2_TR(0x48efcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48efd0:{NFSU2_TR(0x48efd0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48efd4:{NFSU2_TR(0x48efd4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L48efdc;}}
}
B48efd6:L48efd6:{c.instructions+=1;NFSU2_TR(0x48efd6);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48efdc:L48efdc:{c.instructions+=8;NFSU2_TR(0x48efdc);
__builtin_memmove((R+8),(R+0),4);
}
B48efde:{NFSU2_TR(0x48efde);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48efe2:{NFSU2_TR(0x48efe2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B48efe5:{NFSU2_TR(0x48efe5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B48efeb:{NFSU2_TR(0x48efeb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48efed:{NFSU2_TR(0x48efed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48eff1:{NFSU2_TR(0x48eff1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48eff5:{NFSU2_TR(0x48eff5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L48effd;}}
}
B48eff7:L48eff7:{c.instructions+=1;NFSU2_TR(0x48eff7);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48effd:L48effd:{c.instructions+=1;NFSU2_TR(0x48effd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
TAIL_STATIC(0x48f000u,48f);
}
XIT:NFSU2_TR_EXIT(0x48e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
